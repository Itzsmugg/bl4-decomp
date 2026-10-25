// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1485f2e8a FUN_1485f2e8a body=123 status=ok
// SIG undefined FUN_1485f2e8a(void)

void FUN_1485f2e8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afba0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f2f06 FUN_1485f2f06 body=21 status=ok
// SIG undefined FUN_1485f2f06(void)

undefined8 FUN_1485f2f06(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f2fe2 FUN_1485f2fe2 body=278 status=ok
// SIG undefined FUN_1485f2fe2(void)

ulonglong FUN_1485f2fe2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb51d78) {
    FUN_144b3d300(&DAT_14cb51d78);
    if (DAT_14cb51d78 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb51d70 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.DenoiserMode",1);
      _Init_thread_footer(&DAT_14cb51d78);
    }
  }
  if (DAT_14cb51d70 == (longlong *)0x0) {
    bVar7 = false;
    uVar6 = 0;
  }
  else {
    iVar3 = (**(code **)(*DAT_14cb51d70 + 0xb0))();
    bVar7 = iVar3 != 0;
    uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  iVar3 = *(int *)(DAT_14cb51d68 + 4);
  cVar2 = FUN_1447c1646();
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 8) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x188), plVar1 != (longlong *)0x0)) {
    pwVar4 = (wchar_t *)(**(code **)(*plVar1 + 8))();
    if (pwVar4 == L"FDLSSSceneViewFamilyUpscaler" ||
        pwVar4 == L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)") {
      uVar5 = CONCAT71(uVar6,bVar7 & iVar3 != 1);
      goto LAB_1485f3085;
    }
  }
  uVar5 = 0;
LAB_1485f3085:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1485f30f8 FUN_1485f30f8 body=37 status=ok
// SIG undefined FUN_1485f30f8(void)

wchar_t * FUN_1485f30f8(void)

{
  char cVar1;
  wchar_t *pwVar2;
  
  cVar1 = FUN_1447c1646();
  pwVar2 = L"FDLSSDenoiserWrapper(Inactive)";
  if (cVar1 != '\0') {
    pwVar2 = L"FDLSSDenoiserWrapper(Active)";
  }
  return pwVar2;
}



// FUNCTION 1485f311e FUN_1485f311e body=143 status=ok
// SIG undefined FUN_1485f311e(void)

void FUN_1485f311e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,uint param_7,longlong param_8)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1485f2fe2();
  if (cVar1 != '\0') {
    if (0 < (int)param_7) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_8 + lVar2) = *(undefined8 *)(param_6 + 0x10 + lVar2 * 2);
        lVar2 = lVar2 + 0x10;
      } while ((ulonglong)param_7 << 4 != lVar2);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001485f31aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
            (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



// FUNCTION 1485f31ae FUN_1485f31ae body=125 status=ok
// SIG undefined FUN_1485f31ae(void)

undefined8 *
FUN_1485f31ae(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  
  cVar1 = FUN_1485f2fe2(param_4);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    *param_2 = *param_7;
    param_2[1] = param_7[6];
  }
  return param_2;
}



// FUNCTION 1485f322c FUN_1485f322c body=462 status=ok
// SIG undefined FUN_1485f322c(void)

undefined8 *
FUN_1485f322c(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  longlong *plVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a0 [3];
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_1485f2fe2(param_4);
  if (cVar2 == '\0') {
    local_b0 = param_8;
    local_b8 = param_7;
    local_c0 = param_6;
    local_c8 = param_5;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    cVar2 = FUN_1447c1646();
    if (((cVar2 == '\0') || (*(longlong *)(param_4 + 8) == 0)) ||
       (plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x188), plVar1 == (longlong *)0x0))
    goto LAB_1485f3275;
    pwVar3 = (wchar_t *)(**(code **)(*plVar1 + 8))();
    if (((pwVar3 != L"FDLSSSceneViewFamilyUpscaler" &&
          pwVar3 != L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)") ||
        (*(longlong *)(param_4 + 0x3108) == 0 || *(int *)(DAT_14cb51d38 + 4) == 0)) ||
       ((*(int *)(param_4 + 0x3020) != 4 && (*(int *)(param_4 + 0x3020) != 2)))) goto LAB_1485f3275;
    local_84 = 2;
    local_82 = 0;
    local_80 = *(undefined8 *)(param_4 + 0x30f8);
    local_78 = *(undefined8 *)(param_4 + 0x3100);
    local_60 = 1;
    local_40 = 0;
    local_88 = 3;
    local_58 = *param_6;
    local_50 = param_6[0xb];
    local_48 = *param_2;
    local_83 = 1;
    local_c0 = (undefined8 *)(*(longlong *)(param_4 + 0x3108) + 0x1418);
    local_c8 = param_4 + 0x132e8;
    local_70 = local_80;
    local_68 = local_78;
    FUN_1401f4547(local_a0,param_3,param_4);
  }
  else {
    local_a0[0] = *param_7;
  }
  *param_2 = local_a0[0];
LAB_1485f3275:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f33fc FUN_1485f33fc body=462 status=ok
// SIG undefined FUN_1485f33fc(void)

undefined8 *
FUN_1485f33fc(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  longlong *plVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a0 [3];
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_1485f2fe2(param_4);
  if (cVar2 == '\0') {
    local_b0 = param_8;
    local_b8 = param_7;
    local_c0 = param_6;
    local_c8 = param_5;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    cVar2 = FUN_1447c1646();
    if (((cVar2 == '\0') || (*(longlong *)(param_4 + 8) == 0)) ||
       (plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x188), plVar1 == (longlong *)0x0))
    goto LAB_1485f3445;
    pwVar3 = (wchar_t *)(**(code **)(*plVar1 + 8))();
    if (((pwVar3 != L"FDLSSSceneViewFamilyUpscaler" &&
          pwVar3 != L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)") ||
        (*(longlong *)(param_4 + 0x3108) == 0 || *(int *)(DAT_14cb51d50 + 4) == 0)) ||
       ((*(int *)(param_4 + 0x3020) != 4 && (*(int *)(param_4 + 0x3020) != 2)))) goto LAB_1485f3445;
    local_84 = 2;
    local_82 = 0;
    local_80 = *(undefined8 *)(param_4 + 0x30f8);
    local_78 = *(undefined8 *)(param_4 + 0x3100);
    local_60 = 1;
    local_40 = 0;
    local_88 = 3;
    local_58 = *param_6;
    local_50 = param_6[0xb];
    local_48 = *param_2;
    local_83 = 1;
    local_c0 = (undefined8 *)(*(longlong *)(param_4 + 0x3108) + 0x1448);
    local_c8 = param_4 + 0x13318;
    local_70 = local_80;
    local_68 = local_78;
    FUN_1401f4547(local_a0,param_3,param_4);
  }
  else {
    local_a0[0] = *param_7;
  }
  *param_2 = local_a0[0];
LAB_1485f3445:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f35cc FUN_1485f35cc body=130 status=ok
// SIG undefined FUN_1485f35cc(void)

undefined8 *
FUN_1485f35cc(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1485f2fe2(param_4);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    *param_2 = *param_7;
  }
  return param_2;
}



// FUNCTION 1485f364e FUN_1485f364e body=50 status=ok
// SIG undefined FUN_1485f364e(void)

undefined8 FUN_1485f364e(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  return param_2;
}



// FUNCTION 1485f3680 FUN_1485f3680 body=50 status=ok
// SIG undefined FUN_1485f3680(void)

undefined8 FUN_1485f3680(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
  return param_2;
}



// FUNCTION 1485f36b2 FUN_1485f36b2 body=50 status=ok
// SIG undefined FUN_1485f36b2(void)

undefined8 FUN_1485f36b2(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  return param_2;
}



// FUNCTION 1485f36e4 FUN_1485f36e4 body=138 status=ok
// SIG undefined FUN_1485f36e4(void)

undefined8 *
FUN_1485f36e4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1485f2fe2(param_4);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    param_2[1] = param_7[1];
    *param_2 = *param_7;
  }
  return param_2;
}



// FUNCTION 1485f3780 FUN_1485f3780 body=29 status=ok
// SIG undefined FUN_1485f3780(void)

undefined8 FUN_1485f3780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f379e FUN_1485f379e body=29 status=ok
// SIG undefined FUN_1485f379e(void)

undefined8 FUN_1485f379e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f37c0 FUN_1485f37c0 body=38 status=ok
// SIG undefined FUN_1485f37c0(void)

undefined8 FUN_1485f37c0(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f37e6 FUN_1485f37e6 body=38 status=ok
// SIG undefined FUN_1485f37e6(void)

undefined8 FUN_1485f37e6(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f3816 FUN_1485f3816 body=66 status=ok
// SIG undefined FUN_1485f3816(void)

undefined1 FUN_1485f3816(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14cb51ce0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined1 *)(lVar1 + uVar3);
}



// FUNCTION 1485f3858 FUN_1485f3858 body=31 status=ok
// SIG undefined FUN_1485f3858(void)

undefined8 FUN_1485f3858(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f3894 FUN_1485f3894 body=93 status=ok
// SIG undefined FUN_1485f3894(void)

void FUN_1485f3894(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afbee60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f38f2 FUN_1485f38f2 body=123 status=ok
// SIG undefined FUN_1485f38f2(void)

void FUN_1485f38f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afbee60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f396e FUN_1485f396e body=21 status=ok
// SIG undefined FUN_1485f396e(void)

undefined8 FUN_1485f396e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f3984 FUN_1485f3984 body=151 status=ok
// SIG undefined FUN_1485f3984(void)

void FUN_1485f3984(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb51ee8;
  if (param_1 <= (int)DAT_14cb51ee8) {
    if (DAT_14cb51eec == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb51ee8) {
        uVar2 = DAT_14cb51ee8;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb51ee8 * 3) >> 3) + (longlong)(int)DAT_14cb51ee8 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x2c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c)) {
      uVar5 = uVar4 / 0x2c & 0xffffffff;
    }
    DAT_14cb51eec = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb51ee0,param_1,uVar5,0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485f3a1c FUN_1485f3a1c body=138 status=ok
// SIG undefined FUN_1485f3a1c(void)

code * FUN_1485f3a1c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorOutput";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f3aa6;
}



// FUNCTION 1485f3aa6 FUN_1485f3aa6 body=138 status=ok
// SIG undefined FUN_1485f3aa6(void)

code * FUN_1485f3aa6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Roughness";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f3b30;
}



// FUNCTION 1485f3b30 FUN_1485f3b30 body=138 status=ok
// SIG undefined FUN_1485f3b30(void)

code * FUN_1485f3b30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Normal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a8374;
}



// FUNCTION 1485f3bba FUN_1485f3bba body=138 status=ok
// SIG undefined FUN_1485f3bba(void)

code * FUN_1485f3bba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiffuseAlbedo";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f3c44;
}



// FUNCTION 1485f3c44 FUN_1485f3c44 body=138 status=ok
// SIG undefined FUN_1485f3c44(void)

code * FUN_1485f3c44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BiasCurrentColorInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef3a48;
}



// FUNCTION 1485f3cce FUN_1485f3cce body=132 status=ok
// SIG undefined FUN_1485f3cce(void)

undefined1 * FUN_1485f3cce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485f3d52;
}



// FUNCTION 1485f3d5a FUN_1485f3d5a body=150 status=ok
// SIG undefined FUN_1485f3d5a(void)

void FUN_1485f3d5a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c07e3e(local_14 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f3df6 FUN_1485f3df6 body=150 status=ok
// SIG undefined FUN_1485f3df6(void)

void FUN_1485f3df6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c07e86(local_14 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f3e92 FUN_1485f3e92 body=150 status=ok
// SIG undefined FUN_1485f3e92(void)

void FUN_1485f3e92(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c08018(local_14 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f3f2a FUN_1485f3f2a body=37 status=ok
// SIG undefined FUN_1485f3f2a(void)

void FUN_1485f3f2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c0842e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f3f50 FUN_1485f3f50 body=37 status=ok
// SIG undefined FUN_1485f3f50(void)

void FUN_1485f3f50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c088be();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f3f82 FUN_1485f3f82 body=859 status=ok
// SIG undefined FUN_1485f3f82(void)

void FUN_1485f3f82(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_61;
  undefined4 local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_61 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = *(undefined4 **)(param_2 + 0x38);
  local_6c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_70 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_98 = &local_6c;
  if (puVar4 != (undefined4 *)0x0) {
    local_98 = puVar4;
  }
  local_a0 = &local_68;
  if (puVar7 != (undefined4 *)0x0) {
    local_a0 = puVar7;
  }
  local_a8 = &local_61;
  if (puVar6 != (undefined1 *)0x0) {
    local_a8 = puVar6;
  }
  puVar7 = &local_60;
  if (puVar3 != (undefined4 *)0x0) {
    puVar7 = puVar3;
  }
  puVar6 = &local_59;
  if (puVar2 != (undefined1 *)0x0) {
    puVar6 = puVar2;
  }
  local_90 = &local_70;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_90 = *(undefined4 **)(param_2 + 0x38);
  }
  lVar5 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(longlong *)(param_2 + 0x20) = lVar5;
  local_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  FUN_143c08a42(CONCAT71((int7)((ulonglong)lVar5 >> 8),local_41),&local_88,puVar6,puVar7);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f42de FUN_1485f42de body=269 status=ok
// SIG undefined FUN_1485f42de(void)

void FUN_1485f42de(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_24;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c09166(puVar1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f43ec FUN_1485f43ec body=39 status=ok
// SIG undefined FUN_1485f43ec(void)

void FUN_1485f43ec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c091d2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f4414 FUN_1485f4414 body=139 status=ok
// SIG undefined FUN_1485f4414(void)

void FUN_1485f4414(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c09482(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f44a8 FUN_1485f44a8 body=37 status=ok
// SIG undefined FUN_1485f44a8(void)

void FUN_1485f44a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1415c1b86();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f44d4 FUN_1485f44d4 body=150 status=ok
// SIG undefined FUN_1485f44d4(void)

void FUN_1485f44d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1415c1e8e(local_19);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f4570 FUN_1485f4570 body=37 status=ok
// SIG undefined FUN_1485f4570(void)

void FUN_1485f4570(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c0958c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f45a2 FUN_1485f45a2 body=37 status=ok
// SIG undefined FUN_1485f45a2(void)

void FUN_1485f45a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144b1ce18();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f45c8 FUN_1485f45c8 body=37 status=ok
// SIG undefined FUN_1485f45c8(void)

void FUN_1485f45c8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c096be();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f45ee FUN_1485f45ee body=214 status=ok
// SIG undefined FUN_1485f45ee(void)

void FUN_1485f45ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415c1c42();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f46c6 FUN_1485f46c6 body=148 status=ok
// SIG undefined FUN_1485f46c6(void)

void FUN_1485f46c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c09970(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f475e FUN_1485f475e body=124 status=ok
// SIG undefined FUN_1485f475e(void)

void FUN_1485f475e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485f47dc FUN_1485f47dc body=36 status=ok
// SIG undefined FUN_1485f47dc(void)

undefined8 FUN_1485f47dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f481c FUN_1485f481c body=93 status=ok
// SIG undefined FUN_1485f481c(void)

void FUN_1485f481c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc1730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f487a FUN_1485f487a body=126 status=ok
// SIG undefined FUN_1485f487a(void)

void FUN_1485f487a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc1730;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f48e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f48f8 FUN_1485f48f8 body=21 status=ok
// SIG undefined FUN_1485f48f8(void)

undefined8 FUN_1485f48f8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f4910 FUN_1485f4910 body=42 status=ok
// SIG undefined FUN_1485f4910(void)

void FUN_1485f4910(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f4972 FUN_1485f4972 body=96 status=ok
// SIG undefined FUN_1485f4972(void)

undefined8 FUN_1485f4972(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e684c6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb524f8,1);
  return uVar3;
}



// FUNCTION 1485f49d2 FUN_1485f49d2 body=52 status=ok
// SIG undefined FUN_1485f49d2(void)

void FUN_1485f49d2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f4a06 FUN_1485f4a06 body=177 status=ok
// SIG undefined FUN_1485f4a06(void)

void FUN_1485f4a06(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e684c6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb524f8,param_4);
  local_78 = &DAT_14cb524f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1485f4ecc(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f4ab8 FUN_1485f4ab8 body=42 status=ok
// SIG undefined FUN_1485f4ab8(void)

void FUN_1485f4ab8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f4b1a FUN_1485f4b1a body=96 status=ok
// SIG undefined FUN_1485f4b1a(void)

undefined8 FUN_1485f4b1a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1f926();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb52580,1);
  return uVar3;
}



// FUNCTION 1485f4b7a FUN_1485f4b7a body=52 status=ok
// SIG undefined FUN_1485f4b7a(void)

void FUN_1485f4b7a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f4bae FUN_1485f4bae body=177 status=ok
// SIG undefined FUN_1485f4bae(void)

void FUN_1485f4bae(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f1f926();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb52580,param_4);
  local_78 = &DAT_14cb52580;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1485f528c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f4c60 FUN_1485f4c60 body=138 status=ok
// SIG undefined FUN_1485f4c60(void)

code * FUN_1485f4c60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVelocityCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a8caa;
}



// FUNCTION 1485f4cea FUN_1485f4cea body=138 status=ok
// SIG undefined FUN_1485f4cea(void)

code * FUN_1485f4cea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1fb94;
}



// FUNCTION 1485f4d78 FUN_1485f4d78 body=36 status=ok
// SIG undefined FUN_1485f4d78(void)

undefined8 FUN_1485f4d78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f4db8 FUN_1485f4db8 body=93 status=ok
// SIG undefined FUN_1485f4db8(void)

void FUN_1485f4db8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc1af0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f4e16 FUN_1485f4e16 body=126 status=ok
// SIG undefined FUN_1485f4e16(void)

void FUN_1485f4e16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc1af0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f4e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f4e94 FUN_1485f4e94 body=21 status=ok
// SIG undefined FUN_1485f4e94(void)

undefined8 FUN_1485f4e94(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f4eaa FUN_1485f4eaa body=34 status=ok
// SIG undefined FUN_1485f4eaa(void)

undefined8 FUN_1485f4eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1485f4ecc FUN_1485f4ecc body=344 status=ok
// SIG undefined FUN_1485f4ecc(void)

void FUN_1485f4ecc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cb52540;
  if (DAT_14cb52540 != 0) {
    LOCK();
    *(int *)(DAT_14cb52540 + 8) = *(int *)(DAT_14cb52540 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb524f8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14afc1bb0;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f5026 FUN_1485f5026 body=43 status=ok
// SIG undefined FUN_1485f5026(void)

undefined8 FUN_1485f5026(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1485f5051 FUN_1485f5051 body=163 status=ok
// SIG undefined FUN_1485f5051(void)

void FUN_1485f5051(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143c0adce();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143c0aeb6(param_1,param_2);
  return;
}



// FUNCTION 1485f50f4 FUN_1485f50f4 body=374 status=ok
// SIG undefined FUN_1485f50f4(void)

void FUN_1485f50f4(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485f526a FUN_1485f526a body=34 status=ok
// SIG undefined FUN_1485f526a(void)

undefined8 FUN_1485f526a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1485f528c FUN_1485f528c body=344 status=ok
// SIG undefined FUN_1485f528c(void)

void FUN_1485f528c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cb525c8;
  if (DAT_14cb525c8 != 0) {
    LOCK();
    *(int *)(DAT_14cb525c8 + 8) = *(int *)(DAT_14cb525c8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb52580;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14afc1bd0;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f53e6 FUN_1485f53e6 body=43 status=ok
// SIG undefined FUN_1485f53e6(void)

undefined8 FUN_1485f53e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1485f5411 FUN_1485f5411 body=163 status=ok
// SIG undefined FUN_1485f5411(void)

void FUN_1485f5411(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143c0b0ea();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143c0b1d2(param_1,param_2);
  return;
}



// FUNCTION 1485f54b4 FUN_1485f54b4 body=374 status=ok
// SIG undefined FUN_1485f54b4(void)

void FUN_1485f54b4(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485f564f FUN_1485f564f body=10 status=ok
// SIG undefined FUN_1485f564f(void)

void FUN_1485f564f(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001485f5656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb52738)();
  return;
}



// FUNCTION 1485f565e FUN_1485f565e body=944 status=ok
// SIG undefined FUN_1485f565e(void)

void FUN_1485f565e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 auStack_2d4 [8];
  undefined8 auStack_294 [8];
  undefined1 auStack_254 [4];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [32];
  undefined8 local_228 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_248;
  auStack_250 = (undefined1  [8])0x1485f568d;
  FUN_1485f5a10(local_1e8);
  local_29 = *(undefined1 *)(param_3 + 2);
  local_88 = *(undefined8 *)(param_3 + 3);
  local_2c = *(undefined1 *)((longlong)param_3 + 9);
  local_80 = *(undefined8 *)(param_3 + 5);
  local_27 = *(undefined1 *)(param_3 + 7);
  local_2b = 1;
  local_28 = *(undefined1 *)((longlong)param_3 + 0x1d);
  local_218 = 0x7f7fffff7f7fffff;
  uStack_210 = 0x7f7fffff7f7fffff;
  local_228[0] = 0x7f7fffff7f7fffff;
  local_228[1] = 0x7f7fffff7f7fffff;
  local_1f8 = 0x7f7fffff7f7fffff;
  uStack_1f0 = 0x7f7fffff7f7fffff;
  local_208 = 0x7f7fffff7f7fffff;
  uStack_200 = 0x7f7fffff7f7fffff;
  lVar2 = 0x2c;
  do {
    puVar1 = (undefined8 *)((longlong)param_3 + lVar2 + -0xc);
    uVar3 = puVar1[1];
    *(undefined8 *)(auStack_254 + lVar2) = *puVar1;
    *(undefined8 *)(auStack_248 + lVar2 + -4) = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x6c);
  local_198 = local_1f8;
  uStack_190 = uStack_1f0;
  local_1a8 = local_208;
  uStack_1a0 = uStack_200;
  local_1b8 = local_218;
  uStack_1b0 = uStack_210;
  local_1c8 = local_228[0];
  uStack_1c0 = local_228[1];
  local_218 = 0x7f7fffff7f7fffff;
  uStack_210 = 0x7f7fffff7f7fffff;
  local_228[0] = 0x7f7fffff7f7fffff;
  local_228[1] = 0x7f7fffff7f7fffff;
  local_1f8 = 0x7f7fffff7f7fffff;
  uStack_1f0 = 0x7f7fffff7f7fffff;
  local_208 = 0x7f7fffff7f7fffff;
  uStack_200 = 0x7f7fffff7f7fffff;
  lVar2 = 0x6c;
  do {
    puVar1 = (undefined8 *)((longlong)param_3 + lVar2 + -0xc);
    uVar3 = puVar1[1];
    *(undefined8 *)((longlong)auStack_294 + lVar2) = *puVar1;
    *(undefined8 *)((longlong)auStack_294 + lVar2 + 8) = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xac);
  local_158 = local_1f8;
  uStack_150 = uStack_1f0;
  local_168 = local_208;
  uStack_160 = uStack_200;
  local_178 = local_218;
  uStack_170 = uStack_210;
  local_188 = local_228[0];
  uStack_180 = local_228[1];
  local_218 = 0x7f7fffff7f7fffff;
  uStack_210 = 0x7f7fffff7f7fffff;
  local_228[0] = 0x7f7fffff7f7fffff;
  local_228[1] = 0x7f7fffff7f7fffff;
  local_1f8 = 0x7f7fffff7f7fffff;
  uStack_1f0 = 0x7f7fffff7f7fffff;
  local_208 = 0x7f7fffff7f7fffff;
  uStack_200 = 0x7f7fffff7f7fffff;
  lVar2 = 0xac;
  do {
    puVar1 = (undefined8 *)((longlong)param_3 + lVar2 + -0xc);
    uVar3 = puVar1[1];
    *(undefined8 *)((longlong)auStack_2d4 + lVar2) = *puVar1;
    *(undefined8 *)((longlong)auStack_2d4 + lVar2 + 8) = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xec);
  local_118 = local_1f8;
  uStack_110 = uStack_1f0;
  local_128 = local_208;
  uStack_120 = uStack_200;
  local_138 = local_218;
  uStack_130 = uStack_210;
  local_148 = local_228[0];
  uStack_140 = local_228[1];
  local_218 = 0x7f7fffff7f7fffff;
  uStack_210 = 0x7f7fffff7f7fffff;
  local_228[0] = 0x7f7fffff7f7fffff;
  local_228[1] = 0x7f7fffff7f7fffff;
  local_1f8 = 0x7f7fffff7f7fffff;
  uStack_1f0 = 0x7f7fffff7f7fffff;
  local_208 = 0x7f7fffff7f7fffff;
  uStack_200 = 0x7f7fffff7f7fffff;
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)((longlong)param_3 + lVar2 + 0xe0);
    uVar3 = puVar1[1];
    *(undefined8 *)((longlong)local_228 + lVar2) = *puVar1;
    *(undefined8 *)((longlong)local_228 + lVar2 + 8) = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  local_d8 = local_1f8;
  uStack_d0 = uStack_1f0;
  local_e8 = local_208;
  uStack_e0 = uStack_200;
  local_f8 = local_218;
  uStack_f0 = uStack_210;
  local_108 = local_228[0];
  uStack_100 = local_228[1];
  local_218 = 0x7f7fffff7f7fffff;
  uStack_210 = 0x7f7fffff7f7fffff;
  local_228[0] = 0x7f7fffff7f7fffff;
  local_228[1] = 0x7f7fffff7f7fffff;
  local_1f8 = 0x7f7fffff7f7fffff;
  uStack_1f0 = 0x7f7fffff7f7fffff;
  local_208 = 0x7f7fffff7f7fffff;
  uStack_200 = 0x7f7fffff7f7fffff;
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)((longlong)param_3 + lVar2 + 0x120);
    uVar3 = puVar1[1];
    *(undefined8 *)((longlong)local_228 + lVar2) = *puVar1;
    *(undefined8 *)((longlong)local_228 + lVar2 + 8) = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  local_98 = (undefined4)local_1f8;
  uStack_94 = local_1f8._4_4_;
  uStack_90 = (undefined4)uStack_1f0;
  uStack_8c = uStack_1f0._4_4_;
  local_a8 = (undefined4)local_208;
  uStack_a4 = local_208._4_4_;
  uStack_a0 = (undefined4)uStack_200;
  uStack_9c = uStack_200._4_4_;
  local_b8 = (undefined4)local_218;
  uStack_b4 = local_218._4_4_;
  uStack_b0 = (undefined4)uStack_210;
  uStack_ac = uStack_210._4_4_;
  local_c8 = local_228[0];
  uStack_c0 = local_228[1];
  local_70 = *(undefined8 *)(param_3 + 0x58);
  local_68 = param_3[0x5a];
  local_64 = *(undefined8 *)(param_3 + 0x5b);
  local_5c = param_3[0x5d];
  local_58 = *(undefined8 *)(param_3 + 0x5e);
  local_50 = param_3[0x60];
  local_4c = *(undefined8 *)(param_3 + 0x61);
  local_44 = param_3[99];
  local_40 = param_3[100];
  local_3c = param_3[0x65];
  local_38 = (float)param_3[0x66] * 0.017453292;
  local_34 = param_3[0x67];
  local_78 = *(undefined8 *)(param_3 + 0x68);
  local_228[0] = 0;
  local_228[1] = 0x4fc89b3c171b6435;
  local_218 = 0xa4aa6925e5fb9499;
  uStack_210 = 1;
  local_208 = CONCAT44(local_208._4_4_,*param_3);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    auStack_250 = (undefined1  [8])0x1485f59d3;
    uVar3 = FUN_143c0b482(*(longlong *)(param_1 + 0x18),param_3[1]);
  }
  auStack_250 = (undefined1  [8])0x1485f59e6;
  (*DAT_14cb52758)(local_1e8,uVar3,local_228);
  if ((local_20 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  auStack_250 = (undefined1  [8])&UNK_1485f5a0a;
  FUN_144d8e3a0();
}



// FUNCTION 1485f5a10 FUN_1485f5a10 body=293 status=ok
// SIG undefined FUN_1485f5a10(void)

void FUN_1485f5a10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x4bad4e4adcd35ad7;
  *(undefined1 *)(param_1 + 2) = 0xa9;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0xe0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0xc4;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0x9e;
  *(undefined1 *)((longlong)param_1 + 0x15) = 0xb2;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0x3a;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0xfe;
  param_1[3] = 2;
  param_1[6] = 0x7f7fffff7f7fffff;
  param_1[7] = 0x7f7fffff7f7fffff;
  param_1[4] = 0x7f7fffff7f7fffff;
  param_1[5] = 0x7f7fffff7f7fffff;
  param_1[10] = 0x7f7fffff7f7fffff;
  param_1[0xb] = 0x7f7fffff7f7fffff;
  param_1[8] = 0x7f7fffff7f7fffff;
  param_1[9] = 0x7f7fffff7f7fffff;
  param_1[0xe] = 0x7f7fffff7f7fffff;
  param_1[0xf] = 0x7f7fffff7f7fffff;
  param_1[0xc] = 0x7f7fffff7f7fffff;
  param_1[0xd] = 0x7f7fffff7f7fffff;
  param_1[0x12] = 0x7f7fffff7f7fffff;
  param_1[0x13] = 0x7f7fffff7f7fffff;
  param_1[0x10] = 0x7f7fffff7f7fffff;
  param_1[0x11] = 0x7f7fffff7f7fffff;
  param_1[0x16] = 0x7f7fffff7f7fffff;
  param_1[0x17] = 0x7f7fffff7f7fffff;
  param_1[0x14] = 0x7f7fffff7f7fffff;
  param_1[0x15] = 0x7f7fffff7f7fffff;
  param_1[0x1a] = 0x7f7fffff7f7fffff;
  param_1[0x1b] = 0x7f7fffff7f7fffff;
  param_1[0x18] = 0x7f7fffff7f7fffff;
  param_1[0x19] = 0x7f7fffff7f7fffff;
  param_1[0x1e] = 0x7f7fffff7f7fffff;
  param_1[0x1f] = 0x7f7fffff7f7fffff;
  param_1[0x1c] = 0x7f7fffff7f7fffff;
  param_1[0x1d] = 0x7f7fffff7f7fffff;
  param_1[0x22] = 0x7f7fffff7f7fffff;
  param_1[0x23] = 0x7f7fffff7f7fffff;
  param_1[0x20] = 0x7f7fffff7f7fffff;
  param_1[0x21] = 0x7f7fffff7f7fffff;
  param_1[0x26] = 0x7f7fffff7f7fffff;
  param_1[0x27] = 0x7f7fffff7f7fffff;
  param_1[0x24] = 0x7f7fffff7f7fffff;
  param_1[0x25] = 0x7f7fffff7f7fffff;
  param_1[0x2a] = 0x7f7fffff7f7fffff;
  param_1[0x2b] = 0x7f7fffff7f7fffff;
  param_1[0x28] = 0x7f7fffff7f7fffff;
  param_1[0x29] = 0x7f7fffff7f7fffff;
  param_1[0x2c] = 0x7f7fffff7f7fffff;
  param_1[0x2d] = 0x7f7fffff7f7fffff;
  param_1[0x2e] = 0x7f7fffff7f7fffff;
  param_1[0x2f] = 0x7f7fffff7f7fffff;
  param_1[0x30] = 0x7f7fffff7f7fffff;
  param_1[0x31] = 0x7f7fffff7f7fffff;
  param_1[0x32] = 0x7f7fffff7f7fffff;
  param_1[0x33] = 0x7f7fffff7f7fffff;
  param_1[0x34] = 0x7f7fffff7f7fffff;
  param_1[0x35] = 0x7f7fffff7f7fffff;
  param_1[0x36] = 0x7f7fffff7f7fffff;
  param_1[0x37] = 0x20202027f7fffff;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x42200000;
  return;
}



// FUNCTION 1485f5b36 FUN_1485f5b36 body=203 status=ok
// SIG undefined FUN_1485f5b36(void)

void FUN_1485f5b36(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 **local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 1;
  local_60 = param_3;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_5,&local_60);
  local_78 = (**(code **)(*param_1 + 0x28))(param_1,param_2,*param_3);
  local_60 = (undefined8 *)0x0;
  local_58 = 0x171b6435;
  uStack_54 = 0x4fc89b3c;
  uStack_50 = 0xe5fb9499;
  uStack_4c = 0xa4aa6925;
  local_48 = 1;
  local_40 = param_5;
  local_68 = &local_60;
  (*DAT_14cb52720)(5,param_4,&local_68,1);
  (**(code **)(*param_1 + 0x30))(param_1,param_2,*param_3);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f5c02 FUN_1485f5c02 body=7 status=ok
// SIG undefined FUN_1485f5c02(void)

undefined1 FUN_1485f5c02(void)

{
  return DAT_14c763048;
}



// FUNCTION 1485f5c1c FUN_1485f5c1c body=31 status=ok
// SIG undefined FUN_1485f5c1c(void)

undefined8 FUN_1485f5c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f5c58 FUN_1485f5c58 body=93 status=ok
// SIG undefined FUN_1485f5c58(void)

void FUN_1485f5c58(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc4470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f5cb6 FUN_1485f5cb6 body=126 status=ok
// SIG undefined FUN_1485f5cb6(void)

void FUN_1485f5cb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc4470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f5d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f5d34 FUN_1485f5d34 body=21 status=ok
// SIG undefined FUN_1485f5d34(void)

undefined8 FUN_1485f5d34(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f5d4a FUN_1485f5d4a body=56 status=ok
// SIG undefined FUN_1485f5d4a(void)

undefined8 * FUN_1485f5d4a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x98,0x10);
  FUN_143c0eca8(uVar1,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1485f5d82 FUN_1485f5d82 body=38 status=ok
// SIG undefined FUN_1485f5d82(void)

undefined8 FUN_1485f5d82(undefined8 param_1,int param_2)

{
  FUN_143c0ef8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f5da8 FUN_1485f5da8 body=521 status=ok
// SIG undefined FUN_1485f5da8(void)

void FUN_1485f5da8(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x518))();
  if ((longlong)(int)param_4[1] != 0) {
    plVar5 = (longlong *)*param_4;
    plVar4 = plVar5 + (longlong)(int)param_4[1] * 6;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      plVar1 = (longlong *)*plVar5;
      if ((plVar1 != (longlong *)0x0) &&
         ((*(uint *)(plVar1 + 1) & 0x3fffffff) != 0 &&
          ((byte)(*(uint *)(plVar1 + 1) >> 0x1e) & 1) == 0)) {
        uStack_c0 = (**(code **)(*plVar1 + 0x20))();
      }
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_128 = 0;
      local_120 = 0x4c6a5aad;
      local_11c = 0xb445;
      local_11a = 0x496c;
      local_118 = 0x53e65b84f31aff87;
      local_110 = 1;
      uVar2 = (int)plVar5[3] - 1;
      local_100 = 0;
      if (uVar2 < 6) {
        local_100 = *(undefined4 *)(&DAT_14afc4818 + (ulonglong)uVar2 * 4);
      }
      local_fc = 0;
      local_f4 = (int)plVar5[1];
      local_f8 = *(int *)((longlong)plVar5 + 0xc);
      local_f0 = (int)plVar5[2] - local_f4;
      local_ec = *(int *)((longlong)plVar5 + 0x14) - local_f8;
      local_150 = 0;
      local_148 = 0x4fc89b3c171b6435;
      uStack_140 = 0xa4aa6925e5fb9499;
      local_138 = 1;
      local_130 = param_3;
      local_108 = &local_e8;
      FUN_1485f564f(&local_150,&local_128,1,uVar3);
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar4);
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f5fe8 FUN_1485f5fe8 body=232 status=ok
// SIG undefined FUN_1485f5fe8(void)

undefined4
FUN_1485f5fe8(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  longlong lVar3;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_145d16106(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    lVar3 = *param_2;
  }
  else {
    local_50 = param_2;
    FUN_145d160fe(&local_50);
    lVar3 = *local_50;
    param_2 = local_50;
  }
  local_58 = param_8;
  local_60 = param_7;
  local_68 = param_6;
  uVar2 = (**(code **)(lVar3 + 0x78))(param_2,param_3,param_4,param_5);
  FUN_1415336de(*(undefined8 *)(param_1 + 8),*param_8);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f60d2 FUN_1485f60d2 body=157 status=ok
// SIG undefined FUN_1485f60d2(void)

undefined4
FUN_1485f60d2(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_145d16106(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    lVar3 = *param_2;
  }
  else {
    local_40 = param_2;
    FUN_145d160fe(&local_40);
    lVar3 = *local_40;
    param_2 = local_40;
  }
  uVar2 = (**(code **)(lVar3 + 0x50))(param_2,param_3,param_4,param_5);
  FUN_1415336de(*(undefined8 *)(param_1 + 8),*param_5);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f6178 FUN_1485f6178 body=29 status=ok
// SIG undefined FUN_1485f6178(void)

undefined8 FUN_1485f6178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f6196 FUN_1485f6196 body=34 status=ok
// SIG undefined FUN_1485f6196(void)

void FUN_1485f6196(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14afc47d0;
  return;
}



// FUNCTION 1485f61b8 FUN_1485f61b8 body=31 status=ok
// SIG undefined FUN_1485f61b8(void)

undefined8 FUN_1485f61b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f61f4 FUN_1485f61f4 body=93 status=ok
// SIG undefined FUN_1485f61f4(void)

void FUN_1485f61f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc4760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f6252 FUN_1485f6252 body=123 status=ok
// SIG undefined FUN_1485f6252(void)

void FUN_1485f6252(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc4760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f62da FUN_1485f62da body=21 status=ok
// SIG undefined FUN_1485f62da(void)

undefined8 FUN_1485f62da(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f62f0 FUN_1485f62f0 body=29 status=ok
// SIG undefined FUN_1485f62f0(void)

undefined8 FUN_1485f62f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f6314 FUN_1485f6314 body=56 status=ok
// SIG undefined FUN_1485f6314(void)

void FUN_1485f6314(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar2 = (**(code **)(*plVar1 + 0x570))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001485f6349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x538))(plVar1,param_2,uVar2,*(code **)(*plVar1 + 0x538));
  return;
}



// FUNCTION 1485f634c FUN_1485f634c body=85 status=ok
// SIG undefined FUN_1485f634c(void)

void FUN_1485f634c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x570))
                    (*(longlong **)(param_1 + 0x48),param_3);
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar3 = (**(code **)(*plVar1 + 0x538))(plVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001485f639e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x5a8))(plVar1,param_2,uVar2,uVar3);
  return;
}



// FUNCTION 1485f63ca FUN_1485f63ca body=157 status=ok
// SIG undefined FUN_1485f63ca(void)

undefined4
FUN_1485f63ca(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_145d16106(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    lVar3 = *param_2;
  }
  else {
    local_40 = param_2;
    FUN_145d160fe(&local_40);
    lVar3 = *local_40;
    param_2 = local_40;
  }
  uVar2 = (**(code **)(lVar3 + 0x50))(param_2,param_3,param_4,param_5);
  FUN_1415336de(*(undefined8 *)(param_1 + 8),*param_5);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f6468 FUN_1485f6468 body=110 status=ok
// SIG undefined FUN_1485f6468(void)

void FUN_1485f6468(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (param_2 <= (int)uVar1) {
    iVar5 = 7;
    if (7 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 0x7c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x7c) = iVar5;
    FUN_1485f64d8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1485f64d8 FUN_1485f64d8 body=132 status=ok
// SIG undefined FUN_1485f64d8(void)

void FUN_1485f64d8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,0x10);
  return;
}



// FUNCTION 1485f655c FUN_1485f655c body=132 status=ok
// SIG undefined FUN_1485f655c(void)

void FUN_1485f655c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x318);
  if (param_2 <= (int)uVar1) {
    iVar6 = 7;
    if (7 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 0x31c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x70,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 4;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x31c) = iVar6;
    FUN_1485f65e2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1485f65e2 FUN_1485f65e2 body=141 status=ok
// SIG undefined FUN_1485f65e2(void)

void FUN_1485f65e2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x310);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x310,0,param_3,0x70);
    memmove(*(void **)((longlong)param_1 + 0x310),param_1,(longlong)param_2 * 0x70);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x310,param_2,param_3,0x70);
  return;
}



// FUNCTION 1485f6670 FUN_1485f6670 body=119 status=ok
// SIG undefined FUN_1485f6670(void)

void FUN_1485f6670(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 7;
    if (7 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 0x1cc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 6,0);
      iVar2 = (int)(uVar3 >> 6);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1cc) = iVar5;
    FUN_1485f66e8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1485f66e8 FUN_1485f66e8 body=141 status=ok
// SIG undefined FUN_1485f66e8(void)

void FUN_1485f66e8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c0);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c0,0,param_3,0x40);
    memmove(*(void **)((longlong)param_1 + 0x1c0),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c0,param_2,param_3,0x40);
  return;
}



// FUNCTION 1485f6776 FUN_1485f6776 body=31 status=ok
// SIG undefined FUN_1485f6776(void)

undefined8 FUN_1485f6776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f67b2 FUN_1485f67b2 body=93 status=ok
// SIG undefined FUN_1485f67b2(void)

void FUN_1485f67b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc4980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f6810 FUN_1485f6810 body=123 status=ok
// SIG undefined FUN_1485f6810(void)

void FUN_1485f6810(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc4980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f688c FUN_1485f688c body=21 status=ok
// SIG undefined FUN_1485f688c(void)

undefined8 FUN_1485f688c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f68c1 FUN_1485f68c1 body=21 status=ok
// SIG undefined FUN_1485f68c1(void)

void FUN_1485f68c1(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = DAT_14cb529f4;
  *param_2 = DAT_14cb529f8;
  return;
}



// FUNCTION 1485f690a FUN_1485f690a body=179 status=ok
// SIG undefined FUN_1485f690a(void)

void FUN_1485f690a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1485f69be();
  local_48 = 0;
  uStack_40 = 0;
  FUN_1407329d4(param_3,1,&local_48);
  lVar1 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) != 0) {
        FUN_1485f69be(param_1,param_2,*(longlong *)(lVar1 + lVar2),param_4);
      }
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485f69be FUN_1485f69be body=282 status=ok
// SIG undefined FUN_1485f69be(void)

void FUN_1485f69be(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar1 = FUN_144a3a302();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_3 + 0x5a8) != 0)) {
      FUN_140870e92(param_4,param_3);
      lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x5a8) + 0x218);
      local_48 = lVar1;
      if ((lVar1 != 0) && ((~*(uint *)(lVar1 + 0x158) & 0x7fffffff) != 0)) {
        FUN_140b3c4ca(param_3,1);
        FUN_141367278(param_3,1);
        local_4c = *(undefined4 *)(lVar1 + 0x158);
        local_38 = &local_4c;
        local_40 = &local_48;
        FUN_147354a4e(param_1 + (param_2 % 3) * 0x1e0 + 0x108,local_2c,&local_40,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f6ada FUN_1485f6ada body=436 status=ok
// SIG undefined FUN_1485f6ada(void)

void FUN_1485f6ada(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_141841cd2();
  uVar3 = local_70;
  if ((cVar4 != '\0') &&
     (lVar6 = (param_3 % 3) * 0x1e0,
     *(int *)(param_1 + 0x110 + lVar6) != *(int *)(param_1 + 0x13c + lVar6))) {
    param_1 = param_1 + lVar6;
    plVar9 = (longlong *)(param_1 + 0x108);
    lVar6 = param_1 + 0x118;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar6;
    if (*(int *)(param_1 + 0x130) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar10 = *(int *)(param_1 + 0x130);
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar3 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = plVar9;
    if ((local_70._4_4_ != iVar10) || (uStack_58 != lVar6)) {
      iVar5 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar7 = (longlong)iVar5;
        lVar8 = (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(lVar1 + 8 + lVar7 * 0x18));
        lVar2 = *(longlong *)(lVar1 + lVar7 * 0x18);
        if (lVar2 != lVar8) {
          lVar6 = (**(code **)(*param_2 + 0xd0))(param_2,0);
          uVar3 = local_70;
          if (lVar6 != 0) {
            iVar10 = 1;
            do {
              lVar6 = (**(code **)(*param_2 + 0xd0))(param_2,iVar10);
              uVar3 = local_70;
              iVar10 = iVar10 + 1;
            } while (lVar6 != 0);
          }
          break;
        }
        if (*(longlong *)(lVar2 + 8) != 0) {
          *(undefined4 *)(lVar1 + lVar7 * 0x18 + 8) = 0xffffffff;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_88 != plVar9 ||
               (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar10));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485f6c90 FUN_1485f6c90 body=148 status=ok
// SIG undefined FUN_1485f6c90(void)

void FUN_1485f6c90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x4260b4e2c83cbb02;
  param_1[2] = 0x84963adec3d0a29c;
  param_1[3] = 1;
  param_1[6] = 0x7f7fffff7f7fffff;
  param_1[7] = 0x7f7fffff7f7fffff;
  param_1[4] = 0x7f7fffff7f7fffff;
  param_1[5] = 0x7f7fffff7f7fffff;
  param_1[10] = 0x7f7fffff7f7fffff;
  param_1[0xb] = 0x7f7fffff7f7fffff;
  param_1[8] = 0x7f7fffff7f7fffff;
  param_1[9] = 0x7f7fffff7f7fffff;
  param_1[0xe] = 0x7f7fffff7f7fffff;
  param_1[0xf] = 0x7f7fffff7f7fffff;
  param_1[0xc] = 0x7f7fffff7f7fffff;
  param_1[0xd] = 0x7f7fffff7f7fffff;
  param_1[0x12] = 0x7f7fffff7f7fffff;
  param_1[0x13] = 0x7f7fffff7f7fffff;
  param_1[0x10] = 0x7f7fffff7f7fffff;
  param_1[0x11] = 0x7f7fffff7f7fffff;
  param_1[0x16] = 0x7f7fffff7f7fffff;
  param_1[0x17] = 0x7f7fffff7f7fffff;
  param_1[0x14] = 0x7f7fffff7f7fffff;
  param_1[0x15] = 0x7f7fffff7f7fffff;
  param_1[0x1a] = 0x7f7fffff7f7fffff;
  param_1[0x1b] = 0x7f7fffff7f7fffff;
  param_1[0x18] = 0x7f7fffff7f7fffff;
  param_1[0x19] = 0x7f7fffff7f7fffff;
  param_1[0x1e] = 0x7f7fffff7f7fffff;
  param_1[0x1f] = 0x7f7fffff7f7fffff;
  param_1[0x1c] = 0x7f7fffff7f7fffff;
  param_1[0x1d] = 0x7f7fffff7f7fffff;
  param_1[0x22] = 0x7f7fffff7f7fffff;
  param_1[0x23] = 0x7f7fffff7f7fffff;
  param_1[0x20] = 0x7f7fffff7f7fffff;
  param_1[0x21] = 0x7f7fffff7f7fffff;
  return;
}



// FUNCTION 1485f6d24 FUN_1485f6d24 body=251 status=ok
// SIG undefined FUN_1485f6d24(void)

void FUN_1485f6d24(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if ((param_2 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0))
  {
    LOCK();
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    UNLOCK();
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    if (0 < DAT_14cb52b80) {
      uVar7 = 0;
      bVar8 = false;
      iVar4 = DAT_14cb52b80;
LAB_1485f6d67:
      do {
        plVar3 = *(longlong **)(DAT_14cb52b78 + 0x30 + uVar7 * 0x40);
        if ((plVar3 != (longlong *)0x0) &&
           (lVar6 = (**(code **)(*plVar3 + 0x20))(), iVar4 = DAT_14cb52b80, lVar6 == lVar5)) {
          do {
            FUN_143c152c8(uVar7 & 0xffffffff);
            if ((longlong)DAT_14cb52b80 <= (longlong)uVar7) goto LAB_1485f6de6;
            plVar3 = *(longlong **)(DAT_14cb52b78 + 0x30 + uVar7 * 0x40);
            if (plVar3 == (longlong *)0x0) {
              uVar7 = uVar7 + 1;
              bVar8 = true;
              iVar4 = DAT_14cb52b80;
              if ((longlong)DAT_14cb52b80 <= (longlong)uVar7) goto LAB_1485f6de6;
              goto LAB_1485f6d67;
            }
            lVar6 = (**(code **)(*plVar3 + 0x20))();
          } while (lVar6 == lVar5);
          bVar8 = true;
          iVar4 = DAT_14cb52b80;
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar4);
      if (bVar8) {
LAB_1485f6de6:
        FUN_14184215e();
      }
    }
    LOCK();
    puVar1 = (uint *)(param_2 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1485f6e20 FUN_1485f6e20 body=38 status=ok
// SIG undefined FUN_1485f6e20(void)

undefined8 FUN_1485f6e20(undefined8 param_1,int param_2)

{
  FUN_1415dc0d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f6e46 FUN_1485f6e46 body=48 status=ok
// SIG undefined FUN_1485f6e46(void)

void FUN_1485f6e46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1485f6e76 FUN_1485f6e76 body=29 status=ok
// SIG undefined FUN_1485f6e76(void)

undefined8 FUN_1485f6e76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f6e94 FUN_1485f6e94 body=130 status=ok
// SIG undefined FUN_1485f6e94(void)

longlong * FUN_1485f6e94(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar4);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1485f6f16(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  return param_2;
}



// FUNCTION 1485f6f16 FUN_1485f6f16 body=132 status=ok
// SIG undefined FUN_1485f6f16(void)

void FUN_1485f6f16(longlong param_1,int param_2)

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



// FUNCTION 1485f6f9c FUN_1485f6f9c body=31 status=ok
// SIG undefined FUN_1485f6f9c(void)

undefined8 FUN_1485f6f9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f6fd8 FUN_1485f6fd8 body=93 status=ok
// SIG undefined FUN_1485f6fd8(void)

void FUN_1485f6fd8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc7e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f7036 FUN_1485f7036 body=126 status=ok
// SIG undefined FUN_1485f7036(void)

void FUN_1485f7036(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc7e50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f70a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f70b4 FUN_1485f70b4 body=21 status=ok
// SIG undefined FUN_1485f70b4(void)

undefined8 FUN_1485f70b4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f70ca FUN_1485f70ca body=307 status=ok
// SIG undefined FUN_1485f70ca(void)

/* WARNING: Removing unreachable block (ram,0x0001485f71b3) */

void FUN_1485f70ca(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_198 [32];
  double local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x24);
  pcVar7 = "Unknown";
  if (*(int *)(param_2 + 0x20) == 1) {
    pcVar7 = "sl::DeepDVCMode::eOn";
  }
  pcVar5 = "sl::DeepDVCMode::eOff";
  if (*(int *)(param_2 + 0x20) != 0) {
    pcVar5 = pcVar7;
  }
  FUN_144a81018(local_158,pcVar5);
  local_178 = (double)fVar1;
  FUN_140002266(&local_168,L"%s intensity=%.3f saturationBoost=%.3f",local_50,SUB84((double)fVar2,0)
               );
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1447a1bd6(param_1,iVar3);
  }
  lVar4 = *param_1;
  lVar6 = (longlong)iVar3 * 0x10;
  *(undefined8 *)(lVar4 + lVar6) = 0;
  *(undefined8 *)(lVar4 + lVar6) = local_168;
  *(undefined4 *)(lVar4 + 8 + lVar6) = (undefined4)local_160;
  *(undefined4 *)(lVar4 + 0xc + lVar6) = local_160._4_4_;
  local_160 = 0;
  local_168 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485f71fe FUN_1485f71fe body=3 status=ok
// SIG undefined FUN_1485f71fe(void)

undefined8 FUN_1485f71fe(void)

{
  return 0;
}



// FUNCTION 1485f7202 FUN_1485f7202 body=31 status=ok
// SIG undefined FUN_1485f7202(void)

undefined8 FUN_1485f7202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f7238 FUN_1485f7238 body=93 status=ok
// SIG undefined FUN_1485f7238(void)

void FUN_1485f7238(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc80d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1485f7296 FUN_1485f7296 body=93 status=ok
// SIG undefined FUN_1485f7296(void)

void FUN_1485f7296(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc80d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1485f72f4 FUN_1485f72f4 body=126 status=ok
// SIG undefined FUN_1485f72f4(void)

void FUN_1485f72f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc80d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f7363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f73dc FUN_1485f73dc body=158 status=ok
// SIG undefined FUN_1485f73dc(void)

/* WARNING: Removing unreachable block (ram,0x0001485f7458) */

void FUN_1485f73dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,
                L"worldToViewMatrix=... viewToClipMatrix=... prevRenderedWorldToViewMatrix=..., prevRenderedViewToClipMatrix=..."
               );
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485f747c FUN_1485f747c body=31 status=ok
// SIG undefined FUN_1485f747c(void)

undefined8 FUN_1485f747c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f74b8 FUN_1485f74b8 body=101 status=ok
// SIG undefined FUN_1485f74b8(void)

void FUN_1485f74b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485f751e FUN_1485f751e body=101 status=ok
// SIG undefined FUN_1485f751e(void)

void FUN_1485f751e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485f7584 FUN_1485f7584 body=134 status=ok
// SIG undefined FUN_1485f7584(void)

void FUN_1485f7584(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aa9a7d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc8830;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f75fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f761c FUN_1485f761c body=25 status=ok
// SIG undefined FUN_1485f761c(void)

undefined8 FUN_1485f761c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f7636 FUN_1485f7636 body=88 status=ok
// SIG undefined FUN_1485f7636(void)

void FUN_1485f7636(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1485f768e FUN_1485f768e body=100 status=ok
// SIG undefined FUN_1485f768e(void)

void FUN_1485f768e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
    *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
    *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + 0x18 + lVar2);
    *(undefined8 *)(param_1 + 0x20 + lVar2) = *(undefined8 *)(param_2 + 0x20 + lVar2);
    *(undefined8 *)(param_1 + 0x28 + lVar2) = *(undefined8 *)(param_2 + 0x28 + lVar2);
    lVar1 = *(longlong *)(param_2 + 0x30 + lVar2);
    *(longlong *)(param_1 + 0x30 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x38 + lVar2) = *(undefined4 *)(param_2 + 0x38 + lVar2);
    lVar2 = lVar2 + 0x40;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1485f76f2 FUN_1485f76f2 body=258 status=ok
// SIG undefined FUN_1485f76f2(void)

void FUN_1485f76f2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb52ee0) {
    FUN_144b3d300(&DAT_14cb52ee0);
    if (DAT_14cb52ee0 == -1) {
      FUN_1485f791e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSLUIHintTagShaderParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x2e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb52e60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c17404);
      _Init_thread_footer(&DAT_14cb52ee0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f77f6 FUN_1485f77f6 body=80 status=ok
// SIG undefined FUN_1485f77f6(void)

void FUN_1485f77f6(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x68) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 2;
    return;
  }
  FUN_1485f7846(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar1 = param_1;
  }
  FUN_1485f78dd(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1485f7846 FUN_1485f7846 body=151 status=ok
// SIG undefined FUN_1485f7846(void)

void FUN_1485f7846(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
    goto LAB_1485f788a;
  }
  uVar2 = 2;
  if (param_2 < 3) {
LAB_1485f7861:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 3) && (*(longlong *)(param_1 + 0x60) == 0)) goto LAB_1485f788a;
    uVar3 = 0;
    if (2 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x30,0);
    uVar2 = uVar2 / 0x30;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_1485f788a;
      goto LAB_1485f7861;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x60,0,uVar3,0x30);
LAB_1485f788a:
  *(uint *)(param_1 + 0x6c) = uVar1;
  return;
}



// FUNCTION 1485f78dd FUN_1485f78dd body=65 status=ok
// SIG undefined FUN_1485f78dd(void)

void FUN_1485f78dd(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined8 *)(param_1 + 8 + lVar4) = *(undefined8 *)(param_2 + 8 + lVar4);
      *(undefined8 *)(param_1 + 0x10 + lVar4) = *(undefined8 *)(param_2 + 0x10 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x18 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x18 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x28 + lVar4) = *(undefined8 *)(param_2 + 0x28 + lVar4);
      lVar4 = lVar4 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1485f791e FUN_1485f791e body=226 status=ok
// SIG undefined FUN_1485f791e(void)

longlong * FUN_1485f791e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1485f7a02;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f7a02 FUN_1485f7a02 body=142 status=ok
// SIG undefined FUN_1485f7a02(void)

code * FUN_1485f7a02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e30f70();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DebugLayerCompatibility";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDebugLayerCompatibilityShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f7a90;
}



// FUNCTION 1485f7a90 FUN_1485f7a90 body=136 status=ok
// SIG undefined FUN_1485f7a90(void)

code * FUN_1485f7a90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UIColorAndAlpha";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f7b18;
}



// FUNCTION 1485f7b18 FUN_1485f7b18 body=130 status=ok
// SIG undefined FUN_1485f7b18(void)

undefined1 * FUN_1485f7b18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BackBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485f7b9a;
}



// FUNCTION 1485f7bc6 FUN_1485f7bc6 body=101 status=ok
// SIG undefined FUN_1485f7bc6(void)

void FUN_1485f7bc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afc8a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485f7c2c FUN_1485f7c2c body=101 status=ok
// SIG undefined FUN_1485f7c2c(void)

void FUN_1485f7c2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afc8a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afc8a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485f7c92 FUN_1485f7c92 body=134 status=ok
// SIG undefined FUN_1485f7c92(void)

void FUN_1485f7c92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afc8a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afc8a00;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f7d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f7d18 FUN_1485f7d18 body=82 status=ok
// SIG undefined FUN_1485f7d18(void)

undefined8 FUN_1485f7d18(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_4;
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),local_20,param_2,
             param_3);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f7d6e FUN_1485f7d6e body=29 status=ok
// SIG undefined FUN_1485f7d6e(void)

undefined8 FUN_1485f7d6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f7d8c FUN_1485f7d8c body=258 status=ok
// SIG undefined FUN_1485f7d8c(void)

void FUN_1485f7d8c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb52f68) {
    FUN_144b3d300(&DAT_14cb52f68);
    if (DAT_14cb52f68 == -1) {
      FUN_1485f7f92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSLShaderParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x2ba;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb52ee8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c17aa9);
      _Init_thread_footer(&DAT_14cb52f68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f7e90 FUN_1485f7e90 body=89 status=ok
// SIG undefined FUN_1485f7e90(void)

void FUN_1485f7e90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 200) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 4;
    return;
  }
  FUN_1485f7eea(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_1485f78dd(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1485f7eea FUN_1485f7eea body=167 status=ok
// SIG undefined FUN_1485f7eea(void)

void FUN_1485f7eea(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
    goto LAB_1485f7f34;
  }
  uVar2 = 4;
  if (param_2 < 5) {
LAB_1485f7f05:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 5) && (*(longlong *)(param_1 + 0xc0) == 0)) goto LAB_1485f7f34;
    uVar3 = 0;
    if (4 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x30,0);
    uVar2 = uVar2 / 0x30;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_1485f7f34;
      goto LAB_1485f7f05;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0xc0,0,uVar3,0x30);
LAB_1485f7f34:
  *(uint *)(param_1 + 0xcc) = uVar1;
  return;
}



// FUNCTION 1485f7f92 FUN_1485f7f92 body=226 status=ok
// SIG undefined FUN_1485f7f92(void)

longlong * FUN_1485f7f92(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1485f8076;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f8076 FUN_1485f8076 body=142 status=ok
// SIG undefined FUN_1485f8076(void)

code * FUN_1485f8076(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e30f70();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DebugLayerCompatibility";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDebugLayerCompatibilityShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60000002c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f8104;
}



// FUNCTION 1485f8104 FUN_1485f8104 body=136 status=ok
// SIG undefined FUN_1485f8104(void)

code * FUN_1485f8104(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorWithoutHUD";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f818c;
}



// FUNCTION 1485f818c FUN_1485f818c body=136 status=ok
// SIG undefined FUN_1485f818c(void)

code * FUN_1485f818c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NoWarpMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f8214;
}



// FUNCTION 1485f8214 FUN_1485f8214 body=136 status=ok
// SIG undefined FUN_1485f8214(void)

code * FUN_1485f8214(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Velocity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f829c;
}



// FUNCTION 1485f829c FUN_1485f829c body=130 status=ok
// SIG undefined FUN_1485f829c(void)

undefined1 * FUN_1485f829c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Depth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 699;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485f831e;
}



// FUNCTION 1485f8340 FUN_1485f8340 body=684 status=ok
// SIG undefined FUN_1485f8340(void)

void FUN_1485f8340(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_68 [34];
  byte local_46 [6];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_46[5] = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_46 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_46 + 5);
  }
  local_46[4] = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_46 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_46 + 4);
  }
  pbVar7 = local_46 + 4;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar7 = *(byte **)(param_2 + 0x38);
  }
  local_46[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_46 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_46 + 3);
  }
  pbVar9 = local_46 + 3;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar9 = *(byte **)(param_2 + 0x38);
  }
  local_46[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_46 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_46 + 2);
  }
  pbVar10 = local_46 + 2;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar10 = *(byte **)(param_2 + 0x38);
  }
  local_46[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_46 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_46 + 1);
  }
  pbVar8 = local_46 + 1;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar8 = *(byte **)(param_2 + 0x38);
  }
  local_46[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_46);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_46);
  }
  bVar3 = local_46[5];
  pbVar2 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = CONCAT71((int7)((ulonglong)puVar1 >> 8),local_46[5]);
  cVar4 = FUN_143c18797(uVar6 & 0xffffffff);
  if (cVar4 != '\0') {
    pbVar5 = local_46;
    if (pbVar2 != (byte *)0x0) {
      pbVar5 = pbVar2;
    }
    *pbVar7 = bVar3 & 1;
    *pbVar9 = (byte)((uVar6 & 0xffffffff) >> 1) & 1;
    *pbVar10 = (byte)((uVar6 & 0xffffffff) >> 2) & 1;
    *pbVar8 = (byte)((uVar6 & 0xffffffff) >> 3) & 1;
    *pbVar5 = bVar3 >> 4 & 1;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f85ee FUN_1485f85ee body=400 status=ok
// SIG undefined FUN_1485f85ee(void)

void FUN_1485f85ee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_78 [35];
  undefined1 local_55;
  uint local_54;
  undefined4 local_50;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    pbVar6 = &local_49;
    FUN_144a5ded6(param_2,pbVar6);
  }
  else {
    pbVar6 = *(byte **)(param_2 + 0x18);
    FUN_14470e992(param_2,pbVar6);
  }
  bVar4 = local_49;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_143c18806();
  if (cVar1 == '\0') {
    uVar5 = 0;
    local_55 = 7;
    local_54 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar2 = 0;
  }
  else {
    if (3 < bVar4) {
      bVar4 = 0;
    }
    lVar3 = (ulonglong)bVar4 * 0x34;
    local_55 = (&DAT_14c763214)[lVar3];
    uVar5 = (undefined4)CONCAT71((int7)((ulonglong)pbVar6 >> 8),(&DAT_14c763215)[lVar3]);
    local_54 = (uint)*(ushort *)(&DAT_14c763216 + lVar3);
    uVar10 = *(undefined4 *)(&DAT_14c763218 + lVar3);
    uVar11 = *(undefined4 *)(&DAT_14c76321c + lVar3);
    uVar12 = *(undefined4 *)(&DAT_14c763220 + lVar3);
    uVar13 = *(undefined4 *)(&DAT_14c763224 + lVar3);
    uVar9 = *(undefined4 *)(&DAT_14c763228 + lVar3);
    uVar7 = *(undefined4 *)(&DAT_14c76322c + lVar3);
    uVar8 = *(undefined4 *)(&DAT_14c763230 + lVar3);
    uVar16 = *(undefined4 *)(&DAT_14c763234 + lVar3);
    uVar17 = *(undefined4 *)(&DAT_14c763238 + lVar3);
    uVar14 = *(undefined4 *)(&DAT_14c76323c + lVar3);
    uVar15 = *(undefined4 *)(&DAT_14c763240 + lVar3);
    uVar2 = *(undefined4 *)(&DAT_14c763244 + lVar3);
    local_50 = uVar5;
  }
  *param_3 = local_55;
  param_3[1] = (char)uVar5;
  *(short *)(param_3 + 2) = (short)local_54;
  *(undefined4 *)(param_3 + 4) = uVar10;
  *(undefined4 *)(param_3 + 8) = uVar11;
  *(undefined4 *)(param_3 + 0xc) = uVar12;
  *(undefined4 *)(param_3 + 0x10) = uVar13;
  *(undefined4 *)(param_3 + 0x14) = uVar9;
  *(undefined4 *)(param_3 + 0x18) = uVar7;
  *(undefined4 *)(param_3 + 0x1c) = uVar8;
  *(undefined4 *)(param_3 + 0x20) = uVar16;
  *(undefined4 *)(param_3 + 0x24) = uVar17;
  *(undefined4 *)(param_3 + 0x28) = uVar14;
  *(undefined4 *)(param_3 + 0x2c) = uVar15;
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f8786 FUN_1485f8786 body=150 status=ok
// SIG undefined FUN_1485f8786(void)

void FUN_1485f8786(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f881e(local_19);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f881e FUN_1485f881e body=105 status=ok
// SIG undefined FUN_1485f881e(void)

undefined8 FUN_1485f881e(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (DAT_14cb53038 == '\0') {
    DAT_14cb53038 = '\x01';
  }
  cVar1 = FUN_143c18806(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (DAT_14cb53038 == '\0') {
      DAT_14cb53038 = '\x01';
    }
    cVar1 = FUN_143c18806(param_1);
    uVar3 = 0;
    if (cVar1 != '\0') {
      bVar2 = 0;
      if ((byte)param_1 < 4) {
        bVar2 = (byte)param_1;
      }
      uVar3 = CONCAT71((int7)((ulonglong)bVar2 * 0x34 >> 8),
                       (&DAT_14c763214)[(ulonglong)bVar2 * 0x34] == '\0');
    }
  }
  return uVar3;
}



// FUNCTION 1485f8888 FUN_1485f8888 body=207 status=ok
// SIG undefined FUN_1485f8888(void)

void FUN_1485f8888(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  bVar2 = local_21;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cb53038 == '\0') {
    DAT_14cb53038 = '\x01';
  }
  cVar1 = FUN_143c18806(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_21) & 0xffffffff);
  uVar3 = 1;
  if (cVar1 != '\0') {
    if (3 < bVar2) {
      bVar2 = 0;
    }
    uVar3 = (&DAT_14c763214)[(ulonglong)bVar2 * 0x34];
  }
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f895c FUN_1485f895c body=76 status=ok
// SIG undefined FUN_1485f895c(void)

void FUN_1485f895c(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f898e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1485f8a2c FUN_1485f8a2c body=59 status=ok
// SIG undefined FUN_1485f8a2c(void)

undefined8 FUN_1485f8a2c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f8b76 FUN_1485f8b76 body=59 status=ok
// SIG undefined FUN_1485f8b76(void)

undefined8 FUN_1485f8b76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f8c18 FUN_1485f8c18 body=36 status=ok
// SIG undefined FUN_1485f8c18(void)

undefined8 FUN_1485f8c18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f8c58 FUN_1485f8c58 body=93 status=ok
// SIG undefined FUN_1485f8c58(void)

void FUN_1485f8c58(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afca640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f8cb6 FUN_1485f8cb6 body=123 status=ok
// SIG undefined FUN_1485f8cb6(void)

void FUN_1485f8cb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afca640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f8d32 FUN_1485f8d32 body=21 status=ok
// SIG undefined FUN_1485f8d32(void)

undefined8 FUN_1485f8d32(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f8d48 FUN_1485f8d48 body=49 status=ok
// SIG undefined FUN_1485f8d48(void)

void FUN_1485f8d48(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1456d8330();
  FUN_1456d8330();
  bVar1 = FUN_1456d839c();
  *param_3 = bVar1 ^ 1;
  return;
}



// FUNCTION 1485f8d7a FUN_1485f8d7a body=39 status=ok
// SIG undefined FUN_1485f8d7a(void)

void FUN_1485f8d7a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f8da2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f8da2 FUN_1485f8da2 body=188 status=ok
// SIG undefined FUN_1485f8da2(void)

undefined8 FUN_1485f8da2(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1448c2e86();
  FUN_1448c303c(&local_58);
  FUN_1448c30b4(uVar3,&local_50,local_58);
  lVar2 = local_50;
  uVar3 = 0;
  if ((longlong)local_48 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      plVar4 = (longlong *)thunk_FUN_1456d850a();
      if (plVar1 == plVar4) {
        uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1);
        break;
      }
      lVar5 = lVar5 + 8;
      uVar3 = 0;
    } while ((longlong)local_48 * 8 != lVar5);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1485f8e60 FUN_1485f8e60 body=39 status=ok
// SIG undefined FUN_1485f8e60(void)

void FUN_1485f8e60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f8e88();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f8e88 FUN_1485f8e88 body=185 status=ok
// SIG undefined FUN_1485f8e88(void)

undefined8 FUN_1485f8e88(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1448c2e86();
  FUN_1448c303c(&local_58);
  FUN_1448c30b4(uVar3,&local_50,local_58);
  lVar2 = local_50;
  uVar3 = 0;
  if ((longlong)local_48 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      plVar4 = (longlong *)thunk_FUN_1456d850a();
      if (plVar1 == plVar4) {
        uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1);
        break;
      }
      lVar5 = lVar5 + 8;
      uVar3 = 0;
    } while ((longlong)local_48 * 8 != lVar5);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1485f8f42 FUN_1485f8f42 body=37 status=ok
// SIG undefined FUN_1485f8f42(void)

void FUN_1485f8f42(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c189ea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f8f68 FUN_1485f8f68 body=39 status=ok
// SIG undefined FUN_1485f8f68(void)

void FUN_1485f8f68(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f8f90();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f8f90 FUN_1485f8f90 body=188 status=ok
// SIG undefined FUN_1485f8f90(void)

undefined8 FUN_1485f8f90(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1448c2e86();
  FUN_1448c303c(&local_58);
  FUN_1448c30b4(uVar3,&local_50,local_58);
  lVar2 = local_50;
  uVar3 = 0;
  if ((longlong)local_48 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      plVar4 = (longlong *)thunk_FUN_1456d850a();
      if (plVar1 == plVar4) {
        uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
        break;
      }
      lVar5 = lVar5 + 8;
      uVar3 = 0;
    } while ((longlong)local_48 * 8 != lVar5);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1485f904e FUN_1485f904e body=139 status=ok
// SIG undefined FUN_1485f904e(void)

void FUN_1485f904e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485f90da(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f90da FUN_1485f90da body=187 status=ok
// SIG undefined FUN_1485f90da(void)

longlong * FUN_1485f90da(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1456d8330();
  if (DAT_14cb53048 == 0) {
    uVar5 = FUN_1464a9e44();
    DAT_14cb53048 = FUN_14171c317(FUN_1464a9e73,uVar5,L"EStreamlineReflexMode");
  }
  lVar3 = DAT_14cb53048;
  if (1 < *(int *)(DAT_14cb53048 + 0x48)) {
    lVar7 = 8;
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(*(longlong *)(lVar3 + 0x40) + lVar7);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),uVar1);
      cVar4 = FUN_1485f9234(unaff_RBX & 0xffffffff);
      if (cVar4 != '\0') {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1485f93a0(param_1,iVar2);
        }
        *(undefined1 *)(*param_1 + (longlong)iVar2) = uVar1;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < (longlong)*(int *)(lVar3 + 0x48) + -1);
  }
  return param_1;
}



// FUNCTION 1485f919c FUN_1485f919c body=150 status=ok
// SIG undefined FUN_1485f919c(void)

void FUN_1485f919c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f9234(local_19);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f9234 FUN_1485f9234 body=54 status=ok
// SIG undefined FUN_1485f9234(void)

bool FUN_1485f9234(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  
  FUN_1456d8330();
  cVar1 = FUN_141519599(param_1);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((char)param_1 != '\0') {
      FUN_1456d8330();
      cVar1 = FUN_1456d839c();
      bVar2 = cVar1 == '\0';
    }
  }
  return bVar2;
}



// FUNCTION 1485f926e FUN_1485f926e body=44 status=ok
// SIG undefined FUN_1485f926e(void)

void FUN_1485f926e(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1456d8330();
  bVar1 = FUN_1456d839c();
  *param_3 = bVar1 ^ 1;
  return;
}



// FUNCTION 1485f929a FUN_1485f929a body=37 status=ok
// SIG undefined FUN_1485f929a(void)

void FUN_1485f929a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1456d839c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485f92c0 FUN_1485f92c0 body=143 status=ok
// SIG undefined FUN_1485f92c0(void)

void FUN_1485f92c0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c9a8aa(local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f9354 FUN_1485f9354 body=76 status=ok
// SIG undefined FUN_1485f9354(void)

void FUN_1485f9354(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f9386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1485f93a0 FUN_1485f93a0 body=124 status=ok
// SIG undefined FUN_1485f93a0(void)

void FUN_1485f93a0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485f941e FUN_1485f941e body=36 status=ok
// SIG undefined FUN_1485f941e(void)

undefined8 FUN_1485f941e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f945e FUN_1485f945e body=93 status=ok
// SIG undefined FUN_1485f945e(void)

void FUN_1485f945e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcb600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f94bc FUN_1485f94bc body=123 status=ok
// SIG undefined FUN_1485f94bc(void)

void FUN_1485f94bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcb600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f9538 FUN_1485f9538 body=21 status=ok
// SIG undefined FUN_1485f9538(void)

undefined8 FUN_1485f9538(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f954d FUN_1485f954d body=119 status=ok
// SIG undefined FUN_1485f954d(void)

undefined8
FUN_1485f954d(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_1446f970a(param_1,1);
  }
  uVar2 = (**(code **)(*DAT_14ca83900 + 0x158))
                    (DAT_14ca83900,param_1,param_2,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    FUN_1446f970a(param_1,0);
  }
  return uVar2;
}



// FUNCTION 1485f95c4 FUN_1485f95c4 body=98 status=ok
// SIG undefined FUN_1485f95c4(void)

void FUN_1485f95c4(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001485f95f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,param_2);
    return;
  }
  FUN_1446f970a(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,param_2);
  FUN_1446f970a(param_1,0);
  return;
}



// FUNCTION 1485f9626 FUN_1485f9626 body=36 status=ok
// SIG undefined FUN_1485f9626(void)

undefined8 FUN_1485f9626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f9666 FUN_1485f9666 body=93 status=ok
// SIG undefined FUN_1485f9666(void)

void FUN_1485f9666(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcb6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f96c4 FUN_1485f96c4 body=123 status=ok
// SIG undefined FUN_1485f96c4(void)

void FUN_1485f96c4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcb6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f9740 FUN_1485f9740 body=21 status=ok
// SIG undefined FUN_1485f9740(void)

undefined8 FUN_1485f9740(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f9764 FUN_1485f9764 body=31 status=ok
// SIG undefined FUN_1485f9764(void)

undefined8 FUN_1485f9764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f979c FUN_1485f979c body=93 status=ok
// SIG undefined FUN_1485f979c(void)

void FUN_1485f979c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcbd10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f97fa FUN_1485f97fa body=93 status=ok
// SIG undefined FUN_1485f97fa(void)

void FUN_1485f97fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcbd10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f9858 FUN_1485f9858 body=126 status=ok
// SIG undefined FUN_1485f9858(void)

void FUN_1485f9858(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e41ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcbd10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f98c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f98e4 FUN_1485f98e4 body=31 status=ok
// SIG undefined FUN_1485f98e4(void)

undefined8 FUN_1485f98e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485f9920 FUN_1485f9920 body=93 status=ok
// SIG undefined FUN_1485f9920(void)

void FUN_1485f9920(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcbe60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f997e FUN_1485f997e body=126 status=ok
// SIG undefined FUN_1485f997e(void)

void FUN_1485f997e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcbe60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f99ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f99fc FUN_1485f99fc body=21 status=ok
// SIG undefined FUN_1485f99fc(void)

undefined8 FUN_1485f99fc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f9a3a FUN_1485f9a3a body=43 status=ok
// SIG undefined FUN_1485f9a3a(void)

undefined8 FUN_1485f9a3a(undefined8 param_1,int param_2)

{
  FUN_145b041fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1485f9a66 FUN_1485f9a66 body=43 status=ok
// SIG undefined FUN_1485f9a66(void)

undefined8 FUN_1485f9a66(undefined8 param_1,int param_2)

{
  FUN_145b041fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1485f9a92 FUN_1485f9a92 body=36 status=ok
// SIG undefined FUN_1485f9a92(void)

undefined8 FUN_1485f9a92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f9ad2 FUN_1485f9ad2 body=93 status=ok
// SIG undefined FUN_1485f9ad2(void)

void FUN_1485f9ad2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcc250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f9b30 FUN_1485f9b30 body=123 status=ok
// SIG undefined FUN_1485f9b30(void)

void FUN_1485f9b30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcc250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f9bac FUN_1485f9bac body=21 status=ok
// SIG undefined FUN_1485f9bac(void)

undefined8 FUN_1485f9bac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f9bc2 FUN_1485f9bc2 body=42 status=ok
// SIG undefined FUN_1485f9bc2(void)

void FUN_1485f9bc2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f9c0c FUN_1485f9c0c body=96 status=ok
// SIG undefined FUN_1485f9c0c(void)

undefined8 FUN_1485f9c0c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6f342();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb533d0,1);
  return uVar3;
}



// FUNCTION 1485f9c6c FUN_1485f9c6c body=52 status=ok
// SIG undefined FUN_1485f9c6c(void)

void FUN_1485f9c6c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f9ca0 FUN_1485f9ca0 body=42 status=ok
// SIG undefined FUN_1485f9ca0(void)

void FUN_1485f9ca0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f9cea FUN_1485f9cea body=96 status=ok
// SIG undefined FUN_1485f9cea(void)

undefined8 FUN_1485f9cea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e68a30();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb53458,1);
  return uVar3;
}



// FUNCTION 1485f9d4a FUN_1485f9d4a body=52 status=ok
// SIG undefined FUN_1485f9d4a(void)

void FUN_1485f9d4a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f9d7e FUN_1485f9d7e body=177 status=ok
// SIG undefined FUN_1485f9d7e(void)

void FUN_1485f9d7e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e68a30();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb53458,param_4);
  local_78 = &DAT_14cb53458;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1485fa574(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f9e30 FUN_1485f9e30 body=138 status=ok
// SIG undefined FUN_1485f9e30(void)

code * FUN_1485f9e30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f9eba;
}



// FUNCTION 1485f9eba FUN_1485f9eba body=138 status=ok
// SIG undefined FUN_1485f9eba(void)

code * FUN_1485f9eba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputViewMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6f640;
}



// FUNCTION 1485f9f44 FUN_1485f9f44 body=138 status=ok
// SIG undefined FUN_1485f9f44(void)

code * FUN_1485f9f44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f9fce;
}



// FUNCTION 1485f9fce FUN_1485f9fce body=138 status=ok
// SIG undefined FUN_1485f9fce(void)

code * FUN_1485f9fce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485fa058;
}



// FUNCTION 1485fa058 FUN_1485fa058 body=132 status=ok
// SIG undefined FUN_1485fa058(void)

undefined1 * FUN_1485fa058(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485fa0dc;
}



// FUNCTION 1485fa0df FUN_1485fa0df body=177 status=ok
// SIG undefined FUN_1485fa0df(void)

void FUN_1485fa0df(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f6f342();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb533d0,param_4);
  local_78 = &DAT_14cb533d0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1485fa1b4(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fa192 FUN_1485fa192 body=34 status=ok
// SIG undefined FUN_1485fa192(void)

undefined8 FUN_1485fa192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1485fa1b4 FUN_1485fa1b4 body=344 status=ok
// SIG undefined FUN_1485fa1b4(void)

void FUN_1485fa1b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cb53418;
  if (DAT_14cb53418 != 0) {
    LOCK();
    *(int *)(DAT_14cb53418 + 8) = *(int *)(DAT_14cb53418 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb533d0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14afcc4f0;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fa30e FUN_1485fa30e body=43 status=ok
// SIG undefined FUN_1485fa30e(void)

undefined8 FUN_1485fa30e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1485fa339 FUN_1485fa339 body=163 status=ok
// SIG undefined FUN_1485fa339(void)

void FUN_1485fa339(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143c1bf7c();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143c1c064(param_1,param_2);
  return;
}



// FUNCTION 1485fa3dc FUN_1485fa3dc body=374 status=ok
// SIG undefined FUN_1485fa3dc(void)

void FUN_1485fa3dc(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485fa552 FUN_1485fa552 body=34 status=ok
// SIG undefined FUN_1485fa552(void)

undefined8 FUN_1485fa552(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1485fa574 FUN_1485fa574 body=344 status=ok
// SIG undefined FUN_1485fa574(void)

void FUN_1485fa574(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cb534a0;
  if (DAT_14cb534a0 != 0) {
    LOCK();
    *(int *)(DAT_14cb534a0 + 8) = *(int *)(DAT_14cb534a0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb53458;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14afcc510;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fa6ce FUN_1485fa6ce body=43 status=ok
// SIG undefined FUN_1485fa6ce(void)

undefined8 FUN_1485fa6ce(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1485fa6f9 FUN_1485fa6f9 body=163 status=ok
// SIG undefined FUN_1485fa6f9(void)

void FUN_1485fa6f9(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143c1c298();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143c1c380(param_1,param_2);
  return;
}



// FUNCTION 1485fa79c FUN_1485fa79c body=374 status=ok
// SIG undefined FUN_1485fa79c(void)

void FUN_1485fa79c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485fa912 FUN_1485fa912 body=36 status=ok
// SIG undefined FUN_1485fa912(void)

undefined8 FUN_1485fa912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485fa952 FUN_1485fa952 body=93 status=ok
// SIG undefined FUN_1485fa952(void)

void FUN_1485fa952(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcc530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fa9b0 FUN_1485fa9b0 body=126 status=ok
// SIG undefined FUN_1485fa9b0(void)

void FUN_1485fa9b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcc530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485faa1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485faa2e FUN_1485faa2e body=21 status=ok
// SIG undefined FUN_1485faa2e(void)

undefined8 FUN_1485faa2e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485faa44 FUN_1485faa44 body=93 status=ok
// SIG undefined FUN_1485faa44(void)

void FUN_1485faa44(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 7) {
    FUN_1448f21ac(param_1,7);
  }
  iVar2 = 7;
  do {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14479d316(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// FUNCTION 1485faaf4 FUN_1485faaf4 body=40 status=ok
// SIG undefined FUN_1485faaf4(void)

void FUN_1485faaf4(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001485fab11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  return;
}



// FUNCTION 1485fab44 FUN_1485fab44 body=1 status=ok
// SIG undefined FUN_1485fab44(void)

void FUN_1485fab44(void)

{
  return;
}



// FUNCTION 1485fab9e FUN_1485fab9e body=45 status=ok
// SIG undefined FUN_1485fab9e(void)

longlong FUN_1485fab9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1485fad32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fabd4 FUN_1485fabd4 body=45 status=ok
// SIG undefined FUN_1485fabd4(void)

longlong FUN_1485fabd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1485fad32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fac02 FUN_1485fac02 body=1 status=ok
// SIG undefined FUN_1485fac02(void)

void FUN_1485fac02(void)

{
  return;
}



// FUNCTION 1485fac04 FUN_1485fac04 body=31 status=ok
// SIG undefined FUN_1485fac04(void)

undefined8 FUN_1485fac04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fac40 FUN_1485fac40 body=93 status=ok
// SIG undefined FUN_1485fac40(void)

void FUN_1485fac40(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afccf70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fac9e FUN_1485fac9e body=126 status=ok
// SIG undefined FUN_1485fac9e(void)

void FUN_1485fac9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afccf70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485fad0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fad1c FUN_1485fad1c body=21 status=ok
// SIG undefined FUN_1485fad1c(void)

undefined8 FUN_1485fad1c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fad32 FUN_1485fad32 body=82 status=ok
// SIG undefined FUN_1485fad32(void)

void FUN_1485fad32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afcc7a0;
  param_1[1] = &PTR_LAB_14afcc890;
  param_1[2] = &PTR_FUN_14afcc8e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 2);
  FUN_140af926c(param_1 + 1);
  return;
}


