// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441859a2 FUN_1441859a2 body=93 status=ok
// SIG undefined FUN_1441859a2(void)

void FUN_1441859a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144185a00 FUN_144185a00 body=93 status=ok
// SIG undefined FUN_144185a00(void)

void FUN_144185a00(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144185a5e FUN_144185a5e body=126 status=ok
// SIG undefined FUN_144185a5e(void)

void FUN_144185a5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b977990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144185acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144185b2c FUN_144185b2c body=350 status=ok
// SIG undefined FUN_144185b2c(void)

undefined8 FUN_144185b2c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144185c84;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144185c84;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144185c84:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144185c31;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x1c);
      uVar6 = 1;
      if ((iVar1 != 0) &&
         ((uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x18), -1 < (int)uVar2 &&
          ((int)uVar2 < DAT_14c9647dc)))) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar5 != (longlong *)0x0) &&
           ((((int)plVar5[2] == iVar1 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
            (*plVar5 != 0)))) {
          FUN_14893d43a();
        }
      }
      goto LAB_144185c31;
    }
  }
  uVar6 = 0;
LAB_144185c31:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144185c8c FUN_144185c8c body=29 status=ok
// SIG undefined FUN_144185c8c(void)

undefined8 FUN_144185c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144185e28 FUN_144185e28 body=93 status=ok
// SIG undefined FUN_144185e28(void)

void FUN_144185e28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144185e86 FUN_144185e86 body=93 status=ok
// SIG undefined FUN_144185e86(void)

void FUN_144185e86(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144185ee4 FUN_144185ee4 body=126 status=ok
// SIG undefined FUN_144185ee4(void)

void FUN_144185ee4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b977a00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144185f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144185f6c FUN_144185f6c body=269 status=ok
// SIG undefined FUN_144185f6c(void)

undefined8 FUN_144185f6c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144186073;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144186073;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144186073:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144186027;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14418607a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144186027;
    }
  }
  uVar6 = 0;
LAB_144186027:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418607a FUN_14418607a body=203 status=ok
// SIG undefined FUN_14418607a(void)

void FUN_14418607a(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  if (((*(int *)(lVar3 + 0x1c) != 0) && (uVar2 = *(uint *)(lVar3 + 0x18), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar3 + 0x1c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
        (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
      fVar1 = *(float *)(lVar3 + 0x44);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        *(float *)(plVar4 + 0x1c8) = fVar1 * *(float *)(lVar3 + 0x4c) + *(float *)(plVar4 + 0x1c8);
      }
      fVar1 = *(float *)(lVar3 + 0x48);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        *(float *)((longlong)plVar4 + 0xe44) =
             fVar1 * *(float *)(lVar3 + 0x50) + *(float *)((longlong)plVar4 + 0xe44);
      }
      *(undefined1 *)(lVar3 + 0x56) = 1;
      if ((((char)plVar4[0x2f] == '\x03') || ((*(byte *)(plVar4 + 0xc) & 1) != 0)) ||
         ((*(byte *)((longlong)plVar4 + 0x61) & 1) != 0)) {
        *(undefined1 *)((longlong)plVar4 + 0x1152) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014418613e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x6c0))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 144186146 FUN_144186146 body=29 status=ok
// SIG undefined FUN_144186146(void)

undefined8 FUN_144186146(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441862e2 FUN_1441862e2 body=93 status=ok
// SIG undefined FUN_1441862e2(void)

void FUN_1441862e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144186340 FUN_144186340 body=93 status=ok
// SIG undefined FUN_144186340(void)

void FUN_144186340(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418639e FUN_14418639e body=126 status=ok
// SIG undefined FUN_14418639e(void)

void FUN_14418639e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b977a70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014418640d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418642e FUN_14418642e body=274 status=ok
// SIG undefined FUN_14418642e(void)

undefined8 FUN_14418642e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14418653a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418653a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14418653a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441864d9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x48) = 0;
      FUN_148d572b8();
      uVar6 = 1;
      goto LAB_1441864d9;
    }
  }
  uVar6 = 0;
LAB_1441864d9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144186542 FUN_144186542 body=31 status=ok
// SIG undefined FUN_144186542(void)

undefined8 FUN_144186542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144186648 FUN_144186648 body=1193 status=ok
// SIG undefined FUN_144186648(void)

void FUN_144186648(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  int local_74;
  float local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(*param_1 + 0xe10);
  if ((((lVar3 == 0) || (fVar10 = *(float *)(lVar3 + 0xe0), fVar10 != 0.0)) || (NAN(fVar10))) ||
     ((char)param_1[0x1a] != '\x01')) {
    if ((char)param_1[0x1a] == '\x01') {
      FUN_140b3d268(*param_1,param_1 + 0x17);
      lVar3 = *param_1;
      lVar7 = param_1[0x16];
      if ((*(char *)(lVar3 + 0x178) == '\x03') || ((*(byte *)(lVar3 + 0x60) & 1) != 0)) {
        *(int *)(lVar3 + 0x1154) = (int)lVar7;
        *(byte *)(lVar3 + 0x1151) = *(byte *)(lVar3 + 0x1151) | 2;
        if (*(longlong *)(lVar3 + 0xe38) != 0) {
          *(int *)(*(longlong *)(lVar3 + 0xe38) + 0x1a8) = (int)lVar7;
        }
      }
    }
  }
  else {
    local_58 = (double)param_1[0x1d] - (double)param_1[0x10];
    local_60 = (double)param_1[0x1c] - (double)param_1[0xf];
    local_68 = (double)param_1[0x1b] - (double)param_1[0xe];
    FUN_140b3d268();
  }
  if (((*(int *)((longlong)param_1 + 0xf4) != 0) &&
      (uVar1 = *(uint *)(param_1 + 0x1e), -1 < (int)uVar1)) &&
     (((int)uVar1 < DAT_14c9647dc &&
      ((((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0xf4))) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (*plVar6 != 0)))))) {
    FUN_14655bdcc(*param_1);
  }
  *(undefined4 *)(*param_1 + 0xe40) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(*param_1 + 0xe44) = (int)param_1[3];
  *(undefined4 *)(*param_1 + 0xe48) = *(undefined4 *)((longlong)param_1 + 0x24);
  local_68 = (double)((ulonglong)local_68 & 0xffffffff00000000);
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    fVar10 = *(float *)((longlong)param_1 + 0x34);
  }
  else {
    FUN_1402a453c(&local_68);
    iVar2 = *(int *)((longlong)param_1 + 0x2c);
    iVar4 = (int)local_68;
    lVar7 = (longlong)(int)local_68;
    lVar3 = DAT_14c9a3d60 + lVar7 * 0x88;
    lVar8 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar3 + -0x88,lVar8 + -0x88);
    if (iVar2 != iVar4) {
      FUN_1402a4744(lVar3 + -0x18,lVar8 + -0x18);
    }
    fVar10 = *(float *)((longlong)param_1 + 0x34);
    if (iVar4 != 0) {
      fVar10 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar7 * 0x88 + -0x88,fVar10,0);
      lVar3 = DAT_14c9a3d60;
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        lVar8 = (longlong)(iVar4 + -1) * 0x88;
        lVar7 = DAT_14c9a3d60 + lVar8;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar8),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar8));
        if (*(longlong *)(lVar3 + 0x70 + lVar8) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar7 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar4 + -1,1);
      }
      goto joined_r0x0001441869a5;
    }
  }
  local_68 = (double)CONCAT44(fVar10,(int)local_68);
joined_r0x0001441869a5:
  if (1e-08 < ABS(fVar10 + -1.0)) {
    FUN_1411a6e9c(*param_1,(int)param_1[6]);
  }
  local_74 = 0;
  if ((int)param_1[7] == 0) {
    fVar10 = *(float *)(param_1 + 8);
    fVar5 = fVar10;
  }
  else {
    FUN_1402a453c(&local_74);
    iVar2 = local_74;
    lVar7 = param_1[7];
    lVar8 = (longlong)local_74;
    lVar3 = DAT_14c9a3d60 + lVar8 * 0x88;
    lVar9 = (longlong)(int)lVar7 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar3 + -0x88,lVar9 + -0x88);
    if ((int)lVar7 != iVar2) {
      FUN_1402a4744(lVar3 + -0x18,lVar9 + -0x18);
    }
    fVar10 = *(float *)(param_1 + 8);
    fVar5 = fVar10;
    if ((iVar2 != 0) &&
       (fVar10 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar8 * 0x88 + -0x88,fVar10,0),
       lVar3 = DAT_14c9a3d60, fVar5 = local_70, DAT_14c9a3d68 != DAT_14c9a3d94)) {
      lVar8 = (longlong)(iVar2 + -1) * 0x88;
      lVar7 = DAT_14c9a3d60 + lVar8;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar8),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar8));
      if (*(longlong *)(lVar3 + 0x70 + lVar8) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar7 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar2 + -1,1);
      fVar5 = local_70;
    }
  }
  local_70 = fVar5;
  if (1e-08 < ABS(fVar10 + -1.0)) {
    (**(code **)(*(longlong *)(*param_1 + 0x3d0) + 0xa0))
              (*param_1 + 0x3d0,*(undefined4 *)((longlong)param_1 + 0x3c));
  }
  local_88 = 0;
  FUN_14113775c(*param_1,&DAT_14c846480,1,0);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144186af2 FUN_144186af2 body=1123 status=ok
// SIG undefined FUN_144186af2(void)

undefined8 * FUN_144186af2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x110,0x10);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b977b70;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(puVar3 + 3) = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(puVar3 + 4) = uVar6;
  }
  else {
    FUN_1402a453c(puVar3 + 3);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(puVar3 + 3);
    lVar4 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    lVar5 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar4 + -0x88,lVar5 + -0x88);
    if (iVar1 != iVar2) {
      FUN_1402a4744(lVar4 + -0x18,lVar5 + -0x18);
    }
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(puVar3 + 4) = uVar6;
    if ((longlong)*(int *)(puVar3 + 3) != 0) {
      uVar6 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)(puVar3 + 3) * 0x88 + -0x88,uVar6,0);
    }
  }
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar6;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar6;
  }
  else {
    FUN_1402a453c((int *)((longlong)puVar3 + 0x24));
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = *(int *)((longlong)puVar3 + 0x24);
    lVar4 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    lVar5 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar4 + -0x88,lVar5 + -0x88);
    if (iVar1 != iVar2) {
      FUN_1402a4744(lVar4 + -0x18,lVar5 + -0x18);
    }
    *(undefined4 *)(puVar3 + 5) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar6;
    if ((longlong)*(int *)((longlong)puVar3 + 0x24) != 0) {
      uVar6 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)((longlong)puVar3 + 0x24) * 0x88 +
                            -0x88,uVar6,0);
    }
  }
  *(undefined4 *)(puVar3 + 5) = uVar6;
  *(undefined4 *)(puVar3 + 6) = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(puVar3 + 7) = uVar6;
  }
  else {
    FUN_1402a453c(puVar3 + 6);
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(puVar3 + 6);
    lVar4 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    lVar5 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar4 + -0x88,lVar5 + -0x88);
    if (iVar1 != iVar2) {
      FUN_1402a4744(lVar4 + -0x18,lVar5 + -0x18);
    }
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(puVar3 + 7) = uVar6;
    if ((longlong)*(int *)(puVar3 + 6) != 0) {
      uVar6 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)(puVar3 + 6) * 0x88 + -0x88,uVar6,0);
    }
  }
  *(undefined4 *)((longlong)puVar3 + 0x34) = uVar6;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)((longlong)puVar3 + 0x44) = uVar6;
  }
  else {
    FUN_1402a453c((int *)((longlong)puVar3 + 0x3c));
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar2 = *(int *)((longlong)puVar3 + 0x3c);
    lVar4 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    lVar5 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar4 + -0x88,lVar5 + -0x88);
    if (iVar1 != iVar2) {
      FUN_1402a4744(lVar4 + -0x18,lVar5 + -0x18);
    }
    *(undefined4 *)(puVar3 + 8) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)((longlong)puVar3 + 0x44) = uVar6;
    if ((longlong)*(int *)((longlong)puVar3 + 0x3c) != 0) {
      uVar6 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)((longlong)puVar3 + 0x3c) * 0x88 +
                            -0x88,uVar6,0);
    }
  }
  *(undefined4 *)(puVar3 + 8) = uVar6;
  *(undefined4 *)(puVar3 + 9) = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(puVar3 + 10) = uVar6;
  }
  else {
    FUN_1402a453c(puVar3 + 9);
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = *(int *)(puVar3 + 9);
    lVar4 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    lVar5 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar4 + -0x88,lVar5 + -0x88);
    if (iVar1 != iVar2) {
      FUN_1402a4744(lVar4 + -0x18,lVar5 + -0x18);
    }
    *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(puVar3 + 10) = uVar6;
    if ((longlong)*(int *)(puVar3 + 9) != 0) {
      uVar6 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)(puVar3 + 9) * 0x88 + -0x88,uVar6,0);
    }
  }
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uVar6;
  memcpy(puVar3 + 0xc,(void *)(param_1 + 0x60),0xa8);
  return puVar3 + 2;
}



// FUNCTION 144186f5c FUN_144186f5c body=29 status=ok
// SIG undefined FUN_144186f5c(void)

void FUN_144186f5c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144186f7a FUN_144186f7a body=769 status=ok
// SIG undefined FUN_144186f7a(void)

undefined8 * FUN_144186f7a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b977b70;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 9) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 9) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 9) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x3c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 6) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 6) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x24) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 3) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 3) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418727c FUN_14418727c body=29 status=ok
// SIG undefined FUN_14418727c(void)

undefined8 FUN_14418727c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144187422 FUN_144187422 body=101 status=ok
// SIG undefined FUN_144187422(void)

void FUN_144187422(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144187488 FUN_144187488 body=101 status=ok
// SIG undefined FUN_144187488(void)

void FUN_144187488(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441874ee FUN_1441874ee body=134 status=ok
// SIG undefined FUN_1441874ee(void)

void FUN_1441874ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b977c20;
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
                    /* WARNING: Could not recover jumptable at 0x000144187565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441875d0 FUN_1441875d0 body=275 status=ok
// SIG undefined FUN_1441875d0(void)

undefined8 FUN_1441875d0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441876dd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441876dd;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441876dd:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144187691;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_144187691;
    }
  }
  uVar6 = 0;
LAB_144187691:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441876e4 FUN_1441876e4 body=31 status=ok
// SIG undefined FUN_1441876e4(void)

undefined8 FUN_1441876e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144187752 FUN_144187752 body=749 status=ok
// SIG undefined FUN_144187752(void)

void FUN_144187752(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1418a5960(param_1 + 1,*param_1);
  if (((double)param_1[0x1b] != 0.0) || (NAN((double)param_1[0x1b]))) {
LAB_1441877b4:
    FUN_140b3d268(*param_1,param_1 + 0x1b);
  }
  else {
    if (((double)param_1[0x1c] != 0.0) || (NAN((double)param_1[0x1c]))) goto LAB_1441877b4;
    if (((double)param_1[0x1d] != 0.0) || (NAN((double)param_1[0x1d]))) goto LAB_1441877b4;
  }
  if (((*(int *)((longlong)param_1 + 0xf4) != 0) &&
      (uVar1 = *(uint *)(param_1 + 0x1e), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0xf4))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      FUN_14655bdcc(*param_1);
    }
  }
  if (((*(int *)((longlong)param_1 + 0xfc) != 0) &&
      (uVar1 = *(uint *)(param_1 + 0x1f), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0xfc))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
      local_88 = &local_38;
      local_28 = DAT_14c8464f0;
      local_38 = (undefined4)DAT_14c8464e0;
      uStack_34 = DAT_14c8464e0._4_4_;
      uStack_30 = (undefined4)DAT_14c8464e8;
      uStack_2c = DAT_14c8464e8._4_4_;
      (**(code **)(*(longlong *)(*param_1 + 0x3d0) + 0x80))(*param_1 + 0x3d0,*plVar4,0,0);
    }
  }
  if (0.0 < *(float *)(param_1 + 0x20)) {
    FUN_14578b382(*param_1);
  }
  local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
  FUN_14113775c(*param_1,&DAT_14c846480,1,0);
  if ((*(char *)((longlong)param_1 + 0x104) != '\x01') ||
     (plVar4 = *(longlong **)(*param_1 + 0x1b0), plVar4 == (longlong *)0x0)) goto LAB_144187927;
  if (DAT_14cba8288 == 0) {
    local_50 = &local_20;
    local_20 = FUN_141864c34;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464cee30;
    local_58 = &LAB_148bfac22;
    local_60 = &LAB_140f21842;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(plVar4[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
      != DAT_14cba8288 + 0x30)) goto LAB_144187927;
  lVar2 = (**(code **)(*plVar4 + 0xba0))(plVar4);
  if (lVar2 == 0) goto LAB_144187927;
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_144187990:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_140f1f93e();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_144187990;
  }
  FUN_148d57b5e(lVar2,lVar5);
LAB_144187927:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144187a40 FUN_144187a40 body=339 status=ok
// SIG undefined FUN_144187a40(void)

undefined8 * FUN_144187a40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  puVar10 = (undefined8 *)FUN_14001cc68(0x110,8);
  *param_2 = puVar10;
  *puVar10 = &PTR_FUN_14b977d00;
  puVar10[1] = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar10[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar10[5] = 0;
  puVar10[0xc] = 0;
  lVar11 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x60);
  }
  FUN_1400709d4(puVar10 + 6,lVar11,*(undefined4 *)(param_1 + 0x68),0);
  *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(param_1 + 0x70);
  puVar10[0xf] = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(param_1 + 0x80);
  puVar10[0x11] = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(param_1 + 0x90);
  puVar10[0x13] = 0;
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  uVar3 = *(undefined4 *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xbc);
  puVar10[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar10[0x15] = uVar5;
  *(undefined4 *)(puVar10 + 0x16) = uVar1;
  *(undefined4 *)((longlong)puVar10 + 0xb4) = uVar2;
  *(undefined4 *)(puVar10 + 0x17) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0xbc) = uVar4;
  puVar10[0x18] = &DAT_14a171d50;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x19] = *(undefined8 *)(param_1 + 200);
  FUN_1406022fe(puVar10 + 0x1a,param_1 + 0xd0);
  puVar10[0x18] = &PTR_FUN_14b0394b0;
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uVar7 = *(undefined8 *)(param_1 + 0xf8);
  uVar8 = *(undefined8 *)(param_1 + 0xfd);
  uVar9 = *(undefined8 *)(param_1 + 0x105);
  puVar10[0x1c] = *(undefined8 *)(param_1 + 0xe0);
  puVar10[0x1d] = uVar5;
  puVar10[0x1e] = uVar6;
  puVar10[0x1f] = uVar7;
  *(undefined8 *)((longlong)puVar10 + 0xfd) = uVar8;
  *(undefined8 *)((longlong)puVar10 + 0x105) = uVar9;
  return puVar10 + 1;
}



// FUNCTION 144187b9a FUN_144187b9a body=29 status=ok
// SIG undefined FUN_144187b9a(void)

void FUN_144187b9a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144187bb8 FUN_144187bb8 body=136 status=ok
// SIG undefined FUN_144187bb8(void)

undefined8 * FUN_144187bb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b977d00;
  param_1[0x18] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (*(int *)((longlong)param_1 + 0xdc) != 0) {
    FUN_140115c12(param_1 + 0x1a,0);
  }
  param_1[0x19] = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144187c6e FUN_144187c6e body=12 status=ok
// SIG undefined FUN_144187c6e(void)

void FUN_144187c6e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144187c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144187c7a FUN_144187c7a body=29 status=ok
// SIG undefined FUN_144187c7a(void)

undefined8 FUN_144187c7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144187c98 FUN_144187c98 body=29 status=ok
// SIG undefined FUN_144187c98(void)

undefined8 FUN_144187c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144187cca FUN_144187cca body=93 status=ok
// SIG undefined FUN_144187cca(void)

void FUN_144187cca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144187d28 FUN_144187d28 body=93 status=ok
// SIG undefined FUN_144187d28(void)

void FUN_144187d28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144187d86 FUN_144187d86 body=126 status=ok
// SIG undefined FUN_144187d86(void)

void FUN_144187d86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977e50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144187df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144187e0e FUN_144187e0e body=20 status=ok
// SIG undefined FUN_144187e0e(void)

undefined1 FUN_144187e0e(longlong param_1)

{
  FUN_144187e22(param_1 + 0x18);
  return 1;
}



// FUNCTION 144187e22 FUN_144187e22 body=621 status=ok
// SIG undefined FUN_144187e22(void)

void FUN_144187e22(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
     || (((plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 == (longlong *)0x0 || (*(uint *)(plVar2 + 2) != param_1[1])) ||
         (((*(uint *)(plVar2 + 1) & 0x10200000) != 0 || (*plVar2 == 0)))))) goto LAB_144187f6d;
  local_38 = 0;
  uStack_30 = 0;
  lVar4 = 0;
  if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
    lVar4 = *plVar2;
  }
  if (DAT_14cb46ec8 == (code *)0x0) {
    local_50 = &local_28;
    local_28 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b4754c;
    local_58 = &LAB_1483e40eb;
    local_60 = &LAB_146486986;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000005;
    local_80 = 8;
    local_88 = 0x420;
    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
  }
  local_28 = DAT_14cb46ec8;
  if ((DAT_14cb46ec8 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140d0a558(lVar4,&local_38,&local_28);
  if (0 < (int)uStack_30) {
    if (param_1[1] == 0) {
LAB_144187fe8:
      plVar2 = (longlong *)0x0;
    }
    else {
      uVar1 = *param_1;
      plVar2 = (longlong *)0x0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar3 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar3 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
        goto LAB_144187fe8;
        plVar2 = (longlong *)*puVar3;
      }
    }
    if ((*(byte *)(plVar2 + 0x69) & 2) == 0) {
      FUN_14662b04c(plVar2);
      if (((*(byte *)(plVar2 + 0x1db) & 2) == 0) &&
         ((((char)plVar2[0x2f] == '\x03' || ((*(byte *)(plVar2 + 0xc) & 1) != 0)) ||
          ((*(byte *)((longlong)plVar2 + 0x61) & 1) != 0)))) {
        *(undefined1 *)((longlong)plVar2 + 0x1152) = 0;
        (**(code **)(*plVar2 + 0x6c0))(plVar2);
      }
      (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_144187f6d:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144188090 FUN_144188090 body=29 status=ok
// SIG undefined FUN_144188090(void)

undefined8 FUN_144188090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418822c FUN_14418822c body=93 status=ok
// SIG undefined FUN_14418822c(void)

void FUN_14418822c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418828a FUN_14418828a body=93 status=ok
// SIG undefined FUN_14418828a(void)

void FUN_14418828a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441882e8 FUN_1441882e8 body=126 status=ok
// SIG undefined FUN_1441882e8(void)

void FUN_1441882e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977f90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144188357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144188370 FUN_144188370 body=275 status=ok
// SIG undefined FUN_144188370(void)

undefined8 FUN_144188370(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14418847d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418847d;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14418847d:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418841f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d5eec0(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_14418841f;
    }
  }
  uVar6 = 0;
LAB_14418841f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144188484 FUN_144188484 body=29 status=ok
// SIG undefined FUN_144188484(void)

undefined8 FUN_144188484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144188620 FUN_144188620 body=93 status=ok
// SIG undefined FUN_144188620(void)

void FUN_144188620(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9781c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418867e FUN_14418867e body=93 status=ok
// SIG undefined FUN_14418867e(void)

void FUN_14418867e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9781c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441886dc FUN_1441886dc body=126 status=ok
// SIG undefined FUN_1441886dc(void)

void FUN_1441886dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9781c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014418874b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418875a FUN_14418875a body=66 status=ok
// SIG undefined FUN_14418875a(void)

void FUN_14418875a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441888b6(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418879e FUN_14418879e body=279 status=ok
// SIG undefined FUN_14418879e(void)

undefined8 FUN_14418879e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441888af;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441888af;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441888af:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144188863;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441888b6(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144188863;
    }
  }
  uVar6 = 0;
LAB_144188863:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441888b6 FUN_1441888b6 body=203 status=ok
// SIG undefined FUN_1441888b6(void)

void FUN_1441888b6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  (**(code **)(*(longlong *)*param_2 + 0xb0))((longlong *)*param_2,&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_78 = local_b8;
  uStack_74 = uStack_b4;
  local_68 = local_a8;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  FUN_148be0730(lVar1,*(longlong *)(lVar1 + 0x2c28) + 0xd8);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441889aa FUN_1441889aa body=12 status=ok
// SIG undefined FUN_1441889aa(void)

void FUN_1441889aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441889b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441889b6 FUN_1441889b6 body=29 status=ok
// SIG undefined FUN_1441889b6(void)

undefined8 FUN_1441889b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441889d4 FUN_1441889d4 body=66 status=ok
// SIG undefined FUN_1441889d4(void)

undefined8 FUN_1441889d4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar2 = FUN_1466168dc();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 144188a34 FUN_144188a34 body=12 status=ok
// SIG undefined FUN_144188a34(void)

void FUN_144188a34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144188a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144188a40 FUN_144188a40 body=29 status=ok
// SIG undefined FUN_144188a40(void)

undefined8 FUN_144188a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144188a5e FUN_144188a5e body=66 status=ok
// SIG undefined FUN_144188a5e(void)

undefined8 FUN_144188a5e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar2 = FUN_146616750();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 144188abe FUN_144188abe body=12 status=ok
// SIG undefined FUN_144188abe(void)

void FUN_144188abe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144188ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144188aca FUN_144188aca body=29 status=ok
// SIG undefined FUN_144188aca(void)

undefined8 FUN_144188aca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144188ae8 FUN_144188ae8 body=29 status=ok
// SIG undefined FUN_144188ae8(void)

undefined8 FUN_144188ae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144188b1a FUN_144188b1a body=93 status=ok
// SIG undefined FUN_144188b1a(void)

void FUN_144188b1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144188b78 FUN_144188b78 body=93 status=ok
// SIG undefined FUN_144188b78(void)

void FUN_144188b78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144188bd6 FUN_144188bd6 body=126 status=ok
// SIG undefined FUN_144188bd6(void)

void FUN_144188bd6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978290;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144188c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144188c60 FUN_144188c60 body=23 status=ok
// SIG undefined FUN_144188c60(void)

undefined1 FUN_144188c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144188c78(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 144188c78 FUN_144188c78 body=118 status=ok
// SIG undefined FUN_144188c78(void)

void FUN_144188c78(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if (*(int *)(param_2 + 0x138) == 0) {
    if (*(int *)(lVar1 + 0x2c08) != 0) {
      puVar2 = *(undefined8 **)(lVar1 + 0x2c00);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72((longlong *)(lVar1 + 0x2c00),0,0,0x10);
        *(undefined4 *)(lVar1 + 0x2c08) = 0;
      }
    }
  }
  else {
    FUN_1413dd462(lVar1,*(longlong *)(param_2 + 0x130) + 0x28,0,0,0);
  }
  return;
}



// FUNCTION 144188cee FUN_144188cee body=125 status=ok
// SIG undefined FUN_144188cee(void)

void FUN_144188cee(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((char)param_1[4] == '\x01') {
    FUN_140b3d268(*param_1,param_1 + 1);
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    lVar1 = *param_1;
    lVar2 = param_1[5];
    if ((*(char *)(lVar1 + 0x178) == '\x03') || ((*(byte *)(lVar1 + 0x60) & 1) != 0)) {
      *(int *)(lVar1 + 0x1154) = (int)lVar2;
      *(byte *)(lVar1 + 0x1151) = *(byte *)(lVar1 + 0x1151) | 2;
      if (*(longlong *)(lVar1 + 0xe38) != 0) {
        *(int *)(*(longlong *)(lVar1 + 0xe38) + 0x1a8) = (int)lVar2;
      }
    }
  }
  FUN_14113775c(*param_1,&DAT_14c846480,1,0,0);
  return;
}



// FUNCTION 144188d6c FUN_144188d6c body=110 status=ok
// SIG undefined FUN_144188d6c(void)

undefined8 * FUN_144188d6c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b978330;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x28);
  *(char *)(puVar3 + 5) = cVar1;
  if (cVar1 == '\x01') {
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
  }
  cVar1 = *(char *)(param_1 + 0x34);
  *(char *)((longlong)puVar3 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_1 + 0x30);
  }
  return puVar3 + 1;
}



// FUNCTION 144188de0 FUN_144188de0 body=29 status=ok
// SIG undefined FUN_144188de0(void)

void FUN_144188de0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144188dfe FUN_144188dfe body=59 status=ok
// SIG undefined FUN_144188dfe(void)

undefined8 * FUN_144188dfe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b978330;
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144188e3a FUN_144188e3a body=286 status=ok
// SIG undefined FUN_144188e3a(void)

void FUN_144188e3a(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = *param_1;
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_140b3d268(param_1[2],param_1 + 3);
  }
  if (0.0001 < *(float *)(param_1 + 8)) {
    FUN_1411a6e9c(param_1[2]);
  }
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    lVar5 = param_1[2];
    uVar1 = *(undefined4 *)(param_1 + 7);
    if ((*(char *)(lVar5 + 0x178) == '\x03') || ((*(byte *)(lVar5 + 0x60) & 1) != 0)) {
      *(undefined4 *)(lVar5 + 0x1154) = uVar1;
      *(byte *)(lVar5 + 0x1151) = *(byte *)(lVar5 + 0x1151) | 2;
      if (*(longlong *)(lVar5 + 0xe38) != 0) {
        *(undefined4 *)(*(longlong *)(lVar5 + 0xe38) + 0x1a8) = uVar1;
      }
    }
  }
  FUN_14113775c(param_1[2],&DAT_14c846480,1,0,0);
  lVar5 = param_1[2];
  lVar4 = FUN_140f1f93e();
  if (((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) && (*(int *)((longlong)param_1 + 0xc) != 0)) &&
      ((uVar2 = *(uint *)(param_1 + 1), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) &&
     ((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
      ((*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0xc) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
    FUN_148d6127c(uVar3,param_1[2]);
    return;
  }
  return;
}



// FUNCTION 144188f58 FUN_144188f58 body=128 status=ok
// SIG undefined FUN_144188f58(void)

undefined8 * FUN_144188f58(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b9783a0;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  cVar1 = *(char *)(param_1 + 0x38);
  *(char *)(puVar3 + 7) = cVar1;
  if (cVar1 == '\x01') {
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = uVar2;
  }
  cVar1 = *(char *)(param_1 + 0x44);
  *(char *)((longlong)puVar3 + 0x44) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(param_1 + 0x40);
  }
  *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(param_1 + 0x48);
  return puVar3 + 1;
}



// FUNCTION 144188fde FUN_144188fde body=29 status=ok
// SIG undefined FUN_144188fde(void)

void FUN_144188fde(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144188ffc FUN_144188ffc body=59 status=ok
// SIG undefined FUN_144188ffc(void)

undefined8 * FUN_144188ffc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9783a0;
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144189038 FUN_144189038 body=156 status=ok
// SIG undefined FUN_144189038(void)

void FUN_144189038(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_1[1])) &&
       (lVar2 = *param_2, (*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      lVar3 = *plVar5;
      if (lVar2 != 0 && lVar3 != 0) {
        uVar4 = FUN_140840456();
        plVar5 = (longlong *)FUN_144718840(lVar2,uVar4);
        if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441890c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar3 + 0x3f0,*(code **)(*plVar5 + 0x18));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1441890fe FUN_1441890fe body=29 status=ok
// SIG undefined FUN_1441890fe(void)

undefined8 FUN_1441890fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418911c FUN_14418911c body=29 status=ok
// SIG undefined FUN_14418911c(void)

undefined8 FUN_14418911c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441892b8 FUN_1441892b8 body=93 status=ok
// SIG undefined FUN_1441892b8(void)

void FUN_1441892b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9783e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144189316 FUN_144189316 body=93 status=ok
// SIG undefined FUN_144189316(void)

void FUN_144189316(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9783e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144189374 FUN_144189374 body=126 status=ok
// SIG undefined FUN_144189374(void)

void FUN_144189374(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9783e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441893e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441893fc FUN_1441893fc body=275 status=ok
// SIG undefined FUN_1441893fc(void)

undefined8 FUN_1441893fc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144189509;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144189509;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144189509:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441894ab;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d6127c(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1441894ab;
    }
  }
  uVar6 = 0;
LAB_1441894ab:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144189524 FUN_144189524 body=223 status=ok
// SIG undefined FUN_144189524(void)

uint FUN_144189524(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_30);
  FUN_1400021e4(param_1,&local_40);
  puVar5 = local_30;
  if (local_28 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  lVar6 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar7 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14418959b;
      }
      uVar4 = uVar4 - uVar7;
      goto LAB_1441895c4;
    }
    if (uVar1 == 0) break;
LAB_14418959b:
    lVar6 = lVar6 + 2;
  }
  uVar4 = 0;
LAB_1441895c4:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144189604 FUN_144189604 body=901 status=ok
// SIG undefined FUN_144189604(void)

void FUN_144189604(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined1 local_210 [4];
  char local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined1 local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  char local_a8;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_248 = 0.0;
  dStack_240 = 0.0;
  local_258 = 0;
  dStack_250 = 0.0;
  local_268 = 0;
  uStack_260 = 0;
  local_238 = 1;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_218 = 1;
  FUN_141035d0a(*(undefined8 *)*param_1,param_1[1],&local_268);
  local_208 = ZEXT816(0);
  local_1f8._0_12_ = ZEXT812(0);
  local_1f8._12_4_ = 0x3ff00000;
  local_1c8 = 0x3ff0000000000000;
  uStack_1c0 = 0x3ff0000000000000;
  local_1b8 = 0x3ff0000000000000;
  uStack_1b0 = 0;
  local_18c = DAT_14cb7bd68;
  local_184 = DAT_14cb7bd70;
  local_180 = DAT_14cb7bd80;
  local_178 = DAT_14cb7bd88;
  local_174 = 0;
  uStack_16c = 0;
  local_164 = 0;
  uStack_15c = 0;
  local_154 = 0;
  local_150 = 0xffffffff;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0;
  uVar10 = SUB84(dStack_250,0);
  uVar11 = (undefined4)((ulonglong)dStack_250 >> 0x20);
  uVar8 = SUB84(local_248,0);
  uVar9 = (undefined4)((ulonglong)local_248 >> 0x20);
  local_a8 = '\0';
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  local_1e8 = local_268;
  uStack_1e0 = uStack_260;
  local_1d8 = local_258;
  uStack_1d0 = 0;
  dVar4 = 0.0;
  if ((((dStack_250 != 0.0) || (NAN(dStack_250))) || (local_248 != 0.0)) || (NAN(local_248))) {
    dVar4 = atan2(local_248,dStack_250);
    dVar4 = dVar4 * 0.5;
    uVar10 = SUB84(dStack_250,0);
    uVar11 = (undefined4)((ulonglong)dStack_250 >> 0x20);
    uVar8 = SUB84(local_248,0);
    uVar9 = (undefined4)((ulonglong)local_248 >> 0x20);
  }
  dVar7 = SQRT((double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar11,uVar10) +
               (double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar9,uVar8));
  dVar5 = 0.0;
  if (((dStack_240 != 0.0) || (NAN(dStack_240))) || ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2(dStack_240,dVar7);
    dVar5 = dVar5 * 0.5;
  }
  dVar7 = sin(dVar5);
  dVar5 = cos(dVar5);
  dVar6 = sin(dVar4);
  dVar4 = cos(dVar4);
  local_208._8_4_ = SUB84(-dVar7 * dVar4,0);
  local_208._0_8_ = dVar7 * dVar6;
  local_208._12_4_ = (int)((ulonglong)(-dVar7 * dVar4) >> 0x20);
  local_1f8._8_4_ = SUB84(dVar5 * dVar4,0);
  local_1f8._0_8_ = dVar6 * dVar5;
  local_1f8._12_4_ = (int)((ulonglong)(dVar5 * dVar4) >> 0x20);
  local_198 = local_220;
  local_1a8 = local_230;
  uStack_1a0 = uStack_228;
  local_190 = (float)SQRT(dStack_240 * dStack_240 + dStack_250 * dStack_250 + local_248 * local_248)
  ;
  (**(code **)(**(longlong **)param_1[2] + 0x10))(*(longlong **)param_1[2],local_210,param_2 + 8);
  if (local_20c == '\x01') {
    local_20c = '\0';
  }
  plVar2 = (longlong *)param_1[3];
  uVar8 = *(undefined4 *)(param_2 + 0xe8);
  uVar9 = *(undefined4 *)(param_2 + 0xf8);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_148d69a5a(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 8) = uVar9;
  *(undefined4 *)(lVar3 + 4 + (longlong)iVar1 * 8) = uVar8;
  if (local_a8 == '\x01') {
    local_a8 = '\0';
  }
  if (lStack_130 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418998a FUN_14418998a body=70 status=ok
// SIG undefined FUN_14418998a(void)

undefined8 * FUN_14418998a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b978500;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1441899d6 FUN_1441899d6 body=29 status=ok
// SIG undefined FUN_1441899d6(void)

void FUN_1441899d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1441899f4 FUN_1441899f4 body=29 status=ok
// SIG undefined FUN_1441899f4(void)

undefined8 FUN_1441899f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144189a12 FUN_144189a12 body=27 status=ok
// SIG undefined FUN_144189a12(void)

void FUN_144189a12(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1415b54d6(param_2);
  *(int *)*param_1 = *(int *)*param_1 + iVar1;
  return;
}



// FUNCTION 144189a58 FUN_144189a58 body=29 status=ok
// SIG undefined FUN_144189a58(void)

undefined8 FUN_144189a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144189ab0 FUN_144189ab0 body=29 status=ok
// SIG undefined FUN_144189ab0(void)

undefined8 FUN_144189ab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144189ace FUN_144189ace body=29 status=ok
// SIG undefined FUN_144189ace(void)

undefined8 FUN_144189ace(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144189c6a FUN_144189c6a body=93 status=ok
// SIG undefined FUN_144189c6a(void)

void FUN_144189c6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9777d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144189cc8 FUN_144189cc8 body=93 status=ok
// SIG undefined FUN_144189cc8(void)

void FUN_144189cc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9777d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144189d26 FUN_144189d26 body=126 status=ok
// SIG undefined FUN_144189d26(void)

void FUN_144189d26(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9777d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978560;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144189d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144189dae FUN_144189dae body=273 status=ok
// SIG undefined FUN_144189dae(void)

undefined8 FUN_144189dae(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144189eb9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144189eb9;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144189eb9:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144189e5c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d64108(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_144189e5c;
    }
  }
  uVar6 = 0;
LAB_144189e5c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144189ed4 FUN_144189ed4 body=29 status=ok
// SIG undefined FUN_144189ed4(void)

undefined8 FUN_144189ed4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418a070 FUN_14418a070 body=101 status=ok
// SIG undefined FUN_14418a070(void)

void FUN_14418a070(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9786b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418a0d6 FUN_14418a0d6 body=101 status=ok
// SIG undefined FUN_14418a0d6(void)

void FUN_14418a0d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9786b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418a13c FUN_14418a13c body=134 status=ok
// SIG undefined FUN_14418a13c(void)

void FUN_14418a13c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9786b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014418a1b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418a1cc FUN_14418a1cc body=269 status=ok
// SIG undefined FUN_14418a1cc(void)

undefined8 FUN_14418a1cc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14418a2d3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418a2d3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14418a2d3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418a287;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14418a2da(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14418a287;
    }
  }
  uVar6 = 0;
LAB_14418a287:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418a2da FUN_14418a2da body=146 status=ok
// SIG undefined FUN_14418a2da(void)

void FUN_14418a2da(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && (lVar1 = param_1[1], *(longlong *)(lVar1 + 0x960) != 0)) {
    cVar2 = FUN_140226bbe(*(undefined8 *)(lVar1 + 0xac8));
    if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
    local_38 = 0;
    FUN_140b32deb(local_28,*(undefined8 *)(lVar1 + 0xac8),*(longlong *)(lVar1 + 0x960) + 0x98,0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418a37c FUN_14418a37c body=29 status=ok
// SIG undefined FUN_14418a37c(void)

undefined8 FUN_14418a37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418a518 FUN_14418a518 body=101 status=ok
// SIG undefined FUN_14418a518(void)

void FUN_14418a518(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418a57e FUN_14418a57e body=101 status=ok
// SIG undefined FUN_14418a57e(void)

void FUN_14418a57e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418a5e4 FUN_14418a5e4 body=134 status=ok
// SIG undefined FUN_14418a5e4(void)

void FUN_14418a5e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978720;
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
                    /* WARNING: Could not recover jumptable at 0x00014418a65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418a674 FUN_14418a674 body=269 status=ok
// SIG undefined FUN_14418a674(void)

undefined8 FUN_14418a674(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14418a77b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418a77b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14418a77b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418a72f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14418a782(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14418a72f;
    }
  }
  uVar6 = 0;
LAB_14418a72f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418a782 FUN_14418a782 body=146 status=ok
// SIG undefined FUN_14418a782(void)

void FUN_14418a782(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && (lVar1 = param_1[1], *(longlong *)(lVar1 + 0x960) != 0)) {
    cVar2 = FUN_140226bbe(*(undefined8 *)(lVar1 + 0xac8));
    if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
    local_38 = 0;
    FUN_140b32deb(local_28,*(undefined8 *)(lVar1 + 0xac8),*(longlong *)(lVar1 + 0x960) + 200,0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418a824 FUN_14418a824 body=29 status=ok
// SIG undefined FUN_14418a824(void)

undefined8 FUN_14418a824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418a9c0 FUN_14418a9c0 body=101 status=ok
// SIG undefined FUN_14418a9c0(void)

void FUN_14418a9c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b404040;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418aa26 FUN_14418aa26 body=101 status=ok
// SIG undefined FUN_14418aa26(void)

void FUN_14418aa26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b404040;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418aa8c FUN_14418aa8c body=134 status=ok
// SIG undefined FUN_14418aa8c(void)

void FUN_14418aa8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b404040;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978790;
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
                    /* WARNING: Could not recover jumptable at 0x00014418ab03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418ab12 FUN_14418ab12 body=66 status=ok
// SIG undefined FUN_14418ab12(void)

void FUN_14418ab12(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_14418ac78(param_1 + 0x20,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418ab56 FUN_14418ab56 body=288 status=ok
// SIG undefined FUN_14418ab56(void)

undefined8 FUN_14418ab56(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14418ac70;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418ac70;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14418ac70:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418ac23;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14418ac78(param_1 + 0x20,param_2,&local_34);
      uVar6 = 1;
      goto LAB_14418ac23;
    }
  }
  uVar6 = 0;
LAB_14418ac23:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418ac78 FUN_14418ac78 body=1041 status=ok
// SIG undefined FUN_14418ac78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14418ac78(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_1 == 0) goto LAB_14418afa1;
  iVar1 = *param_3;
  lVar2 = param_1[1];
  lVar6 = FUN_1447210f0(lVar2);
  if (lVar6 != 0) {
    *(float *)(lVar2 + 0xab4) = (float)*(double *)(lVar6 + 0x6d0);
  }
  lVar6 = FUN_14008e0ae(param_2);
  auVar4 = _DAT_149931e80;
  if ((longlong)*(int *)(lVar2 + 0x980) != 0) {
    fVar14 = (float)(*(int *)(lVar6 + 0x48) - iVar1) / (float)*(int *)(lVar6 + 0x48);
    uVar7 = (longlong)*(int *)(lVar2 + 0x980) * 0x70 - 0x70U >> 4;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar7;
    auVar15._8_4_ = SUB164(auVar16 * ZEXT816(0x2492492492492493),8);
    auVar15._0_8_ = uVar7 / 7;
    auVar15._12_4_ = (int)(uVar7 / 0x700000000);
    pfVar10 = (float *)(*(longlong *)(lVar2 + 0x978) + 0x1b8);
    uVar12 = 0;
    auVar16 = pmovsxbq(in_XMM2,0x302);
    auVar17 = pmovsxbq(in_XMM3,0x100);
    auVar15 = auVar15 | _DAT_149931e80;
    do {
      lVar6 = auVar15._0_8_;
      lVar8 = auVar15._8_8_;
      if ((bool)(~(lVar6 < (longlong)(uVar12 ^ auVar4._0_8_)) & 1)) {
        pfVar10[-0x54] = fVar14;
      }
      auVar18._8_4_ = (int)uVar12;
      auVar18._0_8_ = uVar12;
      auVar18._12_4_ = (int)(uVar12 >> 0x20);
      if ((longlong)((auVar18._8_8_ | auVar17._8_8_) ^ auVar4._8_8_) <= lVar8) {
        pfVar10[-0x38] = fVar14;
      }
      auVar18 = (auVar18 | auVar16) ^ auVar4;
      if (auVar18._0_8_ <= lVar6) {
        pfVar10[-0x1c] = fVar14;
      }
      if (auVar18._8_8_ <= lVar8) {
        *pfVar10 = fVar14;
      }
      uVar12 = uVar12 + 4;
      pfVar10 = pfVar10 + 0x70;
    } while ((uVar7 / 7 + 4 & 0xfffffffffffffffc) != uVar12);
  }
  FUN_1418ea0a6(lVar2,lVar2 + 0x978,lVar2 + 0x988);
  lVar6 = *(longlong *)(lVar2 + 0xaa0);
  if (iVar1 < 1) {
    if (lVar6 != 0) {
      FUN_141334676(lVar2,lVar6 + 0xa8);
      lVar6 = (**(code **)(**(longlong **)(lVar2 + 0xac8) + 0x5d8))();
      if (lVar6 != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x430);
        if (lVar8 == 0) {
LAB_14418b083:
          lVar6 = 0;
        }
        else {
          if (DAT_14cae9568 == 0) {
            local_80 = &local_68;
            local_68 = FUN_1417de738;
            local_70 = &LAB_145893408;
            local_78 = &LAB_1458cbbd2;
            local_88 = &LAB_147ba21f1;
            local_90 = &LAB_1463e9233;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x1000000c;
            local_b0 = 8;
            local_b8 = CONCAT44(local_b8._4_4_,0x2b8);
            FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            lVar8 = *(longlong *)(lVar6 + 0x430);
            if (lVar8 == 0) goto LAB_14418b083;
          }
          lVar6 = 0;
          if ((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 != 0)) {
            if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_14418b083;
            lVar6 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                DAT_14cae9568 + 0x30) {
              lVar6 = lVar8;
            }
          }
        }
        lVar6 = FUN_1404960a8(lVar6);
        if (lVar6 != 0) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar9 = &PTR_FUN_14b977838;
          *(undefined1 *)(puVar9 + 1) = 2;
          FUN_14039144e(lVar6,puVar9);
        }
      }
    }
    cVar5 = FUN_140226bbe(*(undefined8 *)(lVar2 + 0xac8));
    if (cVar5 != '\0') {
      lVar6 = *(longlong *)(lVar2 + 0xa98) + 0xb8;
      uVar11 = *(undefined8 *)(lVar2 + 0xac8);
      goto LAB_14418af45;
    }
    uVar11 = *(undefined8 *)(lVar2 + 0xac8);
    uVar13 = 7;
LAB_14418af7e:
    FUN_1413347e6(uVar11,uVar13);
  }
  else {
    if (lVar6 != 0) {
      FUN_141334676(lVar2,lVar6 + 0x90);
    }
    cVar5 = FUN_140226bbe(*(undefined8 *)(lVar2 + 0xac8));
    if (cVar5 == '\0') {
      uVar11 = *(undefined8 *)(lVar2 + 0xac8);
      uVar13 = 5;
      goto LAB_14418af7e;
    }
    uVar11 = *(undefined8 *)(lVar2 + 0xac8);
    lVar6 = *(longlong *)(lVar2 + 0xa98) + 0x58;
LAB_14418af45:
    local_b8 = 0;
    FUN_140b32deb(&local_68,uVar11,lVar6,0);
    local_68 = (code *)0x0;
    local_60 = 0xffffffffffffffff;
  }
  FUN_1447f69b6(*param_1 + 0x5048);
  FUN_1447cd2ec(lVar2 + 0x950,0);
LAB_14418afa1:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14418b08a FUN_14418b08a body=29 status=ok
// SIG undefined FUN_14418b08a(void)

undefined8 FUN_14418b08a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418b226 FUN_14418b226 body=101 status=ok
// SIG undefined FUN_14418b226(void)

void FUN_14418b226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b404040;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418b28c FUN_14418b28c body=101 status=ok
// SIG undefined FUN_14418b28c(void)

void FUN_14418b28c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b404040;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14418b2f2 FUN_14418b2f2 body=134 status=ok
// SIG undefined FUN_14418b2f2(void)

void FUN_14418b2f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b404040;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978800;
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
                    /* WARNING: Could not recover jumptable at 0x00014418b369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418b378 FUN_14418b378 body=66 status=ok
// SIG undefined FUN_14418b378(void)

void FUN_14418b378(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_14418b4de(param_1 + 0x20,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418b3bc FUN_14418b3bc body=288 status=ok
// SIG undefined FUN_14418b3bc(void)

undefined8 FUN_14418b3bc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14418b4d6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418b4d6;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14418b4d6:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418b489;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14418b4de(param_1 + 0x20,param_2,&local_34);
      uVar6 = 1;
      goto LAB_14418b489;
    }
  }
  uVar6 = 0;
LAB_14418b489:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418b4de FUN_14418b4de body=603 status=ok
// SIG undefined FUN_14418b4de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14418b4de(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 != 0) {
    iVar1 = *param_3;
    lVar2 = param_1[1];
    uVar6 = FUN_14008e0ae(param_2);
    iVar5 = FUN_141022daa(uVar6);
    lVar7 = FUN_14008e0ae(param_2);
    auVar3 = _DAT_149931e80;
    if ((longlong)*(int *)(lVar2 + 0x980) != 0) {
      fVar12 = (float)(*(int *)(lVar7 + 0x48) - iVar5) / (float)*(int *)(lVar7 + 0x48);
      uVar8 = (longlong)*(int *)(lVar2 + 0x980) * 0x70 - 0x70U >> 4;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar8;
      auVar13._8_4_ = SUB164(auVar14 * ZEXT816(0x2492492492492493),8);
      auVar13._0_8_ = uVar8 / 7;
      auVar13._12_4_ = (int)(uVar8 / 0x700000000);
      pfVar9 = (float *)(*(longlong *)(lVar2 + 0x978) + 0x1b8);
      uVar10 = 0;
      auVar14 = pmovsxbq(in_XMM2,0x302);
      auVar15 = pmovsxbq(in_XMM3,0x100);
      auVar13 = auVar13 | _DAT_149931e80;
      do {
        lVar7 = auVar13._0_8_;
        lVar11 = auVar13._8_8_;
        if ((bool)(~(lVar7 < (longlong)(uVar10 ^ auVar3._0_8_)) & 1)) {
          pfVar9[-0x54] = fVar12;
        }
        auVar16._8_4_ = (int)uVar10;
        auVar16._0_8_ = uVar10;
        auVar16._12_4_ = (int)(uVar10 >> 0x20);
        if ((longlong)((auVar16._8_8_ | auVar15._8_8_) ^ auVar3._8_8_) <= lVar11) {
          pfVar9[-0x38] = fVar12;
        }
        auVar16 = (auVar16 | auVar14) ^ auVar3;
        if (auVar16._0_8_ <= lVar7) {
          pfVar9[-0x1c] = fVar12;
        }
        if (auVar16._8_8_ <= lVar11) {
          *pfVar9 = fVar12;
        }
        uVar10 = uVar10 + 4;
        pfVar9 = pfVar9 + 0x70;
      } while ((uVar8 / 7 + 4 & 0xfffffffffffffffc) != uVar10);
    }
    FUN_1418ea0a6(lVar2,lVar2 + 0x978,lVar2 + 0x988);
    if (*(longlong *)(lVar2 + 0xaa0) != 0) {
      cVar4 = FUN_1403ae288(lVar2 + 0x9a8);
      if (cVar4 == '\0') {
        lVar7 = lVar2 + 0xa4c;
      }
      else {
        lVar7 = FUN_140280ec4(lVar2 + 0x9a8);
        lVar7 = lVar7 + 0x44;
      }
      lVar11 = 0x78;
      if (iVar1 < *(int *)(lVar7 + 4) + -1) {
        lVar11 = 0x60;
      }
      FUN_141334676(lVar2,lVar11 + *(longlong *)(lVar2 + 0xaa0));
    }
    cVar4 = FUN_140226bbe(*(undefined8 *)(lVar2 + 0xac8));
    if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
    }
    local_78 = 0;
    FUN_140b32deb(local_68,*(undefined8 *)(lVar2 + 0xac8),*(longlong *)(lVar2 + 0xa98) + 0x88,0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418b756 FUN_14418b756 body=29 status=ok
// SIG undefined FUN_14418b756(void)

undefined8 FUN_14418b756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418b8f2 FUN_14418b8f2 body=93 status=ok
// SIG undefined FUN_14418b8f2(void)

void FUN_14418b8f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418b950 FUN_14418b950 body=93 status=ok
// SIG undefined FUN_14418b950(void)

void FUN_14418b950(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418b9ae FUN_14418b9ae body=126 status=ok
// SIG undefined FUN_14418b9ae(void)

void FUN_14418b9ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978870;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014418ba1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418ba36 FUN_14418ba36 body=269 status=ok
// SIG undefined FUN_14418ba36(void)

undefined8 FUN_14418ba36(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14418bb3d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418bb3d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14418bb3d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418baf1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14418bb44(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14418baf1;
    }
  }
  uVar6 = 0;
LAB_14418baf1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418bb44 FUN_14418bb44 body=256 status=ok
// SIG undefined FUN_14418bb44(void)

void FUN_14418bb44(longlong *param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  lVar4 = *param_1;
  plVar6 = *(longlong **)(lVar4 + 0x9f0);
  if ((plVar6 != (longlong *)0x0) && (*(int *)(lVar4 + 0x9ec) != 0)) {
    puVar1 = (uint *)(lVar4 + 0x9e8);
    uVar3 = *puVar1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(lVar4 + 0x9ec))) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar6 = plVar6 + 0xd9;
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
        }
        cVar5 = FUN_14486eb0e(plVar6,puVar1);
        if (cVar5 != '\0') {
          lVar7 = FUN_14008e0ae(puVar1);
          fVar2 = *(float *)(lVar7 + 200);
          lVar7 = FUN_14008e0ae(puVar1);
          if ((*(longlong *)(lVar7 + 0x18) == 0) ||
             (*(char *)(*(longlong *)(lVar7 + 0x18) + 0x18) != '\x01')) {
            fVar8 = *(float *)(lVar7 + 0x30);
          }
          else {
            auVar9 = roundps(ZEXT416(*(uint *)(lVar7 + 0x30)),ZEXT416(*(uint *)(lVar7 + 0x30)),3);
            fVar8 = auVar9._0_4_;
          }
          if (fVar8 <= fVar2) {
            FUN_1414f47be(lVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14418bc44 FUN_14418bc44 body=29 status=ok
// SIG undefined FUN_14418bc44(void)

undefined8 FUN_14418bc44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14418bde0 FUN_14418bde0 body=93 status=ok
// SIG undefined FUN_14418bde0(void)

void FUN_14418bde0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418be3e FUN_14418be3e body=93 status=ok
// SIG undefined FUN_14418be3e(void)

void FUN_14418be3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14418be9c FUN_14418be9c body=126 status=ok
// SIG undefined FUN_14418be9c(void)

void FUN_14418be9c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978950;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014418bf0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14418bf24 FUN_14418bf24 body=266 status=ok
// SIG undefined FUN_14418bf24(void)

undefined8 FUN_14418bf24(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14418c028;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14418c028;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14418c028:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418bfdc;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1414f47be(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14418bfdc;
    }
  }
  uVar6 = 0;
LAB_14418bfdc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418c02f FUN_14418c02f body=6223 status=ok
// SIG undefined FUN_14418c02f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14418c02f(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  wchar_t **local_78;
  ulonglong *local_70;
  wchar_t *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (wchar_t **)0x149fca2ba;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb7b8 = (ulonglong)uVar2;
  _DAT_14cbcb7c0 = 0x47efffffe0000000;
  _DAT_14cbcb7c8 = 0x47efffffe0000000;
  _DAT_14cbcb7d0 = 0x47efffffe0000000;
  _DAT_14cbcb7d8 = 0x47efffffe0000000;
  _DAT_14cbcb7e0 = 0x47efffffe0000000;
  _DAT_14cbcb7e8 = 0x47efffffe0000000;
  _DAT_14cbcb7f0 = 0x47efffffe0000000;
  _DAT_14cbcb7f8 = 0x47efffffe0000000;
  local_78 = (wchar_t **)&DAT_14a19662d;
  local_70._0_5_ = 4;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)&DAT_14b4871e8;
  local_70._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcb800 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14ac8da14;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb808 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4871ec;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb810 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbcb818);
  if (cVar1 == '\0') {
    _DAT_14cbcb818 = 0;
    uRam000000014cbcb820 = 0;
  }
  if (local_78 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbcb82c = 0;
  FUN_14052b5e0(&DAT_14cbcb828,"PlayerAwareness",0);
  _DAT_14cbcb838 = "PlayerAwareness";
  local_78 = (wchar_t **)0x14b604105;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb840 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60410b;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb848 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b507318;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb850 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604115;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb858 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14a1774ea;
  local_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb860 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60411c;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb868 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604127;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb870 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4102b8;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb878 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b604134;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb880 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604139;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb888 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604141;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb890 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60414a;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb898 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60415f;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8a0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b604174;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8a8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60417f;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60418e;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8b8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b60419d;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8c0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b6041b2;
  local_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8c8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b6041c8;
  local_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb8d0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcb8d8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441783c4);
  FUN_140056680(&DAT_14cbcb8e8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441783d5);
  FUN_140056680(&DAT_14cbcb8f8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1441783e6);
  FUN_140056680(&DAT_14cbcb908,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1441783f7);
  FUN_1446f470e(&DAT_14cbcb918,L"LIMB_GORED",1);
  _DAT_14cbcb920 = 0x4072c00000000000;
  _DAT_14cbcb928 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcb930,L"body",1);
  FUN_1446f470e(&DAT_14cbcb938,L"title_card",1);
  local_78 = (wchar_t **)&DAT_14b4871e8;
  local_70._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcb940 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b677960;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb948 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b677968;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcb950 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b677975;
  local_70._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb958 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b6040ec;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcb960 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcb968,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144179b74);
  FUN_1446f470e(&DAT_14cbcb978,L"UNSET",1);
  local_78 = (wchar_t **)&DAT_14b3f27c8;
  local_70._0_5_ = 4;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)0x14b6041d4;
  local_70._0_5_ = 6;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)0x14b6041db;
  local_70._0_5_ = 0xd;
  FUN_14001a6c0(&local_78,1);
  local_78 = (wchar_t **)0x14b6041e9;
  local_70._0_5_ = 6;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbcb980,L"Party",1);
  FUN_1446f470e(&DAT_14cbcb988,&DAT_149e063b2);
  local_78 = (wchar_t **)&DAT_14b976eee;
  local_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcb990 = (ulonglong)uVar2;
  _DAT_14cbcb99c = 0;
  FUN_14052b5e0(&DAT_14cbcb998,"grenade",0);
  _DAT_14cbcb9a8 = "grenade";
  FUN_1446f470e(&DAT_14cbcbb68,L"GrenadeGadget",1);
  local_78 = (wchar_t **)0x14b976f5a;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbb70 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976f68;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbb78 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976f76;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbb80 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976f84;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbb88 = (ulonglong)uVar2;
  FUN_14662b520();
  atexit((_func_5014 *)&LAB_14417d737);
  FUN_1446f470e(&DAT_14cbcbc30,L"BlockAllProjectile",1);
  local_78 = (wchar_t **)0x14b977187;
  local_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbc38 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977197;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbc40 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9771a9;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbc48 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9771b7;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbc50 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9771c6;
  local_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbc58 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcbc60,"barrier");
  atexit((_func_5014 *)&LAB_14417ed04);
  FUN_1446f470e(&DAT_14cbcbc70,L"Switch_Dome",1);
  _DAT_14cbcbc78 = 0xffffffff;
  FUN_1446f470e(&DAT_14cbcbc7c,L"Switch_Barrier",1);
  _DAT_14cbcbc84 = 0xffffffff;
  local_78 = (wchar_t **)&DAT_14b97721c;
  local_70._0_5_ = 2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbc88 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b977254;
  local_70._0_5_ = 2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbc90 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977257;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcbc98 = (ulonglong)uVar2;
  DAT_14cbcbca4._0_4_ = 0;
  DAT_14cbcbca4._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcbca0,"body_acc",0);
  _DAT_14cbcbcb0 = "body_acc";
  DAT_14cbcbcbc._0_4_ = 0;
  DAT_14cbcbcbc._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcbcb8,"barrel",0);
  _DAT_14cbcbcc8 = "barrel";
  DAT_14cbcbcd4._0_4_ = 0;
  DAT_14cbcbcd4._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcbcd0,"barrel_acc",0);
  _DAT_14cbcbce0 = "barrel_acc";
  local_78 = (wchar_t **)0x14b977339;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbce8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977343;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbcf0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b97734d;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbcf8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977358;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd00 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977363;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd08 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b97736e;
  local_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd10 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977379;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd18 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977386;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd20 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977393;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd28 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9773a0;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,0xc);
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcbd30 = (ulonglong)uVar2;
  _DAT_14cbcbd40 = &LAB_144181d2a;
  _DAT_14cbcbd48 = 0x45001000;
  DAT_14cbcbd4c = 1;
  DAT_14cbcbd38 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcbd38;
  atexit((_func_5014 *)&LAB_144181d2f);
  _DAT_14cbcbd60 = &LAB_144181d63;
  _DAT_14cbcbd68 = 0x4500119a;
  DAT_14cbcbd6c = 1;
  DAT_14cbcbd58 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcbd58;
  atexit((_func_5014 *)&LAB_144181d68);
  DAT_14cbcbd78._4_4_ = 0;
  DAT_14cbcbd80 = 0;
  FUN_14052b5e0(&DAT_14cbcbd78,&DAT_14b978ebf,0);
  _DAT_14cbcbd88 = &DAT_14b978ebf;
  _DAT_14cbcbd94 = 0;
  _DAT_14cbcbd98 = 0;
  FUN_14052b5e0(&DAT_14cbcbd90,"max_ammo",0);
  _DAT_14cbcbda0 = "max_ammo";
  _DAT_14cbcbda8 = L"OakGame.EOakEquipmentAction";
  _DAT_14cbcbdb0 = &DAT_14c872af8;
  _DAT_14cbcbdb8 = L"OakEquipmentAction";
  _DAT_14cbcbdc0 = 0;
  uRam000000014cbcbdc8 = 0;
  _DAT_14cbcbdd0 = 0;
  uRam000000014cbcbdd8 = 0;
  _DAT_14cbcbdd9 = 0;
  uRam000000014cbcbde0 = 0;
  uRam000000014cbcbde1 = 0;
  atexit((_func_5014 *)&LAB_144181d9c);
  DAT_14cbcbdf0 = 0;
  atexit((_func_5014 *)&LAB_144181e01);
  local_78 = (wchar_t **)0x14b97748e;
  local_70._0_4_ = 0xc;
  FUN_1446e940c(&local_68,&local_78);
  local_78 = (wchar_t **)0x14b76c5f0;
  local_70._0_4_ = 0x13;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = (wchar_t **)0x149e1e908;
  local_70._0_4_ = 7;
  FUN_140208c1e(&DAT_14cbcc608,local_7c,&local_68,&local_78);
  atexit((_func_5014 *)&LAB_144181e19);
  FUN_1446f470e(&DAT_14cbccb60,L"InventoryChannel",1);
  local_78 = (wchar_t **)0x14b63ee18;
  local_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc618 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b4aa9e8;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc620 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b9774ce;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,0x13);
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc628 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcc630,L"Invalid");
  atexit((_func_5014 *)&LAB_144182282);
  local_78 = (wchar_t **)0x14b97748e;
  local_70._0_4_ = 0xc;
  FUN_1446e940c(&local_68,&local_78);
  local_78 = (wchar_t **)0x14b9774e2;
  local_70._0_4_ = 0x11;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = (wchar_t **)0x149e1e908;
  local_70._0_4_ = 7;
  FUN_140208c1e(&DAT_14cbcc640,local_7c,&local_68,&local_78);
  atexit((_func_5014 *)&LAB_144182293);
  local_78 = (wchar_t **)0x14b4aa9e8;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbccb58 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976f5a;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc668 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976f68;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc670 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976f76;
  local_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc678 = (ulonglong)uVar2;
  local_78 = (wchar_t **)&DAT_14b4871e8;
  local_70._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc680 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977538;
  local_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc688 = (ulonglong)uVar2;
  DAT_14cbcc694._0_4_ = 0;
  DAT_14cbcc694._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcc690,"primary_augment",0);
  _DAT_14cbcc6a0 = "primary_augment";
  DAT_14cbcc6ac._0_4_ = 0;
  DAT_14cbcc6ac._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcc6a8,"secondary_augment",0);
  _DAT_14cbcc6b8 = "secondary_augment";
  local_78 = (wchar_t **)0x14b976c0d;
  local_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc6c0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976c24;
  local_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc6c8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b976c3d;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc6d0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b97753f;
  local_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc6d8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b97754e;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc6e0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b977563;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcc6e8 = (ulonglong)uVar2;
  DAT_14cbcc790 = 0;
  atexit((_func_5014 *)&LAB_144183a80);
  FUN_1446f470e(&DAT_14cbcc870,L"primary_augment",1);
  FUN_1446f470e(&DAT_14cbcc878,L"secondary_augment",1);
  local_78 = (wchar_t **)0x14b7bcce0;
  local_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc880 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b7bcce9;
  local_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc888 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b7bccf6;
  local_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc890 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b7bcd0e;
  local_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc898 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b7bcd20;
  local_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc8a0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcc8a8,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_144183dcb);
  _DAT_14cbcc8b8 = 0;
  uRam000000014cbcc8c0 = 0;
  _DAT_14cbcc8c8 = 0;
  DAT_14cbcc8d0 = 0;
  uRam000000014cbcc8d8 = 0;
  FUN_1446ddda2(&DAT_14cbcc8b8,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_144183ddc);
  _DAT_14cbcc8e0 = 0;
  uRam000000014cbcc8e8 = 0;
  _DAT_14cbcc8f0 = 0;
  DAT_14cbcc8f8 = 0;
  uRam000000014cbcc900 = 0;
  FUN_1446ddda2(&DAT_14cbcc8e0,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_144183ded);
  _DAT_14cbcc908 = 0;
  uRam000000014cbcc910 = 0;
  _DAT_14cbcc918 = 0;
  DAT_14cbcc920 = 0;
  uRam000000014cbcc928 = 0;
  FUN_1446ddda2(&DAT_14cbcc908,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_144183dfe);
  _DAT_14cbcc930 = 0;
  uRam000000014cbcc938 = 0;
  _DAT_14cbcc940 = 0;
  DAT_14cbcc948 = 0;
  uRam000000014cbcc950 = 0;
  FUN_1446ddda2(&DAT_14cbcc930,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144183e0f);
  _DAT_14cbcc958 = 0;
  uRam000000014cbcc960 = 0;
  _DAT_14cbcc968 = 0;
  DAT_14cbcc970 = 0;
  uRam000000014cbcc978 = 0;
  FUN_1446ddda2(&DAT_14cbcc958,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144183e20);
  _DAT_14cbcc980 = 0;
  uRam000000014cbcc988 = 0;
  _DAT_14cbcc990 = 0;
  DAT_14cbcc998 = 0;
  uRam000000014cbcc9a0 = 0;
  FUN_1446ddda2(&DAT_14cbcc980,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144183e31);
  FUN_1446f470e(&DAT_14cbcc9a8,L"HostCharacterDef");
  local_78 = (wchar_t **)0x14b473678;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc9b0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b473682;
  local_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc9b8 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14b47368c;
  local_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc9c0 = (ulonglong)uVar2;
  local_78 = (wchar_t **)0x14a171d3e;
  local_70 = (ulonglong *)CONCAT35(local_70._5_3_,5);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcc9c8 = (ulonglong)uVar2;
  local_68 = L"SkipMovieText";
  _DAT_14cbcc9d0 = 0;
  uRam000000014cbcc9d8 = 0;
  _DAT_14cbcc9e0 = 0;
  DAT_14cbcc9e8 = 0;
  uRam000000014cbcc9f0 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbcc9d0,&local_78,0);
  atexit((_func_5014 *)&LAB_144183e42);
  local_68 = L"PleaseWaitText";
  _DAT_14cbcc9f8 = 0;
  uRam000000014cbcca00 = 0;
  _DAT_14cbcca08 = 0;
  DAT_14cbcca10 = 0;
  uRam000000014cbcca18 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbcc9f8,&local_78,0);
  atexit((_func_5014 *)&LAB_144183e53);
  local_68 = L"TravelingText";
  _DAT_14cbcca20 = 0;
  uRam000000014cbcca28 = 0;
  _DAT_14cbcca30 = 0;
  DAT_14cbcca38 = 0;
  uRam000000014cbcca40 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbcca20,&local_78,0);
  atexit((_func_5014 *)&LAB_144183e64);
  local_68 = L"TitleText";
  _DAT_14cbcca48 = 0;
  uRam000000014cbcca50 = 0;
  _DAT_14cbcca58 = 0;
  DAT_14cbcca60 = 0;
  uRam000000014cbcca68 = 0;
  local_78 = &local_68;
  local_70 = local_60;
  FUN_14584f768(&DAT_14cbcca48,&local_78,0);
  atexit((_func_5014 *)&LAB_144183e75);
  _DAT_14cbcca78 = 0;
  LOCK();
  DAT_14cbcca70 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1441849e1);
  if ((local_60[0] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418d8a2 FUN_14418d8a2 body=228 status=ok
// SIG undefined FUN_14418d8a2(void)

void FUN_14418d8a2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0xa89) < 5) &&
     ((*(byte *)(param_1 + 0xa89) != 4 || (*(longlong *)(param_1 + 0xa60) == 0)))) {
    FUN_140f05dd8(param_1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xc2d);
    FUN_140f05dd8(param_1);
    if ((cVar1 != '\x02') &&
       ((plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x398) + 0x18))(param_1 + 0x398),
        DAT_14cbcd1e0 != 0 && ((longlong)(int)plVar2[1] != 0)))) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*plVar2 + 0x68 + lVar3) == DAT_14cbcd1e0) {
          iVar4 = (int)(lVar3 >> 3) * -0xf0f0f0f;
          if ((iVar4 != -1) && (*plVar2 + (longlong)iVar4 * 0x88 != 0)) {
            FUN_1406549c8(param_1);
          }
          break;
        }
        lVar3 = lVar3 + 0x88;
      } while ((longlong)(int)plVar2[1] * 0x88 != lVar3);
    }
  }
  if (*(char *)(param_1 + 0x28da) != '\x01') {
    return;
  }
  FUN_141460c68(param_1,1);
  return;
}



// FUNCTION 14418d986 FUN_14418d986 body=749 status=ok
// SIG undefined FUN_14418d986(void)

void FUN_14418d986(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14086a01a(param_1 + 0x28f8,0);
  uVar6 = FUN_1447210f0(param_1);
  FUN_140cf8e82(&local_58,uVar6);
  if (local_50 != (longlong *)0x0) {
    iVar4 = (int)local_50[1];
    do {
      if (iVar4 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_50[1];
      bVar15 = iVar4 == iVar2;
      if (bVar15) {
        *(int *)(local_50 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar10 = local_50;
    } while (!bVar15);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    lVar8 = local_58;
    if (plVar10 != (longlong *)0x0) {
      uVar13 = 0;
      if (local_58 != 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar11 = *(uint *)(param_1 + 0xc);
          uVar13 = (ulonglong)uVar11;
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar7 = (ulonglong)*(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar11 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar11);
            }
            LOCK();
            uVar5 = *(uint *)(lVar14 + 0x10);
            bVar15 = uVar5 == 0;
            if (bVar15) {
              *(uint *)(lVar14 + 0x10) = uVar11;
              uVar5 = 0;
            }
            UNLOCK();
            if (bVar15) {
              uVar5 = uVar11;
            }
            uVar7 = (ulonglong)uVar5;
          }
        }
        FUN_1406fc4b8(lVar8,uVar13 | uVar7 << 0x20);
        uVar13 = 0;
      }
      goto LAB_14418da75;
    }
  }
  uVar13 = 1;
  plVar10 = (longlong *)0x0;
LAB_14418da75:
  if ((*(longlong *)(param_1 + 0x28f0) != 0) && (lVar8 = FUN_1447210f0(param_1), lVar8 != 0)) {
    if (*(longlong *)(lVar8 + 0x1f0) == 0) {
      plVar9 = (longlong *)(lVar8 + 0x458);
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
    }
    lVar8 = *(longlong *)(param_1 + 0x28f0);
    if (lVar8 != 0) {
      lVar14 = *plVar9;
      uVar11 = (uint)lVar8;
      if ((int)(uVar11 & 0xffffff) < *(int *)(lVar14 + 0x10)) {
        lVar12 = lVar14 + 0x18;
        if (*(longlong *)(lVar14 + 0x28) != 0) {
          lVar12 = *(longlong *)(lVar14 + 0x28);
        }
        if ((*(uint *)(lVar12 + (ulonglong)((uVar11 & 0xffffff) >> 5) * 4) >> (uVar11 & 0x1f) & 1)
            != 0) {
          lVar14 = *(longlong *)(lVar14 + 8);
          lVar12 = (ulonglong)(uVar11 & 0xffffff) * 0x70;
          if (((lVar14 + lVar12 != 0) && (*(longlong *)(lVar14 + 0x60 + lVar12) == lVar8)) &&
             (*(char *)(lVar14 + 1 + lVar12) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x28f0) = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x2688);
  if (lVar8 != 0) {
    FUN_1418ea6de(&local_60);
    FUN_1410789fe(lVar8 + 0x59e,param_1,local_60);
    lVar8 = *(longlong *)(param_1 + 0x2688);
    FUN_140fe7c88(&local_68);
    FUN_14154d670(lVar8 + 0x598,param_1,local_68);
    lVar8 = *(longlong *)(param_1 + 0x2688);
    FUN_140fe7d3a(&local_70);
    if (*(char *)(lVar8 + 0x59c) == '\x01') {
      FUN_1401892b6(lVar8 + 0x59c,&local_58);
      uVar3 = FUN_14048e8dc(lVar8,local_58,param_1,local_70);
      *(undefined1 *)(lVar8 + 0x59c) = uVar3;
    }
  }
  FUN_140d6119a(param_1,param_2);
  if ((char)uVar13 == '\0') {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14418dc74 FUN_14418dc74 body=628 status=ok
// SIG undefined FUN_14418dc74(void)

void FUN_14418dc74(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  longlong local_dc;
  undefined2 local_d4;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*param_2 == DAT_14cbcd1e0) {
    plVar7 = param_1 + -0x83;
    cVar2 = FUN_1407eda54(*param_3);
    (**(code **)(*param_1 + 0x50))(param_1,&local_a8);
    if (cVar2 != '\0') {
      cVar3 = FUN_1449e2a3e(plVar7);
      if (cVar3 == '\0') {
        cVar3 = (char)param_1[0x112];
      }
      else {
        cVar3 = '\0';
      }
      cVar4 = FUN_1418eb81a(&local_a8);
      if ((cVar4 == '\0' && cVar3 == '\0') && (*(char *)((longlong)param_1 + 0x2232) == '\0')) {
        fVar1 = *(float *)(param_1[0x495] + 0x524);
        if (0.0 < fVar1) {
          uVar5 = FUN_1447210f0(plVar7);
          lVar6 = FUN_14121727a(uVar5);
          if (lVar6 != 0) {
            local_100 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_e4 = 0;
            local_dc = 0xbf80000000000000;
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            local_d4 = 0;
            local_d0 = 0;
            local_cc = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            uStack_b8 = 0;
            local_b0 = 0xbf800000;
            local_120 = local_a8;
            local_118 = local_a0;
            FUN_1447715ec(&local_110);
            local_130 = DAT_14cbccce0;
            local_128 = DAT_14cbccce8;
            FUN_144928d62(&local_110,5);
            local_e8 = 1;
            local_e4 = DAT_14cb7c580;
            local_dc = (ulonglong)(uint)fVar1 << 0x20;
            local_d4 = CONCAT11(*(undefined1 *)(param_1[0x495] + 0x528),
                                *(undefined1 *)(param_1[0x495] + 0x529));
            FUN_1488536c8(lVar6,&local_120,0);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
    uVar5 = FUN_1447210f0(plVar7);
    plVar7 = (longlong *)FUN_14007a5e6(uVar5);
    if (cVar2 == '\0' && plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x60))(plVar7,&local_a8);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  local_138 = param_5;
  FUN_14063fd42(param_1,param_2,param_3,param_4);
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418df23 FUN_14418df23 body=49 status=ok
// SIG undefined FUN_14418df23(void)

void FUN_14418df23(void)

{
  FUN_144760e21(DAT_14cbcccf8,DAT_14cbccd00);
  if (DAT_14cbcccf8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14418df54 FUN_14418df54 body=69 status=ok
// SIG undefined FUN_14418df54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14418df54(void)

{
  _DAT_14cbccd48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014418df96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbccd50,1);
  return;
}



// FUNCTION 14418dfb2 FUN_14418dfb2 body=543 status=ok
// SIG undefined FUN_14418dfb2(void)

longlong * FUN_14418dfb2(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x19) == '\0')) {
    if ((longlong)(int)param_1[1] != 0) {
      plVar7 = (longlong *)*param_1;
      lVar8 = (longlong)(int)param_1[1] * 0x28;
      do {
        lVar5 = plVar7[1];
        if (lVar5 == 0) {
          uVar4 = FUN_145d863b2();
          lVar5 = FUN_14477b664(uVar4);
          plVar7[1] = lVar5;
        }
        lVar6 = plVar7[2];
        if (lVar6 == 0) {
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if (*plVar7 != 0) {
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
                lVar6 = 0;
              }
              else {
                uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar6 = FUN_144aff482(uVar4,plVar7);
              }
              plVar7[2] = lVar6;
            }
          }
        }
        if (lVar6 == param_2) goto LAB_14418dff7;
        plVar7 = plVar7 + 5;
        lVar8 = lVar8 + -0x28;
      } while (lVar8 != 0);
    }
    if (param_3 != '\0') {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_148d74746(param_1,iVar1);
      }
      lVar8 = *param_1;
      plVar7 = (longlong *)(lVar8 + (longlong)iVar1 * 0x28);
      plVar7[2] = 0;
      plVar7[3] = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[4] = 0;
      uVar4 = FUN_145d863b2();
      lVar5 = FUN_14477b664(uVar4);
      plVar7[1] = lVar5;
      lVar5 = FUN_145d863b2();
      uVar4 = FUN_145d863b2();
      FUN_1402d1bfa(&local_48,uVar4,param_2);
      if (*plVar7 != local_48) {
        plVar7[2] = 0;
      }
      *plVar7 = local_48;
      lVar6 = FUN_145d863b2();
      if (lVar5 == 0) {
LAB_14418e158:
        lVar6 = lVar5;
      }
      else if (lVar6 == 0) {
        lVar6 = 0;
      }
      else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) goto LAB_14418e158;
      if (plVar7[1] != lVar6) {
        plVar7[2] = 0;
      }
      uVar4 = FUN_14477b664(lVar6);
      lVar5 = FUN_14477b664(uVar4);
      plVar7[1] = lVar5;
      if ((lVar5 != 0) && (*plVar7 != 0)) {
        plVar7[2] = param_2;
      }
      if (*(char *)(param_2 + 0x18) == '\x03') {
        uVar9 = 0x3f800000;
      }
      else {
        uVar9 = 0;
      }
      FUN_14020a6c0(lVar8 + (longlong)iVar1 * 0x28 + 0x18,uVar9);
      goto LAB_14418dff7;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_14418dff7:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 14418e268 FUN_14418e268 body=1481 status=ok
// SIG undefined FUN_14418e268(void)

float * FUN_14418e268(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code ****ppppcVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code ***local_f0;
  undefined1 *local_e8;
  code *local_e0;
  float local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  code ***local_a8 [3];
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = FUN_1447262c2(param_4);
  fVar7 = 0.0;
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_f0 = (code ***)local_a8;
      local_a8[0] = (code ***)FUN_141030f22;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_1459f2e4c;
      local_f8 = &LAB_148c39de3;
      local_100 = &LAB_1457a9eb2;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000004;
      local_120 = 0x10;
      local_128 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar4 = *(longlong *)(lVar4 + 0xa08), lVar4 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_f0 = (code ***)local_a8;
        local_a8[0] = (code ***)FUN_141864c34;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1464cee30;
        local_f8 = &LAB_148bfac22;
        local_100 = &LAB_140f21842;
        local_108 = &DAT_149e063b2;
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        iVar3 = (**(code **)(*(longlong *)(lVar4 + 0x10c0) + 0x28))(lVar4 + 0x10c0);
        fVar7 = (float)iVar3;
      }
    }
  }
  pfVar6 = &local_d0;
  FUN_1448729ea(param_1 + 8,pfVar6,param_4);
  if (local_b0 == 3) {
    uVar2 = 3;
    fVar8 = local_d0;
  }
  else {
    FUN_1400b56fe(local_a8,&local_d0,3);
    fVar8 = 0.0;
    if (local_88 != 0) {
      fVar8 = local_a8[0]._0_4_;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppcVar5 = local_a8;
      if (0x18 < local_90) {
        ppppcVar5 = (code ****)local_a8[0];
      }
      (*pcVar1)(ppppcVar5);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8[0]);
    }
    uVar2 = (uint)local_b0;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_b8) {
      pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
    }
    (*pcVar1)(pfVar6);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
  }
  pfVar6 = &local_d0;
  FUN_1448729ea(param_1 + 0x58,pfVar6,param_4);
  if (local_b0 == 3) {
    uVar2 = 3;
    fVar9 = local_d0;
  }
  else {
    FUN_1400b56fe(local_a8,&local_d0,3);
    fVar9 = 0.0;
    if (local_88 != 0) {
      fVar9 = local_a8[0]._0_4_;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppcVar5 = local_a8;
      if (0x18 < local_90) {
        ppppcVar5 = (code ****)local_a8[0];
      }
      (*pcVar1)(ppppcVar5);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8[0]);
    }
    uVar2 = (uint)local_b0;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_b8) {
      pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
    }
    (*pcVar1)(pfVar6);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
  }
  pfVar6 = &local_d0;
  FUN_1448729ea(param_1 + 0xa8,pfVar6,param_4);
  if (local_b0 == 3) {
    uVar2 = 3;
    fVar10 = local_d0;
  }
  else {
    FUN_1400b56fe(local_a8,&local_d0,3);
    fVar10 = 0.0;
    if (local_88 != 0) {
      fVar10 = local_a8[0]._0_4_;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppcVar5 = local_a8;
      if (0x18 < local_90) {
        ppppcVar5 = (code ****)local_a8[0];
      }
      (*pcVar1)(ppppcVar5);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8[0]);
    }
    uVar2 = (uint)local_b0;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_b8) {
      pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
    }
    (*pcVar1)(pfVar6);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = (fVar7 + -2.0) * fVar10 * (fVar7 + -1.0) * 0.5 + fVar9 * (fVar7 + -1.0) + fVar8;
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14418e832 FUN_14418e832 body=1614 status=ok
// SIG undefined FUN_14418e832(void)

void FUN_14418e832(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char cVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  longlong local_140;
  code *local_138;
  longlong *local_130;
  undefined **local_128;
  longlong local_120;
  undefined4 local_118;
  int local_114;
  undefined1 local_110 [16];
  longlong local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined8 local_f0;
  longlong local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_b8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_145a2ed38();
  lVar21 = param_3[1];
  if (lVar21 == 0) {
    uVar20 = FUN_145c272be();
    lVar21 = FUN_14477b664(uVar20);
    param_3[1] = lVar21;
  }
  lVar22 = param_3[2];
  if (lVar22 == 0) {
    if ((lVar21 != 0) && (*param_3 != 0)) {
      plVar24 = *(longlong **)(lVar21 + 0xb8);
      if ((plVar24 == (longlong *)0x0) ||
         (cVar19 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar19 == '\0')) {
        param_3[2] = 0;
      }
      else {
        uVar20 = (**(code **)(*plVar24 + 0x110))(plVar24);
        lVar22 = FUN_144aff482(uVar20,param_3);
        param_3[2] = lVar22;
        if (lVar22 != 0) {
          lVar21 = param_3[1];
          goto LAB_14418e8e0;
        }
      }
    }
  }
  else {
LAB_14418e8e0:
    if (lVar21 == 0) {
      uVar20 = FUN_145c272be();
      lVar21 = FUN_14477b664(uVar20);
      param_3[1] = lVar21;
      lVar22 = param_3[2];
      if (((lVar22 == 0) && (lVar22 = 0, lVar21 != 0)) && (*param_3 != 0)) {
        plVar24 = *(longlong **)(lVar21 + 0xb8);
        if ((plVar24 == (longlong *)0x0) ||
           (cVar19 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar19 == '\0')) {
          lVar22 = 0;
        }
        else {
          uVar20 = (**(code **)(*plVar24 + 0x110))(plVar24);
          lVar22 = FUN_144aff482(uVar20,param_3);
        }
        param_3[2] = lVar22;
      }
    }
    uVar20 = FUN_1410ac168();
    cVar19 = FUN_1448093f4(lVar22,uVar20);
    if ((lVar22 != 0) && (cVar19 != '\0')) {
      uVar4 = *(undefined4 *)(lVar22 + 0x2e0);
      uVar5 = *(undefined4 *)(lVar22 + 0x2e4);
      uVar6 = *(undefined4 *)(lVar22 + 0x2e8);
      uVar7 = *(undefined4 *)(lVar22 + 0x2ec);
      uVar8 = *(undefined4 *)(lVar22 + 0x2f0);
      uVar9 = *(undefined4 *)(lVar22 + 0x2f4);
      uVar10 = *(undefined4 *)(lVar22 + 0x2f8);
      uVar11 = *(undefined4 *)(lVar22 + 0x2fc);
      uVar12 = *(undefined4 *)(lVar22 + 0x300);
      uVar13 = *(undefined4 *)(lVar22 + 0x304);
      uVar14 = *(undefined4 *)(lVar22 + 0x308);
      uVar15 = *(undefined4 *)(lVar22 + 0x30c);
      uVar16 = *(undefined4 *)(lVar22 + 0x30d);
      uVar17 = *(undefined4 *)(lVar22 + 0x311);
      uVar18 = *(undefined4 *)(lVar22 + 0x315);
      *(undefined4 *)(param_1 + 0x519) = *(undefined4 *)(lVar22 + 0x309);
      *(undefined4 *)(param_1 + 0x51d) = uVar16;
      *(undefined4 *)(param_1 + 0x521) = uVar17;
      *(undefined4 *)(param_1 + 0x525) = uVar18;
      *(undefined4 *)(param_1 + 0x510) = uVar12;
      *(undefined4 *)(param_1 + 0x514) = uVar13;
      *(undefined4 *)(param_1 + 0x518) = uVar14;
      *(undefined4 *)(param_1 + 0x51c) = uVar15;
      *(undefined4 *)(param_1 + 0x500) = uVar8;
      *(undefined4 *)(param_1 + 0x504) = uVar9;
      *(undefined4 *)(param_1 + 0x508) = uVar10;
      *(undefined4 *)(param_1 + 0x50c) = uVar11;
      *(undefined4 *)(param_1 + 0x4f0) = uVar4;
      *(undefined4 *)(param_1 + 0x4f4) = uVar5;
      *(undefined4 *)(param_1 + 0x4f8) = uVar6;
      *(undefined4 *)(param_1 + 0x4fc) = uVar7;
      FUN_1465e3ce2(param_1 + 0x530,lVar22 + 800);
      FUN_1465e3ce2(param_1 + 0x548,lVar22 + 0x338);
      FUN_1465e3ce2(param_1 + 0x560,lVar22 + 0x350);
      uVar4 = *(undefined4 *)(lVar22 + 0x36c);
      uVar5 = *(undefined4 *)(lVar22 + 0x370);
      uVar6 = *(undefined4 *)(lVar22 + 0x374);
      uVar7 = *(undefined4 *)(lVar22 + 0x378);
      uVar8 = *(undefined4 *)(lVar22 + 0x37c);
      uVar9 = *(undefined4 *)(lVar22 + 0x380);
      uVar10 = *(undefined4 *)(lVar22 + 900);
      uVar11 = *(undefined4 *)(lVar22 + 0x388);
      uVar12 = *(undefined4 *)(lVar22 + 0x38c);
      uVar13 = *(undefined4 *)(lVar22 + 0x390);
      uVar14 = *(undefined4 *)(lVar22 + 0x394);
      uVar15 = *(undefined4 *)(lVar22 + 0x394);
      uVar16 = *(undefined4 *)(lVar22 + 0x398);
      uVar17 = *(undefined4 *)(lVar22 + 0x39c);
      uVar18 = *(undefined4 *)(lVar22 + 0x3a0);
      *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(lVar22 + 0x368);
      *(undefined4 *)(param_1 + 0x57c) = uVar4;
      *(undefined4 *)(param_1 + 0x580) = uVar5;
      *(undefined4 *)(param_1 + 0x584) = uVar6;
      *(undefined4 *)(param_1 + 0x588) = uVar7;
      *(undefined4 *)(param_1 + 0x58c) = uVar8;
      *(undefined4 *)(param_1 + 0x590) = uVar9;
      *(undefined4 *)(param_1 + 0x594) = uVar10;
      *(undefined4 *)(param_1 + 0x598) = uVar11;
      *(undefined4 *)(param_1 + 0x59c) = uVar12;
      *(undefined4 *)(param_1 + 0x5a0) = uVar13;
      *(undefined4 *)(param_1 + 0x5a4) = uVar14;
      *(undefined4 *)(param_1 + 0x5a4) = uVar15;
      *(undefined4 *)(param_1 + 0x5a8) = uVar16;
      *(undefined4 *)(param_1 + 0x5ac) = uVar17;
      *(undefined4 *)(param_1 + 0x5b0) = uVar18;
      *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)(lVar22 + 0x178);
      lVar21 = FUN_1402d20ea(lVar22 + 0x150);
      if (lVar21 == 0) {
        lVar21 = *(longlong *)(param_1 + 0xab8);
LAB_14418ea64:
        if (lVar21 != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          lVar23 = 0;
LAB_14418ea9e:
          *(longlong *)(param_1 + 0xab8) = lVar23;
        }
      }
      else {
        uVar20 = FUN_1402d20ea(lVar22 + 0x150);
        lVar23 = FUN_14090ceee(uVar20,0,0);
        lVar21 = *(longlong *)(param_1 + 0xab8);
        if (lVar23 == 0) goto LAB_14418ea64;
        if (lVar21 != lVar23) {
          if ((lVar21 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar23);
          goto LAB_14418ea9e;
        }
      }
      *(undefined8 *)(param_1 + 0x988) = *(undefined8 *)(lVar22 + 0x128);
      uVar4 = *(undefined4 *)(lVar22 + 0x134);
      uVar5 = *(undefined4 *)(lVar22 + 0x138);
      uVar6 = *(undefined4 *)(lVar22 + 0x13c);
      *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(lVar22 + 0x130);
      *(undefined4 *)(param_1 + 0x994) = uVar4;
      *(undefined4 *)(param_1 + 0x998) = uVar5;
      *(undefined4 *)(param_1 + 0x99c) = uVar6;
      puVar1 = (undefined8 *)(param_1 + 0x9a0);
      if (puVar1 != (undefined8 *)(lVar22 + 0x140)) {
        iVar2 = *(int *)(lVar22 + 0x148);
        _Src = *(void **)(lVar22 + 0x140);
        *(int *)(param_1 + 0x9a8) = iVar2;
        if (iVar2 == 0 && *(int *)(param_1 + 0x9ac) == 0) {
          *(undefined4 *)(param_1 + 0x9ac) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
          }
        }
      }
    }
  }
  FUN_1411cae98(&local_138);
  FUN_14596206c(param_1,&local_138);
  local_128 = (undefined **)&DAT_14a176f00;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_128 = &PTR_FUN_14a177080;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  local_d8 = 0;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  local_118 = 0;
  if (local_114 != 0) {
    FUN_14472eb64(&local_120,0);
  }
  local_f0 = 0xffffffff;
  local_f8 = 0;
  if (0x80 < local_f4) {
    local_f4 = 0x80;
    FUN_1446efbd8(local_110,0);
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_1418d0b78(*(undefined8 *)(param_1 + 0x9b8),*(undefined4 *)(param_1 + 0x9c0));
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  if (*(int *)(param_1 + 0x9c4) != 0) {
    FUN_14419cfa2(param_1 + 0x9b8,0);
  }
  if (DAT_14cb8d378 != 0) {
    local_130 = &local_140;
    local_138 = FUN_14419d0e4;
    local_140 = param_1;
    FUN_14418ee82(DAT_14cb8d378,&local_138,0);
  }
  if (((((*(int *)(param_1 + 0x3ec) != 0) && (uVar3 = *(uint *)(param_1 + 1000), -1 < (int)uVar3))
       && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar24 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar24 != (longlong *)0x0 && ((int)plVar24[2] == *(int *)(param_1 + 0x3ec))))) &&
     (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 &&
      ((lVar21 = *plVar24, lVar21 != 0 && (lVar22 = *(longlong *)(lVar21 + 0x430), lVar22 != 0))))))
  {
    if (DAT_14cae9568 == 0) {
      local_138 = FUN_1417de738;
      local_150 = &LAB_145893408;
      local_158 = &LAB_1458cbbd2;
      local_168 = &LAB_147ba21f1;
      local_170 = &LAB_1463e9233;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = 0x1000000c;
      local_190 = 8;
      local_198 = 0x2b8;
      local_160 = &local_138;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar22 = *(longlong *)(lVar21 + 0x430);
      if (lVar22 == 0) goto LAB_14418ed39;
    }
    if ((((DAT_14cae9568 != 0) && (lVar21 = *(longlong *)(lVar22 + 0x10), lVar21 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar21 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
        == DAT_14cae9568 + 0x30)) {
      lVar21 = FUN_14030d4a0();
      if ((*(int *)(lVar21 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar21 + 0x38) * 8) == lVar21 + 0x30)) {
        FUN_1406fa324(param_1 + 0x9c8,lVar22 + 0x4f8);
      }
    }
  }
LAB_14418ed39:
  FUN_14418f34a(param_1);
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14418ee82 FUN_14418ee82 body=1031 status=ok
// SIG undefined FUN_14418ee82(void)

void FUN_14418ee82(longlong *param_1,undefined8 *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    iVar2 = (int)param_1[0x54];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar15 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x51);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar15;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar15) {
            return;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar15 = 0;
        iVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = param_1[0x4f];
        lVar9 = *(longlong *)(lVar8 + 0x10 + (longlong)iVar6 * 0x20);
        if (lVar9 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar9,0);
            lVar9 = *(longlong *)(lVar8 + (longlong)iVar6 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar9 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar9 + 0x48) & 0x6b) == 3)) &&
             (plVar4 = *(longlong **)(lVar9 + 0x30), plVar4 != (longlong *)0x0)) {
            lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar9 = FUN_14404cb2c();
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30)) {
              (*(code *)*param_2)(param_2[1],plVar4);
            }
          }
        }
        uVar16 = uVar16 & ~(uint)uVar13;
        puVar7 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x51);
        }
        iVar3 = (int)param_1[0x54];
        iVar6 = (int)uVar15;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar9 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar9 + 1];
              if (uVar12 != 0) {
                uVar15 = (ulonglong)(iVar6 + (int)lVar9 + 1);
                uVar16 = 0xffffffff;
                goto LAB_14418f236;
              }
              iVar14 = iVar14 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar11 - lVar8 != lVar9);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar15 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_14418f236:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  else {
    iVar2 = (int)param_1[0x3e];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar15 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x3b);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar15;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar15) {
            return;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar15 = 0;
        iVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar6 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar9 = FUN_14404cb2c();
          if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
              lVar9 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar4);
          }
        }
        uVar16 = uVar16 & ~(uint)uVar13;
        puVar7 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x3b);
        }
        iVar3 = (int)param_1[0x3e];
        iVar6 = (int)uVar15;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar9 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar9 + 1];
              if (uVar12 != 0) {
                uVar15 = (ulonglong)(iVar6 + (int)lVar9 + 1);
                uVar16 = 0xffffffff;
                goto LAB_14418f0bd;
              }
              iVar14 = iVar14 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar11 - lVar8 != lVar9);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar15 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_14418f0bd:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  return;
}



// FUNCTION 14418f28a FUN_14418f28a body=92 status=ok
// SIG undefined FUN_14418f28a(void)

void FUN_14418f28a(longlong param_1,char param_2,undefined8 param_3)

{
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x9e4) != -1) {
      if (*(longlong *)(param_1 + 0x9d8) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x9d8) = 0;
      *(undefined8 *)(param_1 + 0x9e0) = 0xffffffff00000000;
    }
  }
  else {
    FUN_14418f2e6((longlong *)(param_1 + 0x9d8),param_3);
  }
  FUN_14418f34a(param_1);
  return;
}



// FUNCTION 14418f2e6 FUN_14418f2e6 body=99 status=ok
// SIG undefined FUN_14418f2e6(void)

longlong * FUN_14418f2e6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14418f34a FUN_14418f34a body=243 status=ok
// SIG undefined FUN_14418f34a(void)

void FUN_14418f34a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x9b8);
  iVar1 = *(int *)(param_1 + 0x9c0);
  plVar3 = plVar2 + (longlong)iVar1 * 0xf;
  if (*(int *)(param_1 + 0x9e4) == -1) {
    if (iVar1 != 0) {
      do {
        if ((longlong)*(int *)(param_1 + 0x9d0) != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x9c8) + lVar5) == *plVar2) {
              uVar6 = 1;
              goto LAB_14418f3f3;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(param_1 + 0x9d0) * 8 != lVar5);
        }
        uVar6 = 0;
LAB_14418f3f3:
        *(undefined1 *)(plVar2 + 0xe) = uVar6;
        plVar2 = plVar2 + 0xf;
      } while (plVar2 != plVar3);
    }
  }
  else if (iVar1 != 0) {
    do {
      uVar6 = 1;
      if ((longlong)*(int *)(param_1 + 0x9e0) != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x9d8) + lVar5) == *plVar2) {
            uVar6 = 0;
            break;
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(param_1 + 0x9e0) * 8 != lVar5);
      }
      *(undefined1 *)(plVar2 + 0xe) = uVar6;
      plVar2 = plVar2 + 0xf;
    } while (plVar2 != plVar3);
  }
  iVar1 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar5 + 8 + lVar4) != 0) {
        FUN_148d6d52c();
      }
      lVar4 = lVar4 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar4);
  }
  return;
}



// FUNCTION 14418f43e FUN_14418f43e body=511 status=ok
// SIG undefined FUN_14418f43e(void)

void FUN_14418f43e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(int *)(param_1 + 0x3ec) != 0) && (uVar1 = *(uint *)(param_1 + 1000), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x3ec))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
       ((lVar3 = *plVar4, lVar3 != 0 && (lVar5 = *(longlong *)(lVar3 + 0x430), lVar5 != 0)))))))) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar5 = *(longlong *)(lVar3 + 0x430);
      if (lVar5 == 0) goto LAB_14418f514;
    }
    if ((((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar3 = FUN_14030d4a0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        iVar2 = *(int *)(param_1 + 0x9d0);
        *(int *)(lVar5 + 0x500) = iVar2;
        if (*(int *)(lVar5 + 0x504) == 0 && iVar2 == 0) {
          *(undefined4 *)(lVar5 + 0x504) = 0;
        }
        else {
          FUN_1401b309e(lVar5 + 0x4f8,iVar2);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
LAB_14418f514:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14418f656 FUN_14418f656 body=2843 status=ok
// SIG undefined FUN_14418f656(void)

ulonglong FUN_14418f656(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  undefined8 *local_1a0;
  undefined1 *local_198;
  code *local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  longlong local_158;
  undefined8 uStack_150;
  undefined1 local_139;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  byte local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  char local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar15 = 0;
  uVar14 = 0;
  if (*(int *)(param_1 + 0x3ec) == 0) {
LAB_14418fc3c:
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 1000);
    uVar5 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x3ec) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14418fc3c;
      uVar5 = *puVar8;
    }
  }
  plVar4 = (longlong *)FUN_14041a931(uVar5);
  if (plVar4 == (longlong *)0x0) goto LAB_14418f754;
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (((((*(int *)(param_1 + 0x3ec) == 0) || (uVar7 = *(uint *)(param_1 + 1000), (int)uVar7 < 0)) ||
       (uVar15 = uVar14, DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x3ec))))) ||
     ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_14418f754;
  uVar14 = 0;
  if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
    lVar11 = *plVar12;
  }
  else {
    lVar11 = 0;
  }
  lVar11 = *(longlong *)(lVar11 + 0x398);
  uVar15 = 0;
  if (lVar11 == 0) goto LAB_14418f754;
  uVar15 = uVar14;
  if (0 < *(int *)(param_1 + 0x888)) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x880) + 0xc);
    if ((((iVar3 != 0) && (uVar7 = *(uint *)(*(longlong *)(param_1 + 0x880) + 8), -1 < (int)uVar7))
        && (((int)uVar7 < DAT_14c9647dc &&
            (((plVar12 = (longlong *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
              plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar3)) &&
             ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))))) && (lVar13 = *plVar12, lVar13 != 0))
    {
      if (DAT_14cb5d278 == 0) {
        local_1a0 = &local_f8;
        local_f8 = FUN_1449e2820;
        local_190 = FUN_14081d0ea;
        local_198 = &LAB_145885dac;
        local_1a8 = &LAB_1486962c5;
        local_1b0 = FUN_1464da8ae;
        local_1b8 = L"Engine";
        local_1c0 = (undefined1 *)0x0;
        local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,0x10000000);
        local_1d0 = 8;
        local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x118);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                      &DAT_14cb5d278,&DAT_1486962c4);
      }
      if (((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) == DAT_14cb5d278 + 0x30)) &&
         (lVar13 = *(longlong *)(lVar13 + 200), lVar13 != 0)) {
        cVar1 = FUN_14041ad86(uVar5,lVar11,lVar13);
        if (cVar1 == '\0') {
          cVar1 = FUN_14882d2c0(uVar5,lVar11,2);
          if (cVar1 != '\0') {
            FUN_14882dc3c(uVar5,&local_f8,lVar11,lVar13);
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_f8);
            uVar15 = 1;
          }
        }
        else {
          FUN_14882db1a(uVar5,&local_f8,lVar11,lVar13);
          if (local_80 == '\x01') {
            (**(code **)(*plVar4 + 0x20))(plVar4,lVar11,(ulonglong)uStack_f0 & 0xff,uStack_f0._4_4_)
            ;
          }
          uVar15 = 2;
        }
        goto LAB_14418f754;
      }
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x880) + 0xc);
    if ((((iVar3 != 0) && (uVar7 = *(uint *)(*(longlong *)(param_1 + 0x880) + 8), -1 < (int)uVar7))
        && (((int)uVar7 < DAT_14c9647dc &&
            (((plVar12 = (longlong *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
              plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar3)) &&
             ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))))) && (lVar13 = *plVar12, lVar13 != 0))
    {
      lVar6 = FUN_14116e48a();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        lVar6 = FUN_14187eb96(lVar13);
        if (*(int *)(lVar13 + 0xcc) == 0) {
LAB_14418ff3c:
          lVar9 = 0;
        }
        else {
          uVar7 = *(uint *)(lVar13 + 200);
          lVar9 = 0;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if ((plVar12 == (longlong *)0x0) ||
               (((int)plVar12[2] != *(int *)(lVar13 + 0xcc) ||
                ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14418ff3c;
            lVar9 = *plVar12;
          }
        }
        if (lVar6 == lVar9) {
          (**(code **)(*plVar4 + 0x20))(plVar4,lVar11,1,*(undefined4 *)(lVar13 + 0xd0));
          uVar15 = 4;
          goto LAB_14418f754;
        }
      }
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x880) + 0xc);
    if ((((((iVar3 != 0) && (uVar7 = *(uint *)(*(longlong *)(param_1 + 0x880) + 8), -1 < (int)uVar7)
           ) && ((int)uVar7 < DAT_14c9647dc)) &&
         ((plVar12 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar3)))) &&
        ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) &&
       ((plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0 &&
        (cVar1 = FUN_14882d2c0(uVar5,lVar11,1), cVar1 != '\0')))) {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x880) + 0x10);
      (**(code **)(*plVar12 + 0x2b0))(plVar12,&local_f8);
      if (lVar13 == 0) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = *(double *)(lVar13 + 0x18);
      }
      lVar13 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uVar7 = *(uint *)(lVar11 + 0xc);
      local_f8 = (code *)(ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      iVar3 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar3 = *(int *)(lVar13 + 0x10);
        bVar16 = iVar3 == 0;
        if (bVar16) {
          *(int *)(lVar13 + 0x10) = iVar10;
          iVar3 = 0;
        }
        UNLOCK();
        uVar7 = (uint)local_f8;
        if (bVar16) {
          iVar3 = iVar10;
        }
      }
      local_f8._0_4_ = uVar7;
      local_f8 = (code *)CONCAT44(iVar3,(uint)local_f8);
      uStack_f0 = (double)CONCAT71(uStack_f0._1_7_,1);
      uStack_f0 = (double)CONCAT44(0xffffffff,(undefined4)uStack_f0);
      local_e0 = uStack_d8;
      uStack_d8 = dStack_d0;
      dStack_d0 = local_c8;
      local_e8 = dVar19;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      uVar15 = 3;
      goto LAB_14418f754;
    }
  }
  lVar13 = FUN_1447210f0(param_1);
  if (((lVar13 == 0) || (*(char *)(param_1 + 0x858) != '\x01')) ||
     (*(char *)(param_1 + 0x878) != '\x01')) goto LAB_14418f754;
  local_100 = 0;
  dVar18 = *(double *)(param_1 + 0x838) - *(double *)(param_1 + 0x870);
  dVar19 = *(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x868);
  dVar20 = *(double *)(param_1 + 0x828) - *(double *)(param_1 + 0x860);
  fVar17 = (float)SQRT(dVar18 * dVar18 + dVar20 * dVar20 + dVar19 * dVar19);
  if (fVar17 <= ABS(*(float *)(param_1 + 0x660))) {
    fVar17 = ABS(*(float *)(param_1 + 0x660));
  }
  if (fVar17 <= ABS(*(float *)(param_1 + 0x658))) {
    fVar17 = ABS(*(float *)(param_1 + 0x658));
  }
  local_158 = 0;
  uStack_150 = 0;
  dVar19 = (double)(fVar17 + fVar17);
  local_e8 = *(double *)(param_1 + 0x850) * dVar19 + *(double *)(param_1 + 0x838);
  uStack_f0 = *(double *)(param_1 + 0x848) * dVar19 + *(double *)(param_1 + 0x830);
  local_f8 = (code *)(dVar19 * *(double *)(param_1 + 0x840) + *(double *)(param_1 + 0x828));
  local_1d8 = &local_f8;
  local_138 = *(undefined4 *)(param_1 + 0x828);
  uStack_134 = *(undefined4 *)(param_1 + 0x82c);
  uStack_130 = *(undefined4 *)(param_1 + 0x830);
  uStack_12c = *(undefined4 *)(param_1 + 0x834);
  local_128 = *(double *)(param_1 + 0x838);
  local_1b0 = (code *)&local_178;
  local_1b8 = (wchar_t *)&DAT_14cad0f08;
  local_1c0 = &DAT_14cad0f10;
  local_1c8 = &DAT_14cad0f68;
  local_1d0 = 1;
  cVar1 = FUN_1401e2596(lVar13,&local_158,&local_139);
  if (cVar1 == '\0') {
    bVar2 = 0;
LAB_14418fd81:
    if (*(char *)(param_1 + 0x878) == '\x01') {
      local_108 = *(undefined8 *)(param_1 + 0x870);
      local_118 = *(undefined4 *)(param_1 + 0x860);
      uStack_114 = *(undefined4 *)(param_1 + 0x864);
      uStack_110 = *(undefined4 *)(param_1 + 0x868);
      uStack_10c = *(undefined4 *)(param_1 + 0x86c);
      local_100 = 1;
      uVar15 = 0;
      goto LAB_14418fdd5;
    }
    uVar15 = 0;
    if ((bVar2 & 1) != 0) goto LAB_14418fdd5;
  }
  else {
    local_188 = uVar5;
    if ((longlong)(int)uStack_150 == 0) {
      bVar2 = 0;
      goto LAB_14418fd81;
    }
    lVar6 = (longlong)(int)uStack_150 * 0x100 + local_158;
    uVar15 = 0xffffffff;
    lVar13 = local_158;
    local_180 = lVar11;
    do {
      if (local_100 == 0) {
        local_108 = *(undefined8 *)(lVar13 + 0x38);
        local_118 = *(undefined4 *)(lVar13 + 0x28);
        uStack_114 = *(undefined4 *)(lVar13 + 0x2c);
        uStack_110 = *(undefined4 *)(lVar13 + 0x30);
        uStack_10c = *(undefined4 *)(lVar13 + 0x34);
        local_100 = 1;
        uVar5 = FUN_14485cccc(lVar13 + 0xb8);
        iVar3 = *(int *)(param_1 + 0x9f8);
        uVar15 = 0xffffffff;
        if (0 < iVar3) {
          lVar11 = 8;
          uVar14 = 0;
          do {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x9f0) + lVar11);
            if (lVar9 != 0) {
              cVar1 = FUN_148d70108(lVar9,uVar5);
              if (cVar1 != '\0') {
                uVar15 = uVar14 & 0xffffffff;
                break;
              }
              iVar3 = *(int *)(param_1 + 0x9f8);
            }
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + 0x80;
          } while ((longlong)uVar14 < (longlong)iVar3);
        }
      }
      lVar13 = lVar13 + 0x100;
    } while (lVar13 != lVar6);
    lVar11 = local_180;
    uVar5 = local_188;
    bVar2 = local_100;
    if ((local_100 & 1) == 0) goto LAB_14418fd81;
LAB_14418fdd5:
    FUN_148d6d676(param_1,&local_138,uVar15,&local_118);
    cVar1 = FUN_14882d2c0(uVar5,lVar11,1);
    uVar7 = 0;
    if (cVar1 != '\0') {
      if (((int)uVar15 < 0) || (*(int *)(param_1 + 0x9f8) <= (int)uVar15)) {
LAB_14418fe4a:
        dVar19 = 0.0;
      }
      else {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x9f0) + uVar15 * 0x80);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x9f0) + 8 + uVar15 * 0x80);
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x60) != 0)) {
          cVar1 = FUN_148827e1c();
          if (cVar1 != '\0') {
            local_168 = local_128;
            local_178 = (code *)CONCAT44(uStack_134,local_138);
            uStack_170 = (double)CONCAT44(uStack_12c,uStack_130);
            if (*(int *)(param_1 + 0x3ec) == 0) {
LAB_14419008a:
              uVar5 = 0;
            }
            else {
              uVar7 = *(uint *)(param_1 + 1000);
              uVar5 = 0;
              if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                puVar8 = (undefined8 *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if ((puVar8 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x3ec) ||
                    ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14419008a;
                uVar5 = *puVar8;
              }
            }
            FUN_14882c6b9(&local_f8,uVar5,&local_138);
            if ((char)local_e0 == '\x01') {
              local_168 = local_e8;
              local_178 = local_f8;
              uStack_170 = uStack_f0;
            }
            local_138 = (undefined4)local_178;
            uStack_134 = local_178._4_4_;
            uStack_130 = (undefined4)uStack_170;
            uStack_12c = uStack_170._4_4_;
            local_128 = local_168;
          }
        }
        if (lVar13 == 0) goto LAB_14418fe4a;
        dVar19 = *(double *)(lVar13 + 0x18);
      }
      lVar13 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uVar7 = *(uint *)(lVar11 + 0xc);
      local_f8 = (code *)(ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      iVar3 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar3 = *(int *)(lVar13 + 0x10);
        bVar16 = iVar3 == 0;
        if (bVar16) {
          *(int *)(lVar13 + 0x10) = iVar10;
          iVar3 = 0;
        }
        UNLOCK();
        uVar7 = (uint)local_f8;
        if (bVar16) {
          iVar3 = iVar10;
        }
      }
      local_f8._0_4_ = uVar7;
      local_f8 = (code *)CONCAT44(iVar3,(uint)local_f8);
      uStack_f0 = (double)CONCAT71(uStack_f0._1_7_,1);
      uStack_f0 = (double)CONCAT44(0xffffffff,(undefined4)uStack_f0);
      dStack_d0 = local_128;
      local_e0 = (double)CONCAT44(uStack_134,local_138);
      uStack_d8 = (double)CONCAT44(uStack_12c,uStack_130);
      local_e8 = dVar19;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      uVar7 = 3;
    }
    uVar15 = (ulonglong)uVar7;
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
LAB_14418f754:
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 144190172 FUN_144190172 body=403 status=ok
// SIG undefined FUN_144190172(void)

void FUN_144190172(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  FUN_14169ff20();
  FUN_145961f34(param_1);
  iVar1 = *(int *)(param_1 + 0x410);
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x4e8),iVar1 != 0,1);
  }
  iVar2 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x9f0);
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 8 + lVar8);
      if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x60), lVar5 != 0)) {
        FUN_148827dc4(lVar5,iVar1 != 0);
      }
      lVar8 = lVar8 + 0x80;
    } while ((longlong)iVar2 * 0x80 != lVar8);
    iVar2 = *(int *)(param_1 + 0x9f8);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x9f0);
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar4 + 8 + lVar8);
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x5c) != 0)) &&
            (uVar3 = *(uint *)(lVar5 + 0x58), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == *(int *)(lVar5 + 0x5c))) &&
             ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
              plVar6 = (longlong *)*puVar7;
            }
            else {
              plVar6 = (longlong *)0x0;
            }
            (**(code **)(*plVar6 + 0x330))(plVar6,CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0));
          }
        }
        lVar8 = lVar8 + 0x80;
      } while ((longlong)iVar2 * 0x80 != lVar8);
      iVar1 = *(int *)(param_1 + 0x9f8);
      if ((longlong)iVar1 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x9f0);
        lVar8 = 0;
        do {
          lVar5 = *(longlong *)(lVar4 + 8 + lVar8);
          if (lVar5 != 0) {
            FUN_1414c8b68(lVar5,*(undefined4 *)(param_1 + 0x410));
          }
          lVar8 = lVar8 + 0x80;
        } while ((longlong)iVar1 * 0x80 != lVar8);
      }
    }
  }
  if (param_2 == 0) {
    FUN_145961e04(param_1);
    if (*(int *)(param_1 + 0x6c8) != 0) {
      *(undefined4 *)(param_1 + 0x6c8) = 0;
    }
    return;
  }
  FUN_14596221c(param_1);
  return;
}



// FUNCTION 144190306 FUN_144190306 body=79 status=ok
// SIG undefined FUN_144190306(void)

void FUN_144190306(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x728) = *param_2;
  *(undefined8 *)(param_1 + 0x730) = uVar1;
  return;
}



// FUNCTION 144190356 FUN_144190356 body=443 status=ok
// SIG undefined FUN_144190356(void)

void FUN_144190356(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  char local_40 [4];
  undefined8 local_3c;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x934) = 0;
  if ((0 < *(int *)(param_1 + 0x9f8)) &&
     (plVar2 = (longlong *)**(longlong **)(param_1 + 0x9f0), plVar2 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar5 = FUN_1410ef06e();
    if ((((lVar5 != 0) &&
         ((((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) && (*(int *)(param_1 + 0x3ec) != 0)) &&
          ((uVar1 = *(uint *)(param_1 + 1000), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))))
        && (puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar7 != (undefined8 *)0x0)) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x3ec) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      local_40[0] = '\0';
      local_3c = 0;
      local_34 = 0;
      if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
        uVar6 = *puVar7;
      }
      else {
        uVar6 = 0;
      }
      uVar6 = FUN_1447210f0(uVar6);
      lVar4 = FUN_140149a73(uVar6,0);
      if ((lVar4 != 0) && (FUN_14039fc7b(plVar2 + 0xa4,local_40,lVar4,0), local_40[0] != '\0')) {
        if (local_40[0] == '\x01') {
          if (local_34 == 0) goto LAB_14419049b;
        }
        else if ((local_40[0] == '\x03') && (plVar2[0xab] != 0)) {
          FUN_1403a0728(local_40,&local_48);
          if (local_48 != plVar2[0xab]) goto LAB_14419049b;
        }
        else {
          cVar3 = FUN_140321d1a(local_40);
          if (cVar3 == '\0') goto LAB_14419049b;
        }
        *(undefined1 *)(param_1 + 0x934) = 1;
      }
    }
  }
LAB_14419049b:
  FUN_1461a96f8(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144190512 FUN_144190512 body=17119 status=ok
// SIG undefined FUN_144190512(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144190512(longlong *param_1,float param_2)

{
  undefined8 **ppuVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar18;
  double *pdVar19;
  code *pcVar20;
  uint *puVar21;
  longlong *plVar22;
  uint *puVar23;
  uint *puVar24;
  longlong lVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  ulonglong *puVar30;
  double *pdVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong *plVar35;
  int iVar36;
  int iVar37;
  double *pdVar38;
  double *pdVar39;
  double *pdVar40;
  double *pdVar41;
  double *pdVar42;
  uint uVar43;
  longlong *plVar44;
  ulonglong uVar45;
  double *pdVar46;
  longlong lVar47;
  uint uVar48;
  uint *puVar49;
  longlong lVar50;
  undefined8 uVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_528 [32];
  double *local_508;
  undefined4 local_500;
  undefined *local_4f8;
  undefined1 *local_4f0;
  wchar_t *local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  undefined8 *local_4d0;
  undefined1 *local_4c8;
  code *local_4c0;
  uint *local_4b0;
  longlong *local_4a8;
  code *local_4a0;
  uint *local_498;
  uint *local_490;
  uint *local_488;
  code *local_480;
  uint local_478;
  undefined1 local_469;
  undefined8 *local_468;
  undefined8 uStack_460;
  longlong local_458;
  undefined8 uStack_450;
  uint local_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  longlong local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  float fStack_400;
  undefined4 uStack_3fc;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_528;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_418 = (code *)CONCAT44(local_418._4_4_,param_2);
    uVar26 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar26,&local_418);
    lVar18 = FUN_1447210f0(param_1);
    if (lVar18 != 0) {
      uVar26 = FUN_14119d0a4(lVar18);
      FUN_140e65914(uVar26,param_1);
    }
  }
  iVar15 = *(int *)((longlong)param_1 + 0x524);
  lVar18 = param_1[0xe2];
  *(int *)(param_1 + 0xe2) = (int)lVar18 + 1;
  uVar56 = DAT_14c8463f8._4_4_;
  uVar55 = (undefined4)DAT_14c8463f8;
  uVar16 = DAT_14c8463f0._4_4_;
  if (iVar15 <= (int)lVar18) {
    *(undefined4 *)(param_1 + 0xdc) = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_1 + 0x6e4) = uVar16;
    *(undefined4 *)(param_1 + 0xdd) = uVar55;
    *(undefined4 *)((longlong)param_1 + 0x6ec) = uVar56;
  }
  iVar17 = *(int *)((longlong)param_1 + 0x714);
  *(int *)((longlong)param_1 + 0x714) = iVar17 + 1;
  uVar56 = DAT_14c8463f8._4_4_;
  uVar55 = (undefined4)DAT_14c8463f8;
  uVar16 = DAT_14c8463f0._4_4_;
  if (iVar15 <= iVar17) {
    *(undefined4 *)(param_1 + 0xde) = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_1 + 0x6f4) = uVar16;
    *(undefined4 *)(param_1 + 0xdf) = uVar55;
    *(undefined4 *)((longlong)param_1 + 0x6fc) = uVar56;
  }
  lVar18 = param_1[0xe4];
  *(int *)(param_1 + 0xe4) = (int)lVar18 + 1;
  if (iVar15 <= (int)lVar18) {
    *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  }
  lVar18 = FUN_1404df6a8(param_1);
  puVar29 = (undefined8 *)(lVar18 + 0x50);
  if (lVar18 == 0) {
    puVar29 = &DAT_14c967818;
  }
  iVar15 = (int)*puVar29;
  iVar17 = (int)((ulonglong)*puVar29 >> 0x20);
  if ((0 < iVar17 & 0 < iVar15 & *(byte *)(param_1 + 0xa5)) == 1) {
    dVar8 = (double)iVar15;
    dVar59 = (double)iVar17;
    dVar7 = (DAT_14c846328 + (double)param_1[0xe6]) * 0.5 * dVar59;
    dVar62 = (DAT_14c846320 + (double)param_1[0xe5]) * 0.5 * dVar8;
    dVar60 = (double)(float)((double)((*(float *)((longlong)param_1 + 0x504) /
                                      *(float *)(param_1 + 0xa0)) * *(float *)(param_1 + 0xb2)) *
                            dVar59);
    dVar61 = (double)param_1[0xde];
    if ((-9.999999747378752e-05 <= dVar61) || (dVar60 < dVar62)) {
      dVar58 = 0.0;
      if ((9.999999747378752e-05 < dVar61) &&
         (dVar9 = dVar8 - dVar60, dVar58 = 0.0, dVar9 <= dVar62)) {
        if (ABS(dVar8 - dVar9) <= 1e-08) {
          dVar58 = (double)((ulonglong)((uint)(-(ulonglong)(dVar8 <= dVar62) >> 0x20) & 0x3ff00000)
                           << 0x20);
        }
        else {
          dVar58 = (dVar62 - dVar9) / (dVar8 - dVar9);
        }
        if (1.0 <= dVar58) {
          dVar58 = 1.0;
        }
        if (dVar58 <= 0.0) {
          dVar58 = 0.0;
        }
        goto LAB_1441907e3;
      }
    }
    else {
      dVar58 = (double)(~-(ulonglong)(1e-08 < ABS(dVar60)) &
                        (ulonglong)((uint)(-(ulonglong)(dVar60 <= dVar62) >> 0x20) & 0x3ff00000) <<
                        0x20 | (ulonglong)(dVar62 / dVar60) & -(ulonglong)(1e-08 < ABS(dVar60)));
      if (1.0 <= dVar58) {
        dVar58 = 1.0;
      }
      if (dVar58 <= 0.0) {
        dVar58 = 0.0;
      }
      dVar58 = 1.0 - dVar58;
LAB_1441907e3:
      dVar58 = dVar61 * (double)(float)dVar58;
    }
    dVar62 = (double)param_1[0xdf];
    if ((dVar60 < dVar7) || (-9.999999747378752e-05 <= dVar62)) {
      dVar60 = dVar59 - dVar60;
      dVar61 = 0.0;
      if ((dVar60 <= dVar7) && (9.999999747378752e-05 < dVar62)) {
        if (ABS(dVar59 - dVar60) <= 1e-08) {
          dVar61 = (double)((ulonglong)((uint)(-(ulonglong)(dVar59 <= dVar7) >> 0x20) & 0x3ff00000)
                           << 0x20);
        }
        else {
          dVar61 = (dVar7 - dVar60) / (dVar59 - dVar60);
        }
        if (1.0 <= dVar61) {
          dVar61 = 1.0;
        }
        if (dVar61 <= 0.0) {
          dVar61 = 0.0;
        }
        goto LAB_1441908c6;
      }
    }
    else {
      dVar61 = (double)(~-(ulonglong)(1e-08 < ABS(dVar60)) &
                        -(ulonglong)(dVar60 <= dVar7) & 0x3ff0000000000000 |
                       (ulonglong)(dVar7 / dVar60) & -(ulonglong)(1e-08 < ABS(dVar60)));
      if (1.0 <= dVar61) {
        dVar61 = 1.0;
      }
      if (dVar61 <= 0.0) {
        dVar61 = 0.0;
      }
      dVar61 = 1.0 - dVar61;
LAB_1441908c6:
      dVar61 = dVar62 * (double)(float)dVar61;
    }
    dVar58 = dVar58 * (double)*(float *)((longlong)param_1 + 0x594);
    param_1[0xe0] = (longlong)dVar58;
    dVar61 = dVar61 * (double)*(float *)((longlong)param_1 + 0x594);
    param_1[0xe1] = (longlong)dVar61;
  }
  else {
    lVar18 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    param_1[0xe0] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    param_1[0xe1] = lVar18;
    dVar58 = (double)param_1[0xe0];
    dVar61 = (double)param_1[0xe1];
  }
  dVar61 = dVar61 + (double)param_1[0xdd];
  dVar58 = dVar58 + (double)param_1[0xdc];
  dVar7 = SQRT(dVar58 * dVar58 + dVar61 * dVar61);
  if (1.0 < dVar7) {
    dVar58 = dVar58 * (1.0 / dVar7);
  }
  dVar62 = (double)*(float *)(param_1 + 0xa4);
  if (1.0 <= dVar62) {
    dVar62 = 1.0;
  }
  if (dVar62 <= 0.0) {
    dVar62 = 0.0;
  }
  param_1[0xda] = (longlong)(dVar58 * dVar62 + (double)param_1[0xda] * (1.0 - dVar62));
  param_1[0xdb] =
       (longlong)
       ((double)(~-(ulonglong)(1.0 < dVar7) & (ulonglong)dVar61 |
                (ulonglong)(dVar61 * (1.0 / dVar7)) & -(ulonglong)(1.0 < dVar7)) * dVar62 +
       (1.0 - dVar62) * (double)param_1[0xdb]);
  *(undefined4 *)(param_1 + 0xe3) = *(undefined4 *)((longlong)param_1 + 0x71c);
  fVar53 = *(float *)((longlong)param_1 + 0xab4) + param_2;
  *(float *)((longlong)param_1 + 0xab4) = fVar53;
  iVar15 = (int)param_1[0x156];
  if (iVar15 == 3) {
    cVar14 = *(char *)((longlong)param_1 + 0xb85);
    if ((*(float *)((longlong)param_1 + 0x59c) <= fVar53) &&
       (cVar14 = '\x01', (char)param_1[0x15c] != '\0')) {
      cVar14 = *(char *)((longlong)param_1 + 0xb85);
    }
    if (cVar14 != '\0') {
      param_1[0x156] = 0;
    }
  }
  else if (iVar15 == 2) {
    if ((*(char *)((longlong)param_1 + 0xb85) != '\0') || (*(float *)(param_1 + 0xb3) <= fVar53)) {
      bVar52 = true;
    }
    else {
      bVar52 = false;
    }
    lVar18 = param_1[0x13f];
    if ((longlong)(int)lVar18 != 0) {
      lVar47 = param_1[0x13e];
      lVar25 = 0;
      do {
        if ((*(longlong *)(lVar47 + 8 + lVar25) != 0) && (cVar14 = FUN_14662bf2a(), cVar14 == '\0'))
        goto LAB_144190b6d;
        lVar25 = lVar25 + 0x80;
      } while ((longlong)(int)lVar18 * 0x80 != lVar25);
    }
    if (bVar52) {
      param_1[0x156] = 3;
      *(int *)(param_1 + 0x16d) = (int)param_1[0x16e];
      *(undefined4 *)((longlong)param_1 + 0xb6c) = 0;
      *(undefined2 *)(param_1 + 0x170) = 1;
      *(undefined4 *)((longlong)param_1 + 0xb74) = *(undefined4 *)((longlong)param_1 + 0x59c);
      param_1[0x16f] = 1;
      FUN_1407606b4(param_1 + 0x16d);
      *(undefined1 *)((longlong)param_1 + 0xb81) = 1;
      if ((char)param_1[0x124] == '\x01') {
        FUN_148d6e83a(param_1);
        *(undefined1 *)(param_1 + 0x124) = 0;
      }
      FUN_1461a98ec(param_1,2);
    }
  }
  else if (iVar15 == 1) {
    cVar14 = *(char *)((longlong)param_1 + 0xb85);
    if ((*(float *)((longlong)param_1 + 0x59c) <= fVar53) &&
       (cVar14 = '\x01', (char)param_1[0x15c] != '\0')) {
      cVar14 = *(char *)((longlong)param_1 + 0xb85);
    }
    if (cVar14 != '\0') {
      param_1[0x16d] = (longlong)&DAT_3f8000003f800000;
      *(undefined4 *)(param_1 + 0x16e) = 0x3f800000;
      *(undefined8 *)((longlong)param_1 + 0xb74) = 0;
      *(undefined8 *)((longlong)param_1 + 0xb79) = 0;
      *(undefined1 *)((longlong)param_1 + 0xb81) = 1;
      param_1[0x156] = 2;
      FUN_14662beae(param_1);
    }
  }
LAB_144190b6d:
  if (*(char *)((longlong)param_1 + 0xb85) == '\0') {
    lVar18 = param_1[0x156];
    FUN_1457b0e1a(param_1,(int)lVar18 != 0);
    if ((int)lVar18 != 0) {
      FUN_1407606b4(param_1 + 0x16d);
      FUN_143eb22ba(param_1 + 0x158);
      if ((param_1[0x157] != 0) && ((double)param_1[0x16c] != 0.0)) {
        uStack_110 = (double)CONCAT71(uStack_110._1_7_,2);
        uStack_110 = (double)CONCAT44(0xffffffff,(undefined4)uStack_110);
        local_508 = (double *)&local_418;
        local_418 = (code *)((ulonglong)local_418 & 0xffffffffffffff00);
        uStack_410 = (code *)0x0;
        local_408._0_4_ = 0;
        local_408._4_4_ = 0;
        fStack_400 = 0.0;
        uStack_3fc = 0;
        dStack_3f8 = 0.0;
        dStack_3f0 = 0.0;
        dStack_3e8 = 0.0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3d0 = 0;
        uStack_3c8 = 0;
        local_118 = (double)param_1[0x16c];
        FUN_140042bb4();
      }
    }
  }
  else {
    FUN_1457b0e1a(param_1,0);
  }
  local_4a8 = param_1;
  if ((char)param_1[0x124] == '\x01') {
    bVar12 = 1;
    if ((int)param_1[0xd9] == 1) {
      switch((int)param_1[0x112]) {
      case 0:
        *(undefined1 *)(param_1 + 0x124) = 0;
        if (0 < (int)param_1[0x13f]) {
          pdVar19 = (double *)&DAT_14c8463f0;
          if (*(longlong *)param_1[0x13e] != 0) {
            pdVar19 = (double *)(*(longlong *)param_1[0x13e] + 0x28);
          }
          local_118 = *pdVar19;
          uStack_110 = pdVar19[1];
          FUN_148d6e636(param_1);
          if ((char)param_1[0xcd] == '\x01') {
            lVar18 = param_1[0x9c];
            uVar16 = (undefined4)DAT_14c8464e0;
            uVar55 = DAT_14c8464e0._4_4_;
            uVar56 = (undefined4)DAT_14c8464e8;
            uVar57 = DAT_14c8464e8._4_4_;
            if (lVar18 != 0) {
              uVar16 = *(undefined4 *)(lVar18 + 0x198);
              uVar55 = *(undefined4 *)(lVar18 + 0x19c);
              uVar56 = *(undefined4 *)(lVar18 + 0x1a0);
              uVar57 = *(undefined4 *)(lVar18 + 0x1a4);
            }
            local_418 = (code *)CONCAT44(uVar55,uVar16);
            uStack_410 = (code *)CONCAT44(uVar57,uVar56);
            dVar58 = (double)*(float *)((longlong)param_1 + 0x66c);
            goto LAB_1441919c2;
          }
        }
        break;
      case 1:
        if ((longlong)(int)param_1[0x13f] == 0) {
LAB_144191211:
          local_4a0 = (code *)0x0;
          pcVar20 = local_4a0;
        }
        else {
          puVar23 = (uint *)param_1[0x13e];
          local_498 = puVar23 + (longlong)(int)param_1[0x13f] * 0x20;
          local_4a0 = (code *)0x0;
          do {
            lVar18 = *(longlong *)(puVar23 + 2);
            local_490 = puVar23;
            if (lVar18 != 0) {
              puVar23 = (uint *)(lVar18 + 0x88);
              iVar15 = *(int *)(lVar18 + 0xa0);
              if (iVar15 == 0) {
                uVar45 = 1;
                iVar37 = 0;
                uVar33 = 0;
                iVar17 = 0;
              }
              else {
                puVar24 = *(uint **)(lVar18 + 0x98);
                if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                  puVar24 = puVar23;
                }
                uVar48 = *puVar24;
                if (uVar48 == 0) {
                  iVar17 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar17 = iVar15 + -1;
                  }
                  uVar33 = 0;
                  uVar45 = (ulonglong)(uint)(iVar17 >> 5);
                  if (iVar17 >> 5 < 1) {
                    uVar45 = uVar33;
                  }
                  iVar37 = 0;
                  do {
                    if (uVar45 == uVar33) goto LAB_144191348;
                    iVar37 = iVar37 + 0x20;
                    uVar48 = puVar24[uVar33 + 1];
                    uVar33 = uVar33 + 1;
                  } while (uVar48 == 0);
                }
                else {
                  iVar37 = 0;
                  uVar33 = 0;
                }
                uVar45 = (ulonglong)(-uVar48 & uVar48);
                uVar2 = uVar45 * 2 + 1;
                lVar47 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                  }
                }
                iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                if (iVar15 <= iVar17) {
                  iVar17 = iVar15;
                }
              }
              if (iVar17 != iVar15) {
                uVar48 = 0xffffffff;
                local_4b0 = puVar23;
                do {
                  iVar36 = *(int *)(*(longlong *)(lVar18 + 0x78) + 0x1c + (longlong)iVar17 * 0x180);
                  if (iVar36 != 0) {
                    puVar29 = (undefined8 *)
                              (*(longlong *)(lVar18 + 0x78) + (longlong)iVar17 * 0x180);
                    uVar43 = *(uint *)(puVar29 + 3);
                    if (((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) &&
                       ((plVar22 = (longlong *)
                                   ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)),
                        plVar22 != (longlong *)0x0 &&
                        ((((int)plVar22[2] == iVar36 && ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)
                          ) && (lVar47 = *plVar22, lVar47 != 0)))))) {
                      lVar25 = FUN_1414ba9b4();
                      puVar23 = local_4b0;
                      if (((*(int *)(lVar25 + 0x38) <= *(int *)(*(longlong *)(lVar47 + 0x10) + 0x38)
                           ) && (*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar47 + 0x10) + 0x30) +
                                  (longlong)*(int *)(lVar25 + 0x38) * 8) == lVar25 + 0x30)) &&
                         (*(char *)(lVar47 + 0xd0) == '\x01')) {
                        local_4a0 = (code *)*puVar29;
                      }
                    }
                  }
                  uVar48 = uVar48 & ~(uint)uVar45;
                  puVar24 = *(uint **)(lVar18 + 0x98);
                  if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                    puVar24 = puVar23;
                  }
                  iVar36 = *(int *)(lVar18 + 0xa0);
                  iVar17 = (int)uVar33;
                  lVar47 = (longlong)iVar17;
                  uVar43 = puVar24[lVar47] & uVar48;
                  if (uVar43 == 0) {
                    iVar28 = iVar36 + 0x1e;
                    if (-1 < iVar36 + -1) {
                      iVar28 = iVar36 + -1;
                    }
                    iVar28 = iVar28 >> 5;
                    iVar37 = iVar37 + 0x20;
                    iVar27 = iVar28;
                    if (iVar28 < iVar17) {
                      iVar27 = iVar17;
                    }
                    if (iVar17 < iVar28) {
                      lVar25 = 0;
                      do {
                        uVar43 = puVar24[lVar47 + lVar25 + 1];
                        if (uVar43 != 0) {
                          uVar33 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                          uVar48 = 0xffffffff;
                          goto LAB_144191492;
                        }
                        iVar37 = iVar37 + 0x20;
                        lVar25 = lVar25 + 1;
                      } while (iVar27 - lVar47 != lVar25);
                      uVar48 = 0xffffffff;
                      iVar17 = iVar27;
                    }
                    uVar33 = (ulonglong)(iVar17 + 1);
                    puVar23 = local_4b0;
                    iVar17 = iVar36;
                  }
                  else {
LAB_144191492:
                    uVar45 = (ulonglong)(-uVar43 & uVar43);
                    uVar2 = uVar45 * 2 + 1;
                    lVar47 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                      }
                    }
                    iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                    if (iVar36 <= iVar17) {
                      iVar17 = iVar36;
                    }
                  }
                } while (iVar17 != iVar15);
              }
            }
LAB_144191348:
            puVar23 = local_490 + 0x20;
            pcVar20 = local_4a0;
            param_1 = local_4a8;
          } while (puVar23 != local_498);
        }
LAB_144191225:
        local_418 = pcVar20;
        if (pcVar20 != (code *)0x0) {
LAB_144191236:
          *(undefined1 *)(param_1 + 0x124) = 0;
          FUN_145cf5c1e(param_1,&local_418,1);
        }
        break;
      case 2:
        if (param_1[0x113] != 0) {
          if ((longlong)(int)param_1[0x13f] == 0) goto LAB_144191211;
          puVar23 = (uint *)param_1[0x13e];
          local_490 = puVar23 + (longlong)(int)param_1[0x13f] * 0x20;
          local_4a0 = (code *)0x0;
          do {
            lVar18 = *(longlong *)(puVar23 + 2);
            local_4b0 = puVar23;
            if (lVar18 != 0) {
              iVar15 = *(int *)(lVar18 + 0xa0);
              if (iVar15 == 0) {
                uVar33 = 1;
                uVar45 = 0;
                iVar37 = 0;
                iVar17 = 0;
              }
              else {
                puVar23 = *(uint **)(lVar18 + 0x98);
                if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                  puVar23 = (uint *)(lVar18 + 0x88);
                }
                uVar48 = *puVar23;
                if (uVar48 == 0) {
                  iVar17 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar17 = iVar15 + -1;
                  }
                  uVar45 = 0;
                  uVar33 = (ulonglong)(uint)(iVar17 >> 5);
                  if (iVar17 >> 5 < 1) {
                    uVar33 = uVar45;
                  }
                  iVar37 = 0;
                  do {
                    if (uVar33 == uVar45) goto LAB_144191069;
                    iVar37 = iVar37 + 0x20;
                    uVar48 = puVar23[uVar45 + 1];
                    uVar45 = uVar45 + 1;
                  } while (uVar48 == 0);
                }
                else {
                  uVar45 = 0;
                  iVar37 = 0;
                }
                uVar33 = (ulonglong)(-uVar48 & uVar48);
                uVar2 = uVar33 * 2 + 1;
                lVar47 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                  }
                }
                iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                if (iVar15 <= iVar17) {
                  iVar17 = iVar15;
                }
              }
              if (iVar17 != iVar15) {
                uVar48 = 0xffffffff;
                do {
                  iVar36 = *(int *)(*(longlong *)(lVar18 + 0x78) + 0x1c + (longlong)iVar17 * 0x180);
                  if (iVar36 != 0) {
                    puVar29 = (undefined8 *)
                              (*(longlong *)(lVar18 + 0x78) + (longlong)iVar17 * 0x180);
                    uVar43 = *(uint *)(puVar29 + 3);
                    if ((((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) &&
                        (puVar32 = (undefined8 *)
                                   ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)),
                        puVar32 != (undefined8 *)0x0)) &&
                       ((*(int *)(puVar32 + 2) == iVar36 &&
                        ((*(uint *)(puVar32 + 1) & 0x10200000) == 0)))) {
                      if ((*(uint *)(puVar32 + 1) & 0x10200000) == 0) {
                        plVar22 = (longlong *)*puVar32;
                      }
                      else {
                        plVar22 = (longlong *)0x0;
                      }
                      lVar47 = (**(code **)(*plVar22 + 0x2d8))();
                      if (lVar47 == local_4a8[0x113]) {
                        local_4a0 = (code *)*puVar29;
                      }
                    }
                  }
                  uVar48 = uVar48 & ~(uint)uVar33;
                  puVar23 = *(uint **)(lVar18 + 0x98);
                  if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                    puVar23 = (uint *)(lVar18 + 0x88);
                  }
                  iVar36 = *(int *)(lVar18 + 0xa0);
                  iVar17 = (int)uVar45;
                  lVar47 = (longlong)iVar17;
                  uVar43 = puVar23[lVar47] & uVar48;
                  if (uVar43 == 0) {
                    iVar28 = iVar36 + 0x1e;
                    if (-1 < iVar36 + -1) {
                      iVar28 = iVar36 + -1;
                    }
                    iVar28 = iVar28 >> 5;
                    iVar37 = iVar37 + 0x20;
                    iVar27 = iVar28;
                    if (iVar28 < iVar17) {
                      iVar27 = iVar17;
                    }
                    if (iVar17 < iVar28) {
                      lVar25 = 0;
                      do {
                        uVar43 = puVar23[lVar47 + lVar25 + 1];
                        if (uVar43 != 0) {
                          uVar45 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                          uVar48 = 0xffffffff;
                          goto LAB_144191193;
                        }
                        iVar37 = iVar37 + 0x20;
                        lVar25 = lVar25 + 1;
                      } while (iVar27 - lVar47 != lVar25);
                      uVar48 = 0xffffffff;
                      iVar17 = iVar27;
                    }
                    uVar45 = (ulonglong)(iVar17 + 1);
                    iVar17 = iVar36;
                  }
                  else {
LAB_144191193:
                    uVar33 = (ulonglong)(-uVar43 & uVar43);
                    uVar2 = uVar33 * 2 + 1;
                    lVar47 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                      }
                    }
                    iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                    if (iVar36 <= iVar17) {
                      iVar17 = iVar36;
                    }
                  }
                } while (iVar17 != iVar15);
              }
            }
LAB_144191069:
            puVar23 = local_4b0 + 0x20;
            pcVar20 = local_4a0;
            param_1 = local_4a8;
          } while (puVar23 != local_490);
          goto LAB_144191225;
        }
        break;
      case 3:
        if (param_1[0x114] != 0) {
          if ((longlong)(int)param_1[0x13f] == 0) {
            pcVar20 = (code *)0x0;
          }
          else {
            puVar23 = (uint *)param_1[0x13e];
            puVar24 = puVar23 + (longlong)(int)param_1[0x13f] * 0x20;
            pcVar20 = (code *)0x0;
            local_490 = puVar24;
            do {
              lVar18 = *(longlong *)(puVar23 + 2);
              if (lVar18 != 0) {
                puVar49 = (uint *)(lVar18 + 0x88);
                iVar15 = *(int *)(lVar18 + 0xa0);
                param_1 = local_4a8;
                local_4a0 = pcVar20;
                if (iVar15 == 0) {
                  uVar33 = 1;
                  uVar45 = 0;
                  iVar37 = 0;
                  iVar17 = 0;
                }
                else {
                  puVar21 = *(uint **)(lVar18 + 0x98);
                  if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                    puVar21 = puVar49;
                  }
                  uVar48 = *puVar21;
                  if (uVar48 == 0) {
                    iVar17 = iVar15 + 0x1e;
                    if (-1 < iVar15 + -1) {
                      iVar17 = iVar15 + -1;
                    }
                    uVar45 = 0;
                    uVar33 = (ulonglong)(uint)(iVar17 >> 5);
                    if (iVar17 >> 5 < 1) {
                      uVar33 = uVar45;
                    }
                    iVar37 = 0;
                    do {
                      if (uVar33 == uVar45) goto LAB_144191976;
                      iVar37 = iVar37 + 0x20;
                      uVar48 = puVar21[uVar45 + 1];
                      uVar45 = uVar45 + 1;
                    } while (uVar48 == 0);
                  }
                  else {
                    uVar45 = 0;
                    iVar37 = 0;
                  }
                  uVar33 = (ulonglong)(-uVar48 & uVar48);
                  uVar2 = uVar33 * 2 + 1;
                  lVar47 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                    }
                  }
                  iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                  if (iVar15 <= iVar17) {
                    iVar17 = iVar15;
                  }
                }
                if (iVar17 != iVar15) {
                  uVar48 = 0xffffffff;
                  local_4b0 = puVar23;
                  do {
                    iVar36 = *(int *)(*(longlong *)(lVar18 + 0x78) + 0x1c + (longlong)iVar17 * 0x180
                                     );
                    if (iVar36 != 0) {
                      puVar29 = (undefined8 *)
                                (*(longlong *)(lVar18 + 0x78) + (longlong)iVar17 * 0x180);
                      uVar43 = *(uint *)(puVar29 + 3);
                      if ((((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) &&
                          (plVar22 = (longlong *)
                                     ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8))
                          , plVar22 != (longlong *)0x0)) &&
                         ((((int)plVar22[2] == iVar36 &&
                           ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) &&
                          (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 &&
                           (lVar47 = *plVar22, lVar47 != 0)))))) {
                        if (DAT_14cba14f0 == 0) {
                          local_418 = FUN_1449e2820;
                          local_4c0 = FUN_14081d0ea;
                          local_4c8 = &LAB_145885dac;
                          local_4d0 = &local_418;
                          local_4d8 = &LAB_148b9e16b;
                          local_4e0 = FUN_140f505de;
                          local_4e8 = L"Engine";
                          local_4f0 = (undefined1 *)0x0;
                          local_4f8 = (undefined *)CONCAT44(local_4f8._4_4_,0x10000000);
                          local_500 = 8;
                          local_508 = (double *)CONCAT44(local_508._4_4_,0x110);
                          local_498 = puVar49;
                          FUN_14081cfa3(L"/Script/OakGame",
                                        L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                                        &DAT_14cba14f0,&DAT_148b9e16a);
                          puVar49 = local_498;
                        }
                        if (((*(int *)(DAT_14cba14f0 + 0x38) <=
                              *(int *)(*(longlong *)(lVar47 + 0x10) + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar47 + 0x10) + 0x30) +
                              (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) == DAT_14cba14f0 + 0x30)
                            ) && (lVar47 = FUN_14050ca38(lVar47), local_4a8[0x114] == lVar47)) {
                          pcVar20 = (code *)*puVar29;
                          puVar24 = local_490;
                          puVar23 = local_4b0;
                          param_1 = local_4a8;
                          break;
                        }
                      }
                    }
                    uVar48 = uVar48 & ~(uint)uVar33;
                    puVar23 = *(uint **)(lVar18 + 0x98);
                    if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                      puVar23 = puVar49;
                    }
                    iVar36 = *(int *)(lVar18 + 0xa0);
                    iVar17 = (int)uVar45;
                    lVar47 = (longlong)iVar17;
                    uVar43 = puVar23[lVar47] & uVar48;
                    if (uVar43 == 0) {
                      iVar28 = iVar36 + 0x1e;
                      if (-1 < iVar36 + -1) {
                        iVar28 = iVar36 + -1;
                      }
                      iVar28 = iVar28 >> 5;
                      iVar37 = iVar37 + 0x20;
                      iVar27 = iVar28;
                      if (iVar28 < iVar17) {
                        iVar27 = iVar17;
                      }
                      if (iVar17 < iVar28) {
                        lVar25 = 0;
                        do {
                          uVar43 = puVar23[lVar47 + lVar25 + 1];
                          if (uVar43 != 0) {
                            uVar45 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                            uVar48 = 0xffffffff;
                            goto LAB_1441917f2;
                          }
                          iVar37 = iVar37 + 0x20;
                          lVar25 = lVar25 + 1;
                        } while (iVar27 - lVar47 != lVar25);
                        uVar48 = 0xffffffff;
                        iVar17 = iVar27;
                      }
                      uVar45 = (ulonglong)(iVar17 + 1);
                      iVar17 = iVar36;
                    }
                    else {
LAB_1441917f2:
                      uVar33 = (ulonglong)(-uVar43 & uVar43);
                      uVar2 = uVar33 * 2 + 1;
                      lVar47 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                        }
                      }
                      iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                      if (iVar36 <= iVar17) {
                        iVar17 = iVar36;
                      }
                    }
                    pcVar20 = local_4a0;
                    puVar24 = local_490;
                    puVar23 = local_4b0;
                    param_1 = local_4a8;
                  } while (iVar17 != iVar15);
                }
              }
LAB_144191976:
              puVar23 = puVar23 + 0x20;
            } while (puVar23 != puVar24);
          }
          goto LAB_144191225;
        }
        break;
      case 4:
        lVar18 = param_1[0x115];
        if (lVar18 != 0) {
          if ((longlong)(int)param_1[0x13f] == 0) {
LAB_144191533:
            param_1 = local_4a8;
            if ((*(char *)(lVar18 + 0x20) == '\x01') && ((longlong)(int)local_4a8[0x13f] != 0)) {
              plVar22 = (longlong *)local_4a8[0x13e];
              plVar35 = plVar22 + (longlong)(int)local_4a8[0x13f] * 0x10;
              do {
                lVar18 = *plVar22;
                if ((lVar18 != 0) && (iVar15 = *(int *)(lVar18 + 0xe8), (longlong)iVar15 != 0)) {
                  lVar18 = *(longlong *)(lVar18 + 0xe0);
                  plVar44 = (longlong *)(lVar18 + 0x10);
                  lVar47 = 0;
                  do {
                    lVar25 = plVar44[1];
                    if (lVar25 == 0) {
                      uVar26 = FUN_14067c594();
                      lVar25 = FUN_14477b664(uVar26);
                      plVar44[1] = lVar25;
                    }
                    lVar34 = plVar44[2];
                    if (lVar34 == 0) {
                      if (lVar25 == 0) {
                        lVar34 = 0;
                      }
                      else {
                        lVar34 = 0;
                        if (*plVar44 != 0) {
                          plVar5 = *(longlong **)(lVar25 + 0xb8);
                          if ((plVar5 == (longlong *)0x0) ||
                             (cVar14 = (**(code **)(*plVar5 + 0x108))(), cVar14 == '\0')) {
                            lVar34 = 0;
                          }
                          else {
                            uVar26 = (**(code **)(*plVar5 + 0x110))(plVar5);
                            lVar34 = FUN_144aff482(uVar26,plVar44);
                          }
                          plVar44[2] = lVar34;
                        }
                      }
                    }
                    param_1 = local_4a8;
                    if (lVar34 == local_4a8[0x115]) {
                      *(undefined1 *)(local_4a8 + 0x124) = 0;
                      FUN_148d6e636(local_4a8,(lVar18 - lVar47) + 0x28);
                      goto switchD_144190c6a_default;
                    }
                    lVar47 = lVar47 + -0x38;
                    plVar44 = plVar44 + 7;
                  } while ((longlong)iVar15 * -0x38 - lVar47 != 0);
                }
                plVar22 = plVar22 + 0x10;
                param_1 = local_4a8;
              } while (plVar22 != plVar35);
            }
            break;
          }
          puVar23 = (uint *)param_1[0x13e];
          local_490 = puVar23 + (longlong)(int)param_1[0x13f] * 0x20;
          local_4a0 = (code *)0x0;
          do {
            lVar18 = *(longlong *)(puVar23 + 2);
            local_4b0 = puVar23;
            if (lVar18 != 0) {
              iVar15 = *(int *)(lVar18 + 0xa0);
              if (iVar15 == 0) {
                uVar45 = 1;
                uVar33 = 0;
                iVar37 = 0;
                iVar17 = 0;
              }
              else {
                puVar23 = *(uint **)(lVar18 + 0x98);
                if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                  puVar23 = (uint *)(lVar18 + 0x88);
                }
                uVar48 = *puVar23;
                if (uVar48 == 0) {
                  iVar17 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar17 = iVar15 + -1;
                  }
                  uVar33 = 0;
                  uVar45 = (ulonglong)(uint)(iVar17 >> 5);
                  if (iVar17 >> 5 < 1) {
                    uVar45 = uVar33;
                  }
                  iVar37 = 0;
                  do {
                    if (uVar45 == uVar33) goto LAB_144190df8;
                    iVar37 = iVar37 + 0x20;
                    uVar48 = puVar23[uVar33 + 1];
                    uVar33 = uVar33 + 1;
                  } while (uVar48 == 0);
                }
                else {
                  uVar33 = 0;
                  iVar37 = 0;
                }
                uVar45 = (ulonglong)(-uVar48 & uVar48);
                uVar2 = uVar45 * 2 + 1;
                lVar47 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                  }
                }
                iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                if (iVar15 <= iVar17) {
                  iVar17 = iVar15;
                }
              }
              if (iVar17 != iVar15) {
                uVar48 = 0xffffffff;
                do {
                  iVar36 = *(int *)(*(longlong *)(lVar18 + 0x78) + 0x1c + (longlong)iVar17 * 0x180);
                  if (iVar36 != 0) {
                    puVar29 = (undefined8 *)
                              (*(longlong *)(lVar18 + 0x78) + (longlong)iVar17 * 0x180);
                    uVar43 = *(uint *)(puVar29 + 3);
                    if ((((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) &&
                        (puVar32 = (undefined8 *)
                                   ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)),
                        puVar32 != (undefined8 *)0x0)) &&
                       ((*(int *)(puVar32 + 2) == iVar36 &&
                        ((*(uint *)(puVar32 + 1) & 0x10200000) == 0)))) {
                      if ((*(uint *)(puVar32 + 1) & 0x10200000) == 0) {
                        uVar26 = *puVar32;
                      }
                      else {
                        uVar26 = 0;
                      }
                      lVar47 = FUN_140d749c4(uVar26,0);
                      if ((lVar47 != 0) && (lVar47 == local_4a8[0x115])) {
                        local_4a0 = (code *)*puVar29;
                      }
                    }
                  }
                  uVar48 = uVar48 & ~(uint)uVar45;
                  puVar23 = *(uint **)(lVar18 + 0x98);
                  if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
                    puVar23 = (uint *)(lVar18 + 0x88);
                  }
                  iVar36 = *(int *)(lVar18 + 0xa0);
                  iVar17 = (int)uVar33;
                  lVar47 = (longlong)iVar17;
                  uVar43 = puVar23[lVar47] & uVar48;
                  if (uVar43 == 0) {
                    iVar28 = iVar36 + 0x1e;
                    if (-1 < iVar36 + -1) {
                      iVar28 = iVar36 + -1;
                    }
                    iVar28 = iVar28 >> 5;
                    iVar37 = iVar37 + 0x20;
                    iVar27 = iVar28;
                    if (iVar28 < iVar17) {
                      iVar27 = iVar17;
                    }
                    if (iVar17 < iVar28) {
                      lVar25 = 0;
                      do {
                        uVar43 = puVar23[lVar47 + lVar25 + 1];
                        if (uVar43 != 0) {
                          uVar33 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                          uVar48 = 0xffffffff;
                          goto LAB_144190ef7;
                        }
                        iVar37 = iVar37 + 0x20;
                        lVar25 = lVar25 + 1;
                      } while (iVar27 - lVar47 != lVar25);
                      uVar48 = 0xffffffff;
                      iVar17 = iVar27;
                    }
                    uVar33 = (ulonglong)(iVar17 + 1);
                    iVar17 = iVar36;
                  }
                  else {
LAB_144190ef7:
                    uVar45 = (ulonglong)(-uVar43 & uVar43);
                    uVar2 = uVar45 * 2 + 1;
                    lVar47 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                      }
                    }
                    iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
                    if (iVar36 <= iVar17) {
                      iVar17 = iVar36;
                    }
                  }
                } while (iVar17 != iVar15);
              }
            }
LAB_144190df8:
            puVar23 = local_4b0 + 0x20;
          } while (puVar23 != local_490);
          local_418 = local_4a0;
          param_1 = local_4a8;
          if (local_4a0 == (code *)0x0) {
            lVar18 = local_4a8[0x115];
            goto LAB_144191533;
          }
          goto LAB_144191236;
        }
        break;
      case 5:
        if ((int)param_1[0x13f] < 1) {
          lVar18 = 0;
        }
        else {
          lVar18 = *(longlong *)param_1[0x13e];
        }
        if (param_1[0x116] == lVar18) {
          *(undefined1 *)(param_1 + 0x124) = 0;
          local_418 = (code *)param_1[0x11c];
          uStack_410 = (code *)param_1[0x11d];
          dVar58 = (double)param_1[0x11e];
LAB_1441919c2:
          local_408._0_4_ = SUB84(dVar58,0);
          local_408._4_4_ = (undefined4)((ulonglong)dVar58 >> 0x20);
          FUN_14596238c(param_1);
        }
      }
switchD_144190c6a_default:
      bVar12 = *(byte *)(param_1 + 0x124);
    }
    if (((bVar12 & 1) != 0) && ((int)param_1[0x156] == 0)) {
      FUN_148d6e83a(param_1);
      *(undefined1 *)(param_1 + 0x124) = 0;
    }
  }
  FUN_1413ec976(param_1);
  if (((((int)param_1[0x156] == 0) && ((char)param_1[0x124] != '\x01')) &&
      (((char)param_1[0xf1] != '\x01' || (*(char *)((longlong)param_1 + 0x77c) != '\x01')))) &&
     (lVar18 = FUN_1447210f0(param_1), lVar18 != 0)) {
    lVar18 = FUN_1404df6a8(param_1);
    puVar30 = (ulonglong *)(lVar18 + 0x50);
    if (lVar18 == 0) {
      puVar30 = &DAT_14c967818;
    }
    if (*puVar30 >> 0x20 == 0 || (int)*puVar30 == 0) goto LAB_1441926a0;
    if (param_1[0x78] == 0) {
      dStack_3e8 = (double)((ulonglong)dStack_3e8 & 0xffffffffffffff00);
    }
    else {
      FUN_1489a9334(param_1[0x78],&local_418,param_1 + 0xe5);
    }
    puVar23 = (uint *)(param_1 + 0x105);
    if ((uint *)&local_418 != puVar23) {
      if (((ulonglong)dStack_3e8 & 1) == 0) {
        if ((char)param_1[0x10b] != '\x01') goto LAB_144191af8;
        uVar13 = 0;
      }
      else {
        auVar10._4_4_ = local_408._4_4_;
        auVar10._0_4_ = (undefined4)local_408;
        auVar10._8_4_ = fStack_400;
        auVar10._12_4_ = uStack_3fc;
        auVar11._8_8_ = dStack_3f0;
        auVar11._0_8_ = dStack_3f8;
        *(undefined1 (*) [16])(param_1 + 0x109) = auVar11;
        *(undefined1 (*) [16])(param_1 + 0x107) = auVar10;
        *puVar23 = (uint)local_418;
        *(undefined4 *)((longlong)param_1 + 0x82c) = local_418._4_4_;
        *(int *)(param_1 + 0x106) = (int)uStack_410;
        *(undefined4 *)((longlong)param_1 + 0x834) = uStack_410._4_4_;
        uVar13 = 1;
      }
      *(undefined1 *)(param_1 + 0x10b) = uVar13;
    }
LAB_144191af8:
    FUN_148d6fcf0(&local_418,puVar23);
    if (fStack_400._0_1_ == '\x01') {
      param_1[0x10e] = CONCAT44(local_408._4_4_,(undefined4)local_408);
      *(uint *)(param_1 + 0x10c) = (uint)local_418;
      *(undefined4 *)((longlong)param_1 + 0x864) = local_418._4_4_;
      *(int *)(param_1 + 0x10d) = (int)uStack_410;
      *(undefined4 *)((longlong)param_1 + 0x86c) = uStack_410._4_4_;
      *(undefined1 *)(param_1 + 0x10f) = 1;
      cVar14 = '\x01';
    }
    else {
      cVar14 = (char)param_1[0x10f];
      if (cVar14 == '\x01') {
        *(undefined1 *)(param_1 + 0x10f) = 0;
        cVar14 = '\0';
      }
    }
    if (((char)param_1[0x10b] != '\x01') || (cVar14 == '\0')) goto LAB_1441926a0;
    if (*(int *)((longlong)param_1 + 0x3ec) == 0) {
LAB_144194727:
      lVar18 = 0;
    }
    else {
      uVar48 = *(uint *)(param_1 + 0x7d);
      lVar18 = 0;
      if ((-1 < (int)uVar48) && ((int)uVar48 < DAT_14c9647dc)) {
        plVar22 = (longlong *)
                  ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8));
        if ((plVar22 == (longlong *)0x0) ||
           (((int)plVar22[2] != *(int *)((longlong)param_1 + 0x3ec) ||
            ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)))) goto LAB_144194727;
        lVar18 = *plVar22;
      }
    }
    if (*(char *)(lVar18 + 0xa99) == '\x01') {
      lVar18 = (ulonglong)(*(char *)(lVar18 + 0xa98) != '\0') * 4 + 0x28;
    }
    else {
      lVar18 = 0x28;
    }
    fVar63 = (*(float *)((longlong)param_1 + 0x504) / *(float *)(param_1 + 0xa0)) *
             *(float *)((longlong)param_1 + lVar18 + 0x4f0);
    local_488 = puVar23;
    FUN_1413eca68(param_1);
    fVar53 = (float)FUN_1413eca68(param_1);
    local_468 = (undefined8 *)((double)fVar53 * (double)param_1[0xe5]);
    uStack_460 = (double)param_1[0xe6];
    local_508 = (double *)((ulonglong)local_508 & 0xffffffffffffff00);
    FUN_1441948f0(param_1,&local_480,&local_468,fVar63);
    uVar48 = local_478;
    pcVar20 = local_480;
    uVar45 = (ulonglong)(int)local_478;
    if (1 < (longlong)uVar45) {
      memset(&local_408,0,0x2f0);
      local_418 = pcVar20;
      uStack_410 = pcVar20 + (uVar45 * 10 + -10) * 8;
      fVar53 = logf((float)(int)uVar48);
      local_408._0_4_ = (int)(longlong)(fVar53 + fVar53);
      puVar23 = (uint *)&local_418;
      do {
        pdVar19 = *(double **)puVar23;
        pdVar42 = *(double **)(puVar23 + 2);
        uVar48 = puVar23[4];
        iVar15 = (int)((ulonglong)((longlong)pdVar42 - (longlong)pdVar19) >> 4) * -0x33333333;
        puVar24 = (uint *)(ulonglong)(iVar15 + 1);
        local_498 = puVar23;
        if (uVar48 != 0) {
LAB_144191d11:
          if (8 < (int)(uint)puVar24) {
            local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,uVar48);
            pdVar31 = pdVar19 + (ulonglong)((uint)puVar24 >> 1) * 10;
            pdVar41 = &local_118;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar41 = *pdVar31;
              pdVar31 = pdVar31 + 1;
              pdVar41 = pdVar41 + 1;
            }
            pdVar31 = pdVar19;
            pdVar41 = pdVar19 + (ulonglong)((uint)puVar24 >> 1) * 10;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar41 = *pdVar31;
              pdVar31 = pdVar31 + 1;
              pdVar41 = pdVar41 + 1;
            }
            pdVar31 = &local_118;
            pdVar41 = pdVar19;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar41 = *pdVar31;
              pdVar31 = pdVar31 + 1;
              pdVar41 = pdVar41 + 1;
            }
            pdVar31 = pdVar42 + 10;
            pdVar41 = pdVar19;
LAB_144191d5f:
            while (pdVar38 = pdVar41, pdVar41 = pdVar38 + 10, pdVar41 <= pdVar42) {
              if (*(char *)((longlong)*pdVar19 + 0x148) != '\x01') {
                if ((*(char *)((longlong)*pdVar41 + 0x148) == '\x01') &&
                   (*(char *)((longlong)*pdVar41 + 0x144) != '\0')) break;
                goto LAB_144191db5;
              }
              cVar14 = *(char *)((longlong)*pdVar19 + 0x144);
              if (*(char *)((longlong)*pdVar41 + 0x148) == '\0') goto LAB_144191db1;
              if (cVar14 == *(char *)((longlong)*pdVar41 + 0x144)) goto LAB_144191db5;
              if (cVar14 == '\0') break;
            }
            goto joined_r0x000144191e0f;
          }
          while (puVar23 = local_498, pdVar41 = pdVar19, pdVar31 = pdVar19, pdVar19 < pdVar42) {
joined_r0x0001441924c4:
            while (pdVar31 = pdVar31 + 10, pdVar31 <= pdVar42) {
              if (*(char *)((longlong)*pdVar41 + 0x148) != '\x01') {
                if ((*(char *)((longlong)*pdVar31 + 0x148) == '\x01') &&
                   (*(char *)((longlong)*pdVar31 + 0x144) != '\0')) goto LAB_144192570;
                goto LAB_14419254f;
              }
              cVar14 = *(char *)((longlong)*pdVar41 + 0x144);
              if (*(char *)((longlong)*pdVar31 + 0x148) == '\0') goto LAB_14419254b;
              if (cVar14 == *(char *)((longlong)*pdVar31 + 0x144)) goto LAB_14419254f;
              if (cVar14 == '\0') goto LAB_144192570;
            }
            pdVar31 = (double *)((longlong)pdVar42 + 0xffffffffffffffb0);
            pdVar38 = pdVar41;
            pdVar40 = &local_118;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar40 = *pdVar38;
              pdVar38 = pdVar38 + 1;
              pdVar40 = pdVar40 + 1;
            }
            pdVar38 = pdVar42;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar41 = *pdVar38;
              pdVar38 = pdVar38 + 1;
              pdVar41 = pdVar41 + 1;
            }
            pdVar41 = &local_118;
            pdVar38 = pdVar42;
            for (lVar18 = 10; pdVar42 = pdVar31, lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar38 = *pdVar41;
              pdVar41 = pdVar41 + 1;
              pdVar38 = pdVar38 + 1;
            }
          }
          goto LAB_1441925b1;
        }
LAB_144191fd9:
        puVar23 = local_498;
        if ((int)puVar24 != 0) {
          uVar48 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
          local_4b0 = puVar24;
          do {
            puVar23 = (uint *)(ulonglong)uVar48;
            uVar43 = uVar48 * 2 + 1;
            local_490 = puVar23;
            if ((int)uVar43 < (int)puVar24) {
              do {
                uVar48 = uVar48 * 2 + 2;
                puVar49 = (uint *)(ulonglong)uVar48;
                if ((int)uVar48 < (int)puVar24) {
                  lVar18 = (longlong)(int)uVar48;
                  pdVar42 = pdVar19 + (longlong)(int)uVar43 * 10;
                  if (*(char *)((longlong)pdVar19[lVar18 * 10] + 0x148) != '\x01') {
                    if ((*(char *)((longlong)*pdVar42 + 0x148) != '\x01') ||
                       (*(char *)((longlong)*pdVar42 + 0x144) == '\0')) goto LAB_144192095;
                    goto LAB_1441920f6;
                  }
                  cVar14 = *(char *)((longlong)pdVar19[lVar18 * 10] + 0x144);
                  if (*(char *)((longlong)*pdVar42 + 0x148) == '\0') {
                    if (cVar14 == '\0') goto LAB_144192095;
                  }
                  else if (cVar14 == *(char *)((longlong)*pdVar42 + 0x144)) {
LAB_144192095:
                    fVar53 = *(float *)(pdVar19 + lVar18 * 10 + 9);
                    if (ABS(fVar53 - *(float *)(pdVar42 + 9)) <= 1e-08) {
                      uVar16 = FUN_140f07b20();
                      local_4a0 = (code *)CONCAT44(local_4a0._4_4_,uVar16);
                      iVar15 = FUN_140f07b20(*pdVar42);
                      puVar24 = local_4b0;
                      if ((int)local_4a0 == iVar15) {
                        if (*(ulonglong *)pdVar19[lVar18 * 10] < *(ulonglong *)*pdVar42)
                        goto LAB_1441920f6;
                      }
                      else if ((int)local_4a0 < iVar15) goto LAB_1441920f6;
                    }
                    else if (fVar53 < *(float *)(pdVar42 + 9)) goto LAB_1441920f6;
                  }
                  else if (cVar14 == '\0') goto LAB_1441920f6;
                }
                else {
LAB_1441920f6:
                  lVar18 = (longlong)(int)uVar43;
                  puVar49 = (uint *)(ulonglong)uVar43;
                }
                pdVar42 = pdVar19 + (longlong)(int)puVar23 * 10;
                pdVar31 = pdVar19 + lVar18 * 10;
                if (*(char *)((longlong)pdVar19[(longlong)(int)puVar23 * 10] + 0x148) == '\x01') {
                  cVar14 = *(char *)((longlong)pdVar19[(longlong)(int)puVar23 * 10] + 0x144);
                  if (*(char *)((longlong)*pdVar31 + 0x148) == '\0') {
                    if (cVar14 != '\0') break;
                  }
                  else if (cVar14 != *(char *)((longlong)*pdVar31 + 0x144)) {
                    if (cVar14 == '\0') goto LAB_1441921c6;
                    break;
                  }
LAB_144192173:
                  if (ABS(*(float *)(pdVar42 + 9) - *(float *)(pdVar31 + 9)) <= 1e-08) {
                    iVar15 = FUN_140f07b20();
                    iVar17 = FUN_140f07b20(*pdVar31);
                    puVar24 = local_4b0;
                    if (iVar15 == iVar17) {
                      if (*(ulonglong *)*pdVar31 <= *(ulonglong *)*pdVar42) break;
                    }
                    else if (iVar17 <= iVar15) break;
                  }
                  else if (*(float *)(pdVar31 + 9) <= *(float *)(pdVar42 + 9)) break;
                }
                else if ((*(char *)((longlong)*pdVar31 + 0x148) != '\x01') ||
                        (*(char *)((longlong)*pdVar31 + 0x144) == '\0')) goto LAB_144192173;
LAB_1441921c6:
                pdVar41 = pdVar42;
                pdVar38 = &local_118;
                for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar38 = *pdVar41;
                  pdVar41 = pdVar41 + 1;
                  pdVar38 = pdVar38 + 1;
                }
                pdVar41 = pdVar31;
                for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar42 = *pdVar41;
                  pdVar41 = pdVar41 + 1;
                  pdVar42 = pdVar42 + 1;
                }
                pdVar42 = &local_118;
                for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar31 = *pdVar42;
                  pdVar42 = pdVar42 + 1;
                  pdVar31 = pdVar31 + 1;
                }
                uVar48 = (uint)puVar49;
                uVar43 = uVar48 * 2 + 1;
                puVar23 = puVar49;
              } while ((int)uVar43 < (int)puVar24);
            }
            uVar48 = (int)local_490 - 1;
          } while ((int)local_490 != 0);
          puVar23 = local_498;
          if (1 < (int)puVar24) {
            puVar49 = (uint *)(((ulonglong)puVar24 & 0xffffffff) - 1);
            pdVar42 = pdVar19;
            pdVar31 = &local_118;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar31 = *pdVar42;
              pdVar42 = pdVar42 + 1;
              pdVar31 = pdVar31 + 1;
            }
            pdVar42 = pdVar19 + (longlong)puVar49 * 10;
            pdVar31 = pdVar19;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar31 = *pdVar42;
              pdVar42 = pdVar42 + 1;
              pdVar31 = pdVar31 + 1;
            }
            pdVar42 = &local_118;
            pdVar31 = pdVar19 + (longlong)puVar49 * 10;
            for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar31 = *pdVar42;
              pdVar42 = pdVar42 + 1;
              pdVar31 = pdVar31 + 1;
            }
            if ((int)puVar24 != 2) {
              do {
                iVar15 = 0;
                iVar37 = 1;
                puVar24 = puVar49;
                local_4b0 = puVar49;
                iVar17 = 0;
                do {
                  iVar36 = iVar15 + 2;
                  lVar18 = (longlong)iVar36;
                  if (lVar18 < (longlong)puVar24) {
                    pdVar42 = pdVar19 + (longlong)iVar37 * 10;
                    if (*(char *)((longlong)pdVar19[lVar18 * 10] + 0x148) != '\x01') {
                      if ((*(char *)((longlong)*pdVar42 + 0x148) != '\x01') ||
                         (*(char *)((longlong)*pdVar42 + 0x144) == '\0')) goto LAB_1441922f5;
                      goto LAB_144192357;
                    }
                    cVar14 = *(char *)((longlong)pdVar19[lVar18 * 10] + 0x144);
                    if (*(char *)((longlong)*pdVar42 + 0x148) == '\0') {
                      if (cVar14 == '\0') goto LAB_1441922f5;
                    }
                    else if (cVar14 == *(char *)((longlong)*pdVar42 + 0x144)) {
LAB_1441922f5:
                      fVar53 = *(float *)(pdVar19 + lVar18 * 10 + 9);
                      if (ABS(fVar53 - *(float *)(pdVar42 + 9)) <= 1e-08) {
                        uVar16 = FUN_140f07b20();
                        local_490 = (uint *)CONCAT44(local_490._4_4_,uVar16);
                        iVar15 = FUN_140f07b20(*pdVar42);
                        puVar24 = local_4b0;
                        if ((int)local_490 == iVar15) {
                          if (*(ulonglong *)pdVar19[lVar18 * 10] < *(ulonglong *)*pdVar42)
                          goto LAB_144192357;
                        }
                        else if ((int)local_490 < iVar15) goto LAB_144192357;
                      }
                      else if (fVar53 < *(float *)(pdVar42 + 9)) goto LAB_144192357;
                    }
                    else if (cVar14 == '\0') goto LAB_144192357;
                  }
                  else {
LAB_144192357:
                    lVar18 = (longlong)iVar37;
                    iVar36 = iVar37;
                  }
                  pdVar42 = pdVar19 + (longlong)iVar17 * 10;
                  pdVar31 = pdVar19 + lVar18 * 10;
                  if (*(char *)((longlong)pdVar19[(longlong)iVar17 * 10] + 0x148) == '\x01') {
                    cVar14 = *(char *)((longlong)pdVar19[(longlong)iVar17 * 10] + 0x144);
                    if (*(char *)((longlong)*pdVar31 + 0x148) == '\0') {
                      if (cVar14 != '\0') break;
                    }
                    else if (cVar14 != *(char *)((longlong)*pdVar31 + 0x144)) {
                      if (cVar14 == '\0') goto LAB_144192426;
                      break;
                    }
LAB_1441923d3:
                    if (ABS(*(float *)(pdVar42 + 9) - *(float *)(pdVar31 + 9)) <= 1e-08) {
                      iVar15 = FUN_140f07b20();
                      iVar17 = FUN_140f07b20(*pdVar31);
                      puVar24 = local_4b0;
                      if (iVar15 == iVar17) {
                        if (*(ulonglong *)*pdVar31 <= *(ulonglong *)*pdVar42) break;
                      }
                      else if (iVar17 <= iVar15) break;
                    }
                    else if (*(float *)(pdVar31 + 9) <= *(float *)(pdVar42 + 9)) break;
                  }
                  else if ((*(char *)((longlong)*pdVar31 + 0x148) != '\x01') ||
                          (*(char *)((longlong)*pdVar31 + 0x144) == '\0')) goto LAB_1441923d3;
LAB_144192426:
                  pdVar41 = pdVar42;
                  pdVar38 = &local_118;
                  for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *pdVar38 = *pdVar41;
                    pdVar41 = pdVar41 + 1;
                    pdVar38 = pdVar38 + 1;
                  }
                  pdVar41 = pdVar31;
                  for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *pdVar42 = *pdVar41;
                    pdVar41 = pdVar41 + 1;
                    pdVar42 = pdVar42 + 1;
                  }
                  pdVar42 = &local_118;
                  for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *pdVar31 = *pdVar42;
                    pdVar42 = pdVar42 + 1;
                    pdVar31 = pdVar31 + 1;
                  }
                  iVar15 = iVar36 * 2;
                  iVar37 = iVar36 * 2 + 1;
                  iVar17 = iVar36;
                } while ((longlong)iVar37 < (longlong)puVar24);
                puVar49 = (uint *)((longlong)puVar24 + -1);
                pdVar42 = pdVar19;
                pdVar31 = &local_118;
                for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar31 = *pdVar42;
                  pdVar42 = pdVar42 + 1;
                  pdVar31 = pdVar31 + 1;
                }
                pdVar42 = pdVar19 + (longlong)puVar49 * 10;
                pdVar31 = pdVar19;
                for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar31 = *pdVar42;
                  pdVar42 = pdVar42 + 1;
                  pdVar31 = pdVar31 + 1;
                }
                pdVar42 = &local_118;
                pdVar31 = pdVar19 + (longlong)puVar49 * 10;
                for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar31 = *pdVar42;
                  pdVar42 = pdVar42 + 1;
                  pdVar31 = pdVar31 + 1;
                }
                puVar23 = local_498;
              } while ((uint *)0x2 < puVar24);
            }
          }
        }
LAB_1441925b1:
        puVar23 = puVar23 + -6;
      } while (&local_418 <= puVar23);
      uVar45 = (ulonglong)local_478;
      param_1 = local_4a8;
    }
    uVar33 = 1;
    if ((int)uVar45 < 1) {
      uVar33 = uVar45 & 0xffffffff;
    }
    FUN_148d6edd2(&local_480,uVar33);
    if ((char)param_1[0x101] == '\0') {
      fStack_400 = (float)((uint)fStack_400 & 0xffffff00);
      if ((int)param_1[0x13f] < 2) {
LAB_144192665:
        bVar12 = 0;
LAB_144192667:
        if ((char)param_1[0x10f] == '\x01') {
          local_408._0_4_ = (undefined4)param_1[0x10e];
          local_408._4_4_ = (undefined4)((ulonglong)param_1[0x10e] >> 0x20);
          local_418 = (code *)param_1[0x10c];
          uStack_410 = (code *)param_1[0x10d];
          fStack_400 = (float)CONCAT31(fStack_400._1_3_,1);
LAB_144193f9f:
          uVar45 = 0;
          FUN_148d6d676(param_1,&local_118,0,&local_418);
          goto LAB_144193fbc;
        }
        if ((bVar12 & 1) != 0) goto LAB_144193f9f;
LAB_144194312:
        lVar18 = 0;
      }
      else {
        dVar58 = (double)param_1[0x107];
        dVar61 = (double)param_1[0x10e];
        dVar7 = (double)param_1[0x106];
        dVar62 = (double)param_1[0x10d];
        dVar8 = (double)param_1[0x105];
        dVar59 = (double)param_1[0x10c];
        fVar53 = *(float *)(param_1 + 0xcb);
        fVar64 = *(float *)(param_1 + 0xcc);
        lVar18 = FUN_1447210f0(param_1);
        if (lVar18 == 0) goto LAB_144192665;
        fVar54 = (float)SQRT((dVar58 - dVar61) * (dVar58 - dVar61) +
                             (dVar8 - dVar59) * (dVar8 - dVar59) +
                             (dVar7 - dVar62) * (dVar7 - dVar62));
        if (fVar54 <= ABS(fVar64)) {
          fVar54 = ABS(fVar64);
        }
        if (fVar54 <= ABS(fVar53)) {
          fVar54 = ABS(fVar53);
        }
        local_458 = 0;
        uStack_450 = 0;
        dVar58 = (double)(fVar54 + fVar54);
        local_108 = (double)param_1[0x10a] * dVar58 + (double)param_1[0x107];
        uStack_110 = (double)param_1[0x109] * dVar58 + (double)param_1[0x106];
        local_118 = dVar58 * (double)param_1[0x108] + (double)param_1[0x105];
        local_508 = &local_118;
        local_438 = *local_488;
        uStack_434 = local_488[1];
        uStack_430 = local_488[2];
        uStack_42c = local_488[3];
        local_428 = *(longlong *)(local_488 + 4);
        local_4e0 = (code *)&local_469;
        local_4e8 = (wchar_t *)&DAT_14cad0f08;
        local_4f0 = &DAT_14cad0f10;
        local_4f8 = &DAT_14cad0f68;
        local_500 = 1;
        cVar14 = FUN_1401e2596(lVar18,&local_458);
        uVar45 = 0xffffffff;
        if (cVar14 != '\0') {
          if ((longlong)(int)uStack_450 != 0) {
            lVar47 = (longlong)(int)uStack_450 * 0x100 + local_458;
            lVar18 = local_458;
            do {
              if (fStack_400._0_1_ == '\0') {
                local_408._0_4_ = (undefined4)*(undefined8 *)(lVar18 + 0x38);
                local_408._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x38) >> 0x20);
                local_418 = *(code **)(lVar18 + 0x28);
                uStack_410 = *(code **)(lVar18 + 0x30);
                fStack_400 = (float)CONCAT31(fStack_400._1_3_,1);
                uVar26 = FUN_14485cccc(lVar18 + 0xb8);
                iVar15 = (int)param_1[0x13f];
                uVar45 = 0xffffffff;
                if (0 < iVar15) {
                  lVar25 = 8;
                  uVar33 = 0;
                  do {
                    if (*(longlong *)(param_1[0x13e] + lVar25) != 0) {
                      cVar14 = FUN_148d70108(*(longlong *)(param_1[0x13e] + lVar25),uVar26);
                      if (cVar14 != '\0') {
                        uVar45 = uVar33 & 0xffffffff;
                        break;
                      }
                      iVar15 = (int)param_1[0x13f];
                    }
                    uVar33 = uVar33 + 1;
                    lVar25 = lVar25 + 0x80;
                  } while ((longlong)uVar33 < (longlong)iVar15);
                }
              }
              lVar18 = lVar18 + 0x100;
            } while (lVar18 != lVar47);
          }
        }
        if (local_458 != 0) {
          FUN_1400020a8(local_458);
        }
        bVar12 = fStack_400._0_1_;
        if (((uint)fStack_400 & 1) == 0) goto LAB_144192667;
        FUN_148d6d676(param_1,&local_118,uVar45,&local_418);
        if ((int)uVar45 < 0) goto LAB_144194312;
LAB_144193fbc:
        if ((int)param_1[0x13f] <= (int)uVar45) goto LAB_144194312;
        lVar47 = uVar45 * 0x80;
        lVar18 = *(longlong *)(param_1[0x13e] + 8 + lVar47);
        if (lVar18 == 0) goto LAB_144194312;
        lVar18 = FUN_144194d16(lVar18,&local_118);
        lVar25 = *(longlong *)(*(longlong *)(param_1[0x13e] + 8 + lVar47) + 0x60);
        if ((lVar25 != 0) && (fVar53 = (float)FUN_140e0ad52(lVar25,&local_118), 0.25 < fVar53)) {
          if (*(longlong *)(param_1[0x13e] + lVar47) == 0) {
            lVar25 = FUN_14050c909();
            lVar47 = *(longlong *)(lVar25 + 0x188);
            if (lVar47 == 0) {
              uVar26 = FUN_141030812();
              lVar47 = FUN_14477b664(uVar26);
              *(longlong *)(lVar25 + 0x188) = lVar47;
            }
            lVar18 = *(longlong *)(lVar25 + 400);
            if (((lVar18 == 0) && (lVar18 = 0, lVar47 != 0)) && (*(longlong *)(lVar25 + 0x180) != 0)
               ) {
              plVar22 = *(longlong **)(lVar47 + 0xb8);
              if ((plVar22 == (longlong *)0x0) ||
                 (cVar14 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar14 == '\0')) {
                lVar18 = 0;
              }
              else {
                uVar26 = (**(code **)(*plVar22 + 0x110))(plVar22);
                lVar18 = FUN_144aff482(uVar26,(longlong *)(lVar25 + 0x180));
              }
              *(longlong *)(lVar25 + 400) = lVar18;
              param_1 = local_4a8;
            }
          }
          else {
            lVar18 = FUN_1457331aa();
          }
        }
      }
      if (lVar18 != param_1[0x125]) {
        param_1[0x125] = lVar18;
        FUN_145cf6038(param_1);
      }
    }
    plVar22 = param_1 + 0x171;
    if (((char)param_1[0x175] == '\x01') &&
       (fVar63 = fVar63 + *(float *)(param_1 + 0x17b),
       local_478 == 0 &&
       fVar63 * fVar63 <=
       (float)(((double)param_1[0x176] - (double)local_468) *
               ((double)param_1[0x176] - (double)local_468) +
              ((double)param_1[0x177] - uStack_460) * ((double)param_1[0x177] - uStack_460)))) {
      FUN_145cf5fc0(plVar22,param_1);
    }
    pcVar20 = local_480;
    if ((0 < (int)local_478) && ((char)param_1[0x175] == '\0')) {
      fVar64 = *(float *)((longlong)param_1 + 0x504) / *(float *)(param_1 + 0xa0);
      fVar53 = *(float *)((longlong)param_1 + 0x57c);
      fVar63 = *(float *)(param_1 + 0xb0);
      FUN_145cf5fc0(plVar22,param_1);
      *(undefined1 *)(param_1 + 0x175) = 1;
      lVar18 = *(longlong *)(pcVar20 + 0x40);
      param_1[0x176] = *(longlong *)(pcVar20 + 0x38);
      param_1[0x177] = lVar18;
      *(float *)(param_1 + 0x17b) = fVar64 * fVar63 + fVar53 * fVar64;
      uVar16 = *(undefined4 *)(pcVar20 + 0x24);
      uVar55 = *(undefined4 *)(pcVar20 + 0x28);
      uVar56 = *(undefined4 *)(pcVar20 + 0x2c);
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(pcVar20 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0xbc4) = uVar16;
      *(undefined4 *)(param_1 + 0x179) = uVar55;
      *(undefined4 *)((longlong)param_1 + 0xbcc) = uVar56;
      param_1[0x17a] = 0;
      FUN_148d6ee42(plVar22,*(longlong *)local_480);
      fVar53 = *(float *)((longlong)param_1 + 0x504) / *(float *)(param_1 + 0xa0);
      local_508 = (double *)CONCAT71(local_508._1_7_,1);
      FUN_1441948f0(param_1,&local_418,local_480 + 0x38,
                    fVar53 * *(float *)(param_1 + 0xb0) +
                    *(float *)((longlong)param_1 + 0x57c) * fVar53);
      pcVar20 = local_418;
      lVar18 = (longlong)(int)uStack_410;
      if (lVar18 != 0) {
        lVar47 = 0;
        do {
          FUN_148d6ee42(plVar22,*(undefined8 *)(pcVar20 + lVar47));
          lVar47 = lVar47 + 0x50;
        } while (lVar18 * 0x50 != lVar47);
      }
      FUN_148d6eea6(plVar22,param_1);
      if (local_418 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    local_4b0 = (uint *)(param_1 + 0x110);
    if (local_478 == *(uint *)(param_1 + 0x111)) {
      if (0 < (int)local_478) {
        lVar18 = 0;
        pcVar20 = local_480;
        do {
          if ((*(longlong **)pcVar20 == (longlong *)0x0) ||
             (*(longlong *)(*(longlong *)local_4b0 + lVar18) != **(longlong **)pcVar20))
          goto LAB_14419454c;
          lVar18 = lVar18 + 0x18;
          pcVar20 = pcVar20 + 0x50;
        } while ((ulonglong)local_478 * 0x18 != lVar18);
      }
    }
    else {
LAB_14419454c:
      *(undefined4 *)(param_1 + 0x111) = 0;
      if (*(int *)((longlong)param_1 + 0x88c) < 0) {
        FUN_145843ebc(local_4b0,0);
      }
      pcVar20 = local_480;
      puVar23 = local_4b0;
      if (local_478 != 0) {
        lVar18 = 0;
        do {
          puVar29 = *(undefined8 **)(pcVar20 + lVar18);
          uVar26 = puVar29[0x11];
          if (((((*(int *)((longlong)puVar29 + 0xc) == 0) ||
                (uVar48 = *(uint *)(puVar29 + 1), (int)uVar48 < 0)) ||
               (DAT_14c9647dc <= (int)uVar48)) ||
              ((plVar22 = (longlong *)
                          ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
               plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)((longlong)puVar29 + 0xc)))
              )) || ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) {
            uVar51 = *puVar29;
LAB_1441946c9:
            uVar48 = 0;
            iVar15 = 0;
          }
          else {
            uVar51 = *puVar29;
            if (*plVar22 == 0) goto LAB_1441946c9;
            uVar48 = *(uint *)(*plVar22 + 0xc);
            if ((int)uVar48 < DAT_14c9647dc) {
              lVar47 = (ulonglong)((uVar48 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8);
            }
            else {
              lVar47 = 0;
            }
            iVar15 = *(int *)(lVar47 + 0x10);
            if (*(int *)(lVar47 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar52 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar52) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
                puVar23 = local_4b0;
              }
              LOCK();
              iVar15 = *(int *)(lVar47 + 0x10);
              bVar52 = iVar15 == 0;
              if (bVar52) {
                *(int *)(lVar47 + 0x10) = iVar17;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar52) {
                iVar15 = iVar17;
              }
            }
          }
          iVar17 = (int)local_4a8[0x111];
          lVar47 = (longlong)iVar17;
          *(uint *)(local_4a8 + 0x111) = iVar17 + 1U;
          if (*(uint *)((longlong)local_4a8 + 0x88c) < iVar17 + 1U) {
            FUN_148d747da(puVar23,iVar17);
            puVar23 = local_4b0;
          }
          lVar25 = *(longlong *)puVar23;
          *(undefined8 *)(lVar25 + lVar47 * 0x18) = uVar51;
          *(uint *)(lVar25 + 8 + lVar47 * 0x18) = uVar48;
          *(int *)(lVar25 + 0xc + lVar47 * 0x18) = iVar15;
          *(undefined8 *)(lVar25 + 0x10 + lVar47 * 0x18) = uVar26;
          lVar18 = lVar18 + 0x50;
        } while ((longlong)(int)local_478 * 0x50 != lVar18);
      }
      param_1 = local_4a8;
      FUN_145cf6096(local_4a8 + 0x90,puVar23);
    }
    if (local_480 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_1441926a0:
    FUN_145cf5f30(param_1,0);
  }
  if ((((int)param_1[0x156] == 0) && ((char)param_1[0x124] != '\x01')) &&
     ((char)param_1[0x101] != '\x01')) {
    if ((char)param_1[0xf1] == '\x01') {
      FUN_145cf5fc0(param_1 + 0x171,param_1);
      fVar63 = *(float *)(param_1 + 0xef) + param_2;
      *(float *)(param_1 + 0xef) = fVar63;
      fVar53 = *(float *)((longlong)param_1 + 0x5bc);
      if ((fVar53 <= fVar63) || (fVar53 < 0.0001)) {
        if (param_1[0x78] != 0) {
          *(int *)(param_1[0x78] + 0x390) = (int)param_1[0xee];
        }
        FUN_14596238c(param_1,param_1 + 0xeb);
        if ((char)param_1[0xf1] == '\x01') {
          if (*(char *)((longlong)param_1 + 0x784) == '\x01') {
            *(undefined1 *)((longlong)param_1 + 0x784) = 0;
          }
          *(undefined1 *)(param_1 + 0xf1) = 0;
        }
        FUN_148d6dfc8(param_1);
      }
      else {
        fVar63 = fVar63 / fVar53;
        plVar22 = (longlong *)(param_1[0xc9] + 0x30);
        if (param_1[0xc9] == 0) {
          plVar22 = param_1 + 0xb9;
        }
        if (plVar22 != (longlong *)0x0) {
          fVar64 = 0.0;
          fVar54 = 0.0;
          if ((longlong)(int)plVar22[0xf] != 0) {
            fVar64 = *(float *)(plVar22[0xe] + 4);
            fVar54 = *(float *)(plVar22[0xe] + -0x18 + (longlong)(int)plVar22[0xf] * 0x1c);
          }
          fVar53 = (float)(-(uint)(1e-08 < ABS(fVar53)) & (uint)fVar63);
          if (1.0 <= fVar53) {
            fVar53 = 1.0;
          }
          if (fVar53 <= 0.0) {
            fVar53 = 0.0;
          }
          fVar63 = (float)FUN_1448c9f94(fVar63,(fVar54 - fVar64) * fVar53 + fVar64);
        }
        dVar58 = (double)fVar63;
        local_408 = ((double)param_1[0xed] - (double)param_1[0xe9]) * dVar58 + (double)param_1[0xe9]
        ;
        uStack_410 = (code *)(((double)param_1[0xec] - (double)param_1[0xe8]) * dVar58 +
                             (double)param_1[0xe8]);
        local_418 = (code *)(((double)param_1[0xeb] - (double)param_1[0xe7]) * dVar58 +
                            (double)param_1[0xe7]);
        lVar18 = param_1[0x78];
        if (lVar18 != 0) {
          fVar53 = fVar63 * (*(float *)(param_1 + 0xee) - *(float *)(param_1 + 0xea)) +
                   *(float *)(param_1 + 0xea);
LAB_144193cfd:
          *(float *)(lVar18 + 0x390) = fVar53;
        }
LAB_144193d05:
        FUN_14596238c(param_1,&local_418);
      }
    }
    else if (1e-08 < ABS(*(float *)(param_1 + 0xe3))) {
      FUN_145cf5fc0(param_1 + 0x171,param_1);
      FUN_148d6ebd8(param_1,&local_418);
      lVar18 = param_1[0x78];
      fVar53 = fStack_400;
      if (lVar18 != 0) goto LAB_144193cfd;
      goto LAB_144193d05;
    }
  }
  else {
    local_408 = (double)CONCAT44(local_408._4_4_,(undefined4)local_408);
    if ((char)param_1[0xf1] == '\x01') {
      if (*(char *)((longlong)param_1 + 0x784) == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x784) = 0;
      }
      *(undefined1 *)(param_1 + 0xf1) = 0;
      local_408 = (double)CONCAT44(local_408._4_4_,(undefined4)local_408);
    }
  }
  if (((int)param_1[0x156] == 0) && ((char)param_1[0x124] != '\x01')) {
    if ((char)param_1[0xf1] != '\x01') {
      if ((char)param_1[0x101] == '\0') {
        if ((1e-08 < ABS((double)param_1[0xda])) || (1e-08 < ABS((double)param_1[0xdb]))) {
          lVar18 = param_1[0x9c];
          bVar52 = lVar18 != 0;
          pdVar19 = (double *)&DAT_14c8464e0;
          if (bVar52) {
            pdVar19 = (double *)(lVar18 + 0x198);
          }
          pdVar42 = (double *)&DAT_14c8464e8;
          if (bVar52) {
            pdVar42 = (double *)(lVar18 + 0x1a0);
          }
          pdVar31 = (double *)&DAT_14c8464f0;
          if (bVar52) {
            pdVar31 = (double *)(lVar18 + 0x1a8);
          }
          uStack_410 = (code *)(*pdVar42 -
                               (double)param_1[0xdb] * (double)*(float *)(param_1 + 0xb7) *
                               (double)param_2 * (double)*(float *)(param_1 + 0x104));
          local_408 = *pdVar31 + 0.0;
          local_418 = (code *)((double)param_1[0xda] * (double)*(float *)(param_1 + 0xb7) *
                               (double)param_2 * (double)*(float *)(param_1 + 0x104) + *pdVar19);
          FUN_14596238c(param_1);
          iVar15 = *(int *)((longlong)param_1 + 0x4dc);
          *(int *)((longlong)param_1 + 0x4dc) = iVar15 + 1;
          uVar45 = (ulonglong)(int)param_1[0x9a];
          if ((longlong)uVar45 < 1) {
            *(int *)((longlong)param_1 + 0x4dc) = iVar15;
          }
          else {
            plVar22 = param_1 + 0x99;
            bVar52 = false;
            do {
              lVar18 = uVar45 * 0x10 + -8;
              uVar33 = uVar45;
              while ((*(int *)(*plVar22 + lVar18) != 0 &&
                     (plVar35 = *(longlong **)(*plVar22 + -8 + lVar18), plVar35 != (longlong *)0x0))
                    ) {
                cVar14 = (**(code **)(*plVar35 + 0x60))();
                if (cVar14 == '\0') break;
                lVar18 = lVar18 + -0x10;
                bVar6 = uVar33 < 2;
                uVar33 = uVar33 - 1;
                if (bVar6) {
                  iVar15 = *(int *)((longlong)param_1 + 0x4dc) + -1;
                  *(int *)((longlong)param_1 + 0x4dc) = iVar15;
                  if (!bVar52) goto LAB_14419271a;
                  goto LAB_144193e8b;
                }
              }
              uVar45 = uVar33 - 1;
              bVar52 = true;
            } while (1 < uVar33);
            iVar15 = *(int *)((longlong)param_1 + 0x4dc) + -1;
            *(int *)((longlong)param_1 + 0x4dc) = iVar15;
LAB_144193e8b:
            if (iVar15 < 1) {
              iVar15 = (int)param_1[0x9a];
              iVar17 = iVar15;
              if (0 < iVar15) {
                iVar37 = 0;
                do {
                  if ((*(int *)(*plVar22 + 8 + (longlong)iVar37 * 0x10) == 0) ||
                     (plVar35 = *(longlong **)(*plVar22 + (longlong)iVar37 * 0x10),
                     plVar35 == (longlong *)0x0)) {
LAB_144193ede:
                    FUN_14005b288(plVar22,iVar37);
                    FUN_14005b248(plVar22);
                  }
                  else {
                    cVar14 = (**(code **)(*plVar35 + 0x28))();
                    if (cVar14 != '\0') goto LAB_144193ede;
                    iVar37 = iVar37 + 1;
                  }
                  iVar17 = (int)param_1[0x9a];
                } while (iVar37 < iVar17);
              }
              iVar37 = 2;
              if (2 < iVar17 * 2) {
                iVar37 = iVar17 * 2;
              }
              *(int *)(param_1 + 0x9b) = iVar37;
              if ((iVar37 < iVar15) && (*(int *)((longlong)param_1 + 0x4d4) != iVar17)) {
                FUN_14045812c(plVar22);
              }
            }
          }
        }
      }
      else {
        dVar58 = (double)param_1[0xe5];
        dVar61 = (double)param_1[0xe6];
        dVar7 = (double)param_1[0xf4];
        dVar62 = (double)param_1[0xf3];
        fVar53 = *(float *)(param_1 + 0x104);
        fVar63 = (float)FUN_1413eca68(param_1);
        local_408 = (double)param_1[0xfa] + 0.0;
        uStack_410 = (code *)((dVar61 - dVar7) * (double)fVar53 + (double)param_1[0xf9]);
        local_418 = (code *)((double)param_1[0xf8] -
                            (double)fVar63 * (dVar58 - dVar62) * (double)fVar53);
        FUN_14596238c(param_1);
      }
      goto LAB_14419271a;
    }
    if ((char)param_1[0x101] == '\0') goto LAB_14419271a;
  }
  else if ((char)param_1[0x101] != '\x01') goto LAB_14419271a;
  *(undefined1 *)(param_1 + 0x101) = 0;
LAB_14419271a:
  if ((longlong)(int)param_1[0x13f] == 0) {
LAB_144192726:
    plVar22 = local_4a8;
    if (*(char *)((longlong)local_4a8 + 0x68c) == '\x01') {
      fVar53 = *(float *)(local_4a8 + 0xd2);
    }
    else {
      fVar53 = (float)FUN_1441947f2(local_4a8);
    }
    if ((*(char *)((longlong)plVar22 + 0x9ec) != '\x01') ||
       (1e-08 < ABS(*(float *)(plVar22 + 0x13d) - fVar53))) {
      *(float *)(plVar22 + 0x13d) = fVar53;
      *(undefined1 *)((longlong)plVar22 + 0x9ec) = 1;
      lVar18 = plVar22[0x13f];
      if ((longlong)(int)lVar18 != 0) {
        lVar47 = plVar22[0x13e];
        lVar25 = 0;
        do {
          if (*(longlong *)(lVar47 + 8 + lVar25) != 0) {
            FUN_148d6eca2();
          }
          lVar25 = lVar25 + 0x80;
        } while ((longlong)(int)lVar18 * 0x80 != lVar25);
      }
      local_418 = (code *)0x14b97996c;
      uStack_410 = (code *)CONCAT35(uStack_410._5_3_,0x13);
      uVar48 = FUN_14001a6c0(&local_418,1);
      lVar18 = FUN_141582ac8(plVar22,2,0);
      if (lVar18 != 0) {
        uStack_110 = (double)CONCAT71(uStack_110._1_7_,2);
        uStack_110 = (double)CONCAT44(0xffffffff,(undefined4)uStack_110);
        local_418 = (code *)((ulonglong)local_418 & 0xffffffffffffff00);
        uStack_410 = (code *)0x0;
        local_408._0_4_ = 0;
        local_408._4_4_ = 0;
        fStack_400 = 0.0;
        uStack_3fc = 0;
        dStack_3f8 = 0.0;
        dStack_3f0 = 0.0;
        dStack_3e8 = 0.0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3d0 = 0;
        uStack_3c8 = 0;
        local_508 = (double *)&local_418;
        local_118 = (double)(ulonglong)uVar48;
        FUN_140042bb4(lVar18);
      }
      lVar18 = FUN_141582ac8(plVar22,4,0);
      if (lVar18 != 0) {
        uStack_110 = (double)CONCAT71(uStack_110._1_7_,2);
        uStack_110 = (double)CONCAT44(0xffffffff,(undefined4)uStack_110);
        local_418 = (code *)((ulonglong)local_418 & 0xffffffffffffff00);
        uStack_410 = (code *)0x0;
        local_408._0_4_ = 0;
        local_408._4_4_ = 0;
        fStack_400 = 0.0;
        uStack_3fc = 0;
        dStack_3f8 = 0.0;
        dStack_3f0 = 0.0;
        dStack_3e8 = 0.0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3d0 = 0;
        uStack_3c8 = 0;
        local_508 = (double *)&local_418;
        local_118 = (double)(ulonglong)uVar48;
        FUN_140042bb4(lVar18);
      }
    }
    if (((int)plVar22[0x76] != 0) && ((longlong *)plVar22[0x75] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)plVar22[0x75] + 0x60))();
    }
    if ((local_c0 ^ (ulonglong)auStack_528) == DAT_14c707940) {
      FUN_148d6eac4(plVar22 + 0x171,plVar22);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_528);
  }
  puVar23 = (uint *)local_4a8[0x13e];
  local_4b0 = puVar23 + (longlong)(int)param_1[0x13f] * 0x20;
LAB_144192776:
  lVar18 = *(longlong *)(puVar23 + 2);
  if (lVar18 != 0) {
    if (*(char *)(lVar18 + 0x204) == '\x01') {
      *(undefined1 *)(lVar18 + 0x204) = 0;
      if ((((*(int *)(lVar18 + 0x14) == 0) || (uVar48 = *(uint *)(lVar18 + 0x10), (int)uVar48 < 0))
          || (DAT_14c9647dc <= (int)uVar48)) ||
         (((lVar47 = (ulonglong)((uVar48 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8), lVar47 == 0 ||
           (*(int *)(lVar47 + 0x10) != *(int *)(lVar18 + 0x14))) ||
          (((*(uint *)(lVar47 + 8) & 0x10200000) != 0 || (*(longlong *)(lVar18 + 0x60) == 0)))))) {
LAB_1441927e3:
        FUN_1413ecfba();
        goto LAB_1441927eb;
      }
      cVar14 = FUN_148827e1c();
      if (cVar14 == '\0') goto LAB_1441927e3;
      if ((*(int *)(lVar18 + 0x14) == 0) || (uVar48 = *(uint *)(lVar18 + 0x10), (int)uVar48 < 0)) {
LAB_14419321a:
        lVar47 = 0;
      }
      else {
        lVar47 = 0;
        if ((int)uVar48 < DAT_14c9647dc) {
          plVar22 = (longlong *)
                    ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8));
          if (((plVar22 == (longlong *)0x0) || ((int)plVar22[2] != *(int *)(lVar18 + 0x14))) ||
             ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) goto LAB_14419321a;
          lVar47 = *plVar22;
        }
      }
      if ((((*(int *)(lVar47 + 0x3ec) == 0) || (uVar48 = *(uint *)(lVar47 + 1000), (int)uVar48 < 0))
          || ((DAT_14c9647dc <= (int)uVar48 ||
              ((plVar22 = (longlong *)
                          ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
               plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(lVar47 + 0x3ec))))))) ||
         (((*(uint *)(plVar22 + 1) & 0x10200000) != 0 ||
          ((lVar47 = *plVar22, lVar47 == 0 || (lVar25 = *(longlong *)(lVar47 + 0xa08), lVar25 == 0))
          )))) goto LAB_1441927e3;
      if (DAT_14cba8288 == 0) {
        local_418 = FUN_141864c34;
        local_4c0 = FUN_14081d0ea;
        local_4c8 = &LAB_1464cee30;
        local_4d0 = &local_418;
        local_4d8 = &LAB_148bfac22;
        local_4e0 = (code *)&LAB_140f21842;
        local_4e8 = L"Game";
        local_4f0 = (undefined1 *)0x0;
        local_4f8 = (undefined *)CONCAT44(local_4f8._4_4_,0x10000004);
        local_500 = 0x10;
        local_508 = (double *)CONCAT44(local_508._4_4_,0x9cd0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
      goto LAB_1441927e3;
      FUN_141313b0e(lVar25,&local_438,&local_458);
      local_468 = (undefined8 *)0x0;
      uStack_460 = 0.0;
      if (0 < *(int *)(lVar18 + 0x1b8)) {
        puVar29 = *(undefined8 **)(lVar18 + 0x1b0);
LAB_144193246:
        uVar26 = *puVar29;
        local_408._0_4_ = (undefined4)DAT_14c8464f0;
        local_408._4_4_ = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        local_418 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_410 = (code *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        uStack_460 = 4.94065645841247e-324;
        FUN_148d75c44(&local_468,0);
        *local_468 = uVar26;
        *(uint *)(local_468 + 1) = (uint)local_418;
        *(undefined4 *)((longlong)local_468 + 0xc) = local_418._4_4_;
        *(int *)(local_468 + 2) = (int)uStack_410;
        *(undefined4 *)((longlong)local_468 + 0x14) = uStack_410._4_4_;
        local_468[3] = local_408;
        *(undefined1 *)(local_468 + 4) = 1;
        local_468[5] = 0x7fefffffffffffff;
        *(undefined4 *)(local_468 + 6) = 0xffffffff;
        *(undefined1 *)((longlong)local_468 + 0x34) = 0;
LAB_1441932c3:
        puVar29 = local_468;
        ppuVar1 = (undefined8 **)(lVar18 + 0x1e0);
        if ((int)uStack_460 == *(int *)(lVar18 + 0x1e8)) {
          cVar14 = FUN_148d75dc2(local_468,*ppuVar1);
          if (cVar14 != '\0') goto LAB_144193709;
        }
        FUN_1413ecfba();
        puVar29 = local_468;
        if (ppuVar1 == &local_468) {
LAB_144193364:
          iVar15 = *(int *)(lVar18 + 0x1e8);
        }
        else {
          iVar15 = (int)uStack_460;
          *(int *)(lVar18 + 0x1e8) = (int)uStack_460;
          if ((int)uStack_460 != 0 || *(int *)(lVar18 + 0x1ec) != 0) {
            FUN_148d75e06(ppuVar1,(ulonglong)uStack_460 & 0xffffffff);
            if (iVar15 != 0) {
              memcpy(*ppuVar1,puVar29,(longlong)iVar15 * 0x38);
            }
            goto LAB_144193364;
          }
          *(undefined4 *)(lVar18 + 0x1ec) = 0;
        }
        if (0 < iVar15) {
          lVar47 = 0;
          iVar15 = 0;
LAB_14419337f:
          plVar22 = *ppuVar1 + lVar47 * 7;
          if ((*ppuVar1)[lVar47 * 7] == 0) {
            uVar16 = (undefined4)plVar22[6];
            uVar13 = *(undefined1 *)((longlong)plVar22 + 0x34);
            pdVar19 = (double *)(plVar22 + 1);
            local_508 = (double *)CONCAT71(local_508._1_7_,(char)plVar22[4]);
            goto LAB_1441935df;
          }
          iVar37 = 0;
          iVar17 = 0;
          if ((((*(int *)(lVar18 + 0x14) != 0) &&
               (uVar48 = *(uint *)(lVar18 + 0x10), -1 < (int)uVar48)) &&
              ((iVar17 = iVar37, (int)uVar48 < DAT_14c9647dc &&
               (((lVar25 = (ulonglong)((uVar48 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8),
                 lVar25 != 0 && (*(int *)(lVar25 + 0x10) == *(int *)(lVar18 + 0x14))) &&
                ((*(uint *)(lVar25 + 8) & 0x10200000) == 0)))))) &&
             (*(longlong *)(lVar18 + 0x60) != 0)) {
            cVar14 = FUN_148827e1c();
            if (cVar14 != '\0') {
              lVar25 = FUN_1447210f0();
              if (lVar25 != 0) {
                if ((*(int *)(lVar18 + 0x14) == 0) ||
                   (uVar48 = *(uint *)(lVar18 + 0x10), (int)uVar48 < 0)) {
LAB_1441936c7:
                  lVar25 = 0;
                }
                else {
                  lVar25 = 0;
                  if ((int)uVar48 < DAT_14c9647dc) {
                    plVar35 = (longlong *)
                              ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8));
                    if (((plVar35 == (longlong *)0x0) ||
                        ((int)plVar35[2] != *(int *)(lVar18 + 0x14))) ||
                       ((*(uint *)(plVar35 + 1) & 0x10200000) != 0)) goto LAB_1441936c7;
                    lVar25 = *plVar35;
                  }
                }
                if (((((*(int *)(lVar25 + 0x3ec) != 0) &&
                      (uVar48 = *(uint *)(lVar25 + 1000), -1 < (int)uVar48)) &&
                     ((int)uVar48 < DAT_14c9647dc)) &&
                    ((plVar35 = (longlong *)
                                ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
                     plVar35 != (longlong *)0x0 && ((int)plVar35[2] == *(int *)(lVar25 + 0x3ec)))))
                   && (((*(uint *)(plVar35 + 1) & 0x10200000) == 0 &&
                       ((*plVar35 != 0 && (*(int *)(lVar18 + 0x80) != *(int *)(lVar18 + 0xac)))))))
                {
                  lVar25 = *plVar22;
                  lVar34 = *(longlong *)(lVar18 + 0xb8);
                  if (*(longlong *)(lVar18 + 0xb8) == 0) {
                    lVar34 = lVar18 + 0xb0;
                  }
                  iVar37 = *(int *)(lVar34 + (ulonglong)
                                             (*(int *)(lVar18 + 0xc0) - 1U &
                                             (int)lVar25 + (int)((ulonglong)lVar25 >> 0x20) * 0x17)
                                             * 4);
                  if (iVar37 != -1) {
                    lVar34 = *(longlong *)(lVar18 + 0x78);
                    iVar36 = iVar37;
                    do {
                      if (*(longlong *)(lVar34 + (longlong)iVar36 * 0x180) == lVar25)
                      goto LAB_144193606;
                      iVar36 = *(int *)((longlong)iVar36 * 0x180 + lVar34 + 0x170);
                    } while (iVar36 != -1);
                  }
                }
              }
            }
          }
          goto LAB_1441935e7;
        }
        iVar15 = 0;
        goto LAB_1441936e9;
      }
      if (0 < *(int *)(lVar18 + 0x1c8)) {
        puVar29 = *(undefined8 **)(lVar18 + 0x1c0);
        goto LAB_144193246;
      }
      if (((((*(int *)(lVar18 + 0x14) == 0) || (uVar48 = *(uint *)(lVar18 + 0x10), (int)uVar48 < 0))
           || (DAT_14c9647dc <= (int)uVar48)) ||
          ((puVar29 = (undefined8 *)
                      ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
           puVar29 == (undefined8 *)0x0 || (*(int *)(puVar29 + 2) != *(int *)(lVar18 + 0x14))))) ||
         ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)) {
LAB_1441931f6:
        iVar15 = (int)uStack_460;
        if (2 < (int)uStack_460) {
          iVar15 = 3;
        }
        FUN_148d710f6(&local_468,iVar15);
        goto LAB_1441932c3;
      }
      if ((*(uint *)(puVar29 + 1) & 0x10200000) == 0) {
        uVar26 = *puVar29;
      }
      else {
        uVar26 = 0;
      }
      lVar25 = FUN_1410ac07e(uVar26);
      if (lVar25 == 0) goto LAB_1441931f6;
      if ((*(int *)(lVar18 + 0x14) == 0) || (uVar48 = *(uint *)(lVar18 + 0x10), (int)uVar48 < 0)) {
LAB_14419371f:
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        if ((int)uVar48 < DAT_14c9647dc) {
          puVar29 = (undefined8 *)
                    ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8));
          if (((puVar29 == (undefined8 *)0x0) || (*(int *)(puVar29 + 2) != *(int *)(lVar18 + 0x14)))
             || ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)) goto LAB_14419371f;
          uVar26 = *puVar29;
        }
      }
      lVar25 = FUN_1410ac07e(uVar26);
      if (*(char *)(lVar25 + 0x4c4) != '\x01') goto LAB_1441931f6;
      uVar26 = FUN_1447210f0(lVar47);
      lVar25 = FUN_140149a73(uVar26,0);
      puVar29 = local_468;
      if ((lVar25 != 0) && (*(longlong *)(lVar25 + 0x140) != 0)) {
        local_418 = (code *)0x0;
        uStack_410 = (code *)0x0;
        FUN_143d3dbc4(lVar47,*(longlong *)(lVar25 + 0x140),&local_438,&local_418);
        if (0 < (int)uStack_410) {
          lVar25 = 0x40;
          lVar47 = 0;
          do {
            pcVar20 = local_418;
            dVar58 = uStack_460;
            lVar34 = (longlong)(int)uStack_460;
            uVar48 = (int)uStack_460 + 1;
            uStack_460 = (double)CONCAT44(uStack_460._4_4_,uVar48);
            if (uStack_460._4_4_ < uVar48) {
              FUN_148d75c44(&local_468,(ulonglong)dVar58 & 0xffffffff);
            }
            puVar32 = local_468;
            FUN_148d75cd4(local_468 + lVar34 * 7,1);
            *(code *)(puVar32 + lVar34 * 7 + 4) = pcVar20[lVar25];
            *(int *)(puVar32 + lVar34 * 7 + 6) = (int)lVar47;
            puVar32[lVar34 * 7 + 3] = *(undefined8 *)(pcVar20 + lVar25 + -8);
            pcVar3 = pcVar20 + lVar25 + -0x18;
            uVar16 = *(undefined4 *)(pcVar3 + 4);
            uVar55 = *(undefined4 *)(pcVar3 + 8);
            uVar56 = *(undefined4 *)(pcVar3 + 0xc);
            puVar29 = puVar32 + lVar34 * 7 + 1;
            *(undefined4 *)puVar29 = *(undefined4 *)pcVar3;
            *(undefined4 *)((longlong)puVar29 + 4) = uVar16;
            *(undefined4 *)(puVar29 + 1) = uVar55;
            *(undefined4 *)((longlong)puVar29 + 0xc) = uVar56;
            *(bool *)((longlong)puVar32 + lVar34 * 0x38 + 0x34) =
                 pcVar20[lVar25 + -0x3f] == (code)0x4;
            lVar47 = lVar47 + 1;
            lVar25 = lVar25 + 0xe8;
          } while (lVar47 < (int)uStack_410);
        }
        FUN_141506615(local_418);
        if (local_418 != (code *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1441931f6;
      }
      goto LAB_144193709;
    }
    goto LAB_1441927eb;
  }
  goto LAB_144192d3e;
LAB_144191db1:
  if (cVar14 != '\0') goto LAB_144191d5f;
LAB_144191db5:
  fVar53 = *(float *)(pdVar38 + 0x13);
  if (ABS(*(float *)(pdVar19 + 9) - fVar53) <= 1e-08) {
    iVar15 = FUN_140f07b20();
    iVar17 = FUN_140f07b20(*pdVar41);
    if (iVar15 == iVar17) {
      if (*(ulonglong *)*pdVar41 <= *(ulonglong *)*pdVar19) goto LAB_144191d5f;
    }
    else if (iVar17 <= iVar15) goto LAB_144191d5f;
  }
  else if (fVar53 <= *(float *)(pdVar19 + 9)) goto LAB_144191d5f;
joined_r0x000144191e0f:
  do {
    while( true ) {
      pdVar38 = pdVar31;
      pdVar31 = pdVar38 + -10;
      if (pdVar31 <= pdVar19) goto LAB_144191ec9;
      if (*(char *)((longlong)pdVar38[-10] + 0x148) == '\x01') break;
      if ((*(char *)((longlong)*pdVar19 + 0x148) == '\x01') &&
         (*(char *)((longlong)*pdVar19 + 0x144) != '\0')) {
        pdVar38 = pdVar31 + 10;
        goto LAB_144191ec9;
      }
LAB_144191e63:
      if (1e-08 < ABS(*(float *)(pdVar31 + 9) - *(float *)(pdVar19 + 9))) {
        if (*(float *)(pdVar31 + 9) < *(float *)(pdVar19 + 9)) goto LAB_144191ec9;
      }
      else {
        iVar15 = FUN_140f07b20();
        iVar17 = FUN_140f07b20(*pdVar19);
        if (iVar15 == iVar17) {
          if (*(ulonglong *)*pdVar31 < *(ulonglong *)*pdVar19) goto LAB_144191ec9;
        }
        else if (iVar15 < iVar17) goto LAB_144191ec9;
      }
    }
    cVar14 = *(char *)((longlong)pdVar38[-10] + 0x144);
    if (*(char *)((longlong)*pdVar19 + 0x148) == '\0') {
      if (cVar14 == '\0') goto LAB_144191e63;
      goto joined_r0x000144191e0f;
    }
    if (cVar14 == *(char *)((longlong)*pdVar19 + 0x144)) goto LAB_144191e63;
  } while (cVar14 != '\0');
LAB_144191ec9:
  lVar18 = 10;
  pdVar40 = pdVar19;
  pdVar39 = pdVar41;
  pdVar46 = &local_118;
  if (pdVar41 <= pdVar31) {
    for (; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar46 = *pdVar39;
      pdVar39 = pdVar39 + 1;
      pdVar46 = pdVar46 + 1;
    }
    pdVar38 = pdVar31;
    pdVar40 = pdVar41;
    for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar40 = *pdVar38;
      pdVar38 = pdVar38 + 1;
      pdVar40 = pdVar40 + 1;
    }
    pdVar38 = &local_118;
    pdVar40 = pdVar31;
    for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar40 = *pdVar38;
      pdVar38 = pdVar38 + 1;
      pdVar40 = pdVar40 + 1;
    }
    goto LAB_144191d5f;
  }
  for (; lVar18 != 0; lVar18 = lVar18 + -1) {
    *pdVar46 = *pdVar40;
    pdVar40 = pdVar40 + 1;
    pdVar46 = pdVar46 + 1;
  }
  pdVar40 = pdVar31;
  pdVar39 = pdVar19;
  for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
    *pdVar39 = *pdVar40;
    pdVar40 = pdVar40 + 1;
    pdVar39 = pdVar39 + 1;
  }
  pdVar40 = &local_118;
  pdVar39 = pdVar31;
  for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
    *pdVar39 = *pdVar40;
    pdVar40 = pdVar40 + 1;
    pdVar39 = pdVar39 + 1;
  }
  uVar48 = (int)local_4b0 - 1;
  pdVar38 = pdVar38 + -0x14;
  if ((longlong)pdVar38 - (longlong)pdVar19 < (longlong)pdVar42 - (longlong)pdVar41) {
    if (pdVar41 < pdVar42) {
      *(double **)local_498 = pdVar41;
      *(double **)(local_498 + 2) = pdVar42;
      local_498[4] = uVar48;
      local_498 = local_498 + 6;
    }
    puVar23 = local_498;
    if (pdVar31 <= pdVar19 + 10) goto LAB_1441925b1;
  }
  else {
    puVar23 = local_498;
    if (pdVar19 + 10 < pdVar31) {
      *(double **)local_498 = pdVar19;
      *(double **)(local_498 + 2) = pdVar38;
      local_498[4] = uVar48;
      puVar23 = local_498 + 6;
    }
    pdVar38 = pdVar42;
    pdVar19 = pdVar41;
    if (pdVar42 <= pdVar41) goto LAB_1441925b1;
  }
  local_498 = puVar23;
  iVar15 = (int)((ulonglong)((longlong)pdVar38 - (longlong)pdVar19) >> 4) * -0x33333333;
  puVar24 = (uint *)(ulonglong)(iVar15 + 1);
  pdVar42 = pdVar38;
  if (uVar48 == 0) goto LAB_144191fd9;
  goto LAB_144191d11;
LAB_14419254b:
  if (cVar14 == '\0') {
LAB_14419254f:
    if (ABS(*(float *)(pdVar41 + 9) - *(float *)(pdVar31 + 9)) <= 1e-08) {
      iVar15 = FUN_140f07b20();
      iVar17 = FUN_140f07b20(*pdVar31);
      if (iVar15 == iVar17) {
        if (*(ulonglong *)*pdVar31 <= *(ulonglong *)*pdVar41) goto joined_r0x0001441924c4;
      }
      else if (iVar17 <= iVar15) goto joined_r0x0001441924c4;
    }
    else if (*(float *)(pdVar31 + 9) <= *(float *)(pdVar41 + 9)) goto joined_r0x0001441924c4;
LAB_144192570:
    pdVar41 = pdVar31;
  }
  goto joined_r0x0001441924c4;
  while (iVar37 = *(int *)(lVar50 + 0x170), iVar37 != -1) {
LAB_144193606:
    lVar50 = lVar34 + (longlong)iVar37 * 0x180;
    if (*(longlong *)(lVar34 + (longlong)iVar37 * 0x180) == lVar25) goto LAB_14419362b;
  }
  lVar50 = 0;
LAB_14419362b:
  if (((((*(int *)(lVar50 + 0x1c) != 0) && (uVar48 = *(uint *)(lVar50 + 0x18), -1 < (int)uVar48)) &&
       ((int)uVar48 < DAT_14c9647dc)) &&
      ((puVar29 = (undefined8 *)
                  ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
       puVar29 != (undefined8 *)0x0 && (*(int *)(puVar29 + 2) == *(int *)(lVar50 + 0x1c))))) &&
     ((*(uint *)(puVar29 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar29 + 1) & 0x10200000) == 0) {
      plVar22 = (longlong *)*puVar29;
    }
    else {
      plVar22 = (longlong *)0x0;
    }
    (**(code **)(*plVar22 + 0x2b0))(plVar22,&local_418);
    local_118 = dStack_3f8;
    uStack_110 = dStack_3f0;
    local_108 = dStack_3e8;
    local_508 = (double *)CONCAT71(local_508._1_7_,1);
    pdVar19 = &local_118;
    uVar13 = 1;
    uVar16 = 0;
LAB_1441935df:
    iVar17 = FUN_1441962a4(lVar18,pdVar19,uVar13,uVar16);
  }
LAB_1441935e7:
  if (iVar17 < iVar15) {
    iVar17 = iVar15;
  }
  iVar15 = iVar17;
  lVar47 = lVar47 + 1;
  if (*(int *)(lVar18 + 0x1e8) <= lVar47) goto LAB_1441936d3;
  goto LAB_14419337f;
LAB_1441936d3:
  if (2 < iVar15 - 1U) {
    iVar15 = 0;
  }
LAB_1441936e9:
  puVar29 = local_468;
  if (*(int *)(lVar18 + 0x200) != iVar15) {
    *(int *)(lVar18 + 0x200) = iVar15;
    *(undefined1 *)(lVar18 + 0x205) = 1;
  }
LAB_144193709:
  if (puVar29 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441927eb:
  if (*(char *)(lVar18 + 0x205) == '\x01') {
    *(undefined1 *)(lVar18 + 0x205) = 0;
    if (((*(int *)(lVar18 + 0x14) != 0) && (uVar48 = *(uint *)(lVar18 + 0x10), -1 < (int)uVar48)) &&
       (((int)uVar48 < DAT_14c9647dc &&
        (((lVar47 = (ulonglong)((uVar48 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8), lVar47 != 0 &&
          (*(int *)(lVar47 + 0x10) == *(int *)(lVar18 + 0x14))) &&
         ((*(uint *)(lVar47 + 8) & 0x10200000) == 0)))))) {
      FUN_1413ec8fe();
    }
  }
  fVar53 = 0.0;
  if ((((*(int *)(lVar18 + 0x14) != 0) && (uVar48 = *(uint *)(lVar18 + 0x10), -1 < (int)uVar48)) &&
      (((int)uVar48 < DAT_14c9647dc &&
       ((plVar22 = (longlong *)
                   ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
        plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(lVar18 + 0x14))))))) &&
     ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
      lVar47 = *plVar22;
    }
    else {
      lVar47 = 0;
    }
    if (*(char *)(lVar47 + 0x68c) == '\x01') {
      fVar53 = *(float *)(lVar47 + 0x690);
    }
    else {
      fVar53 = (float)FUN_1441947f2();
    }
  }
  if (*(char *)(lVar18 + 0x134) == '\x01') {
    if ((*(float *)(lVar18 + 0x130) != fVar53) || (NAN(*(float *)(lVar18 + 0x130)) || NAN(fVar53)))
    goto LAB_1441928e3;
  }
  else {
LAB_1441928e3:
    *(float *)(lVar18 + 0x130) = fVar53;
    *(undefined1 *)(lVar18 + 0x134) = 1;
    iVar15 = *(int *)(lVar18 + 0xa0);
    if (iVar15 == 0) {
      uVar45 = 1;
      uVar33 = 0;
      iVar37 = 0;
      iVar17 = 0;
    }
    else {
      puVar24 = *(uint **)(lVar18 + 0x98);
      if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
        puVar24 = (uint *)(lVar18 + 0x88);
      }
      uVar48 = *puVar24;
      if (uVar48 == 0) {
        iVar17 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar17 = iVar15 + -1;
        }
        uVar33 = 0;
        uVar45 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar45 = uVar33;
        }
        iVar37 = 0;
        do {
          if (uVar45 == uVar33) goto LAB_144192986;
          iVar37 = iVar37 + 0x20;
          uVar48 = puVar24[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar48 == 0);
      }
      else {
        uVar33 = 0;
        iVar37 = 0;
      }
      uVar45 = (ulonglong)(-uVar48 & uVar48);
      uVar2 = uVar45 * 2 + 1;
      lVar47 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
        }
      }
      iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar17) {
        iVar17 = iVar15;
      }
    }
    if (iVar17 != iVar15) {
      uVar48 = 0xffffffff;
      do {
        FUN_140f076f6(*(longlong *)(lVar18 + 0x78) + (longlong)iVar17 * 0x180 + 0x10);
        uVar48 = ~(uint)uVar45 & uVar48;
        puVar24 = *(uint **)(lVar18 + 0x98);
        if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
          puVar24 = (uint *)(lVar18 + 0x88);
        }
        iVar36 = *(int *)(lVar18 + 0xa0);
        iVar17 = (int)uVar33;
        lVar47 = (longlong)iVar17;
        uVar43 = puVar24[lVar47] & uVar48;
        if (uVar43 == 0) {
          iVar28 = iVar36 + 0x1e;
          if (-1 < iVar36 + -1) {
            iVar28 = iVar36 + -1;
          }
          iVar28 = iVar28 >> 5;
          iVar37 = iVar37 + 0x20;
          iVar27 = iVar28;
          if (iVar28 < iVar17) {
            iVar27 = iVar17;
          }
          if (iVar17 < iVar28) {
            lVar25 = 0;
            do {
              uVar43 = puVar24[lVar47 + lVar25 + 1];
              if (uVar43 != 0) {
                uVar33 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                uVar48 = 0xffffffff;
                goto LAB_144192ce5;
              }
              iVar37 = iVar37 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar27 - lVar47 != lVar25);
            uVar48 = 0xffffffff;
            iVar17 = iVar27;
          }
          uVar33 = (ulonglong)(iVar17 + 1);
          iVar17 = iVar36;
        }
        else {
LAB_144192ce5:
          uVar45 = (ulonglong)(-uVar43 & uVar43);
          uVar2 = uVar45 * 2 + 1;
          lVar47 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
            }
          }
          iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
          if (iVar36 <= iVar17) {
            iVar17 = iVar36;
          }
        }
      } while (iVar17 != iVar15);
    }
LAB_144192986:
    iVar15 = *(int *)(lVar18 + 0x150);
    if ((longlong)iVar15 != 0) {
      lVar47 = *(longlong *)(lVar18 + 0x148);
      lVar25 = 0;
      do {
        iVar17 = *(int *)(lVar47 + 4 + lVar25);
        if (((((iVar17 != 0) && (uVar48 = *(uint *)(lVar47 + lVar25), -1 < (int)uVar48)) &&
             ((int)uVar48 < DAT_14c9647dc)) &&
            ((puVar29 = (undefined8 *)
                        ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8)),
             puVar29 != (undefined8 *)0x0 && (*(int *)(puVar29 + 2) == iVar17)))) &&
           ((*(uint *)(puVar29 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar29 + 1) & 0x10200000) == 0) {
            uVar26 = *puVar29;
          }
          else {
            uVar26 = 0;
          }
          FUN_1461b70c2(uVar26,puVar29,0);
        }
        lVar25 = lVar25 + 8;
      } while ((longlong)iVar15 * 8 != lVar25);
    }
  }
  iVar15 = *(int *)(lVar18 + 0x14);
  fVar53 = 1.0;
  if (iVar15 != 0) {
    uVar48 = *(uint *)(lVar18 + 0x10);
    fVar53 = 1.0;
    if ((-1 < (int)uVar48) && (fVar53 = 1.0, (int)uVar48 < DAT_14c9647dc)) {
      fVar53 = 1.0;
      plVar22 = (longlong *)
                ((ulonglong)((uVar48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8));
      if ((plVar22 != (longlong *)0x0) &&
         ((fVar53 = 1.0, (int)plVar22[2] == iVar15 &&
          (fVar53 = 1.0, (*(uint *)(plVar22 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
          lVar47 = *plVar22;
        }
        else {
          lVar47 = 0;
        }
        fVar53 = *(float *)(lVar47 + 0x820);
      }
    }
  }
  if (*(char *)(lVar18 + 0x13c) == '\x01') {
    if ((*(float *)(lVar18 + 0x138) == fVar53) && (!NAN(*(float *)(lVar18 + 0x138)) && !NAN(fVar53))
       ) goto LAB_144192b2b;
  }
  *(float *)(lVar18 + 0x138) = fVar53;
  *(undefined1 *)(lVar18 + 0x13c) = 1;
  iVar17 = *(int *)(lVar18 + 0x1f8);
  if ((longlong)iVar17 != 0) {
    lVar47 = *(longlong *)(lVar18 + 0x1f0);
    lVar25 = 0;
    do {
      iVar15 = *(int *)(lVar47 + 4 + lVar25);
      if ((((iVar15 != 0) && (uVar48 = *(uint *)(lVar47 + lVar25), -1 < (int)uVar48)) &&
          ((int)uVar48 < DAT_14c9647dc)) &&
         (((lVar34 = (ulonglong)((uVar48 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar48 >> 0x10) * 8), lVar34 != 0 &&
           (*(int *)(lVar34 + 0x10) == iVar15)) && ((*(uint *)(lVar34 + 8) & 0x10200000) == 0)))) {
        FUN_148d70ea0();
      }
      lVar25 = lVar25 + 8;
    } while ((longlong)iVar17 * 8 != lVar25);
    iVar15 = *(int *)(lVar18 + 0x14);
  }
LAB_144192b2b:
  uVar48 = 0;
  uVar43 = 0;
  if (((iVar15 != 0) && (uVar4 = *(uint *)(lVar18 + 0x10), -1 < (int)uVar4)) &&
     (((int)uVar4 < DAT_14c9647dc &&
      (((plVar22 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)), uVar48 = uVar43,
        plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar15)) &&
       ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
      lVar47 = *plVar22;
    }
    else {
      lVar47 = 0;
    }
    if (*(longlong *)(lVar47 + 0x408) != 0) {
      lVar47 = FUN_140d97494();
      if (lVar47 != 0) {
        uVar48 = (uint)*(byte *)(lVar47 + 0x70);
      }
    }
  }
  if ((*(char *)(lVar18 + 0x144) != '\x01') || (*(uint *)(lVar18 + 0x140) != uVar48)) {
    *(uint *)(lVar18 + 0x140) = uVar48;
    *(undefined1 *)(lVar18 + 0x144) = 1;
    iVar15 = *(int *)(lVar18 + 0xa0);
    if (iVar15 == 0) {
      uVar45 = 1;
      uVar33 = 0;
      iVar37 = 0;
      iVar17 = 0;
    }
    else {
      puVar24 = *(uint **)(lVar18 + 0x98);
      if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
        puVar24 = (uint *)(lVar18 + 0x88);
      }
      uVar48 = *puVar24;
      if (uVar48 == 0) {
        iVar17 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar17 = iVar15 + -1;
        }
        uVar33 = 0;
        uVar45 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar45 = uVar33;
        }
        iVar37 = 0;
        do {
          if (uVar45 == uVar33) goto LAB_144192d3e;
          iVar37 = iVar37 + 0x20;
          uVar48 = puVar24[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar48 == 0);
      }
      else {
        uVar33 = 0;
        iVar37 = 0;
      }
      uVar45 = (ulonglong)(-uVar48 & uVar48);
      uVar2 = uVar45 * 2 + 1;
      lVar47 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
        }
      }
      iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar17) {
        iVar17 = iVar15;
      }
    }
    if (iVar17 != iVar15) {
      uVar48 = 0xffffffff;
      iVar36 = iVar15;
      do {
        iVar28 = *(int *)(*(longlong *)(lVar18 + 0x78) + 0xf0 + (longlong)iVar17 * 0x180);
        if (((iVar28 != 0) &&
            (uVar43 = *(uint *)(*(longlong *)(lVar18 + 0x78) + 0xec + (longlong)iVar17 * 0x180),
            -1 < (int)uVar43)) &&
           (((int)uVar43 < DAT_14c9647dc &&
            (((puVar29 = (undefined8 *)
                         ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)),
              puVar29 != (undefined8 *)0x0 && (*(int *)(puVar29 + 2) == iVar28)) &&
             ((*(uint *)(puVar29 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar29 + 1) & 0x10200000) == 0) {
            uVar26 = *puVar29;
          }
          else {
            uVar26 = 0;
          }
          FUN_1411e3072(uVar26);
          iVar36 = *(int *)(lVar18 + 0xa0);
        }
        uVar48 = uVar48 & ~(uint)uVar45;
        puVar24 = *(uint **)(lVar18 + 0x98);
        if (*(uint **)(lVar18 + 0x98) == (uint *)0x0) {
          puVar24 = (uint *)(lVar18 + 0x88);
        }
        iVar17 = (int)uVar33;
        lVar47 = (longlong)iVar17;
        uVar43 = puVar24[lVar47] & uVar48;
        if (uVar43 == 0) {
          iVar28 = iVar36 + 0x1e;
          if (-1 < iVar36 + -1) {
            iVar28 = iVar36 + -1;
          }
          iVar28 = iVar28 >> 5;
          iVar37 = iVar37 + 0x20;
          iVar27 = iVar28;
          if (iVar28 < iVar17) {
            iVar27 = iVar17;
          }
          if (iVar17 < iVar28) {
            lVar25 = 0;
            do {
              uVar43 = puVar24[lVar47 + lVar25 + 1];
              if (uVar43 != 0) {
                uVar33 = (ulonglong)(iVar17 + (int)lVar25 + 1);
                uVar48 = 0xffffffff;
                goto LAB_144192e47;
              }
              iVar37 = iVar37 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar27 - lVar47 != lVar25);
            uVar48 = 0xffffffff;
            iVar17 = iVar27;
          }
          uVar33 = (ulonglong)(iVar17 + 1);
          iVar17 = iVar36;
        }
        else {
LAB_144192e47:
          uVar45 = (ulonglong)(-uVar43 & uVar43);
          uVar2 = uVar45 * 2 + 1;
          lVar47 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar47 == 0; lVar47 = lVar47 + -1) {
            }
          }
          iVar17 = (iVar37 - ((uint)lVar47 ^ 0x3f)) + 0x3e;
          if (iVar36 <= iVar17) {
            iVar17 = iVar36;
          }
        }
      } while (iVar17 != iVar15);
    }
  }
LAB_144192d3e:
  puVar23 = puVar23 + 0x20;
  if (puVar23 == local_4b0) goto LAB_144192726;
  goto LAB_144192776;
}



// FUNCTION 1441947f2 FUN_1441947f2 body=253 status=ok
// SIG undefined FUN_1441947f2(void)

float FUN_1441947f2(longlong param_1)

{
  longlong lVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x388) == '\0')) {
    pdVar2 = (double *)&DAT_14c8464f0;
    if (*(longlong *)(param_1 + 0x4e0) != 0) {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x4e0) + 0x1a8);
    }
    fVar5 = (float)*pdVar2;
    fVar3 = *(float *)(param_1 + 0x4f4);
    fVar4 = *(float *)(param_1 + 0x4fc);
    fVar6 = *(float *)(param_1 + 0x660);
    fVar7 = *(float *)(param_1 + 0x658);
  }
  else {
    if (*(char *)(lVar1 + 0x388) != '\x01') {
      return 0.0;
    }
    fVar5 = *(float *)(lVar1 + 0x390);
    fVar3 = *(float *)(param_1 + 0x4f4);
    fVar4 = *(float *)(param_1 + 0x4fc);
    fVar6 = *(float *)(param_1 + 0x680);
    fVar7 = *(float *)(param_1 + 0x678);
  }
  if (ABS(fVar6 - fVar7) <= 1e-08) {
    fVar6 = (float)(-(uint)(fVar6 <= fVar5) & 0x3f800000);
  }
  else {
    fVar6 = (fVar5 - fVar7) / (fVar6 - fVar7);
  }
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return (fVar3 - fVar4) * fVar6 + fVar4;
}



// FUNCTION 1441948f0 FUN_1441948f0 body=1061 status=ok
// SIG undefined FUN_1441948f0(void)

undefined8 *
FUN_1441948f0(longlong param_1,undefined8 *param_2,double *param_3,float param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_248 [40];
  longlong *local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [32];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  double local_1a0;
  double local_198;
  char local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  char local_170;
  undefined1 local_168 [144];
  char local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 0x3c0) != 0) && (*(char *)(param_1 + 0x878) == '\x01')) {
    fVar14 = (float)FUN_1413eca68(param_1);
    FUN_145aab22c(*(undefined8 *)(param_1 + 0x3c0),local_168);
    if ((local_d8 == '\x01') && ((longlong)*(int *)(param_1 + 0x9f8) != 0)) {
      local_210 = param_1 + 0x860;
      lVar13 = *(longlong *)(param_1 + 0x9f0);
      lVar10 = (longlong)*(int *)(param_1 + 0x9f8) * 0x80 + lVar13;
      local_218 = lVar10;
      do {
        if (*(longlong *)(lVar13 + 8) != 0) {
          plVar9 = (longlong *)
                   FUN_148d6fe38(*(longlong *)(lVar13 + 8),local_210,
                                 *(undefined4 *)(param_1 + 0x820));
          lVar7 = plVar9[1];
          lVar10 = local_218;
          if ((longlong)(int)lVar7 != 0) {
            lVar2 = *plVar9;
            lVar12 = 0;
            do {
              lVar3 = *(longlong *)(lVar2 + lVar12);
              if (((lVar3 != 0) &&
                  (FUN_145aaaff8(lVar3,&local_188), lVar10 = local_218, local_170 == '\x01')) &&
                 (FUN_145aab0fa(*(undefined8 *)(param_1 + 0x3c0),&local_1a0,local_168,&local_188),
                 lVar10 = local_218, local_190 == '\x01')) {
                if ((((*(int *)(lVar3 + 0xc) != 0) &&
                     (uVar1 = *(uint *)(lVar3 + 8), -1 < (int)uVar1)) &&
                    (((int)uVar1 < DAT_14c9647dc &&
                     ((puVar11 = (undefined8 *)
                                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                      puVar11 != (undefined8 *)0x0 &&
                      (*(int *)(puVar11 + 2) == *(int *)(lVar3 + 0xc))))))) &&
                   ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
                  if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
                    local_220 = (longlong *)*puVar11;
                  }
                  else {
                    local_220 = (longlong *)0x0;
                  }
                  lVar10 = FUN_1414ba9b4();
                  if (((((*(int *)(lVar10 + 0x38) <= *(int *)(local_220[2] + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(local_220[2] + 0x30) +
                          (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                       (*(int *)(lVar3 + 0xc) != 0)) &&
                      ((uVar1 = *(uint *)(lVar3 + 8), -1 < (int)uVar1 &&
                       ((int)uVar1 < DAT_14c9647dc)))) &&
                     (((puVar11 = (undefined8 *)
                                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                       puVar11 != (undefined8 *)0x0 &&
                       ((*(int *)(puVar11 + 2) == *(int *)(lVar3 + 0xc) &&
                        ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) &&
                      (local_220 = (longlong *)*puVar11, local_220 != (longlong *)0x0)))) {
                    lVar10 = FUN_1414ba9b4();
                    if (((*(int *)(lVar10 + 0x38) <= *(int *)(local_220[2] + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(local_220[2] + 0x30) +
                          (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                       (lVar10 = local_218, (char)local_220[0x1a] != '\0')) goto LAB_144194a9d;
                  }
                }
                dVar8 = local_198;
                dVar4 = local_1a0 * (double)fVar14;
                dVar5 = local_198 - param_3[1];
                dVar6 = dVar4 - *param_3;
                fVar15 = param_4 * param_4;
                if (param_5 == '\0') {
                  fVar15 = (float)FUN_148d70070(lVar3,*(undefined4 *)(param_1 + 0x820));
                  fVar15 = (fVar15 + param_4) * (fVar15 + param_4);
                }
                fVar16 = (float)(dVar6 * dVar6 + dVar5 * dVar5);
                lVar10 = local_218;
                if (fVar16 < fVar15) {
                  local_220 = (longlong *)FUN_148d700c4(param_2);
                  *local_220 = lVar3;
                  *(undefined4 *)(local_220 + 1) = local_188;
                  *(undefined4 *)((longlong)local_220 + 0xc) = uStack_184;
                  *(undefined4 *)(local_220 + 2) = uStack_180;
                  *(undefined4 *)((longlong)local_220 + 0x14) = uStack_17c;
                  local_220[3] = local_178;
                  FUN_1413d4d42(lVar3,local_208,param_1);
                  *(undefined4 *)(local_220 + 4) = local_1e8;
                  *(undefined4 *)((longlong)local_220 + 0x24) = uStack_1e4;
                  *(undefined4 *)(local_220 + 5) = uStack_1e0;
                  *(undefined4 *)((longlong)local_220 + 0x2c) = uStack_1dc;
                  local_220[6] = local_1d8;
                  local_220[7] = (longlong)dVar4;
                  local_220[8] = (longlong)dVar8;
                  *(float *)(local_220 + 9) = fVar16;
                  lVar10 = local_218;
                }
              }
LAB_144194a9d:
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)lVar7 * 8 != lVar12);
          }
        }
        lVar13 = lVar13 + 0x80;
      } while (lVar13 != lVar10);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144194d16 FUN_144194d16 body=651 status=ok
// SIG undefined FUN_144194d16(void)

undefined8 FUN_144194d16(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_1e8 [32];
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190 [4];
  undefined4 local_18c;
  undefined4 local_ec;
  undefined4 local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((((*(char *)(param_3 + 3) == '\x01') && (*(int *)(param_1 + 0x14) != 0)) &&
      (uVar12 = *(uint *)(param_1 + 0x10), -1 < (int)uVar12)) &&
     ((((int)uVar12 < DAT_14c9647dc &&
       (puVar13 = (undefined8 *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       puVar13 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x14) &&
       ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
      uVar9 = *puVar13;
    }
    else {
      uVar9 = 0;
    }
    lVar10 = FUN_1447210f0(uVar9);
    if (lVar10 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x18);
      if (lVar10 == 0) {
        dVar6 = 1000.0;
        dVar7 = -1000.0;
      }
      else {
        dVar6 = (double)*(float *)(lVar10 + 0x214);
        dVar7 = (double)*(float *)(lVar10 + 0x21c);
      }
      iVar4 = *(int *)(param_1 + 0x160);
      if ((longlong)iVar4 != 0) {
        dVar1 = param_3[2];
        dVar2 = param_3[1];
        dVar3 = *param_3;
        lVar10 = *(longlong *)(param_1 + 0x158);
        lVar15 = 0;
        do {
          uVar5 = *(ulonglong *)(lVar10 + lVar15);
          if (((uVar5 >> 0x20 != 0) && (uVar12 = (uint)uVar5, -1 < (int)uVar12)) &&
             (((int)uVar12 < DAT_14c9647dc &&
              ((((plVar14 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8))),
                 plVar14 != (longlong *)0x0 && ((int)plVar14[2] == (int)(uVar5 >> 0x20))) &&
                ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) &&
               ((plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0 &&
                (lVar11 = FUN_148d7052a(plVar14), lVar11 != 0)))))))) {
            memset(local_190,0,0x100);
            local_c0 = 0xffffffff;
            local_18c = 0x3f800000;
            local_ec = 0xffffffff;
            local_1c8 = &DAT_14cad0f68;
            local_1c0 = dVar3 + 0.0;
            local_1b8 = dVar2 + 0.0;
            local_1b0 = dVar6 + dVar1;
            local_1a8 = dVar3 + 0.0;
            local_1a0 = dVar2 + 0.0;
            local_198 = dVar7 + dVar1;
            cVar8 = (**(code **)(*plVar14 + 0x978))(plVar14,local_190,&local_1c0,&local_1a8);
            if (cVar8 != '\0') {
              uVar9 = FUN_148d7052a(plVar14);
              goto LAB_144194dc3;
            }
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)iVar4 * 8 != lVar15);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_14027a618(*(longlong *)(param_1 + 0x60),param_2);
  }
LAB_144194dc3:
  if ((local_90 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 144194fa2 FUN_144194fa2 body=766 status=ok
// SIG undefined FUN_144194fa2(void)

void FUN_144194fa2(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x9f8) != 0)) {
    plVar11 = *(longlong **)(param_1 + 0x9f0);
    plVar10 = plVar11 + (longlong)*(int *)(param_1 + 0x9f8) * 0x10;
    do {
      lVar9 = *plVar11;
      if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x248) != 0)) {
        plVar8 = *(longlong **)(lVar9 + 0x240);
        lVar9 = (longlong)*(int *)(lVar9 + 0x248) * 0x30;
        do {
          lVar6 = plVar8[1];
          if (lVar6 == 0) {
            uVar5 = FUN_141030812();
            lVar6 = FUN_14477b664(uVar5);
            plVar8[1] = lVar6;
          }
          lVar7 = plVar8[2];
          if (lVar7 == 0) {
            if (lVar6 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if (*plVar8 != 0) {
                plVar2 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar5,plVar8);
                }
                plVar8[2] = lVar7;
              }
            }
          }
          if (lVar7 == param_2) {
            if (*(char *)(param_1 + 0x808) == '\x01') {
              *(undefined1 *)(param_1 + 0x808) = 0;
            }
            *(undefined8 *)(param_1 + 0x770) = 0;
            *(undefined8 *)(param_1 + 0x778) = 0;
            *(undefined8 *)(param_1 + 0x760) = 0;
            *(undefined8 *)(param_1 + 0x768) = 0;
            *(undefined8 *)(param_1 + 0x750) = 0;
            *(undefined8 *)(param_1 + 0x758) = 0;
            *(undefined8 *)(param_1 + 0x780) = 0;
            uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            *(ulonglong *)(param_1 + 0x738) =
                 CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            *(undefined8 *)(param_1 + 0x740) = uVar5;
            *(undefined8 *)(param_1 + 0x748) = DAT_14c8464f0;
            uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            *(ulonglong *)(param_1 + 0x758) =
                 CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            *(undefined8 *)(param_1 + 0x760) = uVar5;
            *(undefined8 *)(param_1 + 0x768) = DAT_14c8464f0;
            *(undefined1 *)(param_1 + 0x788) = 1;
            lVar9 = *(longlong *)(param_1 + 0x4e0);
            if (lVar9 == 0) {
              local_58 = DAT_14c8464f0;
              local_68 = (undefined4)DAT_14c8464e0;
              uStack_64 = DAT_14c8464e0._4_4_;
              uStack_60 = (undefined4)DAT_14c8464e8;
              uStack_5c = DAT_14c8464e8._4_4_;
            }
            else {
              local_58 = *(undefined8 *)(lVar9 + 0x1a8);
              local_68 = *(undefined4 *)(lVar9 + 0x198);
              uStack_64 = *(undefined4 *)(lVar9 + 0x19c);
              uStack_60 = *(undefined4 *)(lVar9 + 0x1a0);
              uStack_5c = *(undefined4 *)(lVar9 + 0x1a4);
            }
            puVar1 = (undefined8 *)(param_1 + 0x758);
            *(undefined8 *)(param_1 + 0x748) = local_58;
            *(undefined8 *)(param_1 + 0x738) = CONCAT44(uStack_64,local_68);
            *(ulonglong *)(param_1 + 0x740) = CONCAT44(uStack_5c,uStack_60);
            uVar12 = 0;
            if (*(longlong *)(param_1 + 0x3c0) != 0) {
              uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390);
            }
            *(undefined4 *)(param_1 + 0x750) = uVar12;
            *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x748);
            *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x750);
            *puVar1 = *(undefined8 *)(param_1 + 0x738);
            *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x740);
            uVar12 = *(undefined4 *)((longlong)plVar8 + 0x1c);
            lVar9 = plVar8[4];
            uVar3 = *(undefined4 *)((longlong)plVar8 + 0x24);
            *(int *)puVar1 = (int)plVar8[3];
            *(undefined4 *)(param_1 + 0x75c) = uVar12;
            *(int *)(param_1 + 0x760) = (int)lVar9;
            *(undefined4 *)(param_1 + 0x764) = uVar3;
            *(longlong *)(param_1 + 0x768) = plVar8[5];
            *(undefined1 *)(param_1 + 0x77c) = 1;
            FUN_145cf6358(param_1);
            if (param_3 == 1) {
              if (*(longlong *)(param_1 + 0x3c0) != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390) =
                     *(undefined4 *)(param_1 + 0x770);
              }
              FUN_14596238c(param_1,puVar1);
              if (*(char *)(param_1 + 0x788) == '\x01') {
                if (*(char *)(param_1 + 0x784) == '\x01') {
                  *(undefined1 *)(param_1 + 0x784) = 0;
                }
                *(undefined1 *)(param_1 + 0x788) = 0;
              }
              lVar9 = *(longlong *)(param_1 + 0x4e0);
              if (lVar9 != 0) {
                *(double *)(lVar9 + 800) = *(double *)(lVar9 + 0x260) + *(double *)(lVar9 + 0x2c8);
                *(double *)(lVar9 + 0x328) = *(double *)(lVar9 + 0x268) + *(double *)(lVar9 + 0x2d0)
                ;
                *(double *)(lVar9 + 0x330) = *(double *)(lVar9 + 0x270) + *(double *)(lVar9 + 0x2d8)
                ;
              }
            }
            goto LAB_1441951d9;
          }
          plVar8 = plVar8 + 6;
          lVar9 = lVar9 + -0x30;
        } while (lVar9 != 0);
      }
      plVar11 = plVar11 + 0x10;
    } while (plVar11 != plVar10);
  }
LAB_1441951d9:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441952a2 FUN_1441952a2 body=2746 status=ok
// SIG undefined FUN_1441952a2(void)

void FUN_1441952a2(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  undefined4 local_170;
  undefined8 local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 uStack_110;
  code *local_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  byte local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((((*(int *)(param_1 + 0x5c) != 0) && (uVar2 = *(uint *)(param_1 + 0x58), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0 &&
       (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x5c))))) &&
     ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) goto LAB_1441954bc;
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_144195379:
    lVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_144195379;
      if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
        uVar7 = *puVar10;
      }
      else {
        uVar7 = 0;
      }
      lVar9 = FUN_1447210f0(uVar7);
    }
  }
  if ((((*(int *)(param_1 + 0x24) == 0) || (uVar2 = *(uint *)(param_1 + 0x20), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x24))) ||
      (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar4 = *plVar11, lVar4 == 0)))))) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_140007850();
      cVar1 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar1 == '\0')) {
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar4 + 0xc);
          goto LAB_144195430;
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
LAB_144195430:
          *(uint *)(param_1 + 0x20) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar3 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar3 = *(int *)(lVar8 + 0x10);
            bVar14 = iVar3 == 0;
            if (bVar14) {
              *(int *)(lVar8 + 0x10) = iVar12;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar3 = iVar12;
            }
          }
          *(int *)(param_1 + 0x24) = iVar3;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_144195470;
      }
    }
  }
  else {
LAB_144195470:
    if (DAT_14c949118 == 0) {
      local_100 = FUN_140631fbe;
      lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar8;
      FUN_1446f470e(&local_118,L"Class",1);
      local_148 = &LAB_146891e90;
      local_150 = (code *)&LAB_146273097;
      local_160 = L"Engine";
      local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
      local_168 = 0x20;
      local_170 = 0x10000000;
      local_178._0_4_ = 8;
      local_140 = &local_100;
      FUN_14574b4b2(lVar8);
      DAT_14c949118 = lVar8;
      if (DAT_14c951858 == 0) {
        local_140 = &local_f8;
        local_f8 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_148 = &LAB_1468c5283;
        local_150 = FUN_142809da0;
        local_158 = L"Engine";
        local_160 = (wchar_t *)0x400000000;
        local_168 = CONCAT44(local_168._4_4_,0x10000000);
        local_170 = 8;
        local_178._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar5 = DAT_14c951858;
      lVar8 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_178 = L"Class";
      FUN_14574b446(uVar7,lVar8,lVar5,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      if (DAT_14cac9ca8 == 0) {
        local_140 = &local_f8;
        local_f8 = FUN_141030f22;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_148 = &LAB_1478c0a72;
        local_150 = (code *)&LAB_1417b2375;
        local_158 = L"Engine";
        local_160 = (wchar_t *)0x1000000000;
        local_168 = CONCAT44(local_168._4_4_,0x10000004);
        local_170 = 8;
        local_178 = (wchar_t *)CONCAT44(local_178._4_4_,0x390);
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        if (DAT_14cac9ca8 == 0) goto LAB_1441954b4;
      }
      if (*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar4 + 0x38)) {
        lVar8 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
            DAT_14cac9ca8 + 0x30) {
          lVar8 = lVar4;
        }
        if (((lVar9 != 0) && (lVar8 != 0)) && (*(longlong *)(param_1 + 0x18) != 0)) {
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = (code *)0x0;
          uStack_f0 = 0;
          local_c8 = 0x100;
          local_c6 = local_c6 & 0xe0;
          local_c5 = 0;
          local_c4 = 8;
          local_b8 = 0;
          local_a8 = (longlong *)0x0;
          lVar9 = FUN_141037e38(lVar9,lVar8,param_1 + 0xd0);
          if (lVar9 == 0) {
            *(undefined4 *)(param_1 + 0x58) = 0;
            iVar3 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar9 + 0xc);
            *(uint *)(param_1 + 0x58) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar3 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar3 = *(int *)(lVar9 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar9 + 0x10) = iVar12;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar12;
              }
            }
          }
          *(int *)(param_1 + 0x5c) = iVar3;
          if (local_b8 != 0) {
            plVar11 = local_a8;
            if (local_a8 == (longlong *)0x0) {
              plVar11 = local_98;
            }
            (**(code **)(*plVar11 + 0x10))();
            iVar3 = *(int *)(param_1 + 0x5c);
          }
          if (((iVar3 != 0) && (uVar2 = *(uint *)(param_1 + 0x58), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == iVar3)) &&
               ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
              local_118 = 0;
              uStack_110 = 0;
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar3)) ||
                 ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *puVar10;
              }
              FUN_140b36638(uVar7,&local_118,0);
              lVar9 = local_118;
              lVar4 = (longlong)(int)uStack_110;
              if (lVar4 != 0) {
                local_128 = (longlong *)(param_1 + 0x148);
                local_120 = (longlong *)(param_1 + 0x158);
                lVar8 = 0;
                do {
                  plVar11 = *(longlong **)(lVar9 + lVar8);
                  if (plVar11 != (longlong *)0x0) {
                    lVar5 = FUN_1414cca16();
                    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                        == lVar5 + 0x30)) {
                      *(undefined8 *)((longlong)plVar11 + 0x7f5) = 0;
                      *(undefined8 *)((longlong)plVar11 + 0x7fd) = 0;
                      *(undefined8 *)((longlong)plVar11 + 0x7ec) = 0;
                      *(undefined8 *)((longlong)plVar11 + 0x7f4) = 0;
                      *(undefined1 *)((longlong)plVar11 + 0x805) = 1;
                      *(undefined1 *)(plVar11 + 0xfd) = 0;
                      local_f8 = (code *)&DAT_3f8000003f800000;
                      uStack_f0 = 0x3f800000;
                      FUN_1461b73f6(plVar11,&local_f8);
                      if (*(char *)(param_1 + 0x134) == '\x01') {
                        FUN_1461b70c2(plVar11,*(undefined4 *)(param_1 + 0x130),1);
                      }
                      uVar2 = *(uint *)((longlong)plVar11 + 0xc);
                      if ((int)uVar2 < DAT_14c9647dc) {
                        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                      }
                      else {
                        lVar5 = 0;
                      }
                      iVar3 = *(int *)(lVar5 + 0x10);
                      if (*(int *)(lVar5 + 0x10) == 0) {
                        LOCK();
                        iVar3 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar12 = DAT_14c964868 + 1;
                        bVar14 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar3;
                        if (bVar14) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar12);
                        }
                        LOCK();
                        iVar3 = *(int *)(lVar5 + 0x10);
                        bVar14 = iVar3 == 0;
                        if (bVar14) {
                          *(int *)(lVar5 + 0x10) = iVar12;
                          iVar3 = 0;
                        }
                        UNLOCK();
                        if (bVar14) {
                          iVar3 = iVar12;
                        }
                      }
                      iVar12 = *(int *)(param_1 + 0x150);
                      *(uint *)(param_1 + 0x150) = iVar12 + 1U;
                      if (*(uint *)(param_1 + 0x154) < iVar12 + 1U) {
                        FUN_14662cf60(local_128,iVar12);
                      }
                      *(ulonglong *)(*local_128 + (longlong)iVar12 * 8) = CONCAT44(iVar3,uVar2);
                    }
                    lVar6 = FUN_14143f624();
                    iVar3 = DAT_14c9647dc;
                    lVar5 = DAT_14c9647c8;
                    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                        == lVar6 + 0x30)) {
                      if (*(int *)(param_1 + 0x14) == 0) {
LAB_144195902:
                        *(undefined4 *)(plVar11 + 0xe6) = 0;
                        iVar3 = 0;
                      }
                      else {
                        uVar2 = *(uint *)(param_1 + 0x10);
                        if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144195902;
                        plVar13 = (longlong *)
                                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                        if ((plVar13 == (longlong *)0x0) ||
                           (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
                            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_144195902;
                        if (*plVar13 == 0) goto LAB_144195902;
                        uVar2 = *(uint *)(*plVar13 + 0xc);
                        *(uint *)(plVar11 + 0xe6) = uVar2;
                        if ((int)uVar2 < iVar3) {
                          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                                  *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 0x10) * 8);
                        }
                        else {
                          lVar5 = 0;
                        }
                        iVar3 = *(int *)(lVar5 + 0x10);
                        if (*(int *)(lVar5 + 0x10) == 0) {
                          LOCK();
                          iVar3 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar12 = DAT_14c964868 + 1;
                          bVar14 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar3;
                          if (bVar14) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar12);
                          }
                          LOCK();
                          iVar3 = *(int *)(lVar5 + 0x10);
                          bVar14 = iVar3 == 0;
                          if (bVar14) {
                            *(int *)(lVar5 + 0x10) = iVar12;
                            iVar3 = 0;
                          }
                          UNLOCK();
                          if (bVar14) {
                            iVar3 = iVar12;
                          }
                        }
                      }
                      *(int *)((longlong)plVar11 + 0x734) = iVar3;
                      (**(code **)(*plVar11 + 0xaf8))(plVar11);
                      uVar2 = *(uint *)((longlong)plVar11 + 0xc);
                      if ((int)uVar2 < DAT_14c9647dc) {
                        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                      }
                      else {
                        lVar5 = 0;
                      }
                      iVar3 = *(int *)(lVar5 + 0x10);
                      if (*(int *)(lVar5 + 0x10) == 0) {
                        LOCK();
                        iVar3 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar12 = DAT_14c964868 + 1;
                        bVar14 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar3;
                        if (bVar14) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar12);
                        }
                        LOCK();
                        iVar3 = *(int *)(lVar5 + 0x10);
                        bVar14 = iVar3 == 0;
                        if (bVar14) {
                          *(int *)(lVar5 + 0x10) = iVar12;
                          iVar3 = 0;
                        }
                        UNLOCK();
                        if (bVar14) {
                          iVar3 = iVar12;
                        }
                      }
                      iVar12 = *(int *)(param_1 + 0x160);
                      *(uint *)(param_1 + 0x160) = iVar12 + 1U;
                      if (*(uint *)(param_1 + 0x164) < iVar12 + 1U) {
                        FUN_14662cfe4(local_120,iVar12);
                      }
                      *(ulonglong *)(*local_120 + (longlong)iVar12 * 8) = CONCAT44(iVar3,uVar2);
                    }
                  }
                  lVar8 = lVar8 + 8;
                } while (lVar4 * 8 != lVar8);
              }
              if (local_118 != 0) {
                FUN_1400020a8(local_118);
              }
            }
          }
        }
      }
    }
  }
LAB_1441954b4:
  FUN_145cf621e(param_1);
LAB_1441954bc:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144195d5e FUN_144195d5e body=1348 status=ok
// SIG undefined FUN_144195d5e(void)

void FUN_144195d5e(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  int local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(int *)(param_1 + 0x14) != 0) && (uVar14 = *(uint *)(param_1 + 0x10), -1 < (int)uVar14))
      && ((int)uVar14 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x14))) &&
      ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar2;
    }
    else {
      lVar11 = 0;
    }
    if ((longlong)*(int *)(lVar11 + 0x888) != 0) {
      plVar4 = *(longlong **)(lVar11 + 0x880);
      lVar11 = (longlong)*(int *)(lVar11 + 0x888) * 0x18;
      do {
        if (*plVar4 == *param_2) {
          if (plVar4 != (longlong *)0x0) {
            if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
              lVar11 = *plVar2;
            }
            else {
              lVar11 = 0;
            }
            FUN_145cf5f30(lVar11,0);
          }
          break;
        }
        plVar4 = plVar4 + 3;
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != 0);
    }
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar13 = *param_2;
      lVar11 = param_1 + 0xb0;
      lVar7 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar7 = lVar11;
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0xc0) - 1U &
                               (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) * 4);
      if (iVar6 != -1) {
        plVar2 = (longlong *)(param_1 + 0x78);
        lVar7 = *plVar2;
        iVar9 = iVar6;
        do {
          if (*(longlong *)(lVar7 + (longlong)iVar9 * 0x180) == lVar13) goto LAB_144195ec3;
          iVar9 = *(int *)((longlong)iVar9 * 0x180 + lVar7 + 0x170);
        } while (iVar9 != -1);
      }
    }
  }
  goto LAB_144195e9a;
  while (iVar6 = *(int *)(lVar5 + 0x170), iVar6 != -1) {
LAB_144195ec3:
    lVar5 = lVar7 + (longlong)iVar6 * 0x180;
    if (*(longlong *)(lVar7 + (longlong)iVar6 * 0x180) == lVar13) goto LAB_144195f00;
  }
  lVar5 = 0;
LAB_144195f00:
  FUN_140e8ddc0(param_1,lVar5 + 0x10,2);
  iVar6 = *(int *)(param_1 + 0x80);
  iVar9 = *(int *)(param_1 + 0xac);
  cVar8 = DAT_000000bc;
  if (iVar6 != iVar9) {
    lVar13 = *param_2;
    lVar7 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar7 = lVar11;
    }
    iVar3 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar7 = *plVar2;
      iVar12 = iVar3;
      do {
        lVar5 = lVar7 + (longlong)iVar12 * 0x180;
        if (*(longlong *)(lVar7 + (longlong)iVar12 * 0x180) == lVar13) goto LAB_1441961eb;
        iVar12 = *(int *)(lVar5 + 0x170);
      } while (iVar12 != -1);
      lVar5 = 0;
LAB_1441961eb:
      cVar8 = *(char *)(lVar5 + 0xbc);
      do {
        lVar5 = lVar7 + (longlong)iVar3 * 0x180;
        if (*(longlong *)(lVar7 + (longlong)iVar3 * 0x180) == lVar13) goto LAB_144195f6d;
        iVar3 = *(int *)(lVar5 + 0x170);
      } while (iVar3 != -1);
    }
  }
  lVar5 = 0;
LAB_144195f6d:
  if (((*(int *)(lVar5 + 0xf0) != 0) && (uVar14 = *(uint *)(lVar5 + 0xec), -1 < (int)uVar14)) &&
     (((int)uVar14 < DAT_14c9647dc &&
      (((lVar13 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar13 != 0 &&
        (*(int *)(lVar13 + 0x10) == *(int *)(lVar5 + 0xf0))) &&
       ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))))) {
    FUN_1413ed2ca(lVar5 + 0x10);
    iVar6 = *(int *)(param_1 + 0x80);
    iVar9 = *(int *)(param_1 + 0xac);
  }
  if (iVar6 != iVar9) {
    lVar13 = *param_2;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb8);
    }
    iVar6 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xc0) - 1U &
                              (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar11 = *plVar2 + (longlong)iVar6 * 0x180;
        if (*(longlong *)(*plVar2 + (longlong)iVar6 * 0x180) == lVar13) goto LAB_144196074;
        iVar6 = *(int *)(lVar11 + 0x170);
      } while (iVar6 != -1);
    }
  }
  lVar11 = 0;
LAB_144196074:
  uVar1 = *(ulonglong *)(lVar11 + 0x18);
  FUN_148d75b4a(plVar2,param_2);
  if (cVar8 == '\0') goto LAB_144195e9a;
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_144196242:
    lVar11 = 0;
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x10);
    lVar11 = 0;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
      plVar2 = (longlong *)
               ((ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
      if ((plVar2 == (longlong *)0x0) ||
         (((int)plVar2[2] != *(int *)(param_1 + 0x14) || ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)
          ))) goto LAB_144196242;
      lVar11 = *plVar2;
    }
  }
  if (((((uVar1 >> 0x20 == 0) || (uVar14 = (uint)uVar1, (int)uVar14 < 0)) ||
       (DAT_14c9647dc <= (int)uVar14)) ||
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
       plVar2 == (longlong *)0x0 || ((int)plVar2[2] != (int)(uVar1 >> 0x20))))) ||
     ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *param_2;
LAB_144196233:
    local_48 = 0;
    iVar6 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *param_2;
    local_44 = 0;
    if (*plVar2 == 0) goto LAB_144196233;
    local_48 = *(uint *)(*plVar2 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((local_48 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar6 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar6 = iVar9;
      }
    }
  }
  local_44 = iVar6;
  local_40 = uVar10;
  FUN_14419d86a(lVar11 + 0x450);
LAB_144195e9a:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441962a4 FUN_1441962a4 body=1094 status=ok
// SIG undefined FUN_1441962a4(void)

undefined4
FUN_1441962a4(longlong param_1,undefined4 *param_2,char param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_368 [40];
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined2 local_328;
  undefined1 local_326;
  undefined8 local_324;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined1 local_2e0 [200];
  longlong local_218;
  longlong local_188;
  longlong local_168;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  bool local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  uVar3 = 0;
  uVar11 = 0;
  if (*(int *)(param_1 + 0x14) == 0) goto LAB_144196395;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144196395;
  plVar9 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  uVar3 = uVar11;
  if ((plVar9 == (longlong *)0x0) ||
     (((int)plVar9[2] != *(int *)(param_1 + 0x14) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
  goto LAB_144196395;
  uVar3 = 0;
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    lVar10 = *plVar9;
  }
  else {
    lVar10 = 0;
  }
  if (((*(int *)(lVar10 + 0x3ec) == 0) || (uVar1 = *(uint *)(lVar10 + 1000), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_144196395;
  plVar9 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != *(int *)(lVar10 + 0x3ec))) ||
     (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
      ((lVar10 = *plVar9, lVar10 == 0 || (*(longlong *)(param_1 + 0x60) == 0))))))
  goto LAB_144196395;
  cVar2 = FUN_148827e1c();
  if (cVar2 == '\0') goto LAB_144196395;
  local_2e8 = *(undefined8 *)(param_2 + 4);
  local_2f8 = *param_2;
  uStack_2f4 = param_2[1];
  uStack_2f0 = param_2[2];
  uStack_2ec = param_2[3];
  lVar4 = FUN_141023318();
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1441966c8:
    uVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1441966c8;
      uVar6 = *puVar8;
    }
  }
  lVar5 = FUN_1410ac07e(uVar6);
  if (lVar5 == 0) {
    local_58 = false;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_1441966cf:
      uVar6 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x10);
      uVar6 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1441966cf;
        uVar6 = *puVar8;
      }
    }
    lVar5 = FUN_1410ac07e(uVar6);
    local_58 = false;
    if (*(char *)(lVar5 + 0x4c5) == '\x01') {
      if (param_3 == '\0') {
        local_58 = (undefined8 *)(lVar4 + 0x24) != &local_68;
        if (local_58) {
          local_68 = *(undefined8 *)(lVar4 + 0x24);
          uStack_60 = *(undefined8 *)(lVar4 + 0x2c);
        }
        if (param_4 == 2) {
          puVar8 = (undefined8 *)(lVar4 + 0x44);
        }
        else {
          if (param_4 != 1) goto LAB_14419652e;
          puVar8 = (undefined8 *)(lVar4 + 0x34);
        }
      }
      else {
        puVar8 = (undefined8 *)(lVar4 + 0x54);
      }
      if (puVar8 != &local_68) {
        local_68 = *puVar8;
        uStack_60 = puVar8[1];
        local_58 = true;
      }
    }
  }
LAB_14419652e:
  local_14f = 0;
  local_130 = 0;
  local_10c = 0;
  local_108 = 0;
  local_ec = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xbf800000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0xbf800000;
  local_98 = 0;
  local_96 = 2;
  local_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_128 = local_2f8;
  uStack_124 = uStack_2f4;
  uStack_120 = uStack_2f0;
  uStack_11c = uStack_2ec;
  local_118 = local_2e8;
  local_110 = param_5;
  local_150 = 1;
  local_330 = 0xbf800000;
  local_328 = 0;
  local_326 = 2;
  local_324 = 0;
  local_308 = 0;
  uStack_300 = 0;
  lVar4 = FUN_140cb9f34();
  uVar6 = FUN_1408fb156(lVar4 + 0x268);
  uVar7 = FUN_1402d24da(lVar4 + 0x240);
  FUN_14038d0a4(local_2e0,uVar7,uVar6,1);
  uVar6 = FUN_1447210f0(lVar10);
  FUN_1405f96d0(&local_340,uVar6,local_2e0);
  local_318 = local_340;
  uStack_314 = uStack_33c;
  uStack_310 = uStack_338;
  uStack_30c = uStack_334;
  FUN_1462023d2(&local_a0,&local_330);
  uVar3 = FUN_148d71162(param_1,&local_150,&local_68,param_4);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_145c5b6e4(&local_330);
  FUN_145c5b6e4(&local_a0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1488493ea(&local_100);
LAB_144196395:
  if ((local_48 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441966ec FUN_1441966ec body=486 status=ok
// SIG undefined FUN_1441966ec(void)

ulonglong FUN_1441966ec(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  void *local_68;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x418) == '\x01') && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
     (lVar4 = FUN_1447b4020(), lVar4 != 0)) {
    lVar4 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x3f8));
    if ((*(longlong *)(lVar4 + 0x10) != 0) &&
       (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x52) == '\0')) {
      local_48 = 0;
      uStack_40 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x400);
      local_34 = *(undefined4 *)(param_1 + 0x404);
      local_58 = (void *)0x0;
      uStack_50 = 0;
      uVar1 = *(uint *)(param_1 + 0x410);
      local_38 = uVar2;
      if ((int)uVar1 < 1) {
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)uVar1);
        }
      }
      else {
        uStack_50 = (ulonglong)uVar1;
        FUN_1447403be(&local_58);
        memset(local_58,0,(ulonglong)uVar1);
        if (0 < (int)uStack_50) {
          lVar4 = 0;
          do {
            *(byte *)((longlong)local_58 + lVar4) =
                 ~*(byte *)(*(longlong *)(param_1 + 0x408) + lVar4);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (int)uStack_50);
        }
      }
      pvVar3 = local_58;
      lVar4 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x3f8));
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar6 = 0;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x52) == '\0')) {
        lVar6 = lVar4;
      }
      local_70 = uVar2;
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        local_68 = pvVar3;
        local_78 = &local_48;
        (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,lVar6,0);
        FUN_14002049c(param_2,0);
      }
      else {
        local_68 = pvVar3;
        local_78 = &local_48;
        (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,lVar6,0);
      }
      if (*(char *)(param_1 + 0x418) == '\x01') {
        if (*(longlong *)(param_1 + 0x408) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 *)(param_1 + 0x418) = 0;
      }
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x420);
      *(uint *)(param_1 + 0x420) = 0;
      uVar5 = (ulonglong)uVar1;
      UNLOCK();
      if (local_58 != (void *)0x0) {
        uVar5 = FUN_1400020a8();
      }
      goto LAB_144196753;
    }
  }
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x420);
  *(uint *)(param_1 + 0x420) = 0;
  uVar5 = (ulonglong)uVar1;
  UNLOCK();
LAB_144196753:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1441968ec FUN_1441968ec body=215 status=ok
// SIG undefined FUN_1441968ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1441968ec(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [32];
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(char *)(param_1 + 0x670) == '\0') {
    dVar4 = 1.0;
    if (1.0 <= *(double *)(param_1 + 0x6e0)) {
      dVar4 = *(double *)(param_1 + 0x6e0);
    }
    if (dVar4 <= *(double *)(param_1 + 0x6e8)) {
      dVar4 = *(double *)(param_1 + 0x6e8);
    }
  }
  else {
    dVar4 = 4398046511104.0;
  }
  auVar7 = *(undefined1 (*) [16])(param_3 + 0x40) & _DAT_149931180;
  auVar6 = _DAT_149931180 & *(undefined1 (*) [16])(param_3 + 0x50);
  auVar2._16_16_ = auVar6;
  auVar2._0_16_ = auVar7;
  auVar6._8_8_ = auVar7._0_8_;
  auVar7 = maxpd(auVar7,auVar2._8_16_);
  auVar6 = maxpd(auVar7,auVar6);
  dVar4 = (double)(float)auVar6._0_8_ * dVar4;
  dVar5 = dVar4 * dVar4 * 3.0;
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *param_2 = *(undefined8 *)(param_3 + 0x20);
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = dVar4;
  param_2[4] = dVar4;
  param_2[5] = dVar4;
  param_2[6] = dVar5;
  return param_2;
}



// FUNCTION 1441969c4 FUN_1441969c4 body=260 status=ok
// SIG undefined FUN_1441969c4(void)

void FUN_1441969c4(longlong param_1,int param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x784);
  cVar2 = *(char *)(param_1 + 0x785);
  *(bool *)(param_1 + 0x784) = 1 < param_2;
  *(bool *)(param_1 + 0x785) = 0 < param_2;
  if (((bool)cVar1 == 1 < param_2) && ((bool)cVar2 == 0 < param_2)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    if (*(longlong *)(param_1 + 0x658) != 0) {
      if (param_2 < 2) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x3f800000;
      }
      FUN_14472da24(*(longlong *)(param_1 + 0x680),*(longlong *)(param_1 + 0x658),uVar4);
    }
    if (*(longlong *)(param_1 + 0x660) != 0) {
      if (*(char *)(param_1 + 0x785) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x3f800000;
      }
      FUN_14472da24(*(undefined8 *)(param_1 + 0x680),*(longlong *)(param_1 + 0x660),uVar4);
    }
  }
  lVar3 = 0x6bc;
  if (*(char *)(param_1 + 0x77e) == '\0') {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x785) * 8 + 0x6b8;
  }
  uVar4 = *(undefined4 *)(param_1 + lVar3);
  *(undefined4 *)(param_1 + 0x6c4) = uVar4;
  *(undefined4 *)(param_1 + 0x6c8) = uVar4;
  *(undefined4 *)(param_1 + 0x6cc) = uVar4;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d5) = 0;
  *(undefined1 *)(param_1 + 0x6dd) = 1;
  FUN_14090b096(param_1);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 144196ada FUN_144196ada body=235 status=ok
// SIG undefined FUN_144196ada(void)

undefined8 * FUN_144196ada(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14007ca06();
  FUN_140eca8ca(param_1,uVar2);
  *param_1 = &PTR_FUN_14b7ac3c0;
  local_48 = DAT_14cbccff0;
  local_50 = DAT_14cbccfe8;
  FUN_1448075d0(&local_40);
  FUN_1404e49fa(param_1 + 5,&local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbcd000);
  local_40 = "mapviewerprefs";
  local_38 = 0xe;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  param_1[0x10] = (ulonglong)uVar1;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144196bc6 FUN_144196bc6 body=124 status=ok
// SIG undefined FUN_144196bc6(void)

void FUN_144196bc6(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        lVar2 = FUN_14030d4a0();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_1441e082c(lVar1,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 144196c42 FUN_144196c42 body=129 status=ok
// SIG undefined FUN_144196c42(void)

undefined8
FUN_144196c42(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x68) != 0)) &&
     (lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1441e0bc6(lVar1,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144196cc4 FUN_144196cc4 body=1240 status=ok
// SIG undefined FUN_144196cc4(void)

ulonglong FUN_144196cc4(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  ulonglong unaff_RBP;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_1 + 0x60))();
  if (((param_3 & 9) == 0) && (cVar3 != '\0')) {
    if (param_2 == (longlong *)0x0) goto LAB_144196d29;
    pwVar8 = L"Melee Locked";
LAB_144196d21:
    FUN_14020fad6(param_2,pwVar8);
  }
  else {
    cVar3 = FUN_140226b70(param_1 + 0x911);
    if (cVar3 == '\0') {
      if ((param_3 & 4) == 0) {
        cVar3 = FUN_1403ae2fa(param_1 + 0x4b8,0,0);
        if (cVar3 == '\0') {
          if (param_2 != (longlong *)0x0) {
            pwVar8 = L"Weapon use is locked.";
            goto LAB_144196d21;
          }
          goto LAB_144196d29;
        }
      }
      cVar3 = (**(code **)(*param_1 + 0x40))(param_1);
      if (((cVar3 == '\0') || ((int)param_1[0x8d4] == 0)) ||
         ((param_1[0x8d3] != 0 &&
          (((2 < (int)param_1[0x8d4] && (*(char *)(param_1[0x8d3] + 0x150) != '\0')) &&
           (param_1[0x8ed] == 0)))))) {
        if ((param_3 & 1) == 0) {
          uVar4 = FUN_1403ae46b();
          if (((-1 < (int)uVar4) && ((int)uVar4 < (int)param_1[0x7b9])) &&
             (lVar5 = (ulonglong)uVar4 * 0x48 + param_1[0x7b8], lVar5 != 0)) {
            if (*(longlong **)(lVar5 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar5 + 0x20) != 0)
            {
              lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))();
              if (lVar5 != 0) {
                lVar6 = FUN_140227782();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x8c8) + 0x38))(lVar5 + 0x8c8);
                  if (cVar3 != '\0') {
                    if (param_2 != (longlong *)0x0) {
                      pwVar8 = L"Is using grenade gadget.";
                      goto LAB_144196d21;
                    }
                    goto LAB_144196d29;
                  }
                }
              }
            }
          }
        }
        plVar1 = param_1 + -0x765;
        lVar5 = FUN_1447210f0(plVar1);
        if (lVar5 != 0) {
          if (*(double *)(lVar5 + 0x6d0) < (double)param_1[0x8d6]) {
            if (param_2 != (longlong *)0x0) {
              FUN_140002266(&local_48,L"On Cooldown: %0.02f",
                            (double)param_1[0x8d6] - *(double *)(lVar5 + 0x6d0));
              if (&local_48 == param_2) {
                if (local_48 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*param_2 != 0) {
                  FUN_1400020a8();
                }
                *param_2 = local_48;
                *(undefined4 *)(param_2 + 1) = local_40;
                *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
              }
            }
            goto LAB_144196d29;
          }
        }
        pcVar2 = *(code **)(*plVar1 + 0x5e8);
        if (pcVar2 == FUN_140972dde) {
          lVar5 = param_1[-0x6ef];
          if (lVar5 == 0) {
            pcVar2 = *(code **)(*plVar1 + 0x5f8);
            if (pcVar2 == FUN_144784df4) {
              if (*(code **)(param_1[0x1f] + 0x18) == (code *)&LAB_144904684) {
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
                if (((((*(int *)((longlong)param_1 + 0x3a8c) == 0) ||
                      (uVar4 = *(uint *)(param_1 + 0x751), (int)uVar4 < 0)) ||
                     (DAT_14c9647dc <= (int)uVar4)) ||
                    ((plVar7 = (longlong *)
                               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                     plVar7 == (longlong *)0x0 ||
                     ((int)plVar7[2] != *(int *)((longlong)param_1 + 0x3a8c))))) ||
                   ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_144196d2b;
                if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                  lVar5 = *plVar7;
                }
                else {
                  lVar5 = 0;
                }
                lVar5 = lVar5 + 0x110;
              }
              else {
                lVar5 = (**(code **)(param_1[0x1f] + 0x18))(param_1 + 0x1f);
              }
              if (lVar5 == 0) {
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
                goto LAB_144196d2b;
              }
              lVar5 = *(longlong *)(lVar5 + 0x20);
            }
            else {
              lVar5 = (*pcVar2)(plVar1);
            }
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (lVar5 == 0) goto LAB_144196d2b;
            lVar5 = *(longlong *)(lVar5 + 0x3b0);
          }
        }
        else {
          lVar5 = (*pcVar2)(plVar1);
        }
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (((param_3 & 2) != 0) || (lVar5 == 0)) goto LAB_144196d2b;
        pcVar2 = *(code **)(*plVar1 + 0x5e8);
        if (pcVar2 == FUN_140972dde) {
          lVar5 = param_1[-0x6ef];
          if (lVar5 == 0) {
            pcVar2 = *(code **)(*plVar1 + 0x5f8);
            if (pcVar2 == FUN_144784df4) {
              if (*(code **)(param_1[0x1f] + 0x18) == (code *)&LAB_144904684) {
                if ((((*(int *)((longlong)param_1 + 0x3a8c) == 0) ||
                     (uVar4 = *(uint *)(param_1 + 0x751), (int)uVar4 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar4)) ||
                   (((plVar7 = (longlong *)
                               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                     plVar7 == (longlong *)0x0 ||
                     ((int)plVar7[2] != *(int *)((longlong)param_1 + 0x3a8c))) ||
                    ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_144196d2b;
                if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                  lVar5 = *plVar7;
                }
                else {
                  lVar5 = 0;
                }
                lVar5 = lVar5 + 0x110;
              }
              else {
                lVar5 = (**(code **)(param_1[0x1f] + 0x18))(param_1 + 0x1f);
              }
              if (lVar5 == 0) goto LAB_144196d2b;
              lVar5 = *(longlong *)(lVar5 + 0x20);
            }
            else {
              lVar5 = (*pcVar2)(plVar1);
            }
            if (lVar5 == 0) goto LAB_144196d2b;
            lVar5 = *(longlong *)(lVar5 + 0x3b0);
            goto LAB_144197081;
          }
        }
        else {
          lVar5 = (*pcVar2)(plVar1);
LAB_144197081:
          if (lVar5 == 0) goto LAB_144196d2b;
        }
        if ((*(byte *)(lVar5 + 0x39a) & 8) != 0) goto LAB_144196d2b;
        cVar3 = (**(code **)(*plVar1 + 0x700))(plVar1);
        if (cVar3 != '\0') goto LAB_144196d2b;
        if (param_2 != (longlong *)0x0) {
          pwVar8 = L"Player controlled character tried to melee non-locally.";
          goto LAB_144196d21;
        }
      }
      else if (param_2 != (longlong *)0x0) {
        pwVar8 = L"Already in a melee.";
        goto LAB_144196d21;
      }
    }
    else if (param_2 != (longlong *)0x0) {
      pwVar8 = L"Is Grappling";
      goto LAB_144196d21;
    }
  }
LAB_144196d29:
  unaff_RBP = 0;
LAB_144196d2b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419719e FUN_14419719e body=1832 status=ok
// SIG undefined FUN_14419719e(void)

longlong FUN_14419719e(longlong param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  int local_150;
  longlong local_148;
  int local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_110;
  longlong *local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined6 uStack_7c;
  undefined2 uStack_76;
  undefined6 uStack_74;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_140290480(param_2);
  FUN_140290480(param_2 + 0xb8);
  FUN_140290480(param_2 + 0x170);
  *(undefined4 *)(param_2 + 0x228) = 0;
  if (*param_3 != '\0') {
    FUN_140dc01da(param_1 + -0x2620,&local_110);
    if (local_110 != (longlong *)0x0) {
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      (**(code **)(*local_110 + 8))(local_110,&local_128,&DAT_14cb8d438);
      (**(code **)(*local_110 + 8))(local_110,&local_138,&DAT_14cb8d440);
      FUN_1411c21dd(&local_148,&local_128);
      FUN_1411c21dd(&local_158,&local_138);
      lVar8 = local_128;
      lVar7 = (longlong)(int)uStack_120;
      if (lVar7 != 0) {
        lVar6 = 0;
        do {
          if (*(longlong **)(lVar8 + lVar6) != (longlong *)0x0) {
            fVar9 = (float)(**(code **)(**(longlong **)(lVar8 + lVar6) + 0x2b0))();
            fVar10 = *(float *)(param_2 + 0x228);
            if (*(float *)(param_2 + 0x228) <= fVar9) {
              fVar10 = fVar9;
            }
            *(float *)(param_2 + 0x228) = fVar10;
          }
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
      }
      lVar8 = local_138;
      lVar7 = (longlong)(int)uStack_130;
      if (lVar7 != 0) {
        lVar6 = 0;
        do {
          if (*(longlong **)(lVar8 + lVar6) != (longlong *)0x0) {
            fVar9 = (float)(**(code **)(**(longlong **)(lVar8 + lVar6) + 0x2b0))();
            fVar10 = *(float *)(param_2 + 0x228);
            if (*(float *)(param_2 + 0x228) <= fVar9) {
              fVar10 = fVar9;
            }
            *(float *)(param_2 + 0x228) = fVar10;
          }
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
      }
      local_168 = 0;
      uStack_160 = 0;
      if ((longlong)local_140 != 0) {
        lVar7 = (longlong)local_140 * 0xb8;
        lVar8 = local_148;
        do {
          FUN_140ed40b0(&local_100,lVar8);
          lVar6 = local_b8;
          if (local_b8 != 0) {
            lVar5 = FUN_1411c2570();
            uVar3 = uStack_160;
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar6 = (longlong)(int)uStack_160;
              uVar4 = (int)uStack_160 + 1;
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
              if (uStack_160._4_4_ < uVar4) {
                FUN_140ed4548(&local_168,uVar3 & 0xffffffff);
              }
              FUN_140ed40b0(lVar6 * 0xb8 + local_168,&local_100);
            }
          }
          lVar8 = lVar8 + 0xb8;
          lVar7 = lVar7 + -0xb8;
        } while (lVar7 != 0);
      }
      if ((longlong)local_150 != 0) {
        lVar7 = (longlong)local_150 * 0xb8;
        lVar8 = local_158;
        do {
          FUN_140ed40b0(&local_100,lVar8);
          lVar6 = local_b8;
          if (local_b8 != 0) {
            lVar5 = FUN_1411c2570();
            uVar3 = uStack_160;
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar6 = (longlong)(int)uStack_160;
              uVar4 = (int)uStack_160 + 1;
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
              if (uStack_160._4_4_ < uVar4) {
                FUN_140ed4548(&local_168,uVar3 & 0xffffffff);
              }
              FUN_140ed40b0(lVar6 * 0xb8 + local_168,&local_100);
            }
          }
          lVar8 = lVar8 + 0xb8;
          lVar7 = lVar7 + -0xb8;
        } while (lVar7 != 0);
      }
      if ((longlong)(int)uStack_160 != 0) {
        lVar7 = (longlong)(int)uStack_160 * 0xb8;
        lVar8 = local_168;
        do {
          FUN_140ed40b0(&local_100,lVar8);
          if (*(char *)(local_b8 + 0x38) == '\0') goto LAB_144197581;
          lVar8 = lVar8 + 0xb8;
          lVar7 = lVar7 + -0xb8;
        } while (lVar7 != 0);
      }
      local_f8 = 0;
      local_f0 = 0xffffffff00000000;
      local_e8 = 0;
      local_e7 = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      local_100 = &PTR_FUN_14a5c6dd8;
      local_d0 = 0;
      uStack_c8 = 0x3727c5ac;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = &PTR_FUN_14a5c6de8;
      local_98 = 0;
      local_90 = 0xffffffff00000000;
      local_88 = 0;
      local_84 = 0;
      uStack_7c = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      local_6c = 0x3f800000;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0x101;
      local_5e = 0;
      local_4c = 0;
      local_5c = 0;
      uStack_54 = 0;
LAB_144197581:
      FUN_141660abc(param_2,&local_100);
      if ((longlong)(int)uStack_160 != 0) {
        lVar7 = (longlong)(int)uStack_160 * 0xb8;
        lVar8 = local_168;
        do {
          FUN_140ed40b0(&local_100,lVar8);
          if (*(char *)(local_b8 + 0x38) == '\x01') goto LAB_1441976b4;
          lVar8 = lVar8 + 0xb8;
          lVar7 = lVar7 + -0xb8;
        } while (lVar7 != 0);
      }
      local_f8 = 0;
      local_f0 = 0xffffffff00000000;
      local_e8 = 0;
      local_e7 = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      local_100 = &PTR_FUN_14a5c6dd8;
      local_d0 = 0;
      uStack_c8 = 0x3727c5ac;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = &PTR_FUN_14a5c6de8;
      local_98 = 0;
      local_90 = 0xffffffff00000000;
      local_88 = 0;
      local_84 = 0;
      uStack_7c = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      local_6c = 0x3f800000;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0x101;
      local_5e = 0;
      local_4c = 0;
      local_5c = 0;
      uStack_54 = 0;
LAB_1441976b4:
      FUN_141660abc(param_2 + 0xb8,&local_100);
      if ((longlong)(int)uStack_160 != 0) {
        lVar7 = (longlong)(int)uStack_160 * 0xb8;
        lVar8 = local_168;
        do {
          FUN_140ed40b0(&local_100,lVar8);
          if (*(char *)(local_b8 + 0x38) == '\x02') goto LAB_1441977e7;
          lVar8 = lVar8 + 0xb8;
          lVar7 = lVar7 + -0xb8;
        } while (lVar7 != 0);
      }
      local_f8 = 0;
      local_f0 = 0xffffffff00000000;
      local_e8 = 0;
      local_e7 = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      local_100 = &PTR_FUN_14a5c6dd8;
      local_d0 = 0;
      uStack_c8 = 0x3727c5ac;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = &PTR_FUN_14a5c6de8;
      local_98 = 0;
      local_90 = 0xffffffff00000000;
      local_88 = 0;
      local_84 = 0;
      uStack_7c = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      local_6c = 0x3f800000;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0x101;
      local_5e = 0;
      local_4c = 0;
      local_5c = 0;
      uStack_54 = 0;
LAB_1441977e7:
      FUN_141660abc(param_2 + 0x170,&local_100);
      FUN_14499183d(local_168,uStack_160 & 0xffffffff);
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_14499183d(local_158,local_150);
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      FUN_14499183d(local_148,local_140);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441978c8 FUN_1441978c8 body=989 status=ok
// SIG undefined FUN_1441978c8(void)

void FUN_1441978c8(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  undefined *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined4 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1414e409a(param_2,DAT_14cbcd080,1);
  FUN_1407ca566(param_2,DAT_14cbcd080,1,0);
  local_30 = 0;
  local_38 = 0;
  FUN_14134ab4c(param_2,DAT_14cbcd080,1);
  lVar2 = FUN_1418769fa(param_2);
  if (lVar2 != 0) {
    FUN_1400bc96c(lVar2 + 0x1b70,&DAT_14cbcd080);
  }
  lVar2 = param_1[-0x6ed];
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_28;
      local_28 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90);
      lVar2 = param_1[-0x6ed];
      if (lVar2 == 0) goto LAB_1441979bc;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar7 = *(longlong *)(lVar2 + 0x10), lVar7 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      local_80 = local_80 & 0xffffff00;
      local_88 = local_88 & 0xffffff00;
      FUN_1459a44de(lVar2,DAT_14cbcd088,DAT_14cbcd088,0xbf800000);
    }
  }
LAB_1441979bc:
  if ((char)param_1[-0x736] == '\x03') {
    lVar2 = FUN_1418769fa(param_2);
    if (lVar2 != 0) {
      lVar7 = lVar2 + 0x1b78;
      if (*(longlong *)(lVar2 + 0x1b88) != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x1b88);
      }
      if ((longlong)*(int *)(lVar2 + 0x1b90) != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar10) == DAT_14cbcd090) {
            if ((char)param_1[-0x736] == '\x03') {
              plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
              (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
            }
            FUN_148bf7670(param_1 + -0x765,param_2);
            goto LAB_144197a62;
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)*(int *)(lVar2 + 0x1b90) * 8 != lVar10);
      }
      FUN_1400bc96c(lVar2 + 0x1b70,&DAT_14cbcd090);
    }
LAB_144197a62:
    if (param_2 != (longlong *)0x0) {
      uVar3 = FUN_145a8c174();
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_145a8c174();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
          puVar6 = (uint *)(**(code **)(*plVar5 + 0x10))(plVar5);
          if ((((puVar6[1] != 0) && (uVar9 = *puVar6, -1 < (int)uVar9)) &&
              (((int)uVar9 < DAT_14c9647dc &&
               ((plVar4 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == puVar6[1])))))) &&
             ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
              lVar2 = *plVar4;
            }
            else {
              lVar2 = 0;
            }
            if (*(char *)(lVar2 + 0x178) == '\x03') {
              *(undefined1 *)(puVar6 + 2) = 1;
            }
          }
          uVar1 = param_1[-0x760];
          if (uVar1 < 0xffffffff00000000) {
            plVar4 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar4 = (longlong *)0x0;
            }
            (**(code **)(*plVar4 + 0x58))(plVar4,param_1 + -0x765,uVar1,0x4c);
          }
          else {
            uVar9 = (uint)uVar1;
            if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
              puVar8 = &DAT_14c998070;
              if (DAT_14c998080 != (undefined *)0x0) {
                puVar8 = DAT_14c998080;
              }
              if ((*(uint *)(puVar8 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0)
              {
                lVar7 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
                lVar2 = *(longlong *)(lVar7 + 0x18);
                if (*(longlong *)(lVar7 + 0x18) == 0) {
                  lVar2 = lVar7 + 8;
                }
                *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x1000;
                *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144197ca6 FUN_144197ca6 body=1549 status=ok
// SIG undefined FUN_144197ca6(void)

void FUN_144197ca6(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  uint uVar11;
  double dVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint *puVar17;
  longlong lVar18;
  double *pdVar19;
  int iVar20;
  uint uVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_158 [32];
  float local_138;
  undefined4 local_130;
  uint local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  
  dVar12 = (double)(DAT_14c707940 ^ (ulonglong)auStack_158);
  lVar14 = param_1[-0x72c];
  local_60 = dVar12;
  if (lVar14 == 0) {
    uVar24 = SUB84(DAT_14c846500,0);
    uVar26 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
    puVar23 = param_1;
  }
  else {
    pcVar6 = *(code **)(lVar14 + 0x240);
    dVar7 = *(double *)(lVar14 + 0x248);
    dVar8 = *(double *)(lVar14 + 0x250);
    dVar9 = *(double *)(lVar14 + 600);
    pdVar19 = *(double **)(lVar14 + 0x228);
    puVar23 = param_1;
    local_98 = pcVar6;
    uStack_90 = dVar7;
    local_88 = dVar8;
    dStack_80 = dVar9;
    if (pdVar19 == (double *)0x0) {
      puVar23 = (undefined8 *)&DAT_00000040;
      pdVar19 = (double *)FUN_14001cc68(0x40,0x10);
      dVar12 = DAT_14c8463d8;
      *pdVar19 = DAT_14c8463d0;
      pdVar19[1] = dVar12;
      dVar12 = DAT_14c8463e8;
      pdVar19[2] = DAT_14c8463e0;
      pdVar19[3] = dVar12;
      dVar12 = DAT_14c846500;
      pdVar19[4] = DAT_14c8464f8;
      pdVar19[5] = dVar12;
      dVar12 = DAT_14c846508;
      pdVar19[6] = DAT_14c846508;
      *(double **)(lVar14 + 0x228) = pdVar19;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar7 != pdVar19[1]);
    auVar2._0_8_ = -(ulonglong)((double)pcVar6 != *pdVar19);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar19[1]) >> 0x20);
    uVar11 = movmskpd(SUB84(dVar12,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar9 != pdVar19[3]);
    auVar3._0_8_ = -(ulonglong)(dVar8 != pdVar19[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar19[3]) >> 0x20);
    iVar20 = movmskpd((int)puVar23,auVar3);
    uVar21 = iVar20 << 2 | uVar11;
    puVar23 = (undefined8 *)(ulonglong)uVar21;
    dVar12 = (double)(ulonglong)uVar11;
    if (uVar21 != 0) {
      puVar23 = &local_98;
      pdVar19[2] = local_88;
      pdVar19[3] = dStack_80;
      *(undefined4 *)pdVar19 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar19 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(puVar23,&local_78);
      pdVar19[6] = local_68;
      pdVar19[4] = local_78;
      pdVar19[5] = dStack_70;
      dVar12 = local_68;
    }
    uVar24 = SUB84(pdVar19[5],0);
    uVar26 = (undefined4)((ulonglong)pdVar19[5] >> 0x20);
  }
  uVar25 = SUB84(puVar23,0);
  lVar14 = param_2[0x39];
  if (lVar14 == 0) {
    uVar25 = SUB84(DAT_14c846500,0);
    uVar27 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  }
  else {
    pcVar6 = *(code **)(lVar14 + 0x240);
    dVar7 = *(double *)(lVar14 + 0x248);
    dVar8 = *(double *)(lVar14 + 0x250);
    dVar9 = *(double *)(lVar14 + 600);
    pdVar19 = *(double **)(lVar14 + 0x228);
    local_98 = pcVar6;
    uStack_90 = dVar7;
    local_88 = dVar8;
    dStack_80 = dVar9;
    if (pdVar19 == (double *)0x0) {
      uVar25 = 0x40;
      pdVar19 = (double *)FUN_14001cc68(0x40,0x10);
      dVar12 = DAT_14c8463d8;
      *pdVar19 = DAT_14c8463d0;
      pdVar19[1] = dVar12;
      dVar12 = DAT_14c8463e8;
      pdVar19[2] = DAT_14c8463e0;
      pdVar19[3] = dVar12;
      dVar12 = DAT_14c846500;
      pdVar19[4] = DAT_14c8464f8;
      pdVar19[5] = dVar12;
      dVar12 = DAT_14c846508;
      pdVar19[6] = DAT_14c846508;
      *(double **)(lVar14 + 0x228) = pdVar19;
    }
    auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar19[1]);
    auVar4._0_8_ = -(ulonglong)((double)pcVar6 != *pdVar19);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar19[1]) >> 0x20);
    iVar20 = movmskpd(SUB84(dVar12,0),auVar4);
    auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar19[3]);
    auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar19[2]);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar19[3]) >> 0x20);
    uVar11 = movmskpd(uVar25,auVar5);
    if ((uVar11 & 0x3fffffff) != 0 || iVar20 != 0) {
      pdVar19[2] = local_88;
      pdVar19[3] = dStack_80;
      *(undefined4 *)pdVar19 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar19 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(&local_98,&local_78);
      pdVar19[6] = local_68;
      pdVar19[4] = local_78;
      pdVar19[5] = dStack_70;
    }
    uVar25 = SUB84(pdVar19[5],0);
    uVar27 = (undefined4)((ulonglong)pdVar19[5] >> 0x20);
  }
  dVar12 = (double)FUN_144719204(SUB84((double)((float)(double)CONCAT44(uVar26,uVar24) -
                                               (float)(double)CONCAT44(uVar27,uVar25)),0));
  dVar12 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                   (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
  FUN_1414e409a(param_2,DAT_14cbcd080,0);
  local_d8 = *(undefined4 *)(param_3 + 1);
  local_e0 = *param_3;
  local_d0 = param_3[2];
  local_c8 = *(undefined4 *)(param_3 + 3);
  local_c0 = 0;
  local_b8 = *(undefined4 *)(param_3 + 5);
  uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uStack_b0 = *(undefined4 *)(param_3 + 6);
  uStack_ac = *(undefined4 *)((longlong)param_3 + 0x34);
  local_a8 = param_3[7];
  uStack_a0 = param_3[8];
  local_120 = 0;
  local_128 = local_128 & 0xffffff00;
  local_130 = 0;
  local_138 = (float)(double)(~-(ulonglong)(180.0 < dVar12) & (ulonglong)dVar12 |
                             (ulonglong)(dVar12 + -360.0) & -(ulonglong)(180.0 < dVar12));
  FUN_144167b86(param_2,0,0);
  if (param_2 != (longlong *)0x0) {
    uVar15 = FUN_145a8c174();
    plVar13 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar15);
    if (plVar13 != (longlong *)0x0) {
      uVar15 = FUN_145a8c174();
      plVar16 = (longlong *)FUN_144718840(plVar13,uVar15);
      if (plVar16 != (longlong *)0x0 && plVar13 != plVar16) {
        puVar17 = (uint *)(**(code **)(*plVar16 + 0x10))(plVar16);
        if ((((puVar17[1] != 0) && (uVar11 = *puVar17, -1 < (int)uVar11)) &&
            ((int)uVar11 < DAT_14c9647dc)) &&
           (((plVar13 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar17[1])) &&
            ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
            lVar14 = *plVar13;
          }
          else {
            lVar14 = 0;
          }
          if (*(char *)(lVar14 + 0x178) == '\x03') {
            *(undefined1 *)(puVar17 + 2) = 1;
          }
        }
        uVar1 = param_1[-0x760];
        if (uVar1 < 0xffffffff00000000) {
          plVar13 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar13 = (longlong *)0x0;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,param_1 + -0x765,uVar1,0x4c);
        }
        else {
          uVar11 = (uint)uVar1;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
            puVar22 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar22 = DAT_14c998080;
            }
            if ((*(uint *)(puVar22 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0)
            {
              lVar18 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
              lVar14 = *(longlong *)(lVar18 + 0x18);
              if (*(longlong *)(lVar18 + 0x18) == 0) {
                lVar14 = lVar18 + 8;
              }
              *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) | 0x1000;
              *(byte *)(lVar18 + 0x60) = *(byte *)(lVar18 + 0x60) | 1;
            }
          }
        }
      }
    }
  }
  plVar13 = (longlong *)param_1[-0x6ed];
  if (plVar13 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_100 = &local_98;
      local_98 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1459f2e4c;
      local_108 = &LAB_148c39de3;
      local_110 = &LAB_1457a9eb2;
      local_118 = &DAT_149e063b2;
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = 2.21966e-41;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      plVar13 = (longlong *)param_1[-0x6ed];
      if (plVar13 == (longlong *)0x0) goto LAB_144197f6b;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar14 = plVar13[2], lVar14 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar14 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         == DAT_14cbadd90 + 0x30 &&
        (plVar13 = (longlong *)(**(code **)(*plVar13 + 0x1098))(), plVar13 != (longlong *)0x0)))) {
      lVar14 = FUN_1405831b2();
      cVar10 = FUN_140114204(lVar14 + 0x11e0);
      if (cVar10 != '\0') {
        local_98 = (code *)CONCAT71(local_98._1_7_,0xff);
        (**(code **)(*plVar13 + 0x40))(plVar13,lVar14 + 0x11e0,&local_98,1);
      }
    }
  }
LAB_144197f6b:
  if (((ulonglong)local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441982b4 FUN_1441982b4 body=1839 status=ok
// SIG undefined FUN_1441982b4(void)

void FUN_1441982b4(longlong *param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  code *local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar6 = (longlong *)param_1[-0x6ed];
  if (plVar6 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_100 = &local_b8;
      local_b8 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1459f2e4c;
      local_108 = &LAB_148c39de3;
      local_110 = &LAB_1457a9eb2;
      local_118 = &DAT_149e063b2;
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = (undefined2 *)CONCAT44(local_138._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController");
      plVar6 = (longlong *)param_1[-0x6ed];
      if (plVar6 == (longlong *)0x0) goto LAB_144198339;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar5 = plVar6[2], lVar5 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      (**(code **)(*plVar6 + 0xcb8))(plVar6,DAT_14cbcd098);
    }
  }
LAB_144198339:
  plVar6 = param_1 + -0x765;
  lVar5 = param_1[0x5a5];
  if (lVar5 != 0) {
    lVar9 = lVar5 + 0x1b78;
    if (*(longlong *)(lVar5 + 0x1b88) != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x1b88);
    }
    if ((longlong)*(int *)(lVar5 + 0x1b90) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar9 + lVar8) == DAT_14cbcd0a0) {
          FUN_1400bc8c2(lVar5 + 0x1b70,&DAT_14cbcd0a0);
          break;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(lVar5 + 0x1b90) * 8 != lVar8);
    }
  }
  uVar4 = FUN_1401b4c98(plVar6);
  lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar5 = *(longlong *)(lVar5 + 0x20);
  if (lVar5 == 0) {
    FUN_141363d32(plVar6,DAT_14cbcd090);
  }
  else {
    fVar1 = *(float *)(lVar5 + 0x26c);
    if (fVar1 <= 0.0) {
      FUN_141363d32(plVar6,DAT_14cbcd090);
    }
    else {
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      local_e8 = uVar4;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_d0[2] = lVar8;
      *local_d0 = &PTR_FUN_14b95cc50;
      local_d0[3] = 0;
      iVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x3b1c);
        *(uint *)(local_d0 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar7 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar7;
      puVar3[4] = &LAB_148d72400;
      *(undefined4 *)(puVar3 + 5) = 0;
      local_b8 = (code *)0x0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_138 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(local_e8,param_1 + 0x908,&local_b8,fVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      if (local_c8 != 0) {
        uVar4 = local_e8;
        if (local_d0 == (undefined8 *)0x0) goto LAB_144198582;
        (**(code **)*local_d0)(local_d0,0);
        FUN_1446efa72(&local_d0,0,0,0x10);
        local_c8 = 0;
      }
      uVar4 = local_e8;
      if (local_d0 != (undefined8 *)0x0) {
        FUN_1400020a8();
        uVar4 = local_e8;
      }
    }
LAB_144198582:
    fVar1 = *(float *)(lVar5 + 0x270);
    if (0.0 < fVar1) {
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_d0[2] = lVar9;
      *local_d0 = &PTR_FUN_14b95cc50;
      local_d0[3] = 0;
      iVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x3b1c);
        *(uint *)(local_d0 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar7 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar7 = *(int *)(lVar5 + 0x10);
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(lVar5 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar7 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar7;
      puVar3[4] = FUN_148d72410;
      *(undefined4 *)(puVar3 + 5) = 0;
      local_b8 = (code *)0x0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_138 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(uVar4,param_1 + 0x909,&local_b8,fVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      if (local_c8 != 0) {
        if (local_d0 == (undefined8 *)0x0) goto LAB_14419871b;
        (**(code **)*local_d0)(local_d0,0);
        FUN_1446efa72(&local_d0,0,0,0x10);
        local_c8 = 0;
      }
      if (local_d0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14419871b;
    }
  }
  FUN_148d72410(plVar6);
LAB_14419871b:
  if (param_2 != 0) {
    FUN_1414e409a(param_2,DAT_14cbcd080);
    FUN_1407ca566(param_2,DAT_14cbcd080,0,0);
    local_d8 = 0;
    local_e0 = 0;
    FUN_14134ab4c(param_2,DAT_14cbcd080);
    lVar5 = FUN_1418769fa(param_2);
    if (lVar5 != 0) {
      lVar9 = lVar5 + 0x1b78;
      if (*(longlong *)(lVar5 + 0x1b88) != 0) {
        lVar9 = *(longlong *)(lVar5 + 0x1b88);
      }
      if ((longlong)*(int *)(lVar5 + 0x1b90) != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar9 + lVar8) == DAT_14cbcd080) {
            FUN_1400bc8c2(lVar5 + 0x1b70,&DAT_14cbcd080);
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(lVar5 + 0x1b90) * 8 != lVar8);
      }
      if ((char)param_1[-0x736] == '\x03') {
        FUN_1400bc8c2(lVar5 + 0x1b70,&DAT_14cbcd090);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441989e4 FUN_1441989e4 body=586 status=ok
// SIG undefined FUN_1441989e4(void)

ulonglong FUN_1441989e4(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0xc))) ||
      (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar5 = *plVar4, lVar5 == 0)))))) {
LAB_144198a81:
    uVar1 = FUN_1458e3c48(param_1,param_2,param_3);
    uVar6 = (ulonglong)uVar1;
    plVar4 = (longlong *)*param_3;
    if ((plVar4 != (longlong *)0x0 & param_2 != 0 & (byte)uVar1) != 1) goto LAB_144198aea;
    uVar6 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if (((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) goto LAB_144198aea;
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xc))) ||
       ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_144198aea;
    uVar2 = FUN_145a8c174();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
    if (plVar4 == (longlong *)0x0) goto LAB_144198aea;
    uVar2 = FUN_145a8c174();
    plVar3 = (longlong *)FUN_144718840(plVar4,uVar2);
    if (plVar3 == (longlong *)0x0 || plVar4 == plVar3) goto LAB_144198aea;
    lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(char *)(lVar5 + 8) != '\x01') goto LAB_144198aea;
    *param_3 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
       ((*(longlong *)(&DAT_00006850 + lVar5) == 0 ||
        ((&DAT_00001100)[*(longlong *)(&DAT_00006850 + lVar5)] != '\r')))) goto LAB_144198a81;
  }
  uVar6 = 0;
LAB_144198aea:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144198c30 FUN_144198c30 body=2061 status=ok
// SIG undefined FUN_144198c30(void)

void FUN_144198c30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8 [2];
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = param_1;
  local_100 = FUN_148d72ca4();
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  if ((*(char *)(local_100 + 8) == '\x01') && ((longlong)*(int *)(local_100 + 0x18) != 0)) {
    lVar21 = *(longlong *)(local_100 + 0x10);
    local_f8 = (longlong *)(local_108 + 0xe8);
    local_f0 = (longlong)*(int *)(local_100 + 0x18) * 0xc;
    lVar16 = 0;
    do {
      local_90 = *(undefined4 *)(lVar21 + 8 + lVar16);
      local_98 = *(undefined8 *)(lVar21 + lVar16);
      FUN_1408226d0(&local_98,local_b8,0);
      FUN_1408226d0(local_f8,&local_d8,0);
      iVar20 = (int)local_d0;
      iVar9 = ((int)local_d0 == 0) + 1;
      local_c8 = local_d8;
      local_d8 = 0;
      local_c0 = (int)local_d0;
      iVar5 = local_d0._4_4_;
      local_bc = local_d0._4_4_;
      local_d0 = 0;
      iVar14 = iVar9 + iVar20;
      if (iVar14 < iVar20) goto LAB_144199437;
      if (iVar14 < 0) goto LAB_144199430;
      if (iVar5 < iVar14) {
        FUN_1446f8c06(&local_c8);
      }
      FUN_140002184(&local_c8,0x2e);
      FUN_1401c7f3e(&local_a8,&local_c8);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      uVar7 = uStack_70;
      lVar17 = (longlong)(int)uStack_70;
      uVar10 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
      if (uStack_70._4_4_ < uVar10) {
        FUN_1447a1bd6(&local_78,uVar7 & 0xffffffff);
      }
      pvVar6 = local_a8;
      plVar11 = local_78 + lVar17 * 2;
      local_78[lVar17 * 2] = 0;
      lVar18 = (longlong)(int)uStack_a0;
      *(int *)(local_78 + lVar17 * 2 + 1) = (int)uStack_a0;
      if (lVar18 == 0) {
        *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(plVar11,uStack_a0 & 0xffffffff,0);
        memcpy((void *)*plVar11,pvVar6,lVar18 * 2);
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 0xc;
    } while (local_f0 != lVar16);
  }
  if ((*(char *)(local_100 + 0x20) == '\x01') && ((longlong)*(int *)(local_100 + 0x30) != 0)) {
    lVar21 = *(longlong *)(local_100 + 0x28);
    local_f8 = (longlong *)(local_108 + 0xe8);
    local_f0 = (longlong)*(int *)(local_100 + 0x30) * 0xc;
    lVar16 = 0;
    do {
      local_90 = *(undefined4 *)(lVar21 + 8 + lVar16);
      local_98 = *(undefined8 *)(lVar21 + lVar16);
      FUN_1408226d0(&local_98,local_b8,0);
      FUN_1408226d0(local_f8,&local_d8,0);
      iVar20 = (int)local_d0;
      iVar9 = ((int)local_d0 == 0) + 1;
      local_c8 = local_d8;
      local_d8 = 0;
      local_c0 = (int)local_d0;
      iVar5 = local_d0._4_4_;
      local_bc = local_d0._4_4_;
      local_d0 = 0;
      iVar14 = iVar9 + iVar20;
      if (iVar14 < iVar20) {
LAB_144199437:
        local_d0 = 0;
        local_d8 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      if (iVar14 < 0) {
LAB_144199430:
        local_d0 = 0;
        local_d8 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar14);
      }
      if (iVar5 < iVar14) {
        FUN_1446f8c06(&local_c8);
      }
      FUN_140002184(&local_c8,0x2e);
      FUN_1401c7f3e(&local_a8,&local_c8);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      uVar7 = uStack_80;
      lVar17 = (longlong)(int)uStack_80;
      uVar10 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
      if (uStack_80._4_4_ < uVar10) {
        FUN_1447a1bd6(&local_88,uVar7 & 0xffffffff);
      }
      pvVar6 = local_a8;
      plVar11 = local_88 + lVar17 * 2;
      local_88[lVar17 * 2] = 0;
      lVar18 = (longlong)(int)uStack_a0;
      *(int *)(local_88 + lVar17 * 2 + 1) = (int)uStack_a0;
      if (lVar18 == 0) {
        *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(plVar11,uStack_a0 & 0xffffffff,0);
        memcpy((void *)*plVar11,pvVar6,lVar18 * 2);
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 0xc;
    } while (local_f0 != lVar16);
  }
  lVar21 = local_108;
  local_e8 = *(undefined8 *)(local_108 + 0x20);
  local_e0 = *(undefined4 *)(local_108 + 0x28);
  plVar11 = (longlong *)FUN_1488ed6e6(*(undefined8 *)(local_108 + 0x18));
  if ((longlong)(int)plVar11[1] != 0) {
    plVar19 = (longlong *)*plVar11;
    plVar2 = plVar19 + (int)plVar11[1];
    plVar11 = (longlong *)(lVar21 + 0x108);
    plVar1 = (longlong *)(lVar21 + 0x118);
    do {
      lVar16 = *plVar19;
      if (((*(int *)(lVar16 + 0xe8) == *(int *)(lVar21 + 0xe8)) &&
          (*(int *)(lVar16 + 0xf0) == *(int *)(lVar21 + 0xf0))) &&
         (lVar17 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0x18), lVar17 != 0)) {
        uVar12 = FUN_1465c49c0();
        cVar8 = FUN_1448093f4(lVar17,uVar12);
        if (cVar8 == '\0') {
          lVar17 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0x18);
          lVar21 = local_108;
          if (lVar17 != 0) {
            uVar12 = FUN_1465c4ee6();
            cVar8 = FUN_1448093f4(lVar17,uVar12);
            lVar21 = local_108;
            if (cVar8 != '\0') {
              puVar13 = *(undefined4 **)(*(longlong *)(lVar16 + 0x38) + 8);
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = &DAT_14c9485f0;
              }
              local_a8 = (void *)0x0;
              uStack_a0 = 0;
              FUN_1400b2348(puVar13,&local_a8,1);
              if (*(char *)(local_100 + 0x20) == '\0') {
                if ((longlong)(int)uStack_80 != 0) {
                  local_f8 = local_88 + (longlong)(int)uStack_80 * 2;
                  plVar15 = local_88;
LAB_1441992f8:
                  if ((int)plVar15[1] == (int)uStack_a0) {
                    if (1 < (int)uStack_a0) {
                      lVar21 = 0;
                      do {
                        uVar3 = *(ushort *)(*plVar15 + lVar21);
                        uVar4 = *(ushort *)((longlong)local_a8 + lVar21);
                        if (uVar3 == uVar4) {
                          if (uVar3 == 0) break;
                        }
                        else {
                          if (0x7f < (uVar4 | uVar3)) {
                            iVar20 = (uint)uVar3 - (uint)uVar4;
                            goto LAB_14419935a;
                          }
                          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4])
                          goto code_r0x000144199357;
                        }
                        lVar21 = lVar21 + 2;
                      } while( true );
                    }
                  }
                  else if ((int)plVar15[1] + (int)uStack_a0 != 1) goto LAB_144199374;
                  goto LAB_1441991ad;
                }
              }
              else {
LAB_1441991ad:
                iVar20 = *(int *)(local_108 + 0x120);
                *(uint *)(local_108 + 0x120) = iVar20 + 1U;
                if (*(uint *)(local_108 + 0x124) < iVar20 + 1U) {
                  FUN_148d77a52(plVar1,iVar20);
                }
                *(longlong *)(*plVar1 + (longlong)iVar20 * 8) = lVar16;
              }
              goto LAB_144199135;
            }
          }
        }
        else {
          puVar13 = *(undefined4 **)(*(longlong *)(lVar16 + 0x38) + 8);
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = &DAT_14c9485f0;
          }
          local_a8 = (void *)0x0;
          uStack_a0 = 0;
          FUN_1400b2348(puVar13,&local_a8,1);
          if (*(char *)(local_100 + 8) == '\0') {
            if ((longlong)(int)uStack_70 != 0) {
              plVar15 = local_78;
LAB_144199212:
              if ((int)plVar15[1] == (int)uStack_a0) {
                if (1 < (int)uStack_a0) {
                  lVar21 = 0;
                  do {
                    uVar3 = *(ushort *)(*plVar15 + lVar21);
                    uVar4 = *(ushort *)((longlong)local_a8 + lVar21);
                    if (uVar3 == uVar4) {
                      if (uVar3 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar4 | uVar3)) {
                        iVar20 = (uint)uVar3 - (uint)uVar4;
                        goto LAB_144199274;
                      }
                      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4])
                      goto code_r0x000144199271;
                    }
                    lVar21 = lVar21 + 2;
                  } while( true );
                }
              }
              else if ((int)plVar15[1] + (int)uStack_a0 != 1) goto LAB_14419928e;
              goto LAB_1441990fe;
            }
          }
          else {
LAB_1441990fe:
            iVar20 = *(int *)(local_108 + 0x110);
            *(uint *)(local_108 + 0x110) = iVar20 + 1U;
            if (*(uint *)(local_108 + 0x114) < iVar20 + 1U) {
              FUN_148d779cc(plVar11,iVar20);
            }
            *(longlong *)(*plVar11 + (longlong)iVar20 * 8) = lVar16;
          }
LAB_144199135:
          lVar21 = local_108;
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
            lVar21 = local_108;
          }
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar2);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000144199271:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_144199274:
  if (iVar20 == 0) goto LAB_1441990fe;
LAB_14419928e:
  plVar15 = plVar15 + 2;
  if (plVar15 == local_78 + (longlong)(int)uStack_70 * 2) goto LAB_144199135;
  goto LAB_144199212;
code_r0x000144199357:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_14419935a:
  if (iVar20 == 0) goto LAB_1441991ad;
LAB_144199374:
  plVar15 = plVar15 + 2;
  if (plVar15 == local_f8) goto LAB_144199135;
  goto LAB_1441992f8;
}



// FUNCTION 144199440 FUN_144199440 body=969 status=ok
// SIG undefined FUN_144199440(void)

void FUN_144199440(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [4];
  undefined8 local_bc;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x108);
    local_100 = plVar9 + *(int *)(param_1 + 0x110);
    local_110 = &DAT_14cbcd0f8;
    local_118 = (undefined8 *)(param_1 + 0x20);
    if (param_3 != '\0') {
      local_110 = &DAT_14cbcd0e0;
    }
    local_108 = &DAT_14cbcdd50;
    if (param_3 != '\0') {
      local_108 = &DAT_14cbcdd38;
    }
    do {
      lVar5 = *plVar9;
      if (lVar5 != 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
        if ((iVar7 == 0) ||
           (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110), (int)uVar1 < 0)) {
LAB_1441997d4:
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != iVar7)) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_1441997d4;
            lVar10 = *plVar6;
          }
        }
        sVar3 = FUN_14419980a(param_2);
        if (sVar3 != -1 && lVar10 != 0) {
          iVar7 = (int)sVar3;
          local_c8 = *(undefined4 *)(local_110 + 1);
          local_d0 = *local_110;
          local_e0 = *(undefined8 *)(lVar5 + 0x2c);
          local_d8 = *(undefined4 *)(lVar5 + 0x34);
          local_f0 = *local_118;
          local_e8 = *(undefined4 *)(local_118 + 1);
          FUN_14884572d(local_80,&local_f0,&local_e0,&local_d0);
          local_c0[0] = 2;
          local_bc = 0;
          local_b4 = iVar7;
          if (((*(longlong *)(lVar10 + 0x1e0) != 0) &&
              (plVar6 = *(longlong **)(*(longlong *)(lVar10 + 0x1e0) + 0x38),
              plVar6 != (longlong *)0x0)) &&
             ((plVar6 = (longlong *)(**(code **)(*plVar6 + 0x308))(plVar6,0),
              plVar6 != (longlong *)0x0 &&
              (lVar5 = (**(code **)(*plVar6 + 0x2b0))(plVar6), lVar5 != 0)))) {
            FUN_140bc53f1(local_80,local_c0,lVar5,0);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
      }
      iVar7 = *(int *)(param_1 + 0x120);
      if ((longlong)iVar7 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x118);
        lVar10 = 0;
        local_f8 = plVar9;
        do {
          lVar4 = *(longlong *)(lVar5 + lVar10);
          if (lVar4 != 0) {
            sVar3 = FUN_14419980a(param_2);
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
            if ((iVar2 == 0) ||
               (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110), (int)uVar1 < 0)) {
LAB_1441996df:
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != iVar2)) ||
                   ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_1441996df;
                lVar8 = *plVar6;
              }
            }
            if ((sVar3 != -1) || (lVar8 != 0)) {
              local_88 = *(undefined4 *)(local_108 + 1);
              local_90 = *local_108;
              local_a0 = *(undefined8 *)(lVar4 + 0x2c);
              local_98 = *(undefined4 *)(lVar4 + 0x34);
              local_b0 = *local_118;
              local_a8 = *(undefined4 *)(local_118 + 1);
              FUN_14884572d(local_80,&local_b0,&local_a0,&local_90);
              local_c0[0] = 2;
              local_bc = 0;
              local_b4 = (int)sVar3;
              lVar4 = FUN_14040226a(lVar8,0);
              if (lVar4 != 0) {
                FUN_140bc53f1(local_80,local_c0,lVar4,0);
              }
              plVar9 = local_f8;
              if (local_58 != 0) {
                FUN_1400020a8();
                plVar9 = local_f8;
              }
            }
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar7 * 8 != lVar10);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_100);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419980a FUN_14419980a body=355 status=ok
// SIG undefined FUN_14419980a(void)

ulonglong FUN_14419980a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
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
  uVar4 = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0xffff);
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cacf818 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b216c;
      local_48 = &LAB_1479977e3;
      local_50 = &LAB_1463b2171;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) ==
        DAT_14cacf818 + 0x30)) {
      plVar1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x5e8))(plVar1);
        if (lVar2 != 0) {
          lVar3 = FUN_140082f10();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            uVar4 = (ulonglong)*(ushort *)(lVar2 + 0x538);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419996e FUN_14419996e body=1152 status=ok
// SIG undefined FUN_14419996e(void)

undefined4 * FUN_14419996e(longlong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_118 [40];
  undefined4 *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  uint *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  char local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = FUN_143dd97c6();
  lVar6 = FUN_148d72ca4(param_1);
  local_90 = *(undefined8 *)(lVar6 + 0x38);
  local_88 = *(undefined4 *)(lVar6 + 0x40);
  if ((lVar5 == 0) || ((int)local_90 == 0)) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar22 = DAT_14c8464e8._4_4_;
    uVar21 = (undefined4)DAT_14c8464e8;
    uVar20 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar20;
    param_2[2] = uVar21;
    param_2[3] = uVar22;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar6 + 0x40));
  local_c8 = *(undefined8 *)(lVar6 + 0x38);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 1;
  FUN_1446dd7be(&local_80,1,0);
  *(undefined4 *)(local_80 + 1) = (undefined4)uStack_c0;
  *local_80 = local_c8;
  FUN_143dd9c4e(lVar5,&local_80,&local_a8);
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = FUN_1405f6336(lVar5);
  if (0 < (int)uStack_a0) {
    local_f0 = param_2;
    local_e0 = lVar5;
    local_d8 = param_1;
    if (lVar6 != 0) {
      local_d0 = (uint *)(lVar6 + 0x458);
      uVar2 = *(uint *)(lVar6 + 0x470);
      if (uVar2 == 0) {
        uVar12 = 1;
        uVar19 = 0;
        iVar17 = 0;
        uVar10 = 0;
      }
      else {
        puVar16 = *(uint **)(lVar6 + 0x468);
        if (*(uint **)(lVar6 + 0x468) == (uint *)0x0) {
          puVar16 = local_d0;
        }
        uVar10 = *puVar16;
        if (uVar10 == 0) {
          iVar17 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar17 = uVar2 - 1;
          }
          uVar19 = 0;
          uVar12 = (ulonglong)(uint)(iVar17 >> 5);
          if (iVar17 >> 5 < 1) {
            uVar12 = uVar19;
          }
          iVar17 = 0;
          do {
            if (uVar12 == uVar19) goto LAB_144199b40;
            iVar17 = iVar17 + 0x20;
            uVar10 = puVar16[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar19 = 0;
          iVar17 = 0;
        }
        uVar12 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar12 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar10 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar10) {
          uVar10 = uVar2;
        }
      }
      if (uVar10 != uVar2) {
        uVar11 = 0xffffffff;
        local_e8 = (ulonglong)uVar2;
        do {
          lVar5 = *(longlong *)(lVar6 + 0x448);
          lVar15 = *(longlong *)(lVar5 + 0x10 + (longlong)(int)uVar10 * 0x20);
          cVar4 = FUN_14493b798(lVar15 + 0x20,local_a8);
          param_2 = local_f0;
          if (cVar4 != '\0') {
            puVar14 = (undefined8 *)(lVar5 + (longlong)(int)uVar10 * 0x20);
            local_b8 = *(undefined8 *)(lVar15 + 0x70);
            local_c8 = *(undefined8 *)(lVar15 + 0x60);
            uStack_c0 = *(undefined8 *)(lVar15 + 0x68);
            local_88 = *(undefined4 *)(puVar14 + 1);
            local_90 = *puVar14;
            if ((*(char *)(lVar15 + 0x58) == '\x01') &&
               (FUN_14117aed4(local_e0,&local_80,&local_90), local_50 == '\x01')) {
              local_b8 = local_58;
              local_c8 = CONCAT71(uStack_67,local_68);
              uStack_c0 = uStack_60;
            }
            *(undefined8 *)(param_2 + 4) = local_b8;
            uVar20 = (undefined4)local_c8;
            uVar21 = local_c8._4_4_;
            uVar22 = (undefined4)uStack_c0;
            uStack_74 = uStack_c0._4_4_;
            goto LAB_144199c02;
          }
          uVar11 = uVar11 & ~(uint)uVar12;
          puVar16 = *(uint **)(lVar6 + 0x468);
          if (*(uint **)(lVar6 + 0x468) == (uint *)0x0) {
            puVar16 = local_d0;
          }
          uVar2 = *(uint *)(lVar6 + 0x470);
          iVar18 = (int)uVar19;
          lVar5 = (longlong)iVar18;
          uVar10 = puVar16[lVar5] & uVar11;
          if (uVar10 == 0) {
            iVar8 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar8 = uVar2 - 1;
            }
            iVar8 = iVar8 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar18) {
              iVar9 = iVar18;
            }
            if (iVar18 < iVar8) {
              lVar15 = 0;
              do {
                uVar10 = puVar16[lVar5 + lVar15 + 1];
                if (uVar10 != 0) {
                  uVar19 = (ulonglong)(iVar18 + (int)lVar15 + 1);
                  uVar11 = 0xffffffff;
                  goto LAB_144199d05;
                }
                iVar17 = iVar17 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar9 - lVar5 != lVar15);
              uVar11 = 0xffffffff;
              iVar18 = iVar9;
            }
            uVar19 = (ulonglong)(iVar18 + 1);
            uVar10 = uVar2;
          }
          else {
LAB_144199d05:
            uVar12 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar12 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar10 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar10) {
              uVar10 = uVar2;
            }
          }
        } while (uVar10 != (uint)local_e8);
      }
    }
LAB_144199b40:
    param_2 = local_f0;
    plVar3 = *(longlong **)(local_d8 + 0x18);
    if (*(int *)((longlong)plVar3 + 0x114) == 0) {
LAB_144199de3:
      uVar13 = 0;
    }
    else {
      uVar2 = *(uint *)(plVar3 + 0x22);
      uVar13 = 0;
      if ((int)uVar2 < 0) goto LAB_144199de3;
      if ((int)uVar2 < DAT_14c9647dc) {
        puVar14 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar14 == (undefined8 *)0x0) ||
            (*(int *)(puVar14 + 2) != *(int *)((longlong)plVar3 + 0x114))) ||
           ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = *puVar14;
        }
      }
    }
    uVar7 = (**(code **)(*plVar3 + 0x180))();
    FUN_1441a0200(&local_80,local_a8,uVar7,uVar13);
    if (local_68 == '\x01') {
      *(undefined8 *)(param_2 + 4) = local_70;
      uVar20 = (undefined4)local_80;
      uVar21 = local_80._4_4_;
      uVar22 = uStack_78;
      goto LAB_144199c02;
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar20 = (undefined4)DAT_14c8464e0;
  uVar21 = DAT_14c8464e0._4_4_;
  uVar22 = (undefined4)DAT_14c8464e8;
  uStack_74 = DAT_14c8464e8._4_4_;
LAB_144199c02:
  *param_2 = uVar20;
  param_2[1] = uVar21;
  param_2[2] = uVar22;
  param_2[3] = uStack_74;
  FUN_1405d7ab2(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144199e28 FUN_144199e28 body=682 status=ok
// SIG undefined FUN_144199e28(void)

void FUN_144199e28(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) goto LAB_144199e47;
  plVar14 = param_1 + 0x20;
  iVar3 = (int)param_1[0x23];
  if ((iVar3 <= (int)param_2) && (-2 < (int)(param_2 - iVar3))) {
    iVar15 = (param_2 - iVar3) + 1;
    if (iVar15 != 0) {
      if (iVar3 != 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        if (param_2 >> 5 == iVar9 >> 5) {
          *(uint *)(param_1 + 0x23) = param_2 + 1;
          goto LAB_144199eb9;
        }
      }
      iVar9 = param_2 + 1;
      if (*(int *)((longlong)param_1 + 0x11c) < iVar9) {
        iVar9 = iVar3;
        if (param_2 < 0x80) {
          iVar4 = 0x80;
        }
        else {
          uVar17 = param_2 + 0x20 >> 5;
          if (*(int *)((longlong)param_1 + 0x11c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar17) {
              uVar11 = uVar17;
            }
          }
          else {
            uVar11 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar7 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar13 = 0x32;
                  if (0x32 < bVar8) {
                    uVar13 = (ulonglong)bVar8;
                  }
                  uVar16 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_144199ff5;
                    lVar2 = uVar13 + 1 + uVar16;
                    uVar16 = uVar16 - 1;
                  } while (lVar2 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar10 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar9 = (int)param_1[0x23];
            }
          }
LAB_144199ff5:
          iVar6 = (int)(uVar7 >> 2);
          iVar4 = -0x20;
          if ((int)uVar17 <= iVar6) {
            iVar4 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x11c) = iVar4;
        FUN_1446efbd8(plVar14,iVar9);
        iVar9 = (int)param_1[0x23] + iVar15;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 0x23) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[0x22];
        if ((longlong *)param_1[0x22] == (longlong *)0x0) {
          plVar12 = plVar14;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
LAB_144199eb9:
    FUN_1447c6044(plVar14,iVar3,iVar15,0);
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[0x22];
  }
  puVar1 = (uint *)((longlong)plVar14 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  (**(code **)(*param_1 + 0x50))(param_1);
  local_48 = 2;
  local_3c = 0xffffffff;
  local_44 = 0;
  FUN_1488ebe76(param_1,&DAT_14cbcd0e0);
LAB_144199e47:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419a0d4 FUN_14419a0d4 body=684 status=ok
// SIG undefined FUN_14419a0d4(void)

void FUN_14419a0d4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) goto LAB_14419a0f3;
  plVar14 = param_1 + 0x20;
  iVar3 = (int)param_1[0x23];
  if ((iVar3 <= (int)param_2) && (-2 < (int)(param_2 - iVar3))) {
    iVar15 = (param_2 - iVar3) + 1;
    if (iVar15 != 0) {
      if (iVar3 != 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        if (param_2 >> 5 == iVar9 >> 5) {
          *(uint *)(param_1 + 0x23) = param_2 + 1;
          goto LAB_14419a165;
        }
      }
      iVar9 = param_2 + 1;
      if (*(int *)((longlong)param_1 + 0x11c) < iVar9) {
        iVar9 = iVar3;
        if (param_2 < 0x80) {
          iVar4 = 0x80;
        }
        else {
          uVar17 = param_2 + 0x20 >> 5;
          if (*(int *)((longlong)param_1 + 0x11c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar17) {
              uVar11 = uVar17;
            }
          }
          else {
            uVar11 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar7 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar13 = 0x32;
                  if (0x32 < bVar8) {
                    uVar13 = (ulonglong)bVar8;
                  }
                  uVar16 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_14419a2a3;
                    lVar2 = uVar13 + 1 + uVar16;
                    uVar16 = uVar16 - 1;
                  } while (lVar2 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar10 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar9 = (int)param_1[0x23];
            }
          }
LAB_14419a2a3:
          iVar6 = (int)(uVar7 >> 2);
          iVar4 = -0x20;
          if ((int)uVar17 <= iVar6) {
            iVar4 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x11c) = iVar4;
        FUN_1446efbd8(plVar14,iVar9);
        iVar9 = (int)param_1[0x23] + iVar15;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 0x23) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[0x22];
        if ((longlong *)param_1[0x22] == (longlong *)0x0) {
          plVar12 = plVar14;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
LAB_14419a165:
    FUN_1447c6044(plVar14,iVar3,iVar15,0);
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[0x22];
  }
  bVar8 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar14 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  (**(code **)(*param_1 + 0x50))(param_1);
  local_48 = 2;
  local_3c = 0xffffffff;
  local_44 = 0;
  FUN_1488ebe76(param_1,&DAT_14cbcd0f8);
LAB_14419a0f3:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419a382 FUN_14419a382 body=2106 status=ok
// SIG undefined FUN_14419a382(void)

void FUN_14419a382(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_1a8 [32];
  int local_188;
  int local_184;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148;
  undefined4 local_140;
  longlong *local_138 [2];
  longlong *local_128;
  undefined4 local_120;
  longlong *local_118;
  ulonglong uStack_110;
  longlong local_fc;
  uint local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong *local_d8;
  longlong local_d0;
  uint local_c8;
  longlong local_c0;
  uint local_b8;
  undefined8 local_b4;
  uint local_ac;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar11 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  if (lVar11 == 0) {
    bVar22 = true;
  }
  else {
    uVar12 = FUN_14490d72a(lVar11);
    bVar22 = (uVar12 & 0xfffffffd) != 0;
  }
  if ((!bVar22) || ((char)(*(longlong **)(param_1 + 0x18))[0x23] == '\0')) {
    lVar11 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    if ((lVar11 != 0) &&
       ((plVar13 = (longlong *)FUN_140636ec6(lVar11), plVar13 != (longlong *)0x0 &&
        (lVar11 = (**(code **)(*plVar13 + 0x5e8))(plVar13), lVar11 != 0)))) {
      lVar14 = FUN_140082f10();
      if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (((*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30 &&
           (uVar9 = (uint)*(short *)(lVar11 + 0x538), -1 < *(short *)(lVar11 + 0x538))) &&
          ((int)uVar9 < *(int *)(param_1 + 0x118))))) {
        lVar11 = param_1 + 0x100;
        if (*(longlong *)(param_1 + 0x110) != 0) {
          lVar11 = *(longlong *)(param_1 + 0x110);
        }
        if ((*(uint *)(lVar11 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_1a8);
        }
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x118) != '\x01') goto LAB_14419a44d;
  }
  lVar11 = param_1 + 0xa0;
  FUN_148d73a66(lVar11);
  uVar15 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  plVar13 = (longlong *)FUN_1406f625c(uVar15);
  if (((plVar13 != (longlong *)0x0) &&
      (lVar14 = (**(code **)(*plVar13 + 0x2b8))(plVar13), lVar14 != 0)) &&
     (plVar13 = *(longlong **)(lVar14 + 0xe0), plVar13 != (longlong *)0x0)) {
    FUN_1488ecbb8(param_1,&local_fc);
    lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_fc);
    if (lVar14 != 0) {
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_14890ea3e(lVar14);
      fVar23 = 0.0;
      if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x48) == '\x01') {
        fVar23 = (float)*(int *)(*(longlong *)(param_1 + 0x38) + 0x4c);
      }
      lVar14 = FUN_148d73aa4(param_1);
      if ((int)uStack_110 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_110 & 0xffffffff);
      }
      if (*(int *)(param_1 + 0xd4) < (int)uStack_110) {
        FUN_148d79c04(lVar11);
      }
      if ((int)uStack_110 != 0) {
        plVar13 = local_118 + (int)uStack_110;
        local_170 = lVar14 + 8;
        local_178 = lVar14 + 0x30;
        plVar21 = local_118;
        local_180 = lVar14;
        do {
          lVar4 = *plVar21;
          lVar5 = *(longlong *)(lVar4 + 0x40);
          if (*(char *)(lVar5 + 0x3ab) == '\0') {
            cVar7 = FUN_140d1d704(lVar5 + 0x428,local_170,*(undefined1 *)(lVar14 + 0x28));
            if (cVar7 == '\0') {
              uVar3 = *(ushort *)(lVar5 + 0x3a8);
              lVar14 = *(longlong *)(DAT_14cb86da8 + 0x370);
              uVar15 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
              FUN_143deff24((ulonglong)((uint)uVar3 * 0x18) + lVar14,&local_128,&local_fc,uVar15);
              plVar20 = local_128;
              if (*(code **)(*local_128 + 0x50) != FUN_144828418) {
                plVar20 = (longlong *)(**(code **)(*local_128 + 0x50))();
              }
              FUN_1447a1fc0(plVar20);
              pcVar6 = *(code **)(*local_128 + 0x28);
              if (pcVar6 == FUN_14482841c) {
                plVar20 = local_128 + 3;
                if (local_128[5] != 0) {
                  plVar20 = (longlong *)(local_128[5] + 8);
                }
              }
              else if (pcVar6 == (code *)&LAB_14010c34c) {
                plVar20 = local_128 + 2;
              }
              else {
                plVar20 = (longlong *)(*pcVar6)(local_128);
              }
              if (1 < (int)plVar20[1]) {
                if ((*(longlong *)(lVar5 + 0x338) != 0) &&
                   (*(char *)(*(longlong *)(lVar5 + 0x338) + 0x68) == '\x01')) {
                  local_184 = FUN_148910a2e(lVar4);
                  local_188 = FUN_148910a0c(lVar4);
                  local_148 = local_128;
                  if (local_128 != (longlong *)0x0) {
                    (**(code **)(*local_128 + 8))();
                  }
                  local_140 = local_120;
                  FUN_1467d1526(local_168,L"{0} ({1} / {2})");
                  FUN_14023409e(&local_158,local_168,1);
                  local_c0 = CONCAT44(local_c0._4_4_,4);
                  FUN_14023423e((longlong)&local_b4 + 4,&local_148);
                  local_a0 = 0;
                  local_90 = 0;
                  local_88 = 0;
                  local_98 = (longlong)local_188;
                  local_80 = 0;
                  local_70 = 0;
                  local_68 = 0;
                  local_78 = (longlong)local_184;
                  local_e0 = &local_c0;
                  local_d8 = local_60;
                  FUN_14010d304(&local_d0,&local_e0);
                  local_f0 = local_158;
                  local_e8 = local_150;
                  if (local_150 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_150 + 1) = (int)local_150[1] + 1;
                    UNLOCK();
                  }
                  FUN_14010c016(local_138,&local_f0,&local_d0);
                  FUN_14007f2db(local_d0,local_c8);
                  if (local_d0 != 0) {
                    FUN_1400020a8();
                  }
                  lVar14 = 0x50;
                  do {
                    if (*(longlong **)((longlong)&local_c0 + lVar14) != (longlong *)0x0) {
                      (**(code **)(**(longlong **)((longlong)&local_c0 + lVar14) + 0x10))();
                      *(undefined8 *)((longlong)&local_c0 + lVar14) = 0;
                      *(undefined4 *)((longlong)&local_b8 + lVar14) = 0;
                    }
                    plVar20 = local_150;
                    lVar14 = lVar14 + -0x20;
                  } while (lVar14 != -0x10);
                  if (local_150 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_150 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_150)(local_150);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar20 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar20 + 0x10))(plVar20);
                      }
                    }
                  }
                  if (local_148 != (longlong *)0x0) {
                    (**(code **)(*local_148 + 0x10))();
                  }
                  FUN_140008f88(&local_128,local_138);
                  if (local_138[0] != (longlong *)0x0) {
                    (**(code **)(*local_138[0] + 0x10))();
                  }
                  if (local_168[0] != (longlong *)0x0) {
                    (**(code **)(*local_168[0] + 0x10))();
                  }
                }
                lVar16 = FUN_148d73b18(lVar11);
                FUN_140008f88(lVar16,&local_128);
                *(float *)(lVar16 + 0x10) = *(float *)(lVar5 + 0x38c) + fVar23;
                *(undefined1 *)(lVar16 + 0x14) = 1;
                uVar8 = FUN_140d1d704(lVar5 + 0x428,local_178,*(undefined1 *)(local_180 + 0x50));
                *(undefined1 *)(lVar16 + 0x18) = uVar8;
                iVar10 = 0;
                lVar14 = lVar4;
                do {
                  while (*(longlong *)(lVar14 + 0xb8) != 0) {
                    iVar10 = iVar10 + 1;
                    lVar14 = *(longlong *)(lVar14 + 0xb8);
                  }
                  plVar20 = (longlong *)(lVar14 + 0xd0);
                  lVar14 = *plVar20;
                } while (*plVar20 != 0);
                *(int *)(lVar16 + 0x1c) = iVar10;
                plVar20 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0);
                FUN_140943d10(lVar4,&local_d0);
                local_b8 = local_f4;
                local_c0 = local_fc;
                lVar14 = local_c0;
                local_ac = local_c8;
                local_b4 = local_d0;
                lVar4 = local_b4;
                local_c0._0_4_ = (uint)local_fc;
                if (local_f4 != 0) {
                  uVar18 = local_f4 >> 0xd ^ (uint)local_c0 - local_f4;
                  uVar9 = uVar18 << 8 ^ (-0x61c88647 - local_f4) - uVar18;
                  uVar19 = uVar9 >> 0xd ^ (local_f4 - uVar18) - uVar9;
                  uVar18 = uVar19 >> 0xc ^ (uVar18 - uVar9) - uVar19;
                  uVar9 = uVar18 << 0x10 ^ (uVar9 - uVar19) - uVar18;
                  uVar19 = uVar9 >> 5 ^ (uVar19 - uVar18) - uVar9;
                  uVar18 = uVar19 >> 3 ^ (uVar18 - uVar9) - uVar19;
                  uVar9 = uVar18 << 10 ^ (uVar9 - uVar19) - uVar18;
                  local_c0._0_4_ = uVar9 >> 0xf ^ uVar19 - (uVar18 + uVar9);
                }
                local_b4._0_4_ = (uint)local_d0;
                if (local_c8 != 0) {
                  uVar18 = local_c8 >> 0xd ^ (uint)local_b4 - local_c8;
                  uVar9 = uVar18 << 8 ^ (-0x61c88647 - local_c8) - uVar18;
                  uVar19 = uVar9 >> 0xd ^ (local_c8 - uVar18) - uVar9;
                  uVar18 = uVar19 >> 0xc ^ (uVar18 - uVar9) - uVar19;
                  uVar9 = uVar18 << 0x10 ^ (uVar9 - uVar19) - uVar18;
                  uVar19 = uVar9 >> 5 ^ (uVar19 - uVar18) - uVar9;
                  uVar18 = uVar19 >> 3 ^ (uVar18 - uVar9) - uVar19;
                  uVar9 = uVar18 << 10 ^ (uVar9 - uVar19) - uVar18;
                  local_b4._0_4_ = uVar9 >> 0xf ^ uVar19 - (uVar18 + uVar9);
                }
                uVar9 = (uint)local_b4 + ((uint)local_c0 >> 2) + (uint)local_c0 * 0x40 + 0x9e3779b9
                        ^ (uint)local_c0;
                local_c0 = lVar14;
                local_b4 = lVar4;
                iVar10 = FUN_1488f4cd8(plVar20,uVar9,&local_c0);
                if (((iVar10 != -1) &&
                    (lVar14 = *plVar20 + (longlong)iVar10 * 0x24,
                    puVar17 = (undefined4 *)(lVar14 + 0x18),
                    puVar17 != (undefined4 *)0x0 && lVar14 != 0)) &&
                   (puVar17 != (undefined4 *)(lVar16 + 0x20))) {
                  *(undefined4 *)(lVar16 + 0x20) = *puVar17;
                  *(undefined1 *)(lVar16 + 0x24) = 1;
                }
              }
              lVar14 = local_180;
              if (local_128 != (longlong *)0x0) {
                (**(code **)(*local_128 + 0x10))();
                lVar14 = local_180;
              }
            }
          }
          plVar21 = plVar21 + 1;
        } while (plVar21 != plVar13);
      }
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8(local_118);
      }
    }
  }
LAB_14419a44d:
  if ((local_60[0] ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419abea FUN_14419abea body=5599 status=ok
// SIG undefined FUN_14419abea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14419abea(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  longlong lVar17;
  undefined8 uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined8 *puVar30;
  undefined1 uVar31;
  undefined2 uVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint *puVar37;
  int iVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar44;
  double dVar45;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar60;
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  longlong local_4a0;
  float local_498;
  undefined4 uStack_494;
  ulonglong local_490;
  uint local_484;
  float local_480;
  float local_47c;
  longlong local_478;
  undefined8 uStack_470;
  longlong *local_460;
  ulonglong local_458;
  ulonglong local_450;
  ulonglong local_448;
  ulonglong local_440;
  undefined1 local_438 [16];
  uint *local_428;
  double dStack_420;
  double local_418;
  undefined4 uStack_410;
  uint uStack_40c;
  undefined1 local_408 [16];
  double local_3f8;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  double local_3e8;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 *local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  longlong local_390;
  undefined1 local_388 [16];
  float local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368 [16];
  longlong local_358;
  undefined4 local_350;
  undefined1 local_34c;
  undefined1 local_34b;
  undefined2 local_34a;
  longlong local_348;
  undefined4 local_340;
  undefined1 local_33c;
  char local_33b;
  char local_33a;
  undefined1 local_339;
  longlong local_338;
  undefined4 local_330;
  char local_32c;
  char local_32b;
  char local_32a;
  undefined1 local_329;
  undefined8 local_2e8;
  longlong local_2e0;
  int7 iStack_2d8;
  undefined1 uStack_2d1;
  undefined8 *local_2d0;
  int6 iStack_2c8;
  undefined2 uStack_2c2;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined1 local_29a;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined1 local_278 [128];
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  uVar23 = (ulonglong)*(uint *)(param_1 + 0x3a8);
  uVar27 = *(uint *)(param_1 + 0x3a8) * 4;
  iVar33 = (int)param_2[1] * uVar27;
  local_484 = param_4;
  if (0 < iVar33) {
    local_3d8 = param_1 + 800;
    local_460 = param_2;
    FUN_1408e3634(local_3d8,iVar33,1);
    local_3d0 = param_1 + 0x298;
    FUN_1408e36f6(param_1 + 0x298,iVar33,1);
    local_3c8 = (undefined8 *)(param_1 + 0x360);
    FUN_140964b22(local_3c8,iVar33);
    iVar33 = (int)local_460[1];
    if (0 < iVar33) {
      local_3c0 = param_1 + 0x100;
      local_3b8 = param_1 + 0x3c8;
      local_458 = (ulonglong)uVar27;
      uVar36 = 0;
      lVar22 = 0;
      plVar24 = local_460;
      local_448 = uVar23;
      do {
        if ((local_484 >> ((uint)lVar22 & 0x1f) & 1) != 0) {
          local_4a0 = *(longlong *)(*plVar24 + lVar22 * 8);
          local_398 = *(double *)(param_1 + 0x170);
          local_3a0 = *(double *)(param_1 + 0x160);
          local_3a8 = *(double *)(param_1 + 0x168);
          dVar12 = *(double *)(local_4a0 + 0xb30);
          dVar42 = *(double *)(local_4a0 + 0xb38);
          dVar15 = *(double *)(local_4a0 + 0xb40);
          dVar50 = *(double *)(local_4a0 + 0xb50);
          dVar13 = *(double *)(local_4a0 + 0xb58);
          dVar14 = *(double *)(local_4a0 + 0xb60);
          dVar10 = *(double *)(local_4a0 + 0xb70);
          dVar11 = *(double *)(local_4a0 + 0xb78);
          dVar9 = *(double *)(local_4a0 + 0xb80);
          dVar49 = *(double *)(local_4a0 + 0xb90);
          dVar41 = *(double *)(local_4a0 + 0xb98);
          dVar61 = *(double *)(local_4a0 + 0xba0);
          local_4a8 = lVar22;
          local_450 = uVar36;
          FUN_14007522e(&local_358,local_3c0);
          if (0 < (int)uVar23) {
            local_490 = local_450 >> 2;
            dVar10 = dVar10 * 0.0;
            dVar11 = dVar11 * 0.0;
            dVar49 = dVar49 * 0.0;
            dVar41 = dVar41 * 0.0;
            dVar40 = dVar12 * 0.0 + dVar50 + dVar10 + dVar49;
            dVar45 = dVar42 * 0.0 + dVar13 + dVar11 + dVar41;
            dVar9 = dVar9 * 0.0;
            dVar61 = dVar61 * 0.0;
            dVar48 = dVar15 * 0.0 + dVar14 + dVar9 + dVar61;
            dVar49 = dVar50 * 0.0 + dVar12 + dVar10 + dVar49;
            dVar41 = dVar13 * 0.0 + dVar42 + dVar11 + dVar41;
            dVar61 = dVar14 * 0.0 + dVar15 + dVar9 + dVar61;
            local_480 = (float)(SQRT(dVar48 * dVar48 + dVar40 * dVar40 + dVar45 * dVar45) /
                               SQRT(dVar61 * dVar61 + dVar49 * dVar49 + dVar41 * dVar41));
            local_390 = local_4a0 + 0xa30;
            local_3b0 = local_4a8 * local_458;
            uVar36 = 0;
            do {
              lVar22 = *(longlong *)(param_1 + 0x3a0);
              lVar35 = uVar36 * 0x20;
              dVar49 = (double)*(float *)(lVar22 + 0x18 + lVar35) * 0.01745329238474369;
              local_440 = uVar36;
              dVar41 = sin(dVar49);
              local_178 = cos(dVar49);
              dVar49 = local_178 * 0.0;
              local_130 = dVar41 * -0.0 + dVar49;
              local_158 = dVar49 - dVar41;
              local_150 = dVar41 * 0.0 + local_178;
              local_138 = -(dVar49 + dVar41 * 0.0);
              local_168 = 0;
              uStack_160 = 0;
              local_148 = 0x8000000000000000;
              local_140 = 0;
              local_128 = 0x3ff0000000000000;
              local_120 = 0;
              local_118 = DAT_14c8464e0;
              uStack_110 = DAT_14c8464e8;
              local_108 = DAT_14c8464f0;
              local_100 = 0x3ff0000000000000;
              local_170 = dVar41;
              FUN_1447fea8d(local_278,local_390,&local_178);
              FUN_1447fea8d(&local_1f8,local_278,&local_358);
              iVar33 = *(int *)(lVar22 + 4 + lVar35);
              if (iVar33 != 0) {
                puVar37 = (uint *)(lVar22 + lVar35);
                uVar27 = *puVar37;
                if ((((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) &&
                    (lVar22 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8),
                    lVar22 != 0)) && (*(int *)(lVar22 + 0x10) == iVar33)) {
                  dVar41 = local_198 * 0.0;
                  dVar61 = dStack_190 * 0.0;
                  dVar49 = local_188 * 0.0;
                  if ((*(uint *)(lVar22 + 8) & 0x10200000) == 0) {
                    dVar9 = local_1b8._0_8_ * 0.0;
                    dVar10 = local_1b8._8_8_ * 0.0;
                    local_3e8 = local_1f8 + local_1d8 * 0.0 + dVar9 + dVar41;
                    local_418 = dStack_1f0 + dStack_1d0 * 0.0 + dVar10 + dVar61;
                    uStack_410 = SUB84(local_418,0);
                    uVar21 = (uint)((ulonglong)local_418 >> 0x20);
                    local_3f8 = local_1e8._0_8_ + local_1c8 * 0.0 + local_1a8 * 0.0 + dVar49;
                    auVar8._8_4_ = local_1e8._8_4_;
                    auVar8._0_8_ = local_3f8;
                    auVar8._12_4_ = local_1e8._12_4_;
                    dVar50 = local_1e8._0_8_ * 0.0;
                    dVar12 = dStack_1d0 + dStack_1f0 * 0.0 + dVar10 + dVar61;
                    dVar11 = -(local_1c8 + dVar50 + local_1a8 * 0.0 + dVar49);
                    dVar10 = -dVar12;
                    uVar27 = (uint)((ulonglong)dVar12 >> 0x20);
                    dVar42 = *(double *)(local_4a0 + 0xb08) * local_398 +
                             *(double *)(local_4a0 + 0xae8) * local_3a8 +
                             *(double *)(local_4a0 + 0xac8) * local_3a0;
                    auVar58 = insertps(ZEXT416((uint)(&DAT_14c758c60)[*(byte *)(param_1 + 0x3c2)]),
                                       (&DAT_14c758c60)[*(byte *)(param_1 + 0x3c1)],0x10);
                    auVar58 = insertps(auVar58,(&DAT_14c758c60)[*(byte *)(param_1 + 0x3c0)],0x20);
                    fVar46 = (float)(dVar50 + local_1c8 * 0.0 + local_1a8 + dVar49);
                    auVar58 = insertps(auVar58,ZEXT416((uint)((float)*(byte *)(param_1 + 0x3c3) *
                                                             0.003921569)),0x30);
                    fVar52 = (float)(dStack_1f0 * 0.0 + dStack_1d0 * 0.0 + local_1b8._8_8_ + dVar61)
                    ;
                    fVar39 = -fVar46;
                    local_388._8_4_ = (int)uStack_1c0;
                    local_388._0_8_ = dVar11;
                    local_388._12_4_ = (uint)((ulonglong)uStack_1c0 >> 0x20) ^ 0x80000000;
                    fVar53 = (float)dVar11;
                    local_368._8_4_ = SUB84(dVar12,0);
                    local_368._0_8_ = dVar10;
                    local_368._12_4_ = uVar27 ^ 0x80000000;
                    fVar56 = (float)dVar10;
                    local_378 = (float)local_418;
                    fVar47 = -fVar52;
                    fVar2 = fVar53 * 0.0 + fVar39 * -0.0;
                    fVar62 = (float)local_3e8;
                    fVar63 = (float)local_3f8;
                    fVar55 = fVar39 * -0.0 + fVar63 * 0.0;
                    dVar49 = -(local_1d8 + local_1f8 * 0.0 + dVar9 + dVar41);
                    local_438._8_4_ = SUB84(dVar12,0);
                    local_438._0_8_ = dVar49;
                    local_438._12_4_ = uVar27 ^ 0x80000000;
                    fVar16 = fVar53 * -0.0 + fVar63 * 0.0;
                    fVar54 = (float)(local_1f8 * 0.0 + local_1d8 * 0.0 + local_1b8._0_8_ + dVar41);
                    uVar23 = (ulonglong)((uint)local_490 * 4);
                    local_3f8 = -local_3f8;
                    uStack_3f0 = local_1e8._8_4_;
                    uStack_3ec = local_1e8._12_4_ ^ 0x80000000;
                    uStack_40c = uVar21 ^ 0x80000000;
                    local_418 = -local_418;
                    fVar64 = (float)*(double *)(puVar37 + 2);
                    local_47c = (float)(dVar42 + *(double *)(local_4a0 + 0xb28));
                    local_3e8 = -local_3e8;
                    uStack_3e0 = uStack_410;
                    uStack_3dc = uVar21 ^ 0x80000000;
                    uVar27 = puVar37[7];
                    _local_498 = CONCAT44((int)((ulonglong)dVar42 >> 0x20),fVar64);
                    local_478 = local_3b0 + local_440 * 4;
                    auVar58 = maxps(auVar58,_DAT_149e1a200);
                    auVar59 = minps(auVar58,_DAT_149e1a210);
                    fVar57 = auVar59._0_4_;
                    fVar60 = auVar59._4_4_;
                    fVar44 = auVar59._8_4_;
                    auVar51._4_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 +
                          (ulonglong)(ushort)((uint)((int)fVar60 + -0x39000000) >> 0x14) * 4);
                    auVar51._0_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 + (ulonglong)((int)fVar57 + 0xc7000000U >> 0x14) * 4);
                    auVar51._8_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 +
                          (ulonglong)(ushort)((uint)((int)fVar44 + -0x39000000) >> 0x14) * 4);
                    auVar51._12_4_ = 0;
                    auVar58._0_4_ = (uint)fVar57 >> 0xc;
                    auVar58._4_4_ = (uint)fVar60 >> 0xc;
                    auVar58._8_4_ = (uint)fVar44 >> 0xc;
                    auVar58._12_4_ = (uint)auVar59._12_4_ >> 0xc;
                    auVar58 = pmaddwd(auVar58 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar51);
                    auVar43._4_4_ = (int)(fVar60 * 0.0 + 0.5) | auVar58._4_4_ >> 0x10;
                    auVar43._0_4_ = (int)(fVar44 * 0.0 + 0.5) | auVar58._8_4_ >> 0x10;
                    auVar43._8_4_ = (int)(fVar57 * 0.0 + 0.5) | auVar58._0_4_ >> 0x10;
                    auVar43._12_4_ = (int)(auVar59._12_4_ * 255.0 + 0.5) | auVar58._12_4_ >> 0x10;
                    auVar58 = packssdw(auVar43,auVar43);
                    sVar4 = auVar58._0_2_;
                    sVar5 = auVar58._2_2_;
                    sVar6 = auVar58._4_2_;
                    sVar7 = auVar58._6_2_;
                    lVar35 = (ulonglong)
                             (((fVar2 * local_378 - fVar55 * fVar56) + fVar47 * fVar16) * -0.0 +
                              (((fVar2 * 0.0 + (fVar56 * fVar39 - fVar47 * fVar53)) * fVar62 -
                               (fVar55 * 0.0 + (local_378 * fVar39 - fVar47 * fVar63)) *
                               (float)dVar49) -
                              (fVar16 * 0.0 + (local_378 * fVar53 - fVar56 * fVar63)) * fVar54) <
                             0.0) * 4;
                    uStack_470 = auVar8._8_8_;
                    uVar21 = (uint)local_478;
                    lVar22 = 0;
                    fVar55 = *(float *)(&DAT_14a329b50 + lVar35);
                    fVar2 = *(float *)(&DAT_14a329b58 + lVar35);
                    dStack_420 = local_1e8._8_8_ * 0.0;
                    local_428 = puVar37;
                    local_408._0_8_ = *(undefined8 *)(puVar37 + 4);
                    local_408._8_8_ = 0;
                    do {
                      lVar35 = *(longlong *)(param_1 + 0x2f8);
                      if (*(char *)(param_1 + 0x319) == '\x01') {
                        lVar35 = lVar35 + ((ulonglong)((uint)local_490 & 0x3fffffff) << 6 | 0xe);
                        iVar33 = (int)ROUND(fVar62 * 32767.0 + fVar62 * 32767.0 + 0.5) >> 1;
                        if (0x7ffe < iVar33) {
                          iVar33 = 0x7fff;
                        }
                        uVar32 = (undefined2)iVar33;
                        if (iVar33 < -0x7fff) {
                          uVar32 = 0x8000;
                        }
                        iVar33 = (int)ROUND(local_378 * 32767.0 + local_378 * 32767.0 + 0.5) >> 1;
                        if (0x7ffe < iVar33) {
                          iVar33 = 0x7fff;
                        }
                        *(undefined2 *)(lVar35 + -0xe + lVar22 * 8) = uVar32;
                        uVar32 = (undefined2)iVar33;
                        if (iVar33 < -0x7fff) {
                          uVar32 = 0x8000;
                        }
                        *(undefined2 *)(lVar35 + -0xc + lVar22 * 8) = uVar32;
                        iVar33 = (int)ROUND(fVar63 * 32767.0 + fVar63 * 32767.0 + 0.5) >> 1;
                        if (0x7ffe < iVar33) {
                          iVar33 = 0x7fff;
                        }
                        iVar38 = -0x8000;
                        uVar32 = (undefined2)iVar33;
                        if (iVar33 < -0x7fff) {
                          uVar32 = 0x8000;
                        }
                        iVar33 = (int)ROUND(fVar54 * -32767.0 + fVar54 * -32767.0 + 0.5) >> 1;
                        if (0x7ffe < iVar33) {
                          iVar33 = 0x7fff;
                        }
                        *(undefined2 *)(lVar35 + -10 + lVar22 * 8) = uVar32;
                        if (iVar33 < -0x7fff) {
                          iVar33 = iVar38;
                        }
                        *(undefined2 *)(lVar35 + -8 + lVar22 * 8) = 0x7fff;
                        iVar34 = (int)ROUND(fVar52 * -32767.0 + fVar52 * -32767.0 + 0.5) >> 1;
                        if (0x7ffe < iVar34) {
                          iVar34 = 0x7fff;
                        }
                        if (iVar34 < -0x7fff) {
                          iVar34 = iVar38;
                        }
                        iVar28 = (int)ROUND(fVar46 * -32767.0 + fVar46 * -32767.0 + 0.5) >> 1;
                        if (0x7ffe < iVar28) {
                          iVar28 = 0x7fff;
                        }
                        *(short *)(lVar35 + -6 + lVar22 * 8) = (short)iVar33;
                        if (iVar28 < -0x7fff) {
                          iVar28 = iVar38;
                        }
                        *(short *)(lVar35 + -4 + lVar22 * 8) = (short)iVar34;
                        *(short *)(lVar35 + -2 + lVar22 * 8) = (short)iVar28;
                        iVar33 = (int)ROUND(fVar2) >> 1;
                        if (0x7ffe < iVar33) {
                          iVar33 = 0x7fff;
                        }
                        uVar32 = (undefined2)iVar33;
                        if (iVar33 < -0x7fff) {
                          uVar32 = 0x8000;
                        }
                        *(undefined2 *)(lVar35 + lVar22 * 8) = uVar32;
                      }
                      else {
                        iVar33 = (int)ROUND(fVar62 * 127.0 + fVar62 * 127.0 + 0.5) >> 1;
                        if (0x7e < iVar33) {
                          iVar33 = 0x7f;
                        }
                        uVar31 = (undefined1)iVar33;
                        if (iVar33 < -0x7f) {
                          uVar31 = 0x80;
                        }
                        iVar33 = (int)ROUND(local_378 * 127.0 + local_378 * 127.0 + 0.5) >> 1;
                        if (0x7e < iVar33) {
                          iVar33 = 0x7f;
                        }
                        *(undefined1 *)(lVar35 + uVar23 * 8) = uVar31;
                        uVar31 = (undefined1)iVar33;
                        if (iVar33 < -0x7f) {
                          uVar31 = 0x80;
                        }
                        *(undefined1 *)(lVar35 + 1 + uVar23 * 8) = uVar31;
                        iVar33 = (int)ROUND(fVar63 * 127.0 + fVar63 * 127.0 + 0.5) >> 1;
                        if (0x7e < iVar33) {
                          iVar33 = 0x7f;
                        }
                        iVar38 = -0x80;
                        uVar31 = (undefined1)iVar33;
                        if (iVar33 < -0x7f) {
                          uVar31 = 0x80;
                        }
                        iVar33 = (int)ROUND(fVar54 * -127.0 + fVar54 * -127.0 + 0.5) >> 1;
                        if (0x7e < iVar33) {
                          iVar33 = 0x7f;
                        }
                        *(undefined1 *)(lVar35 + 2 + uVar23 * 8) = uVar31;
                        if (iVar33 < -0x7f) {
                          iVar33 = iVar38;
                        }
                        *(undefined1 *)(lVar35 + 3 + uVar23 * 8) = 0x7f;
                        iVar34 = (int)ROUND(fVar52 * -127.0 + fVar52 * -127.0 + 0.5) >> 1;
                        if (0x7e < iVar34) {
                          iVar34 = 0x7f;
                        }
                        if (iVar34 < -0x7f) {
                          iVar34 = iVar38;
                        }
                        iVar28 = (int)ROUND(fVar46 * -127.0 + fVar46 * -127.0 + 0.5) >> 1;
                        if (0x7e < iVar28) {
                          iVar28 = 0x7f;
                        }
                        *(char *)(lVar35 + 4 + uVar23 * 8) = (char)iVar33;
                        if (iVar28 < -0x7f) {
                          iVar28 = iVar38;
                        }
                        *(char *)(lVar35 + 5 + uVar23 * 8) = (char)iVar34;
                        *(char *)(lVar35 + 6 + uVar23 * 8) = (char)iVar28;
                        iVar33 = (int)ROUND(fVar55) >> 1;
                        if (0x7e < iVar33) {
                          iVar33 = 0x7f;
                        }
                        uVar31 = (undefined1)iVar33;
                        if (iVar33 < -0x7f) {
                          uVar31 = 0x80;
                        }
                        *(undefined1 *)(lVar35 + 7 + uVar23 * 8) = uVar31;
                      }
                      *(uint *)(*(longlong *)(param_1 + 0x388) +
                               (ulonglong)(uint)(*(int *)(param_1 + 0x390) * (int)uVar23)) =
                           CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar58[6] - (0xff < sVar7),
                                    CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar58[4] -
                                             (0xff < sVar6),
                                             CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar58[2] -
                                                      (0xff < sVar5),
                                                      (0 < sVar4) * (sVar4 < 0x100) * auVar58[0] -
                                                      (0xff < sVar4))));
                      lVar22 = lVar22 + 2;
                      uVar23 = uVar23 + 1;
                    } while (lVar22 != 8);
                    fVar55 = (float)(double)local_408._0_8_;
                    if ((char)uVar27 != '\0') {
                      fVar55 = fVar55 * local_47c;
                      fVar64 = (fVar64 / local_480) * local_47c;
                    }
                    dVar61 = (double)-fVar64;
                    dVar41 = (double)fVar55;
                    lVar22 = *(longlong *)(param_1 + 0x348);
                    uVar23 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar21);
                    *(float *)(lVar22 + uVar23) = (float)(dVar61 * dVar49 + dVar41 * local_3e8);
                    *(float *)(lVar22 + 4 + uVar23) = (float)(dVar10 * dVar61 + local_418 * dVar41);
                    *(float *)(lVar22 + 8 + uVar23) = (float)(dVar11 * dVar61 + local_3f8 * dVar41);
                    dVar9 = (double)fVar64;
                    lVar22 = *(longlong *)(param_1 + 0x348);
                    uVar27 = uVar21 | 1;
                    uVar23 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar27);
                    *(float *)(lVar22 + uVar23) = (float)(dVar41 * local_3e8 + dVar49 * dVar9);
                    *(float *)(lVar22 + 4 + uVar23) = (float)(local_418 * dVar41 + dVar10 * dVar9);
                    *(float *)(lVar22 + 8 + uVar23) = (float)(local_3f8 * dVar41 + dVar11 * dVar9);
                    dVar41 = (double)-fVar55;
                    lVar22 = *(longlong *)(param_1 + 0x348);
                    uVar20 = uVar21 | 2;
                    uVar23 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar20);
                    *(float *)(lVar22 + uVar23) = (float)(dVar61 * dVar49 + local_3e8 * dVar41);
                    *(float *)(lVar22 + 4 + uVar23) = (float)(dVar10 * dVar61 + local_418 * dVar41);
                    *(float *)(lVar22 + 8 + uVar23) = (float)(dVar11 * dVar61 + local_3f8 * dVar41);
                    lVar22 = *(longlong *)(param_1 + 0x348);
                    uVar26 = uVar21 | 3;
                    uVar23 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar26);
                    *(float *)(lVar22 + uVar23) = (float)(local_3e8 * dVar41 + dVar49 * dVar9);
                    *(float *)(lVar22 + 4 + uVar23) = (float)(local_418 * dVar41 + dVar10 * dVar9);
                    *(float *)(lVar22 + 8 + uVar23) = (float)(local_3f8 * dVar41 + dVar11 * dVar9);
                    if (*(char *)(param_1 + 0x318) == '\x01') {
                      *(undefined8 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)(uVar21 & 0xfffffffc) * (ulonglong)*(uint *)(param_1 + 0x310) * 8)
                           = 0;
                    }
                    else {
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)(uVar21 & 0xfffffffc) * (ulonglong)*(uint *)(param_1 + 0x310) * 4)
                           = 0;
                    }
                    if (*(char *)(param_1 + 0x318) == '\x01') {
                      *(undefined8 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)uVar27 * (ulonglong)*(uint *)(param_1 + 0x310) * 8) =
                           0x3f80000000000000;
                    }
                    else {
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)uVar27 * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0x3c000000;
                    }
                    if (*(char *)(param_1 + 0x318) == '\x01') {
                      *(undefined8 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)uVar20 * (ulonglong)*(uint *)(param_1 + 0x310) * 8) = 0x3f800000;
                    }
                    else {
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)uVar20 * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0x3c00;
                    }
                    if (*(char *)(param_1 + 0x318) == '\x01') {
                      *(undefined1 **)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)uVar26 * (ulonglong)*(uint *)(param_1 + 0x310) * 8) =
                           &DAT_3f8000003f800000;
                    }
                    else {
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x300) +
                       (ulonglong)uVar26 * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0x3c003c00;
                    }
                    iVar33 = (int)param_5[1];
                    iVar38 = (int)param_5[2];
                    iVar34 = (iVar38 + 0x44) / 0x44;
                    *(int *)(param_5 + 2) = iVar38 + 1;
                    uStack_374 = local_1b8._4_4_;
                    uStack_370 = local_1b8._8_4_;
                    uStack_36c = local_1b8._12_4_;
                    if (iVar33 < iVar34) {
                      do {
                        local_438._0_4_ = iVar33;
                        lVar22 = FUN_14001cc68(0x3fc0,0x10);
                        lVar35 = 0;
                        do {
                          *(undefined8 *)(lVar22 + 0xa8 + lVar35) = 0;
                          puVar25 = (undefined8 *)(lVar22 + 0xb8 + lVar35);
                          *puVar25 = 0;
                          puVar25[1] = 0;
                          *(undefined8 *)(lVar22 + 200 + lVar35) = 0;
                          *(undefined8 *)(lVar22 + 0xd0 + lVar35) = 0xffffffff;
                          *(undefined8 *)(lVar22 + 0xd8 + lVar35) = 0xff0000ffffffff;
                          *(undefined1 *)(lVar22 + 0xe0 + lVar35) = 0;
                          *(undefined4 *)(lVar22 + 0xe4 + lVar35) = 0x40c00f07;
                          pbVar1 = (byte *)(lVar22 + 0xe8 + lVar35);
                          *pbVar1 = *pbVar1 & 0xfc;
                          *(undefined1 **)(lVar22 + 0xb0 + lVar35) = &DAT_100000001;
                          FUN_14470b9e0(lVar22 + lVar35,1);
                          lVar35 = lVar35 + 0xf0;
                        } while (lVar35 != 0x3fc0);
                        iVar33 = (int)param_5[1];
                        *(uint *)(param_5 + 1) = iVar33 + 1U;
                        if (*(uint *)((longlong)param_5 + 0xc) < iVar33 + 1U) {
                          FUN_14002baf6(param_5,iVar33);
                        }
                        *(longlong *)(*param_5 + (longlong)iVar33 * 8) = lVar22;
                        iVar33 = local_438._0_4_ + 1;
                        puVar37 = local_428;
                      } while (iVar33 != iVar34);
                    }
                    uVar23 = local_448;
                    lVar22 = *(longlong *)(*param_5 + (longlong)(iVar38 / 0x44) * 8);
                    lVar35 = (ulonglong)(uint)(iVar38 % 0x44) * 0xf0;
                    *(longlong *)(lVar22 + 0xb8 + lVar35) = local_3b8;
                    if (puVar37[1] == 0) {
                      plVar24 = (longlong *)0x0;
                    }
                    else {
                      uVar27 = *puVar37;
                      if ((int)uVar27 < 0) {
LAB_14419bea2:
                        plVar24 = (longlong *)0x0;
                      }
                      else {
                        plVar24 = (longlong *)0x0;
                        if ((int)uVar27 < DAT_14c9647dc) {
                          puVar25 = (undefined8 *)
                                    ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
                          if (((puVar25 == (undefined8 *)0x0) ||
                              (*(uint *)(puVar25 + 2) != puVar37[1])) ||
                             ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) goto LAB_14419bea2;
                          plVar24 = (longlong *)*puVar25;
                        }
                      }
                    }
                    lVar22 = lVar22 + lVar35;
                    uVar18 = (**(code **)(*plVar24 + 0x2f0))();
                    *(undefined8 *)(lVar22 + 0xc0) = uVar18;
                    *(undefined8 *)(lVar22 + 200) = 0;
                    uVar21 = (*(byte *)(param_1 + 0x6b) & 1) << 6;
                    uVar27 = *(uint *)(lVar22 + 0xe4);
                    *(uint *)(lVar22 + 0xe4) = uVar27 & 0xfffffebf | uVar21;
                    if (((*(byte *)(param_1 + 0x6c) & 0x20) != 0) &&
                       ((longlong)*(int *)(param_1 + 0xf0) != 0)) {
                      uVar36 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar36) ==
                            *(longlong *)(local_4a0 + 0x4c0)) {
                          if ((~uVar36 & 0x7fffffff8) != 0) {
                            bVar19 = *(byte *)(param_1 + 0x6d) >> 3;
                            goto LAB_14419bcdb;
                          }
                          break;
                        }
                        uVar36 = uVar36 + 8;
                      } while ((longlong)*(int *)(param_1 + 0xf0) * 8 != uVar36);
                    }
                    bVar19 = *(byte *)(param_1 + 0x6d);
LAB_14419bcdb:
                    *(uint *)(lVar22 + 0xe4) =
                         (uVar27 & 0xfff03e3f | uVar21) + (bVar19 & 7) * 0x20000 + 0x4080;
                    lVar35 = *(longlong *)(lVar22 + 0xa8);
                    if (*(longlong *)(lVar22 + 0xa8) == 0) {
                      lVar35 = lVar22;
                    }
                    *(undefined8 *)(lVar35 + 0x18) = 0;
                    *(undefined8 *)(lVar35 + 0x58) = 0x200000000;
                    *(undefined8 *)(lVar35 + 0x68) = 0x300000000;
                    *(int *)(lVar35 + 100) = (int)local_478;
                    uVar27 = *(uint *)(lVar22 + 0xe4);
                    *(uint *)(lVar22 + 0xe4) = uVar27 | 0x100000;
                    *(uint *)(lVar22 + 0xe4) =
                         uVar27 & 0xffdfffff | 0x100000 |
                         (uint)((*(byte *)(param_1 + 0x6c) & 6) != 0) << 0x15;
                    FUN_1436a14f8(param_5,local_4a8,lVar22);
                  }
                }
              }
              uVar36 = local_440 + 1;
              local_490 = (ulonglong)((int)local_490 + 1);
            } while (uVar36 != uVar23);
          }
          iVar33 = (int)local_460[1];
          plVar24 = local_460;
          uVar36 = local_450;
          lVar22 = local_4a8;
        }
        lVar22 = lVar22 + 1;
        uVar36 = uVar36 + local_458;
      } while (lVar22 < iVar33);
    }
    lVar35 = local_3d8;
    lVar22 = param_5[0x22];
    FUN_1447fd100(local_3d8,lVar22);
    lVar17 = local_3d0;
    FUN_1447fd100(local_3d0,lVar22);
    puVar25 = local_3c8;
    FUN_1447fd100(local_3c8,lVar22);
    local_2e8 = 0x400000000;
    local_2e0 = 0;
    _iStack_2d8 = 0;
    local_2d0 = (undefined8 *)0x0;
    _iStack_2c8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_29c = 0xff;
    uVar29 = 0;
    local_29a = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    local_34b = *(undefined1 *)(param_1 + 0x350);
    local_358 = lVar35;
    local_350 = 0;
    local_34c = 0;
    local_34a = 3;
    local_2c0 = *(undefined8 *)(param_1 + 0x338);
    uStack_2b8 = *(undefined8 *)(param_1 + 0x2e0);
    cVar3 = *(char *)(param_1 + 0x319);
    local_348 = param_1 + 0x2a8;
    local_33b = cVar3 * '\b' + '\b';
    local_33a = (cVar3 != '\0') * '\t' + '\x05';
    local_340 = 0;
    local_33c = 0;
    local_339 = 4;
    local_32c = cVar3 * '\x04' + '\x04';
    local_330 = 0;
    local_329 = 4;
    local_338 = local_348;
    local_32b = local_33b;
    local_32a = local_33a;
    FUN_14472d638(lVar17,param_1 + 0x3c8,&local_358,0xffffffff);
    uVar21 = *(uint *)(param_1 + 0x310);
    uVar27 = uVar21 - 1;
    if (0 < (int)uVar21) {
      uVar27 = 0;
    }
    local_29c = CONCAT11((char)uVar21,(char)uVar27);
    local_2b0 = *(undefined8 *)(param_1 + 0x2f0);
    if ((-1 < (int)uVar27) && (uVar27 < uVar21)) {
      bVar19 = *(char *)(param_1 + 0x318) + 2;
      local_2e0 = param_1 + 0x2c0;
      uVar31 = 0xc;
      if (*(char *)(param_1 + 0x318) != '\0') {
        uVar31 = 2;
      }
      _iStack_2d8 = CONCAT17(4,(uint7)CONCAT12(uVar31,CONCAT11((char)(uVar21 << (bVar19 & 0x1f)),
                                                               (char)(uVar27 << (bVar19 & 0x1f))))
                               << 0x20);
    }
    if (*(int *)(param_1 + 0x394) == 0) {
      puVar25 = &DAT_14ca94d98;
      puVar30 = &DAT_14ca94db0;
      bVar19 = 0;
    }
    else {
      bVar19 = *(byte *)(param_1 + 0x390);
      puVar30 = (undefined8 *)(param_1 + 0x380);
      uVar29 = 0xffffffff;
    }
    uStack_2a8 = *puVar30;
    _iStack_2c8 = CONCAT26(0x408,(uint6)bVar19 << 0x28);
    local_2d0 = puVar25;
    local_2a0 = uVar29;
    FUN_140ba0b60(param_1 + 0x3c8,lVar22);
  }
  if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419c210 FUN_14419c210 body=282 status=ok
// SIG undefined FUN_14419c210(void)

undefined8 * FUN_14419c210(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14419c1e9);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14419c32a FUN_14419c32a body=29 status=ok
// SIG undefined FUN_14419c32a(void)

undefined8 FUN_14419c32a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419c4c6 FUN_14419c4c6 body=93 status=ok
// SIG undefined FUN_14419c4c6(void)

void FUN_14419c4c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419c524 FUN_14419c524 body=93 status=ok
// SIG undefined FUN_14419c524(void)

void FUN_14419c524(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419c582 FUN_14419c582 body=126 status=ok
// SIG undefined FUN_14419c582(void)

void FUN_14419c582(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014419c5f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14419c600 FUN_14419c600 body=50 status=ok
// SIG undefined FUN_14419c600(void)

undefined8 FUN_14419c600(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x179) = 2;
  FUN_1405e4918(lVar1,0x3f800000);
  *(undefined4 *)(lVar1 + 0x19c) = 0x3f800000;
  return 0;
}



// FUNCTION 14419c632 FUN_14419c632 body=294 status=ok
// SIG undefined FUN_14419c632(void)

undefined8 FUN_14419c632(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14419c752;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14419c752;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14419c752:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14419c706;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(undefined1 *)(lVar5 + 0x179) = 2;
      FUN_1405e4918(lVar5,0x3f800000);
      *(undefined4 *)(lVar5 + 0x19c) = 0x3f800000;
      uVar6 = 1;
      goto LAB_14419c706;
    }
  }
  uVar6 = 0;
LAB_14419c706:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419c75a FUN_14419c75a body=31 status=ok
// SIG undefined FUN_14419c75a(void)

undefined8 FUN_14419c75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419c85c FUN_14419c85c body=217 status=ok
// SIG undefined FUN_14419c85c(void)

undefined8 FUN_14419c85c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2 * 0x90;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0xe4) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 / 0x90)) {
    uVar4 = uVar3 / 0x90 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x90,8);
  }
  return uVar2;
}



// FUNCTION 14419c936 FUN_14419c936 body=265 status=ok
// SIG undefined FUN_14419c936(void)

void FUN_14419c936(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14419ca40 FUN_14419ca40 body=29 status=ok
// SIG undefined FUN_14419ca40(void)

undefined8 FUN_14419ca40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419cbdc FUN_14419cbdc body=93 status=ok
// SIG undefined FUN_14419cbdc(void)

void FUN_14419cbdc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419cc3a FUN_14419cc3a body=93 status=ok
// SIG undefined FUN_14419cc3a(void)

void FUN_14419cc3a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419cc98 FUN_14419cc98 body=126 status=ok
// SIG undefined FUN_14419cc98(void)

void FUN_14419cc98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a810;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014419cd07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14419cd20 FUN_14419cd20 body=269 status=ok
// SIG undefined FUN_14419cd20(void)

undefined8 FUN_14419cd20(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14419ce27;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14419ce27;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14419ce27:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14419cddb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14419ce2e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14419cddb;
    }
  }
  uVar6 = 0;
LAB_14419cddb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419ce2e FUN_14419ce2e body=354 status=ok
// SIG undefined FUN_14419ce2e(void)

void FUN_14419ce2e(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
    if ((*(longlong *)(*plVar2 + 0x1c8) != 0) && (DAT_14cac6e60 == 0)) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b47bc4;
      local_38 = &LAB_1478989f1;
      local_40 = &LAB_146391124;
      local_48 = L"Engine";
      local_50 = 0x10000000000;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419cfa2 FUN_14419cfa2 body=321 status=ok
// SIG undefined FUN_14419cfa2(void)

void FUN_14419cfa2(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14419d008;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14419d008:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x78)) {
      uVar5 = uVar3 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x78,8);
  }
  return;
}



// FUNCTION 14419d0e4 FUN_14419d0e4 body=549 status=ok
// SIG undefined FUN_14419d0e4(void)

/* WARNING: Removing unreachable block (ram,0x00014419d2b0) */
/* WARNING: Removing unreachable block (ram,0x00014419d2fc) */
/* WARNING: Removing unreachable block (ram,0x00014419d303) */

void FUN_14419d0e4(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [144];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *param_1;
  FUN_14419d30a(local_138);
  FUN_14419d4a8(&local_a8,local_138);
  iVar2 = *(int *)(lVar3 + 0x9c0);
  *(uint *)(lVar3 + 0x9c0) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x9c4) < iVar2 + 1U) {
    FUN_14419d69c((longlong *)(lVar3 + 0x9b8),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x9b8);
  lVar5 = (longlong)iVar2 * 0x78;
  *(undefined4 *)(lVar3 + 8 + lVar5) = local_a0;
  *(undefined8 *)(lVar3 + lVar5) = local_a8;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = local_98;
  uVar4 = FUN_14477b664(local_90);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = local_88;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar5) = local_80;
  uVar4 = FUN_14477b664(local_78);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(lVar3 + 0x30 + lVar5) = uVar4;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 0x40 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar5) = local_68;
  *(undefined4 *)(lVar3 + 0x48 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x4c + lVar5) = local_60._4_4_;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = local_58;
  *(undefined4 *)(lVar3 + 0x58 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x5c + lVar5) = local_50._4_4_;
  *(undefined8 *)(lVar3 + 0x60 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x60 + lVar5) = local_48;
  *(undefined4 *)(lVar3 + 0x68 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x6c + lVar5) = local_40._4_4_;
  *(undefined1 *)(lVar3 + 0x70 + lVar5) = local_38;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419d30a FUN_14419d30a body=414 status=ok
// SIG undefined FUN_14419d30a(void)

undefined8 * FUN_14419d30a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a171dc0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_1[1] = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = &PTR_FUN_14b7ac6a0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_2 + 0x30));
  uVar2 = FUN_14477b664(uVar2);
  param_1[6] = uVar2;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_2 + 0x48));
  uVar2 = FUN_14477b664(uVar2);
  param_1[9] = uVar2;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_148694570(param_1 + 0xb,iVar1,0);
    FUN_1486945e3(param_1[0xb],uVar2,iVar1);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(int *)(param_1 + 0xe) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_148c31262(param_1 + 0xd,iVar1,0);
    FUN_148c312d5(param_1[0xd],uVar2,iVar1);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1418cb1da(param_1 + 0xf,iVar1,0);
    FUN_1418cb328(param_1[0xf],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 14419d4a8 FUN_14419d4a8 body=499 status=ok
// SIG undefined FUN_14419d4a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14419d4a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2[5];
  uVar3 = FUN_14477b664(param_2[6]);
  uVar3 = FUN_14477b664(uVar3);
  param_1[3] = uVar3;
  param_1[4] = param_2[7];
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[5] = param_2[8];
  uVar3 = FUN_14477b664(param_2[9]);
  uVar3 = FUN_14477b664(uVar3);
  param_1[6] = uVar3;
  param_1[7] = param_2[10];
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar3 = param_2[0xb];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_148694570(param_1 + 8,iVar1,0);
    FUN_1486945e3(param_1[8],uVar3,iVar1);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  uVar3 = param_2[0xd];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_148c31262(param_1 + 10,iVar1,0);
    FUN_148c312d5(param_1[10],uVar3,iVar1);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar3 = param_2[0xf];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1418cb1da(param_1 + 0xc,iVar1,0);
    FUN_1418cb328(param_1[0xc],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_2 = &PTR_FUN_14b7ac6a0;
  if (param_2[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_2[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_2[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_2 + 2) != '\0') &&
     (plVar2 = (longlong *)param_2[1], plVar2 != (longlong *)0x0)) {
    if (plVar2[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar2 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar2;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  return param_1;
}



// FUNCTION 14419d69c FUN_14419d69c body=359 status=ok
// SIG undefined FUN_14419d69c(void)

void FUN_14419d69c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x78;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14419d72e;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14419d72e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 14419d804 FUN_14419d804 body=101 status=ok
// SIG undefined FUN_14419d804(void)

int FUN_14419d804(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(char *)(lVar2 + lVar4 + 8) == (char)param_3[1])) &&
           (*(char *)(lVar2 + lVar4 + 9) == *(char *)((longlong)param_3 + 9))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14419d86a FUN_14419d86a body=162 status=ok
// SIG undefined FUN_14419d86a(void)

void FUN_14419d86a(longlong *param_1,undefined8 param_2)

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
        goto LAB_14419d8f7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14419d8f7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14419d90c FUN_14419d90c body=53 status=ok
// SIG undefined FUN_14419d90c(void)

void FUN_14419d90c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  do {
    *param_1 = 0;
    uVar1 = DAT_14c8464e8;
    param_1[1] = DAT_14c8464e0;
    param_1[2] = uVar1;
    param_1[3] = DAT_14c8464f0;
    uVar1 = DAT_14c8463f8;
    param_1[4] = DAT_14c8463f0;
    param_1[5] = uVar1;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1 = param_1 + 7;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14419d942 FUN_14419d942 body=355 status=ok
// SIG undefined FUN_14419d942(void)

void FUN_14419d942(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar8 = 4;
    if (4 < uVar3) {
      uVar8 = (ulonglong)uVar3;
    }
  }
  else {
    uVar8 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar8 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar5 + 0xf;
      if (uVar8 < 0x249) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar2) {
            uVar8 = (ulonglong)bVar2;
          }
          uVar10 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14419d9ce;
            lVar1 = uVar8 + 1 + uVar10;
            uVar10 = uVar10 - 1;
          } while (lVar1 != 0x33);
        }
        uVar8 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar8 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar8 & ((uVar6 & 0xfffffffffffffff0) + uVar8) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14419d9ce:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5 >> 3;
  iVar7 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar9 = 0x7fffffff;
  if ((int)uVar3 <= iVar7) {
    iVar9 = iVar7;
  }
  *(int *)(param_1 + 0xc) = iVar9;
  FUN_1446f8d3c(param_1,0,iVar9,0x38,8);
  return;
}



// FUNCTION 14419daa6 FUN_14419daa6 body=321 status=ok
// SIG undefined FUN_14419daa6(void)

undefined8 FUN_14419daa6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x333) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x3ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14419db0b;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x3ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
    }
  }
LAB_14419db0b:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x28)) {
    uVar4 = uVar6 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar5;
}



// FUNCTION 14419dbe7 FUN_14419dbe7 body=33 status=ok
// SIG undefined FUN_14419dbe7(void)

void FUN_14419dbe7(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14419dc08 FUN_14419dc08 body=363 status=ok
// SIG undefined FUN_14419dc08(void)

void FUN_14419dc08(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14419dc9e;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14419dc9e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14419dd74 FUN_14419dd74 body=99 status=ok
// SIG undefined FUN_14419dd74(void)

bool FUN_14419dd74(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  
  if (*param_1 == *param_2) {
    bVar1 = false;
    if (((ABS((double)param_1[1] - (double)param_2[1]) <= 9.999999747378752e-05) &&
        (ABS((double)param_1[2] - (double)param_2[2]) <= 9.999999747378752e-05)) &&
       (ABS((double)param_1[3] - (double)param_2[3]) <= 9.999999747378752e-05)) {
      bVar1 = (char)param_1[4] == (char)param_2[4];
    }
    return bVar1;
  }
  return false;
}



// FUNCTION 14419ddea FUN_14419ddea body=12 status=ok
// SIG undefined FUN_14419ddea(void)

void FUN_14419ddea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014419ddf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14419ddf6 FUN_14419ddf6 body=29 status=ok
// SIG undefined FUN_14419ddf6(void)

undefined8 FUN_14419ddf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419de14 FUN_14419de14 body=282 status=ok
// SIG undefined FUN_14419de14(void)

undefined8 * FUN_14419de14(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
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
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14419c1e9);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14419df2e FUN_14419df2e body=108 status=ok
// SIG undefined FUN_14419df2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14419df2e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1441966ec(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1441966ec(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014419df71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14419df9a FUN_14419df9a body=29 status=ok
// SIG undefined FUN_14419df9a(void)

undefined8 FUN_14419df9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419dfcc FUN_14419dfcc body=93 status=ok
// SIG undefined FUN_14419dfcc(void)

void FUN_14419dfcc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97ad90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419e02a FUN_14419e02a body=93 status=ok
// SIG undefined FUN_14419e02a(void)

void FUN_14419e02a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97ad90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419e088 FUN_14419e088 body=126 status=ok
// SIG undefined FUN_14419e088(void)

void FUN_14419e088(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97ad90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014419e0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14419e106 FUN_14419e106 body=109 status=ok
// SIG undefined FUN_14419e106(void)

void FUN_14419e106(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x24))) &&
       (lVar2 = *(longlong *)(param_1 + 0x18), (*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      FUN_14132047a(lVar2,1,0);
      *(undefined8 *)(lVar2 + 400) = 0;
    }
  }
  return;
}



// FUNCTION 14419e174 FUN_14419e174 body=111 status=ok
// SIG undefined FUN_14419e174(void)

undefined8 FUN_14419e174(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x24))) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      if ((*(uint *)(lVar3 + 8) & 0x10200000) == 0) {
        FUN_14132047a(lVar2,1,0);
        *(undefined8 *)(lVar2 + 400) = 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14419e1e4 FUN_14419e1e4 body=226 status=ok
// SIG undefined FUN_14419e1e4(void)

void FUN_14419e1e4(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int *local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  longlong local_50;
  int local_44;
  longlong local_40;
  undefined4 local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = 0;
  FUN_148d7741a();
  local_50 = FUN_1488dc8d8();
  iVar1 = 0;
  if (local_50 != 0) {
    local_70 = &local_50;
    local_58 = &local_70;
    local_68 = &local_44;
    local_30 = &local_60;
    local_60 = &LAB_148d774e2;
    local_38 = (undefined4)param_1[5];
    local_40 = param_1[4];
    local_20 = &local_30;
    local_28 = &LAB_143de34b6;
    FUN_1488eda1c(param_1[3]);
    iVar1 = local_44;
  }
  if ((int)param_1[0x29] != iVar1) {
    *(int *)(param_1 + 0x29) = iVar1;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419e2c8 FUN_14419e2c8 body=626 status=ok
// SIG undefined FUN_14419e2c8(void)

void FUN_14419e2c8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) goto LAB_14419e32d;
  uVar2 = FUN_1401b0f18();
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_14419e32d;
  uVar2 = FUN_1401b0f18();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) goto LAB_14419e32d;
  lVar5 = FUN_148d78cea(param_1);
  lVar6 = *(longlong *)(lVar5 + 0x10);
  if (lVar6 == 0) {
    uVar2 = FUN_140927942();
    lVar6 = FUN_14477b664(uVar2);
    *(longlong *)(lVar5 + 0x10) = lVar6;
  }
  lVar7 = *(longlong *)(lVar5 + 0x18);
  if (lVar7 == 0) {
    if ((lVar6 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar2,(longlong *)(lVar5 + 8));
        *(longlong *)(lVar5 + 0x18) = lVar7;
        if (lVar7 != 0) goto LAB_14419e382;
      }
    }
  }
  else {
LAB_14419e382:
    uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    FUN_1406c9d00(uVar2,&local_48);
    if (local_40 == 0) {
      uVar2 = FUN_140927942();
      local_40 = FUN_14477b664(uVar2);
    }
    if (((local_38 == 0) && (local_38 = 0, local_40 != 0)) && (local_48 != 0)) {
      plVar3 = *(longlong **)(local_40 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
        local_38 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
        local_38 = FUN_144aff482(uVar2,&local_48);
      }
    }
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar7 + 8);
    }
    cVar1 = FUN_14030fc16(local_38,puVar8);
    if (cVar1 == '\0') goto LAB_14419e32d;
  }
  lVar6 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if ((longlong)*(int *)(lVar5 + 0x28) != 0) {
    plVar4 = *(longlong **)(lVar5 + 0x20);
    plVar3 = plVar4 + *(int *)(lVar5 + 0x28);
    do {
      if (*(int *)(lVar6 + 0x80) != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0x78) + lVar5) == *plVar4) goto LAB_14419e50a;
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(lVar6 + 0x80) << 3 != lVar5);
      }
      if (*(int *)(lVar6 + 0x90) == 0) goto LAB_14419e32d;
      lVar5 = 0;
      while (*(longlong *)(*(longlong *)(lVar6 + 0x88) + lVar5) != *plVar4) {
        lVar5 = lVar5 + 8;
        if ((longlong)*(int *)(lVar6 + 0x90) << 3 == lVar5) goto LAB_14419e32d;
      }
LAB_14419e50a:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
  }
  *(int *)(param_1 + 0x33) = (int)param_1[0x33] + 1;
  (**(code **)(*param_1 + 0x50))(param_1);
LAB_14419e32d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14419e53c FUN_14419e53c body=29 status=ok
// SIG undefined FUN_14419e53c(void)

undefined8 FUN_14419e53c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419e6d8 FUN_14419e6d8 body=93 status=ok
// SIG undefined FUN_14419e6d8(void)

void FUN_14419e6d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419e736 FUN_14419e736 body=93 status=ok
// SIG undefined FUN_14419e736(void)

void FUN_14419e736(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419e794 FUN_14419e794 body=126 status=ok
// SIG undefined FUN_14419e794(void)

void FUN_14419e794(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97b0f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014419e803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14419e856 FUN_14419e856 body=318 status=ok
// SIG undefined FUN_14419e856(void)

ulonglong FUN_14419e856(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_14419e98e;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14419e98e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14419e98e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14419e941;
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar7 = 0;
      if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) goto LAB_14419e941;
      cVar1 = *param_3;
      if (cVar1 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_14419e92f:
        uVar7 = (ulonglong)!bVar8;
      }
      else if (cVar1 == '\x02') {
        uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
      }
      else if (cVar1 == '\x01') {
        bVar8 = *(uint *)(param_3 + 0xc) == 0;
        goto LAB_14419e92f;
      }
      FUN_144199e28(*(undefined8 *)(param_1 + 0x20),uVar7);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      goto LAB_14419e941;
    }
  }
  uVar7 = 0;
LAB_14419e941:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419e996 FUN_14419e996 body=29 status=ok
// SIG undefined FUN_14419e996(void)

undefined8 FUN_14419e996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419eb32 FUN_14419eb32 body=93 status=ok
// SIG undefined FUN_14419eb32(void)

void FUN_14419eb32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419eb90 FUN_14419eb90 body=93 status=ok
// SIG undefined FUN_14419eb90(void)

void FUN_14419eb90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419ebee FUN_14419ebee body=126 status=ok
// SIG undefined FUN_14419ebee(void)

void FUN_14419ebee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97b160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014419ec5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14419ecb0 FUN_14419ecb0 body=318 status=ok
// SIG undefined FUN_14419ecb0(void)

ulonglong FUN_14419ecb0(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_14419ede8;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14419ede8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14419ede8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14419ed9b;
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar7 = 0;
      if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) goto LAB_14419ed9b;
      cVar1 = *param_3;
      if (cVar1 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_14419ed89:
        uVar7 = (ulonglong)!bVar8;
      }
      else if (cVar1 == '\x02') {
        uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
      }
      else if (cVar1 == '\x01') {
        bVar8 = *(uint *)(param_3 + 0xc) == 0;
        goto LAB_14419ed89;
      }
      FUN_14419a0d4(*(undefined8 *)(param_1 + 0x20),uVar7);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      goto LAB_14419ed9b;
    }
  }
  uVar7 = 0;
LAB_14419ed9b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419edf0 FUN_14419edf0 body=29 status=ok
// SIG undefined FUN_14419edf0(void)

undefined8 FUN_14419edf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14419ef8c FUN_14419ef8c body=93 status=ok
// SIG undefined FUN_14419ef8c(void)

void FUN_14419ef8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419efea FUN_14419efea body=93 status=ok
// SIG undefined FUN_14419efea(void)

void FUN_14419efea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14419f048 FUN_14419f048 body=126 status=ok
// SIG undefined FUN_14419f048(void)

void FUN_14419f048(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41e020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97b1d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014419f0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14419f0d0 FUN_14419f0d0 body=275 status=ok
// SIG undefined FUN_14419f0d0(void)

undefined8 FUN_14419f0d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14419f1dd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14419f1dd;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14419f1dd:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14419f17f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d73982(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_14419f17f;
    }
  }
  uVar6 = 0;
LAB_14419f17f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14419f1e4 FUN_14419f1e4 body=4053 status=ok
// SIG undefined FUN_14419f1e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14419f1e4(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  char *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = "AssetRegistry";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccb68 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbccb70);
  if (cVar1 == '\0') {
    _DAT_14cbccb70 = 0;
    uRam000000014cbccb78 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = "bone";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  _DAT_14cbccb80 = 0x47efffffe0000000;
  _DAT_14cbccb88 = 0x47efffffe0000000;
  _DAT_14cbccb90 = 0x47efffffe0000000;
  _DAT_14cbccb98 = 0x47efffffe0000000;
  _DAT_14cbccba0 = 0x47efffffe0000000;
  _DAT_14cbccba8 = 0x47efffffe0000000;
  _DAT_14cbccbb0 = 0x47efffffe0000000;
  _DAT_14cbccbb8 = 0x47efffffe0000000;
  local_78 = "Cash";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccbc0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbccbc8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14418d880);
  _DAT_14cbccbdc = 0;
  FUN_14052b5e0(&DAT_14cbccbd8,"PlayerAwareness",0);
  _DAT_14cbccbe8 = "PlayerAwareness";
  local_78 = "basic";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccbf0 = (ulonglong)uVar2;
  local_78 = "challenge";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccbf8 = (ulonglong)uVar2;
  local_78 = "online";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc00 = (ulonglong)uVar2;
  local_78 = "social";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc08 = (ulonglong)uVar2;
  local_78 = "alert";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc10 = (ulonglong)uVar2;
  local_78 = "photo_mode";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc18 = (ulonglong)uVar2;
  local_78 = "generic_task";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc20 = (ulonglong)uVar2;
  local_78 = "mission";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc28 = (ulonglong)uVar2;
  local_78 = "mail";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc30 = (ulonglong)uVar2;
  local_78 = "respawn";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc38 = (ulonglong)uVar2;
  local_78 = "tutorial";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc40 = (ulonglong)uVar2;
  local_78 = "special_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc48 = (ulonglong)uVar2;
  local_78 = "generic_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc50 = (ulonglong)uVar2;
  local_78 = "vault_card";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc58 = (ulonglong)uVar2;
  local_78 = "ONLINE_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc60 = (ulonglong)uVar2;
  local_78 = "INGAME_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc68 = (ulonglong)uVar2;
  local_78 = "NOTIFICATION_MESSAGE";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc70 = (ulonglong)uVar2;
  local_78 = "MENU_TUTORIAL_MESSAGE";
  uStack_70 = 0x15;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc78 = (ulonglong)uVar2;
  local_78 = "collectible";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccc80 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbccc88,L"UNSET",1);
  local_78 = "init";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "update";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "config_update";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "deinit";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbccc90,L"Party",1);
  FUN_1446f470e(&DAT_14cbccc98,&DAT_149e063b2,1);
  _DAT_14cbccca0 = 0xffffffff;
  _DAT_14cbccca4 = 0;
  local_78 = "EmissiveIntensity";
  uStack_70 = 0x11;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccca8 = (ulonglong)uVar2;
  local_78 = "EmissiveColor";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcccb0 = (ulonglong)uVar2;
  local_78 = "BlockAll";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcccb8 = (ulonglong)uVar2;
  local_78 = "BlockAllDynamic";
  uStack_70 = 0xf;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcccc0 = (ulonglong)uVar2;
  local_78 = "RootMesh";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78);
  DAT_14cbcccc8 = (ulonglong)uVar2;
  _DAT_14cbcd1d8 = 0;
  LOCK();
  DAT_14cbcd1d0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_14418d891);
  local_78 = (char *)0x5af04ac7f2b4b945;
  uStack_70 = 0xa2c07f6e;
  uStack_6c = 0xfb2c84ec;
  _DAT_14cbcccd0 = 0xf2b4b945;
  uRam000000014cbcccd4 = 0x5af04ac7;
  uRam000000014cbcccd8 = 0xa2c07f6e;
  uRam000000014cbcccdc = 0xfb2c84ec;
  FUN_141005458(&local_78,0,L"LootableObject",0);
  atexit((_func_5014 *)&LAB_14418d896);
  FUN_1446f470e(&DAT_14cbccd10,L"Default");
  DAT_14cbcccf8 = 0;
  _DAT_14cbccd00 = 0;
  _DAT_14cbccd08 = 2;
  atexit(FUN_14418df23);
  ram0x00014cbccd1c = 0;
  FUN_14052b5e0(&DAT_14cbccd18,"DropLootSocket",0);
  _DAT_14cbccd28 = "DropLootSocket";
  local_78 = "locked";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd1e8 = (ulonglong)uVar2;
  local_78 = "open";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd1e0 = (ulonglong)uVar2;
  ram0x00014cbccce4 = 0;
  FUN_14052b5e0(&DAT_14cbccce0,&DAT_14b959e08,0);
  _DAT_14cbcccf0 = &DAT_14b959e08;
  local_78 = "lootable";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccd30 = (ulonglong)uVar2;
  local_78 = "nexus";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccd38 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbccd40,L"Gps_HeldLootLocation",1);
  local_88 = 0;
  FUN_1415c789c(&DAT_14cbccd48,L"oak.AIHeldLootableForceSleepTimeout",&DAT_14c763fe8,
                L"Amount of time after which the held lootables dropped from AI will be force put to sleep."
               );
  atexit(FUN_14418df54);
  DAT_14cbccd58 = 0;
  atexit((_func_5014 *)&LAB_14418df99);
  DAT_14cbcce10 = 0;
  atexit((_func_5014 *)&LAB_14418e1d2);
  _DAT_14cbcce60 = &LAB_14418e1ea;
  _DAT_14cbcce68 = 0x44664ccd;
  DAT_14cbcce6c = 1;
  DAT_14cbcce58 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcce58;
  atexit((_func_5014 *)&LAB_14418e1ef);
  local_78 = "Use";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcce78 = (ulonglong)uVar2;
  local_78 = "Sight";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcce80 = (ulonglong)uVar2;
  local_78 = "TargetLock";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcce88 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcce90,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14418e223);
  FUN_140056680(&DAT_14cbccea0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14418e234);
  FUN_140056680(&DAT_14cbcceb0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14418e245);
  FUN_140056680(&DAT_14cbccec0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14418e256);
  FUN_1446f470e(&DAT_14cbcced0,L"LIMB_GORED",1);
  _DAT_14cbcced8 = 0x4072c00000000000;
  _DAT_14cbccee0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbccee8,L"body",1);
  FUN_1446f470e(&DAT_14cbccef0,L"title_card",1);
  local_78 = "Standard";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccef8 = (ulonglong)uVar2;
  local_78 = "PrologueSkip";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccf00 = (ulonglong)uVar2;
  local_78 = "UltimateVaultHunterSkip";
  uStack_70 = 0x17;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccf08 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Cowbell";
  uStack_70 = 0x11;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccf10 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Harmonica";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbccf18 = (ulonglong)uVar2;
  DAT_14cbccf20 = 0;
  atexit((_func_5014 *)&LAB_1441968d4);
  DAT_14cbccfe8._4_4_ = 0;
  DAT_14cbccff0 = 0;
  FUN_14052b5e0(&DAT_14cbccfe8,"mapviewerprefs");
  _DAT_14cbccff8 = "mapviewerprefs";
  _DAT_14cbcd000 = 0;
  uRam000000014cbcd008 = 0;
  _DAT_14cbcd010 = 0;
  DAT_14cbcd018 = 0;
  uRam000000014cbcd020 = 0;
  FUN_1446ddda2(&DAT_14cbcd000,"oak.mapviewerprefs",0);
  atexit((_func_5014 *)&LAB_144196ac8);
  local_78 = "Lines";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd028 = (ulonglong)uVar2;
  local_78 = "Polygons";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd030 = (ulonglong)uVar2;
  local_78 = "MapOpacity";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd038 = (ulonglong)uVar2;
  local_78 = "SegmentLength";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd040 = (ulonglong)uVar2;
  local_78 = "SegmentStart";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd048 = (ulonglong)uVar2;
  local_78 = "ZoomingBlur";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd050 = (ulonglong)uVar2;
  local_78 = "LineColor";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd058 = (ulonglong)uVar2;
  local_78 = "Use";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd060 = (ulonglong)uVar2;
  local_78 = "StopUse";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd068 = (ulonglong)uVar2;
  local_78 = "SecondaryUse";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd070 = (ulonglong)uVar2;
  local_78 = "StopSecondaryUse";
  uStack_70 = 0x10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd078 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbcd080,L"Melee",1);
  FUN_1446f470e(&DAT_14cbcd088,L"Execution",1);
  FUN_1446f470e(&DAT_14cbcd090,L"ExecutionHostLock",1);
  FUN_1446f470e(&DAT_14cbcd098,L"FirstPerson");
  local_78 = "LockExecutionMovement";
  uStack_70 = 0x15;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd0a0 = (ulonglong)uVar2;
  _DAT_14cbcd0cc = 0;
  _DAT_14cbcd0d0 = 0;
  FUN_14052b5e0(&DAT_14cbcd0c8,"num_in_backpack",0);
  _DAT_14cbcd0d8 = "num_in_backpack";
  _DAT_14cbcd110 = 0;
  uRam000000014cbcd118 = 0;
  _DAT_14cbcd120 = 0;
  DAT_14cbcd128 = 0;
  uRam000000014cbcd130 = 0;
  FUN_1446ddda2(&DAT_14cbcd110,"allactivities");
  atexit((_func_5014 *)&LAB_144199df4);
  _DAT_14cbcd138 = 0;
  uRam000000014cbcd140 = 0;
  _DAT_14cbcd148 = 0;
  DAT_14cbcd150 = 0;
  uRam000000014cbcd158 = 0;
  FUN_1446ddda2(&DAT_14cbcd138,"serial");
  atexit((_func_5014 *)&LAB_144199e05);
  _DAT_14cbcd160 = 0;
  uRam000000014cbcd168 = 0;
  _DAT_14cbcd170 = 0;
  DAT_14cbcd178 = 0;
  uRam000000014cbcd180 = 0;
  FUN_1446ddda2(&DAT_14cbcd160,"missionstate");
  atexit((_func_5014 *)&LAB_144199e16);
  _DAT_14cbcd18c = 0;
  _DAT_14cbcd190 = 0;
  FUN_14052b5e0(&DAT_14cbcd188,"num_killed",0);
  _DAT_14cbcd198 = "num_killed";
  DAT_14cbcd0e0._4_4_ = 0;
  DAT_14cbcd0e8 = 0;
  FUN_14052b5e0(&DAT_14cbcd0e0,"HideUI",0);
  _DAT_14cbcd0f0 = "HideUI";
  DAT_14cbcd0f8._4_4_ = 0;
  DAT_14cbcd100 = 0;
  FUN_14052b5e0(&DAT_14cbcd0f8,"ShowUI",0);
  _DAT_14cbcd108 = "ShowUI";
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a0200 FUN_1441a0200 body=2032 status=ok
// SIG undefined FUN_1441a0200(void)

undefined1 (*) [16]
FUN_1441a0200(undefined1 (*param_1) [16],longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  undefined2 *puVar20;
  longlong *plVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined4 local_220;
  int local_21c [5];
  undefined4 local_208;
  int local_204 [2];
  undefined4 local_1fc;
  char local_1f8 [4];
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  double local_1d8;
  longlong *plStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  longlong local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined2 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_3 == 0 || param_4 == 0) goto LAB_1441a025e;
  lVar16 = FUN_148d7a4ba(param_2);
  if (lVar16 != 0) {
    *(undefined8 *)param_1[1] = *(undefined8 *)(lVar16 + 0x70);
    uVar14 = *(undefined4 *)(lVar16 + 100);
    uVar11 = *(undefined4 *)(lVar16 + 0x68);
    uVar12 = *(undefined4 *)(lVar16 + 0x6c);
    *(undefined4 *)*param_1 = *(undefined4 *)(lVar16 + 0x60);
    *(undefined4 *)(*param_1 + 4) = uVar14;
    *(undefined4 *)(*param_1 + 8) = uVar11;
    *(undefined4 *)(*param_1 + 0xc) = uVar12;
    param_1[1][8] = 1;
    goto LAB_1441a0262;
  }
  lVar16 = FUN_141552268(param_3,0);
  if ((lVar16 != 0) && (FUN_140630e34(&local_1d8,param_3), plStack_1d0 != (longlong *)0x0)) {
    iVar15 = (int)plStack_1d0[1];
    do {
      if (iVar15 == 0) {
        plVar21 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar13 = (int)plStack_1d0[1];
      bVar22 = iVar15 == iVar13;
      if (bVar22) {
        *(int *)(plStack_1d0 + 1) = iVar15 + 1;
        iVar13 = iVar15;
      }
      iVar15 = iVar13;
      UNLOCK();
      plVar21 = plStack_1d0;
    } while (!bVar22);
    LOCK();
    piVar1 = (int *)((longlong)plStack_1d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_1d0 + 0x10))();
    }
    dVar23 = local_1d8;
    if (plVar21 != (longlong *)0x0) {
      if (local_1d8 == 0.0) {
        param_1[1][8] = 0;
      }
      else {
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_c8 = *param_2;
        local_c0 = (undefined4)param_2[1];
        FUN_1447715ec(&local_b8,param_2 + 2);
        local_158 = DAT_14cb7bd68;
        local_150 = DAT_14cb7bd70;
        FUN_14013eb2c(&local_c8);
        local_160 = DAT_14cb7bd88;
        local_168 = DAT_14cb7bd80;
        FUN_14013eb54(&local_c8);
        if ((((int)param_2[2] == 0) || (iVar15 = *(int *)((longlong)param_2 + 0x14), iVar15 == 0))
           || ((int)param_2[2] == DAT_14c948000)) {
LAB_1441a0772:
          local_170 = DAT_14c948620;
          local_178 = DAT_14c948618;
        }
        else {
          plVar17 = param_2 + 3;
          if (0 < *(int *)((longlong)param_2 + 0x34)) {
            plVar17 = (longlong *)param_2[5];
          }
          if (1 < iVar15) {
            plVar17 = (longlong *)param_2[5];
          }
          if ((iVar15 == 1) || (iVar15 < 3)) goto LAB_1441a0772;
          local_170 = (undefined4)plVar17[4];
          local_178 = plVar17[3];
        }
        FUN_144928d62(&local_b8,4,&local_178);
        uVar14 = FUN_1410009da(dVar23,&local_1d8,&local_c8);
        auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_1b0 - DAT_14c8464a8));
        auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_1b8 - DAT_14c8464a0));
        iVar15 = movmskpd(uVar14,auVar6);
        auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_1a0 - DAT_14c8464b8));
        auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_1a8 - DAT_14c8464b0));
        uVar18 = movmskpd(SUB84(dVar23,0),auVar4);
        if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
          lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS((double)plStack_1d0 - DAT_14c846488));
          auVar10._8_4_ = (int)lVar16;
          auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_1d8 - DAT_14c846480));
          auVar10._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
          uVar18 = movmskpd(iVar15,auVar10);
          lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_1c0 - DAT_14c846498));
          auVar8._8_4_ = (int)lVar16;
          auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_1c8 - DAT_14c846490));
          auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
          iVar15 = movmskpd(0,auVar8);
          uVar19 = iVar15 << 2 | uVar18;
          if (uVar19 != 0) {
            auVar7._8_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)plStack_1d0 + DAT_14c846488));
            auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_1d8 + DAT_14c846480));
            uVar18 = movmskpd(uVar18,auVar7);
            auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_1c0 + DAT_14c846498));
            auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_1c8 + DAT_14c846490));
            uVar19 = movmskpd(uVar19,auVar5);
            if ((uVar19 & 0x3fffffff) != 0 || uVar18 != 0) goto LAB_1441a04c0;
          }
          auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_190 - DAT_14c8464c8));
          auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_198 - DAT_14c8464c0));
          iVar15 = movmskpd(uVar18,auVar3);
          lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_180 - dRam000000014c8464d8));
          auVar2._8_4_ = (int)lVar16;
          auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_188 - DAT_14c8464d0));
          auVar2._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
          uVar18 = movmskpd(0,auVar2);
          if ((uVar18 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_1441a04c0;
          param_1[1][8] = 0;
        }
        else {
LAB_1441a04c0:
          local_e0 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_100 = local_c8;
          local_f8 = local_c0;
          FUN_1447715ec(&local_f0,&local_b8);
          local_1e8 = DAT_14cb70c20;
          local_1e0 = DAT_14cb70c28;
          FUN_144928d62(&local_f0,5);
          local_1f8[0] = '\0';
          local_1f4 = 0;
          local_1ec = 0;
          if (((*(longlong *)(param_4 + 0x1e0) == 0) ||
              (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x1e0) + 0x38),
              plVar17 == (longlong *)0x0)) ||
             ((plVar17 = (longlong *)(**(code **)(*plVar17 + 0x308))(plVar17,0),
              plVar17 == (longlong *)0x0 ||
              ((lVar16 = (**(code **)(*plVar17 + 0x2b0))(plVar17), lVar16 == 0 ||
               (FUN_14039fc7b(&local_100,local_1f8,lVar16,0), local_1f8[0] != '\x03')))))) {
LAB_1441a062d:
            param_1[1][8] = 0;
          }
          else {
            FUN_1403a0728(local_1f8,&local_138);
            FUN_1401533ba(local_204,&local_138,1);
            if (local_204[0] == 0) goto LAB_1441a062d;
            local_208 = local_1fc;
            FUN_1448075d0(&local_138);
            if (DAT_14cb704c8 == 0) {
              lVar16 = 0;
            }
            else {
              lVar16 = FUN_144815d88(DAT_14cb704c8,&local_138);
            }
            if (lStack_120 != 0) {
              FUN_1400020a8();
            }
            if (lVar16 == 0) goto LAB_1441a062d;
            lVar16 = *(longlong *)(lVar16 + 0x38);
            local_148 = (int)lVar16;
            uStack_144 = (undefined4)((ulonglong)lVar16 >> 0x20);
            if (lVar16 == 0) {
              local_138 = (undefined2 *)0x0;
              uStack_130 = 0;
LAB_1441a07de:
              puVar20 = &DAT_149dfb77a;
            }
            else {
              FUN_1400021e4(&local_148,&local_138);
              puVar20 = local_138;
              if ((int)uStack_130 == 0) goto LAB_1441a07de;
            }
            local_21c[1] = 0;
            local_21c[2] = 0;
            FUN_1405f0d29(local_21c,puVar20,0);
            if (local_138 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_128 = 0;
            lStack_120 = 0;
            local_118 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_138 = (undefined2 *)*param_2;
            uStack_130 = CONCAT44(uStack_130._4_4_,(int)param_2[1]);
            FUN_1447715ec(&local_128,param_2 + 2);
            if (local_21c[0] == 0) {
              local_140 = DAT_14cb7bba0;
              local_148 = (int)DAT_14cb7bb98;
              uStack_144 = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
            }
            else {
              local_148 = local_21c[0];
              uStack_144 = (undefined4)local_21c._4_8_;
              local_140 = SUB84(local_21c._4_8_,4);
            }
            FUN_144928d62(&local_128,1,&local_148);
            local_228 = DAT_14cb7bd68;
            local_220 = DAT_14cb7bd70;
            FUN_14013eb2c(&local_138);
            lVar16 = FUN_148d7a4ba(&local_138);
            if (lVar16 != 0) {
              local_198 = *(double *)(lVar16 + 0x60) * local_198;
              dStack_190 = *(double *)(lVar16 + 0x68) * dStack_190;
              local_188 = *(double *)(lVar16 + 0x70) * local_188;
              dVar23 = dStack_190 * local_1d8 - local_198 * (double)plStack_1d0;
              dVar24 = local_188 * (double)plStack_1d0 - dStack_190 * local_1c8;
              dVar25 = local_198 * local_1c8 - local_1d8 * local_188;
              dVar24 = dVar24 + dVar24;
              dVar25 = dVar25 + dVar25;
              dVar23 = dVar23 + dVar23;
              dStack_1b0 = (local_1c8 * dVar24 - local_1d8 * dVar23) +
                           dStack_1c0 * dVar25 + dStack_190 + dStack_1b0;
              auVar9._8_4_ = SUB84(dStack_1b0,0);
              auVar9._0_8_ = (dVar23 * (double)plStack_1d0 - dVar25 * local_1c8) +
                             dStack_1c0 * dVar24 + local_198 + local_1b8;
              auVar9._12_4_ = (int)((ulonglong)dStack_1b0 >> 0x20);
              *param_1 = auVar9;
              *(double *)param_1[1] =
                   dVar23 * dStack_1c0 + local_188 +
                   (dVar25 * local_1d8 - dVar24 * (double)plStack_1d0) + local_1a8;
            }
            param_1[1][8] = lVar16 != 0;
            if (local_110 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar17 = plVar21 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      goto LAB_1441a0262;
    }
  }
LAB_1441a025e:
  param_1[1][8] = 0;
LAB_1441a0262:
  if ((local_90 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1441a09f2 FUN_1441a09f2 body=1804 status=ok
// SIG undefined FUN_1441a09f2(void)

void FUN_1441a09f2(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  ulonglong local_148;
  longlong *local_140;
  uint *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  char local_c8;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_b8 = 2;
  local_ac = 0xffffffff;
  uVar14 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  FUN_1488ebe76(param_1,&DAT_14cbcdd38,&local_b8);
  local_b8 = 2;
  local_ac = 0xffffffff;
  uStack_b4 = 0;
  uStack_b0 = 0;
  FUN_1488ebe76(param_1,&DAT_14cbcdd50,&local_b8);
  iVar16 = *(int *)(param_1[3] + 0x114);
  if (iVar16 != 0) {
    uVar1 = *(uint *)(param_1[3] + 0x110);
    uVar14 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != iVar16 || ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = *puVar13;
      }
    }
  }
  lVar3 = FUN_14040226a(uVar14,0);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x140) != 0)) {
    lVar3 = FUN_148d7ab5a(param_1);
    lVar4 = FUN_143dd97c6(param_1);
    if (lVar4 != 0) {
      lVar5 = FUN_1405f6336(lVar4);
      uVar23 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x18);
      param_1[0x23] = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
      *(undefined4 *)(param_1 + 0x24) = uVar23;
      plVar15 = (longlong *)(lVar3 + 8);
      local_108 = 0;
      uStack_100 = 0;
      local_130 = lVar4;
      FUN_143dd9c4e(lVar4,plVar15);
      iVar16 = *(int *)(lVar3 + 0x10);
      if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar16);
      }
      local_140 = param_1 + 0x1f;
      if (*(int *)((longlong)param_1 + 0x104) < iVar16) {
        FUN_148d82f3a(local_140);
      }
      if (0 < (int)uStack_100) {
        local_138 = (uint *)(lVar5 + 0x458);
        lVar3 = 0;
        local_168 = lVar5;
        local_160 = plVar15;
        local_150 = param_1;
        do {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          lVar4 = local_108 + 0x10 + lVar3 * 0x38;
          uStack_b0 = *(undefined4 *)(lVar4 + -8);
          uVar14 = *(undefined8 *)(lVar4 + -0x10);
          local_b8 = (undefined1)uVar14;
          uStack_b7 = (undefined1)((ulonglong)uVar14 >> 8);
          uStack_b6 = (undefined2)((ulonglong)uVar14 >> 0x10);
          uStack_b4 = (undefined4)((ulonglong)uVar14 >> 0x20);
          FUN_1447715ec(&local_a8);
          cVar2 = FUN_1401144ce(&local_b8);
          if (cVar2 != '\0') {
            local_120 = *(undefined4 *)(*plVar15 + 8 + lVar3 * 0xc);
            local_128 = *(undefined8 *)(*plVar15 + lVar3 * 0xc);
            local_158 = lVar3;
            local_118 = local_128;
            local_110 = local_120;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x470);
              if (uVar1 == 0) {
                uVar17 = 1;
                uVar20 = 0;
                iVar16 = 0;
                uVar12 = 0;
              }
              else {
                puVar6 = *(uint **)(lVar5 + 0x468);
                if (*(uint **)(lVar5 + 0x468) == (uint *)0x0) {
                  puVar6 = local_138;
                }
                uVar12 = *puVar6;
                if (uVar12 == 0) {
                  iVar16 = uVar1 + 0x1e;
                  if (-1 < (int)(uVar1 - 1)) {
                    iVar16 = uVar1 - 1;
                  }
                  uVar20 = 0;
                  uVar11 = (ulonglong)(uint)(iVar16 >> 5);
                  if (iVar16 >> 5 < 1) {
                    uVar11 = uVar20;
                  }
                  iVar16 = 0;
                  do {
                    if (uVar11 == uVar20) goto LAB_1441a0d4e;
                    iVar16 = iVar16 + 0x20;
                    uVar12 = puVar6[uVar20 + 1];
                    uVar20 = uVar20 + 1;
                  } while (uVar12 == 0);
                }
                else {
                  uVar20 = 0;
                  iVar16 = 0;
                }
                uVar17 = (ulonglong)(-uVar12 & uVar12);
                uVar11 = uVar17 * 2 + 1;
                lVar3 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                  }
                }
                uVar12 = (iVar16 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
                if ((int)uVar1 <= (int)uVar12) {
                  uVar12 = uVar1;
                }
              }
              if (uVar12 != uVar1) {
                uVar18 = 0xffffffff;
                local_148 = (ulonglong)uVar1;
                do {
                  lVar3 = *(longlong *)(lVar5 + 0x448);
                  lVar4 = *(longlong *)(lVar3 + 0x10 + (longlong)(int)uVar12 * 0x20);
                  cVar2 = FUN_14493b798(lVar4 + 0x20,&local_b8);
                  if (cVar2 != '\0') {
                    puVar13 = (undefined8 *)(lVar3 + (longlong)(int)uVar12 * 0x20);
                    uVar23 = *(undefined4 *)(lVar4 + 0x60);
                    uVar24 = *(undefined4 *)(lVar4 + 100);
                    uVar25 = *(undefined4 *)(lVar4 + 0x68);
                    uVar26 = *(undefined4 *)(lVar4 + 0x6c);
                    uVar21 = (undefined4)*(undefined8 *)(lVar4 + 0x70);
                    uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x70) >> 0x20);
                    local_120 = *(undefined4 *)(puVar13 + 1);
                    local_128 = *puVar13;
                    param_1 = local_150;
                    if ((*(char *)(lVar4 + 0x58) == '\x01') &&
                       (FUN_14117aed4(local_130,&local_f8,&local_128), param_1 = local_150,
                       local_c8 != '\0')) {
                      uVar21 = (undefined4)local_d0;
                      uVar22 = (undefined4)((ulonglong)local_d0 >> 0x20);
                      uVar23 = local_e0;
                      uVar24 = uStack_dc;
                      uVar25 = uStack_d8;
                      uVar26 = uStack_d4;
                    }
                    goto LAB_1441a0e16;
                  }
                  uVar18 = uVar18 & ~(uint)uVar17;
                  puVar6 = *(uint **)(lVar5 + 0x468);
                  if (*(uint **)(lVar5 + 0x468) == (uint *)0x0) {
                    puVar6 = local_138;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x470);
                  iVar19 = (int)uVar20;
                  lVar3 = (longlong)iVar19;
                  uVar12 = puVar6[lVar3] & uVar18;
                  if (uVar12 == 0) {
                    iVar9 = uVar1 + 0x1e;
                    if (-1 < (int)(uVar1 - 1)) {
                      iVar9 = uVar1 - 1;
                    }
                    iVar9 = iVar9 >> 5;
                    iVar16 = iVar16 + 0x20;
                    iVar10 = iVar9;
                    if (iVar9 < iVar19) {
                      iVar10 = iVar19;
                    }
                    if (iVar19 < iVar9) {
                      lVar4 = 0;
                      do {
                        uVar12 = puVar6[lVar3 + lVar4 + 1];
                        if (uVar12 != 0) {
                          uVar20 = (ulonglong)(iVar19 + (int)lVar4 + 1);
                          uVar18 = 0xffffffff;
                          goto LAB_1441a0f6d;
                        }
                        iVar16 = iVar16 + 0x20;
                        lVar4 = lVar4 + 1;
                      } while (iVar10 - lVar3 != lVar4);
                      uVar18 = 0xffffffff;
                      iVar19 = iVar10;
                    }
                    uVar20 = (ulonglong)(iVar19 + 1);
                    lVar5 = local_168;
                    uVar12 = uVar1;
                  }
                  else {
LAB_1441a0f6d:
                    uVar17 = (ulonglong)(-uVar12 & uVar12);
                    uVar11 = uVar17 * 2 + 1;
                    lVar3 = 0x3f;
                    if (uVar11 != 0) {
                      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                      }
                    }
                    uVar12 = (iVar16 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
                    if ((int)uVar1 <= (int)uVar12) {
                      uVar12 = uVar1;
                    }
                  }
                } while (uVar12 != (uint)local_148);
              }
            }
LAB_1441a0d4e:
            param_1 = local_150;
            plVar15 = (longlong *)local_150[3];
            if (*(int *)((longlong)plVar15 + 0x114) == 0) {
              uVar14 = 0;
            }
            else {
              uVar1 = *(uint *)(plVar15 + 0x22);
              if ((int)uVar1 < 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = 0;
                if ((int)uVar1 < DAT_14c9647dc) {
                  puVar13 = (undefined8 *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if (((puVar13 == (undefined8 *)0x0) ||
                      (*(int *)(puVar13 + 2) != *(int *)((longlong)plVar15 + 0x114))) ||
                     ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = *puVar13;
                  }
                }
              }
            }
            uVar7 = (**(code **)(*plVar15 + 0x180))();
            FUN_1441a0200(&local_f8,&local_b8,uVar7,uVar14);
            if ((char)local_e0 == '\0') {
              uVar14 = (**(code **)(*(longlong *)param_1[3] + 0x180))();
              lVar4 = FUN_14883d4c2(&local_b8,uVar14);
              lVar3 = local_158;
              lVar5 = local_168;
              plVar15 = local_160;
              if (lVar4 == 0) goto LAB_1441a0c5f;
              lVar3 = *(longlong *)(lVar4 + 0x1c8);
              if (lVar3 == 0) {
                uVar21 = (undefined4)DAT_14c8464f0;
                uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                puVar13 = &DAT_14c8464e0;
              }
              else {
                uVar21 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
                uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
                puVar13 = (undefined8 *)(lVar3 + 0x260);
              }
              uVar23 = *(undefined4 *)puVar13;
              uVar24 = *(undefined4 *)((longlong)puVar13 + 4);
              uVar25 = *(undefined4 *)(puVar13 + 1);
              uVar26 = *(undefined4 *)((longlong)puVar13 + 0xc);
            }
            else {
              uVar21 = (undefined4)local_e8;
              uVar22 = (undefined4)((ulonglong)local_e8 >> 0x20);
              uVar23 = local_f8;
              uVar24 = uStack_f4;
              uVar25 = uStack_f0;
              uVar26 = uStack_ec;
            }
LAB_1441a0e16:
            lVar3 = local_158;
            plVar15 = local_160;
            lVar5 = local_168;
            puVar8 = (undefined4 *)FUN_148d7abce(local_140);
            *puVar8 = uVar23;
            puVar8[1] = uVar24;
            puVar8[2] = uVar25;
            puVar8[3] = uVar26;
            *(ulonglong *)(puVar8 + 4) = CONCAT44(uVar22,uVar21);
            *(undefined8 *)(puVar8 + 6) = local_128;
            puVar8[8] = local_120;
            *(ulonglong *)(puVar8 + 10) =
                 CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8)));
            puVar8[0xc] = uStack_b0;
            FUN_1447715ec(puVar8 + 0xe,&local_a8);
          }
LAB_1441a0c5f:
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < (int)uStack_100);
      }
      (**(code **)(*param_1 + 0x50))(param_1);
      FUN_1405d7ab2(local_108,uStack_100 & 0xffffffff);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a1100 FUN_1441a1100 body=309 status=ok
// SIG undefined FUN_1441a1100(void)

void FUN_1441a1100(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x125) != '\x01') || (*(char *)(param_1 + 0x126) != '\x01'))
  goto LAB_1441a112d;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
  if (iVar1 == 0) {
LAB_1441a122f:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != iVar1 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1441a122f;
      uVar5 = *puVar6;
    }
  }
  lVar4 = FUN_14040226a(uVar5,0);
  if (((lVar4 != 0) && (plVar3 = *(longlong **)(lVar4 + 0x140), plVar3 != (longlong *)0x0)) &&
     ((longlong)*(int *)(param_1 + 0x110) != 0)) {
    lVar7 = (longlong)*(int *)(param_1 + 0x110) << 5;
    lVar4 = *(longlong *)(param_1 + 0x108) + 0x10;
    do {
      (**(code **)(*plVar3 + 0x80))(plVar3,lVar4);
      lVar4 = lVar4 + 0x20;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  local_38 = 1;
  local_2c = 0;
  local_34 = DAT_14cb7c580;
  FUN_1488ebe76(param_1,&DAT_14cbcd3e8);
  *(undefined1 *)(param_1 + 0x126) = 0;
LAB_1441a112d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a1236 FUN_1441a1236 body=682 status=ok
// SIG undefined FUN_1441a1236(void)

void FUN_1441a1236(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) goto LAB_1441a1255;
  plVar14 = param_1 + 0x25;
  iVar3 = (int)param_1[0x28];
  if ((iVar3 <= (int)param_2) && (-2 < (int)(param_2 - iVar3))) {
    iVar15 = (param_2 - iVar3) + 1;
    if (iVar15 != 0) {
      if (iVar3 != 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        if (param_2 >> 5 == iVar9 >> 5) {
          *(uint *)(param_1 + 0x28) = param_2 + 1;
          goto LAB_1441a12c7;
        }
      }
      iVar9 = param_2 + 1;
      if (*(int *)((longlong)param_1 + 0x144) < iVar9) {
        iVar9 = iVar3;
        if (param_2 < 0x80) {
          iVar4 = 0x80;
        }
        else {
          uVar17 = param_2 + 0x20 >> 5;
          if (*(int *)((longlong)param_1 + 0x144) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar17) {
              uVar11 = uVar17;
            }
          }
          else {
            uVar11 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar7 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar13 = 0x32;
                  if (0x32 < bVar8) {
                    uVar13 = (ulonglong)bVar8;
                  }
                  uVar16 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_1441a1403;
                    lVar2 = uVar13 + 1 + uVar16;
                    uVar16 = uVar16 - 1;
                  } while (lVar2 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar10 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar9 = (int)param_1[0x28];
            }
          }
LAB_1441a1403:
          iVar6 = (int)(uVar7 >> 2);
          iVar4 = -0x20;
          if ((int)uVar17 <= iVar6) {
            iVar4 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x144) = iVar4;
        FUN_1446efbd8(plVar14,iVar9);
        iVar9 = (int)param_1[0x28] + iVar15;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 0x28) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[0x27];
        if ((longlong *)param_1[0x27] == (longlong *)0x0) {
          plVar12 = plVar14;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
LAB_1441a12c7:
    FUN_1447c6044(plVar14,iVar3,iVar15,0);
  }
  if ((longlong *)param_1[0x27] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[0x27];
  }
  puVar1 = (uint *)((longlong)plVar14 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  (**(code **)(*param_1 + 0x50))(param_1);
  local_48 = 2;
  local_3c = 0xffffffff;
  local_44 = 0;
  FUN_1488ebe76(param_1,&DAT_14cbcdd38);
LAB_1441a1255:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a14e2 FUN_1441a14e2 body=684 status=ok
// SIG undefined FUN_1441a14e2(void)

void FUN_1441a14e2(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) goto LAB_1441a1501;
  plVar14 = param_1 + 0x25;
  iVar3 = (int)param_1[0x28];
  if ((iVar3 <= (int)param_2) && (-2 < (int)(param_2 - iVar3))) {
    iVar15 = (param_2 - iVar3) + 1;
    if (iVar15 != 0) {
      if (iVar3 != 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        if (param_2 >> 5 == iVar9 >> 5) {
          *(uint *)(param_1 + 0x28) = param_2 + 1;
          goto LAB_1441a1573;
        }
      }
      iVar9 = param_2 + 1;
      if (*(int *)((longlong)param_1 + 0x144) < iVar9) {
        iVar9 = iVar3;
        if (param_2 < 0x80) {
          iVar4 = 0x80;
        }
        else {
          uVar17 = param_2 + 0x20 >> 5;
          if (*(int *)((longlong)param_1 + 0x144) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar17) {
              uVar11 = uVar17;
            }
          }
          else {
            uVar11 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar7 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar13 = 0x32;
                  if (0x32 < bVar8) {
                    uVar13 = (ulonglong)bVar8;
                  }
                  uVar16 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_1441a16b1;
                    lVar2 = uVar13 + 1 + uVar16;
                    uVar16 = uVar16 - 1;
                  } while (lVar2 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar10 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar9 = (int)param_1[0x28];
            }
          }
LAB_1441a16b1:
          iVar6 = (int)(uVar7 >> 2);
          iVar4 = -0x20;
          if ((int)uVar17 <= iVar6) {
            iVar4 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x144) = iVar4;
        FUN_1446efbd8(plVar14,iVar9);
        iVar9 = (int)param_1[0x28] + iVar15;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 0x28) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[0x27];
        if ((longlong *)param_1[0x27] == (longlong *)0x0) {
          plVar12 = plVar14;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
LAB_1441a1573:
    FUN_1447c6044(plVar14,iVar3,iVar15,0);
  }
  if ((longlong *)param_1[0x27] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[0x27];
  }
  bVar8 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar14 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  (**(code **)(*param_1 + 0x50))(param_1);
  local_48 = 2;
  local_3c = 0xffffffff;
  local_44 = 0;
  FUN_1488ebe76(param_1,&DAT_14cbcdd50);
LAB_1441a1501:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a1790 FUN_1441a1790 body=316 status=ok
// SIG undefined FUN_1441a1790(void)

void FUN_1441a1790(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x125) != '\x01') goto LAB_1441a17b1;
  lVar4 = FUN_1488eca3a();
  if ((lVar4 == 0) || (*(char *)(param_1 + 0x126) != '\0')) goto LAB_1441a17b1;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
  if (iVar1 == 0) {
LAB_1441a18c6:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != iVar1 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1441a18c6;
      uVar5 = *puVar6;
    }
  }
  lVar4 = FUN_14040226a(uVar5,0);
  if (((lVar4 != 0) && (plVar3 = *(longlong **)(lVar4 + 0x140), plVar3 != (longlong *)0x0)) &&
     ((longlong)*(int *)(param_1 + 0x110) != 0)) {
    lVar7 = (longlong)*(int *)(param_1 + 0x110) << 5;
    lVar4 = *(longlong *)(param_1 + 0x108) + 0x10;
    do {
      (**(code **)(*plVar3 + 0x78))(plVar3,lVar4);
      lVar4 = lVar4 + 0x20;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  local_38 = 1;
  local_2c = 1;
  local_34 = DAT_14cb7c588;
  FUN_1488ebe76(param_1,&DAT_14cbcd3e8);
  *(undefined1 *)(param_1 + 0x126) = 1;
LAB_1441a17b1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a18ce FUN_1441a18ce body=1420 status=ok
// SIG undefined FUN_1441a18ce(void)

void FUN_1441a18ce(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x125) != '\0') || (lVar9 = FUN_1488eca3a(), lVar9 == 0))
  goto LAB_1441a1906;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
  if (iVar8 == 0) {
LAB_1441a1e37:
    uVar14 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110);
    uVar14 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != iVar8 || ((*(uint *)(puVar15 + 1) & 0x10200000) != 0))))
      goto LAB_1441a1e37;
      uVar14 = *puVar15;
    }
  }
  lVar9 = FUN_14040226a(uVar14,0);
  if ((lVar9 != 0) && (plVar10 = (longlong *)FUN_1401499e8(lVar9), plVar10 != (longlong *)0x0)) {
    lVar9 = FUN_148d7ab5a(param_1);
    iVar8 = *(int *)(param_1 + 0x100);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    local_b8 = param_1 + 0x108;
    if (*(int *)(param_1 + 0x114) < iVar8) {
      FUN_148d83076(local_b8);
      iVar8 = *(int *)(param_1 + 0x100);
    }
    if (0 < iVar8) {
      lVar17 = 0;
      lVar16 = 0;
      local_a8 = lVar9;
      do {
        local_b0 = *(longlong *)(param_1 + 0xf8);
        lVar9 = *(longlong *)(param_1 + 0x18);
        local_80 = (undefined8 *)0x0;
        local_78 = 0;
        FUN_1446efa72(&local_80,0,3,0x10);
        puVar15 = local_80;
        local_78 = 3;
        *local_80 = &PTR_LAB_14b3fc100;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_80[2] = lVar11;
        *local_80 = &PTR_FUN_14b97c720;
        local_80[3] = 0;
        if (lVar9 == 0) {
          iVar8 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar9 + 0xc);
          *(uint *)(local_80 + 3) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar8 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar18 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar18);
            }
            LOCK();
            iVar8 = *(int *)(lVar9 + 0x10);
            bVar20 = iVar8 == 0;
            if (bVar20) {
              *(int *)(lVar9 + 0x10) = iVar18;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar8 = iVar18;
            }
          }
        }
        *(int *)((longlong)puVar15 + 0x1c) = iVar8;
        puVar15[4] = param_1;
        *(int *)(puVar15 + 5) = (int)lVar16;
        local_a0 = local_b0 + lVar17 + 0x28;
        (**(code **)(*plVar10 + 0x70))(plVar10,&local_88,local_a0,&local_80);
        puVar12 = (undefined4 *)FUN_148d7ac0e(local_b8);
        lVar9 = local_a8;
        *puVar12 = (int)lVar16;
        *(undefined8 *)(puVar12 + 2) = local_88;
        if (*(char *)(local_a8 + 0x28) == '\0') {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined4 *)(local_a8 + 0x24);
        }
        plVar13 = (longlong *)FUN_14001cc68(0x88,0x10);
        plVar13[1] = (longlong)&DAT_100000001;
        *plVar13 = (longlong)&PTR_FUN_14b97c790;
        uVar14 = *(undefined8 *)(lVar9 + 0x1c);
        uVar2 = *(undefined1 *)(lVar9 + 0x18);
        plVar13[3] = 0;
        plVar13[4] = 0;
        lVar9 = DAT_14cb7ccc0 + 1;
        plVar13[5] = DAT_14cb7ccc0;
        DAT_14cb7ccc0 = lVar9;
        plVar13[6] = 0;
        plVar13[7] = 0;
        *(undefined4 *)(plVar13 + 8) = 2;
        *(undefined8 *)((longlong)plVar13 + 0x44) = 0;
        *(undefined8 *)((longlong)plVar13 + 0x4c) = 0;
        plVar13[10] = 0;
        plVar13[0xb] = 0;
        uVar6 = DAT_14c8464e8._4_4_;
        uVar5 = (undefined4)DAT_14c8464e8;
        uVar4 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(plVar13 + 0xc) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)((longlong)plVar13 + 100) = uVar4;
        *(undefined4 *)(plVar13 + 0xd) = uVar5;
        *(undefined4 *)((longlong)plVar13 + 0x6c) = uVar6;
        plVar13[0xe] = DAT_14c8464f0;
        plVar13[2] = (longlong)&PTR_FUN_14b3fe6b0;
        *(undefined1 *)(plVar13 + 0xf) = uVar2;
        *(undefined8 *)((longlong)plVar13 + 0x7c) = uVar14;
        *(undefined4 *)((longlong)plVar13 + 0x84) = uVar21;
        local_98 = plVar13 + 2;
        local_90 = plVar13;
        FUN_148d8319a(&local_98);
        if (plVar13 == (longlong *)0x0) {
          *(undefined8 *)(puVar12 + 4) = 0x10;
          plVar19 = *(longlong **)(puVar12 + 6);
          if (plVar19 != (longlong *)0x0) {
            *(undefined8 *)(puVar12 + 6) = 0;
LAB_1441a1c5f:
            LOCK();
            plVar13 = plVar19 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar8 = *piVar1;
              UNLOCK();
joined_r0x0001441a1c46:
              if (iVar8 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          *(longlong **)(puVar12 + 4) = plVar13 + 2;
          plVar19 = *(longlong **)(puVar12 + 6);
          if (plVar13 == plVar19) {
            LOCK();
            plVar19 = plVar13 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar8 = *piVar1;
              UNLOCK();
              plVar19 = plVar13;
              goto joined_r0x0001441a1c46;
            }
          }
          else {
            *(longlong **)(puVar12 + 6) = plVar13;
            if (plVar19 != (longlong *)0x0) goto LAB_1441a1c5f;
          }
        }
        plVar13 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_90 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
        if ((iVar8 == 0) ||
           (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110), (int)uVar3 < 0)) {
LAB_1441a1db1:
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != iVar8)) ||
               ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_1441a1db1;
            lVar9 = *plVar13;
          }
        }
        if (*(longlong *)(lVar9 + 0x30) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x360);
        }
        lVar9 = FUN_14883d4c2(local_a0,uVar14);
        if (lVar9 == 0) {
          FUN_141059214(*(undefined8 *)(puVar12 + 4));
        }
        else {
          FUN_14106c8ae(*(undefined8 *)(puVar12 + 4),lVar9,DAT_14cbcd400);
        }
        if (local_78 == 0) {
LAB_1441a1d84:
          if (local_80 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_80 != (undefined8 *)0x0) {
          (**(code **)*local_80)();
          FUN_1446efa72(&local_80,0,0,0x10);
          local_78 = 0;
          goto LAB_1441a1d84;
        }
        lVar16 = lVar16 + 1;
        lVar17 = lVar17 + 0x60;
      } while (lVar16 < *(int *)(param_1 + 0x100));
    }
    *(undefined1 *)(param_1 + 0x125) = 1;
  }
LAB_1441a1906:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a1e5c FUN_1441a1e5c body=136 status=ok
// SIG undefined FUN_1441a1e5c(void)

undefined4 FUN_1441a1e5c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1488eca3a();
  if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x5e8))(plVar2), lVar3 != 0)) {
    lVar4 = FUN_140082f10();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar1 = (uint)*(short *)(lVar3 + 0x538);
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x140))) {
        lVar4 = param_1 + 0x128;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x138);
        }
        return CONCAT31((int3)(char)((ushort)*(short *)(lVar3 + 0x538) >> 8),
                        (*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)
        ;
      }
    }
  }
  return 0;
}



// FUNCTION 1441a1ee4 FUN_1441a1ee4 body=633 status=ok
// SIG undefined FUN_1441a1ee4(void)

undefined8 * FUN_1441a1ee4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x18) != 0) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    piVar6 = (int *)*param_3;
    lVar10 = (longlong)*(int *)(param_3 + 1) * 0x48;
    do {
      if ((*piVar6 == *(int *)(param_1 + 0x18)) && (piVar6[2] == *(int *)(param_1 + 0x20))) {
        if (piVar6 != (int *)0x0) {
          FUN_1411a0e4c(piVar6 + 4,&local_70);
          local_58 = local_70;
          FUN_1446dcdd4(local_50);
          plVar3 = (longlong *)FUN_1400d6974(local_50);
          if (plVar3 == (longlong *)0x0) goto LAB_1441a2098;
          lVar10 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar4 = FUN_1401548e0();
          if ((((lVar4 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar4 + 0x38))) ||
              (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
               lVar4 + 0x30)) ||
             (lVar10 = FUN_1406d51c0(), *(int *)(lVar10 + 0x248) == *(int *)(lVar10 + 0x274)))
          goto LAB_1441a2098;
          lVar4 = plVar3[0x1eb];
          uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar9 = (uint)lVar4 & 0xffff;
          lVar8 = lVar10 + 0x278;
          if (*(longlong *)(lVar10 + 0x280) != 0) {
            lVar8 = *(longlong *)(lVar10 + 0x280);
          }
          iVar7 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar10 + 0x288) - 1U &
                                   (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar7 == -1) goto LAB_1441a2098;
          goto LAB_1441a2042;
        }
        break;
      }
      piVar6 = piVar6 + 0x12;
      lVar10 = lVar10 + -0x48;
    } while (lVar10 != 0);
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  while (iVar7 = *(int *)(lVar8 + 0x68), iVar7 != -1) {
LAB_1441a2042:
    lVar8 = *(longlong *)(lVar10 + 0x240) + (longlong)iVar7 * 0x70;
    if (*(longlong *)(*(longlong *)(lVar10 + 0x240) + (longlong)iVar7 * 0x70) == lVar4) {
      if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
        *(undefined2 *)(param_2 + 5) = 0;
        *(undefined1 *)(param_2 + 6) = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
        *param_2 = *(undefined8 *)(param_1 + 8);
        puVar1 = param_2 + 2;
        if ((DAT_14c9a85d0 != (code *)0x0) &&
           ((*DAT_14c9a85d0)(puVar1), 0x18 < *(ushort *)(param_2 + 5))) {
          FUN_1400020a8(*puVar1);
        }
        local_70 = *(undefined8 *)(lVar8 + 8);
        uVar5 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x10));
        local_68 = FUN_14477b664(uVar5);
        local_60 = *(undefined8 *)(lVar8 + 0x18);
        *(undefined2 *)(param_2 + 5) = 0x18;
        FUN_14593ec7a(puVar1,&local_70);
        *(undefined1 *)(param_2 + 6) = 0x1d;
        goto LAB_1441a20b7;
      }
      break;
    }
  }
LAB_1441a2098:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
LAB_1441a20b7:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a2160 FUN_1441a2160 body=1230 status=ok
// SIG undefined FUN_1441a2160(void)

undefined8 * FUN_1441a2160(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x18) != 0) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    piVar8 = (int *)*param_3;
    lVar12 = (longlong)*(int *)(param_3 + 1) * 0x48;
    do {
      if ((*piVar8 == *(int *)(param_1 + 0x18)) && (piVar8[2] == *(int *)(param_1 + 0x20))) {
        if (piVar8 != (int *)0x0) {
          FUN_1411a0e4c(piVar8 + 4,&local_80);
          local_98 = local_80;
          FUN_1446dcdd4(local_68);
          plVar5 = (longlong *)FUN_1400d6974(local_68);
          if (plVar5 == (longlong *)0x0) goto LAB_1441a2559;
          lVar12 = (**(code **)(*plVar5 + 8))(plVar5);
          lVar6 = FUN_1401548e0();
          if ((((lVar6 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar6 + 0x38))) ||
              (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
               lVar6 + 0x30)) ||
             (lVar12 = FUN_1406d51c0(), *(int *)(lVar12 + 0x248) == *(int *)(lVar12 + 0x274)))
          goto LAB_1441a2559;
          lVar6 = plVar5[0x1eb];
          uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
          uVar11 = (uint)lVar6 & 0xffff;
          lVar10 = lVar12 + 0x278;
          if (*(longlong *)(lVar12 + 0x280) != 0) {
            lVar10 = *(longlong *)(lVar12 + 0x280);
          }
          iVar9 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)(lVar12 + 0x288) - 1U &
                                    (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11)
                                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
          if (iVar9 == -1) goto LAB_1441a2559;
          goto LAB_1441a22ce;
        }
        break;
      }
      piVar8 = piVar8 + 0x12;
      lVar12 = lVar12 + -0x48;
    } while (lVar12 != 0);
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  while (iVar9 = *(int *)(lVar10 + 0x68), iVar9 != -1) {
LAB_1441a22ce:
    lVar10 = *(longlong *)(lVar12 + 0x240) + (longlong)iVar9 * 0x70;
    if (*(longlong *)(*(longlong *)(lVar12 + 0x240) + (longlong)iVar9 * 0x70) == lVar6) {
      if ((lVar10 + 8U & 0xfffffffffffffff7) == 0) break;
      local_98 = 0;
      lStack_90 = 0;
      local_88 = 0;
      if (*(char *)(lVar10 + 0x20) == '\x01') {
        lVar12 = *(longlong *)(lVar10 + 0x30);
        if (lVar12 == 0) {
          uVar7 = FUN_140e1399c();
          lVar12 = FUN_14477b664(uVar7);
          *(longlong *)(lVar10 + 0x30) = lVar12;
        }
        plVar5 = (longlong *)(lVar10 + 0x28);
        lVar6 = *(longlong *)(lVar10 + 0x38);
        if (lVar6 != 0) {
LAB_1441a2375:
          if (lVar12 == 0) {
            uVar7 = FUN_140e1399c(lVar6);
            lVar12 = FUN_14477b664(uVar7);
            *(longlong *)(lVar10 + 0x30) = lVar12;
            lVar6 = *(longlong *)(lVar10 + 0x38);
            if (((lVar6 == 0) && (lVar6 = 0, lVar12 != 0)) && (*plVar5 != 0)) {
              plVar2 = *(longlong **)(lVar12 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
                lVar6 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar6 = FUN_144aff482(uVar7,plVar5);
              }
              *(longlong *)(lVar10 + 0x38) = lVar6;
            }
          }
          FUN_1413d14f4(lVar6,&local_80,param_3[5]);
          if (lStack_90 == 0) {
            uVar7 = FUN_1411201bc();
            FUN_14477b664(uVar7);
          }
          goto LAB_1441a2438;
        }
        lVar6 = 0;
        if (lVar12 == 0) {
LAB_1441a24e7:
          lVar6 = 0;
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          if (*plVar5 != 0) {
            plVar2 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
              *(undefined8 *)(lVar10 + 0x38) = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar7,plVar5);
              *(longlong *)(lVar10 + 0x38) = lVar6;
              if (lVar6 != 0) {
                lVar12 = *(longlong *)(lVar10 + 0x30);
                goto LAB_1441a2375;
              }
            }
            goto LAB_1441a24e7;
          }
        }
LAB_1441a24ea:
        uVar7 = FUN_1411201bc();
        lStack_90 = FUN_14477b664(uVar7);
      }
      else {
        FUN_1413d14f4(lVar10 + 0x40,&local_80,param_3[5]);
        uVar7 = FUN_1411201bc();
        FUN_14477b664(uVar7);
LAB_1441a2438:
        lVar12 = local_78;
        if (local_78 == 0) {
          lVar12 = FUN_14036a63e();
        }
        lVar13 = local_80;
        uVar7 = FUN_14477b664(lVar12);
        lVar6 = local_70;
        local_98 = lVar13;
        uVar7 = FUN_14477b664(uVar7);
        lStack_90 = FUN_14477b664(uVar7);
        local_88 = lVar6;
        if (lStack_90 == 0) {
          lStack_90 = 0;
          goto LAB_1441a24ea;
        }
      }
      if (lVar6 == 0) {
        local_88 = 0;
        if ((((lVar13 == 0) || (lStack_90 == 0)) ||
            (plVar5 = *(longlong **)(lStack_90 + 0xb8), plVar5 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar4 == '\0')) break;
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        local_88 = FUN_144aff482(uVar7,&local_98);
        if (local_88 == 0) break;
      }
      *(undefined2 *)(param_2 + 5) = 0;
      *(undefined1 *)(param_2 + 6) = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
      *param_2 = *(undefined8 *)(param_1 + 8);
      puVar1 = param_2 + 2;
      if ((DAT_14c9a85d0 != (code *)0x0) &&
         ((*DAT_14c9a85d0)(puVar1), 0x18 < *(ushort *)(param_2 + 5))) {
        FUN_1400020a8(*puVar1);
      }
      local_80 = local_98;
      uVar7 = FUN_14477b664(lStack_90);
      local_78 = FUN_14477b664(uVar7);
      local_70 = local_88;
      *(undefined2 *)(param_2 + 5) = 0x18;
      FUN_14580b54c(puVar1,&local_80);
      *(undefined1 *)(param_2 + 6) = 0x1d;
      goto LAB_1441a2578;
    }
  }
LAB_1441a2559:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
LAB_1441a2578:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a2634 FUN_1441a2634 body=578 status=ok
// SIG undefined FUN_1441a2634(void)

undefined8 * FUN_1441a2634(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 0x10) == 0) goto LAB_1441a27a7;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_140e1399c();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) goto LAB_1441a27a7;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x18));
        *(longlong *)(param_1 + 0x28) = lVar6;
        if (lVar6 == 0) goto LAB_1441a27a7;
        goto LAB_1441a2689;
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_1441a27a7:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
LAB_1441a2689:
  FUN_1413d14f4(lVar6,&local_60,*(undefined8 *)(param_3 + 0x28));
  if (local_58 == 0) {
    uVar4 = FUN_14036a63e();
    local_58 = FUN_14477b664(uVar4);
  }
  if (local_50 == 0) {
    if (((local_58 != 0) && (local_60 != 0)) &&
       (plVar2 = *(longlong **)(local_58 + 0xb8), plVar2 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_50 = FUN_144aff482(uVar4,&local_60);
        if (local_50 != 0) goto LAB_1441a27e2;
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  else {
LAB_1441a27e2:
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *param_2 = *(undefined8 *)(param_1 + 8);
    puVar1 = param_2 + 2;
    if (DAT_14c9a85d0 != (code *)0x0) {
      (*DAT_14c9a85d0)(puVar1);
      if (0x18 < *(ushort *)(param_2 + 5)) {
        FUN_1400020a8(*puVar1);
      }
    }
    local_48 = local_60;
    uVar4 = FUN_14477b664(local_58);
    local_40 = FUN_14477b664(uVar4);
    local_38 = local_50;
    *(undefined2 *)(param_2 + 5) = 0x18;
    FUN_14593ec7a(puVar1,&local_48);
    *(undefined1 *)(param_2 + 6) = 0x1d;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a2878 FUN_1441a2878 body=857 status=ok
// SIG undefined FUN_1441a2878(void)

undefined8 * FUN_1441a2878(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(param_1 + 0x18) != 0) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    piVar9 = (int *)*param_3;
    lVar11 = (longlong)*(int *)(param_3 + 1) * 0x48;
    do {
      if ((*piVar9 == *(int *)(param_1 + 0x18)) && (piVar9[2] == *(int *)(param_1 + 0x20))) {
        if (piVar9 != (int *)0x0) {
          FUN_14096c63a(piVar9 + 4,local_70);
          cVar3 = FUN_1401144ce(local_70);
          if (cVar3 == '\0') goto LAB_1441a29b0;
          local_a8 = param_3[2];
          local_a0 = *(undefined4 *)(param_3 + 3);
          FUN_1448075d0(&local_98);
          lVar11 = FUN_14060eaf6(&local_98);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (lVar11 == 0) goto LAB_1441a29b0;
          plVar4 = (longlong *)param_3[5];
          goto LAB_1441a294e;
        }
        break;
      }
      piVar9 = piVar9 + 0x12;
      lVar11 = lVar11 + -0x48;
    } while (lVar11 != 0);
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
LAB_1441a294e:
  if (plVar4 == (longlong *)0x0) {
LAB_1441a29b0:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
LAB_1441a29cf:
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  if (plVar4[5] != 0) {
    lVar11 = *(longlong *)(plVar4[5] + 0x30);
    if ((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x360), lVar11 != 0)) {
      FUN_145fdfd52(local_c0,param_3[5],local_70);
      lVar11 = FUN_145788b2d(lVar11,local_c0);
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined2 *)(param_2 + 5) = 0;
      *(undefined1 *)(param_2 + 6) = 0;
      if (lVar11 == 0) {
        param_2[7] = 0;
        param_2[8] = 0;
      }
      else {
        param_2[7] = 0;
        param_2[8] = 0;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
        *param_2 = *(undefined8 *)(param_1 + 8);
        local_d0 = 0;
        lStack_c8 = 0;
        uVar5 = FUN_141030812();
        lVar6 = FUN_14477b664(uVar5);
        lVar7 = FUN_141030812();
        uVar5 = FUN_141030812();
        FUN_1402d1bfa(&local_98,uVar5,lVar11);
        if (local_98 != 0) {
          lStack_c8 = 0;
        }
        local_d8 = local_98;
        lVar8 = FUN_141030812();
        if (lVar7 == 0) {
LAB_1441a2af7:
          lVar8 = lVar7;
        }
        else if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                 == lVar8 + 0x30)) goto LAB_1441a2af7;
        if (lVar6 != lVar8) {
          lStack_c8 = 0;
        }
        uVar5 = FUN_14477b664(lVar8);
        lVar7 = FUN_14477b664(uVar5);
        lVar6 = lVar11;
        if (lVar7 == 0 || local_98 == 0) {
          lVar11 = 0;
          lVar6 = lStack_c8;
        }
        lStack_c8 = lVar6;
        puVar1 = param_2 + 2;
        local_d0 = lVar7;
        if (*(byte *)(param_2 + 6) == 0x1d) {
          FUN_14863e21c(puVar1,&local_d8);
        }
        else {
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)*(byte *)(param_2 + 6) * 0x120));
          if (pcVar2 != (code *)0x0) {
            puVar10 = puVar1;
            if (0x18 < *(ushort *)(param_2 + 5)) {
              puVar10 = (undefined8 *)param_2[2];
            }
            (*pcVar2)(puVar10);
          }
          if (0x18 < *(ushort *)(param_2 + 5)) {
            FUN_1400020a8(*puVar1);
          }
          uVar5 = FUN_14477b664(lVar7);
          local_90 = FUN_14477b664(uVar5);
          *(undefined2 *)(param_2 + 5) = 0x18;
          local_88 = lVar11;
          FUN_1464dd002(puVar1,&local_98);
          *(undefined1 *)(param_2 + 6) = 0x1d;
        }
      }
      goto LAB_1441a29cf;
    }
    goto LAB_1441a29b0;
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))(plVar4);
  goto LAB_1441a294e;
}



// FUNCTION 1441a2bd4 FUN_1441a2bd4 body=866 status=ok
// SIG undefined FUN_1441a2bd4(void)

undefined8 * FUN_1441a2bd4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined1 local_90 [24];
  longlong local_78;
  undefined1 local_68 [40];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0x18) != 0) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    piVar7 = (int *)*param_3;
    lVar9 = (longlong)*(int *)(param_3 + 1) * 0x48;
    do {
      if ((*piVar7 == *(int *)(param_1 + 0x18)) && (piVar7[2] == *(int *)(param_1 + 0x20))) {
        if (piVar7 != (int *)0x0) {
          FUN_14096c63a(piVar7 + 4,local_68);
          cVar2 = FUN_1401144ce(local_68);
          if (cVar2 == '\0') goto LAB_1441a2d03;
          local_a8 = param_3[2];
          local_a0 = *(undefined4 *)(param_3 + 3);
          FUN_1448075d0(local_90);
          lVar9 = FUN_14060eaf6(local_90);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (lVar9 == 0) goto LAB_1441a2d03;
          plVar3 = (longlong *)param_3[5];
          goto LAB_1441a2ca1;
        }
        break;
      }
      piVar7 = piVar7 + 0x12;
      lVar9 = lVar9 + -0x48;
    } while (lVar9 != 0);
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
LAB_1441a2ca1:
  if (plVar3 == (longlong *)0x0) {
LAB_1441a2d03:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
LAB_1441a2d22:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  if (plVar3[5] != 0) {
    lVar9 = *(longlong *)(plVar3[5] + 0x30);
    if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x360), lVar9 == 0)) goto LAB_1441a2d03;
    FUN_145fdfd52(local_90,param_3[5],local_68);
    lVar9 = FUN_145788b2d(lVar9,local_90);
    if (lVar9 == 0) goto LAB_1441a2d03;
    lVar4 = *(longlong *)(lVar9 + 0x40);
    if (lVar4 == 0) {
      lVar4 = FUN_140e045c8(*(undefined8 *)(lVar9 + 0x30));
      *(longlong *)(lVar9 + 0x40) = lVar4;
      if (lVar4 == 0) goto LAB_1441a2d03;
    }
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    *param_2 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    uVar5 = FUN_1405e2e10();
    FUN_14477b664(uVar5);
    lVar6 = FUN_1405e2e10();
    uVar5 = FUN_1405e2e10();
    FUN_1402d1bfa(&local_98,uVar5,lVar4);
    lVar9 = FUN_1405e2e10();
    if (lVar6 == 0) {
LAB_1441a2e36:
      lVar9 = lVar6;
    }
    else if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)) goto LAB_1441a2e36;
    uVar5 = FUN_14477b664(lVar9);
    lVar9 = FUN_14477b664(uVar5);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    if (local_98 == 0) {
      lVar4 = 0;
    }
    plVar3 = param_2 + 2;
    if (*(byte *)(param_2 + 6) == 0x1d) {
      if (*plVar3 != local_98) {
        param_2[4] = 0;
      }
      param_2[2] = local_98;
      if (param_2[3] != lVar9) {
        param_2[4] = 0;
      }
      uVar5 = FUN_14477b664(lVar9);
      uVar5 = FUN_14477b664(uVar5);
      param_2[3] = uVar5;
      param_2[4] = lVar4;
    }
    else {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_2 + 6) * 0x120));
      if (pcVar1 != (code *)0x0) {
        plVar8 = plVar3;
        if (0x18 < *(ushort *)(param_2 + 5)) {
          plVar8 = (longlong *)param_2[2];
        }
        (*pcVar1)(plVar8);
      }
      if (0x18 < *(ushort *)(param_2 + 5)) {
        FUN_1400020a8(*plVar3);
      }
      uVar5 = FUN_14477b664(lVar9);
      uVar5 = FUN_14477b664(uVar5);
      *(undefined2 *)(param_2 + 5) = 0x18;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[2] = local_98;
      uVar5 = FUN_14477b664(uVar5);
      uVar5 = FUN_14477b664(uVar5);
      param_2[3] = uVar5;
      param_2[4] = lVar4;
      *(undefined1 *)(param_2 + 6) = 0x1d;
    }
    goto LAB_1441a2d22;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
  goto LAB_1441a2ca1;
}



// FUNCTION 1441a2f7e FUN_1441a2f7e body=447 status=ok
// SIG undefined FUN_1441a2f7e(void)

void FUN_1441a2f7e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 == 0) goto LAB_1441a2fa1;
  uVar3 = FUN_1465c3a70();
  cVar2 = FUN_1448093f4(lVar5,uVar3);
  if (cVar2 == '\0') goto LAB_1441a2fa1;
  lVar1 = param_1 + 0x80;
  *(undefined1 *)(param_1 + 0x80) = 0xb;
  FUN_140c25b54(lVar1);
  local_38 = *(undefined4 *)(lVar5 + 0x10);
  local_40 = *(undefined8 *)(lVar5 + 8);
  FUN_144928d62(param_1 + 0x90,0);
  uVar3 = FUN_140db9074(param_1);
  FUN_140e29818(param_1,&local_58);
  FUN_140d84843(lVar1,&local_58,&DAT_14c948618,uVar3);
  if (*(char *)(param_1 + 0x80) == '\v') goto LAB_1441a2fa1;
  cVar2 = FUN_1401144ce(lVar1);
  if (cVar2 == '\0') goto LAB_1441a2fa1;
  uVar3 = FUN_140ec3c88(param_1);
  plVar4 = (longlong *)FUN_140ec3c65(uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_1441a2fa1;
  FUN_148d7bb3a(&local_58,param_1);
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_48,lVar1,&local_58);
  *(undefined8 *)(param_1 + 0xb8) = local_48;
  if (local_50 == 0) {
LAB_1441a30e4:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1441a30e4;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar1);
    if (lVar5 != 0) {
      local_68 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        local_68 = lVar5;
      }
      local_60 = *(undefined4 *)(lVar5 + 0x18);
      FUN_148d7bcfe(param_1);
    }
  }
LAB_1441a2fa1:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a313e FUN_1441a313e body=1081 status=ok
// SIG undefined FUN_1441a313e(void)

undefined8 * FUN_1441a313e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_140ec3d82(*(undefined8 *)(*param_3 + 8));
  if (lVar6 == 0) goto LAB_1441a349c;
  lVar7 = FUN_1406f612e(lVar6);
  if (*(longlong *)(lVar6 + 0x178) == 0) {
LAB_1441a31d8:
    lVar13 = 0;
  }
  else {
    lVar8 = FUN_14041aabe();
    lVar10 = *(longlong *)(lVar6 + 0x178);
    if (lVar10 == 0) goto LAB_1441a31d8;
    lVar13 = 0;
    if ((lVar8 != 0) && (lVar4 = *(longlong *)(lVar10 + 0x10), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < *(int *)(lVar8 + 0x38)) goto LAB_1441a31d8;
      lVar13 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30) {
        lVar13 = lVar10;
      }
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 == 0) {
    uVar9 = FUN_14054e994();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x28) = lVar10;
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (lVar8 == 0) {
    if ((lVar10 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_1441a349c;
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar5 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar8 = FUN_144aff482(uVar9,(longlong *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x30) = lVar8;
  }
  if ((((lVar7 == 0) || (lVar13 == 0)) || (lVar8 == 0)) ||
     (plVar11 = (longlong *)FUN_14148eec0(lVar7), plVar11 == (longlong *)0x0)) goto LAB_1441a349c;
  cVar5 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  if (cVar5 == '\0') {
    if (0 < *(int *)(lVar6 + 0x238)) {
      lVar10 = 0;
      do {
        uVar1 = *(undefined4 *)(param_1 + 0x38);
        iVar2 = *(int *)(*(longlong *)(lVar6 + 0x230) + 4 + lVar10 * 8);
        if (((((iVar2 == 0) ||
              (uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x230) + lVar10 * 8), (int)uVar3 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar3 ||
              ((plVar12 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar12 == (longlong *)0x0 || ((int)plVar12[2] != iVar2)))))) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar12, lVar8 == 0)) {
LAB_1441a33cf:
          lVar8 = 0;
        }
        else {
          if (DAT_14cbadd90 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1459f2e4c;
            local_70 = &local_50;
            local_78 = &LAB_148c39de3;
            local_80 = &LAB_1457a9eb2;
            local_88 = &DAT_149e063b2;
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
          goto LAB_1441a33cf;
        }
        local_a8 = local_a8 & 0xffffff00;
        FUN_140d18af6(lVar7,lVar8,plVar11,uVar1);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar6 + 0x238));
    }
    goto LAB_1441a349c;
  }
  if ((((*(char *)(param_1 + 0x3c) != '\x01') || (lVar6 = *plVar11, lVar6 == 0)) ||
      (*(byte *)(lVar6 + 0x4a0) == 0)) ||
     ((*(longlong *)
        (*(longlong *)(lVar6 + 0x498) + -0x50 + (ulonglong)((uint)*(byte *)(lVar6 + 0x4a0) * 0x50))
       != 1 || (*(longlong *)(lVar13 + 0x488) == 0)))) goto LAB_1441a349c;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  lVar6 = FUN_1401b2ade();
  if (lVar6 == 0) {
LAB_1441a3324:
    lVar6 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1441a3324;
  }
  local_a8 = CONCAT31(local_a8._1_3_,1);
  FUN_140d18af6(lVar7,lVar6,plVar11,uVar1);
LAB_1441a349c:
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a3578 FUN_1441a3578 body=641 status=ok
// SIG undefined FUN_1441a3578(void)

undefined8 * FUN_1441a3578(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  if ((cVar3 == '\0') && (lVar7 = FUN_140ec3d82(*(undefined8 *)(*param_3 + 8)), lVar7 != 0)) {
    iVar5 = FUN_144120955(lVar7);
    iVar6 = FUN_144120a40(lVar7);
    bVar4 = *(byte *)(param_1 + 0x24);
    iVar9 = iVar6;
    if (bVar4 != 0) {
      iVar9 = iVar5;
    }
    iVar9 = iVar9 + *(int *)(param_1 + 0x20);
    iVar12 = 0x14;
    if (iVar9 < 0x14) {
      iVar12 = iVar9;
    }
    if (0 < *(int *)(lVar7 + 0x238)) {
      lVar11 = 0;
      do {
        iVar9 = *(int *)(*(longlong *)(lVar7 + 0x230) + 4 + lVar11 * 8);
        if (((((iVar9 != 0) &&
              (uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x230) + lVar11 * 8), -1 < (int)uVar1)) &&
             ((int)uVar1 < DAT_14c9647dc)) &&
            ((plVar10 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar9)))) &&
           (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
            ((lVar2 = *plVar10, lVar2 != 0 && (lVar8 = *(longlong *)(lVar2 + 0x398), lVar8 != 0)))))
           ) {
          if (DAT_14cbae3d8 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1464f5fc4;
            local_70 = &local_50;
            local_78 = &LAB_148c3dd26;
            local_80 = &LAB_1459673ba;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            lVar8 = *(longlong *)(lVar2 + 0x398);
            if (lVar8 == 0) goto LAB_1441a36d8;
          }
          if ((((DAT_14cbae3d8 != 0) && (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 != 0)) &&
              (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
             (((*(longlong *)
                 (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                DAT_14cbae3d8 + 0x30 && (*(char *)(lVar8 + 0x178) == '\x03')) &&
              (*(int *)(lVar8 + 0xdcc) < iVar12)))) {
            *(int *)(lVar8 + 0xdcc) = iVar12;
          }
        }
LAB_1441a36d8:
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(lVar7 + 0x238));
      bVar4 = *(byte *)(param_1 + 0x24);
    }
    if (((bVar4 & 1) != 0) || (iVar5 <= iVar6 + *(int *)(param_1 + 0x20))) {
      FUN_144120643(iVar12,lVar7);
      FUN_1441206f8(iVar12,lVar7);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a37fa FUN_1441a37fa body=32 status=ok
// SIG undefined FUN_1441a37fa(void)

undefined8 FUN_1441a37fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"IncrementMayhemLevel");
  return param_2;
}



// FUNCTION 1441a381a FUN_1441a381a body=1649 status=ok
// SIG undefined FUN_1441a381a(void)

void FUN_1441a381a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  int local_80;
  longlong *local_78;
  undefined4 local_60 [2];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar10 = FUN_14402c56a();
    if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30)) {
      local_88 = (longlong *)((ulonglong)local_88 & 0xffffffffffffff00);
      local_60[0] = 0;
      FUN_14575a19a(&local_88,0);
      FUN_1447c3578(plVar3 + 1,local_58,&local_88);
      uVar8 = FUN_1405d5f74(local_58);
      *(undefined4 *)(param_1 + 0x50) = uVar8;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar11 = local_58;
        if (0x18 < local_40) {
          ppppuVar11 = (undefined8 ****)local_58[0];
        }
        (*pcVar4)(ppppuVar11);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      FUN_1448173f8(local_60);
      if (((char)local_88 == '\x03') && (local_78 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
  }
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1441a3979:
    *local_88 = (longlong)&PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_88[2] = lVar10;
    *local_88 = (longlong)&PTR_FUN_14b97d0e0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = (longlong)FUN_1441a3e8c;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_1441a3979;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar15 = iVar12 == iVar6;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar6 = iVar12;
      }
      iVar12 = iVar6;
      UNLOCK();
    } while (!bVar15);
    lVar9 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_88 = (longlong)&PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_88[2] = lVar13;
    *local_88 = (longlong)&PTR_FUN_14b97d0e0;
    local_88[3] = lVar9;
    local_88[4] = (longlong)plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_88[5] = (longlong)FUN_1441a3e8c;
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
  if (((local_80 == 0) || (local_88 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*local_88 + 0x30))(), uVar5 = DAT_14cbd0b80, cVar7 == '\0')) {
    if (local_80 == 0) goto LAB_1441a3af7;
    if (local_88 != (longlong *)0x0) {
      (**(code **)*local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      goto LAB_1441a3aea;
    }
  }
  else {
    if ((DAT_14cbd0b8c < 1) &&
       (DAT_14cbd0b88 = DAT_14cbd0b88 + -1, DAT_14cbd0b88 <= (int)DAT_14cbd0b80)) {
      if (0 < (int)DAT_14cbd0b80) {
        iVar12 = 0;
        do {
          if (((*(int *)(DAT_14cbd0b78 + 8 + (longlong)iVar12 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(DAT_14cbd0b78 + (longlong)iVar12 * 0x10),
              plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x28))(), cVar7 != '\0')) {
            FUN_14005b288(&DAT_14cbd0b78,iVar12);
            FUN_14005b248(&DAT_14cbd0b78);
          }
          else {
            iVar12 = iVar12 + 1;
          }
        } while (iVar12 < (int)DAT_14cbd0b80);
      }
      DAT_14cbd0b88 = 2;
      if (2 < (int)(DAT_14cbd0b80 * 2)) {
        DAT_14cbd0b88 = DAT_14cbd0b80 * 2;
      }
      if ((DAT_14cbd0b88 < (int)uVar5) && (DAT_14cbd0b84 != DAT_14cbd0b80)) {
        FUN_14045812c();
      }
    }
    if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x38))(local_88,local_58);
    }
    uVar5 = DAT_14cbd0b80;
    lVar9 = (longlong)(int)DAT_14cbd0b80;
    DAT_14cbd0b80 = DAT_14cbd0b80 + 1;
    if (DAT_14cbd0b84 < DAT_14cbd0b80) {
      FUN_1447a71f6(&DAT_14cbd0b78,uVar5);
    }
    lVar10 = DAT_14cbd0b78;
    lVar9 = lVar9 * 0x10;
    *(undefined8 *)(DAT_14cbd0b78 + lVar9) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar9) = 0;
    *(longlong **)(lVar10 + lVar9) = local_88;
    local_88 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar9) = local_80;
LAB_1441a3aea:
    local_80 = 0;
LAB_1441a3af7:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar9 = FUN_1406f63d6(param_1);
  if (lVar9 == 0) goto LAB_1441a3cdd;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1441a3c2e:
    *local_88 = (longlong)&PTR_LAB_14b982140;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_88[2] = lVar13;
    *local_88 = (longlong)&PTR_FUN_14b97d150;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = (longlong)FUN_1441a3f1e;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_1441a3c2e;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar15 = iVar12 == iVar6;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar6 = iVar12;
      }
      iVar12 = iVar6;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_88 = (longlong)&PTR_LAB_14b982140;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_88[2] = lVar14;
    *local_88 = (longlong)&PTR_FUN_14b97d150;
    local_88[3] = lVar10;
    local_88[4] = (longlong)plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_88[5] = (longlong)FUN_1441a3f1e;
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
  FUN_1406f5a84(lVar9 + 0x800,local_58,&local_88);
  if (local_80 == 0) {
LAB_1441a3cc0:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (longlong *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_1441a3cc0;
  }
  FUN_1441a3f1e(param_1,*(undefined8 *)(lVar9 + 0x178));
LAB_1441a3cdd:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


