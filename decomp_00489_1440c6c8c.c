// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1440c6c8c FUN_1440c6c8c body=29 status=ok
// SIG undefined FUN_1440c6c8c(void)

undefined8 FUN_1440c6c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c6cbe FUN_1440c6cbe body=93 status=ok
// SIG undefined FUN_1440c6cbe(void)

void FUN_1440c6cbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440c6d1c FUN_1440c6d1c body=93 status=ok
// SIG undefined FUN_1440c6d1c(void)

void FUN_1440c6d1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440c6d7a FUN_1440c6d7a body=126 status=ok
// SIG undefined FUN_1440c6d7a(void)

void FUN_1440c6d7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f890;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c6de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c6e52 FUN_1440c6e52 body=98 status=ok
// SIG undefined FUN_1440c6e52(void)

undefined8 FUN_1440c6e52(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_1458cffc2(uVar2);
    }
  }
  return 1;
}



// FUNCTION 1440c6eb4 FUN_1440c6eb4 body=29 status=ok
// SIG undefined FUN_1440c6eb4(void)

undefined8 FUN_1440c6eb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c6ee6 FUN_1440c6ee6 body=93 status=ok
// SIG undefined FUN_1440c6ee6(void)

void FUN_1440c6ee6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440c6f44 FUN_1440c6f44 body=93 status=ok
// SIG undefined FUN_1440c6f44(void)

void FUN_1440c6f44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95f900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1440c6fa2 FUN_1440c6fa2 body=126 status=ok
// SIG undefined FUN_1440c6fa2(void)

void FUN_1440c6fa2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95f900;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c7011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c702a FUN_1440c702a body=20 status=ok
// SIG undefined FUN_1440c702a(void)

undefined1 FUN_1440c702a(longlong param_1)

{
  FUN_1440c703e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1440c703e FUN_1440c703e body=251 status=ok
// SIG undefined FUN_1440c703e(void)

void FUN_1440c703e(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = FUN_1403ca227();
  lVar4 = FUN_141842d78(lVar3 + 0x3e0);
  iVar2 = DAT_14c9647dc;
  lVar3 = DAT_14c9647c8;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar7 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == param_1[1])) &&
         ((lVar4 != 0 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar7;
    }
    else {
      lVar6 = 0;
    }
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar6 + 0x2638) = uVar1;
    if ((int)uVar1 < iVar2) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar8 = iVar2 == 0;
      if (bVar8) {
        *(int *)(lVar3 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar2 = iVar5;
      }
    }
    *(int *)(lVar6 + 0x263c) = iVar2;
  }
  return;
}



// FUNCTION 1440c713a FUN_1440c713a body=31 status=ok
// SIG undefined FUN_1440c713a(void)

undefined8 FUN_1440c713a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c7166 FUN_1440c7166 body=31 status=ok
// SIG undefined FUN_1440c7166(void)

undefined8 FUN_1440c7166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c718e FUN_1440c718e body=29 status=ok
// SIG undefined FUN_1440c718e(void)

undefined8 FUN_1440c718e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440c732a FUN_1440c732a body=93 status=ok
// SIG undefined FUN_1440c732a(void)

void FUN_1440c732a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c7388 FUN_1440c7388 body=93 status=ok
// SIG undefined FUN_1440c7388(void)

void FUN_1440c7388(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95fba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440c73e6 FUN_1440c73e6 body=126 status=ok
// SIG undefined FUN_1440c73e6(void)

void FUN_1440c73e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b95fba0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c7455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440c746e FUN_1440c746e body=266 status=ok
// SIG undefined FUN_1440c746e(void)

undefined8 FUN_1440c746e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440c7572;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440c7572;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440c7572:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440c7526;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440bd3ee(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1440c7526;
    }
  }
  uVar6 = 0;
LAB_1440c7526:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c757a FUN_1440c757a body=697 status=ok
// SIG undefined FUN_1440c757a(void)

void FUN_1440c757a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) {
      return;
    }
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar6 == iVar5;
    if (bVar12) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar12);
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_1440c75a5;
  *(undefined1 *)(lVar3 + 0x58c) = 0;
  iVar6 = *(int *)(lVar3 + 0x594);
  if (iVar6 != 0) {
    uVar7 = *(uint *)(lVar3 + 0x590);
    if (((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
         (plVar11 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0)) &&
        (((int)plVar11[2] == iVar6 && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) &&
       (lVar4 = *plVar11, lVar4 != 0)) {
      plVar11 = *(longlong **)(lVar3 + 0x20);
      if ((plVar11 == (longlong *)0x0) || (iVar6 = *(int *)(lVar3 + 0x1c), iVar6 == 0)) {
        lVar8 = 0;
      }
      else {
        uVar7 = *(uint *)(lVar3 + 0x18);
        lVar8 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          if ((lVar8 == 0) ||
             ((*(int *)(lVar8 + 0x10) != iVar6 || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_148cdf2f4();
            plVar11 = *(longlong **)(lVar3 + 0x20);
            if ((plVar11 == (longlong *)0x0) || (iVar6 = *(int *)(lVar3 + 0x1c), iVar6 == 0))
            goto LAB_1440c765f;
          }
        }
        uVar7 = *(uint *)(lVar3 + 0x18);
        if (((-1 < (int)uVar7) &&
            ((((int)uVar7 < DAT_14c9647dc &&
              (lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar10 != 0))
             && (*(int *)(lVar10 + 0x10) == iVar6)))) &&
           ((((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
             (lVar10 = (**(code **)(*plVar11 + 0x10))(), lVar10 != 0)) &&
            (plVar11 = *(longlong **)(lVar4 + 0x1c8), plVar11 != (longlong *)0x0)))) {
          (**(code **)(*plVar11 + 0x490))
                    (plVar11,lVar10,&DAT_14cadada0,*(undefined8 *)(lVar3 + 0x430));
        }
      }
LAB_1440c765f:
      FUN_1405e47c6(lVar4,0);
      if (lVar8 == 0) {
        puVar9 = &DAT_14c846480;
      }
      else {
        puVar9 = &DAT_14c846480;
        if (*(longlong *)(lVar8 + 0x1c8) != 0) {
          puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
        }
      }
      FUN_14113775c(lVar4,puVar9,0,0,0);
      FUN_148cd8f98(lVar3,*(undefined8 *)(lVar4 + 0x1c8));
      iVar6 = *(int *)(lVar3 + 0x594);
      if (iVar6 == 0) goto LAB_1440c778d;
      uVar7 = *(uint *)(lVar3 + 0x590);
    }
    if (((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
       ((puVar9 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
        puVar9 != (undefined8 *)0x0 &&
        ((*(int *)(puVar9 + 2) == iVar6 && ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        plVar11 = (longlong *)*puVar9;
      }
      else {
        plVar11 = (longlong *)0x0;
      }
      (**(code **)(*plVar11 + 0x330))(plVar11,CONCAT71((int7)((ulonglong)puVar9 >> 8),1));
    }
  }
LAB_1440c778d:
  FUN_148cd949c(lVar3);
LAB_1440c75a5:
  LOCK();
  plVar11 = plVar2 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001440c75c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1440c7870 FUN_1440c7870 body=64 status=ok
// SIG undefined FUN_1440c7870(void)

undefined8 * FUN_1440c7870(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b95fe20;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 1440c78b0 FUN_1440c78b0 body=4025 status=ok
// SIG undefined FUN_1440c78b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440c78b0(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = "AssetRegistry";
  uStack_80 = 0xd;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2080 = (ulonglong)uVar2;
  DAT_14cbc2088 = 0;
  atexit((_func_5014 *)&LAB_1440b8ae0);
  _DAT_14cbc2610 = 0x47efffffe0000000;
  _DAT_14cbc2618 = 0x47efffffe0000000;
  _DAT_14cbc2620 = 0x47efffffe0000000;
  _DAT_14cbc2628 = 0x47efffffe0000000;
  _DAT_14cbc2630 = 0x47efffffe0000000;
  _DAT_14cbc2638 = 0x47efffffe0000000;
  _DAT_14cbc2640 = 0x47efffffe0000000;
  _DAT_14cbc2648 = 0x47efffffe0000000;
  local_88 = "bone";
  uStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  local_88 = "Use";
  uStack_80 = 3;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2650 = (ulonglong)uVar2;
  local_88 = "Sight";
  uStack_80 = 5;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2658 = (ulonglong)uVar2;
  local_88 = "TargetLock";
  uStack_80 = 10;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2660 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_88,&DAT_14cbc2668);
  if (cVar1 == '\0') {
    _DAT_14cbc2668 = 0;
    uRam000000014cbc2670 = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc267c = 0;
  FUN_14052b5e0(&DAT_14cbc2678,"PlayerAwareness",0);
  _DAT_14cbc2688 = "PlayerAwareness";
  local_88 = "basic";
  uStack_80 = 5;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2690 = (ulonglong)uVar2;
  local_88 = "challenge";
  uStack_80 = 9;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2698 = (ulonglong)uVar2;
  local_88 = "online";
  uStack_80 = 6;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26a0 = (ulonglong)uVar2;
  local_88 = "social";
  uStack_80 = 6;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26a8 = (ulonglong)uVar2;
  local_88 = "alert";
  uStack_80 = 5;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26b0 = (ulonglong)uVar2;
  local_88 = "photo_mode";
  uStack_80 = 10;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26b8 = (ulonglong)uVar2;
  local_88 = "generic_task";
  uStack_80 = 0xc;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26c0 = (ulonglong)uVar2;
  local_88 = "mission";
  uStack_80 = 7;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26c8 = (ulonglong)uVar2;
  local_88 = "mail";
  uStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26d0 = (ulonglong)uVar2;
  local_88 = "respawn";
  uStack_80 = 7;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26d8 = (ulonglong)uVar2;
  local_88 = "tutorial";
  uStack_80 = 8;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26e0 = (ulonglong)uVar2;
  local_88 = "special_notification";
  uStack_80 = 0x14;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26e8 = (ulonglong)uVar2;
  local_88 = "generic_notification";
  uStack_80 = 0x14;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26f0 = (ulonglong)uVar2;
  local_88 = "vault_card";
  uStack_80 = 10;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc26f8 = (ulonglong)uVar2;
  local_88 = "ONLINE_MESSAGE";
  uStack_80 = 0xe;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2700 = (ulonglong)uVar2;
  local_88 = "INGAME_MESSAGE";
  uStack_80 = 0xe;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2708 = (ulonglong)uVar2;
  local_88 = "NOTIFICATION_MESSAGE";
  uStack_80 = 0x14;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2710 = (ulonglong)uVar2;
  local_88 = "MENU_TUTORIAL_MESSAGE";
  uStack_80 = 0x15;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2718 = (ulonglong)uVar2;
  local_88 = "collectible";
  uStack_80 = 0xb;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2720 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc2728,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440b8af8);
  FUN_140056680(&DAT_14cbc2738,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440b8b09);
  FUN_140056680(&DAT_14cbc2748,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440b8b1a);
  FUN_140056680(&DAT_14cbc2758,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440b8b2b);
  FUN_1446f470e(&DAT_14cbc2768,L"LIMB_GORED",1);
  _DAT_14cbc2770 = 0x4072c00000000000;
  _DAT_14cbc2778 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc2780,L"body",1);
  FUN_1446f470e(&DAT_14cbc2788,L"title_card",1);
  FUN_1446f470e(&DAT_14cbc2790,L"OakCharacterLockReplicator_ReplicatedLock",1);
  FUN_1446f470e(&DAT_14cbc2798,L"OakCharacterLockReplicator_LocalLock",1);
  _DAT_14cbc27a8 = &LAB_1440b8b54;
  _DAT_14cbc27b0 = 0x45007000;
  DAT_14cbc27b4 = 1;
  DAT_14cbc27a0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc27a0;
  atexit((_func_5014 *)&LAB_1440b8b59);
  FUN_1400b22c2(&DAT_14cbc27c0,"tint_siren");
  atexit((_func_5014 *)&LAB_1440b8f7e);
  FUN_1400b22c2(&DAT_14cbc27d0,"tint_health");
  atexit((_func_5014 *)&LAB_1440b8f8f);
  local_88 = "Cash";
  uStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc27e0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc27e8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440b8fa0);
  FUN_1446f470e(&DAT_14cbc27f8,L"UNSET",1);
  local_88 = "init";
  uStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  local_88 = "update";
  uStack_80 = 6;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  local_88 = "config_update";
  uStack_80 = 0xd;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  local_88 = "deinit";
  uStack_80 = 6;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  FUN_1446f470e(&DAT_14cbc2800,L"Party",1);
  FUN_1446f470e(&DAT_14cbc2808,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbc2810,L"Echo4_Attach_Socket",1);
  FUN_1446f470e(&DAT_14cbc2818,L"WaypointPathFound",1);
  FUN_1446f470e(&DAT_14cbc2820,L"PingLocation",1);
  local_88 = "ExplodingObject_Barrel";
  uStack_80 = 0x16;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2828 = (ulonglong)uVar2;
  local_88 = "ExplodingObject_Barrel_Order";
  uStack_80 = 0x1c;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2830 = (ulonglong)uVar2;
  local_88 = "Script_IO_ExplodingObject_Barrel_C";
  uStack_80 = 0x22;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2838 = (ulonglong)uVar2;
  local_88 = "StartSimulatingPhysics?";
  uStack_80 = 0x17;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2840 = (ulonglong)uVar2;
  local_88 = "barrel_state";
  uStack_80 = 0xc;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2848 = (ulonglong)uVar2;
  local_88 = "exploding";
  uStack_80 = 9;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2850 = (ulonglong)uVar2;
  local_88 = (char *)0x59354ecaf65e1ed4;
  uStack_80 = 0xb9c0d022;
  uStack_7c = 0x7e98beb2;
  _DAT_14cbc2858 = 0xf65e1ed4;
  uRam000000014cbc285c = 0x59354eca;
  uRam000000014cbc2860 = 0xb9c0d022;
  uRam000000014cbc2864 = 0x7e98beb2;
  FUN_141005458(&local_88,1,L"OakInteractiveObject",0);
  atexit((_func_5014 *)&LAB_1440b8feb);
  ram0x00014cbc289c = 0;
  FUN_14052b5e0(&DAT_14cbc2898,"StructuredInteractableData",0);
  _DAT_14cbc28a8 = "StructuredInteractableData";
  ram0x00014cbc28b4 = 0;
  FUN_14052b5e0(&DAT_14cbc28b0,"HealthTypes",0);
  _DAT_14cbc28c0 = "HealthTypes";
  local_98 = 0;
  FUN_1415c789c(&DAT_14cbc28c8,L"oak.Singularity.MinFrameRate");
  atexit(FUN_1440b97e8);
  DAT_14cbc2938 = 0;
  _DAT_14cbc2940 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_1440c4ad8;
  local_88 = &DAT_14011fc1e;
  FUN_146187eda(&local_88);
  atexit((_func_5014 *)&LAB_1440ba916);
  local_88 = "HiddenFact";
  uStack_80 = 10;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc29d0 = (ulonglong)uVar2;
  _DAT_14cbc29dc = 0;
  FUN_14052b5e0(&DAT_14cbc29d8,"Hidden",0);
  _DAT_14cbc29e8 = "Hidden";
  FUN_14661ed5e();
  atexit((_func_5014 *)&LAB_1440ba91b);
  local_88 = "vehicle_status";
  uStack_80 = 0xe;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_1446f470e(&local_88,L"oak_vehicle",1);
  _DAT_14cbc2bb0 = 0;
  local_88 = "distance_traveled";
  uStack_80 = 0x11;
  uStack_7c = uStack_7c & 0xffffff00;
  DAT_14cbc2ba8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_1446f470e(&local_88,L"oak_vehicle",1);
  _DAT_14cbc2bc0 = 0;
  local_88 = "time_in_boost";
  uStack_80 = 0xd;
  uStack_7c = uStack_7c & 0xffffff00;
  _DAT_14cbc2bb8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_1446f470e(&local_88,L"oak_vehicle",1);
  _DAT_14cbc2bd0 = 0;
  local_88 = "time_since_vehicle_enter";
  uStack_80 = 0x18;
  uStack_7c = uStack_7c & 0xffffff00;
  _DAT_14cbc2bc8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_88,1);
  FUN_1446f470e(&local_88,L"oak_vehicle",1);
  _DAT_14cbc2be0 = 0;
  _DAT_14cbc2bd8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc2be8,L"Unknown");
  atexit((_func_5014 *)&LAB_1440ba927);
  FUN_140056680(&DAT_14cbc2bf8,L"Entered");
  atexit((_func_5014 *)&LAB_1440ba938);
  FUN_140056680(&DAT_14cbc2c08,L"Exited");
  atexit((_func_5014 *)&LAB_1440ba949);
  FUN_140056680(&DAT_14cbc2c18,L"HealthDepleted");
  atexit((_func_5014 *)&LAB_1440ba95a);
  FUN_140056680(&DAT_14cbc2c28,L"EjectedByBlockingVolume");
  atexit((_func_5014 *)&LAB_1440ba96b);
  FUN_140056680(&DAT_14cbc2c38,L"Destroyed");
  atexit((_func_5014 *)&LAB_1440ba97c);
  local_88 = "vehicle";
  uStack_80 = 7;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2c48 = (ulonglong)uVar2;
  local_88 = "InVehicle";
  uStack_80 = 9;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2c50 = (ulonglong)uVar2;
  local_88 = "VehicleAnimLock";
  uStack_80 = 0xf;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2c58 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc2c60,L"WorldRT_Position",1);
  FUN_1446f470e(&DAT_14cbc2c68,L"Weapon3rd",1);
  FUN_1446f470e(&DAT_14cbc2c70,L"Weapon1",1);
  FUN_1446f470e(&DAT_14cbc2c78,L"Weapon2",1);
  local_88 = (char *)0x2a3a4a244d775a68;
  uStack_80 = 0xaa3060fe;
  uStack_7c = 0xf5171c13;
  _DAT_14cbc2c8c = 0x4d775a68;
  uRam000000014cbc2c90 = 0x2a3a4a24;
  uRam000000014cbc2c94 = 0xaa3060fe;
  uRam000000014cbc2c98 = 0xf5171c13;
  FUN_141005458(&local_88,0,L"OakVehicleBodyData",0);
  atexit((_func_5014 *)&LAB_1440bceb1);
  FUN_1446f470e(&DAT_14cbc2ca0,L"OverheadNameplateLineOfSight",1);
  local_88 = "Cloaking";
  uStack_80 = 8;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2cb0 = (ulonglong)uVar2;
  local_88 = "Cloaked";
  uStack_80 = 7;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2cb8 = (ulonglong)uVar2;
  local_88 = "Uncloaking";
  uStack_80 = 10;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2cc0 = (ulonglong)uVar2;
  local_88 = "Uncloaked";
  uStack_80 = 9;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  _DAT_14cbc2cc8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc2cd0,L"AICloakState",1);
  FUN_1446f470e(&DAT_14cbc2cd8,L"AICloakState_Transition",1);
  FUN_1446f470e(&DAT_14cbc2ce0,L"AICloaking",1);
  FUN_1446f470e(&local_88,L"Cloak",1);
  FUN_14598ad7a(&DAT_14cbc2ce8,&local_88,4);
  FUN_1446f470e(&DAT_14cbc2cf8,L"CloakDefined",1);
  local_88 = "ItemExchanged";
  uStack_80 = 0xd;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2d38 = (ulonglong)uVar2;
  local_88 = "NPCGiveTake";
  uStack_80 = 0xb;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_88,1);
  DAT_14cbc2d00 = (ulonglong)uVar2;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440c886c FUN_1440c886c body=194 status=ok
// SIG undefined FUN_1440c886c(void)

void FUN_1440c886c(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0xffffffff00000080;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0xf;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_1 + 0x44);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  return;
}



// FUNCTION 1440c89c1 FUN_1440c89c1 body=49 status=ok
// SIG undefined FUN_1440c89c1(void)

void FUN_1440c89c1(void)

{
  FUN_148bec3b0(DAT_14cbc2fb0,DAT_14cbc2fb8);
  if (DAT_14cbc2fb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1440c89fe FUN_1440c89fe body=652 status=ok
// SIG undefined FUN_1440c89fe(void)

void FUN_1440c89fe(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong lStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(&DAT_00001100 + param_1);
  if (lVar7 == 0) {
    uVar6 = FUN_141518b52();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(&DAT_00001100 + param_1) = lVar7;
  }
  lVar8 = *(longlong *)(param_1 + 0x1108);
  if (lVar8 == 0) {
    if ((lVar7 == 0) || (*(longlong *)(param_1 + 0x10f8) == 0)) goto LAB_1440c8c45;
    plVar12 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
      *(undefined8 *)(param_1 + 0x1108) = 0;
      goto LAB_1440c8c45;
    }
    uVar6 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar8 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x10f8));
    *(longlong *)(param_1 + 0x1108) = lVar8;
    if (lVar8 == 0) goto LAB_1440c8c45;
  }
  *(undefined8 *)(param_1 + 0x10f8) = 0;
  *(longlong *)(&DAT_00001100 + param_1) = 0;
  *(undefined8 *)(param_1 + 0x1108) = 0;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
  }
  FUN_14040d984(&local_70,lVar7);
  if (local_68 == (longlong *)0x0) goto LAB_1440c8c45;
  iVar5 = (int)local_68[1];
  do {
    if (iVar5 == 0) {
      plVar12 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_68[1];
    bVar13 = iVar5 == iVar3;
    if (bVar13) {
      *(int *)(local_68 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar12 = local_68;
  } while (!bVar13);
  LOCK();
  piVar1 = (int *)((longlong)local_68 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_68 + 0x10))();
  }
  lVar7 = local_70;
  if (plVar12 == (longlong *)0x0) goto LAB_1440c8c45;
  if (local_70 != 0) {
    local_78 = *(undefined8 *)(param_1 + 0xa8);
    local_68 = (longlong *)0x0;
    lStack_60 = 0;
    uVar6 = FUN_141518b52();
    lVar9 = FUN_14477b664(uVar6);
    lVar10 = FUN_141518b52();
    uVar6 = FUN_141518b52();
    FUN_1402d1bfa(local_58,uVar6,lVar8);
    if (local_58[0] != 0) {
      lStack_60 = 0;
    }
    local_70 = local_58[0];
    lVar11 = FUN_141518b52();
    if (lVar10 == 0) {
LAB_1440c8bc9:
      lVar11 = lVar10;
    }
    else if (lVar11 == 0) {
      lVar11 = 0;
    }
    else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
             lVar11 + 0x30)) goto LAB_1440c8bc9;
    if (lVar9 != lVar11) {
      lStack_60 = 0;
    }
    uVar6 = FUN_14477b664(lVar11);
    local_68 = (longlong *)FUN_14477b664(uVar6);
    if (local_68 != (longlong *)0x0 && local_58[0] != 0) {
      lStack_60 = lVar8;
    }
    FUN_1440c9b46(lVar7,local_58,&local_70,local_78);
    FUN_1440c8dba(local_58);
  }
  LOCK();
  plVar2 = plVar12 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_1440c8c45:
  FUN_140cd0ca6(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440c8c8c FUN_1440c8c8c body=301 status=ok
// SIG undefined FUN_1440c8c8c(void)

void FUN_1440c8c8c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = FUN_1410d0064();
  FUN_14040d984(&local_38,uVar7);
  if (local_30 != (longlong *)0x0) {
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_30[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar8 = local_30;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if ((local_38 != 0) && (plVar3 = *(longlong **)(param_1 + 0x80), plVar3 != (longlong *)0x0)) {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1440c8d7c;
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
        lVar4 = *(longlong *)(param_1 + 0x78);
        if (lVar4 != 0) {
          FUN_140457ffc(lVar4 + 0x58,param_1);
          FUN_140457ffc(lVar4 + 0x40,param_1);
          FUN_140457ffc(lVar4 + 0x70,param_1);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_48 = lVar4;
          local_40 = plVar3;
          FUN_1440c8dba();
        }
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
LAB_1440c8d7c:
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440c8dba FUN_1440c8dba body=224 status=ok
// SIG undefined FUN_1440c8dba(void)

void FUN_1440c8dba(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (((*(int *)(lVar4 + 0x120) != 0) && (uVar2 = *(uint *)(lVar4 + 0x11c), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(lVar4 + 0x120))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        FUN_14661fe80(*plVar5);
        lVar4 = *param_1;
      }
    }
    FUN_140b04202(lVar4);
  }
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
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



// FUNCTION 1440c8eac FUN_1440c8eac body=543 status=ok
// SIG undefined FUN_1440c8eac(void)

undefined4 FUN_1440c8eac(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_3;
  local_48 = 0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_48 = *(longlong *)(param_1 + 0x20);
  }
  else if ((longlong)*(int *)(lVar5 + 0xf0) != 0) {
    piVar6 = *(int **)(lVar5 + 0xe8);
    lVar7 = (longlong)*(int *)(lVar5 + 0xf0) * 0x48;
    do {
      if ((*piVar6 == *(int *)(param_1 + 0x38)) && (piVar6[2] == *(int *)(param_1 + 0x40))) {
        if (piVar6 != (int *)0x0) {
          FUN_1411a0e4c(piVar6 + 4,&local_60);
          local_48 = local_60;
        }
        break;
      }
      piVar6 = piVar6 + 0x12;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
  lVar7 = local_48;
  uVar4 = FUN_141518b52();
  local_40 = FUN_14477b664(uVar4);
  local_38 = 0;
  if (((local_40 != 0 && lVar7 != 0) &&
      (plVar1 = *(longlong **)(local_40 + 0xb8), plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_38 = FUN_144aff482(uVar4,&local_48);
    if ((local_38 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
      uVar3 = 0;
      lVar7 = FUN_140149a73(param_2,0);
      if (lVar7 == 0) goto LAB_1440c90a4;
      lVar7 = FUN_1401499e8(lVar7);
      if (lVar7 != 0) {
        local_58 = *(undefined4 *)(param_1 + 0x50);
        local_60 = *(longlong *)(param_1 + 0x48);
        lVar5 = FUN_140ef504c(lVar5 + 0xe8,&local_60,lVar7);
        if (lVar5 != 0) {
          if (local_40 == 0) {
            uVar4 = FUN_141518b52();
            local_40 = FUN_14477b664(uVar4);
          }
          lVar7 = local_38;
          if (((local_38 == 0) && (lVar7 = 0, local_40 != 0)) && (local_48 != 0)) {
            plVar1 = *(longlong **)(local_40 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
              lVar7 = 0;
              local_38 = lVar7;
            }
            else {
              uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar7 = FUN_144aff482(uVar4,&local_48);
              local_38 = lVar7;
            }
          }
          uVar3 = FUN_1440c90cc(lVar7,param_2,lVar5,0);
          goto LAB_1440c90a4;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1440c90a4:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1440c90cc FUN_1440c90cc body=2542 status=ok
// SIG undefined FUN_1440c90cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1440c90cc(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  undefined8 ****ppppuVar21;
  ulonglong uVar22;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  longlong local_100;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 ***local_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  int local_b0;
  undefined8 ***local_a8 [3];
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  undefined7 uVar23;
  
  uVar3 = DAT_14cb1ae68;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_d8,uVar3,param_2);
    plVar25 = plStack_d0;
    pppuVar7 = local_d8;
    if (((undefined8 ****)local_d8 == (undefined8 ****)0x0) || (plStack_d0 == (longlong *)0x0)) {
      plVar25 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plStack_d0 + 0xc) = *(int *)((longlong)plStack_d0 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar24 = plStack_d0 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    plVar24 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_d0 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    if (plVar25 != (longlong *)0x0) {
      iVar10 = (int)plVar25[1];
      do {
        plVar24 = (longlong *)0x0;
        if (iVar10 == 0) break;
        LOCK();
        iVar20 = (int)plVar25[1];
        bVar26 = iVar10 == iVar20;
        if (bVar26) {
          *(int *)(plVar25 + 1) = iVar10 + 1;
          iVar20 = iVar10;
        }
        iVar10 = iVar20;
        UNLOCK();
        plVar24 = plVar25;
      } while (!bVar26);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
      if (plVar24 != (longlong *)0x0) {
        if (((undefined8 ****)pppuVar7 == (undefined8 ****)0x0) ||
           (FUN_14040d984(&local_d8,param_2), plStack_d0 == (longlong *)0x0)) {
LAB_1440c9692:
          uVar22 = 0;
        }
        else {
          iVar10 = (int)plStack_d0[1];
          do {
            if (iVar10 == 0) {
              plVar25 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar20 = (int)plStack_d0[1];
            bVar26 = iVar10 == iVar20;
            if (bVar26) {
              *(int *)(plStack_d0 + 1) = iVar10 + 1;
              iVar20 = iVar10;
            }
            iVar10 = iVar20;
            UNLOCK();
            plVar25 = plStack_d0;
          } while (!bVar26);
          LOCK();
          piVar1 = (int *)((longlong)plStack_d0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_d0 + 0x10))();
          }
          ppppuVar21 = (undefined8 ****)local_d8;
          if (plVar25 == (longlong *)0x0) goto LAB_1440c9692;
          local_100 = param_4;
          if (((undefined8 ****)local_d8 == (undefined8 ****)0x0) ||
             ((cVar9 = FUN_14070c9d0(pppuVar7 + 0x3b,*(undefined4 *)((longlong)pppuVar7 + 0x1d4),
                                     DAT_14c763fd0), cVar9 != '\0' &&
              (cVar9 = FUN_140b04b50(param_2), cVar9 == '\0')))) {
            uVar22 = 0;
          }
          else {
            plStack_d0 = (longlong *)0x0;
            plStack_c8 = (longlong *)0x0;
            local_108 = param_3;
            uVar12 = FUN_141518b52();
            local_110 = FUN_14477b664(uVar12);
            lVar13 = FUN_141518b52();
            uVar12 = FUN_141518b52();
            FUN_1402d1bfa(local_a8,uVar12,param_1);
            pppuVar8 = local_a8[0];
            if ((undefined8 ****)local_a8[0] != (undefined8 ****)0x0) {
              plStack_c8 = (longlong *)0x0;
            }
            local_d8 = local_a8[0];
            lVar14 = FUN_141518b52();
            if (lVar13 == 0) {
LAB_1440c92e5:
              lVar14 = lVar13;
            }
            else if (lVar14 == 0) {
              lVar14 = 0;
            }
            else if ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                     lVar14 + 0x30)) goto LAB_1440c92e5;
            if (local_110 != lVar14) {
              plStack_c8 = (longlong *)0x0;
            }
            uVar12 = FUN_14477b664(lVar14);
            plStack_d0 = (longlong *)FUN_14477b664(uVar12);
            if (plStack_d0 != (longlong *)0x0 && (undefined8 ****)pppuVar8 != (undefined8 ****)0x0)
            {
              plStack_c8 = param_1;
            }
            FUN_1440c9b46(ppppuVar21,&local_e8,&local_d8,local_108);
            if (local_e8 == 0) {
              if ((longlong)(int)param_1[4] == 0) {
                fVar28 = 0.0;
              }
              else {
                plVar18 = (longlong *)param_1[3];
                lVar13 = (longlong)(int)param_1[4] * 0x50;
                fVar28 = 0.0;
                do {
                  lVar14 = plVar18[1];
                  if (lVar14 == 0) {
                    uVar12 = FUN_140927942();
                    lVar14 = FUN_14477b664(uVar12);
                    plVar18[1] = lVar14;
                  }
                  plVar15 = (longlong *)plVar18[2];
                  if (plVar15 == (longlong *)0x0) {
                    if ((lVar14 != 0) && (*plVar18 != 0)) {
                      plVar15 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar15 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                        plVar18[2] = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar15 + 0x110))(plVar15);
                        plVar15 = (longlong *)FUN_144aff482(uVar12,plVar18);
                        plVar18[2] = (longlong)plVar15;
                        if (plVar15 != (longlong *)0x0) {
                          lVar14 = plVar18[1];
                          goto LAB_1440c93e4;
                        }
                      }
                    }
                  }
                  else {
LAB_1440c93e4:
                    if (lVar14 == 0) {
                      uVar12 = FUN_140927942();
                      lVar14 = FUN_14477b664(uVar12);
                      plVar18[1] = lVar14;
                      plVar15 = (longlong *)plVar18[2];
                      if (plVar15 == (longlong *)0x0) {
                        if (lVar14 == 0) {
                          plVar15 = (longlong *)0x0;
                        }
                        else {
                          plVar15 = (longlong *)0x0;
                          if (*plVar18 != 0) {
                            plVar15 = *(longlong **)(lVar14 + 0xb8);
                            if ((plVar15 == (longlong *)0x0) ||
                               (cVar9 = (**(code **)(*plVar15 + 0x108))(), cVar9 == '\0')) {
                              plVar15 = (longlong *)0x0;
                            }
                            else {
                              uVar12 = (**(code **)(*plVar15 + 0x110))(plVar15);
                              plVar15 = (longlong *)FUN_144aff482(uVar12,plVar18);
                            }
                            plVar18[2] = (longlong)plVar15;
                          }
                        }
                      }
                    }
                    fVar27 = (float)(**(code **)(*plVar15 + 0xb0))();
                    if (0.0 < fVar27) {
                      local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
                      local_b0 = 0;
                      FUN_1456bb102(&local_d8,param_2);
                      FUN_1447c3578(plVar18 + 3,local_a8,&local_d8);
                      iVar10 = FUN_1405d5f74(local_a8);
                      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                         (ulonglong)((uint)local_88 * 0x120));
                      if (pcVar4 != (code *)0x0) {
                        ppppuVar21 = local_a8;
                        if (0x18 < local_90) {
                          ppppuVar21 = (undefined8 ****)local_a8[0];
                        }
                        (*pcVar4)(ppppuVar21);
                      }
                      if (0x18 < local_90) {
                        FUN_1400020a8(local_a8[0]);
                      }
                      if ((longlong)local_b0 != 0) {
                        lVar14 = (longlong)local_b0 + -1;
                        local_f0 = DAT_14c9a3da0;
                        local_110 = lVar14 * 0x10;
                        local_f4 = iVar10;
                        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_110),
                                      *(undefined4 *)(DAT_14c9a3da0 + 8 + local_110));
                        if (*(longlong *)(local_f0 + local_110) != 0) {
                          FUN_1400020a8();
                        }
                        lVar17 = DAT_14c9a3da0;
                        iVar10 = (int)lVar14;
                        if (DAT_14c9a3dd4 != 0) {
                          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
                        }
                        *(undefined4 *)(lVar17 + local_110) = 0xffffffff;
                        iVar20 = -1;
                        if (0 < DAT_14c9a3dd4) {
                          iVar20 = DAT_14c9a3dd0;
                        }
                        *(int *)(lVar17 + 4 + local_110) = iVar20;
                        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                        puVar16 = DAT_14c9a3dc0;
                        if (DAT_14c9a3dc0 == (undefined *)0x0) {
                          puVar16 = &DAT_14c9a3db0;
                        }
                        iVar20 = iVar10 + 0x1f;
                        if (-1 < iVar10) {
                          iVar20 = iVar10;
                        }
                        bVar6 = (byte)lVar14 & 0x1f;
                        DAT_14c9a3dd0 = iVar10;
                        *(uint *)(puVar16 + (longlong)(iVar20 >> 5) * 4) =
                             *(uint *)(puVar16 + (longlong)(iVar20 >> 5) * 4) &
                             (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                        local_b0 = 0;
                        iVar10 = local_f4;
                      }
                      if (((char)local_d8 == '\x03') && (plStack_c8 != (longlong *)0x0)) {
                        LOCK();
                        piVar1 = (int *)((longlong)plStack_c8 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plStack_c8 + 0x10))();
                        }
                      }
                      fVar28 = fVar28 + fVar27 * (float)iVar10;
                    }
                  }
                  ppppuVar21 = &local_d8;
                  plVar18 = plVar18 + 10;
                  lVar13 = lVar13 + -0x50;
                } while (lVar13 != 0);
              }
              lVar13 = local_108;
              if (*(float *)(pppuVar7 + 0xcc) <
                  fVar28 + _DAT_14c763fd4 + *(float *)((longlong)pppuVar7 + 0x664))
              goto LAB_1440c9726;
              uVar23 = (undefined7)((ulonglong)ppppuVar21 >> 8);
              uVar22 = CONCAT71(uVar23,1);
              if (local_108 == 0) {
LAB_1440c9a0a:
                uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
              }
              else {
                lVar14 = FUN_1414ccafc();
                if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
                  lVar14 = FUN_1447210f0(lVar13);
                  if ((lVar14 != 0) &&
                     (((*(byte *)(lVar14 + 0x155) & 0x20) == 0 &&
                      (lVar13 = FUN_1411604c4(lVar13), lVar13 != 0)))) {
                    lVar17 = *(longlong *)(lVar13 + 0x20);
                    if (lVar17 == 0) {
                      uVar12 = FUN_1401ad114();
                      lVar17 = FUN_14477b664(uVar12);
                      *(longlong *)(lVar13 + 0x20) = lVar17;
                    }
                    lVar19 = *(longlong *)(lVar13 + 0x28);
                    if (lVar19 == 0) {
                      uVar22 = 0;
                      if ((lVar17 == 0) || (*(longlong *)(lVar13 + 0x18) == 0)) goto LAB_1440c9728;
                      plVar18 = *(longlong **)(lVar17 + 0xb8);
                      if ((plVar18 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar9 == '\0')) {
                        *(undefined8 *)(lVar13 + 0x28) = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar18 + 0x110))(plVar18);
                        lVar19 = FUN_144aff482(uVar12,(longlong *)(lVar13 + 0x18));
                        *(longlong *)(lVar13 + 0x28) = lVar19;
                        if (lVar19 != 0) goto LAB_1440c984a;
                      }
                    }
                    else {
LAB_1440c984a:
                      local_d8 = *(undefined8 ****)(lVar19 + 0xb0);
                      plStack_d0 = *(longlong **)(lVar19 + 0xb8);
                      plStack_c8 = *(longlong **)(lVar19 + 0xc0);
                      uVar3 = *(undefined4 *)(lVar19 + 0xf0);
                      plVar18 = (longlong *)FUN_14040d818(lVar13,lVar14);
                      if ((plVar18 != (longlong *)0x0) && ((longlong)(int)plVar18[1] != 0)) {
                        plVar15 = (longlong *)*plVar18;
                        plVar18 = plVar15 + (longlong)(int)plVar18[1] * 0x14;
                        do {
                          plVar5 = (longlong *)plVar15[1];
                          if (plVar5 != (longlong *)0x0) {
                            iVar10 = (int)plVar5[1];
                            do {
                              if (iVar10 == 0) goto LAB_1440c9948;
                              LOCK();
                              iVar20 = (int)plVar5[1];
                              bVar26 = iVar10 == iVar20;
                              if (bVar26) {
                                *(int *)(plVar5 + 1) = iVar10 + 1;
                                iVar20 = iVar10;
                              }
                              iVar10 = iVar20;
                              UNLOCK();
                            } while (!bVar26);
                            lVar13 = *plVar15;
                            if (lVar13 != 0) {
                              LOCK();
                              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                              UNLOCK();
                              LOCK();
                              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                              UNLOCK();
                              cVar9 = FUN_140b03b36(lVar13,&local_d8,uVar3);
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
                              if (cVar9 != '\0') {
                                LOCK();
                                plVar18 = plVar5 + 1;
                                *(int *)plVar18 = (int)*plVar18 + -1;
                                UNLOCK();
                                if ((int)*plVar18 == 0) {
                                  (**(code **)*plVar5)(plVar5);
                                  LOCK();
                                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (*piVar1 == 0) {
                                    (**(code **)(*plVar5 + 0x10))(plVar5);
                                  }
                                }
                                if (local_100 == 0) goto LAB_1440c9a0a;
                                lVar13 = FUN_1414ccafc();
                                if (*(int *)(*(longlong *)(local_100 + 0x10) + 0x38) <
                                    *(int *)(lVar13 + 0x38)) goto LAB_1440c9a0a;
                                uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
                                if (*(longlong *)
                                     (*(longlong *)(*(longlong *)(local_100 + 0x10) + 0x30) +
                                     (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30) {
                                  uVar11 = FUN_148ce0180(local_108,local_100);
                                  uVar22 = (ulonglong)uVar11;
                                }
                                goto LAB_1440c9728;
                              }
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
LAB_1440c9948:
                          plVar15 = plVar15 + 0x14;
                        } while (plVar15 != plVar18);
                      }
                    }
                  }
                  goto LAB_1440c9726;
                }
                lVar14 = FUN_14145892e();
                if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
                   (uVar22 = CONCAT71(uVar23,1),
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
                  uVar22 = CONCAT71(uVar23,(*(byte *)(local_108 + 0x65) & 0x18) == 0x10);
                }
              }
            }
            else {
LAB_1440c9726:
              uVar22 = 0;
            }
LAB_1440c9728:
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_e0 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)local_e0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_e0 + 0x10))(local_e0);
                }
              }
            }
          }
          LOCK();
          plVar18 = plVar25 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar25)(plVar25);
            LOCK();
            piVar1 = (int *)((longlong)plVar25 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
          }
        }
        LOCK();
        plVar25 = plVar24 + 1;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)*plVar25 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
        goto LAB_1440c96b1;
      }
    }
  }
  uVar22 = 0;
LAB_1440c96b1:
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1440c9abb FUN_1440c9abb body=69 status=ok
// SIG undefined FUN_1440c9abb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440c9abb(void)

{
  _DAT_14cbc2fe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440c9afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc2ff0,1);
  return;
}



// FUNCTION 1440c9b00 FUN_1440c9b00 body=69 status=ok
// SIG undefined FUN_1440c9b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440c9b00(void)

{
  _DAT_14cbc2ff8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440c9b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc3000,1);
  return;
}



// FUNCTION 1440c9b46 FUN_1440c9b46 body=703 status=ok
// SIG undefined FUN_1440c9b46(void)

void FUN_1440c9b46(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined **ppuVar14;
  longlong lVar15;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar15 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar15);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x88) == '\x01')) {
        if (*(longlong *)(lVar3 + 0x98) == 0) {
          uVar10 = FUN_141518b52();
          uVar10 = FUN_14477b664(uVar10);
          *(undefined8 *)(lVar3 + 0x98) = uVar10;
        }
        lVar11 = param_3[1];
        if (lVar11 == 0) {
          lVar11 = FUN_141518b52();
        }
        lVar4 = *param_3;
        lVar11 = FUN_14477b664(lVar11);
        iVar8 = 0;
        if ((lVar11 != 0) && (plVar5 = *(longlong **)(lVar11 + 0xb8), plVar5 != (longlong *)0x0)) {
          lVar12 = *plVar5;
          pcVar6 = *(code **)(lVar12 + 0x108);
          if (pcVar6 != (code *)&LAB_14478342e && pcVar6 != (code *)&LAB_144783422) {
            cVar7 = (*pcVar6)(plVar5);
            iVar8 = 0;
            if (cVar7 == '\0') goto LAB_1440c9c4b;
            lVar12 = *plVar5;
          }
          pcVar6 = *(code **)(lVar12 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar6 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar6 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar6)(plVar5);
          }
          iVar8 = FUN_144aff48c(ppuVar14);
        }
LAB_1440c9c4b:
        lVar12 = *(longlong *)(lVar3 + 0x90);
        lVar3 = *(longlong *)(lVar3 + 0x98);
        iVar9 = 0;
        if ((lVar3 != 0) && (plVar5 = *(longlong **)(lVar3 + 0xb8), plVar5 != (longlong *)0x0)) {
          lVar13 = *plVar5;
          pcVar6 = *(code **)(lVar13 + 0x108);
          if (pcVar6 != (code *)&LAB_14478342e && pcVar6 != (code *)&LAB_144783422) {
            cVar7 = (*pcVar6)(plVar5);
            iVar9 = 0;
            if (cVar7 == '\0') goto LAB_1440c9cba;
            lVar13 = *plVar5;
          }
          pcVar6 = *(code **)(lVar13 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar6 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar6 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar6)(plVar5);
          }
          iVar9 = FUN_144aff48c(ppuVar14);
        }
LAB_1440c9cba:
        if ((iVar9 == iVar8) && (lVar12 == lVar4)) {
          if (lVar3 == lVar11) {
LAB_1440c9d5e:
            cVar7 = FUN_14069eaf4(*(longlong *)(lVar2 + lVar15) + 0xb0,param_4);
            if (cVar7 != '\0') {
              *param_2 = *(undefined8 *)(lVar2 + lVar15);
              lVar2 = *(longlong *)(lVar2 + 8 + lVar15);
              param_2[1] = lVar2;
              if (lVar2 == 0) {
                return;
              }
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
              return;
            }
          }
          else if ((lVar11 != 0) && (lVar3 != 0)) {
            iVar8 = *(int *)(lVar11 + 0x38);
            iVar9 = *(int *)(lVar3 + 0x38);
            if (((iVar8 <= iVar9) &&
                (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) == lVar11 + 0x30))
               || ((iVar9 <= iVar8 &&
                   (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar9 * 8) ==
                    lVar3 + 0x30)))) goto LAB_1440c9d5e;
          }
        }
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar15);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1440c9e3e FUN_1440c9e3e body=755 status=ok
// SIG undefined FUN_1440c9e3e(void)

void FUN_1440c9e3e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar2 = param_1[3];
  uVar9 = *param_1;
  uVar3 = param_1[1];
  uVar7 = FUN_14145892e();
  lVar8 = FUN_141137228(uVar9,uVar7,param_2,param_3,uVar3);
  if (lVar8 == 0) {
    return;
  }
  lVar13 = *(longlong *)(lVar8 + 0x3a0);
  if (lVar13 == 0) {
    FUN_140aeefbc(lVar8,0,1);
    return;
  }
  if ((*(byte *)(lVar13 + 0x9f) & 0x20) == 0) {
    *(undefined1 *)(lVar13 + 0x6f1) = 1;
  }
  *(undefined1 *)(lVar13 + 0xd20) = 1;
  *(undefined1 *)(lVar13 + 0xd22) = 0;
  *(undefined1 *)(lVar13 + 0xf9b) = 1;
  *(undefined2 *)(lVar13 + 0xf9d) = 0x100;
  *(undefined4 *)(lVar13 + 0x658) = param_4;
  *(undefined4 *)(lVar13 + 0x660) = 0x43960000;
  FUN_1409307b4(lVar13,*(undefined8 *)param_1[2]);
  *(undefined1 *)(lVar13 + 0xd23) = 1;
  *(undefined4 *)(lVar13 + 0xfa4) = 0x43960000;
  lVar10 = *(longlong *)(lVar2 + 0x98);
  if (lVar10 == 0) {
    uVar9 = FUN_141518b52();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar2 + 0x98) = lVar10;
  }
  lVar11 = *(longlong *)(lVar2 + 0xa0);
  if (lVar11 == 0) {
    if ((lVar10 == 0) || (*(longlong *)(lVar2 + 0x90) == 0)) goto LAB_1440c9f75;
    plVar4 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      goto LAB_1440c9f75;
    }
    uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar2 + 0x90));
    *(longlong *)(lVar2 + 0xa0) = lVar11;
    if (lVar11 == 0) goto LAB_1440c9f75;
  }
  *(undefined4 *)(lVar13 + 0xcb0) = *(undefined4 *)(lVar11 + 0x50);
  *(undefined8 *)(lVar13 + 0xca8) = *(undefined8 *)(lVar11 + 0x48);
  *(undefined2 *)(lVar13 + 0xcb8) = *(undefined2 *)(lVar11 + 0x58);
  *(undefined4 *)(lVar13 + 0xef0) = *(undefined4 *)(lVar11 + 0x50);
  *(undefined8 *)(lVar13 + 0xee8) = *(undefined8 *)(lVar11 + 0x48);
  *(undefined2 *)(lVar13 + 0xef8) = *(undefined2 *)(lVar11 + 0x58);
LAB_1440c9f75:
  *(longlong *)param_1[2] = lVar13;
  uVar1 = *(uint *)(lVar8 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar6 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar12 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar12);
    }
    LOCK();
    iVar6 = *(int *)(lVar13 + 0x10);
    bVar14 = iVar6 == 0;
    if (bVar14) {
      *(int *)(lVar13 + 0x10) = iVar12;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar6 = iVar12;
    }
  }
  iVar12 = *(int *)(lVar2 + 0xe0);
  *(uint *)(lVar2 + 0xe0) = iVar12 + 1U;
  if (*(uint *)(lVar2 + 0xe4) < iVar12 + 1U) {
    FUN_148cea764((longlong *)(lVar2 + 0xd8),iVar12);
  }
  *(ulonglong *)(*(longlong *)(lVar2 + 0xd8) + (longlong)iVar12 * 8) = CONCAT44(iVar6,uVar1);
  plVar4 = (longlong *)param_1[4];
  iVar6 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
    FUN_148cea7ea(plVar4,iVar6);
  }
  *(longlong *)(*plVar4 + (longlong)iVar6 * 8) = lVar8;
  return;
}



// FUNCTION 1440ca132 FUN_1440ca132 body=331 status=ok
// SIG undefined FUN_1440ca132(void)

ulonglong FUN_1440ca132(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14040d984(&local_38);
  if (local_30 != (longlong *)0x0) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_30[1];
      bVar11 = iVar4 == iVar2;
      if (bVar11) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar8 = local_30;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_14040dabc(local_38,param_1);
        FUN_14040dabc(local_38,param_3);
        puVar5 = (undefined8 *)FUN_14040d8e0(local_38,param_1);
        lVar6 = FUN_14040d8e0(local_38,param_3);
        if ((lVar6 != 0 && puVar5 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar5 + 1) != 0)) {
          plVar7 = (longlong *)*puVar5;
          lVar10 = (longlong)*(int *)(puVar5 + 1) * 0xa0;
          do {
            if ((((*plVar7 != 0) && (plVar7[1] != 0)) && (0 < *(int *)(plVar7[1] + 8))) &&
               (cVar3 = FUN_148ce091c(lVar6,plVar7), cVar3 != '\0')) {
              uVar9 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              goto LAB_1440ca23e;
            }
            plVar7 = plVar7 + 0x14;
            lVar10 = lVar10 + -0xa0;
          } while (lVar10 != 0);
        }
      }
      uVar9 = 0;
LAB_1440ca23e:
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1440ca25b;
    }
  }
  uVar9 = 0;
LAB_1440ca25b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1440ca32a FUN_1440ca32a body=322 status=ok
// SIG undefined FUN_1440ca32a(void)

void FUN_1440ca32a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (((*(int *)((longlong)param_1 + 0x3c) != 0) &&
      (uVar5 = *(uint *)(param_1 + 7), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x3c))) &&
        (((*(uint *)(lVar7 + 8) & 0x10200000) == 0 &&
         ((param_1[10] != 0 && (*(int *)((longlong)param_1 + 0x4c) != 0)))))) &&
       ((uVar5 = *(uint *)(param_1 + 9), -1 < (int)uVar5 && ((int)uVar5 < DAT_14c9647dc)))) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      if (((((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x4c))) &&
           ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) && ((param_1[8] != 0 && (*param_1 != 0)))) &&
         ((char)param_1[0xb] != '\x02')) {
        iVar2 = FUN_140a6fda0(param_1,0);
        if (iVar2 == -1) {
          FUN_140351c8e(param_1);
          return;
        }
        FUN_1401e5944(param_1);
        FUN_1407c9f6e(param_1);
        param_1[0x10] = param_1[2];
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
        uVar4 = (longlong)(int)param_1[4] - 1;
        uVar6 = (ulonglong)(iVar2 + 1U);
        if ((int)uVar4 <= (int)(iVar2 + 1U)) {
          uVar6 = uVar4 & 0xffffffff;
        }
        if ((longlong)uVar6 < (longlong)uVar4) {
          uVar4 = uVar6;
        }
        uVar5 = 0;
        if (0 < (longlong)uVar4) {
          uVar5 = (uint)uVar4;
        }
        *(int *)(param_1 + 0xf) = (int)uVar6;
        puVar1 = (uint *)param_1[5];
        uVar3 = *(uint *)((longlong)param_1 + 0x24) - uVar5;
        if (*(uint *)((longlong)param_1 + 0x24) < uVar5) {
          uVar3 = uVar3 + puVar1[4];
        }
        param_1[0x11] =
             (longlong)
             ((double)param_1[2] -
             **(double **)(*(longlong *)(puVar1 + 2) + (longlong)(int)(uVar3 & *puVar1) * 0x10));
      }
    }
  }
  return;
}



// FUNCTION 1440ca46c FUN_1440ca46c body=157 status=ok
// SIG undefined FUN_1440ca46c(void)

undefined8 FUN_1440ca46c(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    pdVar1 = (double *)*param_1;
    pdVar2 = *(double **)
              (*(longlong *)((uint *)param_1[5] + 2) +
              (longlong)(int)(*(uint *)param_1[5] & *(uint *)((longlong)param_1 + 0x24)) * 0x10);
    if ((float)((pdVar1[6] - pdVar2[6]) * (pdVar1[6] - pdVar2[6]) +
                (pdVar1[7] - pdVar2[7]) * (pdVar1[7] - pdVar2[7]) +
               (pdVar1[8] - pdVar2[8]) * (pdVar1[8] - pdVar2[8])) <=
        *(float *)(param_1[8] + 0x20) * *(float *)(param_1[8] + 0x20)) {
      param_1[2] = (double)param_1[2] - (double)(float)(*pdVar1 - *pdVar2);
      FUN_1418d9942(param_1 + 4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1440ca546 FUN_1440ca546 body=183 status=ok
// SIG undefined FUN_1440ca546(void)

void FUN_1440ca546(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14058c734();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14058c734();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          local_30 = param_6;
          local_38 = param_5;
          FUN_143ec31da(lVar4,&local_28,param_3,param_4);
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



// FUNCTION 1440ca663 FUN_1440ca663 body=718 status=ok
// SIG undefined FUN_1440ca663(void)

longlong *
FUN_1440ca663(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,int *param_8)

{
  undefined4 *puVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14027c0e6();
  if ((*(longlong *)(*param_1 + 0x3c) == 0) || (*(char *)(*param_1 + 0x38) < (char)param_1[1]))
  goto LAB_1440ca6a1;
  FUN_140d76916(param_1,6);
  if (*(longlong *)(*param_1 + 0x3c) != 0) {
    cVar6 = (char)param_1[1];
    cVar9 = *(char *)(*param_1 + 0x38);
    if (cVar6 <= cVar9) {
      plVar8 = (longlong *)FUN_14027bf48(param_1);
      iVar10 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar10 + 1U) {
        FUN_140eed74c(plVar8,iVar10);
      }
      lVar12 = *plVar8;
      lVar11 = (longlong)iVar10 * 0x30;
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *param_3 = 0;
      param_3[1] = 0;
      puVar1 = (undefined4 *)(lVar12 + lVar11);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined1 *)(lVar12 + 0x20 + lVar11) = 4;
      *(undefined8 *)(lVar12 + 0x28 + lVar11) = DAT_14cbc3ae8;
      if (*(longlong *)(*param_1 + 0x3c) == 0) goto LAB_1440ca7af;
      cVar6 = (char)param_1[1];
      cVar9 = *(char *)(*param_1 + 0x38);
    }
    if (cVar6 <= cVar9) {
      plVar8 = (longlong *)FUN_14027bf48(param_1);
      iVar10 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar10 + 1U) {
        FUN_140eed74c(plVar8,iVar10);
      }
      lVar12 = *plVar8;
      lVar11 = (longlong)iVar10 * 0x30;
      *(longlong *)(lVar12 + lVar11) = (longlong)*param_4;
      *(undefined1 *)(lVar12 + 0x20 + lVar11) = 2;
      *(undefined8 *)(lVar12 + 0x28 + lVar11) = DAT_14cbc3af8;
    }
  }
LAB_1440ca7af:
  FUN_145c5d5ce(param_1,&DAT_14cbc3b08,param_5);
  FUN_145c5d5ce(param_1,&DAT_14cbc3b18,param_6);
  if (*(longlong *)(*param_1 + 0x3c) != 0) {
    cVar6 = (char)param_1[1];
    cVar9 = *(char *)(*param_1 + 0x38);
    if (cVar6 <= cVar9) {
      plVar8 = (longlong *)FUN_14027bf48();
      lVar12 = plVar8[1];
      uVar7 = (int)lVar12 + 1;
      *(uint *)(plVar8 + 1) = uVar7;
      if (*(uint *)((longlong)plVar8 + 0xc) < uVar7) {
        FUN_140eed74c();
      }
      puVar13 = (undefined8 *)((longlong)(int)lVar12 * 0x30 + *plVar8);
      local_50 = (void *)0x0;
      local_48 = *(int *)(param_7 + 1);
      lVar12 = (longlong)local_48;
      _Src = (void *)*param_7;
      if (lVar12 == 0) {
        local_44 = 0;
        iVar10 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar12 * 2);
        iVar10 = local_48;
      }
      *puVar13 = local_50;
      *(int *)(puVar13 + 1) = iVar10;
      *(undefined4 *)((longlong)puVar13 + 0xc) = local_44;
      *(undefined1 *)(puVar13 + 4) = 4;
      puVar13[5] = DAT_14cbc3b28;
      if (*(longlong *)(*param_1 + 0x3c) == 0) goto LAB_1440ca6a1;
      cVar6 = (char)param_1[1];
      cVar9 = *(char *)(*param_1 + 0x38);
    }
    if (cVar6 <= cVar9) {
      plVar8 = (longlong *)FUN_14027bf48(param_1);
      iVar10 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar10 + 1U) {
        FUN_140eed74c(plVar8,iVar10);
      }
      lVar12 = *plVar8;
      lVar11 = (longlong)iVar10 * 0x30;
      *(longlong *)(lVar12 + lVar11) = (longlong)*param_8;
      *(undefined1 *)(lVar12 + 0x20 + lVar11) = 2;
      *(undefined8 *)(lVar12 + 0x28 + lVar11) = DAT_14cbc3b38;
    }
  }
LAB_1440ca6a1:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ca932 FUN_1440ca932 body=1994 status=ok
// SIG undefined FUN_1440ca932(void)

void FUN_1440ca932(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  longlong *plVar18;
  ulonglong uVar19;
  char cVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_388 [32];
  undefined4 *local_368;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  int local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2b8;
  undefined1 local_2b0 [16];
  longlong local_2a0;
  undefined1 local_290 [32];
  byte local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_248;
  undefined1 local_240 [16];
  longlong local_230;
  undefined1 local_220 [32];
  byte local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  undefined1 local_1b0 [32];
  byte local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  undefined1 local_168 [32];
  byte local_148;
  undefined1 local_140 [32];
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  undefined4 local_108;
  char local_f8 [8];
  longlong local_f0;
  char local_e8;
  longlong local_88;
  uint local_80;
  uint local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar11 = FUN_14144d9c6(param_2);
  lVar12 = FUN_14144d9c6(param_3);
  lVar13 = FUN_1457b1050(param_2);
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar14 = FUN_145ca578a();
  }
  else {
    lVar14 = 0;
  }
  lVar15 = FUN_1459ce524(param_1);
  lVar16 = FUN_140e448c6(param_2);
  if ((lVar16 == 0 || lVar15 == 0) || ((lVar14 == 0 || lVar13 == 0) || (lVar12 == 0 || lVar11 == 0))
     ) goto LAB_1440cadf5;
  puVar21 = *(undefined4 **)(param_2 + 8);
  if (puVar21 == (undefined4 *)0x0) {
    puVar21 = &DAT_14c9485f0;
  }
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_358 = param_1;
  local_350 = lVar14;
  FUN_1400b2348(puVar21,&local_2e8,1);
  local_368 = &local_1f8;
  local_1f8 = (undefined4)local_2e8;
  uStack_1f4 = local_2e8._4_4_;
  uStack_1f0 = (undefined4)uStack_2e0;
  uStack_1ec = uStack_2e0._4_4_;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_1d8 = 4;
  FUN_140d767d6(&local_1d0,&DAT_14cbc3930,3,L"Activate Card");
  if ((*(longlong *)(local_1d0 + 0x3c) == 0) || (*(char *)(local_1d0 + 0x38) < local_1c8)) {
    puVar21 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar21 = *(undefined4 **)(param_2 + 8);
    }
    local_348 = 0;
    uStack_340 = 0;
    FUN_1400b2348(puVar21,&local_348,1);
    local_368 = &local_2d8;
    local_2d8 = (undefined4)local_348;
    uStack_2d4 = local_348._4_4_;
    uStack_2d0 = (undefined4)uStack_340;
    uStack_2cc = uStack_340._4_4_;
    local_348 = 0;
    uStack_340 = 0;
    local_2b8 = 4;
    FUN_140d767d6(local_2b0,&DAT_14cbc3930,3,L"Activate Card");
    FUN_140d76846(&local_188,local_2b0);
    bVar4 = false;
    lVar11 = local_358;
  }
  else {
    FUN_1400021e4(lVar12 + 0x38,&local_2f8);
    piVar17 = *(int **)(lVar13 + 8);
    if (piVar17 == (int *)0x0) {
      piVar17 = &DAT_14c9485f0;
    }
    if (((*piVar17 == 0) || (iVar2 = piVar17[1], iVar2 == 0)) || (*piVar17 == DAT_14c948000)) {
LAB_1440cb05a:
      local_308 = DAT_14c948620;
      local_310 = DAT_14c948618;
    }
    else {
      if ((iVar2 < 2) && (piVar17[9] < 1)) {
        piVar17 = piVar17 + 2;
      }
      else {
        piVar17 = *(int **)(piVar17 + 6);
      }
      if (iVar2 < 1) goto LAB_1440cb05a;
      local_308 = piVar17[2];
      local_310 = *(undefined8 *)piVar17;
    }
    local_300 = FUN_140b4e694(local_350,&local_310);
    lVar12 = FUN_1409e484c(lVar15,lVar16);
    local_318 = *(undefined8 *)(lVar12 + 8);
    piVar17 = (int *)FUN_1409e484c(lVar15,lVar16);
    iVar2 = *piVar17;
    FUN_1400021e4(lVar11 + 0x38,&local_328);
    puVar21 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar21 = *(undefined4 **)(param_2 + 8);
    }
    local_338 = 0;
    uStack_330 = 0;
    bVar4 = true;
    FUN_1400b2348(puVar21,&local_338,1);
    local_368 = &local_268;
    local_268 = (undefined4)local_338;
    uStack_264 = local_338._4_4_;
    uStack_260 = (undefined4)uStack_330;
    uStack_25c = uStack_330._4_4_;
    local_338 = 0;
    uStack_330 = 0;
    local_248 = 4;
    FUN_140d767d6(local_240,&DAT_14cbc3930,3,L"Activate Card");
    FUN_14027c0e6(&local_188,local_240);
    lVar11 = local_358;
    if ((*(longlong *)(local_188 + 0x3c) != 0) && (local_180 <= *(char *)(local_188 + 0x38))) {
      FUN_140d76916(&local_188,5);
      if (*(longlong *)(local_188 + 0x3c) != 0) {
        cVar20 = *(char *)(local_188 + 0x38);
        if (local_180 <= cVar20) {
          plVar18 = (longlong *)FUN_14027bf48(&local_188);
          iVar3 = (int)plVar18[1];
          *(uint *)(plVar18 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar18 + 0xc) < iVar3 + 1U) {
            FUN_140eed74c(plVar18,iVar3);
          }
          lVar11 = *plVar18;
          lVar12 = (longlong)iVar3 * 0x30;
          uVar6 = (undefined4)local_328;
          uVar7 = local_328._4_4_;
          uVar8 = (undefined4)uStack_320;
          uVar9 = uStack_320._4_4_;
          local_328 = 0;
          uStack_320 = 0;
          puVar21 = (undefined4 *)(lVar11 + lVar12);
          *puVar21 = uVar6;
          puVar21[1] = uVar7;
          puVar21[2] = uVar8;
          puVar21[3] = uVar9;
          *(undefined1 *)(lVar11 + 0x20 + lVar12) = 4;
          *(undefined8 *)(lVar11 + 0x28 + lVar12) = DAT_14cbc3ae8;
          if (*(longlong *)(local_188 + 0x3c) == 0) goto LAB_1440cafa9;
          cVar20 = *(char *)(local_188 + 0x38);
        }
        if (local_180 <= cVar20) {
          plVar18 = (longlong *)FUN_14027bf48(&local_188);
          iVar3 = (int)plVar18[1];
          *(uint *)(plVar18 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar18 + 0xc) < iVar3 + 1U) {
            FUN_140eed74c(plVar18,iVar3);
          }
          lVar11 = *plVar18;
          lVar12 = (longlong)iVar3 * 0x30;
          *(longlong *)(lVar11 + lVar12) = (longlong)iVar2;
          *(undefined1 *)(lVar11 + 0x20 + lVar12) = 2;
          *(undefined8 *)(lVar11 + 0x28 + lVar12) = DAT_14cbc3af8;
        }
      }
LAB_1440cafa9:
      FUN_145c5d5ce(&local_188,&DAT_14cbc3b08,&local_318);
      FUN_145c5d5ce(&local_188,&DAT_14cbc3b18,&local_300);
      lVar11 = local_358;
      if ((*(longlong *)(local_188 + 0x3c) != 0) &&
         (bVar4 = true, local_180 <= *(char *)(local_188 + 0x38))) {
        plVar18 = (longlong *)FUN_14027bf48(&local_188);
        iVar2 = (int)plVar18[1];
        *(uint *)(plVar18 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar18 + 0xc) < iVar2 + 1U) {
          FUN_140eed74c(plVar18,iVar2);
        }
        lVar12 = *plVar18;
        lVar13 = (longlong)iVar2 * 0x30;
        uVar6 = (undefined4)local_2f8;
        uVar7 = local_2f8._4_4_;
        uVar8 = (undefined4)uStack_2f0;
        uVar9 = uStack_2f0._4_4_;
        local_2f8 = 0;
        uStack_2f0 = 0;
        puVar21 = (undefined4 *)(lVar12 + lVar13);
        *puVar21 = uVar6;
        puVar21[1] = uVar7;
        puVar21[2] = uVar8;
        puVar21[3] = uVar9;
        *(undefined1 *)(lVar12 + 0x20 + lVar13) = 4;
        *(undefined8 *)(lVar12 + 0x28 + lVar13) = DAT_14cbc3b48;
      }
    }
  }
  FUN_14027c224(local_f8,&local_188);
  if (*(longlong *)(lVar11 + 0x20) == 0) {
    uVar23 = 0;
    uVar19 = 0;
  }
  else {
    uVar23 = *(uint *)(*(longlong *)(lVar11 + 0x20) + 0xc);
    if ((int)uVar23 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar19 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar22 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar22);
      }
      LOCK();
      uVar10 = *(uint *)(lVar11 + 0x10);
      bVar24 = uVar10 == 0;
      if (bVar24) {
        *(uint *)(lVar11 + 0x10) = uVar22;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar24) {
        uVar10 = uVar22;
      }
      uVar19 = (ulonglong)uVar10;
    }
  }
  uVar22 = local_80;
  uVar5 = DAT_14c9a3c28;
  if (((local_f8[0] == '\x01') && (*(longlong *)(local_f0 + 0x3c) != 0)) &&
     (local_e8 <= *(char *)(local_f0 + 0x38))) {
    lVar11 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    if (local_7c < local_80) {
      FUN_141225836(&local_88,uVar22);
    }
    lVar11 = lVar11 * 0x40;
    *(undefined8 *)(local_88 + lVar11) = uVar5;
    *(ulonglong *)(local_88 + 8 + lVar11) = (ulonglong)uVar23 | uVar19 << 0x20;
    puVar1 = (undefined8 *)(local_88 + 0x10 + lVar11);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(local_88 + 0x20 + lVar11);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(local_88 + 0x30 + lVar11);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1404eec70(0,0);
  }
  FUN_14027c198(local_f8);
  FUN_1404eec70(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_120,local_118);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_140);
  (*(code *)(&PTR_FUN_14a1842f0)[local_148])(local_168);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (bVar4) {
    (*(code *)(&PTR_FUN_14a1842f0)[local_200])(local_220);
    if (local_230 != 0) {
      FUN_1400020a8();
    }
    if (local_338 != 0) {
      FUN_1400020a8();
    }
    lVar11 = local_2f8;
    if (local_328 != 0) {
      FUN_1400020a8();
      lVar11 = local_2f8;
    }
  }
  else {
    (*(code *)(&PTR_FUN_14a1842f0)[local_270])(local_290);
    lVar11 = local_348;
    if (local_2a0 != 0) {
      FUN_1400020a8();
      lVar11 = local_348;
    }
  }
  if (lVar11 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_190])(local_1b0);
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
LAB_1440cadf5:
  if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440cb0fd FUN_1440cb0fd body=1866 status=ok
// SIG undefined FUN_1440cb0fd(void)

void FUN_1440cb0fd(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  longlong *plVar18;
  ulonglong uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  wchar_t *pwVar23;
  bool bVar24;
  undefined1 auStack_378 [32];
  longlong *local_358;
  longlong local_348;
  longlong local_340;
  undefined1 local_338 [8];
  longlong local_330;
  undefined8 uStack_328;
  undefined1 local_320 [8];
  longlong local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  int local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [8];
  longlong local_2d0;
  undefined8 uStack_2c8;
  longlong local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  undefined1 local_278 [32];
  byte local_258;
  longlong local_250;
  undefined8 uStack_248;
  undefined1 local_230;
  undefined1 local_228 [16];
  longlong local_218;
  undefined1 local_208 [32];
  byte local_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined1 local_198 [32];
  byte local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  undefined1 local_150 [32];
  byte local_130;
  undefined1 local_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  char local_e0 [8];
  longlong local_d8;
  char local_d0;
  longlong local_70;
  uint local_68;
  uint local_64;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar12 = FUN_140e44844(param_2);
  if (lVar12 == 0) goto LAB_1440cb138;
  lVar13 = FUN_14144d9c6(lVar12);
  lVar14 = FUN_1457b1050(lVar12);
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar15 = FUN_145ca578a();
  }
  else {
    lVar15 = 0;
  }
  lVar16 = FUN_1459ce524(param_1);
  lVar12 = FUN_140e448c6(lVar12);
  if ((lVar12 == 0 || (lVar16 == 0 || lVar15 == 0)) || (lVar14 == 0 || lVar13 == 0))
  goto LAB_1440cb138;
  pwVar23 = L"Completed Weekly Challenge";
  if (param_3 == '\0') {
    pwVar23 = L"Completed Daily Challenge";
  }
  local_348 = lVar13;
  local_340 = lVar15;
  FUN_140ff3baa(param_4,local_2d8);
  FUN_1400021e4(local_2d8,&local_2d0);
  local_358 = &local_1e0;
  local_1e0 = local_2d0;
  uStack_1d8 = uStack_2c8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_1c0 = 4;
  FUN_140d767d6(&local_1b8,&DAT_14cbc3930,3,pwVar23);
  lVar13 = local_348;
  if ((*(longlong *)(local_1b8 + 0x3c) == 0) || (*(char *)(local_1b8 + 0x38) < local_1b0)) {
    FUN_140ff3baa(param_4,local_338);
    FUN_1400021e4(local_338,&local_330);
    local_358 = &local_2c0;
    local_2c0 = local_330;
    uStack_2b8 = uStack_328;
    local_330 = 0;
    uStack_328 = 0;
    local_2a0 = 4;
    FUN_140d767d6(local_298,&DAT_14cbc3930,3,pwVar23);
    FUN_140d76846(&local_170,local_298);
    bVar5 = false;
  }
  else {
    piVar17 = &DAT_14c9485f0;
    if (*(int **)(lVar14 + 8) != (int *)0x0) {
      piVar17 = *(int **)(lVar14 + 8);
    }
    if (((*piVar17 == 0) || (iVar3 = piVar17[1], iVar3 == 0)) || (*piVar17 == DAT_14c948000)) {
      local_2e8 = DAT_14c948620;
      local_2f0 = DAT_14c948618;
    }
    else {
      if ((iVar3 < 2) && (piVar17[9] < 1)) {
        piVar17 = piVar17 + 2;
      }
      else {
        piVar17 = *(int **)(piVar17 + 6);
      }
      if (iVar3 < 1) {
        local_2e8 = DAT_14c948620;
        local_2f0 = DAT_14c948618;
      }
      else {
        local_2e8 = piVar17[2];
        local_2f0 = *(undefined8 *)piVar17;
      }
    }
    local_2e0 = FUN_140b4e694(local_340,&local_2f0);
    lVar14 = FUN_1409e484c(lVar16,lVar12);
    local_2f8 = *(undefined8 *)(lVar14 + 8);
    piVar17 = (int *)FUN_1409e484c(lVar16,lVar12);
    iVar3 = *piVar17;
    FUN_1400021e4(lVar13 + 0x38,&local_308);
    FUN_140ff3baa(param_4,local_320);
    FUN_1400021e4(local_320,&local_318);
    local_358 = &local_250;
    local_250 = local_318;
    uStack_248 = uStack_310;
    local_318 = 0;
    uStack_310 = 0;
    local_230 = 4;
    FUN_140d767d6(local_228,&DAT_14cbc3930,3,pwVar23);
    FUN_14027c0e6(&local_170,local_228);
    bVar5 = true;
    if ((*(longlong *)(local_170 + 0x3c) != 0) && (local_168 <= *(char *)(local_170 + 0x38))) {
      FUN_140d76916(&local_170,4);
      if (*(longlong *)(local_170 + 0x3c) != 0) {
        cVar20 = *(char *)(local_170 + 0x38);
        if (local_168 <= cVar20) {
          plVar18 = (longlong *)FUN_14027bf48(&local_170);
          iVar4 = (int)plVar18[1];
          *(uint *)(plVar18 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar18 + 0xc) < iVar4 + 1U) {
            FUN_140eed74c(plVar18,iVar4);
          }
          lVar12 = *plVar18;
          lVar13 = (longlong)iVar4 * 0x30;
          uVar7 = (undefined4)local_308;
          uVar8 = local_308._4_4_;
          uVar9 = (undefined4)uStack_300;
          uVar10 = uStack_300._4_4_;
          local_308 = 0;
          uStack_300 = 0;
          puVar1 = (undefined4 *)(lVar12 + lVar13);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          *(undefined1 *)(lVar12 + 0x20 + lVar13) = 4;
          *(undefined8 *)(lVar12 + 0x28 + lVar13) = DAT_14cbc3ae8;
          if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_1440cb755;
          cVar20 = *(char *)(local_170 + 0x38);
        }
        if (local_168 <= cVar20) {
          plVar18 = (longlong *)FUN_14027bf48(&local_170);
          iVar4 = (int)plVar18[1];
          *(uint *)(plVar18 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar18 + 0xc) < iVar4 + 1U) {
            FUN_140eed74c(plVar18,iVar4);
          }
          lVar12 = *plVar18;
          lVar13 = (longlong)iVar4 * 0x30;
          *(longlong *)(lVar12 + lVar13) = (longlong)iVar3;
          *(undefined1 *)(lVar12 + 0x20 + lVar13) = 2;
          *(undefined8 *)(lVar12 + 0x28 + lVar13) = DAT_14cbc3af8;
        }
      }
LAB_1440cb755:
      FUN_145c5d5ce(&local_170,&DAT_14cbc3b08,&local_2f8);
      FUN_145c5d5ce(&local_170,&DAT_14cbc3b18,&local_2e0);
    }
  }
  FUN_14027c224(local_e0,&local_170);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar22 = 0;
    uVar19 = 0;
  }
  else {
    uVar22 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar19 = (ulonglong)*(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar21 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar21);
      }
      LOCK();
      uVar11 = *(uint *)(lVar12 + 0x10);
      bVar24 = uVar11 == 0;
      if (bVar24) {
        *(uint *)(lVar12 + 0x10) = uVar21;
        uVar11 = 0;
      }
      UNLOCK();
      if (bVar24) {
        uVar11 = uVar21;
      }
      uVar19 = (ulonglong)uVar11;
    }
  }
  uVar21 = local_68;
  uVar6 = DAT_14c9a3c28;
  if (((local_e0[0] == '\x01') && (*(longlong *)(local_d8 + 0x3c) != 0)) &&
     (local_d0 <= *(char *)(local_d8 + 0x38))) {
    lVar12 = (longlong)(int)local_68;
    local_68 = local_68 + 1;
    if (local_64 < local_68) {
      FUN_141225836(&local_70,uVar21);
    }
    lVar12 = lVar12 * 0x40;
    *(undefined8 *)(local_70 + lVar12) = uVar6;
    *(ulonglong *)(local_70 + 8 + lVar12) = (ulonglong)uVar22 | uVar19 << 0x20;
    puVar2 = (undefined8 *)(local_70 + 0x10 + lVar12);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(local_70 + 0x20 + lVar12);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(local_70 + 0x30 + lVar12);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1404eec70(0,0);
  }
  FUN_14027c198(local_e0);
  FUN_1404eec70(local_f8,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_108,local_100);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_128);
  (*(code *)(&PTR_FUN_14a1842f0)[local_130])(local_150);
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if (bVar5) {
    (*(code *)(&PTR_FUN_14a1842f0)[local_1e8])(local_208);
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    lVar12 = local_308;
    if (local_318 != 0) {
      FUN_1400020a8();
      lVar12 = local_308;
    }
  }
  else {
    (*(code *)(&PTR_FUN_14a1842f0)[local_258])(local_278);
    lVar12 = local_330;
    if (local_288 != 0) {
      FUN_1400020a8();
      lVar12 = local_330;
    }
  }
  if (lVar12 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_178])(local_198);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_2d0 != 0) {
    FUN_1400020a8();
  }
LAB_1440cb138:
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440cb848 FUN_1440cb848 body=109 status=ok
// SIG undefined FUN_1440cb848(void)

bool FUN_1440cb848(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)*(int *)(param_1 + 0xe0) == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = true;
    lVar2 = 0;
    do {
      if ((bVar4 == false) ||
         (uVar1 = *(uint *)(*(longlong *)(param_1 + 0xd8) + 8 + lVar2), (~uVar1 & 0x7fffffff) == 0))
      {
        bVar4 = false;
      }
      else {
        lVar3 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar3 = param_3 + 0x10;
        }
        bVar4 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) != 0;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xe0) * 0x10 != lVar2);
  }
  return bVar4;
}



// FUNCTION 1440cb8b6 FUN_1440cb8b6 body=680 status=ok
// SIG undefined FUN_1440cb8b6(void)

void FUN_1440cb8b6(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar4;
  double dVar6;
  double dVar8;
  
  lVar10 = *param_2;
  if ((lVar10 != 0) && ((longlong)*(int *)(param_1 + 0xe0) != 0)) {
    plVar23 = *(longlong **)(param_1 + 0xd8);
    plVar24 = plVar23 + (longlong)*(int *)(param_1 + 0xe0) * 2;
    do {
      iVar19 = *(int *)((longlong)plVar23 + 0xc);
      if (*(char *)(param_2[7] + (longlong)iVar19) == '\0') {
        FUN_1447d5d8e(param_2 + 4,iVar19);
      }
      lVar11 = param_2[4];
      lVar18 = (longlong)iVar19 * 0x60;
      dVar31 = *(double *)(lVar11 + lVar18);
      dVar33 = ((double *)(lVar11 + lVar18))[1];
      pdVar1 = (double *)(lVar11 + 0x10 + lVar18);
      dVar34 = *pdVar1;
      dVar36 = pdVar1[1];
      pdVar1 = (double *)(lVar11 + 0x20 + lVar18);
      dVar25 = *pdVar1;
      dVar26 = pdVar1[1];
      pdVar1 = (double *)(lVar11 + 0x30 + lVar18);
      dVar27 = *pdVar1;
      dVar28 = pdVar1[1];
      if (*(int *)(lVar10 + 0xc68) != *(int *)(lVar10 + 0xc94)) {
        lVar21 = *plVar23;
        uVar14 = (uint)((ulonglong)lVar21 >> 0x10);
        uVar22 = (uint)lVar21 & 0xffff;
        lVar20 = *(longlong *)(lVar10 + 0xca0);
        if (*(longlong *)(lVar10 + 0xca0) == 0) {
          lVar20 = lVar10 + 0xc98;
        }
        iVar19 = *(int *)(lVar20 + (ulonglong)
                                   (*(int *)(lVar10 + 0xca8) - 1U &
                                   (int)((ulonglong)lVar21 >> 0x20) +
                                   ((uint)lVar21 << 0x10 | uVar22) +
                                   (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar22 >> 4)) * 4);
        if (iVar19 != -1) {
          do {
            lVar20 = *(longlong *)(lVar10 + 0xc60) + (longlong)iVar19 * 0x80;
            if (*(longlong *)(*(longlong *)(lVar10 + 0xc60) + (longlong)iVar19 * 0x80) == lVar21) {
              if ((lVar20 != 0) && (lVar20 != -0x10)) {
                dVar3 = *(double *)(lVar20 + 0x28);
                dVar4 = *(double *)(lVar20 + 0x28);
                dVar5 = *(double *)(lVar20 + 0x10);
                dVar6 = *(double *)(lVar20 + 0x10);
                dVar12 = dVar5 * dVar33;
                dVar13 = dVar6 * dVar31;
                dVar7 = *(double *)(lVar20 + 0x18);
                dVar8 = *(double *)(lVar20 + 0x18);
                dVar29 = dVar31 * dVar7;
                dVar30 = dVar33 * dVar8;
                dVar9 = *(double *)(lVar20 + 0x20);
                dVar35 = *(double *)(lVar20 + 0x20);
                dVar32 = dVar31 * dVar35;
                dVar35 = dVar34 * dVar35;
                dVar31 = dVar33 * dVar9 * -1.0 +
                         dVar34 * dVar7 + dVar36 * dVar5 * 1.0 + dVar31 * dVar3;
                dVar33 = dVar32 * 1.0 + dVar36 * dVar8 + dVar34 * dVar6 * -1.0 + dVar33 * dVar4;
                dVar34 = dVar36 * dVar9 * 1.0 + ((dVar12 * 1.0 + dVar3 * dVar34) - dVar29);
                dVar36 = dVar35 * -1.0 + ((dVar13 * -1.0 + dVar4 * dVar36) - dVar30);
                dVar25 = dVar25 + *(double *)(lVar20 + 0x30);
                dVar26 = dVar26 + *(double *)(lVar20 + 0x38);
                dVar27 = dVar27 + *(double *)(lVar20 + 0x40);
                dVar28 = dVar28 + 0.0;
              }
              break;
            }
            iVar19 = *(int *)(lVar20 + 0x70);
          } while (iVar19 != -1);
        }
      }
      lVar18 = lVar18 + lVar11;
      iVar19 = *(int *)((longlong)plVar23 + 0xc);
      lVar21 = (longlong)iVar19 * 0x60;
      *(double *)(lVar11 + lVar21) = dVar31;
      ((double *)(lVar11 + lVar21))[1] = dVar33;
      pdVar1 = (double *)(lVar11 + 0x10 + lVar21);
      *pdVar1 = dVar34;
      pdVar1[1] = dVar36;
      pdVar1 = (double *)(lVar11 + 0x20 + lVar21);
      *pdVar1 = dVar25;
      pdVar1[1] = dVar26;
      pdVar1 = (double *)(lVar11 + 0x30 + lVar21);
      *pdVar1 = dVar27;
      pdVar1[1] = dVar28;
      uVar15 = *(undefined8 *)(lVar18 + 0x40);
      uVar16 = *(undefined8 *)(lVar18 + 0x48);
      uVar17 = *(undefined8 *)(lVar18 + 0x58);
      puVar2 = (undefined8 *)(lVar11 + 0x50 + lVar21);
      *puVar2 = *(undefined8 *)(lVar18 + 0x50);
      puVar2[1] = uVar17;
      puVar2 = (undefined8 *)(lVar11 + 0x40 + lVar21);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      *(undefined1 *)(param_2[7] + (longlong)iVar19) = 1;
      plVar23 = plVar23 + 2;
    } while (plVar23 != plVar24);
  }
  return;
}



// FUNCTION 1440cbb97 FUN_1440cbb97 body=41 status=ok
// SIG undefined FUN_1440cbb97(void)

void FUN_1440cbb97(void)

{
  DAT_14cbc3bc8 = 0;
  if (DAT_14cbc3bc0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68cc4();
  return;
}



// FUNCTION 1440cbbc6 FUN_1440cbbc6 body=1999 status=ok
// SIG undefined FUN_1440cbbc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440cbbc6(undefined8 *param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auStack_168 [32];
  double local_148;
  float local_140;
  undefined4 uStack_13c;
  float local_138;
  undefined4 uStack_134;
  double local_130;
  double local_128;
  float local_11c;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = param_1[1];
  cVar3 = (**(code **)(**(longlong **)*param_1 + 0x48))(*(longlong **)*param_1,1);
  fVar6 = (float)FUN_14023bf44(*(undefined8 *)*param_1);
  fVar7 = (float)FUN_143e68750(*(undefined8 *)*param_1);
  fVar6 = (fVar7 + -1.0) * fVar6 + 1.0;
  *(float *)(lVar1 + 0x2e0) = fVar6;
  if (cVar3 == '\0') {
    pdVar4 = param_3 + 10;
  }
  else {
    pdVar4 = (double *)(*(longlong *)(lVar1 + 0x18) + 0x330);
  }
  dVar25 = *pdVar4;
  dVar30 = pdVar4[1];
  dVar20 = pdVar4[2];
  local_118 = pdVar4[4];
  local_110 = pdVar4[5];
  if (cVar3 != '\0') {
    dVar8 = (double)fVar6;
    dVar25 = dVar25 * dVar8;
    dVar30 = dVar30 * dVar8;
    dVar20 = dVar20 * dVar8;
    local_118 = local_118 * dVar8;
    local_110 = local_110 * dVar8;
  }
  if (*(char *)(lVar1 + 0x200) != '\0') {
    local_118 = DAT_14c8464e8;
    local_110 = DAT_14c8464f0;
    dVar20 = DAT_14c846508;
    dVar25 = DAT_14c8464f8;
    dVar30 = DAT_14c846500;
  }
  dVar8 = param_3[4];
  dVar21 = param_3[7];
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x1c8);
  pdVar5 = (double *)&DAT_14c846480;
  if (lVar2 != 0) {
    pdVar5 = (double *)(lVar2 + 0x240);
  }
  dVar26 = *(double *)(lVar1 + 0x350);
  dVar29 = *(double *)(lVar1 + 0x358);
  dVar14 = -*pdVar5;
  dVar15 = -pdVar5[1];
  dVar16 = pdVar5[2] * -1.0;
  dVar17 = pdVar5[3] * 1.0;
  dVar18 = dVar29 * dVar14 - dVar26 * dVar15;
  dVar19 = *(double *)(lVar1 + 0x360) * dVar15 - dVar29 * dVar16;
  dVar33 = dVar26 * dVar16 - dVar14 * *(double *)(lVar1 + 0x360);
  dVar19 = dVar19 + dVar19;
  dVar33 = dVar33 + dVar33;
  dVar18 = dVar18 + dVar18;
  dVar34 = dVar17 * dVar18 + *(double *)(lVar1 + 0x360) + (dVar33 * dVar14 - dVar19 * dVar15);
  dVar15 = (dVar18 * dVar15 - dVar33 * dVar16) + dVar17 * dVar19 + dVar26;
  dVar16 = *pdVar5 * dVar18 + dVar16 * dVar19 + dVar17 * dVar33 + dVar29;
  dVar18 = param_2[6];
  dVar26 = param_2[4];
  dVar29 = param_2[5];
  fVar6 = *(float *)param_1[2];
  dVar14 = *(double *)(lVar1 + 0x378);
  if (SQRT(dVar34 * dVar34 + dVar15 * dVar15 + dVar16 * dVar16) <
      SQRT(dVar18 * dVar18 + dVar26 * dVar26 + dVar29 * dVar29)) {
    fVar7 = *(float *)((longlong)param_3 + 0x1c);
  }
  else {
    fVar7 = *(float *)(param_3 + 3);
  }
  dVar17 = *param_3 * dVar15;
  if (dVar8 <= *param_3 * dVar15) {
    dVar17 = dVar8;
  }
  if (dVar17 <= dVar21) {
    dVar17 = dVar21;
  }
  _local_138 = CONCAT44((int)((ulonglong)dVar8 >> 0x20),*(undefined4 *)(pdVar4 + 6));
  dVar8 = param_3[1] * dVar16;
  if (param_3[5] <= param_3[1] * dVar16) {
    dVar8 = param_3[5];
  }
  local_11c = *(float *)((longlong)pdVar4 + 0x34);
  if (dVar8 <= param_3[8]) {
    dVar8 = param_3[8];
  }
  _local_140 = CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(pdVar4 + 7));
  local_130 = pdVar4[8];
  dVar21 = param_3[2] * dVar34;
  if (param_3[6] <= param_3[2] * dVar34) {
    dVar21 = param_3[6];
  }
  if (dVar21 <= param_3[9]) {
    dVar21 = param_3[9];
  }
  fVar7 = fVar7 * fVar6;
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  dVar33 = (double)fVar7;
  local_148 = pdVar4[9];
  dVar18 = (dVar21 - dVar18) * dVar33 + dVar18;
  dVar21 = pdVar4[10];
  dVar29 = (dVar8 - dVar29) * dVar33 + dVar29;
  local_128 = pdVar4[0xb];
  dVar8 = pdVar4[0xc];
  dVar19 = dVar29 * local_118 + *(double *)(lVar1 + 0x370);
  dVar16 = dVar18 * local_110 + *(double *)(lVar1 + 0x368);
  dVar15 = pdVar4[0xd];
  param_2[4] = (dVar17 - dVar26) * dVar33 + dVar26;
  param_2[5] = dVar29;
  param_2[6] = dVar18;
  param_2[7] = 0.0;
  local_108 = *param_2;
  dStack_100 = param_2[1];
  local_f8 = param_2[2];
  dStack_f0 = param_2[3];
  FUN_1448052ee(&local_108,&local_e8);
  fVar7 = local_140;
  if (SQRT(local_e0 * local_e0 + local_d8 * local_d8 + local_e8 * local_e8) <=
      SQRT(dVar19 * dVar19 + dVar14 * dVar14 + dVar16 * dVar16)) {
    fVar7 = local_11c;
  }
  dVar20 = dVar20 * (double)local_138 * dVar19;
  if (dVar21 <= dVar20) {
    dVar20 = dVar21;
  }
  if (dVar20 <= dVar15) {
    dVar20 = dVar15;
  }
  dVar21 = dVar30 * dVar19;
  if (local_148 <= dVar30 * dVar19) {
    dVar21 = local_148;
  }
  if (dVar21 <= dVar8) {
    dVar21 = dVar8;
  }
  dVar30 = dVar25 * dVar16;
  if (local_130 <= dVar25 * dVar16) {
    dVar30 = local_130;
  }
  if (dVar30 <= local_128) {
    dVar30 = local_128;
  }
  dVar25 = (double)DAT_1499387d0;
  dVar8 = DAT_1499387d0._8_8_;
  auVar9._8_8_ = dVar21 - local_e0;
  auVar9._0_8_ = dVar30 - local_e8;
  auVar9 = divpd(auVar9,_DAT_1499387d0);
  auVar22._0_8_ = (dVar20 - local_d8) / 360.0;
  auVar22._8_8_ = 0;
  auVar9 = roundpd(auVar9,auVar9,3);
  auVar23 = roundpd(auVar22,auVar22,3);
  auVar31._0_8_ = (dVar20 - local_d8) - auVar23._0_8_ * dVar25;
  auVar31._8_8_ = 0.0 - auVar23._8_8_ * dVar8;
  auVar27._0_8_ = (dVar30 - local_e8) - auVar9._0_8_ * dVar25;
  auVar27._8_8_ = (dVar21 - local_e0) - auVar9._8_8_ * dVar8;
  auVar24._0_8_ = auVar27._0_8_ + dVar25;
  auVar24._8_8_ = auVar27._8_8_ + dVar8;
  auVar23._8_8_ = -(ulonglong)(0.0 <= auVar27._8_8_);
  auVar23._0_8_ = -(ulonglong)(0.0 <= auVar27._0_8_);
  auVar9 = blendvpd(auVar24,auVar27,auVar23);
  auVar28._0_8_ = auVar31._0_8_ + dVar25;
  auVar28._8_8_ = auVar31._8_8_ + dVar8;
  auVar10._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
  auVar10._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
  auVar23 = blendvpd(auVar28,auVar31,auVar10);
  auVar32._0_8_ = auVar9._0_8_ + -360.0;
  auVar32._8_8_ = auVar9._8_8_ + -360.0;
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
  auVar9 = blendvpd(auVar9,auVar32,auVar11);
  dVar30 = auVar23._0_8_;
  fVar6 = fVar6 * fVar7;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  dVar20 = (double)fVar6;
  local_d8 = (double)(~-(ulonglong)(180.0 < dVar30) & (ulonglong)dVar30 |
                     (ulonglong)(dVar30 + -360.0) & -(ulonglong)(180.0 < dVar30)) * dVar20 +
             local_d8;
  local_e0 = auVar9._8_8_ * dVar20 + local_e0;
  local_e8 = auVar9._0_8_ * dVar20 + local_e8;
  auVar12._0_8_ = local_d8 / 360.0;
  auVar13._8_8_ = local_e0;
  auVar13._0_8_ = local_e8;
  auVar9 = divpd(auVar13,_DAT_1499387d0);
  auVar12._8_8_ = 0;
  auVar23 = roundpd(auVar9,auVar9,3);
  auVar9 = roundpd(auVar12,auVar12,3);
  dVar21 = (local_e8 - auVar23._0_8_ * dVar25) * 0.008726646259971648;
  dVar18 = (local_e0 - auVar23._8_8_ * dVar8) * 0.008726646259971648;
  dVar26 = (local_d8 - auVar9._0_8_ * dVar25) * 0.008726646259971648;
  dVar29 = (0.0 - auVar9._8_8_ * dVar8) * 0.008726646259971648;
  dVar25 = sin(dVar21);
  dVar30 = sin(dVar18);
  dVar20 = sin(dVar26);
  sin(dVar29);
  dVar8 = cos(dVar21);
  dVar21 = cos(dVar18);
  dVar18 = cos(dVar26);
  cos(dVar29);
  *param_2 = dVar25 * dVar30 * dVar18 - dVar8 * dVar21 * dVar20;
  param_2[1] = -(dVar25 * dVar21 * dVar18) - dVar8 * dVar30 * dVar20;
  param_2[2] = -(dVar21 * dVar25 * dVar20) + dVar30 * dVar8 * dVar18;
  param_2[3] = dVar30 * dVar25 * dVar20 + dVar21 * dVar8 * dVar18;
  if ((local_d0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cc396 FUN_1440cc396 body=434 status=ok
// SIG undefined FUN_1440cc396(void)

undefined8 FUN_1440cc396(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_4d8 [32];
  undefined **local_4b8 [90];
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_e8;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined7 local_38;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b68) {
    local_4b8[0] = (undefined **)CONCAT44(local_4b8[0]._4_4_,*(undefined4 *)(param_2 + 8));
    lVar3 = FUN_1465c9502();
    cVar2 = FUN_1468ec2ac(local_4b8,*(undefined8 *)(lVar3 + 0x18));
    if (cVar2 != '\0') {
      FUN_140e47e4e();
      local_1dc = 0xffffffff7fffffff;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0x3ff00000;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_184 = 0x3ff00000;
      uStack_180 = 0;
      uStack_17c = 0x3ff00000;
      local_178 = 0x3ff0000000000000;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0xffffffffffffffff;
      local_1e8 = 0;
      local_1e4 = 0;
      local_158 = 0;
      local_e8 = 0;
      local_4b8[0] = &PTR_FUN_14b6d6940;
      local_cc = 0xffffffff7fffffff;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3ff00000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_74 = 0x3ff00000;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0x3ff0000000000000;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0xffffffffffffffff;
      local_d8 = 0;
      local_d4 = 0;
      local_48 = 0;
      local_40 = 0xffffffff7fffffff;
      local_38 = 0;
      uStack_31 = 0;
      uVar4 = FUN_1465c9502();
      FUN_14047320e(uVar4,param_3,param_1,local_4b8);
      uVar4 = 1;
      goto LAB_1440cc3ea;
    }
  }
  uVar4 = 0;
LAB_1440cc3ea:
  if ((local_28 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cc54a FUN_1440cc54a body=179 status=ok
// SIG undefined FUN_1440cc54a(void)

void FUN_1440cc54a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_30 = param_2[5];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_48,plVar1);
      FUN_144b1fd46(&local_48,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_48,*(undefined8 *)(param_1 + 0x18));
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cc634 FUN_1440cc634 body=48 status=ok
// SIG undefined FUN_1440cc634(void)

void FUN_1440cc634(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x148);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_14580e7fe();
  FUN_1448093f4(lVar1,uVar2);
  return;
}



// FUNCTION 1440cc676 FUN_1440cc676 body=3531 status=ok
// SIG undefined FUN_1440cc676(void)

void FUN_1440cc676(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  ulonglong uVar15;
  double *pdVar16;
  float *pfVar17;
  double *pdVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong *plVar25;
  double *pdVar26;
  uint uVar27;
  uint uVar28;
  double *pdVar29;
  undefined8 uVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  code *local_160;
  float local_154;
  uint local_150;
  int local_14c;
  undefined8 local_148;
  longlong local_140;
  int local_138;
  float local_134;
  longlong local_130;
  uint *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  byte local_c2;
  char local_c1;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((((*(int *)(param_1 + 0x2c) == 0) || (uVar27 = *(uint *)(param_1 + 0x28), (int)uVar27 < 0)) ||
      (DAT_14c9647dc <= (int)uVar27)) ||
     (((lVar11 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8), lVar11 == 0 ||
       (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x2c))) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) goto LAB_1440cc71c;
  puVar23 = (uint *)(param_1 + 0xd0);
  iVar4 = *(int *)(param_1 + 0xe8);
  if (iVar4 == 0) {
    uVar24 = 1;
    uVar15 = 0;
    iVar20 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar5 = puVar23;
    }
    uVar27 = *puVar5;
    if (uVar27 == 0) {
      iVar10 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar10 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar24 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar24 = uVar15;
      }
      iVar20 = 0;
      do {
        if (uVar24 == uVar15) goto LAB_1440cc94e;
        iVar20 = iVar20 + 0x20;
        uVar27 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar15 = 0;
      iVar20 = 0;
    }
    uVar24 = (ulonglong)(-uVar27 & uVar27);
    uVar1 = uVar24 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar10) {
      iVar10 = iVar4;
    }
  }
  if (iVar10 < iVar4) {
    uVar27 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0xc0);
      iVar8 = *(int *)(lVar11 + 0xc + (longlong)iVar10 * 0x18);
      if (((iVar8 == 0) || (uVar7 = *(uint *)(lVar11 + (longlong)iVar10 * 0x18 + 8), (int)uVar7 < 0)
          ) || ((DAT_14c9647dc <= (int)uVar7 ||
                (((plVar22 = (longlong *)
                             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                  plVar22 == (longlong *)0x0 || ((int)plVar22[2] != iVar8)) ||
                 ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)))))) {
LAB_1440cc8a3:
        FUN_1411d9496((longlong *)(param_1 + 0xc0));
        iVar4 = *(int *)(param_1 + 0xe8);
      }
      else {
        if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
          lVar11 = *plVar22;
        }
        else {
          lVar11 = 0;
        }
        if (*(char *)(lVar11 + 0x5d30) == '\x02') goto LAB_1440cc8a3;
      }
      uVar27 = uVar27 & ~(uint)uVar24;
      puVar5 = *(uint **)(param_1 + 0xe0);
      if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
        puVar5 = puVar23;
      }
      iVar10 = (int)uVar15;
      lVar11 = (longlong)iVar10;
      uVar7 = puVar5[lVar11] & uVar27;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar8 <= iVar10) break;
        lVar12 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar7 = puVar5[lVar11 + lVar12 + 1];
          if (uVar7 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar11 == lVar12) goto LAB_1440cc94e;
        }
        uVar15 = (ulonglong)(iVar10 + (int)lVar12 + 1);
        uVar27 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar24 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar4);
  }
LAB_1440cc94e:
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1440cd43a:
    lVar11 = 0;
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x28);
    lVar11 = 0;
    if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) {
      plVar22 = (longlong *)
                ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
      if ((plVar22 == (longlong *)0x0) ||
         (((int)plVar22[2] != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)))) goto LAB_1440cd43a;
      lVar11 = *plVar22;
    }
  }
  iVar4 = *(int *)(lVar11 + 0x238);
  if (0 < iVar4) {
    local_118 = param_1 + 0x358;
    local_100 = param_1 + 0x260;
    lVar12 = 0;
    local_150 = (uint)local_100;
    local_128 = puVar23;
    local_130 = lVar11;
    do {
      lVar3 = *(longlong *)(lVar11 + 0x230);
      local_14c = *(int *)(lVar3 + 4 + lVar12 * 8);
      if ((local_14c == 0) || (uVar27 = *(uint *)(lVar3 + lVar12 * 8), (int)uVar27 < 0)) {
LAB_1440cd36e:
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if ((int)uVar27 < DAT_14c9647dc) {
          plVar22 = (longlong *)
                    ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
          if (((plVar22 == (longlong *)0x0) || ((int)plVar22[2] != local_14c)) ||
             ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) goto LAB_1440cd36e;
          lVar13 = *plVar22;
        }
      }
      local_110 = *(longlong *)(lVar13 + 0x3d0);
      if (local_110 != 0) {
        uVar15 = 0;
        local_154 = 0.0;
        local_134 = 0.0;
        iVar4 = *(int *)(param_1 + 0xe8);
        if (iVar4 == 0) {
          uVar24 = 1;
          iVar20 = 0;
          iVar10 = 0;
        }
        else {
          puVar5 = *(uint **)(param_1 + 0xe0);
          if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
            puVar5 = puVar23;
          }
          uVar27 = *puVar5;
          if (uVar27 == 0) {
            iVar10 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar10 = iVar4 + -1;
            }
            uVar15 = 0;
            uVar24 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar24 = uVar15;
            }
            iVar20 = 0;
            do {
              if (uVar24 == uVar15) {
                uVar6 = 0;
                cVar14 = '\0';
                goto LAB_1440cd2d9;
              }
              iVar20 = iVar20 + 0x20;
              uVar27 = puVar5[uVar15 + 1];
              uVar15 = uVar15 + 1;
            } while (uVar27 == 0);
          }
          else {
            uVar15 = 0;
            iVar20 = 0;
          }
          uVar24 = (ulonglong)(-uVar27 & uVar27);
          uVar1 = uVar24 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar10 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
        if (iVar10 < iVar4) {
          lVar11 = *(longlong *)(param_1 + 0xc0);
          puVar23 = *(uint **)(param_1 + 0xe0);
          if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
            puVar23 = local_128;
          }
          local_138 = DAT_14c9647dc;
          local_108 = DAT_14c9647c8;
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          local_f0 = puVar23 + 1;
          uVar27 = 0xffffffff;
          local_148 = 0;
          local_140 = 0;
          local_120 = lVar12;
          do {
            lVar13 = local_120;
            pdVar16 = (double *)&DAT_14c8464e0;
            iVar9 = *(int *)(lVar11 + 0xc + (longlong)iVar10 * 0x18);
            if ((((iVar9 != 0) &&
                 (uVar7 = *(uint *)(lVar11 + (longlong)iVar10 * 0x18 + 8), -1 < (int)uVar7)) &&
                (((int)uVar7 < local_138 &&
                 ((plVar22 = (longlong *)
                             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                  plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar9)))))) &&
               ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) {
              if ((((((local_14c != 0) && (uVar7 = *(uint *)(lVar3 + lVar12 * 8), -1 < (int)uVar7))
                    && ((int)uVar7 < local_138)) &&
                   ((plVar25 = (longlong *)
                               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                    plVar25 != (longlong *)0x0 && ((int)plVar25[2] == local_14c)))) &&
                  (((*(uint *)(plVar25 + 1) & 0x10200000) == 0 &&
                   ((*plVar25 != 0 && (lVar19 = *(longlong *)(*plVar25 + 0x3d0), lVar19 != 0))))))
                 && ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
                  lVar12 = *plVar22;
                }
                else {
                  lVar12 = 0;
                }
                lVar12 = *(longlong *)(lVar12 + 0x1c8);
                pdVar29 = (double *)&DAT_14c8464e0;
                dVar32 = DAT_14c8464f0;
                if (lVar12 != 0) {
                  dVar32 = *(double *)(lVar12 + 0x270);
                  pdVar29 = (double *)(lVar12 + 0x260);
                }
                lVar12 = *(longlong *)(lVar19 + 0x1c8);
                dVar35 = DAT_14c8464f0;
                if (lVar12 != 0) {
                  dVar35 = *(double *)(lVar12 + 0x270);
                  pdVar16 = (double *)(lVar12 + 0x260);
                }
                if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
                  lVar12 = *plVar22;
                }
                else {
                  lVar12 = 0;
                }
                if (*(longlong *)(lVar12 + 0x3f70) == 0) {
                  lVar12 = 0;
                }
                else {
                  if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
                    lVar12 = *plVar22;
                  }
                  else {
                    lVar12 = 0;
                  }
                  lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x3f70) + 0xfb0);
                }
                if (*(int *)(param_1 + 0x230) == *(int *)(param_1 + 0x25c)) {
LAB_1440cce22:
                  plVar25 = (longlong *)0x0;
                }
                else {
                  uVar7 = (uint)((ulonglong)lVar12 >> 0x10);
                  uVar28 = (uint)lVar12 & 0xffff;
                  lVar19 = *(longlong *)(param_1 + 0x268);
                  if (*(longlong *)(param_1 + 0x268) == 0) {
                    lVar19 = local_100;
                  }
                  iVar10 = *(int *)(lVar19 + (ulonglong)
                                             (*(int *)(param_1 + 0x270) - 1U &
                                             (int)((ulonglong)lVar12 >> 0x20) +
                                             ((uint)lVar12 << 0x10 | uVar28) +
                                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar28 >> 4)) * 4);
                  if (iVar10 == -1) goto LAB_1440cce22;
                  do {
                    plVar25 = (longlong *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar10 * 0x18)
                    ;
                    if (*plVar25 == lVar12) goto LAB_1440cce2c;
                    iVar10 = (int)plVar25[2];
                  } while (iVar10 != -1);
                  plVar25 = (longlong *)0x0;
                }
LAB_1440cce2c:
                fVar33 = (float)SQRT((dVar32 - dVar35) * (dVar32 - dVar35) +
                                     (*pdVar29 - *pdVar16) * (*pdVar29 - *pdVar16) +
                                     (pdVar29[1] - pdVar16[1]) * (pdVar29[1] - pdVar16[1]));
                pfVar17 = (float *)(plVar25 + 1);
                if (plVar25 == (longlong *)0x0) {
                  pfVar17 = (float *)0x0;
                }
                if (*(float *)(param_1 + 0x1a0) <= fVar33 && fVar33 != *(float *)(param_1 + 0x1a0))
                {
                  fVar31 = 0.0;
                }
                else {
                  fVar31 = 10.0;
                  if (pfVar17 != (float *)0x0) {
                    fVar31 = *pfVar17 * 10.0;
                  }
                  fVar36 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x194);
                  if (fVar36 <= 0.0001) {
                    if (*(float *)(param_1 + 0x198) < fVar33) {
                      fVar31 = fVar31 * *(float *)(param_1 + 0x19c);
                    }
                  }
                  else {
                    fVar36 = (fVar33 - *(float *)(param_1 + 0x194)) / fVar36;
                    if (1.0 <= fVar36) {
                      fVar36 = 1.0;
                    }
                    if (fVar36 <= 0.0) {
                      fVar36 = 0.0;
                    }
                    fVar31 = fVar31 * ((*(float *)(param_1 + 0x19c) + -1.0) * fVar36 + 1.0);
                  }
                }
                if (pfVar17 == (float *)0x0) {
                  cVar14 = '\0';
                  pfVar17 = &local_154;
LAB_1440cd0dc:
                  *pfVar17 = fVar31 + *pfVar17;
                }
                else {
                  cVar14 = *(char *)(pfVar17 + 1);
                  local_154 = local_154 + fVar31;
                  if (cVar14 == '\x01') {
                    cVar14 = '\x01';
                    pfVar17 = &local_134;
                    goto LAB_1440cd0dc;
                  }
                }
                local_148 = CONCAT71((int7)((ulonglong)local_148 >> 8),
                                     (byte)local_148 | cVar14 == '\x02');
                lVar12 = lVar13;
              }
              pdVar16 = (double *)&DAT_14c8464e0;
              if (local_140 != 0) {
                lVar13 = *(longlong *)(local_110 + 0x1c8);
                pdVar29 = (double *)&DAT_14c8464e0;
                dVar32 = DAT_14c8464f0;
                if (lVar13 != 0) {
                  pdVar29 = (double *)(lVar13 + 0x260);
                  dVar32 = *(double *)(lVar13 + 0x270);
                }
                lVar19 = *(longlong *)(local_140 + 0x1c8);
                dVar35 = DAT_14c8464f0;
                if (lVar19 != 0) {
                  dVar35 = *(double *)(lVar19 + 0x270);
                  pdVar16 = (double *)(lVar19 + 0x260);
                }
                pdVar26 = (double *)&DAT_14c8464e0;
                dVar34 = DAT_14c8464f0;
                if (lVar13 != 0) {
                  dVar34 = *(double *)(lVar13 + 0x270);
                  pdVar26 = (double *)(lVar13 + 0x260);
                }
                if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
                  lVar13 = *plVar22;
                }
                else {
                  lVar13 = 0;
                }
                lVar13 = *(longlong *)(lVar13 + 0x1c8);
                uVar38 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                pdVar18 = (double *)&DAT_14c8464e0;
                uVar37 = SUB84(DAT_14c8464f0,0);
                if (lVar13 != 0) {
                  uVar37 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
                  uVar38 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
                  pdVar18 = (double *)(lVar13 + 0x260);
                }
                dVar34 = dVar34 - (double)CONCAT44(uVar38,uVar37);
                if ((float)((dVar32 - dVar35) * (dVar32 - dVar35) +
                           (*pdVar29 - *pdVar16) * (*pdVar29 - *pdVar16) +
                           (pdVar29[1] - pdVar16[1]) * (pdVar29[1] - pdVar16[1])) <=
                    (float)(dVar34 * dVar34 +
                           (*pdVar26 - *pdVar18) * (*pdVar26 - *pdVar18) +
                           (pdVar26[1] - pdVar18[1]) * (pdVar26[1] - pdVar18[1])))
                goto LAB_1440cd04a;
              }
              if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
                local_140 = *plVar22;
              }
              else {
                local_140 = 0;
              }
            }
LAB_1440cd04a:
            uVar27 = uVar27 & ~(uint)uVar24;
            iVar10 = (int)uVar15;
            lVar13 = (longlong)iVar10;
            uVar7 = puVar23[lVar13] & uVar27;
            if (uVar7 == 0) {
              iVar9 = iVar8;
              if (iVar8 < iVar10) {
                iVar9 = iVar10;
              }
              if (iVar8 <= iVar10) break;
              lVar19 = 0;
              while( true ) {
                iVar20 = iVar20 + 0x20;
                uVar7 = local_f0[lVar13 + lVar19];
                if (uVar7 != 0) break;
                lVar19 = lVar19 + 1;
                if (iVar9 - lVar13 == lVar19) goto LAB_1440cd146;
              }
              uVar15 = (ulonglong)(iVar10 + (int)lVar19 + 1);
              uVar27 = 0xffffffff;
            }
            uVar24 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar24 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar10 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          } while (iVar10 < iVar4);
LAB_1440cd146:
          local_f8 = lVar3;
          if (local_140 == 0) {
            cVar14 = '\0';
            uVar6 = local_148;
            lVar11 = local_130;
            puVar23 = local_128;
          }
          else {
            plVar22 = (longlong *)(local_140 + 0x10b0);
            lVar11 = (**(code **)(*(longlong *)(local_140 + 0x10b0) + 0x10))(plVar22);
            puVar23 = local_128;
            if (lVar11 != 0) {
              lVar11 = (**(code **)(*plVar22 + 0x10))(plVar22);
              lVar3 = local_118;
              lVar11 = *(longlong *)(lVar11 + 0x1c8);
              if (lVar11 == 0) {
                local_d8 = DAT_14c8464f0;
                local_e8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_e8 = *(code **)(lVar11 + 0x260);
                uStack_e0 = *(undefined8 *)(lVar11 + 0x268);
                local_d8 = *(double *)(lVar11 + 0x270);
              }
              lVar11 = FUN_140a257f2(local_118);
              if ((lVar11 != 0) &&
                 (lVar11 = FUN_140a257f2(lVar3), *(char *)(lVar11 + 0x80) == '\x01')) {
                uVar6 = FUN_140a257f2(lVar3);
                if ((*(int *)(param_1 + 0x2c) == 0) ||
                   (uVar27 = *(uint *)(param_1 + 0x28), (int)uVar27 < 0)) {
LAB_1440cd375:
                  uVar30 = 0;
                }
                else {
                  uVar30 = 0;
                  if ((int)uVar27 < DAT_14c9647dc) {
                    puVar21 = (undefined8 *)
                              ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
                    if (((puVar21 == (undefined8 *)0x0) ||
                        (*(int *)(puVar21 + 2) != *(int *)(param_1 + 0x2c))) ||
                       ((*(uint *)(puVar21 + 1) & 0x10200000) != 0)) goto LAB_1440cd375;
                    uVar30 = *puVar21;
                  }
                }
                uVar6 = FUN_1402a1570(uVar30,uVar6);
                FUN_1402a10ba(&local_c2,uVar30,uVar6);
                bVar2 = local_c2;
                if (local_c1 == '\0') {
                  bVar2 = (byte)local_150;
                }
                local_150 = (uint)bVar2;
                uVar6 = local_148;
                lVar11 = local_130;
                cVar14 = local_c1;
                goto LAB_1440cd2d9;
              }
            }
            cVar14 = '\0';
            uVar6 = local_148;
            lVar11 = local_130;
          }
        }
        else {
          uVar6 = 0;
          puVar23 = local_128;
          cVar14 = '\0';
        }
LAB_1440cd2d9:
        lVar3 = *(longlong *)(local_110 + 0x3b0);
        if (lVar3 != 0) {
          if (DAT_14cbae3d8 == 0) {
            local_e8 = FUN_141030f22;
            local_160 = FUN_14081d0ea;
            local_168 = &LAB_1464f5fc4;
            local_170 = &local_e8;
            local_178 = &LAB_148c3dd26;
            local_180 = &LAB_1459673ba;
            local_188 = L"Engine";
            local_190 = 0;
            local_198 = 0x10000004;
            local_1a0 = 0x10;
            local_1a8 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8);
            lVar11 = local_130;
          }
          if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
            *(float *)(lVar3 + 0xe00) = local_154;
            *(float *)(lVar3 + 0xe04) = local_134;
            *(char *)(lVar3 + 0xe08) = (char)uVar6;
            if (cVar14 != '\0') {
              *(char *)(lVar3 + 0xe09) = (char)local_150;
            }
          }
        }
        iVar4 = *(int *)(lVar11 + 0x238);
      }
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < iVar4);
  }
LAB_1440cc71c:
  if ((local_c0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cd442 FUN_1440cd442 body=91 status=ok
// SIG undefined FUN_1440cd442(void)

void FUN_1440cd442(void)

{
  if (DAT_14cbc3ec0 != 0) {
    if (DAT_14cbc3eb8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc3eb8)(DAT_14cbc3eb8,0);
    FUN_1446efa72(&DAT_14cbc3eb8,0,0,0x10);
    DAT_14cbc3ec0 = 0;
  }
  if (DAT_14cbc3eb8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440cd49e FUN_1440cd49e body=29 status=ok
// SIG undefined FUN_1440cd49e(void)

undefined8 FUN_1440cd49e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cd63a FUN_1440cd63a body=93 status=ok
// SIG undefined FUN_1440cd63a(void)

void FUN_1440cd63a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cd698 FUN_1440cd698 body=93 status=ok
// SIG undefined FUN_1440cd698(void)

void FUN_1440cd698(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cd6f6 FUN_1440cd6f6 body=126 status=ok
// SIG undefined FUN_1440cd6f6(void)

void FUN_1440cd6f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cd765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440cd77e FUN_1440cd77e body=269 status=ok
// SIG undefined FUN_1440cd77e(void)

undefined8 FUN_1440cd77e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440cd885;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440cd885;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440cd885:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440cd839;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440cd88c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440cd839;
    }
  }
  uVar6 = 0;
LAB_1440cd839:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cd88c FUN_1440cd88c body=150 status=ok
// SIG undefined FUN_1440cd88c(void)

void FUN_1440cd88c(longlong *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_148ce005a((undefined8 *)(lVar1 + 0x10d0));
  if (lVar3 != 0) {
    FUN_1400337aa(lVar3);
    FUN_14093097c(lVar1,*(undefined8 *)(lVar3 + 0x3a0));
    *(undefined8 *)(lVar1 + 0x10d0) = 0;
    *(undefined8 *)(lVar1 + 0x10d8) = 0;
    *(undefined8 *)(lVar1 + 0x10e0) = 0;
    *(undefined4 *)(lVar1 + 0x10f0) = 0;
    if (*(int *)(lVar1 + 0x10f4) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar1 + 0x10e8),0);
    }
    puVar2 = *(undefined2 **)(lVar1 + 0x10e8);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
    FUN_140457ffc(&DAT_14cb10a78,lVar1);
    return;
  }
  return;
}



// FUNCTION 1440cd922 FUN_1440cd922 body=117 status=ok
// SIG undefined FUN_1440cd922(void)

undefined8 FUN_1440cd922(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  uVar1 = *(undefined8 *)param_1[1];
  dVar2 = (double)FUN_140b0468a(uVar1);
  fVar5 = (float)dVar2;
  lVar4 = 0x18;
  if ((*(float *)param_1[2] <= fVar5) &&
     (lVar4 = 0x28, fVar5 < *(float *)param_1[4] || fVar5 == *(float *)param_1[4])) {
    cVar3 = FUN_140b048b0(uVar1,param_2,*(undefined4 *)param_1[6]);
    lVar4 = 0x38;
    if (cVar3 == '\0') {
      return 1;
    }
  }
  **(int **)((longlong)param_1 + lVar4) = **(int **)((longlong)param_1 + lVar4) + 1;
  return 0;
}



// FUNCTION 1440cd998 FUN_1440cd998 body=64 status=ok
// SIG undefined FUN_1440cd998(void)

undefined8 * FUN_1440cd998(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b961460;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cd9ec FUN_1440cd9ec body=118 status=ok
// SIG undefined FUN_1440cd9ec(void)

void FUN_1440cd9ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1440cda62 FUN_1440cda62 body=118 status=ok
// SIG undefined FUN_1440cda62(void)

void FUN_1440cda62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1440cdad8 FUN_1440cdad8 body=156 status=ok
// SIG undefined FUN_1440cdad8(void)

void FUN_1440cdad8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cdb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440cdb74 FUN_1440cdb74 body=66 status=ok
// SIG undefined FUN_1440cdb74(void)

void FUN_1440cdb74(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1440cdbfe(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cdbb8 FUN_1440cdbb8 body=68 status=ok
// SIG undefined FUN_1440cdbb8(void)

undefined8 FUN_1440cdbb8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1440cdbfe(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cdbfe FUN_1440cdbfe body=675 status=ok
// SIG undefined FUN_1440cdbfe(void)

void FUN_1440cdbfe(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    param_2 = (longlong *)*param_2;
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar10 = (int)plVar3[1];
      bVar11 = iVar5 == iVar10;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar10 = iVar5;
      }
      iVar5 = iVar10;
      UNLOCK();
    } while (!bVar11);
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0xf8) = 0;
      plVar7 = *(longlong **)(lVar4 + 0x100);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x100) = 0;
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
      }
      *(int *)(lVar4 + 0x118) = *(int *)(lVar4 + 0x118) + 1;
      if (param_2 != (longlong *)0x0) {
        uVar6 = FUN_1401b0f18();
        plVar7 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar6);
        if (plVar7 != (longlong *)0x0) {
          uVar6 = FUN_1401b0f18();
          plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
          if (((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) &&
             (lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8), lVar9 != 0)) {
            FUN_140608954(lVar9 + 0x78,&DAT_14cbc3008);
          }
        }
        if (((((*(int *)(lVar4 + 0xd4) != 0) && (uVar2 = *(uint *)(lVar4 + 0xd0), -1 < (int)uVar2))
             && (((int)uVar2 < DAT_14c9647dc &&
                 ((plVar7 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                  plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar4 + 0xd4))))))) &&
            ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
           ((*plVar7 != 0 && (plVar7 = *(longlong **)(*plVar7 + 0x410), plVar7 != (longlong *)0x0)))
           ) {
          (**(code **)(*plVar7 + 0xa18))(plVar7,param_2);
        }
        uVar2 = *(uint *)((longlong)param_2 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar5 = iVar10;
          }
        }
        iVar10 = *(int *)(lVar4 + 0xf0);
        *(uint *)(lVar4 + 0xf0) = iVar10 + 1U;
        if (*(uint *)(lVar4 + 0xf4) < iVar10 + 1U) {
          FUN_140155462(lVar4 + 0xe8,iVar10);
        }
        *(ulonglong *)(*(longlong *)(lVar4 + 0xe8) + (longlong)iVar10 * 8) = CONCAT44(iVar5,uVar2);
        FUN_140367464(lVar4 + 0x10,lVar4 + 0xe8);
        if (*(int *)(lVar4 + 0xf0) == 1) {
          FUN_14577036a(lVar4,param_2,1);
        }
        else {
          FUN_140b05db8(lVar4);
        }
        FUN_1418d87b0(lVar4);
      }
    }
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cde1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440cdeb0 FUN_1440cdeb0 body=2299 status=ok
// SIG undefined FUN_1440cdeb0(void)

void FUN_1440cdeb0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong *plVar31;
  int iVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  uint local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_2 + 0x58) != 0) {
    lVar28 = *(longlong *)(param_2 + 0x50);
    lVar27 = (longlong)*(int *)(param_2 + 0x58) * 0x30 + lVar28;
    local_b0 = *param_1;
    plVar31 = (longlong *)(local_b0 + 0x80);
    local_78 = local_b0 + 0xb8;
    local_88 = local_b0 + 0x90;
    local_98 = plVar31;
    local_80 = lVar27;
    do {
      lVar19 = FUN_14040deec(lVar28);
      if ((((lVar19 != 0) && (uVar23 = *(ulonglong *)(lVar19 + 0x78), uVar23 != 0)) &&
          (plVar34 = *(longlong **)(lVar19 + 0x80), plVar34 != (longlong *)0x0)) &&
         (0 < (int)plVar34[1])) {
        LOCK();
        *(int *)((longlong)plVar34 + 0xc) = *(int *)((longlong)plVar34 + 0xc) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))();
        }
        uVar13 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        iVar26 = *(int *)(local_b0 + 0x88);
        lVar27 = local_b0;
        if (iVar26 != *(int *)(local_b0 + 0xb4)) {
          lVar30 = *(longlong *)(local_b0 + 0xc0);
          if (*(longlong *)(local_b0 + 0xc0) == 0) {
            lVar30 = local_78;
          }
          iVar26 = *(int *)(lVar30 + (ulonglong)(*(int *)(local_b0 + 200) - 1U & uVar13) * 4);
          while (iVar26 != -1) {
            lVar30 = *(longlong *)(lVar19 + 0x78);
            plVar34 = *(longlong **)(lVar19 + 0x80);
            if (plVar34 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar34 + 0xc) = *(int *)((longlong)plVar34 + 0xc) + 1;
              UNLOCK();
            }
            lVar22 = (longlong)iVar26;
            lVar35 = *(longlong *)(*plVar31 + lVar22 * 0x28);
            plVar31 = *(longlong **)(*plVar31 + 8 + lVar22 * 0x28);
            if (plVar31 == (longlong *)0x0) {
LAB_1440ce0b1:
              plVar33 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)plVar31 + 0xc) = *(int *)((longlong)plVar31 + 0xc) + 1;
              UNLOCK();
              iVar14 = (int)plVar31[1];
              do {
                if (iVar14 == 0) goto LAB_1440ce0b1;
                LOCK();
                iVar15 = (int)plVar31[1];
                bVar36 = iVar14 == iVar15;
                if (bVar36) {
                  *(int *)(plVar31 + 1) = iVar14 + 1;
                  iVar15 = iVar14;
                }
                iVar14 = iVar15;
                UNLOCK();
                plVar33 = plVar31;
              } while (!bVar36);
            }
            bVar36 = true;
            if (plVar34 != (longlong *)0x0) {
              iVar14 = (int)plVar34[1];
              do {
                if (iVar14 == 0) goto LAB_1440ce056;
                LOCK();
                iVar15 = (int)plVar34[1];
                bVar37 = iVar14 == iVar15;
                if (bVar37) {
                  *(int *)(plVar34 + 1) = iVar14 + 1;
                  iVar15 = iVar14;
                }
                iVar14 = iVar15;
                UNLOCK();
              } while (!bVar37);
              LOCK();
              plVar2 = plVar34 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                local_a8 = iVar26;
                local_a4 = uVar13;
                local_a0 = lVar35;
                local_90 = lVar30;
                (**(code **)*plVar34)(plVar34);
                LOCK();
                piVar1 = (int *)((longlong)plVar34 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar34 + 0x10))(plVar34);
                }
                bVar36 = false;
                lVar27 = local_b0;
                lVar30 = local_90;
                lVar35 = local_a0;
                uVar13 = local_a4;
                iVar26 = local_a8;
              }
              else {
                bVar36 = false;
              }
            }
LAB_1440ce056:
            if (plVar33 == (longlong *)0x0) {
              lVar35 = 0;
            }
            else {
              LOCK();
              plVar2 = plVar33 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                local_a8 = iVar26;
                local_a4 = uVar13;
                local_a0 = lVar35;
                local_90 = lVar30;
                (**(code **)*plVar33)(plVar33);
                LOCK();
                piVar1 = (int *)((longlong)plVar33 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                lVar27 = local_b0;
                lVar30 = local_90;
                lVar35 = local_a0;
                uVar13 = local_a4;
                iVar26 = local_a8;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar33 + 0x10))(plVar33);
                  lVar27 = local_b0;
                  lVar30 = local_90;
                  lVar35 = local_a0;
                  uVar13 = local_a4;
                  iVar26 = local_a8;
                }
              }
            }
            if (plVar31 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                local_a8 = iVar26;
                local_a0 = lVar35;
                (**(code **)(*plVar31 + 0x10))(plVar31);
                lVar27 = local_b0;
                lVar35 = local_a0;
                iVar26 = local_a8;
              }
            }
            if (plVar34 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar34 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                local_a0 = lVar35;
                (**(code **)(*plVar34 + 0x10))(plVar34);
                lVar27 = local_b0;
                lVar35 = local_a0;
              }
            }
            if (bVar36) {
              lVar30 = 0;
            }
            if (lVar35 == lVar30) {
              if ((iVar26 != -1) && (*local_98 + lVar22 * 0x28 != 0)) {
                lVar19 = *local_98 + lVar22 * 0x28;
                goto LAB_1440ce1de;
              }
              break;
            }
            plVar31 = local_98;
            iVar26 = *(int *)(*local_98 + 0x20 + lVar22 * 0x28);
          }
          iVar26 = *(int *)(lVar27 + 0xb4);
        }
        if (iVar26 == 0) {
          iVar14 = *(int *)(lVar27 + 0x88);
          *(int *)(lVar27 + 0x88) = iVar14 + 1;
          if (*(int *)(lVar27 + 0x8c) == iVar14) {
            FUN_140549c28(local_98,iVar14);
            lVar27 = local_b0;
          }
          iVar26 = *(int *)(lVar27 + 0xa8);
          if (iVar26 == 0) {
            iVar15 = -1;
          }
          else {
            iVar15 = iVar26 + 0x1e;
            if (-1 < iVar26 + -1) {
              iVar15 = iVar26 + -1;
            }
            iVar15 = iVar15 >> 5;
          }
          iVar21 = iVar26 + 1;
          iVar32 = iVar26 + 0x1f;
          if (-1 < iVar26) {
            iVar32 = iVar26;
          }
          if (iVar32 >> 5 == iVar15) {
            *(int *)(lVar27 + 0xa8) = iVar21;
          }
          else {
            if (*(int *)(lVar27 + 0xac) <= iVar26) {
              iVar15 = iVar26;
              local_a4 = uVar13;
              if (iVar26 + 0x20U < 0xa0) {
                iVar21 = 0x80;
              }
              else {
                uVar13 = iVar26 + 0x20U >> 5;
                if (*(int *)(lVar27 + 0xac) + 0x1fU < 0xa0) {
                  uVar16 = 4;
                  if (4 < uVar13) {
                    uVar16 = uVar13;
                  }
                }
                else {
                  uVar16 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
                }
                uVar23 = (ulonglong)(uVar16 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar17 = (uint)(uVar23 + 0xf);
                    if (uVar16 < 0x1ffd) {
                      uVar23 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar23 + 0xf >> 4]];
                    }
                    else {
                      uVar24 = (ulonglong)(uVar17 & 0xfffffff0);
                      if (uVar24 < 0x7ff1) {
                        bVar20 = (&DAT_14c841e00)[uVar17 >> 4];
                        uVar25 = 0x32;
                        if (0x32 < bVar20) {
                          uVar25 = (ulonglong)bVar20;
                        }
                        uVar29 = 0x32 - (ulonglong)bVar20;
                        do {
                          uVar23 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1440ce5ab;
                          lVar27 = uVar25 + 1 + uVar29;
                          uVar29 = uVar29 - 1;
                        } while (lVar27 != 0x33);
                      }
                      uVar23 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar23 = 0x10;
                      }
                      uVar23 = -uVar23 & (uVar24 + uVar23) - 1;
                    }
                  }
                  else {
                    uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                    iVar15 = *(int *)(local_b0 + 0xa8);
                  }
                }
LAB_1440ce5ab:
                iVar18 = (int)(uVar23 >> 2);
                iVar21 = iVar18 << 5;
                if (iVar18 < (int)uVar13) {
                  iVar21 = -0x20;
                }
              }
              lVar27 = local_b0;
              *(int *)(local_b0 + 0xac) = iVar21;
              FUN_1446efbd8(local_88,iVar15);
              iVar21 = *(int *)(lVar27 + 0xa8) + 1;
              uVar13 = local_a4;
            }
            iVar15 = iVar21 + 0x1f;
            if (-1 < iVar21) {
              iVar15 = iVar21;
            }
            *(int *)(lVar27 + 0xa8) = iVar21;
            lVar27 = local_b0;
            if (iVar21 % 0x20 != 0) {
              lVar30 = *(longlong *)(local_b0 + 0xa0);
              if (*(longlong *)(local_b0 + 0xa0) == 0) {
                lVar30 = local_88;
              }
              bVar20 = -(char)(iVar21 % 0x20);
              *(uint *)(lVar30 + (longlong)(iVar15 >> 5) * 4) =
                   (uint)(*(int *)(lVar30 + (longlong)(iVar15 >> 5) * 4) << (bVar20 & 0x1f)) >>
                   (bVar20 & 0x1f);
            }
          }
          lVar35 = (longlong)iVar14;
          lVar30 = *(longlong *)(lVar27 + 0xa0);
          if (*(longlong *)(lVar27 + 0xa0) == 0) {
            lVar30 = local_88;
          }
          bVar20 = (byte)iVar26 & 0x1f;
          puVar3 = (uint *)(lVar30 + (longlong)(iVar32 >> 5) * 4);
          *puVar3 = *puVar3 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
          lVar30 = lVar27;
        }
        else {
          iVar14 = *(int *)(lVar27 + 0xb0);
          lVar35 = (longlong)iVar14;
          iVar15 = *(int *)(*(longlong *)(lVar27 + 0x80) + 4 + lVar35 * 0x28);
          *(int *)(lVar27 + 0xb0) = iVar15;
          *(int *)(lVar27 + 0xb4) = iVar26 + -1;
          lVar30 = local_b0;
          if (iVar26 + -1 != 0) {
            *(undefined4 *)(*(longlong *)(lVar27 + 0x80) + (longlong)iVar15 * 0x28) = 0xffffffff;
          }
        }
        lVar27 = *(longlong *)(lVar30 + 0xa0);
        if (*(longlong *)(lVar30 + 0xa0) == 0) {
          lVar27 = local_88;
        }
        iVar26 = iVar14 + 0x1f;
        if (-1 < iVar14) {
          iVar26 = iVar14;
        }
        puVar3 = (uint *)(lVar27 + (longlong)(iVar26 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar14 & 0x1f);
        lVar27 = *(longlong *)(lVar30 + 0x80);
        *(undefined8 *)(lVar27 + lVar35 * 0x28) = *(undefined8 *)(lVar19 + 0x78);
        lVar19 = *(longlong *)(lVar19 + 0x80);
        *(longlong *)(lVar27 + 8 + lVar35 * 0x28) = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 0xc) = *(int *)(lVar19 + 0xc) + 1;
          UNLOCK();
        }
        puVar4 = (undefined8 *)(lVar27 + lVar35 * 0x28);
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined4 *)(puVar4 + 4) = 0xffffffff;
        iVar26 = 1;
        if (*(int *)(local_b0 + 0x88) - *(int *)(local_b0 + 0xb4) == 1) {
          uVar16 = 1;
LAB_1440ce3ef:
          if (((int)uVar16 < 1) || (iVar26 <= *(int *)(local_b0 + 200))) {
            uVar13 = *(int *)(local_b0 + 200) - 1U & uVar13;
            *(uint *)((longlong)puVar4 + 0x24) = uVar13;
            lVar27 = *(longlong *)(local_b0 + 0xc0);
            if (*(longlong *)(local_b0 + 0xc0) == 0) {
              lVar27 = local_78;
            }
            *(undefined4 *)(puVar4 + 4) =
                 *(undefined4 *)
                  (lVar27 + ((longlong)*(int *)(local_b0 + 200) - 1U & (longlong)(int)uVar13) * 4);
            lVar27 = *(longlong *)(local_b0 + 0xc0);
            if (*(longlong *)(local_b0 + 0xc0) == 0) {
              lVar27 = local_78;
            }
            *(int *)(lVar27 + ((longlong)*(int *)(local_b0 + 200) - 1U & (longlong)(int)uVar13) * 4)
                 = iVar14;
          }
          else {
            *(int *)(local_b0 + 200) = iVar26;
            FUN_1418dc460(local_98);
          }
        }
        else {
          local_70 = *puVar4;
          plVar31 = (longlong *)puVar4[1];
          local_68 = plVar31;
          if (plVar31 == (longlong *)0x0) {
            iVar15 = FUN_148cea870(local_98,uVar13,&local_70);
          }
          else {
            LOCK();
            *(int *)((longlong)plVar31 + 0xc) = *(int *)((longlong)plVar31 + 0xc) + 1;
            UNLOCK();
            iVar15 = FUN_148cea870(local_98,uVar13,&local_70);
            if (plVar31 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
              }
            }
          }
          if (iVar15 == -1) {
            uVar16 = *(int *)(local_b0 + 0x88) - *(int *)(local_b0 + 0xb4);
            if (3 < uVar16) {
              uVar23 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
              lVar27 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar26 = 1 << ((byte)lVar27 & 0x1f);
            }
            goto LAB_1440ce3ef;
          }
          lVar27 = *local_98;
          if (*(longlong *)(lVar27 + 0x10 + (longlong)iVar15 * 0x28) != 0) {
            FUN_1400020a8();
          }
          puVar5 = (undefined4 *)(lVar27 + (longlong)iVar15 * 0x28);
          plVar31 = *(longlong **)(puVar5 + 2);
          if (plVar31 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar31 + 0x10))();
            }
          }
          uVar6 = *(undefined4 *)puVar4;
          uVar7 = *(undefined4 *)((longlong)puVar4 + 4);
          uVar8 = *(undefined4 *)(puVar4 + 1);
          uVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
          uVar10 = *(undefined4 *)((longlong)puVar4 + 0x14);
          uVar11 = *(undefined4 *)(puVar4 + 3);
          uVar12 = *(undefined4 *)((longlong)puVar4 + 0x1c);
          puVar5[4] = *(undefined4 *)(puVar4 + 2);
          puVar5[5] = uVar10;
          puVar5[6] = uVar11;
          puVar5[7] = uVar12;
          *puVar5 = uVar6;
          puVar5[1] = uVar7;
          puVar5[2] = uVar8;
          puVar5[3] = uVar9;
          FUN_148cec526(local_98,iVar14);
        }
        lVar19 = *local_98 + (longlong)iVar14 * 0x28;
LAB_1440ce1de:
        lVar27 = local_80;
        plVar31 = local_98;
        plVar34 = (longlong *)(lVar19 + 0x10);
        lVar30 = *plVar34;
        iVar26 = *(int *)(lVar19 + 0x18);
        lVar35 = (longlong)iVar26;
        if (lVar35 != 0) {
          uVar23 = 0;
          do {
            if (*(longlong *)(lVar30 + uVar23) == param_2) {
              if ((~uVar23 & 0x7fffffff8) != 0) goto LAB_1440ce229;
              break;
            }
            uVar23 = uVar23 + 8;
          } while (lVar35 * 8 - uVar23 != 0);
        }
        *(uint *)(lVar19 + 0x18) = iVar26 + 1U;
        if (*(uint *)(lVar19 + 0x1c) < iVar26 + 1U) {
          FUN_1418dc2fe(plVar34,iVar26);
          lVar30 = *plVar34;
        }
        *(longlong *)(lVar30 + lVar35 * 8) = param_2;
      }
LAB_1440ce229:
      lVar28 = lVar28 + 0x30;
    } while (lVar28 != lVar27);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ce7ac FUN_1440ce7ac body=240 status=ok
// SIG undefined FUN_1440ce7ac(void)

undefined8
FUN_1440ce7ac(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar6 = (longlong)(int)(*(longlong **)*param_1)[1];
  if (lVar6 != 0) {
    plVar10 = (longlong *)**(longlong **)*param_1;
    plVar7 = plVar10 + lVar6 * 0x14;
    do {
      plVar9 = (longlong *)plVar10[1];
      if (plVar9 == (longlong *)0x0) {
LAB_1440ce829:
        lVar8 = *param_2;
        lVar6 = 0;
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_1440ce829;
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar11 = iVar5 == iVar3;
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar11);
        lVar6 = *plVar10;
        lVar8 = *param_2;
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (lVar6 == lVar8) {
        plVar9 = plVar10 + 2;
        if ((longlong *)plVar10[0x12] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar10[0x12];
        }
        if ((longlong)(int)plVar10[0x13] != 0) {
          lVar6 = (longlong)(int)plVar10[0x13] << 5;
          do {
            cVar4 = FUN_1412a6ab8(*param_2,param_1[1],param_4,plVar9);
            if (cVar4 != '\0') {
              return 1;
            }
            plVar9 = plVar9 + 4;
            lVar6 = lVar6 + -0x20;
          } while (lVar6 != 0);
        }
      }
      plVar10 = plVar10 + 0x14;
    } while (plVar10 != plVar7);
  }
  return 0;
}



// FUNCTION 1440ce89c FUN_1440ce89c body=119 status=ok
// SIG undefined FUN_1440ce89c(void)

void FUN_1440ce89c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_1[2];
  FUN_1414c5d6e(*param_2,local_48,*param_1,*(undefined4 *)param_1[1]);
  FUN_1412a6ab8(*param_2,param_1[3],local_48,param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ce914 FUN_1440ce914 body=29 status=ok
// SIG undefined FUN_1440ce914(void)

undefined8 FUN_1440ce914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ceab0 FUN_1440ceab0 body=93 status=ok
// SIG undefined FUN_1440ceab0(void)

void FUN_1440ceab0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9615f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ceb0e FUN_1440ceb0e body=93 status=ok
// SIG undefined FUN_1440ceb0e(void)

void FUN_1440ceb0e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9615f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ceb6c FUN_1440ceb6c body=126 status=ok
// SIG undefined FUN_1440ceb6c(void)

void FUN_1440ceb6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9615f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cebdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440cebfe FUN_1440cebfe body=273 status=ok
// SIG undefined FUN_1440cebfe(void)

undefined8 FUN_1440cebfe(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440ced09;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1440ced09;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440ced09:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440cecbd;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x30);
      uVar7 = 1;
      (**(code **)(*plVar3 + 0x20))(plVar3,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      goto LAB_1440cecbd;
    }
  }
  uVar7 = 0;
LAB_1440cecbd:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ced14 FUN_1440ced14 body=29 status=ok
// SIG undefined FUN_1440ced14(void)

undefined8 FUN_1440ced14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ceeb0 FUN_1440ceeb0 body=93 status=ok
// SIG undefined FUN_1440ceeb0(void)

void FUN_1440ceeb0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b961740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cef0e FUN_1440cef0e body=93 status=ok
// SIG undefined FUN_1440cef0e(void)

void FUN_1440cef0e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b961740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cef6c FUN_1440cef6c body=126 status=ok
// SIG undefined FUN_1440cef6c(void)

void FUN_1440cef6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b961740;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cefdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440ceff6 FUN_1440ceff6 body=268 status=ok
// SIG undefined FUN_1440ceff6(void)

undefined8 FUN_1440ceff6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440cf0fc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440cf0fc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440cf0fc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440cf0b0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_14136f2c8(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_1440cf0b0;
    }
  }
  uVar6 = 0;
LAB_1440cf0b0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cf104 FUN_1440cf104 body=29 status=ok
// SIG undefined FUN_1440cf104(void)

undefined8 FUN_1440cf104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cf2a0 FUN_1440cf2a0 body=93 status=ok
// SIG undefined FUN_1440cf2a0(void)

void FUN_1440cf2a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9617b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cf2fe FUN_1440cf2fe body=93 status=ok
// SIG undefined FUN_1440cf2fe(void)

void FUN_1440cf2fe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9617b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cf35c FUN_1440cf35c body=126 status=ok
// SIG undefined FUN_1440cf35c(void)

void FUN_1440cf35c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9617b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cf3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440cf3da FUN_1440cf3da body=49 status=ok
// SIG undefined FUN_1440cf3da(void)

void FUN_1440cf3da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_14136f2c8(lVar1,0);
  FUN_145a20686(lVar1,((*(byte *)(lVar1 + 0x58) & 4) == 0) + '\x03');
  return;
}



// FUNCTION 1440cf40c FUN_1440cf40c body=293 status=ok
// SIG undefined FUN_1440cf40c(void)

undefined8 FUN_1440cf40c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440cf52b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440cf52b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440cf52b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440cf4b7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      FUN_14136f2c8(lVar5,0);
      FUN_145a20686(lVar5,((*(byte *)(lVar5 + 0x58) & 4) == 0) + '\x03');
      uVar6 = 1;
      goto LAB_1440cf4b7;
    }
  }
  uVar6 = 0;
LAB_1440cf4b7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cf532 FUN_1440cf532 body=31 status=ok
// SIG undefined FUN_1440cf532(void)

undefined8 FUN_1440cf532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cf640 FUN_1440cf640 body=91 status=ok
// SIG undefined FUN_1440cf640(void)

bool FUN_1440cf640(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1440cf670;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1440cf670:
  return lVar6 == param_2;
}



// FUNCTION 1440cf6be FUN_1440cf6be body=31 status=ok
// SIG undefined FUN_1440cf6be(void)

undefined8 FUN_1440cf6be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cf732 FUN_1440cf732 body=29 status=ok
// SIG undefined FUN_1440cf732(void)

undefined8 FUN_1440cf732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cf764 FUN_1440cf764 body=85 status=ok
// SIG undefined FUN_1440cf764(void)

void FUN_1440cf764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961a20;
  return;
}



// FUNCTION 1440cf7ba FUN_1440cf7ba body=85 status=ok
// SIG undefined FUN_1440cf7ba(void)

void FUN_1440cf7ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961a20;
  return;
}



// FUNCTION 1440cf810 FUN_1440cf810 body=118 status=ok
// SIG undefined FUN_1440cf810(void)

void FUN_1440cf810(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961a20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cf877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440cf88e FUN_1440cf88e body=19 status=ok
// SIG undefined FUN_1440cf88e(void)

undefined1 FUN_1440cf88e(undefined8 param_1,undefined8 param_2)

{
  FUN_1440cf8a2(param_2);
  return 1;
}



// FUNCTION 1440cf8a2 FUN_1440cf8a2 body=297 status=ok
// SIG undefined FUN_1440cf8a2(void)

undefined8 FUN_1440cf8a2(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x80), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb5e538 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_1417c5d06;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417ad04a;
      local_38 = &LAB_1486a7af7;
      local_40 = &LAB_1464e1631;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    param_1 = plVar1[2];
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30
       )) {
      uVar3 = (**(code **)(*plVar1 + 0x498))(plVar1);
      bVar5 = 5 < (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar2 = 1;
      goto LAB_1440cf8f7;
    }
  }
  bVar5 = (byte)param_1;
  bVar2 = 0;
  uVar4 = 0;
LAB_1440cf8f7:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71(uVar4,bVar2 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cf9cc FUN_1440cf9cc body=29 status=ok
// SIG undefined FUN_1440cf9cc(void)

undefined8 FUN_1440cf9cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440cfb68 FUN_1440cfb68 body=93 status=ok
// SIG undefined FUN_1440cfb68(void)

void FUN_1440cfb68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cfbc6 FUN_1440cfbc6 body=93 status=ok
// SIG undefined FUN_1440cfbc6(void)

void FUN_1440cfbc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440cfc24 FUN_1440cfc24 body=126 status=ok
// SIG undefined FUN_1440cfc24(void)

void FUN_1440cfc24(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961a90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440cfc93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440cfca2 FUN_1440cfca2 body=71 status=ok
// SIG undefined FUN_1440cfca2(void)

void FUN_1440cfca2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1440cfe14(param_1 + 0x20,&local_10,param_3,param_5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cfcea FUN_1440cfcea body=296 status=ok
// SIG undefined FUN_1440cfcea(void)

undefined8
FUN_1440cfcea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440cfe0c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440cfe0c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440cfe0c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440cfdbf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440cfe14(param_1 + 0x20,&local_38,param_3,param_5);
      uVar6 = 1;
      goto LAB_1440cfdbf;
    }
  }
  uVar6 = 0;
LAB_1440cfdbf:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440cfe14 FUN_1440cfe14 body=696 status=ok
// SIG undefined FUN_1440cfe14(void)

void FUN_1440cfe14(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined7 uVar7;
  longlong *plVar8;
  
  uVar1 = *param_2;
  lVar2 = *param_1;
  *param_4 = 1;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    plVar4 = (longlong *)FUN_140bccd38(uVar1,param_3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_14030d4a0();
      lVar6 = (longlong)*(int *)(lVar5 + 0x38);
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + lVar6 * 8) == lVar5 + 0x30)) {
        iVar3 = (**(code **)(*plVar4 + 0x328))(plVar4);
        if (iVar3 == 0) {
          FUN_145f87684(plVar4,*(undefined4 *)(lVar2 + 0x100));
          FUN_145f87824(plVar4,*(undefined4 *)(lVar2 + 0x108));
          FUN_145f87756(plVar4,*(undefined4 *)(lVar2 + 0x104));
          FUN_145f878f2(plVar4,*(undefined4 *)(lVar2 + 0x10c));
          uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
          *(undefined1 *)(plVar4 + 0x5a) = *(undefined1 *)(lVar2 + 0x110);
          if (DAT_14cb259f8 != 0) {
            FUN_145f875cc();
          }
          *(undefined1 *)((longlong)plVar4 + 0x2d1) = *(undefined1 *)(lVar2 + 0x111);
          lVar5 = FUN_140ce13fe();
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x98) = *(undefined1 *)((longlong)plVar4 + 0x2d1);
          }
          FUN_145f88a9e(plVar4,*(undefined4 *)(lVar2 + 0x114));
          FUN_145f88712(plVar4,CONCAT71(uVar7,*(undefined1 *)(lVar2 + 0x118)));
          FUN_145f888fe(plVar4,*(undefined1 *)(lVar2 + 0x119));
          FUN_145f879d0(plVar4,*(undefined4 *)(lVar2 + 0x11c));
          FUN_145f87ab2(plVar4,*(undefined4 *)(lVar2 + 0x120));
          FUN_145f87b94(plVar4,*(undefined4 *)(lVar2 + 0x124));
          FUN_145f87c76(plVar4,*(undefined4 *)(lVar2 + 0x128));
          FUN_145f87d58(plVar4,*(undefined4 *)(lVar2 + 300));
          FUN_145f87e3a(plVar4,*(undefined4 *)(lVar2 + 0x130));
          FUN_145f87f1c(plVar4,*(undefined4 *)(lVar2 + 0x134));
          FUN_145f87ffe(plVar4,*(undefined4 *)(lVar2 + 0x138));
          FUN_145f880e0(plVar4,*(undefined4 *)(lVar2 + 0x13c));
          FUN_145f881c2(plVar4,*(undefined4 *)(lVar2 + 0x140));
          FUN_145f882a4(plVar4,*(undefined4 *)(lVar2 + 0x144));
          FUN_145f88386(plVar4,*(undefined4 *)(lVar2 + 0x148));
          FUN_145f88468(plVar4,*(undefined4 *)(lVar2 + 0x14c));
          FUN_145f8854a(plVar4,*(undefined4 *)(lVar2 + 0x150));
          *(undefined1 *)((longlong)plVar4 + 0x4c4) = *(undefined1 *)(lVar2 + 0x154);
          if (DAT_14cb259f8 != 0) {
            FUN_145f875fe();
          }
          plVar8 = plVar4 + 0x99;
          if (plVar8 != (longlong *)(lVar2 + 0x158)) {
            iVar3 = *(int *)(lVar2 + 0x160);
            _Src = *(void **)(lVar2 + 0x158);
            *(int *)(plVar4 + 0x9a) = iVar3;
            if (iVar3 == 0 && *(int *)((longlong)plVar4 + 0x4d4) == 0) {
              *(undefined4 *)((longlong)plVar4 + 0x4d4) = 0;
            }
            else {
              FUN_1446dd670(plVar8,iVar3);
              if (iVar3 != 0) {
                memcpy((void *)*plVar8,_Src,(longlong)iVar3 * 2);
              }
            }
          }
          FUN_1415a48c8(plVar4);
          FUN_145f8862c(plVar4,*(undefined1 *)(lVar2 + 0x168));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1440d00cc FUN_1440d00cc body=29 status=ok
// SIG undefined FUN_1440d00cc(void)

undefined8 FUN_1440d00cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d0268 FUN_1440d0268 body=93 status=ok
// SIG undefined FUN_1440d0268(void)

void FUN_1440d0268(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d02c6 FUN_1440d02c6 body=93 status=ok
// SIG undefined FUN_1440d02c6(void)

void FUN_1440d02c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b961be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d0324 FUN_1440d0324 body=126 status=ok
// SIG undefined FUN_1440d0324(void)

void FUN_1440d0324(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b961be0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440d0393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440d0420 FUN_1440d0420 body=388 status=ok
// SIG undefined FUN_1440d0420(void)

undefined8 FUN_1440d0420(longlong param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440d059e;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1440d059e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440d059e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440d04dc;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((param_3[1] != 0) &&
         ((((uVar2 = *param_3, -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
           (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0)) &&
          ((*(uint *)(lVar7 + 0x10) == param_3[1] &&
           (lVar3 = *(longlong *)(param_1 + 0x20), (*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
        if ((int)param_3[0x4e] < 1) {
          uVar8 = 0x459c4000;
        }
        else {
          uVar8 = *(undefined4 *)(*(longlong *)(param_3 + 0x4c) + 8);
        }
        *(undefined4 *)(lVar3 + 0x6c0) = uVar8;
        *(undefined8 *)(lVar3 + 0x6c8) = 0;
      }
      goto LAB_1440d04dc;
    }
  }
  uVar6 = 0;
LAB_1440d04dc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d05a5 FUN_1440d05a5 body=12180 status=ok
// SIG undefined FUN_1440d05a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440d05a5(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  void *pvVar10;
  double *pdVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  double local_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  char *local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  undefined **ppuStack_138;
  undefined1 *local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_158 = "AssetRegistry";
  uStack_150._0_5_ = 0xd;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2d40 = (ulonglong)uVar13;
  DAT_14cbc2d48 = 0;
  atexit((_func_5014 *)&LAB_1440c8965);
  _DAT_14cbc2e18 = 0x47efffffe0000000;
  _DAT_14cbc2e20 = 0x47efffffe0000000;
  _DAT_14cbc2e28 = 0x47efffffe0000000;
  _DAT_14cbc2e30 = 0x47efffffe0000000;
  _DAT_14cbc2e38 = 0x47efffffe0000000;
  _DAT_14cbc2e40 = 0x47efffffe0000000;
  _DAT_14cbc2e48 = 0x47efffffe0000000;
  _DAT_14cbc2e50 = 0x47efffffe0000000;
  local_158 = "bone";
  uStack_150._0_5_ = 4;
  FUN_14001a6c0(&local_158,1);
  local_158 = "Use";
  uStack_150._0_5_ = 3;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2e58 = (ulonglong)uVar13;
  local_158 = "Sight";
  uStack_150._0_5_ = 5;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2e60 = (ulonglong)uVar13;
  local_158 = "TargetLock";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,10);
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2e68 = (ulonglong)uVar13;
  FUN_1400b22c2(&local_158,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar12 = FUN_140b10a34(&local_158,&DAT_14cbc2e70);
  if (cVar12 == '\0') {
    _DAT_14cbc2e70 = 0;
    uRam000000014cbc2e78 = 0;
  }
  if (local_158 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc2e84 = 0;
  FUN_14052b5e0(&DAT_14cbc2e80,"PlayerAwareness",0);
  _DAT_14cbc2e90 = "PlayerAwareness";
  local_158 = "basic";
  uStack_150._0_5_ = 5;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2e98 = (ulonglong)uVar13;
  local_158 = "challenge";
  uStack_150._0_5_ = 9;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ea0 = (ulonglong)uVar13;
  local_158 = "online";
  uStack_150._0_5_ = 6;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ea8 = (ulonglong)uVar13;
  local_158 = "social";
  uStack_150._0_5_ = 6;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2eb0 = (ulonglong)uVar13;
  local_158 = "alert";
  uStack_150._0_5_ = 5;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2eb8 = (ulonglong)uVar13;
  local_158 = "photo_mode";
  uStack_150._0_5_ = 10;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ec0 = (ulonglong)uVar13;
  local_158 = "generic_task";
  uStack_150._0_5_ = 0xc;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ec8 = (ulonglong)uVar13;
  local_158 = "mission";
  uStack_150._0_5_ = 7;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ed0 = (ulonglong)uVar13;
  local_158 = "mail";
  uStack_150._0_5_ = 4;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ed8 = (ulonglong)uVar13;
  local_158 = "respawn";
  uStack_150._0_5_ = 7;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ee0 = (ulonglong)uVar13;
  local_158 = "tutorial";
  uStack_150._0_5_ = 8;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ee8 = (ulonglong)uVar13;
  local_158 = "special_notification";
  uStack_150._0_5_ = 0x14;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ef0 = (ulonglong)uVar13;
  local_158 = "generic_notification";
  uStack_150._0_5_ = 0x14;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2ef8 = (ulonglong)uVar13;
  local_158 = "vault_card";
  uStack_150._0_5_ = 10;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2f00 = (ulonglong)uVar13;
  local_158 = "ONLINE_MESSAGE";
  uStack_150._0_5_ = 0xe;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2f08 = (ulonglong)uVar13;
  local_158 = "INGAME_MESSAGE";
  uStack_150._0_5_ = 0xe;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2f10 = (ulonglong)uVar13;
  local_158 = "NOTIFICATION_MESSAGE";
  uStack_150._0_5_ = 0x14;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2f18 = (ulonglong)uVar13;
  local_158 = "MENU_TUTORIAL_MESSAGE";
  uStack_150._0_5_ = 0x15;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2f20 = (ulonglong)uVar13;
  local_158 = "collectible";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0xb);
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2f28 = (ulonglong)uVar13;
  FUN_140056680(&DAT_14cbc2f30,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440c897d);
  FUN_140056680(&DAT_14cbc2f40,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440c898e);
  FUN_140056680(&DAT_14cbc2f50,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440c899f);
  FUN_140056680(&DAT_14cbc2f60,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440c89b0);
  FUN_1446f470e(&DAT_14cbc2f70,L"LIMB_GORED",1);
  _DAT_14cbc2f78 = 0x4072c00000000000;
  _DAT_14cbc2f80 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc2f88,L"body",1);
  FUN_1446f470e(&DAT_14cbc2f90,L"title_card",1);
  FUN_1446f470e(&DAT_14cbc2f98,L"ai_FFYLFocus",1);
  FUN_1446f470e(&DAT_14cbc2fa0,L"FFYLFocus",1);
  FUN_1446f470e(&DAT_14cbc2fa8,L"ai_FFYLCauser",1);
  _DAT_14cbc2fc4 = 0xffffffff;
  _DAT_14cbc2fc8 = 0;
  local_158 = (char *)0xb55f436712a4febb;
  uStack_150._0_4_ = 0xb5d3a4df;
  uStack_150._4_4_ = 0xeb1087b9;
  _DAT_14cbc2fcc = 0x12a4febb;
  uRam000000014cbc2fd0 = 0xb55f4367;
  uRam000000014cbc2fd4 = 0xb5d3a4df;
  uRam000000014cbc2fd8 = 0xeb1087b9;
  FUN_141005458(&local_158,0,L"OakAINodeComponent",0);
  atexit((_func_5014 *)&LAB_1440c89f2);
  local_158 = "FailedToStart";
  uStack_150._0_5_ = 0xd;
  uVar13 = FUN_14001a6c0(&local_158,1);
  DAT_14cbc3ee8 = (ulonglong)uVar13;
  local_158 = "AllDied";
  uStack_150._0_5_ = 7;
  uVar13 = FUN_14001a6c0(&local_158,1);
  DAT_14cbc3ed0 = (ulonglong)uVar13;
  local_158 = "ReachedEnd";
  uStack_150._0_5_ = 10;
  uVar13 = FUN_14001a6c0(&local_158,1);
  DAT_14cbc3ed8 = (ulonglong)uVar13;
  local_158 = "Despawned";
  uStack_150._0_5_ = 9;
  uVar13 = FUN_14001a6c0(&local_158,1);
  DAT_14cbc3ee0 = (ulonglong)uVar13;
  local_158 = "ActivityInstanceId";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0x12);
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc2fe0 = (ulonglong)uVar13;
  local_208 = 0;
  FUN_1415c789c(&DAT_14cbc2fe8,L"oak.Migration.PlayerCombatCooldown",&DAT_14c763fd0,
                L"Specifies how long after combat before we allow migration event spawning to resume."
               );
  atexit(FUN_1440c9abb);
  local_208 = 0;
  FUN_1415c789c(&DAT_14cbc2ff8,L"oak.Migration.SpawnBudgetOffset",&DAT_14c763fd4,
                L"Specifies the offset to apply to the spawn budget for migration events, ensuring that migration events leave a little room for combats to start."
               );
  atexit(FUN_1440c9b00);
  _DAT_14cbc3008 = 0;
  _DAT_14cbc3018 = &LAB_1440c9e05;
  _DAT_14cbc3020 = 0x45003000;
  DAT_14cbc3024 = 1;
  DAT_14cbc3010 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc3010;
  atexit((_func_5014 *)&LAB_1440c9e0a);
  FUN_1446f470e(&DAT_14cbc3030,L"ai_scripted_follow",1);
  FUN_1446f470e(&DAT_14cbc3038,L"RoadArea",1);
  FUN_1462a3428(&DAT_14cbc3040,&LAB_1440ca27e,"MigrationEventPoint",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_1440ca283);
  plVar15 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar15[1];
  *(uint *)(plVar15 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar15 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar15,iVar1);
  }
  *(char **)(*plVar15 + (longlong)iVar1 * 8) = "MigrationEventPoint";
  _DAT_14cbc3078 = &LAB_1440ca2b7;
  _DAT_14cbc3080 = 0x45004000;
  DAT_14cbc3084 = 1;
  DAT_14cbc3070 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc3070;
  atexit((_func_5014 *)&LAB_1440ca2bc);
  FUN_1446f470e(&DAT_14cbc3090,L"OrderRewind",1);
  FUN_1446f470e(&DAT_14cbc3098,L"Invalid",1);
  FUN_1446f470e(&DAT_14cbc30a0,L"Ticket",1);
  FUN_1446f470e(&DAT_14cbc30a8,L"NoValidStopFrame",1);
  _DAT_14cbc30b8 = &LAB_1440ca2f0;
  _DAT_14cbc30c0 = 0x45002000;
  DAT_14cbc30c4 = 1;
  DAT_14cbc30b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc30b0;
  atexit((_func_5014 *)&LAB_1440ca2f5);
  FUN_14662031e();
  atexit((_func_5014 *)&LAB_1440ca5fe);
  local_158 = "mission_set";
  uStack_150._0_5_ = 0xb;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"mission_state",1);
  _DAT_14cbc3290 = 0;
  local_158 = "mission_type";
  uStack_150._0_5_ = 0xc;
  DAT_14cbc3288 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"mission_state",1);
  _DAT_14cbc32a0 = 0;
  local_158 = "mission_objective_id";
  uStack_150._0_5_ = 0x14;
  _DAT_14cbc3298 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"mission_state",1);
  _DAT_14cbc32b0 = 0;
  local_158 = "Cash";
  uStack_150._0_5_ = 4;
  _DAT_14cbc32a8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc32b8 = (ulonglong)uVar13;
  FUN_1400b22c2(&DAT_14cbc32c0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440ca60a);
  FUN_1446f470e(&DAT_14cbc32d0,L"UNSET",1);
  local_158 = "init";
  uStack_150._0_5_ = 4;
  FUN_14001a6c0(&local_158,1);
  local_158 = "update";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  local_158 = "config_update";
  uStack_150._0_5_ = 0xd;
  FUN_14001a6c0(&local_158,1);
  local_158 = "deinit";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&DAT_14cbc32d8,L"Party",1);
  FUN_1446f470e(&DAT_14cbc32e0,&DAT_149e063b2,1);
  local_158 = "player_pawn";
  uStack_150._0_5_ = 0xb;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc32f0 = 0;
  local_158 = "player_movement_state";
  uStack_150._0_5_ = 0x15;
  DAT_14cbc32e8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3300 = 0;
  local_158 = "player_time_played";
  uStack_150._0_5_ = 0x12;
  DAT_14cbc32f8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3310 = 0;
  local_158 = "player_exp_level";
  uStack_150._0_5_ = 0x10;
  _DAT_14cbc3308 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3320 = 0;
  local_158 = "player_profile_difficulty";
  uStack_150._0_5_ = 0x19;
  _DAT_14cbc3318 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3330 = 0;
  local_158 = "current_biome";
  uStack_150._0_5_ = 0xd;
  DAT_14cbc3328 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3340 = 0;
  local_158 = "current_region";
  uStack_150._0_5_ = 0xe;
  _DAT_14cbc3338 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3350 = 0;
  local_158 = "current_world";
  uStack_150._0_5_ = 0xd;
  _DAT_14cbc3348 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3360 = 0;
  local_158 = "active_tracked_mission";
  uStack_150._0_5_ = 0x16;
  _DAT_14cbc3358 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  local_158 = "Global";
  uStack_150._0_5_ = 6;
  FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3370 = 0;
  local_158 = "game_session_primary_character_time_played";
  uStack_150._0_5_ = 0x2a;
  DAT_14cbc3368 = (ulonglong)uVar13;
  uVar14 = FUN_14001a6c0(&local_158,1);
  FUN_141544bf8(&DAT_14cbc3378,uVar14,&DAT_149dfb77a,0x51);
  _DAT_14cbc3378 = &PTR_FUN_14b961110;
  atexit((_func_5014 *)&LAB_1440ca61b);
  local_158 = "game_session_primary_character_exp_level";
  uStack_150._0_5_ = 0x28;
  uVar14 = FUN_14001a6c0(&local_158,1);
  FUN_141544bf8(&DAT_14cbc33c0,uVar14,&DAT_149dfb77a,0x51);
  _DAT_14cbc33c0 = &PTR_FUN_14b961150;
  atexit((_func_5014 *)&LAB_1440ca627);
  local_158 = "game_session_uvh_level";
  uStack_150._0_5_ = 0x16;
  uVar14 = FUN_14001a6c0(&local_158,1);
  FUN_141544bf8(&DAT_14cbc3408,uVar14,&DAT_149dfb77a,0x51);
  _DAT_14cbc3408 = &PTR_FUN_14b961178;
  atexit((_func_5014 *)&LAB_1440ca633);
  FUN_1466204ca();
  atexit((_func_5014 *)&LAB_1440ca63f);
  local_158 = "character_progression_instance_id";
  uStack_150._0_5_ = 0x21;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3610 = 0;
  local_158 = "skill_tree_instance_id";
  uStack_150._0_5_ = 0x16;
  _DAT_14cbc3608 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3620 = 0;
  local_158 = "character_level";
  uStack_150._0_5_ = 0xf;
  _DAT_14cbc3618 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3630 = 0;
  local_158 = "character_xp";
  uStack_150._0_5_ = 0xc;
  _DAT_14cbc3628 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3640 = 0;
  local_158 = "skill_points_available";
  uStack_150._0_5_ = 0x16;
  _DAT_14cbc3638 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3650 = 0;
  local_158 = "skill_points_allocated";
  uStack_150._0_5_ = 0x16;
  _DAT_14cbc3648 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3660 = 0;
  local_158 = "skill_respec_count";
  uStack_150._0_5_ = 0x12;
  _DAT_14cbc3658 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3670 = 0;
  local_158 = "skill_ui_time";
  uStack_150._0_5_ = 0xd;
  _DAT_14cbc3668 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3680 = 0;
  local_158 = "specializations_level";
  uStack_150._0_5_ = 0x15;
  _DAT_14cbc3678 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc3690 = 0;
  local_158 = "specializations_xp";
  uStack_150._0_5_ = 0x12;
  _DAT_14cbc3688 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc36a0 = 0;
  local_158 = "specialization_points_available";
  uStack_150._0_5_ = 0x1f;
  _DAT_14cbc3698 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc36b0 = 0;
  local_158 = "specialization_points_allocated";
  uStack_150._0_5_ = 0x1f;
  _DAT_14cbc36a8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc36c0 = 0;
  local_158 = "specialization_respec_count";
  uStack_150._0_5_ = 0x1b;
  _DAT_14cbc36b8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc36d0 = 0;
  local_158 = "specialization_ui_time";
  uStack_150._0_5_ = 0x16;
  _DAT_14cbc36c8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_status",1);
  _DAT_14cbc36e0 = 0;
  local_158 = "oak_player_progression_skill_tree";
  uStack_150._0_5_ = 0x21;
  _DAT_14cbc36d8 = (ulonglong)uVar13;
  uVar14 = FUN_14001a6c0(&local_158,1);
  FUN_14147d486(&DAT_14cbc36e8,uVar14,3);
  _DAT_14cbc36e8 = &PTR_FUN_14b9611d8;
  atexit((_func_5014 *)&LAB_1440ca64b);
  local_158 = "character_progression_instance_id";
  uStack_150._0_5_ = 0x21;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc38a8 = 0;
  local_158 = "skill_tree_instance_id";
  uStack_150._0_5_ = 0x16;
  _DAT_14cbc38a0 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc38b8 = 0;
  local_158 = "character_level";
  uStack_150._0_5_ = 0xf;
  _DAT_14cbc38b0 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc38c8 = 0;
  local_158 = "progress_graph_id";
  uStack_150._0_5_ = 0x11;
  _DAT_14cbc38c0 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc38d8 = 0;
  local_158 = "skill_tree_id";
  uStack_150._0_5_ = 0xd;
  _DAT_14cbc38d0 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc38e8 = 0;
  local_158 = "skill_branch_id";
  uStack_150._0_5_ = 0xf;
  _DAT_14cbc38e0 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc38f8 = 0;
  local_158 = "skill_node_id";
  uStack_150._0_5_ = 0xd;
  _DAT_14cbc38f0 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc3908 = 0;
  local_158 = "points_allocated";
  uStack_150._0_5_ = 0x10;
  _DAT_14cbc3900 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc3918 = 0;
  local_158 = "points_bonus";
  uStack_150._0_5_ = 0xc;
  _DAT_14cbc3910 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"oak_player_progression_skill_tree",1);
  _DAT_14cbc3928 = 0;
  _DAT_14cbc3920 = (ulonglong)uVar13;
  FUN_1466205ee();
  atexit((_func_5014 *)&LAB_1440ca657);
  local_158 = "dlc_title";
  uStack_150._0_5_ = 9;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3af0 = 0;
  local_158 = "card_level";
  uStack_150._0_5_ = 10;
  DAT_14cbc3ae8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3b00 = 0;
  local_158 = "card_xp";
  uStack_150._0_5_ = 7;
  DAT_14cbc3af8 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3b10 = 0;
  local_158 = "card_currency";
  uStack_150._0_5_ = 0xd;
  _DAT_14cbc3b08 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3b20 = 0;
  local_158 = "purchased_item_name";
  uStack_150._0_5_ = 0x13;
  _DAT_14cbc3b18 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3b30 = 0;
  local_158 = "purchased_item_amount";
  uStack_150._0_5_ = 0x15;
  DAT_14cbc3b28 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3b40 = 0;
  local_158 = "previous_card_dlc_title";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0x17);
  DAT_14cbc3b38 = (ulonglong)uVar13;
  uVar13 = FUN_14001a6c0(&local_158,1);
  FUN_1446f470e(&local_158,L"vault_cards",1);
  _DAT_14cbc3b50 = 0;
  _DAT_14cbc3b60 = &LAB_1440cbb5e;
  _DAT_14cbc3b68 = 0x461c4000;
  DAT_14cbc3b6c = 1;
  DAT_14cbc3b58 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc3b58;
  DAT_14cbc3b48 = (ulonglong)uVar13;
  atexit((_func_5014 *)&LAB_1440cbb63);
  DAT_14cbc3bd8 = 0;
  _DAT_14cbc3be0 = 0;
  local_148 = 0.0;
  ppuStack_138 = &PTR_LAB_14a1795c0;
  local_130 = &LAB_1440cf6b8;
  local_158 = &DAT_14011fc1e;
  FUN_1461885d6(&local_158);
  atexit((_func_5014 *)&LAB_1440cbbc0);
  FUN_1446f470e(&DAT_14cbc3c70,L"R_Hand_Weapon",1);
  FUN_1446f470e(&DAT_14cbc3c78,L"VB R_Hand_Weapon_L_Hand_Object",1);
  FUN_1446f470e(&DAT_14cbc3c80,L"VB R_Hand_Weapon_R_Hand_Object",1);
  FUN_1446f470e(&DAT_14cbc3c88,L"VB Root_L_Hand_Object",1);
  FUN_1446f470e(&DAT_14cbc3c90,L"VB Root_R_Hand_Object",1);
  DAT_14cbc3c98._0_4_ = 0;
  DAT_14cbc3c98._4_4_ = 0;
  _DAT_14cbc3ca0 = 0;
  _DAT_14cbc3ca4 = 0;
  _DAT_14cbc3cb0 = 0;
  _DAT_14cbc3cb4 = 0;
  _DAT_14cbc3cb8 = 0;
  _DAT_14cbc3cbc = 0;
  _DAT_14cbc3cc0 = 0;
  _DAT_14cbc3cc4 = 0;
  _DAT_14cbc3cc8 = 0;
  _DAT_14cbc3ccc = 0;
  _DAT_14cbc3cd0 = 0;
  _DAT_14cbc3cd4 = 0;
  _DAT_14cbc3cd8 = 0xb33bbd2e;
  local_158 = DAT_14c846290;
  uStack_150 = DAT_14c846298;
  local_148 = DAT_14c8462a0;
  local_140 = DAT_14c8462a8;
  ppuStack_138 = (undefined **)DAT_14c8462b0;
  local_130 = (undefined1 *)DAT_14c8462b8;
  local_128 = DAT_14c8462c0;
  dStack_120 = DAT_14c8462c8;
  local_118 = DAT_14c8462d0;
  local_110 = DAT_14c8462d8;
  dStack_108 = DAT_14c8462e0;
  local_100 = DAT_14c8462e8;
  dVar19 = DAT_14c8462e0 + DAT_14c846298;
  dVar3 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar2 = dVar3 * dVar3 + dVar19 * dVar19;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    uVar16 = uVar14;
    uVar17 = uVar18;
    local_200 = DAT_14c8464e8;
    dVar20 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar2) {
      uVar16 = 0;
      uVar17 = 0;
      local_200 = dVar19 * (1.0 / SQRT(dVar2));
      dVar20 = dVar3 * (1.0 / SQRT(dVar2));
    }
    dVar3 = dVar20;
    local_1f8 = (double)CONCAT44(uVar17,uVar16);
  }
  else {
    local_1f8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_200 = dVar19;
  }
  uStack_1f0 = 0;
  dVar19 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar20 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar2 = dVar20 * dVar20 + dVar19 * dVar19;
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    uVar16 = uVar14;
    uVar17 = uVar18;
    dVar21 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar2) {
      uVar16 = 0;
      uVar17 = 0;
      dVar21 = dVar19 * (1.0 / SQRT(dVar2));
      dVar4 = dVar20 * (1.0 / SQRT(dVar2));
    }
  }
  else {
    uVar7 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar16 = (int)uVar7;
    uVar17 = (int)(uVar7 >> 0x20);
    dVar21 = dVar19;
    dVar4 = dVar20;
  }
  local_168 = DAT_14c846300;
  local_178 = DAT_14c8462f0;
  dStack_170 = DAT_14c8462f8;
  local_198 = DAT_14c846308;
  dStack_190 = DAT_14c846310;
  local_188 = DAT_14c846318;
  dVar2 = DAT_14c846298 + DAT_14c846310;
  dVar19 = (double)DAT_14c846290 + DAT_14c846308;
  dVar20 = dVar19 * dVar19 + dVar2 * dVar2;
  if ((dVar20 != 1.0) || (NAN(dVar20))) {
    uVar22 = uVar14;
    uVar23 = uVar18;
    dVar5 = DAT_14c8464e8;
    dVar6 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar20) {
      uVar22 = 0;
      uVar23 = 0;
      dVar5 = dVar2 * (1.0 / SQRT(dVar20));
      dVar6 = dVar19 * (1.0 / SQRT(dVar20));
    }
  }
  else {
    uVar7 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar22 = (int)uVar7;
    uVar23 = (int)(uVar7 >> 0x20);
    dVar5 = dVar2;
    dVar6 = dVar19;
  }
  dVar19 = DAT_14c8462b0 + DAT_14c846310;
  dVar20 = DAT_14c8462a8 + DAT_14c846308;
  dVar2 = dVar20 * dVar20 + dVar19 * dVar19;
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    dVar8 = DAT_14c8464e8;
    dVar9 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar2) {
      uVar14 = 0;
      uVar18 = 0;
      dVar8 = dVar19 * (1.0 / SQRT(dVar2));
      dVar9 = dVar20 * (1.0 / SQRT(dVar2));
    }
  }
  else {
    uVar7 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar14 = (undefined4)uVar7;
    uVar18 = (undefined4)(uVar7 >> 0x20);
    dVar8 = dVar19;
    dVar9 = dVar20;
  }
  DAT_14cbc3ce0 = (void *)0x0;
  _DAT_14cbc3ce8 = 10;
  FUN_1405b70fe(&DAT_14cbc3ce0,10,0);
  pvVar10 = DAT_14cbc3ce0;
  memcpy(DAT_14cbc3ce0,&local_158,0x60);
  *(double *)((longlong)pvVar10 + 0x60) = dVar3;
  *(double *)((longlong)pvVar10 + 0x68) = local_200;
  *(double *)((longlong)pvVar10 + 0x70) = local_1f8;
  *(double *)((longlong)pvVar10 + 0x78) = dVar4;
  *(double *)((longlong)pvVar10 + 0x80) = dVar21;
  *(ulonglong *)((longlong)pvVar10 + 0x88) = CONCAT44(uVar17,uVar16);
  *(double *)((longlong)pvVar10 + 0x90) = local_178;
  *(double *)((longlong)pvVar10 + 0x98) = dStack_170;
  *(double *)((longlong)pvVar10 + 0xa0) = local_168;
  *(double *)((longlong)pvVar10 + 0xb8) = local_188;
  *(double *)((longlong)pvVar10 + 0xa8) = local_198;
  *(double *)((longlong)pvVar10 + 0xb0) = dStack_190;
  *(double *)((longlong)pvVar10 + 0xc0) = dVar6;
  *(double *)((longlong)pvVar10 + 200) = dVar5;
  *(ulonglong *)((longlong)pvVar10 + 0xd0) = CONCAT44(uVar23,uVar22);
  *(double *)((longlong)pvVar10 + 0xd8) = dVar9;
  *(double *)((longlong)pvVar10 + 0xe0) = dVar8;
  *(ulonglong *)((longlong)pvVar10 + 0xe8) = CONCAT44(uVar18,uVar14);
  atexit((_func_5014 *)&LAB_1440cc5fe);
  uVar16 = SUB84(DAT_14c846290,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar14 = SUB84(DAT_14c846298,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_200 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_200 = local_200 * 57.29577951308232;
    uVar16 = SUB84(DAT_14c846290,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar14 = SUB84(DAT_14c846298,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_200 = 0.0;
  }
  dVar3 = SQRT((double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) +
               (double)CONCAT44(uVar18,uVar14) * (double)CONCAT44(uVar18,uVar14));
  dVar2 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
    dVar2 = atan2(DAT_14c8462a0,dVar3);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar16 = SUB84(DAT_14c8462a8,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar14 = SUB84(DAT_14c8462b0,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1d8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1d8 = local_1d8 * 57.29577951308232;
    uVar16 = SUB84(DAT_14c8462a8,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar14 = SUB84(DAT_14c8462b0,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1d8 = 0.0;
  }
  dVar19 = SQRT((double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) +
                (double)CONCAT44(uVar18,uVar14) * (double)CONCAT44(uVar18,uVar14));
  dVar3 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar19 != 0.0)) || (NAN(dVar19))) {
    dVar3 = atan2(DAT_14c8462b8,dVar19);
    dVar3 = dVar3 * 57.29577951308232;
  }
  uVar16 = SUB84(DAT_14c8462c0,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462c8,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1e0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1e0 = local_1e0 * 57.29577951308232;
    uVar16 = SUB84(DAT_14c8462c0,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462c8,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1e0 = 0.0;
  }
  dVar19 = SQRT((double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) +
                (double)CONCAT44(uVar18,uVar14) * (double)CONCAT44(uVar18,uVar14));
  local_1a8 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    local_1a8 = atan2(DAT_14c8462d0,dVar19);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c8462d8,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar16 = SUB84(DAT_14c8462e0,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1e8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1e8 = local_1e8 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar16 = SUB84(DAT_14c8462e0,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1e8 = 0.0;
  }
  dVar19 = SQRT((double)CONCAT44(uVar18,uVar14) * (double)CONCAT44(uVar18,uVar14) +
                (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16));
  local_1b0 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    local_1b0 = atan2(DAT_14c8462e8,dVar19);
    local_1b0 = local_1b0 * 57.29577951308232;
    uVar16 = SUB84(DAT_14c8462e0,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar21 = (double)CONCAT44(uVar17,uVar16) + DAT_14c846298;
  dVar20 = (double)CONCAT44(uVar18,uVar14) + (double)DAT_14c846290;
  dVar19 = dVar20 * dVar20 + dVar21 * dVar21;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    dVar6 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar19) {
      dVar4 = dVar21 * (1.0 / SQRT(dVar19));
      dVar5 = dVar20 * (1.0 / SQRT(dVar19));
      dVar6 = 0.0;
    }
  }
  else {
    dVar19 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar4 = dVar21;
    dVar5 = dVar20;
    dVar6 = 0.0;
    if ((dVar19 == 0.0) && (dVar6 = 0.0, !NAN(dVar19))) {
      dVar6 = dVar19;
    }
  }
  local_1b8 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_1b8 = atan2(dVar4,dVar5);
    local_1b8 = local_1b8 * 57.29577951308232;
  }
  dVar19 = SQRT(dVar5 * dVar5 + dVar4 * dVar4);
  local_1c0 = 0.0;
  if (((dVar6 != 0.0) || (NAN(dVar6))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    local_1c0 = atan2(dVar6,dVar19);
    local_1c0 = local_1c0 * 57.29577951308232;
  }
  dVar19 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar20 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar21 = dVar20 * dVar20 + dVar19 * dVar19;
  if ((dVar21 != 1.0) || (NAN(dVar21))) {
    if (9.99999993922529e-09 <= dVar21) {
      dVar19 = dVar19 * (1.0 / SQRT(dVar21));
      dVar20 = dVar20 * (1.0 / SQRT(dVar21));
      uVar14 = 0;
      uVar18 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar19 = DAT_14c8464e8;
      dVar20 = DAT_14c8464e0;
    }
  }
  else {
    dVar21 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar14 = 0;
    uVar18 = 0;
    if ((dVar21 == 0.0) && (!NAN(dVar21))) {
      uVar14 = SUB84(dVar21,0);
      uVar18 = (undefined4)((ulonglong)dVar21 >> 0x20);
    }
  }
  local_1c8 = 0.0;
  if ((((dVar20 != 0.0) || (NAN(dVar20))) || (dVar19 != 0.0)) || (NAN(dVar19))) {
    local_1c8 = atan2(dVar19,dVar20);
    local_1c8 = local_1c8 * 57.29577951308232;
  }
  dVar19 = SQRT(dVar20 * dVar20 + dVar19 * dVar19);
  local_1d0 = 0.0;
  if ((((double)CONCAT44(uVar18,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar18,uVar14)))) ||
     ((dVar19 != 0.0 || (NAN(dVar19))))) {
    local_1d0 = atan2((double)CONCAT44(uVar18,uVar14),dVar19);
    local_1d0 = local_1d0 * 57.29577951308232;
  }
  uVar16 = SUB84(DAT_14c8462f0,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462f8,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar19 = 0.0;
  local_1f8 = dVar2;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar19 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar19 = dVar19 * 57.29577951308232;
    uVar16 = SUB84(DAT_14c8462f0,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462f8,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar20 = SQRT((double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) +
                (double)CONCAT44(uVar18,uVar14) * (double)CONCAT44(uVar18,uVar14));
  dVar2 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar20 != 0.0)) || (NAN(dVar20))) {
    dVar2 = atan2(DAT_14c846300,dVar20);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c846308,0);
  uVar18 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar16 = SUB84(DAT_14c846310,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar20 = 0.0;
  local_1a0 = dVar3;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar20 = atan2(DAT_14c846310,DAT_14c846308);
    dVar20 = dVar20 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c846308,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar16 = SUB84(DAT_14c846310,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar21 = SQRT((double)CONCAT44(uVar18,uVar14) * (double)CONCAT44(uVar18,uVar14) +
                (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16));
  dVar3 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar21 != 0.0 || (NAN(dVar21))))) {
    dVar3 = atan2(DAT_14c846318,dVar21);
    dVar3 = dVar3 * 57.29577951308232;
    uVar16 = SUB84(DAT_14c846310,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar14 = SUB84(DAT_14c846308,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar5 = (double)CONCAT44(uVar17,uVar16) + DAT_14c846298;
  dVar4 = (double)CONCAT44(uVar18,uVar14) + (double)DAT_14c846290;
  dVar21 = dVar4 * dVar4 + dVar5 * dVar5;
  if ((dVar21 != 1.0) || (NAN(dVar21))) {
    if (9.99999993922529e-09 <= dVar21) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar21));
      dVar4 = dVar4 * (1.0 / SQRT(dVar21));
      uVar14 = 0;
      uVar18 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar4 = DAT_14c8464e0;
    }
  }
  else {
    dVar21 = DAT_14c846318 + DAT_14c8462a0;
    uVar14 = 0;
    uVar18 = 0;
    if ((dVar21 == 0.0) && (!NAN(dVar21))) {
      uVar14 = SUB84(dVar21,0);
      uVar18 = (undefined4)((ulonglong)dVar21 >> 0x20);
    }
  }
  dVar21 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
    dVar21 = atan2(dVar5,dVar4);
    dVar21 = dVar21 * 57.29577951308232;
  }
  dVar5 = SQRT(dVar4 * dVar4 + dVar5 * dVar5);
  dVar4 = 0.0;
  if ((((double)CONCAT44(uVar18,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar18,uVar14)))) ||
     ((dVar5 != 0.0 || (NAN(dVar5))))) {
    dVar4 = atan2((double)CONCAT44(uVar18,uVar14),dVar5);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar6 = DAT_14c846310 + DAT_14c8462b0;
  dVar8 = DAT_14c846308 + DAT_14c8462a8;
  dVar5 = dVar8 * dVar8 + dVar6 * dVar6;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    if (9.99999993922529e-09 <= dVar5) {
      dVar6 = dVar6 * (1.0 / SQRT(dVar5));
      dVar8 = dVar8 * (1.0 / SQRT(dVar5));
      uVar14 = 0;
      uVar18 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar6 = DAT_14c8464e8;
      dVar8 = DAT_14c8464e0;
    }
  }
  else {
    dVar5 = DAT_14c846318 + DAT_14c8462b8;
    uVar14 = 0;
    uVar18 = 0;
    if ((dVar5 == 0.0) && (!NAN(dVar5))) {
      uVar14 = SUB84(dVar5,0);
      uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
  }
  dVar5 = 0.0;
  if ((((dVar8 != 0.0) || (NAN(dVar8))) || (dVar6 != 0.0)) || (NAN(dVar6))) {
    dVar5 = atan2(dVar6,dVar8);
    dVar5 = dVar5 * 57.29577951308232;
  }
  dVar8 = SQRT(dVar8 * dVar8 + dVar6 * dVar6);
  dVar6 = 0.0;
  if ((((double)CONCAT44(uVar18,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar18,uVar14)))) ||
     ((dVar8 != 0.0 || (NAN(dVar8))))) {
    dVar6 = atan2((double)CONCAT44(uVar18,uVar14),dVar8);
    dVar6 = dVar6 * 57.29577951308232;
  }
  DAT_14cbc3cf0 = (double *)0x0;
  _DAT_14cbc3cf8 = 10;
  FUN_1464bf958(&DAT_14cbc3cf0,10,0);
  pdVar11 = DAT_14cbc3cf0;
  *DAT_14cbc3cf0 = local_1f8;
  pdVar11[1] = local_200;
  pdVar11[2] = 0.0;
  pdVar11[3] = local_1a0;
  pdVar11[4] = local_1d8;
  pdVar11[5] = 0.0;
  pdVar11[6] = local_1a8;
  pdVar11[7] = local_1e0;
  pdVar11[8] = 0.0;
  pdVar11[9] = local_1b0;
  pdVar11[10] = local_1e8;
  pdVar11[0xb] = 0.0;
  pdVar11[0xc] = local_1c0;
  pdVar11[0xd] = local_1b8;
  pdVar11[0xe] = 0.0;
  pdVar11[0xf] = local_1d0;
  pdVar11[0x10] = local_1c8;
  pdVar11[0x11] = 0.0;
  pdVar11[0x12] = dVar2;
  pdVar11[0x13] = dVar19;
  pdVar11[0x14] = 0.0;
  pdVar11[0x15] = dVar3;
  pdVar11[0x16] = dVar20;
  pdVar11[0x17] = 0.0;
  pdVar11[0x18] = dVar4;
  pdVar11[0x19] = dVar21;
  pdVar11[0x1a] = 0.0;
  pdVar11[0x1b] = dVar6;
  pdVar11[0x1c] = dVar5;
  pdVar11[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_1440cc60f);
  FUN_140056680(&DAT_14cbc3d00,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1440cc620);
  ram0x00014cbc3d14 = 0;
  FUN_14052b5e0(&DAT_14cbc3d10,"volume_overall",0);
  ram0x00014cbc3d20 = 0;
  FUN_14052b5e0(&DAT_14cbc3d1c,"volume_music",0);
  ram0x00014cbc3d2c = 0;
  FUN_14052b5e0(&DAT_14cbc3d28,"volume_sfx",0);
  ram0x00014cbc3d38 = 0;
  FUN_14052b5e0(&DAT_14cbc3d34,"volume_dialog",0);
  ram0x00014cbc3d44 = 0;
  FUN_14052b5e0(&DAT_14cbc3d40,"PlayInBackground",0);
  ram0x00014cbc3d50 = 0;
  FUN_14052b5e0(&DAT_14cbc3d4c,"MuteHitNotifies",0);
  ram0x00014cbc3d5c = 0;
  FUN_14052b5e0(&DAT_14cbc3d58,"audio_preset",0);
  ram0x00014cbc3d68 = 0;
  FUN_14052b5e0(&DAT_14cbc3d64,"force_mono",0);
  ram0x00014cbc3d74 = 0;
  FUN_14052b5e0(&DAT_14cbc3d70,"use_controller_speaker",0);
  ram0x00014cbc3d80 = 0;
  FUN_14052b5e0(&DAT_14cbc3d7c,"menu_music_volume",0);
  ram0x00014cbc3d8c = 0;
  FUN_14052b5e0(&DAT_14cbc3d88,"game_music_volume",0);
  ram0x00014cbc3d98 = 0;
  FUN_14052b5e0(&DAT_14cbc3d94,"cinematic_music_volume",0);
  ram0x00014cbc3da4 = 0;
  FUN_14052b5e0(&DAT_14cbc3da0,"boss_music_trim",0);
  ram0x00014cbc3db0 = 0;
  FUN_14052b5e0(&DAT_14cbc3dac,"player_weapons_trim",0);
  ram0x00014cbc3dbc = 0;
  FUN_14052b5e0(&DAT_14cbc3db8,"explosions_trim",0);
  ram0x00014cbc3dc8 = 0;
  FUN_14052b5e0(&DAT_14cbc3dc4,"ui_trim",0);
  ram0x00014cbc3dd4 = 0;
  FUN_14052b5e0(&DAT_14cbc3dd0,"outgoing_damage_trim",0);
  ram0x00014cbc3de0 = 0;
  FUN_14052b5e0(&DAT_14cbc3ddc,"incoming_damage_trim",0);
  ram0x00014cbc3dec = 0;
  FUN_14052b5e0(&DAT_14cbc3de8,"player_voice_volume",0);
  ram0x00014cbc3df8 = 0;
  FUN_14052b5e0(&DAT_14cbc3df4,"player_efforts_trim",0);
  ram0x00014cbc3e04 = 0;
  FUN_14052b5e0(&DAT_14cbc3e00,"player_callouts_trim",0);
  ram0x00014cbc3e10 = 0;
  FUN_14052b5e0(&DAT_14cbc3e0c,"player_idle_lines_trim",0);
  ram0x00014cbc3e1c = 0;
  FUN_14052b5e0(&DAT_14cbc3e18,"combat_voice_volume");
  ram0x00014cbc3e28 = 0;
  FUN_14052b5e0(&DAT_14cbc3e24,"claptrap_volume",0);
  ram0x00014cbc3e34 = 0;
  FUN_14052b5e0(&DAT_14cbc3e30,"eq_mode");
  ram0x00014cbc3e40 = 0;
  FUN_14052b5e0(&DAT_14cbc3e3c,"audio_language");
  ram0x00014cbc3e4c = 0;
  FUN_14052b5e0(&DAT_14cbc3e48,"audioprefs");
  _DAT_14cbc3e58 = "audioprefs";
  _DAT_14cbc3e60 = 0;
  uRam000000014cbc3e68 = 0;
  _DAT_14cbc3e70 = 0;
  DAT_14cbc3e78 = 0;
  uRam000000014cbc3e80 = 0;
  FUN_1446ddda2(&DAT_14cbc3e60,"oak.audioprefs",0);
  atexit((_func_5014 *)&LAB_1440cc664);
  FUN_1446f470e(&DAT_14cbc3e88,L"DialogComponent_Radio",1);
  local_158 = "Standard";
  uStack_150._0_5_ = 8;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3e90 = (ulonglong)uVar13;
  local_158 = "PrologueSkip";
  uStack_150._0_5_ = 0xc;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3e98 = (ulonglong)uVar13;
  local_158 = "UltimateVaultHunterSkip";
  uStack_150._0_5_ = 0x17;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3ea0 = (ulonglong)uVar13;
  local_158 = "SkipToDLC_Cowbell";
  uStack_150._0_5_ = 0x11;
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3ea8 = (ulonglong)uVar13;
  local_158 = "SkipToDLC_Harmonica";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0x13);
  uVar13 = FUN_14001a6c0(&local_158,1);
  _DAT_14cbc3eb0 = (ulonglong)uVar13;
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d354e FUN_1440d354e body=920 status=ok
// SIG undefined FUN_1440d354e(void)

undefined8 * FUN_1440d354e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  byte local_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((*(int *)(param_1 + 0x2c) != 0) && (uVar10 = *(uint *)(param_1 + 0x28), -1 < (int)uVar10))
       && ((int)uVar10 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x2c))))) &&
     ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar6;
    }
    else {
      lVar2 = 0;
    }
    if (((*(longlong *)(lVar2 + 0x1f0) != 0) &&
        (lVar2 = FUN_145725aea(*(longlong *)(lVar2 + 0x1f0),
                               CONCAT71((int7)((ulonglong)plVar6 >> 8),1)), lVar2 != 0)) &&
       ((*(char *)(lVar2 + 0x178) == '\x03' &&
        ((lVar2 = *(longlong *)(lVar2 + 0x3d0), lVar2 != 0 && (lVar3 = FUN_14118bdd6(), lVar3 != 0))
        )))) {
      lVar3 = lVar3 + 0x98;
      lVar4 = FUN_14118be1e(lVar3);
      if ((lVar4 != 0) && (lVar4 = FUN_14118be1e(lVar3), lVar4 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x1c8);
        if (lVar2 == 0) {
          local_48 = DAT_14c8464f0;
          local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_58 = *(longlong *)(lVar2 + 0x260);
          uStack_50 = *(longlong *)(lVar2 + 0x268);
          local_48 = *(longlong *)(lVar2 + 0x270);
        }
        uVar5 = FUN_14118be1e(lVar3);
        if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1440d38b3:
          uVar7 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x28);
          uVar7 = 0;
          if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if ((puVar9 == (undefined8 *)0x0) ||
               ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x2c) ||
                ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1440d38b3;
            uVar7 = *puVar9;
          }
        }
        uVar5 = FUN_1402a1570(uVar7,uVar5);
        FUN_1402a10ba(&local_32,uVar7,uVar5,&local_58);
        uVar10 = 0;
        if (local_31 != '\0') {
          uVar10 = (uint)local_32;
        }
        lVar2 = FUN_14118be1e(lVar3);
        if ((int)uVar10 < *(int *)(lVar2 + 0x68)) {
          lVar2 = FUN_14118be1e(lVar3);
          lVar2 = *(longlong *)(lVar2 + 0x60);
          lVar4 = (ulonglong)uVar10 * 0x38;
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar4);
          local_58 = lVar3;
          uVar5 = FUN_14477b664(*(undefined8 *)(lVar2 + 0x20 + lVar4));
          uStack_50 = FUN_14477b664(uVar5);
          lVar2 = *(longlong *)(lVar2 + 0x28 + lVar4);
          local_48 = lVar2;
          if (uStack_50 == 0) {
            uVar5 = FUN_14043db3a();
            uStack_50 = FUN_14477b664(uVar5);
          }
          if (lVar2 != 0) {
LAB_1440d378a:
            if (uStack_50 == 0) {
              uVar5 = FUN_14043db3a();
              uStack_50 = FUN_14477b664(uVar5);
              lVar2 = local_48;
              if (((local_48 == 0) && (lVar2 = 0, uStack_50 != 0)) && (local_58 != 0)) {
                plVar6 = *(longlong **)(uStack_50 + 0xb8);
                if ((plVar6 == (longlong *)0x0) ||
                   (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 == '\0')) {
                  lVar2 = 0;
                  local_48 = lVar2;
                }
                else {
                  uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
                  lVar2 = FUN_144aff482(uVar5,&local_58);
                  local_48 = lVar2;
                }
              }
            }
            puVar8 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
              puVar8 = *(undefined4 **)(lVar2 + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar2 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar2);
              DAT_14c947fe0 = lVar2;
            }
            FUN_140045924(DAT_14c947fe0,param_2,puVar8,1);
            goto LAB_1440d35d1;
          }
          local_48 = 0;
          if ((((lVar3 != 0) && (uStack_50 != 0)) &&
              (plVar6 = *(longlong **)(uStack_50 + 0xb8), plVar6 != (longlong *)0x0)) &&
             (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 != '\0')) {
            uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar2 = FUN_144aff482(uVar5,&local_58);
            local_48 = lVar2;
            if (lVar2 != 0) goto LAB_1440d378a;
          }
        }
      }
    }
  }
  *param_2 = 0;
LAB_1440d35d1:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440d3954 FUN_1440d3954 body=369 status=ok
// SIG undefined FUN_1440d3954(void)

undefined4 *
FUN_1440d3954(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400021e4(param_3,&local_58);
  puVar8 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar9 = (undefined2 *)CONCAT44(uStack_54,local_58);
  }
  if (*(int *)(param_4 + 1) != 0) {
    puVar8 = (undefined2 *)*param_4;
  }
  FUN_140002266(&local_70,L"%s%s",puVar8,puVar9);
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)*param_1;
  puVar8 = local_70;
  if (local_68 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_88,puVar8,1);
  local_7c = 0xffffffff;
  local_78 = local_88;
  local_60 = *puVar1;
  FUN_1446dcdd4(&local_58);
  if (DAT_14c9a75f8 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_144837462(DAT_14c9a75f8,&local_58);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    local_58 = 0xffffffff;
    uVar6 = puVar1[3];
    uStack_54 = (undefined4)uVar6;
    local_50 = (int)((ulonglong)uVar6 >> 0x20);
    uVar6 = FUN_1418ca558();
    puVar7 = (undefined4 *)FUN_1417411cc(lVar5,&local_58,&local_7c,uVar6);
    if (puVar7 != (undefined4 *)0x0) goto LAB_1440d3a7a;
  }
  puVar7 = (undefined4 *)param_1[1];
LAB_1440d3a7a:
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *param_2 = *puVar7;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440d3ac6 FUN_1440d3ac6 body=919 status=ok
// SIG undefined FUN_1440d3ac6(void)

int FUN_1440d3ac6(longlong param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 ***pppuVar10;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  char local_88;
  undefined7 uStack_87;
  longlong *local_78;
  ushort local_70;
  byte local_68;
  undefined4 local_60 [2];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_94 = 0xffffffff;
  local_90 = *param_3;
  iVar3 = 0;
  if ((int)(param_4 & 0xff) < *(int *)(param_1 + 0x368)) {
    lVar6 = FUN_1409448ee(param_1 + 0x2b8);
    if (lVar6 != 0) {
      local_a0 = 0xffffffff;
      local_9c = *(undefined8 *)(*(longlong *)(param_1 + 0x360) + (param_4 & 0xff) * 8);
      uVar7 = FUN_14026198c();
      lVar8 = FUN_1417411cc(lVar6,&local_a0,&local_94,uVar7);
      if (lVar8 == 0) {
        pcVar9 = &local_88;
        FUN_14092c00a(lVar6,pcVar9,&local_a0,&local_94);
        iVar3 = FUN_14005fbd2(pcVar9,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_70) {
            pcVar9 = (char *)CONCAT71(uStack_87,local_88);
          }
          (*pcVar2)(pcVar9);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT71(uStack_87,local_88));
        }
      }
      else {
        local_88 = '\0';
        local_60[0] = 0;
        FUN_14575a19a(&local_88,0);
        FUN_1448729ea(lVar8,local_58,&local_88);
        iVar3 = FUN_14005fbd2(local_58,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppuVar10 = local_58;
          if (0x18 < local_40) {
            pppuVar10 = (undefined8 ***)local_58[0];
          }
          (*pcVar2)(pppuVar10);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(local_58[0]);
        }
        FUN_1448173f8(local_60);
        if ((local_88 == '\x03') && (local_78 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
      }
    }
  }
  lVar6 = FUN_1409448ee(param_1 + 0x2d0);
  if (lVar6 != 0) {
    lVar8 = FUN_140425b2f(param_2);
    if (lVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)(lVar8 + 0x748);
    }
    if ((int)uVar4 < *(int *)(param_1 + 0x358)) {
      local_a0 = 0xffffffff;
      local_9c = *(undefined8 *)(*(longlong *)(param_1 + 0x350) + (ulonglong)uVar4 * 8);
      uVar7 = FUN_14026198c();
      lVar8 = FUN_1417411cc(lVar6,&local_a0,&local_94,uVar7);
      if (lVar8 == 0) {
        pcVar9 = &local_88;
        FUN_14092c00a(lVar6,pcVar9,&local_a0,&local_94);
        iVar5 = FUN_14005fbd2(pcVar9,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_70) {
            pcVar9 = (char *)CONCAT71(uStack_87,local_88);
          }
          (*pcVar2)(pcVar9);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT71(uStack_87,local_88));
        }
      }
      else {
        local_88 = '\0';
        local_60[0] = 0;
        FUN_14575a19a(&local_88,0);
        FUN_1448729ea(lVar8,local_58,&local_88);
        iVar5 = FUN_14005fbd2(local_58,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppuVar10 = local_58;
          if (0x18 < local_40) {
            pppuVar10 = (undefined8 ***)local_58[0];
          }
          (*pcVar2)(pppuVar10);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(local_58[0]);
        }
        FUN_1448173f8(local_60);
        if ((local_88 == '\x03') && (local_78 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
      }
      iVar3 = iVar3 + iVar5;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d3e76 FUN_1440d3e76 body=150 status=ok
// SIG undefined FUN_1440d3e76(void)

ulonglong FUN_1440d3e76(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    plVar3 = (longlong *)0x0;
    goto LAB_1440d3e97;
  }
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (lVar4 == 0) {
    param_1 = FUN_145d10d9a();
    lVar4 = FUN_14477b664(param_1);
    *(longlong *)(param_2 + 0x50) = lVar4;
  }
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (((*(longlong *)(param_2 + 0x58) != 0) || (plVar3 = (longlong *)0x0, lVar4 == 0)) ||
     (*(longlong *)(param_2 + 0x48) == 0)) goto LAB_1440d3e97;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1440d3f08:
    lVar4 = 0;
  }
  else {
    plVar3 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1440d3f08;
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(plVar3,(longlong *)(param_2 + 0x48));
  }
  *(longlong *)(param_2 + 0x58) = lVar4;
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),lVar4 != 0);
LAB_1440d3e97:
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 1440d3f0c FUN_1440d3f0c body=301 status=ok
// SIG undefined FUN_1440d3f0c(void)

undefined8 FUN_1440d3f0c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (lVar6 == 0) {
    uVar4 = FUN_145d10d9a();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar6;
  }
  plVar1 = (longlong *)(param_2 + 0x48);
  lVar5 = *(longlong *)(param_2 + 0x58);
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_2 + 0x58) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = *(longlong *)(param_2 + 0x50);
  }
  if (lVar6 == 0) {
    uVar4 = FUN_145d10d9a();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar6;
    lVar5 = *(longlong *)(param_2 + 0x58);
    if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_2 + 0x58) = lVar5;
    }
  }
  uVar4 = FUN_1457835fc(lVar5,param_3,0);
  return uVar4;
}



// FUNCTION 1440d403a FUN_1440d403a body=909 status=ok
// SIG undefined FUN_1440d403a(void)

float * FUN_1440d403a(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 8) == 2) {
    lVar5 = FUN_1405c673d();
    bVar4 = *(byte *)(lVar5 + ((ulonglong)(*(int *)(param_1 + 0xc) == 2) ^ 0xd9));
LAB_1440d407d:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = (float)(uint)bVar4;
    uVar3 = 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 1) {
      if ((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x18) - 1U < 0xfffffffe)) {
        lVar7 = FUN_1447262c2(param_4);
        lVar5 = FUN_14049cbd6(param_4);
        if (lVar5 != 0) {
          if (lVar7 != 0) {
            lVar5 = lVar7;
          }
          local_48 = *(undefined8 *)(param_1 + 0x10);
          local_40 = *(undefined4 *)(param_1 + 0x18);
          local_38 = 0;
          lVar5 = FUN_140425b2f(lVar5);
          if (lVar5 == 0) goto LAB_1440d4219;
          bVar4 = FUN_140425c80(lVar5,&local_48);
          goto LAB_1440d421b;
        }
      }
    }
    else if (iVar2 == 2) {
      lVar7 = FUN_1447262c2(param_4);
      lVar5 = FUN_14049cbd6(param_4);
      if (lVar5 != 0) {
        if (lVar7 != 0) {
          lVar5 = lVar7;
        }
        lVar5 = FUN_140425b2f(lVar5);
        if (lVar5 == 0) {
LAB_1440d4219:
          bVar4 = 0;
        }
        else {
          bVar4 = *(byte *)(lVar5 + 0x748);
        }
LAB_1440d421b:
        if (*(int *)(param_1 + 8) == 0) {
          lVar5 = FUN_1405c673d();
          bVar1 = *(byte *)(lVar5 + ((ulonglong)(*(int *)(param_1 + 0xc) == 2) ^ 0xd9));
          if (bVar1 == 0) {
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = 1.0;
          }
          else {
            fVar8 = (float)bVar4 / (float)bVar1;
            if (1.0 <= fVar8) {
              fVar8 = 1.0;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = fVar8;
          }
          uVar3 = 3;
          goto LAB_1440d415b;
        }
        if (*(int *)(param_1 + 8) == 1) goto LAB_1440d407d;
      }
    }
    else if ((iVar2 == 0) && (lVar5 = FUN_1447262c2(param_4), lVar5 != 0)) {
      if (DAT_14cac9ca8 == 0) {
        local_60 = &local_30;
        local_30 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1478c0a72;
        local_70 = (code *)&LAB_1417b2375;
        local_78 = L"Engine";
        local_80 = 0x1000000000;
        local_88 = 0x10000004;
        local_90 = 8;
        local_98 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar7 = DAT_14cac9ca8;
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
LAB_1440d4135:
        bVar4 = FUN_148ceed2d(lVar5);
        goto LAB_1440d421b;
      }
      if (DAT_14c951858 == 0) {
        local_60 = &local_30;
        local_30 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1468c5283;
        local_70 = FUN_142809da0;
        local_78 = L"Engine";
        local_80 = 0x400000000;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar6 = *(longlong *)(lVar5 + 0x20);
      if (lVar6 != 0) {
        iVar2 = *(int *)(lVar7 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
             (lVar5 = lVar6,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar7 + 0x30)) {
            lVar5 = 0;
          }
        } while ((lVar5 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
        if (lVar5 != 0) goto LAB_1440d4135;
      }
    }
    *(undefined2 *)(param_2 + 6) = 0;
    uVar3 = 0;
  }
LAB_1440d415b:
  *(undefined1 *)(param_2 + 8) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d43c8 FUN_1440d43c8 body=1597 status=ok
// SIG undefined FUN_1440d43c8(void)

void FUN_1440d43c8(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  code ****ppppcVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code ***local_c0;
  code *local_b8;
  code *local_b0;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  code ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1408c7d08();
  *(float *)(param_1 + 0x25) = 1.0 / *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x2c) = 1.0 / *(float *)(param_1 + 0x27);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cb63950 == 0) {
      local_c0 = (code ***)local_70;
      local_70[0] = (code ***)FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = (code *)&LAB_1464ec72a;
      local_c8 = &LAB_1486f5f75;
      local_d0 = (code *)&LAB_140945686;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = CONCAT44(local_f8._4_4_,0x19d0);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    local_98 = DAT_14cb63950;
    if ((DAT_14cb63950 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_f8 = 0;
    local_a0 = plVar5;
    FUN_141274158(&local_90,plVar5,&local_98,0);
    lVar8 = local_90;
    if ((longlong)local_88 != 0) {
      lVar11 = 0;
      do {
        lVar10 = *(longlong *)(lVar8 + lVar11);
        if (lVar10 != 0) {
          if (DAT_14cac6e60 == 0) {
            local_70[0] = (code ***)FUN_144a7958c;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_142b47bc4;
            local_c0 = (code ***)local_70;
            local_c8 = &LAB_1478989f1;
            local_d0 = (code *)&LAB_146391124;
            local_d8 = L"Engine";
            local_e0 = 0x10000000000;
            local_e8 = 0x10000005;
            local_f0 = 0x10;
            local_f8 = CONCAT44(local_f8._4_4_,0x620);
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          }
          if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
            uVar1 = *(uint *)(lVar10 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar12 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar4 = *(int *)(lVar10 + 0x10);
              bVar13 = iVar4 == 0;
              if (bVar13) {
                *(int *)(lVar10 + 0x10) = iVar12;
                iVar4 = 0;
              }
              UNLOCK();
              if (!bVar13) {
                iVar12 = iVar4;
              }
            }
            iVar4 = (int)param_1[0x1e];
            *(uint *)(param_1 + 0x1e) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xf4) < iVar4 + 1U) {
              FUN_1410872ba(param_1 + 0x1d,iVar4);
            }
            *(ulonglong *)(param_1[0x1d] + (longlong)iVar4 * 8) = CONCAT44(iVar12,uVar1);
          }
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)local_88 * 8 != lVar11);
    }
    if (DAT_14c9a4e08 == 0) {
      local_c0 = (code ***)local_70;
      local_70[0] = (code ***)FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_1427b09ee;
      local_c8 = &LAB_1470c76a3;
      local_d0 = FUN_1462ab034;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10004001;
      local_f0 = 8;
      local_f8 = CONCAT44(local_f8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar5 = (longlong *)(**(code **)(*local_a0 + 0x288))(local_a0,DAT_14c9a4e08);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_c0 = (code ***)local_70;
        local_70[0] = (code ***)FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_1427b09ee;
        local_c8 = &LAB_1470c76a3;
        local_d0 = FUN_1462ab034;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10004001;
        local_f0 = 8;
        local_f8 = CONCAT44(local_f8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14c9a4e08);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        uVar7 = (**(code **)(*plVar6 + 0x28))(plVar6);
        local_58 = 4;
        local_70[0] = (code ***)((ulonglong)local_70[0] & 0xffffffff00000000);
        local_50 = 1;
        local_80 = DAT_14cbc46b8;
        local_78 = 0xffffffff;
        FUN_140af060e(uVar7,&local_80,local_70);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppcVar9 = local_70;
          if (0x18 < local_58) {
            ppppcVar9 = (code ****)local_70[0];
          }
          (*pcVar2)(ppppcVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
      }
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_148cefa30(param_1);
  FUN_148cefb6e(param_1);
  if ((*(char *)((longlong)param_1 + 0xcc) == '\x01') &&
     (*(char *)((longlong)param_1 + 0xcd) == '\x01')) {
    FUN_148cefc7c(param_1);
  }
  if ((*(char *)((longlong)param_1 + 0xc1) == '\x01') &&
     (cVar3 = FUN_148cef998(param_1), cVar3 == '\0')) {
    FUN_148cef436(param_1,1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar8 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x178) != '\x03')) {
      FUN_148cefdc8(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d4a06 FUN_1440d4a06 body=1136 status=ok
// SIG undefined FUN_1440d4a06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440d4a06(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar8 = (**(code **)(*param_2 + 0x5d8))(param_2);
  if (param_3 == 0 || lVar8 == 0) goto LAB_1440d4d23;
  plVar3 = *(longlong **)(param_3 + 0x3a8);
  if (plVar3 == (longlong *)0x0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_98 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x528))(plVar3,&local_c8,plVar3 + 0x48);
  }
  pdVar9 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_3 + 0x1c8) != 0) {
    pdVar9 = (double *)(*(longlong *)(param_3 + 0x1c8) + 0x240);
  }
  lVar14 = param_2[0x39];
  if (lVar14 == 0) {
    pdVar11 = (double *)&DAT_14c8464e0;
    uVar22 = (undefined4)DAT_14c8464f0;
    uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar22 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
    uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
    pdVar11 = (double *)(lVar14 + 0x260);
  }
  dVar18 = *pdVar11 - pdVar9[4];
  dVar19 = pdVar11[1] - pdVar9[5];
  dVar5 = (double)CONCAT44(uVar23,uVar22) - pdVar9[6];
  auVar1 = *(undefined1 (*) [16])(pdVar9 + 8);
  dVar20 = -*pdVar9;
  dVar21 = -pdVar9[1];
  dVar16 = pdVar9[2] * -1.0;
  dVar24 = dVar18 * dVar16 - dVar20 * dVar5;
  dVar20 = dVar19 * dVar20 - dVar18 * dVar21;
  dVar4 = dVar5 * dVar21 - dVar19 * dVar16;
  dVar4 = dVar4 + dVar4;
  dVar24 = dVar24 + dVar24;
  dVar20 = dVar20 + dVar20;
  auVar17 = divpd(_DAT_149934d80,auVar1);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar17._0_8_) *
          ((dVar20 * dVar21 - dVar24 * dVar16) + pdVar9[3] * 1.0 * dVar4 + dVar18);
  dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar17._8_8_) *
           (dVar20 * *pdVar9 + dVar16 * dVar4 + pdVar9[3] * 1.0 * dVar24 + dVar19);
  if (((((*(char *)(param_1 + 0x25f8) == '\x01') && (100.0 < dVar5)) ||
       ((*(char *)(param_1 + 0x25fa) == '\x01' && (dVar5 < -100.0)))) ||
      ((*(char *)(param_1 + 0x25f9) == '\x01' && (100.0 < dVar20)))) ||
     ((*(char *)(param_1 + 0x25fb) == '\x01' && (dVar20 < -100.0)))) {
    lVar10 = FUN_1402095ca();
    lVar14 = param_2[2];
    uVar12 = (ulonglong)*(uint *)(lVar14 + 0x38);
    if (((int)*(uint *)(lVar14 + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30)) {
      if (DAT_14cba8288 == 0) {
        local_e0 = &local_88;
        local_88 = FUN_141864c34;
        local_d0 = FUN_14081d0ea;
        local_d8 = &LAB_1464cee30;
        local_e8 = &LAB_148bfac22;
        local_f0 = &LAB_140f21842;
        local_f8 = &DAT_149e063b2;
        local_100 = 0;
        local_108 = 0x10000004;
        local_110 = 0x10;
        local_118 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        lVar14 = param_2[2];
        uVar12 = (ulonglong)*(uint *)(lVar14 + 0x38);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= (int)uVar12) &&
         (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
          == DAT_14cba8288 + 0x30)) goto LAB_1440d4ca4;
    }
    else {
      param_2 = (longlong *)param_2[0x2e2];
      if (param_2 != (longlong *)0x0) {
LAB_1440d4ca4:
        if (((char)param_2[0xba6] != '\x02') && ((char)param_2[0x332] == '\0')) {
          (**(code **)(*param_2 + 0x928))(param_2,CONCAT71((int7)(uVar12 >> 8),3));
        }
      }
    }
  }
  uVar2 = *(uint *)(lVar8 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar14 = 0;
  }
  uVar7 = *(uint *)(lVar14 + 0x10);
  if (*(uint *)(lVar14 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    uVar13 = DAT_14c964868 + 1;
    bVar15 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar15) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar13);
    }
    LOCK();
    uVar7 = *(uint *)(lVar14 + 0x10);
    bVar15 = uVar7 == 0;
    if (bVar15) {
      *(uint *)(lVar14 + 0x10) = uVar13;
      uVar7 = 0;
    }
    UNLOCK();
    if (bVar15) {
      uVar7 = uVar13;
    }
  }
  local_88 = (code *)CONCAT44(uVar7,uVar2);
  iVar6 = FUN_14043631c(param_1 + 0x2610,uVar2 ^ uVar7);
  if (iVar6 != -1) {
    FUN_148cf1a98(param_1,lVar8);
  }
LAB_1440d4d23:
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d4e78 FUN_1440d4e78 body=62 status=ok
// SIG undefined FUN_1440d4e78(void)

void FUN_1440d4e78(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1440d4f1c FUN_1440d4f1c body=355 status=ok
// SIG undefined FUN_1440d4f1c(void)

void FUN_1440d4f1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (lVar2 != 0) {
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
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      if (lVar2 == 0) goto LAB_1440d4f8a;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         == DAT_14cbadd90 + 0x30 && (*(char *)(param_1 + 0x931) == '\x01')))) {
      FUN_148cf224a(param_1);
    }
  }
LAB_1440d4f8a:
  *(undefined1 *)(param_1 + 0x931) = 0;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d5148 FUN_1440d5148 body=309 status=ok
// SIG undefined FUN_1440d5148(void)

void FUN_1440d5148(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  char cVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(*(longlong *)*param_1 + 0x28);
  param_3[2] = *(double *)(lVar1 + 0x60);
  dVar5 = *(double *)(lVar1 + 0x58);
  *param_3 = *(double *)(lVar1 + 0x50);
  param_3[1] = dVar5;
  param_4[2] = (double)param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar1 = param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)param_4 = (int)param_2[1];
  *(undefined4 *)((longlong)param_4 + 4) = uVar3;
  *(int *)(param_4 + 1) = (int)lVar1;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar4;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)*param_1 + 0x28) + 0xf0);
  if ((plVar2 != (longlong *)0x0) && (*param_2 != 0)) {
    cVar6 = (**(code **)(*plVar2 + 0x4c8))();
    if (cVar6 != '\0') {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)*param_1 + 0x28) + 0xf0);
      (**(code **)(*plVar2 + 0x4a8))(plVar2,local_98,*param_2,0);
      *param_3 = local_78;
      param_3[1] = dStack_70;
      param_3[2] = local_68;
    }
  }
  if (0.0 < *(float *)(param_2 + 4)) {
    *param_4 = (double)(*(float *)(param_2 + 4) *
                       (*(float *)(*(longlong *)*param_1 + 0x68) /
                        *(float *)(*(longlong *)*param_1 + 0x60) + -1.0) *
                       (float)((*(double *)param_1[1] - *param_3) + (double)param_2[1])) + *param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d5296 FUN_1440d5296 body=69 status=ok
// SIG undefined FUN_1440d5296(void)

void FUN_1440d5296(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001440d52d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  return;
}



// FUNCTION 1440d5318 FUN_1440d5318 body=119 status=ok
// SIG undefined FUN_1440d5318(void)

void FUN_1440d5318(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  FUN_1418730e0();
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x490))();
    if (lVar1 != 0) {
      lVar2 = FUN_14030d4a0();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        *(undefined4 *)(param_1 + 0x48) =
             *(undefined4 *)(lVar1 + 0x3f4 + (ulonglong)(*(longlong *)(param_1 + 0xa58) != 0) * 4);
      }
    }
  }
  return;
}



// FUNCTION 1440d53b4 FUN_1440d53b4 body=173 status=ok
// SIG undefined FUN_1440d53b4(void)

void FUN_1440d53b4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,float param_7)

{
  float fVar1;
  
  if (param_7 < 0.5) {
    fVar1 = powf(param_7 + param_7,*(float *)(param_1 + 0xc));
    fVar1 = (fVar1 + 0.0) * 0.5;
  }
  else {
    fVar1 = powf(1.0 - (param_7 + param_7 + -1.0),*(float *)(param_1 + 0xc));
    fVar1 = (1.0 - fVar1) * 0.5 + 0.5;
  }
  *(float *)(param_4 + 0x30) =
       (1.0 - fVar1) * *(float *)(param_6 + 0x30) + *(float *)(param_4 + 0x30);
  return;
}



// FUNCTION 1440d5491 FUN_1440d5491 body=41 status=ok
// SIG undefined FUN_1440d5491(void)

void FUN_1440d5491(void)

{
  DAT_14cbc53e0 = 0;
  if (DAT_14cbc53d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68d62();
  return;
}



// FUNCTION 1440d54bf FUN_1440d54bf body=69 status=ok
// SIG undefined FUN_1440d54bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440d54bf(void)

{
  _DAT_14cbc5480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440d5501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc5488,1);
  return;
}



// FUNCTION 1440d5504 FUN_1440d5504 body=69 status=ok
// SIG undefined FUN_1440d5504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440d5504(void)

{
  _DAT_14cbc5498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440d5546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc54a0,1);
  return;
}



// FUNCTION 1440d5549 FUN_1440d5549 body=19 status=ok
// SIG undefined FUN_1440d5549(void)

void FUN_1440d5549(void)

{
  FUN_148cfa0e6();
  FUN_146621bfc();
  return;
}



// FUNCTION 1440d555c FUN_1440d555c body=1728 status=ok
// SIG undefined FUN_1440d555c(void)

void FUN_1440d555c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 **ppuVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  bool bVar21;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 *local_148;
  longlong *local_140;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_140f05dd8();
  plVar2 = (longlong *)(param_1 + 0x2600);
  lVar12 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(plVar2);
  if (lVar12 != 0) {
    uVar13 = FUN_14050fd64();
    local_168 = 0;
    FUN_14088df30(uVar13,&local_148,lVar12,0);
    plVar15 = local_140;
    if ((undefined8 **)(param_1 + 0x2908) != &local_148) {
      *(undefined8 **)(param_1 + 0x2908) = local_148;
      local_148 = (undefined8 *)0x0;
      plVar5 = *(longlong **)(param_1 + 0x2910);
      if (local_140 != plVar5) {
        local_140 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x2910) = plVar15;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar5 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
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
    }
    plVar15 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_140 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    local_148 = (undefined8 *)0x0;
    local_140 = (longlong *)((ulonglong)local_140 & 0xffffffff00000000);
    FUN_1446efa72(&local_148,0,3);
    puVar6 = local_148;
    local_140 = (longlong *)CONCAT44(local_140._4_4_,3);
    *local_148 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_148[2] = lVar14;
    *local_148 = &PTR_FUN_14b9631e0;
    local_148[3] = 0;
    iVar17 = 0;
    if (param_1 != 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_148 + 3) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar17 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        iVar18 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar17 = *(int *)(lVar12 + 0x10);
        bVar21 = iVar17 == 0;
        if (bVar21) {
          *(int *)(lVar12 + 0x10) = iVar18;
          iVar17 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar17 = iVar18;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar17;
    puVar6[4] = FUN_140ddcb8c;
    *(undefined4 *)(puVar6 + 5) = 0;
    uVar13 = *(undefined8 *)(param_1 + 0x2908);
    local_158 = 0;
    local_150 = 0;
    FUN_14009d848(&local_158,&local_148);
    FUN_140844560(uVar13,local_78,&local_158);
    *(undefined8 *)(param_1 + 0x2918) = local_78[0];
    if ((int)local_140 != 0) {
      if (local_148 == (undefined8 *)0x0) goto LAB_1440d57a9;
      (**(code **)*local_148)(local_148,0);
      FUN_1446efa72(&local_148,0,0);
      local_140 = (longlong *)((ulonglong)local_140 & 0xffffffff00000000);
    }
    if (local_148 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1440d57a9:
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  bVar9 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x28e8) = param_1;
  if ((param_1 == 0) || ((bVar9 & 1) == 0)) {
    *(longlong *)(param_1 + 0x28d8) = param_1;
    if (param_1 == 0) {
      uVar13 = 0;
      goto LAB_1440d57f6;
    }
  }
  else {
    FUN_1456cec3c(param_1);
    *(longlong *)(param_1 + 0x28d8) = param_1;
  }
  uVar13 = FUN_140437bea();
  uVar13 = FUN_144718840(param_1,uVar13);
LAB_1440d57f6:
  *(undefined8 *)(param_1 + 0x28e0) = uVar13;
  plVar15 = *(longlong **)(param_1 + 0x1c8);
  if (plVar15 != (longlong *)0x0) {
    lVar12 = FUN_140c7aaec();
    if (((*(int *)(lVar12 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
         lVar12 + 0x30)) &&
       ((**(code **)(*plVar15 + 0x588))(plVar15,2), (*(byte *)((longlong)plVar15 + 0x9c) & 8) == 0))
    {
      FUN_141062a52(plVar15,0);
    }
  }
  FUN_140c7a916(param_1);
  lVar12 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x20))(plVar2);
  if ((*(longlong *)(lVar12 + 0x18) != 0) && (*(longlong *)(lVar12 + 0x20) != 0)) {
    lVar12 = (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar15 = (longlong *)0x0;
    if (*(longlong *)(lVar12 + 0x18) != 0) {
      plVar15 = *(longlong **)(lVar12 + 0x20);
    }
    (**(code **)(*plVar15 + 0x50))(plVar15,plVar2);
  }
  if (((*(byte *)(param_1 + 0x65) & 2) == 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    local_160 = param_1 + 0x2858;
    FUN_14151a0ec(local_160,param_1 + 0x25f8,0);
    plVar2 = *(longlong **)(param_1 + 0x1c8);
    if (plVar2 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x2818) = 0;
      *(undefined4 *)(param_1 + 0x281c) = 0x3ff00000;
      *(undefined4 *)(param_1 + 0x2820) = 0;
      *(undefined4 *)(param_1 + 0x2824) = 0x3ff00000;
      *(undefined8 *)(param_1 + 0x2828) = 0x3ff0000000000000;
    }
    else {
      uVar7 = *(undefined4 *)((longlong)plVar2 + 0x284);
      lVar14 = plVar2[0x51];
      uVar8 = *(undefined4 *)((longlong)plVar2 + 0x28c);
      lVar12 = plVar2[0x52];
      *(int *)(param_1 + 0x2818) = (int)plVar2[0x50];
      *(undefined4 *)(param_1 + 0x281c) = uVar7;
      *(int *)(param_1 + 0x2820) = (int)lVar14;
      *(undefined4 *)(param_1 + 0x2824) = uVar8;
      *(longlong *)(param_1 + 0x2828) = lVar12;
      lVar14 = FUN_140c7aaec();
      lVar12 = DAT_14cbc5490;
      if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
          lVar14 + 0x30)) {
        iVar17 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        if ((iVar17 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar17 == 2)))) {
          uVar16 = 0;
        }
        else if (iVar17 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          uVar16 = (ulonglong)(DVar10 != DVar11);
        }
        else {
          uVar16 = 1;
        }
        (**(code **)(*plVar2 + 0x908))(plVar2,*(undefined1 *)(lVar12 + uVar16),0);
      }
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0x400000000;
    (**(code **)(*(longlong *)(param_1 + 0x25f8) + 0xd8))(param_1 + 0x25f8,local_78,2);
    local_88 = (undefined8 **)0x0;
    local_80 = 0x1800000000;
    FUN_1407fcdae(param_1,&local_148,0);
    ppuVar20 = local_88;
    if (local_88 == (undefined8 **)0x0) {
      ppuVar20 = &local_148;
    }
    if ((longlong)(int)local_80 != 0) {
      ppuVar3 = ppuVar20 + (int)local_80;
      do {
        puVar6 = *ppuVar20;
        if (puVar6 != *(undefined8 **)(param_1 + 0x1c8)) {
          puVar19 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            puVar19 = local_78;
          }
          lVar12 = (longlong)(int)local_50;
          if (lVar12 != 0) {
            lVar14 = 0;
            do {
              FUN_14166d440(*(undefined8 *)((longlong)puVar19 + lVar14),puVar6);
              lVar14 = lVar14 + 8;
            } while (lVar12 * 8 != lVar14);
          }
        }
        ppuVar20 = ppuVar20 + 1;
      } while (ppuVar20 != ppuVar3);
    }
    FUN_141893d4e(local_160);
    if (*(longlong *)(param_1 + 0x2848) == 0) {
      plVar2 = (longlong *)(param_1 + 0x2838);
      *(undefined8 **)(param_1 + 0x2850) = &DAT_14cbc56a0;
      *(longlong *)(param_1 + 0x2848) = param_1;
      lVar12 = DAT_14cbc56d0;
      while( true ) {
        *(longlong *)(param_1 + 0x2838) = lVar12;
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0x2850) + 0x30);
        LOCK();
        lVar14 = *plVar15;
        bVar21 = lVar12 == lVar14;
        if (bVar21) {
          *plVar15 = (longlong)plVar2;
          lVar14 = lVar12;
        }
        UNLOCK();
        if (bVar21) break;
        *(longlong *)(param_1 + 0x2838) = lVar14;
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2850) + 0x30);
      }
      if (*plVar2 != 0) {
        *(longlong **)(*plVar2 + 8) = plVar2;
      }
      plVar2 = *(longlong **)(param_1 + 0x2850);
      if ((longlong)(int)plVar2[1] != 0) {
        lVar12 = 0;
        do {
          if ((*(int *)(*plVar2 + 8 + lVar12) != 0) && (*(longlong *)(*plVar2 + lVar12) != 0)) {
            FUN_140db0732(plVar2,*(undefined8 *)(param_1 + 0x2848));
            break;
          }
          lVar12 = lVar12 + 0x10;
        } while ((longlong)(int)plVar2[1] * 0x10 != lVar12);
      }
    }
    if (local_88 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d5c2a FUN_1440d5c2a body=349 status=ok
// SIG undefined FUN_1440d5c2a(void)

undefined8 FUN_1440d5c2a(longlong param_1)

{
  longlong lVar1;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x2f8) != 0) && (*(longlong **)(param_1 + 0x300) != (longlong *)0x0))
  {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x10))();
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d5ded FUN_1440d5ded body=41 status=ok
// SIG undefined FUN_1440d5ded(void)

void FUN_1440d5ded(void)

{
  DAT_14cbc5528 = 0;
  if (DAT_14cbc5520 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68e00();
  return;
}



// FUNCTION 1440d5e1c FUN_1440d5e1c body=318 status=ok
// SIG undefined FUN_1440d5e1c(void)

void FUN_1440d5e1c(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_140bfc8e6();
  if (*(longlong *)(param_2 + 0x68) != DAT_14cbc55d0) {
    return;
  }
  if (*(char *)(param_1 + -0x220) == '\x03') {
    iVar4 = *(int *)(param_1 + 0x238c);
    if (iVar4 == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x2388);
    if ((int)uVar1 < 0) {
      return;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return;
    }
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar5 == 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x10) != iVar4) {
      return;
    }
    if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
      return;
    }
LAB_1440d5f06:
    uVar1 = *(uint *)(param_1 + 0x2388);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1440d5f41;
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar2 != (undefined8 *)0x0) &&
       ((*(int *)(puVar2 + 2) == iVar4 && ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar2;
      goto LAB_1440d5f41;
    }
  }
  else {
    if (*(int *)(param_1 + 0x240c) == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x2408);
    if ((int)uVar1 < 0) {
      return;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return;
    }
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar5 == 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x240c)) {
      return;
    }
    if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x238c);
    if (iVar4 != 0) goto LAB_1440d5f06;
  }
  uVar3 = 0;
LAB_1440d5f41:
  FUN_148cf6136(param_1 + -0x398,uVar3);
  return;
}



// FUNCTION 1440d5f5a FUN_1440d5f5a body=2422 status=ok
// SIG undefined FUN_1440d5f5a(void)

void FUN_1440d5f5a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_538 [32];
  undefined4 local_518;
  undefined4 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined2 *local_4f8;
  undefined1 *local_4f0;
  undefined1 *local_4e8;
  code **local_4e0;
  undefined1 *local_4d8;
  code *local_4d0;
  code *local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined1 local_410;
  undefined **local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined **local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined2 local_378;
  undefined4 local_374;
  undefined2 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  longlong *local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined2 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  uint local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined2 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined6 local_5c;
  undefined2 uStack_56;
  undefined6 uStack_54;
  undefined1 local_4c;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_538;
  if ((*(longlong *)(param_1 + 0x2298) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x2298) + 0x468) != '\x01')) goto LAB_1440d66bb;
  if (*(char *)(param_1 + -0x248) == '\x03') {
    iVar3 = *(int *)(param_1 + 0x2364);
    if (iVar3 != 0) {
      uVar8 = *(uint *)(param_1 + 0x2360);
LAB_1440d5fcf:
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        if ((lVar9 != 0) &&
           ((*(int *)(lVar9 + 0x10) == iVar3 && ((*(uint *)(lVar9 + 8) & 0x10200000) == 0))))
        goto LAB_1440d66bb;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x23e4);
    if (iVar3 != 0) {
      uVar8 = *(uint *)(param_1 + 0x23e0);
      goto LAB_1440d5fcf;
    }
  }
  if (*(char *)(param_1 + 0x2418) != '\0') goto LAB_1440d66bb;
  cVar2 = FUN_1418dfc56(param_1 + -0x3c0);
  if ((cVar2 == '\0') || ((longlong *)*param_2 == (longlong *)0x0)) goto LAB_1440d66bb;
  lVar9 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  if (lVar9 == 0) goto LAB_1440d66bb;
  if (DAT_14cbadd90 == 0) {
    local_4e0 = &local_4c0;
    local_4c0 = FUN_141030f22;
    local_4d0 = FUN_14081d0ea;
    local_4d8 = &LAB_1459f2e4c;
    local_4e8 = &LAB_148c39de3;
    local_4f0 = &LAB_1457a9eb2;
    local_4f8 = &DAT_149e063b2;
    local_500 = 0;
    local_508 = 0x10000004;
    local_510 = 0x10;
    local_518 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (lVar9 = *(longlong *)(lVar9 + 0xf48), lVar9 == 0)) goto LAB_1440d66bb;
  local_4c0 = (code *)0x0;
  local_4b8 = 0x10;
  local_4b0 = 0;
  local_4a8 = 1;
  local_4a0 = 0;
  local_498 = 0xf00000d0;
  local_490 = 0;
  local_488 = 4;
  local_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0xf00000d0;
  local_440 = 0;
  local_438 = 0x3f800000;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_410 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_408 = &PTR_FUN_14b023b20;
  local_3f0 = &PTR_FUN_14b023b40;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = &PTR_FUN_14b00be70;
  local_3d0 = 0;
  local_3c8 = 0xf00000d0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b4 = 0;
  local_3b0 = 0;
  local_3ac = 1;
  local_3a8 = 0;
  local_3a0 = 0xf00000d0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0xf00000d0;
  local_380 = 0;
  local_378 = 0;
  local_374 = 0;
  local_370 = 0;
  local_36c = 6;
  local_368 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_360 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0xf00000d0;
  local_300 = 0;
  local_2f8 = 0x3f800000;
  local_298 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_288 = 0x10;
  local_280 = 0;
  local_278 = 1;
  local_270 = 0;
  local_268 = 0xf00000d0;
  local_260 = 0;
  local_258 = 4;
  local_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0xf00000d0;
  local_210 = 0;
  local_208 = 0x3f800000;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = &PTR_FUN_14b023b20;
  local_1c0 = &PTR_FUN_14b023b40;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = &PTR_FUN_14b00be70;
  local_1a0 = 0;
  local_198 = 0xf00000d0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 1;
  local_178 = 0;
  local_170 = 0xf00000d0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0xf00000d0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 6;
  local_138 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_130 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0xf00000d0;
  local_d0 = 0;
  local_c8 = 0x3f800000;
  local_68 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_4c = 0;
  local_5c = 0;
  uStack_56 = 0;
  uStack_54 = 0;
  lVar7 = *(longlong *)(param_1 + 0x2298);
  lVar5 = *(longlong *)(lVar7 + 0x478);
  if (lVar5 == 0) {
    uVar4 = FUN_141862950();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar7 + 0x478) = lVar5;
  }
  lVar6 = *(longlong *)(lVar7 + 0x480);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(lVar7 + 0x470) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar7 + 0x470));
          *(longlong *)(lVar7 + 0x480) = lVar6;
          if (lVar6 != 0) goto LAB_1440d65b8;
          goto LAB_1440d68ca;
        }
      }
      *(undefined8 *)(lVar7 + 0x480) = 0;
    }
LAB_1440d68ca:
    local_48 = (code *)0x0;
  }
  else {
LAB_1440d65b8:
    puVar10 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,&local_48,puVar10,1);
  }
  if (local_4c0 != local_48) {
    local_4b0 = 0;
  }
  local_298 = local_298 | 1;
  local_4c0 = local_48;
  lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x3b48) + 0x20))(lVar9 + 0x3b48);
  if (*(longlong **)(lVar9 + 0x40) == (longlong *)0x0 || *(longlong *)(lVar9 + 0x38) == 0) {
LAB_1440d667e:
    local_298 = local_298 | 2;
  }
  else {
    lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x40) + 8))();
    if (lVar9 == 0) goto LAB_1440d667e;
    lVar7 = FUN_140ebc504();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1440d667e;
    cVar2 = FUN_145902652(param_1 + -0x3c0,lVar9);
    if (cVar2 == '\0') goto LAB_1440d667e;
  }
  if ((code **)(param_3 + 0x10) != &local_4c0) {
    FUN_14007afac((code **)(param_3 + 0x10),&local_4c0);
  }
  FUN_144908ac8(&local_290);
  FUN_144908ac8(&local_4c0);
LAB_1440d66bb:
  if ((local_40 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d68e8 FUN_1440d68e8 body=1116 status=ok
// SIG undefined FUN_1440d68e8(void)

void FUN_1440d68e8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
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
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((char)param_2[2] != '\0') goto LAB_1440d6bdb;
  lVar1 = param_1 + -0x3c0;
  cVar5 = FUN_1418dfc56(lVar1);
  if (((cVar5 == '\0') || ((longlong *)param_2[1] == (longlong *)0x0 || *param_2 == 0)) ||
     (lVar7 = (**(code **)(*(longlong *)param_2[1] + 0x18))(), lVar7 == 0)) goto LAB_1440d6bdb;
  if (DAT_14cbadd90 == 0) {
    local_90 = &local_58;
    local_58 = FUN_141030f22;
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
  if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (lVar7 = *(longlong *)(lVar7 + 0xf48), lVar7 == 0)) goto LAB_1440d6bdb;
  plVar2 = (longlong *)(lVar7 + 0x3b48);
  lVar8 = (**(code **)(*(longlong *)(lVar7 + 0x3b48) + 0x20))(plVar2);
  if ((*(longlong **)(lVar8 + 0x40) == (longlong *)0x0 || *(longlong *)(lVar8 + 0x38) == 0) ||
     (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x40) + 8))(), lVar8 == 0)) goto LAB_1440d6bdb;
  lVar9 = FUN_140ebc504();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
      lVar9 + 0x30)) goto LAB_1440d6bdb;
  if (((((*(int *)(param_1 + 0x23e4) != 0) && (uVar3 = *(uint *)(param_1 + 0x23e0), -1 < (int)uVar3)
        ) && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x23e4))))) &&
     ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar10;
    }
    else {
      lVar9 = 0;
    }
    if (*(longlong *)(param_1 + 0x2380) != 0) {
      FUN_14480f766(lVar9 + 0x2648);
    }
  }
  local_58 = (code *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  pcVar4 = local_58;
  local_50 = 4;
  *(undefined ***)local_58 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  lVar9 = lVar7 + 0x8890;
  *(longlong *)(local_58 + 0x10) = lVar11;
  *(undefined ***)local_58 = &PTR_FUN_14b963330;
  *(undefined8 *)(local_58 + 0x18) = 0;
  iVar6 = 0;
  if (lVar1 != 0) {
    uVar3 = *(uint *)(param_1 + -0x3b4);
    *(uint *)(local_58 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      local_6c = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      local_68 = lVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      local_6c);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = local_6c;
        iVar6 = 0;
      }
      UNLOCK();
      lVar9 = local_68;
      if (bVar12) {
        iVar6 = local_6c;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar6;
  *(longlong *)(pcVar4 + 0x20) = lVar1;
  *(longlong *)(pcVar4 + 0x28) = lVar8;
  *(longlong *)(pcVar4 + 0x30) = lVar7;
  FUN_14490d954(lVar9,&local_60,&local_58);
  if (local_50 == 0) {
LAB_1440d6bab:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1440d6bab;
  }
  *(undefined8 *)(param_1 + 0x2410) = local_60;
  *(undefined1 *)(param_1 + 0x2418) = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2);
LAB_1440d6bdb:
  FUN_145d73658(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d6d46 FUN_1440d6d46 body=1176 status=ok
// SIG undefined FUN_1440d6d46(void)

void FUN_1440d6d46(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((*(int *)(param_1 + 0x27a4) == 0) || (uVar5 = *(uint *)(param_1 + 0x27a0), (int)uVar5 < 0))
       || (DAT_14c9647dc <= (int)uVar5)) ||
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar3 == (longlong *)0x0 || ((int)plVar3[2] != *(int *)(param_1 + 0x27a4))))) ||
     ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_1440d70c0;
  if ((*(longlong *)(param_1 + 0x2658) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x2658) + 0x468) != '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar4 = *plVar3;
  }
  else {
    lVar4 = 0;
  }
  lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x2600) + 0x20))(lVar4 + 0x2600);
  if ((*(longlong *)(lVar4 + 0x18) == 0) || (*(longlong *)(lVar4 + 0x20) == 0)) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      if (((*(int *)(param_1 + 0x2724) == 0) ||
          (uVar5 = *(uint *)(param_1 + 0x2720), (int)uVar5 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar5 ||
          (((lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0 ||
            (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x2724))) ||
           ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
LAB_1440d716f:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
      goto LAB_1440d6e82;
    }
    if ((((*(int *)(param_1 + 0x27a4) == 0) || (uVar5 = *(uint *)(param_1 + 0x27a0), (int)uVar5 < 0)
         ) || (DAT_14c9647dc <= (int)uVar5)) ||
       (((lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0 ||
         (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x27a4))) ||
        ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) goto LAB_1440d716f;
LAB_1440d6ef5:
    iVar2 = *(int *)(param_1 + 0x27a4);
    if (iVar2 != 0) {
      uVar5 = *(uint *)(param_1 + 0x27a0);
LAB_1440d6f09:
      if (((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
         ((lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 != 0 &&
          ((*(int *)(lVar4 + 0x10) == iVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0))))))
      goto LAB_1440d70c0;
      goto LAB_1440d6f42;
    }
LAB_1440d711a:
    lVar4 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_1440d6ef5;
LAB_1440d6e82:
    iVar2 = *(int *)(param_1 + 0x2724);
    if (iVar2 != 0) {
      uVar5 = *(uint *)(param_1 + 0x2720);
      goto LAB_1440d6f09;
    }
LAB_1440d6f42:
    if (*(int *)(param_1 + 0x27a4) == 0) goto LAB_1440d711a;
    uVar5 = *(uint *)(param_1 + 0x27a0);
    lVar4 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0x27a4) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_1440d711a;
      lVar4 = *plVar3;
    }
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a3a3510;
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
  local_48[2] = lVar6;
  *local_48 = &PTR_FUN_14b963520;
  local_48[3] = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 3) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar2 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar2 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar2 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar1 + 0x1c) = iVar2;
  puVar1[4] = param_1;
  FUN_14490d954(lVar4 + 0x2648,&local_50,&local_48);
  if (local_40 == 0) {
LAB_1440d70a6:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1440d70a6;
  }
  *(undefined8 *)(param_1 + 0x2740) = local_50;
LAB_1440d70c0:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d720e FUN_1440d720e body=320 status=ok
// SIG undefined FUN_1440d720e(void)

bool FUN_1440d720e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 1440d734e FUN_1440d734e body=341 status=ok
// SIG undefined FUN_1440d734e(void)

void FUN_1440d734e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  cVar1 = *(char *)(param_1 + 0x27a8);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x2738) = *(undefined8 *)(param_1 + 0x27a0);
    FUN_1440d6d46(param_1);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_148cf6c32(param_1);
    if (*(int *)(param_1 + 0x273c) == 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x2738);
    if ((int)uVar2 < 0) {
      return;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return;
    }
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    if ((int)plVar6[2] != *(int *)(param_1 + 0x273c)) {
      return;
    }
    if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
      return;
    }
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar6;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(param_1 + 0x2740) != 0) {
      FUN_14480f766(lVar3 + 0x2648);
    }
    *(undefined8 *)(param_1 + 0x2738) = 0;
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  if (*(int *)(param_1 + 0x27a4) != 0) {
    uVar2 = *(uint *)(param_1 + 0x27a0);
    uVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440d73ea;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x27a4) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar5;
      goto LAB_1440d73ea;
    }
  }
  uVar4 = 0;
LAB_1440d73ea:
  FUN_148cf69b4(param_1,uVar4);
  *(undefined1 *)(param_1 + 0x27a8) = 3;
  return;
}



// FUNCTION 1440d74a4 FUN_1440d74a4 body=1291 status=ok
// SIG undefined FUN_1440d74a4(void)

void FUN_1440d74a4(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = *(int *)(param_1 + 0x2724);
  if (((((iVar4 == 0) || (uVar1 = *(uint *)(param_1 + 0x2720), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar4)))) ||
     ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_1440d7842;
  if (*(char *)(param_1 + 0x2790) == '\x01') {
    if (((*(uint *)(plVar6 + 1) & 0x10200000) != 0) ||
       (puVar2 = (undefined8 *)*plVar6, puVar2 == (undefined8 *)0x0)) {
      *(undefined1 *)(param_1 + 0x2790) = 0;
      goto LAB_1440d7547;
    }
    local_50 = puVar2;
    FUN_1447cd2ec(param_1 + 0x2630,&local_50);
    FUN_148cf5f78(puVar2,param_1);
    local_3c = 0;
    local_50 = DAT_14cbc55e0;
    local_48 = -1;
    FUN_141094e00(param_1 + 0x4d8,&local_50,0);
    iVar4 = *(int *)(param_1 + 0x2724);
    *(undefined1 *)(param_1 + 0x2790) = 0;
    if (iVar4 != 0) goto LAB_1440d7547;
    lVar7 = 0;
    iVar4 = 0;
  }
  else {
LAB_1440d7547:
    uVar1 = *(uint *)(param_1 + 0x2720);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar6;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2728) != 0) {
    FUN_14480f766(lVar7 + 0x2620);
    iVar4 = *(int *)(param_1 + 0x2724);
  }
  if (iVar4 == 0) {
LAB_1440d78f3:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2720);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1440d78f3;
      lVar7 = *plVar6;
    }
  }
  if (*(longlong *)(param_1 + 0x2730) != 0) {
    FUN_14480f766(lVar7 + 0x2b8);
  }
  *(undefined8 *)(param_1 + 0x2720) = 0;
  pbVar5 = *(byte **)(param_1 + 0x50);
  if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3b) != '\0') {
      uVar3 = *(undefined8 *)(pbVar5 + 0x28);
      FUN_1402eb48e(uVar3,param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x3b) = 0;
      FUN_1402eb97e(uVar3,param_1 + 0x30);
      if (*(char *)(param_1 + 0x3b) != '\0') goto LAB_1440d763c;
      pbVar5 = *(byte **)(param_1 + 0x50);
    }
    pbVar5[0x24] = 0;
    pbVar5[0x25] = 0;
    pbVar5[0x26] = 0x80;
    pbVar5[0x27] = 0xbf;
  }
LAB_1440d763c:
  iVar4 = *(int *)(param_1 + 0x27a4);
  if ((((iVar4 == 0) || (uVar1 = *(uint *)(param_1 + 0x27a0), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar4)) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1440d7842;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar6;
  }
  else {
    lVar7 = 0;
  }
  if (*(longlong *)(param_1 + 0x2740) == 0) {
LAB_1440d76d2:
    uVar1 = *(uint *)(param_1 + 0x27a0);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1440d792f;
      lVar7 = *plVar6;
    }
  }
  else {
    FUN_14480f766(lVar7 + 0x2648);
    iVar4 = *(int *)(param_1 + 0x27a4);
    if (iVar4 != 0) goto LAB_1440d76d2;
LAB_1440d792f:
    lVar7 = 0;
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b963590;
  local_50[3] = 0;
  iVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = param_1;
  FUN_14490d954(lVar7 + 0x2648,&local_58,&local_50);
  if (local_48 == 0) {
LAB_1440d7828:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1440d7828;
  }
  *(undefined8 *)(param_1 + 0x2740) = local_58;
LAB_1440d7842:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d79b0 FUN_1440d79b0 body=689 status=ok
// SIG undefined FUN_1440d79b0(void)

void FUN_1440d79b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) {
LAB_1440d79ff:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 8))();
    lVar5 = FUN_1408d859a();
    if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_1440d79ff;
    plVar6 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      plVar6 = plVar2;
    }
  }
  *(longlong **)(param_1 + 0x2240) = plVar6;
  lVar4 = *(longlong *)(param_1 + 0x2218);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x2248) != 0)) goto LAB_1440d7b65;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_50[2] = lVar7;
  *local_50 = &PTR_FUN_14b963600;
  local_50[3] = 0;
  iVar8 = 0;
  if (param_1 != 0x400) {
    uVar1 = *(uint *)(param_1 + -0x3f4);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar8 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar8 = *(int *)(lVar5 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar5 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar8;
  puVar3[4] = FUN_14592d48c;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_14490d954(lVar4 + 0x318,&local_58,&local_50);
  if (local_48 == 0) {
LAB_1440d7b4b:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1440d7b4b;
  }
  *(undefined8 *)(param_1 + 0x2248) = local_58;
LAB_1440d7b65:
  FUN_140655f5e(param_1,param_2);
  plVar2 = *(longlong **)(param_1 + 0x2218);
  if (((plVar2 != (longlong *)0x0) && (*(char *)(param_1 + 0x2220) == '\x01')) &&
     (*(longlong *)(param_1 + 0x2228) != 0)) {
    FUN_1465b0808(plVar2 + 0x69,(undefined8 *)(param_1 + 0x2228));
    (**(code **)(*plVar2 + 0x5f8))(plVar2,*(undefined8 *)(param_1 + 0x2228));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d7cb8 FUN_1440d7cb8 body=175 status=ok
// SIG undefined FUN_1440d7cb8(void)

undefined8 FUN_1440d7cb8(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x9b8] == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1[0x9b9];
    uVar2 = 0;
    if ((lVar1 != 0) && ((byte)(*(char *)((longlong)param_1 + 0x4db9) - 1U) < 3)) {
      if ((char)param_1[-0x73a] == '\x03') {
        FUN_145965236(param_1 + 0x9b1,0);
        *(undefined1 *)(param_1 + 0x9b7) = 3;
        if ((param_1[0x9b4] != 0) && ((longlong *)param_1[0x9b5] != (longlong *)0x0)) {
          (**(code **)(*(longlong *)param_1[0x9b5] + 0x78))();
        }
        (**(code **)(*param_1 + 0x90))(param_1,lVar1);
      }
      else {
        param_1 = param_1 + -0x769;
        uVar2 = FUN_14477b072(param_1,DAT_14cba80f0);
        (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 1440d7d67 FUN_1440d7d67 body=91 status=ok
// SIG undefined FUN_1440d7d67(void)

void FUN_1440d7d67(void)

{
  if (DAT_14cbc5648 != 0) {
    if (DAT_14cbc5640 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc5640)(DAT_14cbc5640,0);
    FUN_1446efa72(&DAT_14cbc5640,0,0,0x10);
    DAT_14cbc5648 = 0;
  }
  if (DAT_14cbc5640 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440d7dc2 FUN_1440d7dc2 body=31 status=ok
// SIG undefined FUN_1440d7dc2(void)

undefined8 FUN_1440d7dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d7de2 FUN_1440d7de2 body=31 status=ok
// SIG undefined FUN_1440d7de2(void)

undefined8 FUN_1440d7de2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d7e02 FUN_1440d7e02 body=624 status=ok
// SIG undefined FUN_1440d7e02(void)

void FUN_1440d7e02(undefined8 *param_1,longlong param_2,float param_3,float param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined1 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar7 = (float)(-(uint)(param_4 < 0.0) & (uint)(1.0 / (1.0 - param_4)) |
                 ~-(uint)(param_4 < 0.0) & (uint)(param_4 + 1.0)) *
          (float)(-(uint)(param_3 < 0.0) & (uint)(1.0 / (1.0 - param_3)) |
                 ~-(uint)(param_3 < 0.0) & (uint)(param_3 + 1.0));
  if (ABS(fVar7 + -1.0) <= 1e-08) goto LAB_1440d7e9b;
  local_d8[0] = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_c8 = 0.0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0xf00000d0;
  local_88 = 0;
  local_80 = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfc4(&local_50,param_2);
    uStack_70 = CONCAT44(uStack_4c,local_50);
    local_68 = CONCAT44(uStack_44,uStack_48);
    if (uStack_60 != 0) {
      FUN_1400020a8();
    }
    uStack_60 = CONCAT44(uStack_3c,local_40);
    local_58 = CONCAT44(uStack_34,uStack_38);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    uVar1 = *(uint *)(param_2 + 0xc);
    if (cVar2 != '\0') {
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_1440d8000;
      }
    }
    local_78 = CONCAT44(local_78._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar5;
      }
    }
    local_78 = CONCAT44(iVar3,(undefined4)local_78);
  }
LAB_1440d8000:
  local_d8[0] = 5;
  local_c8 = fVar7;
  FUN_14899d784(*param_1,local_d8);
  if (uStack_60 != 0) {
    FUN_1400020a8();
  }
LAB_1440d7e9b:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440d8074 FUN_1440d8074 body=607 status=ok
// SIG undefined FUN_1440d8074(void)

void FUN_1440d8074(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *param_1;
  if (DAT_14cb253f8 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_147f6f09d;
    local_70 = &LAB_146201c25;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000006;
    local_90 = 8;
    local_98 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar7 = DAT_14cb253f8;
  if (*(longlong *)(DAT_14cb253f8 + 0x110) == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    if (*(longlong *)(lVar7 + 0x110) == 0) goto LAB_1440d82a6;
  }
  plVar3 = DAT_14cb25be0;
  if (DAT_14cb25be0 == (longlong *)0x0) {
LAB_1440d82a6:
    if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(int *)(lVar6 + 0x34) == 0) {
LAB_1440d81f1:
    uVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x30);
    uVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(lVar6 + 0x34) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1440d81f1;
      uVar9 = *puVar8;
    }
  }
  uVar10 = (**(code **)(*DAT_14cb25be0 + 0x2b0))(DAT_14cb25be0,*(undefined8 *)param_1[1],uVar9);
  *(undefined4 *)(lVar6 + 0x300) = uVar10;
  uVar9 = *param_2;
  lVar6 = plVar3[0x19];
  if (lVar6 == 0) {
    uVar5 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar5);
    plVar3[0x19] = lVar6;
  }
  lVar7 = plVar3[0x1a];
  if (((lVar7 != 0) || (lVar7 = 0, lVar6 == 0)) || (plVar3[0x18] == 0)) goto LAB_1440d81cc;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1440d82d2:
    lVar7 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar4 == '\0') goto LAB_1440d82d2;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,plVar3 + 0x18);
  }
  plVar3[0x1a] = lVar7;
LAB_1440d81cc:
  local_98 = local_98 & 0xffffff00;
  FUN_1447997cc(uVar9,lVar7,uVar10,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1440d82da FUN_1440d82da body=29 status=ok
// SIG undefined FUN_1440d82da(void)

undefined8 FUN_1440d82da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d8476 FUN_1440d8476 body=93 status=ok
// SIG undefined FUN_1440d8476(void)

void FUN_1440d8476(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d84d4 FUN_1440d84d4 body=93 status=ok
// SIG undefined FUN_1440d84d4(void)

void FUN_1440d84d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d8532 FUN_1440d8532 body=126 status=ok
// SIG undefined FUN_1440d8532(void)

void FUN_1440d8532(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b962c50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440d85a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440d85bc FUN_1440d85bc body=268 status=ok
// SIG undefined FUN_1440d85bc(void)

undefined8 FUN_1440d85bc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440d86c2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440d86c2;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1440d86c2:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440d867a;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x80) = 1;
      uVar5 = 1;
      goto LAB_1440d867a;
    }
  }
  uVar5 = 0;
LAB_1440d867a:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d86ca FUN_1440d86ca body=29 status=ok
// SIG undefined FUN_1440d86ca(void)

undefined8 FUN_1440d86ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d8866 FUN_1440d8866 body=93 status=ok
// SIG undefined FUN_1440d8866(void)

void FUN_1440d8866(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d88c4 FUN_1440d88c4 body=93 status=ok
// SIG undefined FUN_1440d88c4(void)

void FUN_1440d88c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d8922 FUN_1440d8922 body=126 status=ok
// SIG undefined FUN_1440d8922(void)

void FUN_1440d8922(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b962cc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440d8991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440d89ac FUN_1440d89ac body=268 status=ok
// SIG undefined FUN_1440d89ac(void)

undefined8 FUN_1440d89ac(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440d8ab2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440d8ab2;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1440d8ab2:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440d8a6a;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x80) = 1;
      uVar5 = 1;
      goto LAB_1440d8a6a;
    }
  }
  uVar5 = 0;
LAB_1440d8a6a:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d8aba FUN_1440d8aba body=192 status=ok
// SIG undefined FUN_1440d8aba(void)

longlong FUN_1440d8aba(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1440d8b5d;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1440d8b7c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1440d8b5d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1440d8b7c FUN_1440d8b7c body=1716 status=ok
// SIG undefined FUN_1440d8b7c(void)

void FUN_1440d8b7c(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1447711aa(param_1,iVar25);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar19 = -1;
    }
    else {
      iVar19 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar19 = iVar20 + -1;
      }
      iVar19 = iVar19 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar17 = iVar20 + 1;
    iVar21 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar21 = iVar20;
    }
    if (iVar21 >> 5 == iVar19) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar19 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar26 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar26) {
              uVar9 = uVar26;
            }
          }
          else {
            uVar9 = uVar26 + (uVar26 * 3 >> 3) + 0x10;
          }
          uVar18 = (ulonglong)(uVar9 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar18 + 0xf);
              if (uVar9 < 0x1ffd) {
                uVar18 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
              }
              else {
                uVar23 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar23 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar16) {
                    uVar24 = (ulonglong)bVar16;
                  }
                  uVar27 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0) goto LAB_1440d913c;
                    lVar13 = uVar24 + 1 + uVar27;
                    uVar27 = uVar27 - 1;
                  } while (lVar13 != 0x33);
                }
                uVar18 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar18 = (ulonglong)DAT_14c841df8;
                }
                uVar18 = -uVar18 & (uVar23 + uVar18) - 1;
              }
            }
            else {
              uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
              iVar19 = (int)param_1[5];
            }
          }
LAB_1440d913c:
          iVar12 = (int)(uVar18 >> 2);
          iVar17 = -0x20;
          if ((int)uVar26 <= iVar12) {
            iVar17 = iVar12 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar14,iVar19);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar19 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar19 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar14;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar13 = (longlong)iVar25;
    iVar20 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar20;
    iVar19 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar26 = 1 << ((byte)iVar25 & 0x1f);
  puVar15 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar15 = puVar1;
  }
  iVar20 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar20 = iVar25;
  }
  puVar15[iVar20 >> 5] = puVar15[iVar20 >> 5] | uVar26;
  lVar28 = *param_1;
  lVar13 = lVar13 * 0x20;
  puVar2 = (undefined4 *)(lVar28 + lVar13);
  cVar8 = *(char *)*param_4;
  *(char *)(lVar28 + lVar13) = cVar8;
  puVar4 = (undefined8 *)(lVar28 + 8 + lVar13);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar28 + 0x18 + lVar13) = 0xffffffff;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar19 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar19 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar19 * 0x20) == cVar8) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar10 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar10;
          puVar3[1] = uVar5;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          lVar13 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar13 + (longlong)(int)param_1[6] * 0x20) = iVar25;
          }
          *(undefined4 *)(lVar13 + (longlong)iVar25 * 0x20) = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar13 + (longlong)iVar25 * 0x20 + 4) = uVar10;
          *(int *)(param_1 + 6) = iVar25;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          puVar15 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar15 = puVar1;
          }
          puVar15[iVar20 >> 5] = puVar15[iVar20 >> 5] & ~uVar26;
          cVar8 = '\x01';
          goto LAB_1440d8cf7;
        }
        iVar19 = puVar3[6];
      } while (iVar19 != -1);
    }
  }
  cVar8 = '\0';
LAB_1440d8cf7:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar8;
  }
  if (cVar8 != '\0') goto LAB_1440d8e7c;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar26 = 1;
  if (3 < uVar9) {
    uVar18 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar26 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar9 < 1) || ((int)uVar26 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    puVar2[7] = param_3;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4)
    ;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar25;
    goto LAB_1440d8e7c;
  }
  *(uint *)(param_1 + 9) = uVar26;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar26 = *(uint *)(param_1 + 9);
  }
  if (uVar26 == 0) goto LAB_1440d8e7c;
  plVar22 = param_1 + 7;
  if (uVar26 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_1440d8d84:
    uVar9 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar22;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
           0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar26 != uVar9);
  }
  else {
    FUN_1446efa72(plVar14,0,uVar26,4);
    if (0 < (int)uVar26) goto LAB_1440d8d84;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar18 = 0;
    uVar23 = 1;
    iVar17 = 0;
    iVar19 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar26 = *puVar15;
    if (uVar26 == 0) {
      iVar19 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar19 = iVar20 + -1;
      }
      uVar18 = 0;
      uVar23 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar23 = uVar18;
      }
      iVar17 = 0;
      do {
        if (uVar23 == uVar18) goto LAB_1440d8e7c;
        iVar17 = iVar17 + 0x20;
        uVar26 = puVar15[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar18 = 0;
      iVar17 = 0;
    }
    uVar23 = (ulonglong)(-uVar26 & uVar26);
    uVar24 = uVar23 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar19 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar19) {
      iVar19 = iVar20;
    }
  }
  if (iVar19 < iVar20) {
    uVar26 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar28 = (longlong)iVar19 * 0x20;
      uVar9 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar13 + lVar28);
      *(uint *)(lVar13 + 0x1c + lVar28) = uVar9;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar22;
      }
      *(undefined4 *)(lVar13 + 0x18 + lVar28) =
           *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar22;
      }
      *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4) = iVar19;
      uVar26 = ~(uint)uVar23 & uVar26;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar19 = (int)uVar18;
      lVar13 = (longlong)iVar19;
      uVar9 = puVar15[lVar13] & uVar26;
      if (uVar9 == 0) {
        iVar21 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar21 = iVar20 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar12 = iVar21;
        if (iVar21 < iVar19) {
          iVar12 = iVar19;
        }
        if (iVar21 <= iVar19) break;
        lVar28 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar9 = puVar15[lVar13 + lVar28 + 1];
          if (uVar9 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar12 - lVar13 == lVar28) goto LAB_1440d8e7c;
        }
        uVar18 = (ulonglong)(iVar19 + (int)lVar28 + 1);
        uVar26 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar9 & uVar9);
      uVar24 = uVar23 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar19 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar20);
  }
LAB_1440d8e7c:
  *param_2 = iVar25;
  return;
}



// FUNCTION 1440d9230 FUN_1440d9230 body=29 status=ok
// SIG undefined FUN_1440d9230(void)

undefined8 FUN_1440d9230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d93cc FUN_1440d93cc body=93 status=ok
// SIG undefined FUN_1440d93cc(void)

void FUN_1440d93cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b962d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d942a FUN_1440d942a body=93 status=ok
// SIG undefined FUN_1440d942a(void)

void FUN_1440d942a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b962d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d9488 FUN_1440d9488 body=126 status=ok
// SIG undefined FUN_1440d9488(void)

void FUN_1440d9488(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b962d30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440d94f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440d9510 FUN_1440d9510 body=289 status=ok
// SIG undefined FUN_1440d9510(void)

undefined8 FUN_1440d9510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440d962a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440d962a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1440d962a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440d95db;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440d9632(param_1 + 0x20,param_2,param_3);
      uVar6 = 1;
      goto LAB_1440d95db;
    }
  }
  uVar6 = 0;
LAB_1440d95db:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d9632 FUN_1440d9632 body=893 status=ok
// SIG undefined FUN_1440d9632(void)

void FUN_1440d9632(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code ***pppcVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined8 local_60;
  undefined4 local_58;
  code **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_2 + 0x68) != DAT_14cbc46b0) goto LAB_1440d96f9;
  param_1 = (longlong *)*param_1;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
  if (plVar2 == (longlong *)0x0) {
LAB_1440d96bf:
    plVar3 = (longlong *)0x0;
  }
  else {
    if (DAT_14c9a4e08 == 0) {
      local_80 = (code **)local_50;
      local_50[0] = (code **)FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_1470c76a3;
      local_90 = FUN_1462ab034;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14c9a4e08);
    if (plVar2 == (longlong *)0x0) goto LAB_1440d96bf;
    if (DAT_14c9a4e08 == 0) {
      local_80 = (code **)local_50;
      local_50[0] = (code **)FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_1470c76a3;
      local_90 = FUN_1462ab034;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14c9a4e08);
    if (plVar2 == plVar3) goto LAB_1440d96bf;
  }
  if ((*(int *)(param_2 + 0x80) == 0 &
      (*(int *)(param_3 + 8) == 1 | *(byte *)((longlong)param_1 + 0xce))) == 1) {
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      local_38 = 4;
      local_50[0] = (code **)((ulonglong)local_50[0] & 0xffffffff00000000);
      local_30 = 1;
      local_60 = DAT_14cbc46b8;
      local_58 = 0xffffffff;
      FUN_140af060e(uVar4,&local_60,local_50);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppcVar5 = local_50;
        if (0x18 < local_38) {
          pppcVar5 = (code ***)local_50[0];
        }
        (*pcVar1)(pppcVar5);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
    }
    FUN_148cf071c(param_1);
  }
  else if (*(int *)(param_3 + 8) == 0 && *(int *)(param_2 + 0x80) != 0) {
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      local_38 = 4;
      local_50[0] = (code **)CONCAT44(local_50[0]._4_4_,1);
      local_30 = 1;
      local_60 = DAT_14cbc46b8;
      local_58 = 0xffffffff;
      FUN_140af060e(uVar4,&local_60,local_50);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppcVar5 = local_50;
        if (0x18 < local_38) {
          pppcVar5 = (code ***)local_50[0];
        }
        (*pcVar1)(pppcVar5);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
    }
    FUN_148ceffa2(param_1);
  }
LAB_1440d96f9:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d99b0 FUN_1440d99b0 body=29 status=ok
// SIG undefined FUN_1440d99b0(void)

undefined8 FUN_1440d99b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d9b4c FUN_1440d9b4c body=93 status=ok
// SIG undefined FUN_1440d9b4c(void)

void FUN_1440d9b4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b962da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d9baa FUN_1440d9baa body=93 status=ok
// SIG undefined FUN_1440d9baa(void)

void FUN_1440d9baa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b962da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440d9c08 FUN_1440d9c08 body=126 status=ok
// SIG undefined FUN_1440d9c08(void)

void FUN_1440d9c08(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9bb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b962da0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440d9c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440d9c90 FUN_1440d9c90 body=269 status=ok
// SIG undefined FUN_1440d9c90(void)

undefined8 FUN_1440d9c90(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440d9d97;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440d9d97;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440d9d97:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440d9d4b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440d9d9e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440d9d4b;
    }
  }
  uVar6 = 0;
LAB_1440d9d4b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440d9d9e FUN_1440d9d9e body=183 status=ok
// SIG undefined FUN_1440d9d9e(void)

void FUN_1440d9d9e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  param_1 = (longlong *)*param_1;
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar2 != 0) && (lVar1 = param_1[0x1f], lVar1 != 0)) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = *plVar3;
    uVar4 = (uint)lVar1;
    if ((int)(uVar4 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
      lVar5 = lVar2 + 0x18;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x28);
      }
      if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
      {
        lVar2 = *(longlong *)(lVar2 + 8);
        lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
        if (((lVar2 + lVar5 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar5) == lVar1)) &&
           (*(char *)(lVar2 + 1 + lVar5) != '\x04')) {
          FUN_1405a424c();
        }
      }
    }
    param_1[0x1f] = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xc3) = 0;
  return;
}



// FUNCTION 1440d9e56 FUN_1440d9e56 body=29 status=ok
// SIG undefined FUN_1440d9e56(void)

undefined8 FUN_1440d9e56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440d9ff2 FUN_1440d9ff2 body=93 status=ok
// SIG undefined FUN_1440d9ff2(void)

void FUN_1440d9ff2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440da050 FUN_1440da050 body=93 status=ok
// SIG undefined FUN_1440da050(void)

void FUN_1440da050(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440da0ae FUN_1440da0ae body=126 status=ok
// SIG undefined FUN_1440da0ae(void)

void FUN_1440da0ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b962e10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440da11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440da13c FUN_1440da13c body=272 status=ok
// SIG undefined FUN_1440da13c(void)

undefined8 FUN_1440da13c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440da246;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440da246;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440da246:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440da1e7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148cef436(*(longlong *)(param_1 + 0x20),
                    CONCAT71((int7)((ulonglong)lVar5 >> 8),
                             *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xc4)));
      uVar6 = 1;
      goto LAB_1440da1e7;
    }
  }
  uVar6 = 0;
LAB_1440da1e7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440da24e FUN_1440da24e body=29 status=ok
// SIG undefined FUN_1440da24e(void)

undefined8 FUN_1440da24e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440da3ea FUN_1440da3ea body=93 status=ok
// SIG undefined FUN_1440da3ea(void)

void FUN_1440da3ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440da448 FUN_1440da448 body=93 status=ok
// SIG undefined FUN_1440da448(void)

void FUN_1440da448(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440da4a6 FUN_1440da4a6 body=126 status=ok
// SIG undefined FUN_1440da4a6(void)

void FUN_1440da4a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b962e80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440da515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440da52e FUN_1440da52e body=282 status=ok
// SIG undefined FUN_1440da52e(void)

undefined8 FUN_1440da52e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440da642;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440da642;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1440da642:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440da5e1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148cf057a(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1440da5e1;
    }
  }
  uVar6 = 0;
LAB_1440da5e1:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440da64a FUN_1440da64a body=29 status=ok
// SIG undefined FUN_1440da64a(void)

undefined8 FUN_1440da64a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440da7e6 FUN_1440da7e6 body=93 status=ok
// SIG undefined FUN_1440da7e6(void)

void FUN_1440da7e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440da844 FUN_1440da844 body=93 status=ok
// SIG undefined FUN_1440da844(void)

void FUN_1440da844(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440da8a2 FUN_1440da8a2 body=126 status=ok
// SIG undefined FUN_1440da8a2(void)

void FUN_1440da8a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b962ef0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440da911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440da930 FUN_1440da930 body=272 status=ok
// SIG undefined FUN_1440da930(void)

undefined8 FUN_1440da930(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440daa3a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440daa3a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440daa3a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440da9db;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148cef436(*(longlong *)(param_1 + 0x20),
                    CONCAT71((int7)((ulonglong)lVar5 >> 8),
                             *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xc4)));
      uVar6 = 1;
      goto LAB_1440da9db;
    }
  }
  uVar6 = 0;
LAB_1440da9db:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440daa42 FUN_1440daa42 body=29 status=ok
// SIG undefined FUN_1440daa42(void)

undefined8 FUN_1440daa42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dabde FUN_1440dabde body=93 status=ok
// SIG undefined FUN_1440dabde(void)

void FUN_1440dabde(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dac3c FUN_1440dac3c body=93 status=ok
// SIG undefined FUN_1440dac3c(void)

void FUN_1440dac3c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b962fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dac9a FUN_1440dac9a body=126 status=ok
// SIG undefined FUN_1440dac9a(void)

void FUN_1440dac9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b962fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dad09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dad22 FUN_1440dad22 body=282 status=ok
// SIG undefined FUN_1440dad22(void)

undefined8 FUN_1440dad22(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dae36;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dae36;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1440dae36:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440dadd5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148cf0f52(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1440dadd5;
    }
  }
  uVar6 = 0;
LAB_1440dadd5:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dae3e FUN_1440dae3e body=85 status=ok
// SIG undefined FUN_1440dae3e(void)

undefined8 * FUN_1440dae3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b963020;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440daea8 FUN_1440daea8 body=204 status=ok
// SIG undefined FUN_1440daea8(void)

void FUN_1440daea8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 0xb) {
    FUN_1446efa72(param_2,0,0xb,0x10);
    *(undefined4 *)(param_2 + 1) = 0xb;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b963020;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
  *(undefined4 *)(puVar2 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
  }
  FUN_148cf12de(puVar2 + 9,param_1 + 0x48);
  return;
}



// FUNCTION 1440daf74 FUN_1440daf74 body=204 status=ok
// SIG undefined FUN_1440daf74(void)

void FUN_1440daf74(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 0xb) {
    FUN_1446efa72(param_2,0,0xb,0x10);
    *(undefined4 *)(param_2 + 1) = 0xb;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b963020;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
  *(undefined4 *)(puVar2 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
  }
  FUN_148cf12de(puVar2 + 9,param_1 + 0x48);
  return;
}



// FUNCTION 1440db040 FUN_1440db040 body=254 status=ok
// SIG undefined FUN_1440db040(void)

void FUN_1440db040(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xb) {
    FUN_1446efa72(param_2 + 1,0,0xb,0x10);
    param_2[1].LockCount = 0xb;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b963020;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var2->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var2->SpareWORD = (short)((uint)uVar4 >> 0x10);
  p_Var2[1].Type = (short)uVar5;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar6;
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var2[1].ProcessLocksList.Flink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].CriticalSection,iVar1,0);
    memcpy(p_Var2[1].CriticalSection,_Src,(longlong)iVar1 * 2);
  }
  FUN_148cf12de(&p_Var2[1].ProcessLocksList.Blink,param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440db128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440db148 FUN_1440db148 body=20 status=ok
// SIG undefined FUN_1440db148(void)

undefined1 FUN_1440db148(longlong param_1)

{
  FUN_1440db15c(param_1 + 0x18);
  return 1;
}



// FUNCTION 1440db15c FUN_1440db15c body=321 status=ok
// SIG undefined FUN_1440db15c(void)

void FUN_1440db15c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_81;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar8 = FUN_1402d1dc0(param_1 + 1);
  if (lVar8 != 0) {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x92);
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x91);
    uVar4 = *(undefined1 *)(param_1 + 0x12);
    uVar7 = param_1[0x11];
    uVar5 = *(undefined1 *)((longlong)param_1 + 0x86);
    uVar6 = *(undefined1 *)((longlong)param_1 + 0x85);
    local_81 = *(undefined1 *)((longlong)param_1 + 0x84);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    local_78 = *(undefined4 *)(param_1 + 0xe);
    uStack_74 = *(undefined4 *)((longlong)param_1 + 0x74);
    uStack_70 = *(undefined4 *)(param_1 + 0xf);
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x7c);
    local_80 = param_1 + 0xb;
    uVar9 = FUN_1402d1dc0(param_1 + 1);
    local_98 = 1;
    local_a0 = 1;
    local_a8 = 1;
    local_c0 = 1;
    local_e8 = local_81;
    local_f8 = &local_78;
    local_f0 = uVar1;
    local_e0 = uVar6;
    local_d8 = uVar5;
    local_d0 = uVar7;
    local_c8 = uVar4;
    local_b8 = uVar3;
    local_b0 = uVar2;
    FUN_141530594(*param_1,uVar9,0,local_80);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440db29e FUN_1440db29e body=29 status=ok
// SIG undefined FUN_1440db29e(void)

undefined8 FUN_1440db29e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440db2d0 FUN_1440db2d0 body=85 status=ok
// SIG undefined FUN_1440db2d0(void)

void FUN_1440db2d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963090;
  return;
}



// FUNCTION 1440db326 FUN_1440db326 body=85 status=ok
// SIG undefined FUN_1440db326(void)

void FUN_1440db326(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963090;
  return;
}



// FUNCTION 1440db37c FUN_1440db37c body=118 status=ok
// SIG undefined FUN_1440db37c(void)

void FUN_1440db37c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b963090;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440db3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440db3f8 FUN_1440db3f8 body=29 status=ok
// SIG undefined FUN_1440db3f8(void)

undefined8 FUN_1440db3f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440db594 FUN_1440db594 body=101 status=ok
// SIG undefined FUN_1440db594(void)

void FUN_1440db594(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440db5fa FUN_1440db5fa body=101 status=ok
// SIG undefined FUN_1440db5fa(void)

void FUN_1440db5fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440db660 FUN_1440db660 body=134 status=ok
// SIG undefined FUN_1440db660(void)

void FUN_1440db660(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963100;
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
                    /* WARNING: Could not recover jumptable at 0x0001440db6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440db6f6 FUN_1440db6f6 body=270 status=ok
// SIG undefined FUN_1440db6f6(void)

undefined8 FUN_1440db6f6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440db7fe;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440db7fe;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440db7fe:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440db7a1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_145cfb524(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1440db7a1;
    }
  }
  uVar6 = 0;
LAB_1440db7a1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440db80c FUN_1440db80c body=31 status=ok
// SIG undefined FUN_1440db80c(void)

undefined8 FUN_1440db80c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440db8c6 FUN_1440db8c6 body=29 status=ok
// SIG undefined FUN_1440db8c6(void)

undefined8 FUN_1440db8c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dba62 FUN_1440dba62 body=93 status=ok
// SIG undefined FUN_1440dba62(void)

void FUN_1440dba62(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dbac0 FUN_1440dbac0 body=93 status=ok
// SIG undefined FUN_1440dbac0(void)

void FUN_1440dbac0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dbb1e FUN_1440dbb1e body=126 status=ok
// SIG undefined FUN_1440dbb1e(void)

void FUN_1440dbb1e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b963250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dbb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dbba6 FUN_1440dbba6 body=282 status=ok
// SIG undefined FUN_1440dbba6(void)

undefined8 FUN_1440dbba6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dbcba;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dbcba;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1440dbcba:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440dbc69;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1418dface(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1440dbc69;
    }
  }
  uVar6 = 0;
LAB_1440dbc69:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dbcc8 FUN_1440dbcc8 body=29 status=ok
// SIG undefined FUN_1440dbcc8(void)

undefined8 FUN_1440dbcc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dbe64 FUN_1440dbe64 body=101 status=ok
// SIG undefined FUN_1440dbe64(void)

void FUN_1440dbe64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1440dbeca FUN_1440dbeca body=101 status=ok
// SIG undefined FUN_1440dbeca(void)

void FUN_1440dbeca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1440dbf30 FUN_1440dbf30 body=134 status=ok
// SIG undefined FUN_1440dbf30(void)

void FUN_1440dbf30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dbfa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dbfc0 FUN_1440dbfc0 body=269 status=ok
// SIG undefined FUN_1440dbfc0(void)

undefined8 FUN_1440dbfc0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440dc0c7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dc0c7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440dc0c7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440dc07b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440dc0ce(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1440dc07b;
    }
  }
  uVar6 = 0;
LAB_1440dc07b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dc0ce FUN_1440dc0ce body=243 status=ok
// SIG undefined FUN_1440dc0ce(void)

void FUN_1440dc0ce(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *param_1;
  *(undefined1 *)(lVar2 + 0x27a8) = 2;
  if (param_1[1] == 0) {
    *(undefined4 *)(lVar2 + 0x27a0) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1[1] + 0xc);
    *(uint *)(lVar2 + 0x27a0) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(lVar2 + 0x27a4) = iVar3;
  FUN_148cf69b4(lVar2,param_1[1]);
  *(undefined1 *)(lVar2 + 0x27d8) = 0;
  if (*(longlong *)(lVar2 + 0x27d0) == 0) {
    return;
  }
  FUN_14480f766(param_1[2] + 0x8890);
  return;
}



// FUNCTION 1440dc1c2 FUN_1440dc1c2 body=29 status=ok
// SIG undefined FUN_1440dc1c2(void)

undefined8 FUN_1440dc1c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dc35e FUN_1440dc35e body=93 status=ok
// SIG undefined FUN_1440dc35e(void)

void FUN_1440dc35e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dc3bc FUN_1440dc3bc body=93 status=ok
// SIG undefined FUN_1440dc3bc(void)

void FUN_1440dc3bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dc41a FUN_1440dc41a body=126 status=ok
// SIG undefined FUN_1440dc41a(void)

void FUN_1440dc41a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b963520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dc489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dc500 FUN_1440dc500 body=353 status=ok
// SIG undefined FUN_1440dc500(void)

undefined8 FUN_1440dc500(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dc65b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dc65b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440dc65b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1440dc5b2:
    uVar5 = 0;
    goto LAB_1440dc5b4;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar2 < 0) goto LAB_1440dc5b4;
  if (DAT_14c9647dc <= (int)uVar2) goto LAB_1440dc5b4;
  lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_1440dc5b2;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar7 + 0x27a4) == 0) {
LAB_1440dc642:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0x27a0);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar7 + 0x27a4) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1440dc642;
      uVar5 = *puVar6;
    }
  }
  FUN_148cf69b4(lVar7,uVar5);
  uVar5 = 1;
LAB_1440dc5b4:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dc662 FUN_1440dc662 body=29 status=ok
// SIG undefined FUN_1440dc662(void)

undefined8 FUN_1440dc662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dc7fe FUN_1440dc7fe body=93 status=ok
// SIG undefined FUN_1440dc7fe(void)

void FUN_1440dc7fe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dc85c FUN_1440dc85c body=93 status=ok
// SIG undefined FUN_1440dc85c(void)

void FUN_1440dc85c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dc8ba FUN_1440dc8ba body=126 status=ok
// SIG undefined FUN_1440dc8ba(void)

void FUN_1440dc8ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b963590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dc929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dc9a0 FUN_1440dc9a0 body=353 status=ok
// SIG undefined FUN_1440dc9a0(void)

undefined8 FUN_1440dc9a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dcafb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dcafb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440dcafb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1440dca52:
    uVar5 = 0;
    goto LAB_1440dca54;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar2 < 0) goto LAB_1440dca54;
  if (DAT_14c9647dc <= (int)uVar2) goto LAB_1440dca54;
  lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_1440dca52;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar7 + 0x27a4) == 0) {
LAB_1440dcae2:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0x27a0);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar7 + 0x27a4) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1440dcae2;
      uVar5 = *puVar6;
    }
  }
  FUN_148cf69b4(lVar7,uVar5);
  uVar5 = 1;
LAB_1440dca54:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dcb02 FUN_1440dcb02 body=31 status=ok
// SIG undefined FUN_1440dcb02(void)

undefined8 FUN_1440dcb02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dcb70 FUN_1440dcb70 body=91 status=ok
// SIG undefined FUN_1440dcb70(void)

bool FUN_1440dcb70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1440dcba0;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1440dcba0:
  return lVar6 == param_2;
}



// FUNCTION 1440dcbe8 FUN_1440dcbe8 body=91 status=ok
// SIG undefined FUN_1440dcbe8(void)

bool FUN_1440dcbe8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1440dcc18;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1440dcc18:
  return lVar6 == param_2;
}



// FUNCTION 1440dcc60 FUN_1440dcc60 body=29 status=ok
// SIG undefined FUN_1440dcc60(void)

undefined8 FUN_1440dcc60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dcdfc FUN_1440dcdfc body=93 status=ok
// SIG undefined FUN_1440dcdfc(void)

void FUN_1440dcdfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dce5a FUN_1440dce5a body=93 status=ok
// SIG undefined FUN_1440dce5a(void)

void FUN_1440dce5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dceb8 FUN_1440dceb8 body=126 status=ok
// SIG undefined FUN_1440dceb8(void)

void FUN_1440dceb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963910;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dcf27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dcf36 FUN_1440dcf36 body=93 status=ok
// SIG undefined FUN_1440dcf36(void)

void FUN_1440dcf36(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 == '\x01') {
    lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x20))(lVar1 + 0x3b48);
    lVar3 = 0x58;
    if (*(char *)(lVar2 + 0x31) != '\x02') {
      return;
    }
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    lVar3 = 0x70;
  }
                    /* WARNING: Could not recover jumptable at 0x0001440dcf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x3b48) + lVar3))((longlong *)(lVar1 + 0x3b48));
  return;
}



// FUNCTION 1440dcf94 FUN_1440dcf94 body=340 status=ok
// SIG undefined FUN_1440dcf94(void)

undefined8 FUN_1440dcf94(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dd0e2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dd0e2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_1440dd0e2:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440dd042;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar8 = 1;
      if (lVar6 != 0) {
        if (param_2 == '\x01') {
          lVar5 = (**(code **)(*(longlong *)(lVar6 + 0x3b48) + 0x20))(lVar6 + 0x3b48);
          lVar7 = 0x58;
          if (*(char *)(lVar5 + 0x31) != '\x02') goto LAB_1440dd042;
        }
        else {
          if (param_2 != '\0') goto LAB_1440dd042;
          lVar7 = 0x70;
        }
        (**(code **)(*(longlong *)(lVar6 + 0x3b48) + lVar7))((longlong *)(lVar6 + 0x3b48));
      }
      goto LAB_1440dd042;
    }
  }
  uVar8 = 0;
LAB_1440dd042:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dd0ea FUN_1440dd0ea body=39 status=ok
// SIG undefined FUN_1440dd0ea(void)

void FUN_1440dd0ea(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(*param_1 + 0x3b48) + 0x20))(*param_1 + 0x3b48);
  if (*(char *)(lVar1 + 0x31) == '\x01') {
    *(undefined1 *)(lVar1 + 0x31) = 2;
  }
  return;
}



// FUNCTION 1440dd13c FUN_1440dd13c body=29 status=ok
// SIG undefined FUN_1440dd13c(void)

undefined8 FUN_1440dd13c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dd15a FUN_1440dd15a body=984 status=ok
// SIG undefined FUN_1440dd15a(void)

void FUN_1440dd15a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_1;
  lVar9 = (**(code **)(*(longlong *)(lVar4 + 0x3b48) + 0x20))(lVar4 + 0x3b48);
  if (*(char *)(lVar9 + 0x31) == '\x01') {
    *(undefined1 *)(lVar9 + 0x31) = 2;
  }
  lVar9 = (**(code **)(*(longlong *)param_1[1] + 0x30))();
  if (lVar9 == 0) goto LAB_1440dd448;
  local_78 = *(undefined8 *)(lVar9 + 0x68);
  local_70 = *(undefined4 *)(lVar9 + 0x70);
  uStack_6c = *(undefined4 *)(lVar9 + 0x74);
  uStack_68 = *(undefined4 *)(lVar9 + 0x78);
  uStack_64 = *(undefined4 *)(lVar9 + 0x7c);
  local_60 = (void *)0x0;
  local_58 = *(int *)(lVar9 + 0x88);
  lVar12 = (longlong)local_58;
  _Src = *(void **)(lVar9 + 0x80);
  if (lVar12 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar12 * 2);
  }
  uVar7 = FUN_141473846(lVar4,&local_78,1);
  *(char *)(lVar4 + 0x8950) = (char)uVar7;
  FUN_140dc01da(lVar4 + 0x1508,&local_88,uVar7);
  if (local_88 != 0) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    plVar1 = local_50;
    local_48 = 3;
    *local_50 = (longlong)&PTR_LAB_14b3e9c20;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_50[2] = lVar12;
    *local_50 = (longlong)&PTR_FUN_14b9639c0;
    local_50[3] = 0;
    iVar10 = 0;
    if (lVar4 != 0) {
      uVar3 = *(uint *)(lVar4 + 0xc);
      *(uint *)(local_50 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar10 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar10 = *(int *)(lVar9 + 0x10);
        bVar13 = iVar10 == 0;
        if (bVar13) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar10 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar10;
    plVar1[4] = lVar4;
    if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*local_50 + 0x30))(), cVar6 == '\0')) {
      if (local_48 != 0) {
        if (local_50 == (longlong *)0x0) goto LAB_1440dd421;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        goto LAB_1440dd40b;
      }
    }
    else {
      plVar1 = (longlong *)(local_88 + 0x18);
      if (*(int *)(local_88 + 0x2c) < 1) {
        iVar10 = *(int *)(local_88 + 0x20);
        iVar8 = *(int *)(local_88 + 0x28) + -1;
        *(int *)(local_88 + 0x28) = iVar8;
        if (iVar8 <= iVar10) {
          iVar8 = iVar10;
          if (0 < iVar10) {
            iVar11 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                  (plVar5 = *(longlong **)(*plVar1 + (longlong)iVar11 * 0x10),
                  plVar5 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar5 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar1,iVar11);
                FUN_14005b248(plVar1);
              }
              else {
                iVar11 = iVar11 + 1;
              }
              iVar8 = *(int *)(local_88 + 0x20);
            } while (iVar11 < iVar8);
          }
          iVar11 = 2;
          if (2 < iVar8 * 2) {
            iVar11 = iVar8 * 2;
          }
          *(int *)(local_88 + 0x28) = iVar11;
          if ((iVar11 < iVar10) && (*(int *)(local_88 + 0x24) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x38))(local_50,local_40);
      }
      iVar10 = *(int *)(local_88 + 0x20);
      *(uint *)(local_88 + 0x20) = iVar10 + 1U;
      if (*(uint *)(local_88 + 0x24) < iVar10 + 1U) {
        FUN_1447a71f6(plVar1,iVar10);
      }
      lVar4 = *plVar1;
      lVar9 = (longlong)iVar10 * 0x10;
      *(undefined8 *)(lVar4 + lVar9) = 0;
      *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
      *(longlong **)(lVar4 + lVar9) = local_50;
      local_50 = (longlong *)0x0;
      *(int *)(lVar4 + 8 + lVar9) = local_48;
LAB_1440dd40b:
      local_48 = 0;
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1440dd421:
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
LAB_1440dd448:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440dd55e FUN_1440dd55e body=29 status=ok
// SIG undefined FUN_1440dd55e(void)

undefined8 FUN_1440dd55e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dd57c FUN_1440dd57c body=29 status=ok
// SIG undefined FUN_1440dd57c(void)

undefined8 FUN_1440dd57c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440dd718 FUN_1440dd718 body=93 status=ok
// SIG undefined FUN_1440dd718(void)

void FUN_1440dd718(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9639c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dd776 FUN_1440dd776 body=93 status=ok
// SIG undefined FUN_1440dd776(void)

void FUN_1440dd776(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9639c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440dd7d4 FUN_1440dd7d4 body=126 status=ok
// SIG undefined FUN_1440dd7d4(void)

void FUN_1440dd7d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9639c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440dd843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440dd852 FUN_1440dd852 body=93 status=ok
// SIG undefined FUN_1440dd852(void)

void FUN_1440dd852(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 == '\x01') {
    lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x20))(lVar1 + 0x3b48);
    lVar3 = 0x58;
    if (*(char *)(lVar2 + 0x31) != '\x02') {
      return;
    }
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    lVar3 = 0x70;
  }
                    /* WARNING: Could not recover jumptable at 0x0001440dd8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x3b48) + lVar3))((longlong *)(lVar1 + 0x3b48));
  return;
}



// FUNCTION 1440dd8b0 FUN_1440dd8b0 body=340 status=ok
// SIG undefined FUN_1440dd8b0(void)

undefined8 FUN_1440dd8b0(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dd9fe;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dd9fe;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_1440dd9fe:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440dd95e;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar8 = 1;
      if (lVar6 != 0) {
        if (param_2 == '\x01') {
          lVar5 = (**(code **)(*(longlong *)(lVar6 + 0x3b48) + 0x20))(lVar6 + 0x3b48);
          lVar7 = 0x58;
          if (*(char *)(lVar5 + 0x31) != '\x02') goto LAB_1440dd95e;
        }
        else {
          if (param_2 != '\0') goto LAB_1440dd95e;
          lVar7 = 0x70;
        }
        (**(code **)(*(longlong *)(lVar6 + 0x3b48) + lVar7))((longlong *)(lVar6 + 0x3b48));
      }
      goto LAB_1440dd95e;
    }
  }
  uVar8 = 0;
LAB_1440dd95e:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dda06 FUN_1440dda06 body=29 status=ok
// SIG undefined FUN_1440dda06(void)

undefined8 FUN_1440dda06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ddba2 FUN_1440ddba2 body=93 status=ok
// SIG undefined FUN_1440ddba2(void)

void FUN_1440ddba2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ddc00 FUN_1440ddc00 body=93 status=ok
// SIG undefined FUN_1440ddc00(void)

void FUN_1440ddc00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ddc5e FUN_1440ddc5e body=126 status=ok
// SIG undefined FUN_1440ddc5e(void)

void FUN_1440ddc5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963a30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440ddccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440ddcdc FUN_1440ddcdc body=59 status=ok
// SIG undefined FUN_1440ddcdc(void)

void FUN_1440ddcdc(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0 && param_2 == '\x01') {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x20))(lVar1 + 0x3b48);
    FUN_140cf8954(uVar2);
    return;
  }
  return;
}



// FUNCTION 1440ddd18 FUN_1440ddd18 body=307 status=ok
// SIG undefined FUN_1440ddd18(void)

undefined8 FUN_1440ddd18(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440dde45;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440dde45;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440dde45:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440dddc6;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar7 = 1;
      if (lVar6 != 0 && param_2 == '\x01') {
        uVar5 = (**(code **)(*(longlong *)(lVar6 + 0x3b48) + 0x20))(lVar6 + 0x3b48);
        FUN_140cf8954(uVar5);
      }
      goto LAB_1440dddc6;
    }
  }
  uVar7 = 0;
LAB_1440dddc6:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440dde4c FUN_1440dde4c body=29 status=ok
// SIG undefined FUN_1440dde4c(void)

undefined8 FUN_1440dde4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ddfe8 FUN_1440ddfe8 body=93 status=ok
// SIG undefined FUN_1440ddfe8(void)

void FUN_1440ddfe8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440de046 FUN_1440de046 body=93 status=ok
// SIG undefined FUN_1440de046(void)

void FUN_1440de046(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440de0a4 FUN_1440de0a4 body=126 status=ok
// SIG undefined FUN_1440de0a4(void)

void FUN_1440de0a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963aa0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440de113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440de122 FUN_1440de122 body=59 status=ok
// SIG undefined FUN_1440de122(void)

void FUN_1440de122(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0 && param_2 == '\x01') {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x20))(lVar1 + 0x3b48);
    FUN_140cf8954(uVar2);
    return;
  }
  return;
}



// FUNCTION 1440de15e FUN_1440de15e body=307 status=ok
// SIG undefined FUN_1440de15e(void)

undefined8 FUN_1440de15e(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440de28b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440de28b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440de28b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440de20c;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar7 = 1;
      if (lVar6 != 0 && param_2 == '\x01') {
        uVar5 = (**(code **)(*(longlong *)(lVar6 + 0x3b48) + 0x20))(lVar6 + 0x3b48);
        FUN_140cf8954(uVar5);
      }
      goto LAB_1440de20c;
    }
  }
  uVar7 = 0;
LAB_1440de20c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


