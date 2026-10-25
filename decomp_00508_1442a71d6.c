// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1442a71d6 FUN_1442a71d6 body=275 status=ok
// SIG undefined FUN_1442a71d6(void)

undefined8 FUN_1442a71d6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442a72e3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442a72e3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442a72e3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a7297;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1442a7297;
    }
  }
  uVar6 = 0;
LAB_1442a7297:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a72ea FUN_1442a72ea body=29 status=ok
// SIG undefined FUN_1442a72ea(void)

undefined8 FUN_1442a72ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7486 FUN_1442a7486 body=93 status=ok
// SIG undefined FUN_1442a7486(void)

void FUN_1442a7486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442a74e4 FUN_1442a74e4 body=93 status=ok
// SIG undefined FUN_1442a74e4(void)

void FUN_1442a74e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442a7542 FUN_1442a7542 body=126 status=ok
// SIG undefined FUN_1442a7542(void)

void FUN_1442a7542(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442a75b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a75cc FUN_1442a75cc body=268 status=ok
// SIG undefined FUN_1442a75cc(void)

undefined8 FUN_1442a75cc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1442a76d2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442a76d2;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442a76d2:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a7677;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_1459ba9e8(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_1442a7677;
    }
  }
  uVar6 = 0;
LAB_1442a7677:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a76da FUN_1442a76da body=29 status=ok
// SIG undefined FUN_1442a76da(void)

undefined8 FUN_1442a76da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7876 FUN_1442a7876 body=93 status=ok
// SIG undefined FUN_1442a7876(void)

void FUN_1442a7876(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442a78d4 FUN_1442a78d4 body=93 status=ok
// SIG undefined FUN_1442a78d4(void)

void FUN_1442a78d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442a7932 FUN_1442a7932 body=126 status=ok
// SIG undefined FUN_1442a7932(void)

void FUN_1442a7932(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442a79a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a79c2 FUN_1442a79c2 body=285 status=ok
// SIG undefined FUN_1442a79c2(void)

bool FUN_1442a79c2(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442a7ad9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442a7ad9;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442a7ad9:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a7a8c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar2 = *(uint *)(lVar5 + 8) & 0x10200000;
      bVar6 = uVar2 == 0;
      if ((param_4 == '\x05') && (uVar2 == 0)) {
        bVar6 = true;
        FUN_1459ba9e8(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      }
      goto LAB_1442a7a8c;
    }
  }
  bVar6 = false;
LAB_1442a7a8c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a7b80 FUN_1442a7b80 body=51 status=ok
// SIG undefined FUN_1442a7b80(void)

undefined4 FUN_1442a7b80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[2];
  uVar2 = FUN_1418f9da8(param_2,*param_1,param_1[1]);
  if ((char)uVar2 != '\0') {
    FUN_140ceeb80(uVar1);
  }
  return uVar2;
}



// FUNCTION 1442a7bda FUN_1442a7bda body=12 status=ok
// SIG undefined FUN_1442a7bda(void)

void FUN_1442a7bda(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442a7be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442a7be6 FUN_1442a7be6 body=29 status=ok
// SIG undefined FUN_1442a7be6(void)

undefined8 FUN_1442a7be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7c04 FUN_1442a7c04 body=65 status=ok
// SIG undefined FUN_1442a7c04(void)

undefined4 FUN_1442a7c04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[3];
  uVar2 = FUN_1418f9da8(param_2,*param_1,param_1[1]);
  if (((char)uVar2 != '\0') && (*(char *)param_1[2] == '\0')) {
    FUN_140ceeb80(uVar1);
  }
  return uVar2;
}



// FUNCTION 1442a7c46 FUN_1442a7c46 body=70 status=ok
// SIG undefined FUN_1442a7c46(void)

undefined8 * FUN_1442a7c46(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9b75a0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1442a7c92 FUN_1442a7c92 body=29 status=ok
// SIG undefined FUN_1442a7c92(void)

void FUN_1442a7c92(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1442a7cb0 FUN_1442a7cb0 body=29 status=ok
// SIG undefined FUN_1442a7cb0(void)

undefined8 FUN_1442a7cb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7cce FUN_1442a7cce body=31 status=ok
// SIG undefined FUN_1442a7cce(void)

undefined8 FUN_1442a7cce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7e26 FUN_1442a7e26 body=31 status=ok
// SIG undefined FUN_1442a7e26(void)

undefined8 FUN_1442a7e26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7e46 FUN_1442a7e46 body=31 status=ok
// SIG undefined FUN_1442a7e46(void)

undefined8 FUN_1442a7e46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7f06 FUN_1442a7f06 body=31 status=ok
// SIG undefined FUN_1442a7f06(void)

undefined8 FUN_1442a7f06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a7fc6 FUN_1442a7fc6 body=18 status=ok
// SIG undefined FUN_1442a7fc6(void)

void FUN_1442a7fc6(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  return;
}



// FUNCTION 1442a7fd8 FUN_1442a7fd8 body=56 status=ok
// SIG undefined FUN_1442a7fd8(void)

void FUN_1442a7fd8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 1442a8010 FUN_1442a8010 body=31 status=ok
// SIG undefined FUN_1442a8010(void)

undefined8 FUN_1442a8010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a807e FUN_1442a807e body=31 status=ok
// SIG undefined FUN_1442a807e(void)

undefined8 FUN_1442a807e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a8140 FUN_1442a8140 body=29 status=ok
// SIG undefined FUN_1442a8140(void)

undefined8 FUN_1442a8140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a8172 FUN_1442a8172 body=85 status=ok
// SIG undefined FUN_1442a8172(void)

void FUN_1442a8172(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7ab0;
  return;
}



// FUNCTION 1442a81c8 FUN_1442a81c8 body=85 status=ok
// SIG undefined FUN_1442a81c8(void)

void FUN_1442a81c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7ab0;
  return;
}



// FUNCTION 1442a821e FUN_1442a821e body=118 status=ok
// SIG undefined FUN_1442a821e(void)

void FUN_1442a821e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7ab0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442a8285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a829a FUN_1442a829a body=16 status=ok
// SIG undefined FUN_1442a829a(void)

undefined1 FUN_1442a829a(void)

{
  FUN_1442a82aa();
  return 1;
}



// FUNCTION 1442a82aa FUN_1442a82aa body=94 status=ok
// SIG undefined FUN_1442a82aa(void)

void FUN_1442a82aa(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb8a358 != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_14894266a(DAT_14cb8a358,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a830a FUN_1442a830a body=29 status=ok
// SIG undefined FUN_1442a830a(void)

undefined8 FUN_1442a830a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a833c FUN_1442a833c body=85 status=ok
// SIG undefined FUN_1442a833c(void)

void FUN_1442a833c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb7d20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7b20;
  return;
}



// FUNCTION 1442a8392 FUN_1442a8392 body=85 status=ok
// SIG undefined FUN_1442a8392(void)

void FUN_1442a8392(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb7d20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7b20;
  return;
}



// FUNCTION 1442a83e8 FUN_1442a83e8 body=118 status=ok
// SIG undefined FUN_1442a83e8(void)

void FUN_1442a83e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acb7d20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7b20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442a844f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a845e FUN_1442a845e body=62 status=ok
// SIG undefined FUN_1442a845e(void)

void FUN_1442a845e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1442a84e0(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a849e FUN_1442a849e body=64 status=ok
// SIG undefined FUN_1442a849e(void)

undefined8 FUN_1442a849e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1442a84e0(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a84e0 FUN_1442a84e0 body=471 status=ok
// SIG undefined FUN_1442a84e0(void)

void FUN_1442a84e0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 1) != 0) {
    lVar2 = *param_2;
    lVar1 = 0;
    FUN_14000bbd8(&local_48,*param_1,0);
    if (DAT_14cb8a358 != 0) {
      lVar1 = FUN_144837462(DAT_14cb8a358,&local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0 && lVar1 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_48 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1459f2e4c;
        local_68 = &LAB_148c39de3;
        local_70 = &LAB_1457a9eb2;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x3de0;
        local_60 = &local_48;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x9a8) + 0x10))(lVar2 + 0x9a8);
        if (lVar2 != 0) {
          local_48 = (code *)0x0;
          local_38 = 0;
          puStack_40 = &DAT_3f800000ffffffff;
          local_30 = 0;
          uStack_28 = 0;
          FUN_1416656d2(lVar2,lVar1,&local_48);
          FUN_140de863f(local_30,uStack_28 & 0xffffffff);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a86e4 FUN_1442a86e4 body=12 status=ok
// SIG undefined FUN_1442a86e4(void)

void FUN_1442a86e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442a86ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442a86f0 FUN_1442a86f0 body=29 status=ok
// SIG undefined FUN_1442a86f0(void)

undefined8 FUN_1442a86f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a870e FUN_1442a870e body=28 status=ok
// SIG undefined FUN_1442a870e(void)

bool FUN_1442a870e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14105c38a(param_2);
  return lVar1 == *param_1;
}



// FUNCTION 1442a8754 FUN_1442a8754 body=29 status=ok
// SIG undefined FUN_1442a8754(void)

undefined8 FUN_1442a8754(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a87ac FUN_1442a87ac body=12 status=ok
// SIG undefined FUN_1442a87ac(void)

void FUN_1442a87ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442a87b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442a87b8 FUN_1442a87b8 body=29 status=ok
// SIG undefined FUN_1442a87b8(void)

undefined8 FUN_1442a87b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a886e FUN_1442a886e body=190 status=ok
// SIG undefined FUN_1442a886e(void)

bool FUN_1442a886e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 2);
  lVar3 = (longlong)local_40;
  _Src = (void *)param_1[1];
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  local_38 = &local_48;
  iVar2 = FUN_140c8411c(param_2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 != 0) {
    FUN_140ceeb80(uVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a892e FUN_1442a892e body=115 status=ok
// SIG undefined FUN_1442a892e(void)

longlong FUN_1442a892e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9b7d40;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 1442a89a8 FUN_1442a89a8 body=12 status=ok
// SIG undefined FUN_1442a89a8(void)

void FUN_1442a89a8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442a89b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442a89b4 FUN_1442a89b4 body=57 status=ok
// SIG undefined FUN_1442a89b4(void)

undefined8 * FUN_1442a89b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9b7d40;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a8a3a FUN_1442a8a3a body=29 status=ok
// SIG undefined FUN_1442a8a3a(void)

undefined8 FUN_1442a8a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a8be0 FUN_1442a8be0 body=101 status=ok
// SIG undefined FUN_1442a8be0(void)

void FUN_1442a8be0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a8c46 FUN_1442a8c46 body=101 status=ok
// SIG undefined FUN_1442a8c46(void)

void FUN_1442a8c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a8cac FUN_1442a8cac body=134 status=ok
// SIG undefined FUN_1442a8cac(void)

void FUN_1442a8cac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b7dd0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442a8d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a8d94 FUN_1442a8d94 body=295 status=ok
// SIG undefined FUN_1442a8d94(void)

undefined8 FUN_1442a8d94(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442a8eb4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442a8eb4;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1442a8eb4:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a8e65;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1442a8e65;
    }
  }
  uVar6 = 0;
LAB_1442a8e65:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a8fb0 FUN_1442a8fb0 body=29 status=ok
// SIG undefined FUN_1442a8fb0(void)

undefined8 FUN_1442a8fb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a9162 FUN_1442a9162 body=101 status=ok
// SIG undefined FUN_1442a9162(void)

void FUN_1442a9162(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b85b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a91c8 FUN_1442a91c8 body=101 status=ok
// SIG undefined FUN_1442a91c8(void)

void FUN_1442a91c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9b85b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a922e FUN_1442a922e body=134 status=ok
// SIG undefined FUN_1442a922e(void)

void FUN_1442a922e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9b85b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8540;
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
                    /* WARNING: Could not recover jumptable at 0x0001442a92a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a9316 FUN_1442a9316 body=295 status=ok
// SIG undefined FUN_1442a9316(void)

undefined8 FUN_1442a9316(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442a9436;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442a9436;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1442a9436:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a93e7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1442a93e7;
    }
  }
  uVar6 = 0;
LAB_1442a93e7:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a9440 FUN_1442a9440 body=31 status=ok
// SIG undefined FUN_1442a9440(void)

undefined8 FUN_1442a9440(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a9460 FUN_1442a9460 body=29 status=ok
// SIG undefined FUN_1442a9460(void)

undefined8 FUN_1442a9460(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a95fc FUN_1442a95fc body=93 status=ok
// SIG undefined FUN_1442a95fc(void)

void FUN_1442a95fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b8800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442a965a FUN_1442a965a body=93 status=ok
// SIG undefined FUN_1442a965a(void)

void FUN_1442a965a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b8800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442a96b8 FUN_1442a96b8 body=126 status=ok
// SIG undefined FUN_1442a96b8(void)

void FUN_1442a96b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442a9727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a974a FUN_1442a974a body=276 status=ok
// SIG undefined FUN_1442a974a(void)

undefined8 FUN_1442a974a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1442a9858;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442a9858;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442a9858:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a97f5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1c0) != 0) {
        FUN_1442a0dfc();
      }
      goto LAB_1442a97f5;
    }
  }
  uVar6 = 0;
LAB_1442a97f5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442a9860 FUN_1442a9860 body=547 status=ok
// SIG undefined FUN_1442a9860(void)

longlong * FUN_1442a9860(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1442a9a86 FUN_1442a9a86 body=110 status=ok
// SIG undefined FUN_1442a9a86(void)

undefined8 * FUN_1442a9a86(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a9af4 FUN_1442a9af4 body=31 status=ok
// SIG undefined FUN_1442a9af4(void)

undefined8 FUN_1442a9af4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a9b14 FUN_1442a9b14 body=87 status=ok
// SIG undefined FUN_1442a9b14(void)

undefined8 * FUN_1442a9b14(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *in_stack_00000028;
  
  *param_1 = 0;
  iVar1 = *(int *)(in_stack_00000028 + 1);
  _Src = (void *)*in_stack_00000028;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1442a9b96 FUN_1442a9b96 body=29 status=ok
// SIG undefined FUN_1442a9b96(void)

undefined8 FUN_1442a9b96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a9bb4 FUN_1442a9bb4 body=29 status=ok
// SIG undefined FUN_1442a9bb4(void)

undefined8 FUN_1442a9bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442a9d5a FUN_1442a9d5a body=101 status=ok
// SIG undefined FUN_1442a9d5a(void)

void FUN_1442a9d5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99ef90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a9dc0 FUN_1442a9dc0 body=101 status=ok
// SIG undefined FUN_1442a9dc0(void)

void FUN_1442a9dc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99ef90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442a9e26 FUN_1442a9e26 body=134 status=ok
// SIG undefined FUN_1442a9e26(void)

void FUN_1442a9e26(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b99ef90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8b50;
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
                    /* WARNING: Could not recover jumptable at 0x0001442a9e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442a9f0e FUN_1442a9f0e body=284 status=ok
// SIG undefined FUN_1442a9f0e(void)

undefined8 FUN_1442a9f0e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442aa024;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442aa024;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442aa024:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442a9fd7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1442a9fd7;
    }
  }
  uVar6 = 0;
LAB_1442a9fd7:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442aa02c FUN_1442aa02c body=29 status=ok
// SIG undefined FUN_1442aa02c(void)

undefined8 FUN_1442aa02c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442aa1d2 FUN_1442aa1d2 body=101 status=ok
// SIG undefined FUN_1442aa1d2(void)

void FUN_1442aa1d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b417790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442aa238 FUN_1442aa238 body=101 status=ok
// SIG undefined FUN_1442aa238(void)

void FUN_1442aa238(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b417790;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442aa29e FUN_1442aa29e body=134 status=ok
// SIG undefined FUN_1442aa29e(void)

void FUN_1442aa29e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b417790;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8bc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442aa315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442aa324 FUN_1442aa324 body=99 status=ok
// SIG undefined FUN_1442aa324(void)

void FUN_1442aa324(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442aa374;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_1442aa374;
    }
  }
  lVar2 = 0;
LAB_1442aa374:
                    /* WARNING: Could not recover jumptable at 0x0001442aa380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 1442aa388 FUN_1442aa388 body=305 status=ok
// SIG undefined FUN_1442aa388(void)

undefined8 FUN_1442aa388(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442aa4b2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442aa4b2;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1442aa4b2:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442aa461;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1442aa461;
    }
  }
  uVar6 = 0;
LAB_1442aa461:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442aa4ba FUN_1442aa4ba body=29 status=ok
// SIG undefined FUN_1442aa4ba(void)

undefined8 FUN_1442aa4ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442aa660 FUN_1442aa660 body=101 status=ok
// SIG undefined FUN_1442aa660(void)

void FUN_1442aa660(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442aa6c6 FUN_1442aa6c6 body=101 status=ok
// SIG undefined FUN_1442aa6c6(void)

void FUN_1442aa6c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442aa72c FUN_1442aa72c body=134 status=ok
// SIG undefined FUN_1442aa72c(void)

void FUN_1442aa72c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8c30;
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
                    /* WARNING: Could not recover jumptable at 0x0001442aa7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442aa814 FUN_1442aa814 body=310 status=ok
// SIG undefined FUN_1442aa814(void)

undefined8 FUN_1442aa814(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442aa944;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442aa944;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_1442aa944:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442aa8f0;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1442aa8f0;
    }
  }
  uVar6 = 0;
LAB_1442aa8f0:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442aa94c FUN_1442aa94c body=63 status=ok
// SIG undefined FUN_1442aa94c(void)

undefined8 * FUN_1442aa94c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (lVar1 = FUN_14427aa18(param_2), lVar1 != 0)) {
    FUN_1442aa98c(lVar1,param_1,param_3);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1442aa98c FUN_1442aa98c body=353 status=ok
// SIG undefined FUN_1442aa98c(void)

uint * FUN_1442aa98c(longlong param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar6 = *param_3;
    uVar2 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar5 = (uint)lVar6 & 0xffff;
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar6) {
          if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             (lVar6 = plVar1[1], lVar6 != 0)) {
            lVar3 = FUN_14406fc1e();
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
              param_2[1] = 0;
              uVar2 = *(uint *)(lVar6 + 0xc);
              *param_2 = uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              uVar2 = *(uint *)(lVar6 + 0x10);
              if (*(uint *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                uVar5 = DAT_14c964868 + 1;
                bVar7 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar7) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar5);
                }
                LOCK();
                uVar2 = *(uint *)(lVar6 + 0x10);
                bVar7 = uVar2 == 0;
                if (bVar7) {
                  *(uint *)(lVar6 + 0x10) = uVar5;
                  uVar2 = 0;
                }
                UNLOCK();
                if (bVar7) {
                  uVar2 = uVar5;
                }
              }
              goto LAB_1442aaa5f;
            }
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  uVar2 = 0;
LAB_1442aaa5f:
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1442aaaee FUN_1442aaaee body=299 status=ok
// SIG undefined FUN_1442aaaee(void)

void FUN_1442aaaee(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1442aab50;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1442aab50:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 1442aac19 FUN_1442aac19 body=77 status=ok
// SIG undefined FUN_1442aac19(void)

void FUN_1442aac19(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 1442aac66 FUN_1442aac66 body=29 status=ok
// SIG undefined FUN_1442aac66(void)

undefined8 FUN_1442aac66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442aae0c FUN_1442aae0c body=101 status=ok
// SIG undefined FUN_1442aae0c(void)

void FUN_1442aae0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41d250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442aae72 FUN_1442aae72 body=101 status=ok
// SIG undefined FUN_1442aae72(void)

void FUN_1442aae72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41d250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442aaed8 FUN_1442aaed8 body=134 status=ok
// SIG undefined FUN_1442aaed8(void)

void FUN_1442aaed8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41d250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8ca0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442aaf4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442aaf5e FUN_1442aaf5e body=169 status=ok
// SIG undefined FUN_1442aaf5e(void)

void FUN_1442aaf5e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442aafc4;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_1442aafc4;
    }
  }
  lVar2 = 0;
LAB_1442aafc4:
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ab008 FUN_1442ab008 body=303 status=ok
// SIG undefined FUN_1442ab008(void)

undefined8 FUN_1442ab008(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442ab131;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442ab131;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar7 = local_38;
  }
  else {
LAB_1442ab131:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442ab0e4;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_30 = (undefined4)param_2[1];
      local_38 = *param_2;
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1442ab0e4;
    }
  }
  uVar6 = 0;
LAB_1442ab0e4:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ab138 FUN_1442ab138 body=31 status=ok
// SIG undefined FUN_1442ab138(void)

undefined8 FUN_1442ab138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ab158 FUN_1442ab158 body=29 status=ok
// SIG undefined FUN_1442ab158(void)

undefined8 FUN_1442ab158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ab2fe FUN_1442ab2fe body=101 status=ok
// SIG undefined FUN_1442ab2fe(void)

void FUN_1442ab2fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442ab364 FUN_1442ab364 body=101 status=ok
// SIG undefined FUN_1442ab364(void)

void FUN_1442ab364(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442ab3ca FUN_1442ab3ca body=134 status=ok
// SIG undefined FUN_1442ab3ca(void)

void FUN_1442ab3ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b8f40;
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
                    /* WARNING: Could not recover jumptable at 0x0001442ab441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442ab4b2 FUN_1442ab4b2 body=284 status=ok
// SIG undefined FUN_1442ab4b2(void)

undefined8 FUN_1442ab4b2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442ab5c8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442ab5c8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442ab5c8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442ab57b;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1442ab57b;
    }
  }
  uVar6 = 0;
LAB_1442ab57b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ab5d0 FUN_1442ab5d0 body=29 status=ok
// SIG undefined FUN_1442ab5d0(void)

undefined8 FUN_1442ab5d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ab776 FUN_1442ab776 body=101 status=ok
// SIG undefined FUN_1442ab776(void)

void FUN_1442ab776(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b9020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442ab7dc FUN_1442ab7dc body=101 status=ok
// SIG undefined FUN_1442ab7dc(void)

void FUN_1442ab7dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b9020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442ab842 FUN_1442ab842 body=134 status=ok
// SIG undefined FUN_1442ab842(void)

void FUN_1442ab842(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b9020;
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
                    /* WARNING: Could not recover jumptable at 0x0001442ab8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442ab92a FUN_1442ab92a body=284 status=ok
// SIG undefined FUN_1442ab92a(void)

undefined8 FUN_1442ab92a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442aba40;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442aba40;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442aba40:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442ab9f3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1442ab9f3;
    }
  }
  uVar6 = 0;
LAB_1442ab9f3:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442abae0 FUN_1442abae0 body=29 status=ok
// SIG undefined FUN_1442abae0(void)

undefined8 FUN_1442abae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442abc86 FUN_1442abc86 body=101 status=ok
// SIG undefined FUN_1442abc86(void)

void FUN_1442abc86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b94f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442abcec FUN_1442abcec body=101 status=ok
// SIG undefined FUN_1442abcec(void)

void FUN_1442abcec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b94f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442abd52 FUN_1442abd52 body=134 status=ok
// SIG undefined FUN_1442abd52(void)

void FUN_1442abd52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b94f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001442abdc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442abdd8 FUN_1442abdd8 body=99 status=ok
// SIG undefined FUN_1442abdd8(void)

void FUN_1442abdd8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442abe28;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_1442abe28;
    }
  }
  lVar2 = 0;
LAB_1442abe28:
                    /* WARNING: Could not recover jumptable at 0x0001442abe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 1442abe3c FUN_1442abe3c body=305 status=ok
// SIG undefined FUN_1442abe3c(void)

undefined8 FUN_1442abe3c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442abf66;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442abf66;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1442abf66:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442abf15;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1442abf15;
    }
  }
  uVar6 = 0;
LAB_1442abf15:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442abf6e FUN_1442abf6e body=29 status=ok
// SIG undefined FUN_1442abf6e(void)

undefined8 FUN_1442abf6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ac114 FUN_1442ac114 body=101 status=ok
// SIG undefined FUN_1442ac114(void)

void FUN_1442ac114(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ab700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b9560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442ac17a FUN_1442ac17a body=101 status=ok
// SIG undefined FUN_1442ac17a(void)

void FUN_1442ac17a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ab700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b9560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1442ac1e0 FUN_1442ac1e0 body=134 status=ok
// SIG undefined FUN_1442ac1e0(void)

void FUN_1442ac1e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9ab700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b9560;
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
                    /* WARNING: Could not recover jumptable at 0x0001442ac257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442ac266 FUN_1442ac266 body=99 status=ok
// SIG undefined FUN_1442ac266(void)

void FUN_1442ac266(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442ac2b6;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_1442ac2b6;
    }
  }
  lVar2 = 0;
LAB_1442ac2b6:
                    /* WARNING: Could not recover jumptable at 0x0001442ac2c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 1442ac2ca FUN_1442ac2ca body=305 status=ok
// SIG undefined FUN_1442ac2ca(void)

undefined8 FUN_1442ac2ca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442ac3f4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442ac3f4;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1442ac3f4:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442ac3a3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1442ac3a3;
    }
  }
  uVar6 = 0;
LAB_1442ac3a3:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ac3fc FUN_1442ac3fc body=31 status=ok
// SIG undefined FUN_1442ac3fc(void)

undefined8 FUN_1442ac3fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ac470 FUN_1442ac470 body=31 status=ok
// SIG undefined FUN_1442ac470(void)

undefined8 FUN_1442ac470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ac490 FUN_1442ac490 body=29 status=ok
// SIG undefined FUN_1442ac490(void)

undefined8 FUN_1442ac490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ac62c FUN_1442ac62c body=93 status=ok
// SIG undefined FUN_1442ac62c(void)

void FUN_1442ac62c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b9720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442ac68a FUN_1442ac68a body=93 status=ok
// SIG undefined FUN_1442ac68a(void)

void FUN_1442ac68a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b9720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442ac6e8 FUN_1442ac6e8 body=126 status=ok
// SIG undefined FUN_1442ac6e8(void)

void FUN_1442ac6e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9b9720;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442ac757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442ac770 FUN_1442ac770 body=266 status=ok
// SIG undefined FUN_1442ac770(void)

undefined8 FUN_1442ac770(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1442ac874;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442ac874;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442ac874:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442ac828;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1412f9654(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1442ac828;
    }
  }
  uVar6 = 0;
LAB_1442ac828:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ac87c FUN_1442ac87c body=31 status=ok
// SIG undefined FUN_1442ac87c(void)

undefined8 FUN_1442ac87c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ac8ea FUN_1442ac8ea body=31 status=ok
// SIG undefined FUN_1442ac8ea(void)

undefined8 FUN_1442ac8ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ac9f0 FUN_1442ac9f0 body=31 status=ok
// SIG undefined FUN_1442ac9f0(void)

undefined8 FUN_1442ac9f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442acafe FUN_1442acafe body=31 status=ok
// SIG undefined FUN_1442acafe(void)

undefined8 FUN_1442acafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442acb6c FUN_1442acb6c body=31 status=ok
// SIG undefined FUN_1442acb6c(void)

undefined8 FUN_1442acb6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442acbe0 FUN_1442acbe0 body=31 status=ok
// SIG undefined FUN_1442acbe0(void)

undefined8 FUN_1442acbe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442acc54 FUN_1442acc54 body=31 status=ok
// SIG undefined FUN_1442acc54(void)

undefined8 FUN_1442acc54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442accc8 FUN_1442accc8 body=31 status=ok
// SIG undefined FUN_1442accc8(void)

undefined8 FUN_1442accc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442acd3c FUN_1442acd3c body=31 status=ok
// SIG undefined FUN_1442acd3c(void)

undefined8 FUN_1442acd3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442acdb0 FUN_1442acdb0 body=31 status=ok
// SIG undefined FUN_1442acdb0(void)

undefined8 FUN_1442acdb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ace68 FUN_1442ace68 body=31 status=ok
// SIG undefined FUN_1442ace68(void)

undefined8 FUN_1442ace68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ace87 FUN_1442ace87 body=7614 status=ok
// SIG undefined FUN_1442ace87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442ace87(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&DAT_14cbd806c,L"UNSET",1);
  FUN_140056680(&DAT_14cbd8078,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1442981ac);
  FUN_1446f470e(&DAT_14cbd8088,L"Party",1);
  FUN_1446f470e(&DAT_14cbd8090,&DAT_149e063b2,1);
  _DAT_14cbd8098 = 0;
  uRam000000014cbd80a0 = 0;
  _DAT_14cbd80a8 = 0;
  DAT_14cbd80b0 = 0;
  uRam000000014cbd80b8 = 0;
  FUN_1446ddda2(&DAT_14cbd8098,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1442981bd);
  _DAT_14cbd80c0 = 0;
  uRam000000014cbd80c8 = 0;
  _DAT_14cbd80d0 = 0;
  DAT_14cbd80d8 = 0;
  uRam000000014cbd80e0 = 0;
  FUN_1446ddda2(&DAT_14cbd80c0,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1442981ce);
  _DAT_14cbd80e8 = 0;
  uRam000000014cbd80f0 = 0;
  _DAT_14cbd80f8 = 0;
  DAT_14cbd8100 = 0;
  uRam000000014cbd8108 = 0;
  FUN_1446ddda2(&DAT_14cbd80e8,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442981df);
  _DAT_14cbd8110 = 0;
  uRam000000014cbd8118 = 0;
  _DAT_14cbd8120 = 0;
  DAT_14cbd8128 = 0;
  uRam000000014cbd8130 = 0;
  FUN_1446ddda2(&DAT_14cbd8110,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442981f0);
  _DAT_14cbd8138 = 0;
  uRam000000014cbd8140 = 0;
  _DAT_14cbd8148 = 0;
  DAT_14cbd8150 = 0;
  uRam000000014cbd8158 = 0;
  FUN_1446ddda2(&DAT_14cbd8138,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144298201);
  _DAT_14cbd8160 = 0;
  uRam000000014cbd8168 = 0;
  _DAT_14cbd8170 = 0;
  DAT_14cbd8178 = 0;
  uRam000000014cbd8180 = 0;
  FUN_1446ddda2(&DAT_14cbd8160,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144298212);
  _DAT_14cbd8188 = 0x47efffffe0000000;
  _DAT_14cbd8190 = 0x47efffffe0000000;
  _DAT_14cbd8198 = 0x47efffffe0000000;
  _DAT_14cbd81a0 = 0x47efffffe0000000;
  _DAT_14cbd81a8 = 0x47efffffe0000000;
  _DAT_14cbd81b0 = 0x47efffffe0000000;
  _DAT_14cbd81b8 = 0x47efffffe0000000;
  _DAT_14cbd81c0 = 0x47efffffe0000000;
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd81c8 = (ulonglong)uVar3;
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd81d0 = (ulonglong)uVar3;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd81d8 = (ulonglong)uVar3;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd81e0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14cbd81e8);
  if (cVar2 == '\0') {
    _DAT_14cbd81e8 = 0;
    uRam000000014cbd81f0 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd81fc = 0;
  FUN_14052b5e0(&DAT_14cbd81f8,"PlayerAwareness",0);
  _DAT_14cbd8208 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8210 = (ulonglong)uVar3;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8218 = (ulonglong)uVar3;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8220 = (ulonglong)uVar3;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8228 = (ulonglong)uVar3;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8230 = (ulonglong)uVar3;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8238 = (ulonglong)uVar3;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8240 = (ulonglong)uVar3;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8248 = (ulonglong)uVar3;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8250 = (ulonglong)uVar3;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8258 = (ulonglong)uVar3;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8260 = (ulonglong)uVar3;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8268 = (ulonglong)uVar3;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8270 = (ulonglong)uVar3;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8278 = (ulonglong)uVar3;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8280 = (ulonglong)uVar3;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8288 = (ulonglong)uVar3;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8290 = (ulonglong)uVar3;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8298 = (ulonglong)uVar3;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd82a0 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbd82a8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144298223);
  FUN_140056680(&DAT_14cbd82b8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144298234);
  FUN_140056680(&DAT_14cbd82c8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144298245);
  FUN_140056680(&DAT_14cbd82d8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144298256);
  FUN_1446f470e(&DAT_14cbd82e8,L"LIMB_GORED",1);
  _DAT_14cbd82f0 = 0x4072c00000000000;
  _DAT_14cbd82f8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd8300,L"body",1);
  FUN_1446f470e(&DAT_14cbd8308,L"title_card",1);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8310 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd8318,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144298267);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbd8328,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbd8330,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbd8338,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbd8340,L"TimeOfDayForecastEvents");
  _DAT_14cbd834c = 0;
  FUN_14052b5e0(&DAT_14cbd8348,"character");
  _DAT_14cbd8358 = 0;
  FUN_14052b5e0(&DAT_14cbd8354,"profile");
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8360 = (ulonglong)uVar3;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8368 = (ulonglong)uVar3;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8370 = (ulonglong)uVar3;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8378 = (ulonglong)uVar3;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8380 = (ulonglong)uVar3;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8388 = (ulonglong)uVar3;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8390 = (ulonglong)uVar3;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8398 = (ulonglong)uVar3;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83a0 = (ulonglong)uVar3;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83a8 = (ulonglong)uVar3;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83b0 = (ulonglong)uVar3;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83b8 = (ulonglong)uVar3;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83c0 = (ulonglong)uVar3;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83c8 = (ulonglong)uVar3;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83d0 = (ulonglong)uVar3;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83d8 = (ulonglong)uVar3;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83e0 = (ulonglong)uVar3;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd83e8 = (ulonglong)uVar3;
  _DAT_14cbd83f0 = 0;
  uRam000000014cbd83f8 = 0;
  _DAT_14cbd8400 = 0;
  DAT_14cbd8408 = 0;
  uRam000000014cbd8410 = 0;
  FUN_1446ddda2(&DAT_14cbd83f0,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14429994c);
  _DAT_14cbd841c = 0;
  _DAT_14cbd8420 = 0;
  FUN_14052b5e0(&DAT_14cbd8418,"contract");
  _DAT_14cbd8428 = 0;
  _DAT_14cbd842c = 0;
  FUN_14052b5e0(&DAT_14cbd8424,"replay");
  _DAT_14cbd8434 = 0;
  _DAT_14cbd8438 = 0;
  FUN_14052b5e0(&DAT_14cbd8430,"missions");
  _DAT_14cbd8440 = 0;
  uRam000000014cbd8448 = 0;
  _DAT_14cbd8450 = 0;
  DAT_14cbd8458 = 0;
  uRam000000014cbd8460 = 0;
  FUN_1446ddda2(&DAT_14cbd8440,"pips_list",0);
  atexit((_func_5014 *)&LAB_14429995d);
  _DAT_14cbd8468 = 0;
  uRam000000014cbd8470 = 0;
  _DAT_14cbd8478 = 0;
  DAT_14cbd8480 = 0;
  uRam000000014cbd8488 = 0;
  FUN_1446ddda2(&DAT_14cbd8468,"pips_list_deep_freeze",0);
  atexit((_func_5014 *)&LAB_14429996e);
  _DAT_14cbd8494 = 0;
  DAT_14cbd8498 = 0;
  FUN_14052b5e0(&DAT_14cbd8490,"contract");
  local_70 = "Standard";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd84a0 = (ulonglong)uVar3;
  local_70 = "PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd84a8 = (ulonglong)uVar3;
  local_70 = "UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd84b0 = (ulonglong)uVar3;
  local_70 = "SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd84b8 = (ulonglong)uVar3;
  local_70 = "SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd84c0 = (ulonglong)uVar3;
  _DAT_14cbd84c8 = 0;
  uRam000000014cbd84d0 = 0;
  _DAT_14cbd84d8 = 0;
  DAT_14cbd84e0 = 0;
  uRam000000014cbd84e8 = 0;
  FUN_1446ddda2(&DAT_14cbd84c8,"active_tree_index",0);
  atexit((_func_5014 *)&LAB_144299edb);
  _DAT_14cbd84f0 = 0;
  uRam000000014cbd84f8 = 0;
  _DAT_14cbd8500 = 0;
  DAT_14cbd8508 = 0;
  uRam000000014cbd8510 = 0;
  FUN_1446ddda2(&DAT_14cbd84f0,"dont_ask_again_skills",0);
  atexit((_func_5014 *)&LAB_144299eec);
  _DAT_14cbd8518 = 0;
  uRam000000014cbd8520 = 0;
  _DAT_14cbd8528 = 0;
  DAT_14cbd8530 = 0;
  uRam000000014cbd8538 = 0;
  FUN_1446ddda2(&DAT_14cbd8518,"dont_ask_again_respec_skills",0);
  atexit((_func_5014 *)&LAB_144299efd);
  _DAT_14cbd8540 = 0;
  uRam000000014cbd8548 = 0;
  _DAT_14cbd8550 = 0;
  DAT_14cbd8558 = 0;
  uRam000000014cbd8560 = 0;
  FUN_1446ddda2(&DAT_14cbd8540,"dont_ask_again_specializations",0);
  atexit((_func_5014 *)&LAB_144299f0e);
  _DAT_14cbd8568 = 0;
  uRam000000014cbd8570 = 0;
  _DAT_14cbd8578 = 0;
  DAT_14cbd8580 = 0;
  uRam000000014cbd8588 = 0;
  FUN_1446ddda2(&DAT_14cbd8568,"dont_ask_again_respec_specializations",0);
  atexit((_func_5014 *)&LAB_144299f1f);
  _DAT_14cbd8590 = 0;
  uRam000000014cbd8598 = 0;
  _DAT_14cbd85a0 = 0;
  DAT_14cbd85a8 = 0;
  uRam000000014cbd85b0 = 0;
  FUN_1446ddda2(&DAT_14cbd8590,"dont_ask_again_respec_node",0);
  atexit((_func_5014 *)&LAB_144299f30);
  FUN_1400b22c2(&DAT_14cbd85b8,"tint_siren");
  atexit((_func_5014 *)&LAB_14429b7a2);
  FUN_1400b22c2(&DAT_14cbd85c8,"tint_health");
  atexit((_func_5014 *)&LAB_14429b7b3);
  FUN_1400b22c2(&DAT_14cbd85d8,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_14429b7c5);
  FUN_1400b22c2(&DAT_14cbd85e8,"Popup");
  atexit((_func_5014 *)&LAB_14429b7d6);
  FUN_1400b22c2(&DAT_14cbd85f8,"Fullsize");
  atexit((_func_5014 *)&LAB_14429b7e7);
  FUN_1400b22c2(&DAT_14cbd8608,"EchoLogs");
  atexit((_func_5014 *)&LAB_14429b7f8);
  FUN_1400b22c2(&DAT_14cbd8618,"PlayerStats");
  atexit((_func_5014 *)&LAB_14429b809);
  FUN_1400b22c2(&DAT_14cbd8628,"RewardCenter");
  atexit((_func_5014 *)&LAB_14429b81a);
  local_78 = 0;
  FUN_14153156c(&DAT_14cbd8638,L"OakUI.Rewards.SkipClaimedRewards",&DAT_14cbd8648,
                L"If true, the second step of the reward center will ALWAYS be skipped.");
  atexit(FUN_14429b82b);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14b9b7ab0;
  local_78 = 0x10001;
  FUN_14152bcb8(&DAT_14cbd8650,L"OakUI.RewardCenter.PrintAllRewards",
                L"Prints the names of all reward definitions.",&local_70);
  if (local_68 == 0) {
LAB_1442ae077:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_1442ae077;
  }
  atexit(FUN_14429b870);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14b9b7b20;
  local_78 = 0x10001;
  FUN_141819a96(&DAT_14cbd8660,L"OakUI.RewardCenter.GrantReward",
                L"Grants a reward to the player by definition name, e.g. \'Reward_ItemPool_RocketMonsters\'"
                ,&local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_1442ae166;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1442ae166:
  atexit(FUN_14429b8b5);
  FUN_140056680(&DAT_14cbd8670,L"available");
  atexit((_func_5014 *)&LAB_14429bd66);
  FUN_140056680(&DAT_14cbd8680,L"synced");
  atexit((_func_5014 *)&LAB_14429bd77);
  FUN_140056680(&DAT_14cbd8690,L"offline");
  atexit((_func_5014 *)&LAB_14429bd88);
  FUN_140056680(&DAT_14cbd86a0,L"incompatible");
  atexit((_func_5014 *)&LAB_14429bd99);
  FUN_140056680(&DAT_14cbd86b0,L"conflict");
  atexit((_func_5014 *)&LAB_14429bdaa);
  _DAT_14cbd86c0 = 0;
  uRam000000014cbd86c8 = 0;
  _DAT_14cbd86d0 = 0;
  DAT_14cbd86d8 = 0;
  uRam000000014cbd86e0 = 0;
  FUN_1446ddda2(&DAT_14cbd86c0,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_14429bdbb);
  _DAT_14cbd86e8 = 0;
  uRam000000014cbd86f0 = 0;
  _DAT_14cbd86f8 = 0;
  DAT_14cbd8700 = 0;
  uRam000000014cbd8708 = 0;
  FUN_1446ddda2(&DAT_14cbd86e8,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_14429bdcc);
  local_70 = "show_max_saves";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8710 = (ulonglong)uVar3;
  local_70 = "uvh_apply_db";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8718 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbd8720,L"Quality",1);
  FUN_1446f470e(&DAT_14cbd8728,L"Performance",1);
  _DAT_14cbd8730 = 0;
  uRam000000014cbd8738 = 0;
  _DAT_14cbd8740 = 0;
  DAT_14cbd8748 = 0;
  uRam000000014cbd8750 = 0;
  FUN_1446ddda2(&DAT_14cbd8730,"Default",0);
  atexit((_func_5014 *)&LAB_14429bddd);
  local_70 = "Char_Placeholder";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd8758 = (ulonglong)uVar3;
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8760 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbd8768,&DAT_149e06384,1);
  FUN_1446f470e(&DAT_14cbd8770,&DAT_149e06338,1);
  FUN_1446f470e(&DAT_14cbd8778,L"confirm",1);
  local_70 = "offline";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd8780 = (ulonglong)uVar3;
  _DAT_14cbd8788 = 0;
  uRam000000014cbd8790 = 0;
  _DAT_14cbd8798 = 0;
  DAT_14cbd87a0 = 0;
  uRam000000014cbd87a8 = 0;
  FUN_1446ddda2(&DAT_14cbd8788,"offline",0);
  atexit((_func_5014 *)&LAB_14429bdee);
  _DAT_14cbd87b0 = 0;
  uRam000000014cbd87b8 = 0;
  _DAT_14cbd87c0 = 0;
  DAT_14cbd87c8 = 0;
  uRam000000014cbd87d0 = 0;
  FUN_1446ddda2(&DAT_14cbd87b0,"local_only",0);
  atexit((_func_5014 *)&LAB_14429bdff);
  local_70 = "lan";
  local_68 = 3;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd87d8 = (ulonglong)uVar3;
  _DAT_14cbd87e0 = 0;
  uRam000000014cbd87e8 = 0;
  _DAT_14cbd87f0 = 0;
  DAT_14cbd87f8 = 0;
  uRam000000014cbd8800 = 0;
  FUN_1446ddda2(&DAT_14cbd87e0,&DAT_14b842e21,0);
  atexit((_func_5014 *)&LAB_14429be10);
  local_70 = "online_public";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd8808 = (ulonglong)uVar3;
  _DAT_14cbd8810 = 0;
  uRam000000014cbd8818 = 0;
  _DAT_14cbd8820 = 0;
  DAT_14cbd8828 = 0;
  uRam000000014cbd8830 = 0;
  FUN_1446ddda2(&DAT_14cbd8810,"online_public",0);
  atexit((_func_5014 *)&LAB_14429be21);
  local_70 = "online_friends";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd8838 = (ulonglong)uVar3;
  _DAT_14cbd8840 = 0;
  uRam000000014cbd8848 = 0;
  _DAT_14cbd8850 = 0;
  DAT_14cbd8858 = 0;
  uRam000000014cbd8860 = 0;
  FUN_1446ddda2(&DAT_14cbd8840,"online_friends",0);
  atexit((_func_5014 *)&LAB_14429be32);
  local_70 = "online_invite";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cbd8868 = (ulonglong)uVar3;
  _DAT_14cbd8870 = 0;
  uRam000000014cbd8878 = 0;
  _DAT_14cbd8880 = 0;
  DAT_14cbd8888 = 0;
  uRam000000014cbd8890 = 0;
  FUN_1446ddda2(&DAT_14cbd8870,"online_invite",0);
  atexit((_func_5014 *)&LAB_14429be43);
  FUN_1446f470e(&DAT_14cbd8898,L"HostCharacterDef",1);
  _DAT_14cbd88a0 = 0;
  uRam000000014cbd88a8 = 0;
  _DAT_14cbd88b0 = 0;
  DAT_14cbd88b8 = 0;
  uRam000000014cbd88c0 = 0;
  FUN_1446ddda2(&DAT_14cbd88a0,"DifficultyTooltipDescription",0);
  atexit((_func_5014 *)&LAB_14429be54);
  FUN_1400b22c2(&DAT_14cbd88c8,"InvalidSession");
  atexit((_func_5014 *)&LAB_14429be65);
  FUN_1446f470e(&DAT_14cbd88f0,L"Takedown",1);
  FUN_1446f470e(&DAT_14cbd88f8,L"TakedownTimer",1);
  FUN_1446f470e(&DAT_14cbd8900,L"hardcore_death_occurred",1);
  FUN_1446f470e(&DAT_14cbd8908,L"hardcore_mode",1);
  _DAT_14cbd8914 = 0;
  FUN_14052b5e0(&DAT_14cbd8910,"trait_mission");
  _DAT_14cbd8920 = "trait_mission";
  _DAT_14cbd892c = 0;
  FUN_14052b5e0(&DAT_14cbd8928,"weekly_trait_mission");
  _DAT_14cbd8938 = "weekly_trait_mission";
  _DAT_14cbd8940 = 0;
  uRam000000014cbd8948 = 0;
  _DAT_14cbd8950 = 0;
  DAT_14cbd8958 = 0;
  uRam000000014cbd8960 = 0;
  FUN_1446ddda2(&DAT_14cbd8940,"TravelToMainMenuText");
  atexit((_func_5014 *)&LAB_1442a3b0e);
  _DAT_14cbd8968 = 0;
  uRam000000014cbd8970 = 0;
  _DAT_14cbd8978 = 0;
  DAT_14cbd8980 = 0;
  uRam000000014cbd8988 = 0;
  FUN_1446ddda2(&DAT_14cbd8968,"TravelReplayMissionCancelledText");
  atexit((_func_5014 *)&LAB_1442a3b1f);
  _DAT_14cbd8990 = 0;
  uRam000000014cbd8998 = 0;
  _DAT_14cbd89a0 = 0;
  DAT_14cbd89a8 = 0;
  uRam000000014cbd89b0 = 0;
  FUN_1446ddda2(&DAT_14cbd8990,"TravelTraitMissionCancelledText");
  atexit((_func_5014 *)&LAB_1442a3b30);
  _DAT_14cbd89b8 = 0;
  uRam000000014cbd89c0 = 0;
  _DAT_14cbd89c8 = 0;
  DAT_14cbd89d0 = 0;
  uRam000000014cbd89d8 = 0;
  FUN_1446ddda2(&DAT_14cbd89b8,"TravelWeeklyTraitMissionCancelledText");
  atexit((_func_5014 *)&LAB_1442a3b41);
  _DAT_14cbd89e0 = 0;
  uRam000000014cbd89e8 = 0;
  _DAT_14cbd89f0 = 0;
  DAT_14cbd89f8 = 0;
  uRam000000014cbd8a00 = 0;
  FUN_1446ddda2(&DAT_14cbd89e0,"TravelTrueActivityCancelledText");
  atexit((_func_5014 *)&LAB_1442a3b52);
  _DAT_14cbd8a08 = 0;
  uRam000000014cbd8a10 = 0;
  _DAT_14cbd8a18 = 0;
  DAT_14cbd8a20 = 0;
  uRam000000014cbd8a28 = 0;
  FUN_1446ddda2(&DAT_14cbd8a08,"TravelReplayCompleteText");
  atexit((_func_5014 *)&LAB_1442a3b63);
  _DAT_14cbd8a30 = 0;
  uRam000000014cbd8a38 = 0;
  _DAT_14cbd8a40 = 0;
  DAT_14cbd8a48 = 0;
  uRam000000014cbd8a50 = 0;
  FUN_1446ddda2(&DAT_14cbd8a30,"TravelTraitMissionCompleteText");
  atexit((_func_5014 *)&LAB_1442a3b74);
  _DAT_14cbd8a58 = 0;
  uRam000000014cbd8a60 = 0;
  _DAT_14cbd8a68 = 0;
  DAT_14cbd8a70 = 0;
  uRam000000014cbd8a78 = 0;
  FUN_1446ddda2(&DAT_14cbd8a58,"TravelWeeklyTraitMissionCompleteText");
  atexit((_func_5014 *)&LAB_1442a3b85);
  _DAT_14cbd8a80 = 0;
  uRam000000014cbd8a88 = 0;
  _DAT_14cbd8a90 = 0;
  DAT_14cbd8a98 = 0;
  uRam000000014cbd8aa0 = 0;
  FUN_1446ddda2(&DAT_14cbd8a80,"TravelTrueActivityCompleteText");
  atexit((_func_5014 *)&LAB_1442a3b96);
  _DAT_14cbd8aa8 = 0;
  uRam000000014cbd8ab0 = 0;
  _DAT_14cbd8ab8 = 0;
  DAT_14cbd8ac0 = 0;
  uRam000000014cbd8ac8 = 0;
  FUN_1446ddda2(&DAT_14cbd8aa8,"TravelMissionFailedText");
  atexit((_func_5014 *)&LAB_1442a3ba7);
  _DAT_14cbd8ad4 = 0;
  FUN_14052b5e0(&DAT_14cbd8ad0,"Tutorial");
  FUN_1400b22c2(&DAT_14cbd8ae0,"vaultcards");
  atexit((_func_5014 *)&LAB_1442a446f);
  _DAT_14cbd8af0 = 0;
  uRam000000014cbd8af8 = 0;
  _DAT_14cbd8b00 = 0;
  DAT_14cbd8b08 = 0;
  uRam000000014cbd8b10 = 0;
  FUN_1446ddda2(&DAT_14cbd8af0,"VaultLevelText",0);
  atexit((_func_5014 *)&LAB_1442a4480);
  _DAT_14cbd8b18 = 0;
  uRam000000014cbd8b20 = 0;
  _DAT_14cbd8b28 = 0;
  DAT_14cbd8b30 = 0;
  uRam000000014cbd8b38 = 0;
  FUN_1446ddda2(&DAT_14cbd8b18,"vaultcard_purchases",0);
  atexit((_func_5014 *)&LAB_1442a4491);
  _DAT_14cbd8b44 = 0;
  FUN_14052b5e0(&DAT_14cbd8b40,"State",0);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8b50 = (ulonglong)uVar3;
  local_70 = "StopUse";
  local_68 = 7;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8b58 = (ulonglong)uVar3;
  local_70 = "SecondaryUse";
  local_68 = 0xc;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8b60 = (ulonglong)uVar3;
  local_70 = "StopSecondaryUse";
  local_68 = 0x10;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbd8b68 = (ulonglong)uVar3;
  _DAT_14cbd8b70 = 0;
  uRam000000014cbd8b78 = 0;
  _DAT_14cbd8b80 = 0;
  DAT_14cbd8b88 = 0;
  uRam000000014cbd8b90 = 0;
  FUN_1446ddda2(&DAT_14cbd8b70,"FBData_FireModeSwapping",0);
  atexit((_func_5014 *)&LAB_1442a63be);
  _DAT_14cbd8b98 = 0;
  uRam000000014cbd8ba0 = 0;
  _DAT_14cbd8ba8 = 0;
  DAT_14cbd8bb0 = 0;
  uRam000000014cbd8bb8 = 0;
  FUN_1446ddda2(&DAT_14cbd8b98,"FBData_Heat_High",0);
  atexit((_func_5014 *)&LAB_1442a63cf);
  _DAT_14cbd8bc0 = 0;
  uRam000000014cbd8bc8 = 0;
  _DAT_14cbd8bd0 = 0;
  DAT_14cbd8bd8 = 0;
  uRam000000014cbd8be0 = 0;
  FUN_1446ddda2(&DAT_14cbd8bc0,"FBData_Heat_Resting",0);
  atexit((_func_5014 *)&LAB_1442a63e0);
  _DAT_14cbd8be8 = 0;
  uRam000000014cbd8bf0 = 0;
  _DAT_14cbd8bf8 = 0;
  DAT_14cbd8c00 = 0;
  uRam000000014cbd8c08 = 0;
  FUN_1446ddda2(&DAT_14cbd8be8,"FBData_Heat_Overheating",0);
  atexit((_func_5014 *)&LAB_1442a63f1);
  FUN_1400b22c2(&DAT_14cbd8c10,"noelement");
  atexit((_func_5014 *)&LAB_1442a6402);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442aec9d FUN_1442aec9d body=69 status=ok
// SIG undefined FUN_1442aec9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442aec9d(void)

{
  _DAT_14cbd8ea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442aecdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd8ea8,1);
  return;
}



// FUNCTION 1442aecf4 FUN_1442aecf4 body=1494 status=ok
// SIG undefined FUN_1442aecf4(void)

void FUN_1442aecf4(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  int local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140495e96();
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 == 0) goto LAB_1442af14a;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9bcd00;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_1442af2cc;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_Skills_MenuActivate";
    local_48 = 0x1f;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x18) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442aee8f;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442aee8f:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9bcd00;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = FUN_1442af35c;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_Specializations_MenuActivate";
    local_48 = 0x28;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x20) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442aefed;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442aefed:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9bcd00;
    local_60[3] = 0;
    iVar7 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = &LAB_145dbe2ee;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_50 = "FOakUIEvent_RefreshXp";
    local_48 = 0x15;
    local_44 = 0;
    uVar3 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar3,&local_60);
    *(char **)(param_1 + 0x28) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442af14a;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442af14a:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442af2cc FUN_1442af2cc body=143 status=ok
// SIG undefined FUN_1442af2cc(void)

void FUN_1442af2cc(undefined8 param_1)

{
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"points",0);
  local_50 = 0;
  FUN_14052b5e0(local_54,"skills",0);
  FUN_140cee836(param_1,local_54,&local_48,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442af35c FUN_1442af35c body=143 status=ok
// SIG undefined FUN_1442af35c(void)

void FUN_1442af35c(undefined8 param_1)

{
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"points",0);
  local_50 = 0;
  FUN_14052b5e0(local_54,&DAT_14b9ba9d6,0);
  FUN_140cee836(param_1,local_54,&local_48,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442af3ec FUN_1442af3ec body=2393 status=ok
// SIG undefined FUN_1442af3ec(void)

void FUN_1442af3ec(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_148 [47];
  char local_119;
  longlong local_118;
  ulonglong local_110;
  undefined1 local_104 [4];
  undefined8 local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  undefined1 local_e4 [4];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_3 == 0) goto LAB_1442afc7d;
  FUN_1449027d0(param_1,&local_70);
  local_d8 = *(longlong **)(CONCAT44(uStack_6c,local_70) + 0x40);
  local_d0 = *(longlong **)(CONCAT44(uStack_6c,local_70) + 0x48);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_68 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar11 = (int *)((longlong)local_68 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar14 = local_d8;
  SRWLock = (PSRWLOCK)(local_d8 + 5);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(plVar14 + 4) = (int)plVar14[4] + 1;
  ReleaseSRWLockExclusive(SRWLock);
  uVar4 = FUN_14131862e(&local_d8,param_3);
  if ((-1 < (int)uVar4) && ((int)uVar4 < (int)plVar14[1])) {
    *(int *)(plVar14 + 2) = (int)plVar14[2] + 1;
    lVar10 = *plVar14;
    lVar9 = (ulonglong)uVar4 * 0xf8;
    lVar2 = lVar10 + lVar9;
    piVar11 = (int *)(lVar10 + 0xf0 + lVar9);
    *piVar11 = *piVar11 + 1;
    local_110 = *(ulonglong *)(lVar10 + 0x38 + lVar9);
    local_119 = param_4;
    lVar10 = FUN_1409e484c(param_2,param_3);
    uVar13 = *(ulonglong *)(lVar10 + 8);
    piVar11 = (int *)FUN_1409e484c(param_2,param_3);
    iVar6 = *piVar11;
    uVar12 = FUN_140d72879();
    cVar3 = FUN_1440d3e76(uVar12,param_3);
    local_118 = param_1;
    if (cVar3 == '\0') {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_1409e484c(param_2,param_3);
      lVar10 = *(longlong *)(lVar10 + 0x20);
    }
    uVar12 = FUN_140d72879();
    lVar9 = FUN_140d72a52(uVar12,param_3,iVar6);
    puVar17 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar17 = *(undefined4 **)(param_3 + 8);
    }
    FUN_1447a97f4(&local_70,puVar17);
    FUN_1447715ec(lVar2,&local_70);
    lVar21 = local_118;
    iVar5 = *(int *)(lVar2 + 0x2c);
    if (iVar6 == *(int *)(lVar2 + 0x28)) {
      if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_1442af589;
      }
    }
    else {
LAB_1442af589:
      *(int *)(lVar2 + 0x28) = iVar6;
      *(int *)(lVar2 + 0x2c) = iVar5 + 1;
    }
    iVar6 = *(int *)(lVar2 + 0x40);
    if (uVar13 == *(ulonglong *)(lVar2 + 0x38)) {
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1442af5a0;
      }
    }
    else {
LAB_1442af5a0:
      *(ulonglong *)(lVar2 + 0x38) = uVar13;
      *(int *)(lVar2 + 0x40) = iVar6 + 1;
    }
    iVar6 = *(int *)(lVar2 + 0x80);
    if (lVar10 == *(longlong *)(lVar2 + 0x78)) {
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1442af5bb;
      }
    }
    else {
LAB_1442af5bb:
      *(longlong *)(lVar2 + 0x78) = lVar10;
      *(int *)(lVar2 + 0x80) = iVar6 + 1;
    }
    iVar6 = *(int *)(lVar2 + 0x70);
    if (lVar9 == *(longlong *)(lVar2 + 0x68)) {
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1442af5d6;
      }
    }
    else {
LAB_1442af5d6:
      *(longlong *)(lVar2 + 0x68) = lVar9;
      *(int *)(lVar2 + 0x70) = iVar6 + 1;
    }
    lVar10 = FUN_1409e484c(param_2,param_3);
    iVar6 = *(int *)(lVar2 + 0x94);
    if (*(char *)(lVar2 + 0x90) == *(char *)(lVar10 + 0x50)) {
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1442af601;
      }
    }
    else {
LAB_1442af601:
      *(char *)(lVar2 + 0x90) = *(char *)(lVar10 + 0x50);
      *(int *)(lVar2 + 0x94) = iVar6 + 1;
    }
    iVar6 = *(int *)(lVar2 + 0x8c);
    if ((bool)*(char *)(lVar2 + 0x88) == uVar13 < local_110) {
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1442af62b;
      }
    }
    else {
LAB_1442af62b:
      *(bool *)(lVar2 + 0x88) = uVar13 < local_110;
      *(int *)(lVar2 + 0x8c) = iVar6 + 1;
    }
    lVar10 = FUN_1442afd46(param_3);
    if (lVar10 != 0) {
      FUN_148e6b38a(lVar2 + 0xa8,lVar10 + 8);
    }
    lVar10 = *(longlong *)(lVar2 + 0x38) - *(longlong *)(lVar2 + 0x68);
    auVar24._8_4_ = (int)((ulonglong)lVar10 >> 0x20);
    auVar24._0_8_ = lVar10;
    auVar24._12_4_ = 0x45300000;
    dVar23 = ((double)CONCAT44(0x43300000,(int)lVar10) - 4503599627370496.0) +
             (auVar24._8_8_ - 1.9342813113834067e+25);
    lVar10 = *(longlong *)(lVar2 + 0x78) - *(longlong *)(lVar2 + 0x68);
    auVar26._8_4_ = (int)((ulonglong)lVar10 >> 0x20);
    auVar26._0_8_ = lVar10;
    auVar26._12_4_ = 0x45300000;
    dVar25 = ((double)CONCAT44(0x43300000,(int)lVar10) - 4503599627370496.0) +
             (auVar26._8_8_ - 1.9342813113834067e+25);
    uVar13 = (longlong)(dVar23 - 9.223372036854776e+18) & (longlong)dVar23 >> 0x3f |
             (longlong)dVar23;
    if (*(ulonglong *)(lVar2 + 0x48) == uVar13) {
      if (*(int *)(lVar2 + 0x50) == 0) {
        iVar6 = 1;
        goto LAB_1442af6c0;
      }
    }
    else {
      iVar6 = *(int *)(lVar2 + 0x50) + 1;
LAB_1442af6c0:
      *(ulonglong *)(lVar2 + 0x48) = uVar13;
      *(int *)(lVar2 + 0x50) = iVar6;
    }
    uVar13 = (longlong)(dVar25 - 9.223372036854776e+18) & (longlong)dVar25 >> 0x3f |
             (longlong)dVar25;
    if (*(ulonglong *)(lVar2 + 0x58) == uVar13) {
      if (*(int *)(lVar2 + 0x60) == 0) {
        iVar6 = 1;
        goto LAB_1442af856;
      }
    }
    else {
      iVar6 = *(int *)(lVar2 + 0x60) + 1;
LAB_1442af856:
      *(ulonglong *)(lVar2 + 0x58) = uVar13;
      *(int *)(lVar2 + 0x60) = iVar6;
    }
    fVar22 = (float)((dVar23 / dVar25) * 100.0);
    if ((*(float *)(lVar2 + 0x30) != fVar22) || (NAN(*(float *)(lVar2 + 0x30)) || NAN(fVar22))) {
      iVar6 = *(int *)(lVar2 + 0x34) + 1;
LAB_1442af724:
      *(float *)(lVar2 + 0x30) = fVar22;
      *(int *)(lVar2 + 0x34) = iVar6;
    }
    else if (*(int *)(lVar2 + 0x34) == 0) {
      iVar6 = 1;
      goto LAB_1442af724;
    }
    plVar14 = (longlong *)FUN_14141fbee(lVar21);
    if ((((plVar14 != (longlong *)0x0) &&
         (lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar10 != 0)) &&
        (*(char *)(lVar10 + 0x128) == '\x01')) && (*(char *)(lVar10 + 0x12a) == '\x01')) {
      if (local_70 == DAT_14cb790d0) {
        iVar6 = *(int *)(lVar2 + 0x98);
        lVar15 = FUN_1410a623c();
        lVar9 = *(longlong *)(lVar15 + 0x28);
        if (lVar9 == 0) {
          uVar12 = FUN_145764ed6();
          lVar9 = FUN_14477b664(uVar12);
          *(longlong *)(lVar15 + 0x28) = lVar9;
        }
        if (((*(longlong *)(lVar15 + 0x30) == 0) && (lVar9 != 0)) &&
           (*(longlong *)(lVar15 + 0x20) != 0)) {
          plVar14 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar14 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar14 + 0x110))(plVar14);
            uVar12 = FUN_144aff482(uVar12,(longlong *)(lVar15 + 0x20));
          }
          *(undefined8 *)(lVar15 + 0x30) = uVar12;
          lVar21 = local_118;
        }
        iVar5 = FUN_140a4890a(lVar10);
        if (iVar5 == *(int *)(lVar2 + 0x98)) {
          if (*(int *)(lVar2 + 0x9c) == 0) {
            iVar7 = 1;
            goto LAB_1442af938;
          }
        }
        else {
          iVar7 = *(int *)(lVar2 + 0x9c) + 1;
LAB_1442af938:
          *(int *)(lVar2 + 0x98) = iVar5;
          *(int *)(lVar2 + 0x9c) = iVar7;
        }
        lVar15 = FUN_1410a623c();
        lVar9 = *(longlong *)(lVar15 + 0x28);
        if (lVar9 == 0) {
          uVar12 = FUN_145764ed6();
          lVar9 = FUN_14477b664(uVar12);
          *(longlong *)(lVar15 + 0x28) = lVar9;
        }
        lVar16 = *(longlong *)(lVar15 + 0x30);
        if (lVar16 == 0) {
          iVar8 = 0;
          iVar7 = 0;
          if ((lVar9 != 0) && (iVar7 = iVar8, *(longlong *)(lVar15 + 0x20) != 0)) {
            plVar14 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar14 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
              *(undefined8 *)(lVar15 + 0x30) = 0;
              lVar21 = local_118;
            }
            else {
              uVar12 = (**(code **)(*plVar14 + 0x110))(plVar14);
              lVar16 = FUN_144aff482(uVar12,(longlong *)(lVar15 + 0x20));
              *(longlong *)(lVar15 + 0x30) = lVar16;
              lVar21 = local_118;
              if (lVar16 != 0) goto LAB_1442af9c9;
            }
          }
        }
        else {
LAB_1442af9c9:
          uVar4 = FUN_140fcdefe(lVar10 + 0xf0,lVar16);
          iVar7 = 0;
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar10 + 0x120))) {
            iVar7 = *(int *)(*(longlong *)(lVar10 + 0x118) + (ulonglong)uVar4 * 4);
          }
        }
        if (iVar7 == *(int *)(lVar2 + 0xa0)) {
          if (*(int *)(lVar2 + 0xa4) == 0) {
            iVar8 = 1;
            goto LAB_1442afa0e;
          }
        }
        else {
          iVar8 = *(int *)(lVar2 + 0xa4) + 1;
LAB_1442afa0e:
          *(int *)(lVar2 + 0xa0) = iVar7;
          *(int *)(lVar2 + 0xa4) = iVar8;
        }
        if ((local_119 == '\0') || (iVar5 <= iVar6)) goto LAB_1442afc49;
        puVar20 = &local_98;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        FUN_1446ddda2(puVar20,"points",0);
        puVar19 = local_e4;
        local_e0 = 0;
        pcVar18 = "skills";
      }
      else {
        if (local_70 != DAT_14cb790f8) goto LAB_1442afc49;
        iVar6 = *(int *)(lVar2 + 0x98);
        lVar15 = FUN_1410a623c();
        lVar9 = *(longlong *)(lVar15 + 0x40);
        if (lVar9 == 0) {
          uVar12 = FUN_145764ed6();
          lVar9 = FUN_14477b664(uVar12);
          *(longlong *)(lVar15 + 0x40) = lVar9;
        }
        if (((*(longlong *)(lVar15 + 0x48) == 0) && (lVar9 != 0)) &&
           (*(longlong *)(lVar15 + 0x38) != 0)) {
          plVar14 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar14 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar14 + 0x110))(plVar14);
            uVar12 = FUN_144aff482(uVar12,(longlong *)(lVar15 + 0x38));
          }
          *(undefined8 *)(lVar15 + 0x48) = uVar12;
          lVar21 = local_118;
        }
        iVar5 = FUN_140a4890a(lVar10);
        if (iVar5 == *(int *)(lVar2 + 0x98)) {
          if (*(int *)(lVar2 + 0x9c) == 0) {
            iVar7 = 1;
            goto LAB_1442afa73;
          }
        }
        else {
          iVar7 = *(int *)(lVar2 + 0x9c) + 1;
LAB_1442afa73:
          *(int *)(lVar2 + 0x98) = iVar5;
          *(int *)(lVar2 + 0x9c) = iVar7;
        }
        lVar15 = FUN_1410a623c();
        lVar9 = *(longlong *)(lVar15 + 0x40);
        if (lVar9 == 0) {
          uVar12 = FUN_145764ed6();
          lVar9 = FUN_14477b664(uVar12);
          *(longlong *)(lVar15 + 0x40) = lVar9;
        }
        lVar16 = *(longlong *)(lVar15 + 0x48);
        if (lVar16 == 0) {
          iVar8 = 0;
          iVar7 = 0;
          if ((lVar9 != 0) && (iVar7 = iVar8, *(longlong *)(lVar15 + 0x38) != 0)) {
            plVar14 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar14 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
              *(undefined8 *)(lVar15 + 0x48) = 0;
              lVar21 = local_118;
            }
            else {
              uVar12 = (**(code **)(*plVar14 + 0x110))(plVar14);
              lVar16 = FUN_144aff482(uVar12,(longlong *)(lVar15 + 0x38));
              *(longlong *)(lVar15 + 0x48) = lVar16;
              lVar21 = local_118;
              if (lVar16 != 0) goto LAB_1442afb04;
            }
          }
        }
        else {
LAB_1442afb04:
          uVar4 = FUN_140fcdefe(lVar10 + 0xf0,lVar16);
          iVar7 = 0;
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar10 + 0x120))) {
            iVar7 = *(int *)(*(longlong *)(lVar10 + 0x118) + (ulonglong)uVar4 * 4);
          }
        }
        if (iVar7 == *(int *)(lVar2 + 0xa0)) {
          if (*(int *)(lVar2 + 0xa4) == 0) {
            iVar8 = 1;
            goto LAB_1442afb49;
          }
        }
        else {
          iVar8 = *(int *)(lVar2 + 0xa4) + 1;
LAB_1442afb49:
          *(int *)(lVar2 + 0xa0) = iVar7;
          *(int *)(lVar2 + 0xa4) = iVar8;
        }
        if (0 < *(int *)(lVar2 + 0x98)) {
          FUN_1448d5e3c(&local_f8,lVar21 + 0x44);
          lVar2 = local_f8[0xc0];
          AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
          *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_f0 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar11 = (int *)((longlong)local_f0 + 0xc);
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (*piVar11 == 0) {
                (**(code **)(*local_f0 + 0x10))(local_f0);
              }
            }
          }
          local_f8 = &DAT_14cbd8eb8;
          iVar7 = FUN_140c8411c(lVar2 + 0x68);
          if (0 < iVar7) {
            *(int *)(lVar2 + 0x78) = *(int *)(lVar2 + 0x78) + 1;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
        }
        if ((local_119 == '\0') || (iVar5 <= iVar6)) goto LAB_1442afc49;
        puVar20 = &local_c8;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_1446ddda2(puVar20,"points",0);
        puVar19 = local_104;
        local_100 = 0;
        pcVar18 = "spec";
      }
      FUN_14052b5e0(puVar19,pcVar18,0);
      FUN_140cee836(lVar21,puVar19,puVar20,1);
    }
LAB_1442afc49:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  plVar14 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar11 = (int *)((longlong)plVar14 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_1442afc7d:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442afd46 FUN_1442afd46 body=50 status=ok
// SIG undefined FUN_1442afd46(void)

longlong FUN_1442afd46(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = FUN_1465ccf28();
    cVar2 = FUN_1448093f4(lVar1,uVar4);
    lVar3 = 0;
    if (cVar2 != '\0') {
      lVar3 = lVar1;
    }
  }
  return lVar3;
}



// FUNCTION 1442afdd3 FUN_1442afdd3 body=41 status=ok
// SIG undefined FUN_1442afdd3(void)

void FUN_1442afdd3(void)

{
  DAT_14cbd8f58 = 0;
  if (DAT_14cbd8f50 != 0) {
    FUN_1400020a8();
  }
  FUN_145d697da();
  return;
}



// FUNCTION 1442afe02 FUN_1442afe02 body=14 status=ok
// SIG undefined FUN_1442afe02(void)

bool FUN_1442afe02(longlong param_1,int param_2)

{
  if (-1 < param_2) {
    return param_2 < *(int *)(param_1 + 0x60);
  }
  return false;
}



// FUNCTION 1442afe10 FUN_1442afe10 body=16 status=ok
// SIG undefined FUN_1442afe10(void)

longlong FUN_1442afe10(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x58);
}



// FUNCTION 1442b00b2 FUN_1442b00b2 body=31 status=ok
// SIG undefined FUN_1442b00b2(void)

undefined8 FUN_1442b00b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442b00d2 FUN_1442b00d2 body=31 status=ok
// SIG undefined FUN_1442b00d2(void)

undefined8 FUN_1442b00d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442b0192 FUN_1442b0192 body=31 status=ok
// SIG undefined FUN_1442b0192(void)

undefined8 FUN_1442b0192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442b0252 FUN_1442b0252 body=31 status=ok
// SIG undefined FUN_1442b0252(void)

undefined8 FUN_1442b0252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442b02c0 FUN_1442b02c0 body=31 status=ok
// SIG undefined FUN_1442b02c0(void)

undefined8 FUN_1442b02c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442b0333 FUN_1442b0333 body=4706 status=ok
// SIG undefined FUN_1442b0333(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442b0333(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = L"AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8cd0 = (ulonglong)uVar2;
  local_a8 = L"basic";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8cd8 = (ulonglong)uVar2;
  local_a8 = L"challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8ce0 = (ulonglong)uVar2;
  local_a8 = L"online";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8ce8 = (ulonglong)uVar2;
  local_a8 = L"social";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8cf0 = (ulonglong)uVar2;
  local_a8 = L"alert";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8cf8 = (ulonglong)uVar2;
  local_a8 = L"photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d00 = (ulonglong)uVar2;
  local_a8 = L"generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d08 = (ulonglong)uVar2;
  local_a8 = L"mission";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d10 = (ulonglong)uVar2;
  local_a8 = 
  L"慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d18 = (ulonglong)uVar2;
  local_a8 = L"respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d20 = (ulonglong)uVar2;
  local_a8 = L"tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d28 = (ulonglong)uVar2;
  local_a8 = L"special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d30 = (ulonglong)uVar2;
  local_a8 = L"generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d38 = (ulonglong)uVar2;
  local_a8 = L"vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d40 = (ulonglong)uVar2;
  local_a8 = L"ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d48 = (ulonglong)uVar2;
  local_a8 = L"INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d50 = (ulonglong)uVar2;
  local_a8 = L"NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d58 = (ulonglong)uVar2;
  local_a8 = L"MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d60 = (ulonglong)uVar2;
  local_a8 = L"collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8d68 = (ulonglong)uVar2;
  _DAT_14cbd8d74 = 0;
  FUN_14052b5e0(&DAT_14cbd8d70,"character",0);
  _DAT_14cbd8d80 = 0;
  FUN_14052b5e0(&DAT_14cbd8d7c,"profile",0);
  _DAT_14cbd8d88 = 0x47efffffe0000000;
  _DAT_14cbd8d90 = 0x47efffffe0000000;
  _DAT_14cbd8d98 = 0x47efffffe0000000;
  _DAT_14cbd8da0 = 0x47efffffe0000000;
  _DAT_14cbd8da8 = 0x47efffffe0000000;
  _DAT_14cbd8db0 = 0x47efffffe0000000;
  _DAT_14cbd8db8 = 0x47efffffe0000000;
  _DAT_14cbd8dc0 = 0x47efffffe0000000;
  local_a8 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8dc8 = (ulonglong)uVar2;
  local_a8 = L"Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8dd0 = (ulonglong)uVar2;
  local_a8 = L"TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8dd8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbd8de0);
  if (cVar1 == '\0') {
    _DAT_14cbd8de0 = 0;
    uRam000000014cbd8de8 = 0;
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd8df4 = 0;
  FUN_14052b5e0(&DAT_14cbd8df0,"PlayerAwareness",0);
  _DAT_14cbd8e00 = "PlayerAwareness";
  FUN_140056680(&DAT_14cbd8e08,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1442aec48);
  FUN_140056680(&DAT_14cbd8e18,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1442aec59);
  FUN_140056680(&DAT_14cbd8e28,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1442aec6a);
  FUN_140056680(&DAT_14cbd8e38,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1442aec7b);
  FUN_1446f470e(&DAT_14cbd8e48,L"LIMB_GORED",1);
  _DAT_14cbd8e50 = 0x4072c00000000000;
  _DAT_14cbd8e58 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd8e60,L"body",1);
  FUN_1446f470e(&DAT_14cbd8e68,L"title_card",1);
  local_a8 = 
  L"慃桳眀慥潰彮灤彳獥楴慭整戀獡捩挀慨汬湥敧猀捯慩l桰瑯彯潭敤最湥牥捩瑟獡k慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd8e70 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbd8e78,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1442aec8c);
  FUN_1446f470e(&DAT_14cbd8e88,L"UNSET",1);
  local_a8 = L"湩瑩";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"update";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"config_update";
  local_a0 = 0xd;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"deinit";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbd8e90,L"Party",1);
  FUN_1446f470e(&DAT_14cbd8e98,&DAT_149e063b2,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x3e800000);
  local_b8 = 0;
  FUN_140a6b41e(&DAT_14cbd8ea0,L"oak.challenges.vc_threshold",&local_a8,
                L"Threshold for showing when XP gain intervals");
  atexit(FUN_1442aec9d);
  FUN_1400b22c2(&DAT_14cbd8eb8,"specializations");
  atexit((_func_5014 *)&LAB_1442aece2);
  FUN_1400b22c2(&DAT_14cbd8ec8,"tint_siren");
  atexit((_func_5014 *)&LAB_1442afd78);
  FUN_1400b22c2(&DAT_14cbd8ed8);
  atexit((_func_5014 *)&LAB_1442afd89);
  FUN_1458e052c(&DAT_14cbd92d0);
  _DAT_14cbd92d0 = &PTR_FUN_14b9bcac8;
  memset(&DAT_14cbd92d8,0,0x489);
  _DAT_14cbd8ef0 = &LAB_1442afd9a;
  _DAT_14cbd8ef8 = 0x46266800;
  DAT_14cbd8efc = 1;
  DAT_14cbd8ee8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd8ee8;
  atexit((_func_5014 *)&LAB_1442afd9f);
  DAT_14cbd8f68 = 0;
  _DAT_14cbd8f70 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1442b032e;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  FUN_14618cbae(&local_a8);
  atexit((_func_5014 *)&LAB_1442afdfc);
  local_a8 = L"display_header";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9000 = (ulonglong)uVar2;
  local_a8 = L"display_label";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9008 = (ulonglong)uVar2;
  local_a8 = L"header_label";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9010 = (ulonglong)uVar2;
  local_a8 = L"display_items";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9018 = (ulonglong)uVar2;
  local_a8 = L"blacklist";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9020 = (ulonglong)uVar2;
  local_a8 = L"label";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9028 = (ulonglong)uVar2;
  local_a8 = L"tooltip";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9030 = (ulonglong)uVar2;
  local_a8 = L"children";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9038 = (ulonglong)uVar2;
  local_a8 = L"start_expanded";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9040 = (ulonglong)uVar2;
  local_a8 = 
  L"捩湯猀潨瑷条s楨敤慴獧洀瑡档慴獧猀慴整敫y瑳瑡浥捡楨敮敫y慣整潧祲慮敭䌀栀漀椀挀攀\x2000笀\x3000紀"
  ;
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9048 = (ulonglong)uVar2;
  local_a8 = L"icon_as_glyph";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9050 = (ulonglong)uVar2;
  local_a8 = L"depth_class_html";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9058 = (ulonglong)uVar2;
  local_a8 = L"checkbox";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9060 = (ulonglong)uVar2;
  local_a8 = L"tooltip_key";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9068 = (ulonglong)uVar2;
  local_a8 = L"state_rem";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9070 = (ulonglong)uVar2;
  local_a8 = L"state_add";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9078 = (ulonglong)uVar2;
  local_a8 = L"state_remove_primary";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9080 = (ulonglong)uVar2;
  _DAT_14cbd9088 = 0;
  uRam000000014cbd9090 = 0;
  _DAT_14cbd9098 = 0;
  DAT_14cbd90a0 = 0;
  uRam000000014cbd90a8 = 0;
  FUN_1446ddda2(&DAT_14cbd9088,"allactivities",0);
  atexit((_func_5014 *)&LAB_1442afe20);
  _DAT_14cbd90b0 = 0;
  uRam000000014cbd90b8 = 0;
  _DAT_14cbd90c0 = 0;
  DAT_14cbd90c8 = 0;
  uRam000000014cbd90d0 = 0;
  FUN_1446ddda2(&DAT_14cbd90b0,"serial",0);
  atexit((_func_5014 *)&LAB_1442afe31);
  _DAT_14cbd90d8 = 0;
  uRam000000014cbd90e0 = 0;
  _DAT_14cbd90e8 = 0;
  DAT_14cbd90f0 = 0;
  uRam000000014cbd90f8 = 0;
  FUN_1446ddda2(&DAT_14cbd90d8,"missionstate",0);
  atexit((_func_5014 *)&LAB_1442afe42);
  _DAT_14cbd9100 = 0xffffffff;
  _DAT_14cbd9104 = 0;
  FUN_140056680(&DAT_14cbd9108,&DAT_149e01fe8);
  atexit((_func_5014 *)&LAB_1442afe53);
  FUN_140056680(&DAT_14cbd9118,L"Spawn");
  atexit((_func_5014 *)&LAB_1442afe64);
  FUN_140056680(&DAT_14cbd9128,L"Equip");
  atexit((_func_5014 *)&LAB_1442afe75);
  FUN_140056680(&DAT_14cbd9138,L"Clipboard");
  atexit((_func_5014 *)&LAB_1442afe86);
  local_a8 = L"nexus";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd9148 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd9150,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1442afe97);
  local_a8 = L"Online";
  local_a0 = 6;
  FUN_1446e940c(local_ac,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0 = 0xe;
  FUN_1446e940c(local_b0,&local_a8);
  local_a8 = L"Online";
  local_a0 = 6;
  FUN_140208c1e(&DAT_14cbd9160,local_b0,local_ac,&local_a8);
  atexit((_func_5014 *)&LAB_1442afea8);
  local_a8 = L"Offline";
  local_a0 = 7;
  FUN_1446e940c(local_ac,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0 = 0xe;
  FUN_1446e940c(local_b0,&local_a8);
  local_a8 = L"Offline";
  local_a0 = 7;
  FUN_140208c1e(&DAT_14cbd9170,local_b0,local_ac,&local_a8);
  atexit((_func_5014 *)&LAB_1442afebc);
  local_a8 = L"Away";
  local_a0 = 4;
  FUN_1446e940c(local_ac,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0 = 0xe;
  FUN_1446e940c(local_b0,&local_a8);
  local_a8 = L"Away";
  local_a0 = 4;
  FUN_140208c1e(&DAT_14cbd9180,local_b0,local_ac,&local_a8);
  atexit((_func_5014 *)&LAB_1442afed0);
  local_a8 = L"DoNotDisturb";
  local_a0 = 0xc;
  FUN_1446e940c(local_ac,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0 = 0xe;
  FUN_1446e940c(local_b0,&local_a8);
  local_a8 = L"Do Not Disturb";
  local_a0 = 0xe;
  FUN_140208c1e(&DAT_14cbd9190,local_b0,local_ac,&local_a8);
  atexit((_func_5014 *)&LAB_1442afee4);
  local_a8 = L"Chat";
  local_a0 = 4;
  FUN_1446e940c(local_ac,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0 = 0xe;
  FUN_1446e940c(local_b0,&local_a8);
  local_a8 = L"Chat";
  local_a0 = 4;
  FUN_140208c1e(&DAT_14cbd91a0,local_b0,local_ac,&local_a8);
  atexit((_func_5014 *)&LAB_1442afef8);
  _DAT_14cbd91b0 = 0;
  uRam000000014cbd91b8 = 0;
  _DAT_14cbd91c0 = 0;
  DAT_14cbd91c8 = 0;
  uRam000000014cbd91d0 = 0;
  FUN_1446ddda2(&DAT_14cbd91b0,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1442aff0c);
  _DAT_14cbd91d8 = 0;
  uRam000000014cbd91e0 = 0;
  _DAT_14cbd91e8 = 0;
  DAT_14cbd91f0 = 0;
  uRam000000014cbd91f8 = 0;
  FUN_1446ddda2(&DAT_14cbd91d8,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1442aff1d);
  _DAT_14cbd9200 = 0;
  uRam000000014cbd9208 = 0;
  _DAT_14cbd9210 = 0;
  DAT_14cbd9218 = 0;
  uRam000000014cbd9220 = 0;
  FUN_1446ddda2(&DAT_14cbd9200,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442aff2e);
  _DAT_14cbd9228 = 0;
  uRam000000014cbd9230 = 0;
  _DAT_14cbd9238 = 0;
  DAT_14cbd9240 = 0;
  uRam000000014cbd9248 = 0;
  FUN_1446ddda2(&DAT_14cbd9228,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442aff3f);
  _DAT_14cbd9250 = 0;
  uRam000000014cbd9258 = 0;
  _DAT_14cbd9260 = 0;
  DAT_14cbd9268 = 0;
  uRam000000014cbd9270 = 0;
  FUN_1446ddda2(&DAT_14cbd9250,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442aff50);
  _DAT_14cbd9278 = 0;
  uRam000000014cbd9280 = 0;
  _DAT_14cbd9288 = 0;
  DAT_14cbd9290 = 0;
  uRam000000014cbd9298 = 0;
  FUN_1446ddda2(&DAT_14cbd9278,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442aff61);
  local_a8 = L"UpscalingMethod";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd92a0 = (ulonglong)uVar2;
  local_a8 = L"FrameGeneration";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd92a8 = (ulonglong)uVar2;
  local_a8 = L"Upscaling";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd92b0 = (ulonglong)uVar2;
  local_a8 = L"AntiAliasingMethod";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd92b8 = (ulonglong)uVar2;
  local_a8 = L"WindowsTextureLODGroups";
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd92c0 = (ulonglong)uVar2;
  local_a8 = L"Textures";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd92c8 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b1fe4 FUN_1442b1fe4 body=306 status=ok
// SIG undefined FUN_1442b1fe4(void)

void FUN_1442b1fe4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  undefined4 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_20;
      local_20 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_28 = *(undefined4 *)(param_1 + 0x40);
      local_30 = *(undefined8 *)(param_1 + 0x38);
      FUN_148c39418(lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b2118 FUN_1442b2118 body=537 status=ok
// SIG undefined FUN_1442b2118(void)

void FUN_1442b2118(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  wchar_t *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = FUN_14126888e();
  lVar3 = FUN_1406d14fa(param_1);
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_90 = local_78;
      local_78[0] = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1459f2e4c;
      local_98 = &LAB_148c39de3;
      local_a0 = &LAB_1457a9eb2;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x9a8) + 0x10))(lVar3 + 0x9a8);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_148e6fc84(param_1);
        lVar1 = *plVar4;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
        *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
        *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
        FUN_148e6fd28(lVar1 + 0x28,lVar3 + 0x88);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
        FUN_14894275a(lVar3);
        if (lVar2 != 0) {
          lVar2 = FUN_140cee904(lVar2);
          if (lVar2 != 0) {
            puVar5 = (undefined8 *)FUN_1409801a0(lVar2);
            local_68 = (undefined ***)0x0;
            local_58 = &PTR_LAB_14b9c03c0;
            local_48 = L"inventory.rewards";
            local_78[0] = FUN_1442bb482;
            local_50 = lVar2;
            FUN_140980216(*puVar5,local_78);
            if (local_78[0] != (code *)0x0) {
              pppuVar6 = local_68;
              if (local_68 == (undefined ***)0x0) {
                pppuVar6 = &local_58;
              }
              (*(code *)(*pppuVar6)[2])();
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b2332 FUN_1442b2332 body=390 status=ok
// SIG undefined FUN_1442b2332(void)

void FUN_1442b2332(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_20;
      local_20 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar2 = FUN_1447210f0(lVar1);
      FUN_1441206f8(*(undefined4 *)(param_1 + 0x44),uVar2);
      uVar2 = FUN_1447210f0(lVar1);
      FUN_1441204ad(*(undefined1 *)(param_1 + 0x48),uVar2);
      if (*(char *)(param_1 + 0x48) == '\x01') {
        local_28 = *(undefined4 *)(param_1 + 0x40);
        local_30 = *(undefined8 *)(param_1 + 0x38);
        FUN_148c392c0(lVar1);
      }
      else {
        local_38 = *(undefined4 *)(param_1 + 0x40);
        local_40 = *(undefined8 *)(param_1 + 0x38);
        FUN_148c39418(lVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b24ba FUN_1442b24ba body=1130 status=ok
// SIG undefined FUN_1442b24ba(void)

void FUN_1442b24ba(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(uint *)(param_1 + 8) & 0x10) != 0) || (*(longlong **)(param_1 + 0x20) == (longlong *)0x0)
      ) || (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))(), lVar5 == 0))
  goto LAB_1442b2816;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_1442bb810(&local_50,lVar5);
    if (((((local_50._4_4_ != 0) && (-1 < (int)(uint)local_50)) &&
         (((int)(uint)local_50 < DAT_14c9647dc &&
          ((plVar7 = (longlong *)
                     ((ulonglong)(((uint)local_50 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_50 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == local_50._4_4_)))))) &&
        ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar11 = *plVar7, lVar11 != 0)) {
      local_50 = (char *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      pcVar3 = local_50;
      local_48 = 3;
      *(undefined ***)local_50 = &PTR_LAB_14b9c0470;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      *(longlong *)(local_50 + 0x10) = lVar6;
      *(undefined ***)local_50 = &PTR_FUN_14b9c0400;
      local_50[0x18] = '\0';
      local_50[0x19] = '\0';
      local_50[0x1a] = '\0';
      local_50[0x1b] = '\0';
      local_50[0x1c] = '\0';
      local_50[0x1d] = '\0';
      local_50[0x1e] = '\0';
      local_50[0x1f] = '\0';
      iVar8 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_50 + 0x18) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar8 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar8 = *(int *)(lVar10 + 0x10);
          bVar12 = iVar8 == 0;
          if (bVar12) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar8 = iVar9;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar8;
      *(undefined1 **)(pcVar3 + 0x20) = &LAB_1442b2926;
      FUN_1442bb992(lVar11 + 0x70,&local_60,&local_50);
      if (local_48 == 0) {
LAB_1442b2696:
        if (local_50 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_50 != (char *)0x0) {
        (*(code *)**(undefined8 **)local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48 = 0;
        goto LAB_1442b2696;
      }
      *(undefined8 **)(param_1 + 0x28) = local_60;
    }
  }
  if ((*(longlong *)(param_1 + 0x30) == 0) && (lVar5 = FUN_1404960a8(lVar5), lVar5 != 0)) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_60[2] = lVar10;
    *local_60 = &PTR_FUN_14b9c04e0;
    local_60[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar8 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar11 + 0x10);
        bVar12 = iVar8 == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = &LAB_1442b292c;
    local_50 = "FOakUIEvent_ExtensionPointWidget_PerspectiveSkew";
    local_48 = 0x30;
    local_44 = 0;
    uVar4 = FUN_14001a6c0(&local_50,1);
    FUN_140391af6(lVar5,&local_50,uVar4,&local_60);
    *(char **)(param_1 + 0x30) = local_50;
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1442b2816;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442b2816:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b2932 FUN_1442b2932 body=296 status=ok
// SIG undefined FUN_1442b2932(void)

void FUN_1442b2932(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0))
  {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))();
    if (lVar2 != 0) {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1442bb810(&local_30,lVar2);
        if (((local_30._4_4_ != 0) && (-1 < (int)(uint)local_30)) &&
           ((int)(uint)local_30 < DAT_14c9647dc)) {
          plVar3 = (longlong *)
                   ((ulonglong)(((uint)local_30 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_30 >> 0x10) * 8));
          if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == local_30._4_4_)) &&
             (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
              ((*plVar3 != 0 && (*(longlong *)(param_1 + 0x28) != 0)))))) {
            FUN_14480f766(*plVar3 + 0x70);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar2 = FUN_1404960a8(lVar2);
        if (lVar2 != 0) {
          local_30 = "FOakUIEvent_ExtensionPointWidget_PerspectiveSkew";
          local_28 = 0x30;
          local_24 = 0;
          uVar1 = FUN_14001a6c0(&local_30,1);
          FUN_1401cd85c(lVar2,uVar1,param_1 + 0x30);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b2a62 FUN_1442b2a62 body=770 status=ok
// SIG undefined FUN_1442b2a62(void)

void FUN_1442b2a62(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  double local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) ||
     (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 == (longlong *)0x0)) {
    FUN_140056680(local_70,L"[Unknown]");
    goto LAB_1442b2c4d;
  }
  lVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  FUN_140056680(local_70,L"[Unknown]");
  uVar5 = FUN_143fb2b4c();
  plVar6 = (longlong *)FUN_144718840(plVar2,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_1442b2c4d;
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x28))(plVar6);
  if (plVar6 == (longlong *)0x0) goto LAB_1442b2c4d;
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  lVar8 = FUN_144065cc2();
  if ((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_1442b2c4d;
  plVar10 = (longlong *)0x0;
  if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
      lVar8 + 0x30) {
    plVar10 = plVar6;
  }
  if ((lVar4 == 0) || (plVar10 == (longlong *)0x0)) goto LAB_1442b2c4d;
  cVar9 = (char)plVar10[3];
  FUN_1442bb810(&local_98,lVar4);
  uVar15 = DAT_14c8463f0._4_4_;
  uVar14 = (undefined4)DAT_14c8463f0;
  if ((((local_94 != 0) &&
       ((((-1 < (int)local_98 && ((int)local_98 < DAT_14c9647dc)) &&
         (plVar6 = (longlong *)
                   ((ulonglong)((local_98 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_98 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0)) &&
        (((int)plVar6[2] == local_94 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) &&
      (*plVar6 != 0)) &&
     ((cVar1 = *(char *)(*plVar6 + 0x88), cVar1 != '\0' &&
      (plVar10 + (ulonglong)(cVar1 != '\x01') * 8 != (longlong *)&DAT_ffffffffffffffe0)))) {
    cVar9 = (char)(plVar10 + (ulonglong)(cVar1 != '\x01') * 8)[0xb];
  }
  dVar3 = (double)CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  if (cVar9 != '\0') {
    uVar5 = FUN_143fb16ce();
    plVar6 = (longlong *)FUN_144718840(plVar2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
        lVar7 = FUN_14128df6c();
        fVar13 = DAT_14c764090;
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          cVar9 = *(char *)(lVar4 + 0x51);
          cVar1 = *(char *)(lVar4 + 0x50);
          local_88 = (undefined4)DAT_14c8463f0;
          uStack_84 = DAT_14c8463f0._4_4_;
          uStack_80 = (undefined4)DAT_14c8463f8;
          uStack_7c = DAT_14c8463f8._4_4_;
          FUN_14775d53c(plVar2);
          if (cVar9 == '\x02') {
            if (cVar1 == '\x03') {
              fVar13 = -0.0;
            }
            else {
              fVar13 = 0.0;
            }
          }
          else {
            if (cVar9 == '\x03') {
              if (cVar1 != '\x03') {
                fVar13 = -fVar13;
              }
              lVar7 = 0x4c;
            }
            else {
              if (cVar1 == '\x03') {
                fVar13 = -fVar13;
              }
              if (cVar9 != '\x01') goto LAB_1442b2cf1;
              lVar7 = 0x44;
            }
            fVar12 = *(float *)(lVar4 + lVar7);
            fVar11 = (float)FUN_14778e70a(plVar2);
            FUN_1477a7326(&local_98,plVar2);
            fVar12 = (float)(local_90 * 0.5) - fVar11 * fVar12;
            fVar13 = fVar13 * (float)((uint)(fVar12 / (float)(local_90 * 0.5)) &
                                     -(uint)(0.0 < fVar12));
          }
LAB_1442b2cf1:
          dVar3 = (double)fVar13;
          uVar14 = 0;
          uVar15 = 0;
        }
      }
    }
  }
  plVar2[0x16] = CONCAT44(uVar15,uVar14);
  plVar2[0x17] = (longlong)dVar3;
  FUN_141272672(plVar2);
LAB_1442b2c4d:
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b2d66 FUN_1442b2d66 body=1262 status=ok
// SIG undefined FUN_1442b2d66(void)

void FUN_1442b2d66(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(uint *)(param_1 + 8) & 0x10) == 0) &&
       (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
      (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))(), lVar6 != 0)) &&
     (lVar6 = FUN_140ade8e4(lVar6), lVar6 != 0)) {
    lVar7 = FUN_140ade7fe();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x28) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (iVar4 == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar4 = iVar5;
        }
        *(int *)(param_1 + 0x2c) = iVar4;
        if (iVar4 == 0) goto LAB_1442b2ddc;
      }
      else {
        *(int *)(param_1 + 0x2c) = iVar4;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      if ((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar9 == (longlong *)0x0 ||
          (((int)plVar9[2] != iVar4 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))))
      goto LAB_1442b2ddc;
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar9;
      }
      else {
        lVar6 = 0;
      }
      local_58 = (longlong *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      plVar9 = local_58;
      local_50 = 3;
      *local_58 = (longlong)&PTR_LAB_14b9c05c0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_58[2] = lVar8;
      *local_58 = (longlong)&PTR_FUN_14b9c0550;
      local_58[3] = 0;
      iVar4 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_58 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar4 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar4 = *(int *)(lVar7 + 0x10);
          bVar12 = iVar4 == 0;
          if (bVar12) {
            *(int *)(lVar7 + 0x10) = iVar5;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar4 = iVar5;
          }
        }
      }
      *(int *)((longlong)plVar9 + 0x1c) = iVar4;
      plVar9[4] = (longlong)FUN_1442b3256;
      if ((local_58 == (longlong *)0x0 || local_50 == 0) ||
         (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
        if (local_50 == 0) {
          uVar11 = 0;
          goto LAB_1442b30ea;
        }
        if (local_58 != (longlong *)0x0) {
          uVar11 = 0;
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          goto LAB_1442b30dd;
        }
        uVar11 = 0;
      }
      else {
        plVar9 = (longlong *)(lVar6 + 0x1c0);
        if (*(int *)(lVar6 + 0x1d4) < 1) {
          iVar4 = *(int *)(lVar6 + 0x1c8);
          iVar5 = *(int *)(lVar6 + 0x1d0) + -1;
          *(int *)(lVar6 + 0x1d0) = iVar5;
          if (iVar5 <= iVar4) {
            iVar5 = iVar4;
            if (0 < iVar4) {
              iVar10 = 0;
              do {
                if (((*(int *)(*plVar9 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(*plVar9 + (longlong)iVar10 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
                  FUN_14005b288(plVar9,iVar10);
                  FUN_14005b248(plVar9);
                }
                else {
                  iVar10 = iVar10 + 1;
                }
                iVar5 = *(int *)(lVar6 + 0x1c8);
              } while (iVar10 < iVar5);
            }
            iVar10 = 2;
            if (2 < iVar5 * 2) {
              iVar10 = iVar5 * 2;
            }
            *(int *)(lVar6 + 0x1d0) = iVar10;
            if ((iVar10 < iVar4) && (*(int *)(lVar6 + 0x1cc) != iVar5)) {
              FUN_14045812c(plVar9);
            }
          }
        }
        if (local_58 == (longlong *)0x0 || local_50 == 0) {
          uVar11 = 0;
        }
        else {
          (**(code **)(*local_58 + 0x38))(local_58,&local_48);
          uVar11 = local_48;
        }
        iVar4 = *(int *)(lVar6 + 0x1c8);
        *(uint *)(lVar6 + 0x1c8) = iVar4 + 1U;
        if (*(uint *)(lVar6 + 0x1cc) < iVar4 + 1U) {
          FUN_1447a71f6(plVar9,iVar4);
        }
        lVar6 = *plVar9;
        lVar7 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar6 + lVar7) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar7) = 0;
        *(longlong **)(lVar6 + lVar7) = local_58;
        local_58 = (longlong *)0x0;
        *(int *)(lVar6 + 8 + lVar7) = local_50;
LAB_1442b30dd:
        local_50 = 0;
LAB_1442b30ea:
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined8 *)(param_1 + 0x38) = uVar11;
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1442b3157:
        lVar6 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x28);
        lVar6 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1442b3157;
          lVar6 = *plVar9;
        }
      }
      local_68 = *(undefined4 *)(lVar6 + 0x1a8);
      uStack_64 = *(undefined4 *)(lVar6 + 0x1ac);
      uStack_60 = *(undefined4 *)(lVar6 + 0x1b0);
      uStack_5c = *(undefined4 *)(lVar6 + 0x1b4);
      FUN_1442b3296(param_1);
      goto LAB_1442b2ddc;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_1442b2ddc:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b3256 FUN_1442b3256 body=62 status=ok
// SIG undefined FUN_1442b3256(void)

void FUN_1442b3256(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1442b3296();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b3296 FUN_1442b3296 body=183 status=ok
// SIG undefined FUN_1442b3296(void)

void FUN_1442b3296(longlong param_1,double *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_78 [40];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0))
  {
    fVar2 = (float)FUN_14778e70a(lVar1);
    FUN_1477a7326(&local_40,lVar1);
    local_50 = (float)((*param_2 * local_40) / (double)fVar2);
    local_4c = (float)((param_2[1] * local_38) / (double)fVar2);
    local_48 = local_50;
    local_44 = local_4c;
    FUN_14779ab1e(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b334e FUN_1442b334e body=131 status=ok
// SIG undefined FUN_1442b334e(void)

void FUN_1442b334e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x2c))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*(longlong *)(param_1 + 0x38) != 0)))) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      FUN_14480f766(lVar3 + 0x1c0);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1442b33d2 FUN_1442b33d2 body=1017 status=ok
// SIG undefined FUN_1442b33d2(void)

void FUN_1442b33d2(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(longlong *)(param_1 + 0x28) != 0) || ((*(uint *)(param_1 + 8) & 0x10) != 0)) ||
      (*(longlong **)(param_1 + 0x20) == (longlong *)0x0)) ||
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))(), lVar6 == 0))
  goto LAB_1442b371e;
  FUN_1442bc868(&local_50,lVar6);
  if ((((local_50._4_4_ == 0) || ((int)(uint)local_50 < 0)) ||
      ((DAT_14c9647dc <= (int)(uint)local_50 ||
       ((plVar8 = (longlong *)
                  ((ulonglong)(((uint)local_50 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_50 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0 || ((int)plVar8[2] != local_50._4_4_)))))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar6 = *plVar8, lVar6 == 0))))
  goto LAB_1442b371e;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar8 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b9abc80;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b9c0630;
  local_50[3] = 0;
  plVar9 = (longlong *)0x0;
  if (param_1 != 0) {
    uVar11 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    plVar9 = (longlong *)(ulonglong)*(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      (longlong *)(ulonglong)uVar11);
      }
      LOCK();
      uVar5 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar5 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar11;
        uVar5 = 0;
      }
      UNLOCK();
      plVar9 = (longlong *)(ulonglong)uVar5;
      if (bVar14) {
        plVar9 = (longlong *)(ulonglong)uVar11;
      }
    }
  }
  *(int *)((longlong)plVar8 + 0x1c) = (int)plVar9;
  plVar8[4] = (longlong)FUN_1442b37cc;
  if ((local_50 == (longlong *)0x0 || local_48 == 0) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 == 0) {
      uVar13 = 0;
      goto LAB_1442b36e0;
    }
    if (local_50 != (longlong *)0x0) {
      uVar13 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1442b36d3;
    }
    uVar13 = 0;
  }
  else {
    plVar9 = (longlong *)(lVar6 + 0x70);
    if (*(int *)(lVar6 + 0x84) < 1) {
      iVar2 = *(int *)(lVar6 + 0x78);
      iVar4 = *(int *)(lVar6 + 0x80) + -1;
      *(int *)(lVar6 + 0x80) = iVar4;
      if (iVar4 <= iVar2) {
        iVar4 = iVar2;
        if (0 < iVar2) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar8 = *(longlong **)(*plVar9 + (longlong)iVar10 * 0x10),
                plVar8 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar8 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar9,iVar10);
              FUN_14005b248(plVar9);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar4 = *(int *)(lVar6 + 0x78);
          } while (iVar10 < iVar4);
        }
        iVar10 = 2;
        if (2 < iVar4 * 2) {
          iVar10 = iVar4 * 2;
        }
        *(int *)(lVar6 + 0x80) = iVar10;
        if ((iVar10 < iVar2) && (*(int *)(lVar6 + 0x7c) != iVar4)) {
          FUN_14045812c(plVar9);
        }
      }
    }
    if (local_50 == (longlong *)0x0 || local_48 == 0) {
      uVar13 = 0;
    }
    else {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar13 = local_40;
    }
    iVar2 = *(int *)(lVar6 + 0x78);
    *(uint *)(lVar6 + 0x78) = iVar2 + 1U;
    if (*(uint *)(lVar6 + 0x7c) < iVar2 + 1U) {
      FUN_1447a71f6(plVar9,iVar2);
    }
    lVar12 = *plVar9;
    lVar7 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar12 + lVar7) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar7) = 0;
    *(longlong **)(lVar12 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar12 + 8 + lVar7) = local_48;
LAB_1442b36d3:
    local_48 = 0;
LAB_1442b36e0:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  uVar1 = *(undefined1 *)(lVar6 + 0x98);
  FUN_144336012(lVar6,&local_50);
  FUN_1442b37cc(param_1,&local_50,CONCAT71((int7)((ulonglong)plVar9 >> 8),uVar1) & 0xffffffff);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1442b371e:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b37cc FUN_1442b37cc body=392 status=ok
// SIG undefined FUN_1442b37cc(void)

void FUN_1442b37cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    lVar2 = FUN_144029324();
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468b50ee;
        local_60 = FUN_1427f23a3;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if ((lVar4 != 0) && (DAT_14c950d78 != lVar2)) {
        do {
          if (0 < (longlong)*(int *)(lVar4 + 0x1e0)) {
            lVar3 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1d8) + lVar3);
              if (((lVar1 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                  == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
              }
              lVar3 = lVar3 + 0x10;
            } while ((longlong)*(int *)(lVar4 + 0x1e0) * 0x10 != lVar3);
          }
          lVar4 = *(longlong *)(lVar4 + 0x40);
        } while (lVar4 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b3972 FUN_1442b3972 body=212 status=ok
// SIG undefined FUN_1442b3972(void)

void FUN_1442b3972(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
       (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))();
      if (lVar1 != 0) {
        FUN_1442bc868(&local_20,lVar1);
        if (((local_1c != 0) && (-1 < (int)local_20)) && ((int)local_20 < DAT_14c9647dc)) {
          plVar2 = (longlong *)
                   ((ulonglong)((local_20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_20 >> 0x10) * 8));
          if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == local_1c)) &&
             (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
              ((*plVar2 != 0 && (*(longlong *)(param_1 + 0x28) != 0)))))) {
            FUN_14480f766(*plVar2 + 0x70);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b3a4e FUN_1442b3a4e body=71 status=ok
// SIG undefined FUN_1442b3a4e(void)

void FUN_1442b3a4e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1);
    if (lVar2 != 0) {
      lVar2 = plVar1[0x13];
      *(longlong *)(param_1 + 0x30) = plVar1[0x12];
      *(longlong *)(param_1 + 0x38) = lVar2;
      lVar2 = plVar1[0x15];
      *(longlong *)(param_1 + 0x40) = plVar1[0x14];
      *(longlong *)(param_1 + 0x48) = lVar2;
    }
  }
  return;
}



// FUNCTION 1442b3a96 FUN_1442b3a96 body=628 status=ok
// SIG undefined FUN_1442b3a96(void)

void FUN_1442b3a96(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(longlong *)(param_1 + 0x28) != 0) || ((*(uint *)(param_1 + 8) & 0x10) != 0)) ||
      (*(longlong **)(param_1 + 0x20) == (longlong *)0x0)) ||
     (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))(), lVar3 == 0))
  goto LAB_1442b3c7e;
  FUN_1442bb810(&local_48,lVar3);
  if (((((local_48._4_4_ == 0) || ((int)(uint)local_48 < 0)) ||
       ((DAT_14c9647dc <= (int)(uint)local_48 ||
        ((plVar5 = (longlong *)
                   ((ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8)),
         plVar5 == (longlong *)0x0 || ((int)plVar5[2] != local_48._4_4_)))))) ||
      ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) || (lVar3 = *plVar5, lVar3 == 0))
  goto LAB_1442b3c7e;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9c0470;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b9c06a0;
  local_48[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar6;
  puVar2[4] = &LAB_1442b3d0c;
  FUN_1442bb992(lVar3 + 0x70,&local_50,&local_48);
  if (local_40 == 0) {
LAB_1442b3c6b:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1442b3c6b;
  }
  *(undefined8 *)(param_1 + 0x28) = local_50;
LAB_1442b3c7e:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b3d12 FUN_1442b3d12 body=212 status=ok
// SIG undefined FUN_1442b3d12(void)

void FUN_1442b3d12(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
       (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))();
      if (lVar1 != 0) {
        FUN_1442bb810(&local_20,lVar1);
        if (((local_1c != 0) && (-1 < (int)local_20)) && ((int)local_20 < DAT_14c9647dc)) {
          plVar2 = (longlong *)
                   ((ulonglong)((local_20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_20 >> 0x10) * 8));
          if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == local_1c)) &&
             (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
              ((*plVar2 != 0 && (*(longlong *)(param_1 + 0x28) != 0)))))) {
            FUN_14480f766(*plVar2 + 0x70);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b3dee FUN_1442b3dee body=619 status=ok
// SIG undefined FUN_1442b3dee(void)

void FUN_1442b3dee(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  char cVar10;
  longlong *plVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_98 [32];
  uint local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
    uVar4 = FUN_143fb2b4c();
    plVar5 = (longlong *)FUN_144718840(plVar2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
        lVar7 = FUN_144065cc2();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          lVar6 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
          if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x78) != 0)) &&
             (lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x80), lVar7 != 0)) {
            if (*(int *)(lVar7 + 0x40) < 1) {
              lVar7 = 0;
            }
            else {
              lVar7 = **(longlong **)(lVar7 + 0x38);
            }
            uVar13 = (undefined4)DAT_14c8463f0;
            uVar14 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
            uVar15 = (undefined4)DAT_14c8463f8;
            uVar16 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
            FUN_1442bb810(&local_78,lVar6);
            if (((local_74 == 0) || ((int)local_78 < 0)) ||
               ((DAT_14c9647dc <= (int)local_78 ||
                (((plVar11 = (longlong *)
                             ((ulonglong)((local_78 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_78 >> 0x10) * 8)),
                  plVar11 == (longlong *)0x0 || ((int)plVar11[2] != local_74)) ||
                 ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))))) {
              cVar10 = '\x04';
              dVar3 = 1.0;
            }
            else {
              cVar10 = '\x04';
              dVar3 = 1.0;
              if (((*plVar11 != 0) &&
                  (cVar12 = *(char *)(*plVar11 + 0x88), dVar3 = 1.0, cVar12 != '\0')) &&
                 (plVar5 = plVar5 + (ulonglong)(cVar12 != '\x01') * 8 + 4, dVar3 = 1.0,
                 plVar5 != (longlong *)0x0)) {
                cVar12 = '\x04';
                if (lVar7 != lVar6) {
                  cVar12 = ((char)*plVar5 != '\x01') * '\x03' + '\x01';
                }
                lVar8 = 8;
                if (lVar7 != lVar6) {
                  lVar8 = 0x20;
                }
                cVar10 = '\x01';
                if ((char)*plVar5 != '\x02') {
                  cVar10 = cVar12;
                }
                if (lVar7 != lVar6) {
                  cVar10 = cVar12;
                }
                pfVar9 = (float *)(lVar8 + (longlong)plVar5);
                dVar3 = 1.0;
                if (pfVar9 != (float *)0x0) {
                  uVar13 = (undefined4)*(undefined8 *)(pfVar9 + 2);
                  uVar14 = (undefined4)((ulonglong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
                  uVar15 = (undefined4)*(undefined8 *)(pfVar9 + 4);
                  uVar16 = (undefined4)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
                  dVar3 = (double)*pfVar9;
                }
              }
            }
            (**(code **)(*plVar2 + 0x2b0))(plVar2,cVar10);
            dVar1 = *(double *)(param_1 + 0x38);
            plVar2[0x12] = (longlong)((double)CONCAT44(uVar14,uVar13) + *(double *)(param_1 + 0x30))
            ;
            plVar2[0x13] = (longlong)((double)CONCAT44(uVar16,uVar15) + dVar1);
            FUN_141272672(plVar2);
            dVar1 = *(double *)(param_1 + 0x48);
            plVar2[0x14] = (longlong)(dVar3 * *(double *)(param_1 + 0x40));
            plVar2[0x15] = (longlong)(dVar1 * dVar3);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b4080 FUN_1442b4080 body=144 status=ok
// SIG undefined FUN_1442b4080(void)

void FUN_1442b4080(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_3 = param_3 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x30) = param_3;
    if (*(float *)(param_1 + 0x2c) <= param_3) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x2c);
    }
    lVar1 = FUN_1447e736e(param_1 + 0xc0);
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x40;
    }
    else {
      lVar1 = FUN_1447e736e(param_1 + 0xc0);
      lVar1 = lVar1 + 0x30;
    }
    uVar3 = FUN_1448c9f94(lVar1,*(undefined4 *)(param_1 + 0x30),0);
    if (*(int *)(param_1 + 0xf0) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0xe8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001442b410d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x58))(plVar2,uVar3);
    return;
  }
  return;
}



// FUNCTION 1442b4154 FUN_1442b4154 body=208 status=ok
// SIG undefined FUN_1442b4154(void)

undefined8 FUN_1442b4154(undefined8 param_1,float param_2,longlong *param_3,char param_4)

{
  undefined2 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  auVar2._0_8_ = (double)param_2 * 10000000.0 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  local_28 = (longlong)auVar2._0_8_;
  if ((int)param_3[1] == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_14681ea84(&local_28,&local_38,puVar1);
  if ((param_4 == '\0') && (1 < local_30)) {
    FUN_145825fe6(&local_38,0,1);
  }
  FUN_140009b9a(param_1,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b424a FUN_1442b424a body=69 status=ok
// SIG undefined FUN_1442b424a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442b424a(void)

{
  _DAT_14cbdbb18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442b428c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbdbb20,1);
  return;
}



// FUNCTION 1442b428f FUN_1442b428f body=69 status=ok
// SIG undefined FUN_1442b428f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442b428f(void)

{
  _DAT_14cbda688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442b42d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbda690,1);
  return;
}



// FUNCTION 1442b42d4 FUN_1442b42d4 body=151 status=ok
// SIG undefined FUN_1442b42d4(void)

void FUN_1442b42d4(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0xb8))();
  if ((DAT_14cb0d2b0 != 0) && (*(longlong **)(DAT_14cb0d2b0 + 0xc20) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xc20) + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_145866520(lVar1);
      if (lVar1 != 0) {
        lVar1 = FUN_1404960a8(lVar1);
        if (lVar1 != 0) {
          puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar2 = &PTR_FUN_14b9be798;
          *(undefined4 *)(puVar2 + 1) = uVar3;
          FUN_14039144e(lVar1,puVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1442b436b FUN_1442b436b body=69 status=ok
// SIG undefined FUN_1442b436b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442b436b(void)

{
  _DAT_14cbda6c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442b43ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbda6d0,1);
  return;
}



// FUNCTION 1442b43b0 FUN_1442b43b0 body=947 status=ok
// SIG undefined FUN_1442b43b0(void)

void FUN_1442b43b0(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_60;
  longlong local_58 [2];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143fd851c();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  if (plVar4 != (longlong *)0x0) {
    FUN_1400b22c2(&local_48,"SafeZone.Scale 1");
    (**(code **)(*plVar4 + 0xd40))(plVar4,local_58,&local_48,1);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
  lVar6 = FUN_1404960a8(uVar5);
  if (lVar6 != 0) {
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar2 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_68[2] = lVar7;
    *local_68 = &PTR_FUN_14b9c0780;
    local_68[3] = 0;
    iVar8 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_68 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = FUN_1442b4764;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_48 = "PlayAnimation";
    local_40 = 0xd;
    local_3c = 0;
    uVar3 = FUN_14001a6c0(&local_48,1);
    FUN_140391af6(lVar6,&local_48,uVar3,&local_68);
    param_1[0xa7] = (longlong)local_48;
    if (local_60 != 0) {
      if (local_68 == (undefined8 *)0x0) goto LAB_1442b45a6;
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442b45a6:
  local_48 = (char *)FUN_14405e98c();
  if ((local_48 != (char *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  lVar6 = FUN_1477924da(param_1,&local_48);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  param_1[0xb3] = lVar6;
  local_48 = (char *)FUN_14406d696();
  if ((local_48 != (char *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  lVar6 = FUN_1477924da(param_1,&local_48);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  param_1[0xb4] = lVar6;
  if (param_1[0xa9] == 0) {
    *(undefined4 *)(lVar6 + 0x30) = 0;
    iVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1[0xa9] + 0xc);
    *(uint *)(lVar6 + 0x30) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar9;
      }
    }
  }
  *(int *)(lVar6 + 0x34) = iVar8;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b4764 FUN_1442b4764 body=997 status=ok
// SIG undefined FUN_1442b4764(void)

void FUN_1442b4764(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  wchar_t *_Str;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_d0 [2];
  undefined1 local_c0 [24];
  longlong local_a8;
  wchar_t *local_98;
  int local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (param_2 == 0 || lVar4 == 0) goto LAB_1442b4a8d;
  FUN_1400021e4(param_2 + 8,local_d0);
  uVar5 = 0;
  FUN_14000bbd8(local_c0,local_d0,0);
  if (DAT_14cb8d398 != 0) {
    uVar5 = FUN_144837462(DAT_14cb8d398,local_c0);
  }
  lVar9 = param_1[0xa8];
  if (lVar9 != 0) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      plVar6 = (longlong *)(lVar4 + 0x458);
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    lVar1 = *plVar6;
    uVar10 = (uint)lVar9;
    if ((int)(uVar10 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
      lVar11 = lVar1 + 0x18;
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        lVar11 = *(longlong *)(lVar1 + 0x28);
      }
      if ((*(uint *)(lVar11 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >> (uVar10 & 0x1f) & 1) !=
          0) {
        lVar1 = *(longlong *)(lVar1 + 8);
        lVar11 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
        if (((lVar1 + lVar11 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar11) == lVar9)) &&
           (*(char *)(lVar1 + 1 + lVar11) != '\x04')) {
          FUN_1405a424c();
        }
      }
    }
    param_1[0xa8] = 0;
  }
  FUN_1400b22c2(&local_98,&DAT_14a5eb650);
  _Str = L"";
  if (local_90 != 0) {
    _Str = local_98;
  }
  if (_Str == (wchar_t *)0x0) {
    bVar13 = false;
  }
  else {
    sVar7 = wcslen(_Str);
    local_f0 = 0xffffffff;
    local_f8 = 0;
    iVar3 = FUN_1447ee042(local_d0,_Str,sVar7 & 0xffffffff,1);
    bVar13 = iVar3 != -1;
  }
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (bVar13) {
    FUN_1442b4bda(param_1,uVar5);
  }
  else {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar8 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar8;
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    puVar8 = local_e8;
    local_e0 = 3;
    *local_e8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_e8[2] = lVar9;
    *local_e8 = &PTR_FUN_14b9c07f0;
    local_e8[3] = 0;
    iVar3 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar10 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar3 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar3 = *(int *)(lVar4 + 0x10);
        bVar13 = iVar3 == 0;
        if (bVar13) {
          *(int *)(lVar4 + 0x10) = iVar12;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar3 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar3;
    puVar8[4] = param_1;
    puVar8[5] = uVar5;
    local_98 = (wchar_t *)0x0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_e8);
    local_58 = 1;
    FUN_14016fdb0(uVar2,&local_d8,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    param_1[0xa8] = local_d8;
    if (local_e0 != 0) {
      if (local_e8 == (undefined8 *)0x0) goto LAB_1442b4a74;
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      local_e0 = 0;
    }
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1442b4a74:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_d0[0] != 0) {
    FUN_1400020a8();
  }
LAB_1442b4a8d:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b4b4a FUN_1442b4b4a body=142 status=ok
// SIG undefined FUN_1442b4b4a(void)

void FUN_1442b4b4a(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143fd856e();
  uVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  lVar3 = FUN_1404960a8(uVar2);
  if (lVar3 != 0) {
    local_28 = "PlayAnimation";
    local_20 = 0xd;
    local_1c = 0;
    uVar1 = FUN_14001a6c0(&local_28,1);
    FUN_1401cd85c(lVar3,uVar1,param_1 + 0xa7);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b4bda FUN_1442b4bda body=1253 status=ok
// SIG undefined FUN_1442b4bda(void)

void FUN_1442b4bda(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *_Src;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int local_90;
  undefined8 *local_88;
  int local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbda6e0) && (FUN_144b3d300(&DAT_14cbda6e0), DAT_14cbda6e0 == -1)) {
    local_78 = &DAT_14ade88b0;
    uStack_70 = CONCAT35(uStack_70._5_3_,4);
    uVar6 = FUN_14001a6c0(&local_78,1);
    DAT_14cbda6d8 = (ulonglong)uVar6;
    _Init_thread_footer(&DAT_14cbda6e0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x548);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  puVar1 = local_88;
  local_80 = 3;
  *local_88 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_88[2] = lVar7;
  *local_88 = &PTR_FUN_14b9c0860;
  local_88[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_88 + 3) = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar9 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar10;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar1 + 0x1c) = iVar9;
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = 0x3dcccccd;
  if (((param_2 != 0) && (lVar11 = *(longlong *)(param_1 + 0x598), lVar11 != 0)) &&
     (*(int *)(param_2 + 0xa8) != *(int *)(param_2 + 0xd4))) {
    uVar6 = (uint)(DAT_14cbda6d8 >> 0x10);
    uVar8 = (uint)DAT_14cbda6d8 & 0xffff;
    lVar7 = param_2 + 0xd8;
    if (*(longlong *)(param_2 + 0xe0) != 0) {
      lVar7 = *(longlong *)(param_2 + 0xe0);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_2 + 0xe8) - 1U &
                             (int)(DAT_14cbda6d8 >> 0x20) + ((uint)DAT_14cbda6d8 << 0x10 | uVar8) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar7 = *(longlong *)(param_2 + 0xa0) + (longlong)iVar9 * 0xc0;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0xa0) + (longlong)iVar9 * 0xc0) == DAT_14cbda6d8)
        {
          if ((lVar7 + 8U & 0xfffffffffffffff7) == 0) break;
          *(undefined2 *)(lVar11 + 0xac) = *(undefined2 *)(lVar7 + 0x7c);
          *(undefined4 *)(lVar11 + 0xa8) = *(undefined4 *)(lVar7 + 0x78);
          FUN_14093c00e(lVar11 + 0xb0,lVar7 + 0x80);
          *(undefined8 *)(lVar11 + 0xc0) = *(undefined8 *)(lVar7 + 0x90);
          uVar13 = *(undefined4 *)(lVar7 + 0x9c);
          uVar4 = *(undefined4 *)(lVar7 + 0xa0);
          uVar5 = *(undefined4 *)(lVar7 + 0xa4);
          *(undefined4 *)(lVar11 + 200) = *(undefined4 *)(lVar7 + 0x98);
          *(undefined4 *)(lVar11 + 0xcc) = uVar13;
          *(undefined4 *)(lVar11 + 0xd0) = uVar4;
          *(undefined4 *)(lVar11 + 0xd4) = uVar5;
          puVar1 = (undefined8 *)(lVar11 + 0xd8);
          if (puVar1 != (undefined8 *)(lVar7 + 0xa8)) {
            iVar9 = *(int *)(lVar7 + 0xb0);
            _Src = *(void **)(lVar7 + 0xa8);
            *(int *)(lVar11 + 0xe0) = iVar9;
            if (iVar9 == 0 && *(int *)(lVar11 + 0xe4) == 0) {
              *(undefined4 *)(lVar11 + 0xe4) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar9);
              if (iVar9 != 0) {
                memcpy((void *)*puVar1,_Src,(longlong)iVar9 * 2);
              }
            }
          }
          lVar7 = FUN_1447e736e(lVar11 + 0xc0);
          if (lVar7 == 0) {
            lVar7 = lVar11 + 0x40;
          }
          else {
            lVar7 = FUN_1447e736e(lVar11 + 0xc0);
            lVar7 = lVar7 + 0x30;
          }
          if ((longlong)*(int *)(lVar7 + 0x78) == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)
                      (*(longlong *)(lVar7 + 0x70) + -0x18 + (longlong)*(int *)(lVar7 + 0x78) * 0x1c
                      );
          }
          *(undefined4 *)(lVar11 + 0x2c) = uVar13;
          plVar3 = *(longlong **)(param_1 + 0x598);
          local_98 = (undefined8 *)0x0;
          local_90 = 0;
          FUN_140328a42(&local_98,&local_88);
          FUN_140328a42(plVar3 + 0x1d,&local_98);
          *(undefined4 *)(plVar3 + 6) = 0;
          *(undefined1 *)(plVar3 + 5) = 1;
          local_78 = (undefined *)0x0;
          uStack_70 = 0x3f800000;
          local_68 = 0;
          local_64 = DAT_14c84635c;
          local_5c = 0x3f800000;
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0x3f800000;
          local_4c = 0;
          local_44 = 0;
          (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_78,0);
          if (local_90 != 0) {
            if (local_98 == (undefined8 *)0x0) break;
            (**(code **)*local_98)(local_98,0);
            FUN_1446efa72(&local_98,0,0,0x10);
            local_90 = 0;
          }
          if (local_98 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        iVar9 = *(int *)(lVar7 + 0xb8);
      } while (iVar9 != -1);
    }
  }
  if (local_80 != 0) {
    if (local_88 == (undefined8 *)0x0) goto LAB_1442b4fba;
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1442b4fba:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b50c0 FUN_1442b50c0 body=491 status=ok
// SIG undefined FUN_1442b50c0(void)

void FUN_1442b50c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140ec5ab0();
  local_20 = FUN_14406d938();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar1 = FUN_1477924da(param_1,&local_20);
  if (lVar1 == 0) {
LAB_1442b5145:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_14406d938();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1442b5145;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
  }
  *(longlong *)(param_1 + 0x380) = lVar1;
  local_28 = FUN_14406d54a();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  lVar1 = FUN_1477924da(param_1,&local_28);
  if (lVar1 == 0) {
LAB_1442b51b6:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_14406d54a();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1442b51b6;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
  }
  *(longlong *)(param_1 + 0x388) = lVar1;
  local_30 = FUN_14406d7ea();
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  lVar1 = FUN_1477924da(param_1,&local_30);
  if (lVar1 != 0) {
    lVar2 = FUN_14406d7ea();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      goto LAB_1442b521a;
    }
  }
  lVar1 = 0;
LAB_1442b521a:
  *(longlong *)(param_1 + 0x390) = lVar1;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1442b3a96();
    FUN_1442b3dee(*(undefined8 *)(param_1 + 0x380));
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FUN_1442b24ba();
    FUN_1442b2a62(*(undefined8 *)(param_1 + 0x388));
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b52ba FUN_1442b52ba body=72 status=ok
// SIG undefined FUN_1442b52ba(void)

void FUN_1442b52ba(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1442b3d12();
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FUN_1442b2932();
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1442b3972();
  }
  FUN_140e64ae8(param_1);
  return;
}



// FUNCTION 1442b5302 FUN_1442b5302 body=589 status=ok
// SIG undefined FUN_1442b5302(void)

void FUN_1442b5302(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + -0x2e0);
  local_68 = 0;
  local_70 = 0x3f800000;
  local_78 = 0;
  lVar4 = FUN_14333c8c0(plVar1,*(undefined8 *)(param_1 + 0x68),0,1);
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x4b0))(plVar1);
    goto LAB_1442b5364;
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a508d10;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b9c08d0;
  local_50[3] = 0;
  iVar7 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_1 + -0x2d4);
    *(uint *)(local_50 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar7;
  puVar3[4] = &LAB_1442b5550;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_1476f8602(lVar4 + 0x280,&local_58,&local_50);
  if (local_48 == 0) {
LAB_1442b54c9:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1442b54c9;
  }
  *(undefined8 *)(param_1 + 0x88) = local_58;
LAB_1442b5364:
  uVar5 = FUN_14477b072(plVar1,DAT_14cbb5fb8);
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar5,0);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b555e FUN_1442b555e body=684 status=ok
// SIG undefined FUN_1442b555e(void)

void FUN_1442b555e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + -0x2e0);
  FUN_14779b100(plVar1,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_14779b100(plVar1,*(undefined8 *)(param_1 + 0x78));
  local_68 = 0;
  local_70 = 0x3f800000;
  local_78 = 0;
  lVar4 = FUN_14333c8c0(plVar1,*(undefined8 *)(param_1 + 0x70),0,1);
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      local_68 = 0;
      local_70 = 0x3f800000;
      local_78 = 1;
      lVar4 = FUN_14333c8c0(plVar1,*(undefined8 *)(param_1 + 0x68),0,1);
      if (lVar4 != 0) goto LAB_1442b5667;
    }
    (**(code **)(*plVar1 + 0x4b8))(plVar1);
    goto LAB_1442b561f;
  }
LAB_1442b5667:
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a508d10;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b9c08d0;
  local_50[3] = 0;
  iVar7 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_1 + -0x2d4);
    *(uint *)(local_50 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar7;
  puVar3[4] = &LAB_1442b580c;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_1476f8602(lVar4 + 0x280,&local_58,&local_50);
  if (local_48 == 0) {
LAB_1442b5784:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1442b5784;
  }
  *(undefined8 *)(param_1 + 0x90) = local_58;
LAB_1442b561f:
  uVar5 = FUN_14477b072(plVar1,DAT_14cbb5fc8);
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar5,0);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b581a FUN_1442b581a body=353 status=ok
// SIG undefined FUN_1442b581a(void)

void FUN_1442b581a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1442b3a96();
    FUN_1442b3dee(*(undefined8 *)(param_1 + 0xa0));
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1442b24ba();
    FUN_1442b2a62(*(undefined8 *)(param_1 + 0xa8));
  }
  plVar1 = (longlong *)(param_1 + -0x2e0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1442b33d2();
  }
  lVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1);
  if ((lVar4 != 0) && (lVar4 = FUN_1404960a8(lVar4), lVar4 != 0)) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    if (plVar1 == (longlong *)0x0) {
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + -0x2d4);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
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
        uVar3 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar7;
        }
        uVar6 = (ulonglong)uVar3;
      }
    }
    *puVar5 = &PTR_FUN_14b9be7a8;
    puVar5[1] = (ulonglong)uVar8 | uVar6 << 0x20;
    FUN_14039144e(lVar4,puVar5);
    return;
  }
  return;
}



// FUNCTION 1442b5992 FUN_1442b5992 body=93 status=ok
// SIG undefined FUN_1442b5992(void)

void FUN_1442b5992(longlong param_1)

{
  FUN_14333c8c0(param_1,*(undefined8 *)(param_1 + 0x358),0,0,0,0x3f800000,0);
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1442b3dee();
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FUN_1442b2a62();
    return;
  }
  return;
}



// FUNCTION 1442b5a06 FUN_1442b5a06 body=91 status=ok
// SIG undefined FUN_1442b5a06(void)

void FUN_1442b5a06(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1442b3d12();
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FUN_1442b2932();
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1442b3972();
  }
  FUN_140e64d4c(param_1 + 0x2e8,param_1);
  *(undefined8 *)(param_1 + 0x378) = 0;
  return;
}



// FUNCTION 1442b5a62 FUN_1442b5a62 body=315 status=ok
// SIG undefined FUN_1442b5a62(void)

longlong FUN_1442b5a62(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar1 = FUN_140334a94(lVar1,uVar2);
    if (lVar1 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30))
      goto LAB_1442b5ad9;
    }
  }
  lVar1 = 0;
LAB_1442b5ad9:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b5baa FUN_1442b5baa body=1299 status=ok
// SIG undefined FUN_1442b5baa(void)

void FUN_1442b5baa(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_1442be3fa(plVar2);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((*(longlong *)(param_1 + 0xb8) == 0) || (lVar8 = *(longlong *)(param_1 + 0xc0), lVar8 == 0))
  goto LAB_1442b5c46;
  lVar7 = FUN_14406ea70();
  if ((lVar7 == 0) ||
     (((*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) || (*(longlong *)(param_1 + 0xc0) == 0)))) goto LAB_1442b5c46;
  plVar3 = (longlong *)(param_1 + -0x2e0);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x300))();
  lVar8 = (**(code **)(*(longlong *)(param_1 + -0x2e0) + 0x2d0))(plVar3);
  if (lVar8 == 0) goto LAB_1442b5c46;
  FUN_1442aa94c(&local_98,lVar8,&DAT_14cbd9758);
  if (((local_98._4_4_ == 0) || ((int)(uint)local_98 < 0)) || (DAT_14c9647dc <= (int)(uint)local_98)
     ) goto LAB_1442b5c46;
  plVar12 = (longlong *)
            ((ulonglong)(((uint)local_98 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_98 >> 0x10) * 8));
  if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != local_98._4_4_)) ||
     (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 ||
      ((lVar8 = *plVar12, lVar8 == 0 || (iVar5 = *(int *)(lVar8 + 0x80), (longlong)iVar5 == 0))))))
  goto LAB_1442b5c46;
  lVar7 = *(longlong *)(lVar8 + 0x78);
  fVar14 = 0.0;
  lVar13 = 0;
  local_b0 = lVar8;
  do {
    if ((*(longlong *)(lVar7 + lVar13) != 0) &&
       ((*(uint *)(*(longlong *)(lVar7 + lVar13) + 8) >> 0x1e & 1) == 0)) {
      lVar8 = *(longlong *)(param_1 + 0xc0);
      if ((lVar8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar8);
      }
      lVar9 = (**(code **)(*plVar3 + 0x180))(plVar3);
      if (lVar8 != 0) {
        FUN_1405e2bf2();
      }
      if (lVar9 != 0) {
        local_a8[0] = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar8);
        }
        lVar8 = FUN_14126c5d6(lVar9,local_a8,0);
        if (lVar8 != 0) {
          lVar9 = FUN_14406ea70();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            lVar9 = *(longlong *)(lVar7 + lVar13);
            if ((DAT_14c950c29 == 1) && (lVar9 != 0)) {
              FUN_1456cec3c(lVar9);
            }
            if (((DAT_14c950c29 & 1) != 0) && (lVar9 != 0)) {
              FUN_1456cec3c(lVar9);
            }
            *(longlong *)(lVar8 + 0x2d0) = lVar9;
            fVar4 = *(float *)(*(longlong *)(lVar7 + lVar13) + 0x80);
            uVar10 = FUN_1442b640d(plVar3);
            lVar9 = FUN_147735534(*(undefined8 *)(param_1 + 0xb8),uVar10);
            if (lVar9 != 0) {
              FUN_147735dd2(lVar9,(ulonglong)(uint)(fVar4 - fVar14) | 0x100000000);
              *(undefined1 *)(lVar9 + 0x58) = 0;
              lVar11 = *(longlong *)(lVar9 + 0x38);
              if (lVar11 == 0) {
                *(undefined1 *)(lVar9 + 0x59) = 0;
              }
              else {
                if (*(int *)(lVar11 + 0x38) == 0) {
                  *(undefined1 *)(lVar9 + 0x59) = 0;
                }
                else {
                  *(undefined4 *)(lVar11 + 0x38) = 0;
                  FUN_14156c56c(lVar11,1);
                  lVar11 = *(longlong *)(lVar9 + 0x38);
                  *(undefined1 *)(lVar9 + 0x59) = 0;
                  if (lVar11 == 0) goto LAB_1442b5ef7;
                }
                if (*(int *)(lVar11 + 0x3c) != 0) {
                  *(undefined4 *)(lVar11 + 0x3c) = 0;
                  FUN_14156c56c(lVar11,1);
                }
              }
LAB_1442b5ef7:
              local_98 = 0;
              uStack_90 = 0;
              FUN_147735cba(lVar9,&local_98);
            }
            lVar9 = FUN_147735534(*(undefined8 *)(param_1 + 0xb8),lVar8);
            if (lVar9 != 0) {
              FUN_147735dd2(lVar9,0x3f800000);
              *(undefined1 *)(lVar9 + 0x58) = 2;
              lVar11 = *(longlong *)(lVar9 + 0x38);
              if (lVar11 == 0) {
                *(undefined1 *)(lVar9 + 0x59) = 2;
              }
              else {
                if (*(int *)(lVar11 + 0x38) == 2) {
                  *(undefined1 *)(lVar9 + 0x59) = 2;
                }
                else {
                  *(undefined4 *)(lVar11 + 0x38) = 2;
                  FUN_14156c56c(lVar11,1);
                  lVar11 = *(longlong *)(lVar9 + 0x38);
                  *(undefined1 *)(lVar9 + 0x59) = 2;
                  if (lVar11 == 0) goto LAB_1442b5f1d;
                }
                if (*(int *)(lVar11 + 0x3c) != 2) {
                  *(undefined4 *)(lVar11 + 0x3c) = 2;
                  FUN_14156c56c(lVar11,1);
                }
              }
            }
LAB_1442b5f1d:
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar8);
            }
            iVar6 = *(int *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xd0) = iVar6 + 1U;
            if (*(uint *)(param_1 + 0xd4) < iVar6 + 1U) {
              FUN_1442be42a(plVar2,iVar6);
            }
            *(longlong *)(*plVar2 + (longlong)iVar6 * 8) = lVar8;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar8);
            }
            fVar14 = *(float *)(*(longlong *)(lVar7 + lVar13) + 0x80);
          }
        }
      }
    }
    lVar13 = lVar13 + 8;
  } while ((longlong)iVar5 * 8 != lVar13);
  pfVar1 = (float *)(*(longlong *)
                      (*(longlong *)(local_b0 + 0x78) +
                      (longlong)(*(int *)(local_b0 + 0x80) + -1) * 8) + 0x7c);
  if (*(float *)(local_b0 + 0x74) < *pfVar1 || *(float *)(local_b0 + 0x74) == *pfVar1)
  goto LAB_1442b5c46;
  uVar10 = FUN_1442b640d(plVar3);
  lVar8 = FUN_147735534(*(undefined8 *)(param_1 + 0xb8),uVar10);
  if (lVar8 == 0) goto LAB_1442b5c46;
  FUN_147735dd2(lVar8,(ulonglong)(uint)(1.0 - fVar14) | 0x100000000);
  *(undefined1 *)(lVar8 + 0x58) = 0;
  lVar7 = *(longlong *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    *(undefined1 *)(lVar8 + 0x59) = 0;
  }
  else {
    if (*(int *)(lVar7 + 0x38) == 0) {
      *(undefined1 *)(lVar8 + 0x59) = 0;
    }
    else {
      *(undefined4 *)(lVar7 + 0x38) = 0;
      FUN_14156c56c(lVar7,1);
      lVar7 = *(longlong *)(lVar8 + 0x38);
      *(undefined1 *)(lVar8 + 0x59) = 0;
      if (lVar7 == 0) goto LAB_1442b60a6;
    }
    if (*(int *)(lVar7 + 0x3c) != 0) {
      *(undefined4 *)(lVar7 + 0x3c) = 0;
      FUN_14156c56c(lVar7,1);
    }
  }
LAB_1442b60a6:
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_147735cba(lVar8);
LAB_1442b5c46:
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_1442b581a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b60be FUN_1442b60be body=157 status=ok
// SIG undefined FUN_1442b60be(void)

undefined4 FUN_1442b60be(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1442b615c FUN_1442b615c body=688 status=ok
// SIG undefined FUN_1442b615c(void)

void FUN_1442b615c(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e6538c();
  lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar4 != 0) {
    FUN_1442aa94c(&local_50,lVar4,&DAT_14cbd9758);
    if (((((local_50._4_4_ != 0) && (-1 < (int)(uint)local_50)) &&
         ((int)(uint)local_50 < DAT_14c9647dc)) &&
        ((plVar6 = (longlong *)
                   ((ulonglong)(((uint)local_50 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_50 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == local_50._4_4_)))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        ((lVar4 = *plVar6, lVar4 != 0 && (iVar2 = *(int *)(lVar4 + 0x80), (longlong)iVar2 != 0))))))
    {
      fVar9 = *(float *)(lVar4 + 0x74) - *(float *)(lVar4 + 0x70);
      lVar7 = param_1[0x77];
      if ((lVar7 == 0) || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x78);
        lVar8 = 0;
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(lVar4 + lVar8);
          if ((lVar3 != 0) && (fVar1 = *(float *)(lVar3 + 0x7c), fVar1 <= fVar9)) {
            if ((lVar7 == 0) || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) {
              lVar7 = lVar3;
              if (DAT_14c950c29 != '\0') goto LAB_1442b6283;
            }
            else if ((*(float *)(lVar7 + 0x7c) <= fVar1 && fVar1 != *(float *)(lVar7 + 0x7c)) &&
                    (lVar7 = lVar3, DAT_14c950c29 == '\x01')) {
LAB_1442b6283:
              FUN_1456cec3c();
              lVar7 = *(longlong *)(lVar4 + lVar8);
            }
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar2 * 8 != lVar8);
        if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
          FUN_1456cec3c(lVar7);
          param_1[0x77] = lVar7;
        }
        else {
          param_1[0x77] = lVar7;
          if (lVar7 == 0) goto LAB_1442b63d1;
        }
        if (((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) &&
           (*(float *)(param_1 + 0x78) =
                 *(float *)(lVar7 + 0x7c) + *(float *)((longlong)param_1 + 0x3c4),
           *(char *)(lVar7 + 0x85) == '\0')) {
          *(undefined1 *)(lVar7 + 0x85) = 1;
          local_48 = DAT_14cbb62e8;
          local_50 = DAT_14cbb62e0;
          (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x38))(lVar7 + 0x28);
          lVar7 = param_1[0x77];
          if (lVar7 == 0) goto LAB_1442b63d1;
        }
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
        if ((*(float *)(param_1 + 0x78) < fVar9) || (fVar9 <= *(float *)(lVar7 + 0x7c))) {
          if (fVar9 <= *(float *)(lVar7 + 0x7c)) {
            if (*(char *)(lVar7 + 0x85) != '\0') {
              *(undefined1 *)(lVar7 + 0x85) = 0;
              local_48 = DAT_14cbb62e8;
              local_50 = DAT_14cbb62e0;
              (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x38))(lVar7 + 0x28);
            }
            param_1[0x77] = 0;
            *(undefined4 *)(param_1 + 0x78) = 0xbf800000;
          }
        }
        else {
          *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + -1.0;
          uVar5 = FUN_14477b072(param_1,DAT_14cbb6018);
          (**(code **)(*param_1 + 0x248))(param_1,uVar5,0);
        }
      }
    }
  }
LAB_1442b63d1:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b640d FUN_1442b640d body=175 status=ok
// SIG undefined FUN_1442b640d(void)

undefined8 FUN_1442b640d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459e6420();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b652a FUN_1442b652a body=409 status=ok
// SIG undefined FUN_1442b652a(void)

void FUN_1442b652a(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((((lVar5 == 0) || (*(longlong *)(param_2 + 0x70) == 0)) ||
      (plVar11 = *(longlong **)(param_2 + 0x78), plVar11 == (longlong *)0x0)) ||
     ((int)plVar11[1] < 1)) {
    return;
  }
  iVar10 = (int)plVar11[1];
  do {
    if (iVar10 == 0) {
      plVar11 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar8 = (int)plVar11[1];
    bVar13 = iVar10 == iVar8;
    if (bVar13) {
      *(int *)(plVar11 + 1) = iVar10 + 1;
      iVar8 = iVar10;
    }
    iVar10 = iVar8;
    UNLOCK();
  } while (!bVar13);
  lVar12 = 0;
  if (plVar11 != (longlong *)0x0) {
    lVar12 = *(longlong *)(param_2 + 0x70);
  }
  AcquireSRWLockShared((PSRWLOCK)(lVar12 + 0x168));
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  lVar6 = *(longlong *)(lVar5 + 0xc0);
  lVar7 = (longlong)param_3 * 0x208;
  lVar5 = lVar6 + lVar7;
  FUN_148e72ca4(lVar6 + lVar7 + 0xd0,lVar12,2);
  lVar3 = lVar6 + lVar7;
  iVar10 = 1;
  FUN_148e72ca4(lVar3 + 0x138,lVar12,1);
  FUN_148e72ca4(lVar6 + lVar7 + 0x1a0,lVar12,0);
  bVar4 = *(byte *)(lVar3 + 0xf0);
  if ((bVar4 ^ 1) == *(byte *)(lVar3 + 0xf8)) {
    if (*(int *)(lVar3 + 0xfc) == 0) goto LAB_1442b6642;
  }
  else {
    iVar10 = *(int *)(lVar3 + 0xfc) + 1;
LAB_1442b6642:
    *(byte *)(lVar5 + 0xf8) = bVar4 ^ 1;
    *(int *)(lVar5 + 0xfc) = iVar10;
  }
  if (bVar4 == *(byte *)(lVar5 + 0x160)) {
    if (*(int *)(lVar5 + 0x164) == 0) {
      iVar10 = 1;
      goto LAB_1442b6669;
    }
  }
  else {
    iVar10 = *(int *)(lVar5 + 0x164) + 1;
LAB_1442b6669:
    *(byte *)(lVar5 + 0x160) = bVar4;
    *(int *)(lVar5 + 0x164) = iVar10;
  }
  bVar9 = 0;
  if (*(char *)(lVar5 + 0x158) != '\0') {
    bVar9 = bVar4;
  }
  if (bVar9 == *(byte *)(lVar5 + 0x1c8)) {
    if (*(int *)(lVar5 + 0x1cc) != 0) goto LAB_1442b66ab;
    iVar10 = 1;
  }
  else {
    iVar10 = *(int *)(lVar5 + 0x1cc) + 1;
  }
  *(byte *)(lVar5 + 0x1c8) = bVar9;
  *(int *)(lVar5 + 0x1cc) = iVar10;
LAB_1442b66ab:
                    /* WARNING: Could not recover jumptable at 0x0001442b66bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(lVar12 + 0x168));
  return;
}



// FUNCTION 1442b6878 FUN_1442b6878 body=338 status=ok
// SIG undefined FUN_1442b6878(void)

void FUN_1442b6878(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    if ((((((*(longlong *)(param_1 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1 + 200) != 0)) &&
         ((*(int *)(param_1 + 0x58) != 0 && (uVar2 = *(uint *)(param_1 + 0x54), -1 < (int)uVar2))))
        && (((int)uVar2 < DAT_14c9647dc &&
            ((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x58))))))) &&
       ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar8;
      }
      else {
        lVar7 = 0;
      }
      if (*(longlong *)(lVar7 + 0x40) == 0) {
        plVar8 = (longlong *)(lVar7 + 0x28);
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar8 != (longlong *)0x0) &&
         (plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x210))(),
         plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x2a0))(plVar8,param_1,*(undefined8 *)(param_1 + 200),param_2);
        puVar4 = *(ushort **)(param_1 + 0x90);
        if (puVar4 != (ushort *)0x0) {
          *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(param_1 + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442b69bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1442b6afe FUN_1442b6afe body=4409 status=ok
// SIG undefined FUN_1442b6afe(void)

void FUN_1442b6afe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  ushort *puVar33;
  longlong lVar34;
  void *_Src;
  longlong lVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  wchar_t *pwVar39;
  size_t sVar40;
  longlong *plVar41;
  char cVar42;
  undefined1 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  int *piVar46;
  uint uVar47;
  PSRWLOCK SRWLock;
  bool bVar48;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  undefined4 *local_230;
  undefined4 *local_228;
  int *local_220;
  longlong local_218;
  size_t local_210;
  PSRWLOCK local_208;
  longlong *local_200;
  longlong *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  longlong local_1e0 [32];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    lVar32 = *(longlong *)(param_1 + 0x288);
    if ((lVar32 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
      piVar46 = (int *)(param_1 + 0x208);
      FUN_1448d5e3c(&local_200,piVar46);
      puVar44 = (undefined4 *)local_200[0x14];
      AcquireSRWLockShared((PSRWLOCK)(puVar44 + 0x32));
      plVar41 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar41 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar41 + 0x10))(plVar41);
          }
        }
      }
      if (*(int *)(param_1 + 0x2ac) != puVar44[0x30]) {
        *(undefined4 *)(param_1 + 0x2ac) = puVar44[0x30];
        iVar4 = *(int *)(param_1 + 800);
        iVar5 = puVar44[0x23];
        if (iVar4 != iVar5) {
          *(undefined1 *)(param_1 + 0x31c) = *(undefined1 *)(puVar44 + 0x22);
          *(undefined4 *)(param_1 + 800) = puVar44[0x23];
        }
        iVar6 = *(int *)(param_1 + 0x328);
        iVar7 = puVar44[0x25];
        if (iVar6 != iVar7) {
          *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(puVar44 + 0x24);
          *(undefined4 *)(param_1 + 0x328) = puVar44[0x25];
        }
        local_230 = (undefined4 *)CONCAT71(local_230._1_7_,iVar4 != iVar5 || iVar6 != iVar7);
        iVar4 = *(int *)(lVar32 + 0x140);
        iVar5 = puVar44[0x2c];
        local_220 = piVar46;
        if (iVar4 != iVar5) {
          puVar3 = (undefined8 *)(lVar32 + 0x130);
          if (puVar3 != (undefined8 *)(puVar44 + 0x28)) {
            iVar6 = puVar44[0x2a];
            puVar45 = *(undefined4 **)(puVar44 + 0x28);
            *(int *)(lVar32 + 0x138) = iVar6;
            if (iVar6 == 0 && *(int *)(lVar32 + 0x13c) == 0) {
              *(undefined4 *)(lVar32 + 0x13c) = 0;
            }
            else {
              local_228 = puVar45;
              FUN_1446dd670(puVar3,iVar6);
              if (iVar6 != 0) {
                memcpy((void *)*puVar3,local_228,(longlong)iVar6 * 2);
              }
            }
          }
          *(undefined4 *)(lVar32 + 0x140) = puVar44[0x2c];
        }
        piVar46 = local_220;
        iVar6 = *(int *)(lVar32 + 0xc4);
        iVar7 = puVar44[0x19];
        if (iVar6 != iVar7) {
          *(undefined4 *)(lVar32 + 0xc0) = puVar44[0x18];
          *(undefined4 *)(lVar32 + 0xc4) = puVar44[0x19];
        }
        iVar8 = *(int *)(lVar32 + 0xd4);
        iVar9 = puVar44[3];
        if (iVar8 != iVar9) {
          *(undefined4 *)(lVar32 + 0xd0) = puVar44[2];
          *(undefined4 *)(lVar32 + 0xd4) = puVar44[3];
        }
        iVar10 = *(int *)(lVar32 + 0xdc);
        iVar11 = puVar44[5];
        if (iVar10 != iVar11) {
          *(undefined4 *)(lVar32 + 0xd8) = puVar44[4];
          *(undefined4 *)(lVar32 + 0xdc) = puVar44[5];
        }
        iVar12 = *(int *)(lVar32 + 0xcc);
        iVar13 = puVar44[1];
        if (iVar12 != iVar13) {
          *(undefined4 *)(lVar32 + 200) = *puVar44;
          *(undefined4 *)(lVar32 + 0xcc) = puVar44[1];
        }
        iVar14 = *(int *)(lVar32 + 0xec);
        iVar15 = puVar44[0xf];
        if (iVar14 != iVar15) {
          *(undefined4 *)(lVar32 + 0xe8) = puVar44[0xe];
          *(undefined4 *)(lVar32 + 0xec) = puVar44[0xf];
        }
        iVar16 = *(int *)(lVar32 + 0xf4);
        iVar17 = puVar44[0x11];
        if (iVar16 != iVar17) {
          *(undefined4 *)(lVar32 + 0xf0) = puVar44[0x10];
          *(undefined4 *)(lVar32 + 0xf4) = puVar44[0x11];
        }
        iVar18 = *(int *)(lVar32 + 0xe4);
        iVar19 = puVar44[0xd];
        if (iVar18 != iVar19) {
          *(undefined4 *)(lVar32 + 0xe0) = puVar44[0xc];
          *(undefined4 *)(lVar32 + 0xe4) = puVar44[0xd];
        }
        iVar20 = *(int *)(lVar32 + 0x108);
        iVar21 = puVar44[0x1d];
        if (iVar20 != iVar21) {
          *(undefined1 *)(lVar32 + 0x104) = *(undefined1 *)(puVar44 + 0x1c);
          *(undefined4 *)(lVar32 + 0x108) = puVar44[0x1d];
        }
        cVar42 = (char)local_230;
        iVar22 = *(int *)(lVar32 + 0x110);
        iVar23 = puVar44[0x1f];
        if (iVar22 != iVar23) {
          *(undefined1 *)(lVar32 + 0x10c) = *(undefined1 *)(puVar44 + 0x1e);
          *(undefined4 *)(lVar32 + 0x110) = puVar44[0x1f];
        }
        iVar24 = *(int *)(lVar32 + 0x118);
        iVar25 = puVar44[0x21];
        if (iVar24 != iVar25) {
          *(undefined1 *)(lVar32 + 0x114) = *(undefined1 *)(puVar44 + 0x20);
          *(undefined4 *)(lVar32 + 0x118) = puVar44[0x21];
        }
        iVar26 = *(int *)(lVar32 + 0x120);
        iVar27 = puVar44[0x1b];
        if (iVar26 != iVar27) {
          *(undefined4 *)(lVar32 + 0x11c) = puVar44[0x1a];
          *(undefined4 *)(lVar32 + 0x120) = puVar44[0x1b];
        }
        iVar28 = *(int *)(lVar32 + 0x128);
        iVar29 = puVar44[0x2f];
        if (iVar28 != iVar29) {
          *(undefined4 *)(lVar32 + 0x124) = puVar44[0x2e];
          *(undefined4 *)(lVar32 + 0x128) = puVar44[0x2f];
        }
        iVar30 = *(int *)(lVar32 + 0x14c);
        iVar31 = puVar44[0x27];
        if (iVar30 != iVar31) {
          *(undefined1 *)(lVar32 + 0x148) = *(undefined1 *)(puVar44 + 0x26);
          *(undefined4 *)(lVar32 + 0x14c) = puVar44[0x27];
        }
        if ((char)local_230 != '\0') {
          FUN_141328aca(param_1);
        }
        if ((((((iVar6 != iVar7 || iVar8 != iVar9) || iVar10 != iVar11) || iVar12 != iVar13) ||
             iVar14 != iVar15) || iVar16 != iVar17) || iVar18 != iVar19) {
          FUN_1442b7c38(param_1);
        }
        if ((((((((iVar4 != iVar5 || cVar42 != '\0') || iVar20 != iVar21) || iVar22 != iVar23) ||
               iVar24 != iVar25) || iVar26 != iVar27) || iVar28 != iVar29) || iVar30 != iVar31) &&
           (puVar33 = *(ushort **)(lVar32 + 0x80), puVar33 != (ushort *)0x0)) {
          *puVar33 = *puVar33 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(puVar44 + 0x32));
      lVar32 = *(longlong *)(param_1 + 0x288);
      if ((lVar32 != 0) && (*piVar46 != 0)) {
        FUN_1448d5e3c(&local_200,piVar46);
        lVar34 = local_200[0xc];
        SRWLock = (PSRWLOCK)(lVar34 + 0xb0);
        AcquireSRWLockShared(SRWLock);
        plVar41 = local_1f8;
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1f8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1f8)(local_1f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar41 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar41 + 0x10))(plVar41);
            }
          }
        }
        if (*(int *)(param_1 + 0x2b0) != *(int *)(lVar34 + 0xa8)) {
          *(int *)(param_1 + 0x2b0) = *(int *)(lVar34 + 0xa8);
          if (*(int *)(param_1 + 0x338) != *(int *)(lVar34 + 0x14)) {
            *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(lVar34 + 0x10);
            *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(lVar34 + 0x14);
          }
          if (*(int *)(param_1 + 0x330) != *(int *)(lVar34 + 0xc)) {
            *(undefined1 *)(param_1 + 0x32c) = *(undefined1 *)(lVar34 + 8);
            *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(lVar34 + 0xc);
          }
          iVar4 = *(int *)(param_1 + 0x308);
          iVar5 = *(int *)(lVar34 + 0x1c);
          if (iVar4 != iVar5) {
            *(undefined1 *)(param_1 + 0x304) = *(undefined1 *)(lVar34 + 0x18);
            *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(lVar34 + 0x1c);
          }
          iVar6 = *(int *)(param_1 + 0x310);
          iVar7 = *(int *)(lVar34 + 0x24);
          if (iVar6 != iVar7) {
            *(undefined1 *)(param_1 + 0x30c) = *(undefined1 *)(lVar34 + 0x20);
            *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(lVar34 + 0x24);
          }
          iVar8 = *(int *)(param_1 + 0x2f8);
          iVar9 = *(int *)(lVar34 + 0x50);
          if (iVar8 != iVar9) {
            FUN_1447715ec(param_1 + 0x2d0,lVar34 + 0x28);
            *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(lVar34 + 0x50);
          }
          if (*(int *)(param_1 + 0x3a0) != *(int *)(lVar34 + 0x68)) {
            uVar36 = *(undefined4 *)(lVar34 + 0x5c);
            uVar37 = *(undefined4 *)(lVar34 + 0x60);
            uVar38 = *(undefined4 *)(lVar34 + 100);
            *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(lVar34 + 0x58);
            *(undefined4 *)(param_1 + 0x394) = uVar36;
            *(undefined4 *)(param_1 + 0x398) = uVar37;
            *(undefined4 *)(param_1 + 0x39c) = uVar38;
            *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(lVar34 + 0x68);
            if (((((*(int *)(param_1 + 0x34) != 0) &&
                  (uVar47 = *(uint *)(param_1 + 0x30), -1 < (int)uVar47)) &&
                 ((int)uVar47 < DAT_14c9647dc)) &&
                ((plVar41 = (longlong *)
                            ((ulonglong)((uVar47 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar47 >> 0x10) * 8)),
                 plVar41 != (longlong *)0x0 && ((int)plVar41[2] == *(int *)(param_1 + 0x34))))) &&
               ((*(uint *)(plVar41 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar41 + 1) & 0x10200000) == 0) {
                local_228 = (undefined4 *)*plVar41;
              }
              else {
                local_228 = (undefined4 *)0x0;
              }
              local_218 = lVar32 + 0xb8;
              local_200 = local_1e0;
              local_1e8 = '\0';
              local_1f0 = local_e0;
              local_230 = (undefined4 *)(param_1 + 0x390);
              local_1f8 = local_200;
              pwVar39 = (wchar_t *)FUN_140c7f682(param_1,L"CenterPosUpdated",&local_200);
              local_60 = (undefined1 *)0x0;
              if (pwVar39 == (wchar_t *)0x0) {
                local_58 = (undefined1 *)0x0;
                local_50 = 0;
              }
              else {
                local_220 = piVar46;
                local_208 = SRWLock;
                local_210 = wcslen(pwVar39);
                local_50 = FUN_14475aa65(0,pwVar39,local_210 & 0xffffffff);
                uVar47 = local_50 + 1;
                local_58 = (undefined1 *)0x0;
                if (0x80 < uVar47) {
                  FUN_1446efa72(&local_60,0,uVar47,1);
                  local_58 = local_60;
                }
                if (local_58 == (undefined1 *)0x0) {
                  local_58 = local_e0;
                }
                FUN_14475a98a(local_58,uVar47,pwVar39,(int)local_210 + 1);
                piVar46 = local_220;
                SRWLock = local_208;
              }
              FUN_1442b80f2(local_228,local_58,local_230,local_218);
              if (local_60 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              if (local_1e8 == '\x01') {
                FUN_1400020a8(local_200);
              }
            }
          }
          cVar42 = (iVar4 != iVar5 || iVar6 != iVar7) || iVar8 != iVar9;
          if (*(int *)(lVar32 + 0x160) != *(int *)(lVar34 + 0x98)) {
            local_230 = (undefined4 *)CONCAT71(local_230._1_7_,cVar42);
            puVar3 = (undefined8 *)(lVar32 + 0x150);
            if (puVar3 != (undefined8 *)(lVar34 + 0x88)) {
              iVar4 = *(int *)(lVar34 + 0x90);
              _Src = *(void **)(lVar34 + 0x88);
              *(int *)(lVar32 + 0x158) = iVar4;
              if (iVar4 == 0 && *(int *)(lVar32 + 0x15c) == 0) {
                *(undefined4 *)(lVar32 + 0x15c) = 0;
              }
              else {
                FUN_1446dd670(puVar3,iVar4);
                if (iVar4 != 0) {
                  memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
                }
              }
            }
            *(undefined4 *)(lVar32 + 0x160) = *(undefined4 *)(lVar34 + 0x98);
            cVar42 = (char)local_230;
          }
          FUN_141328aca();
          if (cVar42 != '\0') {
            lVar34 = *(longlong *)(param_1 + 0x288);
            if (((*(char *)(param_1 + 0x304) == '\0') && (*(char *)(param_1 + 0x314) != '\x01')) ||
               (*(char *)(param_1 + 0x30c) != '\x01')) {
              bVar48 = false;
            }
            else {
              bVar48 = *(int *)(param_1 + 0x300) != 2;
            }
            *(bool *)(lVar34 + 0xb5) = bVar48;
            if (((*(char *)(param_1 + 0x304) == '\0') && (*(char *)(param_1 + 0x314) != '\x01')) ||
               (*(char *)(param_1 + 0x30c) != '\x01')) {
              bVar48 = false;
            }
            else {
              bVar48 = *(int *)(param_1 + 0x300) == 2;
            }
            *(bool *)(lVar34 + 0xb4) = bVar48;
          }
          puVar33 = *(ushort **)(lVar32 + 0x80);
          if (puVar33 != (ushort *)0x0) {
            *puVar33 = *puVar33 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
          }
        }
        ReleaseSRWLockShared(SRWLock);
        lVar32 = *(longlong *)(param_1 + 0x288);
        if ((lVar32 != 0) && (*piVar46 != 0)) {
          FUN_1448d5e3c(&local_200,piVar46);
          puVar44 = (undefined4 *)local_200[0x2e];
          AcquireSRWLockShared((PSRWLOCK)(puVar44 + 6));
          plVar41 = local_1f8;
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1f8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1f8)(local_1f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar41 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar41 + 0x10))(plVar41);
              }
            }
          }
          if ((*(int *)(param_1 + 0x2b4) != puVar44[4]) &&
             (*(undefined4 *)(param_1 + 0x2b4) = puVar44[4], *(int *)(param_1 + 0x348) != puVar44[1]
             )) {
            *(undefined4 *)(param_1 + 0x344) = *puVar44;
            *(undefined4 *)(param_1 + 0x348) = puVar44[1];
            FUN_1442b7c38(param_1);
            puVar33 = *(ushort **)(lVar32 + 0x80);
            if (puVar33 != (ushort *)0x0) {
              *puVar33 = *puVar33 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
            }
          }
          ReleaseSRWLockShared((PSRWLOCK)(puVar44 + 6));
          lVar32 = *(longlong *)(param_1 + 0x288);
          if ((lVar32 != 0) && (*piVar46 != 0)) {
            FUN_1448d5e3c(&local_200,piVar46);
            lVar34 = local_200[0x16];
            AcquireSRWLockShared((PSRWLOCK)(lVar34 + 0x88));
            plVar41 = local_1f8;
            if (local_1f8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1f8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_1f8)(local_1f8);
                LOCK();
                piVar46 = (int *)((longlong)plVar41 + 0xc);
                *piVar46 = *piVar46 + -1;
                UNLOCK();
                if (*piVar46 == 0) {
                  (**(code **)(*plVar41 + 0x10))(plVar41);
                }
              }
            }
            if (*(int *)(param_1 + 0x2b8) != *(int *)(lVar34 + 0x80)) {
              *(int *)(param_1 + 0x2b8) = *(int *)(lVar34 + 0x80);
              iVar4 = *(int *)(lVar34 + 0x34);
              *(int *)(param_1 + 0x300) = iVar4;
              lVar35 = *(longlong *)(param_1 + 0x288);
              if (((*(char *)(param_1 + 0x304) == '\0') && (*(char *)(param_1 + 0x314) != '\x01'))
                 || (*(char *)(param_1 + 0x30c) != '\x01')) {
                bVar48 = false;
              }
              else {
                bVar48 = iVar4 != 2;
              }
              *(bool *)(lVar35 + 0xb5) = bVar48;
              if (((*(char *)(param_1 + 0x304) == '\0') && (*(char *)(param_1 + 0x314) != '\x01'))
                 || (*(char *)(param_1 + 0x30c) != '\x01')) {
                bVar48 = false;
              }
              else {
                bVar48 = *(int *)(param_1 + 0x300) == 2;
              }
              *(bool *)(lVar35 + 0xb4) = bVar48;
              puVar33 = *(ushort **)(lVar32 + 0x80);
              if (puVar33 != (ushort *)0x0) {
                *puVar33 = *puVar33 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
              }
            }
            ReleaseSRWLockShared((PSRWLOCK)(lVar34 + 0x88));
          }
        }
      }
    }
    piVar46 = (int *)(param_1 + 0x208);
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_1448d5e3c(&local_200,piVar46);
      puVar44 = (undefined4 *)local_200[0x9c];
      AcquireSRWLockShared((PSRWLOCK)(puVar44 + 0x10));
      plVar41 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar41 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar41 + 0x10))(plVar41);
          }
        }
      }
      if (*(int *)(param_1 + 700) != puVar44[0xf]) {
        *(undefined4 *)(param_1 + 700) = puVar44[0xf];
        local_230 = (undefined4 *)(param_1 + 0x350);
        if (*(int *)(param_1 + 0x360) != puVar44[4]) {
          uVar36 = puVar44[1];
          uVar37 = puVar44[2];
          uVar38 = puVar44[3];
          *local_230 = *puVar44;
          *(undefined4 *)(param_1 + 0x354) = uVar36;
          *(undefined4 *)(param_1 + 0x358) = uVar37;
          *(undefined4 *)(param_1 + 0x35c) = uVar38;
          *(undefined4 *)(param_1 + 0x360) = puVar44[4];
        }
        local_220 = (int *)(param_1 + 0x364);
        if (*(int *)(param_1 + 0x374) != puVar44[9]) {
          uVar36 = puVar44[6];
          uVar37 = puVar44[7];
          uVar38 = puVar44[8];
          *local_220 = puVar44[5];
          *(undefined4 *)(param_1 + 0x368) = uVar36;
          *(undefined4 *)(param_1 + 0x36c) = uVar37;
          *(undefined4 *)(param_1 + 0x370) = uVar38;
          *(undefined4 *)(param_1 + 0x374) = puVar44[9];
        }
        local_228 = (undefined4 *)(param_1 + 0x378);
        if (*(int *)(param_1 + 0x388) != puVar44[0xe]) {
          uVar36 = puVar44[0xb];
          uVar37 = puVar44[0xc];
          uVar38 = puVar44[0xd];
          *local_228 = puVar44[10];
          *(undefined4 *)(param_1 + 0x37c) = uVar36;
          *(undefined4 *)(param_1 + 0x380) = uVar37;
          *(undefined4 *)(param_1 + 900) = uVar38;
          *(undefined4 *)(param_1 + 0x388) = puVar44[0xe];
        }
        if (((*(int *)(param_1 + 0x34) != 0) &&
            (uVar47 = *(uint *)(param_1 + 0x30), -1 < (int)uVar47)) &&
           (((int)uVar47 < DAT_14c9647dc &&
            (((plVar41 = (longlong *)
                         ((ulonglong)((uVar47 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar47 >> 0x10) * 8)),
              plVar41 != (longlong *)0x0 && ((int)plVar41[2] == *(int *)(param_1 + 0x34))) &&
             ((*(uint *)(plVar41 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(plVar41 + 1) & 0x10200000) == 0) {
            local_218 = *plVar41;
          }
          else {
            local_218 = 0;
          }
          local_200 = local_1e0;
          local_1e8 = '\0';
          local_1f0 = local_e0;
          local_1f8 = local_200;
          pwVar39 = (wchar_t *)FUN_140c7f682(param_1,L"CrosshairColorSettingsUpdate",&local_200);
          local_60 = (undefined1 *)0x0;
          if (pwVar39 == (wchar_t *)0x0) {
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
          }
          else {
            sVar40 = wcslen(pwVar39);
            local_50 = FUN_14475aa65(0,pwVar39,sVar40 & 0xffffffff);
            uVar47 = local_50 + 1;
            puVar43 = (undefined1 *)0x0;
            if (0x80 < uVar47) {
              FUN_1446efa72(&local_60,0,uVar47,1);
              puVar43 = local_60;
            }
            local_58 = puVar43;
            if (puVar43 == (undefined1 *)0x0) {
              local_58 = local_e0;
            }
            FUN_14475a98a(local_58,uVar47,pwVar39,(int)sVar40 + 1);
          }
          local_238 = local_228;
          FUN_146212228(local_218,local_58,local_230,local_220);
          if (local_60 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_1e8 == '\x01') {
            FUN_1400020a8(local_200);
          }
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(puVar44 + 0x10));
    }
    lVar32 = *(longlong *)(param_1 + 0x288);
    if ((lVar32 != 0) && (*piVar46 != 0)) {
      FUN_1448d5e3c(&local_200,piVar46);
      lVar34 = local_200[0x54];
      AcquireSRWLockShared((PSRWLOCK)(lVar34 + 0x68));
      plVar41 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar46 = (int *)((longlong)plVar41 + 0xc);
          *piVar46 = *piVar46 + -1;
          UNLOCK();
          if (*piVar46 == 0) {
            (**(code **)(*plVar41 + 0x10))(plVar41);
          }
        }
      }
      if (*(int *)(param_1 + 0x2cc) != *(int *)(lVar34 + 0x60)) {
        *(int *)(param_1 + 0x2cc) = *(int *)(lVar34 + 0x60);
        if (*(int *)(lVar32 + 0xbc) != *(int *)(lVar34 + 0x44)) {
          *(undefined1 *)(lVar32 + 0xb8) = *(undefined1 *)(lVar34 + 0x40);
          *(undefined4 *)(lVar32 + 0xbc) = *(undefined4 *)(lVar34 + 0x44);
          FUN_141328aca(param_1);
          if (((*(int *)(param_1 + 0x34) != 0) &&
              (uVar47 = *(uint *)(param_1 + 0x30), -1 < (int)uVar47)) &&
             (((int)uVar47 < DAT_14c9647dc &&
              (((plVar41 = (longlong *)
                           ((ulonglong)((uVar47 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar47 >> 0x10) * 8)),
                plVar41 != (longlong *)0x0 && ((int)plVar41[2] == *(int *)(param_1 + 0x34))) &&
               ((*(uint *)(plVar41 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(plVar41 + 1) & 0x10200000) == 0) {
              puVar44 = (undefined4 *)*plVar41;
            }
            else {
              puVar44 = (undefined4 *)0x0;
            }
            piVar46 = (int *)(lVar32 + 0xb8);
            puVar45 = (undefined4 *)(param_1 + 0x390);
            local_200 = local_1e0;
            local_1e8 = '\0';
            local_1f0 = local_e0;
            local_1f8 = local_200;
            pwVar39 = (wchar_t *)FUN_140c7f682(param_1,L"CenterPosUpdated",&local_200);
            local_60 = (undefined1 *)0x0;
            if (pwVar39 == (wchar_t *)0x0) {
              local_58 = (undefined1 *)0x0;
              local_50 = 0;
            }
            else {
              local_230 = puVar44;
              local_228 = puVar45;
              local_220 = piVar46;
              sVar40 = wcslen(pwVar39);
              local_50 = FUN_14475aa65(0,pwVar39,sVar40 & 0xffffffff);
              uVar47 = local_50 + 1;
              puVar43 = (undefined1 *)0x0;
              if (0x80 < uVar47) {
                FUN_1446efa72(&local_60,0,uVar47,1);
                puVar43 = local_60;
              }
              local_58 = puVar43;
              if (puVar43 == (undefined1 *)0x0) {
                local_58 = local_e0;
              }
              FUN_14475a98a(local_58,uVar47,pwVar39,(int)sVar40 + 1);
              puVar44 = local_230;
              puVar45 = local_228;
              piVar46 = local_220;
            }
            FUN_1442b80f2(puVar44,local_58,puVar45,piVar46);
            if (local_60 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            if (local_1e8 == '\x01') {
              FUN_1400020a8(local_200);
            }
          }
        }
        if (*(int *)(param_1 + 0x318) != *(int *)(lVar34 + 0x54)) {
          cVar42 = *(char *)(lVar34 + 0x50);
          *(char *)(param_1 + 0x314) = cVar42;
          *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(lVar34 + 0x54);
          lVar35 = *(longlong *)(param_1 + 0x288);
          if (((*(char *)(param_1 + 0x304) == '\0') && (cVar42 == '\0')) ||
             (*(char *)(param_1 + 0x30c) != '\x01')) {
            bVar48 = false;
          }
          else {
            bVar48 = *(int *)(param_1 + 0x300) != 2;
          }
          *(bool *)(lVar35 + 0xb5) = bVar48;
          if (((*(char *)(param_1 + 0x304) == '\0') && (*(char *)(param_1 + 0x314) != '\x01')) ||
             (*(char *)(param_1 + 0x30c) != '\x01')) {
            bVar48 = false;
          }
          else {
            bVar48 = *(int *)(param_1 + 0x300) == 2;
          }
          *(bool *)(lVar35 + 0xb4) = bVar48;
          puVar33 = *(ushort **)(lVar32 + 0x80);
          if (puVar33 != (ushort *)0x0) {
            *puVar33 = *puVar33 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
          }
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar34 + 0x68));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442b7c38 FUN_1442b7c38 body=1208 status=ok
// SIG undefined FUN_1442b7c38(void)

/* WARNING: Removing unreachable block (ram,0x0001442b7f37) */
/* WARNING: Removing unreachable block (ram,0x0001442b7f46) */
/* WARNING: Removing unreachable block (ram,0x0001442b7f4a) */

void FUN_1442b7c38(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ushort *puVar3;
  char *pcVar4;
  wchar_t *_Str;
  size_t sVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_3e8 [40];
  longlong local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  char *local_398;
  char local_390;
  undefined1 local_388 [256];
  char local_288 [128];
  char *local_208;
  char *local_200;
  int local_1f8;
  undefined1 local_1f0 [256];
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_1442b8067;
  fVar11 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0xc0) + *(float *)(lVar2 + 0xf0);
  fVar10 = 0.0;
  if ((fVar11 != 0.0) || (NAN(fVar11))) {
    fVar10 = (*(float *)(lVar2 + 0xc0) + *(float *)(lVar2 + 200) + *(float *)(lVar2 + 0xe0)) /
             fVar11;
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x34c) - fVar10)) {
    *(float *)(param_1 + 0x34c) = fVar10;
    if (((((*(int *)(param_1 + 0x34) != 0) && (uVar8 = *(uint *)(param_1 + 0x30), -1 < (int)uVar8))
         && ((int)uVar8 < DAT_14c9647dc)) &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x34))))) &&
       ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar7;
      }
      else {
        lVar9 = 0;
      }
      local_3a8 = local_388;
      local_390 = '\0';
      local_398 = local_288;
      local_3a0 = local_3a8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"AccuracyPercentUpdated",&local_3a8);
      local_208 = (char *)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_200 = (char *)0x0;
        local_1f8 = 0;
LAB_1442b7e76:
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
      }
      else {
        sVar5 = wcslen(_Str);
        local_1f8 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
        uVar8 = local_1f8 + 1;
        local_200 = (char *)0x0;
        if (0x80 < uVar8) {
          FUN_1446efa72(&local_208,0,uVar8,1);
          local_200 = local_208;
        }
        if (local_200 == (char *)0x0) {
          local_200 = local_288;
        }
        FUN_14475a98a(local_200,uVar8,_Str,(int)sVar5 + 1);
        pcVar4 = local_200;
        local_f0 = 0;
        if (local_200 == (char *)0x0) goto LAB_1442b7e76;
        sVar5 = strlen(local_200);
        FUN_1446e6fe8(local_1f0,pcVar4,sVar5 & 0xffffffff,1);
      }
      FUN_140056680(&local_3c0,local_e8);
      local_3b0 = *(undefined4 *)(param_1 + 0x34c);
      local_b8 = &PTR_FUN_14b9c0b20;
      uStack_b0 = local_3c0;
      uStack_a8 = uStack_3b8;
      local_3c0 = 0;
      uStack_3b8 = 0;
      uStack_a0 = local_3b0;
      puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      *puVar6 = 0;
      puVar6[2] = FUN_1442bf044;
      puVar6[4] = 0;
      local_c8 = 0;
      *(undefined4 *)(puVar6 + 6) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar6 + 0x34) = local_b8._4_4_;
      *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_b0._4_4_;
      *(undefined4 *)(puVar6 + 8) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_a8._4_4_;
      *(undefined4 *)(puVar6 + 9) = uStack_a0;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_9c;
      local_d8 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = *(undefined8 **)(lVar9 + 0x30);
        *(undefined8 **)(lVar9 + 0x30) = puVar6;
        UNLOCK();
        LOCK();
        *puVar1 = puVar6;
        UNLOCK();
      }
      if (local_3c0 != 0) {
        FUN_1400020a8();
      }
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      if (local_208 != (char *)0x0) {
        FUN_1400020a8();
      }
      if (local_390 == '\x01') {
        FUN_1400020a8(local_3a8);
      }
    }
  }
  fVar10 = tanf((*(float *)(lVar2 + 0xc0) + *(float *)(lVar2 + 0xd0) + *(float *)(lVar2 + 0xe8)) *
                0.5 * 0.017453292);
  fVar10 = fVar10 / *(float *)(param_1 + 0x344);
  fVar11 = tanf((*(float *)(lVar2 + 0xc0) + *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0xf0)) *
                0.5 * 0.017453292);
  fVar11 = fVar11 / *(float *)(param_1 + 0x344);
  if ((1e-08 < ABS(*(float *)(lVar2 + 0xfc) - fVar10)) ||
     (1e-08 < ABS(*(float *)(lVar2 + 0x100) - fVar11))) {
    *(float *)(lVar2 + 0xfc) = fVar10;
    *(float *)(lVar2 + 0x100) = fVar11;
    puVar3 = *(ushort **)(lVar2 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
LAB_1442b8067:
  if ((local_90 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442b80f2 FUN_1442b80f2 body=461 status=ok
// SIG undefined FUN_1442b80f2(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001442b8270 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1442b80f2(longlong param_1,char *param_2,undefined4 *param_3,undefined1 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_88);
  local_1a8 = *param_3;
  uStack_1a4 = param_3[1];
  uStack_1a0 = param_3[2];
  uStack_19c = param_3[3];
  local_198 = *param_4;
  pcVar5 = (code *)0x0;
  local_78 = (code *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar2 = &PTR_FUN_14b9c0b00;
  plVar6 = puVar2 + 1;
  *plVar6 = local_1b8;
  local_1b8 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1b0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1b0._4_4_;
  local_1b0 = 0;
  *(undefined1 *)(puVar2 + 5) = local_198;
  *(undefined4 *)(puVar2 + 3) = local_1a8;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_1a4;
  *(undefined4 *)(puVar2 + 4) = uStack_1a0;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_19c;
  if (plVar6 != (longlong *)0x0) {
    pcVar5 = FUN_1442bedc4;
    local_78 = FUN_1442bedc4;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = pcVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (plVar6 != (longlong *)0x0) {
    local_78 = (code *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (code *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1b8 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1442b82d8 FUN_1442b82d8 body=69 status=ok
// SIG undefined FUN_1442b82d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442b82d8(void)

{
  _DAT_14cbdad70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442b831a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbdad78,1);
  return;
}



// FUNCTION 1442b869a FUN_1442b869a body=49 status=ok
// SIG undefined FUN_1442b869a(void)

void FUN_1442b869a(void)

{
  FUN_1447a1747(DAT_14cbdb628,DAT_14cbdb630);
  if (DAT_14cbdb628 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1442b8914 FUN_1442b8914 body=6197 status=ok
// SIG undefined FUN_1442b8914(void)

void FUN_1442b8914(longlong param_1)

{
  longlong *****ppppplVar1;
  int *piVar2;
  longlong ****pppplVar3;
  longlong ***ppplVar4;
  ushort *puVar5;
  bool bVar6;
  longlong ****pppplVar7;
  longlong ****pppplVar8;
  void *_Src;
  int iVar9;
  longlong *plVar10;
  wchar_t *_Str;
  size_t sVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *****ppppplVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ushort uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ushort uVar24;
  int iVar25;
  longlong lVar26;
  undefined8 uVar27;
  PSRWLOCK SRWLock;
  undefined4 uVar28;
  undefined1 auStack_478 [39];
  char local_451;
  longlong local_450;
  longlong *local_448;
  longlong local_440;
  uint local_434;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong ***local_418;
  PSRWLOCK local_410;
  PSRWLOCK local_408;
  longlong local_400;
  int local_3f8;
  longlong *local_3f0;
  longlong *local_3e0;
  longlong local_3c8;
  longlong local_3b8;
  longlong local_3a8;
  ulonglong local_388;
  longlong local_380;
  longlong local_378;
  longlong ***local_370;
  uint local_368;
  undefined4 local_364;
  longlong ****local_360;
  uint local_358;
  longlong ****local_350;
  uint local_348;
  undefined4 local_340;
  longlong ***local_338;
  int local_330;
  undefined4 local_32c;
  longlong ***local_328;
  int local_320;
  undefined4 local_31c;
  void *local_318;
  int local_310;
  int local_30c;
  undefined2 local_308;
  undefined1 local_306;
  undefined8 local_300;
  longlong lStack_2f8;
  longlong local_2f0;
  int local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  longlong ****local_2d8;
  undefined8 uStack_2d0;
  longlong ****local_2c8;
  uint local_2c0;
  longlong ****local_2b8;
  uint local_2b0;
  undefined4 local_2a8;
  longlong local_2a0 [2];
  longlong local_290 [2];
  longlong local_280 [2];
  undefined2 local_270;
  undefined1 local_26e;
  longlong ***local_268;
  longlong local_260;
  longlong ****local_1b8;
  longlong ****pppplStack_1b0;
  longlong ****local_138;
  longlong ****local_130;
  int local_128;
  longlong ****local_120;
  int local_118;
  undefined4 local_114;
  int local_110;
  undefined1 local_108 [24];
  longlong local_f0;
  longlong local_d8 [2];
  void *local_c8;
  int local_c0;
  undefined1 local_b0 [28];
  char local_94;
  int local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_478;
  lVar26 = *(longlong *)(param_1 + 0x288);
  if (((((lVar26 == 0) || (*(int *)(param_1 + 0x208) == 0)) || (*(int *)(param_1 + 0x34) == 0)) ||
      ((uVar21 = *(uint *)(param_1 + 0x30), (int)uVar21 < 0 || (DAT_14c9647dc <= (int)uVar21)))) ||
     ((lVar18 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8), lVar18 == 0 ||
      ((*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x34) ||
       ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))))) goto LAB_1442ba0e5;
  local_428 = param_1 + 0x208;
  FUN_1448d5e3c(&local_2d8);
  pppplVar3 = (longlong ****)local_2d8[4];
  local_408 = (PSRWLOCK)(pppplVar3 + 5);
  AcquireSRWLockShared(local_408);
  ppppplVar15 = uStack_2d0;
  if (uStack_2d0 != (longlong *****)0x0) {
    LOCK();
    ppppplVar1 = uStack_2d0 + 1;
    *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
    UNLOCK();
    if (*(int *)ppppplVar1 == 0) {
      (*(code *)**uStack_2d0)(uStack_2d0);
      LOCK();
      piVar2 = (int *)((longlong)ppppplVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppplVar15)[2])(ppppplVar15);
      }
    }
  }
  local_451 = *(int *)(lVar26 + 0xac) != *(int *)(pppplVar3 + 4);
  local_430 = lVar26;
  if ((bool)local_451) {
    *(int *)(lVar26 + 0xac) = *(int *)(pppplVar3 + 4);
    local_2f0 = 0;
    iVar12 = *(int *)(pppplVar3 + 2);
    ppplVar4 = pppplVar3[1];
    local_2e8 = iVar12;
    if (iVar12 == 0) {
      local_2e4 = 0;
      local_2e0 = *(int *)(pppplVar3 + 3);
    }
    else {
      FUN_1418fb896(&local_2f0,iVar12);
      FUN_1412a518d(local_2f0,ppplVar4,iVar12);
      local_2e0 = *(int *)(pppplVar3 + 3);
      if ((longlong)local_2e8 != 0) {
        local_2e0 = local_2e0 + 2;
        lVar26 = (longlong)local_2e8 * 0xa0 + local_2f0;
        local_440 = param_1 + 0x2d0;
        local_448 = (longlong *)(param_1 + 0x318);
        lVar18 = local_2f0;
        local_450 = lVar26;
LAB_1442b8af7:
        FUN_1412a51c4(&local_120,lVar18);
        FUN_1400b22c2(&local_370,&DAT_149e02088);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *****)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = (longlong ****)0x0;
          *DAT_14c844840 = (longlong ****)&PTR_FUN_149e19310;
          DAT_14c844840[2] = (longlong ****)0xffffffffffffffff;
          DAT_14c844840[3] = (longlong ****)0x0;
          DAT_14c844840[4] = (longlong ****)0x0;
          DAT_14c844840[5] = (longlong ****)0x0;
          if (DAT_14c844840 != (longlong *****)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
          lVar26 = local_450;
        }
        local_360 = (longlong ****)DAT_14c844840;
        if (DAT_14c844840 != (longlong *****)0x0) {
          (*(code *)(*DAT_14c844840)[1])();
        }
        local_358 = DAT_14c844848;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *****)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = (longlong ****)0x0;
          *DAT_14c844840 = (longlong ****)&PTR_FUN_149e19310;
          DAT_14c844840[2] = (longlong ****)0xffffffffffffffff;
          DAT_14c844840[3] = (longlong ****)0x0;
          DAT_14c844840[4] = (longlong ****)0x0;
          DAT_14c844840[5] = (longlong ****)0x0;
          if (DAT_14c844840 != (longlong *****)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
          lVar26 = local_450;
        }
        uVar21 = 0;
        local_350 = (longlong ****)DAT_14c844840;
        if (DAT_14c844840 != (longlong *****)0x0) {
          (*(code *)(*DAT_14c844840)[1])();
        }
        local_348 = DAT_14c844848;
        local_340 = 0;
        FUN_1400b22c2(&local_338,&DAT_149e02088);
        FUN_1400b22c2(&local_328,&DAT_149e02088);
        FUN_1400b22c2(&local_318,&DAT_149e02088);
        pppplVar3 = local_350;
        local_308 = 0;
        local_306 = 0;
        local_300 = 0;
        lStack_2f8 = 0;
        if ((local_94 != '\x01') || (*(longlong *)(param_1 + 0x2e8) == 0)) {
          if (local_350 != local_120) {
            local_350 = local_120;
            if ((longlong *****)local_120 != (longlong *****)0x0) {
              (*(code *)(*local_120)[1])();
            }
            if ((longlong *****)pppplVar3 != (longlong *****)0x0) {
              (*(code *)(*pppplVar3)[2])(pppplVar3);
            }
          }
          local_348 = local_118;
          local_2d8 = (longlong ****)0x0;
          uStack_2d0 = (longlong *****)0x0;
          FUN_1400b2348(local_108,&local_2d8,1);
          pppplVar3 = local_2d8;
          uVar23 = (uint)uStack_2d0;
          uVar17 = (uint)uStack_2d0 - 1;
          if ((uint)uStack_2d0 == 0) {
            uVar17 = uVar21;
          }
          if (0 < (int)uVar17) {
            uVar13 = 0;
            do {
              uVar24 = *(ushort *)((longlong)local_2d8 + uVar13 * 2);
              *(ushort *)((longlong)local_2d8 + uVar13 * 2) =
                   (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
              uVar13 = uVar13 + 1;
            } while (uVar17 != uVar13);
          }
          uVar28 = uStack_2d0._4_4_;
          local_2d8 = (longlong ****)0x0;
          uStack_2d0 = (longlong *****)0x0;
          if ((longlong ****)local_370 == (longlong ****)0x0) {
            local_370 = (longlong ***)pppplVar3;
            local_368 = uVar23;
            local_364 = uVar28;
          }
          else {
            FUN_1400020a8();
            local_370 = (longlong ***)pppplVar3;
            local_368 = uVar23;
            local_364 = uVar28;
            if (local_2d8 != (longlong ****)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_1400021e4(local_d8,&local_2d8);
          pppplVar3 = local_2d8;
          iVar12 = (uint)uStack_2d0;
          uVar17 = (uint)uStack_2d0 - 1;
          if ((uint)uStack_2d0 == 0) {
            uVar17 = uVar21;
          }
          if (0 < (int)uVar17) {
            uVar13 = 0;
            do {
              uVar24 = *(ushort *)((longlong)local_2d8 + uVar13 * 2);
              *(ushort *)((longlong)local_2d8 + uVar13 * 2) =
                   (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
              uVar13 = uVar13 + 1;
            } while (uVar17 != uVar13);
          }
          uVar28 = uStack_2d0._4_4_;
          local_2d8 = (longlong ****)0x0;
          uStack_2d0 = (longlong *****)0x0;
          if ((longlong ****)local_338 == (longlong ****)0x0) {
            local_338 = (longlong ***)pppplVar3;
            local_330 = iVar12;
            local_32c = uVar28;
          }
          else {
            FUN_1400020a8();
            local_338 = (longlong ***)pppplVar3;
            local_330 = iVar12;
            local_32c = uVar28;
            if (local_2d8 != (longlong ****)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_1400021e4(local_b0,&local_2d8);
          pppplVar3 = local_2d8;
          iVar12 = (uint)uStack_2d0;
          uVar17 = (uint)uStack_2d0 - 1;
          if ((uint)uStack_2d0 == 0) {
            uVar17 = uVar21;
          }
          if (0 < (int)uVar17) {
            uVar13 = 0;
            do {
              uVar24 = *(ushort *)((longlong)local_2d8 + uVar13 * 2);
              *(ushort *)((longlong)local_2d8 + uVar13 * 2) =
                   (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
              uVar13 = uVar13 + 1;
            } while (uVar17 != uVar13);
          }
          uVar13 = (ulonglong)uStack_2d0 & 0xffffffff;
          uVar28 = uStack_2d0._4_4_;
          local_2d8 = (longlong ****)0x0;
          uStack_2d0 = (longlong *****)0x0;
          if ((longlong ****)local_328 == (longlong ****)0x0) {
            local_328 = (longlong ***)pppplVar3;
            local_320 = iVar12;
            local_31c = uVar28;
          }
          else {
            FUN_1400020a8();
            local_328 = (longlong ***)pppplVar3;
            local_320 = iVar12;
            local_31c = uVar28;
            if ((longlong *****)local_2d8 != (longlong *****)0x0) {
              FUN_1400020a8();
            }
          }
          iVar12 = local_c0;
          _Src = local_c8;
          lVar22 = (longlong)local_c0;
          local_310 = local_c0;
          if (local_c0 == 0 && local_30c == 0) {
            local_30c = 0;
          }
          else {
            FUN_1446dd670(&local_318,local_c0);
            if (iVar12 != 0) {
              memcpy(local_318,_Src,lVar22 * 2);
            }
          }
          local_340 = 0x3f800000;
          if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
            uVar21 = (uint)((ulonglong)local_d8[0] >> 0x10);
            uVar17 = (uint)local_d8[0] & 0xffff;
            lVar22 = *(longlong *)(param_1 + 0x2d8);
            if (*(longlong *)(param_1 + 0x2d8) == 0) {
              lVar22 = local_440;
            }
            iVar12 = *(int *)(lVar22 + (ulonglong)
                                       (*(int *)(param_1 + 0x2e0) - 1U &
                                       (int)((ulonglong)local_d8[0] >> 0x20) +
                                       ((uint)local_d8[0] << 0x10 | uVar17) +
                                       (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar17 >> 4)) * 4);
            local_340 = 0x3f800000;
            if (iVar12 != -1) {
              iVar25 = iVar12;
              do {
                plVar14 = (longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar25 * 0x14);
                if (*plVar14 == local_d8[0]) {
                  local_340 = 0x3f800000;
                  if (((ulonglong)(plVar14 + 1) & 0xfffffffffffffff7) == 0) goto LAB_1442b91ed;
                  goto LAB_1442b91c4;
                }
                iVar25 = *(int *)((longlong)plVar14 + 0xc);
              } while (iVar25 != -1);
              local_340 = 0x3f800000;
            }
          }
          goto LAB_1442b91ed;
        }
        local_308 = 0x100;
        if (local_350 != local_120) {
          local_350 = local_120;
          if ((longlong *****)local_120 != (longlong *****)0x0) {
            (*(code *)(*local_120)[1])();
          }
          if ((longlong *****)pppplVar3 != (longlong *****)0x0) {
            (*(code *)(*pppplVar3)[2])(pppplVar3);
          }
        }
        local_348 = local_118;
        local_2d8 = (longlong ****)0x0;
        uStack_2d0 = (longlong *****)0x0;
        FUN_1400b2348(local_108,&local_2d8,1);
        pppplVar3 = local_2d8;
        uVar23 = (uint)uStack_2d0;
        uVar17 = (uint)uStack_2d0 - 1;
        if ((uint)uStack_2d0 == 0) {
          uVar17 = uVar21;
        }
        if (0 < (int)uVar17) {
          uVar13 = 0;
          do {
            uVar24 = *(ushort *)((longlong)local_2d8 + uVar13 * 2);
            *(ushort *)((longlong)local_2d8 + uVar13 * 2) =
                 (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
            uVar13 = uVar13 + 1;
          } while (uVar17 != uVar13);
        }
        uVar28 = uStack_2d0._4_4_;
        local_2d8 = (longlong ****)0x0;
        uStack_2d0 = (longlong *****)0x0;
        if ((longlong ****)local_370 == (longlong ****)0x0) {
          local_370 = (longlong ***)pppplVar3;
          local_368 = uVar23;
          local_364 = uVar28;
        }
        else {
          FUN_1400020a8();
          local_370 = (longlong ***)pppplVar3;
          local_368 = uVar23;
          local_364 = uVar28;
          if (local_2d8 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
        }
        local_340 = 0x40000000;
        if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
          lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x1c);
          uVar21 = (uint)((ulonglong)lVar26 >> 0x10);
          uVar17 = (uint)lVar26 & 0xffff;
          lVar22 = *(longlong *)(param_1 + 0x2d8);
          if (*(longlong *)(param_1 + 0x2d8) == 0) {
            lVar22 = local_440;
          }
          iVar12 = *(int *)(lVar22 + (ulonglong)
                                     (*(int *)(param_1 + 0x2e0) - 1U &
                                     (int)((ulonglong)lVar26 >> 0x20) +
                                     ((uint)lVar26 << 0x10 | uVar17) +
                                     (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar17 >> 4)) * 4);
          local_340 = 0x40000000;
          if (iVar12 != -1) {
            iVar25 = iVar12;
            do {
              plVar14 = (longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar25 * 0x14);
              if (*plVar14 == lVar26) {
                local_340 = 0x40000000;
                if (((ulonglong)(plVar14 + 1) & 0xfffffffffffffff7) == 0) goto LAB_1442b926f;
                goto LAB_1442b9246;
              }
              iVar25 = *(int *)((longlong)plVar14 + 0xc);
            } while (iVar25 != -1);
            local_340 = 0x40000000;
          }
        }
        goto LAB_1442b926f;
      }
    }
    iVar12 = 0;
    uVar13 = 0;
    goto LAB_1442b964c;
  }
  uVar13 = 0;
LAB_1442b966b:
  lVar26 = local_430;
  FUN_1448d5e3c(&local_2d8,local_428);
  pppplVar3 = (longlong ****)local_2d8[2];
  SRWLock = (PSRWLOCK)(pppplVar3 + 4);
  AcquireSRWLockShared(SRWLock);
  ppppplVar15 = uStack_2d0;
  if (uStack_2d0 != (longlong *****)0x0) {
    LOCK();
    ppppplVar1 = uStack_2d0 + 1;
    *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
    UNLOCK();
    if (*(int *)ppppplVar1 == 0) {
      (*(code *)**uStack_2d0)(uStack_2d0);
      LOCK();
      piVar2 = (int *)((longlong)ppppplVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppplVar15)[2])(ppppplVar15);
      }
    }
  }
  lVar18 = param_1 + 0x338;
  if (*(int *)(param_1 + 0x340) == 0) {
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(pppplVar3 + 2);
    FUN_140f7ab5e(lVar18,pppplVar3);
  }
  iVar12 = *(int *)(pppplVar3 + 2);
  bVar6 = true;
  if (*(int *)(param_1 + 0x348) != iVar12) {
    local_120 = (longlong ****)0x0;
    iVar25 = *(int *)(pppplVar3 + 1);
    ppplVar4 = *pppplVar3;
    local_434 = (uint)uVar13;
    local_420 = lVar18;
    local_418 = (longlong ***)pppplVar3;
    local_410 = SRWLock;
    local_118 = iVar25;
    if (iVar25 == 0) {
      local_114 = 0;
    }
    else {
      FUN_140f7ac60(&local_120,iVar25,0);
      FUN_140f7abee(local_120,ppplVar4,iVar25);
      iVar12 = *(int *)(pppplVar3 + 2);
    }
    local_110 = iVar12;
    FUN_1402735c8();
    if (0 < local_118) {
      local_440 = param_1 + 0x2f0;
      local_450 = param_1 + 0x2d0;
      local_448 = (longlong *)(param_1 + 0x328);
      lVar26 = 0;
      iVar12 = local_118;
LAB_1442b979f:
      if (lVar26 < *(int *)(param_1 + 0x340)) {
        iVar25 = *(int *)(param_1 + 0x348);
        *(int *)(param_1 + 0x348) = iVar25 + 1;
        iVar9 = local_110 + 1;
        if (*(int *)(*(longlong *)(param_1 + 0x338) + 0x38 + lVar26 * 0x40) !=
            *(int *)(local_120 + lVar26 * 8 + 7)) {
          *(int *)(param_1 + 0x348) = iVar25 + 2;
          uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x338) + 0x30 + lVar26 * 0x40);
          local_110 = local_110 + 2;
          pppplVar3 = (longlong ****)local_120[lVar26 * 8 + 6];
          FUN_1400b22c2(&local_2d8,&DAT_149e02088);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *****)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (longlong ****)0x0;
            *DAT_14c844840 = (longlong ****)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (longlong ****)0xffffffffffffffff;
            DAT_14c844840[3] = (longlong ****)0x0;
            DAT_14c844840[4] = (longlong ****)0x0;
            DAT_14c844840[5] = (longlong ****)0x0;
            if (DAT_14c844840 != (longlong *****)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_2c8 = (longlong ****)DAT_14c844840;
          if (DAT_14c844840 != (longlong *****)0x0) {
            (*(code *)(*DAT_14c844840)[1])();
          }
          local_2c0 = DAT_14c844848;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *****)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (longlong ****)0x0;
            *DAT_14c844840 = (longlong ****)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (longlong ****)0xffffffffffffffff;
            DAT_14c844840[3] = (longlong ****)0x0;
            DAT_14c844840[4] = (longlong ****)0x0;
            DAT_14c844840[5] = (longlong ****)0x0;
            if (DAT_14c844840 != (longlong *****)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_2b8 = (longlong ****)DAT_14c844840;
          if (DAT_14c844840 != (longlong *****)0x0) {
            (*(code *)(*DAT_14c844840)[1])();
          }
          local_2b0 = DAT_14c844848;
          local_2a8 = 0;
          FUN_1400b22c2(local_2a0,&DAT_149e02088);
          FUN_1400b22c2(local_290,&DAT_149e02088);
          FUN_1400b22c2(local_280,&DAT_149e02088);
          local_270 = 0;
          local_26e = 1;
          local_260 = (longlong)pppplVar3 - uVar13;
          local_110 = local_110 + 1;
          local_1b8 = (longlong ****)0x0;
          pppplStack_1b0 = (longlong ****)0x0;
          local_268 = (longlong ***)pppplVar3;
          FUN_1400b2348(local_120 + lVar26 * 8,&local_1b8,1);
          pppplVar8 = pppplStack_1b0;
          pppplVar7 = local_1b8;
          uVar21 = (int)pppplStack_1b0 - 1;
          if ((int)pppplStack_1b0 == 0) {
            uVar21 = 0;
          }
          if (0 < (int)uVar21) {
            uVar16 = 0;
            do {
              uVar24 = *(ushort *)((longlong)local_1b8 + uVar16 * 2);
              *(ushort *)((longlong)local_1b8 + uVar16 * 2) =
                   (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
              uVar16 = uVar16 + 1;
            } while (uVar21 != uVar16);
          }
          local_1b8 = (longlong ****)0x0;
          pppplStack_1b0 = (longlong ****)0x0;
          if ((longlong *****)local_2d8 == (longlong *****)0x0) {
            local_2d8 = pppplVar7;
            uStack_2d0 = (longlong *****)pppplVar8;
          }
          else {
            FUN_1400020a8();
            local_2d8 = pppplVar7;
            uStack_2d0 = (longlong *****)pppplVar8;
            if (local_1b8 != (longlong ****)0x0) {
              FUN_1400020a8();
            }
          }
          if (DAT_14c947fe0 == 0) {
            lVar18 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar18);
            DAT_14c947fe0 = lVar18;
          }
          FUN_140045924(DAT_14c947fe0,&local_378,local_440,1);
          uVar28 = 0x3f800000;
          if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
            uVar21 = (uint)((ulonglong)local_378 >> 0x10);
            uVar17 = (uint)local_378 & 0xffff;
            lVar18 = *(longlong *)(param_1 + 0x2d8);
            if (*(longlong *)(param_1 + 0x2d8) == 0) {
              lVar18 = local_450;
            }
            iVar12 = *(int *)(lVar18 + (ulonglong)
                                       (*(int *)(param_1 + 0x2e0) - 1U &
                                       (int)((ulonglong)local_378 >> 0x20) +
                                       ((uint)local_378 << 0x10 | uVar17) +
                                       (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar17 >> 4)) * 4);
            uVar28 = 0x3f800000;
            if (iVar12 != -1) {
              do {
                plVar14 = (longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar12 * 0x14);
                if (*plVar14 == local_378) {
                  uVar28 = 0x3f800000;
                  if (((ulonglong)(plVar14 + 1) & 0xfffffffffffffff7) == 0) goto LAB_1442b9b97;
                  if (DAT_14c947fe0 == 0) {
                    lVar18 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar18);
                    DAT_14c947fe0 = lVar18;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_380,local_440,1);
                  if (*(int *)(param_1 + 0x2a0) == *(int *)(param_1 + 0x2cc)) goto LAB_1442b9b86;
                  uVar21 = (uint)((ulonglong)local_380 >> 0x10);
                  uVar17 = (uint)local_380 & 0xffff;
                  lVar18 = *(longlong *)(param_1 + 0x2d8);
                  if (*(longlong *)(param_1 + 0x2d8) == 0) {
                    lVar18 = local_450;
                  }
                  iVar12 = *(int *)(lVar18 + (ulonglong)
                                             (*(int *)(param_1 + 0x2e0) - 1U &
                                             (int)((ulonglong)local_380 >> 0x20) +
                                             ((uint)local_380 << 0x10 | uVar17) +
                                             (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar17 >> 4)) * 4
                                   );
                  if (iVar12 == -1) goto LAB_1442b9b86;
                  goto LAB_1442b9b6e;
                }
                iVar12 = *(int *)((longlong)plVar14 + 0xc);
              } while (iVar12 != -1);
              uVar28 = 0x3f800000;
            }
          }
          goto LAB_1442b9b97;
        }
        goto LAB_1442b9dfb;
      }
      bVar6 = false;
      goto LAB_1442b9fe1;
    }
LAB_1442b9fb6:
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(local_418 + 2);
    FUN_140f7ab5e(local_420);
    bVar6 = true;
    local_451 = '\x01';
    iVar12 = local_118;
LAB_1442b9fe1:
    FUN_140f7abbb(local_120,iVar12);
    SRWLock = local_410;
    lVar26 = local_430;
    uVar13 = (ulonglong)local_434;
    if ((longlong *****)local_120 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockShared(SRWLock);
  ReleaseSRWLockShared(local_408);
  if (bVar6) {
    FUN_141171e34(param_1);
    if ((char)uVar13 != '\0') {
      FUN_1448d5e3c(&local_2d8,local_428);
      pppplVar3 = (longlong ****)local_2d8[4];
      AcquireSRWLockExclusive((PSRWLOCK)(pppplVar3 + 5));
      ppppplVar15 = uStack_2d0;
      *(int *)(pppplVar3 + 4) = *(int *)(pppplVar3 + 4) + 1;
      if (uStack_2d0 != (longlong *****)0x0) {
        LOCK();
        ppppplVar1 = uStack_2d0 + 1;
        *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
        UNLOCK();
        if (*(int *)ppppplVar1 == 0) {
          (*(code *)**uStack_2d0)(uStack_2d0);
          LOCK();
          piVar2 = (int *)((longlong)ppppplVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppplVar15)[2])(ppppplVar15);
          }
        }
      }
      iVar12 = *(int *)((longlong)pppplVar3 + 0x14);
      FUN_141503574(pppplVar3[1],*(undefined4 *)(pppplVar3 + 2));
      *(undefined4 *)(pppplVar3 + 2) = 0;
      if ((iVar12 < 0) && (*(int *)((longlong)pppplVar3 + 0x14) != 0)) {
        FUN_148e79300(pppplVar3 + 1);
      }
      *(int *)(pppplVar3 + 3) = *(int *)(pppplVar3 + 3) + 1;
      *(undefined4 *)(lVar26 + 0xac) = *(undefined4 *)(pppplVar3 + 4);
      ReleaseSRWLockExclusive((PSRWLOCK)(pppplVar3 + 5));
    }
    if ((local_451 != '\0') && (puVar5 = *(ushort **)(lVar26 + 0x80), puVar5 != (ushort *)0x0)) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar26 + 0x78) & 0x3f));
    }
  }
LAB_1442ba0e5:
  if ((local_80 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar12 = *(int *)((longlong)plVar14 + 0xc), iVar12 != -1) {
LAB_1442b91c4:
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar12 * 0x14);
    if (*plVar14 == local_d8[0]) goto LAB_1442b91de;
  }
  plVar14 = (longlong *)0x0;
LAB_1442b91de:
  plVar10 = plVar14 + 1;
  if (plVar14 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  local_340 = (undefined4)*plVar10;
LAB_1442b91ed:
  iVar12 = *(int *)(param_1 + 800);
  *(uint *)(param_1 + 800) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x324) < iVar12 + 1U) {
    FUN_1418fbd32(local_448,iVar12);
  }
  FUN_1411724f0((longlong)iVar12 * 0x80 + *local_448,&local_370);
  goto LAB_1442b93f5;
  while (iVar12 = *(int *)((longlong)plVar14 + 0xc), iVar12 != -1) {
LAB_1442b9246:
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar12 * 0x14);
    if (*plVar14 == lVar26) goto LAB_1442b9260;
  }
  plVar14 = (longlong *)0x0;
LAB_1442b9260:
  plVar10 = plVar14 + 1;
  if (plVar14 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  local_340 = (undefined4)*plVar10;
LAB_1442b926f:
  lStack_2f8 = (longlong)local_8c;
  if ((*(int *)(param_1 + 0x34) == 0) || (uVar21 = *(uint *)(param_1 + 0x30), (int)uVar21 < 0)) {
LAB_1442b94cc:
    uVar27 = 0;
  }
  else {
    uVar27 = 0;
    if ((int)uVar21 < DAT_14c9647dc) {
      puVar19 = (undefined8 *)
                ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
      if (((puVar19 == (undefined8 *)0x0) || (*(int *)(puVar19 + 2) != *(int *)(param_1 + 0x34))) ||
         ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_1442b94cc;
      uVar27 = *puVar19;
    }
  }
  local_2c0 = local_2c0 & 0xffffff00;
  local_2d8 = (longlong ****)&local_2b8;
  local_2c8 = (longlong ****)&local_1b8;
  uStack_2d0 = (longlong *****)local_2d8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"AddAmmoEntry",&local_2d8);
  local_138 = (longlong ****)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_130 = (longlong ****)0x0;
    local_128 = 0;
  }
  else {
    sVar11 = wcslen(_Str);
    local_128 = FUN_14475aa65(0,_Str,sVar11 & 0xffffffff);
    uVar21 = local_128 + 1;
    ppppplVar15 = (longlong *****)0x0;
    if (0x80 < uVar21) {
      FUN_1446efa72(&local_138,0,uVar21,1);
      ppppplVar15 = (longlong *****)local_138;
    }
    local_130 = (longlong ****)ppppplVar15;
    if (ppppplVar15 == (longlong *****)0x0) {
      local_130 = (longlong ****)&local_1b8;
    }
    uVar23 = (int)sVar11 + 1;
    FUN_14475a98a(local_130,uVar21,_Str,uVar23);
  }
  uVar13 = (ulonglong)uVar23;
  FUN_14117228c(uVar27,local_130,&local_370);
  if ((longlong *****)local_138 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  lVar26 = local_450;
  if ((char)local_2c0 == '\x01') {
    FUN_1400020a8(local_2d8);
  }
LAB_1442b93f5:
  if (local_318 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_328 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_338 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *****)local_350 != (longlong *****)0x0) {
    (*(code *)(*local_350)[2])();
  }
  if ((longlong *****)local_360 != (longlong *****)0x0) {
    (*(code *)(*local_360)[2])();
  }
  if ((longlong ****)local_370 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if ((longlong *****)local_120 != (longlong *****)0x0) {
    (*(code *)(*local_120)[2])();
  }
  lVar18 = lVar18 + 0xa0;
  if (lVar18 == lVar26) goto LAB_1442b961b;
  goto LAB_1442b8af7;
LAB_1442b961b:
  uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
  iVar12 = local_2e8;
LAB_1442b964c:
  FUN_141503574(local_2f0,iVar12);
  if (local_2f0 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1442b966b;
  while (iVar12 = *(int *)((longlong)plVar14 + 0xc), iVar12 != -1) {
LAB_1442b9b6e:
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar12 * 0x14);
    if (*plVar14 == local_380) goto LAB_1442b9b88;
  }
LAB_1442b9b86:
  plVar14 = (longlong *)0x0;
LAB_1442b9b88:
  plVar10 = plVar14 + 1;
  if (plVar14 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  uVar28 = (undefined4)*plVar10;
LAB_1442b9b97:
  local_2a8 = uVar28;
  FUN_1418fe6d1(&local_1b8,uVar13 & 0xffffffff,0);
  FUN_140008f88(&local_2c8,&local_1b8);
  if (local_1b8 != (longlong ****)0x0) {
    (*(code *)(*local_1b8)[2])();
  }
  FUN_1418fe6d1(&local_1b8,(ulonglong)pppplVar3 & 0xffffffff,0);
  FUN_140008f88(&local_2b8,&local_1b8);
  if (local_1b8 != (longlong ****)0x0) {
    (*(code *)(*local_1b8)[2])();
  }
  FUN_1411724f0(&local_400,&local_2d8);
  uVar21 = 0xffffffff;
  if ((longlong)*(int *)(param_1 + 0x330) != 0) {
    plVar14 = *(longlong **)(param_1 + 0x328);
    plVar10 = plVar14;
    do {
      if ((int)plVar10[1] == local_3f8) {
        if (1 < local_3f8) {
          lVar18 = 0;
          while( true ) {
            uVar24 = *(ushort *)(*plVar10 + lVar18);
            uVar13 = (ulonglong)uVar24;
            uVar20 = *(ushort *)(local_400 + lVar18);
            if (uVar24 != uVar20) break;
            if (uVar24 == 0) goto LAB_1442b9cad;
LAB_1442b9c77:
            lVar18 = lVar18 + 2;
          }
          if ((uVar20 | uVar24) < 0x80) {
            uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            uVar16 = (ulonglong)uVar20;
            uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar16]) goto LAB_1442b9c77;
          }
          if (uVar24 != uVar20) goto LAB_1442b9cb6;
        }
LAB_1442b9cad:
        if (-1 < (longlong)(plVar10[0xf] ^ local_388)) {
          uVar21 = (uint)((ulonglong)((longlong)plVar10 - (longlong)plVar14) >> 7);
          break;
        }
      }
      else if ((int)plVar10[1] + local_3f8 == 1) goto LAB_1442b9cad;
LAB_1442b9cb6:
      plVar10 = plVar10 + 0x10;
    } while (plVar10 != plVar14 + (longlong)*(int *)(param_1 + 0x330) * 0x10);
  }
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if (local_3e0 != (longlong *)0x0) {
    (**(code **)(*local_3e0 + 0x10))();
  }
  if (local_3f0 != (longlong *)0x0) {
    (**(code **)(*local_3f0 + 0x10))();
  }
  if (local_400 != 0) {
    FUN_1400020a8();
  }
  iVar12 = *(int *)(param_1 + 0x330);
  if ((int)uVar21 < iVar12 && -1 < (int)uVar21) {
    FUN_148e74894((ulonglong)uVar21 * 0x80 + *local_448,&local_2d8);
  }
  else {
    *(uint *)(param_1 + 0x330) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x334) < iVar12 + 1U) {
      FUN_1418fbd32(local_448,iVar12);
    }
    FUN_1411724f0((longlong)iVar12 * 0x80 + *local_448,&local_2d8);
  }
  if (local_280[0] != 0) {
    FUN_1400020a8();
  }
  if (local_290[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2a0[0] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *****)local_2b8 != (longlong *****)0x0) {
    (*(code *)(*local_2b8)[2])();
  }
  if ((longlong *****)local_2c8 != (longlong *****)0x0) {
    (*(code *)(*local_2c8)[2])();
  }
  iVar9 = local_110;
  iVar12 = local_118;
  if ((longlong *****)local_2d8 != (longlong *****)0x0) {
    FUN_1400020a8();
    iVar9 = local_110;
    iVar12 = local_118;
  }
LAB_1442b9dfb:
  local_110 = iVar9;
  lVar26 = lVar26 + 1;
  if (iVar12 <= lVar26) goto LAB_1442b9fb6;
  goto LAB_1442b979f;
}



// FUNCTION 1442ba168 FUN_1442ba168 body=379 status=ok
// SIG undefined FUN_1442ba168(void)

void FUN_1442ba168(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (0 < *(int *)(param_1 + 0x2a8))) {
    if (param_2 == '\0') {
      *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) & 0xef;
      FUN_1411979f6(lVar1,param_1 + 0xd8);
      FUN_141197922(param_1);
      puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x1ec);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar6 = &PTR_FUN_14b9bf900;
      local_48 = "ExpandTutorial";
      local_40 = 0xe;
      local_3c = 0;
      uVar4 = FUN_14001a6c0(&local_48,1);
      FUN_14039176c(puVar6,uVar2,uVar4,1);
      *puVar6 = &PTR_FUN_14b9bf900;
      *(undefined4 *)(puVar6 + 7) = uVar5;
      FUN_140391314(param_1,puVar6);
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar6 = &PTR_FUN_14b9bf930;
    local_48 = "ExpandedTutorial_PauseGame_Start";
    local_40 = 0x20;
    local_3c = 0;
    uVar5 = FUN_14001a6c0(&local_48,1);
    FUN_14039176c(puVar6,uVar2,uVar5,1);
    *puVar6 = &PTR_FUN_14b9bf930;
    FUN_140391314(param_1,puVar6);
    *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 0x10;
    *(undefined1 *)(lVar1 + 0x19a) = 1;
    puVar3 = *(ushort **)(lVar1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ba334 FUN_1442ba334 body=2151 status=ok
// SIG undefined FUN_1442ba334(void)

void FUN_1442ba334(longlong param_1,undefined1 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong local_250;
  undefined1 **local_248;
  undefined1 *local_240;
  longlong local_238 [3];
  undefined1 local_219;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  char local_200;
  undefined1 local_1f8 [256];
  undefined1 local_f8 [128];
  undefined1 *local_78;
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_219 = param_2;
  if (0 < (int)param_3[1]) {
    local_240 = local_f8;
    local_248 = &local_78;
    do {
      plVar2 = *(longlong **)*param_3;
      plVar3 = (longlong *)((longlong *)*param_3)[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar5 = FUN_14150ad1c();
        if (((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_14129aff6();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            if ((*(int *)(param_1 + 0x34) == 0) ||
               (uVar10 = *(uint *)(param_1 + 0x30), (int)uVar10 < 0)) {
LAB_1442baaba:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)uVar10 < DAT_14c9647dc) {
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                if (((puVar9 == (undefined8 *)0x0) ||
                    (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34))) ||
                   ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_1442baaba;
                uVar11 = *puVar9;
              }
            }
            local_238[0] = 0;
            local_238[1] = 0;
            FUN_1400b2348(plVar2 + 1,local_238,1);
            local_200 = '\0';
            local_208 = local_240;
            local_250 = param_1;
            local_218 = local_1f8;
            local_210 = local_1f8;
            pwVar6 = (wchar_t *)FUN_140c7f682(param_1,L"PushTransaction",&local_218);
            local_78 = (undefined1 *)0x0;
            if (pwVar6 == (wchar_t *)0x0) {
              local_70 = (undefined1 *)0x0;
              local_68 = 0;
            }
            else {
              sVar7 = wcslen(pwVar6);
              local_68 = FUN_14475aa65(0,pwVar6,sVar7 & 0xffffffff);
              uVar10 = local_68 + 1;
              puVar8 = (undefined1 *)0x0;
              if (0x80 < uVar10) {
                FUN_1446efa72(local_248,0,uVar10,1);
                puVar8 = local_78;
              }
              local_70 = puVar8;
              if (puVar8 == (undefined1 *)0x0) {
                local_70 = local_f8;
              }
              FUN_14475a98a(local_70,uVar10,pwVar6,(int)sVar7 + 1);
            }
            local_258 = local_238;
            FUN_1458ba886(uVar11,local_70,&local_219,plVar2);
            goto LAB_1442baa6b;
          }
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_1465f219a();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            if ((*(int *)(param_1 + 0x34) == 0) ||
               (uVar10 = *(uint *)(param_1 + 0x30), (int)uVar10 < 0)) {
LAB_1442baac2:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)uVar10 < DAT_14c9647dc) {
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                if (((puVar9 == (undefined8 *)0x0) ||
                    (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34))) ||
                   ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_1442baac2;
                uVar11 = *puVar9;
              }
            }
            local_238[0] = 0;
            local_238[1] = 0;
            FUN_1400b2348(plVar2 + 1,local_238,1);
            local_200 = '\0';
            local_208 = local_240;
            local_250 = param_1;
            local_218 = local_1f8;
            local_210 = local_1f8;
            pwVar6 = (wchar_t *)FUN_140c7f682(param_1,L"PushTransaction",&local_218);
            local_78 = (undefined1 *)0x0;
            if (pwVar6 == (wchar_t *)0x0) {
              local_70 = (undefined1 *)0x0;
              local_68 = 0;
            }
            else {
              sVar7 = wcslen(pwVar6);
              local_68 = FUN_14475aa65(0,pwVar6,sVar7 & 0xffffffff);
              uVar10 = local_68 + 1;
              puVar8 = (undefined1 *)0x0;
              if (0x80 < uVar10) {
                FUN_1446efa72(local_248,0,uVar10,1);
                puVar8 = local_78;
              }
              local_70 = puVar8;
              if (puVar8 == (undefined1 *)0x0) {
                local_70 = local_f8;
              }
              FUN_14475a98a(local_70,uVar10,pwVar6,(int)sVar7 + 1);
            }
            local_258 = local_238;
            FUN_148e751fc(uVar11,local_70,&local_219,plVar2);
            goto LAB_1442baa6b;
          }
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_1465f2230();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            if ((*(int *)(param_1 + 0x34) == 0) ||
               (uVar10 = *(uint *)(param_1 + 0x30), (int)uVar10 < 0)) {
LAB_1442baaca:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)uVar10 < DAT_14c9647dc) {
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                if (((puVar9 == (undefined8 *)0x0) ||
                    (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34))) ||
                   ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_1442baaca;
                uVar11 = *puVar9;
              }
            }
            local_238[0] = 0;
            local_238[1] = 0;
            FUN_1400b2348(plVar2 + 1,local_238,1);
            local_200 = '\0';
            local_208 = local_240;
            local_250 = param_1;
            local_218 = local_1f8;
            local_210 = local_1f8;
            pwVar6 = (wchar_t *)FUN_140c7f682(param_1,L"PushTransaction",&local_218);
            local_78 = (undefined1 *)0x0;
            if (pwVar6 == (wchar_t *)0x0) {
              local_70 = (undefined1 *)0x0;
              local_68 = 0;
            }
            else {
              sVar7 = wcslen(pwVar6);
              local_68 = FUN_14475aa65(0,pwVar6,sVar7 & 0xffffffff);
              uVar10 = local_68 + 1;
              puVar8 = (undefined1 *)0x0;
              if (0x80 < uVar10) {
                FUN_1446efa72(local_248,0,uVar10,1);
                puVar8 = local_78;
              }
              local_70 = puVar8;
              if (puVar8 == (undefined1 *)0x0) {
                local_70 = local_f8;
              }
              FUN_14475a98a(local_70,uVar10,pwVar6,(int)sVar7 + 1);
            }
            local_258 = local_238;
            FUN_148e7544a(uVar11,local_70,&local_219,plVar2);
            goto LAB_1442baa6b;
          }
        }
        else {
          if ((*(int *)(param_1 + 0x34) == 0) ||
             (uVar10 = *(uint *)(param_1 + 0x30), (int)uVar10 < 0)) {
LAB_1442baab2:
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((int)uVar10 < DAT_14c9647dc) {
              puVar9 = (undefined8 *)
                       ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if (((puVar9 == (undefined8 *)0x0) ||
                  (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34))) ||
                 ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_1442baab2;
              uVar11 = *puVar9;
            }
          }
          local_238[0] = 0;
          local_238[1] = 0;
          FUN_1400b2348(plVar2 + 1,local_238,1);
          local_200 = '\0';
          local_208 = local_240;
          local_250 = param_1;
          local_218 = local_1f8;
          local_210 = local_1f8;
          pwVar6 = (wchar_t *)FUN_140c7f682(param_1,L"PushTransaction",&local_218);
          local_78 = (undefined1 *)0x0;
          if (pwVar6 == (wchar_t *)0x0) {
            local_70 = (undefined1 *)0x0;
            local_68 = 0;
          }
          else {
            sVar7 = wcslen(pwVar6);
            local_68 = FUN_14475aa65(0,pwVar6,sVar7 & 0xffffffff);
            uVar10 = local_68 + 1;
            puVar8 = (undefined1 *)0x0;
            if (0x80 < uVar10) {
              FUN_1446efa72(local_248,0,uVar10,1);
              puVar8 = local_78;
            }
            local_70 = puVar8;
            if (puVar8 == (undefined1 *)0x0) {
              local_70 = local_f8;
            }
            FUN_14475a98a(local_70,uVar10,pwVar6,(int)sVar7 + 1);
          }
          local_258 = local_238;
          FUN_145cd514a(uVar11,local_70,&local_219,plVar2);
LAB_1442baa6b:
          if (local_78 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          param_1 = local_250;
          if (local_200 == '\x01') {
            FUN_1400020a8(local_218);
          }
          if (local_238[0] != 0) {
            FUN_1400020a8();
          }
        }
        FUN_148e3b21e(param_3,0);
        FUN_14582d980(param_3);
      }
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
    } while (0 < (int)param_3[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bab9c FUN_1442bab9c body=816 status=ok
// SIG undefined FUN_1442bab9c(void)

void FUN_1442bab9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar3 = *(uint *)(param_1 + 0x30), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) goto LAB_1442bade1;
  plVar10 = (longlong *)
            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if ((((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)(param_1 + 0x34))) ||
      (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
       ((*plVar10 == 0 || (lVar4 = *(longlong *)(param_1 + 0x288), lVar4 == 0)))))) ||
     (*(int *)(param_1 + 0x208) == 0)) goto LAB_1442bade1;
  FUN_1448d5e3c(&local_50,param_1 + 0x208);
  lVar5 = *(longlong *)(local_50 + 0x90);
  SRWLock = (PSRWLOCK)(lVar5 + 0x110);
  AcquireSRWLockShared(SRWLock);
  plVar10 = (longlong *)CONCAT44(uStack_44,local_48);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (*(int *)(lVar4 + 0xac) == *(int *)(lVar5 + 0x108)) {
    ReleaseSRWLockShared(SRWLock);
    goto LAB_1442bade1;
  }
  *(int *)(lVar4 + 0xac) = *(int *)(lVar5 + 0x108);
  if (*(char *)(lVar5 + 0xd3) == *(char *)(lVar4 + 0xb8)) {
    if (*(int *)(lVar4 + 0xbc) == 0) {
      iVar9 = 1;
      goto LAB_1442bacdb;
    }
  }
  else {
    iVar9 = *(int *)(lVar4 + 0xbc) + 1;
LAB_1442bacdb:
    *(char *)(lVar4 + 0xb8) = *(char *)(lVar5 + 0xd3);
    *(int *)(lVar4 + 0xbc) = iVar9;
  }
  FUN_140d9e4ca(param_1,1,lVar4);
  FUN_140d9e4ca(param_1,2,lVar4);
  FUN_140d9e4ca(param_1,4,lVar4);
  bVar7 = 0 < *(int *)(lVar5 + 0xe0);
  bVar8 = 0 < *(int *)(lVar5 + 0xf0);
  iVar9 = *(int *)(lVar5 + 0x100);
  ReleaseSRWLockShared(SRWLock);
  if (0 < iVar9 || (bVar8 || bVar7)) {
    FUN_1448d5e3c(&local_50,param_1 + 0x208);
    lVar5 = *(longlong *)(local_50 + 0x90);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x110));
    *(int *)(lVar5 + 0x108) = *(int *)(lVar5 + 0x108) + 1;
    plVar10 = (longlong *)CONCAT44(uStack_44,local_48);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (bVar7) {
      FUN_145840254(lVar5,&local_50,1);
      FUN_1442ba334(param_1,1,&local_50);
      FUN_14147ef9c(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    if (bVar8) {
      FUN_145840254(lVar5,&local_50,2);
      FUN_1442ba334(param_1,2,&local_50);
      FUN_14147ef9c(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    if (0 < iVar9) {
      FUN_145840254(lVar5,&local_50,4);
      FUN_1442ba334(param_1,4,&local_50);
      FUN_14147ef9c(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x110));
  }
  puVar6 = *(ushort **)(lVar4 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
LAB_1442bade1:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442baf18 FUN_1442baf18 body=517 status=ok
// SIG undefined FUN_1442baf18(void)

void FUN_1442baf18(longlong *param_1,uint param_2,float *param_3,float *param_4,float *param_5,
                  undefined1 *param_6,undefined8 param_7,char param_8)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < (int)(*(longlong **)(*param_1 + 0x10))[1]) {
    lVar5 = (ulonglong)param_2 * 0x58;
    *param_4 = *(float *)(**(longlong **)(*param_1 + 0x10) + 0x38 + lVar5);
    fVar11 = *(float *)(**(longlong **)(*param_1 + 0x10) + 0x28 + lVar5);
    *param_3 = fVar11;
    fVar11 = (float)(-(uint)(0.0 < *param_4) & (uint)((fVar11 / *param_4) * 100.0));
    *param_5 = fVar11;
    if ((param_8 == '\0') || (*(char *)(param_1[1] + 0x5b) != '\0')) {
      bVar10 = fVar11 == 0.0;
      bVar9 = fVar11 < 0.0;
    }
    else {
      bVar10 = fVar11 == 100.0;
      bVar9 = 100.0 < fVar11;
    }
    *param_6 = !bVar9 && !bVar10;
    bVar1 = *(byte *)(*(longlong *)(**(longlong **)(*param_1 + 0x10) + lVar5) + 0x18);
    plVar4 = (longlong *)FUN_14077538e();
    uVar7 = 0xffffffff;
    if (0 < (longlong)(int)plVar4[9]) {
      puVar6 = (ulonglong *)(plVar4[8] + 8);
      uVar8 = 0;
      do {
        if (*puVar6 == (ulonglong)bVar1) {
          uVar7 = uVar8 & 0xffffffff;
          break;
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 2;
      } while ((longlong)(int)plVar4[9] != uVar8);
    }
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_40,uVar7);
    plVar4 = local_40[0];
    if (*(code **)(*local_40[0] + 0x50) != FUN_144828418) {
      plVar4 = (longlong *)(**(code **)(*local_40[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar4);
    pcVar2 = *(code **)(*local_40[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar4 = local_40[0] + 3;
      if (local_40[0][5] != 0) {
        plVar4 = (longlong *)(local_40[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar4 = local_40[0] + 2;
    }
    else {
      plVar4 = (longlong *)(*pcVar2)();
    }
    FUN_144a2b0a4(plVar4,&local_30);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    FUN_1407753c8(&local_30);
    iVar3 = local_28 + -1;
    if (local_28 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_7,local_30,iVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_3 = 0.0;
    *param_4 = 0.0;
    *param_5 = 0.0;
    *param_6 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442bb15a FUN_1442bb15a body=29 status=ok
// SIG undefined FUN_1442bb15a(void)

undefined8 FUN_1442bb15a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bb178 FUN_1442bb178 body=95 status=ok
// SIG undefined FUN_1442bb178(void)

ulonglong * FUN_1442bb178(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_ExtensionPointWidget_PerspectiveSkew";
  local_18 = 0x30;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bb1d8 FUN_1442bb1d8 body=29 status=ok
// SIG undefined FUN_1442bb1d8(void)

undefined8 FUN_1442bb1d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bb1f6 FUN_1442bb1f6 body=95 status=ok
// SIG undefined FUN_1442bb1f6(void)

ulonglong * FUN_1442bb1f6(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_ExtensionPointWidget_Added";
  local_18 = 0x26;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bb25c FUN_1442bb25c body=66 status=ok
// SIG undefined FUN_1442bb25c(void)

longlong FUN_1442bb25c(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 1442bb29e FUN_1442bb29e body=66 status=ok
// SIG undefined FUN_1442bb29e(void)

longlong FUN_1442bb29e(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 1442bb2e0 FUN_1442bb2e0 body=66 status=ok
// SIG undefined FUN_1442bb2e0(void)

longlong FUN_1442bb2e0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 1442bb376 FUN_1442bb376 body=12 status=ok
// SIG undefined FUN_1442bb376(void)

void FUN_1442bb376(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bb37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442bb382 FUN_1442bb382 body=29 status=ok
// SIG undefined FUN_1442bb382(void)

undefined8 FUN_1442bb382(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bb3f4 FUN_1442bb3f4 body=12 status=ok
// SIG undefined FUN_1442bb3f4(void)

void FUN_1442bb3f4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bb3fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442bb400 FUN_1442bb400 body=29 status=ok
// SIG undefined FUN_1442bb400(void)

undefined8 FUN_1442bb400(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bb41e FUN_1442bb41e body=66 status=ok
// SIG undefined FUN_1442bb41e(void)

void FUN_1442bb41e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bb482 FUN_1442bb482 body=508 status=ok
// SIG undefined FUN_1442bb482(void)

bool FUN_1442bb482(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [34];
  byte local_c6;
  byte local_c5;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *param_1;
  FUN_140c83f8c(param_2,&local_98,param_1[1]);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_FUN_14b9c03e0;
  local_60 = local_98;
  uStack_5c = uStack_94;
  uStack_58 = uStack_90;
  uStack_54 = uStack_8c;
  local_88 = FUN_1442bb6c8;
  iVar11 = (int)param_2[1];
  lVar12 = (longlong)iVar11;
  if (lVar12 == 0) {
    iVar11 = 0;
  }
  else {
    lVar5 = *param_2;
    local_b8 = uVar4;
    local_a8 = param_2;
    bVar2 = FUN_1442bb6c8(&local_60,lVar5);
    local_a0 = lVar5 + 0x10;
    iVar8 = 0;
    iVar7 = 0;
    local_b0 = lVar5;
    do {
      local_c5 = bVar2;
      local_c6 = local_c5 ^ 1;
      lVar5 = (longlong)iVar7;
      local_c0 = iVar7 + 1;
      if (iVar7 + 1 < iVar11) {
        local_c0 = iVar11;
      }
      lVar13 = lVar5 * 0x10;
      lVar10 = local_a0 + lVar13;
      bVar2 = local_c5 & 1;
      local_c4 = iVar8;
      local_bc = iVar7;
      do {
        pcVar1 = local_88;
        lVar5 = lVar5 + 1;
        iVar8 = local_c0;
        if (lVar12 <= lVar5) break;
        pppuVar6 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar6 = &local_68;
        }
        uVar4 = (*(code *)(*pppuVar6)[1])();
        bVar3 = (*pcVar1)(uVar4,lVar10);
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 0x10;
        iVar8 = iVar7;
      } while (bVar2 == bVar3);
      iVar7 = iVar8;
      iVar8 = local_c4;
      iVar9 = iVar7 - local_bc;
      if ((local_c5 & 1) == 0) {
        if (local_c4 != local_bc) {
          memmove((void *)((longlong)local_c4 * 0x10 + local_b0),(void *)(lVar13 + local_b0),
                  (longlong)iVar9 << 4);
        }
        iVar8 = iVar8 + iVar9;
      }
      else {
        FUN_1447a1747(lVar13 + local_b0,iVar9);
        iVar8 = local_c4;
      }
      bVar2 = local_c6;
    } while (lVar5 < lVar12);
    *(int *)(local_a8 + 1) = iVar8;
    iVar11 = iVar11 - iVar8;
    uVar4 = local_b8;
    if (local_88 == (code *)0x0) goto LAB_1442bb63e;
  }
  pppuVar6 = &local_68;
  if (local_78 != (undefined ***)0x0) {
    pppuVar6 = local_78;
  }
  (*(code *)(*pppuVar6)[2])(pppuVar6);
LAB_1442bb63e:
  if (iVar11 != 0) {
    FUN_140ceeb80(uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11 != 0;
}



// FUNCTION 1442bb69e FUN_1442bb69e body=12 status=ok
// SIG undefined FUN_1442bb69e(void)

void FUN_1442bb69e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bb6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442bb6aa FUN_1442bb6aa body=29 status=ok
// SIG undefined FUN_1442bb6aa(void)

undefined8 FUN_1442bb6aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bb6c8 FUN_1442bb6c8 body=156 status=ok
// SIG undefined FUN_1442bb6c8(void)

undefined8 FUN_1442bb6c8(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 1);
  uVar7 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar7 = 0;
  }
  if ((int)uVar7 < 1) {
    return 0;
  }
  puVar3 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar8 != 0) {
    puVar6 = (undefined2 *)*param_1;
  }
  uVar4 = (ulonglong)uVar7;
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar5 = 0;
  do {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar5);
    uVar2 = *(ushort *)((longlong)puVar6 + lVar5);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (uVar4 == 1)) goto LAB_1442bb754;
    }
    else {
      if (0x7f < (uVar2 | uVar1)) {
        iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_1442bb754:
        return CONCAT71((int7)((ulonglong)puVar3 >> 8),iVar8 == 0);
      }
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_1442bb754;
      }
      if (uVar4 == 1) {
        iVar8 = 0;
        goto LAB_1442bb754;
      }
    }
    uVar4 = uVar4 - 1;
    lVar5 = lVar5 + 2;
  } while( true );
}



// FUNCTION 1442bb764 FUN_1442bb764 body=96 status=ok
// SIG undefined FUN_1442bb764(void)

undefined8 * FUN_1442bb764(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9c03e0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 1442bb7c4 FUN_1442bb7c4 body=5 status=ok
// SIG undefined FUN_1442bb7c4(void)

longlong FUN_1442bb7c4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1442bb7ca FUN_1442bb7ca body=12 status=ok
// SIG undefined FUN_1442bb7ca(void)

void FUN_1442bb7ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bb7d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442bb7d6 FUN_1442bb7d6 body=57 status=ok
// SIG undefined FUN_1442bb7d6(void)

undefined8 * FUN_1442bb7d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c03e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bb810 FUN_1442bb810 body=386 status=ok
// SIG undefined FUN_1442bb810(void)

uint * FUN_1442bb810(uint *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  lVar3 = FUN_14427aa18(param_2);
  if (lVar3 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x30) != *(int *)(lVar3 + 0x5c)) {
      uVar2 = (uint)((ulonglong)DAT_14cbd9750 >> 0x10);
      uVar6 = (uint)DAT_14cbd9750 & 0xffff;
      lVar4 = lVar3 + 0x60;
      if (*(longlong *)(lVar3 + 0x68) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x68);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(lVar3 + 0x70) - 1U &
                               (int)((ulonglong)DAT_14cbd9750 >> 0x20) +
                               ((uint)DAT_14cbd9750 << 0x10 | uVar6) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar5 * 0x18);
          if (*plVar1 == DAT_14cbd9750) {
            if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
               (lVar3 = plVar1[1], lVar3 != 0)) {
              lVar4 = FUN_14406f5b4();
              if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                param_1[1] = 0;
                uVar2 = *(uint *)(lVar3 + 0xc);
                *param_1 = uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar3 = 0;
                }
                uVar2 = *(uint *)(lVar3 + 0x10);
                if (*(uint *)(lVar3 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar6 = DAT_14c964868 + 1;
                  bVar7 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar7) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar6);
                  }
                  LOCK();
                  uVar2 = *(uint *)(lVar3 + 0x10);
                  bVar7 = uVar2 == 0;
                  if (bVar7) {
                    *(uint *)(lVar3 + 0x10) = uVar6;
                    uVar2 = 0;
                  }
                  UNLOCK();
                  if (bVar7) {
                    uVar2 = uVar6;
                  }
                }
                goto LAB_1442bb904;
              }
            }
            break;
          }
          iVar5 = (int)plVar1[2];
        } while (iVar5 != -1);
      }
    }
    param_1[0] = 0;
    param_1[1] = 0;
    uVar2 = 0;
LAB_1442bb904:
    param_1[1] = uVar2;
  }
  return param_1;
}



// FUNCTION 1442bb992 FUN_1442bb992 body=376 status=ok
// SIG undefined FUN_1442bb992(void)

undefined8 * FUN_1442bb992(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar6);
              FUN_14005b248(param_1);
            }
            else {
              iVar6 = iVar6 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar6 < iVar5);
        }
        iVar6 = 2;
        if (2 < iVar5 * 2) {
          iVar6 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar6;
        if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c(param_1);
        }
      }
    }
    plVar2 = (longlong *)*param_3;
    if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
      local_38 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
    }
    *param_2 = local_38;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar7) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar7) = 0;
    *(longlong *)(lVar3 + lVar7) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar7) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1442bbb0c FUN_1442bbb0c body=29 status=ok
// SIG undefined FUN_1442bbb0c(void)

undefined8 FUN_1442bbb0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bbcbe FUN_1442bbcbe body=93 status=ok
// SIG undefined FUN_1442bbcbe(void)

void FUN_1442bbcbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9c0470;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bbd1c FUN_1442bbd1c body=93 status=ok
// SIG undefined FUN_1442bbd1c(void)

void FUN_1442bbd1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9c0470;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bbd7a FUN_1442bbd7a body=126 status=ok
// SIG undefined FUN_1442bbd7a(void)

void FUN_1442bbd7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9c0470;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bbde9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bbe56 FUN_1442bbe56 body=275 status=ok
// SIG undefined FUN_1442bbe56(void)

undefined8 FUN_1442bbe56(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bbf63;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bbf63;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442bbf63:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bbf16;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1442bbf16;
    }
  }
  uVar6 = 0;
LAB_1442bbf16:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bbf6c FUN_1442bbf6c body=29 status=ok
// SIG undefined FUN_1442bbf6c(void)

undefined8 FUN_1442bbf6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bc112 FUN_1442bc112 body=93 status=ok
// SIG undefined FUN_1442bc112(void)

void FUN_1442bc112(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c04e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bc170 FUN_1442bc170 body=93 status=ok
// SIG undefined FUN_1442bc170(void)

void FUN_1442bc170(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c04e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bc1ce FUN_1442bc1ce body=126 status=ok
// SIG undefined FUN_1442bc1ce(void)

void FUN_1442bc1ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c04e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bc23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bc2aa FUN_1442bc2aa body=277 status=ok
// SIG undefined FUN_1442bc2aa(void)

undefined8 FUN_1442bc2aa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bc3b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bc3b9;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1442bc3b9:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bc36c;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1442bc36c;
    }
  }
  uVar6 = 0;
LAB_1442bc36c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bc3c0 FUN_1442bc3c0 body=29 status=ok
// SIG undefined FUN_1442bc3c0(void)

undefined8 FUN_1442bc3c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bc572 FUN_1442bc572 body=93 status=ok
// SIG undefined FUN_1442bc572(void)

void FUN_1442bc572(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9c05c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bc5d0 FUN_1442bc5d0 body=93 status=ok
// SIG undefined FUN_1442bc5d0(void)

void FUN_1442bc5d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9c05c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bc62e FUN_1442bc62e body=126 status=ok
// SIG undefined FUN_1442bc62e(void)

void FUN_1442bc62e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9c05c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bc69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bc6ac FUN_1442bc6ac body=150 status=ok
// SIG undefined FUN_1442bc6ac(void)

void FUN_1442bc6ac(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442bc70e;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_1442bc70e;
    }
  }
  uVar2 = 0;
LAB_1442bc70e:
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(uVar2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bc744 FUN_1442bc744 body=288 status=ok
// SIG undefined FUN_1442bc744(void)

undefined8 FUN_1442bc744(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bc85e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bc85e;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar7 = CONCAT44(uStack_34,local_38);
  }
  else {
LAB_1442bc85e:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bc811;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      uStack_2c = param_2[3];
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_1442bc811;
    }
  }
  uVar6 = 0;
LAB_1442bc811:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bc868 FUN_1442bc868 body=386 status=ok
// SIG undefined FUN_1442bc868(void)

uint * FUN_1442bc868(uint *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  lVar3 = FUN_14427aa18(param_2);
  if (lVar3 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x30) != *(int *)(lVar3 + 0x5c)) {
      uVar2 = (uint)((ulonglong)DAT_14cbd9740 >> 0x10);
      uVar6 = (uint)DAT_14cbd9740 & 0xffff;
      lVar4 = lVar3 + 0x60;
      if (*(longlong *)(lVar3 + 0x68) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x68);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(lVar3 + 0x70) - 1U &
                               (int)((ulonglong)DAT_14cbd9740 >> 0x20) +
                               ((uint)DAT_14cbd9740 << 0x10 | uVar6) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar5 * 0x18);
          if (*plVar1 == DAT_14cbd9740) {
            if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
               (lVar3 = plVar1[1], lVar3 != 0)) {
              lVar4 = FUN_14406ef98();
              if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                param_1[1] = 0;
                uVar2 = *(uint *)(lVar3 + 0xc);
                *param_1 = uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar3 = 0;
                }
                uVar2 = *(uint *)(lVar3 + 0x10);
                if (*(uint *)(lVar3 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar6 = DAT_14c964868 + 1;
                  bVar7 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar7) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar6);
                  }
                  LOCK();
                  uVar2 = *(uint *)(lVar3 + 0x10);
                  bVar7 = uVar2 == 0;
                  if (bVar7) {
                    *(uint *)(lVar3 + 0x10) = uVar6;
                    uVar2 = 0;
                  }
                  UNLOCK();
                  if (bVar7) {
                    uVar2 = uVar6;
                  }
                }
                goto LAB_1442bc95c;
              }
            }
            break;
          }
          iVar5 = (int)plVar1[2];
        } while (iVar5 != -1);
      }
    }
    param_1[0] = 0;
    param_1[1] = 0;
    uVar2 = 0;
LAB_1442bc95c:
    param_1[1] = uVar2;
  }
  return param_1;
}



// FUNCTION 1442bc9ea FUN_1442bc9ea body=29 status=ok
// SIG undefined FUN_1442bc9ea(void)

undefined8 FUN_1442bc9ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bcb90 FUN_1442bcb90 body=93 status=ok
// SIG undefined FUN_1442bcb90(void)

void FUN_1442bcb90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abc80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bcbee FUN_1442bcbee body=93 status=ok
// SIG undefined FUN_1442bcbee(void)

void FUN_1442bcbee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abc80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442bcc4c FUN_1442bcc4c body=126 status=ok
// SIG undefined FUN_1442bcc4c(void)

void FUN_1442bcc4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9abc80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c0630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442bccbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442bcd28 FUN_1442bcd28 body=288 status=ok
// SIG undefined FUN_1442bcd28(void)

undefined8 FUN_1442bcd28(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442bce41;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442bce41;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1442bce41:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442bcdf2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_1442bcdf2;
    }
  }
  uVar6 = 0;
LAB_1442bcdf2:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442bce4a FUN_1442bce4a body=29 status=ok
// SIG undefined FUN_1442bce4a(void)

undefined8 FUN_1442bce4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442bcff0 FUN_1442bcff0 body=93 status=ok
// SIG undefined FUN_1442bcff0(void)

void FUN_1442bcff0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9c0470;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c06a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


