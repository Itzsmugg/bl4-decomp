// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149016d46 FUN_149016d46 body=69 status=ok
// SIG undefined FUN_149016d46(void)

undefined8 * FUN_149016d46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba68890;
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149016d8c FUN_149016d8c body=169 status=ok
// SIG undefined FUN_149016d8c(void)

/* WARNING: Removing unreachable block (ram,0x000149016e26) */

undefined8 FUN_149016d8c(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = uVar2;
  if (param_3 == '\0') {
    FUN_140056680();
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1447a1bd6((ulonglong *)(param_1 + 0x10),iVar1);
    }
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(uVar2 + lVar3) = 0;
    *(undefined8 *)(uVar2 + lVar3) = local_30;
    local_30 = 0;
    *(undefined4 *)(uVar2 + 8 + lVar3) = (undefined4)local_28;
    *(undefined4 *)(uVar2 + 0xc + lVar3) = local_28._4_4_;
    local_28 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 149016e36 FUN_149016e36 body=38 status=ok
// SIG undefined FUN_149016e36(void)

undefined8 FUN_149016e36(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149016eee FUN_149016eee body=81 status=ok
// SIG undefined FUN_149016eee(void)

undefined8 FUN_149016eee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    FUN_1410b2022(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 149016f68 FUN_149016f68 body=59 status=ok
// SIG undefined FUN_149016f68(void)

undefined8 FUN_149016f68(longlong *param_1)

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



// FUNCTION 149016fae FUN_149016fae body=34 status=ok
// SIG undefined FUN_149016fae(void)

void FUN_149016fae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_145e17b70(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 149017020 FUN_149017020 body=31 status=ok
// SIG undefined FUN_149017020(void)

undefined8 FUN_149017020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901705c FUN_14901705c body=93 status=ok
// SIG undefined FUN_14901705c(void)

void FUN_14901705c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba68fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490170ba FUN_1490170ba body=126 status=ok
// SIG undefined FUN_1490170ba(void)

void FUN_1490170ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba68fd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149017129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149017138 FUN_149017138 body=21 status=ok
// SIG undefined FUN_149017138(void)

undefined8 FUN_149017138(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14901714e FUN_14901714e body=209 status=ok
// SIG undefined FUN_14901714e(void)

void FUN_14901714e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_1490171f1;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1490171f1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 149017220 FUN_149017220 body=77 status=ok
// SIG undefined FUN_149017220(void)

void FUN_149017220(longlong *param_1)

{
  FUN_1447a1747(param_1[0x1d],(int)param_1[0x1e]);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14901726e FUN_14901726e body=31 status=ok
// SIG undefined FUN_14901726e(void)

undefined8 FUN_14901726e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490172a8 FUN_1490172a8 body=29 status=ok
// SIG undefined FUN_1490172a8(void)

bool FUN_1490172a8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1490172c6 FUN_1490172c6 body=26 status=ok
// SIG undefined FUN_1490172c6(void)

bool FUN_1490172c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1490172e0 FUN_1490172e0 body=24 status=ok
// SIG undefined FUN_1490172e0(void)

bool FUN_1490172e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149017304 FUN_149017304 body=93 status=ok
// SIG undefined FUN_149017304(void)

void FUN_149017304(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba690f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149017362 FUN_149017362 body=93 status=ok
// SIG undefined FUN_149017362(void)

void FUN_149017362(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba690f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490173c0 FUN_1490173c0 body=126 status=ok
// SIG undefined FUN_1490173c0(void)

void FUN_1490173c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba690f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69080;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901742f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901743e FUN_14901743e body=46 status=ok
// SIG undefined FUN_14901743e(void)

void FUN_14901743e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149017469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14901746c FUN_14901746c body=161 status=ok
// SIG undefined FUN_14901746c(void)

bool FUN_14901746c(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 149017510 FUN_149017510 body=31 status=ok
// SIG undefined FUN_149017510(void)

undefined8 FUN_149017510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901754a FUN_14901754a body=29 status=ok
// SIG undefined FUN_14901754a(void)

bool FUN_14901754a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149017568 FUN_149017568 body=26 status=ok
// SIG undefined FUN_149017568(void)

bool FUN_149017568(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149017582 FUN_149017582 body=24 status=ok
// SIG undefined FUN_149017582(void)

bool FUN_149017582(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1490175a6 FUN_1490175a6 body=93 status=ok
// SIG undefined FUN_1490175a6(void)

void FUN_1490175a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba691d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149017604 FUN_149017604 body=93 status=ok
// SIG undefined FUN_149017604(void)

void FUN_149017604(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba691d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149017662 FUN_149017662 body=126 status=ok
// SIG undefined FUN_149017662(void)

void FUN_149017662(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba691d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490176d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490176e0 FUN_1490176e0 body=48 status=ok
// SIG undefined FUN_1490176e0(void)

void FUN_1490176e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901770d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149017710 FUN_149017710 body=163 status=ok
// SIG undefined FUN_149017710(void)

bool FUN_149017710(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 1490177b6 FUN_1490177b6 body=29 status=ok
// SIG undefined FUN_1490177b6(void)

undefined8 FUN_1490177b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490177ee FUN_1490177ee body=29 status=ok
// SIG undefined FUN_1490177ee(void)

bool FUN_1490177ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901780c FUN_14901780c body=26 status=ok
// SIG undefined FUN_14901780c(void)

bool FUN_14901780c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149017826 FUN_149017826 body=24 status=ok
// SIG undefined FUN_149017826(void)

bool FUN_149017826(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901783e FUN_14901783e body=93 status=ok
// SIG undefined FUN_14901783e(void)

void FUN_14901783e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901789c FUN_14901789c body=93 status=ok
// SIG undefined FUN_14901789c(void)

void FUN_14901789c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490178fa FUN_1490178fa body=126 status=ok
// SIG undefined FUN_1490178fa(void)

void FUN_1490178fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69240;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149017969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149017978 FUN_149017978 body=35 status=ok
// SIG undefined FUN_149017978(void)

void FUN_149017978(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149017997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14901799c FUN_14901799c body=142 status=ok
// SIG undefined FUN_14901799c(void)

bool FUN_14901799c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149017a2c FUN_149017a2c body=243 status=ok
// SIG undefined FUN_149017a2c(void)

undefined8 * FUN_149017a2c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c867098,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14c8670a0;
      lVar6 = (longlong)(int)DAT_14c8670a0;
      DAT_14c8670a0 = DAT_14c8670a0 + 1;
      if (DAT_14c8670a4 < DAT_14c8670a0) {
        FUN_1447a71f6(&DAT_14c867098,uVar3);
      }
      lVar2 = DAT_14c867098;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c867098 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149017b20 FUN_149017b20 body=29 status=ok
// SIG undefined FUN_149017b20(void)

undefined8 FUN_149017b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149017b58 FUN_149017b58 body=29 status=ok
// SIG undefined FUN_149017b58(void)

bool FUN_149017b58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149017b76 FUN_149017b76 body=26 status=ok
// SIG undefined FUN_149017b76(void)

bool FUN_149017b76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149017b90 FUN_149017b90 body=24 status=ok
// SIG undefined FUN_149017b90(void)

bool FUN_149017b90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149017bb4 FUN_149017bb4 body=93 status=ok
// SIG undefined FUN_149017bb4(void)

void FUN_149017bb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba692b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149017c12 FUN_149017c12 body=93 status=ok
// SIG undefined FUN_149017c12(void)

void FUN_149017c12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba692b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149017c70 FUN_149017c70 body=126 status=ok
// SIG undefined FUN_149017c70(void)

void FUN_149017c70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba69320;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba692b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149017cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149017cee FUN_149017cee body=58 status=ok
// SIG undefined FUN_149017cee(void)

void FUN_149017cee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149017d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 149017d28 FUN_149017d28 body=173 status=ok
// SIG undefined FUN_149017d28(void)

bool FUN_149017d28(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149017dd8 FUN_149017dd8 body=63 status=ok
// SIG undefined FUN_149017dd8(void)

void FUN_149017dd8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145e04280(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_149017f5c(param_1);
    return;
  }
  FUN_149017e18(param_1);
  FUN_145e04280(param_1);
  return;
}



// FUNCTION 149017e18 FUN_149017e18 body=322 status=ok
// SIG undefined FUN_149017e18(void)

void FUN_149017e18(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149017f5c FUN_149017f5c body=476 status=ok
// SIG undefined FUN_149017f5c(void)

void FUN_149017f5c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149018139 FUN_149018139 body=950 status=ok
// SIG undefined FUN_149018139(void)

void FUN_149018139(longlong param_1,uint param_2,undefined8 param_3)

{
  void *pvVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  longlong *plVar6;
  void *_Src;
  void *_Src_00;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_438 [32];
  longlong *local_418;
  int local_40c;
  void *local_408;
  void *local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined4 local_3e8 [190];
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if (1 < (int)param_2) {
    memset(local_3e8,0,0x2f0);
    local_3f0 = (ulonglong)param_2 * 0xa8 + param_1 + -0xa8;
    local_3f8 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_3e8[0] = (int)(longlong)(fVar11 + fVar11);
    plVar6 = &local_3f8;
    do {
      pvVar4 = (void *)*plVar6;
      _Src_00 = (void *)plVar6[1];
      iVar8 = (int)plVar6[2];
      uVar5 = (int)((ulonglong)((longlong)_Src_00 - (longlong)pvVar4) >> 3) * 0x3cf3cf3d + 1;
      _Src = pvVar4;
      pvVar9 = _Src_00;
      pvVar10 = pvVar4;
      local_418 = plVar6;
      if (iVar8 != 0) {
LAB_149018212:
        plVar6 = local_418;
        if (8 < (int)uVar5) {
          pvVar10 = (void *)((ulonglong)(uVar5 >> 1) * 0xa8 + (longlong)_Src);
          local_40c = iVar8;
          local_408 = pvVar4;
          local_400 = pvVar9;
          memcpy(local_f0,pvVar10,0xa8);
          memcpy(pvVar10,_Src,0xa8);
          memcpy(_Src,local_f0,0xa8);
          pvVar4 = (void *)((longlong)_Src_00 + 0xa8);
          pvVar10 = _Src;
          do {
            pvVar9 = (void *)((longlong)pvVar10 + 0xa8);
            pvVar1 = (void *)((longlong)pvVar10 + 0xa8);
            do {
              pvVar10 = pvVar1;
              pvVar3 = pvVar9;
              if (_Src_00 < pvVar10) break;
              cVar2 = FUN_1490187dc(param_3,(longlong)_Src + 0x28,(longlong)pvVar10 + 0x28);
              pvVar9 = (void *)((longlong)pvVar3 + 0xa8);
              pvVar1 = (void *)((longlong)pvVar10 + 0xa8);
            } while (cVar2 == '\0');
            pvVar1 = (void *)((longlong)pvVar4 + -0x150);
            do {
              pvVar7 = pvVar4;
              pvVar9 = pvVar1;
              pvVar4 = (void *)((longlong)pvVar7 + -0xa8);
              if (pvVar4 <= _Src) break;
              cVar2 = FUN_1490187dc(param_3,(longlong)pvVar7 + -0x80,(longlong)_Src + 0x28);
              pvVar1 = (void *)((longlong)pvVar9 + -0xa8);
            } while (cVar2 == '\0');
            if (pvVar4 < pvVar10) goto LAB_14901833a;
            memcpy(local_f0,pvVar10,0xa8);
            memcpy(pvVar10,pvVar4,0xa8);
            memcpy(pvVar4,local_f0,0xa8);
          } while( true );
        }
        for (; local_418 = plVar6, pvVar4 = _Src, pvVar10 = _Src, _Src < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0xa8)) {
          while (pvVar9 = pvVar4, pvVar4 = (void *)((longlong)pvVar10 + 0xa8), pvVar4 <= _Src_00) {
            cVar2 = FUN_1490187dc(param_3,(longlong)pvVar9 + 0x28,(longlong)pvVar10 + 0xd0);
            pvVar10 = pvVar4;
            if (cVar2 == '\0') {
              pvVar4 = pvVar9;
            }
          }
          memcpy(local_f0,pvVar9,0xa8);
          memcpy(pvVar9,_Src_00,0xa8);
          memcpy(_Src_00,local_f0,0xa8);
          plVar6 = local_418;
        }
        goto LAB_1490184c3;
      }
LAB_1490184dd:
      FUN_1490184f0(pvVar10,uVar5,param_3);
      plVar6 = local_418;
LAB_1490184c3:
      plVar6 = plVar6 + -3;
    } while (&local_3f8 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14901833a:
  memcpy(local_f0,_Src,0xa8);
  memcpy(_Src,pvVar4,0xa8);
  memcpy(pvVar4,local_f0,0xa8);
  iVar8 = local_40c + -1;
  pvVar7 = (void *)((longlong)pvVar7 + -0x150);
  if ((longlong)pvVar9 - (longlong)local_408 < (longlong)local_400 - (longlong)pvVar3) {
    plVar6 = local_418;
    if (pvVar10 < _Src_00) {
      *local_418 = (longlong)pvVar10;
      local_418[1] = (longlong)_Src_00;
      *(int *)(local_418 + 2) = iVar8;
      plVar6 = local_418 + 3;
    }
    pvVar10 = _Src;
    if (pvVar4 <= (void *)((longlong)_Src + 0xa8U)) goto LAB_1490184c3;
  }
  else {
    if ((void *)((longlong)_Src + 0xa8U) < pvVar4) {
      *local_418 = (longlong)_Src;
      local_418[1] = (longlong)pvVar7;
      *(int *)(local_418 + 2) = iVar8;
      local_418 = local_418 + 3;
    }
    plVar6 = local_418;
    _Src = pvVar3;
    pvVar7 = _Src_00;
    pvVar9 = _Src_00;
    if (_Src_00 <= pvVar10) goto LAB_1490184c3;
  }
  local_418 = plVar6;
  uVar5 = (int)((ulonglong)((longlong)pvVar9 - (longlong)_Src) >> 3) * 0x3cf3cf3d + 1;
  pvVar4 = _Src;
  _Src = pvVar10;
  _Src_00 = pvVar7;
  if (iVar8 == 0) goto LAB_1490184dd;
  goto LAB_149018212;
}



// FUNCTION 1490184f0 FUN_1490184f0 body=746 status=ok
// SIG undefined FUN_1490184f0(void)

void FUN_1490184f0(void *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_3;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar2 = iVar6;
joined_r0x000149018548:
    do {
      iVar7 = iVar6 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar3 = iVar6 * 2 + 2;
        if ((iVar3 < (int)param_2) &&
           (cVar1 = FUN_1490187dc(local_f8,(longlong)param_1 + (longlong)iVar3 * 0xa8 + 0x28,
                                  (longlong)param_1 + (longlong)iVar7 * 0xa8 + 0x28), cVar1 == '\0')
           ) {
          iVar7 = iVar3;
        }
        cVar1 = FUN_1490187dc(local_f8,(longlong)param_1 + (longlong)iVar6 * 0xa8 + 0x28,
                              (longlong)param_1 + (longlong)iVar7 * 0xa8 + 0x28);
        if (cVar1 != '\0') {
          pvVar4 = (void *)((longlong)iVar6 * 0xa8 + (longlong)param_1);
          pvVar8 = (void *)((longlong)iVar7 * 0xa8 + (longlong)param_1);
          memcpy(local_f0,pvVar4,0xa8);
          memcpy(pvVar4,pvVar8,0xa8);
          memcpy(pvVar8,local_f0,0xa8);
          iVar6 = iVar7;
          goto joined_r0x000149018548;
        }
      }
      bVar9 = iVar2 != 0;
      iVar6 = iVar2 + -1;
      iVar2 = iVar6;
    } while (bVar9);
    if (1 < (int)param_2) {
      pvVar4 = (void *)(((ulonglong)param_2 - 1) * 0xa8 + (longlong)param_1);
      memcpy(local_f0,param_1,0xa8);
      memcpy(param_1,pvVar4,0xa8);
      memcpy(pvVar4,local_f0,0xa8);
      if (param_2 != 2) {
        uVar5 = (ulonglong)param_2 - 1;
        do {
          iVar2 = 0;
          iVar7 = 1;
          iVar6 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar3 = iVar7;
            if (((longlong)iVar2 < (longlong)uVar5) &&
               (cVar1 = FUN_1490187dc(local_f8,(longlong)param_1 + (longlong)iVar2 * 0xa8 + 0x28,
                                      (longlong)param_1 + (longlong)iVar7 * 0xa8 + 0x28),
               cVar1 == '\0')) {
              iVar3 = iVar2;
            }
            cVar1 = FUN_1490187dc(local_f8,(longlong)param_1 + (longlong)iVar6 * 0xa8 + 0x28,
                                  (longlong)param_1 + (longlong)iVar3 * 0xa8 + 0x28);
            if (cVar1 == '\0') break;
            pvVar8 = (void *)((longlong)iVar6 * 0xa8 + (longlong)param_1);
            pvVar4 = (void *)((longlong)iVar3 * 0xa8 + (longlong)param_1);
            memcpy(local_f0,pvVar8,0xa8);
            memcpy(pvVar8,pvVar4,0xa8);
            memcpy(pvVar4,local_f0,0xa8);
            iVar2 = iVar3 * 2;
            iVar7 = iVar3 * 2 + 1;
            iVar6 = iVar3;
          } while ((longlong)iVar7 < (longlong)uVar5);
          pvVar4 = (void *)((uVar5 - 1) * 0xa8 + (longlong)param_1);
          memcpy(local_f0,param_1,0xa8);
          memcpy(param_1,pvVar4,0xa8);
          memcpy(pvVar4,local_f0,0xa8);
          bVar9 = 2 < uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490187dc FUN_1490187dc body=157 status=ok
// SIG undefined FUN_1490187dc(void)

uint FUN_1490187dc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  uVar3 = FUN_14901887a();
  uVar4 = FUN_14901887a(param_1,param_3);
  if (uVar3 == uVar4) {
    puVar5 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      puVar6 = (undefined2 *)*param_3;
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar5 = (undefined2 *)*param_2;
    }
    lVar7 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar5 + lVar7);
      uVar3 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar6 + lVar7);
      uVar4 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14901883d;
        }
        uVar3 = uVar3 - uVar4;
        goto LAB_14901886d;
      }
      if (uVar1 == 0) break;
LAB_14901883d:
      lVar7 = lVar7 + 2;
    }
    uVar3 = 0;
LAB_14901886d:
    uVar3 = uVar3 >> 0x1f;
  }
  else {
    uVar3 = (uint)(uVar3 < uVar4);
  }
  return uVar3;
}



// FUNCTION 14901887a FUN_14901887a body=393 status=ok
// SIG undefined FUN_14901887a(void)

int FUN_14901887a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a38768(param_2,&DAT_14ba66adc,3,1);
  iVar3 = 0x32;
  if (cVar2 != '\0') {
    local_38[0] = 0;
    local_38[1] = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1443e67ef(param_2,local_38);
    iVar3 = 0;
    if (*(int *)(param_1 + 5) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[4];
      iVar3 = *(int *)(param_1 + 5) + -1;
    }
    cVar2 = FUN_144a791f8(local_38,puVar4,iVar3,1);
    iVar3 = 10;
    if (cVar2 == '\0') {
      iVar3 = 0;
      if (*(int *)(param_1 + 3) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)param_1[2];
        iVar3 = *(int *)(param_1 + 3) + -1;
      }
      cVar2 = FUN_144a791f8(local_38,puVar4,iVar3,1);
      iVar3 = 0x14;
      if (cVar2 == '\0') {
        iVar3 = 0;
        if (*(int *)(param_1 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_1;
          iVar3 = *(int *)(param_1 + 1) + -1;
        }
        cVar2 = FUN_144a791f8(local_38,puVar4,iVar3,1);
        iVar3 = 0x28;
        if (cVar2 != '\0') {
          iVar3 = 0x1e;
        }
      }
    }
    iVar1 = iVar3 + 3;
    if ((int)uStack_50 < 2) {
      iVar1 = iVar3;
    }
    iVar3 = iVar1 + 5;
    if ((int)uStack_40 < 2) {
      iVar3 = iVar1;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149018a04 FUN_149018a04 body=52 status=ok
// SIG undefined FUN_149018a04(void)

undefined8 * FUN_149018a04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba69470;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149018a52 FUN_149018a52 body=29 status=ok
// SIG undefined FUN_149018a52(void)

bool FUN_149018a52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 149018a70 FUN_149018a70 body=26 status=ok
// SIG undefined FUN_149018a70(void)

bool FUN_149018a70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 149018a8a FUN_149018a8a body=24 status=ok
// SIG undefined FUN_149018a8a(void)

bool FUN_149018a8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 149018aae FUN_149018aae body=121 status=ok
// SIG undefined FUN_149018aae(void)

void FUN_149018aae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69470;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_149018da4(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ba69400;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 149018b28 FUN_149018b28 body=121 status=ok
// SIG undefined FUN_149018b28(void)

void FUN_149018b28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69470;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_149018da4(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ba69400;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 149018ba2 FUN_149018ba2 body=157 status=ok
// SIG undefined FUN_149018ba2(void)

void FUN_149018ba2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba69470;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_149018da4(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69400;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149018c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149018c40 FUN_149018c40 body=137 status=ok
// SIG undefined FUN_149018c40(void)

void FUN_149018c40(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14479d2ce(param_1 + 0x20);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_149018da4(&local_48,param_1 + 8);
  (*pcVar1)(uVar2,param_2,param_3,&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149018cca FUN_149018cca body=215 status=ok
// SIG undefined FUN_149018cca(void)

bool FUN_149018cca(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_50,0);
    lVar4 = local_50;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    local_50 = 0;
    local_48 = 0;
    FUN_149018da4(&local_50,param_1 + 8);
    (*pcVar1)(lVar3,param_2,param_3,&local_50);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149018da4 FUN_149018da4 body=130 status=ok
// SIG undefined FUN_149018da4(void)

void FUN_149018da4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 149018e28 FUN_149018e28 body=510 status=ok
// SIG undefined FUN_149018e28(void)

undefined8 FUN_149018e28(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if ((int)param_1[7] == (int)param_2[7]) {
    iVar1 = (int)param_1[1];
    if (iVar1 == (int)param_2[1]) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_1 + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(*param_2 + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_149018ea8;
LAB_149018e6c:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_149018e6c;
        }
        if (uVar6 != uVar3) {
          return 0;
        }
      }
    }
    else if ((int)param_2[1] + iVar1 != 1) {
      return 0;
    }
LAB_149018ea8:
    if (param_1[2] == param_2[2]) {
      iVar1 = (int)param_1[4];
      if (iVar1 == (int)param_2[4]) {
        if (1 < iVar1) {
          lVar5 = 0;
          while( true ) {
            uVar6 = *(ushort *)(param_1[3] + lVar5);
            uVar7 = (ulonglong)uVar6;
            uVar3 = *(ushort *)(param_2[3] + lVar5);
            if (uVar6 != uVar3) break;
            if (uVar6 == 0) goto LAB_149018f2a;
LAB_149018eee:
            lVar5 = lVar5 + 2;
          }
          if ((uVar3 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar4 = (ulonglong)uVar3;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_149018eee;
          }
          if (uVar6 != uVar3) {
            return 0;
          }
        }
      }
      else if ((int)param_2[4] + iVar1 != 1) {
        return 0;
      }
LAB_149018f2a:
      iVar1 = (int)param_1[6];
      if (iVar1 == (int)param_2[6]) {
        if (1 < iVar1) {
          lVar5 = 0;
          while( true ) {
            uVar6 = *(ushort *)(param_1[5] + lVar5);
            uVar7 = (ulonglong)uVar6;
            uVar3 = *(ushort *)(param_2[5] + lVar5);
            if (uVar6 != uVar3) break;
            if (uVar6 == 0) goto LAB_149018f9e;
LAB_149018f62:
            lVar5 = lVar5 + 2;
          }
          if ((uVar3 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar4 = (ulonglong)uVar3;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_149018f62;
          }
          if (uVar6 != uVar3) {
            return 0;
          }
        }
      }
      else if ((int)param_2[6] + iVar1 != 1) {
        return 0;
      }
LAB_149018f9e:
      iVar1 = (int)param_1[9];
      if (iVar1 == (int)param_2[9]) {
        if (1 < iVar1) {
          lVar5 = 0;
          while( true ) {
            uVar6 = *(ushort *)(param_1[8] + lVar5);
            uVar7 = (ulonglong)uVar6;
            uVar3 = *(ushort *)(param_2[8] + lVar5);
            if (uVar6 != uVar3) break;
            if (uVar6 == 0) goto LAB_14901900a;
LAB_149018fd6:
            lVar5 = lVar5 + 2;
          }
          if ((uVar3 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar4 = (ulonglong)uVar3;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_149018fd6;
          }
          if (uVar6 != uVar3) {
            return 0;
          }
        }
      }
      else if ((int)param_2[9] + iVar1 != 1) {
        return 0;
      }
LAB_14901900a:
      if ((int)param_1[10] == (int)param_2[10]) {
        uVar2 = FUN_1417161a2(param_1 + 0xb,param_2 + 0xb);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 149019026 FUN_149019026 body=149 status=ok
// SIG undefined FUN_149019026(void)

void FUN_149019026(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_149018e28(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(uVar5 >> 3) * 0x3cf3cf3d != -1) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0xa8;
    } while ((longlong)(int)lVar3 * 0xa8 - uVar5 != 0);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148fc34fa(param_1,iVar1);
  }
  FUN_148fc4a46((longlong)iVar1 * 0xa8 + *param_1,param_2);
  return;
}



// FUNCTION 1490190bc FUN_1490190bc body=315 status=ok
// SIG undefined FUN_1490190bc(void)

undefined4 * FUN_1490190bc(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490191f8(param_1,local_48);
  FUN_149019350(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1490192de(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149017f5c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490191f8 FUN_1490191f8 body=229 status=ok
// SIG undefined FUN_1490191f8(void)

int * FUN_1490191f8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490192de FUN_1490192de body=114 status=ok
// SIG undefined FUN_1490192de(void)

undefined8 FUN_1490192de(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1490193b4(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_149019480(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 149019350 FUN_149019350 body=100 status=ok
// SIG undefined FUN_149019350(void)

undefined8 * FUN_149019350(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1490193b4 FUN_1490193b4 body=203 status=ok
// SIG undefined FUN_1490193b4(void)

int FUN_1490193b4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1490193fe:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_149019474;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149019474;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149019465;
    }
  }
  return -1;
LAB_149019474:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149019465:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1490193fe;
}



// FUNCTION 149019480 FUN_149019480 body=114 status=ok
// SIG undefined FUN_149019480(void)

void FUN_149019480(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490194f2 FUN_1490194f2 body=253 status=ok
// SIG undefined FUN_1490194f2(void)

void FUN_1490194f2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_149019568:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1490195d7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1490195d7;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1490195dd;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1490195dd;
      goto LAB_1490195c9;
    }
  }
  return;
LAB_1490195d7:
  if (uVar7 == uVar6) {
LAB_1490195dd:
    FUN_1490195f0(param_1);
    return;
  }
LAB_1490195c9:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_149019568;
}



// FUNCTION 1490195f0 FUN_1490195f0 body=90 status=ok
// SIG undefined FUN_1490195f0(void)

void FUN_1490195f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14901964a();
  return;
}



// FUNCTION 14901964a FUN_14901964a body=51 status=ok
// SIG undefined FUN_14901964a(void)

void FUN_14901964a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_149019480(param_1,param_2);
  return;
}



// FUNCTION 14901967e FUN_14901967e body=315 status=ok
// SIG undefined FUN_14901967e(void)

undefined4 * FUN_14901967e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490197ba(param_1,local_48);
  FUN_149019906(param_3,local_40);
  *(undefined4 *)(local_40 + 0xd) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14901989c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x6c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xd) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149019c32(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490197ba FUN_1490197ba body=226 status=ok
// SIG undefined FUN_1490197ba(void)

int * FUN_1490197ba(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140275bcc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 14901989c FUN_14901989c body=105 status=ok
// SIG undefined FUN_14901989c(void)

undefined8 FUN_14901989c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14680adbc(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x70 + *param_1);
    FUN_1468074a6(_Dst);
    memmove(_Dst,param_3,0x68);
    FUN_149019bbe(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 149019906 FUN_149019906 body=180 status=ok
// SIG undefined FUN_149019906(void)

undefined8 * FUN_149019906(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_3c = 0;
  local_28 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1490199bc(param_2 + 3,&uStack_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1468074e6(&uStack_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490199bc FUN_1490199bc body=123 status=ok
// SIG undefined FUN_1490199bc(void)

undefined8 * FUN_1490199bc(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_149019a38();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 149019a38 FUN_149019a38 body=389 status=ok
// SIG undefined FUN_149019a38(void)

longlong * FUN_149019a38(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_140b7cb8c(*local_78 + (longlong)iVar6 * 0xb8 + 8);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149019bbe FUN_149019bbe body=116 status=ok
// SIG undefined FUN_149019bbe(void)

void FUN_149019bbe(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 149019c32 FUN_149019c32 body=476 status=ok
// SIG undefined FUN_149019c32(void)

void FUN_149019c32(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x70;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x6c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x68 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149019e10 FUN_149019e10 body=337 status=ok
// SIG undefined FUN_149019e10(void)

undefined4 * FUN_149019e10(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406e28c6(param_1,local_40);
  FUN_146ffc296(param_3,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_1406e2804(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1406e2aa2(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149019f62 FUN_149019f62 body=754 status=ok
// SIG undefined FUN_149019f62(void)

void FUN_149019f62(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_398 [40];
  longlong *local_370;
  int local_364;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_358;
    do {
      puVar10 = (undefined8 *)*plVar8;
      puVar11 = (undefined8 *)plVar8[1];
      local_364 = (int)plVar8[2];
      uVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar10) >> 4) + 1;
      puVar12 = puVar10;
      puVar13 = puVar11;
      local_370 = plVar8;
      if (local_364 != 0) {
LAB_14901a032:
        plVar8 = local_370;
        if (8 < (int)uVar6) {
          uVar1 = puVar10[(ulonglong)(uVar6 >> 1) * 2];
          uVar2 = (puVar10 + (ulonglong)(uVar6 >> 1) * 2)[1];
          uVar3 = puVar10[1];
          puVar10[(ulonglong)(uVar6 >> 1) * 2] = *puVar10;
          (puVar10 + (ulonglong)(uVar6 >> 1) * 2)[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          puVar15 = puVar13 + 2;
          puVar9 = puVar10;
          local_360 = puVar12;
          local_58 = uVar1;
          uStack_50 = uVar2;
          do {
            puVar4 = puVar9 + 2;
            puVar14 = puVar9 + 2;
            do {
              puVar9 = puVar14;
              puVar12 = puVar4;
              if (puVar13 < puVar9) break;
              cVar5 = FUN_14901a460(param_3,puVar10,puVar9);
              puVar4 = puVar12 + 2;
              puVar14 = puVar9 + 2;
            } while (cVar5 == '\0');
            puVar4 = puVar15 + -4;
            do {
              puVar14 = puVar15;
              puVar7 = puVar4;
              puVar15 = puVar14 + -2;
              if (puVar15 <= puVar10) break;
              cVar5 = FUN_14901a460(param_3,puVar15,puVar10);
              puVar4 = puVar7 + -2;
            } while (cVar5 == '\0');
            if (puVar15 < puVar9) goto LAB_14901a0f3;
            uVar1 = *puVar9;
            uVar2 = puVar9[1];
            uVar3 = puVar14[-1];
            *puVar9 = *puVar15;
            puVar9[1] = uVar3;
            local_58._0_4_ = (undefined4)uVar1;
            local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar2;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)puVar15 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
            local_58 = uVar1;
            uStack_50 = uVar2;
          } while( true );
        }
        for (; local_370 = plVar8, puVar12 = puVar10, puVar11 = puVar10, puVar10 < puVar13;
            puVar13 = puVar13 + -2) {
          while (puVar15 = puVar12, puVar11 = puVar11 + 2, puVar11 <= puVar13) {
            cVar5 = FUN_14901a460(param_3,puVar15,puVar11);
            puVar12 = puVar11;
            if (cVar5 == '\0') {
              puVar12 = puVar15;
            }
          }
          local_58 = *puVar15;
          uStack_50 = puVar15[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          uVar1 = puVar13[1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
          plVar8 = local_370;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_14901a228;
      }
LAB_14901a242:
      FUN_14901a255(puVar10,uVar6,param_3);
      plVar8 = local_370;
LAB_14901a228:
      plVar8 = plVar8 + -3;
    } while (&local_358 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14901a0f3:
  local_58 = *puVar10;
  uStack_50 = puVar10[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = puVar14[-1];
  *puVar10 = *puVar15;
  puVar10[1] = uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar15 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
  local_364 = local_364 + -1;
  puVar14 = puVar14 + -4;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar7 - (longlong)local_360 < (longlong)puVar11 - (longlong)puVar12) {
    plVar8 = local_370;
    if (puVar9 < puVar13) {
      *local_370 = (longlong)puVar9;
      local_370[1] = (longlong)puVar13;
      *(int *)(local_370 + 2) = local_364;
      plVar8 = local_370 + 3;
    }
    puVar12 = puVar10;
    puVar11 = puVar7;
    if (puVar15 <= puVar10 + 2) goto LAB_14901a228;
  }
  else {
    if (puVar10 + 2 < puVar15) {
      *local_370 = (longlong)puVar10;
      local_370[1] = (longlong)puVar14;
      *(int *)(local_370 + 2) = local_364;
      local_370 = local_370 + 3;
    }
    plVar8 = local_370;
    puVar10 = puVar9;
    puVar14 = puVar13;
    puVar11 = puVar13;
    if (puVar13 <= puVar9) goto LAB_14901a228;
  }
  local_370 = plVar8;
  uVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar12) >> 4) + 1;
  puVar13 = puVar14;
  if (local_364 == 0) goto LAB_14901a242;
  goto LAB_14901a032;
}



// FUNCTION 14901a255 FUN_14901a255 body=521 status=ok
// SIG undefined FUN_14901a255(void)

void FUN_14901a255(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar7;
joined_r0x00014901a29f:
    do {
      iVar6 = iVar7 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar8 = iVar7 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           (cVar5 = FUN_14901a460(param_3,param_1 + (longlong)iVar8 * 2,
                                  param_1 + (longlong)iVar6 * 2), cVar5 == '\0')) {
          iVar6 = iVar8;
        }
        puVar10 = param_1 + (longlong)iVar7 * 2;
        puVar11 = param_1 + (longlong)iVar6 * 2;
        cVar5 = FUN_14901a460(param_3,puVar10,puVar11);
        if (cVar5 != '\0') {
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
          iVar7 = iVar6;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x00014901a29f;
        }
      }
      bVar13 = iVar9 != 0;
      iVar7 = iVar9 + -1;
      iVar9 = iVar7;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar12 * 2)[1];
      *param_1 = param_1[uVar12 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10 = param_1 + uVar12 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar6 = 1;
          iVar9 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar8 = iVar6;
            if (((longlong)iVar7 < (longlong)uVar12) &&
               (cVar5 = FUN_14901a460(param_3,param_1 + (longlong)iVar7 * 2,
                                      param_1 + (longlong)iVar6 * 2), cVar5 == '\0')) {
              iVar8 = iVar7;
            }
            puVar10 = param_1 + (longlong)iVar9 * 2;
            puVar11 = param_1 + (longlong)iVar8 * 2;
            cVar5 = FUN_14901a460(param_3,puVar10,puVar11);
            if (cVar5 == '\0') break;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar11[1];
            *puVar10 = *puVar11;
            puVar10[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar11 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
            iVar7 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar9 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar12;
          uVar12 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14901a460 FUN_14901a460 body=140 status=ok
// SIG undefined FUN_14901a460(void)

undefined4 FUN_14901a460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a06ecc(local_38,param_3);
  FUN_144a06ecc(local_48,param_2);
  uVar1 = FUN_1490187dc(param_1,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901a4ed FUN_14901a4ed body=46 status=ok
// SIG undefined FUN_14901a4ed(void)

void FUN_14901a4ed(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1408e76da(param_1 + 2);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return;
}



// FUNCTION 14901a51c FUN_14901a51c body=150 status=ok
// SIG undefined FUN_14901a51c(void)

void FUN_14901a51c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14901a5b4 FUN_14901a5b4 body=62 status=ok
// SIG undefined FUN_14901a5b4(void)

void FUN_14901a5b4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14901a5f2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xf8,8);
  }
  return;
}



// FUNCTION 14901a5f2 FUN_14901a5f2 body=114 status=ok
// SIG undefined FUN_14901a5f2(void)

ulonglong FUN_14901a5f2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xf8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14901a62b;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xf8,8);
      param_2 = param_2 / 0xf8;
    }
  }
LAB_14901a62b:
  return param_2 & 0xffffffff;
}



// FUNCTION 14901a664 FUN_14901a664 body=52 status=ok
// SIG undefined FUN_14901a664(void)

void FUN_14901a664(longlong *param_1)

{
  FUN_14901a698();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14901a698 FUN_14901a698 body=89 status=ok
// SIG undefined FUN_14901a698(void)

void FUN_14901a698(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14901a6f2 FUN_14901a6f2 body=52 status=ok
// SIG undefined FUN_14901a6f2(void)

void FUN_14901a6f2(longlong *param_1)

{
  FUN_14901a726();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14901a726 FUN_14901a726 body=89 status=ok
// SIG undefined FUN_14901a726(void)

void FUN_14901a726(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14901a780 FUN_14901a780 body=312 status=ok
// SIG undefined FUN_14901a780(void)

undefined4 * FUN_14901a780(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14901a8ba(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14901a9a0(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14901aa8e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901a8ba FUN_14901a8ba body=229 status=ok
// SIG undefined FUN_14901a8ba(void)

int * FUN_14901a8ba(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14901a9a0 FUN_14901a9a0 body=124 status=ok
// SIG undefined FUN_14901a9a0(void)

undefined8 FUN_14901a9a0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14901aa1c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14901aa1c FUN_14901aa1c body=114 status=ok
// SIG undefined FUN_14901aa1c(void)

void FUN_14901aa1c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14901aa8e FUN_14901aa8e body=477 status=ok
// SIG undefined FUN_14901aa8e(void)

void FUN_14901aa8e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14901ac6c FUN_14901ac6c body=312 status=ok
// SIG undefined FUN_14901ac6c(void)

undefined4 * FUN_14901ac6c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14901ada6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14901ae8c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14901af7a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901ada6 FUN_14901ada6 body=229 status=ok
// SIG undefined FUN_14901ada6(void)

int * FUN_14901ada6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14901ae8c FUN_14901ae8c body=124 status=ok
// SIG undefined FUN_14901ae8c(void)

undefined8 FUN_14901ae8c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14901af08(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14901af08 FUN_14901af08 body=114 status=ok
// SIG undefined FUN_14901af08(void)

void FUN_14901af08(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14901af7a FUN_14901af7a body=477 status=ok
// SIG undefined FUN_14901af7a(void)

void FUN_14901af7a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14901b158 FUN_14901b158 body=164 status=ok
// SIG undefined FUN_14901b158(void)

void FUN_14901b158(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14901b1d8;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901b1d8:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14901b1fc FUN_14901b1fc body=243 status=ok
// SIG undefined FUN_14901b1fc(void)

undefined8 * FUN_14901b1fc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb12780,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14cb12788;
      lVar6 = (longlong)(int)DAT_14cb12788;
      DAT_14cb12788 = DAT_14cb12788 + 1;
      if (DAT_14cb1278c < DAT_14cb12788) {
        FUN_1447a71f6(&DAT_14cb12780,uVar3);
      }
      lVar2 = DAT_14cb12780;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb12780 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901b2f0 FUN_14901b2f0 body=29 status=ok
// SIG undefined FUN_14901b2f0(void)

undefined8 FUN_14901b2f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901b328 FUN_14901b328 body=29 status=ok
// SIG undefined FUN_14901b328(void)

bool FUN_14901b328(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901b346 FUN_14901b346 body=26 status=ok
// SIG undefined FUN_14901b346(void)

bool FUN_14901b346(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901b360 FUN_14901b360 body=24 status=ok
// SIG undefined FUN_14901b360(void)

bool FUN_14901b360(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901b384 FUN_14901b384 body=93 status=ok
// SIG undefined FUN_14901b384(void)

void FUN_14901b384(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69680;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901b3e2 FUN_14901b3e2 body=93 status=ok
// SIG undefined FUN_14901b3e2(void)

void FUN_14901b3e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69680;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901b440 FUN_14901b440 body=126 status=ok
// SIG undefined FUN_14901b440(void)

void FUN_14901b440(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba69680;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901b4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901b4be FUN_14901b4be body=38 status=ok
// SIG undefined FUN_14901b4be(void)

void FUN_14901b4be(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901b4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14901b4e4 FUN_14901b4e4 body=150 status=ok
// SIG undefined FUN_14901b4e4(void)

bool FUN_14901b4e4(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14901b57e FUN_14901b57e body=29 status=ok
// SIG undefined FUN_14901b57e(void)

undefined8 FUN_14901b57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901b5b6 FUN_14901b5b6 body=29 status=ok
// SIG undefined FUN_14901b5b6(void)

bool FUN_14901b5b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901b5d4 FUN_14901b5d4 body=26 status=ok
// SIG undefined FUN_14901b5d4(void)

bool FUN_14901b5d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901b5ee FUN_14901b5ee body=24 status=ok
// SIG undefined FUN_14901b5ee(void)

bool FUN_14901b5ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901b606 FUN_14901b606 body=93 status=ok
// SIG undefined FUN_14901b606(void)

void FUN_14901b606(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14ba696f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 14901b664 FUN_14901b664 body=93 status=ok
// SIG undefined FUN_14901b664(void)

void FUN_14901b664(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14ba696f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 14901b6c2 FUN_14901b6c2 body=126 status=ok
// SIG undefined FUN_14901b6c2(void)

void FUN_14901b6c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba696f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901b731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901b740 FUN_14901b740 body=35 status=ok
// SIG undefined FUN_14901b740(void)

void FUN_14901b740(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901b75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14901b764 FUN_14901b764 body=142 status=ok
// SIG undefined FUN_14901b764(void)

bool FUN_14901b764(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901b7f4 FUN_14901b7f4 body=230 status=ok
// SIG undefined FUN_14901b7f4(void)

undefined8 * FUN_14901b7f4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901b8dc FUN_14901b8dc body=29 status=ok
// SIG undefined FUN_14901b8dc(void)

undefined8 FUN_14901b8dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901b914 FUN_14901b914 body=29 status=ok
// SIG undefined FUN_14901b914(void)

bool FUN_14901b914(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901b932 FUN_14901b932 body=26 status=ok
// SIG undefined FUN_14901b932(void)

bool FUN_14901b932(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901b94c FUN_14901b94c body=24 status=ok
// SIG undefined FUN_14901b94c(void)

bool FUN_14901b94c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901b970 FUN_14901b970 body=93 status=ok
// SIG undefined FUN_14901b970(void)

void FUN_14901b970(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba697d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901b9ce FUN_14901b9ce body=93 status=ok
// SIG undefined FUN_14901b9ce(void)

void FUN_14901b9ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba697d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901ba2c FUN_14901ba2c body=126 status=ok
// SIG undefined FUN_14901ba2c(void)

void FUN_14901ba2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba697d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901ba9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901baaa FUN_14901baaa body=38 status=ok
// SIG undefined FUN_14901baaa(void)

void FUN_14901baaa(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901bacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14901bad0 FUN_14901bad0 body=150 status=ok
// SIG undefined FUN_14901bad0(void)

bool FUN_14901bad0(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14901bb6a FUN_14901bb6a body=29 status=ok
// SIG undefined FUN_14901bb6a(void)

undefined8 FUN_14901bb6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901bba2 FUN_14901bba2 body=29 status=ok
// SIG undefined FUN_14901bba2(void)

bool FUN_14901bba2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901bbc0 FUN_14901bbc0 body=26 status=ok
// SIG undefined FUN_14901bbc0(void)

bool FUN_14901bbc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901bbda FUN_14901bbda body=24 status=ok
// SIG undefined FUN_14901bbda(void)

bool FUN_14901bbda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901bbfe FUN_14901bbfe body=93 status=ok
// SIG undefined FUN_14901bbfe(void)

void FUN_14901bbfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba698b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901bc5c FUN_14901bc5c body=93 status=ok
// SIG undefined FUN_14901bc5c(void)

void FUN_14901bc5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba698b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901bcba FUN_14901bcba body=126 status=ok
// SIG undefined FUN_14901bcba(void)

void FUN_14901bcba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba698b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901bd29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901bd38 FUN_14901bd38 body=56 status=ok
// SIG undefined FUN_14901bd38(void)

void FUN_14901bd38(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901bd6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14901bd70 FUN_14901bd70 body=182 status=ok
// SIG undefined FUN_14901bd70(void)

bool FUN_14901bd70(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901be2a FUN_14901be2a body=29 status=ok
// SIG undefined FUN_14901be2a(void)

undefined8 FUN_14901be2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901be62 FUN_14901be62 body=29 status=ok
// SIG undefined FUN_14901be62(void)

bool FUN_14901be62(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901be80 FUN_14901be80 body=26 status=ok
// SIG undefined FUN_14901be80(void)

bool FUN_14901be80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901be9a FUN_14901be9a body=24 status=ok
// SIG undefined FUN_14901be9a(void)

bool FUN_14901be9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901beb2 FUN_14901beb2 body=93 status=ok
// SIG undefined FUN_14901beb2(void)

void FUN_14901beb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901bf10 FUN_14901bf10 body=93 status=ok
// SIG undefined FUN_14901bf10(void)

void FUN_14901bf10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901bf6e FUN_14901bf6e body=126 status=ok
// SIG undefined FUN_14901bf6e(void)

void FUN_14901bf6e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e62de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69920;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901bfdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901bfec FUN_14901bfec body=48 status=ok
// SIG undefined FUN_14901bfec(void)

void FUN_14901bfec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901c019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14901c01c FUN_14901c01c body=163 status=ok
// SIG undefined FUN_14901c01c(void)

bool FUN_14901c01c(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 14901c0c0 FUN_14901c0c0 body=29 status=ok
// SIG undefined FUN_14901c0c0(void)

undefined8 FUN_14901c0c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901c0f8 FUN_14901c0f8 body=29 status=ok
// SIG undefined FUN_14901c0f8(void)

bool FUN_14901c0f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901c116 FUN_14901c116 body=26 status=ok
// SIG undefined FUN_14901c116(void)

bool FUN_14901c116(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901c130 FUN_14901c130 body=24 status=ok
// SIG undefined FUN_14901c130(void)

bool FUN_14901c130(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901c154 FUN_14901c154 body=93 status=ok
// SIG undefined FUN_14901c154(void)

void FUN_14901c154(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901c1b2 FUN_14901c1b2 body=93 status=ok
// SIG undefined FUN_14901c1b2(void)

void FUN_14901c1b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba69a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba69990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901c210 FUN_14901c210 body=126 status=ok
// SIG undefined FUN_14901c210(void)

void FUN_14901c210(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba69a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901c27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901c28e FUN_14901c28e body=38 status=ok
// SIG undefined FUN_14901c28e(void)

void FUN_14901c28e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901c2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14901c2b4 FUN_14901c2b4 body=150 status=ok
// SIG undefined FUN_14901c2b4(void)

bool FUN_14901c2b4(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14901c34e FUN_14901c34e body=29 status=ok
// SIG undefined FUN_14901c34e(void)

undefined8 FUN_14901c34e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901c386 FUN_14901c386 body=29 status=ok
// SIG undefined FUN_14901c386(void)

bool FUN_14901c386(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901c3a4 FUN_14901c3a4 body=26 status=ok
// SIG undefined FUN_14901c3a4(void)

bool FUN_14901c3a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901c3be FUN_14901c3be body=24 status=ok
// SIG undefined FUN_14901c3be(void)

bool FUN_14901c3be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901c3d6 FUN_14901c3d6 body=93 status=ok
// SIG undefined FUN_14901c3d6(void)

void FUN_14901c3d6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901c434 FUN_14901c434 body=93 status=ok
// SIG undefined FUN_14901c434(void)

void FUN_14901c434(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901c492 FUN_14901c492 body=126 status=ok
// SIG undefined FUN_14901c492(void)

void FUN_14901c492(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69ab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901c501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901c510 FUN_14901c510 body=48 status=ok
// SIG undefined FUN_14901c510(void)

void FUN_14901c510(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901c53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 14901c540 FUN_14901c540 body=158 status=ok
// SIG undefined FUN_14901c540(void)

bool FUN_14901c540(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14901c5e0 FUN_14901c5e0 body=164 status=ok
// SIG undefined FUN_14901c5e0(void)

void FUN_14901c5e0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14901c660;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901c660:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14901c684 FUN_14901c684 body=29 status=ok
// SIG undefined FUN_14901c684(void)

undefined8 FUN_14901c684(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901c6bc FUN_14901c6bc body=29 status=ok
// SIG undefined FUN_14901c6bc(void)

bool FUN_14901c6bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901c6da FUN_14901c6da body=26 status=ok
// SIG undefined FUN_14901c6da(void)

bool FUN_14901c6da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901c6f4 FUN_14901c6f4 body=24 status=ok
// SIG undefined FUN_14901c6f4(void)

bool FUN_14901c6f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901c70c FUN_14901c70c body=93 status=ok
// SIG undefined FUN_14901c70c(void)

void FUN_14901c70c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901c76a FUN_14901c76a body=93 status=ok
// SIG undefined FUN_14901c76a(void)

void FUN_14901c76a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba69b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901c7c8 FUN_14901c7c8 body=126 status=ok
// SIG undefined FUN_14901c7c8(void)

void FUN_14901c7c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba69b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901c837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901c846 FUN_14901c846 body=35 status=ok
// SIG undefined FUN_14901c846(void)

void FUN_14901c846(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901c865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14901c86a FUN_14901c86a body=142 status=ok
// SIG undefined FUN_14901c86a(void)

bool FUN_14901c86a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901c8fa FUN_14901c8fa body=63 status=ok
// SIG undefined FUN_14901c8fa(void)

void FUN_14901c8fa(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145e17bb6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14901ca7e(param_1);
    return;
  }
  FUN_14901c93a(param_1);
  FUN_145e17bb6(param_1);
  return;
}



// FUNCTION 14901c93a FUN_14901c93a body=322 status=ok
// SIG undefined FUN_14901c93a(void)

void FUN_14901c93a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14901ca7e FUN_14901ca7e body=476 status=ok
// SIG undefined FUN_14901ca7e(void)

void FUN_14901ca7e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x80;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x7c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901cc5c FUN_14901cc5c body=413 status=ok
// SIG undefined FUN_14901cc5c(void)

void FUN_14901cc5c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14095c99c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140eca382(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x80 + lVar2 + -0x7c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x20;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14901cdfa FUN_14901cdfa body=315 status=ok
// SIG undefined FUN_14901cdfa(void)

undefined4 * FUN_14901cdfa(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14901cf36(param_1,local_48);
  FUN_14901d0a4(param_3,local_40);
  *(undefined4 *)(local_40 + 0xf) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14901d01c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x7c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xf) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14901ca7e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901cf36 FUN_14901cf36 body=229 status=ok
// SIG undefined FUN_14901cf36(void)

int * FUN_14901cf36(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140eca382(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 14901d01c FUN_14901d01c body=136 status=ok
// SIG undefined FUN_14901d01c(void)

undefined8 FUN_14901d01c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_14901d110(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x80);
    FUN_145e17b70(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x80),param_3,0x78);
    FUN_14901d1dc(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 14901d0a4 FUN_14901d0a4 body=108 status=ok
// SIG undefined FUN_14901d0a4(void)

undefined8 * FUN_14901d0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  param_2[2] = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined1 *)((longlong)param_2 + 0x22) = *(undefined1 *)((longlong)puVar2 + 0x12);
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(puVar2 + 2);
  FUN_145aeb3d6(param_2 + 5,puVar2 + 3);
  return param_2;
}



// FUNCTION 14901d110 FUN_14901d110 body=203 status=ok
// SIG undefined FUN_14901d110(void)

int FUN_14901d110(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14901d15a:
      lVar10 = (longlong)iVar1 * 0x80;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14901d1d0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14901d1d0;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14901d1c1;
    }
  }
  return -1;
LAB_14901d1d0:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14901d1c1:
  iVar1 = *(int *)(lVar4 + 0x78 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14901d15a;
}



// FUNCTION 14901d1dc FUN_14901d1dc body=114 status=ok
// SIG undefined FUN_14901d1dc(void)

void FUN_14901d1dc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14901d24e FUN_14901d24e body=101 status=ok
// SIG undefined FUN_14901d24e(void)

undefined8 * FUN_14901d24e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_14901d2b4(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 14901d2b4 FUN_14901d2b4 body=159 status=ok
// SIG undefined FUN_14901d2b4(void)

undefined8 * FUN_14901d2b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1410b2022(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14901d354 FUN_14901d354 body=230 status=ok
// SIG undefined FUN_14901d354(void)

undefined8 * FUN_14901d354(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901d43c FUN_14901d43c body=164 status=ok
// SIG undefined FUN_14901d43c(void)

void FUN_14901d43c(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14901d4bc;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901d4bc:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14901d4e0 FUN_14901d4e0 body=230 status=ok
// SIG undefined FUN_14901d4e0(void)

undefined8 * FUN_14901d4e0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901d5c8 FUN_14901d5c8 body=130 status=ok
// SIG undefined FUN_14901d5c8(void)

void FUN_14901d5c8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14901d64c FUN_14901d64c body=230 status=ok
// SIG undefined FUN_14901d64c(void)

undefined8 * FUN_14901d64c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901d734 FUN_14901d734 body=130 status=ok
// SIG undefined FUN_14901d734(void)

void FUN_14901d734(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14901d7b8 FUN_14901d7b8 body=175 status=ok
// SIG undefined FUN_14901d7b8(void)

void FUN_14901d7b8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14901d841;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901d841:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14901d87c FUN_14901d87c body=148 status=ok
// SIG undefined FUN_14901d87c(void)

void FUN_14901d87c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ba6a3a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14901e3c2(puVar1 + 1,param_3);
  uVar2 = FUN_144a3f946();
  puVar1[3] = uVar2;
  *puVar1 = &PTR_FUN_14ba6a330;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = FUN_14901d910;
  return;
}



// FUNCTION 14901d910 FUN_14901d910 body=233 status=ok
// SIG undefined FUN_14901d910(void)

void FUN_14901d910(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x180))();
  local_40 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x2f8))(local_58,param_2,param_1 + 0x2d);
    }
  }
  FUN_1443f0fba(param_1,param_3,param_4,param_5);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(param_5);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901d9fa FUN_14901d9fa body=297 status=ok
// SIG undefined FUN_14901d9fa(void)

void FUN_14901d9fa(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  puVar1 = local_98;
  local_90 = 3;
  *local_98 = &PTR_LAB_14a1c8830;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba6a410;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_14901db24;
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar2 = FUN_144a88394(uVar2);
  local_88 = 0;
  local_80 = 0;
  FUN_14487d8d8(&local_88,&local_98);
  local_48 = 1;
  local_a0 = 0xbf800000;
  local_a8 = 0;
  FUN_1406f3fee(uVar2,param_1 + 0x2e,&local_88,0x41f00000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  FUN_1449db362(&local_98);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901db24 FUN_14901db24 body=85 status=ok
// SIG undefined FUN_14901db24(void)

void FUN_14901db24(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[5] != '\x02') {
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*param_1 + 0x2a0))(0,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901db7a FUN_14901db7a body=92 status=ok
// SIG undefined FUN_14901db7a(void)

void FUN_14901db7a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (param_1[0x2e] != 0)) {
    param_1 = param_1 + 0x2e;
    uVar2 = FUN_144a88394(lVar1);
    lVar1 = FUN_144a61814(uVar2,param_1);
    if (lVar1 != 0) {
      FUN_1405a424c(uVar2,*param_1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14901dbd6 FUN_14901dbd6 body=339 status=ok
// SIG undefined FUN_14901dbd6(void)

void FUN_14901dbd6(longlong param_1)

{
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined2 *)(param_1 + 0x29) = 0;
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  FUN_14901ddb8(param_1 + 0x30,&local_150);
  *(undefined4 *)(param_1 + 0x148) = local_38;
  FUN_14124efea(&local_150);
  FUN_14901db7a(param_1);
  if (*(char *)(param_1 + 0x28) != '\x03') {
    *(undefined1 *)(param_1 + 0x28) = 3;
    FUN_14901e446(param_1 + 0x150,3);
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901dd2a FUN_14901dd2a body=50 status=ok
// SIG undefined FUN_14901dd2a(void)

undefined8 FUN_14901dd2a(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1400b4698();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_144a7af92(lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14901dd60 FUN_14901dd60 body=42 status=ok
// SIG undefined FUN_14901dd60(void)

undefined1 FUN_14901dd60(void)

{
  FUN_140033559("..\\Plugins\\Online\\OnlineFramework\\Source\\Rejoin\\Public\\RejoinCheck.h",0xcf,
                L"Pure virtual not implemented (%s)",L"URejoinCheck::GetRejoinStateFromSearchResult"
               );
  return 3;
}



// FUNCTION 14901dd8a FUN_14901dd8a body=41 status=ok
// SIG undefined FUN_14901dd8a(void)

void FUN_14901dd8a(void)

{
  FUN_140033559("..\\Plugins\\Online\\OnlineFramework\\Source\\Rejoin\\Public\\RejoinCheck.h",0xef,
                L"Pure virtual not implemented (%s)",L"URejoinCheck::RejoinViaSession");
  return;
}



// FUNCTION 14901ddb8 FUN_14901ddb8 body=301 status=ok
// SIG undefined FUN_14901ddb8(void)

longlong FUN_14901ddb8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 == param_2) {
    FUN_14901dee6(param_1 + 0x28,param_2 + 0x28);
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    plVar2 = *(longlong **)(param_2 + 0x10);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(longlong **)(param_1 + 0x10) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x20) = 0;
    FUN_14901dee6(param_1 + 0x28,param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x100) = 0;
    plVar2 = *(longlong **)(param_2 + 0x108);
    plVar3 = *(longlong **)(param_1 + 0x108);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x108) = 0;
      *(longlong **)(param_1 + 0x108) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 14901dee6 FUN_14901dee6 body=121 status=ok
// SIG undefined FUN_14901dee6(void)

longlong FUN_14901dee6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_14901df60(param_1 + 0x38,param_2 + 0x38);
  FUN_14901dfbe(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 14901df60 FUN_14901df60 body=93 status=ok
// SIG undefined FUN_14901df60(void)

longlong FUN_14901df60(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148da0e64(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14901dfbe FUN_14901dfbe body=93 status=ok
// SIG undefined FUN_14901dfbe(void)

longlong FUN_14901dfbe(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148da1064(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14901e01c FUN_14901e01c body=52 status=ok
// SIG undefined FUN_14901e01c(void)

undefined8 * FUN_14901e01c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba6a3a0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901e06a FUN_14901e06a body=29 status=ok
// SIG undefined FUN_14901e06a(void)

bool FUN_14901e06a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 14901e088 FUN_14901e088 body=26 status=ok
// SIG undefined FUN_14901e088(void)

bool FUN_14901e088(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 14901e0a2 FUN_14901e0a2 body=24 status=ok
// SIG undefined FUN_14901e0a2(void)

bool FUN_14901e0a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 14901e0c6 FUN_14901e0c6 body=121 status=ok
// SIG undefined FUN_14901e0c6(void)

void FUN_14901e0c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba6a3a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14901e3c2(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ba6a330;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14901e140 FUN_14901e140 body=121 status=ok
// SIG undefined FUN_14901e140(void)

void FUN_14901e140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba6a3a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14901e3c2(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ba6a330;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14901e1ba FUN_14901e1ba body=154 status=ok
// SIG undefined FUN_14901e1ba(void)

void FUN_14901e1ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba6a3a0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14901e3c2(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6a330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901e254 FUN_14901e254 body=151 status=ok
// SIG undefined FUN_14901e254(void)

void FUN_14901e254(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14479d2ce(param_1 + 0x20);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_50 = 0;
  local_48 = 0;
  FUN_14901e3c2(&local_50,param_1 + 8);
  local_58 = &local_50;
  (*pcVar1)(uVar2,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901e2ec FUN_14901e2ec body=211 status=ok
// SIG undefined FUN_14901e2ec(void)

bool FUN_14901e2ec(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_1400841de(param_1 + 0x20,&local_58);
    lVar4 = local_58;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    local_58 = 0;
    local_50 = 0;
    FUN_14901e3c2(&local_58,param_1 + 8);
    local_68 = &local_58;
    (*pcVar1)(lVar3,param_2,param_3,param_4);
  }
  if (lVar4 != 0) {
    FUN_140113f3a(lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901e3c2 FUN_14901e3c2 body=130 status=ok
// SIG undefined FUN_14901e3c2(void)

void FUN_14901e3c2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14901e446 FUN_14901e446 body=164 status=ok
// SIG undefined FUN_14901e446(void)

void FUN_14901e446(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14901e4c6;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901e4c6:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14901e4ea FUN_14901e4ea body=29 status=ok
// SIG undefined FUN_14901e4ea(void)

undefined8 FUN_14901e4ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901e522 FUN_14901e522 body=29 status=ok
// SIG undefined FUN_14901e522(void)

bool FUN_14901e522(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14901e540 FUN_14901e540 body=26 status=ok
// SIG undefined FUN_14901e540(void)

bool FUN_14901e540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14901e55a FUN_14901e55a body=24 status=ok
// SIG undefined FUN_14901e55a(void)

bool FUN_14901e55a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14901e572 FUN_14901e572 body=93 status=ok
// SIG undefined FUN_14901e572(void)

void FUN_14901e572(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901e5d0 FUN_14901e5d0 body=93 status=ok
// SIG undefined FUN_14901e5d0(void)

void FUN_14901e5d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901e62e FUN_14901e62e body=123 status=ok
// SIG undefined FUN_14901e62e(void)

void FUN_14901e62e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6a410;
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



// FUNCTION 14901e6aa FUN_14901e6aa body=35 status=ok
// SIG undefined FUN_14901e6aa(void)

void FUN_14901e6aa(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014901e6c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14901e6ce FUN_14901e6ce body=130 status=ok
// SIG undefined FUN_14901e6ce(void)

bool FUN_14901e6ce(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901e752 FUN_14901e752 body=31 status=ok
// SIG undefined FUN_14901e752(void)

undefined8 FUN_14901e752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14901e78e FUN_14901e78e body=93 status=ok
// SIG undefined FUN_14901e78e(void)

void FUN_14901e78e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901e7ec FUN_14901e7ec body=123 status=ok
// SIG undefined FUN_14901e7ec(void)

void FUN_14901e7ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6a480;
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



// FUNCTION 14901e868 FUN_14901e868 body=21 status=ok
// SIG undefined FUN_14901e868(void)

undefined8 FUN_14901e868(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14901e87e FUN_14901e87e body=148 status=ok
// SIG undefined FUN_14901e87e(void)

void FUN_14901e87e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba6a610;
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14901f3f9(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 14901e912 FUN_14901e912 body=198 status=ok
// SIG undefined FUN_14901e912(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14901e912(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf61e0) {
    FUN_144b3d300(&DAT_14cbf61e0);
    if (DAT_14cbf61e0 == -1) {
      _DAT_14cbf6160 = &PTR_FUN_14ba6a610;
      _DAT_14cbf6168 = 0;
      _DAT_14cbf6170 = 0;
      _DAT_14cbf6178 = 0;
      uRam000000014cbf6180 = 0;
      _DAT_14cbf6188 = 2;
      _DAT_14cbf618c = 0;
      uRam000000014cbf6194 = 0;
      _DAT_14cbf619c = 0x200000000;
      _DAT_14cbf61a4 = 0;
      ram0x00014cbf61ac = 0;
      _DAT_14cbf61b4 = 0;
      uRam000000014cbf61bc = 0;
      ram0x00014cbf61c4 = 0;
      DAT_14cbf61cc = 0;
      DAT_14cbf61d0._0_4_ = 0;
      DAT_14cbf61d0._4_4_ = 0;
      DAT_14cbf61d8 = 0;
      atexit((_func_5014 *)&LAB_1443f148c);
      _Init_thread_footer(&DAT_14cbf61e0);
      return;
    }
  }
  return;
}



// FUNCTION 14901e9d8 FUN_14901e9d8 body=1746 status=ok
// SIG undefined FUN_14901e9d8(void)

void FUN_14901e9d8(void)

{
  ulonglong uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  longlong *plVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined8 *local_348;
  ulonglong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  plVar7 = (longlong *)FUN_1448c2e86();
  FUN_14901f0ac(&local_360);
  (**(code **)(*plVar7 + 0x28))(plVar7,local_360,&DAT_14cbf6168);
  iVar18 = DAT_14cbf61c8;
  lVar13 = (longlong)(int)DAT_14cbf61c8;
  DAT_14cbf61c8 = DAT_14cbf61c8 + 1;
  if (DAT_14cbf61cc < DAT_14cbf61c8) {
    FUN_14901f442(iVar18);
  }
  puVar5 = DAT_14cbf61c0;
  *(undefined8 *)((longlong)DAT_14cbf61c0 + lVar13 * 0xc) = 0x3c00000000;
  *(undefined4 *)((longlong)puVar5 + lVar13 * 0xc + 8) = 0x3f800000;
  uVar19 = DAT_14cbf61c8;
  lVar13 = (longlong)(int)DAT_14cbf61c8;
  DAT_14cbf61c8 = DAT_14cbf61c8 + 1;
  if (DAT_14cbf61cc < DAT_14cbf61c8) {
    FUN_14901f442(uVar19);
  }
  puVar5 = DAT_14cbf61c0;
  *(undefined8 *)((longlong)DAT_14cbf61c0 + lVar13 * 0xc) = 0x1e000000b4;
  *(undefined4 *)((longlong)puVar5 + lVar13 * 0xc + 8) = 0x3f000000;
  uVar19 = DAT_14cbf61c8;
  lVar13 = (longlong)(int)DAT_14cbf61c8;
  DAT_14cbf61c8 = DAT_14cbf61c8 + 1;
  if (DAT_14cbf61cc < DAT_14cbf61c8) {
    FUN_14901f442(uVar19);
  }
  puVar5 = DAT_14cbf61c0;
  *(undefined8 *)((longlong)DAT_14cbf61c0 + lVar13 * 0xc) = 0xf0000012c;
  *(undefined4 *)((longlong)puVar5 + lVar13 * 0xc + 8) = 0;
  uVar19 = DAT_14cbf61c8;
  puVar5 = DAT_14cbf61c0;
  lVar13 = (longlong)(int)DAT_14cbf61c8;
  if (1 < lVar13) {
    memset(local_338,0,0x2f0);
    local_348 = puVar5;
    local_340 = (longlong)puVar5 + lVar13 * 0xc + -0xc;
    fVar26 = logf((float)(int)uVar19);
    local_338[0] = (int)(longlong)(fVar26 + fVar26);
    ppuVar9 = &local_348;
    do {
      plVar10 = *ppuVar9;
      plVar14 = ppuVar9[1];
      iVar18 = *(int *)(ppuVar9 + 2);
      iVar23 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar10) >> 2) * -0x55555555;
      uVar19 = iVar23 + 1;
      plVar15 = plVar10;
      plVar11 = plVar10;
      plVar7 = plVar14;
      if (iVar18 != 0) {
LAB_14901eb67:
        if (8 < (int)uVar19) {
          uVar16 = (ulonglong)(uVar19 >> 1);
          iVar23 = *(int *)((longlong)plVar11 + uVar16 * 0xc + 8);
          lVar13 = *(longlong *)((longlong)plVar11 + uVar16 * 0xc);
          *(int *)((longlong)plVar11 + uVar16 * 0xc + 8) = (int)plVar11[1];
          *(longlong *)((longlong)plVar11 + uVar16 * 0xc) = *plVar11;
          *(int *)(plVar11 + 1) = iVar23;
          *plVar11 = lVar13;
          plVar24 = (longlong *)((longlong)plVar7 + 0xc);
          plVar10 = plVar11;
          do {
            plVar6 = (longlong *)((longlong)plVar10 + 0xc);
            plVar17 = (longlong *)((longlong)plVar10 + 0xc);
            do {
              plVar10 = plVar17;
              plVar22 = plVar6;
              if (plVar7 < plVar10) break;
              plVar6 = (longlong *)((longlong)plVar22 + 0xc);
              plVar17 = (longlong *)((longlong)plVar10 + 0xc);
            } while ((int)*plVar10 <= (int)*plVar11);
            plVar6 = plVar24 + -3;
            do {
              plVar17 = plVar24;
              plVar21 = plVar6;
              plVar24 = (longlong *)((longlong)plVar17 + -0xc);
              if (plVar24 <= plVar11) break;
              plVar6 = (longlong *)((longlong)plVar21 + -0xc);
            } while ((int)*plVar11 <= *(int *)plVar24);
            if (plVar24 < plVar10) goto LAB_14901ec2f;
            lVar4 = plVar10[1];
            lVar13 = *plVar10;
            *(int *)(plVar10 + 1) = *(int *)((longlong)plVar17 + -4);
            *plVar10 = *plVar24;
            *(int *)((longlong)plVar17 + -4) = (int)lVar4;
            *plVar24 = lVar13;
          } while( true );
        }
        plVar6 = uStack_350;
        if (plVar11 < plVar7) {
          do {
            plVar10 = plVar11;
            if ((longlong *)((longlong)plVar11 + 0xcU) <= plVar7) {
              plVar14 = (longlong *)((longlong)plVar11 + 0xcU);
              iVar18 = (int)*plVar11;
              do {
                iVar23 = (int)*plVar14;
                iVar20 = iVar18;
                if (iVar18 <= iVar23) {
                  iVar20 = iVar23;
                }
                if (iVar18 < iVar23) {
                  plVar10 = plVar14;
                }
                plVar14 = (longlong *)((longlong)plVar14 + 0xc);
                iVar18 = iVar20;
              } while (plVar14 <= plVar7);
            }
            lVar13 = plVar10[1];
            uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,(int)lVar13);
            local_358 = *plVar10;
            *(int *)(plVar10 + 1) = (int)plVar7[1];
            *plVar10 = *plVar7;
            *(int *)(plVar7 + 1) = (int)lVar13;
            *plVar7 = local_358;
            plVar7 = (longlong *)((longlong)plVar7 - 0xc);
            plVar6 = uStack_350;
          } while (plVar11 < plVar7);
        }
        goto LAB_14901ef5c;
      }
LAB_14901ecee:
      plVar6 = uStack_350;
      if (uVar19 != 0) {
        iVar18 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
        iVar23 = iVar18;
joined_r0x00014901ed15:
        do {
          iVar20 = iVar18 * 2 + 1;
          uStack_350._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
          if (iVar20 < (int)uVar19) {
            iVar12 = iVar18 * 2 + 2;
            if ((iVar12 < (int)uVar19) &&
               (*(int *)((longlong)plVar10 + (longlong)iVar20 * 0xc) <=
                *(int *)((longlong)plVar10 + (longlong)iVar12 * 0xc))) {
              iVar20 = iVar12;
            }
            if (*(int *)((longlong)plVar10 + (longlong)iVar18 * 0xc) <
                *(int *)((longlong)plVar10 + (longlong)iVar20 * 0xc)) {
              plVar7 = (longlong *)((longlong)plVar10 + (longlong)iVar18 * 0xc);
              plVar14 = (longlong *)((longlong)plVar10 + (longlong)iVar20 * 0xc);
              lVar13 = plVar7[1];
              uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,(int)lVar13);
              local_358 = *plVar7;
              *(int *)(plVar7 + 1) = (int)plVar14[1];
              *plVar7 = *plVar14;
              *(int *)(plVar14 + 1) = (int)lVar13;
              *plVar14 = local_358;
              iVar18 = iVar20;
              plVar6 = uStack_350;
              goto joined_r0x00014901ed15;
            }
          }
          bVar25 = iVar23 != 0;
          iVar18 = iVar23 + -1;
          iVar23 = iVar18;
        } while (bVar25);
        if (1 < (int)uVar19) {
          uVar16 = (ulonglong)uVar19 - 1;
          lVar13 = plVar10[1];
          uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,(int)lVar13);
          local_358 = *plVar10;
          *(int *)(plVar10 + 1) = *(int *)((longlong)plVar10 + uVar16 * 0xc + 8);
          *plVar10 = *(longlong *)((longlong)plVar10 + uVar16 * 0xc);
          *(int *)((longlong)plVar10 + uVar16 * 0xc + 8) = (int)lVar13;
          *(longlong *)((longlong)plVar10 + uVar16 * 0xc) = local_358;
          plVar6 = uStack_350;
          if (uVar19 != 2) {
            do {
              iVar18 = 0;
              iVar20 = 1;
              iVar23 = 0;
              do {
                iVar18 = iVar18 + 2;
                iVar12 = iVar20;
                if (((longlong)iVar18 < (longlong)uVar16) &&
                   (*(int *)((longlong)plVar10 + (longlong)iVar20 * 0xc) <=
                    *(int *)((longlong)plVar10 + (longlong)iVar18 * 0xc))) {
                  iVar12 = iVar18;
                }
                if (*(int *)((longlong)plVar10 + (longlong)iVar12 * 0xc) <=
                    *(int *)((longlong)plVar10 + (longlong)iVar23 * 0xc)) break;
                piVar2 = (int *)((longlong)plVar10 + (longlong)iVar23 * 0xc);
                piVar3 = (int *)((longlong)plVar10 + (longlong)iVar12 * 0xc);
                iVar18 = piVar2[2];
                uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,iVar18);
                uVar8 = *(undefined8 *)piVar2;
                piVar2[2] = piVar3[2];
                *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
                piVar3[2] = iVar18;
                *(undefined8 *)piVar3 = uVar8;
                iVar18 = iVar12 * 2;
                iVar20 = iVar12 * 2 + 1;
                iVar23 = iVar12;
              } while ((longlong)iVar20 < (longlong)uVar16);
              uVar1 = uVar16 - 1;
              lVar13 = plVar10[1];
              uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,(int)lVar13);
              local_358 = *plVar10;
              *(int *)(plVar10 + 1) = *(int *)((longlong)plVar10 + uVar1 * 0xc + 8);
              *plVar10 = *(longlong *)((longlong)plVar10 + uVar1 * 0xc);
              *(int *)((longlong)plVar10 + uVar1 * 0xc + 8) = (int)lVar13;
              *(longlong *)((longlong)plVar10 + uVar1 * 0xc) = local_358;
              bVar25 = 2 < uVar16;
              uVar16 = uVar1;
              plVar6 = uStack_350;
            } while (bVar25);
          }
        }
      }
LAB_14901ef5c:
      uStack_350 = plVar6;
      ppuVar9 = ppuVar9 + -3;
    } while (&local_348 <= ppuVar9);
  }
  if (((DAT_14cbf61d0 == 0) || (DAT_14cbf61d8 == (longlong *)0x0)) || ((int)DAT_14cbf61d8[1] < 1)) {
    local_348 = (undefined8 *)0x0;
    local_340 = local_340 & 0xffffffff00000000;
    FUN_1446efa72(&local_348,0,3,0x10);
    puVar5 = local_348;
    local_340 = CONCAT44(local_340._4_4_,3);
    *local_348 = &PTR_LAB_149e02020;
    uVar8 = FUN_144a3f946();
    puVar5[2] = uVar8;
    *puVar5 = &PTR_FUN_14ba6a6e0;
    puVar5[3] = &DAT_14cbf6160;
    puVar5[4] = FUN_1443f1498;
    *(undefined4 *)(puVar5 + 5) = 0;
    uVar8 = FUN_1401cb356();
    local_368 = 0;
    FUN_1405f67fc(uVar8,&local_358,&local_348,L"FPlayTimeLimitImpl_Tick");
    plVar7 = DAT_14cbf61d8;
    DAT_14cbf61d0 = local_358;
    DAT_14cbf61d8 = uStack_350;
    local_358 = 0;
    uStack_350 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      if (uStack_350 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)uStack_350 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*uStack_350 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_348);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14901ec2f:
  lVar13 = plVar11[1];
  uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,(int)lVar13);
  local_358 = *plVar11;
  *(int *)(plVar11 + 1) = *(int *)((longlong)plVar17 + -4);
  *plVar11 = *plVar24;
  *(int *)((longlong)plVar17 + -4) = (int)lVar13;
  *plVar24 = local_358;
  iVar18 = iVar18 + -1;
  plVar17 = plVar17 + -3;
  plVar6 = uStack_350;
  if ((longlong)plVar21 - (longlong)plVar15 < (longlong)plVar14 - (longlong)plVar22) {
    if (plVar10 < plVar7) {
      *ppuVar9 = plVar10;
      ppuVar9[1] = plVar7;
      *(int *)(ppuVar9 + 2) = iVar18;
      ppuVar9 = ppuVar9 + 3;
    }
    plVar10 = plVar11;
    plVar14 = plVar21;
    if (plVar24 <= (longlong *)((longlong)plVar11 + 0xcU)) goto LAB_14901ef5c;
  }
  else {
    if ((longlong *)((longlong)plVar11 + 0xcU) < plVar24) {
      *ppuVar9 = plVar11;
      ppuVar9[1] = plVar17;
      *(int *)(ppuVar9 + 2) = iVar18;
      ppuVar9 = ppuVar9 + 3;
    }
    plVar11 = plVar22;
    plVar17 = plVar7;
    plVar14 = plVar7;
    if (plVar7 <= plVar10) goto LAB_14901ef5c;
  }
  iVar23 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar11) >> 2) * -0x55555555;
  uVar19 = iVar23 + 1;
  plVar15 = plVar11;
  plVar11 = plVar10;
  plVar7 = plVar17;
  if (iVar18 == 0) goto LAB_14901ecee;
  goto LAB_14901eb67;
}



// FUNCTION 14901f0ac FUN_14901f0ac body=120 status=ok
// SIG undefined FUN_14901f0ac(void)

undefined8 * FUN_14901f0ac(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6200) {
    FUN_144b3d300(&DAT_14cbf6200);
    if (DAT_14cbf6200 == -1) {
      FUN_1446f470e(&DAT_14cbf61f8,L"OnlinePlayTimeLimit",1);
      _Init_thread_footer(&DAT_14cbf6200);
    }
  }
  *param_1 = DAT_14cbf61f8;
  return param_1;
}



// FUNCTION 14901f124 FUN_14901f124 body=244 status=ok
// SIG undefined FUN_14901f124(void)

void FUN_14901f124(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1448c2e86();
  FUN_14901f0ac(&local_20);
  (**(code **)(*plVar2 + 0x30))(plVar2,local_20,&DAT_14cbf6168);
  if (((DAT_14cbf61d0 != 0) && (DAT_14cbf61d8 != (longlong *)0x0)) && (0 < (int)DAT_14cbf61d8[1])) {
    FUN_1401cb356();
    local_30 = DAT_14cbf61d0;
    local_28 = DAT_14cbf61d8;
    if (DAT_14cbf61d8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)DAT_14cbf61d8 + 0xc) = *(int *)((longlong)DAT_14cbf61d8 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = DAT_14cbf61d8;
    DAT_14cbf61d0 = 0;
    DAT_14cbf61d8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  FUN_14901f3f9(DAT_14cbf61a8,DAT_14cbf61b0);
  DAT_14cbf61b0 = 0;
  if (DAT_14cbf61b4 != 0) {
    FUN_14901f69e();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901f21a FUN_14901f21a body=220 status=ok
// SIG undefined FUN_14901f21a(void)

void FUN_14901f21a(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((cVar2 != '\0') && ((longlong)*(int *)(param_1 + 0x68) != 0)) &&
     (**(int **)(param_1 + 0x60) <= param_3)) {
    lVar3 = (longlong)*(int *)(param_1 + 0x68) * 0xc;
    piVar1 = *(int **)(param_1 + 0x60);
    do {
      piVar4 = piVar1;
      lVar3 = lVar3 + -0xc;
      if (lVar3 == 0) break;
      piVar1 = piVar4 + 3;
    } while (piVar4[3] <= param_3);
    if ((piVar4 != (int *)0x0) && (piVar4[1] != 0)) {
      QueryPerformanceCounter(&local_30);
      local_30 = (LARGE_INTEGER)
                 ((double)(piVar4[1] * 0x3c) +
                 (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0);
      local_28 = 1;
      lVar3 = *param_2;
      goto LAB_14901f263;
    }
  }
  local_28 = 0;
  lVar3 = *param_2;
LAB_14901f263:
  (**(code **)(lVar3 + 0x30))(param_2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901f2f8 FUN_14901f2f8 body=177 status=ok
// SIG undefined FUN_14901f2f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14901f2f8(void)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cbf61b8 = 0;
  QueryPerformanceCounter(&local_50);
  lVar2 = DAT_14cbf61a8;
  lVar3 = (longlong)DAT_14cbf61b0;
  if (lVar3 != 0) {
    dVar1 = (double)local_50.QuadPart * DAT_14c83f420;
    lVar4 = 0;
    do {
      local_48 = 1;
      local_50 = (LARGE_INTEGER)(dVar1 + 16777216.0);
      (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x30))(*(longlong **)(lVar2 + lVar4),&local_50);
      lVar4 = lVar4 + 0x10;
    } while (lVar3 * 0x10 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901f3b0 FUN_14901f3b0 body=30 status=ok
// SIG undefined FUN_14901f3b0(void)

void FUN_14901f3b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return;
  }
  FUN_14901e912();
  FUN_14901f124();
  return;
}



// FUNCTION 14901f3ce FUN_14901f3ce body=43 status=ok
// SIG undefined FUN_14901f3ce(void)

undefined8 FUN_14901f3ce(undefined8 param_1,int param_2)

{
  FUN_14901e87e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14901f3f9 FUN_14901f3f9 body=73 status=ok
// SIG undefined FUN_14901f3f9(void)

void FUN_14901f3f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14901f442 FUN_14901f442 body=159 status=ok
// SIG undefined FUN_14901f442(void)

void FUN_14901f442(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cbf61c8;
  if (param_1 <= (int)DAT_14cbf61c8) {
    if (DAT_14cbf61cc == 0) {
      uVar2 = 4;
      if (4 < DAT_14cbf61c8) {
        uVar2 = DAT_14cbf61c8;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cbf61c8 * 3) >> 3) + (longlong)(int)DAT_14cbf61c8 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    DAT_14cbf61cc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cbf61c0,param_1,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


