// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146770fbd FUN_146770fbd body=47 status=ok
// SIG undefined FUN_146770fbd(void)

longlong FUN_146770fbd(void)

{
  if (DAT_14cc317f0 == 0) {
    FUN_14086a14e(&DAT_14cc317f0,&PTR_FUN_14bef3f50);
  }
  return DAT_14cc317f0;
}



// FUNCTION 146770fec FUN_146770fec body=48 status=ok
// SIG undefined FUN_146770fec(void)

void FUN_146770fec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000168;
  *puVar1 = &PTR_FUN_14bef4830;
  return;
}



// FUNCTION 14677101c FUN_14677101c body=55 status=ok
// SIG undefined FUN_14677101c(void)

void FUN_14677101c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc31810 == 0) {
    uVar1 = FUN_14596ef71();
    DAT_14cc31810 = FUN_140002ddd(FUN_146771053,uVar1,L"MovieSceneMediaSectionTemplate");
  }
  return;
}



// FUNCTION 146771053 FUN_146771053 body=47 status=ok
// SIG undefined FUN_146771053(void)

longlong FUN_146771053(void)

{
  if (DAT_14cc31808 == 0) {
    FUN_14086a14e(&DAT_14cc31808,&PTR_FUN_14bef4090);
  }
  return DAT_14cc31808;
}



// FUNCTION 146771082 FUN_146771082 body=48 status=ok
// SIG undefined FUN_146771082(void)

void FUN_146771082(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14bef4990;
  return;
}



// FUNCTION 1467710b2 FUN_1467710b2 body=84 status=ok
// SIG undefined FUN_1467710b2(void)

void FUN_1467710b2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bef42b0;
  puVar1[0x1f] = &PTR_LAB_14bef4620;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(uint *)(puVar1 + 0xb) = *(uint *)(puVar1 + 0xb) & 0xfffffff0 | 0xc;
  FUN_140ff5708(puVar1 + 0xd,1);
  return;
}



// FUNCTION 146771106 FUN_146771106 body=47 status=ok
// SIG undefined FUN_146771106(void)

longlong FUN_146771106(void)

{
  if (DAT_14cc31828 == 0) {
    FUN_14073dd9a(&DAT_14cc31828,&PTR_LAB_14bef4268);
  }
  return DAT_14cc31828;
}



// FUNCTION 146771136 FUN_146771136 body=40 status=ok
// SIG undefined FUN_146771136(void)

undefined8 FUN_146771136(undefined8 param_1,int param_2)

{
  FUN_1404db908();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14677115e FUN_14677115e body=40 status=ok
// SIG undefined FUN_14677115e(void)

undefined8 FUN_14677115e(undefined8 param_1,int param_2)

{
  FUN_140885ffc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146771186 FUN_146771186 body=65 status=ok
// SIG undefined FUN_146771186(void)

undefined8 * FUN_146771186(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bef37c0;
  FUN_140bb7e7c(param_1 + 0x28);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467711c8 FUN_1467711c8 body=86 status=ok
// SIG undefined FUN_1467711c8(void)

undefined8 * FUN_1467711c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bef42b0;
  param_1[0x1f] = &PTR_LAB_14bef4620;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14677121e FUN_14677121e body=29 status=ok
// SIG undefined FUN_14677121e(void)

undefined8 FUN_14677121e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14677123c FUN_14677123c body=29 status=ok
// SIG undefined FUN_14677123c(void)

undefined8 FUN_14677123c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14677125a FUN_14677125a body=29 status=ok
// SIG undefined FUN_14677125a(void)

undefined8 FUN_14677125a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146771278 FUN_146771278 body=43 status=ok
// SIG undefined FUN_146771278(void)

void FUN_146771278(longlong *param_1)

{
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1467712a4 FUN_1467712a4 body=136 status=ok
// SIG undefined FUN_1467712a4(void)

code * FUN_1467712a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointClampedSamplerY";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cfd452;
}



// FUNCTION 14677132c FUN_14677132c body=60 status=ok
// SIG undefined FUN_14677132c(void)

void FUN_14677132c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bef8b10;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146771368 FUN_146771368 body=121 status=ok
// SIG undefined FUN_146771368(void)

void FUN_146771368(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1446ddc76(&local_20,"Media",1);
    plVar1 = (longlong *)FUN_1447c1074(local_20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1 + -8);
    }
    MFShutdown();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467713e2 FUN_1467713e2 body=47 status=ok
// SIG undefined FUN_1467713e2(void)

longlong FUN_1467713e2(void)

{
  if (DAT_14cc32220 == 0) {
    FUN_140f50038(&DAT_14cc32220,&PTR_s__Script_WmfMediaFactory_14bef9590);
  }
  return DAT_14cc32220;
}



// FUNCTION 146771412 FUN_146771412 body=192 status=ok
// SIG undefined FUN_146771412(void)

void FUN_146771412(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bef9ae0;
  puVar1[3] = &DAT_14cc32230;
  puVar1[4] = FUN_145bd85f0;
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



// FUNCTION 1467714d3 FUN_1467714d3 body=43 status=ok
// SIG undefined FUN_1467714d3(void)

void FUN_1467714d3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bef9810;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  return;
}



// FUNCTION 1467714fe FUN_1467714fe body=47 status=ok
// SIG undefined FUN_1467714fe(void)

longlong FUN_1467714fe(void)

{
  if (DAT_14cc32240 == 0) {
    FUN_14073dd9a(&DAT_14cc32240,&PTR_LAB_14bef97c8);
  }
  return DAT_14cc32240;
}



// FUNCTION 14677152e FUN_14677152e body=40 status=ok
// SIG undefined FUN_14677152e(void)

undefined8 FUN_14677152e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146771556 FUN_146771556 body=93 status=ok
// SIG undefined FUN_146771556(void)

void FUN_146771556(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef9ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467715b4 FUN_1467715b4 body=112 status=ok
// SIG undefined FUN_1467715b4(void)

void FUN_1467715b4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"Media",1);
  plVar1 = (longlong *)FUN_1447c1074(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_1 + -8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146771625 FUN_146771625 body=47 status=ok
// SIG undefined FUN_146771625(void)

longlong FUN_146771625(void)

{
  if (DAT_14cc32268 == 0) {
    FUN_140f50038(&DAT_14cc32268,&PTR_s__Script_TcpMessaging_14bef9d8e_2_14bef9d70);
  }
  return DAT_14cc32268;
}



// FUNCTION 146771654 FUN_146771654 body=50 status=ok
// SIG undefined FUN_146771654(void)

void FUN_146771654(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14befa0c0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  return;
}



// FUNCTION 146771686 FUN_146771686 body=47 status=ok
// SIG undefined FUN_146771686(void)

longlong FUN_146771686(void)

{
  if (DAT_14cc32280 == 0) {
    FUN_14073dd9a(&DAT_14cc32280,&PTR_LAB_14befa078);
  }
  return DAT_14cc32280;
}



// FUNCTION 1467716b6 FUN_1467716b6 body=231 status=ok
// SIG undefined FUN_1467716b6(void)

void FUN_1467716b6(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14befa950;
  local_28[3] = &DAT_14cc32290;
  local_28[4] = FUN_145c814ee;
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



// FUNCTION 14677179e FUN_14677179e body=93 status=ok
// SIG undefined FUN_14677179e(void)

void FUN_14677179e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befa950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467717fb FUN_1467717fb body=47 status=ok
// SIG undefined FUN_1467717fb(void)

longlong FUN_1467717fb(void)

{
  if (DAT_14cc322b0 == 0) {
    FUN_1409ce572(&DAT_14cc322b0,&PTR_FUN_14befb130);
  }
  return DAT_14cc322b0;
}



// FUNCTION 14677182a FUN_14677182a body=47 status=ok
// SIG undefined FUN_14677182a(void)

longlong FUN_14677182a(void)

{
  if (DAT_14cc322d0 == 0) {
    FUN_14073dd9a(&DAT_14cc322d0,&PTR_LAB_14befb8b8);
  }
  return DAT_14cc322d0;
}



// FUNCTION 146771859 FUN_146771859 body=47 status=ok
// SIG undefined FUN_146771859(void)

longlong FUN_146771859(void)

{
  if (DAT_14cc322e0 == 0) {
    FUN_14086a14e(&DAT_14cc322e0,&PTR_FUN_14befbca0);
  }
  return DAT_14cc322e0;
}



// FUNCTION 146771888 FUN_146771888 body=48 status=ok
// SIG undefined FUN_146771888(void)

void FUN_146771888(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14befce80;
  return;
}



// FUNCTION 1467718b8 FUN_1467718b8 body=314 status=ok
// SIG undefined FUN_1467718b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467718b8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32468);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc32468,4000);
  DAT_14cc324b0 = 0;
  DAT_14cc324b8 = 0;
  DAT_14cc32490 = 0;
  _DAT_14cc32498 = 0;
  _DAT_14cc324bc = 0xffffffff00000080;
  DAT_14cc324c4 = 0;
  DAT_14cc324d0 = 0;
  DAT_14cc324d8 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = &PTR_LAB_149e020b0;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14befd330;
  local_28[3] = &DAT_14cc32468;
  local_28[4] = FUN_1498fa0f4;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14cc324e0,L"MessageBus.UDP.ClearDenyList",L"Clear the UDP socket deny list.",
                &local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467719f4 FUN_1467719f4 body=231 status=ok
// SIG undefined FUN_1467719f4(void)

void FUN_1467719f4(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14befdbd0;
  local_28[3] = &DAT_14cc324f8;
  local_28[4] = FUN_145caf280;
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



// FUNCTION 146771adc FUN_146771adc body=29 status=ok
// SIG undefined FUN_146771adc(void)

undefined8 FUN_146771adc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146771afa FUN_146771afa body=93 status=ok
// SIG undefined FUN_146771afa(void)

void FUN_146771afa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befd330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146771b58 FUN_146771b58 body=93 status=ok
// SIG undefined FUN_146771b58(void)

void FUN_146771b58(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befdbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146771bba FUN_146771bba body=47 status=ok
// SIG undefined FUN_146771bba(void)

longlong FUN_146771bba(void)

{
  if (DAT_14cc325b0 == 0) {
    FUN_14086a14e(&DAT_14cc325b0,&PTR_FUN_14beff810);
  }
  return DAT_14cc325b0;
}



// FUNCTION 146771be9 FUN_146771be9 body=47 status=ok
// SIG undefined FUN_146771be9(void)

longlong FUN_146771be9(void)

{
  if (DAT_14cc32510 == 0) {
    FUN_14073dd9a(&DAT_14cc32510,&PTR_LAB_14befe6f8);
  }
  return DAT_14cc32510;
}



// FUNCTION 146771c18 FUN_146771c18 body=49 status=ok
// SIG undefined FUN_146771c18(void)

longlong FUN_146771c18(void)

{
  if (DAT_14cc32558 == 0) {
    FUN_14073dd9a(&DAT_14cc32558,&PTR_LAB_14befedc0);
  }
  return DAT_14cc32558;
}



// FUNCTION 146771c49 FUN_146771c49 body=47 status=ok
// SIG undefined FUN_146771c49(void)

longlong FUN_146771c49(void)

{
  if (DAT_14cc32538 == 0) {
    FUN_14000fc22(&DAT_14cc32538,&PTR_FUN_14befeb50);
  }
  return DAT_14cc32538;
}



// FUNCTION 146771c78 FUN_146771c78 body=47 status=ok
// SIG undefined FUN_146771c78(void)

longlong FUN_146771c78(void)

{
  if (DAT_14cc32540 == 0) {
    FUN_14000fc22(&DAT_14cc32540,&PTR_FUN_14befeba0);
  }
  return DAT_14cc32540;
}



// FUNCTION 146771ca7 FUN_146771ca7 body=47 status=ok
// SIG undefined FUN_146771ca7(void)

longlong FUN_146771ca7(void)

{
  if (DAT_14cc32548 == 0) {
    FUN_14000fc22(&DAT_14cc32548,&PTR_FUN_14befebf0);
  }
  return DAT_14cc32548;
}



// FUNCTION 146771cd6 FUN_146771cd6 body=34 status=ok
// SIG undefined FUN_146771cd6(void)

void FUN_146771cd6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a986bc();
  FUN_14069c8d6(uVar1,&PTR_s_PauseSequence_14befec30,3);
  return;
}



// FUNCTION 146771cfd FUN_146771cfd body=47 status=ok
// SIG undefined FUN_146771cfd(void)

longlong FUN_146771cfd(void)

{
  if (DAT_14cc32568 == 0) {
    FUN_1409ce572(&DAT_14cc32568,&PTR_FUN_14beff390);
  }
  return DAT_14cc32568;
}



// FUNCTION 146771d2c FUN_146771d2c body=47 status=ok
// SIG undefined FUN_146771d2c(void)

longlong FUN_146771d2c(void)

{
  if (DAT_14cc32580 == 0) {
    FUN_14086a14e(&DAT_14cc32580,&PTR_FUN_14beff540);
  }
  return DAT_14cc32580;
}



// FUNCTION 146771d5c FUN_146771d5c body=48 status=ok
// SIG undefined FUN_146771d5c(void)

void FUN_146771d5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bf002a0;
  return;
}



// FUNCTION 146771d8c FUN_146771d8c body=55 status=ok
// SIG undefined FUN_146771d8c(void)

void FUN_146771d8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc325a0 == 0) {
    uVar1 = FUN_14596efd9();
    DAT_14cc325a0 = FUN_140002ddd(FUN_146771dc3,uVar1,L"ActorSequenceObjectReferences");
  }
  return;
}



// FUNCTION 146771dc3 FUN_146771dc3 body=47 status=ok
// SIG undefined FUN_146771dc3(void)

longlong FUN_146771dc3(void)

{
  if (DAT_14cc32598 == 0) {
    FUN_14086a14e(&DAT_14cc32598,&PTR_FUN_14beff660);
  }
  return DAT_14cc32598;
}



// FUNCTION 146771df2 FUN_146771df2 body=48 status=ok
// SIG undefined FUN_146771df2(void)

void FUN_146771df2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bf00400;
  return;
}



// FUNCTION 146771e22 FUN_146771e22 body=55 status=ok
// SIG undefined FUN_146771e22(void)

void FUN_146771e22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc325b8 == 0) {
    uVar1 = FUN_14596efd9();
    DAT_14cc325b8 = FUN_140002ddd(FUN_146771bba,uVar1,L"ActorSequenceObjectReferenceMap");
  }
  return;
}



// FUNCTION 146771e5a FUN_146771e5a body=48 status=ok
// SIG undefined FUN_146771e5a(void)

void FUN_146771e5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bf00560;
  return;
}



// FUNCTION 146771e8a FUN_146771e8a body=71 status=ok
// SIG undefined FUN_146771e8a(void)

void FUN_146771e8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b57c6a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beff980;
  puVar1[5] = &PTR_LAB_14beffc80;
  puVar1[6] = &PTR_FUN_14beffd90;
  puVar1[0x42] = &PTR_FUN_14beffdb0;
  return;
}



// FUNCTION 146771ed1 FUN_146771ed1 body=47 status=ok
// SIG undefined FUN_146771ed1(void)

longlong FUN_146771ed1(void)

{
  if (DAT_14cc325d0 == 0) {
    FUN_14073dd9a(&DAT_14cc325d0,&PTR_LAB_14beff938);
  }
  return DAT_14cc325d0;
}



// FUNCTION 146771f0c FUN_146771f0c body=40 status=ok
// SIG undefined FUN_146771f0c(void)

undefined8 FUN_146771f0c(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146771f34 FUN_146771f34 body=40 status=ok
// SIG undefined FUN_146771f34(void)

undefined8 FUN_146771f34(undefined8 param_1,int param_2)

{
  FUN_140a07204();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146771f5c FUN_146771f5c body=34 status=ok
// SIG undefined FUN_146771f5c(void)

undefined8 FUN_146771f5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146771f7e FUN_146771f7e body=34 status=ok
// SIG undefined FUN_146771f7e(void)

undefined8 FUN_146771f7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146771fa0 FUN_146771fa0 body=34 status=ok
// SIG undefined FUN_146771fa0(void)

undefined8 FUN_146771fa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146771fc2 FUN_146771fc2 body=231 status=ok
// SIG undefined FUN_146771fc2(void)

void FUN_146771fc2(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14bf03320;
  local_28[3] = &DAT_14cc3263e;
  local_28[4] = FUN_145a2cf44;
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



// FUNCTION 1467720aa FUN_1467720aa body=148 status=ok
// SIG undefined FUN_1467720aa(void)

void FUN_1467720aa(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bf02098;
  *(undefined8 **)(param_1 + 8) = puVar1;
  FUN_1446ddc76(&local_20,"OnlineSubsystem",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1401e3324(uVar2,local_20);
  (**(code **)(*plVar3 + 0x78))(plVar3,DAT_14cb8e198,*(undefined8 *)(param_1 + 8));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146772140 FUN_146772140 body=93 status=ok
// SIG undefined FUN_146772140(void)

void FUN_146772140(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf03320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14677219e FUN_14677219e body=29 status=ok
// SIG undefined FUN_14677219e(void)

undefined8 FUN_14677219e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467721bb FUN_1467721bb body=49 status=ok
// SIG undefined FUN_1467721bb(void)

longlong FUN_1467721bb(void)

{
  if (DAT_14cc32720 == 0) {
    FUN_14086a14e(&DAT_14cc32720,&PTR_FUN_14bf03600);
  }
  return DAT_14cc32720;
}



// FUNCTION 1467721ec FUN_1467721ec body=43 status=ok
// SIG undefined FUN_1467721ec(void)

void FUN_1467721ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14bf03d80;
  return;
}



// FUNCTION 146772217 FUN_146772217 body=49 status=ok
// SIG undefined FUN_146772217(void)

longlong FUN_146772217(void)

{
  if (DAT_14cc32758 == 0) {
    FUN_14073dd9a(&DAT_14cc32758,&PTR_LAB_14bf03a20);
  }
  return DAT_14cc32758;
}



// FUNCTION 146772248 FUN_146772248 body=47 status=ok
// SIG undefined FUN_146772248(void)

longlong FUN_146772248(void)

{
  if (DAT_14cc32738 == 0) {
    FUN_14000fc22(&DAT_14cc32738,&PTR_FUN_14bf036e0);
  }
  return DAT_14cc32738;
}



// FUNCTION 146772277 FUN_146772277 body=47 status=ok
// SIG undefined FUN_146772277(void)

longlong FUN_146772277(void)

{
  if (DAT_14cc32740 == 0) {
    FUN_14000fc22(&DAT_14cc32740,&PTR_FUN_14bf03840);
  }
  return DAT_14cc32740;
}



// FUNCTION 1467722a6 FUN_1467722a6 body=47 status=ok
// SIG undefined FUN_1467722a6(void)

longlong FUN_1467722a6(void)

{
  if (DAT_14cc32748 == 0) {
    FUN_14000fc22(&DAT_14cc32748,&PTR_FUN_14bf03928);
  }
  return DAT_14cc32748;
}



// FUNCTION 1467722d6 FUN_1467722d6 body=34 status=ok
// SIG undefined FUN_1467722d6(void)

void FUN_1467722d6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a987a8();
  FUN_14069c8d6(uVar1,&PTR_s_AddActorToLayer_14bf03970,3);
  return;
}



// FUNCTION 1467722f8 FUN_1467722f8 body=35 status=ok
// SIG undefined FUN_1467722f8(void)

void FUN_1467722f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bf03a60;
  return;
}



// FUNCTION 14677231c FUN_14677231c body=40 status=ok
// SIG undefined FUN_14677231c(void)

undefined8 FUN_14677231c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146772344 FUN_146772344 body=34 status=ok
// SIG undefined FUN_146772344(void)

undefined8 FUN_146772344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146772366 FUN_146772366 body=49 status=ok
// SIG undefined FUN_146772366(void)

longlong FUN_146772366(void)

{
  if (DAT_14cc327e8 == 0) {
    FUN_14000fc22(&DAT_14cc327e8,&PTR_FUN_14bf04688);
  }
  return DAT_14cc327e8;
}



// FUNCTION 146772397 FUN_146772397 body=49 status=ok
// SIG undefined FUN_146772397(void)

longlong FUN_146772397(void)

{
  if (DAT_14cc32788 == 0) {
    FUN_1409ce572(&DAT_14cc32788,&PTR_FUN_14bf04000);
  }
  return DAT_14cc32788;
}



// FUNCTION 1467723c8 FUN_1467723c8 body=47 status=ok
// SIG undefined FUN_1467723c8(void)

longlong FUN_1467723c8(void)

{
  if (DAT_14cc327a0 == 0) {
    FUN_1409ce572(&DAT_14cc327a0,&PTR_FUN_14bf040a0);
  }
  return DAT_14cc327a0;
}



// FUNCTION 1467723f7 FUN_1467723f7 body=35 status=ok
// SIG undefined FUN_1467723f7(void)

void FUN_1467723f7(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bf04160;
  return;
}



// FUNCTION 14677241a FUN_14677241a body=47 status=ok
// SIG undefined FUN_14677241a(void)

longlong FUN_14677241a(void)

{
  if (DAT_14cc327c0 == 0) {
    FUN_14073dd9a(&DAT_14cc327c0,&PTR_LAB_14bf04118);
  }
  return DAT_14cc327c0;
}



// FUNCTION 146772449 FUN_146772449 body=49 status=ok
// SIG undefined FUN_146772449(void)

longlong FUN_146772449(void)

{
  if (DAT_14cc327d0 == 0) {
    FUN_14086a14e(&DAT_14cc327d0,&PTR_FUN_14bf045c0);
  }
  return DAT_14cc327d0;
}



// FUNCTION 14677247a FUN_14677247a body=43 status=ok
// SIG undefined FUN_14677247a(void)

void FUN_14677247a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bf05dd0;
  return;
}



// FUNCTION 1467724a5 FUN_1467724a5 body=49 status=ok
// SIG undefined FUN_1467724a5(void)

longlong FUN_1467724a5(void)

{
  if (DAT_14cc32818 == 0) {
    FUN_14073dd9a(&DAT_14cc32818,&PTR_LAB_14bf052c0);
  }
  return DAT_14cc32818;
}



// FUNCTION 1467724d6 FUN_1467724d6 body=47 status=ok
// SIG undefined FUN_1467724d6(void)

longlong FUN_1467724d6(void)

{
  if (DAT_14cc327f0 == 0) {
    FUN_14000fc22(&DAT_14cc327f0,&PTR_FUN_14bf04948);
  }
  return DAT_14cc327f0;
}



// FUNCTION 146772505 FUN_146772505 body=47 status=ok
// SIG undefined FUN_146772505(void)

longlong FUN_146772505(void)

{
  if (DAT_14cc327f8 == 0) {
    FUN_14000fc22(&DAT_14cc327f8,&PTR_FUN_14bf04be8);
  }
  return DAT_14cc327f8;
}



// FUNCTION 146772534 FUN_146772534 body=47 status=ok
// SIG undefined FUN_146772534(void)

longlong FUN_146772534(void)

{
  if (DAT_14cc32800 == 0) {
    FUN_14000fc22(&DAT_14cc32800,&PTR_FUN_14bf04e40);
  }
  return DAT_14cc32800;
}



// FUNCTION 146772563 FUN_146772563 body=47 status=ok
// SIG undefined FUN_146772563(void)

longlong FUN_146772563(void)

{
  if (DAT_14cc32808 == 0) {
    FUN_14000fc22(&DAT_14cc32808,&PTR_FUN_14bf050a0);
  }
  return DAT_14cc32808;
}



// FUNCTION 146772592 FUN_146772592 body=34 status=ok
// SIG undefined FUN_146772592(void)

void FUN_146772592(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145893b38();
  FUN_14069c8d6(uVar1,&PTR_s_CreateProxyObjectForConvertToHEI_14bf050e0,4);
  return;
}



// FUNCTION 1467725ba FUN_1467725ba body=192 status=ok
// SIG undefined FUN_1467725ba(void)

void FUN_1467725ba(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf05f50;
  puVar1[3] = &DAT_14cc32828;
  puVar1[4] = FUN_1459a7084;
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



// FUNCTION 14677267c FUN_14677267c body=40 status=ok
// SIG undefined FUN_14677267c(void)

undefined8 FUN_14677267c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467726a4 FUN_1467726a4 body=34 status=ok
// SIG undefined FUN_1467726a4(void)

undefined8 FUN_1467726a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467726c6 FUN_1467726c6 body=93 status=ok
// SIG undefined FUN_1467726c6(void)

void FUN_1467726c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf05f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146772724 FUN_146772724 body=34 status=ok
// SIG undefined FUN_146772724(void)

undefined8 FUN_146772724(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146772746 FUN_146772746 body=47 status=ok
// SIG undefined FUN_146772746(void)

longlong FUN_146772746(void)

{
  if (DAT_14cc32838 == 0) {
    FUN_140f50038(&DAT_14cc32838,&PTR_s__Script_AssetTags_14bf060d0_8_14bf060b8);
  }
  return DAT_14cc32838;
}



// FUNCTION 146772775 FUN_146772775 body=47 status=ok
// SIG undefined FUN_146772775(void)

longlong FUN_146772775(void)

{
  if (DAT_14cc32858 == 0) {
    FUN_1409ce572(&DAT_14cc32858,&PTR_FUN_14bf06170);
  }
  return DAT_14cc32858;
}



// FUNCTION 1467727a4 FUN_1467727a4 body=49 status=ok
// SIG undefined FUN_1467727a4(void)

longlong FUN_1467727a4(void)

{
  if (DAT_14cc328b0 == 0) {
    FUN_14073dd9a(&DAT_14cc328b0,&PTR_LAB_14bf06a90);
  }
  return DAT_14cc328b0;
}



// FUNCTION 1467727d5 FUN_1467727d5 body=47 status=ok
// SIG undefined FUN_1467727d5(void)

longlong FUN_1467727d5(void)

{
  if (DAT_14cc32870 == 0) {
    FUN_14000fc22(&DAT_14cc32870,&PTR_FUN_14bf06248);
  }
  return DAT_14cc32870;
}



// FUNCTION 146772804 FUN_146772804 body=47 status=ok
// SIG undefined FUN_146772804(void)

longlong FUN_146772804(void)

{
  if (DAT_14cc32878 == 0) {
    FUN_14000fc22(&DAT_14cc32878,&PTR_FUN_14bf06370);
  }
  return DAT_14cc32878;
}



// FUNCTION 146772833 FUN_146772833 body=47 status=ok
// SIG undefined FUN_146772833(void)

longlong FUN_146772833(void)

{
  if (DAT_14cc32880 == 0) {
    FUN_14000fc22(&DAT_14cc32880,&PTR_FUN_14bf06440);
  }
  return DAT_14cc32880;
}



// FUNCTION 146772862 FUN_146772862 body=47 status=ok
// SIG undefined FUN_146772862(void)

longlong FUN_146772862(void)

{
  if (DAT_14cc32888 == 0) {
    FUN_14000fc22(&DAT_14cc32888,&PTR_FUN_14bf06578);
  }
  return DAT_14cc32888;
}



// FUNCTION 146772891 FUN_146772891 body=47 status=ok
// SIG undefined FUN_146772891(void)

longlong FUN_146772891(void)

{
  if (DAT_14cc32890 == 0) {
    FUN_14000fc22(&DAT_14cc32890,&PTR_FUN_14bf066b0);
  }
  return DAT_14cc32890;
}



// FUNCTION 1467728c0 FUN_1467728c0 body=47 status=ok
// SIG undefined FUN_1467728c0(void)

longlong FUN_1467728c0(void)

{
  if (DAT_14cc32898 == 0) {
    FUN_14000fc22(&DAT_14cc32898,&PTR_FUN_14bf067f0);
  }
  return DAT_14cc32898;
}



// FUNCTION 1467728ef FUN_1467728ef body=47 status=ok
// SIG undefined FUN_1467728ef(void)

longlong FUN_1467728ef(void)

{
  if (DAT_14cc328a0 == 0) {
    FUN_14000fc22(&DAT_14cc328a0,&PTR_FUN_14bf06920);
  }
  return DAT_14cc328a0;
}



// FUNCTION 14677291e FUN_14677291e body=34 status=ok
// SIG undefined FUN_14677291e(void)

void FUN_14677291e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a98894();
  FUN_14069c8d6(uVar1,&PTR_s_CollectionExists_14bf06960,7);
  return;
}



// FUNCTION 146772940 FUN_146772940 body=32 status=ok
// SIG undefined FUN_146772940(void)

void FUN_146772940(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_140dbffdc(param_1);
  *param_1 = &PTR_FUN_14bf06ad0;
  return;
}



// FUNCTION 146772960 FUN_146772960 body=40 status=ok
// SIG undefined FUN_146772960(void)

undefined8 FUN_146772960(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146772988 FUN_146772988 body=192 status=ok
// SIG undefined FUN_146772988(void)

void FUN_146772988(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf06ed0;
  puVar1[3] = &DAT_14cc328c0;
  puVar1[4] = FUN_1459a70ae;
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



// FUNCTION 146772a4a FUN_146772a4a body=93 status=ok
// SIG undefined FUN_146772a4a(void)

void FUN_146772a4a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf06ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146772aa8 FUN_146772aa8 body=34 status=ok
// SIG undefined FUN_146772aa8(void)

undefined8 FUN_146772aa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146772aca FUN_146772aca body=39 status=ok
// SIG undefined FUN_146772aca(void)

void FUN_146772aca(void)

{
  FUN_1400b22c2(&DAT_14cc328e0,&DAT_14bf06fa8);
  atexit((_func_5014 *)&LAB_1446bd404);
  return;
}



// FUNCTION 146772af1 FUN_146772af1 body=117 status=ok
// SIG undefined FUN_146772af1(void)

void FUN_146772af1(void)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_20,"Binaries/ThirdParty/MsQuic/");
  FUN_144a7dea0(&DAT_14cc328f0,local_20,&DAT_14cc328e0);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_1446bd415);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146772b68 FUN_146772b68 body=192 status=ok
// SIG undefined FUN_146772b68(void)

void FUN_146772b68(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf06ff0;
  puVar1[3] = &DAT_14cc32900;
  puVar1[4] = FUN_1459a70d8;
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



// FUNCTION 146772c2a FUN_146772c2a body=93 status=ok
// SIG undefined FUN_146772c2a(void)

void FUN_146772c2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf06ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146772c88 FUN_146772c88 body=34 status=ok
// SIG undefined FUN_146772c88(void)

undefined8 FUN_146772c88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146772caa FUN_146772caa body=192 status=ok
// SIG undefined FUN_146772caa(void)

void FUN_146772caa(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf079b0;
  puVar1[3] = &DAT_14cc32948;
  puVar1[4] = FUN_1459d181a;
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



// FUNCTION 146772d6c FUN_146772d6c body=93 status=ok
// SIG undefined FUN_146772d6c(void)

void FUN_146772d6c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf079b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146772dca FUN_146772dca body=29 status=ok
// SIG undefined FUN_146772dca(void)

undefined8 FUN_146772dca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146772de8 FUN_146772de8 body=192 status=ok
// SIG undefined FUN_146772de8(void)

void FUN_146772de8(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf07ab0;
  puVar1[3] = &DAT_14cc32954;
  puVar1[4] = FUN_145bd8642;
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



// FUNCTION 146772eaa FUN_146772eaa body=93 status=ok
// SIG undefined FUN_146772eaa(void)

void FUN_146772eaa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf07ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146772f08 FUN_146772f08 body=112 status=ok
// SIG undefined FUN_146772f08(void)

void FUN_146772f08(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"Media",1);
  plVar1 = (longlong *)FUN_1447c1074(local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_1 + -8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146772f7a FUN_146772f7a body=192 status=ok
// SIG undefined FUN_146772f7a(void)

void FUN_146772f7a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf07c40;
  puVar1[3] = &DAT_14cc32964;
  puVar1[4] = FUN_1459a7102;
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



// FUNCTION 14677303c FUN_14677303c body=93 status=ok
// SIG undefined FUN_14677303c(void)

void FUN_14677303c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf07c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14677309a FUN_14677309a body=34 status=ok
// SIG undefined FUN_14677309a(void)

undefined8 FUN_14677309a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1467730bc FUN_1467730bc body=192 status=ok
// SIG undefined FUN_1467730bc(void)

void FUN_1467730bc(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf07d60;
  puVar1[3] = &DAT_14cc32968;
  puVar1[4] = FUN_1459a712c;
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



// FUNCTION 14677317e FUN_14677317e body=93 status=ok
// SIG undefined FUN_14677317e(void)

void FUN_14677317e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf07d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467731dc FUN_1467731dc body=34 status=ok
// SIG undefined FUN_1467731dc(void)

undefined8 FUN_1467731dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1467731fe FUN_1467731fe body=192 status=ok
// SIG undefined FUN_1467731fe(void)

void FUN_1467731fe(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bf08050;
  puVar1[3] = &DAT_14cc32980;
  puVar1[4] = FUN_1459d1848;
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



// FUNCTION 1467732c0 FUN_1467732c0 body=739 status=ok
// SIG undefined FUN_1467732c0(void)

undefined8 * FUN_1467732c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bf07e60;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
    uVar7 = FUN_14118da1c();
    cVar3 = FUN_14054d46e(uVar7,L"nosound");
    if (cVar3 == '\0') {
      DAT_14caced80 = 0;
    }
    else {
      uVar7 = FUN_14118da1c();
      bVar4 = FUN_14054d46e(uVar7,L"enablesound");
      DAT_14caced80 = bVar4 ^ 1;
    }
    _Init_thread_footer(&DAT_14caced84);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced8c) && (FUN_144b3d300(), DAT_14caced8c == -1)) {
    DAT_14caced88 = 1;
    if (DAT_14c866ff0 == '\0') {
      if (DAT_14c872bf0 == '\x01') {
        DAT_14caced88 = DAT_14c872bc0 ^ 1;
      }
      else {
        DAT_14caced88 = 0;
      }
    }
    _Init_thread_footer();
  }
  bVar4 = 0;
  if (DAT_14caced88 == 0) {
    bVar4 = DAT_14caced80 ^ 1;
  }
  *(byte *)(param_1 + 0x12) = bVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_14b5a86c0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b5a8d40;
  plVar6[2] = (longlong)puVar5;
  if (puVar5 == (undefined8 *)0x0) {
LAB_14677340b:
    param_1[9] = puVar5;
    plVar8 = (longlong *)param_1[10];
    if (plVar6 != plVar8) {
      param_1[10] = plVar6;
      if (plVar8 == (longlong *)0x0) goto LAB_146773429;
      goto LAB_1467734e4;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_146773429;
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_146773429;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar6;
  }
  else {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      puVar5[1] = puVar5;
      if ((longlong *)puVar5[2] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)puVar5[2];
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        puVar5[2] = plVar6;
      }
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_14677340b;
    }
    puVar5[1] = puVar5;
    param_1[9] = puVar5;
    plVar8 = (longlong *)param_1[10];
    if (plVar8 == (longlong *)0x0) goto LAB_146773429;
    param_1[10] = 0;
LAB_1467734e4:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146773429;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_146773429:
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1467735a4 FUN_1467735a4 body=93 status=ok
// SIG undefined FUN_1467735a4(void)

void FUN_1467735a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf08050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146773602 FUN_146773602 body=29 status=ok
// SIG undefined FUN_146773602(void)

undefined8 FUN_146773602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146773620 FUN_146773620 body=29 status=ok
// SIG undefined FUN_146773620(void)

undefined8 FUN_146773620(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14677363d FUN_14677363d body=47 status=ok
// SIG undefined FUN_14677363d(void)

longlong FUN_14677363d(void)

{
  if (DAT_14cc32998 == 0) {
    FUN_140f50038(&DAT_14cc32998,&PTR_s__Script_TraceUtilities_14bf08180);
  }
  return DAT_14cc32998;
}



// FUNCTION 14677366c FUN_14677366c body=49 status=ok
// SIG undefined FUN_14677366c(void)

longlong FUN_14677366c(void)

{
  if (DAT_14cc32a20 == 0) {
    FUN_14073dd9a(&DAT_14cc32a20,&PTR_LAB_14bf08f60);
  }
  return DAT_14cc32a20;
}



// FUNCTION 14677369d FUN_14677369d body=47 status=ok
// SIG undefined FUN_14677369d(void)

longlong FUN_14677369d(void)

{
  if (DAT_14cc329a8 == 0) {
    FUN_14000fc22(&DAT_14cc329a8,&PTR_FUN_14bf08270);
  }
  return DAT_14cc329a8;
}



// FUNCTION 1467736cc FUN_1467736cc body=47 status=ok
// SIG undefined FUN_1467736cc(void)

longlong FUN_1467736cc(void)

{
  if (DAT_14cc329b0 == 0) {
    FUN_14000fc22(&DAT_14cc329b0,&PTR_FUN_14bf08348);
  }
  return DAT_14cc329b0;
}



// FUNCTION 1467736fb FUN_1467736fb body=47 status=ok
// SIG undefined FUN_1467736fb(void)

longlong FUN_1467736fb(void)

{
  if (DAT_14cc329b8 == 0) {
    FUN_14000fc22(&DAT_14cc329b8,&PTR_FUN_14bf08428);
  }
  return DAT_14cc329b8;
}



// FUNCTION 14677372a FUN_14677372a body=47 status=ok
// SIG undefined FUN_14677372a(void)

longlong FUN_14677372a(void)

{
  if (DAT_14cc329c0 == 0) {
    FUN_14000fc22(&DAT_14cc329c0,&PTR_FUN_14bf084c0);
  }
  return DAT_14cc329c0;
}



// FUNCTION 146773759 FUN_146773759 body=47 status=ok
// SIG undefined FUN_146773759(void)

longlong FUN_146773759(void)

{
  if (DAT_14cc329c8 == 0) {
    FUN_14000fc22(&DAT_14cc329c8,&PTR_FUN_14bf08558);
  }
  return DAT_14cc329c8;
}



// FUNCTION 146773788 FUN_146773788 body=47 status=ok
// SIG undefined FUN_146773788(void)

longlong FUN_146773788(void)

{
  if (DAT_14cc329d0 == 0) {
    FUN_14000fc22(&DAT_14cc329d0,&PTR_FUN_14bf085f0);
  }
  return DAT_14cc329d0;
}



// FUNCTION 1467737b7 FUN_1467737b7 body=47 status=ok
// SIG undefined FUN_1467737b7(void)

longlong FUN_1467737b7(void)

{
  if (DAT_14cc329d8 == 0) {
    FUN_14000fc22(&DAT_14cc329d8,&PTR_FUN_14bf08758);
  }
  return DAT_14cc329d8;
}



// FUNCTION 1467737e6 FUN_1467737e6 body=47 status=ok
// SIG undefined FUN_1467737e6(void)

longlong FUN_1467737e6(void)

{
  if (DAT_14cc329e0 == 0) {
    FUN_14000fc22(&DAT_14cc329e0,&PTR_FUN_14bf088b8);
  }
  return DAT_14cc329e0;
}



// FUNCTION 146773815 FUN_146773815 body=47 status=ok
// SIG undefined FUN_146773815(void)

longlong FUN_146773815(void)

{
  if (DAT_14cc329e8 == 0) {
    FUN_14000fc22(&DAT_14cc329e8,&PTR_FUN_14bf08950);
  }
  return DAT_14cc329e8;
}



// FUNCTION 146773844 FUN_146773844 body=47 status=ok
// SIG undefined FUN_146773844(void)

longlong FUN_146773844(void)

{
  if (DAT_14cc329f0 == 0) {
    FUN_14000fc22(&DAT_14cc329f0,&PTR_FUN_14bf08a78);
  }
  return DAT_14cc329f0;
}



// FUNCTION 146773873 FUN_146773873 body=47 status=ok
// SIG undefined FUN_146773873(void)

longlong FUN_146773873(void)

{
  if (DAT_14cc329f8 == 0) {
    FUN_14000fc22(&DAT_14cc329f8,&PTR_FUN_14bf08b08);
  }
  return DAT_14cc329f8;
}



// FUNCTION 1467738a2 FUN_1467738a2 body=47 status=ok
// SIG undefined FUN_1467738a2(void)

longlong FUN_1467738a2(void)

{
  if (DAT_14cc32a00 == 0) {
    FUN_14000fc22(&DAT_14cc32a00,&PTR_FUN_14bf08ba0);
  }
  return DAT_14cc32a00;
}



// FUNCTION 1467738d1 FUN_1467738d1 body=47 status=ok
// SIG undefined FUN_1467738d1(void)

longlong FUN_1467738d1(void)

{
  if (DAT_14cc32a08 == 0) {
    FUN_14000fc22(&DAT_14cc32a08,&PTR_FUN_14bf08c38);
  }
  return DAT_14cc32a08;
}



// FUNCTION 146773900 FUN_146773900 body=47 status=ok
// SIG undefined FUN_146773900(void)

longlong FUN_146773900(void)

{
  if (DAT_14cc32a10 == 0) {
    FUN_14000fc22(&DAT_14cc32a10,&PTR_FUN_14bf08d10);
  }
  return DAT_14cc32a10;
}



// FUNCTION 146773930 FUN_146773930 body=34 status=ok
// SIG undefined FUN_146773930(void)

void FUN_146773930(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a98980();
  FUN_14069c8d6(uVar1,&PTR_s_GetAllChannels_14bf08d50,0xe);
  return;
}



// FUNCTION 146773952 FUN_146773952 body=35 status=ok
// SIG undefined FUN_146773952(void)

void FUN_146773952(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bf08fa0;
  return;
}



// FUNCTION 146773976 FUN_146773976 body=40 status=ok
// SIG undefined FUN_146773976(void)

undefined8 FUN_146773976(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14677399e FUN_14677399e body=1 status=ok
// SIG undefined FUN_14677399e(void)

void FUN_14677399e(void)

{
  return;
}



// FUNCTION 14677399f FUN_14677399f body=105 status=ok
// SIG undefined FUN_14677399f(void)

void FUN_14677399f(longlong param_1)

{
  *(longlong *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8) =
       param_1;
  if (param_1 != 1) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(longlong *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a0) =
         param_1;
  }
  return;
}



// FUNCTION 146773a08 FUN_146773a08 body=67 status=ok
// SIG undefined FUN_146773a08(void)

undefined8 FUN_146773a08(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146773a4c(local_20,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146773a4c FUN_146773a4c body=714 status=ok
// SIG undefined FUN_146773a4c(void)

undefined8 * FUN_146773a4c(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar7 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8);
  if (uVar7 < 2) {
LAB_146773cdc:
    local_48 = PTR_DAT_14c748250;
    local_40 = &PTR_DAT_14c748218;
    local_38 = 0;
    FUN_146773f92(param_1,&local_48,param_2);
    goto LAB_146773b2b;
  }
  uVar5 = param_2 + 0xf;
  uVar9 = uVar5 >> 4;
  if (uVar5 < 0x1b0) {
    uVar5 = uVar9 * 0x18 + 8;
    if (*(uint *)(uVar7 + 0x1f74) <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_146773ae1:
    ppuVar10 = (undefined **)(uVar7 + uVar5 * 8 + 0x1f80);
  }
  else {
    if (uVar5 < 0x2720) {
      uVar4 = *(uint *)(&DAT_14c807ad8 + uVar9 * 4);
    }
    else {
      uVar4 = FUN_1467923c4(&PTR_DAT_14c748218,uVar9,0,0);
    }
    if (uVar4 == 0) goto LAB_146773cdc;
    if (uVar4 < *(uint *)(uVar7 + 0x1f74)) {
      uVar5 = (ulonglong)uVar4;
      goto LAB_146773ae1;
    }
    if ((uVar4 == 0xffffffff) ||
       (FUN_14679dc84(&local_48,uVar7,uVar4,0), ppuVar10 = local_40, ((ulonglong)local_48 & 1) == 0)
       ) goto LAB_146773cdc;
  }
  *(undefined1 *)ppuVar10 = 1;
  uVar4 = *(uint *)(ppuVar10 + 3);
  if ((ulonglong)uVar4 == 0) {
    puVar6 = ppuVar10[4];
    puVar11 = ppuVar10[6];
    if (puVar11 != (undefined *)0x0) {
LAB_146773b5c:
      uVar7 = 0;
      if (puVar11 != (undefined *)0x0) {
        for (; ((ulonglong)puVar11 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      ppuVar10[6] = (undefined *)((ulonglong)puVar11 & ~(1L << (uVar7 & 0x3f)));
      puVar6 = puVar6 + (uint)((int)uVar7 << 4);
      goto LAB_146773b0b;
    }
    if (*(char *)(ppuVar10 + 1) == '\x06') {
      uVar4 = *(uint *)((longlong)ppuVar10 + 0x2c);
      uVar1 = *(uint *)(ppuVar10 + 5);
      uVar7 = (ulonglong)uVar1;
      if (uVar1 < uVar4) {
        ppuVar10[uVar7 + 8] = (undefined *)0x0;
        lVar12 = 0;
        do {
          if ((uVar7 - (uVar4 - 1)) + lVar12 == 0) {
            *(uint *)(ppuVar10 + 5) = uVar4;
            goto LAB_146773c5f;
          }
          puVar6 = puVar6 + 0x400;
          puVar11 = ppuVar10[uVar7 + lVar12 + 9];
          lVar12 = lVar12 + 1;
        } while (puVar11 == (undefined *)0x0);
        *(uint *)(ppuVar10 + 5) = uVar1 + (int)lVar12;
        ppuVar10[4] = puVar6;
        goto LAB_146773b5c;
      }
LAB_146773c5f:
      FUN_14677ba03(&local_48,ppuVar10,&DAT_14c8084a0,FUN_14677401e);
      puVar6 = local_48;
      local_2a = local_40._3_1_;
      local_2c = local_40._1_2_;
      local_48._0_3_ = (undefined3)((ulonglong)local_40 >> 8);
      uVar3 = (undefined1)local_40;
      uVar8 = local_40._4_4_;
    }
    else {
      local_50 = FUN_14677401e;
      local_58 = &DAT_14c8084a0;
      FUN_14677cb93(&local_48,ppuVar10,param_2,1);
      puVar6 = local_48;
      local_2a = local_40._3_1_;
      local_2c = local_40._1_2_;
      local_48._0_3_ = (undefined3)((ulonglong)local_40 >> 8);
      uVar3 = (undefined1)local_40;
      uVar8 = local_40._4_4_;
    }
  }
  else {
    *(uint *)(ppuVar10 + 3) = uVar4 - *(int *)((longlong)ppuVar10 + 0x1c);
    puVar6 = ppuVar10[2] + -(ulonglong)uVar4;
LAB_146773b0b:
    *(undefined1 *)ppuVar10 = 0;
    uVar3 = 1;
    uVar8 = 0;
  }
  *param_1 = puVar6;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined2 *)((longlong)param_1 + 9) = (undefined2)local_48;
  *(undefined1 *)((longlong)param_1 + 0xb) = local_48._2_1_;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
LAB_146773b2b:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146773d17 FUN_146773d17 body=348 status=ok
// SIG undefined FUN_146773d17(void)

longlong FUN_146773d17(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8);
  if (uVar6 < 2) goto LAB_146773e65;
  uVar4 = param_1 + 0xf;
  if (uVar4 < 0x1b0) {
    puVar5 = (undefined1 *)((uVar4 >> 4) * 0xc0 + uVar6 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar4) ||
       (*(uint *)(uVar6 + 0x1f74) <= *(uint *)(&DAT_14c807ad8 + (uVar4 >> 4) * 4)))
    goto LAB_146773e65;
    puVar5 = (undefined1 *)
             (uVar6 + (ulonglong)*(uint *)(&DAT_14c807ad8 + (uVar4 >> 4) * 4) * 8 + 0x1f80);
  }
  *puVar5 = 1;
  uVar1 = *(uint *)(puVar5 + 0x18);
  if ((ulonglong)uVar1 != 0) {
    *(uint *)(puVar5 + 0x18) = uVar1 - *(int *)(puVar5 + 0x1c);
    lVar3 = *(longlong *)(puVar5 + 0x10) - (ulonglong)uVar1;
    goto LAB_146773daa;
  }
  lVar3 = *(longlong *)(puVar5 + 0x20);
  uVar6 = *(ulonglong *)(puVar5 + 0x30);
  if (uVar6 != 0) {
LAB_146773dc1:
    uVar4 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    *(ulonglong *)(puVar5 + 0x30) = uVar6 & ~(1L << (uVar4 & 0x3f));
    lVar3 = (ulonglong)(uint)((int)uVar4 << 4) + lVar3;
LAB_146773daa:
    *puVar5 = 0;
    return lVar3;
  }
  if (puVar5[8] == '\x06') {
    uVar1 = *(uint *)(puVar5 + 0x2c);
    uVar2 = *(uint *)(puVar5 + 0x28);
    uVar4 = (ulonglong)uVar2;
    if (uVar2 < uVar1) {
      *(undefined8 *)(puVar5 + uVar4 * 8 + 0x40) = 0;
      lVar7 = 0;
      do {
        if ((uVar4 - (uVar1 - 1)) + lVar7 == 0) {
          *(uint *)(puVar5 + 0x28) = uVar1;
          goto LAB_146773e62;
        }
        lVar3 = lVar3 + 0x400;
        uVar6 = *(ulonglong *)(puVar5 + lVar7 * 8 + uVar4 * 8 + 0x48);
        lVar7 = lVar7 + 1;
      } while (uVar6 == 0);
      *(uint *)(puVar5 + 0x28) = uVar2 + (int)lVar7;
      *(longlong *)(puVar5 + 0x20) = lVar3;
      goto LAB_146773dc1;
    }
  }
LAB_146773e62:
  *puVar5 = 0;
LAB_146773e65:
  lVar3 = FUN_146773a08(param_1);
  return lVar3;
}



// FUNCTION 146773e73 FUN_146773e73 body=287 status=ok
// SIG undefined FUN_146773e73(void)

void FUN_146773e73(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar1 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8);
  if (uVar1 < 2) {
    FUN_14678101d(param_1,&PTR_LOOP_149dfb7a0,1);
    return;
  }
  uVar2 = param_1 >> 0x18;
  if ((param_1 >> 0x2b != 0) ||
     ((*(uint *)(&DAT_14c748418 + (param_1 >> 0x1d) * 4) >> ((uint)(param_1 >> 0x18) & 0x1f) & 1) ==
      0)) {
    uVar3 = 0;
    if ((uVar2 < *(ulonglong *)PTR_DAT_14c758418) ||
       ((*(ulonglong *)(PTR_DAT_14c758418 + 8) <= uVar2 ||
        (uVar3 = *(uint *)(PTR_DAT_14c758418 +
                          (uVar2 - *(longlong *)PTR_DAT_14c758418 >> 2 & 0x1ffffffffffffffc) + 0x18)
                 >> ((char)(uVar2 - *(longlong *)PTR_DAT_14c758418) * '\x02' & 0x1fU) & 3,
        uVar3 != 1)))) {
      FUN_14677d2e3(uVar1,param_1,1,uVar3);
      return;
    }
  }
  uVar3 = *(uint *)(uVar1 + 8000);
  if ((ulonglong)uVar3 < 999) {
    *(ulonglong *)(uVar1 + (ulonglong)uVar3 * 8) = param_1 << 6 | 5;
    *(uint *)(uVar1 + 8000) = uVar3 + 1;
    return;
  }
  FUN_14679f80b(uVar1,param_1,5);
  return;
}



// FUNCTION 146773f92 FUN_146773f92 body=139 status=ok
// SIG undefined FUN_146773f92(void)

undefined4 * FUN_146773f92(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &DAT_14c8084a0;
  local_40 = &DAT_14c7483e8;
  local_30 = 1;
  local_48 = 1;
  FUN_14677ce4c(&local_28,param_2,2,param_3);
  if ((char)uStack_20 == '\0') {
    FUN_1467a2794();
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined4 *)(*pcVar1)();
    return puVar2;
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14677401e FUN_14677401e body=30 status=ok
// SIG undefined FUN_14677401e(void)

undefined8 * FUN_14677401e(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_2 + 1) != '\0') {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    return param_1;
  }
  FUN_1467a2794();
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}



// FUNCTION 146774067 FUN_146774067 body=94 status=ok
// SIG undefined FUN_146774067(void)

void FUN_146774067(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = 0x30;
  if (param_3 == 0) {
    lVar1 = 0xa0;
  }
  plVar2 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar2 = param_1;
  }
  FUN_1467875a5(lVar1 + *(longlong *)(*param_1 + 0x28),&DAT_14c748418,&DAT_149dfb7d8,
                (param_3 == 0) + '\x01',0,plVar2,param_2);
  return;
}



// FUNCTION 1467740e7 FUN_1467740e7 body=862 status=ok
// SIG undefined FUN_1467740e7(void)

longlong * FUN_1467740e7(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint3 uVar6;
  bool bVar7;
  void *_Dst;
  PSRWLOCK SRWLock;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  bool bVar20;
  
  lVar4 = DAT_14c80ad08;
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  uVar14 = *(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8;
  uVar6 = *(uint3 *)(uVar14 + 8);
  if (*(longlong *)(lVar3 + 8) == 0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)FUN_146794d20(lVar3,0);
  }
  if (0x1f < *(byte *)(param_2 + 4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar18 = (ulonglong)uVar6;
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar15 = (int)(1L << (*(byte *)(param_2 + 4) & 0x3f));
  uVar10 = -iVar15 & (*(int *)(lVar4 + 0x20 + uVar18 * 8) + iVar15) - 1U;
  uVar8 = uVar10 + iVar2;
  if (uVar8 < 0x4001) {
    uVar9 = uVar8;
    if ((uVar8 ^ uVar10) < 0x100) {
      uVar16 = uVar10 + iVar2 * 2;
      iVar15 = 1;
      do {
        if (0x4000 < uVar16) {
          uVar9 = uVar8;
          uVar8 = 0x4000;
          break;
        }
        uVar8 = uVar8 + iVar2;
        iVar15 = iVar15 + 1;
        uVar13 = uVar16 ^ uVar10;
        uVar16 = uVar16 + iVar2;
        uVar9 = uVar8;
      } while (uVar13 < 0x100);
      if (iVar15 == 0) goto LAB_14677417a;
    }
    *(uint *)(lVar4 + 0x20 + uVar18 * 8) = uVar8;
    uVar18 = *(ulonglong *)(lVar4 + uVar18 * 8);
    if ((uVar18 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar4 = *(longlong *)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x1c);
    *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar9 + lVar4;
    *(uint *)(param_2 + 0x18) = (uVar9 - uVar10) - iVar2;
    if (uVar10 < uVar9) {
      uVar18 = uVar18 & 0xfffffffffffffffe;
      uVar8 = uVar10;
      do {
        uVar13 = 1 << ((byte)(uVar8 >> 4) & 0x1f);
        uVar11 = (ulonglong)((uVar8 >> 9) * 4);
        puVar1 = (uint *)(param_2 + 0x40 + uVar11);
        *puVar1 = *puVar1 | uVar13;
        uVar16 = *(uint *)(lVar3 + 0x2c + uVar11);
        if (uVar16 == 0) {
          *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
        }
        uVar12 = (ulonglong)*(uint *)(uVar18 + 0x14 + (ulonglong)(uVar8 >> 8) * 4);
        uVar11 = DAT_14c80ad08 + uVar12 * 8;
        if (uVar12 == 0) {
          uVar11 = 0;
        }
        if ((uVar11 != 0) && (uVar11 != uVar14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar14 == 0) {
          uVar17 = 0;
        }
        else {
          uVar11 = uVar14 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar11 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar11 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar17 = (undefined4)(uVar11 >> 3);
        }
        *(undefined4 *)(uVar18 + 0x14 + (ulonglong)(uVar8 >> 8) * 4) = uVar17;
        *(uint *)(lVar3 + 0x2c + (ulonglong)(uVar8 >> 9) * 4) = uVar16 | uVar13;
        uVar8 = uVar8 + iVar2;
      } while (uVar8 < uVar9);
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    *param_1 = lVar4 + (ulonglong)uVar10;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
LAB_14677417a:
    if ((0xd < (uint)(int)*(char *)(param_2 + 8)) ||
       ((0x2aa8U >> ((int)*(char *)(param_2 + 8) & 0x1fU) & 1) == 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar14 = 0xffffffffffffffff;
    bVar7 = false;
    uVar18 = 0xffffffffffffffff;
    uVar11 = 0;
    do {
      bVar20 = *(int *)(param_2 + 0x40 + uVar11 * 4) != 0;
      if (bVar20) {
        uVar18 = uVar11;
      }
      if (bVar20 && !bVar7) {
        bVar7 = true;
        uVar14 = uVar11;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x20);
    if (!bVar7) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar18 = (uVar18 + 1) - uVar14;
    if (uVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (0xff < uVar18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    puVar19 = (undefined8 *)(*(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8);
    *(char *)((longlong)puVar19 + 0xf) = (char)uVar18;
    if (0xff < uVar14) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(char *)(puVar19 + 2) = (char)uVar14;
    _Dst = (void *)FUN_146788523(uVar18 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
    memcpy(_Dst,(void *)(param_2 + 0x40 + uVar14 * 4),uVar18 * 4);
    *puVar19 = (void *)((longlong)_Dst + uVar14 * -4);
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(lVar3 + 8));
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 146774445 FUN_146774445 body=1069 status=ok
// SIG undefined FUN_146774445(void)

bool FUN_146774445(longlong param_1,longlong *param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong lVar9;
  PSRWLOCK SRWLock_00;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong *plVar17;
  uint uVar18;
  
  if ((*(uint3 *)(param_2 + 1) != 0) && ((ulonglong)*(uint3 *)(param_2 + 1) << 3 != -DAT_14c80ad08))
  {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  bVar2 = *(byte *)(param_1 + 4);
  uVar12 = 1L << (bVar2 & 0x3f);
  plVar8 = *(longlong **)(param_3 + 0x18);
  uVar6 = FUN_1467999c9(*(longlong *)(*plVar8 + 0x28) + 0x90,*(uint *)(param_3 + 0x20) & 0x7ffffff,
                        &DAT_149dfb7d8);
  puVar7 = (ulonglong *)FUN_146795aef(uVar6,iVar3,uVar12 & 0xffffffff,0);
  if (puVar7 != (ulonglong *)0x0) {
    do {
      SRWLock = (PSRWLOCK)(puVar7 + 1);
      AcquireSRWLockExclusive(SRWLock);
      if ((*puVar7 & 1) == 0) {
        plVar8 = (longlong *)FUN_14679708b(puVar7,plVar8,uVar6,param_2,&DAT_149dfb7d8);
      }
      else {
        plVar8 = (longlong *)(*puVar7 & 0xfffffffffffffffe);
      }
      if (plVar8 == (longlong *)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
        goto LAB_146774640;
      }
      lVar4 = *plVar8;
      if (*(longlong *)(lVar4 + 8) == 0) {
        SRWLock_00 = (PSRWLOCK)0x0;
      }
      else {
        SRWLock_00 = (PSRWLOCK)FUN_146794d20(lVar4,0);
      }
      if (0x1f < bVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar18 = (int)puVar7[4] + (int)uVar12 + -1 & -(int)uVar12;
      uVar11 = uVar18 + iVar3;
      uVar13 = (ulonglong)uVar11;
      if (uVar11 < 0x4001) {
        if ((uVar11 ^ uVar18) < 0x100) {
          uVar10 = iVar3 * 2 + uVar18;
          iVar15 = 1;
          do {
            if (0x4000 < uVar10) {
              uVar11 = 0x4000;
              break;
            }
            uVar11 = (int)uVar13 + iVar3;
            uVar13 = (ulonglong)uVar11;
            iVar15 = iVar15 + 1;
            uVar14 = uVar10 ^ uVar18;
            uVar10 = uVar10 + iVar3;
          } while (uVar14 < 0x100);
          if (iVar15 == 0) goto LAB_146774588;
        }
        *(uint *)(puVar7 + 4) = uVar11;
        FUN_146795992(param_2,puVar7,plVar8);
        uVar12 = (longlong)puVar7 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar12 < 8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar12 = uVar12 >> 3;
        lVar9 = 8;
        do {
          *(char *)((longlong)param_2 + lVar9) = (char)uVar12;
          uVar12 = uVar12 >> 8;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0xb);
        uVar11 = (int)(char)*(uint *)(param_1 + 8) - 2;
        if (0xb < uVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *(uint *)(param_1 + 8) =
             *(uint *)(param_1 + 8) & 0xffffff00 | *(uint *)(&DAT_149dfbcfc + (ulonglong)uVar11 * 4)
        ;
        *(longlong *)(param_1 + 0x20) = lVar4;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        iVar3 = *(int *)(param_1 + 0x1c);
        *(ulonglong *)(param_1 + 0x10) = uVar13 + lVar4;
        *(uint *)(param_1 + 0x18) = (uint)uVar13 - uVar18;
        for (; uVar18 < (uint)uVar13; uVar18 = uVar18 + iVar3) {
          uVar10 = 1 << ((byte)(uVar18 >> 4) & 0x1f);
          uVar12 = (ulonglong)((uVar18 >> 9) * 4);
          puVar1 = (uint *)(param_1 + 0x40 + uVar12);
          *puVar1 = *puVar1 | uVar10;
          uVar11 = *(uint *)(lVar4 + 0x2c + uVar12);
          if (uVar11 == 0) {
            *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
          }
          uVar12 = (ulonglong)*(uint *)((longlong)plVar8 + (ulonglong)(uVar18 >> 8) * 4 + 0x14);
          plVar17 = (longlong *)(DAT_14c80ad08 + uVar12 * 8);
          if (uVar12 == 0) {
            plVar17 = (longlong *)0x0;
          }
          if (plVar17 != param_2 && plVar17 != (longlong *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (param_2 == (longlong *)0x0) {
            uVar16 = 0;
          }
          else {
            uVar12 = (longlong)param_2 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (uVar12 < 8) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar16 = (undefined4)(uVar12 >> 3);
          }
          *(undefined4 *)((longlong)plVar8 + (ulonglong)(uVar18 >> 8) * 4 + 0x14) = uVar16;
          *(uint *)(lVar4 + 0x2c + (ulonglong)(uVar18 >> 9) * 4) = uVar11 | uVar10;
        }
        *(ulonglong *)(param_1 + 0x38) = (ulonglong)param_2 | 4;
        *(byte *)((longlong)param_2 + 0x11) = *(byte *)((longlong)param_2 + 0x11) | 0x10;
        ReleaseSRWLockExclusive(SRWLock);
        *param_2 = param_1 + 0x40;
        if ((char)param_2[2] != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *(undefined1 *)((longlong)param_2 + 0xf) = 0x20;
        if (SRWLock_00 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(SRWLock_00);
        }
LAB_146774640:
        return plVar8 != (longlong *)0x0;
      }
LAB_146774588:
      if (SRWLock_00 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock_00);
      }
      ReleaseSRWLockExclusive(SRWLock);
      plVar8 = *(longlong **)(param_3 + 0x18);
      uVar6 = FUN_1467999c9(*(longlong *)(*plVar8 + 0x28) + 0x90,
                            *(uint *)(param_3 + 0x20) & 0x7ffffff,&DAT_149dfb7d8);
      puVar7 = (ulonglong *)FUN_146795aef(uVar6,iVar3,uVar12,0);
    } while (puVar7 != (ulonglong *)0x0);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



// FUNCTION 146774872 FUN_146774872 body=3688 status=ok
// SIG undefined FUN_146774872(void)

ulonglong FUN_146774872(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  BOOLEAN BVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  PSRWLOCK pRVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  longlong *local_90;
  PSRWLOCK *local_88;
  longlong local_80;
  ulonglong local_78;
  PSRWLOCK local_70;
  undefined8 local_68;
  PSRWLOCK local_60;
  PSRWLOCK local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar15 = *(ulonglong *)(param_1 + 0xe);
  if (((uint)uVar15 & 7) == 5) {
    uVar15 = uVar15 & 0xfffffffffffffff8;
  }
  else {
    uVar15 = FUN_146799574(uVar15);
  }
  plVar13 = *(longlong **)(uVar15 + 0x18);
  if (((*(byte *)(*plVar13 + 4) & 1) == 0) &&
     (uVar24 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24), uVar24 != 0)) {
    uVar14 = plVar13[1];
    if (uVar14 != 0) {
      uVar9 = uVar14 & 0xfffffffffe000000;
      uVar14 = (ulonglong)((uint)uVar14 & 0x1ffffff);
      uVar16 = uVar14 - 0x4008 >> 0xe;
      uVar14 = (uVar14 + uVar24 * 4) - 0x4001 >> 0xe;
      do {
        uVar22 = *(ulonglong *)(uVar9 + 0x18 + uVar16 * 8);
        uVar8 = (uint)uVar22 & 7;
        if (uVar8 == 2) break;
        if (uVar8 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar22 & 7) == 0) break;
        puVar25 = (ulonglong *)(uVar9 + 0x18 + uVar16 * 8);
        LOCK();
        bVar28 = uVar22 == *puVar25;
        if (bVar28) {
          *puVar25 = uVar22 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar28);
      if (uVar16 != uVar14) {
        do {
          uVar16 = *(ulonglong *)(uVar9 + 0x18 + uVar14 * 8);
          if (((uint)uVar16 & 7) < 3) break;
          puVar25 = (ulonglong *)(uVar9 + 0x18 + uVar14 * 8);
          LOCK();
          bVar28 = uVar16 == *puVar25;
          if (bVar28) {
            *puVar25 = uVar16 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar28);
      }
    }
    uVar14 = plVar13[2];
    if (uVar14 != 0) {
      uVar9 = uVar14 & 0xfffffffffe000000;
      uVar14 = (ulonglong)((uint)uVar14 & 0x1ffffff);
      uVar16 = uVar14 - 0x4008 >> 0xe;
      uVar24 = (uVar14 + uVar24 * 4) - 0x4001 >> 0xe;
      do {
        uVar14 = *(ulonglong *)(uVar9 + 0x18 + uVar16 * 8);
        uVar8 = (uint)uVar14 & 7;
        if (uVar8 == 2) break;
        if (uVar8 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar14 & 7) == 0) break;
        puVar25 = (ulonglong *)(uVar9 + 0x18 + uVar16 * 8);
        LOCK();
        bVar28 = uVar14 == *puVar25;
        if (bVar28) {
          *puVar25 = uVar14 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar28);
      if (uVar16 != uVar24) {
        do {
          uVar14 = *(ulonglong *)(uVar9 + 0x18 + uVar24 * 8);
          if (((uint)uVar14 & 7) < 3) break;
          puVar25 = (ulonglong *)(uVar9 + 0x18 + uVar24 * 8);
          LOCK();
          bVar28 = uVar14 == *puVar25;
          if (bVar28) {
            *puVar25 = uVar14 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar28);
      }
    }
  }
  lVar12 = (ulonglong)*(uint *)((longlong)plVar13 + 0x1c) * 8 + DAT_14c80ad08;
  if (lVar12 != 0 && (ulonglong)*(uint *)((longlong)plVar13 + 0x1c) != 0) {
    lVar18 = (ulonglong)*(uint *)(lVar12 + 8) * 8 + DAT_14c80ad08;
    if ((ulonglong)*(uint *)(lVar12 + 8) == 0) {
      lVar18 = 0;
    }
    if ((ulonglong)*(uint *)(lVar12 + 0xc) != 0) {
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar14 = (lVar18 - DAT_14c80acf8) - 8U >> 0xe;
      uVar24 = ((lVar18 - DAT_14c80acf8) + (ulonglong)*(uint *)(lVar12 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar9 = *(ulonglong *)(&DAT_14c8084f8 + uVar14 * 8);
        uVar8 = (uint)uVar9 & 7;
        if (uVar8 == 2) break;
        if (uVar8 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar9 & 7) == 0) break;
        LOCK();
        bVar28 = uVar9 == *(ulonglong *)(&DAT_14c8084f8 + uVar14 * 8);
        if (bVar28) {
          *(ulonglong *)(&DAT_14c8084f8 + uVar14 * 8) = uVar9 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar28);
      if (uVar14 != uVar24) {
        do {
          uVar14 = *(ulonglong *)(&DAT_14c8084f8 + uVar24 * 8);
          if (((uint)uVar14 & 7) < 3) break;
          LOCK();
          bVar28 = uVar14 == *(ulonglong *)(&DAT_14c8084f8 + uVar24 * 8);
          if (bVar28) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar24 * 8) = uVar14 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar28);
      }
    }
  }
  *(undefined2 *)((longlong)param_1 + 1) = 0x100;
  cVar5 = FUN_146790ea6();
  if (cVar5 != '\0') {
    FUN_146790ecd();
  }
  if (*(ulonglong *)(param_1 + 8) == 0) {
    uVar14 = 0;
    uVar24 = 0;
  }
  else {
    uVar14 = *(ulonglong *)(param_1 + 8) & 0xffffffffffffc000;
    uVar24 = *(ulonglong *)(uVar14 + 0x20);
    if ((uVar24 & 6) != 0) {
      if (((uint)uVar24 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar24 = *(ulonglong *)(param_1 + 0xe);
      if (((uint)uVar24 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  uVar9 = uVar15 | 5;
  if (uVar15 == 0) {
    uVar9 = 0;
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(ulonglong *)(param_1 + 0xe) = uVar9;
  *(undefined1 *)(param_1 + 2) = 6;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8);
  if (uVar9 < 2) {
    uVar26 = 0;
    uVar9 = 0;
  }
  else {
    uVar26 = *(undefined8 *)(uVar9 + 0x1f50);
    FUN_14679ea20(uVar9);
  }
  local_60 = (PSRWLOCK)0x0;
  if (uVar24 == 0) {
LAB_146774c9a:
    local_68 = uVar26;
    if (uVar9 == 0) {
LAB_1467750bf:
      uVar16 = FUN_146798201(uVar15);
      lVar12 = DAT_14c80ad08;
      if (uVar16 == 0) {
LAB_146775408:
        uVar16 = 0;
      }
      else {
        uVar8 = (uint)uVar16 & 7;
        if (uVar8 < 2) {
          plVar13 = (longlong *)(uVar16 & 0xfffffffffffffff8);
          if (*(char *)((longlong)plVar13 + 0xb) == '\0') {
            uVar9 = (ulonglong)*(uint3 *)(plVar13 + 1);
            if (*plVar13 == 0) {
              cVar5 = *(char *)(DAT_14c80ad08 + 0xd + uVar9 * 8);
              if (cVar5 != '\x01') {
                if (cVar5 != '\x02') {
                  if (cVar5 == '\0') {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                local_98 = (undefined *)0x0;
                FUN_14678ec28(0x4000,&DAT_149dfb7d8,0,0);
                lVar18 = *plVar13;
                if (lVar18 != 0) goto LAB_146775187;
              }
              local_80 = lVar12;
              local_78 = uVar15;
              FUN_14678f287(&local_58);
              do {
                if (*plVar13 != 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                FUN_14678f28e(&local_58);
                AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                local_90 = *(longlong **)(local_80 + 0x18 + uVar9 * 8);
                lVar12 = *local_90;
                if ((*(byte *)(lVar12 + 4) & 2) == 0) {
                  local_90 = (longlong *)0x0;
                }
                local_98 = (undefined *)((ulonglong)local_98 & 0xffffffffffffff00);
                local_88 = &local_58;
                lVar12 = FUN_1467875a5(*(longlong *)(lVar12 + 0x28) + 0x30,&DAT_14c748418,
                                       &DAT_149dfb7d8,1);
                *plVar13 = lVar12;
                ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                cVar5 = FUN_14678f2c1(&local_58);
              } while (cVar5 == '\0');
              lVar18 = *plVar13;
              uVar15 = local_78;
              if (lVar18 == 0) goto LAB_146775408;
            }
            else {
              local_80 = DAT_14c80ad08;
              pRVar21 = (PSRWLOCK)(plVar13 + 2);
              AcquireSRWLockExclusive(pRVar21);
              cVar5 = *(char *)(local_80 + 0xd + uVar9 * 8);
              local_58 = pRVar21;
              if (cVar5 != '\x01') {
                if (cVar5 != '\x02') {
                  if (cVar5 == '\0') {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                local_98 = (undefined *)0x1;
                FUN_14678ec28(0x4000,&DAT_149dfb7d8,0,&local_58);
              }
              FUN_14678d48b(*plVar13,&DAT_149dfb7d8);
              ReleaseSRWLockExclusive(pRVar21);
              lVar18 = *plVar13;
            }
LAB_146775187:
            FUN_146794f45(lVar18,(longlong)plVar13 + 1,0,&DAT_149dfb7d8);
            AcquireSRWLockExclusive((PSRWLOCK)(plVar13 + 3));
            *(undefined1 *)((longlong)plVar13 + 0xb) = 1;
            ReleaseSRWLockExclusive((PSRWLOCK)(plVar13 + 3));
          }
        }
        else {
          if (uVar8 != 4) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (((uint)uVar16 & 7) != 4) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            local_78 = uVar15;
            (*pcVar4)();
          }
          plVar23 = (longlong *)(uVar16 & 0xfffffffffffffff8);
          uVar9 = (ulonglong)
                  ((uint)*(byte *)((longlong)plVar23 + 0xd) * 0x80000 +
                  (uint)*(ushort *)((longlong)plVar23 + 0xb) * 8);
          plVar13 = *(longlong **)(uVar9 + 0x18 + DAT_14c80ad08);
          local_78 = uVar15;
          lVar12 = FUN_1467999c9(*(longlong *)(*plVar13 + 0x28) + 0x90,
                                 *(uint *)(uVar9 + 0x20 + DAT_14c80ad08) & 0x7ffffff,&DAT_149dfb7d8)
          ;
          puVar25 = (ulonglong *)((ulonglong)*(uint3 *)(plVar23 + 1) * 8 + DAT_14c80ad08);
          uVar15 = local_78;
          if (puVar25 != (ulonglong *)0x0 && *(uint3 *)(plVar23 + 1) != 0) {
            pRVar21 = (PSRWLOCK)(puVar25 + 1);
            local_80 = lVar12;
            AcquireSRWLockExclusive(pRVar21);
            if ((*puVar25 & 1) == 0) {
              local_98 = &DAT_149dfb7d8;
              uVar15 = FUN_14679708b(puVar25,plVar13,local_80,plVar23);
            }
            else {
              uVar15 = *puVar25 & 0xfffffffffffffffe;
            }
            if (uVar15 == 0) {
              ReleaseSRWLockExclusive(pRVar21);
              uVar16 = 0;
              uVar15 = local_78;
            }
            else {
              if ((*(byte *)((longlong)plVar23 + 0x11) & 0x10) == 0) {
                local_70 = pRVar21;
                if ((ulonglong)*(byte *)((longlong)plVar23 + 0xf) != 0) {
                  local_80 = *plVar23;
                  uVar22 = (ulonglong)*(byte *)(plVar23 + 2);
                  uVar9 = *(byte *)((longlong)plVar23 + 0xf) + uVar22;
                  do {
                    uVar8 = *(uint *)(local_80 + uVar22 * 4);
                    if (uVar8 != 0) {
                      do {
                        uVar2 = 0;
                        if (uVar8 != 0) {
                          for (; (uVar8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                          }
                        }
                        uVar27 = (uVar22 << 5 | (ulonglong)uVar2) >> 4;
                        uVar20 = (ulonglong)*(uint *)(uVar15 + 0x14 + uVar27 * 4);
                        if (((uVar20 != 0) &&
                            (plVar13 = (longlong *)(DAT_14c80ad08 + uVar20 * 8),
                            plVar13 != (longlong *)0x0)) && (plVar13 != plVar23)) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)invalidInstructionException();
                          (*pcVar4)();
                        }
                        if (plVar23 == (longlong *)0x0) {
                          uVar19 = 0;
                        }
                        else {
                          uVar20 = (longlong)plVar23 - DAT_14c80ad08;
                          if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
                            pcVar4 = (code *)invalidInstructionException();
                            (*pcVar4)();
                          }
                          if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
                            pcVar4 = (code *)invalidInstructionException();
                            (*pcVar4)();
                          }
                          if (uVar20 < 8) {
                    /* WARNING: Does not return */
                            pcVar4 = (code *)invalidInstructionException();
                            (*pcVar4)();
                          }
                          uVar19 = (undefined4)(uVar20 >> 3);
                        }
                        *(undefined4 *)(uVar15 + 0x14 + uVar27 * 4) = uVar19;
                        bVar7 = (byte)uVar2 & 0x1f;
                        uVar8 = uVar8 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
                      } while (uVar8 != 0);
                    }
                    uVar22 = uVar22 + 1;
                  } while (uVar22 < uVar9);
                }
                AcquireSRWLockExclusive((PSRWLOCK)(puVar25 + 2));
                *(byte *)((longlong)plVar23 + 0x11) = *(byte *)((longlong)plVar23 + 0x11) | 0x10;
                ReleaseSRWLockExclusive((PSRWLOCK)(puVar25 + 2));
                pRVar21 = local_70;
              }
              ReleaseSRWLockExclusive(pRVar21);
              uVar15 = local_78;
            }
          }
        }
      }
    }
    else {
      uVar8 = *(uint *)(uVar15 + 0x28);
      if (uVar8 < *(uint *)(uVar9 + 0x1f74)) {
        local_50 = (undefined1 *)(uVar9 + 0x1f80 + (ulonglong)uVar8 * 8);
      }
      else if ((uVar8 == 0xffffffff) ||
              (FUN_14679dc84(&local_58,uVar9,(ulonglong)uVar8,0), ((ulonglong)local_58 & 1) == 0))
      goto LAB_1467750bf;
      *local_50 = 1;
      if ((local_50[3] & 0x7f) != 4) {
LAB_1467750a3:
        FUN_14678c309(local_50,0,4);
LAB_1467750b3:
        *(undefined2 *)(local_50 + 1) = 0x100;
        *local_50 = 0;
        goto LAB_1467750bf;
      }
      bVar7 = local_50[5];
      if (local_50[6] == bVar7) {
        if (local_50[7] == '\0') goto LAB_1467750a3;
        if (local_50[7] == '\x02') goto LAB_146774cf5;
        goto LAB_1467750b3;
      }
LAB_146774cf5:
      *(undefined2 *)(local_50 + 1) = 0x100;
      bVar10 = bVar7 + 1;
      if ((byte)local_50[4] <= bVar10) {
        bVar10 = 0;
      }
      local_50[5] = bVar10;
      uVar16 = (ulonglong)
               ((uint)(byte)local_50[(ulonglong)bVar7 * 3 + 10] * 0x80000 +
               (uint)*(ushort *)(local_50 + (ulonglong)bVar7 * 3 + 8) * 8) + DAT_14c80ad08;
      local_50[7] = 1;
      *local_50 = 0;
    }
    if (uVar24 != 0) {
      if (local_60 != *(PSRWLOCK *)(uVar14 + 8)) {
        local_60 = (PSRWLOCK)FUN_146794d20(uVar14);
      }
      lVar12 = DAT_14c80ad08;
      uVar8 = (uint)uVar24 & 7;
      if (uVar8 < 2) {
        uVar24 = uVar24 & 0xfffffffffffffff8;
        cVar5 = *(char *)(uVar14 + 2);
        if (cVar5 == '\x01') {
          *(undefined1 *)(uVar14 + 2) = 0;
        }
        lVar18 = (ulonglong)
                 ((uint)*(byte *)(uVar24 + 10) * 0x80000 + (uint)*(ushort *)(uVar24 + 8) * 8) +
                 DAT_14c80ad08;
        uVar19 = *(undefined4 *)(uVar24 + 0xc);
        lVar12 = *(longlong *)(uVar14 + 0x18);
        *(undefined1 *)(uVar14 + 1) = 0;
        if (cVar5 != '\0') {
          FUN_146791662(lVar18,uVar19);
        }
        if (lVar12 == 0) {
          FUN_146791740(lVar18,uVar19);
        }
      }
      else {
        if (uVar8 != 4) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar24 = uVar24 & 0xfffffffffffffff8;
        uVar22 = (ulonglong)
                 ((uint)*(byte *)(uVar24 + 10) * 0x80000 + (uint)*(ushort *)(uVar24 + 8) * 8);
        uVar9 = *(ulonglong *)(uVar22 + DAT_14c80ad08);
        if ((uVar9 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_78 = uVar15;
        if ((*(byte *)(uVar24 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        bVar7 = *(byte *)(uVar24 + 0xd);
        uVar1 = *(ushort *)(uVar24 + 0xb);
        local_80 = *(longlong *)((uVar9 & 0xfffffffffffffffe) + 8);
        if ((*(PSRWLOCK *)(uVar14 + 8) != (PSRWLOCK)0x0) &&
           (BVar6 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar14 + 8)), BVar6 != '\0')) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar22 = uVar22 + lVar12;
        if (*(int *)(uVar22 + 0x24) == 1) {
          bVar28 = *(longlong *)(uVar14 + 0x18) == 0;
        }
        else {
          bVar28 = false;
        }
        bVar10 = *(byte *)(uVar24 + 0x11);
        *(byte *)(uVar24 + 0x11) = bVar10 & 0xfc;
        iVar3 = *(int *)(uVar22 + 0x24);
        if ((bVar10 & 2) == 0) {
          if (iVar3 == 0) {
LAB_146775627:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          *(int *)(uVar22 + 0x24) = iVar3 + -1;
        }
        else {
          if (iVar3 == 0) goto LAB_146775627;
          *(int *)(uVar22 + 0x24) = iVar3 + -1;
          if ((*(byte *)(uVar24 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          FUN_146791720((ulonglong)((uint)bVar7 * 0x80000 + (uint)uVar1 * 8) + lVar12,uVar24 | 4);
        }
        uVar15 = local_78;
        if (bVar28) {
          if (*(int *)(uVar22 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          FUN_1467918b2(local_80,uVar22 | 2);
        }
      }
    }
    if (uVar16 == 0) {
      if (local_60 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_60);
        local_60 = (PSRWLOCK)0x0;
      }
      uVar15 = 0;
      goto LAB_146774f35;
    }
    if ((uVar16 & 6) != 0) {
      if (((uint)uVar16 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar16 = uVar16 & 0xfffffffffffffff8;
      if ((*(uint3 *)(uVar16 + 8) == 0) ||
         (puVar25 = (ulonglong *)((ulonglong)*(uint3 *)(uVar16 + 8) * 8 + DAT_14c80ad08),
         puVar25 == (ulonglong *)0x0)) {
        if (local_60 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_60);
          local_60 = (PSRWLOCK)0x0;
        }
        uVar8 = FUN_146774445(param_1,uVar16,uVar15);
        uVar15 = (ulonglong)uVar8;
        goto LAB_146774f35;
      }
      uVar15 = *puVar25;
      uVar14 = uVar15;
      if ((uVar15 & 1) != 0) {
        uVar14 = *(ulonglong *)(uVar15 & 0xfffffffffffffffe);
      }
      if (local_60 != *(PSRWLOCK *)(uVar14 + 8)) {
        local_60 = (PSRWLOCK)FUN_146794d20(uVar14,local_60,*(PSRWLOCK *)(uVar14 + 8));
        uVar15 = *puVar25;
      }
      if ((uVar15 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      FUN_146795992(uVar16,puVar25,uVar15 & 0xfffffffffffffffe);
      goto LAB_146774e3e;
    }
    uVar14 = *(ulonglong *)(uVar16 & 0xfffffffffffffff8);
    FUN_146794dcc(uVar14,&local_60,local_68);
    *(undefined1 *)(uVar14 + 1) = 1;
    *(ulonglong *)(uVar14 + 0x20) = uVar16 | 1;
LAB_146774b9e:
    lVar12 = DAT_14c80ad08;
    if (*(longlong *)(uVar14 + 0x18) == 0) {
      uVar15 = (ulonglong)*(uint *)(uVar15 + 0x30);
      uVar8 = *(uint *)(DAT_14c80ad08 + 4 + uVar15 * 8);
      iVar3 = *(int *)(DAT_14c80ad08 + uVar15 * 8);
      *(ulonglong *)(uVar14 + 0x18) = (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + uVar15 * 8);
      *(ulonglong *)(param_1 + 4) = uVar8 + uVar14;
      param_1[6] = uVar8 - iVar3;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(ulonglong *)(param_1 + 8) = uVar14;
      uVar15 = (ulonglong)*(uint *)(lVar12 + 0xc + uVar15 * 8);
      if (uVar15 < 8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      param_1 = (undefined4 *)(uVar15 + DAT_14c80ad08);
      puVar17 = (undefined4 *)(uVar14 + 0x2c);
      for (lVar12 = 0x20; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar17 = *param_1;
        param_1 = param_1 + 1;
        puVar17 = puVar17 + 1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      uVar9 = (ulonglong)*(uint *)(uVar15 + 0x30);
      uVar24 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + uVar9 * 8);
      if (uVar24 < 8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar8 = *(uint *)(DAT_14c80ad08 + uVar9 * 8);
      uVar11 = uVar8 >> 10;
      uVar2 = *(uint *)(DAT_14c80ad08 + 4 + uVar9 * 8);
      lVar12 = uVar24 + DAT_14c80ad08;
      param_1[10] = uVar11;
      param_1[0xb] = ((uVar2 >> 4) - 1 >> 6) + 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1a) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x1e) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x22) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x26) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x2a) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x2e) = 0;
      *(ulonglong *)(param_1 + 8) = (uVar8 & 0xfffffc00) + uVar14;
      lVar18 = 0;
      do {
        uVar8 = *(uint *)(lVar12 + lVar18 * 4);
        uVar2 = *(uint *)(uVar14 + 0x2c + lVar18 * 4);
        param_1[lVar18 + 0x10] = ~uVar2 & uVar8;
        *(uint *)(uVar14 + 0x2c + lVar18 * 4) = uVar2 | uVar8;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x20);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + (ulonglong)uVar11 * 2 + 0x10);
      *(undefined1 *)(param_1 + 3) = 1;
      *(ulonglong *)(uVar14 + 0x18) =
           (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(uVar15 + 0x30) * 8);
    }
  }
  else {
    if (((uint)uVar24 & 7) != 4) {
      if ((uVar24 & 7) != 0) goto LAB_146774c9a;
      FUN_146794dcc(uVar14,&local_60,uVar26);
      *(ulonglong *)(uVar14 + 0x20) = uVar24 | 1;
      *(undefined1 *)(uVar14 + 2) = 0;
      goto LAB_146774b9e;
    }
    uVar16 = uVar24 & 0xfffffffffffffff8;
    bVar7 = *(byte *)(uVar16 + 0x11);
    if ((bVar7 & 4) == 0) goto LAB_146774c9a;
    if (*(longlong *)(uVar14 + 8) != 0) {
      local_60 = (PSRWLOCK)FUN_146794d20(uVar14);
      bVar7 = *(byte *)(uVar16 + 0x11);
    }
    *(byte *)(uVar16 + 0x11) = bVar7 & 0xf9;
LAB_146774e3e:
    *(undefined8 *)(param_1 + 4) = 0;
    uVar15 = uVar16 | 4;
    if (uVar16 == 0) {
      uVar15 = 0;
    }
    param_1[6] = 0;
    if (((uint)uVar15 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    plVar13 = (longlong *)(uVar15 & 0xfffffffffffffff8);
    bVar7 = *(byte *)(plVar13 + 2);
    uVar9 = (ulonglong)bVar7;
    bVar10 = *(byte *)((longlong)plVar13 + 0xf);
    lVar12 = *plVar13;
    *(ulonglong *)(param_1 + 0xe) = uVar15;
    uVar8 = (uint)bVar10 + (uint)bVar7 + 1;
    uVar15 = (ulonglong)((uint)bVar10 + (uint)bVar7);
    bVar10 = bVar7 >> 1;
    param_1[10] = (uint)bVar10;
    param_1[0xb] = uVar8 >> 1 & 0xff;
    uVar24 = 0;
    memset(param_1 + (ulonglong)(uint)bVar10 * 2 + 0x10,0,
           (ulonglong)((uVar8 & 0xfffffffe) - (bVar7 & 0xfffffffe)) << 2);
    *(ulonglong *)(param_1 + 8) = (ulonglong)bVar10 * 0x400 + uVar14;
    if (uVar9 < uVar15) {
      do {
        uVar8 = *(uint *)(lVar12 + uVar9 * 4);
        uVar2 = *(uint *)(uVar14 + 0x2c + uVar9 * 4);
        param_1[uVar9 + 0x10] = ~uVar2 & uVar8;
        uVar11 = (int)uVar24 + (uint)(uVar8 != 0 && uVar2 == 0);
        uVar24 = (ulonglong)uVar11;
        *(uint *)(uVar14 + 0x2c + uVar9 * 4) = uVar2 | uVar8;
        uVar9 = uVar9 + 1;
      } while (uVar15 != uVar9);
      uVar24 = (ulonglong)uVar11;
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + (ulonglong)(uint)bVar10 * 2 + 0x10);
    *(undefined1 *)(param_1 + 3) = 1;
    *(longlong *)(uVar14 + 0x18) = *(longlong *)(uVar14 + 0x18) + uVar24;
  }
  uVar15 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
    local_60 = (PSRWLOCK)0x0;
  }
LAB_146774f35:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467756db FUN_1467756db body=1623 status=ok
// SIG undefined FUN_1467756db(void)

void FUN_1467756db(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  
  uVar11 = (uint)param_2;
  if ((uVar11 & 7) < 2) {
    BVar4 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_3 + 8));
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
      if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar12 = 0xffffffffffffffff;
      bVar17 = false;
      uVar15 = 0xffffffffffffffff;
      uVar8 = 0;
      do {
        bVar16 = *(int *)(param_1 + 0x40 + uVar8 * 4) != 0;
        if (bVar16) {
          uVar15 = uVar8;
        }
        if (bVar16 && !bVar17) {
          bVar17 = true;
          uVar12 = uVar8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x20);
      if (!bVar17) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar15 = (uVar15 + 1) - uVar12;
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (0xff < uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
      *(char *)((longlong)puVar13 + 0xf) = (char)uVar15;
      if (0xff < uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)(puVar13 + 2) = (char)uVar12;
      pvVar6 = (void *)FUN_146788523(uVar15 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
      memcpy(pvVar6,(void *)(uVar12 * 4 + param_1 + 0x40),uVar15 * 4);
      *puVar13 = (void *)((longlong)pvVar6 + uVar12 * -4);
    }
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar12 != 0) {
      uVar15 = *(ulonglong *)(param_1 + 0x10);
      uVar8 = uVar15 - uVar12;
      if (uVar12 <= uVar15) {
        uVar14 = *(uint *)(param_1 + 0x1c);
        do {
          bVar2 = (byte)(uVar8 >> 4) & 0x1f;
          puVar1 = (uint *)(param_3 + 0x2c + (ulonglong)((uint)(uVar8 >> 7) & 0x7c));
          *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
          if (*puVar1 == 0) {
            if ((*(ulonglong *)(param_3 + 0x20) & 7) != 0) {
              uVar12 = *(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8;
              if (*(char *)(param_3 + 1) == '\x01') {
                *(undefined1 *)(param_3 + 2) = 1;
              }
              else {
                FUN_146791662((ulonglong)
                              ((uint)*(byte *)(uVar12 + 10) * 0x80000 +
                              (uint)*(ushort *)(uVar12 + 8) * 8) + DAT_14c80ad08,
                              *(undefined4 *)(uVar12 + 0xc));
              }
              *(ulonglong *)(param_3 + 0x20) = uVar12;
            }
            lVar10 = *(longlong *)(param_3 + 0x18) + -1;
            if (lVar10 == 0) {
              FUN_146795211(param_3,0);
            }
            else {
              *(longlong *)(param_3 + 0x18) = lVar10;
            }
          }
          uVar8 = uVar8 + uVar14;
        } while (uVar8 < uVar15);
      }
    }
    if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x2c)) {
      *(undefined8 *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x28) * 8) =
           *(undefined8 *)(param_1 + 0x30);
      if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
         ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((param_2 & 6) == 0) {
        uVar12 = (ulonglong)
                 *(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
        if (uVar12 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar10 = DAT_14c80ad08 + uVar12;
        uVar12 = 0x20;
        uVar15 = 0;
      }
      else {
        if ((uVar11 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        plVar9 = (longlong *)(param_2 & 0xfffffffffffffff8);
        if ((ulonglong)*(byte *)((longlong)plVar9 + 0xf) == 0) {
          return;
        }
        uVar15 = (ulonglong)*(byte *)(plVar9 + 2);
        uVar12 = *(byte *)((longlong)plVar9 + 0xf) + uVar15;
        lVar10 = *plVar9;
      }
      do {
        uVar11 = *(uint *)(param_1 + 0x40 + uVar15 * 4) & *(uint *)(lVar10 + uVar15 * 4);
        if (uVar11 != 0) {
          do {
            uVar14 = -uVar11 & uVar11;
            puVar1 = (uint *)(param_3 + 0x2c + (ulonglong)((uint)uVar15 & 0x1f) * 4);
            *puVar1 = *puVar1 & ~uVar14;
            if (*puVar1 == 0) {
              if ((*(ulonglong *)(param_3 + 0x20) & 7) != 0) {
                uVar8 = *(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8;
                if (*(char *)(param_3 + 1) == '\x01') {
                  *(undefined1 *)(param_3 + 2) = 1;
                }
                else {
                  FUN_146791662((ulonglong)
                                ((uint)*(byte *)(uVar8 + 10) * 0x80000 +
                                (uint)*(ushort *)(uVar8 + 8) * 8) + DAT_14c80ad08,
                                *(undefined4 *)(uVar8 + 0xc));
                }
                *(ulonglong *)(param_3 + 0x20) = uVar8;
              }
              lVar7 = *(longlong *)(param_3 + 0x18) + -1;
              if (lVar7 == 0) {
                FUN_146795211(param_3,0);
              }
              else {
                *(longlong *)(param_3 + 0x18) = lVar7;
              }
            }
            bVar17 = uVar14 != uVar11;
            uVar11 = uVar14 ^ uVar11;
          } while (bVar17);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar12);
    }
  }
  else {
    if ((uVar11 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_3 + 8));
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
      if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar12 = 0xffffffffffffffff;
      bVar17 = false;
      uVar15 = 0xffffffffffffffff;
      uVar8 = 0;
      do {
        bVar16 = *(int *)(param_1 + 0x40 + uVar8 * 4) != 0;
        if (bVar16) {
          uVar15 = uVar8;
        }
        if (bVar16 && !bVar17) {
          bVar17 = true;
          uVar12 = uVar8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x20);
      if (!bVar17) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar15 = (uVar15 + 1) - uVar12;
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (0xff < uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
      *(char *)((longlong)puVar13 + 0xf) = (char)uVar15;
      if (0xff < uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)(puVar13 + 2) = (char)uVar12;
      pvVar6 = (void *)FUN_146788523(uVar15 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
      memcpy(pvVar6,(void *)(uVar12 * 4 + param_1 + 0x40),uVar15 * 4);
      *puVar13 = (void *)((longlong)pvVar6 + uVar12 * -4);
    }
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar12 != 0) {
      uVar15 = *(ulonglong *)(param_1 + 0x10);
      uVar8 = uVar15 - uVar12;
      if (uVar12 <= uVar15) {
        uVar14 = *(uint *)(param_1 + 0x1c);
        do {
          uVar12 = (ulonglong)((uint)(uVar8 >> 7) & 0x7c);
          uVar5 = *(uint *)(param_3 + 0x2c + uVar12) & ~(1 << ((uint)(uVar8 >> 4) & 0x1f));
          *(uint *)(param_3 + 0x2c + uVar12) = uVar5;
          if (((uint)*(ulonglong *)(param_3 + 0x20) & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar12 = (ulonglong)
                   *(uint *)((*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                            (ulonglong)((uint)(uVar8 >> 6) & 0xfc));
          lVar10 = uVar12 * 8 + DAT_14c80ad08;
          if (uVar12 == 0) {
            lVar10 = 0;
          }
          if ((*(byte *)(lVar10 + 0x11) & 4) == 0) {
            FUN_146795935(lVar10,param_3);
          }
          if (uVar5 == 0) {
            lVar10 = *(longlong *)(param_3 + 0x18) + -1;
            if (lVar10 == 0) {
              FUN_146795211(param_3,0);
            }
            else {
              *(longlong *)(param_3 + 0x18) = lVar10;
            }
          }
          uVar8 = uVar8 + uVar14;
        } while (uVar8 < uVar15);
      }
    }
    if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x2c)) {
      *(undefined8 *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x28) * 8) =
           *(undefined8 *)(param_1 + 0x30);
      if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
         ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((param_2 & 6) == 0) {
        uVar12 = (ulonglong)
                 *(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
        if (uVar12 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar10 = DAT_14c80ad08 + uVar12;
        uVar12 = 0x20;
        uVar15 = 0;
      }
      else {
        if ((uVar11 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        plVar9 = (longlong *)(param_2 & 0xfffffffffffffff8);
        if ((ulonglong)*(byte *)((longlong)plVar9 + 0xf) == 0) {
          return;
        }
        uVar15 = (ulonglong)*(byte *)(plVar9 + 2);
        uVar12 = *(byte *)((longlong)plVar9 + 0xf) + uVar15;
        lVar10 = *plVar9;
      }
      do {
        uVar11 = *(uint *)(param_1 + 0x40 + uVar15 * 4) & *(uint *)(lVar10 + uVar15 * 4);
        if (uVar11 != 0) {
          do {
            uVar14 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar5 = uVar14 | (int)uVar15 << 5;
            bVar2 = (byte)uVar14 & 0x1f;
            uVar8 = (ulonglong)(uVar5 >> 3 & 0x7c);
            uVar14 = *(uint *)(param_3 + 0x2c + uVar8) & ~(1 << (uVar14 & 0x1f));
            *(uint *)(param_3 + 0x2c + uVar8) = uVar14;
            if (((uint)*(ulonglong *)(param_3 + 0x20) & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar8 = (ulonglong)
                    *(uint *)((*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                             (ulonglong)(uVar5 >> 2 & 0xfc));
            lVar7 = uVar8 * 8 + DAT_14c80ad08;
            if (uVar8 == 0) {
              lVar7 = 0;
            }
            if ((*(byte *)(lVar7 + 0x11) & 4) == 0) {
              FUN_146795935(lVar7,param_3);
            }
            if (uVar14 == 0) {
              lVar7 = *(longlong *)(param_3 + 0x18) + -1;
              if (lVar7 == 0) {
                FUN_146795211(param_3,0);
              }
              else {
                *(longlong *)(param_3 + 0x18) = lVar7;
              }
            }
            uVar11 = uVar11 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
          } while (uVar11 != 0);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar12);
    }
  }
  return;
}



// FUNCTION 146775dbf FUN_146775dbf body=83 status=ok
// SIG undefined FUN_146775dbf(void)

undefined8 FUN_146775dbf(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_14677d8b8(local_20,lVar1,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146775e13 FUN_146775e13 body=101 status=ok
// SIG undefined FUN_146775e13(void)

undefined8 FUN_146775e13(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  uVar1 = FUN_14678d3d7(&DAT_149dfb8c0,param_2);
  uVar1 = FUN_14678d54e(&DAT_14c758420,0x20000,uVar1,param_1);
  if (param_3 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return uVar1;
}



// FUNCTION 146775e78 FUN_146775e78 body=93 status=ok
// SIG undefined FUN_146775e78(void)

void FUN_146775e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_14678d689(&DAT_14c758420,0x20000,param_1);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  FUN_14678d689(&DAT_14c758420,0x20000,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146775ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  return;
}



// FUNCTION 146775ed5 FUN_146775ed5 body=56 status=ok
// SIG undefined FUN_146775ed5(void)

void FUN_146775ed5(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar1 = param_1;
  }
  FUN_14678cf2b(*(longlong *)(*param_1 + 0x28) + 0x100,&DAT_149dfb8c0,0,plVar1,param_2);
  return;
}



// FUNCTION 146775f2f FUN_146775f2f body=1089 status=ok
// SIG undefined FUN_146775f2f(void)

void FUN_146775f2f(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint3 uVar5;
  bool bVar6;
  void *_Dst;
  PSRWLOCK SRWLock;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  
  lVar3 = DAT_14c80ad08;
  if (DAT_14c758428 == 0) {
    lVar11 = 0;
  }
  else {
    uVar14 = *(ulonglong *)(param_2 + 0x20);
    uVar15 = (uint)(uVar14 >> 0x15) & 0xfffffff ^ (uint)(uVar14 >> 0x11);
    uVar15 = uVar15 * 0x20 + (uVar15 ^ 0xdeadbeef);
    uVar15 = uVar15 >> 0xb ^ uVar15;
    uVar10 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar15);
    uVar21 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar10 * 0x10);
    if (uVar21 != uVar14) {
      lVar11 = 0;
      do {
        uVar15 = uVar15 + 1;
        if (uVar21 == 0xffffffffffffffff) goto LAB_146775fac;
        uVar10 = (ulonglong)(uVar15 & *(uint *)(DAT_14c758428 + 0xc));
        uVar21 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar10 * 0x10);
      } while (uVar21 != uVar14);
    }
    lVar11 = *(longlong *)(DAT_14c758428 + 0x28 + uVar10 * 0x10);
  }
LAB_146775fac:
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar14 = *(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8;
  uVar5 = *(uint3 *)(uVar14 + 8);
  if (*(longlong *)(lVar11 + 8) == 0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)FUN_146794d20(lVar11,0);
  }
  if (0x1f < *(byte *)(param_2 + 4)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar21 = (ulonglong)uVar5;
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar17 = (int)(1L << (*(byte *)(param_2 + 4) & 0x3f));
  uVar9 = -iVar17 & (*(int *)(lVar3 + 0x20 + uVar21 * 8) + iVar17) - 1U;
  uVar15 = uVar9 + iVar2;
  if (uVar15 < 0x20001) {
    uVar7 = uVar15;
    if ((uVar15 ^ uVar9) < 0x1000) {
      uVar18 = uVar9 + iVar2 * 2;
      iVar17 = 1;
      do {
        if (0x20000 < uVar18) {
          uVar7 = uVar15;
          uVar15 = 0x20000;
          break;
        }
        uVar15 = uVar15 + iVar2;
        iVar17 = iVar17 + 1;
        uVar13 = uVar18 ^ uVar9;
        uVar18 = uVar18 + iVar2;
        uVar7 = uVar15;
      } while (uVar13 < 0x1000);
      if (iVar17 == 0) goto LAB_146776025;
    }
    *(uint *)(lVar3 + 0x20 + uVar21 * 8) = uVar15;
    uVar21 = *(ulonglong *)(lVar3 + uVar21 * 8);
    if ((uVar21 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar3 = *(longlong *)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x1c);
    *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar7 + lVar3;
    *(uint *)(param_2 + 0x18) = (uVar7 - uVar9) - iVar2;
    if (uVar9 < uVar7) {
      uVar21 = uVar21 & 0xfffffffffffffffe;
      uVar10 = (ulonglong)uVar9;
      do {
        uVar18 = 1 << ((byte)(uVar10 >> 9) & 0x1f);
        uVar20 = (ulonglong)(uint)((int)(uVar10 >> 0xe) * 4);
        puVar1 = (uint *)(param_2 + 0x40 + uVar20);
        *puVar1 = *puVar1 | uVar18;
        uVar15 = *(uint *)(lVar11 + 0x2c + uVar20);
        if (uVar15 == 0) {
          *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 1;
        }
        uVar8 = uVar10 >> 0xc;
        uVar16 = (ulonglong)*(uint *)(uVar21 + 0x14 + uVar8 * 4);
        uVar20 = DAT_14c80ad08 + uVar16 * 8;
        if (uVar16 == 0) {
          uVar20 = 0;
        }
        if ((uVar20 != 0) && (uVar20 != uVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar14 == 0) {
          uVar19 = 0;
        }
        else {
          uVar20 = uVar14 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar20 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar19 = (undefined4)(uVar20 >> 3);
        }
        *(undefined4 *)(uVar21 + 0x14 + uVar8 * 4) = uVar19;
        *(uint *)(lVar11 + 0x2c + (uVar10 >> 0xe) * 4) = uVar15 | uVar18;
        if (iVar2 != 0) {
          uVar10 = (ulonglong)(uint)((int)uVar10 + iVar2);
          if (0x1ffff < uVar10 - 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar20 = uVar10 - 1 >> 0xc;
          if (uVar8 <= uVar20) {
            do {
              cVar12 = *(char *)(lVar11 + 0x4c + uVar8);
              if (cVar12 == -1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              cVar12 = cVar12 + '\x01';
              if (cVar12 == -1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(char *)(lVar11 + 0x4c + uVar8) = cVar12;
              uVar8 = uVar8 + 1;
            } while (uVar20 + 1 != uVar8);
          }
        }
      } while ((uint)uVar10 < uVar7);
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    *param_1 = lVar3 + (ulonglong)uVar9;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
LAB_146776025:
    if ((0xd < (uint)(int)*(char *)(param_2 + 8)) ||
       ((0x2aa8U >> ((int)*(char *)(param_2 + 8) & 0x1fU) & 1) == 0)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar14 = 0xffffffffffffffff;
    bVar6 = false;
    uVar21 = 0xffffffffffffffff;
    uVar10 = 0;
    do {
      bVar23 = *(int *)(param_2 + 0x40 + uVar10 * 4) != 0;
      if (bVar23) {
        uVar21 = uVar10;
      }
      if (bVar23 && !bVar6) {
        bVar6 = true;
        uVar14 = uVar10;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 8);
    if (!bVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar21 = (uVar21 + 1) - uVar14;
    if (uVar21 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (0xff < uVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    puVar22 = (undefined8 *)(*(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8);
    *(char *)((longlong)puVar22 + 0xf) = (char)uVar21;
    if (0xff < uVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    *(char *)(puVar22 + 2) = (char)uVar14;
    _Dst = (void *)FUN_146788523(uVar21 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
    memcpy(_Dst,(void *)(param_2 + 0x40 + uVar14 * 4),uVar21 * 4);
    *puVar22 = (void *)((longlong)_Dst + uVar14 * -4);
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(lVar11 + 8));
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 146776370 FUN_146776370 body=1321 status=ok
// SIG undefined FUN_146776370(void)

bool FUN_146776370(longlong param_1,longlong *param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  byte local_79;
  longlong *local_78;
  uint local_70;
  int local_6c;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  PSRWLOCK local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint3 *)(param_2 + 1) != 0) && ((ulonglong)*(uint3 *)(param_2 + 1) << 3 != -DAT_14c80ad08))
  {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  local_79 = *(byte *)(param_1 + 4);
  uVar13 = 1L << (local_79 & 0x3f);
  plVar20 = *(longlong **)(param_3 + 0x18);
  local_78 = param_2;
  local_68 = param_1;
  uVar5 = FUN_1467999c9(*(longlong *)(*plVar20 + 0x28) + 0x160,*(uint *)(param_3 + 0x20) & 0x7ffffff
                        ,&DAT_149dfb8c0);
  local_60 = uVar13;
  puVar6 = (ulonglong *)FUN_146795aef(uVar5,iVar2,uVar13 & 0xffffffff,0);
  if (puVar6 != (ulonglong *)0x0) {
    local_6c = (int)local_60 + -1;
    local_70 = -(int)local_60;
    local_58 = (ulonglong)(uint)(iVar2 * 2);
    do {
      SRWLock = (PSRWLOCK)(puVar6 + 1);
      AcquireSRWLockExclusive(SRWLock);
      if ((*puVar6 & 1) == 0) {
        local_88 = &DAT_149dfb8c0;
        puVar7 = (ulonglong *)FUN_14679708b(puVar6,plVar20,uVar5,local_78);
      }
      else {
        puVar7 = (ulonglong *)(*puVar6 & 0xfffffffffffffffe);
      }
      if (puVar7 == (ulonglong *)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
        goto LAB_14677660c;
      }
      if (DAT_14c758428 == 0) {
LAB_146776514:
        lVar21 = 0;
      }
      else {
        uVar13 = *puVar7;
        uVar16 = (uint)(uVar13 >> 0x15) & 0xfffffff ^ (uint)(uVar13 >> 0x11);
        uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
        uVar16 = uVar16 >> 0xb ^ uVar16;
        uVar19 = (ulonglong)(uVar16 & *(uint *)(DAT_14c758428 + 0xc));
        uVar12 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar19 * 0x10);
        while (uVar12 != uVar13) {
          uVar16 = uVar16 + 1;
          if (uVar12 == 0xffffffffffffffff) goto LAB_146776514;
          uVar19 = (ulonglong)(uVar16 & *(uint *)(DAT_14c758428 + 0xc));
          uVar12 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar19 * 0x10);
        }
        lVar21 = *(longlong *)(DAT_14c758428 + 0x28 + uVar19 * 0x10);
      }
      local_50 = (PSRWLOCK)0x0;
      if (*(longlong *)(lVar21 + 8) != 0) {
        local_50 = (PSRWLOCK)FUN_146794d20(lVar21,0);
      }
      plVar20 = local_78;
      if (0x1f < local_79) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar14 = (int)puVar6[4] + local_6c & local_70;
      uVar13 = (ulonglong)uVar14;
      uVar16 = uVar14 + iVar2;
      if (uVar16 < 0x20001) {
        uVar10 = uVar16;
        if ((uVar16 ^ uVar14) < 0x1000) {
          uVar11 = (int)local_58 + uVar14;
          iVar9 = 1;
          do {
            if (0x20000 < uVar11) {
              uVar10 = 0x20000;
              break;
            }
            uVar16 = uVar16 + iVar2;
            iVar9 = iVar9 + 1;
            uVar17 = uVar11 ^ uVar14;
            uVar11 = uVar11 + iVar2;
            uVar10 = uVar16;
          } while (uVar17 < 0x1000);
          if (iVar9 == 0) goto LAB_146776552;
        }
        *(uint *)(puVar6 + 4) = uVar10;
        FUN_146795992(local_78,puVar6,puVar7);
        FUN_146795544(lVar21,&local_50,1);
        uVar12 = (longlong)puVar6 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar12 < 8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar12 = uVar12 >> 3;
        lVar8 = 8;
        do {
          *(char *)((longlong)plVar20 + lVar8) = (char)uVar12;
          uVar12 = uVar12 >> 8;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0xb);
        uVar10 = (int)(char)*(uint *)(local_68 + 8) - 2;
        if (0xb < uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(uint *)(local_68 + 8) =
             *(uint *)(local_68 + 8) & 0xffffff00 |
             *(uint *)(&DAT_149dfbcfc + (ulonglong)uVar10 * 4);
        lVar3 = *(longlong *)(lVar21 + -0x10);
        *(longlong *)(local_68 + 0x20) = lVar3;
        lVar8 = local_68 + 0x40;
        *(undefined8 *)(local_68 + 0x40) = 0;
        *(undefined8 *)(local_68 + 0x48) = 0;
        *(undefined8 *)(local_68 + 0x50) = 0;
        *(undefined8 *)(local_68 + 0x58) = 0;
        iVar2 = *(int *)(local_68 + 0x1c);
        *(ulonglong *)(local_68 + 0x10) = (ulonglong)uVar16 + lVar3;
        *(uint *)(local_68 + 0x18) = uVar16 - uVar14;
        while (uVar14 < uVar16) {
          uVar10 = 1 << ((byte)(uVar13 >> 9) & 0x1f);
          uVar12 = (ulonglong)(uint)((int)(uVar13 >> 0xe) * 4);
          puVar1 = (uint *)(lVar8 + uVar12);
          *puVar1 = *puVar1 | uVar10;
          uVar14 = *(uint *)(lVar21 + 0x2c + uVar12);
          if (uVar14 == 0) {
            *(longlong *)(lVar21 + 0x18) = *(longlong *)(lVar21 + 0x18) + 1;
          }
          uVar12 = uVar13 >> 0xc;
          uVar19 = (ulonglong)*(uint *)((longlong)puVar7 + uVar12 * 4 + 0x14);
          plVar20 = (longlong *)(DAT_14c80ad08 + uVar19 * 8);
          if (uVar19 == 0) {
            plVar20 = (longlong *)0x0;
          }
          if (plVar20 != local_78 && plVar20 != (longlong *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (local_78 == (longlong *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar19 = (longlong)local_78 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar19) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if ((uVar19 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (uVar19 < 8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar18 = (undefined4)(uVar19 >> 3);
          }
          *(undefined4 *)((longlong)puVar7 + uVar12 * 4 + 0x14) = uVar18;
          *(uint *)(lVar21 + 0x2c + (uVar13 >> 0xe) * 4) = uVar14 | uVar10;
          if (iVar2 != 0) {
            uVar13 = (ulonglong)(uint)((int)uVar13 + iVar2);
            if (0x1ffff < uVar13 - 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar19 = uVar13 - 1 >> 0xc;
            if (uVar12 <= uVar19) {
              do {
                cVar15 = *(char *)(lVar21 + 0x4c + uVar12);
                if (cVar15 == -1) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                cVar15 = cVar15 + '\x01';
                if (cVar15 == -1) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                *(char *)(lVar21 + 0x4c + uVar12) = cVar15;
                uVar12 = uVar12 + 1;
              } while (uVar19 + 1 != uVar12);
            }
          }
          plVar20 = local_78;
          uVar14 = (uint)uVar13;
        }
        *(ulonglong *)(local_68 + 0x38) = (ulonglong)plVar20 | 4;
        *(byte *)((longlong)plVar20 + 0x11) = *(byte *)((longlong)plVar20 + 0x11) | 0x10;
        ReleaseSRWLockExclusive(SRWLock);
        *plVar20 = lVar8;
        if ((char)plVar20[2] != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(undefined1 *)((longlong)plVar20 + 0xf) = 8;
        if (local_50 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_50);
          local_50 = (PSRWLOCK)0x0;
        }
LAB_14677660c:
        if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
          return puVar7 != (ulonglong *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
LAB_146776552:
      if (local_50 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_50);
      }
      ReleaseSRWLockExclusive(SRWLock);
      plVar20 = *(longlong **)(param_3 + 0x18);
      uVar5 = FUN_1467999c9(*(longlong *)(*plVar20 + 0x28) + 0x160,
                            *(uint *)(param_3 + 0x20) & 0x7ffffff,&DAT_149dfb8c0);
      puVar6 = (ulonglong *)FUN_146795aef(uVar5,iVar2,local_60,0);
    } while (puVar6 != (ulonglong *)0x0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



// FUNCTION 14677689a FUN_14677689a body=5003 status=ok
// SIG undefined FUN_14677689a(void)

ulonglong FUN_14677689a(longlong param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  char cVar10;
  BOOLEAN BVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong *puVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  PSRWLOCK pRVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_b8 [32];
  PSRWLOCK *local_98;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  PSRWLOCK local_70;
  ulonglong local_68;
  PSRWLOCK local_60;
  PSRWLOCK local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar25 = *(ulonglong *)(param_1 + 0x38);
  if (((uint)uVar25 & 7) == 5) {
    pRVar28 = (PSRWLOCK)(uVar25 & 0xfffffffffffffff8);
  }
  else {
    pRVar28 = (PSRWLOCK)FUN_146799574(uVar25);
  }
  plVar6 = pRVar28[3].Ptr;
  if (((*(byte *)(*plVar6 + 4) & 1) == 0) &&
     (uVar25 = (ulonglong)*(uint *)((longlong)plVar6 + 0x24), uVar25 != 0)) {
    uVar13 = plVar6[1];
    if (uVar13 != 0) {
      uVar29 = uVar13 & 0xfffffffffe000000;
      uVar13 = (ulonglong)((uint)uVar13 & 0x1ffffff);
      uVar31 = uVar13 - 0x4008 >> 0xe;
      uVar13 = (uVar13 + uVar25 * 4) - 0x4001 >> 0xe;
      do {
        uVar32 = *(ulonglong *)(uVar29 + 0x18 + uVar31 * 8);
        uVar26 = (uint)uVar32 & 7;
        if (uVar26 == 2) break;
        if (uVar26 == 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if ((uVar32 & 7) == 0) break;
        puVar30 = (ulonglong *)(uVar29 + 0x18 + uVar31 * 8);
        LOCK();
        bVar33 = uVar32 == *puVar30;
        if (bVar33) {
          *puVar30 = uVar32 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar33);
      if (uVar31 != uVar13) {
        do {
          uVar31 = *(ulonglong *)(uVar29 + 0x18 + uVar13 * 8);
          if (((uint)uVar31 & 7) < 3) break;
          puVar30 = (ulonglong *)(uVar29 + 0x18 + uVar13 * 8);
          LOCK();
          bVar33 = uVar31 == *puVar30;
          if (bVar33) {
            *puVar30 = uVar31 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar33);
      }
    }
    uVar13 = plVar6[2];
    if (uVar13 != 0) {
      uVar29 = uVar13 & 0xfffffffffe000000;
      uVar13 = (ulonglong)((uint)uVar13 & 0x1ffffff);
      uVar31 = uVar13 - 0x4008 >> 0xe;
      uVar25 = (uVar13 + uVar25 * 4) - 0x4001 >> 0xe;
      do {
        uVar13 = *(ulonglong *)(uVar29 + 0x18 + uVar31 * 8);
        uVar26 = (uint)uVar13 & 7;
        if (uVar26 == 2) break;
        if (uVar26 == 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if ((uVar13 & 7) == 0) break;
        puVar30 = (ulonglong *)(uVar29 + 0x18 + uVar31 * 8);
        LOCK();
        bVar33 = uVar13 == *puVar30;
        if (bVar33) {
          *puVar30 = uVar13 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar33);
      if (uVar31 != uVar25) {
        do {
          uVar13 = *(ulonglong *)(uVar29 + 0x18 + uVar25 * 8);
          if (((uint)uVar13 & 7) < 3) break;
          puVar30 = (ulonglong *)(uVar29 + 0x18 + uVar25 * 8);
          LOCK();
          bVar33 = uVar13 == *puVar30;
          if (bVar33) {
            *puVar30 = uVar13 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar33);
      }
    }
  }
  lVar20 = (ulonglong)*(uint *)((longlong)plVar6 + 0x1c) * 8 + DAT_14c80ad08;
  if (lVar20 != 0 && (ulonglong)*(uint *)((longlong)plVar6 + 0x1c) != 0) {
    lVar14 = (ulonglong)*(uint *)(lVar20 + 8) * 8 + DAT_14c80ad08;
    if ((ulonglong)*(uint *)(lVar20 + 8) == 0) {
      lVar14 = 0;
    }
    if ((ulonglong)*(uint *)(lVar20 + 0xc) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar13 = (lVar14 - DAT_14c80acf8) - 8U >> 0xe;
      uVar25 = ((lVar14 - DAT_14c80acf8) + (ulonglong)*(uint *)(lVar20 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar29 = *(ulonglong *)(&DAT_14c8084f8 + uVar13 * 8);
        uVar26 = (uint)uVar29 & 7;
        if (uVar26 == 2) break;
        if (uVar26 == 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if ((uVar29 & 7) == 0) break;
        LOCK();
        bVar33 = uVar29 == *(ulonglong *)(&DAT_14c8084f8 + uVar13 * 8);
        if (bVar33) {
          *(ulonglong *)(&DAT_14c8084f8 + uVar13 * 8) = uVar29 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar33);
      if (uVar13 != uVar25) {
        do {
          uVar13 = *(ulonglong *)(&DAT_14c8084f8 + uVar25 * 8);
          if (((uint)uVar13 & 7) < 3) break;
          LOCK();
          bVar33 = uVar13 == *(ulonglong *)(&DAT_14c8084f8 + uVar25 * 8);
          if (bVar33) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar25 * 8) = uVar13 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar33);
      }
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x100;
  cVar10 = FUN_146790ea6();
  if (cVar10 != '\0') {
    FUN_146790ecd();
  }
  uVar25 = *(ulonglong *)(param_1 + 0x20);
  if (uVar25 == 0) {
    lVar20 = 0;
    uVar25 = 0;
  }
  else {
    if (DAT_14c758428 == 0) {
      lVar20 = 0;
    }
    else {
      uVar26 = (uint)(uVar25 >> 0x15) & 0xfffffff ^ (uint)(uVar25 >> 0x11);
      uVar26 = uVar26 * 0x20 + (uVar26 ^ 0xdeadbeef);
      uVar26 = uVar26 >> 0xb ^ uVar26;
      uVar29 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar26);
      uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar29 * 0x10);
      if (uVar13 != (uVar25 & 0xfffffffffffe0000)) {
        lVar20 = 0;
        do {
          uVar26 = uVar26 + 1;
          if (uVar13 == 0xffffffffffffffff) goto LAB_14677699b;
          uVar29 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
          uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar29 * 0x10);
        } while (uVar13 != (uVar25 & 0xfffffffffffe0000));
      }
      lVar20 = *(longlong *)(DAT_14c758428 + 0x28 + uVar29 * 0x10);
    }
LAB_14677699b:
    uVar25 = *(ulonglong *)(lVar20 + 0x20);
    if ((uVar25 & 6) != 0) {
      if (((uint)uVar25 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar25 = *(ulonglong *)(param_1 + 0x38);
      if (((uint)uVar25 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar13 = (ulonglong)pRVar28 | 5;
  if (pRVar28 == (PSRWLOCK)0x0) {
    uVar13 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(ulonglong *)(param_1 + 0x38) = uVar13;
  *(undefined1 *)(param_1 + 8) = 8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar13 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8)
  ;
  if (uVar13 < 2) {
    uVar17 = 0;
    uVar13 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(uVar13 + 0x1f50);
    FUN_14679ea20(uVar13);
  }
  local_60 = (PSRWLOCK)0x0;
  if (uVar25 == 0) {
LAB_146776d55:
    if (uVar13 == 0) {
LAB_1467773a8:
      uVar29 = FUN_146798201(pRVar28);
      lVar14 = DAT_14c80ad08;
      if (uVar29 == 0) {
        uVar29 = 0;
      }
      else {
        uVar26 = (uint)uVar29 & 7;
        local_88 = uVar17;
        if (uVar26 < 2) {
          puVar30 = (ulonglong *)(uVar29 & 0xfffffffffffffff8);
          if (*(char *)((longlong)puVar30 + 0xb) == '\0') {
            uVar13 = (ulonglong)(uint3)puVar30[1];
            local_70 = pRVar28;
            if (*puVar30 == 0) {
              cVar10 = *(char *)(DAT_14c80ad08 + 0xd + uVar13 * 8);
              local_80 = param_1;
              local_68 = uVar25;
              if (cVar10 != '\x01') {
                if (cVar10 != '\x02') {
                  if (cVar10 != '\0') {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                local_98 = (PSRWLOCK *)0x0;
                FUN_14678ec28(0x20000,&DAT_149dfb8c0,0,0);
                if (*puVar30 != 0) goto LAB_1467775be;
              }
              local_78 = uVar29;
              FUN_14678f287(&local_58);
              do {
                if (*puVar30 != 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                FUN_14678f28e(&local_58);
                AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                plVar6 = *(longlong **)(lVar14 + 0x18 + uVar13 * 8);
                lVar21 = *plVar6;
                plVar23 = (longlong *)0x0;
                if ((*(byte *)(lVar21 + 4) & 2) != 0) {
                  plVar23 = plVar6;
                }
                local_98 = &local_58;
                uVar25 = FUN_14678cf2b(*(longlong *)(lVar21 + 0x28) + 0x100,&DAT_149dfb8c0,0,plVar23
                                      );
                *puVar30 = uVar25;
                if (uVar25 != 0) {
                  uVar17 = FUN_14678d3d7(&DAT_149dfb8c0,4);
                  FUN_14678d54e(&DAT_14c758420,0x20000,uVar17,uVar25);
                }
                ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                cVar10 = FUN_14678f2c1(&local_58);
              } while (cVar10 == '\0');
              uVar29 = local_78;
              if (*puVar30 == 0) {
                param_1 = local_80;
                uVar25 = local_68;
                pRVar28 = local_70;
                uVar29 = 0;
                uVar17 = local_88;
                goto LAB_146776de3;
              }
            }
            else {
              pRVar28 = (PSRWLOCK)(puVar30 + 2);
              local_80 = param_1;
              local_68 = uVar25;
              AcquireSRWLockExclusive(pRVar28);
              cVar10 = *(char *)(lVar14 + 0xd + uVar13 * 8);
              local_58 = pRVar28;
              if (cVar10 != '\x01') {
                if (cVar10 != '\x02') {
                  if (cVar10 != '\0') {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                local_98 = (PSRWLOCK *)&DAT_00000001;
                FUN_14678ec28(0x20000,&DAT_149dfb8c0,0,&local_58);
              }
              FUN_14678d48b(*puVar30,&DAT_149dfb8c0);
              FUN_146775e13(*puVar30,4,0);
              ReleaseSRWLockExclusive(pRVar28);
            }
LAB_1467775be:
            pRVar28 = local_70;
            param_1 = local_80;
            if (DAT_14c758428 == 0) {
              uVar17 = 0;
            }
            else {
              uVar25 = *puVar30;
              uVar26 = (uint)(uVar25 >> 0x15) & 0xfffffff ^ (uint)(uVar25 >> 0x11);
              uVar26 = uVar26 * 0x20 + (uVar26 ^ 0xdeadbeef);
              uVar26 = uVar26 >> 0xb ^ uVar26;
              uVar31 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
              uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar31 * 0x10);
              if (uVar13 != uVar25) {
                uVar17 = 0;
                do {
                  uVar26 = uVar26 + 1;
                  if (uVar13 == 0xffffffffffffffff) goto LAB_146777636;
                  uVar31 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
                  uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar31 * 0x10);
                } while (uVar13 != uVar25);
              }
              uVar17 = *(undefined8 *)(DAT_14c758428 + 0x28 + uVar31 * 0x10);
            }
LAB_146777636:
            FUN_146794f45(uVar17,(longlong)puVar30 + 1,0,&DAT_149dfb8c0);
            AcquireSRWLockExclusive((PSRWLOCK)(puVar30 + 3));
            *(undefined1 *)((longlong)puVar30 + 0xb) = 1;
            ReleaseSRWLockExclusive((PSRWLOCK)(puVar30 + 3));
            uVar25 = local_68;
            uVar17 = local_88;
          }
        }
        else {
          if (uVar26 != 4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (((uint)uVar29 & 7) != 4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            local_80 = param_1;
            (*pcVar8)();
          }
          plVar23 = (longlong *)(uVar29 & 0xfffffffffffffff8);
          uVar13 = (ulonglong)
                   ((uint)*(byte *)((longlong)plVar23 + 0xd) * 0x80000 +
                   (uint)*(ushort *)((longlong)plVar23 + 0xb) * 8);
          plVar6 = *(longlong **)(uVar13 + 0x18 + DAT_14c80ad08);
          local_80 = param_1;
          local_78 = uVar29;
          uVar16 = FUN_1467999c9(*(longlong *)(*plVar6 + 0x28) + 0x160,
                                 *(uint *)(uVar13 + 0x20 + DAT_14c80ad08) & 0x7ffffff,&DAT_149dfb8c0
                                );
          puVar30 = (ulonglong *)((ulonglong)*(uint3 *)(plVar23 + 1) * 8 + DAT_14c80ad08);
          param_1 = local_80;
          uVar29 = local_78;
          uVar17 = local_88;
          if (puVar30 != (ulonglong *)0x0 && *(uint3 *)(plVar23 + 1) != 0) {
            local_70 = (PSRWLOCK)(puVar30 + 1);
            AcquireSRWLockExclusive(local_70);
            if ((*puVar30 & 1) == 0) {
              local_98 = (PSRWLOCK *)&DAT_149dfb8c0;
              puVar18 = (ulonglong *)FUN_14679708b(puVar30,plVar6,uVar16,plVar23);
            }
            else {
              puVar18 = (ulonglong *)(*puVar30 & 0xfffffffffffffffe);
            }
            if (puVar18 == (ulonglong *)0x0) {
              ReleaseSRWLockExclusive(local_70);
              param_1 = local_80;
              uVar29 = 0;
              uVar17 = local_88;
            }
            else {
              if ((*(byte *)((longlong)plVar23 + 0x11) & 0x10) == 0) {
                if ((ulonglong)*(byte *)((longlong)plVar23 + 0xf) != 0) {
                  lVar14 = *plVar23;
                  uVar29 = (ulonglong)*(byte *)(plVar23 + 2);
                  uVar13 = *(byte *)((longlong)plVar23 + 0xf) + uVar29;
                  do {
                    uVar26 = *(uint *)(lVar14 + uVar29 * 4);
                    if (uVar26 != 0) {
                      do {
                        uVar4 = 0;
                        if (uVar26 != 0) {
                          for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                          }
                        }
                        uVar32 = (uVar29 << 5 | (ulonglong)uVar4) >> 3;
                        uVar31 = (ulonglong)*(uint *)((longlong)puVar18 + uVar32 * 4 + 0x14);
                        if (((uVar31 != 0) &&
                            (plVar6 = (longlong *)(DAT_14c80ad08 + uVar31 * 8),
                            plVar6 != (longlong *)0x0)) && (plVar6 != plVar23)) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)invalidInstructionException();
                          local_68 = uVar25;
                          (*pcVar8)();
                        }
                        if (plVar23 == (longlong *)0x0) {
                          uVar24 = 0;
                        }
                        else {
                          uVar31 = (longlong)plVar23 - DAT_14c80ad08;
                          if (DAT_14c758498 <= uVar31) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)invalidInstructionException();
                            local_68 = uVar25;
                            (*pcVar8)();
                          }
                          if ((uVar31 & 7) != 0) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)invalidInstructionException();
                            local_68 = uVar25;
                            (*pcVar8)();
                          }
                          if (uVar31 < 8) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)invalidInstructionException();
                            local_68 = uVar25;
                            (*pcVar8)();
                          }
                          uVar24 = (undefined4)(uVar31 >> 3);
                        }
                        *(undefined4 *)((longlong)puVar18 + uVar32 * 4 + 0x14) = uVar24;
                        bVar12 = (byte)uVar4 & 0x1f;
                        uVar26 = uVar26 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
                      } while (uVar26 != 0);
                    }
                    uVar29 = uVar29 + 1;
                  } while (uVar29 < uVar13);
                }
                local_68 = uVar25;
                AcquireSRWLockExclusive((PSRWLOCK)(puVar30 + 2));
                *(byte *)((longlong)plVar23 + 0x11) = *(byte *)((longlong)plVar23 + 0x11) | 0x10;
                ReleaseSRWLockExclusive((PSRWLOCK)(puVar30 + 2));
                uVar25 = local_68;
              }
              uVar29 = local_78;
              param_1 = local_80;
              uVar17 = local_88;
              if (DAT_14c758428 == 0) {
                lVar14 = 0;
              }
              else {
                uVar13 = *puVar18;
                uVar26 = (uint)(uVar13 >> 0x15) & 0xfffffff ^ (uint)(uVar13 >> 0x11);
                uVar26 = uVar26 * 0x20 + (uVar26 ^ 0xdeadbeef);
                uVar26 = uVar26 >> 0xb ^ uVar26;
                uVar32 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
                uVar31 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar32 * 0x10);
                if (uVar31 != uVar13) {
                  lVar14 = 0;
                  do {
                    uVar26 = uVar26 + 1;
                    if (uVar31 == 0xffffffffffffffff) goto LAB_1467778ee;
                    uVar32 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
                    uVar31 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar32 * 0x10);
                  } while (uVar31 != uVar13);
                }
                lVar14 = *(longlong *)(DAT_14c758428 + 0x28 + uVar32 * 0x10);
              }
LAB_1467778ee:
              local_58 = (PSRWLOCK)0x0;
              if (*(longlong *)(lVar14 + 8) != 0) {
                local_58 = (PSRWLOCK)FUN_146794d20(lVar14,0);
              }
              FUN_146795544(lVar14,&local_58,1);
              if (local_58 != (PSRWLOCK)0x0) {
                ReleaseSRWLockExclusive(local_58);
                local_58 = (PSRWLOCK)0x0;
              }
              ReleaseSRWLockExclusive(local_70);
            }
          }
        }
      }
    }
    else {
      uVar26 = *(uint *)&pRVar28[5].Ptr;
      if (uVar26 < *(uint *)(uVar13 + 0x1f74)) {
        local_50 = (undefined1 *)(uVar13 + (ulonglong)uVar26 * 8 + 0x1f80);
      }
      else if ((uVar26 == 0xffffffff) ||
              (FUN_14679dc84(&local_58,uVar13,(ulonglong)uVar26,0), ((ulonglong)local_58 & 1) == 0))
      goto LAB_1467773a8;
      *local_50 = 1;
      if ((local_50[3] & 0x7f) != 4) {
LAB_14677738f:
        FUN_14678c309(local_50,0,4);
LAB_14677739f:
        *(undefined2 *)(local_50 + 1) = 0x100;
        *local_50 = 0;
        goto LAB_1467773a8;
      }
      bVar12 = local_50[5];
      if (local_50[6] == bVar12) {
        if (local_50[7] == '\0') goto LAB_14677738f;
        if (local_50[7] == '\x02') goto LAB_146776da9;
        goto LAB_14677739f;
      }
LAB_146776da9:
      *(undefined2 *)(local_50 + 1) = 0x100;
      bVar19 = bVar12 + 1;
      if ((byte)local_50[4] <= bVar19) {
        bVar19 = 0;
      }
      local_50[5] = bVar19;
      uVar29 = (ulonglong)
               ((uint)(byte)local_50[(ulonglong)bVar12 * 3 + 10] * 0x80000 +
               (uint)*(ushort *)(local_50 + (ulonglong)bVar12 * 3 + 8) * 8) + DAT_14c80ad08;
      local_50[7] = 1;
      *local_50 = 0;
    }
LAB_146776de3:
    if (uVar25 != 0) {
      if (local_60 != *(PSRWLOCK *)(lVar20 + 8)) {
        local_60 = (PSRWLOCK)FUN_146794d20(lVar20);
      }
      lVar14 = DAT_14c80ad08;
      uVar26 = (uint)uVar25 & 7;
      if (uVar26 < 2) {
        uVar25 = uVar25 & 0xfffffffffffffff8;
        cVar10 = *(char *)(lVar20 + 2);
        if (cVar10 == '\x01') {
          *(undefined1 *)(lVar20 + 2) = 0;
        }
        uVar24 = *(undefined4 *)(uVar25 + 0xc);
        if (*(longlong *)(lVar20 + 0x18) == 0) {
          bVar33 = true;
        }
        else {
          lVar14 = 0;
          do {
            bVar33 = lVar14 != -0x20;
            if (lVar14 == -0x20) break;
            pcVar1 = (char *)(lVar20 + 0x6b + lVar14);
            lVar14 = lVar14 + -1;
          } while (*pcVar1 != '\0');
        }
        lVar14 = (ulonglong)
                 ((uint)*(byte *)(uVar25 + 10) * 0x80000 + (uint)*(ushort *)(uVar25 + 8) * 8) +
                 DAT_14c80ad08;
        *(undefined1 *)(lVar20 + 1) = 0;
        if (cVar10 != '\0') {
          FUN_146791662(lVar14,uVar24);
        }
        if (bVar33) {
          FUN_146791740(lVar14,uVar24);
        }
      }
      else {
        if (uVar26 != 4) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar25 = uVar25 & 0xfffffffffffffff8;
        uVar31 = (ulonglong)
                 ((uint)*(byte *)(uVar25 + 10) * 0x80000 + (uint)*(ushort *)(uVar25 + 8) * 8);
        uVar13 = *(ulonglong *)(uVar31 + DAT_14c80ad08);
        if ((uVar13 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        local_88 = uVar17;
        if ((*(byte *)(uVar25 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        bVar12 = *(byte *)(uVar25 + 0xd);
        uVar3 = *(ushort *)(uVar25 + 0xb);
        local_68 = *(ulonglong *)((uVar13 & 0xfffffffffffffffe) + 8);
        local_78 = uVar29;
        if ((*(PSRWLOCK *)(lVar20 + 8) != (PSRWLOCK)0x0) &&
           (BVar11 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(lVar20 + 8)), BVar11 != '\0')) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar31 = uVar31 + lVar14;
        if (*(int *)(uVar31 + 0x24) == 1) {
          if (*(longlong *)(lVar20 + 0x18) == 0) {
            bVar33 = true;
          }
          else {
            lVar21 = 0;
            do {
              bVar33 = lVar21 != -0x20;
              if (lVar21 == -0x20) break;
              pcVar1 = (char *)(lVar20 + 0x6b + lVar21);
              lVar21 = lVar21 + -1;
            } while (*pcVar1 != '\0');
          }
        }
        else {
          bVar33 = false;
        }
        bVar19 = *(byte *)(uVar25 + 0x11);
        *(byte *)(uVar25 + 0x11) = bVar19 & 0xfc;
        iVar5 = *(int *)(uVar31 + 0x24);
        if ((bVar19 & 2) == 0) {
          if (iVar5 == 0) {
LAB_146777b49:
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          *(int *)(uVar31 + 0x24) = iVar5 + -1;
        }
        else {
          if (iVar5 == 0) goto LAB_146777b49;
          *(int *)(uVar31 + 0x24) = iVar5 + -1;
          if ((*(byte *)(uVar25 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          FUN_146791720((ulonglong)((uint)bVar12 * 0x80000 + (uint)uVar3 * 8) + lVar14,uVar25 | 4);
        }
        uVar29 = local_78;
        uVar17 = local_88;
        if (bVar33) {
          if (*(int *)(uVar31 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          FUN_1467918b2(local_68,uVar31 | 2);
        }
      }
    }
    if (uVar29 == 0) {
      if (local_60 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_60);
        local_60 = (PSRWLOCK)0x0;
      }
      uVar25 = 0;
      goto LAB_146776d11;
    }
    if ((uVar29 & 6) == 0) {
      puVar30 = (ulonglong *)(uVar29 & 0xfffffffffffffff8);
      if (DAT_14c758428 == 0) {
        lVar20 = 0;
      }
      else {
        uVar25 = *puVar30;
        uVar26 = (uint)(uVar25 >> 0x15) & 0xfffffff ^ (uint)(uVar25 >> 0x11);
        uVar26 = uVar26 * 0x20 + (uVar26 ^ 0xdeadbeef);
        uVar26 = uVar26 >> 0xb ^ uVar26;
        uVar31 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
        uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar31 * 0x10);
        if (uVar13 != uVar25) {
          lVar20 = 0;
          do {
            uVar26 = uVar26 + 1;
            if (uVar13 == 0xffffffffffffffff) goto LAB_14677730f;
            uVar31 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
            uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar31 * 0x10);
          } while (uVar13 != uVar25);
        }
        lVar20 = *(longlong *)(DAT_14c758428 + 0x28 + uVar31 * 0x10);
      }
LAB_14677730f:
      FUN_146794dcc(lVar20,&local_60,uVar17);
      *(undefined1 *)(lVar20 + 1) = 1;
      FUN_146795544(lVar20,&local_60,0);
      *(ulonglong *)(lVar20 + 0x20) = uVar29 | 1;
      goto LAB_146776c37;
    }
    if (((uint)uVar29 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar29 = uVar29 & 0xfffffffffffffff8;
    if ((*(uint3 *)(uVar29 + 8) == 0) ||
       (puVar30 = (ulonglong *)((ulonglong)*(uint3 *)(uVar29 + 8) * 8 + DAT_14c80ad08),
       puVar30 == (ulonglong *)0x0)) {
      if (local_60 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_60);
        local_60 = (PSRWLOCK)0x0;
      }
      uVar26 = FUN_146776370(param_1,uVar29,pRVar28);
      uVar25 = (ulonglong)uVar26;
      goto LAB_146776d11;
    }
    uVar25 = *puVar30;
    if ((uVar25 & 1) != 0) {
      uVar25 = *(ulonglong *)(uVar25 & 0xfffffffffffffffe);
    }
    if (DAT_14c758428 == 0) {
      lVar20 = 0;
    }
    else {
      uVar26 = (uint)(uVar25 >> 0x15) & 0xfffffff ^ (uint)(uVar25 >> 0x11);
      uVar26 = uVar26 * 0x20 + (uVar26 ^ 0xdeadbeef);
      uVar26 = uVar26 >> 0xb ^ uVar26;
      uVar31 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar26);
      uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar31 * 0x10);
      if (uVar13 != uVar25) {
        lVar20 = 0;
        do {
          uVar26 = uVar26 + 1;
          if (uVar13 == 0xffffffffffffffff) goto LAB_14677709a;
          uVar31 = (ulonglong)(uVar26 & *(uint *)(DAT_14c758428 + 0xc));
          uVar13 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar31 * 0x10);
        } while (uVar13 != uVar25);
      }
      lVar20 = *(longlong *)(DAT_14c758428 + 0x28 + uVar31 * 0x10);
    }
LAB_14677709a:
    if (local_60 != *(PSRWLOCK *)(lVar20 + 8)) {
      local_60 = (PSRWLOCK)FUN_146794d20(lVar20);
    }
    if ((*puVar30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    FUN_146795992(uVar29,puVar30,*puVar30 & 0xfffffffffffffffe);
LAB_1467770c8:
    uVar25 = *(ulonglong *)(lVar20 + -0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar13 = uVar29 | 4;
    if (uVar29 == 0) {
      uVar13 = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (((uint)uVar13 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    puVar30 = (ulonglong *)(uVar13 & 0xfffffffffffffff8);
    bVar12 = (byte)puVar30[2];
    uVar32 = (ulonglong)bVar12;
    bVar19 = *(byte *)((longlong)puVar30 + 0xf);
    local_78 = *puVar30;
    *(ulonglong *)(param_1 + 0x38) = uVar13;
    uVar26 = (uint)bVar19 + (uint)bVar12 + 1;
    uVar31 = (ulonglong)((uint)bVar19 + (uint)bVar12);
    bVar19 = bVar12 >> 1;
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x28) = (uint)bVar19;
    *(uint *)(param_1 + 0x2c) = uVar26 >> 1 & 0xff;
    uVar29 = 0;
    memset((void *)((ulonglong)(uint)bVar19 * 8 + 0x40 + param_1),0,
           (ulonglong)((uVar26 & 0xfffffffe) - (bVar12 & 0xfffffffe)) << 2);
    *(ulonglong *)(param_1 + 0x20) = (ulonglong)bVar19 * 0x8000 + uVar25;
    local_68 = uVar31;
    if (uVar32 < uVar31) {
      local_70 = (PSRWLOCK)(param_1 + 0x40);
      lVar14 = (ulonglong)bVar12 << 5;
      do {
        uVar26 = *(uint *)(local_78 + uVar32 * 4);
        uVar4 = *(uint *)(lVar20 + 0x2c + uVar32 * 4);
        *(uint *)((longlong)&local_70->Ptr + uVar32 * 4) = uVar26 & ~uVar4;
        local_88 = CONCAT71(local_88._1_7_,uVar26 != 0);
        uVar27 = ~uVar4 & uVar26;
        local_80 = param_1;
        if (uVar27 != 0) {
          do {
            uVar7 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            if (uVar13 != 0) {
              uVar22 = uVar32 << 5 | (ulonglong)uVar7;
              lVar21 = uVar22 * 0x200;
              uVar25 = lVar21 + uVar13;
              if (0x20000 < uVar25) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar15 = (lVar21 + uVar13) - 1 >> 0xc;
              if (uVar22 >> 3 <= uVar15) {
                uVar22 = ((ulonglong)uVar7 + lVar14 >> 3) - 1;
                do {
                  cVar10 = *(char *)(lVar20 + 0x4d + uVar22);
                  if (cVar10 == -1) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  cVar10 = cVar10 + '\x01';
                  if (cVar10 == -1) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  *(char *)(lVar20 + 0x4d + uVar22) = cVar10;
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar15);
              }
            }
            bVar12 = (byte)uVar7 & 0x1f;
            uVar27 = uVar27 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
          } while (uVar27 != 0);
        }
        uVar27 = (int)uVar29 + (uint)(uVar4 == 0 && uVar26 != 0);
        uVar29 = (ulonglong)uVar27;
        *(uint *)(lVar20 + 0x2c + uVar32 * 4) = uVar4 | uVar26;
        uVar32 = uVar32 + 1;
        lVar14 = lVar14 + 0x20;
      } while (uVar32 != uVar31);
      uVar29 = (ulonglong)uVar27;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(longlong *)(lVar20 + 0x18) = *(longlong *)(lVar20 + 0x18) + uVar29;
  }
  else {
    if (((uint)uVar25 & 7) == 4) {
      uVar29 = uVar25 & 0xfffffffffffffff8;
      bVar12 = *(byte *)(uVar29 + 0x11);
      if ((bVar12 & 4) == 0) goto LAB_146776d55;
      if (*(longlong *)(lVar20 + 8) != 0) {
        local_60 = (PSRWLOCK)FUN_146794d20(lVar20,0);
        bVar12 = *(byte *)(uVar29 + 0x11);
      }
      *(byte *)(uVar29 + 0x11) = bVar12 & 0xf9;
      goto LAB_1467770c8;
    }
    if ((uVar25 & 7) != 0) goto LAB_146776d55;
    puVar30 = (ulonglong *)(uVar25 & 0xfffffffffffffff8);
    FUN_146794dcc(lVar20,&local_60,uVar17);
    *(ulonglong *)(lVar20 + 0x20) = uVar25 | 1;
    *(undefined1 *)(lVar20 + 2) = 0;
LAB_146776c37:
    uVar25 = *(ulonglong *)(lVar20 + -0x10);
    if (*(longlong *)(lVar20 + 0x18) == 0) {
      FUN_146791f2a(puVar30);
      lVar14 = DAT_14c80ad08;
      uVar13 = (ulonglong)*(uint *)&pRVar28[6].Ptr;
      uVar26 = *(uint *)(DAT_14c80ad08 + 4 + uVar13 * 8);
      iVar5 = *(int *)(DAT_14c80ad08 + uVar13 * 8);
      *(ulonglong *)(lVar20 + 0x18) = (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + uVar13 * 8);
      *(ulonglong *)(param_1 + 0x10) = uVar26 + uVar25;
      *(uint *)(param_1 + 0x18) = uVar26 - iVar5;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(ulonglong *)(param_1 + 0x20) = uVar25;
      uVar13 = (ulonglong)*(uint *)(lVar14 + 0xc + uVar13 * 8);
      if (uVar13 < 8) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar17 = *(undefined8 *)(DAT_14c80ad08 + uVar13);
      uVar16 = ((undefined8 *)(DAT_14c80ad08 + uVar13))[1];
      puVar2 = (undefined8 *)(DAT_14c80ad08 + 0x10 + uVar13);
      uVar9 = puVar2[1];
      *(undefined8 *)(lVar20 + 0x3c) = *puVar2;
      *(undefined8 *)(lVar20 + 0x44) = uVar9;
      *(undefined8 *)(lVar20 + 0x2c) = uVar17;
      *(undefined8 *)(lVar20 + 0x34) = uVar16;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_146791f2a(puVar30);
      uVar29 = (ulonglong)*(uint *)&pRVar28[6].Ptr;
      uVar13 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + uVar29 * 8);
      if (uVar13 < 8) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar26 = *(uint *)(DAT_14c80ad08 + uVar29 * 8);
      uVar4 = *(uint *)(DAT_14c80ad08 + 4 + uVar29 * 8);
      lVar14 = uVar13 + DAT_14c80ad08;
      *(uint *)(param_1 + 0x28) = uVar26 >> 0xf;
      *(uint *)(param_1 + 0x2c) = ((uVar4 >> 9) - 1 >> 6) + 1;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(ulonglong *)(param_1 + 0x20) = (uVar26 & 0xffff8000) + uVar25;
      lVar21 = 0;
      do {
        uVar26 = *(uint *)(lVar14 + lVar21 * 4);
        uVar4 = *(uint *)(lVar20 + 0x2c + lVar21 * 4);
        *(uint *)(param_1 + 0x40 + lVar21 * 4) = ~uVar4 & uVar26;
        *(uint *)(lVar20 + 0x2c + lVar21 * 4) = uVar4 | uVar26;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 8);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(ulonglong *)(lVar20 + 0x18) =
           (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)&pRVar28[6].Ptr * 8);
    }
  }
  uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
    local_60 = (PSRWLOCK)0x0;
  }
LAB_146776d11:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25 & 0xffffffff;
}



// FUNCTION 146777c26 FUN_146777c26 body=2672 status=ok
// SIG undefined FUN_146777c26(void)

void FUN_146777c26(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  char cVar15;
  longlong *plVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  ulonglong local_60;
  ulonglong local_50;
  
  uVar20 = (uint)param_2;
  if ((uVar20 & 7) < 2) {
    BVar4 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_3 + 8));
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
      if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar18 = 0xffffffffffffffff;
      bVar5 = false;
      uVar21 = 0xffffffffffffffff;
      uVar12 = 0;
      do {
        bVar22 = *(int *)(param_1 + 0x40 + uVar12 * 4) != 0;
        if (bVar22) {
          uVar21 = uVar12;
        }
        if (bVar22 && !bVar5) {
          bVar5 = true;
          uVar18 = uVar12;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 8);
      if (!bVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar21 = (uVar21 + 1) - uVar18;
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (0xff < uVar21) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar14 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
      *(char *)((longlong)puVar14 + 0xf) = (char)uVar21;
      if (0xff < uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)(puVar14 + 2) = (char)uVar18;
      pvVar8 = (void *)FUN_146788523(uVar21 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
      memcpy(pvVar8,(void *)(param_1 + 0x40 + uVar18 * 4),uVar21 * 4);
      *puVar14 = (void *)((longlong)pvVar8 + uVar18 * -4);
    }
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar18 != 0) {
      uVar21 = *(ulonglong *)(param_1 + 0x10);
      uVar12 = uVar21 - uVar18;
      if (uVar18 <= uVar21) {
        uVar1 = *(uint *)(param_1 + 0x1c);
        do {
          uVar6 = (uint)(uVar12 >> 0xc);
          uVar18 = (ulonglong)(uVar6 & 0x1c);
          uVar13 = *(uint *)(param_3 + 0x2c + uVar18) & ~(1 << ((uint)(uVar12 >> 9) & 0x1f));
          *(uint *)(param_3 + 0x2c + uVar18) = uVar13;
          uVar18 = *(ulonglong *)(param_3 + 0x20);
          if ((uVar18 & 7) != 0) {
            uVar18 = uVar18 & 0xfffffffffffffff8;
            if (*(char *)(param_3 + 1) == '\x01') {
              *(undefined1 *)(param_3 + 2) = 1;
            }
            else {
              FUN_146791662((ulonglong)
                            ((uint)*(byte *)(uVar18 + 10) * 0x80000 +
                            (uint)*(ushort *)(uVar18 + 8) * 8) + DAT_14c80ad08,
                            *(undefined4 *)(uVar18 + 0xc));
            }
            *(ulonglong *)(param_3 + 0x20) = uVar18;
          }
          uVar7 = (uint)uVar12 & 0x1ffff;
          if ((uVar18 & 6) == 0) {
            uVar10 = *(uint *)(param_3 + 4);
          }
          else {
            if (((uint)uVar18 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar18 = (ulonglong)
                     *(uint *)((uVar18 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar7 >> 0xc) * 4)
            ;
            lVar11 = DAT_14c80ad08 + uVar18 * 8;
            if (uVar18 == 0) {
              lVar11 = 0;
            }
            uVar10 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar11 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar11 + 0xb) * 8) + 0x20 + DAT_14c80ad08) &
                     0x7ffffff;
          }
          if (uVar10 != 0) {
            if (0x20000 < (ulonglong)uVar7 + (ulonglong)uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar18 = ((ulonglong)uVar10 + (ulonglong)uVar7) - 1 >> 0xc;
            if (uVar7 >> 0xc <= uVar18) {
              uVar19 = (ulonglong)(uVar6 & 0x1f) - 1;
              bVar17 = 0;
              do {
                bVar2 = bVar17;
                cVar15 = *(char *)(param_3 + 0x4d + uVar19);
                if (cVar15 == '\0') {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                if (cVar15 == -1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                cVar15 = cVar15 + -1;
                *(char *)(param_3 + 0x4d + uVar19) = cVar15;
                uVar19 = uVar19 + 1;
                bVar17 = bVar2 | cVar15 == '\0';
              } while (uVar19 < uVar18);
              if ((bool)(bVar2 | cVar15 == '\0')) {
                FUN_146795211(param_3,1);
              }
            }
          }
          if (uVar13 == 0) {
            lVar11 = *(longlong *)(param_3 + 0x18) + -1;
            if (lVar11 == 0) {
              FUN_146795211(param_3,0);
            }
            else {
              *(longlong *)(param_3 + 0x18) = lVar11;
            }
          }
          uVar12 = uVar12 + uVar1;
        } while (uVar12 < uVar21);
      }
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
      if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
         ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((param_2 & 6) == 0) {
        uVar18 = (ulonglong)
                 *(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
        if (uVar18 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar11 = DAT_14c80ad08 + uVar18;
        uVar18 = 0;
        local_50 = 8;
      }
      else {
        if ((uVar20 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        plVar16 = (longlong *)(param_2 & 0xfffffffffffffff8);
        if (*(byte *)((longlong)plVar16 + 0xf) == 0) {
          return;
        }
        uVar18 = (ulonglong)*(byte *)(plVar16 + 2);
        local_50 = (ulonglong)
                   ((uint)*(byte *)((longlong)plVar16 + 0xf) + (uint)*(byte *)(plVar16 + 2));
        lVar11 = *plVar16;
      }
      bVar17 = (char)uVar18 << 5;
      do {
        uVar20 = *(uint *)(param_1 + 0x40 + uVar18 * 4) & *(uint *)(lVar11 + uVar18 * 4);
        if (uVar20 != 0) {
          do {
            uVar1 = 0;
            if (uVar20 != 0) {
              for (; (uVar20 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
              }
            }
            uVar6 = uVar1 | (int)uVar18 << 5;
            uVar21 = (ulonglong)(uVar6 >> 3 & 0x1c);
            uVar13 = *(uint *)(param_3 + 0x2c + uVar21) & ~(1 << (uVar1 & 0x1f));
            *(uint *)(param_3 + 0x2c + uVar21) = uVar13;
            uVar21 = *(ulonglong *)(param_3 + 0x20);
            if ((uVar21 & 7) != 0) {
              uVar21 = uVar21 & 0xfffffffffffffff8;
              if (*(char *)(param_3 + 1) == '\x01') {
                *(undefined1 *)(param_3 + 2) = 1;
              }
              else {
                FUN_146791662((ulonglong)
                              ((uint)*(byte *)(uVar21 + 10) * 0x80000 +
                              (uint)*(ushort *)(uVar21 + 8) * 8) + DAT_14c80ad08);
              }
              *(ulonglong *)(param_3 + 0x20) = uVar21;
            }
            uVar12 = (ulonglong)((uVar6 & 0xff) << 9);
            if ((uVar21 & 6) == 0) {
              uVar7 = *(uint *)(param_3 + 4);
            }
            else {
              if (((uint)uVar21 & 7) != 3) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar21 = (ulonglong)
                       *(uint *)((uVar21 & 0xfffffffffffffff8) + 0x14 +
                                (ulonglong)((uVar6 & 0xff) >> 3) * 4);
              lVar9 = DAT_14c80ad08 + uVar21 * 8;
              if (uVar21 == 0) {
                lVar9 = 0;
              }
              uVar7 = *(uint *)((ulonglong)
                                ((uint)*(byte *)(lVar9 + 0xd) * 0x80000 +
                                (uint)*(ushort *)(lVar9 + 0xb) * 8) + 0x20 + DAT_14c80ad08) &
                      0x7ffffff;
            }
            if (uVar7 != 0) {
              if (0x20000 < uVar7 + uVar12) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar21 = (uVar7 + uVar12) - 1 >> 0xc;
              if ((uVar6 & 0xff) >> 3 <= uVar21) {
                uVar12 = (ulonglong)((bVar17 + uVar1 & 0xff) >> 3) - 1;
                bVar5 = false;
                do {
                  bVar22 = bVar5;
                  cVar15 = *(char *)(param_3 + 0x4d + uVar12);
                  if (cVar15 == '\0') {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  if (cVar15 == -1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  cVar15 = cVar15 + -1;
                  *(char *)(param_3 + 0x4d + uVar12) = cVar15;
                  uVar12 = uVar12 + 1;
                  bVar5 = (bool)(bVar22 | cVar15 == '\0');
                } while (uVar12 < uVar21);
                if (bVar22 || cVar15 == '\0') {
                  FUN_146795211(param_3);
                }
              }
            }
            if (uVar13 == 0) {
              lVar9 = *(longlong *)(param_3 + 0x18) + -1;
              if (lVar9 == 0) {
                FUN_146795211(param_3);
              }
              else {
                *(longlong *)(param_3 + 0x18) = lVar9;
              }
            }
            bVar2 = (byte)uVar1 & 0x1f;
            uVar20 = uVar20 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
          } while (uVar20 != 0);
        }
        uVar18 = uVar18 + 1;
        bVar17 = bVar17 + 0x20;
      } while (uVar18 != local_50);
    }
  }
  else {
    if ((uVar20 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_3 + 8));
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
      if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar18 = 0xffffffffffffffff;
      bVar5 = false;
      uVar21 = 0xffffffffffffffff;
      uVar12 = 0;
      do {
        bVar22 = *(int *)(param_1 + 0x40 + uVar12 * 4) != 0;
        if (bVar22) {
          uVar21 = uVar12;
        }
        if (bVar22 && !bVar5) {
          bVar5 = true;
          uVar18 = uVar12;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 8);
      if (!bVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar21 = (uVar21 + 1) - uVar18;
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (0xff < uVar21) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar14 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
      *(char *)((longlong)puVar14 + 0xf) = (char)uVar21;
      if (0xff < uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)(puVar14 + 2) = (char)uVar18;
      pvVar8 = (void *)FUN_146788523(uVar21 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
      memcpy(pvVar8,(void *)(param_1 + 0x40 + uVar18 * 4),uVar21 * 4);
      *puVar14 = (void *)((longlong)pvVar8 + uVar18 * -4);
    }
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar18 != 0) {
      uVar21 = *(ulonglong *)(param_1 + 0x10);
      uVar12 = uVar21 - uVar18;
      if (uVar18 <= uVar21) {
        uVar1 = *(uint *)(param_1 + 0x1c);
        do {
          uVar6 = (uint)(uVar12 >> 0xc);
          uVar18 = (ulonglong)(uVar6 & 0x1c);
          uVar13 = *(uint *)(param_3 + 0x2c + uVar18) & ~(1 << ((uint)(uVar12 >> 9) & 0x1f));
          *(uint *)(param_3 + 0x2c + uVar18) = uVar13;
          uVar18 = *(ulonglong *)(param_3 + 0x20);
          if (((uint)uVar18 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar19 = (ulonglong)
                   *(uint *)((uVar18 & 0xfffffffffffffff8) + 0x14 +
                            (ulonglong)((uint)(uVar12 >> 10) & 0x7c));
          lVar11 = uVar19 * 8 + DAT_14c80ad08;
          if (uVar19 == 0) {
            lVar11 = 0;
          }
          if ((*(byte *)(lVar11 + 0x11) & 4) == 0) {
            FUN_146795935(lVar11,param_3);
            uVar18 = *(ulonglong *)(param_3 + 0x20);
          }
          uVar7 = (uint)uVar12 & 0x1ffff;
          if ((uVar18 & 6) == 0) {
            uVar10 = *(uint *)(param_3 + 4);
          }
          else {
            if (((uint)uVar18 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar18 = (ulonglong)
                     *(uint *)((uVar18 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar7 >> 0xc) * 4)
            ;
            lVar11 = DAT_14c80ad08 + uVar18 * 8;
            if (uVar18 == 0) {
              lVar11 = 0;
            }
            uVar10 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar11 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar11 + 0xb) * 8) + 0x20 + DAT_14c80ad08) &
                     0x7ffffff;
          }
          if (uVar10 != 0) {
            if (0x20000 < (ulonglong)uVar7 + (ulonglong)uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar18 = ((ulonglong)uVar10 + (ulonglong)uVar7) - 1 >> 0xc;
            if (uVar7 >> 0xc <= uVar18) {
              uVar19 = (ulonglong)(uVar6 & 0x1f) - 1;
              bVar17 = 0;
              do {
                bVar2 = bVar17;
                cVar15 = *(char *)(param_3 + 0x4d + uVar19);
                if (cVar15 == '\0') {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                if (cVar15 == -1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                cVar15 = cVar15 + -1;
                *(char *)(param_3 + 0x4d + uVar19) = cVar15;
                uVar19 = uVar19 + 1;
                bVar17 = bVar2 | cVar15 == '\0';
              } while (uVar19 < uVar18);
              if ((bool)(bVar2 | cVar15 == '\0')) {
                FUN_146795211(param_3,1);
              }
            }
          }
          if (uVar13 == 0) {
            lVar11 = *(longlong *)(param_3 + 0x18) + -1;
            if (lVar11 == 0) {
              FUN_146795211(param_3,0);
            }
            else {
              *(longlong *)(param_3 + 0x18) = lVar11;
            }
          }
          uVar12 = uVar12 + uVar1;
        } while (uVar12 < uVar21);
      }
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
      if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
         ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((param_2 & 6) == 0) {
        uVar18 = (ulonglong)
                 *(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
        if (uVar18 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar11 = DAT_14c80ad08 + uVar18;
        uVar20 = 0;
        local_60 = 8;
      }
      else {
        if ((uVar20 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        plVar16 = (longlong *)(param_2 & 0xfffffffffffffff8);
        if (*(byte *)((longlong)plVar16 + 0xf) == 0) {
          return;
        }
        uVar20 = (uint)*(byte *)(plVar16 + 2);
        local_60 = (ulonglong)
                   ((uint)*(byte *)((longlong)plVar16 + 0xf) + (uint)*(byte *)(plVar16 + 2));
        lVar11 = *plVar16;
      }
      uVar18 = (ulonglong)uVar20;
      bVar17 = (char)uVar20 << 5;
      do {
        uVar20 = *(uint *)(param_1 + 0x40 + uVar18 * 4) & *(uint *)(lVar11 + uVar18 * 4);
        if (uVar20 != 0) {
          do {
            uVar1 = 0;
            if (uVar20 != 0) {
              for (; (uVar20 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
              }
            }
            uVar6 = uVar1 | (int)uVar18 << 5;
            uVar21 = (ulonglong)(uVar6 >> 3 & 0x1c);
            uVar13 = *(uint *)(param_3 + 0x2c + uVar21) & ~(1 << (uVar1 & 0x1f));
            *(uint *)(param_3 + 0x2c + uVar21) = uVar13;
            uVar21 = *(ulonglong *)(param_3 + 0x20);
            if (((uint)uVar21 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar12 = (ulonglong)
                     *(uint *)((uVar21 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar6 >> 1 & 0x7c)
                              );
            lVar9 = uVar12 * 8 + DAT_14c80ad08;
            if (uVar12 == 0) {
              lVar9 = 0;
            }
            if ((*(byte *)(lVar9 + 0x11) & 4) == 0) {
              FUN_146795935();
              uVar21 = *(ulonglong *)(param_3 + 0x20);
            }
            uVar12 = (ulonglong)((uVar6 & 0xff) << 9);
            if ((uVar21 & 6) == 0) {
              uVar7 = *(uint *)(param_3 + 4);
            }
            else {
              if (((uint)uVar21 & 7) != 3) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar21 = (ulonglong)
                       *(uint *)((uVar21 & 0xfffffffffffffff8) + 0x14 +
                                (ulonglong)((uVar6 & 0xff) >> 3) * 4);
              lVar9 = DAT_14c80ad08 + uVar21 * 8;
              if (uVar21 == 0) {
                lVar9 = 0;
              }
              uVar7 = *(uint *)((ulonglong)
                                ((uint)*(byte *)(lVar9 + 0xd) * 0x80000 +
                                (uint)*(ushort *)(lVar9 + 0xb) * 8) + 0x20 + DAT_14c80ad08) &
                      0x7ffffff;
            }
            if (uVar7 != 0) {
              if (0x20000 < uVar7 + uVar12) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar21 = (uVar7 + uVar12) - 1 >> 0xc;
              if ((uVar6 & 0xff) >> 3 <= uVar21) {
                uVar12 = (ulonglong)((bVar17 + uVar1 & 0xff) >> 3) - 1;
                bVar5 = false;
                do {
                  bVar22 = bVar5;
                  cVar15 = *(char *)(param_3 + 0x4d + uVar12);
                  if (cVar15 == '\0') {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  if (cVar15 == -1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  cVar15 = cVar15 + -1;
                  *(char *)(param_3 + 0x4d + uVar12) = cVar15;
                  uVar12 = uVar12 + 1;
                  bVar5 = (bool)(bVar22 | cVar15 == '\0');
                } while (uVar12 < uVar21);
                if (bVar22 || cVar15 == '\0') {
                  FUN_146795211(param_3,1);
                }
              }
            }
            if (uVar13 == 0) {
              lVar9 = *(longlong *)(param_3 + 0x18) + -1;
              if (lVar9 == 0) {
                FUN_146795211(param_3,0);
              }
              else {
                *(longlong *)(param_3 + 0x18) = lVar9;
              }
            }
            bVar2 = (byte)uVar1 & 0x1f;
            uVar20 = uVar20 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
          } while (uVar20 != 0);
        }
        uVar18 = uVar18 + 1;
        bVar17 = bVar17 + 0x20;
      } while (uVar18 != local_60);
    }
  }
  return;
}



// FUNCTION 1467786a7 FUN_1467786a7 body=73 status=ok
// SIG undefined FUN_1467786a7(void)

void FUN_1467786a7(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar1 = param_1;
  }
  FUN_1467875a5(*(longlong *)(*param_1 + 0x28) + 0xa0,&DAT_14c748418,&DAT_149dfb9a8,2,0,plVar1,
                param_2);
  return;
}



// FUNCTION 1467786f0 FUN_1467786f0 body=1534 status=ok
// SIG undefined FUN_1467786f0(void)

undefined4 *
FUN_1467786f0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong *puVar2;
  ushort uVar3;
  code *pcVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  sbyte sVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  
  uVar13 = 0x10;
  if (param_4 != 0) {
    uVar13 = param_4 + 0xfU & 0xfffffffffffffff0;
  }
  plVar7 = (longlong *)param_2[1];
  uVar23 = uVar13 >> 4;
  lVar1 = uVar13 - 1;
  do {
    if (plVar7 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar14 = *(ulonglong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2a8);
      if (1 < uVar14) {
        FUN_14679ea20(uVar14,param_3);
      }
      plVar7 = (longlong *)FUN_14677fd2e(*param_2,&DAT_149dfb9a8);
      if (plVar7 == (longlong *)0x0) {
        uVar16 = 2;
        lVar15 = 0;
        goto LAB_146778c5d;
      }
      param_2[1] = plVar7;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 2));
    if (*(char *)((longlong)plVar7 + 0xb) == '\0') {
      lVar15 = 0;
      cVar5 = FUN_14677dfd2(plVar7,&DAT_149dfb9a8);
      if (cVar5 == '\0') {
        uVar16 = 2;
LAB_146778c4f:
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 2));
LAB_146778c5d:
        *param_1 = uVar16;
        *(longlong *)(param_1 + 2) = lVar15;
        return param_1;
      }
    }
    lVar15 = *plVar7;
    uVar12 = 0;
    uVar14 = 0;
    do {
      uVar11 = *(ulonglong *)(lVar15 + 0x10 + uVar14 * 8);
      if (uVar11 != 0) {
        uVar6 = 0;
        uVar24 = uVar11;
        do {
          lVar10 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> lVar10 & 1) == 0; lVar10 = lVar10 + 1) {
            }
          }
          uVar19 = uVar24 >> ((byte)lVar10 & 0x3f) ^ 0xffffffffffffffff;
          if (uVar19 == 0) {
            uVar26 = 0x40;
          }
          else {
            uVar26 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
              }
            }
          }
          uVar19 = lVar10 + uVar6;
          uVar20 = uVar23 - uVar26;
          uVar22 = (ushort)uVar23;
          if (uVar23 < uVar26 || uVar20 == 0) {
            if (0x10 < param_5) {
              lVar25 = uVar14 * 0x40 + uVar19;
              uVar17 = (lVar25 * 0x10 + param_5) - 1 & -param_5;
              if ((lVar25 + uVar26) * 0x10 - uVar17 < uVar13) goto LAB_1467787b0;
              if (lVar1 + uVar17 >> 10 != uVar14) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              uVar14 = uVar17 >> 10;
              uVar19 = (ulonglong)((uint)(uVar17 >> 4) & 0x3f);
            }
            puVar2 = (ulonglong *)(lVar15 + 0x90 + uVar14 * 8);
            *puVar2 = *puVar2 | 1L << ((char)(uVar23 + 0x3f) + (byte)uVar19 & 0x3f);
            uVar23 = ~(-1L << ((byte)uVar23 & 0x3f));
            if (uVar13 == 0x400) {
              uVar23 = 0xffffffffffffffff;
            }
            *(ulonglong *)(lVar15 + 0x10 + uVar14 * 8) = uVar11 & ~(uVar23 << ((byte)uVar19 & 0x3f))
            ;
            uVar3 = *(ushort *)(lVar15 + 2);
            if (uVar3 == 0) {
              FUN_14677ff1a(plVar7);
            }
            if (CARRY2(uVar3,uVar22)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            *(ushort *)(lVar15 + 2) = uVar3 + uVar22;
            lVar15 = uVar19 * 0x10 + lVar15 + uVar14 * 0x400;
            uVar16 = 0;
            goto LAB_146778c4f;
          }
LAB_1467787b0:
          if (uVar26 + uVar19 < 0x40) {
            if (uVar12 <= uVar26) {
              uVar12 = uVar26;
            }
            uVar6 = uVar6 + lVar10 + uVar26;
            uVar24 = uVar24 >> ((byte)(lVar10 + uVar26) & 0x3f);
          }
          else {
            if (0xf < uVar14 + 1) {
              uVar14 = 0x40 - uVar19;
              if (0x40 - uVar19 < uVar12) {
                uVar14 = uVar12;
              }
              lVar15 = uVar14 << 4;
              goto LAB_1467789c2;
            }
            uVar26 = (uVar19 * 0x10 + param_5 + uVar14 * 0x400) - 1 & -param_5;
            lVar25 = uVar14 * 8;
            lVar21 = uVar26 + uVar14 * -0x400;
            lVar10 = lVar10 + uVar6;
            uVar24 = (uVar14 * 0x400 - uVar26) + 0x800;
            bVar28 = true;
            lVar18 = 1;
            uVar6 = 0xf;
            while( true ) {
              lVar21 = lVar21 + -0x400;
              lVar10 = lVar10 + -0x40;
              uVar17 = *(ulonglong *)(lVar15 + 0x18 + lVar25);
              uVar27 = uVar14;
              if (uVar17 != 0xffffffffffffffff) break;
              if (uVar20 < 0x41) {
                if (param_5 < 0x11) goto LAB_1467788f8;
                if (uVar13 <= uVar24) {
                  if ((uVar14 - (lVar1 + uVar26 >> 10)) + lVar18 != 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  goto LAB_146778ca1;
                }
              }
              else {
                uVar20 = uVar20 - 0x40;
              }
              bVar28 = uVar14 + lVar18 < 0xf;
              lVar25 = lVar25 + 8;
              lVar18 = lVar18 + 1;
              uVar6 = uVar6 - 1;
              uVar24 = uVar24 + 0x400;
              if (uVar14 == uVar6) {
                uVar14 = 0x400 - (uVar14 * 0x40 + uVar19);
                if (uVar14 < uVar12) {
                  uVar14 = uVar12;
                }
                lVar15 = uVar14 << 4;
                goto LAB_1467789c2;
              }
            }
            uVar6 = 0;
            if (~uVar17 != 0) {
              for (; (~uVar17 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            if (uVar20 <= uVar6) {
              if (0x10 < param_5) {
                if ((ulonglong)(uint)((int)uVar6 << 4) - lVar21 < uVar13) goto LAB_146778a1a;
                if ((uVar14 - (lVar1 + uVar26 >> 10)) + lVar18 != 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
LAB_146778ca1:
                uVar19 = (ulonglong)((uint)(uVar26 >> 4) & 0x3f);
                uVar27 = uVar26 >> 10;
              }
LAB_1467788f8:
              uVar12 = (uVar11 << (-(char)uVar19 & 0x3fU)) >> (-(char)uVar19 & 0x3fU);
              if (uVar19 == 0) {
                uVar12 = 0;
              }
              *(ulonglong *)(lVar15 + 0x10 + uVar27 * 8) = uVar12;
              if (uVar27 + 1 < uVar14 + lVar18) {
                memset((void *)(uVar27 * 8 + 0x18 + lVar15),0,lVar25 + uVar27 * -8);
              }
              uVar9 = (int)(uVar23 + 0x3f) + (int)uVar19 & 0x3f;
              sVar8 = (sbyte)uVar9;
              puVar2 = (ulonglong *)(lVar15 + 0x98 + lVar25);
              *puVar2 = *puVar2 | 1L << sVar8;
              uVar14 = 0;
              if (uVar9 != 0x3f) {
                uVar14 = -2L << sVar8 & uVar17;
              }
              *(ulonglong *)(lVar15 + 0x18 + lVar25) = uVar14;
              uVar3 = *(ushort *)(lVar15 + 2);
              if (uVar3 == 0) {
                FUN_14677ff1a(plVar7);
              }
              if (CARRY2(uVar3,uVar22)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(ushort *)(lVar15 + 2) = uVar3 + uVar22;
              lVar15 = uVar19 * 0x10 + lVar15 + uVar27 * 0x400;
              if (!bVar28) goto LAB_1467789c2;
              uVar16 = 0;
              goto LAB_146778c4f;
            }
LAB_146778a1a:
            if (uVar12 <= uVar6 - lVar10) {
              uVar12 = uVar6 - lVar10;
            }
            uVar24 = uVar17 >> ((byte)uVar6 & 0x3f);
            uVar11 = uVar17;
            uVar14 = uVar14 + lVar18;
          }
        } while (uVar24 != 0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x10);
    lVar15 = uVar12 << 4;
LAB_1467789c2:
    plVar7 = (longlong *)FUN_14677e25f(param_2,plVar7,uVar13,param_5,lVar15,&DAT_149dfb9a8);
  } while( true );
}



// FUNCTION 146778cee FUN_146778cee body=552 status=ok
// SIG undefined FUN_146778cee(void)

void FUN_146778cee(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  sbyte sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar17 = (uint)param_2 & 0x3fff;
  lVar13 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    lVar13 = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0x10));
  if (uVar17 < 0x110) goto LAB_146778ef5;
  uVar7 = uVar17 >> 4;
  if (uVar17 != 0x110) {
    uVar12 = (ulonglong)uVar7 - 1;
    if (((*(uint *)(param_1 + 0x10 + (uVar12 >> 5) * 4) >> ((uint)uVar12 & 0x1f) & 1) == 0) &&
       ((*(uint *)(param_1 + 0x90 + (uVar12 >> 5) * 4) & 1 << ((byte)uVar12 & 0x1f)) == 0)) {
      pcVar9 = "previous bit is not free or end of object";
LAB_146778edd:
      do {
        FUN_14677fb46(param_1,1,param_2,uVar17,pcVar9);
LAB_146778ef5:
        FUN_1467a2796("attempt to free bitfit page header",param_2);
LAB_146778f04:
        pcVar9 = "free bit set";
      } while( true );
    }
  }
  if ((*(uint *)(param_1 + 0x10 + (ulonglong)(uVar17 >> 9) * 4) >> (uVar7 & 0x1f) & 1) != 0)
  goto LAB_146778f04;
  uVar14 = (ulonglong)(uVar17 >> 10);
  uVar12 = *(ulonglong *)(param_1 + 0x90 + uVar14 * 8);
  sVar10 = (sbyte)(uVar7 & 0x3f);
  uVar11 = uVar12 >> sVar10;
  if (uVar11 == 0) {
    lVar15 = (ulonglong)(uVar7 & 0x3f) - 1;
    uVar12 = uVar14;
    do {
      uVar11 = uVar12;
      if (uVar11 == 0xf) {
        pcVar9 = "object falls off end of page";
        goto LAB_146778edd;
      }
      uVar3 = *(ulonglong *)(param_1 + 0x98 + uVar11 * 8);
      uVar12 = uVar11 + 1;
      lVar15 = lVar15 + -0x40;
    } while (uVar3 == 0);
    uVar5 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    lVar15 = uVar5 - lVar15;
    uVar16 = ~(-2L << ((byte)uVar5 & 0x3f));
    if (uVar5 == 0x3f) {
      uVar16 = 0xffffffffffffffff;
    }
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar12 * 8);
    *puVar1 = *puVar1 | uVar16;
    *(ulonglong *)(param_1 + 0x90 + uVar12 * 8) = uVar3 & ~(1L << (uVar5 & 0x3f));
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar14 * 8);
    *puVar1 = *puVar1 | -1L << sVar10;
    if (uVar14 < uVar11) {
      uVar11 = uVar14 + 2;
      if (uVar14 + 2 < uVar12) {
        uVar11 = uVar12;
      }
      memset((void *)(param_1 + uVar14 * 8 + 0x18),(int)CONCAT71((int7)(uVar12 >> 8),0xff),
             (uVar11 + ~uVar14) * 8);
    }
  }
  else {
    lVar4 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
    lVar15 = lVar4 + 1;
    uVar11 = 0xffffffffffffffff;
    if (lVar15 != 0x40) {
      uVar11 = ~(-2L << ((byte)lVar4 & 0x3f));
    }
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar14 * 8);
    *puVar1 = *puVar1 | uVar11 << sVar10;
    *(ulonglong *)(param_1 + 0x90 + uVar14 * 8) =
         uVar12 & ~(1L << ((ulonglong)((int)lVar4 + uVar7) & 0x3f));
  }
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_14677ffd2(lVar13);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar2 = *(ushort *)(param_1 + 2);
  sVar8 = uVar2 - (ushort)lVar15;
  *(short *)(param_1 + 2) = sVar8;
  if ((ushort)lVar15 <= uVar2) {
    if (sVar8 == 0) {
      FUN_14677ff3e(lVar13,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x000146778e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



// FUNCTION 146778f6a FUN_146778f6a body=804 status=ok
// SIG undefined FUN_146778f6a(void)

void FUN_146778f6a(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  short sVar7;
  sbyte sVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  size_t _Size;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ushort uVar19;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar20;
  
  lVar13 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  uVar22 = (uint)param_2 & 0x3fff;
  uVar23 = (ulonglong)uVar22;
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    lVar13 = 0;
  }
  uVar18 = 1;
  if (param_3 != 0) {
    uVar18 = param_3 + 0xfU >> 4;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0x10));
  if (uVar23 < 0x110) goto LAB_146779264;
  uVar6 = uVar22 >> 4;
  uVar11 = (ulonglong)uVar6;
  if (uVar22 != 0x110) {
    uVar17 = uVar11 - 1;
    if (((*(uint *)(param_1 + 0x10 + (uVar17 >> 5) * 4) >> ((uint)uVar17 & 0x1f) & 1) == 0) &&
       ((*(uint *)(param_1 + 0x90 + (uVar17 >> 5) * 4) & 1 << ((byte)uVar17 & 0x1f)) == 0))
    goto LAB_146779285;
  }
  if ((*(uint *)(param_1 + 0x10 + (ulonglong)(uVar22 >> 9) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
    pcVar12 = "free bit set";
    goto LAB_14677924c;
  }
  uVar15 = (ulonglong)(uVar22 >> 10);
  uVar17 = *(ulonglong *)(param_1 + 0x90 + uVar15 * 8);
  sVar8 = (sbyte)(uVar6 & 0x3f);
  uVar14 = uVar17 >> sVar8;
  uVar20 = uVar18;
  if (uVar14 == 0) {
    uVar17 = uVar18 + uVar11;
    _Size = (uVar15 * 8 - (uVar17 >> 3 & 0xfffffffffffffff8)) - 8;
    lVar16 = 1 - (ulonglong)(uVar6 & 0x3f);
    do {
      uVar14 = uVar15;
      if (uVar14 == 0xf) {
        pcVar12 = "object falls off end of page";
        goto LAB_14677924c;
      }
      uVar21 = *(ulonglong *)(param_1 + 0x98 + uVar14 * 8);
      uVar15 = uVar14 + 1;
      _Size = _Size + 8;
      lVar16 = lVar16 + 0x40;
    } while (uVar21 == 0);
    uVar4 = 0;
    if (uVar21 != 0) {
      for (; (uVar21 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar23 = uVar4 + lVar16;
    if (uVar18 <= uVar23) {
      if (uVar23 != uVar18) {
        uVar21 = uVar17 >> 6;
        uVar22 = (uint)uVar17 & 0x3f;
        uVar11 = (uVar18 + uVar11) - 1;
        puVar2 = (uint *)(param_1 + 0x90 + (uVar11 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
        uVar11 = *(ulonglong *)(param_1 + 0x90 + uVar15 * 8);
        uVar20 = uVar23;
        if (uVar21 == uVar15) {
          if ((uVar22 - uVar18) + lVar16 != 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar23 = (uVar4 - uVar22) + 1;
          if (0x40 < uVar23) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar17 = ~(-1L << ((byte)uVar23 & 0x3f));
          if (uVar23 == 0x40) {
            uVar17 = 0xffffffffffffffff;
          }
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar15 * 8);
          *puVar1 = *puVar1 | uVar17 << (sbyte)uVar22;
          *(ulonglong *)(param_1 + 0x90 + uVar15 * 8) = uVar11 & ~(1L << (uVar4 & 0x3f));
        }
        else {
          uVar23 = ~(-2L << ((byte)uVar4 & 0x3f));
          if (uVar4 == 0x3f) {
            uVar23 = 0xffffffffffffffff;
          }
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar15 * 8);
          *puVar1 = *puVar1 | uVar23;
          *(ulonglong *)(param_1 + 0x90 + uVar15 * 8) = uVar11 & ~(1L << (uVar4 & 0x3f));
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
          *puVar1 = *puVar1 | -1L << (sbyte)uVar22;
          if (uVar21 < uVar14) {
            memset((void *)(param_1 + uVar21 * 8 + 0x18),(int)CONCAT71((int7)(uVar4 >> 8),0xff),
                   _Size);
          }
        }
      }
      goto LAB_14677909f;
    }
  }
  else {
    lVar16 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> lVar16 & 1) == 0; lVar16 = lVar16 + 1) {
      }
    }
    uVar11 = lVar16 + 1;
    lVar10 = uVar11 - uVar18;
    if (uVar18 <= uVar11) {
      if (lVar10 != 0) {
        uVar23 = ~(-1L << ((byte)lVar10 & 0x3f));
        if (lVar10 == 0x40) {
          uVar23 = 0xffffffffffffffff;
        }
        bVar9 = sVar8 + (char)uVar18;
        puVar1 = (ulonglong *)(param_1 + 0x10 + uVar15 * 8);
        *puVar1 = *puVar1 | uVar23 << (bVar9 & 0x3f);
        *(ulonglong *)(param_1 + 0x90 + uVar15 * 8) =
             uVar17 & ~(1L << ((ulonglong)((int)lVar16 + uVar6) & 0x3f)) |
             1L << ((ulonglong)(byte)(bVar9 - 1) & 0x3f);
        uVar20 = uVar11;
      }
LAB_14677909f:
      uVar19 = (short)uVar20 - (short)uVar18;
      if (*(char *)(param_1 + 1) == '\0') {
        FUN_14677ffd2(lVar13);
        *(undefined1 *)(param_1 + 1) = 1;
      }
      uVar3 = *(ushort *)(param_1 + 2);
      sVar7 = uVar3 - uVar19;
      *(short *)(param_1 + 2) = sVar7;
      if (uVar3 < uVar19) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (sVar7 == 0) {
        FUN_14677ff3e(lVar13,param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001467790e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0x10));
      return;
    }
  }
  pcVar12 = "attempt to shrink to a larger size";
  do {
    FUN_1467a2796(pcVar12,param_2);
LAB_146779285:
    pcVar12 = "previous bit is not free or end of object";
LAB_14677924c:
    FUN_14677fb46(param_1,1,param_2,uVar23,pcVar12);
LAB_146779264:
    pcVar12 = "attempt to free bitfit page header";
  } while( true );
}



// FUNCTION 14677931b FUN_14677931b body=83 status=ok
// SIG undefined FUN_14677931b(void)

undefined8 FUN_14677931b(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_14677d8b8(local_20,lVar1,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14677936f FUN_14677936f body=101 status=ok
// SIG undefined FUN_14677936f(void)

undefined8 FUN_14677936f(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  uVar1 = FUN_14678d3d7(&DAT_149dfba50,param_2);
  uVar1 = FUN_14678d54e(&DAT_14c758420,0x20000,uVar1,param_1);
  if (param_3 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return uVar1;
}



// FUNCTION 1467793d4 FUN_1467793d4 body=93 status=ok
// SIG undefined FUN_1467793d4(void)

void FUN_1467793d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_14678d689(&DAT_14c758420,0x20000,param_1);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  FUN_14678d689(&DAT_14c758420,0x20000,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014677942a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  return;
}



// FUNCTION 146779431 FUN_146779431 body=56 status=ok
// SIG undefined FUN_146779431(void)

void FUN_146779431(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar1 = param_1;
  }
  FUN_14678cf2b(*(longlong *)(*param_1 + 0x28) + 0x100,&DAT_149dfba50,0,plVar1,param_2);
  return;
}



// FUNCTION 146779469 FUN_146779469 body=2641 status=ok
// SIG undefined FUN_146779469(void)

void FUN_146779469(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  BOOLEAN BVar4;
  char cVar5;
  ulonglong *puVar6;
  byte bVar7;
  sbyte sVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  undefined4 uVar13;
  code *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  PSRWLOCK SRWLock;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined *local_100;
  uint local_f4;
  ulonglong local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  PSRWLOCK local_d0;
  PSRWLOCK local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = 0x200;
  if (param_4 != 0) {
    local_d8 = param_4 + 0x1ffU & 0xfffffffffffffe00;
  }
  puVar6 = (ulonglong *)param_2[1];
  uVar10 = local_d8 >> 9;
  local_b8 = param_5 - 1;
  local_c0 = -param_5;
  local_e0 = local_d8 - 1;
  local_a8 = uVar10 + 0x3f;
  local_70 = ~(-1L << ((byte)uVar10 & 0x3f));
  local_f0 = uVar10;
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  if (local_d8 == 0x8000) {
    local_70 = 0xffffffffffffffff;
  }
LAB_146779539:
  pcVar14 = AcquireSRWLockExclusive_exref;
  if (puVar6 != (ulonglong *)0x0) {
LAB_146779542:
    SRWLock = (PSRWLOCK)(puVar6 + 3);
    local_d0 = (PSRWLOCK)(puVar6 + 2);
    uVar16 = 0;
    local_e8 = puVar6;
    local_c8 = SRWLock;
    do {
      puVar6 = local_e8;
      if (uVar16 != 0) {
        local_108 = 0;
        FUN_14678ec28((ulonglong)uVar16 << 0xc,&DAT_149dfba50,0,0);
        (*pcVar14)(SRWLock);
      }
      local_f4 = uVar16;
      (*pcVar14)(local_d0);
      if ((*(char *)((longlong)puVar6 + 0xb) == '\0') &&
         (cVar5 = FUN_14677dfd2(puVar6), cVar5 == '\0')) {
        ReleaseSRWLockExclusive(local_d0);
        lVar27 = 0;
        uVar13 = 2;
        uVar3 = 2;
        if (local_f4 != 0) goto LAB_146779cd7;
        goto LAB_146779ce0;
      }
      if (DAT_14c758428 == 0) {
LAB_14677962a:
        lVar27 = 0;
      }
      else {
        uVar26 = *puVar6;
        uVar16 = (uint)(uVar26 >> 0x15) & 0xfffffff ^ (uint)(uVar26 >> 0x11);
        uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
        uVar16 = uVar16 >> 0xb ^ uVar16;
        uVar11 = (ulonglong)(uVar16 & *(uint *)(DAT_14c758428 + 0xc));
        uVar15 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar11 * 0x10);
        while (uVar15 != uVar26) {
          uVar16 = uVar16 + 1;
          if (uVar15 == 0xffffffffffffffff) goto LAB_14677962a;
          uVar11 = (ulonglong)(uVar16 & *(uint *)(DAT_14c758428 + 0xc));
          uVar15 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar11 * 0x10);
        }
        lVar27 = *(longlong *)(DAT_14c758428 + 0x28 + uVar11 * 0x10);
      }
      uVar26 = 0;
      uVar15 = 0;
      do {
        uVar11 = *(ulonglong *)(lVar27 + 0x10 + uVar15 * 8);
        if (uVar11 != 0) {
          uVar20 = 0;
          uVar24 = uVar11;
          do {
            lVar9 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
              }
            }
            uVar17 = uVar11 >> ((byte)lVar9 & 0x3f) ^ 0xffffffffffffffff;
            if (uVar17 == 0) {
              uVar21 = 0x40;
            }
            else {
              uVar21 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                }
              }
            }
            uVar17 = lVar9 + uVar20;
            uVar18 = uVar10 - uVar21;
            if (uVar10 < uVar21 || uVar18 == 0) {
              if (0x200 < param_5) {
                lVar22 = uVar15 * 0x40 + uVar17;
                uVar23 = lVar22 * 0x200 + local_b8 & local_c0;
                if ((lVar22 + uVar21) * 0x200 - uVar23 < local_d8) goto LAB_14677966c;
                if (local_e0 + uVar23 >> 0xf != uVar15) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                uVar15 = uVar23 >> 0xf;
                uVar17 = (ulonglong)((uint)(uVar23 >> 9) & 0x3f);
              }
              uVar26 = uVar17 * 0x200 + uVar15 * 0x8000;
              if (0x1ffff < uVar26 + local_e0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)invalidInstructionException();
                (*pcVar14)();
              }
              uVar20 = uVar26 >> 0xc;
              uVar11 = uVar26 + local_e0 >> 0xc;
              if (local_f4 != 0) {
                if (*(char *)((longlong)local_e8 + 0xb) == '\0') {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                BVar4 = TryAcquireSRWLockExclusive(local_c8);
                if (BVar4 != '\0') {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                FUN_146780693(local_68,1);
                uVar10 = local_f0;
                if (uVar11 < uVar20) {
                  if (uVar20 != uVar11 + 1) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                }
                else {
                  do {
                    if (*(char *)(lVar27 + 0x50 + uVar20) == -1) {
                      FUN_1467806aa(local_68,uVar20);
                      *(undefined1 *)(lVar27 + 0x50 + uVar20) = 1;
                    }
                    else {
                      FUN_1467806c0(local_68,*(undefined8 *)(lVar27 + -0x10),uVar20,&DAT_149dfba50);
                      cVar5 = *(char *)(lVar27 + 0x50 + uVar20) + '\x01';
                      *(char *)(lVar27 + 0x50 + uVar20) = cVar5;
                      if (cVar5 == -1) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        (*pcVar14)();
                      }
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar11 + 1 != uVar20);
                }
                FUN_1467806c0(local_68);
                lVar9 = local_58;
LAB_14677982f:
                puVar6 = (ulonglong *)(lVar27 + 0x30 + uVar15 * 8);
                *puVar6 = *puVar6 | 1L << ((byte)uVar17 + (char)local_a8 & 0x3f);
                *(ulonglong *)(lVar27 + 0x10 + uVar15 * 8) =
                     uVar24 & ~(local_70 << ((byte)uVar17 & 0x3f));
                uVar1 = *(ushort *)(lVar27 + 2);
                if (uVar1 == 0) {
                  FUN_14677ff1a(local_e8);
                }
                sVar12 = uVar1 + (ushort)uVar10;
                if (CARRY2(uVar1,(ushort)uVar10)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                goto LAB_146779885;
              }
              if (uVar20 <= uVar11) {
                uVar16 = 0;
                uVar10 = uVar20;
                do {
                  uVar16 = uVar16 + (*(char *)(lVar27 + 0x50 + uVar10) == -1);
                  uVar10 = uVar10 + 1;
                } while (uVar11 + 1 != uVar10);
                if (uVar16 != 0) {
                  bVar2 = false;
                  lVar27 = 0;
                  lVar9 = 0;
                  uVar10 = local_f0;
                  goto LAB_146779895;
                }
                do {
                  cVar5 = *(char *)(lVar27 + 0x50 + uVar20);
                  if (cVar5 == -1) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  cVar5 = cVar5 + '\x01';
                  *(char *)(lVar27 + 0x50 + uVar20) = cVar5;
                  if (cVar5 == -1) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar11 + 1 != uVar20);
              }
              lVar9 = 0;
              uVar10 = local_f0;
              goto LAB_14677982f;
            }
LAB_14677966c:
            if (0x3f < uVar21 + uVar17) {
              uVar11 = uVar15 + 1;
              if (uVar11 < 4) {
                uVar11 = uVar17 * 0x200 + local_b8 + uVar15 * 0x8000 & local_c0;
                lVar22 = uVar15 * 8;
                lVar19 = uVar11 + uVar15 * -0x8000;
                lVar9 = lVar9 + uVar20;
                uVar20 = (uVar15 * 0x8000 - uVar11) + 0x10000;
                lVar25 = 1;
                uVar10 = 3;
                while( true ) {
                  lVar19 = lVar19 + -0x8000;
                  lVar9 = lVar9 + -0x40;
                  uVar21 = *(ulonglong *)(lVar27 + 0x18 + lVar22);
                  uVar23 = uVar15;
                  if (uVar21 != 0xffffffffffffffff) break;
                  if (uVar18 < 0x41) {
                    if (param_5 < 0x201) goto LAB_146779a08;
                    local_b0 = lVar25;
                    if (local_d8 <= uVar20) {
                      if ((uVar15 - (local_e0 + uVar11 >> 0xf)) + lVar25 != 0) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        (*pcVar14)();
                      }
                      goto LAB_146779def;
                    }
                  }
                  else {
                    uVar18 = uVar18 - 0x40;
                  }
                  lVar22 = lVar22 + 8;
                  lVar25 = lVar25 + 1;
                  uVar10 = uVar10 - 1;
                  uVar20 = uVar20 + 0x8000;
                  if (uVar15 == uVar10) {
                    uVar11 = 4;
                    uVar10 = local_f0;
                    goto LAB_146779c62;
                  }
                }
                uVar20 = 0;
                if (~uVar21 != 0) {
                  for (; (~uVar21 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                  }
                }
                if (uVar20 < uVar18) {
LAB_1467799ce:
                  uVar15 = uVar15 + lVar25;
                  if (uVar26 <= uVar20 - lVar9) {
                    uVar26 = uVar20 - lVar9;
                  }
                  uVar11 = uVar21 >> ((byte)uVar20 & 0x3f);
                  uVar10 = local_f0;
                  uVar24 = uVar21;
                  goto LAB_146779756;
                }
                if (0x200 < param_5) {
                  local_b0 = lVar25;
                  if ((ulonglong)(uint)((int)uVar20 << 9) - lVar19 < local_d8) goto LAB_1467799ce;
                  if ((uVar15 - (local_e0 + uVar11 >> 0xf)) + lVar25 != 0) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
LAB_146779def:
                  uVar17 = (ulonglong)((uint)(uVar11 >> 9) & 0x3f);
                  uVar23 = uVar11 >> 0xf;
                }
LAB_146779a08:
                uVar26 = uVar17 * 0x200 + uVar23 * 0x8000;
                if (0x1ffff < uVar26 + local_e0) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  local_b0 = lVar25;
                  (*pcVar14)();
                }
                uVar11 = uVar26 >> 0xc;
                uVar10 = uVar26 + local_e0 >> 0xc;
                local_88 = uVar21;
                local_80 = lVar22;
                local_78 = uVar24;
                if (local_f4 == 0) {
                  if (uVar11 <= uVar10) {
                    uVar16 = 0;
                    uVar20 = uVar11;
                    do {
                      uVar16 = uVar16 + (*(char *)(lVar27 + 0x50 + uVar20) == -1);
                      uVar20 = uVar20 + 1;
                    } while (uVar10 + 1 != uVar20);
                    if (uVar16 != 0) {
                      bVar2 = false;
                      lVar27 = 0;
                      lVar9 = 0;
                      uVar10 = local_f0;
                      local_b0 = lVar25;
                      goto LAB_146779895;
                    }
                    do {
                      cVar5 = *(char *)(lVar27 + 0x50 + uVar11);
                      if (cVar5 == -1) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        local_b0 = lVar25;
                        (*pcVar14)();
                      }
                      cVar5 = cVar5 + '\x01';
                      *(char *)(lVar27 + 0x50 + uVar11) = cVar5;
                      if (cVar5 == -1) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        local_b0 = lVar25;
                        (*pcVar14)();
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar10 + 1 != uVar11);
                  }
                  lVar9 = 0;
                  local_b0 = lVar25;
                }
                else {
                  if (*(char *)((longlong)local_e8 + 0xb) == '\0') {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    local_b0 = lVar25;
                    (*pcVar14)();
                  }
                  local_b0 = lVar25;
                  BVar4 = TryAcquireSRWLockExclusive(local_c8);
                  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  FUN_146780693(local_68,1);
                  if (uVar10 < uVar11) {
                    if (uVar11 != uVar10 + 1) {
                    /* WARNING: Does not return */
                      pcVar14 = (code *)invalidInstructionException();
                      (*pcVar14)();
                    }
                  }
                  else {
                    do {
                      if (*(char *)(lVar27 + 0x50 + uVar11) == -1) {
                        FUN_1467806aa(local_68,uVar11);
                        *(undefined1 *)(lVar27 + 0x50 + uVar11) = 1;
                      }
                      else {
                        FUN_1467806c0(local_68,*(undefined8 *)(lVar27 + -0x10),uVar11,&DAT_149dfba50
                                     );
                        cVar5 = *(char *)(lVar27 + 0x50 + uVar11) + '\x01';
                        *(char *)(lVar27 + 0x50 + uVar11) = cVar5;
                        if (cVar5 == -1) {
                    /* WARNING: Does not return */
                          pcVar14 = (code *)invalidInstructionException();
                          (*pcVar14)();
                        }
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar10 + 1 != uVar11);
                  }
                  FUN_1467806c0(local_68);
                  lVar9 = local_58;
                }
                lVar22 = local_80;
                uVar11 = local_88;
                bVar7 = 0x40 - (char)uVar17;
                uVar10 = (local_78 << (bVar7 & 0x3f)) >> (bVar7 & 0x3f);
                if (uVar17 == 0) {
                  uVar10 = 0;
                }
                *(ulonglong *)(lVar27 + 0x10 + uVar23 * 8) = uVar10;
                if (uVar23 + 1 < uVar15 + local_b0) {
                  memset((void *)(lVar27 + uVar23 * 8 + 0x18),0,local_80 + uVar23 * -8);
                }
                uVar16 = (int)uVar17 + (int)local_a8 & 0x3f;
                sVar8 = (sbyte)uVar16;
                puVar6 = (ulonglong *)(lVar27 + 0x38 + lVar22);
                *puVar6 = *puVar6 | 1L << sVar8;
                uVar10 = 0;
                if (uVar16 != 0x3f) {
                  uVar10 = -2L << sVar8 & uVar11;
                }
                *(ulonglong *)(lVar27 + 0x18 + lVar22) = uVar10;
                uVar1 = *(ushort *)(lVar27 + 2);
                if (uVar1 == 0) {
                  FUN_14677ff1a(local_e8);
                }
                sVar12 = uVar1 + (ushort)local_f0;
                uVar10 = local_f0;
                if (CARRY2(uVar1,(ushort)local_f0)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
LAB_146779885:
                *(short *)(lVar27 + 2) = sVar12;
                lVar27 = uVar26 + *(longlong *)(lVar27 + -0x10);
                uVar16 = 0;
                bVar2 = true;
                goto LAB_146779895;
              }
LAB_146779c62:
              uVar17 = (uVar11 - uVar15) * 0x40 - uVar17;
              if (uVar17 < uVar26) {
                uVar17 = uVar26;
              }
              goto LAB_146779c7b;
            }
            if (uVar26 <= uVar21) {
              uVar26 = uVar21;
            }
            uVar20 = uVar20 + lVar9 + uVar21;
            uVar11 = uVar11 >> ((byte)(lVar9 + uVar21) & 0x3f);
LAB_146779756:
          } while (uVar11 != 0);
        }
        uVar15 = uVar15 + 1;
        uVar17 = uVar26;
      } while (uVar15 < 4);
LAB_146779c7b:
      lVar27 = uVar17 << 9;
      uVar16 = 0;
      bVar2 = false;
      lVar9 = 0;
LAB_146779895:
      SRWLock = local_c8;
      if (local_f4 != 0) {
        ReleaseSRWLockExclusive(local_c8);
      }
      param_2 = local_90;
      if (uVar16 == 0) goto LAB_146779c83;
      if (lVar9 != 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      if (local_f4 != 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      ReleaseSRWLockExclusive(local_d0);
      pcVar14 = AcquireSRWLockExclusive_exref;
    } while( true );
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar26 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8)
  ;
  if (1 < uVar26) {
    FUN_14679ea20(uVar26,local_a0);
  }
  puVar6 = (ulonglong *)FUN_14677fd2e(*param_2);
  if (puVar6 != (ulonglong *)0x0) {
    param_2[1] = puVar6;
    goto LAB_146779542;
  }
  uVar13 = 2;
  lVar27 = 0;
  goto LAB_146779ce0;
LAB_146779c83:
  if (bVar2) {
    SRWLock = local_d0;
    uVar3 = 0;
LAB_146779cd7:
    uVar13 = uVar3;
    ReleaseSRWLockExclusive(SRWLock);
LAB_146779ce0:
    *local_98 = uVar13;
    *(longlong *)(local_98 + 2) = lVar27;
    if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (lVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)invalidInstructionException();
    (*pcVar14)();
  }
  local_100 = &DAT_149dfba50;
  local_108 = lVar27;
  puVar6 = (ulonglong *)FUN_14677e25f(local_90);
  goto LAB_146779539;
}



// FUNCTION 146779ebb FUN_146779ebb body=657 status=ok
// SIG undefined FUN_146779ebb(void)

void FUN_146779ebb(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  short sVar10;
  ulonglong uVar11;
  char *pcVar12;
  sbyte sVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  
  lVar17 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  uVar20 = (uint)param_2 & 0x1ffff;
  uVar11 = (ulonglong)uVar20;
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    lVar17 = 0;
  }
  uVar9 = uVar20 >> 9;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar17 + 0x10));
  if (uVar11 != 0) {
    uVar14 = (ulonglong)uVar9 - 1;
    if (((*(uint *)(param_1 + 0x10 + (uVar14 >> 5) * 4) >> ((uint)uVar14 & 0x1f) & 1) == 0) &&
       ((*(uint *)(param_1 + 0x30 + (uVar14 >> 5) * 4) & 1 << ((byte)uVar14 & 0x1f)) == 0)) {
      pcVar12 = "previous bit is not free or end of object";
LAB_14677a122:
      do {
        FUN_14677fb46(param_1,2,param_2,uVar11,pcVar12);
LAB_14677a13a:
        pcVar12 = "free bit set";
      } while( true );
    }
  }
  if ((*(uint *)(param_1 + 0x10 + (ulonglong)(uVar20 >> 0xe) * 4) >> (uVar9 & 0x1f) & 1) != 0)
  goto LAB_14677a13a;
  uVar8 = (ulonglong)(uVar20 >> 0xf);
  uVar14 = *(ulonglong *)(param_1 + 0x30 + uVar8 * 8);
  sVar13 = (sbyte)(uVar9 & 0x3f);
  uVar15 = uVar14 >> sVar13;
  if (uVar15 == 0) {
    lVar18 = (ulonglong)(uVar9 & 0x3f) - 1;
    uVar14 = uVar8;
    do {
      uVar15 = uVar14;
      if (uVar15 == 3) {
        pcVar12 = "object falls off end of page";
        goto LAB_14677a122;
      }
      uVar4 = *(ulonglong *)(param_1 + 0x38 + uVar15 * 8);
      uVar14 = uVar15 + 1;
      lVar18 = lVar18 + -0x40;
    } while (uVar4 == 0);
    uVar6 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    lVar18 = uVar6 - lVar18;
    uVar19 = ~(-2L << ((byte)uVar6 & 0x3f));
    if (uVar6 == 0x3f) {
      uVar19 = 0xffffffffffffffff;
    }
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar14 * 8);
    *puVar1 = *puVar1 | uVar19;
    *(ulonglong *)(param_1 + 0x30 + uVar14 * 8) = uVar4 & ~(1L << (uVar6 & 0x3f));
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar8 * 8);
    *puVar1 = *puVar1 | -1L << sVar13;
    if (uVar8 < uVar15) {
      uVar15 = uVar8 + 2;
      if (uVar8 + 2 < uVar14) {
        uVar15 = uVar14;
      }
      memset((void *)(param_1 + uVar8 * 8 + 0x18),(int)CONCAT71((int7)(uVar14 >> 8),0xff),
             (uVar15 + ~uVar8) * 8);
    }
  }
  else {
    lVar5 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
      }
    }
    lVar18 = lVar5 + 1;
    uVar15 = 0xffffffffffffffff;
    if (lVar18 != 0x40) {
      uVar15 = ~(-2L << ((byte)lVar5 & 0x3f));
    }
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar8 * 8);
    *puVar1 = *puVar1 | uVar15 << sVar13;
    *(ulonglong *)(param_1 + 0x30 + uVar8 * 8) =
         uVar14 & ~(1L << ((ulonglong)((int)lVar5 + uVar9) & 0x3f));
  }
  uVar14 = lVar18 * 0x200;
  if (CARRY8(uVar14,uVar11)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (uVar14 != 0) {
    uVar11 = (uVar14 + uVar11) - 1;
    if (0x1ffff < uVar11) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar11 = uVar11 >> 0xc;
    uVar14 = (ulonglong)(uVar20 >> 0xc);
    if (uVar14 <= uVar11) {
      bVar16 = false;
      do {
        cVar2 = *(char *)(param_1 + 0x50 + uVar14);
        if (cVar2 == '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (cVar2 == -1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(char *)(param_1 + 0x50 + uVar14) = cVar2 + -1;
        bVar16 = (bool)(bVar16 | (char)(cVar2 + -1) == '\0');
        uVar14 = uVar14 + 1;
      } while (uVar11 + 1 != uVar14);
      goto LAB_146779fe0;
    }
  }
  bVar16 = false;
LAB_146779fe0:
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_14677ffd2(lVar17);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar3 = *(ushort *)(param_1 + 2);
  sVar10 = uVar3 - (ushort)lVar18;
  *(short *)(param_1 + 2) = sVar10;
  if (uVar3 < (ushort)lVar18) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (sVar10 == 0) {
    FUN_14677ff3e(lVar17,param_1);
  }
  else if (bVar16) {
    FUN_14677ff9a(lVar17,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014677a0d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar17 + 0x10));
  return;
}



// FUNCTION 14677a19d FUN_14677a19d body=944 status=ok
// SIG undefined FUN_14677a19d(void)

void FUN_14677a19d(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  short sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  sbyte sVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  size_t _Size;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ushort uVar25;
  
  uVar24 = (uint)param_2 & 0x1ffff;
  uVar16 = (ulonglong)uVar24;
  lVar19 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    lVar19 = 0;
  }
  uVar23 = 1;
  if (param_3 != 0) {
    uVar23 = param_3 + 0x1ffU >> 9;
  }
  uVar8 = uVar24 >> 9;
  uVar10 = (ulonglong)uVar8;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x10));
  if (uVar16 != 0) {
    uVar17 = uVar10 - 1;
    if (((*(uint *)(param_1 + 0x10 + (uVar17 >> 5) * 4) >> ((uint)uVar17 & 0x1f) & 1) == 0) &&
       ((*(uint *)(param_1 + 0x30 + (uVar17 >> 5) * 4) & 1 << ((byte)uVar17 & 0x1f)) == 0))
    goto LAB_14677a544;
  }
  if ((*(uint *)(param_1 + 0x10 + (ulonglong)(uVar24 >> 0xe) * 4) >> (uVar8 & 0x1f) & 1) != 0)
  goto LAB_14677a52c;
  uVar21 = (ulonglong)(uVar24 >> 0xf);
  uVar17 = *(ulonglong *)(param_1 + 0x30 + uVar21 * 8);
  sVar13 = (sbyte)(uVar8 & 0x3f);
  uVar20 = uVar17 >> sVar13;
  uVar18 = uVar23;
  if (uVar20 == 0) {
    uVar17 = uVar23 + uVar10;
    _Size = (uVar21 * 8 - (uVar17 >> 3 & 0xfffffffffffffff8)) - 8;
    lVar22 = 1 - (ulonglong)(uVar8 & 0x3f);
    do {
      uVar20 = uVar21;
      if (uVar20 == 3) {
        pcVar12 = "object falls off end of page";
        goto LAB_14677a514;
      }
      uVar5 = *(ulonglong *)(param_1 + 0x38 + uVar20 * 8);
      uVar21 = uVar20 + 1;
      _Size = _Size + 8;
      lVar22 = lVar22 + 0x40;
    } while (uVar5 == 0);
    uVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    uVar5 = uVar6 + lVar22;
    if (uVar23 <= uVar5) {
      if (uVar5 != uVar23) {
        uVar11 = uVar17 >> 6;
        uVar24 = (uint)uVar17 & 0x3f;
        uVar10 = (uVar23 + uVar10) - 1;
        puVar2 = (uint *)(param_1 + 0x30 + (uVar10 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
        uVar10 = *(ulonglong *)(param_1 + 0x30 + uVar21 * 8);
        uVar18 = uVar5;
        if (uVar11 == uVar21) {
          if ((uVar24 - uVar23) + lVar22 != 1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar17 = (uVar6 - uVar24) + 1;
          if (0x40 < uVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar20 = ~(-1L << ((byte)uVar17 & 0x3f));
          if (uVar17 == 0x40) {
            uVar20 = 0xffffffffffffffff;
          }
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
          *puVar1 = *puVar1 | uVar20 << (sbyte)uVar24;
          *(ulonglong *)(param_1 + 0x30 + uVar21 * 8) = uVar10 & ~(1L << (uVar6 & 0x3f));
        }
        else {
          uVar17 = ~(-2L << ((byte)uVar6 & 0x3f));
          if (uVar6 == 0x3f) {
            uVar17 = 0xffffffffffffffff;
          }
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
          *puVar1 = *puVar1 | uVar17;
          *(ulonglong *)(param_1 + 0x30 + uVar21 * 8) = uVar10 & ~(1L << (uVar6 & 0x3f));
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar11 * 8);
          *puVar1 = *puVar1 | -1L << (sbyte)uVar24;
          if (uVar11 < uVar20) {
            memset((void *)(param_1 + uVar11 * 8 + 0x18),(int)CONCAT71((int7)(uVar6 >> 8),0xff),
                   _Size);
          }
        }
      }
      goto LAB_14677a2be;
    }
  }
  else {
    lVar22 = 0;
    if (uVar20 != 0) {
      for (; (uVar20 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
      }
    }
    uVar10 = lVar22 + 1;
    lVar15 = uVar10 - uVar23;
    if (uVar23 <= uVar10) {
      if (lVar15 != 0) {
        uVar18 = ~(-1L << ((byte)lVar15 & 0x3f));
        if (lVar15 == 0x40) {
          uVar18 = 0xffffffffffffffff;
        }
        bVar14 = sVar13 + (char)uVar23;
        puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
        *puVar1 = *puVar1 | uVar18 << (bVar14 & 0x3f);
        *(ulonglong *)(param_1 + 0x30 + uVar21 * 8) =
             uVar17 & ~(1L << ((ulonglong)((int)lVar22 + uVar8) & 0x3f)) |
             1L << ((ulonglong)(byte)(bVar14 - 1) & 0x3f);
        uVar18 = uVar10;
      }
LAB_14677a2be:
      uVar10 = uVar18 * 0x200 + uVar16;
      uVar16 = uVar23 * 0x200 + uVar16 + 0xfff & 0xfffffffffffff000;
      uVar17 = 0;
      if (uVar10 < uVar16) {
        uVar10 = uVar17;
        uVar16 = uVar17;
      }
      if (uVar16 != uVar10) {
        if (0x1ffff < uVar10 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar10 = uVar10 - 1 >> 0xc;
        uVar16 = uVar16 >> 0xc;
        if (uVar10 < uVar16) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          do {
            cVar3 = *(char *)(param_1 + 0x50 + uVar16);
            if (cVar3 == '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if (cVar3 == -1) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            *(char *)(param_1 + 0x50 + uVar16) = cVar3 + -1;
            uVar17 = (ulonglong)(byte)((byte)uVar17 | (char)(cVar3 + -1) == '\0');
            uVar16 = uVar16 + 1;
          } while (uVar10 + 1 != uVar16);
        }
      }
      uVar25 = (short)uVar18 - (short)uVar23;
      if (*(char *)(param_1 + 1) == '\0') {
        FUN_14677ffd2(lVar19);
        *(undefined1 *)(param_1 + 1) = 1;
      }
      uVar4 = *(ushort *)(param_1 + 2);
      sVar9 = uVar4 - uVar25;
      *(short *)(param_1 + 2) = sVar9;
      if (uVar25 <= uVar4) {
        if (sVar9 == 0) {
          FUN_14677ff3e(lVar19,param_1);
        }
        else if (uVar17 != 0) {
          FUN_14677ff9a(lVar19,param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x00014677a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x10));
        return;
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  FUN_1467a2796("attempt to shrink to a larger size",param_2);
LAB_14677a544:
  pcVar12 = "previous bit is not free or end of object";
LAB_14677a514:
  do {
    FUN_14677fb46(param_1,2,param_2,uVar16,pcVar12);
LAB_14677a52c:
    pcVar12 = "free bit set";
  } while( true );
}



// FUNCTION 14677a5da FUN_14677a5da body=83 status=ok
// SIG undefined FUN_14677a5da(void)

undefined8 FUN_14677a5da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_14677d8b8(local_20,lVar1,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14677a62e FUN_14677a62e body=101 status=ok
// SIG undefined FUN_14677a62e(void)

undefined8 FUN_14677a62e(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  uVar1 = FUN_14678d3d7(&DAT_149dfbaf8,param_2);
  uVar1 = FUN_14678d54e(&DAT_14c758430,0x400000,uVar1,param_1);
  if (param_3 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return uVar1;
}



// FUNCTION 14677a693 FUN_14677a693 body=93 status=ok
// SIG undefined FUN_14677a693(void)

void FUN_14677a693(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_14678d689(&DAT_14c758430,0x400000,param_1);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  FUN_14678d689(&DAT_14c758430,0x400000,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014677a6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  return;
}



// FUNCTION 14677a6f0 FUN_14677a6f0 body=56 status=ok
// SIG undefined FUN_14677a6f0(void)

void FUN_14677a6f0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar1 = param_1;
  }
  FUN_14678cf2b(*(longlong *)(*param_1 + 0x28) + 0x100,&DAT_149dfbaf8,0,plVar1,param_2);
  return;
}



// FUNCTION 14677a728 FUN_14677a728 body=2689 status=ok
// SIG undefined FUN_14677a728(void)

void FUN_14677a728(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  BOOLEAN BVar4;
  char cVar5;
  ulonglong *puVar6;
  byte bVar7;
  sbyte sVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  undefined4 uVar13;
  code *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  PSRWLOCK SRWLock;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined *local_100;
  uint local_f4;
  ulonglong local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  PSRWLOCK local_d0;
  PSRWLOCK local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = 0x1000;
  if (param_4 != 0) {
    local_d8 = param_4 + 0xfffU & 0xfffffffffffff000;
  }
  puVar6 = (ulonglong *)param_2[1];
  uVar10 = local_d8 >> 0xc;
  local_b8 = param_5 - 1;
  local_c0 = -param_5;
  local_e0 = local_d8 - 1;
  local_a8 = uVar10 + 0x3f;
  local_70 = ~(-1L << ((byte)uVar10 & 0x3f));
  local_f0 = uVar10;
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  if (local_d8 == 0x40000) {
    local_70 = 0xffffffffffffffff;
  }
LAB_14677a7f8:
  pcVar14 = AcquireSRWLockExclusive_exref;
  if (puVar6 != (ulonglong *)0x0) {
LAB_14677a801:
    SRWLock = (PSRWLOCK)(puVar6 + 3);
    local_d0 = (PSRWLOCK)(puVar6 + 2);
    uVar16 = 0;
    local_e8 = puVar6;
    local_c8 = SRWLock;
    do {
      puVar6 = local_e8;
      if (uVar16 != 0) {
        local_108 = 0;
        FUN_14678ec28((ulonglong)uVar16 << 0xc,&DAT_149dfbaf8,0,0);
        (*pcVar14)(SRWLock);
      }
      local_f4 = uVar16;
      (*pcVar14)(local_d0);
      if ((*(char *)((longlong)puVar6 + 0xb) == '\0') &&
         (cVar5 = FUN_14677dfd2(puVar6), cVar5 == '\0')) {
        ReleaseSRWLockExclusive(local_d0);
        lVar27 = 0;
        uVar13 = 2;
        uVar3 = 2;
        if (local_f4 != 0) goto LAB_14677afc6;
        goto LAB_14677afcf;
      }
      if (DAT_14c758438 == 0) {
LAB_14677a8e9:
        lVar27 = 0;
      }
      else {
        uVar26 = *puVar6;
        uVar16 = (uint)(uVar26 >> 0x1a) & 0xfffffff ^ (uint)(uVar26 >> 0x16);
        uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
        uVar16 = uVar16 >> 0xb ^ uVar16;
        uVar11 = (ulonglong)(uVar16 & *(uint *)(DAT_14c758438 + 0xc));
        uVar15 = *(ulonglong *)(DAT_14c758438 + 0x20 + uVar11 * 0x10);
        while (uVar15 != uVar26) {
          uVar16 = uVar16 + 1;
          if (uVar15 == 0xffffffffffffffff) goto LAB_14677a8e9;
          uVar11 = (ulonglong)(uVar16 & *(uint *)(DAT_14c758438 + 0xc));
          uVar15 = *(ulonglong *)(DAT_14c758438 + 0x20 + uVar11 * 0x10);
        }
        lVar27 = *(longlong *)(DAT_14c758438 + 0x28 + uVar11 * 0x10);
      }
      uVar26 = 0;
      uVar15 = 0;
      do {
        uVar11 = *(ulonglong *)(lVar27 + 0x10 + uVar15 * 8);
        if (uVar11 != 0) {
          uVar20 = 0;
          uVar24 = uVar11;
          do {
            lVar9 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
              }
            }
            uVar17 = uVar11 >> ((byte)lVar9 & 0x3f) ^ 0xffffffffffffffff;
            if (uVar17 == 0) {
              uVar21 = 0x40;
            }
            else {
              uVar21 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                }
              }
            }
            uVar17 = lVar9 + uVar20;
            uVar18 = uVar10 - uVar21;
            if (uVar10 < uVar21 || uVar18 == 0) {
              if (0x1000 < param_5) {
                lVar22 = uVar15 * 0x40 + uVar17;
                uVar23 = lVar22 * 0x1000 + local_b8 & local_c0;
                if ((lVar22 + uVar21) * 0x1000 - uVar23 < local_d8) goto LAB_14677a92b;
                if (local_e0 + uVar23 >> 0x12 != uVar15) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                uVar15 = uVar23 >> 0x12;
                uVar17 = (ulonglong)((uint)(uVar23 >> 0xc) & 0x3f);
              }
              uVar26 = uVar17 * 0x1000 + uVar15 * 0x40000;
              if (0x3fffff < uVar26 + local_e0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)invalidInstructionException();
                (*pcVar14)();
              }
              uVar20 = uVar26 >> 0xc;
              uVar11 = uVar26 + local_e0 >> 0xc;
              if (local_f4 != 0) {
                if (*(char *)((longlong)local_e8 + 0xb) == '\0') {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                BVar4 = TryAcquireSRWLockExclusive(local_c8);
                if (BVar4 != '\0') {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                FUN_146780693(local_68,1);
                uVar10 = local_f0;
                if (uVar11 < uVar20) {
                  if (uVar20 != uVar11 + 1) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                }
                else {
                  do {
                    if (*(char *)(lVar27 + 0x110 + uVar20) == -1) {
                      FUN_1467806aa(local_68,uVar20);
                      *(undefined1 *)(lVar27 + 0x110 + uVar20) = 1;
                    }
                    else {
                      FUN_1467806c0(local_68,*(undefined8 *)(lVar27 + -0x10),uVar20,&DAT_149dfbaf8);
                      cVar5 = *(char *)(lVar27 + 0x110 + uVar20) + '\x01';
                      *(char *)(lVar27 + 0x110 + uVar20) = cVar5;
                      if (cVar5 == -1) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        (*pcVar14)();
                      }
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar11 + 1 != uVar20);
                }
                FUN_1467806c0(local_68);
                lVar9 = local_58;
LAB_14677aaee:
                puVar6 = (ulonglong *)(lVar27 + 0x90 + uVar15 * 8);
                *puVar6 = *puVar6 | 1L << ((byte)uVar17 + (char)local_a8 & 0x3f);
                *(ulonglong *)(lVar27 + 0x10 + uVar15 * 8) =
                     uVar24 & ~(local_70 << ((byte)uVar17 & 0x3f));
                uVar1 = *(ushort *)(lVar27 + 2);
                if (uVar1 == 0) {
                  FUN_14677ff1a(local_e8);
                }
                sVar12 = uVar1 + (ushort)uVar10;
                if (CARRY2(uVar1,(ushort)uVar10)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                goto LAB_14677ab47;
              }
              if (uVar20 <= uVar11) {
                uVar16 = 0;
                uVar10 = uVar20;
                do {
                  uVar16 = uVar16 + (*(char *)(lVar27 + 0x110 + uVar10) == -1);
                  uVar10 = uVar10 + 1;
                } while (uVar11 + 1 != uVar10);
                if (uVar16 != 0) {
                  bVar2 = false;
                  lVar27 = 0;
                  lVar9 = 0;
                  uVar10 = local_f0;
                  goto LAB_14677ab57;
                }
                do {
                  cVar5 = *(char *)(lVar27 + 0x110 + uVar20);
                  if (cVar5 == -1) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  cVar5 = cVar5 + '\x01';
                  *(char *)(lVar27 + 0x110 + uVar20) = cVar5;
                  if (cVar5 == -1) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar11 + 1 != uVar20);
              }
              lVar9 = 0;
              uVar10 = local_f0;
              goto LAB_14677aaee;
            }
LAB_14677a92b:
            if (0x3f < uVar21 + uVar17) {
              uVar11 = uVar15 + 1;
              if (uVar11 < 0x10) {
                uVar11 = uVar17 * 0x1000 + local_b8 + uVar15 * 0x40000 & local_c0;
                lVar22 = uVar15 * 8;
                lVar19 = uVar11 + uVar15 * -0x40000;
                lVar9 = lVar9 + uVar20;
                uVar20 = (uVar15 * 0x40000 - uVar11) + 0x80000;
                lVar25 = 1;
                uVar10 = 0xf;
                while( true ) {
                  lVar19 = lVar19 + -0x40000;
                  lVar9 = lVar9 + -0x40;
                  uVar21 = *(ulonglong *)(lVar27 + 0x18 + lVar22);
                  uVar23 = uVar15;
                  if (uVar21 != 0xffffffffffffffff) break;
                  if (uVar18 < 0x41) {
                    if (param_5 < 0x1001) goto LAB_14677acdf;
                    local_b0 = lVar25;
                    if (local_d8 <= uVar20) {
                      if ((uVar15 - (local_e0 + uVar11 >> 0x12)) + lVar25 != 0) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        (*pcVar14)();
                      }
                      goto LAB_14677b0de;
                    }
                  }
                  else {
                    uVar18 = uVar18 - 0x40;
                  }
                  lVar22 = lVar22 + 8;
                  lVar25 = lVar25 + 1;
                  uVar10 = uVar10 - 1;
                  uVar20 = uVar20 + 0x40000;
                  if (uVar15 == uVar10) {
                    uVar11 = 0x10;
                    uVar10 = local_f0;
                    goto LAB_14677af51;
                  }
                }
                uVar20 = 0;
                if (~uVar21 != 0) {
                  for (; (~uVar21 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                  }
                }
                if (uVar20 < uVar18) {
LAB_14677aca5:
                  uVar15 = uVar15 + lVar25;
                  if (uVar26 <= uVar20 - lVar9) {
                    uVar26 = uVar20 - lVar9;
                  }
                  uVar11 = uVar21 >> ((byte)uVar20 & 0x3f);
                  uVar10 = local_f0;
                  uVar24 = uVar21;
                  goto LAB_14677aa15;
                }
                if (0x1000 < param_5) {
                  local_b0 = lVar25;
                  if ((ulonglong)(uint)((int)uVar20 << 0xc) - lVar19 < local_d8) goto LAB_14677aca5;
                  if ((uVar15 - (local_e0 + uVar11 >> 0x12)) + lVar25 != 0) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
LAB_14677b0de:
                  uVar17 = (ulonglong)((uint)(uVar11 >> 0xc) & 0x3f);
                  uVar23 = uVar11 >> 0x12;
                }
LAB_14677acdf:
                uVar26 = uVar17 * 0x1000 + uVar23 * 0x40000;
                if (0x3fffff < uVar26 + local_e0) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  local_b0 = lVar25;
                  (*pcVar14)();
                }
                uVar11 = uVar26 >> 0xc;
                uVar10 = uVar26 + local_e0 >> 0xc;
                local_88 = uVar21;
                local_80 = lVar22;
                local_78 = uVar24;
                if (local_f4 == 0) {
                  if (uVar11 <= uVar10) {
                    uVar16 = 0;
                    uVar20 = uVar11;
                    do {
                      uVar16 = uVar16 + (*(char *)(lVar27 + 0x110 + uVar20) == -1);
                      uVar20 = uVar20 + 1;
                    } while (uVar10 + 1 != uVar20);
                    if (uVar16 != 0) {
                      bVar2 = false;
                      lVar27 = 0;
                      lVar9 = 0;
                      uVar10 = local_f0;
                      local_b0 = lVar25;
                      goto LAB_14677ab57;
                    }
                    do {
                      cVar5 = *(char *)(lVar27 + 0x110 + uVar11);
                      if (cVar5 == -1) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        local_b0 = lVar25;
                        (*pcVar14)();
                      }
                      cVar5 = cVar5 + '\x01';
                      *(char *)(lVar27 + 0x110 + uVar11) = cVar5;
                      if (cVar5 == -1) {
                    /* WARNING: Does not return */
                        pcVar14 = (code *)invalidInstructionException();
                        local_b0 = lVar25;
                        (*pcVar14)();
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar10 + 1 != uVar11);
                  }
                  lVar9 = 0;
                  local_b0 = lVar25;
                }
                else {
                  if (*(char *)((longlong)local_e8 + 0xb) == '\0') {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    local_b0 = lVar25;
                    (*pcVar14)();
                  }
                  local_b0 = lVar25;
                  BVar4 = TryAcquireSRWLockExclusive(local_c8);
                  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  FUN_146780693(local_68,1);
                  if (uVar10 < uVar11) {
                    if (uVar11 != uVar10 + 1) {
                    /* WARNING: Does not return */
                      pcVar14 = (code *)invalidInstructionException();
                      (*pcVar14)();
                    }
                  }
                  else {
                    do {
                      if (*(char *)(lVar27 + 0x110 + uVar11) == -1) {
                        FUN_1467806aa(local_68,uVar11);
                        *(undefined1 *)(lVar27 + 0x110 + uVar11) = 1;
                      }
                      else {
                        FUN_1467806c0(local_68,*(undefined8 *)(lVar27 + -0x10),uVar11,&DAT_149dfbaf8
                                     );
                        cVar5 = *(char *)(lVar27 + 0x110 + uVar11) + '\x01';
                        *(char *)(lVar27 + 0x110 + uVar11) = cVar5;
                        if (cVar5 == -1) {
                    /* WARNING: Does not return */
                          pcVar14 = (code *)invalidInstructionException();
                          (*pcVar14)();
                        }
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar10 + 1 != uVar11);
                  }
                  FUN_1467806c0(local_68);
                  lVar9 = local_58;
                }
                lVar22 = local_80;
                uVar11 = local_88;
                bVar7 = 0x40 - (char)uVar17;
                uVar10 = (local_78 << (bVar7 & 0x3f)) >> (bVar7 & 0x3f);
                if (uVar17 == 0) {
                  uVar10 = 0;
                }
                *(ulonglong *)(lVar27 + 0x10 + uVar23 * 8) = uVar10;
                if (uVar23 + 1 < uVar15 + local_b0) {
                  memset((void *)(lVar27 + uVar23 * 8 + 0x18),0,local_80 + uVar23 * -8);
                }
                uVar16 = (int)uVar17 + (int)local_a8 & 0x3f;
                sVar8 = (sbyte)uVar16;
                puVar6 = (ulonglong *)(lVar27 + 0x98 + lVar22);
                *puVar6 = *puVar6 | 1L << sVar8;
                uVar10 = 0;
                if (uVar16 != 0x3f) {
                  uVar10 = -2L << sVar8 & uVar11;
                }
                *(ulonglong *)(lVar27 + 0x18 + lVar22) = uVar10;
                uVar1 = *(ushort *)(lVar27 + 2);
                if (uVar1 == 0) {
                  FUN_14677ff1a(local_e8);
                }
                sVar12 = uVar1 + (ushort)local_f0;
                uVar10 = local_f0;
                if (CARRY2(uVar1,(ushort)local_f0)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
LAB_14677ab47:
                *(short *)(lVar27 + 2) = sVar12;
                lVar27 = uVar26 + *(longlong *)(lVar27 + -0x10);
                uVar16 = 0;
                bVar2 = true;
                goto LAB_14677ab57;
              }
LAB_14677af51:
              uVar17 = (uVar11 - uVar15) * 0x40 - uVar17;
              if (uVar17 < uVar26) {
                uVar17 = uVar26;
              }
              goto LAB_14677af6a;
            }
            if (uVar26 <= uVar21) {
              uVar26 = uVar21;
            }
            uVar20 = uVar20 + lVar9 + uVar21;
            uVar11 = uVar11 >> ((byte)(lVar9 + uVar21) & 0x3f);
LAB_14677aa15:
          } while (uVar11 != 0);
        }
        uVar15 = uVar15 + 1;
        uVar17 = uVar26;
      } while (uVar15 < 0x10);
LAB_14677af6a:
      lVar27 = uVar17 << 0xc;
      uVar16 = 0;
      bVar2 = false;
      lVar9 = 0;
LAB_14677ab57:
      SRWLock = local_c8;
      if (local_f4 != 0) {
        ReleaseSRWLockExclusive(local_c8);
      }
      param_2 = local_90;
      if (uVar16 == 0) goto LAB_14677af72;
      if (lVar9 != 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      if (local_f4 != 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      ReleaseSRWLockExclusive(local_d0);
      pcVar14 = AcquireSRWLockExclusive_exref;
    } while( true );
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar26 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8)
  ;
  if (1 < uVar26) {
    FUN_14679ea20(uVar26,local_a0);
  }
  puVar6 = (ulonglong *)FUN_14677fd2e(*param_2);
  if (puVar6 != (ulonglong *)0x0) {
    param_2[1] = puVar6;
    goto LAB_14677a801;
  }
  uVar13 = 2;
  lVar27 = 0;
  goto LAB_14677afcf;
LAB_14677af72:
  if (bVar2) {
    SRWLock = local_d0;
    uVar3 = 0;
LAB_14677afc6:
    uVar13 = uVar3;
    ReleaseSRWLockExclusive(SRWLock);
LAB_14677afcf:
    *local_98 = uVar13;
    *(longlong *)(local_98 + 2) = lVar27;
    if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (lVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)invalidInstructionException();
    (*pcVar14)();
  }
  local_100 = &DAT_149dfbaf8;
  local_108 = lVar27;
  puVar6 = (ulonglong *)FUN_14677e25f(local_90);
  goto LAB_14677a7f8;
}



// FUNCTION 14677b1aa FUN_14677b1aa body=671 status=ok
// SIG undefined FUN_14677b1aa(void)

void FUN_14677b1aa(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  short sVar10;
  ulonglong uVar11;
  char *pcVar12;
  sbyte sVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  
  lVar16 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  uVar20 = (uint)param_2 & 0x3fffff;
  uVar21 = (ulonglong)uVar20;
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    lVar16 = 0;
  }
  uVar9 = uVar20 >> 0xc;
  uVar19 = (ulonglong)uVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar16 + 0x10));
  if (uVar21 != 0) {
    uVar11 = uVar19 - 1;
    if (((*(uint *)(param_1 + 0x10 + (uVar11 >> 5) * 4) >> ((uint)uVar11 & 0x1f) & 1) == 0) &&
       ((*(uint *)(param_1 + 0x90 + (uVar11 >> 5) * 4) & 1 << ((byte)uVar11 & 0x1f)) == 0)) {
      pcVar12 = "previous bit is not free or end of object";
LAB_14677b41f:
      do {
        FUN_14677fb46(param_1,3,param_2,uVar21,pcVar12);
LAB_14677b437:
        pcVar12 = "free bit set";
      } while( true );
    }
  }
  if ((*(uint *)(param_1 + 0x10 + (ulonglong)(uVar20 >> 0x11) * 4) >> (uVar9 & 0x1f) & 1) != 0)
  goto LAB_14677b437;
  uVar8 = (ulonglong)(uVar20 >> 0x12);
  uVar11 = *(ulonglong *)(param_1 + 0x90 + uVar8 * 8);
  sVar13 = (sbyte)(uVar9 & 0x3f);
  uVar14 = uVar11 >> sVar13;
  if (uVar14 == 0) {
    lVar17 = (ulonglong)(uVar9 & 0x3f) - 1;
    uVar11 = uVar8;
    do {
      uVar14 = uVar11;
      if (uVar14 == 0xf) {
        pcVar12 = "object falls off end of page";
        goto LAB_14677b41f;
      }
      uVar4 = *(ulonglong *)(param_1 + 0x98 + uVar14 * 8);
      uVar11 = uVar14 + 1;
      lVar17 = lVar17 + -0x40;
    } while (uVar4 == 0);
    uVar6 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    lVar17 = uVar6 - lVar17;
    uVar18 = ~(-2L << ((byte)uVar6 & 0x3f));
    if (uVar6 == 0x3f) {
      uVar18 = 0xffffffffffffffff;
    }
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar11 * 8);
    *puVar1 = *puVar1 | uVar18;
    *(ulonglong *)(param_1 + 0x90 + uVar11 * 8) = uVar4 & ~(1L << (uVar6 & 0x3f));
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar8 * 8);
    *puVar1 = *puVar1 | -1L << sVar13;
    if (uVar8 < uVar14) {
      uVar14 = uVar8 + 2;
      if (uVar8 + 2 < uVar11) {
        uVar14 = uVar11;
      }
      memset((void *)(param_1 + uVar8 * 8 + 0x18),(int)CONCAT71((int7)(uVar11 >> 8),0xff),
             (uVar14 + ~uVar8) * 8);
    }
  }
  else {
    lVar5 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
      }
    }
    lVar17 = lVar5 + 1;
    uVar14 = 0xffffffffffffffff;
    if (lVar17 != 0x40) {
      uVar14 = ~(-2L << ((byte)lVar5 & 0x3f));
    }
    puVar1 = (ulonglong *)(param_1 + 0x10 + uVar8 * 8);
    *puVar1 = *puVar1 | uVar14 << sVar13;
    *(ulonglong *)(param_1 + 0x90 + uVar8 * 8) =
         uVar11 & ~(1L << ((ulonglong)((int)lVar5 + uVar9) & 0x3f));
  }
  uVar11 = lVar17 * 0x1000;
  if (CARRY8(uVar21,uVar11)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (uVar11 != 0) {
    uVar21 = (uVar21 + uVar11) - 1;
    if (0x3fffff < uVar21) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar21 = uVar21 >> 0xc;
    if (uVar19 <= uVar21) {
      bVar15 = false;
      do {
        cVar2 = *(char *)(param_1 + 0x110 + uVar19);
        if (cVar2 == '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (cVar2 == -1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(char *)(param_1 + 0x110 + uVar19) = cVar2 + -1;
        bVar15 = (bool)(bVar15 | (char)(cVar2 + -1) == '\0');
        uVar19 = uVar19 + 1;
      } while (uVar21 + 1 != uVar19);
      goto LAB_14677b2d2;
    }
  }
  bVar15 = false;
LAB_14677b2d2:
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_14677ffd2(lVar16);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar3 = *(ushort *)(param_1 + 2);
  sVar10 = uVar3 - (ushort)lVar17;
  *(short *)(param_1 + 2) = sVar10;
  if (uVar3 < (ushort)lVar17) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (sVar10 == 0) {
    FUN_14677ff3e(lVar16,param_1);
  }
  else if (bVar15) {
    FUN_14677ff9a(lVar16,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014677b3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x10));
  return;
}



// FUNCTION 14677b49f FUN_14677b49f body=978 status=ok
// SIG undefined FUN_14677b49f(void)

void FUN_14677b49f(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  short sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  sbyte sVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  size_t _Size;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ushort uVar25;
  
  uVar24 = (uint)param_2 & 0x3fffff;
  uVar16 = (ulonglong)uVar24;
  lVar19 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    lVar19 = 0;
  }
  uVar23 = 1;
  if (param_3 != 0) {
    uVar23 = param_3 + 0xfffU >> 0xc;
  }
  uVar8 = uVar24 >> 0xc;
  uVar10 = (ulonglong)uVar8;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar19 + 0x10));
  if (uVar16 != 0) {
    uVar17 = uVar10 - 1;
    if (((*(uint *)(param_1 + 0x10 + (uVar17 >> 5) * 4) >> ((uint)uVar17 & 0x1f) & 1) == 0) &&
       ((*(uint *)(param_1 + 0x90 + (uVar17 >> 5) * 4) & 1 << ((byte)uVar17 & 0x1f)) == 0))
    goto LAB_14677b868;
  }
  if ((*(uint *)(param_1 + 0x10 + (ulonglong)(uVar24 >> 0x11) * 4) >> (uVar8 & 0x1f) & 1) != 0)
  goto LAB_14677b850;
  uVar21 = (ulonglong)(uVar24 >> 0x12);
  uVar17 = *(ulonglong *)(param_1 + 0x90 + uVar21 * 8);
  sVar13 = (sbyte)(uVar8 & 0x3f);
  uVar20 = uVar17 >> sVar13;
  uVar18 = uVar23;
  if (uVar20 == 0) {
    uVar17 = uVar23 + uVar10;
    _Size = (uVar21 * 8 - (uVar17 >> 3 & 0xfffffffffffffff8)) - 8;
    lVar22 = 1 - (ulonglong)(uVar8 & 0x3f);
    do {
      uVar20 = uVar21;
      if (uVar20 == 0xf) {
        pcVar12 = "object falls off end of page";
        goto LAB_14677b838;
      }
      uVar5 = *(ulonglong *)(param_1 + 0x98 + uVar20 * 8);
      uVar21 = uVar20 + 1;
      _Size = _Size + 8;
      lVar22 = lVar22 + 0x40;
    } while (uVar5 == 0);
    uVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    uVar5 = uVar6 + lVar22;
    if (uVar23 <= uVar5) {
      if (uVar5 != uVar23) {
        uVar11 = uVar17 >> 6;
        uVar24 = (uint)uVar17 & 0x3f;
        uVar10 = (uVar23 + uVar10) - 1;
        puVar2 = (uint *)(param_1 + 0x90 + (uVar10 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
        uVar10 = *(ulonglong *)(param_1 + 0x90 + uVar21 * 8);
        uVar18 = uVar5;
        if (uVar11 == uVar21) {
          if ((uVar24 - uVar23) + lVar22 != 1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar17 = (uVar6 - uVar24) + 1;
          if (0x40 < uVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar20 = ~(-1L << ((byte)uVar17 & 0x3f));
          if (uVar17 == 0x40) {
            uVar20 = 0xffffffffffffffff;
          }
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
          *puVar1 = *puVar1 | uVar20 << (sbyte)uVar24;
          *(ulonglong *)(param_1 + 0x90 + uVar21 * 8) = uVar10 & ~(1L << (uVar6 & 0x3f));
        }
        else {
          uVar17 = ~(-2L << ((byte)uVar6 & 0x3f));
          if (uVar6 == 0x3f) {
            uVar17 = 0xffffffffffffffff;
          }
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
          *puVar1 = *puVar1 | uVar17;
          *(ulonglong *)(param_1 + 0x90 + uVar21 * 8) = uVar10 & ~(1L << (uVar6 & 0x3f));
          puVar1 = (ulonglong *)(param_1 + 0x10 + uVar11 * 8);
          *puVar1 = *puVar1 | -1L << (sbyte)uVar24;
          if (uVar11 < uVar20) {
            memset((void *)(param_1 + uVar11 * 8 + 0x18),(int)CONCAT71((int7)(uVar6 >> 8),0xff),
                   _Size);
          }
        }
      }
      goto LAB_14677b5c9;
    }
  }
  else {
    lVar22 = 0;
    if (uVar20 != 0) {
      for (; (uVar20 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
      }
    }
    uVar10 = lVar22 + 1;
    lVar15 = uVar10 - uVar23;
    if (uVar23 <= uVar10) {
      if (lVar15 != 0) {
        uVar18 = ~(-1L << ((byte)lVar15 & 0x3f));
        if (lVar15 == 0x40) {
          uVar18 = 0xffffffffffffffff;
        }
        bVar14 = sVar13 + (char)uVar23;
        puVar1 = (ulonglong *)(param_1 + 0x10 + uVar21 * 8);
        *puVar1 = *puVar1 | uVar18 << (bVar14 & 0x3f);
        *(ulonglong *)(param_1 + 0x90 + uVar21 * 8) =
             uVar17 & ~(1L << ((ulonglong)((int)lVar22 + uVar8) & 0x3f)) |
             1L << ((ulonglong)(byte)(bVar14 - 1) & 0x3f);
        uVar18 = uVar10;
      }
LAB_14677b5c9:
      uVar10 = uVar18 * 0x1000 + uVar16;
      uVar16 = uVar23 * 0x1000 + uVar16 + 0xfff & 0xfffffffffffff000;
      uVar17 = 0;
      if (uVar10 < uVar16) {
        uVar10 = uVar17;
        uVar16 = uVar17;
      }
      if (uVar16 != uVar10) {
        if (0x3fffff < uVar10 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar10 = uVar10 - 1 >> 0xc;
        uVar16 = uVar16 >> 0xc;
        if (uVar10 < uVar16) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          do {
            cVar3 = *(char *)(param_1 + 0x110 + uVar16);
            if (cVar3 == '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if (cVar3 == -1) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            *(char *)(param_1 + 0x110 + uVar16) = cVar3 + -1;
            uVar17 = (ulonglong)(byte)((byte)uVar17 | (char)(cVar3 + -1) == '\0');
            uVar16 = uVar16 + 1;
          } while (uVar10 + 1 != uVar16);
        }
      }
      uVar25 = (short)uVar18 - (short)uVar23;
      if (*(char *)(param_1 + 1) == '\0') {
        FUN_14677ffd2(lVar19);
        *(undefined1 *)(param_1 + 1) = 1;
      }
      uVar4 = *(ushort *)(param_1 + 2);
      sVar9 = uVar4 - uVar25;
      *(short *)(param_1 + 2) = sVar9;
      if (uVar25 <= uVar4) {
        if (sVar9 == 0) {
          FUN_14677ff3e(lVar19,param_1);
        }
        else if (uVar17 != 0) {
          FUN_14677ff9a(lVar19,param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x00014677b787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar19 + 0x10));
        return;
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  FUN_1467a2796("attempt to shrink to a larger size",param_2);
LAB_14677b868:
  pcVar12 = "previous bit is not free or end of object";
LAB_14677b838:
  do {
    FUN_14677fb46(param_1,3,param_2,uVar16,pcVar12);
LAB_14677b850:
    pcVar12 = "free bit set";
  } while( true );
}



// FUNCTION 14677ba03 FUN_14677ba03 body=4192 status=ok
// SIG undefined FUN_14677ba03(void)

undefined8 FUN_14677ba03(undefined8 param_1,char *param_2,undefined8 param_3,code *param_4)

{
  PSRWLOCK SRWLock;
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  BOOLEAN BVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  undefined1 *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  bool bVar31;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  longlong *local_d0;
  PSRWLOCK *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  uint *local_a8;
  undefined8 local_a0;
  PSRWLOCK local_98;
  ulonglong local_90;
  char *local_88;
  code *local_80;
  PSRWLOCK local_78;
  PSRWLOCK local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = param_4;
  if ((param_2[3] & 0x7fU) != 2) {
    FUN_14678c309(param_2,0,2);
  }
  if (*param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_88 = param_2 + 0x48;
  puVar17 = (uint *)(param_2 + 0x28);
  do {
    uVar26 = *(ulonglong *)(param_2 + 0x38);
    if (((uint)uVar26 & 7) == 5) {
      uVar26 = uVar26 & 0xfffffffffffffff8;
    }
    else {
      uVar26 = FUN_146799574(uVar26);
    }
    plVar27 = *(longlong **)(uVar26 + 0x18);
    if (((*(byte *)(*plVar27 + 4) & 1) == 0) &&
       (uVar20 = (ulonglong)*(uint *)((longlong)plVar27 + 0x24), uVar20 != 0)) {
      uVar22 = plVar27[1];
      if (uVar22 != 0) {
        uVar11 = uVar22 & 0xfffffffffe000000;
        uVar22 = (ulonglong)((uint)uVar22 & 0x1ffffff);
        uVar12 = uVar22 - 0x4008 >> 0xe;
        uVar22 = (uVar22 + uVar20 * 4) - 0x4001 >> 0xe;
        do {
          uVar24 = *(ulonglong *)(uVar11 + 0x18 + uVar12 * 8);
          uVar10 = (uint)uVar24 & 7;
          if (uVar10 == 2) break;
          if (uVar10 == 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar24 & 7) == 0) break;
          puVar19 = (ulonglong *)(uVar11 + 0x18 + uVar12 * 8);
          LOCK();
          bVar31 = uVar24 == *puVar19;
          if (bVar31) {
            *puVar19 = uVar24 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar31);
        if (uVar12 != uVar22) {
          do {
            uVar12 = *(ulonglong *)(uVar11 + 0x18 + uVar22 * 8);
            if (((uint)uVar12 & 7) < 3) break;
            puVar19 = (ulonglong *)(uVar11 + 0x18 + uVar22 * 8);
            LOCK();
            bVar31 = uVar12 == *puVar19;
            if (bVar31) {
              *puVar19 = uVar12 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar31);
        }
      }
      uVar22 = plVar27[2];
      if (uVar22 != 0) {
        uVar11 = uVar22 & 0xfffffffffe000000;
        uVar22 = (ulonglong)((uint)uVar22 & 0x1ffffff);
        uVar12 = uVar22 - 0x4008 >> 0xe;
        uVar20 = (uVar22 + uVar20 * 4) - 0x4001 >> 0xe;
        do {
          uVar22 = *(ulonglong *)(uVar11 + 0x18 + uVar12 * 8);
          uVar10 = (uint)uVar22 & 7;
          if (uVar10 == 2) break;
          if (uVar10 == 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar22 & 7) == 0) break;
          puVar19 = (ulonglong *)(uVar11 + 0x18 + uVar12 * 8);
          LOCK();
          bVar31 = uVar22 == *puVar19;
          if (bVar31) {
            *puVar19 = uVar22 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar31);
        if (uVar12 != uVar20) {
          do {
            uVar22 = *(ulonglong *)(uVar11 + 0x18 + uVar20 * 8);
            if (((uint)uVar22 & 7) < 3) break;
            puVar19 = (ulonglong *)(uVar11 + 0x18 + uVar20 * 8);
            LOCK();
            bVar31 = uVar22 == *puVar19;
            if (bVar31) {
              *puVar19 = uVar22 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar31);
        }
      }
    }
    lVar15 = (ulonglong)*(uint *)((longlong)plVar27 + 0x1c) * 8 + DAT_14c80ad08;
    if (lVar15 != 0 && (ulonglong)*(uint *)((longlong)plVar27 + 0x1c) != 0) {
      lVar16 = (ulonglong)*(uint *)(lVar15 + 8) * 8 + DAT_14c80ad08;
      if ((ulonglong)*(uint *)(lVar15 + 8) == 0) {
        lVar16 = 0;
      }
      if ((ulonglong)*(uint *)(lVar15 + 0xc) != 0) {
        if (lVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar22 = (lVar16 - DAT_14c80acf8) - 8U >> 0xe;
        uVar20 = ((lVar16 - DAT_14c80acf8) + (ulonglong)*(uint *)(lVar15 + 0xc) * 0x10) - 1 >> 0xe;
        do {
          uVar11 = *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
          uVar10 = (uint)uVar11 & 7;
          if (uVar10 == 2) break;
          if (uVar10 == 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar11 & 7) == 0) break;
          LOCK();
          bVar31 = uVar11 == *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
          if (bVar31) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8) = uVar11 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar31);
        if (uVar22 != uVar20) {
          do {
            uVar22 = *(ulonglong *)(&DAT_14c8084f8 + uVar20 * 8);
            if (((uint)uVar22 & 7) < 3) break;
            LOCK();
            bVar31 = uVar22 == *(ulonglong *)(&DAT_14c8084f8 + uVar20 * 8);
            if (bVar31) {
              *(ulonglong *)(&DAT_14c8084f8 + uVar20 * 8) = uVar22 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar31);
        }
      }
    }
    param_2[1] = '\0';
    param_2[2] = '\x01';
    cVar6 = FUN_146790ea6();
    if (cVar6 != '\0') {
      FUN_146790ecd();
    }
    if (*(ulonglong *)(param_2 + 0x20) == 0) {
      uVar22 = 0;
      uVar20 = 0;
    }
    else {
      uVar22 = *(ulonglong *)(param_2 + 0x20) & 0xffffffffffffc000;
      uVar20 = *(ulonglong *)(uVar22 + 0x20);
      if ((uVar20 & 6) != 0) {
        if (((uint)uVar20 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar20 = *(ulonglong *)(param_2 + 0x38);
        if (((uint)uVar20 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
    }
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0xc] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    uVar11 = uVar26 | 5;
    if (uVar26 == 0) {
      uVar11 = 0;
    }
    puVar17[0] = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(ulonglong *)(param_2 + 0x38) = uVar11;
    param_2[8] = '\x06';
    local_a8 = puVar17;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar11 = *(ulonglong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2a8);
    if (uVar11 < 2) {
      local_a0 = 0;
      uVar11 = 0;
    }
    else {
      local_a0 = *(undefined8 *)(uVar11 + 0x1f50);
      FUN_14679ea20(uVar11);
    }
    local_78 = (PSRWLOCK)0x0;
    if (uVar20 == 0) {
LAB_14677bdcb:
      local_90 = uVar26;
      if (uVar11 == 0) {
LAB_14677be1c:
        uVar12 = FUN_146798201(uVar26);
        lVar15 = DAT_14c80ad08;
        if (uVar12 == 0) {
          uVar12 = 0;
        }
        else {
          uVar10 = (uint)uVar12 & 7;
          if (uVar10 < 2) {
            plVar27 = (longlong *)(uVar12 & 0xfffffffffffffff8);
            if (*(char *)((longlong)plVar27 + 0xb) == '\0') {
              uVar26 = (ulonglong)*(uint3 *)(plVar27 + 1);
              if (*plVar27 == 0) {
                cVar6 = *(char *)(DAT_14c80ad08 + 0xd + uVar26 * 8);
                local_b8 = param_1;
                if (cVar6 != '\x01') {
                  if (cVar6 != '\x02') {
                    if (cVar6 != '\0') {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)invalidInstructionException();
                      (*pcVar5)();
                    }
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                  local_d8 = (undefined *)0x0;
                  FUN_14678ec28(0x4000,&DAT_149dfb7d8,0,0);
                  lVar16 = *plVar27;
                  if (lVar16 != 0) goto LAB_14677c518;
                }
                local_b0 = lVar15;
                FUN_14678f287(&local_70);
                do {
                  if (*plVar27 != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                  FUN_14678f28e(&local_70);
                  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                  plVar30 = *(longlong **)(local_b0 + 0x18 + uVar26 * 8);
                  lVar15 = *plVar30;
                  local_d0 = (longlong *)0x0;
                  if ((*(byte *)(lVar15 + 4) & 2) != 0) {
                    local_d0 = plVar30;
                  }
                  local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffffffffff00);
                  local_c8 = &local_70;
                  lVar15 = FUN_1467875a5(*(longlong *)(lVar15 + 0x28) + 0x30,&DAT_14c748418,
                                         &DAT_149dfb7d8);
                  *plVar27 = lVar15;
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                  cVar6 = FUN_14678f2c1(&local_70);
                } while (cVar6 == '\0');
                lVar16 = *plVar27;
                if (lVar16 == 0) {
                  uVar12 = 0;
                  param_1 = local_b8;
                  goto LAB_14677be89;
                }
              }
              else {
                SRWLock = (PSRWLOCK)(plVar27 + 2);
                local_b8 = param_1;
                AcquireSRWLockExclusive(SRWLock);
                cVar6 = *(char *)(lVar15 + 0xd + uVar26 * 8);
                local_70 = SRWLock;
                if (cVar6 != '\x01') {
                  if (cVar6 != '\x02') {
                    if (cVar6 != '\0') {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)invalidInstructionException();
                      (*pcVar5)();
                    }
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                  local_d8 = (undefined *)0x1;
                  FUN_14678ec28(0x4000,&DAT_149dfb7d8,0,&local_70);
                }
                FUN_14678d48b(*plVar27,&DAT_149dfb7d8);
                ReleaseSRWLockExclusive(SRWLock);
                lVar16 = *plVar27;
              }
LAB_14677c518:
              FUN_146794f45(lVar16,(longlong)plVar27 + 1,0);
              AcquireSRWLockExclusive((PSRWLOCK)(plVar27 + 3));
              *(undefined1 *)((longlong)plVar27 + 0xb) = 1;
              ReleaseSRWLockExclusive((PSRWLOCK)(plVar27 + 3));
              param_1 = local_b8;
            }
          }
          else {
            if (uVar10 != 4) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (((uint)uVar12 & 7) != 4) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              local_b8 = param_1;
              (*pcVar5)();
            }
            plVar30 = (longlong *)(uVar12 & 0xfffffffffffffff8);
            uVar26 = (ulonglong)
                     ((uint)*(byte *)((longlong)plVar30 + 0xd) * 0x80000 +
                     (uint)*(ushort *)((longlong)plVar30 + 0xb) * 8);
            plVar27 = *(longlong **)(uVar26 + 0x18 + DAT_14c80ad08);
            local_b8 = param_1;
            lVar15 = FUN_1467999c9(*(longlong *)(*plVar27 + 0x28) + 0x90,
                                   *(uint *)(uVar26 + 0x20 + DAT_14c80ad08) & 0x7ffffff,
                                   &DAT_149dfb7d8);
            puVar19 = (ulonglong *)((ulonglong)*(uint3 *)(plVar30 + 1) * 8 + DAT_14c80ad08);
            param_1 = local_b8;
            if (puVar19 != (ulonglong *)0x0 && *(uint3 *)(plVar30 + 1) != 0) {
              local_98 = (PSRWLOCK)(puVar19 + 1);
              local_b0 = lVar15;
              AcquireSRWLockExclusive(local_98);
              if ((*puVar19 & 1) == 0) {
                local_d8 = &DAT_149dfb7d8;
                uVar26 = FUN_14679708b(puVar19,plVar27,local_b0);
              }
              else {
                uVar26 = *puVar19 & 0xfffffffffffffffe;
              }
              param_1 = local_b8;
              if (uVar26 == 0) {
                ReleaseSRWLockExclusive(local_98);
                uVar12 = 0;
              }
              else {
                if ((*(byte *)((longlong)plVar30 + 0x11) & 0x10) == 0) {
                  if ((ulonglong)*(byte *)((longlong)plVar30 + 0xf) != 0) {
                    local_b0 = *plVar30;
                    uVar24 = (ulonglong)*(byte *)(plVar30 + 2);
                    uVar11 = *(byte *)((longlong)plVar30 + 0xf) + uVar24;
                    do {
                      uVar10 = *(uint *)(local_b0 + uVar24 * 4);
                      if (uVar10 != 0) {
                        do {
                          uVar3 = 0;
                          if (uVar10 != 0) {
                            for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                            }
                          }
                          uVar29 = (uVar24 << 5 | (ulonglong)uVar3) >> 4;
                          uVar28 = (ulonglong)*(uint *)(uVar26 + 0x14 + uVar29 * 4);
                          if (((uVar28 != 0) &&
                              (plVar27 = (longlong *)(DAT_14c80ad08 + uVar28 * 8),
                              plVar27 != (longlong *)0x0)) && (plVar27 != plVar30)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)invalidInstructionException();
                            (*pcVar5)();
                          }
                          if (plVar30 == (longlong *)0x0) {
                            uVar25 = 0;
                          }
                          else {
                            uVar28 = (longlong)plVar30 - DAT_14c80ad08;
                            if (DAT_14c758498 <= uVar28) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)invalidInstructionException();
                              (*pcVar5)();
                            }
                            if ((uVar28 & 7) != 0) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)invalidInstructionException();
                              (*pcVar5)();
                            }
                            if (uVar28 < 8) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)invalidInstructionException();
                              (*pcVar5)();
                            }
                            uVar25 = (undefined4)(uVar28 >> 3);
                          }
                          *(undefined4 *)(uVar26 + 0x14 + uVar29 * 4) = uVar25;
                          bVar8 = (byte)uVar3 & 0x1f;
                          uVar10 = uVar10 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
                        } while (uVar10 != 0);
                      }
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar11);
                  }
                  AcquireSRWLockExclusive((PSRWLOCK)(puVar19 + 2));
                  *(byte *)((longlong)plVar30 + 0x11) = *(byte *)((longlong)plVar30 + 0x11) | 0x10;
                  ReleaseSRWLockExclusive((PSRWLOCK)(puVar19 + 2));
                }
                param_1 = local_b8;
                ReleaseSRWLockExclusive(local_98);
              }
            }
          }
        }
      }
      else {
        uVar10 = *(uint *)(uVar26 + 0x28);
        if (uVar10 < *(uint *)(uVar11 + 0x1f74)) {
          puVar18 = (undefined1 *)(uVar11 + (ulonglong)uVar10 * 8 + 0x1f80);
        }
        else {
          if ((uVar10 == 0xffffffff) ||
             (FUN_14679dc84(&local_70,uVar11,(ulonglong)uVar10,0), ((ulonglong)local_70 & 1) == 0))
          goto LAB_14677be1c;
          puVar18 = (undefined1 *)CONCAT44(uStack_64,local_68);
        }
        *puVar18 = 1;
        if ((puVar18[3] & 0x7f) != 4) {
LAB_14677c556:
          FUN_14678c309(puVar18,0,4);
LAB_14677c566:
          *(undefined2 *)(puVar18 + 1) = 0x100;
          *puVar18 = 0;
          goto LAB_14677be1c;
        }
        bVar8 = puVar18[5];
        if (puVar18[6] == bVar8) {
          if (puVar18[7] == '\0') goto LAB_14677c556;
          if (puVar18[7] == '\x02') goto LAB_14677be51;
          goto LAB_14677c566;
        }
LAB_14677be51:
        *(undefined2 *)(puVar18 + 1) = 0x100;
        bVar13 = bVar8 + 1;
        if ((byte)puVar18[4] <= bVar13) {
          bVar13 = 0;
        }
        puVar18[5] = bVar13;
        uVar12 = (ulonglong)
                 ((uint)(byte)puVar18[(ulonglong)bVar8 * 3 + 10] * 0x80000 +
                 (uint)*(ushort *)(puVar18 + (ulonglong)bVar8 * 3 + 8) * 8) + DAT_14c80ad08;
        puVar18[7] = 1;
        *puVar18 = 0;
      }
LAB_14677be89:
      if (uVar20 != 0) {
        if (local_78 != *(PSRWLOCK *)(uVar22 + 8)) {
          local_78 = (PSRWLOCK)FUN_146794d20(uVar22);
        }
        lVar15 = DAT_14c80ad08;
        uVar10 = (uint)uVar20 & 7;
        if (uVar10 < 2) {
          cVar6 = *(char *)(uVar22 + 2);
          if (cVar6 == '\x01') {
            *(undefined1 *)(uVar22 + 2) = 0;
          }
          uVar20 = uVar20 & 0xfffffffffffffff8;
          lVar16 = (ulonglong)
                   ((uint)*(byte *)(uVar20 + 10) * 0x80000 + (uint)*(ushort *)(uVar20 + 8) * 8) +
                   DAT_14c80ad08;
          uVar25 = *(undefined4 *)(uVar20 + 0xc);
          lVar15 = *(longlong *)(uVar22 + 0x18);
          *(undefined1 *)(uVar22 + 1) = 0;
          if (cVar6 != '\0') {
            FUN_146791662(lVar16,uVar25);
          }
          if (lVar15 == 0) {
            FUN_146791740(lVar16,uVar25);
          }
        }
        else {
          local_b8 = param_1;
          if (uVar10 != 4) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar20 = uVar20 & 0xfffffffffffffff8;
          uVar11 = (ulonglong)
                   ((uint)*(byte *)(uVar20 + 10) * 0x80000 + (uint)*(ushort *)(uVar20 + 8) * 8);
          uVar26 = *(ulonglong *)(uVar11 + DAT_14c80ad08);
          if ((uVar26 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((*(byte *)(uVar20 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          bVar8 = *(byte *)(uVar20 + 0xd);
          uVar2 = *(ushort *)(uVar20 + 0xb);
          local_b0 = *(longlong *)((uVar26 & 0xfffffffffffffffe) + 8);
          if ((*(PSRWLOCK *)(uVar22 + 8) != (PSRWLOCK)0x0) &&
             (BVar7 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar22 + 8)), BVar7 != '\0')) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar11 = uVar11 + lVar15;
          if (*(int *)(uVar11 + 0x24) == 1) {
            bVar31 = *(longlong *)(uVar22 + 0x18) == 0;
          }
          else {
            bVar31 = false;
          }
          bVar13 = *(byte *)(uVar20 + 0x11);
          *(byte *)(uVar20 + 0x11) = bVar13 & 0xfc;
          iVar4 = *(int *)(uVar11 + 0x24);
          if ((bVar13 & 2) == 0) {
            if (iVar4 == 0) {
LAB_14677c90b:
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            *(int *)(uVar11 + 0x24) = iVar4 + -1;
          }
          else {
            if (iVar4 == 0) goto LAB_14677c90b;
            *(int *)(uVar11 + 0x24) = iVar4 + -1;
            if ((*(byte *)(uVar20 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            FUN_146791720((ulonglong)((uint)bVar8 * 0x80000 + (uint)uVar2 * 8) + lVar15,uVar20 | 4);
          }
          param_1 = local_b8;
          if (bVar31) {
            if (*(int *)(uVar11 + 0x24) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            FUN_1467918b2(local_b0,uVar11 | 2);
          }
        }
      }
      uVar26 = local_90;
      if (uVar12 == 0) {
        if (local_78 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_78);
          local_78 = (PSRWLOCK)0x0;
        }
LAB_14677c6a8:
        local_70 = (PSRWLOCK)0x0;
        uVar9 = 0;
        goto LAB_14677c7e6;
      }
      if ((uVar12 & 6) == 0) {
        uVar22 = *(ulonglong *)(uVar12 & 0xfffffffffffffff8);
        FUN_146794dcc(uVar22,&local_78,local_a0);
        *(undefined1 *)(uVar22 + 1) = 1;
        *(ulonglong *)(uVar22 + 0x20) = uVar12 | 1;
        uVar26 = local_90;
        goto LAB_14677c0e1;
      }
      if (((uint)uVar12 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar12 = uVar12 & 0xfffffffffffffff8;
      if ((*(uint3 *)(uVar12 + 8) != 0) &&
         (puVar19 = (ulonglong *)((ulonglong)*(uint3 *)(uVar12 + 8) * 8 + DAT_14c80ad08),
         puVar19 != (ulonglong *)0x0)) {
        uVar26 = *puVar19;
        uVar22 = uVar26;
        if ((uVar26 & 1) != 0) {
          uVar22 = *(ulonglong *)(uVar26 & 0xfffffffffffffffe);
        }
        if (local_78 != *(PSRWLOCK *)(uVar22 + 8)) {
          local_78 = (PSRWLOCK)FUN_146794d20(uVar22,local_78,*(PSRWLOCK *)(uVar22 + 8));
          uVar26 = *puVar19;
        }
        if ((uVar26 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        FUN_146795992(uVar12,puVar19,uVar26 & 0xfffffffffffffffe);
        goto LAB_14677bf8b;
      }
      if (local_78 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_78);
        local_78 = (PSRWLOCK)0x0;
      }
      cVar6 = FUN_146774445(param_2,uVar12,uVar26);
      puVar17 = local_a8;
      if (cVar6 == '\0') goto LAB_14677c6a8;
    }
    else {
      if (((uint)uVar20 & 7) == 4) {
        uVar12 = uVar20 & 0xfffffffffffffff8;
        bVar8 = *(byte *)(uVar12 + 0x11);
        if ((bVar8 & 4) == 0) goto LAB_14677bdcb;
        if (*(longlong *)(uVar22 + 8) != 0) {
          local_78 = (PSRWLOCK)FUN_146794d20(uVar22);
          bVar8 = *(byte *)(uVar12 + 0x11);
        }
        *(byte *)(uVar12 + 0x11) = bVar8 & 0xf9;
LAB_14677bf8b:
        param_2[0x10] = '\0';
        param_2[0x11] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
        param_2[0x14] = '\0';
        param_2[0x15] = '\0';
        param_2[0x16] = '\0';
        param_2[0x17] = '\0';
        uVar26 = uVar12 | 4;
        if (uVar12 == 0) {
          uVar26 = 0;
        }
        param_2[0x18] = '\0';
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        if (((uint)uVar26 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        plVar27 = (longlong *)(uVar26 & 0xfffffffffffffff8);
        bVar8 = *(byte *)(plVar27 + 2);
        uVar20 = (ulonglong)bVar8;
        bVar13 = *(byte *)((longlong)plVar27 + 0xf);
        lVar15 = *plVar27;
        *(ulonglong *)(param_2 + 0x38) = uVar26;
        uVar10 = (uint)bVar13 + (uint)bVar8 + 1;
        uVar11 = (ulonglong)((uint)bVar13 + (uint)bVar8);
        bVar13 = bVar8 >> 1;
        *(uint *)(param_2 + 0x28) = (uint)bVar13;
        *(uint *)(param_2 + 0x2c) = uVar10 >> 1 & 0xff;
        uVar26 = 0;
        local_b8 = param_1;
        memset(param_2 + (ulonglong)(uint)bVar13 * 8 + 0x40,0,
               (ulonglong)((uVar10 & 0xfffffffe) - (bVar8 & 0xfffffffe)) << 2);
        *(ulonglong *)(param_2 + 0x20) = (ulonglong)bVar13 * 0x400 + uVar22;
        if (uVar20 < uVar11) {
          uVar26 = 0;
          do {
            uVar10 = *(uint *)(lVar15 + uVar20 * 4);
            uVar3 = *(uint *)(uVar22 + 0x2c + uVar20 * 4);
            *(uint *)(param_2 + uVar20 * 4 + 0x40) = ~uVar3 & uVar10;
            uVar26 = (ulonglong)((int)uVar26 + (uint)(uVar10 != 0 && uVar3 == 0));
            *(uint *)(uVar22 + 0x2c + uVar20 * 4) = uVar3 | uVar10;
            uVar20 = uVar20 + 1;
          } while (uVar11 != uVar20);
        }
        *(undefined8 *)(param_2 + 0x30) =
             *(undefined8 *)(param_2 + (ulonglong)(uint)bVar13 * 8 + 0x40);
        param_2[0xc] = '\x01';
        *(longlong *)(uVar22 + 0x18) = *(longlong *)(uVar22 + 0x18) + uVar26;
        param_1 = local_b8;
      }
      else {
        if ((uVar20 & 7) != 0) goto LAB_14677bdcb;
        FUN_146794dcc(uVar22,&local_78,local_a0);
        *(ulonglong *)(uVar22 + 0x20) = uVar20 | 1;
        *(undefined1 *)(uVar22 + 2) = 0;
LAB_14677c0e1:
        lVar15 = DAT_14c80ad08;
        if (*(longlong *)(uVar22 + 0x18) == 0) {
          uVar26 = (ulonglong)*(uint *)(uVar26 + 0x30);
          uVar10 = *(uint *)(DAT_14c80ad08 + 4 + uVar26 * 8);
          iVar4 = *(int *)(DAT_14c80ad08 + uVar26 * 8);
          *(ulonglong *)(uVar22 + 0x18) = (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + uVar26 * 8);
          *(ulonglong *)(param_2 + 0x10) = uVar10 + uVar22;
          *(uint *)(param_2 + 0x18) = uVar10 - iVar4;
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_a8[2] = 0;
          local_a8[3] = 0;
          *(ulonglong *)(param_2 + 0x20) = uVar22;
          uVar26 = (ulonglong)*(uint *)(lVar15 + 0xc + uVar26 * 8);
          if (uVar26 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          puVar21 = (undefined4 *)(uVar26 + DAT_14c80ad08);
          puVar23 = (undefined4 *)(uVar22 + 0x2c);
          for (lVar15 = 0x20; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar23 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar23 = puVar23 + 1;
          }
        }
        else {
          param_2[0x10] = '\0';
          param_2[0x11] = '\0';
          param_2[0x12] = '\0';
          param_2[0x13] = '\0';
          param_2[0x14] = '\0';
          param_2[0x15] = '\0';
          param_2[0x16] = '\0';
          param_2[0x17] = '\0';
          param_2[0x18] = '\0';
          param_2[0x19] = '\0';
          param_2[0x1a] = '\0';
          param_2[0x1b] = '\0';
          uVar11 = (ulonglong)*(uint *)(uVar26 + 0x30);
          uVar20 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + uVar11 * 8);
          if (uVar20 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar10 = *(uint *)(DAT_14c80ad08 + uVar11 * 8);
          uVar14 = uVar10 >> 10;
          uVar3 = *(uint *)(DAT_14c80ad08 + 4 + uVar11 * 8);
          lVar15 = uVar20 + DAT_14c80ad08;
          *(uint *)(param_2 + 0x28) = uVar14;
          *(uint *)(param_2 + 0x2c) = ((uVar3 >> 4) - 1 >> 6) + 1;
          param_2[0x40] = '\0';
          param_2[0x41] = '\0';
          param_2[0x42] = '\0';
          param_2[0x43] = '\0';
          param_2[0x44] = '\0';
          param_2[0x45] = '\0';
          param_2[0x46] = '\0';
          param_2[0x47] = '\0';
          param_2[0x48] = '\0';
          param_2[0x49] = '\0';
          param_2[0x4a] = '\0';
          param_2[0x4b] = '\0';
          param_2[0x4c] = '\0';
          param_2[0x4d] = '\0';
          param_2[0x4e] = '\0';
          param_2[0x4f] = '\0';
          param_2[0x50] = '\0';
          param_2[0x51] = '\0';
          param_2[0x52] = '\0';
          param_2[0x53] = '\0';
          param_2[0x54] = '\0';
          param_2[0x55] = '\0';
          param_2[0x56] = '\0';
          param_2[0x57] = '\0';
          param_2[0x58] = '\0';
          param_2[0x59] = '\0';
          param_2[0x5a] = '\0';
          param_2[0x5b] = '\0';
          param_2[0x5c] = '\0';
          param_2[0x5d] = '\0';
          param_2[0x5e] = '\0';
          param_2[0x5f] = '\0';
          param_2[0x60] = '\0';
          param_2[0x61] = '\0';
          param_2[0x62] = '\0';
          param_2[99] = '\0';
          param_2[100] = '\0';
          param_2[0x65] = '\0';
          param_2[0x66] = '\0';
          param_2[0x67] = '\0';
          param_2[0x68] = '\0';
          param_2[0x69] = '\0';
          param_2[0x6a] = '\0';
          param_2[0x6b] = '\0';
          param_2[0x6c] = '\0';
          param_2[0x6d] = '\0';
          param_2[0x6e] = '\0';
          param_2[0x6f] = '\0';
          param_2[0x70] = '\0';
          param_2[0x71] = '\0';
          param_2[0x72] = '\0';
          param_2[0x73] = '\0';
          param_2[0x74] = '\0';
          param_2[0x75] = '\0';
          param_2[0x76] = '\0';
          param_2[0x77] = '\0';
          param_2[0x78] = '\0';
          param_2[0x79] = '\0';
          param_2[0x7a] = '\0';
          param_2[0x7b] = '\0';
          param_2[0x7c] = '\0';
          param_2[0x7d] = '\0';
          param_2[0x7e] = '\0';
          param_2[0x7f] = '\0';
          param_2[0x80] = '\0';
          param_2[0x81] = '\0';
          param_2[0x82] = '\0';
          param_2[0x83] = '\0';
          param_2[0x84] = '\0';
          param_2[0x85] = '\0';
          param_2[0x86] = '\0';
          param_2[0x87] = '\0';
          param_2[0x88] = '\0';
          param_2[0x89] = '\0';
          param_2[0x8a] = '\0';
          param_2[0x8b] = '\0';
          param_2[0x8c] = '\0';
          param_2[0x8d] = '\0';
          param_2[0x8e] = '\0';
          param_2[0x8f] = '\0';
          param_2[0x90] = '\0';
          param_2[0x91] = '\0';
          param_2[0x92] = '\0';
          param_2[0x93] = '\0';
          param_2[0x94] = '\0';
          param_2[0x95] = '\0';
          param_2[0x96] = '\0';
          param_2[0x97] = '\0';
          param_2[0x98] = '\0';
          param_2[0x99] = '\0';
          param_2[0x9a] = '\0';
          param_2[0x9b] = '\0';
          param_2[0x9c] = '\0';
          param_2[0x9d] = '\0';
          param_2[0x9e] = '\0';
          param_2[0x9f] = '\0';
          param_2[0xa0] = '\0';
          param_2[0xa1] = '\0';
          param_2[0xa2] = '\0';
          param_2[0xa3] = '\0';
          param_2[0xa4] = '\0';
          param_2[0xa5] = '\0';
          param_2[0xa6] = '\0';
          param_2[0xa7] = '\0';
          param_2[0xa8] = '\0';
          param_2[0xa9] = '\0';
          param_2[0xaa] = '\0';
          param_2[0xab] = '\0';
          param_2[0xac] = '\0';
          param_2[0xad] = '\0';
          param_2[0xae] = '\0';
          param_2[0xaf] = '\0';
          param_2[0xb0] = '\0';
          param_2[0xb1] = '\0';
          param_2[0xb2] = '\0';
          param_2[0xb3] = '\0';
          param_2[0xb4] = '\0';
          param_2[0xb5] = '\0';
          param_2[0xb6] = '\0';
          param_2[0xb7] = '\0';
          param_2[0xb8] = '\0';
          param_2[0xb9] = '\0';
          param_2[0xba] = '\0';
          param_2[0xbb] = '\0';
          param_2[0xbc] = '\0';
          param_2[0xbd] = '\0';
          param_2[0xbe] = '\0';
          param_2[0xbf] = '\0';
          *(ulonglong *)(param_2 + 0x20) = (uVar10 & 0xfffffc00) + uVar22;
          lVar16 = 0;
          do {
            uVar10 = *(uint *)(lVar15 + lVar16 * 4);
            uVar3 = *(uint *)(uVar22 + 0x2c + lVar16 * 4);
            *(uint *)(param_2 + lVar16 * 4 + 0x40) = ~uVar3 & uVar10;
            *(uint *)(uVar22 + 0x2c + lVar16 * 4) = uVar3 | uVar10;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0x20);
          *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + (ulonglong)uVar14 * 8 + 0x40);
          param_2[0xc] = '\x01';
          *(ulonglong *)(uVar22 + 0x18) =
               (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(uVar26 + 0x30) * 8);
        }
      }
      puVar17 = local_a8;
      if (local_78 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_78);
        local_78 = (PSRWLOCK)0x0;
      }
    }
    uVar10 = *(uint *)(param_2 + 0x18);
    if ((ulonglong)uVar10 != 0) {
      *(uint *)(param_2 + 0x18) = uVar10 - *(int *)(param_2 + 0x1c);
      local_70 = (PSRWLOCK)(*(longlong *)(param_2 + 0x10) - (ulonglong)uVar10);
      goto LAB_14677c7e4;
    }
    lVar15 = *(longlong *)(param_2 + 0x20);
    uVar26 = *(ulonglong *)(param_2 + 0x30);
    if (uVar26 != 0) {
LAB_14677c7d2:
      uVar20 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
        }
      }
      *(ulonglong *)(param_2 + 0x30) = uVar26 & ~(1L << (uVar20 & 0x3f));
      local_70 = (PSRWLOCK)((ulonglong)(uint)((int)uVar20 << 4) + lVar15);
LAB_14677c7e4:
      uVar9 = 1;
LAB_14677c7e6:
      *param_2 = '\0';
      local_68 = CONCAT31(local_68._1_3_,uVar9);
      uStack_64 = 0;
      (*local_80)(param_1);
      if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    if (param_2[8] == '\x06') {
      uVar10 = *(uint *)(param_2 + 0x2c);
      uVar3 = *puVar17;
      uVar20 = (ulonglong)uVar3;
      if (uVar3 < uVar10) {
        pcVar1 = param_2 + uVar20 * 8 + 0x40;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        lVar16 = 0;
        while ((uVar20 - (uVar10 - 1)) + lVar16 != 0) {
          lVar15 = lVar15 + 0x400;
          uVar26 = *(ulonglong *)(local_88 + lVar16 * 8 + uVar20 * 8);
          lVar16 = lVar16 + 1;
          if (uVar26 != 0) {
            *(uint *)(param_2 + 0x28) = uVar3 + (int)lVar16;
            *(longlong *)(param_2 + 0x20) = lVar15;
            goto LAB_14677c7d2;
          }
        }
        *local_a8 = uVar10;
        puVar17 = local_a8;
      }
    }
  } while( true );
}



// FUNCTION 14677ca64 FUN_14677ca64 body=116 status=ok
// SIG undefined FUN_14677ca64(void)

void FUN_14677ca64(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (*(uint *)(param_2 + 0x28) < uVar1) {
    uVar5 = *(ulonglong *)(param_2 + 0x40 + uVar4 * 8);
    lVar6 = *(longlong *)(param_2 + 0x20);
    if (uVar5 == 0) {
      do {
        if (uVar1 - 1 == uVar4) {
          *(uint *)(param_2 + 0x28) = uVar1;
          goto LAB_14677cad1;
        }
        lVar6 = lVar6 + 0x8000;
        uVar5 = *(ulonglong *)(param_2 + 0x48 + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar5 == 0);
      *(int *)(param_2 + 0x28) = (int)uVar4;
      *(longlong *)(param_2 + 0x20) = lVar6;
      uVar4 = uVar4 & 0xffffffff;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    *(ulonglong *)(param_2 + 0x40 + uVar4 * 8) = uVar5 & ~(1L << (uVar2 & 0x3f));
    lVar6 = (ulonglong)(uint)((int)uVar2 << 9) + lVar6;
    uVar3 = 1;
  }
  else {
LAB_14677cad1:
    uVar3 = 0;
    lVar6 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = lVar6;
  return;
}



// FUNCTION 14677cad8 FUN_14677cad8 body=187 status=ok
// SIG undefined FUN_14677cad8(void)

void FUN_14677cad8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((ulonglong)uVar2 == 0) {
    lVar7 = *(longlong *)(param_2 + 0x20);
    uVar8 = *(ulonglong *)(param_2 + 0x30);
    if (uVar8 == 0) {
      if (*(char *)(param_2 + 8) == '\x06') {
        uVar2 = *(uint *)(param_2 + 0x2c);
        uVar3 = *(uint *)(param_2 + 0x28);
        if (uVar3 < uVar2) {
          lVar1 = param_2 + (ulonglong)uVar3 * 8;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          lVar6 = 0;
          do {
            if (((ulonglong)uVar3 - (ulonglong)(uVar2 - 1)) + lVar6 == 0) {
              *(uint *)(param_2 + 0x28) = uVar2;
              goto LAB_14677cb89;
            }
            lVar7 = lVar7 + 0x400;
            uVar8 = *(ulonglong *)(lVar1 + 0x48 + lVar6 * 8);
            lVar6 = lVar6 + 1;
          } while (uVar8 == 0);
          *(uint *)(param_2 + 0x28) = uVar3 + (int)lVar6;
          *(longlong *)(param_2 + 0x20) = lVar7;
          goto LAB_14677cb19;
        }
      }
LAB_14677cb89:
      uVar5 = 0;
      lVar7 = 0;
      goto LAB_14677cafc;
    }
LAB_14677cb19:
    uVar4 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    *(ulonglong *)(param_2 + 0x30) = uVar8 & ~(1L << (uVar4 & 0x3f));
    lVar7 = (ulonglong)(uint)((int)uVar4 << 4) + lVar7;
  }
  else {
    *(uint *)(param_2 + 0x18) = uVar2 - *(int *)(param_2 + 0x1c);
    lVar7 = *(longlong *)(param_2 + 0x10) - (ulonglong)uVar2;
  }
  uVar5 = 1;
LAB_14677cafc:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = lVar7;
  return;
}



// FUNCTION 14677cb93 FUN_14677cb93 body=696 status=ok
// SIG undefined FUN_14677cb93(void)

undefined8
FUN_14677cb93(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  byte local_68;
  undefined8 local_60;
  byte local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = param_3;
  local_98 = param_4;
  if ((param_2[3] & 0x7fU) != 2) {
    FUN_14678c309(param_2,0);
  }
  if (*param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8 = param_2 + 0x40;
  do {
    iVar2 = (int)param_2[8];
    switch(iVar2) {
    case 7:
      FUN_1467740e7(&local_70,param_2);
      uVar3 = local_70;
      uVar4 = local_68 ^ 1;
      break;
    case 8:
      FUN_14677ca64(&local_60,param_2);
      uVar3 = local_60;
      uVar4 = local_58 ^ 1;
      break;
    case 9:
      FUN_146775f2f(&local_80,param_2);
      uVar3 = local_80;
      uVar4 = local_78 ^ 1;
      break;
    default:
      goto switchD_14677cc25_caseD_a;
    case 0xf:
      param_2[1] = '\0';
      param_2[2] = '\x01';
      local_b8 = local_98;
      FUN_1467786f0(local_90,local_a8,param_2,local_a0);
      uVar3 = local_88;
      uVar4 = local_90[0];
      break;
    case 0x10:
      param_2[1] = '\0';
      param_2[2] = '\x01';
      local_b8 = local_98;
      FUN_146779469(local_90,local_a8,param_2,local_a0);
      uVar3 = local_88;
      uVar4 = local_90[0];
      break;
    case 0x11:
      param_2[1] = '\0';
      param_2[2] = '\x01';
      local_b8 = local_98;
      FUN_14677a728(local_90,local_a8,param_2,local_a0);
      uVar3 = local_88;
      uVar4 = local_90[0];
    }
    if (uVar4 != 1) {
      local_54 = 0;
      if (uVar4 == 0) {
        local_58 = 1;
      }
      else {
        uVar3 = 0;
        local_58 = 0;
      }
      goto LAB_14677cca8;
    }
    iVar2 = (int)param_2[8];
switchD_14677cc25_caseD_a:
    if (0xb < iVar2 - 2U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (**(code **)(*(longlong *)
                  (&DAT_14c758500 + *(longlong *)(&DAT_149dfbd30 + (ulonglong)(iVar2 - 2U) * 8) * 8)
                + 0xd8))(param_2,param_5);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      uVar3 = 0;
      local_58 = 0;
      local_54 = 0;
      goto LAB_14677cca8;
    }
    FUN_14677cad8(&local_60,param_2);
    local_4c = local_57;
    local_4a = local_55;
  } while ((local_58 & 1) == 0);
  local_4e = local_55;
  local_50 = local_57;
  uVar3 = local_60;
LAB_14677cca8:
  *param_2 = '\0';
  local_57 = local_50;
  local_55 = local_4e;
  local_60 = uVar3;
  (*param_6)(param_1);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14677ce4c FUN_14677ce4c body=1174 status=ok
// SIG undefined FUN_14677ce4c(void)

longlong *
FUN_14677ce4c(longlong *param_1,longlong *param_2,int param_3,longlong param_4,ulonglong param_5,
             undefined8 param_6,undefined **param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  PSRWLOCK SRWLock;
  PVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  PSRWLOCK pRVar8;
  PVOID pvVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  longlong *local_80;
  ulonglong local_70;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  undefined1 local_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  PSRWLOCK local_58;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = param_2[1];
  local_70 = (ulonglong)*(uint *)(*param_2 + 4);
  if (*(uint *)(*param_2 + 4) < param_5) {
    local_70 = param_5;
  }
  if (lVar6 == 0) {
    lVar6 = FUN_146788484(param_2,param_3,&PTR_LOOP_149dfb7a0,param_6);
  }
  plVar10 = (longlong *)0x0;
  if (param_3 == 1) {
    plVar10 = param_2 + 3;
  }
  uVar7 = param_4 + 0xfU >> 4;
  if (((((*(uint *)(lVar6 + 0x24) <= uVar7) || (*(longlong *)(lVar6 + 0x10) == 0)) ||
       (uVar11 = (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0x10) + uVar7 * 4),
       uVar12 = uVar11 * 8 + DAT_14c80ad08, uVar12 == 0 || uVar11 == 0)) &&
      (uVar12 = FUN_146792159(lVar6,uVar7,plVar10,&PTR_LOOP_149dfb7a0), uVar12 == 0)) ||
     ((ulonglong)(1L << (byte)((uint)*(undefined4 *)(uVar12 + 0x20) >> 0x1b)) < local_70)) {
    local_88 = &PTR_LOOP_149dfb7a0;
    local_80 = plVar10;
    uVar12 = FUN_1467880f7(lVar6,param_4,local_70,param_8);
    if (uVar12 == 0) {
      FUN_14678f287(&local_68);
      do {
        if ((char)param_1[1] == '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_14678f28e(&local_68);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        local_88 = &PTR_LOOP_149dfb7a0;
        local_80 = (longlong *)&local_68;
        FUN_1467891c0(param_1,lVar6 + 0x28,param_4,local_70);
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        cVar4 = FUN_14678f2c1(&local_68);
      } while (cVar4 == '\0');
      FUN_146790ecd();
      goto LAB_14677d179;
    }
  }
  if (*(int *)(uVar12 + 0x2c) == 0) {
LAB_14677d016:
    uVar1 = *(uint *)(uVar12 + 0x24);
    while (uVar1 = uVar1 & 0x7f, uVar1 < 0x20) {
      SRWLock = (PSRWLOCK)((ulonglong)uVar1 * 0x148 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      if ((*(uint *)(uVar12 + 0x24) & 0x7f) == uVar1) goto LAB_14677d034;
      ReleaseSRWLockExclusive(SRWLock);
      uVar1 = *(uint *)(uVar12 + 0x24);
    }
    SRWLock = (PSRWLOCK)FUN_146797fd5(uVar12);
LAB_14677d034:
    pvVar5 = SRWLock[8].Ptr;
    if (((uint)pvVar5 & 7) == 5) {
      uVar7 = (ulonglong)pvVar5 & 0xfffffffffffffff8;
    }
    else {
      uVar7 = FUN_146799574(pvVar5);
    }
    if (uVar7 != uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pRVar8 = SRWLock + 1;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar7 = *(ulonglong *)(lVar6 + 0x2a8);
    if (uVar7 < 2) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
        uVar7 = *(ulonglong *)(lVar6 + 0x2a8);
      }
      if (uVar7 == 1) goto LAB_14677d016;
    }
    local_88 = &PTR_LOOP_149dfb7a0;
    local_80 = plVar10;
    FUN_14679922c(&local_68,uVar12,param_4,param_8);
    pRVar8 = (PSRWLOCK)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,local_60)));
    SRWLock = local_58;
  }
  *(undefined1 *)&pRVar8->Ptr = 1;
  uVar1 = *(uint *)&pRVar8[3].Ptr;
  if ((ulonglong)uVar1 == 0) {
    pvVar5 = pRVar8[4].Ptr;
    pvVar9 = pRVar8[6].Ptr;
    if (pvVar9 != (PVOID)0x0) {
LAB_14677d1b1:
      uVar7 = 0;
      if (pvVar9 != (PVOID)0x0) {
        for (; ((ulonglong)pvVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      pRVar8[6].Ptr = (PVOID)((ulonglong)pvVar9 & ~(1L << (uVar7 & 0x3f)));
      lVar6 = (ulonglong)(uint)((int)uVar7 << 4) + (longlong)pvVar5;
      goto LAB_14677d148;
    }
    if (*(char *)&pRVar8[1].Ptr == '\x06') {
      uVar1 = *(uint *)((longlong)&pRVar8[5].Ptr + 4);
      uVar2 = *(uint *)&pRVar8[5].Ptr;
      uVar7 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        pRVar8[uVar7 + 8].Ptr = (PVOID)0x0;
        lVar6 = 0;
        do {
          if ((uVar7 - (uVar1 - 1)) + lVar6 == 0) {
            *(uint *)&pRVar8[5].Ptr = uVar1;
            goto LAB_14677d2a5;
          }
          pvVar5 = (PVOID)((longlong)pvVar5 + 0x400);
          pvVar9 = pRVar8[uVar7 + lVar6 + 9].Ptr;
          lVar6 = lVar6 + 1;
        } while (pvVar9 == (PVOID)0x0);
        *(uint *)&pRVar8[5].Ptr = uVar2 + (int)lVar6;
        pRVar8[4].Ptr = pvVar5;
        goto LAB_14677d1b1;
      }
LAB_14677d2a5:
      FUN_14677ba03(&local_68,pRVar8,uVar1,&LAB_14677d953);
      lVar6 = CONCAT53(uStack_65,CONCAT12(uStack_66,local_68));
      uStack_66 = uStack_5d;
      local_68 = uStack_5f;
      local_4c = local_68;
      local_4a = uStack_66;
    }
    else {
      local_80 = (longlong *)&LAB_14677d953;
      local_88 = param_7;
      FUN_14677cb93(&local_68,pRVar8,param_4,local_70);
      lVar6 = CONCAT53(uStack_65,CONCAT12(uStack_66,local_68));
      local_4a = uStack_5d;
      local_4c = uStack_5f;
      local_68 = uStack_5f;
      uStack_66 = uStack_5d;
    }
  }
  else {
    *(uint *)&pRVar8[3].Ptr = uVar1 - *(int *)((longlong)&pRVar8[3].Ptr + 4);
    lVar6 = (longlong)pRVar8[2].Ptr - (ulonglong)uVar1;
LAB_14677d148:
    *(undefined1 *)&pRVar8->Ptr = 0;
    uStack_5c = 0;
    local_60 = 1;
  }
  *param_1 = lVar6;
  *(undefined1 *)(param_1 + 1) = local_60;
  *(undefined1 *)((longlong)param_1 + 0xb) = uStack_66;
  *(undefined2 *)((longlong)param_1 + 9) = local_68;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
LAB_14677d179:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14677d2e3 FUN_14677d2e3 body=1493 status=ok
// SIG undefined FUN_14677d2e3(void)

undefined8 FUN_14677d2e3(longlong param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  PSRWLOCK pRVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  
  if (param_4 == 2) {
    pcVar15 = (char *)(param_2 & 0xffffffffffffc000);
    if (*pcVar15 != '\x01') {
      if (*pcVar15 == '\x05') {
        FUN_146778cee(pcVar15,param_2);
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(longlong *)(pcVar15 + 8) == 0) {
      pRVar6 = (PSRWLOCK)0x0;
    }
    else {
      pRVar6 = (PSRWLOCK)FUN_146794d20(pcVar15,0);
    }
    uVar11 = (ulonglong)((uint)(param_2 >> 7) & 0x7c);
    uVar12 = *(uint *)(pcVar15 + uVar11 + 0x2c) & ~(1 << ((uint)(param_2 >> 4) & 0x1f));
    *(uint *)(pcVar15 + uVar11 + 0x2c) = uVar12;
    if (((uint)*(ulonglong *)(pcVar15 + 0x20) & 7) == 3) {
      uVar11 = (ulonglong)
               *(uint *)((*(ulonglong *)(pcVar15 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                        (ulonglong)((uint)(param_2 >> 6) & 0xfc));
      lVar8 = uVar11 * 8 + DAT_14c80ad08;
      if (uVar11 == 0) {
        lVar8 = 0;
      }
      if ((*(byte *)(lVar8 + 0x11) & 4) == 0) {
        FUN_146795935(lVar8,pcVar15);
      }
      if (uVar12 == 0) {
        if (*(longlong *)(pcVar15 + 0x18) + -1 == 0) {
          FUN_146795211(pcVar15,0);
        }
        else {
          *(longlong *)(pcVar15 + 0x18) = *(longlong *)(pcVar15 + 0x18) + -1;
        }
      }
      if (pRVar6 == (PSRWLOCK)0x0) {
        return 1;
      }
      ReleaseSRWLockExclusive(pRVar6);
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar11 = param_2 & 0xfffffffffffe0000;
  if (DAT_14c758428 != 0) {
    uVar12 = (uint)(param_2 >> 0x15) & 0xfffffff ^ (uint)(param_2 >> 0x11);
    uVar12 = uVar12 * 0x20 + (uVar12 ^ 0xdeadbeef);
    uVar12 = uVar12 >> 0xb ^ uVar12;
    uVar16 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar12);
    uVar14 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar16 * 0x10);
    while (uVar14 != uVar11) {
      uVar12 = uVar12 + 1;
      if (uVar14 == 0xffffffffffffffff) goto LAB_14677d623;
      uVar16 = (ulonglong)(uVar12 & *(uint *)(DAT_14c758428 + 0xc));
      uVar14 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar16 * 0x10);
    }
    puVar5 = *(undefined1 **)(DAT_14c758428 + 0x28 + uVar16 * 0x10);
    if (puVar5 != (undefined1 *)0x0) goto LAB_14677d440;
  }
LAB_14677d623:
  if (DAT_14c758438 != 0) {
    uVar12 = (uint)(param_2 >> 0x1a) & 0xfffffff ^ (uint)(param_2 >> 0x16);
    uVar12 = uVar12 * 0x20 + (uVar12 ^ 0xdeadbeef);
    uVar12 = uVar12 >> 0xb ^ uVar12;
    uVar16 = (ulonglong)(*(uint *)(DAT_14c758438 + 0xc) & uVar12);
    uVar14 = *(ulonglong *)(DAT_14c758438 + 0x20 + uVar16 * 0x10);
    while (uVar14 != (param_2 & 0xffffffffffc00000)) {
      uVar12 = uVar12 + 1;
      if (uVar14 == 0xffffffffffffffff) goto LAB_14677d69a;
      uVar16 = (ulonglong)(uVar12 & *(uint *)(DAT_14c758438 + 0xc));
      uVar14 = *(ulonglong *)(DAT_14c758438 + 0x20 + uVar16 * 0x10);
    }
    puVar5 = *(undefined1 **)(DAT_14c758438 + 0x28 + uVar16 * 0x10);
    if (puVar5 != (undefined1 *)0x0) {
LAB_14677d440:
      switch(*puVar5) {
      case 1:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      case 2:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      case 3:
        if (DAT_14c758428 == 0) {
          lVar8 = 0;
        }
        else {
          uVar12 = (uint)(param_2 >> 0x15) & 0xfffffff ^ (uint)(param_2 >> 0x11);
          uVar12 = uVar12 * 0x20 + (uVar12 ^ 0xdeadbeef);
          uVar12 = uVar12 >> 0xb ^ uVar12;
          uVar16 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar12);
          uVar14 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar16 * 0x10);
          if (uVar14 != uVar11) {
            lVar8 = 0;
            do {
              uVar12 = uVar12 + 1;
              if (uVar14 == 0xffffffffffffffff) goto LAB_14677d4c8;
              uVar16 = (ulonglong)(uVar12 & *(uint *)(DAT_14c758428 + 0xc));
              uVar14 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar16 * 0x10);
            } while (uVar14 != uVar11);
          }
          lVar8 = *(longlong *)(DAT_14c758428 + 0x28 + uVar16 * 0x10);
        }
LAB_14677d4c8:
        if (*(longlong *)(lVar8 + 8) == 0) {
          pRVar6 = (PSRWLOCK)0x0;
        }
        else {
          pRVar6 = (PSRWLOCK)FUN_146794d20(lVar8,0);
        }
        uVar11 = (ulonglong)((uint)(param_2 >> 0xc) & 0x1c);
        uVar12 = *(uint *)(lVar8 + 0x2c + uVar11) & ~(1 << ((uint)(param_2 >> 9) & 0x1f));
        *(uint *)(lVar8 + 0x2c + uVar11) = uVar12;
        uVar11 = *(ulonglong *)(lVar8 + 0x20);
        if (((uint)uVar11 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar14 = (ulonglong)
                 *(uint *)((uVar11 & 0xfffffffffffffff8) + 0x14 +
                          (ulonglong)((uint)(param_2 >> 10) & 0x7c));
        lVar9 = uVar14 * 8 + DAT_14c80ad08;
        if (uVar14 == 0) {
          lVar9 = 0;
        }
        if ((*(byte *)(lVar9 + 0x11) & 4) == 0) {
          FUN_146795935(lVar9,lVar8);
          uVar11 = *(ulonglong *)(lVar8 + 0x20);
        }
        uVar13 = (uint)param_2 & 0x1ffff;
        if ((uVar11 & 6) == 0) {
          uVar4 = *(uint *)(lVar8 + 4);
        }
        else {
          if (((uint)uVar11 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar11 = (ulonglong)
                   *(uint *)((uVar11 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar13 >> 0xc) * 4);
          lVar9 = DAT_14c80ad08 + uVar11 * 8;
          if (uVar11 == 0) {
            lVar9 = 0;
          }
          uVar4 = *(uint *)((ulonglong)
                            ((uint)*(byte *)(lVar9 + 0xd) * 0x80000 +
                            (uint)*(ushort *)(lVar9 + 0xb) * 8) + 0x20 + DAT_14c80ad08) & 0x7ffffff;
        }
        if (uVar4 != 0) {
          if (0x20000 < (ulonglong)uVar13 + (ulonglong)uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar11 = ((ulonglong)uVar4 + (ulonglong)uVar13) - 1 >> 0xc;
          uVar14 = (ulonglong)(uVar13 >> 0xc);
          if (uVar14 <= uVar11) {
            bVar3 = 0;
            do {
              bVar2 = bVar3;
              cVar10 = *(char *)(lVar8 + 0x4c + uVar14);
              if (cVar10 == '\0') {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (cVar10 == -1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              cVar10 = cVar10 + -1;
              *(char *)(lVar8 + 0x4c + uVar14) = cVar10;
              uVar14 = uVar14 + 1;
              bVar3 = bVar2 | cVar10 == '\0';
            } while (uVar11 + 1 != uVar14);
            if ((bool)(bVar2 | cVar10 == '\0')) {
              FUN_146795211(lVar8,1);
            }
          }
        }
        if (uVar12 == 0) {
          lVar9 = *(longlong *)(lVar8 + 0x18) + -1;
          if (lVar9 == 0) {
            FUN_146795211(lVar8,0);
          }
          else {
            *(longlong *)(lVar8 + 0x18) = lVar9;
          }
        }
        if (pRVar6 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar6);
        }
        break;
      case 4:
        if (DAT_14c758428 == 0) {
          lVar8 = 0;
        }
        else {
          uVar12 = (uint)(param_2 >> 0x15) & 0xfffffff ^ (uint)(param_2 >> 0x11);
          uVar12 = uVar12 * 0x20 + (uVar12 ^ 0xdeadbeef);
          uVar12 = uVar12 >> 0xb ^ uVar12;
          uVar16 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar12);
          uVar14 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar16 * 0x10);
          if (uVar14 != uVar11) {
            lVar8 = 0;
            do {
              uVar12 = uVar12 + 1;
              if (uVar14 == 0xffffffffffffffff) goto LAB_14677d719;
              uVar16 = (ulonglong)(uVar12 & *(uint *)(DAT_14c758428 + 0xc));
              uVar14 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar16 * 0x10);
            } while (uVar14 != uVar11);
          }
          lVar8 = *(longlong *)(DAT_14c758428 + 0x28 + uVar16 * 0x10);
        }
LAB_14677d719:
        uVar11 = (ulonglong)*(uint *)(lVar8 + 4) + *(longlong *)(param_1 + 0x1f48);
        if (uVar11 < 0xc351) {
          *(ulonglong *)(param_1 + 0x1f48) = uVar11;
          uVar12 = *(uint *)(param_1 + 8000);
          if ((ulonglong)uVar12 < 999) {
            *(ulonglong *)(param_1 + (ulonglong)uVar12 * 8) = param_2 << 6 | 7;
            *(uint *)(param_1 + 8000) = uVar12 + 1;
            return 1;
          }
        }
        FUN_14679f80b(param_1,param_2,7);
        break;
      case 5:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      case 6:
        FUN_146779ebb(puVar5,param_2);
        break;
      case 7:
        FUN_14677b1aa(puVar5,param_2);
        break;
      default:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      return 1;
    }
  }
LAB_14677d69a:
  uVar7 = FUN_146781011(param_2,&PTR_LOOP_149dfb7a0);
  return uVar7;
}



// FUNCTION 14677d8b8 FUN_14677d8b8 body=155 status=ok
// SIG undefined FUN_14677d8b8(void)

void FUN_14677d8b8(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar4 = (uint)((ulonglong)param_3 >> 0x20);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar5 = (uint)param_3 >> 4 ^ (uint)param_3;
    uVar4 = uVar4 >> 4 ^ uVar4;
    uVar4 = uVar4 * 0x20 + (uVar4 ^ 0xdeadbeef) ^ uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
    uVar4 = uVar4 >> 0xb ^ uVar4;
    do {
      lVar6 = (ulonglong)(uVar4 & *(uint *)((longlong)param_2 + 0xc)) * 0x10;
      puVar1 = (undefined8 *)(lVar2 + lVar6);
      lVar6 = *(longlong *)(lVar2 + lVar6);
      if (lVar6 == -1) {
        if (puVar1[1] != 1) break;
      }
      else if (lVar6 == param_3) goto LAB_14677d945;
      uVar4 = uVar4 + 1;
    } while( true );
  }
LAB_14677d934:
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  return;
LAB_14677d945:
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar3;
    return;
  }
  goto LAB_14677d934;
}



// FUNCTION 14677d95d FUN_14677d95d body=184 status=ok
// SIG undefined FUN_14677d95d(void)

undefined8 FUN_14677d95d(undefined8 param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  
  pcVar4 = strstr(param_2,"[LibPasBmallocHeapType = ");
  iVar3 = 0;
  if (pcVar4 == (char *)0x0) {
    return 0;
  }
  uVar6 = 0x80000000;
  do {
    cVar1 = pcVar4[uVar6 - 0x7fffffe7];
    if (cVar1 == '[') {
      iVar3 = iVar3 + 1;
    }
    else if (cVar1 == ']') {
      if (iVar3 == 0) {
        pcVar5 = strstr(param_2,"primitiveHeapRefForTypeWithFlexibleArrayMember");
        if (pcVar5 != (char *)0x0) {
          FUN_14679d700(param_1,"ObjectWithFlexibleArrayMember, ");
        }
        if (uVar6 >> 0x20 == 0) {
          FUN_14679d700(param_1,&DAT_149dfbe41,(int)uVar6 + -0x80000000,pcVar4 + 0x19);
          return 1;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      iVar3 = iVar3 + -1;
    }
    else if (cVar1 == '\0') {
      return 0;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}



// FUNCTION 14677da15 FUN_14677da15 body=79 status=ok
// SIG undefined FUN_14677da15(void)

void FUN_14677da15(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_14679d700(param_2,"Size = %zu, Alignment = %zu, Type = ",*param_1,param_1[1]);
  uVar1 = *(undefined8 *)(param_1 + 2);
  cVar2 = FUN_14677d95d(param_2,uVar1);
  if (cVar2 == '\0') {
    FUN_14679d700(param_2,&DAT_149dfbe46,uVar1);
  }
  return;
}



// FUNCTION 14677da69 FUN_14677da69 body=120 status=ok
// SIG undefined FUN_14677da69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14677da69(longlong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c8084a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = DAT_14c8084a8 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar3 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = uVar3 >> 3;
  }
  lVar4 = 0x48;
  do {
    *(char *)(param_1 + lVar4) = (char)uVar3;
    uVar3 = uVar3 >> 8;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x4b);
  DAT_14c8084a8 = param_1;
  _DAT_14c8084b0 = _DAT_14c8084b0 + 1;
  return;
}



// FUNCTION 14677dae1 FUN_14677dae1 body=67 status=ok
// SIG undefined FUN_14677dae1(void)

void FUN_14677dae1(longlong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (DAT_14c8084b8 != param_1) {
      *(longlong *)(param_1 + 0x18) = DAT_14c8084b8;
      DAT_14c8084b8 = param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677db24 FUN_14677db24 body=66 status=ok
// SIG undefined FUN_14677db24(void)

void FUN_14677db24(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = FUN_1467993fd(param_2);
  if (uVar2 < 0x141) {
    FUN_14678bb46(param_1 + 8,param_2,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677db66 FUN_14677db66 body=64 status=ok
// SIG undefined FUN_14677db66(void)

void FUN_14677db66(longlong param_1)

{
  code *pcVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14678bdd4(param_1 + 8,1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677dba6 FUN_14677dba6 body=19 status=ok
// SIG undefined FUN_14677dba6(void)

void FUN_14677dba6(void)

{
  FUN_1467a2940(&DAT_14c8084c8,FUN_14677dbb9);
  return;
}



// FUNCTION 14677dbb9 FUN_14677dbb9 body=133 status=ok
// SIG undefined FUN_14677dbb9(void)

void FUN_14677dbb9(void)

{
  longlong lVar1;
  longlong lVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  lVar1 = FUN_14678871b(0x2900,"pas_baseline_allocator_table",0);
  lVar2 = 0x27b8;
  do {
    *(undefined4 *)(lVar1 + 7 + lVar2) = 0;
    *(undefined8 *)(lVar1 + lVar2) = 0;
    *(undefined1 *)(lVar1 + 0xb + lVar2) = 0x82;
    memset((void *)(lVar1 + lVar2 + 0xc),0,0x13c);
    lVar2 = lVar2 + -0x148;
  } while (lVar2 != -0x148);
  DAT_14c8084d0 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00014677dc37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  return;
}



// FUNCTION 14677dc3e FUN_14677dc3e body=37 status=ok
// SIG undefined FUN_14677dc3e(void)

uint FUN_14677dc3e(void)

{
  uint uVar1;
  
  uVar1 = DAT_14c7584d0 << 0xd ^ DAT_14c7584d0;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  DAT_14c7584d0 = uVar1 << 5 ^ uVar1;
  return uVar1 & 0x1f;
}



// FUNCTION 14677dc63 FUN_14677dc63 body=133 status=ok
// SIG undefined FUN_14677dc63(void)

byte FUN_14677dc63(undefined4 param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  
  if (DAT_14c8084d0 == 0) {
    bVar3 = 0;
  }
  else {
    lVar4 = 0x27b8;
    bVar3 = 0;
    do {
      lVar1 = DAT_14c8084d0;
      SRWLock = (PSRWLOCK)(lVar4 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      bVar2 = FUN_14678c2b6(lVar4 + lVar1 + 8,param_1);
      bVar3 = bVar3 | bVar2;
      ReleaseSRWLockExclusive(SRWLock);
      lVar4 = lVar4 + -0x148;
    } while (lVar4 != -0x148);
  }
  return bVar3 & 1;
}



// FUNCTION 14677dce8 FUN_14677dce8 body=725 status=ok
// SIG undefined FUN_14677dce8(void)

ulonglong FUN_14677dce8(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  if (param_3 != 0) {
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(longlong *)(param_3 + 8) == 0) goto LAB_14677dfa1;
    lVar8 = FUN_146782d6a(param_2,*(longlong *)(param_3 + 8),0x20);
    if ((lVar8 != 0) &&
       (lVar8 = FUN_146782d6a(param_2,*(undefined8 *)(param_3 + 8),
                              (ulonglong)*(uint *)(lVar8 + 8) * 0x10 + 0x20), lVar8 != 0)) {
      uVar22 = (ulonglong)*(uint *)(lVar8 + 8);
      if (uVar22 != 0) {
        do {
          uVar22 = uVar22 - 1;
          uVar1 = *(ulonglong *)(lVar8 + 0x20 + uVar22 * 0x10);
          if (uVar1 != 0xffffffffffffffff) {
            uVar2 = *(ulonglong *)(uVar22 * 0x10 + lVar8 + 0x20 + 8);
            uVar17 = *(uint *)(param_1 + 1);
            if (uVar17 <= (uint)((*(int *)((longlong)param_1 + 0x14) + (int)param_1[2]) * 2)) {
              uVar20 = uVar17 * 2;
              if ((uint)((int)param_1[2] * 6) < uVar17 * 2) {
                uVar20 = uVar17;
              }
              uVar12 = (ulonglong)uVar20;
              if (uVar17 == 0) {
                uVar12 = 0x10;
              }
              iVar11 = (int)uVar12;
              if (POPCOUNT(iVar11) != 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar21 = uVar12 << 4;
              lVar9 = (**(code **)(param_2 + 8))(lVar21,"pas_ptr_hash_map/table",0);
              if (iVar11 != 0) {
                do {
                  *(undefined8 *)(lVar9 + -0x10 + lVar21) = 0xffffffffffffffff;
                  *(undefined8 *)(lVar9 + -8 + lVar21) = 0;
                  lVar21 = lVar21 + -0x10;
                } while (lVar21 != 0);
              }
              lVar21 = *param_1;
              uVar10 = (ulonglong)*(uint *)(param_1 + 1);
              if (uVar10 == 0) {
                uVar10 = 0;
              }
              else {
                uVar14 = 0;
                do {
                  uVar3 = *(ulonglong *)(lVar21 + uVar14 * 0x10);
                  if (uVar3 != 0xffffffffffffffff) {
                    puVar16 = (undefined4 *)(uVar14 * 0x10 + lVar21);
                    uVar20 = (uint)(uVar3 >> 4) & 0xfffffff ^ (uint)uVar3;
                    uVar17 = (uint)(uVar3 >> 0x20);
                    uVar17 = uVar17 >> 4 ^ uVar17;
                    uVar17 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef) ^
                             uVar20 * 0x20 + (uVar20 ^ 0xdeadbeef);
                    uVar17 = uVar17 >> 0xb ^ uVar17;
                    do {
                      lVar18 = (ulonglong)(uVar17 & iVar11 - 1U) * 0x10;
                      uVar17 = uVar17 + 1;
                    } while (*(longlong *)(lVar9 + lVar18) != -1);
                    puVar19 = (undefined4 *)(lVar18 + lVar9);
                    uVar5 = puVar16[1];
                    uVar6 = puVar16[2];
                    uVar7 = puVar16[3];
                    *puVar19 = *puVar16;
                    puVar19[1] = uVar5;
                    puVar19[2] = uVar6;
                    puVar19[3] = uVar7;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 != uVar10);
              }
              *param_1 = lVar9;
              *(int *)(param_1 + 1) = iVar11;
              *(uint *)((longlong)param_1 + 0xc) = iVar11 - 1U;
              *(undefined4 *)((longlong)param_1 + 0x14) = 0;
              (**(code **)(param_2 + 0x10))(lVar21,uVar10 << 4,0,*(undefined8 *)(param_2 + 0x18));
            }
            uVar17 = (uint)(uVar1 >> 4) & 0xfffffff ^ (uint)uVar1;
            uVar20 = (uint)(uVar1 >> 0x20);
            uVar20 = uVar20 >> 4 ^ uVar20;
            uVar17 = uVar20 * 0x20 + (uVar20 ^ 0xdeadbeef) ^ uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef);
            uVar17 = uVar17 >> 0xb ^ uVar17;
            lVar9 = *param_1;
            lVar21 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & uVar17) * 0x10;
            puVar13 = (ulonglong *)(lVar9 + lVar21);
            uVar10 = *(ulonglong *)(lVar9 + lVar21);
            lVar21 = *(longlong *)(lVar9 + 8 + lVar21);
            uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar10 == 0xffffffffffffffff);
            if (uVar10 != 0xffffffffffffffff || lVar21 != 0) {
              puVar15 = (ulonglong *)0x0;
              do {
                uVar17 = uVar17 + 1;
                if (((char)uVar12 == '\0') || (lVar21 != 1)) {
                  if (uVar10 == uVar1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                }
                else if (puVar15 == (ulonglong *)0x0) {
                  puVar15 = puVar13;
                }
                lVar21 = (ulonglong)(uVar17 & *(uint *)((longlong)param_1 + 0xc)) * 0x10;
                puVar13 = (ulonglong *)(lVar9 + lVar21);
                uVar10 = *(ulonglong *)(lVar9 + lVar21);
                lVar21 = *(longlong *)(lVar9 + 8 + lVar21);
                uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar10 == 0xffffffffffffffff);
              } while (lVar21 != 0 || uVar10 != 0xffffffffffffffff);
              if (puVar15 != (ulonglong *)0x0) {
                *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
                puVar13 = puVar15;
              }
            }
            *(int *)(param_1 + 2) = (int)param_1[2] + 1;
            *puVar13 = uVar1;
            puVar13[1] = uVar2;
          }
        } while (uVar22 != 0);
        uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      }
      goto LAB_14677dfa1;
    }
  }
  uVar12 = 0;
LAB_14677dfa1:
  return uVar12 & 0xffffffff;
}



// FUNCTION 14677dfbd FUN_14677dfbd body=12 status=ok
// SIG undefined FUN_14677dfbd(void)

void FUN_14677dfbd(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}



// FUNCTION 14677dfc9 FUN_14677dfc9 body=9 status=ok
// SIG undefined FUN_14677dfc9(void)

void FUN_14677dfc9(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14677dfd2 FUN_14677dfd2 body=652 status=ok
// SIG undefined FUN_14677dfd2(void)

ulonglong FUN_14677dfd2(longlong *param_1,longlong param_2,int param_3)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = 0;
  if (*(uint3 *)(param_1 + 1) != 0) {
    lVar3 = (ulonglong)((uint)*(uint3 *)(param_1 + 1) * 8) + DAT_14c80ad08;
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  if (param_3 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 2));
    local_68 = 0;
    FUN_14678ec28(*(undefined8 *)(param_2 + 0x20),param_2,0,0);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2));
  }
  SRWLock = (PSRWLOCK)(param_1 + 2);
  SRWLock_00 = (PSRWLOCK)(param_1 + 3);
  do {
    lVar3 = *param_1;
    uVar7 = (undefined7)(unaff_RBP >> 8);
    if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
      unaff_RBP = CONCAT71(uVar7,1);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      goto LAB_14677e070;
    }
    ReleaseSRWLockExclusive(SRWLock);
    if (lVar3 == 0) {
      FUN_14678f287(local_58);
      while( true ) {
        FUN_14678f28e(local_58);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        AcquireSRWLockExclusive(SRWLock);
        if (*param_1 != 0) break;
        if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar3 = (**(code **)(param_2 + 0x80))(uVar5,local_58);
        *param_1 = lVar3;
        if (lVar3 != 0) {
          if (2 < *(uint *)(param_2 + 0x68)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          (**(code **)(param_2 + 0x58))(lVar3,*(uint *)(param_2 + 0x68) + 5,1);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        cVar2 = FUN_14678f2c1(local_58);
        if (cVar2 != '\0') {
          if (lVar3 == 0) {
            unaff_RBP = 0;
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0xb) = 1;
            uVar4 = (**(code **)(param_2 + 0x40))(*param_1);
            FUN_14677f783(uVar4,param_1,param_2);
            unaff_RBP = CONCAT71(uVar7,1);
          }
          iVar6 = 1;
          goto LAB_14677e0df;
        }
        if (lVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ReleaseSRWLockExclusive(SRWLock);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      cVar2 = FUN_14678f2c1(local_58);
      iVar6 = 3;
      if (cVar2 == '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else {
      if (param_3 == 0) {
        AcquireSRWLockExclusive(SRWLock_00);
      }
      if (*(char *)((longlong)param_1 + 0xb) != '\x01') {
        if (*param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_14678d48b(*param_1,param_2);
        if (2 < *(uint *)(param_2 + 0x68)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        (**(code **)(param_2 + 0x58))(*param_1,*(uint *)(param_2 + 0x68) + 5,0);
        AcquireSRWLockExclusive(SRWLock);
        if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(undefined1 *)((longlong)param_1 + 0xb) = 1;
        uVar5 = (**(code **)(param_2 + 0x40))(*param_1);
        FUN_14677f783(uVar5,param_1,param_2);
        unaff_RBP = CONCAT71(uVar7,1);
        if (param_3 == 0) {
          ReleaseSRWLockExclusive(SRWLock_00);
        }
        goto LAB_14677e070;
      }
      if (param_3 == 0) {
        ReleaseSRWLockExclusive(SRWLock_00);
      }
      AcquireSRWLockExclusive(SRWLock);
      iVar6 = 3;
    }
LAB_14677e0df:
    if (iVar6 != 3) {
LAB_14677e070:
      if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return unaff_RBP & 0xffffff01;
    }
  } while( true );
}



// FUNCTION 14677e25f FUN_14677e25f body=558 status=ok
// SIG undefined FUN_14677e25f(void)

longlong FUN_14677e25f(undefined8 *param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                      ulonglong param_5,longlong param_6)

{
  PSRWLOCK SRWLock;
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  BOOLEAN BVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  byte bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  PSRWLOCK local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  SRWLock = (PSRWLOCK)(param_2 + 2);
  BVar4 = TryAcquireSRWLockExclusive(SRWLock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pauVar11 = (undefined1 (*) [16])*param_1;
  uVar9 = (uint)(byte)pauVar11[1][10] * 0x80000 + (uint)*(ushort *)(pauVar11[1] + 8) * 8;
  if ((uint)*(byte *)((longlong)param_2 + 10) * 0x80000 + (uint)*(ushort *)(param_2 + 1) * 8 !=
      uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar10 = (ulonglong)uVar9 + DAT_14c80ad08;
  uVar9 = *(uint *)((longlong)param_2 + 0xc);
  uVar7 = (ulonglong)uVar9;
  local_60 = SRWLock;
  if (((longlong *)param_1[1] == param_2 || (longlong *)param_1[1] == (longlong *)0x0) &&
     (param_5 < *(uint *)pauVar11[1])) {
    param_1[1] = 0;
    if (*param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = (**(code **)(param_6 + 0x40))();
    *(undefined1 *)(lVar5 + 1) = 0;
    bVar12 = (byte)(param_5 >> (*(byte *)(param_6 + 0x1c) & 0x3f));
    if (0xfd < bVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(uint *)(lVar10 + 0x48) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar8 = (ulonglong)(uVar9 & 0x7f);
    lVar5 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar10 + 0x44) * 8;
    if ((ulonglong)*(uint *)(lVar10 + 0x44) == 0) {
      lVar5 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar5 + (ulonglong)(uVar9 >> 7) * 4);
    lVar5 = DAT_14c80ad08 + uVar6 * 8;
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    if ((*(char *)(lVar5 + uVar8) == -1) &&
       (FUN_14678cc2f("%p:%zu: found empty when setting max_free\n",lVar10,uVar7),
       *(char *)(lVar5 + uVar8) == -1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *(byte *)(lVar5 + uVar8) = bVar12;
    do {
      if (((ulonglong)*(uint *)(pauVar11[1] + 4) == 0) ||
         (pauVar11 = (undefined1 (*) [16])
                     (DAT_14c80ad08 + (ulonglong)*(uint *)(pauVar11[1] + 4) * 8),
         pauVar11 == (undefined1 (*) [16])0x0)) goto LAB_14677e410;
    } while (param_5 < *(uint *)pauVar11[1]);
    do {
      lVar10 = *(longlong *)(*pauVar11 + 8);
      do {
        lVar5 = lVar10;
        lVar10 = *(longlong *)(*pauVar11 + 8);
      } while (*(longlong *)(*pauVar11 + 8) != lVar5);
      if (uVar7 < *(ulonglong *)*pauVar11) {
        if (lVar5 != -1) {
          LOCK();
          auVar1 = *pauVar11;
          auVar3._8_8_ = lVar5;
          auVar3._0_8_ = *(ulonglong *)*pauVar11;
          if (auVar3 == auVar1) {
            *(ulonglong *)*pauVar11 = uVar7;
            *(ulonglong *)(*pauVar11 + 8) = (ulonglong)((uint)lVar5 & 1) + lVar5;
          }
          UNLOCK();
          if (auVar3 == auVar1) goto LAB_14677e3f7;
        }
      }
      else {
LAB_14677e3f7:
        if ((ulonglong)*(uint *)(pauVar11[1] + 4) == 0) break;
        pauVar11 = (undefined1 (*) [16])((ulonglong)*(uint *)(pauVar11[1] + 4) * 8 + DAT_14c80ad08);
      }
    } while (pauVar11 != (undefined1 (*) [16])0x0);
LAB_14677e410:
    ReleaseSRWLockExclusive(local_60);
    local_58[0] = 0;
  }
  else {
    ReleaseSRWLockExclusive(SRWLock);
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_68 = param_6;
    FUN_14677e63d(local_58,lVar10,uVar9 + 1,param_3 & 0xffffffff);
    if (local_58[0] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_58[0];
}



// FUNCTION 14677e48e FUN_14677e48e body=158 status=ok
// SIG undefined FUN_14677e48e(void)

void FUN_14677e48e(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  cVar2 = '\0';
  if (*param_2 == '\x01') {
    cVar2 = param_2[0x6c];
  }
  *(char *)((longlong)param_1 + 0x7c) = cVar2;
  param_1[6] = param_3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_14678ddf8(param_1 + 0xc);
  if ((*param_2 != '\x01') || (cVar2 = **(char **)param_1[6], cVar2 == '\x01')) {
    return;
  }
  if (cVar2 == '\x02') {
    uVar3 = FUN_14678dd74(param_1,3);
    FUN_14678e496(&DAT_14c80aee0,uVar3);
    return;
  }
  if (cVar2 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677e52c FUN_14677e52c body=131 status=ok
// SIG undefined FUN_14677e52c(void)

void FUN_14677e52c(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(uint *)(param_1 + 0x48) <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar4 = (ulonglong)((uint)param_2 & 0x7f);
  lVar3 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x44) * 8;
  if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
    lVar3 = 0;
  }
  uVar2 = (ulonglong)*(uint *)(lVar3 + (param_2 >> 7) * 4);
  lVar3 = DAT_14c80ad08 + uVar2 * 8;
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  if (*(char *)(lVar3 + uVar4) == -1) {
    FUN_14678cc2f("%p:%zu: found empty when setting max_free\n",param_1,param_2);
    if (*(char *)(lVar3 + uVar4) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(undefined1 *)(lVar3 + uVar4) = 0xfe;
  FUN_1467a2964(param_1,param_2);
  return;
}



// FUNCTION 14677e5af FUN_14677e5af body=69 status=ok
// SIG undefined FUN_14677e5af(void)

void FUN_14677e5af(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    lVar3 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x44) * 8;
    if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (param_2 >> 7) * 4);
    lVar3 = DAT_14c80ad08 + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    *(undefined1 *)(lVar3 + (ulonglong)((uint)param_2 & 0x7f)) = 0xfe;
    FUN_1467a2964();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677e5f4 FUN_14677e5f4 body=73 status=ok
// SIG undefined FUN_14677e5f4(void)

void FUN_14677e5f4(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    lVar3 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x44) * 8;
    if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (param_2 >> 7) * 4);
    lVar3 = DAT_14c80ad08 + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    *(undefined1 *)(lVar3 + (ulonglong)((uint)param_2 & 0x7f)) = 0xff;
    FUN_1467a2964(param_1 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677e63d FUN_14677e63d body=2289 status=ok
// SIG undefined FUN_14677e63d(void)

void FUN_14677e63d(longlong *param_1,longlong param_2,uint param_3,uint param_4,char *param_5)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  void *pvVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_a8 [32];
  ulonglong local_88;
  ulonglong local_80;
  uint local_74;
  longlong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_a8;
  if (*param_5 != '\x01') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = (ulonglong)(param_3 >> 7);
  local_68 = (ulonglong)(param_3 & 0x7f);
  local_88 = (ulonglong)(param_3 & 0xffffff80);
  pauVar1 = (undefined1 (*) [16])(param_2 + 0x10);
  local_74 = param_4;
  local_70 = param_1;
  do {
    uVar7 = *(uint *)(param_2 + 0x48);
    uVar12 = (ulonglong)uVar7;
    uVar6 = local_74 >> (param_5[0x1c] & 0x1fU);
    uVar19 = (ulonglong)*(uint *)(param_2 + 0x48);
    lVar9 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_2 + 0x44) * 8;
    if ((ulonglong)*(uint *)(param_2 + 0x44) == 0) {
      lVar9 = 0;
    }
    uVar20 = local_88;
    uVar21 = local_68;
    uVar17 = local_60;
    if ((uint)local_88 < *(uint *)(param_2 + 0x48)) {
      do {
        uVar18 = (ulonglong)*(uint *)(lVar9 + uVar17 * 4);
        lVar10 = DAT_14c80ad08 + uVar18 * 8;
        if (uVar18 == 0) {
          lVar10 = 0;
        }
        uVar15 = uVar19 - uVar20;
        uVar18 = 0x80;
        if (uVar15 < 0x80) {
          uVar18 = uVar15;
        }
        if (uVar21 < uVar15) {
          do {
            bVar3 = *(byte *)(lVar10 + uVar21);
            if ((bVar3 != 0xff) && (uVar6 < bVar3 || uVar6 == bVar3)) {
              uVar19 = uVar20 + uVar21;
              goto LAB_14677e865;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar18);
        }
        uVar20 = uVar20 + 0x80;
        uVar21 = 0;
        uVar17 = uVar17 + 1;
      } while (uVar20 < uVar19);
    }
    do {
      uVar20 = *(ulonglong *)(param_2 + 0x18);
      do {
        uVar17 = uVar20;
        uVar21 = *(ulonglong *)(param_2 + 0x10);
        uVar20 = *(ulonglong *)(param_2 + 0x18);
      } while (*(ulonglong *)(param_2 + 0x18) != uVar17);
      uVar20 = uVar17;
      if ((uVar17 & 1) != 0) break;
      uVar20 = uVar17 | 1;
      LOCK();
      auVar5._8_8_ = uVar17;
      auVar5._0_8_ = uVar21;
      if (auVar5 == *pauVar1) {
        *(ulonglong *)*pauVar1 = uVar21;
        *(ulonglong *)(param_2 + 0x18) = uVar20;
      }
      UNLOCK();
    } while (auVar5 != *pauVar1);
    if ((uVar20 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar17 = (ulonglong)*(uint *)(param_2 + 0x48);
    lVar9 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_2 + 0x44) * 8;
    if ((ulonglong)*(uint *)(param_2 + 0x44) == 0) {
      lVar9 = 0;
    }
    uVar18 = (ulonglong)((uint)uVar21 & 0xffffff80);
    local_80 = uVar12;
    local_58 = uVar21;
    local_50 = uVar20;
    if (uVar18 < uVar17) {
      uVar20 = (ulonglong)((uint)uVar21 & 0x7f);
      uVar21 = uVar21 >> 7;
      do {
        uVar15 = (ulonglong)*(uint *)(lVar9 + uVar21 * 4);
        lVar10 = DAT_14c80ad08 + uVar15 * 8;
        if (uVar15 == 0) {
          lVar10 = 0;
        }
        uVar8 = uVar17 - uVar18;
        uVar15 = 0x80;
        if (uVar8 < 0x80) {
          uVar15 = uVar8;
        }
        if (uVar20 < uVar8) {
          do {
            if (*(char *)(lVar10 + uVar20) == -1) {
              uVar19 = uVar18 + uVar20;
              FUN_1467a2a08(pauVar1,&local_58,uVar19);
              goto LAB_14677e865;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar15);
        }
        uVar21 = uVar21 + 1;
        uVar18 = uVar21 * 0x80;
        uVar20 = 0;
      } while (uVar18 < uVar17);
    }
    FUN_1467a2a08(pauVar1,&local_58,uVar12);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (uVar7 == *(uint *)(param_2 + 0x48)) {
      if (uVar7 != *(uint *)(param_2 + 0x54)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar22 = uVar7 + 7 >> 3;
      uVar6 = *(uint *)(param_2 + 0x58);
      if (uVar6 < uVar22) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar23 = uVar7 >> 3;
      pvVar16 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(param_2 + 0x50) * 8);
      if ((ulonglong)*(uint *)(param_2 + 0x50) == 0) {
        pvVar16 = (void *)0x0;
      }
      if (uVar6 <= uVar23) {
        lVar9 = (ulonglong)uVar6 * 2 + 2;
        pvVar13 = (void *)FUN_14678871b((ulonglong)uVar6 * 8 + 8,
                                        "pas_bitfit_directory_view_vector/spine",0);
        if (7 < uVar7 + 7) {
          memcpy(pvVar13,pvVar16,(ulonglong)(uVar22 * 4));
        }
        uVar14 = 0;
        memset((void *)((longlong)pvVar13 + (ulonglong)uVar22 * 4),0,(lVar9 - (ulonglong)uVar22) * 4
              );
        LOCK();
        UNLOCK();
        if (pvVar13 != (void *)0x0) {
          uVar12 = (longlong)pvVar13 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar12 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar14 = (undefined4)(uVar12 >> 3);
        }
        *(undefined4 *)(param_2 + 0x50) = uVar14;
        LOCK();
        UNLOCK();
        *(int *)(param_2 + 0x58) = (int)lVar9;
        pvVar16 = pvVar13;
      }
      local_80 = (ulonglong)((uint)local_80 & 7);
      uVar7 = *(uint *)((longlong)pvVar16 + (ulonglong)uVar23 * 4);
      uVar12 = (ulonglong)uVar7;
      if (uVar23 == uVar22) {
        if ((uVar7 != 0) && (uVar12 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (local_80 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar12 = 0;
        puVar11 = (undefined8 *)FUN_1467886fa(0x20,4,"pas_bitfit_directory_view_vector/segment",0);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        LOCK();
        UNLOCK();
        if (puVar11 != (undefined8 *)0x0) {
          uVar12 = (longlong)puVar11 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar12 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar12 = uVar12 >> 3;
        }
        *(int *)((longlong)pvVar16 + (ulonglong)uVar23 * 4) = (int)uVar12;
      }
      lVar9 = 0;
      if ((int)uVar12 != 0) {
        lVar9 = DAT_14c80ad08 + (uVar12 & 0xffffffff) * 8;
      }
      *(undefined4 *)(lVar9 + local_80 * 4) = 0;
      LOCK();
      UNLOCK();
      piVar2 = (int *)(param_2 + 0x54);
      *piVar2 = *piVar2 + 1;
      if (*piVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar7 = *(uint *)(param_2 + 0x48);
      uVar6 = *(uint *)(param_2 + 0x4c);
      uVar22 = uVar7 + 0x7f >> 7;
      if (uVar6 < uVar22) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar23 = uVar7 >> 7;
      pvVar16 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(param_2 + 0x44) * 8);
      if ((ulonglong)*(uint *)(param_2 + 0x44) == 0) {
        pvVar16 = (void *)0x0;
      }
      if (uVar6 <= uVar23) {
        local_88 = (ulonglong)uVar6 * 2 + 2;
        pvVar13 = (void *)FUN_14678871b((ulonglong)uVar6 * 8 + 8,
                                        "pas_bitfit_directory_max_free_vector/spine",0);
        if (0x7f < uVar7 + 0x7f) {
          memcpy(pvVar13,pvVar16,(ulonglong)(uVar22 * 4));
        }
        uVar12 = local_88;
        uVar14 = 0;
        memset((void *)((longlong)pvVar13 + (ulonglong)uVar22 * 4),0,(local_88 - uVar22) * 4);
        LOCK();
        UNLOCK();
        if (pvVar13 != (void *)0x0) {
          uVar20 = (longlong)pvVar13 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar20 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar14 = (undefined4)(uVar20 >> 3);
        }
        *(undefined4 *)(param_2 + 0x44) = uVar14;
        LOCK();
        UNLOCK();
        *(int *)(param_2 + 0x4c) = (int)uVar12;
        pvVar16 = pvVar13;
      }
      uVar6 = *(uint *)((longlong)pvVar16 + (ulonglong)uVar23 * 4);
      uVar12 = (ulonglong)uVar6;
      if (uVar23 == uVar22) {
        if ((uVar6 != 0) && (uVar12 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((ulonglong)(uVar7 & 0x7f) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar12 = 0;
        puVar11 = (undefined8 *)
                  FUN_1467886fa(0x80,1,"pas_bitfit_directory_max_free_vector/segment",0);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        LOCK();
        UNLOCK();
        if (puVar11 != (undefined8 *)0x0) {
          uVar12 = (longlong)puVar11 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar12 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar12 = uVar12 >> 3;
        }
        *(int *)((longlong)pvVar16 + (ulonglong)uVar23 * 4) = (int)uVar12;
      }
      lVar9 = 0;
      if ((int)uVar12 != 0) {
        lVar9 = DAT_14c80ad08 + (uVar12 & 0xffffffff) * 8;
      }
      *(undefined1 *)(lVar9 + (ulonglong)(uVar7 & 0x7f)) = 0xff;
      LOCK();
      UNLOCK();
      piVar2 = (int *)(param_2 + 0x48);
      *piVar2 = *piVar2 + 1;
      if (*piVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar7 = *(uint *)(param_2 + 0x3c);
      uVar6 = *(int *)(param_2 + 0x54) + 0x1fU >> 5;
      if (uVar6 != uVar7) {
        if (uVar6 != uVar7 + 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar22 = uVar7 + 3 >> 2;
        uVar6 = *(uint *)(param_2 + 0x40);
        if (uVar6 < uVar22) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar23 = uVar7 >> 2;
        pvVar16 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(param_2 + 0x38) * 8);
        if ((ulonglong)*(uint *)(param_2 + 0x38) == 0) {
          pvVar16 = (void *)0x0;
        }
        if (uVar6 <= uVar23) {
          local_88 = (ulonglong)uVar6 * 2 + 2;
          pvVar13 = (void *)FUN_14678871b((ulonglong)uVar6 * 8 + 8,
                                          "pas_bitfit_directory_segmented_bitvectors/spine",0);
          if (3 < uVar7 + 3) {
            memcpy(pvVar13,pvVar16,(ulonglong)(uVar22 * 4));
          }
          uVar12 = local_88;
          uVar14 = 0;
          memset((void *)((longlong)pvVar13 + (ulonglong)uVar22 * 4),0,(local_88 - uVar22) * 4);
          LOCK();
          UNLOCK();
          if (pvVar13 != (void *)0x0) {
            uVar20 = (longlong)pvVar13 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (uVar20 < 8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar14 = (undefined4)(uVar20 >> 3);
          }
          *(undefined4 *)(param_2 + 0x38) = uVar14;
          LOCK();
          UNLOCK();
          *(int *)(param_2 + 0x40) = (int)uVar12;
          pvVar16 = pvVar13;
        }
        uVar6 = *(uint *)((longlong)pvVar16 + (ulonglong)uVar23 * 4);
        uVar12 = (ulonglong)uVar6;
        if (uVar23 == uVar22) {
          if ((uVar6 != 0) && (uVar12 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar7 & 3) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar12 = 0;
          puVar11 = (undefined8 *)
                    FUN_1467886fa(0x10,4,"pas_bitfit_directory_segmented_bitvectors/segment",0);
          *puVar11 = 0;
          puVar11[1] = 0;
          LOCK();
          UNLOCK();
          if (puVar11 != (undefined8 *)0x0) {
            uVar12 = (longlong)puVar11 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (uVar12 < 8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar12 = uVar12 >> 3;
          }
          *(int *)((longlong)pvVar16 + (ulonglong)uVar23 * 4) = (int)uVar12;
        }
        lVar9 = 0;
        if ((int)uVar12 != 0) {
          lVar9 = DAT_14c80ad08 + (uVar12 & 0xffffffff) * 8;
        }
        *(undefined4 *)(lVar9 + (ulonglong)(uVar7 & 3) * 4) = 0;
        LOCK();
        UNLOCK();
        uVar7 = *(int *)(param_2 + 0x3c) + 1;
        *(uint *)(param_2 + 0x3c) = uVar7;
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (*(int *)(param_2 + 0x54) + 0x1fU >> 5 != uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
LAB_14677e865:
      lVar9 = FUN_14677ef2f(param_2,uVar19);
      if (lVar9 == 0) {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        lVar9 = FUN_14677ef2f(param_2,uVar19);
        if (lVar9 == 0) {
          if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar9 = FUN_14677fe7e(param_2,uVar19 & 0xffffffff);
          if (*(uint *)(param_2 + 0x54) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar10 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_2 + 0x50) * 8;
          if ((ulonglong)*(uint *)(param_2 + 0x50) == 0) {
            lVar10 = 0;
          }
          uVar12 = (ulonglong)*(uint *)(lVar10 + (uVar19 >> 3) * 4);
          lVar10 = DAT_14c80ad08 + uVar12 * 8;
          if (uVar12 == 0) {
            lVar10 = 0;
          }
          if (lVar9 == 0) {
            uVar14 = 0;
          }
          else {
            uVar12 = lVar9 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if ((uVar12 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (uVar12 < 8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar14 = (undefined4)(uVar12 >> 3);
          }
          *(undefined4 *)(lVar10 + (ulonglong)((uint)uVar19 & 7) * 4) = uVar14;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      }
      *local_70 = lVar9;
      local_70[1] = uVar19;
      if ((local_48 ^ (ulonglong)local_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  } while( true );
}



// FUNCTION 14677ef2f FUN_14677ef2f body=70 status=ok
// SIG undefined FUN_14677ef2f(void)

longlong FUN_14677ef2f(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x54)) {
    lVar2 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x50) * 8;
    if ((ulonglong)*(uint *)(param_1 + 0x50) == 0) {
      lVar2 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar2 + (param_2 >> 3) * 4);
    lVar2 = DAT_14c80ad08 + uVar3 * 8;
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar2 + (ulonglong)((uint)param_2 & 7) * 4);
    lVar2 = DAT_14c80ad08 + uVar3 * 8;
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677ef75 FUN_14677ef75 body=193 status=ok
// SIG undefined FUN_14677ef75(void)

longlong FUN_14677ef75(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  PSRWLOCK SRWLock;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    pcVar1 = *(code **)(*(longlong *)(&DAT_14c758450 + (longlong)*(char *)(param_1 + 0x7c) * 8) +
                       0x40);
    do {
      lVar5 = lVar5 + -1;
      cVar2 = FUN_14677f036(param_1,lVar5);
      if ((cVar2 != '\0') &&
         (puVar3 = (undefined8 *)FUN_14677ef2f(param_1,lVar5), puVar3 != (undefined8 *)0x0)) {
        SRWLock = (PSRWLOCK)(puVar3 + 2);
        AcquireSRWLockExclusive(SRWLock);
        if ((*(char *)((longlong)puVar3 + 0xb) == '\x01') &&
           (lVar4 = (*pcVar1)(*puVar3), *(short *)(lVar4 + 2) == 0)) {
          lVar5 = *(longlong *)(lVar4 + 8);
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          ReleaseSRWLockExclusive(SRWLock);
          return lVar5;
        }
        ReleaseSRWLockExclusive(SRWLock);
      }
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 14677f036 FUN_14677f036 body=75 status=ok
// SIG undefined FUN_14677f036(void)

undefined4 FUN_14677f036(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 >> 5 < (ulonglong)*(uint *)(param_1 + 0x3c)) {
    lVar4 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x38) * 8;
    if ((ulonglong)*(uint *)(param_1 + 0x38) == 0) {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + (param_2 >> 7) * 4);
    lVar4 = DAT_14c80ad08 + uVar3 * 8;
    if (uVar3 == 0) {
      lVar4 = 0;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)((uint)(param_2 >> 5) & 3) * 4);
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> ((uint)param_2 & 0x1f) & 1) != 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14677f081 FUN_14677f081 body=123 status=ok
// SIG undefined FUN_14677f081(void)

undefined4 FUN_14677f081(longlong param_1,ulonglong param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((ulonglong)*(uint *)(param_1 + 0x3c) <= param_2 >> 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar8 = (ulonglong)((uint)(param_2 >> 5) & 3);
  lVar9 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x38) * 8;
  if ((ulonglong)*(uint *)(param_1 + 0x38) == 0) {
    lVar9 = 0;
  }
  uVar6 = (ulonglong)*(uint *)(lVar9 + (param_2 >> 7) * 4);
  lVar9 = DAT_14c80ad08 + uVar6 * 8;
  if (uVar6 == 0) {
    lVar9 = 0;
  }
  bVar3 = (byte)param_2 & 0x1f;
  do {
    uVar2 = *(uint *)(lVar9 + uVar8 * 4);
    uVar5 = uVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    uVar7 = uVar2 | 1 << ((byte)param_2 & 0x1f);
    if (param_3 == '\0') {
      uVar7 = uVar5;
    }
    if (uVar2 == uVar7) break;
    puVar1 = (uint *)(lVar9 + uVar8 * 4);
    LOCK();
    uVar5 = *puVar1;
    bVar10 = uVar2 == uVar5;
    if (bVar10) {
      *puVar1 = uVar7;
      uVar5 = uVar2;
    }
    UNLOCK();
  } while (!bVar10);
  return CONCAT31((int3)(uVar5 >> 8),uVar2 != uVar7);
}



// FUNCTION 14677f0fc FUN_14677f0fc body=113 status=ok
// SIG undefined FUN_14677f0fc(void)

void FUN_14677f0fc(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_14677f081(param_1,param_2,1);
  if (cVar2 != '\0') {
    lVar3 = FUN_1467a29b6(param_1 + 0x20,param_2 + 1);
    if ((lVar3 == 0) && (cVar2 = *(char *)**(undefined8 **)(param_1 + 0x30), cVar2 != '\x01')) {
      if (cVar2 == '\x02') {
        uVar4 = FUN_14678dd74(param_1,3);
        FUN_14678ec29(&DAT_14c80aee0,uVar4);
        return;
      }
      if (cVar2 == '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}



// FUNCTION 14677f16d FUN_14677f16d body=8 status=ok
// SIG undefined FUN_14677f16d(void)

void FUN_14677f16d(undefined8 param_1,longlong param_2)

{
  FUN_14677f0fc(param_1,*(undefined4 *)(param_2 + 0xc));
  return;
}



// FUNCTION 14677f175 FUN_14677f175 body=1062 status=ok
// SIG undefined FUN_14677f175(void)

undefined8 FUN_14677f175(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  PSRWLOCK SRWLock;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined4 local_130;
  short local_11e;
  undefined4 local_11c;
  ulonglong local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong local_100;
  PSRWLOCK local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [128];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar15 = *(ulonglong *)(param_1 + 0x28);
  do {
    uVar9 = uVar15;
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar15 = *(ulonglong *)(param_1 + 0x28);
  } while (*(ulonglong *)(param_1 + 0x28) != uVar9);
  lVar3 = *(longlong *)(&DAT_14c758450 + (longlong)*(char *)(param_1 + 0x7c) * 8);
  uVar17 = 0;
  uVar15 = uVar2;
  uVar13 = *(ulonglong *)(lVar3 + 0x20) / *(ulonglong *)(lVar3 + 0x28);
  local_110 = param_2;
  while (uVar15 != 0) {
    uVar15 = uVar15 - 1;
    cVar8 = FUN_14677f081(param_1,uVar15,0);
    if (cVar8 != '\0') {
      local_11c = param_3;
      local_118 = uVar13;
      plVar10 = (longlong *)FUN_14677ef2f(param_1,uVar15);
      if (plVar10 == (longlong *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (*plVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if ((ulonglong)
          ((uint)*(byte *)((longlong)plVar10 + 10) * 0x80000 + (uint)*(ushort *)(plVar10 + 1) * 8) +
          DAT_14c80ad08 != param_1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar15 != *(uint *)((longlong)plVar10 + 0xc)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_108 = plVar10 + 3;
      cVar8 = FUN_14678183f(local_110);
      if (cVar8 == '\0') {
        FUN_14677f0fc(param_1,uVar15);
        uVar17 = 2;
        goto LAB_14677f2e9;
      }
      SRWLock = (PSRWLOCK)(plVar10 + 2);
      AcquireSRWLockExclusive(SRWLock);
      if (*(char *)((longlong)plVar10 + 0xb) != '\0') {
        lVar4 = *plVar10;
        local_f8 = SRWLock;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar11 = (**(code **)(lVar3 + 0x40))(lVar4);
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (*(uint *)(param_1 + 0x48) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        sVar1 = *(short *)(lVar11 + 2);
        lVar14 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x44) * 8;
        if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
          lVar14 = 0;
        }
        uVar13 = (ulonglong)*(uint *)(lVar14 + (uVar15 >> 7) * 4);
        lVar14 = DAT_14c80ad08 + uVar13 * 8;
        if (uVar13 == 0) {
          lVar14 = 0;
        }
        cVar8 = *(char *)(lVar14 + (ulonglong)((uint)uVar15 & 0x7f));
        if (sVar1 == 0) {
          if (cVar8 != -1) {
            FUN_14678cc2f("%p:%zu: found non-empty page that is dead when taking last empty.\n",
                          lVar11,uVar15);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (1 < local_118) goto LAB_14677f3c1;
          *(undefined1 *)((longlong)plVar10 + 0xb) = 0;
          local_11e = sVar1;
          local_100 = lVar11;
          ReleaseSRWLockExclusive(local_f8);
          uVar16 = local_11c;
          local_d8 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x438);
          local_e8 = *(longlong *)(lVar3 + 0x20) + lVar4;
          local_e0 = local_108;
          local_f0 = lVar4;
          FUN_14678196f(local_110,&local_f0,local_11c);
LAB_14677f46c:
          if (uVar9 != 0xffffffffffffffff) {
            LOCK();
            auVar7._8_8_ = uVar9;
            auVar7._0_8_ = uVar2;
            if (auVar7 == *(undefined1 (*) [16])(param_1 + 0x20)) {
              *(ulonglong *)*(undefined1 (*) [16])(param_1 + 0x20) = uVar15;
              *(ulonglong *)(param_1 + 0x28) = ((uint)uVar9 & 1) + uVar9;
            }
            UNLOCK();
          }
          if (local_11e == 0) {
            (**(code **)(lVar3 + 0x60))(local_100,uVar16);
          }
          cVar8 = *(char *)**(undefined8 **)(param_1 + 0x30);
          if (cVar8 != '\x02') {
            if (cVar8 == '\x01') {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (cVar8 != '\0') {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar17 = 3;
          uVar12 = FUN_14678dd74(param_1,3);
          FUN_14678ec29(&DAT_14c80aee0,uVar12);
          goto LAB_14677f2e9;
        }
        if (cVar8 == -1) {
          FUN_14678cc2f("%p:%zu: found empty page that is not dead when taking last empty.\n",lVar11
                        ,uVar15);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        SRWLock = local_f8;
        if (1 < local_118) {
LAB_14677f3c1:
          if (*(ulonglong *)(lVar3 + 0x20) <= *(ulonglong *)(lVar3 + 0x28)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (sVar1 == 0) {
            local_11e = sVar1;
            local_100 = lVar11;
            FUN_146787a14(local_d0,((*(ulonglong *)(lVar3 + 0x20) >>
                                    (*(byte *)(lVar3 + 0x1c) & 0x3f)) + 0x3f >> 2 &
                                   0xfffffffffffffff0) + lVar11 + 0x10);
          }
          else {
            local_11e = sVar1;
            local_100 = lVar11;
            FUN_146787984();
          }
          if (local_118 < local_50) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          SRWLock = local_f8;
          if (local_50 != 0) {
            if (local_11e == 0) {
              *(undefined1 *)((longlong)plVar10 + 0xb) = 0;
            }
            ReleaseSRWLockExclusive(local_f8);
            uVar16 = local_11c;
            local_130 = local_11c;
            local_138 = lVar3;
            FUN_146787b17(local_d0,local_100,local_110,local_108);
            goto LAB_14677f46c;
          }
        }
      }
      ReleaseSRWLockExclusive(SRWLock);
      FUN_146781cd7(local_110,local_108);
      uVar13 = local_118;
      param_3 = local_11c;
    }
  }
  if (uVar9 != 0xffffffffffffffff) {
    if ((uVar9 & 1) == 0) {
      uVar15 = uVar9;
      if (uVar2 == 0) goto LAB_14677f2e9;
    }
    else {
      uVar15 = uVar9 + 1;
    }
    uVar17 = 0;
    LOCK();
    auVar6._8_8_ = uVar9;
    auVar6._0_8_ = uVar2;
    if (auVar6 == *(undefined1 (*) [16])(param_1 + 0x20)) {
      *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20) = 0;
      *(ulonglong *)(param_1 + 0x28) = uVar15;
    }
    UNLOCK();
  }
LAB_14677f2e9:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 14677f59c FUN_14677f59c body=139 status=ok
// SIG undefined FUN_14677f59c(void)

longlong FUN_14677f59c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar1 = FUN_1467886fa(0x180,0x10,"pas_bitfit_heap",0);
  lVar3 = lVar1;
  do {
    lVar2 = param_2 + 0x208;
    if (((int)lVar4 != 0) && (lVar2 = param_2 + 0x358, (int)lVar4 != 2)) {
      lVar2 = param_2 + 0x2b0;
    }
    FUN_14677e48e(lVar3,lVar2,param_1);
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x80;
  } while (lVar4 != 3);
  return lVar1;
}



// FUNCTION 14677f627 FUN_14677f627 body=205 status=ok
// SIG undefined FUN_14677f627(void)

longlong FUN_14677f627(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = 0;
  iVar7 = 0;
  do {
    pbVar4 = (byte *)(param_2 + 0x208);
    if ((iVar7 != 0) && (pbVar4 = (byte *)(param_2 + 0x358), iVar7 != 2)) {
      pbVar4 = (byte *)(param_2 + 0x2b0);
    }
    if (((*pbVar4 & 1) != 0) && (*(int *)(param_3 + 0x18) != 0)) {
      if (2 < *(uint *)(pbVar4 + 0x68)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (*(&PTR_DAT_149dfc088)[*(uint *)(pbVar4 + 0x68)] == '\x01') {
        bVar1 = pbVar4[0x1c];
        uVar2 = *(ulonglong *)(pbVar4 + 0x38);
        if ((ulonglong)(0xfeL << (bVar1 & 0x3f)) <= uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((ulonglong)(0xfdL << (bVar1 & 0x3f)) < uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar5 = 1L << (bVar1 & 0x3f);
        uVar6 = -lVar5 & param_1 + -1 + lVar5;
        if (uVar6 <= uVar2) {
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (uVar6 >> 0x20 == 0) {
            return uVar6 - lVar8;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + -0x100000000;
    if (iVar7 == 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  } while( true );
}



// FUNCTION 14677f6f4 FUN_14677f6f4 body=143 status=ok
// SIG undefined FUN_14677f6f4(void)

void FUN_14677f6f4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar3 = FUN_14677f627(param_3,param_4,param_5);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1 = param_1 + (uVar3 >> 0x19 & 0xffffffffffffff80);
  puVar4 = (uint *)FUN_14677fbc8(param_1,uVar3 & 0xffffffff);
  if (puVar4 != (uint *)0x0) {
    lVar5 = (ulonglong)*puVar4 * 8 + DAT_14c80ad08;
    if ((lVar5 != 0 && (ulonglong)*puVar4 != 0) && ((uint)uVar3 <= *(uint *)(lVar5 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_14677fc17(param_2,uVar3 & 0xffffffff,param_1,puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677f783 FUN_14677f783 body=552 status=ok
// SIG undefined FUN_14677f783(void)

void FUN_14677f783(char *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong _Size;
  
  if (*(int *)(param_3 + 0x18) != 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  bVar1 = *(byte *)(param_3 + 0x1c);
  uVar9 = *(ulonglong *)(param_3 + 0x20);
  uVar3 = *(ulonglong *)(param_3 + 0x28);
  uVar2 = *(uint *)(param_3 + 0x68);
  lVar4 = *(longlong *)(param_3 + 0x70);
  lVar5 = *(longlong *)(param_3 + 0x78);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_2 + 0x10));
  if (BVar7 != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (2 < uVar2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *param_1 = (char)uVar2 + '\x05';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar13 = param_2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (uVar13 < 8) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar12 = (undefined4)(uVar13 >> 3);
  }
  *(undefined4 *)(param_1 + 4) = uVar12;
  uVar16 = uVar9 >> (bVar1 & 0x3f);
  _Size = uVar16 + 0x3f >> 2 & 0xfffffffffffffff0;
  pcVar14 = param_1 + 0x10;
  memset(pcVar14,0,_Size);
  lVar8 = 1L << (bVar1 & 0x3f);
  uVar13 = (-lVar8 & (lVar4 + lVar8) - 1U) >> (bVar1 & 0x3f);
  uVar11 = uVar13 >> 6;
  uVar15 = uVar16 >> 6;
  uVar13 = uVar13 & 0x3f;
  if (uVar13 != 0) {
    *(ulonglong *)(pcVar14 + uVar11 * 8) =
         *(ulonglong *)(pcVar14 + uVar11 * 8) | -1L << (sbyte)uVar13;
    uVar11 = uVar11 + 1;
  }
  if (uVar11 <= uVar15 && uVar15 - uVar11 != 0) {
    memset(param_1 + uVar11 * 8 + 0x10,(int)CONCAT71((int7)(uVar11 >> 8),0xff),(uVar15 - uVar11) * 8
          );
  }
  if ((uVar16 & 0x3f) != 0) {
    *(ulonglong *)(pcVar14 + uVar15 * 8) =
         *(ulonglong *)(pcVar14 + uVar15 * 8) | ~(-1L << ((byte)uVar16 & 0x3f));
  }
  if (uVar9 != uVar3) {
    if (uVar9 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    pcVar14 = pcVar14 + _Size;
    uVar13 = uVar9 / uVar3;
    memset(pcVar14,0,uVar13);
    if (lVar4 != 0) {
      uVar11 = (lVar4 - 1U) / uVar3;
      if (uVar13 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar15 = 0;
      do {
        if (pcVar14[uVar15] == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar10 = pcVar14[uVar15] + '\x01';
        if (cVar10 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pcVar14[uVar15] = cVar10;
        uVar15 = uVar15 + 1;
      } while (uVar15 <= uVar11);
    }
    uVar11 = lVar5 + lVar4;
    if (uVar11 != uVar9) {
      uVar9 = (uVar9 - 1) / uVar3;
      if (uVar13 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      for (uVar11 = uVar11 / uVar3; uVar11 <= uVar9; uVar11 = uVar11 + 1) {
        if (pcVar14[uVar11] == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar10 = pcVar14[uVar11] + '\x01';
        if (cVar10 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pcVar14[uVar11] = cVar10;
      }
    }
  }
  return;
}



// FUNCTION 14677f9ab FUN_14677f9ab body=411 status=ok
// SIG undefined FUN_14677f9ab(void)

void FUN_14677f9ab(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  bVar1 = *(byte *)(*(longlong *)
                     (&DAT_14c758450 +
                     (longlong)
                     *(char *)((ulonglong)
                               ((uint)*(byte *)(DAT_14c80ad08 + 10 +
                                               (ulonglong)*(uint *)(param_1 + 4) * 8) * 0x80000 +
                               (uint)*(ushort *)
                                      (DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(param_1 + 4) * 8) *
                               8) + 0x7c + DAT_14c80ad08) * 8) + 0x1c);
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (&DAT_14c758450 +
             (longlong)
             *(char *)((ulonglong)
                       ((uint)*(byte *)(DAT_14c80ad08 + 10 + (ulonglong)*(uint *)(param_1 + 4) * 8)
                        * 0x80000 +
                       (uint)*(ushort *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(param_1 + 4) * 8)
                       * 8) + 0x7c + DAT_14c80ad08) * 8) + 0x20);
  FUN_14678cc2f("free bits: ");
  if (uVar2 == 0) {
    FUN_14678cc2f(&DAT_149dfc0af);
    FUN_14678cc2f(" end bits: ");
  }
  else {
    lVar7 = 1L << (bVar1 & 0x3f);
    uVar6 = 0;
    do {
      uVar4 = uVar6 >> (bVar1 & 0x3f);
      FUN_14678cc2f(&DAT_149dfc0ac,
                    (*(uint *)(param_1 + 0x10 + (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) & 1) != 0)
      ;
      uVar6 = uVar6 + lVar7;
    } while (uVar6 < uVar2);
    FUN_14678cc2f(&DAT_149dfc0af);
    FUN_14678cc2f(" end bits: ");
    uVar6 = 0;
    do {
      uVar4 = uVar6 >> (bVar1 & 0x3f);
      FUN_14678cc2f(&DAT_149dfc0ac,
                    (*(uint *)(param_1 + 0x10 + ((uVar2 >> (bVar1 & 0x3f)) + 0x3f >> 6) * 8 +
                              (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) & 1) != 0);
      uVar6 = uVar6 + lVar7;
    } while (uVar6 < uVar2);
  }
  FUN_14678cc2f(&DAT_149dfc0af);
  if (param_2 != param_3) {
    if (param_3 <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    FUN_14678cc2f("           ");
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        puVar5 = &DAT_149dfc0cb;
        if (uVar6 < param_3) {
          puVar5 = &DAT_149dfc0c9;
        }
        if (uVar6 < param_2) {
          puVar5 = &DAT_149dfc0cb;
        }
        FUN_14678cc2f(puVar5);
        uVar6 = uVar6 + (1L << (bVar1 & 0x3f));
      } while (uVar6 < uVar2);
    }
    FUN_14678cc2f(&DAT_149dfc0af);
  }
  return;
}



// FUNCTION 14677fb46 FUN_14677fb46 body=102 status=ok
// SIG undefined FUN_14677fb46(void)

void FUN_14677fb46(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  DWORD DVar3;
  
  FUN_14678cc86();
  DVar3 = GetCurrentThreadId();
  FUN_14678cc2f("Thread %lu encountered bitfit alloaction error.\n",DVar3);
  uVar2 = FUN_14677fbb3(param_2);
  FUN_14678cc2f("Bits for page %p (%s):\n",param_1,uVar2);
  FUN_14677f9ab(param_1,param_4,param_4 + 1);
  FUN_1467a2796(param_5,param_3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14677fbac GetCurrentThreadId body=7 status=ok
// SIG DWORD GetCurrentThreadId(void)

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014677fbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



// FUNCTION 14677fbb3 FUN_14677fbb3 body=21 status=ok
// SIG undefined FUN_14677fbb3(void)

undefined * FUN_14677fbb3(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return (&PTR_DAT_149dfc160)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14677fbc8 FUN_14677fbc8 body=79 status=ok
// SIG undefined FUN_14677fbc8(void)

longlong FUN_14677fbc8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1 + 0x78;
  lVar1 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x78) * 8;
  if ((lVar1 != 0 && (ulonglong)*(uint *)(param_1 + 0x78) != 0) &&
     (param_2 < *(uint *)(lVar1 + 0x10))) {
    while (lVar2 = lVar1, uVar3 = (ulonglong)*(uint *)(lVar2 + 0x14), uVar3 != 0) {
      lVar1 = DAT_14c80ad08 + uVar3 * 8;
      if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x10) <= param_2)) break;
    }
    lVar2 = lVar2 + 0x14;
  }
  return lVar2;
}



// FUNCTION 14677fc17 FUN_14677fc17 body=279 status=ok
// SIG undefined FUN_14677fc17(void)

void FUN_14677fc17(undefined8 *param_1,uint param_2,longlong param_3,uint *param_4)

{
  code *pcVar1;
  longlong lVar2;
  BOOLEAN BVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 == (uint *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = param_2;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_3 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = uVar6 >> 3;
  }
  lVar4 = 0x18;
  do {
    *(char *)((longlong)param_1 + lVar4) = (char)uVar6;
    uVar6 = uVar6 >> 8;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x1b);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  lVar2 = DAT_14c80ad08;
  uVar6 = (ulonglong)*param_4;
  lVar4 = DAT_14c80ad08 + uVar6 * 8;
  uVar5 = 0;
  if (lVar4 != 0 && uVar6 != 0) {
    if (param_2 <= *(uint *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = *param_4;
    if (DAT_14c758498 <= uVar6 << 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar6 = (longlong)param_1 - lVar2;
    if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = (uint)(uVar6 >> 3);
  }
  *param_4 = uVar5;
  return;
}



// FUNCTION 14677fd2e FUN_14677fd2e body=262 status=ok
// SIG undefined FUN_14677fd2e(void)

ulonglong FUN_14677fd2e(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (ulonglong)
          ((uint)*(byte *)(param_1 + 0x1a) * 0x80000 + (uint)*(ushort *)(param_1 + 0x18) * 8) +
          DAT_14c80ad08;
  FUN_14677fe35(&local_58,param_1);
  uVar2 = local_58;
  FUN_14677fe35(&local_58,lVar3);
  uVar4 = local_58;
  if (uVar2 < local_58) {
    uVar4 = uVar2;
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_68 = param_2;
  FUN_14677e63d(&local_58,lVar3,uVar4,*(undefined4 *)(param_1 + 0x10));
  if (local_58 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_1467a2a08(param_1,&local_58,local_50);
  FUN_1467a2a08(lVar3,&local_58,local_50);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14677fe35 FUN_14677fe35 body=73 status=ok
// SIG undefined FUN_14677fe35(void)

undefined8 * FUN_14677fe35(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  
  do {
    uVar5 = *(ulonglong *)(*param_2 + 8);
    do {
      uVar4 = uVar5;
      uVar2 = *(undefined8 *)*param_2;
      uVar5 = *(ulonglong *)(*param_2 + 8);
    } while (*(ulonglong *)(*param_2 + 8) != uVar4);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) break;
    uVar5 = uVar4 | 1;
    LOCK();
    auVar1 = *param_2;
    auVar3._8_8_ = uVar4;
    auVar3._0_8_ = uVar2;
    if (auVar3 == auVar1) {
      *(undefined8 *)*param_2 = uVar2;
      *(ulonglong *)(*param_2 + 8) = uVar5;
    }
    UNLOCK();
  } while (auVar3 != auVar1);
  *param_1 = uVar2;
  param_1[1] = uVar5;
  return param_1;
}



// FUNCTION 14677fe7e FUN_14677fe7e body=156 status=ok
// SIG undefined FUN_14677fe7e(void)

undefined8 * FUN_14677fe7e(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)FUN_14678871b(0x20,"pas_bitfit_view",0);
  *puVar2 = 0;
  if (param_1 != 0) {
    uVar4 = param_1 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = uVar4 >> 3;
  }
  lVar3 = 8;
  do {
    *(char *)((longlong)puVar2 + lVar3) = (char)uVar4;
    uVar4 = uVar4 >> 8;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xb);
  *(undefined1 *)((longlong)puVar2 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = param_2;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 2));
  InitializeSRWLock((PSRWLOCK)(puVar2 + 3));
  return puVar2;
}



// FUNCTION 14677ff1a FUN_14677ff1a body=36 status=ok
// SIG undefined FUN_14677ff1a(void)

void FUN_14677ff1a(longlong param_1)

{
  FUN_14677e5af((ulonglong)
                ((uint)*(byte *)(param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 8) * 8) +
                DAT_14c80ad08,*(undefined4 *)(param_1 + 0xc),
                "become unprocessed on note_nonemptiness");
  return;
}



// FUNCTION 14677ff3e FUN_14677ff3e body=92 status=ok
// SIG undefined FUN_14677ff3e(void)

void FUN_14677ff3e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146782f7a();
  *(undefined8 *)(param_2 + 8) = uVar1;
  FUN_14677f16d((ulonglong)
                ((uint)*(byte *)(param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 8) * 8) +
                DAT_14c80ad08,param_1);
  FUN_14677e5f4((ulonglong)
                ((uint)*(byte *)(param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 8) * 8) +
                DAT_14c80ad08,*(undefined4 *)(param_1 + 0xc),"become empty on note_emptiness");
  return;
}



// FUNCTION 14677ff9a FUN_14677ff9a body=56 status=ok
// SIG undefined FUN_14677ff9a(void)

void FUN_14677ff9a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146782f7a();
  *(undefined8 *)(param_2 + 8) = uVar1;
  FUN_14677f16d((ulonglong)
                ((uint)*(byte *)(param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 8) * 8) +
                DAT_14c80ad08,param_1);
  return;
}



// FUNCTION 14677ffd2 FUN_14677ffd2 body=36 status=ok
// SIG undefined FUN_14677ffd2(void)

void FUN_14677ffd2(longlong param_1)

{
  FUN_14677e52c((ulonglong)
                ((uint)*(byte *)(param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 8) * 8) +
                DAT_14c80ad08,*(undefined4 *)(param_1 + 0xc),"become unprocessed on note_max_free");
  return;
}



// FUNCTION 14677fff6 FUN_14677fff6 body=132 status=ok
// SIG undefined FUN_14677fff6(void)

undefined8 FUN_14677fff6(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_3;
  if ((int)POPCOUNT(uVar1) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_3[1] < uVar1) {
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    if ((int)POPCOUNT(uVar3) == 1) {
      *param_3 = uVar3;
      local_28 = *param_3;
      local_20 = param_3[1];
      FUN_146780139(param_1);
      if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14678007b FUN_14678007b body=95 status=ok
// SIG undefined FUN_14678007b(void)

longlong * FUN_14678007b(longlong *param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 1;
  local_18 = 0;
  FUN_14677fff6();
  if ((char)param_1[1] == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 != 0) {
    if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467800db FUN_1467800db body=93 status=ok
// SIG undefined FUN_1467800db(void)

longlong * FUN_1467800db(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_14677fff6();
  if ((char)param_1[1] == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 != 0) {
    if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146780139 FUN_146780139 body=232 status=ok
// SIG undefined FUN_146780139(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_146780139(longlong param_1,longlong param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  BOOLEAN BVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_14678cca0(&DAT_14c758470);
  local_78 = &local_58;
  local_58 = 1;
  local_50 = 1;
  local_48 = FUN_146780400;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_14678cec1(param_1,&DAT_14c758470,param_2);
  uVar2 = DAT_14c8084e0;
  if ((*(char *)(param_1 + 8) == '\x01') &&
     (_DAT_14c8084d8 = param_2 + _DAT_14c8084d8, uVar2 = _DAT_14c8084d8,
     _DAT_14c8084d8 <= DAT_14c8084e0)) {
    uVar2 = DAT_14c8084e0;
  }
  DAT_14c8084e0 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146780222 FUN_146780222 body=162 status=ok
// SIG undefined FUN_146780222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146780222(longlong param_1,longlong param_2,int param_3)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 != 0) {
    FUN_14678cca0(&DAT_14c758470);
    local_58 = &local_50;
    local_50 = 1;
    local_48 = 1;
    local_40 = FUN_146780400;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_14678cf1f(&DAT_14c758470,param_1,param_1 + param_2,0);
    _DAT_14c8084d8 = _DAT_14c8084d8 - param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467802c5 FUN_1467802c5 body=107 status=ok
// SIG undefined FUN_1467802c5(void)

void FUN_1467802c5(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  char local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 1;
  local_18 = 0;
  FUN_14677fff6(&local_30,param_1,&local_20,param_2);
  if (local_28 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_30 != 0) {
    if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146780331 FUN_146780331 body=89 status=ok
// SIG undefined FUN_146780331(void)

void FUN_146780331(longlong param_1,longlong param_2,undefined4 param_3)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    FUN_146780222(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000146780381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    return;
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678038a FUN_14678038a body=69 status=ok
// SIG undefined FUN_14678038a(void)

undefined8 FUN_14678038a(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    uVar2 = FUN_1467802c5(param_1,param_3);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467803da FUN_1467803da body=15 status=ok
// SIG undefined FUN_1467803da(void)

void FUN_1467803da(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  code *pcVar1;
  
  if (param_4 == 0) {
    FUN_1467802c5(param_1,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467803e9 FUN_1467803e9 body=11 status=ok
// SIG undefined FUN_1467803e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467803e9(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    if (param_2 != 0) {
      FUN_14678cca0(&DAT_14c758470);
      puStack_58 = &uStack_50;
      uStack_50 = 1;
      uStack_48 = 1;
      pcStack_40 = FUN_146780400;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_14678cf1f(&DAT_14c758470,param_1,param_1 + param_2,0);
      _DAT_14c8084d8 = _DAT_14c8084d8 - param_2;
    }
    if ((uStack_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


