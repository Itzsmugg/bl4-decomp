// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14951be7e FUN_14951be7e body=24 status=ok
// SIG undefined FUN_14951be7e(void)

bool FUN_14951be7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951be96 FUN_14951be96 body=93 status=ok
// SIG undefined FUN_14951be96(void)

void FUN_14951be96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951bef4 FUN_14951bef4 body=93 status=ok
// SIG undefined FUN_14951bef4(void)

void FUN_14951bef4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951bf52 FUN_14951bf52 body=126 status=ok
// SIG undefined FUN_14951bf52(void)

void FUN_14951bf52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd35410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951bfc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951bfd0 FUN_14951bfd0 body=94 status=ok
// SIG undefined FUN_14951bfd0(void)

void FUN_14951bfd0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  (**(code **)(param_1 + 0x20))(uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951c030 FUN_14951c030 body=171 status=ok
// SIG undefined FUN_14951c030(void)

bool FUN_14951c030(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = CONCAT44(uStack_44,local_48);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951c0dc FUN_14951c0dc body=29 status=ok
// SIG undefined FUN_14951c0dc(void)

undefined8 FUN_14951c0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951c114 FUN_14951c114 body=29 status=ok
// SIG undefined FUN_14951c114(void)

bool FUN_14951c114(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951c132 FUN_14951c132 body=26 status=ok
// SIG undefined FUN_14951c132(void)

bool FUN_14951c132(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14951c14c FUN_14951c14c body=24 status=ok
// SIG undefined FUN_14951c14c(void)

bool FUN_14951c14c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951c170 FUN_14951c170 body=93 status=ok
// SIG undefined FUN_14951c170(void)

void FUN_14951c170(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd356f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951c1ce FUN_14951c1ce body=93 status=ok
// SIG undefined FUN_14951c1ce(void)

void FUN_14951c1ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd356f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951c22c FUN_14951c22c body=126 status=ok
// SIG undefined FUN_14951c22c(void)

void FUN_14951c22c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd356f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35680;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951c29b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951c2aa FUN_14951c2aa body=40 status=ok
// SIG undefined FUN_14951c2aa(void)

void FUN_14951c2aa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014951c2cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14951c2d2 FUN_14951c2d2 body=152 status=ok
// SIG undefined FUN_14951c2d2(void)

bool FUN_14951c2d2(longlong param_1,undefined8 param_2)

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



// FUNCTION 14951c36e FUN_14951c36e body=132 status=ok
// SIG undefined FUN_14951c36e(void)

void FUN_14951c36e(longlong param_1,int param_2)

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



// FUNCTION 14951c3f4 FUN_14951c3f4 body=305 status=ok
// SIG undefined FUN_14951c3f4(void)

void FUN_14951c3f4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_149505928(lVar2,*param_2);
    iVar9 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar12 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar5 * 0x20;
      lVar13 = lVar2 + 0x20 + lVar11;
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar12;
        if (lVar10 <= lVar5) break;
        bVar4 = FUN_149505928(lVar13,*param_2);
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x20;
        iVar8 = iVar7;
      } while ((bVar3 & 1) == bVar4);
      iVar12 = iVar8 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar6) {
          memmove((void *)((longlong)iVar9 * 0x20 + lVar2),(void *)(lVar11 + lVar2),
                  (longlong)iVar12 << 5);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_145d1947b(lVar11 + lVar2,iVar12);
      }
      iVar6 = iVar8;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14951c526 FUN_14951c526 body=48 status=ok
// SIG undefined FUN_14951c526(void)

void FUN_14951c526(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14951c556 FUN_14951c556 body=80 status=ok
// SIG undefined FUN_14951c556(void)

void FUN_14951c556(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014951c59b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14951c5a6 FUN_14951c5a6 body=132 status=ok
// SIG undefined FUN_14951c5a6(void)

void FUN_14951c5a6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951c62e FUN_14951c62e body=29 status=ok
// SIG undefined FUN_14951c62e(void)

undefined8 FUN_14951c62e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951c64c FUN_14951c64c body=161 status=ok
// SIG undefined FUN_14951c64c(void)

void FUN_14951c64c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14673cf9c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951c6ee FUN_14951c6ee body=48 status=ok
// SIG undefined FUN_14951c6ee(void)

void FUN_14951c6ee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14951c71e FUN_14951c71e body=88 status=ok
// SIG undefined FUN_14951c71e(void)

void FUN_14951c71e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14951c776 FUN_14951c776 body=40 status=ok
// SIG undefined FUN_14951c776(void)

void FUN_14951c776(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14951c79e FUN_14951c79e body=253 status=ok
// SIG undefined FUN_14951c79e(void)

undefined8 *
FUN_14951c79e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bd35970;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_140bb2e20(&local_98,param_7);
  local_b0 = *param_6;
  local_b8 = *param_5;
  local_a8 = &local_98;
  FUN_14951c89c(param_1 + 2,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951c89c FUN_14951c89c body=266 status=ok
// SIG undefined FUN_14951c89c(void)

undefined4 *
FUN_14951c89c(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6,longlong param_7)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc) = param_5;
  *(undefined1 *)(param_1 + 0xe) = param_6;
  FUN_140d69258(param_1 + 0x10,param_7);
  *(undefined4 *)(param_7 + 0x48) = 0;
  if (*(longlong *)(param_7 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_7);
  return param_1;
}



// FUNCTION 14951c9b0 FUN_14951c9b0 body=29 status=ok
// SIG undefined FUN_14951c9b0(void)

undefined8 FUN_14951c9b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951c9ce FUN_14951c9ce body=132 status=ok
// SIG undefined FUN_14951c9ce(void)

void FUN_14951c9ce(longlong param_1,int param_2)

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



// FUNCTION 14951ca54 FUN_14951ca54 body=186 status=ok
// SIG undefined FUN_14951ca54(void)

undefined8 FUN_14951ca54(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_14951caf0;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_14951caf0;
    }
  }
  uVar4 = 0;
LAB_14951caf0:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951cb10 FUN_14951cb10 body=115 status=ok
// SIG undefined FUN_14951cb10(void)

void FUN_14951cb10(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14951cb83 FUN_14951cb83 body=60 status=ok
// SIG undefined FUN_14951cb83(void)

void FUN_14951cb83(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14951cbc0(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 14951cbc0 FUN_14951cbc0 body=259 status=ok
// SIG undefined FUN_14951cbc0(void)

undefined4 * FUN_14951cbc0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar2 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0xffffffff00000080;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  FUN_140bb2e20(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 14951ccc4 FUN_14951ccc4 body=161 status=ok
// SIG undefined FUN_14951ccc4(void)

void FUN_14951ccc4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14673cf9c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951cd66 FUN_14951cd66 body=29 status=ok
// SIG undefined FUN_14951cd66(void)

undefined8 FUN_14951cd66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951cd9e FUN_14951cd9e body=29 status=ok
// SIG undefined FUN_14951cd9e(void)

undefined8 FUN_14951cd9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951cdbc FUN_14951cdbc body=48 status=ok
// SIG undefined FUN_14951cdbc(void)

void FUN_14951cdbc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,8);
  }
  return;
}



// FUNCTION 14951cdec FUN_14951cdec body=147 status=ok
// SIG undefined FUN_14951cdec(void)

void FUN_14951cdec(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
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



// FUNCTION 14951ce80 FUN_14951ce80 body=9 status=ok
// SIG undefined FUN_14951ce80(void)

void FUN_14951ce80(longlong param_1)

{
  FUN_14951cea8(param_1 + 0x10);
  return;
}



// FUNCTION 14951ce8a FUN_14951ce8a body=29 status=ok
// SIG undefined FUN_14951ce8a(void)

undefined8 FUN_14951ce8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951cea8 FUN_14951cea8 body=126 status=ok
// SIG undefined FUN_14951cea8(void)

void FUN_14951cea8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd2ec50;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014951cf1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14951cf26 FUN_14951cf26 body=132 status=ok
// SIG undefined FUN_14951cf26(void)

void FUN_14951cf26(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951cfac FUN_14951cfac body=352 status=ok
// SIG undefined FUN_14951cfac(void)

void FUN_14951cfac(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14673d032();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951d10e FUN_14951d10e body=161 status=ok
// SIG undefined FUN_14951d10e(void)

void FUN_14951d10e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14673d1f4();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951d1b0 FUN_14951d1b0 body=29 status=ok
// SIG undefined FUN_14951d1b0(void)

undefined8 FUN_14951d1b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d1e8 FUN_14951d1e8 body=29 status=ok
// SIG undefined FUN_14951d1e8(void)

undefined8 FUN_14951d1e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d206 FUN_14951d206 body=161 status=ok
// SIG undefined FUN_14951d206(void)

void FUN_14951d206(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14673d28a();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951d2a8 FUN_14951d2a8 body=29 status=ok
// SIG undefined FUN_14951d2a8(void)

undefined8 FUN_14951d2a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d2e0 FUN_14951d2e0 body=29 status=ok
// SIG undefined FUN_14951d2e0(void)

undefined8 FUN_14951d2e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d2fe FUN_14951d2fe body=161 status=ok
// SIG undefined FUN_14951d2fe(void)

void FUN_14951d2fe(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14673d0c8();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951d3a0 FUN_14951d3a0 body=29 status=ok
// SIG undefined FUN_14951d3a0(void)

undefined8 FUN_14951d3a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d3d8 FUN_14951d3d8 body=29 status=ok
// SIG undefined FUN_14951d3d8(void)

undefined8 FUN_14951d3d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d3f6 FUN_14951d3f6 body=161 status=ok
// SIG undefined FUN_14951d3f6(void)

void FUN_14951d3f6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14673d15e();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951d498 FUN_14951d498 body=29 status=ok
// SIG undefined FUN_14951d498(void)

undefined8 FUN_14951d498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d4d0 FUN_14951d4d0 body=29 status=ok
// SIG undefined FUN_14951d4d0(void)

undefined8 FUN_14951d4d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d4fc FUN_14951d4fc body=29 status=ok
// SIG undefined FUN_14951d4fc(void)

undefined8 FUN_14951d4fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d534 FUN_14951d534 body=29 status=ok
// SIG undefined FUN_14951d534(void)

undefined8 FUN_14951d534(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d552 FUN_14951d552 body=130 status=ok
// SIG undefined FUN_14951d552(void)

void FUN_14951d552(longlong *param_1,longlong *param_2)

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



// FUNCTION 14951d5d6 FUN_14951d5d6 body=282 status=ok
// SIG undefined FUN_14951d5d6(void)

longlong * FUN_14951d5d6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14951d6f1();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14951d7c4(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14951d683;
    param_1[1] = 0;
LAB_14951d64d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14951d683;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14951d683;
      goto LAB_14951d64d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14951d683;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14951d683:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2d0;
  FUN_140a52e78(*param_1,"SLiveLinkMessageBusSourceFactory",
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/LiveLinkMessageBusSourceFactory.cpp"
                ,0x1c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951d6f1 FUN_14951d6f1 body=170 status=ok
// SIG undefined FUN_14951d6f1(void)

undefined8 * FUN_14951d6f1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2e0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14bd35ad0;
  memset(puVar1 + 2,0,0x2d0);
  FUN_140a55f88(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14bd335c0;
  puVar1[0x59] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)puVar1 + 700) = 0;
  puVar1[0x5a] = 0x4000000000000000;
  puVar1[0x5b] = 0;
  return puVar1;
}



// FUNCTION 14951d7a6 FUN_14951d7a6 body=29 status=ok
// SIG undefined FUN_14951d7a6(void)

undefined8 FUN_14951d7a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d7c4 FUN_14951d7c4 body=167 status=ok
// SIG undefined FUN_14951d7c4(void)

void FUN_14951d7c4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14951d83f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14951d83f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14951d83f:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014951d85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14951d86c FUN_14951d86c body=52 status=ok
// SIG undefined FUN_14951d86c(void)

undefined8 * FUN_14951d86c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bd35b60;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951d8ba FUN_14951d8ba body=29 status=ok
// SIG undefined FUN_14951d8ba(void)

bool FUN_14951d8ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 14951d8d8 FUN_14951d8d8 body=26 status=ok
// SIG undefined FUN_14951d8d8(void)

bool FUN_14951d8d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 14951d8f2 FUN_14951d8f2 body=24 status=ok
// SIG undefined FUN_14951d8f2(void)

bool FUN_14951d8f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 14951d916 FUN_14951d916 body=121 status=ok
// SIG undefined FUN_14951d916(void)

void FUN_14951d916(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35b60;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14951dc74(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14bd35af0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14951d990 FUN_14951d990 body=121 status=ok
// SIG undefined FUN_14951d990(void)

void FUN_14951d990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35b60;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14951dc74(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14bd35af0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14951da0a FUN_14951da0a body=157 status=ok
// SIG undefined FUN_14951da0a(void)

void FUN_14951da0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd35b60;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14951dc74(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35af0;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951da97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951daa8 FUN_14951daa8 body=189 status=ok
// SIG undefined FUN_14951daa8(void)

void FUN_14951daa8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14479d2ce(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_40 = 0;
  local_38 = 0;
  FUN_14951dc74(&local_40,param_1 + 8);
  local_50 = *param_2;
  local_48 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(uVar5,&local_50,&local_40);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951db66 FUN_14951db66 body=267 status=ok
// SIG undefined FUN_14951db66(void)

bool FUN_14951db66(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_48,0);
    lVar7 = local_48;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar6 != 0) {
    pcVar4 = *(code **)(param_1 + 0x28);
    local_48 = 0;
    local_40 = 0;
    FUN_14951dc74(&local_48,param_1 + 8);
    local_58 = *param_2;
    local_50 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar4)(lVar6,&local_58,&local_48);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951dc74 FUN_14951dc74 body=130 status=ok
// SIG undefined FUN_14951dc74(void)

void FUN_14951dc74(longlong *param_1,longlong *param_2)

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



// FUNCTION 14951dcf8 FUN_14951dcf8 body=31 status=ok
// SIG undefined FUN_14951dcf8(void)

undefined8 FUN_14951dcf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951dd34 FUN_14951dd34 body=93 status=ok
// SIG undefined FUN_14951dd34(void)

void FUN_14951dd34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd35bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951dd92 FUN_14951dd92 body=93 status=ok
// SIG undefined FUN_14951dd92(void)

void FUN_14951dd92(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd35bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951ddf0 FUN_14951ddf0 body=126 status=ok
// SIG undefined FUN_14951ddf0(void)

void FUN_14951ddf0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35bd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951de5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951de7a FUN_14951de7a body=181 status=ok
// SIG undefined FUN_14951de7a(void)

longlong FUN_14951de7a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14951df12;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14951df30(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14951df12:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14951df30 FUN_14951df30 body=300 status=ok
// SIG undefined FUN_14951df30(void)

undefined4 * FUN_14951df30(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14951e05e(param_1,local_58);
  local_40 = 0;
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_48 = 0;
  *(undefined4 *)(local_50 + 2) = 0;
  FUN_1449db362();
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  cVar1 = FUN_14951e144(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14951e250(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951e05e FUN_14951e05e body=229 status=ok
// SIG undefined FUN_14951e05e(void)

int * FUN_14951e05e(longlong *param_1,int *param_2)

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



// FUNCTION 14951e144 FUN_14951e144 body=153 status=ok
// SIG undefined FUN_14951e144(void)

undefined8 FUN_14951e144(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1449db362(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14951e1de(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14951e1de FUN_14951e1de body=114 status=ok
// SIG undefined FUN_14951e1de(void)

void FUN_14951e1de(longlong *param_1,int param_2)

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



// FUNCTION 14951e250 FUN_14951e250 body=450 status=ok
// SIG undefined FUN_14951e250(void)

void FUN_14951e250(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14951e414 FUN_14951e414 body=103 status=ok
// SIG undefined FUN_14951e414(void)

void FUN_14951e414(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_14951e47c();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14951e47c FUN_14951e47c body=123 status=ok
// SIG undefined FUN_14951e47c(void)

void FUN_14951e47c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  FUN_1449db362(*param_1 + lVar2 + 8);
  FUN_14951e1de(param_1,param_2);
  return;
}



// FUNCTION 14951e4f8 FUN_14951e4f8 body=31 status=ok
// SIG undefined FUN_14951e4f8(void)

undefined8 FUN_14951e4f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951e534 FUN_14951e534 body=93 status=ok
// SIG undefined FUN_14951e534(void)

void FUN_14951e534(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd35c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951e592 FUN_14951e592 body=126 status=ok
// SIG undefined FUN_14951e592(void)

void FUN_14951e592(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35c60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951e601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951e610 FUN_14951e610 body=21 status=ok
// SIG undefined FUN_14951e610(void)

undefined8 FUN_14951e610(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14951e626 FUN_14951e626 body=186 status=ok
// SIG undefined FUN_14951e626(void)

undefined8 FUN_14951e626(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_14951e6c2;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_14951e6c2;
    }
  }
  uVar4 = 0;
LAB_14951e6c2:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951e6e6 FUN_14951e6e6 body=355 status=ok
// SIG undefined FUN_14951e6e6(void)

undefined4 * FUN_14951e6e6(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1495191aa(param_1,local_48);
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  iVar6 = FUN_1447addd0(local_40,0x10);
  uVar1 = *(undefined8 *)(local_40 + 4);
  uVar10 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  uVar10 = (((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar7 >> 4)) * 0xd + iVar6;
  cVar5 = FUN_149519290(param_1,uVar10,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      local_40[7] = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
      ;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1495193de(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951e84a FUN_14951e84a body=48 status=ok
// SIG undefined FUN_14951e84a(void)

void FUN_14951e84a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14951e87a FUN_14951e87a body=48 status=ok
// SIG undefined FUN_14951e87a(void)

void FUN_14951e87a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14951e8aa FUN_14951e8aa body=147 status=ok
// SIG undefined FUN_14951e8aa(void)

void FUN_14951e8aa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951e93e FUN_14951e93e body=144 status=ok
// SIG undefined FUN_14951e93e(void)

undefined4 * FUN_14951e93e(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
    bVar5 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 10);
  *(longlong *)(param_1 + 10) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 14951e9ce FUN_14951e9ce body=143 status=ok
// SIG undefined FUN_14951e9ce(void)

void FUN_14951e9ce(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951ea5e FUN_14951ea5e body=29 status=ok
// SIG undefined FUN_14951ea5e(void)

undefined8 FUN_14951ea5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951ea80 FUN_14951ea80 body=230 status=ok
// SIG undefined FUN_14951ea80(void)

void FUN_14951ea80(LPCRITICAL_SECTION param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14951eb26;
          goto LAB_14951eb35;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14951eb26:
    FUN_14109be94(param_1,0);
  }
LAB_14951eb35:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951eb68 FUN_14951eb68 body=103 status=ok
// SIG undefined FUN_14951eb68(void)

void FUN_14951eb68(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x38 + lVar1);
  FUN_1494ff962(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x38),(longlong)iVar3 * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14951ebd0 FUN_14951ebd0 body=62 status=ok
// SIG undefined FUN_14951ebd0(void)

void FUN_14951ebd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14951ec0e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14951ec0e FUN_14951ec0e body=104 status=ok
// SIG undefined FUN_14951ec0e(void)

ulonglong FUN_14951ec0e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14951ec44;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_14951ec44:
  return param_2 & 0xffffffff;
}



// FUNCTION 14951ec76 FUN_14951ec76 body=243 status=ok
// SIG undefined FUN_14951ec76(void)

void FUN_14951ec76(LPCRITICAL_SECTION param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        local_48 = *(undefined8 *)(param_2 + 4);
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_58);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14951ed29;
          goto LAB_14951ed38;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14951ed29:
    FUN_14109be94(param_1,0);
  }
LAB_14951ed38:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951ed6a FUN_14951ed6a body=77 status=ok
// SIG undefined FUN_14951ed6a(void)

void FUN_14951ed6a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1[3];
  local_28 = *(undefined4 *)(param_1 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_14951ec76(*param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951edc2 FUN_14951edc2 body=29 status=ok
// SIG undefined FUN_14951edc2(void)

void FUN_14951edc2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14951ede0 FUN_14951ede0 body=29 status=ok
// SIG undefined FUN_14951ede0(void)

undefined8 FUN_14951ede0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951ee1c FUN_14951ee1c body=29 status=ok
// SIG undefined FUN_14951ee1c(void)

undefined8 FUN_14951ee1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951ee3a FUN_14951ee3a body=143 status=ok
// SIG undefined FUN_14951ee3a(void)

void FUN_14951ee3a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951eeca FUN_14951eeca body=48 status=ok
// SIG undefined FUN_14951eeca(void)

void FUN_14951eeca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14951eefa FUN_14951eefa body=73 status=ok
// SIG undefined FUN_14951eefa(void)

void FUN_14951eefa(longlong param_1,int param_2)

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



// FUNCTION 14951ef43 FUN_14951ef43 body=38 status=ok
// SIG undefined FUN_14951ef43(void)

void FUN_14951ef43(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1448eac94(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 14951ef6a FUN_14951ef6a body=48 status=ok
// SIG undefined FUN_14951ef6a(void)

void FUN_14951ef6a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14951ef9a FUN_14951ef9a body=112 status=ok
// SIG undefined FUN_14951ef9a(void)

void FUN_14951ef9a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14951f00a FUN_14951f00a body=147 status=ok
// SIG undefined FUN_14951f00a(void)

void FUN_14951f00a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951f09e FUN_14951f09e body=48 status=ok
// SIG undefined FUN_14951f09e(void)

void FUN_14951f09e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14951f0ce FUN_14951f0ce body=132 status=ok
// SIG undefined FUN_14951f0ce(void)

void FUN_14951f0ce(longlong param_1,int param_2)

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



// FUNCTION 14951f154 FUN_14951f154 body=103 status=ok
// SIG undefined FUN_14951f154(void)

undefined8 FUN_14951f154(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 14951f1bc FUN_14951f1bc body=147 status=ok
// SIG undefined FUN_14951f1bc(void)

void FUN_14951f1bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14951f250 FUN_14951f250 body=29 status=ok
// SIG undefined FUN_14951f250(void)

undefined8 FUN_14951f250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951f288 FUN_14951f288 body=29 status=ok
// SIG undefined FUN_14951f288(void)

bool FUN_14951f288(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951f2a6 FUN_14951f2a6 body=26 status=ok
// SIG undefined FUN_14951f2a6(void)

bool FUN_14951f2a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14951f2c0 FUN_14951f2c0 body=24 status=ok
// SIG undefined FUN_14951f2c0(void)

bool FUN_14951f2c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951f2d8 FUN_14951f2d8 body=93 status=ok
// SIG undefined FUN_14951f2d8(void)

void FUN_14951f2d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd355a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951f336 FUN_14951f336 body=93 status=ok
// SIG undefined FUN_14951f336(void)

void FUN_14951f336(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd355a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951f394 FUN_14951f394 body=126 status=ok
// SIG undefined FUN_14951f394(void)

void FUN_14951f394(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd355a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35f00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951f403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951f412 FUN_14951f412 body=48 status=ok
// SIG undefined FUN_14951f412(void)

void FUN_14951f412(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014951f43f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14951f442 FUN_14951f442 body=163 status=ok
// SIG undefined FUN_14951f442(void)

bool FUN_14951f442(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14951f4e6 FUN_14951f4e6 body=220 status=ok
// SIG undefined FUN_14951f4e6(void)

LPCRITICAL_SECTION FUN_14951f4e6(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd35410;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35f70;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14951f5c2 FUN_14951f5c2 body=29 status=ok
// SIG undefined FUN_14951f5c2(void)

undefined8 FUN_14951f5c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951f5fa FUN_14951f5fa body=29 status=ok
// SIG undefined FUN_14951f5fa(void)

bool FUN_14951f5fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951f618 FUN_14951f618 body=26 status=ok
// SIG undefined FUN_14951f618(void)

bool FUN_14951f618(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14951f632 FUN_14951f632 body=24 status=ok
// SIG undefined FUN_14951f632(void)

bool FUN_14951f632(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951f64a FUN_14951f64a body=93 status=ok
// SIG undefined FUN_14951f64a(void)

void FUN_14951f64a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951f6a8 FUN_14951f6a8 body=93 status=ok
// SIG undefined FUN_14951f6a8(void)

void FUN_14951f6a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951f706 FUN_14951f706 body=126 status=ok
// SIG undefined FUN_14951f706(void)

void FUN_14951f706(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd35410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35f70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951f775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951f784 FUN_14951f784 body=94 status=ok
// SIG undefined FUN_14951f784(void)

void FUN_14951f784(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  (**(code **)(param_1 + 0x20))(uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951f7e4 FUN_14951f7e4 body=171 status=ok
// SIG undefined FUN_14951f7e4(void)

bool FUN_14951f7e4(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = CONCAT44(uStack_44,local_48);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951f890 FUN_14951f890 body=29 status=ok
// SIG undefined FUN_14951f890(void)

undefined8 FUN_14951f890(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951f8c8 FUN_14951f8c8 body=29 status=ok
// SIG undefined FUN_14951f8c8(void)

bool FUN_14951f8c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951f8e6 FUN_14951f8e6 body=26 status=ok
// SIG undefined FUN_14951f8e6(void)

bool FUN_14951f8e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14951f900 FUN_14951f900 body=24 status=ok
// SIG undefined FUN_14951f900(void)

bool FUN_14951f900(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951f918 FUN_14951f918 body=93 status=ok
// SIG undefined FUN_14951f918(void)

void FUN_14951f918(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd356f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951f976 FUN_14951f976 body=93 status=ok
// SIG undefined FUN_14951f976(void)

void FUN_14951f976(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd356f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951f9d4 FUN_14951f9d4 body=126 status=ok
// SIG undefined FUN_14951f9d4(void)

void FUN_14951f9d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd356f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35fe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951fa43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951fa52 FUN_14951fa52 body=40 status=ok
// SIG undefined FUN_14951fa52(void)

void FUN_14951fa52(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014951fa77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14951fa7a FUN_14951fa7a body=152 status=ok
// SIG undefined FUN_14951fa7a(void)

bool FUN_14951fa7a(longlong param_1,undefined8 param_2)

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



// FUNCTION 14951fb14 FUN_14951fb14 body=62 status=ok
// SIG undefined FUN_14951fb14(void)

void FUN_14951fb14(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14951fb52(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14951fb52 FUN_14951fb52 body=112 status=ok
// SIG undefined FUN_14951fb52(void)

ulonglong FUN_14951fb52(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14951fb8c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14951fb8c:
  return param_2 & 0xffffffff;
}



// FUNCTION 14951fbc2 FUN_14951fbc2 body=89 status=ok
// SIG undefined FUN_14951fbc2(void)

void FUN_14951fbc2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14951fc1c FUN_14951fc1c body=29 status=ok
// SIG undefined FUN_14951fc1c(void)

undefined8 FUN_14951fc1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951fc54 FUN_14951fc54 body=29 status=ok
// SIG undefined FUN_14951fc54(void)

bool FUN_14951fc54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951fc72 FUN_14951fc72 body=26 status=ok
// SIG undefined FUN_14951fc72(void)

bool FUN_14951fc72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14951fc8c FUN_14951fc8c body=24 status=ok
// SIG undefined FUN_14951fc8c(void)

bool FUN_14951fc8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951fca4 FUN_14951fca4 body=93 status=ok
// SIG undefined FUN_14951fca4(void)

void FUN_14951fca4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd355a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951fd02 FUN_14951fd02 body=93 status=ok
// SIG undefined FUN_14951fd02(void)

void FUN_14951fd02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd355a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd36050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951fd60 FUN_14951fd60 body=126 status=ok
// SIG undefined FUN_14951fd60(void)

void FUN_14951fd60(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bd355a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd36050;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951fdcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951fdde FUN_14951fdde body=48 status=ok
// SIG undefined FUN_14951fdde(void)

void FUN_14951fdde(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014951fe0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14951fe0e FUN_14951fe0e body=163 status=ok
// SIG undefined FUN_14951fe0e(void)

bool FUN_14951fe0e(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14951feb2 FUN_14951feb2 body=1 status=ok
// SIG undefined FUN_14951feb2(void)

void FUN_14951feb2(void)

{
  return;
}



// FUNCTION 14951feb4 FUN_14951feb4 body=29 status=ok
// SIG undefined FUN_14951feb4(void)

undefined8 FUN_14951feb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951fed2 FUN_14951fed2 body=1 status=ok
// SIG undefined FUN_14951fed2(void)

void FUN_14951fed2(void)

{
  return;
}



// FUNCTION 14951fed4 FUN_14951fed4 body=29 status=ok
// SIG undefined FUN_14951fed4(void)

undefined8 FUN_14951fed4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951fef2 FUN_14951fef2 body=1 status=ok
// SIG undefined FUN_14951fef2(void)

void FUN_14951fef2(void)

{
  return;
}



// FUNCTION 14951fef4 FUN_14951fef4 body=29 status=ok
// SIG undefined FUN_14951fef4(void)

undefined8 FUN_14951fef4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951ff11 FUN_14951ff11 body=73 status=ok
// SIG undefined FUN_14951ff11(void)

void FUN_14951ff11(longlong param_1,int param_2)

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



// FUNCTION 14951ff5a FUN_14951ff5a body=324 status=ok
// SIG undefined FUN_14951ff5a(void)

longlong * FUN_14951ff5a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x8d0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bd36150;
  plVar4 = plVar3 + 2;
  FUN_1495200a0(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14952efae(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_149520031;
    param_1[1] = 0;
LAB_14951fffb:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149520031;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_149520031;
      goto LAB_14951fffb;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149520031;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_149520031:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x8c0;
  FUN_140a52e78(*param_1,"SListView<TSharedPtr<FLiveLinkSource>>",
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/SLiveLinkMessageBusSourceFactory.cpp"
                ,0x6b);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495200a0 FUN_1495200a0 body=698 status=ok
// SIG undefined FUN_1495200a0(void)

undefined8 * FUN_1495200a0(undefined8 *param_1)

{
  FUN_146af608e(param_1,0);
  *param_1 = &PTR_FUN_14bd36170;
  param_1[0x4d] = &PTR_FUN_14bd36450;
  param_1[0x9b] = &PTR_LAB_14bd36470;
  param_1[0x9c] = param_1;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = param_1;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined1 *)(param_1 + 0xfe) = 2;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x109) = 0x101;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x867) = 0;
  *(undefined1 *)((longlong)param_1 + 0x869) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x88d) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x115) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 14952035a FUN_14952035a body=9 status=ok
// SIG undefined FUN_14952035a(void)

void FUN_14952035a(longlong param_1)

{
  FUN_14952442c(param_1 + 0x10);
  return;
}



// FUNCTION 149520364 FUN_149520364 body=29 status=ok
// SIG undefined FUN_149520364(void)

undefined8 FUN_149520364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149520382 FUN_149520382 body=38 status=ok
// SIG undefined FUN_149520382(void)

undefined8 FUN_149520382(undefined8 param_1,int param_2)

{
  FUN_14952442c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495203a8 FUN_1495203a8 body=133 status=ok
// SIG undefined FUN_1495203a8(void)

char * FUN_1495203a8(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x840) != 0) && (*(longlong **)(param_1 + 0x838) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x840) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x838);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_14493db24(param_2);
  }
  FUN_149524bfc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14952042e FUN_14952042e body=348 status=ok
// SIG undefined FUN_14952042e(void)

undefined1 * FUN_14952042e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x864) == '\x01') {
    if (((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
      iVar5 = *(int *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x398);
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar5;
    }
    if (iVar5 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == DAT_14c966e98) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) {
        bVar7 = (*(ushort *)(param_4 + 8) & 3) == 0;
      }
      else {
        bVar7 = false;
      }
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
      if (bVar7) {
        plVar6 = (longlong *)(param_1 + 0x4d8);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar6);
        if (0 < iVar5) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        return param_2;
      }
    }
  }
  FUN_146af49bc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14952058a FUN_14952058a body=298 status=ok
// SIG undefined FUN_14952058a(void)

undefined8 FUN_14952058a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x864) != '\x01') goto LAB_149520679;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_1495205f3:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_1495205f3;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_14c966fa0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
      bVar5 = FUN_146af41be(param_1);
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (bVar5 != 0) {
      plVar7 = (longlong *)(param_1 + 0x4d8);
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar7);
      if (0 < iVar6) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7,2);
      }
    }
  }
LAB_149520679:
  FUN_146af4b8a(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1495206b4 FUN_1495206b4 body=709 status=ok
// SIG undefined FUN_1495206b4(void)

undefined8 FUN_1495206b4(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)param_1[0x116];
  if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x866) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x865) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar4 + 8))(plVar4,&local_60);
    iVar6 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar5 = param_1[0xea];
    if (lVar5 == 0) {
      iVar11 = -1;
    }
    else {
      plVar4 = (longlong *)param_1[0xeb];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar11 = -1;
      if ((longlong)local_58 != 0) {
        lVar7 = 0;
        iVar8 = 0;
        do {
          iVar11 = iVar8;
          if (*(longlong *)(local_60 + lVar7) == lVar5) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 0x10;
          iVar11 = -1;
        } while ((longlong)local_58 * 0x10 != lVar7);
      }
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
    }
    cVar3 = *(char *)(param_4 + 0x20);
    iVar8 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar3 == '\x02' && iVar8 == 1) || (cVar3 == '\0' && iVar8 == 0)) {
      uVar10 = (ulonglong)(uint)(iVar11 - iVar6);
    }
    else {
      if ((cVar3 != '\x03' || iVar8 != 1) && (cVar3 != '\x01' || iVar8 != 0)) goto LAB_149520701;
      uVar9 = iVar11 + iVar6;
      uVar10 = (ulonglong)uVar9;
      if (0 < local_58 && (local_58 <= (int)uVar9 || (int)uVar9 < 0)) {
        fVar12 = (float)local_58 / (float)iVar6;
        fVar13 = (float)(iVar11 + 1) / (float)iVar6;
        if ((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1 < (int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1) {
          uVar9 = local_58 - 1;
        }
        uVar10 = (ulonglong)uVar9;
      }
    }
    iVar6 = (int)uVar10;
    if (((-1 < iVar6) && (iVar6 < local_58)) && (*(char *)((longlong)param_1 + 0x3e9) == '\x01')) {
      local_88 = iVar11 <= iVar6;
      FUN_14952587c(param_1,&local_50,uVar10 * 0x10 + local_60);
      if (local_50 != -1) {
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_50,param_4);
        local_78 = 0;
        uStack_70 = 0;
        FUN_146a35cca(param_2);
        if ((local_50 != -1) && (local_48 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_48 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
        goto LAB_149520712;
      }
    }
  }
LAB_149520701:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_149520712:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14952097a FUN_14952097a body=461 status=ok
// SIG undefined FUN_14952097a(void)

longlong * FUN_14952097a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_1495209b8:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_1495209b8;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_149525a30(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_149520af4;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_149520af4;
LAB_149520a57:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_149520af4;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_149520a57;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_149520af4:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149520b4a FUN_149520b4a body=83 status=ok
// SIG undefined FUN_149520b4a(void)

undefined1 FUN_149520b4a(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x858) != 0) && (*(longlong **)(param_1 + 0x850) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x858) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x850);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x848) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x848);
}



// FUNCTION 149520b9e FUN_149520b9e body=203 status=ok
// SIG undefined FUN_149520b9e(void)

undefined8 FUN_149520b9e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e640) {
    FUN_144b3d300(&DAT_14cc1e640);
    if (DAT_14cc1e640 == -1) {
      FUN_140056680(&DAT_14cc1e630,L"List");
      atexit((_func_5014 *)&LAB_14453f1a4);
      _Init_thread_footer(&DAT_14cc1e640);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cc1e630);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149520c6a FUN_149520c6a body=50 status=ok
// SIG undefined FUN_149520c6a(void)

void FUN_149520c6a(longlong *param_1)

{
  FUN_149525f34(param_1 + 0x9c);
  FUN_149525f34(param_1 + 0xb6);
                    /* WARNING: Could not recover jumptable at 0x000149520c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 149520c9c FUN_149520c9c body=1893 status=ok
// SIG undefined FUN_149520c9c(void)

void FUN_149520c9c(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_15c [4];
  float local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar13 = (double)param_1[0x5e];
  if ((param_4 != '\x01') ||
     (((0.0 <= param_3 || (9.999999747378752e-05 <= dVar13)) &&
      ((param_3 <= 0.0 || ((char)param_1[0x66] == '\0')))))) {
    fVar18 = ABS(param_3);
    if ((dVar13 != 0.0) || (NAN(dVar13))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (char)param_1[0x66];
    }
    uVar7 = (uint)(double)param_1[0x5d];
    if (param_4 == '\0') {
      cVar5 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar13 == 0.0) & 1,(char)param_1[0x66]);
      if (cVar5 != '\0') {
        fVar18 = (float)FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2);
        if ((fVar18 != 0.0) || (NAN(fVar18))) {
          FUN_146af42a2(param_1);
        }
        goto LAB_149521079;
      }
    }
    if (cVar6 == '\0') {
      plVar3 = (longlong *)param_1[0x116];
      if (plVar3 == (longlong *)0x0) {
        local_100 = 0;
        local_f8 = 0;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,&local_100);
        if (0 < (int)local_f8) {
          do {
            if ((((fVar18 == 0.0) && (!NAN(fVar18))) || ((int)uVar7 < 0)) ||
               ((int)local_f8 <= (int)uVar7)) break;
            if (*(longlong *)(local_100 + (ulonglong)uVar7 * 0x10) == 0) {
              uVar7 = uVar7 + 1;
              iVar8 = 2;
            }
            else {
              puVar9 = (undefined8 *)(local_100 + (ulonglong)uVar7 * 0x10);
              FUN_149525546(param_1 + 0x9c,&local_110,puVar9);
              if (local_110 == (longlong *)0x0) {
                local_130 = *puVar9;
                local_128 = puVar9[1];
                if (local_128 != 0) {
                  LOCK();
                  *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*param_1 + 0x2c0))(param_1,&local_120,&local_130);
                plVar3 = local_108;
                plVar1 = local_118;
                local_110 = local_120;
                if (local_118 == (longlong *)0x0) {
                  if (local_108 != (longlong *)0x0) {
                    local_108 = (longlong *)0x0;
LAB_1495213c1:
                    local_110 = local_120;
                    LOCK();
                    plVar1 = plVar3 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar3)(plVar3);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
joined_r0x0001495213ad:
                      if (iVar8 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_118 + 1) = (int)local_118[1] + 1;
                  UNLOCK();
                  if (local_118 == local_108) {
                    LOCK();
                    plVar3 = local_118 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*local_118)(local_118);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar1 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
                      plVar3 = plVar1;
                      goto joined_r0x0001495213ad;
                    }
                  }
                  else {
                    bVar10 = local_108 != (longlong *)0x0;
                    local_108 = local_118;
                    if (bVar10) goto LAB_1495213c1;
                  }
                }
                plVar3 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                    }
                  }
                }
                plVar3 = local_110;
                (**(code **)(*local_110 + 0x10))(local_110,uVar7);
                local_140 = plVar3;
                local_138 = local_108;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                  UNLOCK();
                }
                local_150 = *puVar9;
                local_148 = puVar9[1];
                if (local_148 != 0) {
                  LOCK();
                  *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
                  UNLOCK();
                }
                FUN_149526d5a(param_1 + 0x9c,&local_150,&local_140);
                (**(code **)(*local_110 + 0x58))(local_110,&local_120);
                FUN_1405d299c(local_120);
                plVar3 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                    }
                  }
                }
              }
              (**(code **)(*local_110 + 0x58))(local_110,&local_120);
              FUN_144b013c4(local_120,&local_170);
              local_168 = local_170;
              FUN_146af3580(local_15c,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_168);
              plVar3 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_118 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              plVar3 = local_108;
              if (param_3 <= 0.0) {
                auVar15 = roundss(ZEXT816(0),ZEXT416((uint)(float)dVar13),0xb);
                fVar17 = (float)dVar13 - auVar15._0_4_;
                fVar12 = ABS(fVar17);
                dVar4 = dVar13 + -1.0;
                if (1e-08 < fVar12) {
                  dVar4 = dVar13;
                }
                uVar11 = -(uint)(fVar12 <= 1e-08);
                fVar12 = (float)(uVar11 & 0x3f800000 | ~uVar11 & (uint)fVar17) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)((fVar12 - fVar18) / local_158 + (float)(int)dVar4);
                    goto LAB_149520f7b;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar4;
                  auVar15 = roundpd(auVar15,auVar15,3);
                  dVar13 = auVar15._0_8_;
                  iVar8 = 3;
                }
                else {
                  if (uVar7 == 0) {
                    iVar8 = 3;
                    dVar13 = 0.0;
                    uVar7 = 0;
                    goto LAB_149520f81;
                  }
                  fVar18 = fVar18 - fVar12;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = dVar4;
                  auVar15 = roundpd(auVar16,auVar16,3);
                  dVar13 = auVar15._0_8_;
                  uVar7 = uVar7 - 1;
                  iVar8 = 0;
                }
                dVar13 = dVar4 - (dVar4 - dVar13);
              }
              else {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = dVar13;
                auVar15 = roundpd(auVar14,auVar14,3);
                fVar12 = (float)((auVar15._0_8_ - dVar13) + 1.0) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)(int)dVar13 + (1.0 - (double)((fVar12 - fVar18) / local_158));
                  }
                  else {
                    dVar13 = (double)(int)dVar13 + 1.0;
                  }
                }
                else {
                  if (uVar7 != local_f8) {
                    fVar18 = fVar18 - fVar12;
                    dVar13 = (double)(int)dVar13 + 1.0;
                    uVar7 = uVar7 + 1;
                    iVar8 = 0;
                    goto LAB_149520f81;
                  }
                  dVar13 = (double)(int)uVar7;
                }
LAB_149520f7b:
                iVar8 = 3;
              }
LAB_149520f81:
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
            }
          } while (iVar8 != 3);
        }
      }
      (**(code **)(*param_1 + 600))(param_1,(float)dVar13);
    }
  }
LAB_149521079:
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149521402 FUN_149521402 body=747 status=ok
// SIG undefined FUN_149521402(void)

void FUN_149521402(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  ulonglong local_108;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x270) != 2) {
    plVar3 = *(longlong **)(param_1 + 0x8b0);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar3 + 8))(plVar3,&local_f8);
      if (0 < local_f0) {
        lVar7 = 8;
        lVar8 = 0;
        do {
          uVar4 = *(ulonglong *)(local_f8 + -8 + lVar7);
          plVar3 = *(longlong **)(local_f8 + lVar7);
          local_108 = uVar4;
          local_e8 = uVar4;
          local_e0 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            local_100 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            local_100 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
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
            }
          }
          uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          iVar6 = FUN_149527dec((longlong *)(param_1 + 0x700),uVar5 >> 0x10 ^ uVar5,&local_108);
          plVar3 = local_100;
          if (iVar6 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)iVar6 * 0x18 + *(longlong *)(param_1 + 0x700);
          }
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_100 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (lVar9 != 0) {
            FUN_149527ed0(&local_98,local_10c,&local_e8);
          }
          plVar3 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 < local_f0);
      }
      FUN_149527af8(param_1 + 0x700,&local_e8,&local_98);
      iVar6 = (int)local_e0;
      FUN_149527d72(param_1 + 0x700,&local_98);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1495246ea(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1495246ea(&local_98);
      if (iVar6 <= local_b4) goto LAB_149521469;
    }
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
  }
LAB_149521469:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495216ee FUN_1495216ee body=1026 status=ok
// SIG undefined FUN_1495216ee(void)

double * FUN_1495216ee(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double *local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  float local_e8;
  longlong local_e0;
  uint local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146af6b36();
  lVar1 = param_1 + 0x4e0;
  FUN_149528adc(lVar1);
  plVar4 = *(longlong **)(param_1 + 0x8b0);
  if ((plVar4 == (longlong *)0x0) ||
     ((**(code **)(*plVar4 + 8))(plVar4,&local_e0), (int)local_d8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    goto LAB_149521950;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
  auVar19 = roundpd(auVar19,auVar19,1);
  uVar5 = local_d8 - 1;
  if ((int)auVar19._0_8_ < (int)(local_d8 - 1)) {
    uVar5 = (int)auVar19._0_8_;
  }
  uVar11 = 0;
  if (0 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  local_f8 = *param_3;
  FUN_146af3580(local_ec,*(undefined4 *)(param_1 + 0x3ec));
  uVar8 = (ulonglong)local_d8;
  if ((int)uVar11 < (int)local_d8) {
    uVar15 = (ulonglong)uVar11;
    lVar13 = uVar15 << 4;
    fVar25 = 0.0;
    lVar12 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    bVar9 = false;
    uVar14 = uVar15;
    local_100 = param_2;
    do {
      if (*(longlong *)(local_e0 + lVar13) == 0) {
        bVar10 = false;
      }
      else {
        local_108 = uVar2;
        uVar17 = FUN_149528760(param_1,local_e0 + lVar13,uVar14 & 0xffffffff,uVar11);
        fVar16 = (float)uVar17;
        if (lVar12 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
          auVar19 = roundpd(auVar21,auVar21,3);
          dVar18 = *(double *)(param_1 + 0x2e8) - auVar19._0_8_;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar23 = 1.0 - (float)dVar18;
          fVar20 = local_e8 / (fVar16 * fVar23);
          fVar27 = fVar16;
          if (fVar23 <= fVar20) {
            fVar20 = fVar23;
          }
        }
        else if (fVar26 + fVar16 <= local_e8) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (local_e8 - fVar26) / fVar16;
        }
        fVar25 = fVar25 + fVar20;
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar17;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (lVar12 == 0) {
          auVar22._0_4_ = fVar16 * fVar25;
        }
        fVar26 = fVar26 + auVar22._0_4_;
        uVar8 = (ulonglong)(int)local_d8;
        bVar9 = (longlong)(uVar8 - 1) <= (longlong)uVar14;
        fVar24 = fVar24 + fVar16;
        bVar10 = local_e8 + 0.001 <= fVar26 || lVar12 == 0 && local_e8 <= fVar26;
      }
      param_2 = local_100;
      uVar7 = (uint)uVar8;
      if (bVar10) break;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar14 < (int)uVar7);
    if (bVar10 || bVar9 != true) {
      dVar18 = (double)fVar25;
      goto LAB_1495219d5;
    }
    dVar3 = (double)((fVar24 - local_e8) / fVar27) + (double)(int)uVar11;
    if ((0 < (int)uVar5) && (fVar24 < local_e8)) {
      lVar12 = uVar15 << 4;
      fVar27 = local_e8;
      do {
        lVar12 = lVar12 + -0x10;
        if (*(longlong *)(local_e0 + lVar12) != 0) {
          local_108 = uVar2;
          fVar25 = (float)FUN_149528760(param_1,local_e0 + lVar12,uVar15 - 1 & 0xffffffff,uVar11);
          fVar24 = fVar24 + fVar25;
          fVar27 = local_e8;
          if ((0.0 < fVar25) && (local_e8 < fVar24)) {
            dVar3 = (double)((fVar24 - local_e8) / fVar25) + (double)(int)(uVar15 - 1);
          }
        }
        uVar7 = local_d8;
      } while ((1 < uVar15) && (uVar15 = uVar15 - 1, fVar24 < fVar27));
    }
    dVar18 = (double)(int)uVar7 - dVar3;
    uVar6 = 1;
  }
  else {
    fVar24 = 0.0;
    dVar18 = 0.0;
LAB_1495219d5:
    dVar3 = *(double *)(param_1 + 0x2e8);
    uVar6 = 0;
  }
  *param_2 = dVar3;
  param_2[1] = (double)fVar24;
  param_2[2] = dVar18;
  *(undefined1 *)(param_2 + 3) = uVar6;
LAB_149521950:
  FUN_149526036(lVar1);
  FUN_14453f1b6(lVar1);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149521af2 FUN_149521af2 body=81 status=ok
// SIG undefined FUN_149521af2(void)

undefined4 FUN_149521af2(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149521b44 FUN_149521b44 body=2059 status=ok
// SIG undefined FUN_149521b44(void)

undefined1 FUN_149521b44(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  float local_f4;
  float local_f0;
  undefined1 local_ec [4];
  float local_e8;
  undefined1 local_e0 [4];
  float local_dc;
  undefined1 local_d4 [4];
  float local_d0;
  undefined1 local_c8 [4];
  float local_c4;
  undefined1 local_bc [4];
  float local_b8;
  float local_b0;
  float fStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = (longlong *)param_1[0x116];
  if ((plVar3 != (longlong *)0x0) && (param_1[0xf9] != 0)) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_90);
    lVar8 = param_1[0xf9];
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    iVar9 = -1;
    if ((longlong)local_88 != 0) {
      lVar10 = 0;
      iVar11 = 0;
      do {
        iVar9 = iVar11;
        if (*(longlong *)(local_90 + lVar10) == lVar8) break;
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x10;
        iVar9 = -1;
      } while ((longlong)local_88 * 0x10 != lVar10);
    }
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
    if (iVar9 != -1) {
      fVar13 = (float)(**(code **)(*param_1 + 0x260))(param_1);
      dVar5 = (double)fVar13;
      if (((fVar13 == 0.0) && (!NAN(fVar13))) && (cVar6 = FUN_146af5c6c(param_1), cVar6 != '\0')) {
        dVar5 = (double)param_1[100];
        if ((dVar5 == 0.0) && (!NAN(dVar5))) {
          uVar12 = 1;
          goto LAB_149521eb0;
        }
      }
      FUN_146af65f2(param_1);
      dVar19 = (double)param_1[0x5d];
      auVar15._0_8_ = dVar5 + dVar19;
      auVar15._8_8_ = 0;
      auVar20 = roundpd(in_XMM2,auVar15,1);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_1[0x5d];
      auVar16 = roundpd(auVar15,auVar16,2);
      dVar14 = auVar16._0_8_;
      dVar18 = (double)(int)(auVar20._0_8_ - dVar14);
      if (*(char *)((longlong)param_1 + 0x869) == '\x01') {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1[0x5d];
        auVar16 = roundpd(auVar16,auVar4,1);
        dVar14 = auVar16._0_8_;
        auVar17._0_8_ = dVar19 + dVar18;
        auVar17._8_8_ = 0;
        auVar16 = roundpd(auVar17,auVar17,2);
        dVar19 = auVar16._0_8_;
      }
      else {
        auVar20._0_8_ = dVar19 + dVar18;
        auVar20._8_8_ = 0;
        auVar16 = roundpd(auVar20,auVar20,1);
        dVar19 = auVar16._0_8_;
      }
      dVar18 = (double)iVar9;
      cVar6 = (char)param_1[0xfe];
      if ((dVar18 < dVar14) || (dVar19 < dVar18)) {
        if (cVar6 == '\0') {
          if (dVar19 < dVar18) goto LAB_149521d11;
        }
        else if (cVar6 == '\x03') {
LAB_149521d11:
          dVar18 = dVar18 - (dVar5 + -1.0);
        }
        else if (cVar6 == '\x02') {
          dVar18 = dVar18 + dVar5 * -0.5;
        }
LAB_149521d21:
        dVar19 = 0.0;
        if (0.0 <= (double)local_88 - dVar5) {
          dVar19 = (double)local_88 - dVar5;
        }
        if (dVar19 <= dVar18) {
          dVar18 = dVar19;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        FUN_146af48d8(param_1,(float)dVar18);
      }
      else {
        if (cVar6 == '\x01') goto LAB_149521d21;
        if (cVar6 == '\x03') goto LAB_149521d11;
        if (*(char *)((longlong)param_1 + 0x869) != '\0') {
          (**(code **)(param_1[0x9b] + 0xd8))
                    (param_1 + 0x9b,&local_a0,(longlong)iVar9 * 0x10 + local_90);
          if (local_a0 != (longlong *)0x0) {
            (**(code **)(*local_a0 + 0x58))(local_a0,&local_b0);
            pfVar7 = (float *)FUN_144b013e4(CONCAT44(fStack_ac,local_b0));
            plVar3 = local_a8;
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            fStack_ac = pfVar7[8] * (float)DAT_14c8463f0 * *pfVar7 +
                        pfVar7[10] * (float)DAT_14c8463f8 * pfVar7[1] + pfVar7[0xc];
            local_b0 = (float)DAT_14c8463f0 * *pfVar7 * pfVar7[7] +
                       (float)DAT_14c8463f8 * pfVar7[1] * pfVar7[9] + pfVar7[0xb];
            FUN_146af3580(local_bc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            fStack_ac = param_2[8] * (float)DAT_14c8463f0 * *param_2 +
                        param_2[10] * (float)DAT_14c8463f8 * param_2[1] + param_2[0xc];
            local_b0 = (float)DAT_14c8463f0 * *param_2 * param_2[7] +
                       (float)DAT_14c8463f8 * param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_c8,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            if (local_c4 <= local_b8) {
              dVar18 = (double)param_1[0x5e];
              fStack_ac = pfVar7[8] * *pfVar7 + pfVar7[10] * pfVar7[1] + pfVar7[0xc];
              local_b0 = *pfVar7 * pfVar7[7] + pfVar7[1] * pfVar7[9] + pfVar7[0xb];
              FUN_146af3580(local_d4,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              fStack_ac = param_2[8] * *param_2 + param_2[10] * param_2[1] + param_2[0xc];
              local_b0 = *param_2 * param_2[7] + param_2[1] * param_2[9] + param_2[0xb];
              FUN_146af3580(local_e0,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              if (local_dc < local_d0) {
                if ((longlong)(int)param_1[0xb2] == 0) {
                  fVar13 = 0.0;
                }
                else {
                  lVar8 = param_1[0xb1];
                  fVar21 = local_d0 - local_dc;
                  lVar10 = (longlong)(int)param_1[0xb2] * 0x10;
                  fVar13 = 0.0;
                  do {
                    lVar10 = lVar10 + -0x10;
                    FUN_149525546(param_1 + 0x9c,&local_108,lVar8);
                    (**(code **)(*local_108 + 0x58))(local_108,&local_b0);
                    pfVar7 = (float *)FUN_144b013e4(CONCAT44(fStack_ac,local_b0));
                    local_f0 = pfVar7[8] * *pfVar7 + pfVar7[10] * pfVar7[1];
                    local_f4 = *pfVar7 * pfVar7[7] + pfVar7[1] * pfVar7[9];
                    FUN_146af3580(local_ec,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_f4);
                    plVar3 = local_a8;
                    if (local_a8 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_a8 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_a8)(local_a8);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    plVar3 = local_100;
                    if (local_100 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_100 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_100)(local_100);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    fVar13 = fVar13 + (float)(~-(uint)(fVar21 <= local_e8) & 0x3f800000 |
                                             (uint)(fVar21 / local_e8) & -(uint)(fVar21 <= local_e8)
                                             );
                    if (fVar21 <= local_e8) break;
                    lVar8 = lVar8 + 0x10;
                    fVar21 = fVar21 - local_e8;
                  } while (lVar10 != 0);
                }
                dVar18 = 0.0;
                if ((char)param_1[0x5a] == '\0') {
                  dVar18 = (double)*(float *)(param_1 + 0x10c);
                }
                dVar18 = (double)fVar13 + (double)param_1[0x5e] + dVar18;
              }
            }
            else {
              dVar18 = dVar18 - (double)*(float *)(param_1 + 0x10c);
            }
            FUN_146af48d8(param_1,(float)dVar18);
          }
          plVar3 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_98 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
      }
      FUN_146af42a2(param_1);
      lVar8 = param_1[0xf9];
      lVar10 = param_1[0xfa];
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_1[0xfd];
      param_1[0xfc] = lVar8;
      param_1[0xfd] = lVar10;
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
    }
    param_1[0xf9] = 0;
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xfa] = 0;
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
  }
  plVar3 = (longlong *)param_1[0xfc];
  if (plVar3 == (longlong *)0x0) {
    uVar12 = 2;
  }
  else {
    uVar12 = 0;
    if ((char)param_1[0x5b] == '\x01') {
      local_98 = (longlong *)param_1[0xfd];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_a0 = plVar3;
      (**(code **)(param_1[0x9b] + 0xd8))(param_1 + 0x9b,&local_90,&local_a0);
      plVar3 = (longlong *)CONCAT44(uStack_84,local_88);
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
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar12 = local_90 == 0;
    }
  }
LAB_149521eb0:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 149522350 FUN_149522350 body=581 status=ok
// SIG undefined FUN_149522350(void)

void FUN_149522350(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x7e0);
  if (lVar3 != 0) {
    local_20 = *(longlong **)(param_1 + 0x7e8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_149525546(param_1 + 0x4e0,&local_38,&local_28);
    if (local_38 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x869) == '\x01') {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(param_1 + 0x758);
        *(longlong *)(param_1 + 0x750) = local_28;
        *(longlong **)(param_1 + 0x758) = local_20;
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
        (**(code **)(*local_38 + 0x58))(local_38,&local_58);
        local_48 = local_58;
        local_40 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_146af6ffc(param_1,*(undefined4 *)(param_1 + 0x7d8),&local_48,0);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      local_68 = local_28;
      local_60 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_149528b38(param_1 + 0x6e0,&local_68,&local_38);
    }
    *(undefined1 *)(param_1 + 0x869) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x7e8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495225b4 FUN_1495225b4 body=1264 status=ok
// SIG undefined FUN_1495225b4(void)

undefined8 * FUN_1495225b4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined1 *local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar5 == '\0')) {
    FUN_149528bc0(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGeneratePinnedRowNotAssignedMessage";
    local_798 = 0x25;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGeneratePinnedRow() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x666)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_1495228c5:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_1495228c5;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_7c8 = &local_7d8;
    FUN_149528e46(local_7c0,0x663);
    FUN_149528d28(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_149528da6(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_14952270c;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_14952270c;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14952270c;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14952270c;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14952266a:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14952266a;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_14952270c;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14952270c;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14952270c;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_14952270c:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149522aa6 FUN_149522aa6 body=1264 status=ok
// SIG undefined FUN_149522aa6(void)

undefined8 * FUN_149522aa6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined1 *local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x698) == 0) || (*(longlong **)(param_1 + 0x690) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x30))(), cVar5 == '\0')) {
    FUN_149528bc0(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGenerateWidgetNotAssignedMessage";
    local_798 = 0x22;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x682)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_149522db7:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_149522db7;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_7c8 = &local_7d8;
    FUN_149528e46(local_7c0,0x67f);
    FUN_149528d28(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_149528da6(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_149522bfe;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_149522bfe;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149522bfe;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_149522bfe;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_149522b5c:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_149522b5c;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x698) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x690);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_149522bfe;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_149522bfe;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_149522bfe;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_149522bfe:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149522f9a FUN_149522f9a body=32 status=ok
// SIG undefined FUN_149522f9a(void)

undefined8 FUN_149522f9a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SListView");
  return param_2;
}



// FUNCTION 149522fba FUN_149522fba body=563 status=ok
// SIG undefined FUN_149522fba(void)

void FUN_149522fba(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14952e5c8(param_1,&local_40,param_2);
  lVar5 = local_40;
  if (local_40 == -1) goto LAB_14952306e;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_149523035:
    iVar7 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar6 == '\0') goto LAB_149523035;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x398);
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar7;
  }
  if (iVar7 != 0) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(param_1 + 0x758);
    *(longlong *)(param_1 + 0x750) = lVar5;
    *(longlong **)(param_1 + 0x758) = local_38;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    uVar4 = *(undefined4 *)(param_3 + 0xc);
    local_50 = local_40;
    local_48 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_14952e914(param_1,&local_50,uVar4);
    if ((iVar7 == 3) && (uVar3 = *(ushort *)(param_3 + 8), (uVar3 & 0xf) != 0)) {
      if ((uVar3 & 3) == 0) {
        local_70 = local_40;
        local_68 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x28))
                  ((longlong *)(param_1 + 0x4d8),&local_70,1,1);
      }
      else {
        if ((uVar3 & 0xc) == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
        }
        local_60 = local_40;
        local_58 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x38))
                  ((longlong *)(param_1 + 0x4d8),&local_60);
      }
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,1);
    }
    else {
      local_80 = local_40;
      local_78 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_14952e9b2(param_1,&local_80);
    }
  }
  if ((local_40 != -1) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_14952306e:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149523200 FUN_149523200 body=339 status=ok
// SIG undefined FUN_149523200(void)

ulonglong FUN_149523200(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x228);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_149527dec(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149523354 FUN_149523354 body=150 status=ok
// SIG undefined FUN_149523354(void)

ulonglong FUN_149523354(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x30))();
    if (cVar1 != '\0') {
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x338) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x330);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      uVar4 = (ulonglong)uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495233ec FUN_1495233ec body=339 status=ok
// SIG undefined FUN_1495233ec(void)

ulonglong FUN_1495233ec(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x298);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_149527dec(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149523540 FUN_149523540 body=945 status=ok
// SIG undefined FUN_149523540(void)

void FUN_149523540(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [80];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
    iVar7 = (int)param_1[-0x29];
  }
  else {
    if ((int)param_1[-0x27] == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)param_1[-0x28];
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + -0x29) = iVar7;
  }
  if (iVar7 == 0) goto LAB_1495235b2;
  if (param_3 == '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_14952ec5e(param_1 + 0x45,&local_40);
  }
  else {
    FUN_149527ed0(param_1 + 0x45,local_b0,param_2);
  }
  if (param_4 == '\0') {
    if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
      iVar7 = (int)param_1[-0x29];
    }
    else {
      if ((int)param_1[-0x27] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[-0x28];
      }
      iVar7 = (**(code **)(*plVar8 + 0x58))();
      *(int *)(param_1 + -0x29) = iVar7;
    }
    if (iVar7 == 1) goto LAB_149523654;
    if (((int)param_1[-0x27] != 0) && ((longlong *)param_1[-0x28] != (longlong *)0x0)) {
      cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))();
      if (cVar6 == '\0') {
        iVar7 = (int)param_1[-0x29];
      }
      else {
        if ((int)param_1[-0x27] == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[-0x28];
        }
        iVar7 = (**(code **)(*plVar8 + 0x58))();
        *(int *)(param_1 + -0x29) = iVar7;
      }
    }
    if (iVar7 == 2) goto LAB_149523654;
  }
  else {
LAB_149523654:
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x50];
    param_1[0x4f] = lVar3;
    param_1[0x50] = lVar4;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x52];
    param_1[0x51] = lVar3;
    param_1[0x52] = lVar4;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  FUN_1469ffd58(param_1 + -0x24,0);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_50,param_2);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50,&local_60);
      uVar5 = *(undefined8 *)(DAT_14c968098 + 200);
      plVar8 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_14171d2aa(local_c8,1);
      FUN_14171d2aa(local_e0,0);
      local_f0 = local_60;
      local_e8 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_100 = 0;
      local_108 = local_c8;
      FUN_14171f2ba(local_b0,&local_f0,0,local_e0);
      FUN_1428785ec(uVar5,local_b0);
      FUN_1417211dc(local_b0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_58 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
LAB_1495235b2:
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495238f2 FUN_1495238f2 body=42 status=ok
// SIG undefined FUN_1495238f2(void)

void FUN_1495238f2(longlong param_1)

{
  FUN_14952ea0a(param_1 + 0x228);
  FUN_1469ffd58(param_1 + -0x120,0);
  return;
}



// FUNCTION 14952391c FUN_14952391c body=621 status=ok
// SIG undefined FUN_14952391c(void)

void FUN_14952391c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined1 local_5c [4];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0))
     || (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))(), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + -0x148);
  }
  else {
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + -0x140);
    }
    iVar3 = (**(code **)(*plVar5 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar3;
  }
  if (iVar3 == 0) goto LAB_1495239c0;
  plVar5 = *(longlong **)(param_1 + 0x3d8);
  if (plVar5 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_58);
    if (local_50 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x288);
      uVar8 = 0;
      if (lVar11 != 0) {
        plVar5 = *(longlong **)(param_1 + 0x290);
        if (plVar5 == (longlong *)0x0) {
LAB_149523b05:
          uVar8 = 0;
          plVar7 = local_58;
          do {
            if (*plVar7 == lVar11) goto LAB_149523b28;
            plVar7 = plVar7 + 2;
            uVar8 = uVar8 + 1;
          } while (plVar7 != local_58 + (longlong)local_50 * 2);
          uVar8 = 0xffffffff;
LAB_149523b28:
          if (plVar5 == (longlong *)0x0) goto LAB_149523a3a;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          uVar8 = 0xffffffff;
          if (local_50 != 0) goto LAB_149523b05;
        }
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
LAB_149523a3a:
      uVar6 = 0xffffffff;
      if ((longlong)local_50 != 0) {
        lVar11 = 0;
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          if (*(longlong *)((longlong)local_58 + lVar11) == *param_2) break;
          uVar4 = uVar4 + 1;
          lVar11 = lVar11 + 0x10;
          uVar6 = 0xffffffff;
        } while ((longlong)local_50 << 4 != lVar11);
      }
      uVar4 = local_50 - 1;
      if ((int)uVar4 <= (int)uVar8) {
        uVar8 = uVar4;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      uVar8 = (uint)uVar9;
      if ((int)uVar6 < (int)uVar4) {
        uVar4 = uVar6;
      }
      uVar6 = 0;
      if (0 < (int)uVar4) {
        uVar6 = uVar4;
      }
      iVar3 = uVar8 - uVar6;
      if (iVar3 != 0) {
        lVar11 = (ulonglong)((int)uVar8 < (int)uVar4) * 2 + -1;
        lVar10 = uVar9 << 4;
        local_60 = uVar6;
        do {
          FUN_149527ed0(param_1 + 0x228,local_5c,(longlong)local_58 + lVar10);
          lVar10 = lVar10 + lVar11 * 0x10;
          iVar3 = iVar3 + (int)lVar11;
          uVar8 = local_60;
        } while (iVar3 != 0);
      }
      FUN_149527ed0(param_1 + 0x228,local_5c,local_58 + (ulonglong)uVar8 * 2);
    }
  }
  FUN_1469ffd58(param_1 + -0x120,0);
LAB_1495239c0:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149523b8a FUN_149523b8a body=391 status=ok
// SIG undefined FUN_149523b8a(void)

void FUN_149523b8a(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0)) {
LAB_149523be4:
    iVar4 = *(int *)(param_1 + -0x148);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar3 == '\0') goto LAB_149523be4;
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + -0x140);
    }
    iVar4 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar4;
  }
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x328) != 0)) {
    plVar6 = (longlong *)(param_1 + 800);
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x30))();
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x230)) {
          local_40 = param_1 + 0x238;
          local_48 = 0x100000000;
          local_38 = 0xffffffff;
          local_30 = 0;
          if (*(int *)(param_1 + 0x250) == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1449c0562(&local_48);
            lVar5 = (longlong)local_38._4_4_;
          }
          local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x228) + lVar5 * 0x18);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 8 + lVar5 * 0x18);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            local_50 = plVar2;
            FUN_14952ee8c(plVar6,&local_58,param_2);
            LOCK();
            plVar6 = plVar2 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            goto LAB_149523c10;
          }
        }
        else {
          local_58 = 0;
        }
        local_50 = (longlong *)0x0;
        FUN_14952ee8c(plVar6,&local_58,param_2);
      }
    }
  }
LAB_149523c10:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149523e5e FUN_149523e5e body=56 status=ok
// SIG undefined FUN_149523e5e(void)

void FUN_149523e5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000149523e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149523e96 FUN_149523e96 body=56 status=ok
// SIG undefined FUN_149523e96(void)

void FUN_149523e96(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000149523ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149523ee4 FUN_149523ee4 body=161 status=ok
// SIG undefined FUN_149523ee4(void)

void FUN_149523ee4(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_14952ec5e(param_1 + 0x298,&local_30);
  }
  else {
    FUN_149527ed0(param_1 + 0x298,local_1c,param_2);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149523fb0 FUN_149523fb0 body=82 status=ok
// SIG undefined FUN_149523fb0(void)

void FUN_149523fb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x280))(param_1 + -0x4d8,param_3);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000149523ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149524002 FUN_149524002 body=138 status=ok
// SIG undefined FUN_149524002(void)

undefined4 FUN_149524002(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_14952ef14(param_1 + 0x340,&local_28);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952408e FUN_14952408e body=138 status=ok
// SIG undefined FUN_14952408e(void)

undefined4 FUN_14952408e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_14952ef14(param_1 + 0x350,&local_28);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952411a FUN_14952411a body=83 status=ok
// SIG undefined FUN_14952411a(void)

undefined4 FUN_14952411a(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + -0x138) != 0) && (*(longlong **)(param_1 + -0x140) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x138) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x140);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + -0x148) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + -0x148);
}



// FUNCTION 149524182 FUN_149524182 body=343 status=ok
// SIG undefined FUN_149524182(void)

longlong * FUN_149524182(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_149525ff0(param_2,*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c));
  local_40 = param_1 + 0x238;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x228);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      puVar4 = (undefined8 *)((longlong)iStack_54 * 0x18 + *local_70);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149527a72(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar4;
      lVar3 = puVar4[1];
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1495242da FUN_1495242da body=189 status=ok
// SIG undefined FUN_1495242da(void)

longlong * FUN_1495242da(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_149525546(param_1 + 8,&local_38);
  if (local_38 == 0) {
    FUN_149525546(param_1 + 0xd8,param_2,param_3);
  }
  else {
    *param_2 = local_38;
    param_2[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495243a2 FUN_1495243a2 body=138 status=ok
// SIG undefined FUN_1495243a2(void)

undefined8 * FUN_1495243a2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x4c8);
  if (plVar3 == (longlong *)0x0) {
LAB_14952441b:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14952441b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + -0x4d0);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14952442c FUN_14952442c body=544 status=ok
// SIG undefined FUN_14952442c(void)

void FUN_14952442c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd36170;
  param_1[0x4d] = &PTR_FUN_14bd36450;
  param_1[0x9b] = &PTR_LAB_14bd36470;
  puVar3 = (undefined8 *)param_1[0x116];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_1449db362(param_1 + 0x113);
  FUN_1449db362(param_1 + 0x110);
  FUN_1449db362(param_1 + 0x10a);
  FUN_1449db362(param_1 + 0x107);
  FUN_1449db362(param_1 + 0x105);
  FUN_1449db362(param_1 + 0x103);
  FUN_1449db362(param_1 + 0x101);
  FUN_1449db362(param_1 + 0xff);
  plVar4 = (longlong *)param_1[0xfd];
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
  plVar4 = (longlong *)param_1[0xfa];
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
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_1495246ea(param_1 + 0xee);
  plVar4 = (longlong *)param_1[0xed];
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
  plVar4 = (longlong *)param_1[0xeb];
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
  *(undefined4 *)(param_1 + 0xe9) = 0;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_1495246ea(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xde);
  FUN_1449db362(param_1 + 0xdc);
  FUN_1449db362(param_1 + 0xda);
  FUN_1449db362(param_1 + 0xd8);
  FUN_1449db362(param_1 + 0xd6);
  FUN_1449db362(param_1 + 0xd4);
  FUN_1449db362(param_1 + 0xd2);
  FUN_1449db362(param_1 + 0xd0);
  FUN_14952464c(param_1 + 0xb6);
  FUN_14952464c(param_1 + 0x9c);
  FUN_146af62c8(param_1);
  return;
}



// FUNCTION 14952464c FUN_14952464c body=157 status=ok
// SIG undefined FUN_14952464c(void)

void FUN_14952464c(longlong param_1)

{
  FUN_14951ff11(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_14951ff11(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1495248a4(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_149524a30(param_1 + 8);
  return;
}



// FUNCTION 1495246ea FUN_1495246ea body=54 status=ok
// SIG undefined FUN_1495246ea(void)

void FUN_1495246ea(longlong *param_1)

{
  FUN_149524720(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149524720 FUN_149524720 body=386 status=ok
// SIG undefined FUN_149524720(void)

void FUN_149524720(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1495248a4 FUN_1495248a4 body=52 status=ok
// SIG undefined FUN_1495248a4(void)

void FUN_1495248a4(longlong *param_1)

{
  FUN_1495248d8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1495248d8 FUN_1495248d8 body=343 status=ok
// SIG undefined FUN_1495248d8(void)

void FUN_1495248d8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149524a30 FUN_149524a30 body=52 status=ok
// SIG undefined FUN_149524a30(void)

void FUN_149524a30(longlong *param_1)

{
  FUN_149524a64();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149524a64 FUN_149524a64 body=307 status=ok
// SIG undefined FUN_149524a64(void)

void FUN_149524a64(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_149524b98((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149524b98 FUN_149524b98 body=100 status=ok
// SIG undefined FUN_149524b98(void)

void FUN_149524b98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000149524bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149524bfc FUN_149524bfc body=2377 status=ok
// SIG undefined FUN_149524bfc(void)

undefined1 *
FUN_149524bfc(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_R13;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong *)param_1[0x116] == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x116] + 8))();
    if ((0 < local_50) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e48;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 == unaff_R13) goto LAB_149524ca8;
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar12 = *(longlong **)(param_4 + 0x30);
        if (plVar12 == (longlong *)0x0) goto LAB_149524d9f;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e30;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 != unaff_R13) goto LAB_149524f0f;
LAB_149524db3:
        lVar9 = (longlong)(local_50 + -1);
LAB_149524dc0:
        lVar11 = local_58[lVar9 * 2];
        plVar12 = (longlong *)local_58[lVar9 * 2 + 1];
LAB_149524cb7:
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (lVar11 == 0) {
          uVar10 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          goto LAB_149524ddd;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_68 = lVar11;
        local_60 = plVar12;
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_4);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
LAB_149524e63:
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar12 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        goto LAB_149524d61;
      }
      if (lVar9 == DAT_14c964e48) {
LAB_149524ca8:
        lVar11 = *local_58;
        plVar12 = (longlong *)local_58[1];
        goto LAB_149524cb7;
      }
LAB_149524d9f:
      if (lVar9 == DAT_14c964e30) goto LAB_149524db3;
LAB_149524f0f:
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) {
        if (lVar9 != DAT_14c964e00) {
LAB_1495250e7:
          if (lVar9 != DAT_14c964e18) goto LAB_14952519a;
LAB_1495250f4:
          lVar9 = param_1[0xea];
          if (lVar9 == 0) {
            iVar5 = 0;
          }
          else {
            plVar12 = (longlong *)param_1[0xeb];
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            iVar5 = -1;
            if ((longlong)local_50 != 0) {
              lVar11 = 0;
              iVar8 = 0;
              do {
                iVar5 = iVar8;
                if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
                iVar8 = iVar8 + 1;
                lVar11 = lVar11 + 0x10;
                iVar5 = -1;
              } while ((longlong)local_50 * 0x10 != lVar11);
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar12 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
          iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
          if (local_50 - iVar8 <= iVar5) goto LAB_149524db3;
          lVar9 = (longlong)(iVar8 + iVar5);
          goto LAB_149524dc0;
        }
LAB_149524f54:
        lVar9 = param_1[0xea];
        if (lVar9 == 0) {
          iVar5 = 0;
        }
        else {
          plVar12 = (longlong *)param_1[0xeb];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          iVar5 = -1;
          if ((longlong)local_50 != 0) {
            lVar11 = 0;
            iVar8 = 0;
            do {
              iVar5 = iVar8;
              if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
              iVar8 = iVar8 + 1;
              lVar11 = lVar11 + 0x10;
              iVar5 = -1;
            } while ((longlong)local_50 * 0x10 != lVar11);
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar12 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
        iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
        iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
        if (iVar8 <= iVar5) {
          lVar9 = (longlong)(iVar5 - iVar8);
          goto LAB_149524dc0;
        }
        goto LAB_149524ca8;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e00;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_149524f54;
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) goto LAB_1495250e7;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e18;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_1495250f4;
LAB_14952519a:
      uVar10 = 0;
      plVar12 = (longlong *)0x0;
LAB_149524ddd:
      if ((*(char *)((longlong)param_1 + 0x867) == '\x01') && (param_1[0xea] != 0)) {
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar6 = *(longlong **)(param_4 + 0x30);
        lVar11 = DAT_14c964de8;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          lVar11 = DAT_14c964de8;
          UNLOCK();
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          local_c0 = uVar10;
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar10 = local_c0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              uVar10 = local_c0;
            }
          }
        }
        if (lVar9 != lVar11) goto LAB_149524e44;
        local_68 = param_1[0xea];
        local_60 = (longlong *)param_1[0xeb];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
          if ((((int)param_1[0x74] == 0) || ((longlong *)param_1[0x73] == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 == '\0')) {
            iVar5 = (int)param_1[0x72];
          }
          else {
            if ((int)param_1[0x74] == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)param_1[0x73];
            }
            iVar5 = (**(code **)(*plVar6 + 0x58))();
            *(int *)(param_1 + 0x72) = iVar5;
          }
          if (iVar5 == 2) goto LAB_14952531a;
          plVar6 = param_1 + 0x9b;
          cVar2 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          if (cVar2 == '\0') {
            local_88 = local_68;
            local_80 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_88,1,1);
            goto LAB_14952536c;
          }
          bVar13 = false;
        }
        else {
LAB_14952531a:
          plVar6 = param_1 + 0x9b;
          uVar4 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          local_78 = local_68;
          local_70 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar6 + 0x28))(plVar6,&local_78,uVar4 ^ 1,1);
LAB_14952536c:
          (**(code **)(param_1[0x9b] + 0x40))(param_1 + 0x9b,0);
          bVar13 = true;
        }
        lVar9 = param_1[0xea];
        lVar11 = param_1[0xeb];
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)param_1[0xed];
        param_1[0xec] = lVar9;
        param_1[0xed] = lVar11;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        FUN_149525546(param_1 + 0x9c,&local_98,&local_68);
        if (local_98 == 0) {
          uVar3 = *(undefined4 *)(param_4 + 0xc);
          local_a8 = local_68;
          local_a0 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          FUN_1495256f4(param_1,&local_a8,uVar3);
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_90 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
            }
          }
        }
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (bVar13) goto LAB_149524e63;
      }
      else {
LAB_149524e44:
        if ((*(ushort *)(param_4 + 8) & 0xc) != 0 && (*(ushort *)(param_4 + 8) & 0x33) == 0) {
          lVar9 = *(longlong *)(param_4 + 0x20);
          plVar6 = *(longlong **)(param_4 + 0x30);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          if (lVar9 == DAT_14c966f88) {
            if ((((int)param_1[0x74] != 0) && ((longlong *)param_1[0x73] != (longlong *)0x0)) &&
               (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 != '\0')) {
              if ((int)param_1[0x74] == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = (longlong *)param_1[0x73];
              }
              uVar3 = (**(code **)(*plVar7 + 0x58))();
              *(undefined4 *)(param_1 + 0x72) = uVar3;
            }
            bVar13 = (int)param_1[0x72] == 3;
          }
          else {
            bVar13 = false;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (bVar13) {
            plVar6 = param_1 + 0x9b;
            (**(code **)(param_1[0x9b] + 0x30))(plVar6);
            if (0 < local_50) {
              lVar11 = 8;
              lVar9 = 0;
              do {
                local_b8 = *(undefined8 *)((longlong)local_58 + lVar11 + -8);
                local_b0 = *(longlong *)((longlong)local_58 + lVar11);
                if (local_b0 != 0) {
                  LOCK();
                  *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*plVar6 + 0x28))(plVar6,&local_b8,1,0);
                lVar9 = lVar9 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar9 < local_50);
            }
            (**(code **)(*plVar6 + 0x40))(plVar6);
            goto LAB_149524e63;
          }
        }
        if ((char)uVar10 != '\0') goto LAB_149524e63;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  FUN_146af5694(param_1,param_2,param_3,param_4);
LAB_149524d61:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149525546 FUN_149525546 body=429 status=ok
// SIG undefined FUN_149525546(void)

undefined8 * FUN_149525546(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  local_40 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_149525798((longlong *)(param_1 + 8),uVar6 >> 0x10 ^ uVar6,&local_40);
  plVar3 = local_38;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 8);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar8 != 0) {
    *param_2 = *(undefined8 *)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    param_2[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1495256f4 FUN_1495256f4 body=164 status=ok
// SIG undefined FUN_1495256f4(void)

void FUN_1495256f4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  *(longlong *)(param_1 + 2000) = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  *(undefined4 *)(param_1 + 0x7d8) = param_3;
  FUN_146af42a2(param_1);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000149525789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149525798 FUN_149525798 body=228 status=ok
// SIG undefined FUN_149525798(void)

int FUN_149525798(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 14952587c FUN_14952587c body=435 status=ok
// SIG undefined FUN_14952587c(void)

undefined8 *
FUN_14952587c(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (((*(int *)(param_1 + 0x810) == 0) || (*(longlong **)(param_1 + 0x808) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x30))(), cVar3 == '\0')) {
LAB_1495259a9:
    *param_2 = uVar5;
    param_2[1] = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_1495259d9;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x8b0);
    if (plVar4 == (longlong *)0x0) {
      local_68 = 0;
      local_60 = 0;
    }
    else {
      (**(code **)(*plVar4 + 8))(plVar4,&local_68);
    }
    plVar4 = plVar6;
    while( true ) {
      plVar6 = plVar4;
      param_4 = param_4 + (param_5 - 1 | 1);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x810) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x808);
      }
      local_58 = uVar5;
      local_50 = plVar6;
      cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_58);
      if (cVar3 != '\0') goto LAB_1495259a9;
      if (((int)param_4 < 0) || (local_60 <= (int)param_4)) break;
      uVar5 = *(undefined8 *)(local_68 + (ulonglong)param_4 * 0x10);
      plVar4 = *(longlong **)(local_68 + 8 + (ulonglong)param_4 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)();
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
    }
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    if (plVar6 == (longlong *)0x0) goto LAB_1495259d9;
  }
  LOCK();
  plVar4 = plVar6 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1495259d9:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149525a30 FUN_149525a30 body=143 status=ok
// SIG undefined FUN_149525a30(void)

undefined8 * FUN_149525a30(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xc);
  *param_1 = &PTR_FUN_14bd36560;
  param_1[0xd] = &PTR_FUN_14bd36650;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149525ac0 FUN_149525ac0 body=38 status=ok
// SIG undefined FUN_149525ac0(void)

undefined8 FUN_149525ac0(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149525aec FUN_149525aec body=877 status=ok
// SIG undefined FUN_149525aec(void)

longlong * FUN_149525aec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar10 = *(longlong **)(param_1 + -0x48), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    lVar9 = 0;
    iVar8 = (int)plVar10[1];
    do {
      iVar7 = iVar8;
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_149525ba4;
      }
      LOCK();
      iVar8 = (int)plVar10[1];
      bVar11 = iVar7 == iVar8;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
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
LAB_149525ba4:
    FUN_146a38fda(param_2,*(int *)(lVar9 + 0x708) - *(int *)(lVar9 + 0x734));
    local_60 = (longlong *)(lVar9 + 0x710);
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(lVar9 + 0x728) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = (longlong *)(lVar9 + 0x700);
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        FUN_149525546(lVar9 + 0x4e0,&local_68,(longlong)iVar8 * 0x18 + *local_90);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x58))(local_68,&local_b0);
          plVar1 = local_a8;
          local_a0 = local_b0;
          local_98 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          FUN_146974758(&local_b0,&local_a0);
          plVar1 = local_a8;
          lVar5 = local_b0;
          if (local_a8 == (longlong *)0x0) {
            if (local_b0 != 0) goto LAB_149525d38;
          }
          else {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (lVar5 != 0) {
LAB_149525d38:
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_14697b806(param_2,iVar8);
              }
              lVar4 = *param_2;
              *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = lVar5;
              *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = plVar1;
              if (plVar1 == (longlong *)0x0) goto LAB_149525d84;
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
            }
            LOCK();
            plVar3 = plVar1 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
LAB_149525d84:
          plVar1 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_98 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
    local_78 = uVar6;
    if (iVar7 != 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149525e5a FUN_149525e5a body=213 status=ok
// SIG undefined FUN_149525e5a(void)

ulonglong FUN_149525e5a(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar9 = *(longlong **)(param_1 + -0x48), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar8 = 0;
  }
  else {
    lVar7 = 0;
    iVar4 = (int)plVar9[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_149525ec3;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
LAB_149525ec3:
    if (((*(int *)(lVar7 + 0x3a0) != 0) && (*(longlong **)(lVar7 + 0x398) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x398) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar7 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar7 + 0x398);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar7 + 0x390) = uVar5;
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(int *)(lVar7 + 0x390) == 3);
    if (iVar3 != 0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 149525f34 FUN_149525f34 body=92 status=ok
// SIG undefined FUN_149525f34(void)

void FUN_149525f34(longlong param_1)

{
  FUN_149525f90(param_1 + 0xc0,param_1 + 0xa8);
  FUN_14951ff11(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_14952659e(param_1 + 0xa8,0);
  }
  FUN_149526036(param_1);
  return;
}



// FUNCTION 149525f90 FUN_149525f90 body=95 status=ok
// SIG undefined FUN_149525f90(void)

undefined8 * FUN_149525f90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14951ff11(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14952650e(param_1,iVar1);
      FUN_149526570(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149525ff0 FUN_149525ff0 body=68 status=ok
// SIG undefined FUN_149525ff0(void)

void FUN_149525ff0(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14951ff11(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14952659e(param_1,param_2);
  return;
}



// FUNCTION 149526036 FUN_149526036 body=1238 status=ok
// SIG undefined FUN_149526036(void)

void FUN_149526036(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_1 + 0x18;
  if (0 < (int)param_1[0x19]) {
    plVar1 = param_1 + 1;
    local_d0 = param_1 + 0xb;
    local_c0 = param_1 + 3;
    lVar11 = 0;
    do {
      plVar8 = *(longlong **)(*local_c8 + lVar11 * 0x10);
      plVar9 = *(longlong **)(*local_c8 + 8 + lVar11 * 0x10);
      local_b8 = plVar8;
      local_78 = plVar8;
      local_70 = plVar9;
      if (plVar9 == (longlong *)0x0) {
LAB_1495260e0:
        local_b0 = (longlong *)0x0;
        bVar4 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        if (plVar9 == (longlong *)0x0) goto LAB_1495260e0;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_b0 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        bVar4 = false;
      }
      uVar6 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar7 = FUN_149525798(plVar1,uVar6 >> 0x10 ^ uVar6,&local_b8);
      plVar8 = local_b0;
      if (iVar7 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)iVar7 * 0x28 + *plVar1;
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (!bVar4) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar8 = local_70;
      if (lVar10 == 0) {
        if ((local_78 == (longlong *)0x0) &&
           (plVar8 = (longlong *)FUN_1495265fe(local_d0,&local_78), plVar8 != (longlong *)0x0)) {
          local_68 = (longlong *)&DAT_100000000;
          local_60 = local_c0;
          local_58 = 0xffffffff;
          local_50 = 0;
          if ((int)param_1[6] != 0) {
            FUN_1449c0562(&local_68);
          }
          local_a0 = local_58;
          uVar5 = local_a0;
          local_98 = local_50;
          local_94 = local_4c;
          local_b0 = local_68;
          local_a8 = local_60;
          local_80 = 0;
          local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          bVar4 = local_a0._4_4_ < (int)local_60[3];
          iVar7 = local_a0._4_4_;
          local_b8 = plVar1;
          local_a0 = uVar5;
          local_90 = plVar1;
          local_88 = plVar1;
          if (bVar4) {
            do {
              if (*(longlong *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x28) == *plVar8) {
                FUN_149526880(local_90);
                local_80 = CONCAT11(local_80._1_1_,1);
                goto LAB_149526442;
              }
              local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
              FUN_1449c0562(&local_b0);
              iVar7 = local_a0._4_4_;
            } while (local_a0._4_4_ < (int)local_a8[3]);
            if ((local_80 & 1) != 0) {
LAB_149526442:
              if (local_80._1_1_ == '\x01') {
                FUN_149526b06(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34));
              }
            }
          }
          FUN_149526968(local_d0,*plVar8);
        }
      }
      else {
        local_68 = *(longlong **)(lVar10 + 0x10);
        local_60 = *(longlong **)(lVar10 + 0x18);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (local_70 == (longlong *)0x0) {
          local_b8 = local_78;
          local_b0 = (longlong *)0x0;
          FUN_1495266f8(plVar1,&local_b8);
        }
        else {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          local_b8 = local_78;
          local_b0 = local_70;
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          FUN_1495266f8(plVar1,&local_b8);
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        FUN_149526968(local_d0,local_68);
        if (*param_1 != 0) {
          (**(code **)(*local_68 + 8))();
          if ((*(int *)(*param_1 + 0x6d8) != 0) &&
             (plVar8 = *(longlong **)(*param_1 + 0x6d0), plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x60))(plVar8,&local_68);
          }
        }
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_60 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x19]);
  }
  iVar7 = *(int *)((longlong)param_1 + 0xcc);
  FUN_14951ff11(param_1[0x18]);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0xcc) != 0)) {
    FUN_14952659e(local_c8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14952650e FUN_14952650e body=98 status=ok
// SIG undefined FUN_14952650e(void)

void FUN_14952650e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149526570 FUN_149526570 body=45 status=ok
// SIG undefined FUN_149526570(void)

void FUN_149526570(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14952659e FUN_14952659e body=95 status=ok
// SIG undefined FUN_14952659e(void)

void FUN_14952659e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1495265fe FUN_1495265fe body=248 status=ok
// SIG undefined FUN_1495265fe(void)

longlong FUN_1495265fe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) == *param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x20;
        goto LAB_1495266d4;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_1495266d4:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495266f8 FUN_1495266f8 body=391 status=ok
// SIG undefined FUN_1495266f8(void)

void FUN_1495266f8(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (uVar3 == uVar8) {
          FUN_149526880(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[4];
        puVar10 = puVar9 + 4;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149526746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149526880 FUN_149526880 body=117 status=ok
// SIG undefined FUN_149526880(void)

void FUN_149526880(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_149524b98((longlong)param_2 * 0x28 + *param_1);
  FUN_1495268f6(param_1,param_2);
  return;
}



// FUNCTION 1495268f6 FUN_1495268f6 body=114 status=ok
// SIG undefined FUN_1495268f6(void)

void FUN_1495268f6(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 149526968 FUN_149526968 body=132 status=ok
// SIG undefined FUN_149526968(void)

void FUN_149526968(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_1495269ec(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1495269ec FUN_1495269ec body=90 status=ok
// SIG undefined FUN_1495269ec(void)

void FUN_1495269ec(longlong *param_1,int param_2)

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
  FUN_149526a46();
  return;
}



// FUNCTION 149526a46 FUN_149526a46 body=78 status=ok
// SIG undefined FUN_149526a46(void)

void FUN_149526a46(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_149526a94(param_1,param_2);
  return;
}



// FUNCTION 149526a94 FUN_149526a94 body=114 status=ok
// SIG undefined FUN_149526a94(void)

void FUN_149526a94(longlong *param_1,int param_2)

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



// FUNCTION 149526b06 FUN_149526b06 body=68 status=ok
// SIG undefined FUN_149526b06(void)

void FUN_149526b06(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_149526b4a(param_1);
  return;
}



// FUNCTION 149526b4a FUN_149526b4a body=527 status=ok
// SIG undefined FUN_149526b4a(void)

void FUN_149526b4a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149526d5a FUN_149526d5a body=663 status=ok
// SIG undefined FUN_149526d5a(void)

void FUN_149526d5a(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (ulonglong *)*param_2;
  puVar5 = (ulonglong *)param_2[1];
  plVar9 = param_1 + 1;
  local_60 = puVar4;
  if (puVar5 == (ulonglong *)0x0) {
    local_58 = (ulonglong *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    local_58 = puVar5;
    if (puVar5 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
      UNLOCK();
      LOCK();
      puVar2 = puVar5 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar3 = (int *)((longlong)puVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*puVar5 + 0x10))(puVar5);
        }
      }
    }
  }
  uVar10 = ((uint)((ulonglong)puVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar4 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  iVar11 = FUN_149525798(plVar9,uVar10 >> 0x10 ^ uVar10,&local_60);
  puVar4 = local_58;
  bVar12 = true;
  if (iVar11 != -1) {
    bVar12 = (longlong)iVar11 * 0x28 + *plVar9 == 0;
  }
  if (local_58 != (ulonglong *)0x0) {
    LOCK();
    puVar2 = local_58 + 1;
    *(int *)puVar2 = (int)*puVar2 + -1;
    UNLOCK();
    if ((int)*puVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)puVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar4 + 0x10))(puVar4);
      }
    }
  }
  if (puVar5 != (ulonglong *)0x0) {
    LOCK();
    puVar4 = puVar5 + 1;
    *(int *)puVar4 = (int)*puVar4 + -1;
    UNLOCK();
    if ((int)*puVar4 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar3 = (int *)((longlong)puVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
  }
  if (bVar12) {
    local_60 = param_2;
    local_58 = param_3;
    FUN_149527090(plVar9,&local_68,&local_60);
    local_68 = *param_3;
    local_60 = &local_68;
    local_58 = param_2;
    FUN_149527406(param_1 + 0xb,local_4c,&local_60);
    (*(code *)**(undefined8 **)*param_3)();
    uVar6 = *param_1;
    local_78 = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_149526ff2(uVar6,&local_78,param_3);
  }
  local_60 = param_2;
  FUN_14952796a(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x16);
  *(uint *)(param_1 + 0x16) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar11 + 1U) {
    FUN_149527a72(param_1 + 0x15,iVar11);
  }
  lVar7 = param_1[0x15];
  *(ulonglong *)(lVar7 + (longlong)iVar11 * 0x10) = *param_2;
  uVar8 = param_2[1];
  *(ulonglong *)(lVar7 + 8 + (longlong)iVar11 * 0x10) = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149526ff2 FUN_149526ff2 body=141 status=ok
// SIG undefined FUN_149526ff2(void)

void FUN_149526ff2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1495278e2(param_1 + 0x680,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149527090 FUN_149527090 body=412 status=ok
// SIG undefined FUN_149527090(void)

undefined4 * FUN_149527090(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14952722e(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  uVar10 = puVar3[1];
  local_40[1] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  local_40[2] = *puVar4;
  uVar10 = puVar4[1];
  local_40[3] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_149527314(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_149526b4a(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952722e FUN_14952722e body=230 status=ok
// SIG undefined FUN_14952722e(void)

int * FUN_14952722e(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 149527314 FUN_149527314 body=240 status=ok
// SIG undefined FUN_149527314(void)

undefined8 FUN_149527314(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_149525798(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_149525798(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_149524b98(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1495268f6(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_14952733a;
    }
  }
  uVar13 = 0;
LAB_14952733a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149527406 FUN_149527406 body=343 status=ok
// SIG undefined FUN_149527406(void)

undefined4 * FUN_149527406(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14952755e(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_149527644(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_149527704(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952755e FUN_14952755e body=229 status=ok
// SIG undefined FUN_14952755e(void)

int * FUN_14952755e(longlong *param_1,int *param_2)

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



// FUNCTION 149527644 FUN_149527644 body=191 status=ok
// SIG undefined FUN_149527644(void)

undefined8 FUN_149527644(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_149526a94(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 149527704 FUN_149527704 body=477 status=ok
// SIG undefined FUN_149527704(void)

void FUN_149527704(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 1495278e2 FUN_1495278e2 body=134 status=ok
// SIG undefined FUN_1495278e2(void)

void FUN_1495278e2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14952796a FUN_14952796a body=263 status=ok
// SIG undefined FUN_14952796a(void)

void FUN_14952796a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_14951ff11(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 149527a72 FUN_149527a72 body=132 status=ok
// SIG undefined FUN_149527a72(void)

void FUN_149527a72(longlong param_1,int param_2)

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


