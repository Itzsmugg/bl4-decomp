// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144002520 FUN_144002520 body=93 status=ok
// SIG undefined FUN_144002520(void)

void FUN_144002520(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af7d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14400257e FUN_14400257e body=93 status=ok
// SIG undefined FUN_14400257e(void)

void FUN_14400257e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af7d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440025dc FUN_1440025dc body=126 status=ok
// SIG undefined FUN_1440025dc(void)

void FUN_1440025dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5af7d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014400264b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144002664 FUN_144002664 body=20 status=ok
// SIG undefined FUN_144002664(void)

undefined1 FUN_144002664(longlong param_1)

{
  FUN_144002678(param_1 + 0x18);
  return 1;
}



// FUNCTION 144002678 FUN_144002678 body=583 status=ok
// SIG undefined FUN_144002678(void)

void FUN_144002678(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  lVar3 = *param_1;
  if (param_1[1] == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar4 = *(uint *)(lVar8 + 0x10);
      bVar10 = uVar4 == 0;
      if (bVar10) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar4 = uVar7;
      }
      uVar6 = (ulonglong)uVar4;
    }
  }
  iVar2 = *(int *)(lVar3 + 0x750);
  *(uint *)(lVar3 + 0x750) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x754) < iVar2 + 1U) {
    FUN_1489081e6(lVar3 + 0x748,iVar2);
  }
  *(ulonglong *)(*(longlong *)(lVar3 + 0x748) + (longlong)iVar2 * 8) =
       (ulonglong)uVar9 | uVar6 << 0x20;
  FUN_143ff5592(lVar3,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar3 + 0x5e1)) ^ 1);
  lVar8 = (**(code **)(*(longlong *)param_1[1] + 0x5f8))();
  if (lVar8 == 0) {
    return;
  }
  lVar8 = (**(code **)(*(longlong *)param_1[1] + 0x5f8))();
  if (lVar8 == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar8 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar4 = *(uint *)(lVar8 + 0x10);
      bVar10 = uVar4 == 0;
      if (bVar10) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar4 = uVar7;
      }
      uVar6 = (ulonglong)uVar4;
    }
  }
  iVar2 = *(int *)(lVar3 + 2000);
  *(uint *)(lVar3 + 2000) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x7d4) < iVar2 + 1U) {
    FUN_140585342(lVar3 + 0x7c8,iVar2);
  }
  *(ulonglong *)(*(longlong *)(lVar3 + 0x7c8) + (longlong)iVar2 * 8) =
       (ulonglong)uVar9 | uVar6 << 0x20;
  bVar1 = *(byte *)(lVar3 + 0x5e1);
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x5f8))();
  FUN_143ff5592(lVar3,uVar5,bVar1 ^ 1);
  return;
}



// FUNCTION 1440028c0 FUN_1440028c0 body=29 status=ok
// SIG undefined FUN_1440028c0(void)

undefined8 FUN_1440028c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440028f2 FUN_1440028f2 body=93 status=ok
// SIG undefined FUN_1440028f2(void)

void FUN_1440028f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144002950 FUN_144002950 body=93 status=ok
// SIG undefined FUN_144002950(void)

void FUN_144002950(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440029ae FUN_1440029ae body=126 status=ok
// SIG undefined FUN_1440029ae(void)

void FUN_1440029ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5af840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144002a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144002a36 FUN_144002a36 body=20 status=ok
// SIG undefined FUN_144002a36(void)

undefined1 FUN_144002a36(longlong param_1)

{
  FUN_144002a4a(param_1 + 0x18);
  return 1;
}



// FUNCTION 144002a4a FUN_144002a4a body=268 status=ok
// SIG undefined FUN_144002a4a(void)

void FUN_144002a4a(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (param_1[1] == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x770);
  *(uint *)(lVar2 + 0x770) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x774) < iVar1 + 1U) {
    FUN_1489081e6(lVar2 + 0x768,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x768) + (longlong)iVar1 * 8) =
       (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_143ff5592(lVar2,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar2 + 0x5e2)) ^ 1);
  return;
}



// FUNCTION 144002b56 FUN_144002b56 body=29 status=ok
// SIG undefined FUN_144002b56(void)

undefined8 FUN_144002b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144002b88 FUN_144002b88 body=93 status=ok
// SIG undefined FUN_144002b88(void)

void FUN_144002b88(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144002be6 FUN_144002be6 body=93 status=ok
// SIG undefined FUN_144002be6(void)

void FUN_144002be6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144002c44 FUN_144002c44 body=126 status=ok
// SIG undefined FUN_144002c44(void)

void FUN_144002c44(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5af8b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144002cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144002ccc FUN_144002ccc body=20 status=ok
// SIG undefined FUN_144002ccc(void)

undefined1 FUN_144002ccc(longlong param_1)

{
  FUN_144002ce0(param_1 + 0x18);
  return 1;
}



// FUNCTION 144002ce0 FUN_144002ce0 body=268 status=ok
// SIG undefined FUN_144002ce0(void)

void FUN_144002ce0(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (param_1[1] == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x780);
  *(uint *)(lVar2 + 0x780) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x784) < iVar1 + 1U) {
    FUN_1489081e6(lVar2 + 0x778,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x778) + (longlong)iVar1 * 8) =
       (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_143ff5592(lVar2,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar2 + 0x5e3)) ^ 1);
  return;
}



// FUNCTION 144002dec FUN_144002dec body=29 status=ok
// SIG undefined FUN_144002dec(void)

undefined8 FUN_144002dec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144002e1e FUN_144002e1e body=93 status=ok
// SIG undefined FUN_144002e1e(void)

void FUN_144002e1e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144002e7c FUN_144002e7c body=93 status=ok
// SIG undefined FUN_144002e7c(void)

void FUN_144002e7c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144002eda FUN_144002eda body=126 status=ok
// SIG undefined FUN_144002eda(void)

void FUN_144002eda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5af920;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144002f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144002f62 FUN_144002f62 body=20 status=ok
// SIG undefined FUN_144002f62(void)

undefined1 FUN_144002f62(longlong param_1)

{
  FUN_144002f76(param_1 + 0x18);
  return 1;
}



// FUNCTION 144002f76 FUN_144002f76 body=266 status=ok
// SIG undefined FUN_144002f76(void)

void FUN_144002f76(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (param_1[1] == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x790);
  *(uint *)(lVar2 + 0x790) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x794) < iVar1 + 1U) {
    FUN_144002080(lVar2 + 0x788,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x788) + (longlong)iVar1 * 8) =
       (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_143ff5592(lVar2,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar2 + 0x5e3)) ^ 1);
  return;
}



// FUNCTION 144003080 FUN_144003080 body=29 status=ok
// SIG undefined FUN_144003080(void)

undefined8 FUN_144003080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440030b2 FUN_1440030b2 body=93 status=ok
// SIG undefined FUN_1440030b2(void)

void FUN_1440030b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144003110 FUN_144003110 body=93 status=ok
// SIG undefined FUN_144003110(void)

void FUN_144003110(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5af990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14400316e FUN_14400316e body=126 status=ok
// SIG undefined FUN_14400316e(void)

void FUN_14400316e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5af990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440031dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440031f6 FUN_1440031f6 body=20 status=ok
// SIG undefined FUN_1440031f6(void)

undefined1 FUN_1440031f6(longlong param_1)

{
  FUN_14400320a(param_1 + 0x18);
  return 1;
}



// FUNCTION 14400320a FUN_14400320a body=266 status=ok
// SIG undefined FUN_14400320a(void)

void FUN_14400320a(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (param_1[1] == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x7e0);
  *(uint *)(lVar2 + 0x7e0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x7e4) < iVar1 + 1U) {
    FUN_1440021da(lVar2 + 0x7d8,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x7d8) + (longlong)iVar1 * 8) =
       (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_143ff5592(lVar2,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar2 + 0x5e3)) ^ 1);
  return;
}



// FUNCTION 144003314 FUN_144003314 body=29 status=ok
// SIG undefined FUN_144003314(void)

undefined8 FUN_144003314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144003346 FUN_144003346 body=93 status=ok
// SIG undefined FUN_144003346(void)

void FUN_144003346(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afa00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440033a4 FUN_1440033a4 body=93 status=ok
// SIG undefined FUN_1440033a4(void)

void FUN_1440033a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afa00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144003402 FUN_144003402 body=126 status=ok
// SIG undefined FUN_144003402(void)

void FUN_144003402(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5afa00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144003471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14400348a FUN_14400348a body=20 status=ok
// SIG undefined FUN_14400348a(void)

undefined1 FUN_14400348a(longlong param_1)

{
  FUN_14400349e(param_1 + 0x18);
  return 1;
}



// FUNCTION 14400349e FUN_14400349e body=268 status=ok
// SIG undefined FUN_14400349e(void)

void FUN_14400349e(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (param_1[1] == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x7a0);
  *(uint *)(lVar2 + 0x7a0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x7a4) < iVar1 + 1U) {
    FUN_1489081e6(lVar2 + 0x798,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x798) + (longlong)iVar1 * 8) =
       (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_143ff5592(lVar2,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar2 + 0x5e4)) ^ 1);
  return;
}



// FUNCTION 1440035aa FUN_1440035aa body=29 status=ok
// SIG undefined FUN_1440035aa(void)

undefined8 FUN_1440035aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440035dc FUN_1440035dc body=93 status=ok
// SIG undefined FUN_1440035dc(void)

void FUN_1440035dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afa70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14400363a FUN_14400363a body=93 status=ok
// SIG undefined FUN_14400363a(void)

void FUN_14400363a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afa70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144003698 FUN_144003698 body=126 status=ok
// SIG undefined FUN_144003698(void)

void FUN_144003698(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5afa70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144003707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144003720 FUN_144003720 body=20 status=ok
// SIG undefined FUN_144003720(void)

undefined1 FUN_144003720(longlong param_1)

{
  FUN_144003734(param_1 + 0x18);
  return 1;
}



// FUNCTION 144003734 FUN_144003734 body=266 status=ok
// SIG undefined FUN_144003734(void)

void FUN_144003734(longlong *param_1,undefined8 param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  if (param_1[1] == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(lVar2 + 0x7b0);
  *(uint *)(lVar2 + 0x7b0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x7b4) < iVar1 + 1U) {
    FUN_144002394(lVar2 + 0x7a8,iVar1);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0x7a8) + (longlong)iVar1 * 8) =
       (ulonglong)uVar7 | uVar4 << 0x20;
  FUN_143ff5592(lVar2,param_1[1],
                CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar2 + 0x5e4)) ^ 1);
  return;
}



// FUNCTION 14400383e FUN_14400383e body=29 status=ok
// SIG undefined FUN_14400383e(void)

undefined8 FUN_14400383e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440039da FUN_1440039da body=101 status=ok
// SIG undefined FUN_1440039da(void)

void FUN_1440039da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144003a40 FUN_144003a40 body=101 status=ok
// SIG undefined FUN_144003a40(void)

void FUN_144003a40(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144003aa6 FUN_144003aa6 body=134 status=ok
// SIG undefined FUN_144003aa6(void)

void FUN_144003aa6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5afae0;
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
                    /* WARNING: Could not recover jumptable at 0x000144003b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144003b3a FUN_144003b3a body=270 status=ok
// SIG undefined FUN_144003b3a(void)

undefined8 FUN_144003b3a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144003c42;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144003c42;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144003c42:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144003bf6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ffef3c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144003bf6;
    }
  }
  uVar6 = 0;
LAB_144003bf6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144003c49 FUN_144003c49 body=819 status=ok
// SIG undefined FUN_144003c49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144003c49(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb9e718);
  if (cVar1 == '\0') {
    _DAT_14cb9e718 = 0;
    uRam000000014cb9e720 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb9e728,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cb9e730,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cb9e738,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cb9e740,L"TimeOfDayForecastEvents",1);
  _DAT_14cb9e748 = 0x47efffffe0000000;
  _DAT_14cb9e750 = 0x47efffffe0000000;
  _DAT_14cb9e758 = 0x47efffffe0000000;
  _DAT_14cb9e760 = 0x47efffffe0000000;
  _DAT_14cb9e768 = 0x47efffffe0000000;
  _DAT_14cb9e770 = 0x47efffffe0000000;
  _DAT_14cb9e778 = 0x47efffffe0000000;
  _DAT_14cb9e780 = 0x47efffffe0000000;
  local_58 = "bone";
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  local_58 = "AssetRegistry";
  local_50 = 0xd;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb9e788 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/PhotoMode",&PTR_FUN_14b5aceb0,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/PhotoMode",&PTR_FUN_14b5adfb0,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/PhotoMode",&PTR_FUN_14b5af270,1,0);
  local_58 = "Use";
  local_50 = 3;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb9e9e0 = (ulonglong)uVar2;
  local_58 = "Sight";
  local_50 = 5;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb9e9e8 = (ulonglong)uVar2;
  local_58 = "TargetLock";
  local_50 = 10;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb9e9f0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb9e9f8,L"Head",1);
  FUN_1446f470e(&DAT_14cb9ea00,L"GbxDormant",1);
  FUN_140056680(&DAT_14cb9ea08,L"NS_Damage_Numbers");
  atexit((_func_5014 *)&LAB_143ffcdf0);
  local_58 = "Head";
  local_50 = 4;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cb9ea28 = (ulonglong)uVar2;
  local_58 = (char *)0x800000014b5af724;
  local_44 = 9;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_1465a10b8(&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144003ff7 FUN_144003ff7 body=69 status=ok
// SIG undefined FUN_144003ff7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144003ff7(void)

{
  _DAT_14cb9ec40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144004039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb9ec48,1);
  return;
}



// FUNCTION 14400403c FUN_14400403c body=49 status=ok
// SIG undefined FUN_14400403c(void)

void FUN_14400403c(void)

{
  FUN_144760e21(DAT_14cb9ec58,DAT_14cb9ec60);
  if (DAT_14cb9ec58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14400406e FUN_14400406e body=351 status=ok
// SIG undefined FUN_14400406e(void)

void FUN_14400406e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if ((*param_1 != 0) && ((longlong)(int)param_1[2] != 0)) {
    plVar9 = (longlong *)param_1[1];
    plVar8 = plVar9 + (longlong)(int)param_1[2] * 8;
    bVar7 = false;
    do {
      lVar5 = (longlong)*(int *)(*param_1 + 0x3f0);
      lVar2 = *(longlong *)(*param_1 + 1000);
      lVar4 = lVar5 << 0x20;
      uVar6 = lVar5 << 4;
      do {
        if (uVar6 == 0) goto LAB_1440040f8;
        plVar1 = (longlong *)(lVar2 + -0x10 + uVar6);
        lVar4 = lVar4 + -0x100000000;
        uVar6 = uVar6 - 0x10;
      } while (*(longlong *)(*plVar1 + 0x48) != *plVar9);
      if ((~uVar6 & 0xffffffff0) != 0) {
        lVar2 = *(longlong *)(lVar2 + (lVar4 >> 0x20) * 0x10);
        if ((*(uint *)(lVar2 + 0x34) >> 7 & 1) != (uint)*(byte *)(plVar9 + 7)) {
          *(uint *)(lVar2 + 0x34) =
               *(uint *)(lVar2 + 0x34) & 0xffffff7f | (uint)*(byte *)(plVar9 + 7) << 7;
          bVar7 = true;
        }
        if (((int)plVar9[2] != *(int *)(lVar2 + 0x58)) ||
           (cVar3 = FUN_1405d12b4(plVar9[1],*(undefined8 *)(lVar2 + 0x50)), cVar3 == '\0')) {
          FUN_140bee9ec((undefined8 *)(lVar2 + 0x50),plVar9 + 1);
        }
        if (((int)plVar9[4] != *(int *)(lVar2 + 0x68)) ||
           (cVar3 = FUN_145725518(plVar9[3],*(undefined8 *)(lVar2 + 0x60)), cVar3 == '\0')) {
          FUN_1457255b8((undefined8 *)(lVar2 + 0x60),plVar9 + 3);
        }
      }
LAB_1440040f8:
      plVar9 = plVar9 + 8;
    } while (plVar9 != plVar8);
    if (bVar7) {
      FUN_1405d0f74(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1440041ce FUN_1440041ce body=214 status=ok
// SIG undefined FUN_1440041ce(void)

void FUN_1440041ce(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_54 = (undefined4)param_4[2];
  uStack_50 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_4c = (undefined4)param_4[3];
  uStack_48 = *(undefined4 *)((longlong)param_4 + 0x1c);
  iVar1 = (int)param_4[3];
  uVar4 = *(int *)((longlong)param_4 + 0x14) - iVar1;
  local_60 = param_2;
  local_58 = param_3;
  if (uVar4 != 0 && iVar1 <= *(int *)((longlong)param_4 + 0x14)) {
    uVar3 = 0x200;
    if (uVar4 < 0x200) {
      uVar3 = uVar4;
    }
    lVar2 = *param_4;
    uStack_38 = (ulonglong)uVar3;
    FUN_1447403be(&local_40,0);
    memcpy(local_40,(void *)(iVar1 + lVar2),(ulonglong)uVar3);
  }
  FUN_148b7798e(param_1,&local_60);
  if ((*(uint *)(param_4 + 5) & 6) == 2) {
    FUN_14572555c(param_4,(undefined2)local_54,uStack_4c);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440042d4 FUN_1440042d4 body=612 status=ok
// SIG undefined FUN_1440042d4(void)

void FUN_1440042d4(longlong param_1)

{
  uint *puVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  lVar8 = FUN_1447210f0();
  if ((lVar8 != 0) && (lVar8 = FUN_1447210f0(param_1), 0 < *(int *)(param_1 + 0x3f0))) {
    dVar2 = *(double *)(lVar8 + 0x6d0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 1000) + lVar8 * 0x10);
      if (((~*(uint *)((longlong)plVar5 + 0x34) & 0xc0) == 0) &&
         ((double)*(float *)(plVar5 + 6) < dVar2 - (double)plVar5[8])) {
        if (0 < (int)plVar5[0xf]) {
          lVar11 = 0x38;
          lVar14 = 0;
          do {
            lVar6 = plVar5[0xe];
            puVar1 = (uint *)(lVar6 + -0x10 + lVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
            cVar7 = *(char *)(lVar6 + -0xc + lVar11);
            if ((cVar7 == '\x02') ||
               ((cVar7 == '\x01' &&
                (*(short *)(lVar6 + -0x26 + lVar11) != *(short *)(param_1 + 0x3c8))))) {
              if (*(int *)(lVar6 + lVar11) == 0) {
                plVar9 = (longlong *)0x0;
              }
              else {
                plVar9 = *(longlong **)(lVar6 + -8 + lVar11);
              }
              (**(code **)(*plVar9 + 0x58))();
            }
            lVar14 = lVar14 + 1;
            lVar11 = lVar11 + 0x50;
          } while (lVar14 < (int)plVar5[0xf]);
        }
        iVar3 = *(int *)((longlong)plVar5 + 0x5c);
        FUN_1447a1747(plVar5[10],(int)plVar5[0xb]);
        *(undefined4 *)(plVar5 + 0xb) = 0;
        if ((iVar3 < 0) && (*(int *)((longlong)plVar5 + 0x5c) != 0)) {
          FUN_1408be2c4(plVar5 + 10,0);
        }
        iVar3 = *(int *)((longlong)plVar5 + 0x6c);
        FUN_1405d0e5d(plVar5[0xc],(int)plVar5[0xd]);
        *(undefined4 *)(plVar5 + 0xd) = 0;
        if ((iVar3 < 0) && (*(int *)((longlong)plVar5 + 0x6c) != 0)) {
          FUN_148b7b97e(plVar5 + 0xc,0);
        }
        if ((*(int *)(param_1 + 0x3bc) == 0) || (uVar4 = *(uint *)(param_1 + 0x3b8), (int)uVar4 < 0)
           ) {
LAB_14400450b:
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) ||
                (*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x3bc))) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_14400450b;
            uVar13 = *puVar10;
          }
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0x390),uVar13);
        plVar5[8] = (longlong)dVar2;
        if (0 < (int)plVar5[0xf]) {
          lVar11 = 0;
          uVar12 = 0;
          do {
            lVar6 = plVar5[0xe];
            lVar14 = lVar11 + lVar6;
            if ((*(byte *)((longlong)plVar5 + 0x34) & 0x20) == 0) {
              cVar7 = FUN_148b78b82(lVar14,*(undefined2 *)(param_1 + 0x3c8));
              if ((cVar7 != '\0') && ((*(byte *)(param_1 + 0x448) & 0x10) != 0)) {
                FUN_1440041ce(param_1,plVar5[9],uVar12 & 0xffffffff,lVar14);
              }
            }
            else {
              cVar7 = FUN_148b78a68(lVar14);
              if (cVar7 != '\0') {
                (**(code **)(*plVar5 + 0x30))(plVar5,uVar12 & 0xffffffff);
              }
              if ((*(byte *)((longlong)plVar5 + 0x34) & 0x40) != 0) {
                *(undefined2 *)(lVar6 + 0x12 + lVar11) = *(undefined2 *)(param_1 + 0x3c8);
              }
            }
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + 0x50;
          } while ((longlong)uVar12 < (longlong)(int)plVar5[0xf]);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x3f0));
  }
  return;
}



// FUNCTION 144004538 FUN_144004538 body=272 status=ok
// SIG undefined FUN_144004538(void)

void FUN_144004538(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = (longlong)*(int *)(param_1 + 0x3f0) << 4;
  do {
    if (uVar4 == 0) goto LAB_144004624;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 1000) + -0x10 + uVar4);
    uVar4 = uVar4 - 0x10;
  } while (*(longlong *)(*plVar1 + 0x48) != *param_2);
  if ((int)(uVar4 >> 4) != -1) {
    uStack_68 = 0;
    uStack_64 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_5c = 2;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_78 = *(undefined8 *)((longlong)param_2 + 0xc);
    iStack_70 = *(int *)((longlong)param_2 + 0x14);
    uStack_6c = (undefined4)param_2[3];
    uVar3 = (int)param_2[2] - iStack_70;
    if (uVar3 != 0 && iStack_70 <= (int)param_2[2]) {
      uVar2 = 0x200;
      if (uVar3 < 0x200) {
        uVar2 = uVar3;
      }
      _Src = (void *)param_2[4];
      uStack_80 = (ulonglong)uVar2;
      FUN_1447403be(&local_88,0);
      memcpy(local_88,_Src,(ulonglong)uVar2);
    }
    FUN_1405d0ad4(param_1,uVar4 >> 4 & 0xffffffff,(int)param_2[1],&local_88);
    FUN_1405d0a1e(&local_88);
  }
LAB_144004624:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144004649 FUN_144004649 body=55 status=ok
// SIG undefined FUN_144004649(void)

void FUN_144004649(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ec78 == 0) {
    uVar1 = FUN_1410767c0();
    DAT_14cb9ec78 = FUN_14171c317(FUN_1465a19c9,uVar1,L"EGameplayDebuggerOverrideMode");
  }
  return;
}



// FUNCTION 144004680 FUN_144004680 body=69 status=ok
// SIG undefined FUN_144004680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144004680(void)

{
  _DAT_14cb9ed28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440046c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb9ed30,1);
  return;
}



// FUNCTION 1440046c5 FUN_1440046c5 body=49 status=ok
// SIG undefined FUN_1440046c5(void)

void FUN_1440046c5(void)

{
  FUN_144760e21(DAT_14cb9ed38,DAT_14cb9ed40);
  if (DAT_14cb9ed38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1440046f6 FUN_1440046f6 body=49 status=ok
// SIG undefined FUN_1440046f6(void)

void FUN_1440046f6(void)

{
  FUN_144760e21(DAT_14cb9ed50,DAT_14cb9ed58);
  if (DAT_14cb9ed50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144004728 FUN_144004728 body=164 status=ok
// SIG undefined FUN_144004728(void)

void FUN_144004728(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440047ce FUN_1440047ce body=174 status=ok
// SIG undefined FUN_1440047ce(void)

void FUN_1440047ce(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(*(longlong *)(param_1 + -0x380) + 0xd4) & 0x40080) != 0x80) {
    plVar3 = (longlong *)(param_1 + -0x390);
    local_1c = param_2;
    uVar1 = FUN_14477b072(plVar3,DAT_14cac9bd0);
    (**(code **)(*plVar3 + 0x248))(plVar3,uVar1,&local_1c);
    lVar2 = FUN_1447210f0(plVar3);
    if (lVar2 != 0) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,plVar3,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144004882 FUN_144004882 body=55 status=ok
// SIG undefined FUN_144004882(void)

void FUN_144004882(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9edc0 == 0) {
    uVar1 = FUN_1410767c0();
    DAT_14cb9edc0 = FUN_14171c317(FUN_1465a2194,uVar1,L"EGameplayDebuggerShape");
  }
  return;
}



// FUNCTION 1440048ba FUN_1440048ba body=48 status=ok
// SIG undefined FUN_1440048ba(void)

longlong FUN_1440048ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145868b90(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440049a4 FUN_1440049a4 body=36 status=ok
// SIG undefined FUN_1440049a4(void)

undefined8 FUN_1440049a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144004a74 FUN_144004a74 body=1204 status=ok
// SIG undefined FUN_144004a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144004a74(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&DAT_14cb9ea58,L"white");
  atexit((_func_5014 *)&LAB_144003f80);
  FUN_140056680(&DAT_14cb9ea68,L"green");
  atexit((_func_5014 *)&LAB_144003f91);
  FUN_140056680(&DAT_14cb9ea78,L"grey");
  atexit((_func_5014 *)&LAB_144003fa2);
  FUN_140056680(&DAT_14cb9ea88,L"green");
  atexit((_func_5014 *)&LAB_144003fb3);
  FUN_140056680(&DAT_14cb9ea98,L"black");
  atexit((_func_5014 *)&LAB_144003fc4);
  FUN_140056680(&DAT_14cb9eaa8,L"{white} | ");
  atexit((_func_5014 *)&LAB_144003fd5);
  FUN_140056680(&DAT_14cb9eab8,&DAT_149e16f6c);
  atexit((_func_5014 *)&LAB_144003fe6);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb9ead8);
  if (cVar1 == '\0') {
    _DAT_14cb9ead8 = 0;
    uRam000000014cb9eae0 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb9eb60,L"ClientDataPackPacket",1);
  FUN_1446f470e(&DAT_14cb9eb78,L"ServerResetViewPoint",1);
  FUN_1446f470e(&DAT_14cb9eb88,L"ServerSendCategoryInputEvent",1);
  FUN_1446f470e(&DAT_14cb9eb98,L"ServerSendExtensionInputEvent",1);
  FUN_1446f470e(&DAT_14cb9eba8,L"ServerSetCategoryEnabled",1);
  FUN_1446f470e(&DAT_14cb9ebb8,L"ServerSetDebugActor",1);
  FUN_1446f470e(&DAT_14cb9ebc8,L"ServerSetEnabled",1);
  FUN_1446f470e(&DAT_14cb9ebd8,L"ServerSetViewPoint",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/GameplayDebugger",&PTR_FUN_14b5b1c50,1,&PTR_FUN_14b5b1b80);
  local_58 = (char *)((ulonglong)local_58._4_4_ << 0x20);
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_14078dbce(&DAT_14cb9ec40,L"ai.debug.DetailedReplicationLogs",&local_58,
                L"Enable or disable very verbose replication logs for gameplay debugger");
  atexit(FUN_144003ff7);
  DAT_14cb9ec58 = 0;
  _DAT_14cb9ec60 = 0;
  _DAT_14cb9ec68 = 2;
  atexit(FUN_14400403c);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b5b35a0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GameplayDebugger",&PTR_FUN_14b5b3640,2,&PTR_FUN_14b5b35c0);
  local_58 = "AssetRegistry";
  local_50 = 0xd;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb9ed08 = (ulonglong)uVar2;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayDebugger",&PTR_FUN_14b5b3cc0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb9ed28,L"GameplayDebugger.AutoCreateGameplayDebuggerManager",&DAT_14c763db0,
                L"When false it stops auto-spawning the Gameplay Debugger Manager.");
  atexit(FUN_144004680);
  DAT_14cb9ed38 = 0;
  _DAT_14cb9ed40 = 0;
  _DAT_14cb9ed48 = 2;
  atexit(FUN_1440046c5);
  DAT_14cb9ed50 = 0;
  _DAT_14cb9ed58 = 0;
  _DAT_14cb9ed60 = 2;
  atexit(FUN_1440046f6);
  local_58 = (char *)0x800000014b5b3dd0;
  local_44 = 0x10;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_1465a1d1c(&local_58);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GameplayDebugger",&PTR_FUN_14b5b48f0,1,&PTR_FUN_14b5b48c0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GameplayDebugger",&PTR_FUN_14b5b5550,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b5b5aa0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GameplayDebugger",0,0,&PTR_FUN_14b5b5ac0);
  DAT_14cb9ee00 = DAT_14cb9ee00 & 0xffffffc0 | 0x11;
  DAT_14cb9ed00 = DAT_14cb9ed00 & 0xffffffc0 | 0x12;
  DAT_14cb9ee04 = DAT_14cb9ee04 & 0xffffffc0 | 0x14;
  DAT_14cb9ee08 = DAT_14cb9ee08 & 0xffffffc0 | 0x18;
  DAT_14cb9ee0c = DAT_14cb9ee0c & 0xffffffc0 | 0x10;
  DAT_14cb9eac8 = 0;
  DAT_14cb9ead0 = 0;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144004f2e FUN_144004f2e body=227 status=ok
// SIG undefined FUN_144004f2e(void)

longlong FUN_144004f2e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9efa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = &LAB_14400655e;
    local_38 = &LAB_1440069eb;
    local_40 = FUN_1440069ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"GbxDebugMenuImGuiCategory",&DAT_14cb9efa8,&DAT_1440069ea
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9efa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005015 FUN_144005015 body=130 status=ok
// SIG undefined FUN_144005015(void)

void FUN_144005015(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b7520;
  FUN_1446f470e(&local_20,L"Actor Parts",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005098 FUN_144005098 body=227 status=ok
// SIG undefined FUN_144005098(void)

longlong FUN_144005098(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ee10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144005012;
    local_40 = FUN_144005015;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_ActorParts",&DAT_14cb9ee10,
                  &DAT_144004f2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ee10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400517c FUN_14400517c body=47 status=ok
// SIG undefined FUN_14400517c(void)

longlong FUN_14400517c(void)

{
  if (DAT_14cb9efb0 == 0) {
    FUN_14073dd9a(&DAT_14cb9efb0,&PTR_FUN_14b5bb1b8);
  }
  return DAT_14cb9efb0;
}



// FUNCTION 1440051ab FUN_1440051ab body=47 status=ok
// SIG undefined FUN_1440051ab(void)

longlong FUN_1440051ab(void)

{
  if (DAT_14cb9ef80 == 0) {
    FUN_140f50038(&DAT_14cb9ef80,&PTR_s__Script_GbxDebugMenu_14b5bad28);
  }
  return DAT_14cb9ef80;
}



// FUNCTION 1440051da FUN_1440051da body=47 status=ok
// SIG undefined FUN_1440051da(void)

longlong FUN_1440051da(void)

{
  if (DAT_14cb9ee18 == 0) {
    FUN_14073dd9a(&DAT_14cb9ee18,&PTR_FUN_14b5b74d8);
  }
  return DAT_14cb9ee18;
}



// FUNCTION 14400520e FUN_14400520e body=130 status=ok
// SIG undefined FUN_14400520e(void)

void FUN_14400520e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b7900;
  FUN_1446f470e(&local_20,L"Essentials",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005292 FUN_144005292 body=227 status=ok
// SIG undefined FUN_144005292(void)

longlong FUN_144005292(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ee28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_14400520b;
    local_40 = FUN_14400520e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Essentials",&DAT_14cb9ee28,
                  &DAT_14400520a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ee28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005376 FUN_144005376 body=47 status=ok
// SIG undefined FUN_144005376(void)

longlong FUN_144005376(void)

{
  if (DAT_14cb9ee30 == 0) {
    FUN_14073dd9a(&DAT_14cb9ee30,&PTR_FUN_14b5b78b8);
  }
  return DAT_14cb9ee30;
}



// FUNCTION 1440053aa FUN_1440053aa body=130 status=ok
// SIG undefined FUN_1440053aa(void)

void FUN_1440053aa(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b7cb0;
  FUN_1446f470e(&local_20,L"Facts",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400542e FUN_14400542e body=227 status=ok
// SIG undefined FUN_14400542e(void)

longlong FUN_14400542e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ee40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_1440053a7;
    local_40 = FUN_1440053aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Facts",&DAT_14cb9ee40,&DAT_1440053a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ee40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005512 FUN_144005512 body=47 status=ok
// SIG undefined FUN_144005512(void)

longlong FUN_144005512(void)

{
  if (DAT_14cb9ee48 == 0) {
    FUN_14073dd9a(&DAT_14cb9ee48,&PTR_FUN_14b5b7c68);
  }
  return DAT_14cb9ee48;
}



// FUNCTION 144005546 FUN_144005546 body=130 status=ok
// SIG undefined FUN_144005546(void)

void FUN_144005546(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b8070;
  FUN_1446f470e(&local_20,L"GBX Gear Builder",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440055ca FUN_1440055ca body=227 status=ok
// SIG undefined FUN_1440055ca(void)

longlong FUN_1440055ca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ee58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144005543;
    local_40 = FUN_144005546;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_GearBuilder",&DAT_14cb9ee58,
                  &DAT_144005542);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ee58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440056ae FUN_1440056ae body=47 status=ok
// SIG undefined FUN_1440056ae(void)

longlong FUN_1440056ae(void)

{
  if (DAT_14cb9ee60 == 0) {
    FUN_14073dd9a(&DAT_14cb9ee60,&PTR_FUN_14b5b8028);
  }
  return DAT_14cb9ee60;
}



// FUNCTION 1440056e2 FUN_1440056e2 body=130 status=ok
// SIG undefined FUN_1440056e2(void)

void FUN_1440056e2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b8430;
  FUN_1446f470e(&local_20,L"GBX Inventory",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005766 FUN_144005766 body=227 status=ok
// SIG undefined FUN_144005766(void)

longlong FUN_144005766(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ee70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_1440056df;
    local_40 = FUN_1440056e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Inventory",&DAT_14cb9ee70,
                  &DAT_1440056de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ee70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400584a FUN_14400584a body=47 status=ok
// SIG undefined FUN_14400584a(void)

longlong FUN_14400584a(void)

{
  if (DAT_14cb9ee78 == 0) {
    FUN_14073dd9a(&DAT_14cb9ee78,&PTR_FUN_14b5b83e8);
  }
  return DAT_14cb9ee78;
}



// FUNCTION 14400587e FUN_14400587e body=130 status=ok
// SIG undefined FUN_14400587e(void)

void FUN_14400587e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b87e0;
  FUN_1446f470e(&local_20,L"Maps",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005902 FUN_144005902 body=227 status=ok
// SIG undefined FUN_144005902(void)

longlong FUN_144005902(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ee88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_14400587b;
    local_40 = FUN_14400587e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Maps",&DAT_14cb9ee88,&DAT_14400587a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ee88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440059e6 FUN_1440059e6 body=47 status=ok
// SIG undefined FUN_1440059e6(void)

longlong FUN_1440059e6(void)

{
  if (DAT_14cb9ee90 == 0) {
    FUN_14073dd9a(&DAT_14cb9ee90,&PTR_FUN_14b5b8798);
  }
  return DAT_14cb9ee90;
}



// FUNCTION 144005a1a FUN_144005a1a body=130 status=ok
// SIG undefined FUN_144005a1a(void)

void FUN_144005a1a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b8b90;
  FUN_1446f470e(&local_20,L"Missions",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005a9e FUN_144005a9e body=227 status=ok
// SIG undefined FUN_144005a9e(void)

longlong FUN_144005a9e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9eea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144005a17;
    local_40 = FUN_144005a1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Missions",&DAT_14cb9eea0,
                  &DAT_144005a16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9eea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005b82 FUN_144005b82 body=47 status=ok
// SIG undefined FUN_144005b82(void)

longlong FUN_144005b82(void)

{
  if (DAT_14cb9eea8 == 0) {
    FUN_14073dd9a(&DAT_14cb9eea8,&PTR_FUN_14b5b8b48);
  }
  return DAT_14cb9eea8;
}



// FUNCTION 144005bb6 FUN_144005bb6 body=132 status=ok
// SIG undefined FUN_144005bb6(void)

void FUN_144005bb6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b8f40;
  FUN_1446f470e(&local_28,L"GBX Online",1);
  puVar1[5] = local_28;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005c3c FUN_144005c3c body=227 status=ok
// SIG undefined FUN_144005c3c(void)

longlong FUN_144005c3c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9eeb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144005bb3;
    local_40 = FUN_144005bb6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Online",&DAT_14cb9eeb8,&DAT_144005bb2)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9eeb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005d20 FUN_144005d20 body=47 status=ok
// SIG undefined FUN_144005d20(void)

longlong FUN_144005d20(void)

{
  if (DAT_14cb9eec0 == 0) {
    FUN_14073dd9a(&DAT_14cb9eec0,&PTR_FUN_14b5b8ef8);
  }
  return DAT_14cb9eec0;
}



// FUNCTION 144005d54 FUN_144005d54 body=130 status=ok
// SIG undefined FUN_144005d54(void)

void FUN_144005d54(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b9300;
  FUN_1446f470e(&local_20,L"Player Bots",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005dd8 FUN_144005dd8 body=227 status=ok
// SIG undefined FUN_144005dd8(void)

longlong FUN_144005dd8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9eed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144005d51;
    local_40 = FUN_144005d54;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_PlayerBots",&DAT_14cb9eed0,
                  &DAT_144005d50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9eed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005ebc FUN_144005ebc body=47 status=ok
// SIG undefined FUN_144005ebc(void)

longlong FUN_144005ebc(void)

{
  if (DAT_14cb9eed8 == 0) {
    FUN_14073dd9a(&DAT_14cb9eed8,&PTR_FUN_14b5b92b8);
  }
  return DAT_14cb9eed8;
}



// FUNCTION 144005ef0 FUN_144005ef0 body=130 status=ok
// SIG undefined FUN_144005ef0(void)

void FUN_144005ef0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b96c0;
  FUN_1446f470e(&local_20,L"Progression",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144005f74 FUN_144005f74 body=227 status=ok
// SIG undefined FUN_144005f74(void)

longlong FUN_144005f74(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9eee8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144005eed;
    local_40 = FUN_144005ef0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Progression",&DAT_14cb9eee8,
                  &DAT_144005eec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9eee8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144006058 FUN_144006058 body=47 status=ok
// SIG undefined FUN_144006058(void)

longlong FUN_144006058(void)

{
  if (DAT_14cb9eef0 == 0) {
    FUN_14073dd9a(&DAT_14cb9eef0,&PTR_FUN_14b5b9678);
  }
  return DAT_14cb9eef0;
}



// FUNCTION 14400608c FUN_14400608c body=130 status=ok
// SIG undefined FUN_14400608c(void)

void FUN_14400608c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b9a80;
  FUN_1446f470e(&local_20,L"ShowFlags",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 100;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144006110 FUN_144006110 body=227 status=ok
// SIG undefined FUN_144006110(void)

longlong FUN_144006110(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ef00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144006089;
    local_40 = FUN_14400608c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_ShowFlags",&DAT_14cb9ef00,
                  &DAT_144006088);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ef00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440061f4 FUN_1440061f4 body=47 status=ok
// SIG undefined FUN_1440061f4(void)

longlong FUN_1440061f4(void)

{
  if (DAT_14cb9ef08 == 0) {
    FUN_14073dd9a(&DAT_14cb9ef08,&PTR_FUN_14b5b9a38);
  }
  return DAT_14cb9ef08;
}



// FUNCTION 144006228 FUN_144006228 body=130 status=ok
// SIG undefined FUN_144006228(void)

void FUN_144006228(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5b9e30;
  FUN_1446f470e(&local_20,L"Skills",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440062ac FUN_1440062ac body=227 status=ok
// SIG undefined FUN_1440062ac(void)

longlong FUN_1440062ac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ef18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_144006225;
    local_40 = FUN_144006228;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Skills",&DAT_14cb9ef18,&DAT_144006224)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ef18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144006390 FUN_144006390 body=47 status=ok
// SIG undefined FUN_144006390(void)

longlong FUN_144006390(void)

{
  if (DAT_14cb9ef20 == 0) {
    FUN_14073dd9a(&DAT_14cb9ef20,&PTR_FUN_14b5b9de8);
  }
  return DAT_14cb9ef20;
}



// FUNCTION 1440063c4 FUN_1440063c4 body=130 status=ok
// SIG undefined FUN_1440063c4(void)

void FUN_1440063c4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5ba1f0;
  FUN_1446f470e(&local_20,L"StatusEffects",1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144006448 FUN_144006448 body=227 status=ok
// SIG undefined FUN_144006448(void)

longlong FUN_144006448(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ef30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_144004f2e;
    local_38 = &LAB_1440063c1;
    local_40 = FUN_1440063c4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_StatusEffects",&DAT_14cb9ef30,
                  &DAT_1440063c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ef30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400652c FUN_14400652c body=47 status=ok
// SIG undefined FUN_14400652c(void)

longlong FUN_14400652c(void)

{
  if (DAT_14cb9ef38 == 0) {
    FUN_14073dd9a(&DAT_14cb9ef38,&PTR_FUN_14b5ba1a8);
  }
  return DAT_14cb9ef38;
}



// FUNCTION 144006566 FUN_144006566 body=134 status=ok
// SIG undefined FUN_144006566(void)

void FUN_144006566(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5ba5c0;
  *(undefined1 *)(puVar1 + 8) = 0;
  FUN_1446f470e(&local_20,&DAT_149e0466c,1);
  puVar1[5] = local_20;
  *(undefined1 *)(puVar1 + 6) = 100;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440065ee FUN_1440065ee body=227 status=ok
// SIG undefined FUN_1440065ee(void)

longlong FUN_1440065ee(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ef48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = &LAB_14400655e;
    local_38 = &LAB_144006563;
    local_40 = FUN_144006566;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"DebugMenuCategory_Test_ExternalWindow",&DAT_14cb9ef48,
                  &DAT_14400655c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ef48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440066d2 FUN_1440066d2 body=47 status=ok
// SIG undefined FUN_1440066d2(void)

longlong FUN_1440066d2(void)

{
  if (DAT_14cb9ef98 == 0) {
    FUN_14073dd9a(&DAT_14cb9ef98,&PTR_LAB_14b5bae08);
  }
  return DAT_14cb9ef98;
}



// FUNCTION 144006701 FUN_144006701 body=47 status=ok
// SIG undefined FUN_144006701(void)

longlong FUN_144006701(void)

{
  if (DAT_14cb9ef50 == 0) {
    FUN_14073dd9a(&DAT_14cb9ef50,&PTR_FUN_14b5ba578);
  }
  return DAT_14cb9ef50;
}



// FUNCTION 144006732 FUN_144006732 body=227 status=ok
// SIG undefined FUN_144006732(void)

longlong FUN_144006732(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ef60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = &LAB_145959cf6;
    local_38 = &LAB_144006816;
    local_40 = FUN_144006819;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"GbxDebugMenu",&DAT_14cb9ef60,&DAT_144006730);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ef60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144006819 FUN_144006819 body=79 status=ok
// SIG undefined FUN_144006819(void)

void FUN_144006819(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14b5baa30;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  puVar1[9] = 0x4082c00000000000;
  puVar1[10] = 0x4059000000000000;
  return;
}



// FUNCTION 144006872 FUN_144006872 body=47 status=ok
// SIG undefined FUN_144006872(void)

longlong FUN_144006872(void)

{
  if (DAT_14cb9ef68 == 0) {
    FUN_14073dd9a(&DAT_14cb9ef68,&PTR_LAB_14b5ba9e8);
  }
  return DAT_14cb9ef68;
}



// FUNCTION 1440068a2 FUN_1440068a2 body=45 status=ok
// SIG undefined FUN_1440068a2(void)

void FUN_1440068a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5baa30;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1440068d2 FUN_1440068d2 body=227 status=ok
// SIG undefined FUN_1440068d2(void)

longlong FUN_1440068d2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ef90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = &LAB_145959cf6;
    local_38 = &LAB_1440069b6;
    local_40 = FUN_1440069b9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxDebugMenu",L"GbxDebugMenuCategory",&DAT_14cb9ef90,&DAT_1440068d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ef90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440069b9 FUN_1440069b9 body=49 status=ok
// SIG undefined FUN_1440069b9(void)

void FUN_1440069b9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5bae50;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1440069ee FUN_1440069ee body=49 status=ok
// SIG undefined FUN_1440069ee(void)

void FUN_1440069ee(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5bb200;
  return;
}



// FUNCTION 144006a2a FUN_144006a2a body=47 status=ok
// SIG undefined FUN_144006a2a(void)

void FUN_144006a2a(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 144006a72 FUN_144006a72 body=38 status=ok
// SIG undefined FUN_144006a72(void)

undefined8 FUN_144006a72(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006a9e FUN_144006a9e body=38 status=ok
// SIG undefined FUN_144006a9e(void)

undefined8 FUN_144006a9e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006ac6 FUN_144006ac6 body=38 status=ok
// SIG undefined FUN_144006ac6(void)

undefined8 FUN_144006ac6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006aee FUN_144006aee body=38 status=ok
// SIG undefined FUN_144006aee(void)

undefined8 FUN_144006aee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006b16 FUN_144006b16 body=38 status=ok
// SIG undefined FUN_144006b16(void)

undefined8 FUN_144006b16(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006b3e FUN_144006b3e body=38 status=ok
// SIG undefined FUN_144006b3e(void)

undefined8 FUN_144006b3e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006b66 FUN_144006b66 body=38 status=ok
// SIG undefined FUN_144006b66(void)

undefined8 FUN_144006b66(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006b8e FUN_144006b8e body=38 status=ok
// SIG undefined FUN_144006b8e(void)

undefined8 FUN_144006b8e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006bb6 FUN_144006bb6 body=38 status=ok
// SIG undefined FUN_144006bb6(void)

undefined8 FUN_144006bb6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006bde FUN_144006bde body=38 status=ok
// SIG undefined FUN_144006bde(void)

undefined8 FUN_144006bde(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006c06 FUN_144006c06 body=38 status=ok
// SIG undefined FUN_144006c06(void)

undefined8 FUN_144006c06(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006c2e FUN_144006c2e body=38 status=ok
// SIG undefined FUN_144006c2e(void)

undefined8 FUN_144006c2e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006c56 FUN_144006c56 body=38 status=ok
// SIG undefined FUN_144006c56(void)

undefined8 FUN_144006c56(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006c7e FUN_144006c7e body=38 status=ok
// SIG undefined FUN_144006c7e(void)

undefined8 FUN_144006c7e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006ca6 FUN_144006ca6 body=65 status=ok
// SIG undefined FUN_144006ca6(void)

undefined8 * FUN_144006ca6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5baa30;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006cec FUN_144006cec body=38 status=ok
// SIG undefined FUN_144006cec(void)

undefined8 FUN_144006cec(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006d14 FUN_144006d14 body=38 status=ok
// SIG undefined FUN_144006d14(void)

undefined8 FUN_144006d14(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006d3a FUN_144006d3a body=34 status=ok
// SIG undefined FUN_144006d3a(void)

void FUN_144006d3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b5bb6a0;
  return;
}



// FUNCTION 144006d5c FUN_144006d5c body=29 status=ok
// SIG undefined FUN_144006d5c(void)

undefined8 FUN_144006d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006d96 FUN_144006d96 body=93 status=ok
// SIG undefined FUN_144006d96(void)

void FUN_144006d96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5bb630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144006df4 FUN_144006df4 body=93 status=ok
// SIG undefined FUN_144006df4(void)

void FUN_144006df4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5bb630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144006e52 FUN_144006e52 body=126 status=ok
// SIG undefined FUN_144006e52(void)

void FUN_144006e52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5bb630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144006ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144006edc FUN_144006edc body=21 status=ok
// SIG undefined FUN_144006edc(void)

undefined8 FUN_144006edc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144006ef2 FUN_144006ef2 body=29 status=ok
// SIG undefined FUN_144006ef2(void)

undefined8 FUN_144006ef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144006f0f FUN_144006f0f body=1084 status=ok
// SIG undefined FUN_144006f0f(void)

void FUN_144006f0f(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined1 local_59;
  undefined8 *local_58;
  int local_50;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b7810,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b7bf0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b7fa0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b8360,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b8720,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b8ad0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b8e80,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b9230,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b95f0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b99b0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5b9d70,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5ba120,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5ba4e0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5ba8b0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5bad00,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5bb140,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GbxDebugMenu",&PTR_FUN_14b5bb4f0,1,0);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0xc);
  uVar2 = FUN_14577453c(L"GbxDebugMenu",&local_58);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
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
  local_58[2] = lVar3;
  *local_58 = &PTR_FUN_14b5bb630;
  local_58[3] = &DAT_14cb9efc0;
  local_58[4] = FUN_144006d3a;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_68 = 0x800000014b5bb518;
  local_5c = 1;
  local_5b = local_43;
  local_59 = local_41;
  local_60 = uVar2;
  FUN_140da023c(&DAT_14c874628,&local_68,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1440072ba;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1440072ba:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400734c FUN_14400734c body=55 status=ok
// SIG undefined FUN_14400734c(void)

void FUN_14400734c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f060 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f060 = FUN_14171c317(FUN_1465a2a0e,uVar1,L"EAITargetLockExitReason");
  }
  return;
}



// FUNCTION 144007384 FUN_144007384 body=55 status=ok
// SIG undefined FUN_144007384(void)

void FUN_144007384(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f0c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f0c0 = FUN_140002ddd(FUN_1440073bb,uVar1,L"AltTravelEffectsDef");
  }
  return;
}



// FUNCTION 1440073bb FUN_1440073bb body=47 status=ok
// SIG undefined FUN_1440073bb(void)

longlong FUN_1440073bb(void)

{
  if (DAT_14cb9f0b8 == 0) {
    FUN_14086a14e(&DAT_14cb9f0b8,&PTR_FUN_14b5bd118);
  }
  return DAT_14cb9f0b8;
}



// FUNCTION 1440073ea FUN_1440073ea body=48 status=ok
// SIG undefined FUN_1440073ea(void)

void FUN_1440073ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b5c4400;
  return;
}



// FUNCTION 14400741c FUN_14400741c body=227 status=ok
// SIG undefined FUN_14400741c(void)

longlong FUN_14400741c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9f0d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_144007500;
    local_40 = &LAB_144007503;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/OakGame",L"NexusConfigStoreAltTravelEffectsDef",&DAT_14cb9f0d0,
                  &DAT_14400741a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f0d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144007513 FUN_144007513 body=47 status=ok
// SIG undefined FUN_144007513(void)

longlong FUN_144007513(void)

{
  if (DAT_14cb9f0d8 == 0) {
    FUN_14073dd9a(&DAT_14cb9f0d8,&PTR_LAB_14b5bd1b8);
  }
  return DAT_14cb9f0d8;
}



// FUNCTION 144007542 FUN_144007542 body=55 status=ok
// SIG undefined FUN_144007542(void)

void FUN_144007542(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f198 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f198 = FUN_14171c317(FUN_1465a2e13,uVar1,L"EGiveTakeItemOption");
  }
  return;
}



// FUNCTION 144007579 FUN_144007579 body=55 status=ok
// SIG undefined FUN_144007579(void)

void FUN_144007579(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f210 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f210 = FUN_14171c317(FUN_1465a2f2b,uVar1,L"EVehicleNotify");
  }
  return;
}



// FUNCTION 1440075b0 FUN_1440075b0 body=55 status=ok
// SIG undefined FUN_1440075b0(void)

void FUN_1440075b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f240 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f240 = FUN_14171c317(FUN_1465a2f8e,uVar1,L"EAtt_AnointedPerk");
  }
  return;
}



// FUNCTION 1440075e7 FUN_1440075e7 body=55 status=ok
// SIG undefined FUN_1440075e7(void)

void FUN_1440075e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f270 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f270 = FUN_14171c317(FUN_1465a3056,uVar1,L"EAtt_AnointedPerkAspect");
  }
  return;
}



// FUNCTION 14400761e FUN_14400761e body=55 status=ok
// SIG undefined FUN_14400761e(void)

void FUN_14400761e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f328 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f328 = FUN_14171c317(FUN_1465a3386,uVar1,L"EDownStateDurationOverrideType");
  }
  return;
}



// FUNCTION 144007655 FUN_144007655 body=55 status=ok
// SIG undefined FUN_144007655(void)

void FUN_144007655(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f4e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f4e0 = FUN_14171c317(FUN_1465a3d84,uVar1,L"EAtt_WeaponAugmentElementalLeech");
  }
  return;
}



// FUNCTION 14400768c FUN_14400768c body=38 status=ok
// SIG undefined FUN_14400768c(void)

undefined8 FUN_14400768c(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440076b2 FUN_1440076b2 body=48 status=ok
// SIG undefined FUN_1440076b2(void)

longlong FUN_1440076b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145ff20c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440076e2 FUN_1440076e2 body=48 status=ok
// SIG undefined FUN_1440076e2(void)

longlong FUN_1440076e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145ff20c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400775a FUN_14400775a body=64 status=ok
// SIG undefined FUN_14400775a(void)

void FUN_14400775a(undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14400779a FUN_14400779a body=64 status=ok
// SIG undefined FUN_14400779a(void)

void FUN_14400779a(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440077e8 FUN_1440077e8 body=29 status=ok
// SIG undefined FUN_1440077e8(void)

undefined8 FUN_1440077e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400786c FUN_14400786c body=80 status=ok
// SIG undefined FUN_14400786c(void)

undefined8 FUN_14400786c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_148b7dfa2(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1440078e4 FUN_1440078e4 body=59 status=ok
// SIG undefined FUN_1440078e4(void)

undefined8 FUN_1440078e4(longlong *param_1)

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



// FUNCTION 14400792a FUN_14400792a body=155 status=ok
// SIG undefined FUN_14400792a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14400792a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b5c4560;
    FUN_1413db286(param_2[3],*(undefined4 *)(param_2 + 4));
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 144007a18 FUN_144007a18 body=166 status=ok
// SIG undefined FUN_144007a18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144007a18(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b5c4560;
  FUN_1413db286(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144007abe FUN_144007abe body=55 status=ok
// SIG undefined FUN_144007abe(void)

void FUN_144007abe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f0c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f0c0 = FUN_140002ddd(FUN_1440073bb,uVar1,L"AltTravelEffectsDef");
  }
  return;
}



// FUNCTION 144007af6 FUN_144007af6 body=118 status=ok
// SIG undefined FUN_144007af6(void)

undefined8 FUN_144007af6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbd38c8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbd38c8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144007b6e FUN_144007b6e body=117 status=ok
// SIG undefined FUN_144007b6e(void)

undefined8 * FUN_144007b6e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 144007cda FUN_144007cda body=157 status=ok
// SIG undefined FUN_144007cda(void)

void FUN_144007cda(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe8);
  *param_2 = &PTR_FUN_14b5c73c0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0xd) = 4;
  *(undefined4 *)(param_2 + 10) = 1;
  *(undefined1 *)(param_2 + 0xe) = 2;
  *(byte *)(param_2 + 0xf) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf00000d0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd9) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 144007dae FUN_144007dae body=827 status=ok
// SIG undefined FUN_144007dae(void)

undefined1 * FUN_144007dae(undefined1 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14b023b08;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3b9cbb9e;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)(param_1 + 0xc1) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  iVar3 = DAT_14c844850;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x140) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  uVar4 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x158) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x168) = DAT_14c846508;
  uVar7 = DAT_14c846518._4_4_;
  uVar6 = (undefined4)DAT_14c846518;
  uVar5 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x170) = (undefined4)DAT_14c846510;
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  *(undefined4 *)(param_1 + 0x178) = uVar6;
  *(undefined4 *)(param_1 + 0x17c) = uVar7;
  *(undefined8 *)(param_1 + 0x180) = DAT_14c846520;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined2 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x10;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  param_1[0x1c0] = 0;
  *(undefined ***)(param_1 + 0x1b0) = &PTR_FUN_14b023b20;
  *(undefined ***)(param_1 + 0x1c8) = &PTR_FUN_14b023b40;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined ***)(param_1 + 0x1e0) = &PTR_FUN_14b00be70;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  param_1[0x204] = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  param_1[0x20c] = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined2 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined2 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 6;
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (iVar1 < iVar3) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  *(longlong **)(param_1 + 600) = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined2 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  return param_1;
}



// FUNCTION 1440081f2 FUN_1440081f2 body=1467 status=ok
// SIG undefined FUN_1440081f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440081f2(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9efc8 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5bb890);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bc030,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bc730,1,&PTR_FUN_14b5bc700);
  FUN_14098d3d2(FUN_14400734c,L"/Script/OakGame",L"EAITargetLockExitReason",&DAT_14cb9f058);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bd010,1,&PTR_FUN_14b5bcfe0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bd230,1,&PTR_FUN_14b5bd200);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bd660,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bda10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bde40,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5be1e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5be5d0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5be9e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bee10,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5bf2b0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bf2d0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bf720,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bfb50,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5bfef0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5c03a0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5c03c0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5c0550;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c0570);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5c07f0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c0810);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5c11c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5c16f0,1,&PTR_FUN_14b5c16a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c1850);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5c1c40;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c1c60);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c1ea0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c20b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c2180);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c2240);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c2320);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c2400);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c2520);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5c2d00,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c3160);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c32c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c3410);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c35f0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5c38f0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c3910);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c3b10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c3e80);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440087b0 FUN_1440087b0 body=55 status=ok
// SIG undefined FUN_1440087b0(void)

void FUN_1440087b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f670 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f670 = FUN_14171c317(FUN_1465a4b95,uVar1,L"EGrappleFocusAxisRule");
  }
  return;
}



// FUNCTION 1440087e7 FUN_1440087e7 body=55 status=ok
// SIG undefined FUN_1440087e7(void)

void FUN_1440087e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f940 = FUN_14171c317(FUN_1465a5a6d,uVar1,L"ECarryablePhysicsSimulationState");
  }
  return;
}



// FUNCTION 144008824 FUN_144008824 body=48 status=ok
// SIG undefined FUN_144008824(void)

longlong FUN_144008824(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144008854 FUN_144008854 body=48 status=ok
// SIG undefined FUN_144008854(void)

longlong FUN_144008854(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400889c FUN_14400889c body=48 status=ok
// SIG undefined FUN_14400889c(void)

longlong FUN_14400889c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440088cc FUN_1440088cc body=48 status=ok
// SIG undefined FUN_1440088cc(void)

longlong FUN_1440088cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144008914 FUN_144008914 body=48 status=ok
// SIG undefined FUN_144008914(void)

longlong FUN_144008914(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144008944 FUN_144008944 body=48 status=ok
// SIG undefined FUN_144008944(void)

longlong FUN_144008944(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144008994 FUN_144008994 body=48 status=ok
// SIG undefined FUN_144008994(void)

longlong FUN_144008994(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440089c4 FUN_1440089c4 body=48 status=ok
// SIG undefined FUN_1440089c4(void)

longlong FUN_1440089c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144008a1a FUN_144008a1a body=48 status=ok
// SIG undefined FUN_144008a1a(void)

longlong FUN_144008a1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140db00bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144008ae2 FUN_144008ae2 body=57 status=ok
// SIG undefined FUN_144008ae2(void)

void FUN_144008ae2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f610 = FUN_140002ddd(FUN_1465a4953,uVar1,L"CameraModeBehavior_Boundary");
  }
  return;
}



// FUNCTION 144008b2a FUN_144008b2a body=57 status=ok
// SIG undefined FUN_144008b2a(void)

void FUN_144008b2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f628 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f628 = FUN_140002ddd(FUN_1465a49e5,uVar1,L"CameraModeBehavior_ExitLadder");
  }
  return;
}



// FUNCTION 144008e14 FUN_144008e14 body=1212 status=ok
// SIG undefined FUN_144008e14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144008e14(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5c7dd0,1,&PTR_FUN_14b5c7d50);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c7eb0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb9f5f8);
  if (cVar1 == '\0') {
    _DAT_14cb9f5f8 = 0;
    uRam000000014cb9f600 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c8070);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c8240);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c8470);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c8690);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b5c8d00;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c8d20);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c9190);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c93b0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c9520);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9f728 = (ulonglong)uVar2;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c95e0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c9730);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c98e0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c9af0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c9bc0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5c9d80);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ca700);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ca830);
  FUN_1446f470e(&DAT_14cb9f820,L"EndTransition",1);
  FUN_1446f470e(&DAT_14cb9f830,L"PostUpdatePOV",1);
  FUN_1446f470e(&DAT_14cb9f840,L"PreUpdatePOV",1);
  FUN_1446f470e(&DAT_14cb9f850,L"StartTransition",1);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5cb770,1,&PTR_FUN_14b5cb740);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cb930);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cb9f0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cbcc0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cbe80);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cbfa0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cc070);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5cc5e0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b5cd430;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5cd480,1,&PTR_FUN_14b5cd450);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5cd9f0,1,&PTR_FUN_14b5cd9a0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440092d4 FUN_1440092d4 body=55 status=ok
// SIG undefined FUN_1440092d4(void)

void FUN_1440092d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fa88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fa88 = FUN_14171c317(FUN_1465a6786,uVar1,L"EContainerOverlapEventType");
  }
  return;
}



// FUNCTION 14400930b FUN_14400930b body=55 status=ok
// SIG undefined FUN_14400930b(void)

void FUN_14400930b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fb68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fb68 = FUN_14171c317(FUN_1465a6b54,uVar1,L"ECarryableSocketMode");
  }
  return;
}



// FUNCTION 144009342 FUN_144009342 body=55 status=ok
// SIG undefined FUN_144009342(void)

void FUN_144009342(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fce8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fce8 = FUN_14171c317(FUN_1465a7262,uVar1,L"ECarrierAction");
  }
  return;
}



// FUNCTION 144009379 FUN_144009379 body=55 status=ok
// SIG undefined FUN_144009379(void)

void FUN_144009379(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fd00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fd00 = FUN_14171c317(FUN_1465a7291,uVar1,L"ECarrierLocalState");
  }
  return;
}



// FUNCTION 1440093b0 FUN_1440093b0 body=55 status=ok
// SIG undefined FUN_1440093b0(void)

void FUN_1440093b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fd18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fd18 = FUN_14171c317(FUN_1465a72c0,uVar1,L"ECarryNotify");
  }
  return;
}



// FUNCTION 1440093e7 FUN_1440093e7 body=55 status=ok
// SIG undefined FUN_1440093e7(void)

void FUN_1440093e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fe18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fe18 = FUN_14171c317(FUN_1465a7644,uVar1,L"ECharacterMovementAttributeValueType");
  }
  return;
}



// FUNCTION 144009422 FUN_144009422 body=48 status=ok
// SIG undefined FUN_144009422(void)

longlong FUN_144009422(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144009452 FUN_144009452 body=48 status=ok
// SIG undefined FUN_144009452(void)

longlong FUN_144009452(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400949a FUN_14400949a body=48 status=ok
// SIG undefined FUN_14400949a(void)

longlong FUN_14400949a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440094d2 FUN_1440094d2 body=48 status=ok
// SIG undefined FUN_1440094d2(void)

longlong FUN_1440094d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400952a FUN_14400952a body=48 status=ok
// SIG undefined FUN_14400952a(void)

longlong FUN_14400952a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144009562 FUN_144009562 body=48 status=ok
// SIG undefined FUN_144009562(void)

longlong FUN_144009562(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440095b2 FUN_1440095b2 body=48 status=ok
// SIG undefined FUN_1440095b2(void)

longlong FUN_1440095b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440095e2 FUN_1440095e2 body=48 status=ok
// SIG undefined FUN_1440095e2(void)

longlong FUN_1440095e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400962a FUN_14400962a body=48 status=ok
// SIG undefined FUN_14400962a(void)

longlong FUN_14400962a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1412443dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400966a FUN_14400966a body=48 status=ok
// SIG undefined FUN_14400966a(void)

longlong FUN_14400966a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400969a FUN_14400969a body=48 status=ok
// SIG undefined FUN_14400969a(void)

longlong FUN_14400969a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440096ca FUN_1440096ca body=48 status=ok
// SIG undefined FUN_1440096ca(void)

longlong FUN_1440096ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440096fa FUN_1440096fa body=48 status=ok
// SIG undefined FUN_1440096fa(void)

longlong FUN_1440096fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400972a FUN_14400972a body=48 status=ok
// SIG undefined FUN_14400972a(void)

longlong FUN_14400972a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400975a FUN_14400975a body=48 status=ok
// SIG undefined FUN_14400975a(void)

longlong FUN_14400975a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400978a FUN_14400978a body=48 status=ok
// SIG undefined FUN_14400978a(void)

longlong FUN_14400978a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440097ba FUN_1440097ba body=48 status=ok
// SIG undefined FUN_1440097ba(void)

longlong FUN_1440097ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440097ea FUN_1440097ea body=48 status=ok
// SIG undefined FUN_1440097ea(void)

longlong FUN_1440097ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_14597f466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440098b6 FUN_1440098b6 body=57 status=ok
// SIG undefined FUN_1440098b6(void)

void FUN_1440098b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fb80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fb80 = FUN_140002ddd(FUN_1465a6b83,uVar1,L"CarryableObjectContainerDef");
  }
  return;
}



// FUNCTION 144009916 FUN_144009916 body=57 status=ok
// SIG undefined FUN_144009916(void)

void FUN_144009916(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fb98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fb98 = FUN_140002ddd(FUN_1465a6bb2,uVar1,L"CarryableObjectDef");
  }
  return;
}



// FUNCTION 1440099d8 FUN_1440099d8 body=192 status=ok
// SIG undefined FUN_1440099d8(void)

undefined1 FUN_1440099d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x10 + lVar3) = lVar2;
      lVar2 = *(longlong *)(param_3 + 0x18 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x18 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x18 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 0x20 + lVar3) = *(undefined8 *)(param_3 + 0x20 + lVar3);
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144009b6f FUN_144009b6f body=881 status=ok
// SIG undefined FUN_144009b6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144009b6f(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9fa20 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d3750,1,&PTR_FUN_14b5d3700);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb9fa70);
  if (cVar1 == '\0') {
    _DAT_14cb9fa70 = 0;
    uRam000000014cb9fa78 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5d4340;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d4390,2,&PTR_FUN_14b5d4360);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d4960,1,&PTR_FUN_14b5d4910);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5d51a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5d51c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5d57a0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d5dc0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d6370,1,&PTR_FUN_14b5d6320);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5d67d0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d71d0,1,0);
  ppuStack_60 = &PTR_FUN_14b5d7e30;
  local_68 = 2;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d7ee0,2,&PTR_FUN_14b5d7e90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5d7fc0);
  _DAT_14cb9fd58 = 0x47efffffe0000000;
  _DAT_14cb9fd60 = 0x47efffffe0000000;
  _DAT_14cb9fd68 = 0x47efffffe0000000;
  _DAT_14cb9fd70 = 0x47efffffe0000000;
  _DAT_14cb9fd78 = 0x47efffffe0000000;
  _DAT_14cb9fd80 = 0x47efffffe0000000;
  _DAT_14cb9fd88 = 0x47efffffe0000000;
  _DAT_14cb9fd90 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d8ca0,1,&PTR_FUN_14b5d8c50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5d9610,1,&PTR_FUN_14b5d95e0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5d9870;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5d9890);
  _DAT_14cb9fe44 = 0;
  FUN_14052b5e0(&DAT_14cb9fe40,"PlayerAwareness",0);
  _DAT_14cb9fe50 = "PlayerAwareness";
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5da6d0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144009ee4 FUN_144009ee4 body=55 status=ok
// SIG undefined FUN_144009ee4(void)

void FUN_144009ee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ff98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9ff98 = FUN_140002ddd(FUN_144009f1b,uVar1,L"FocusedCharacterOverride");
  }
  return;
}



// FUNCTION 144009f1b FUN_144009f1b body=47 status=ok
// SIG undefined FUN_144009f1b(void)

longlong FUN_144009f1b(void)

{
  if (DAT_14cb9ff90 == 0) {
    FUN_14086a14e(&DAT_14cb9ff90,&PTR_FUN_14b5e1db0);
  }
  return DAT_14cb9ff90;
}



// FUNCTION 144009f4a FUN_144009f4a body=48 status=ok
// SIG undefined FUN_144009f4a(void)

void FUN_144009f4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14b5e9980;
  return;
}



// FUNCTION 144009f7a FUN_144009f7a body=55 status=ok
// SIG undefined FUN_144009f7a(void)

void FUN_144009f7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ffb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9ffb0 = FUN_140002ddd(FUN_144009fb1,uVar1,L"StationCameraOverride");
  }
  return;
}



// FUNCTION 144009fb1 FUN_144009fb1 body=47 status=ok
// SIG undefined FUN_144009fb1(void)

longlong FUN_144009fb1(void)

{
  if (DAT_14cb9ffa8 == 0) {
    FUN_14086a14e(&DAT_14cb9ffa8,&PTR_FUN_14b5e20e0);
  }
  return DAT_14cb9ffa8;
}



// FUNCTION 144009ff0 FUN_144009ff0 body=48 status=ok
// SIG undefined FUN_144009ff0(void)

void FUN_144009ff0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b5e9ae0;
  return;
}



// FUNCTION 14400a028 FUN_14400a028 body=119 status=ok
// SIG undefined FUN_14400a028(void)

longlong * FUN_14400a028(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *param_2;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_1 = lVar6;
  lVar6 = param_2[1];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[1];
    }
  }
  param_1[1] = lVar6;
  lVar6 = param_2[3];
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  param_1[2] = param_2[2];
  param_1[3] = lVar6;
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  param_1[6] = lVar3;
  param_1[7] = lVar4;
  return param_1;
}



// FUNCTION 14400a09f FUN_14400a09f body=55 status=ok
// SIG undefined FUN_14400a09f(void)

void FUN_14400a09f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba01e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba01e0 = FUN_14171c317(FUN_1465a869b,uVar1,L"ECommandRingAlignmentType");
  }
  return;
}



// FUNCTION 14400a0d6 FUN_14400a0d6 body=55 status=ok
// SIG undefined FUN_14400a0d6(void)

void FUN_14400a0d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba01f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba01f8 = FUN_14171c317(FUN_1465a863d,uVar1,L"ECommandRingLocationType");
  }
  return;
}



// FUNCTION 14400a10d FUN_14400a10d body=55 status=ok
// SIG undefined FUN_14400a10d(void)

void FUN_14400a10d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0210 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0210 = FUN_14171c317(FUN_1465a8a92,uVar1,L"ECommandRingReferenceActorType");
  }
  return;
}



// FUNCTION 14400a144 FUN_14400a144 body=55 status=ok
// SIG undefined FUN_14400a144(void)

void FUN_14400a144(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0240 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0240 = FUN_14171c317(FUN_1465a8b22,uVar1,L"EDamageAffinityModifier");
  }
  return;
}



// FUNCTION 14400a17b FUN_14400a17b body=55 status=ok
// SIG undefined FUN_14400a17b(void)

void FUN_14400a17b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0330 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0330 = FUN_14171c317(FUN_1465a8ffc,uVar1,L"EDevPerk");
  }
  return;
}



// FUNCTION 14400a1b6 FUN_14400a1b6 body=76 status=ok
// SIG undefined FUN_14400a1b6(void)

void FUN_14400a1b6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f3046(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b5e8c20;
  puVar1[8] = &PTR_FUN_14b5e8ed0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 14400a202 FUN_14400a202 body=227 status=ok
// SIG undefined FUN_14400a202(void)

longlong FUN_14400a202(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba0358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c7a72;
    local_38 = &LAB_14400a1b3;
    local_40 = FUN_14400a1b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/OakGame",L"DLCAnimSetPicker",&DAT_14cba0358,&DAT_14400a1b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba0358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400a2eb FUN_14400a2eb body=47 status=ok
// SIG undefined FUN_14400a2eb(void)

longlong FUN_14400a2eb(void)

{
  if (DAT_14cba0360 == 0) {
    FUN_14073dd9a(&DAT_14cba0360,&PTR_FUN_14b5e8bd8);
  }
  return DAT_14cba0360;
}



// FUNCTION 14400a31a FUN_14400a31a body=73 status=ok
// SIG undefined FUN_14400a31a(void)

void FUN_14400a31a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5e8c20;
  param_1[8] = &PTR_FUN_14b5e8ed0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f9e40(param_1);
  return;
}



// FUNCTION 14400a366 FUN_14400a366 body=227 status=ok
// SIG undefined FUN_14400a366(void)

longlong FUN_14400a366(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba0388 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14400a44a;
    local_40 = FUN_14400a44d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"DLCAssetAppendInterface",&DAT_14cba0388,&DAT_14400a364);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba0388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400a44d FUN_14400a44d body=91 status=ok
// SIG undefined FUN_14400a44d(void)

void FUN_14400a44d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b5e9080;
  return;
}



// FUNCTION 14400a4ad FUN_14400a4ad body=47 status=ok
// SIG undefined FUN_14400a4ad(void)

longlong FUN_14400a4ad(void)

{
  if (DAT_14cba0390 == 0) {
    FUN_14073dd9a(&DAT_14cba0390,&PTR_LAB_14b5e9038);
  }
  return DAT_14cba0390;
}



// FUNCTION 14400a4dc FUN_14400a4dc body=48 status=ok
// SIG undefined FUN_14400a4dc(void)

longlong FUN_14400a4dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a50c FUN_14400a50c body=48 status=ok
// SIG undefined FUN_14400a50c(void)

longlong FUN_14400a50c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a53c FUN_14400a53c body=48 status=ok
// SIG undefined FUN_14400a53c(void)

longlong FUN_14400a53c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a56c FUN_14400a56c body=48 status=ok
// SIG undefined FUN_14400a56c(void)

longlong FUN_14400a56c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a59c FUN_14400a59c body=48 status=ok
// SIG undefined FUN_14400a59c(void)

longlong FUN_14400a59c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a5cc FUN_14400a5cc body=48 status=ok
// SIG undefined FUN_14400a5cc(void)

longlong FUN_14400a5cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a5fc FUN_14400a5fc body=48 status=ok
// SIG undefined FUN_14400a5fc(void)

longlong FUN_14400a5fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a62c FUN_14400a62c body=48 status=ok
// SIG undefined FUN_14400a62c(void)

longlong FUN_14400a62c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a664 FUN_14400a664 body=48 status=ok
// SIG undefined FUN_14400a664(void)

longlong FUN_14400a664(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a6a4 FUN_14400a6a4 body=48 status=ok
// SIG undefined FUN_14400a6a4(void)

longlong FUN_14400a6a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2718;
  FUN_14614bb36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a6dc FUN_14400a6dc body=48 status=ok
// SIG undefined FUN_14400a6dc(void)

longlong FUN_14400a6dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145cc0fe0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a70c FUN_14400a70c body=48 status=ok
// SIG undefined FUN_14400a70c(void)

longlong FUN_14400a70c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145cc0fe0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a73c FUN_14400a73c body=48 status=ok
// SIG undefined FUN_14400a73c(void)

longlong FUN_14400a73c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145cc0fe0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a76c FUN_14400a76c body=48 status=ok
// SIG undefined FUN_14400a76c(void)

longlong FUN_14400a76c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145cc0fe0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a7ac FUN_14400a7ac body=48 status=ok
// SIG undefined FUN_14400a7ac(void)

longlong FUN_14400a7ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1461439b0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a7dc FUN_14400a7dc body=48 status=ok
// SIG undefined FUN_14400a7dc(void)

longlong FUN_14400a7dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1461439b0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a80c FUN_14400a80c body=38 status=ok
// SIG undefined FUN_14400a80c(void)

undefined8 FUN_14400a80c(undefined8 param_1,int param_2)

{
  FUN_14400a31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a832 FUN_14400a832 body=45 status=ok
// SIG undefined FUN_14400a832(void)

longlong FUN_14400a832(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_14400a31a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a866 FUN_14400a866 body=38 status=ok
// SIG undefined FUN_14400a866(void)

undefined8 FUN_14400a866(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


