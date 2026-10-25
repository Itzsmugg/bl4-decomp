// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a76bf6 FUN_148a76bf6 body=118 status=ok
// SIG undefined FUN_148a76bf6(void)

void FUN_148a76bf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2a70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148a76c6c FUN_148a76c6c body=118 status=ok
// SIG undefined FUN_148a76c6c(void)

void FUN_148a76c6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2a70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148a76ce2 FUN_148a76ce2 body=156 status=ok
// SIG undefined FUN_148a76ce2(void)

void FUN_148a76ce2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2a70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a76d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a76d7e FUN_148a76d7e body=103 status=ok
// SIG undefined FUN_148a76d7e(void)

ulonglong FUN_148a76d7e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a76de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148a76de6 FUN_148a76de6 body=100 status=ok
// SIG undefined FUN_148a76de6(void)

ulonglong FUN_148a76de6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148a76e3f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a76e3f;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148a76e4a FUN_148a76e4a body=31 status=ok
// SIG undefined FUN_148a76e4a(void)

undefined8 FUN_148a76e4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a76e86 FUN_148a76e86 body=101 status=ok
// SIG undefined FUN_148a76e86(void)

void FUN_148a76e86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a76eec FUN_148a76eec body=134 status=ok
// SIG undefined FUN_148a76eec(void)

void FUN_148a76eec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2ae0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a76f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a76f84 FUN_148a76f84 body=35 status=ok
// SIG undefined FUN_148a76f84(void)

undefined8 FUN_148a76f84(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a76fa8 FUN_148a76fa8 body=95 status=ok
// SIG undefined FUN_148a76fa8(void)

void FUN_148a76fa8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_148a77008();
  return;
}



// FUNCTION 148a77008 FUN_148a77008 body=88 status=ok
// SIG undefined FUN_148a77008(void)

void FUN_148a77008(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(lVar1 + lVar2 + 8);
  FUN_148a77060(param_1,param_2,1);
  return;
}



// FUNCTION 148a77060 FUN_148a77060 body=150 status=ok
// SIG undefined FUN_148a77060(void)

void FUN_148a77060(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148a770f6 FUN_148a770f6 body=31 status=ok
// SIG undefined FUN_148a770f6(void)

undefined8 FUN_148a770f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a77132 FUN_148a77132 body=101 status=ok
// SIG undefined FUN_148a77132(void)

void FUN_148a77132(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4e2bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a77198 FUN_148a77198 body=134 status=ok
// SIG undefined FUN_148a77198(void)

void FUN_148a77198(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c990;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2bc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a7720f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a77234 FUN_148a77234 body=31 status=ok
// SIG undefined FUN_148a77234(void)

undefined8 FUN_148a77234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a7727c FUN_148a7727c body=101 status=ok
// SIG undefined FUN_148a7727c(void)

void FUN_148a7727c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e2ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4e2c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a772e2 FUN_148a772e2 body=134 status=ok
// SIG undefined FUN_148a772e2(void)

void FUN_148a772e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e2ca0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2c30;
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
                    /* WARNING: Could not recover jumptable at 0x000148a77359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a77368 FUN_148a77368 body=33 status=ok
// SIG undefined FUN_148a77368(void)

void FUN_148a77368(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return;
}



// FUNCTION 148a7738c FUN_148a7738c body=31 status=ok
// SIG undefined FUN_148a7738c(void)

undefined8 FUN_148a7738c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a773c8 FUN_148a773c8 body=101 status=ok
// SIG undefined FUN_148a773c8(void)

void FUN_148a773c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a7742e FUN_148a7742e body=134 status=ok
// SIG undefined FUN_148a7742e(void)

void FUN_148a7742e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2d10;
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
                    /* WARNING: Could not recover jumptable at 0x000148a774a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a774c6 FUN_148a774c6 body=31 status=ok
// SIG undefined FUN_148a774c6(void)

undefined8 FUN_148a774c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a77502 FUN_148a77502 body=101 status=ok
// SIG undefined FUN_148a77502(void)

void FUN_148a77502(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e27a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a77568 FUN_148a77568 body=134 status=ok
// SIG undefined FUN_148a77568(void)

void FUN_148a77568(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e27a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e2d80;
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
                    /* WARNING: Could not recover jumptable at 0x000148a775df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a77600 FUN_148a77600 body=25 status=ok
// SIG undefined FUN_148a77600(void)

undefined8 FUN_148a77600(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a7761a FUN_148a7761a body=114 status=ok
// SIG undefined FUN_148a7761a(void)

void FUN_148a7761a(longlong *param_1,int param_2)

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



// FUNCTION 148a7768c FUN_148a7768c body=117 status=ok
// SIG undefined FUN_148a7768c(void)

void FUN_148a7768c(longlong *param_1,int param_2)

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
  FUN_145a43212((longlong)param_2 * 0x28 + *param_1);
  FUN_148a768e2(param_1,param_2);
  return;
}



// FUNCTION 148a77702 FUN_148a77702 body=173 status=ok
// SIG undefined FUN_148a77702(void)

void FUN_148a77702(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_148a77789;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a77789:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a777cc FUN_148a777cc body=67 status=ok
// SIG undefined FUN_148a777cc(void)

void FUN_148a777cc(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a42c86(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1459b72c6(param_1);
    return;
  }
  FUN_148a77810(param_1);
  FUN_145a42c86(param_1,0);
  return;
}



// FUNCTION 148a77810 FUN_148a77810 body=326 status=ok
// SIG undefined FUN_148a77810(void)

void FUN_148a77810(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 148a77958 FUN_148a77958 body=311 status=ok
// SIG undefined FUN_148a77958(void)

void FUN_148a77958(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a77a90 FUN_148a77a90 body=68 status=ok
// SIG undefined FUN_148a77a90(void)

undefined8 * FUN_148a77a90(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e3160;
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



// FUNCTION 148a77ad8 FUN_148a77ad8 body=81 status=ok
// SIG undefined FUN_148a77ad8(void)

undefined8 FUN_148a77ad8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148a77b30 FUN_148a77b30 body=89 status=ok
// SIG undefined FUN_148a77b30(void)

bool FUN_148a77b30(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a77b7b;
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
LAB_148a77b7b:
  return lVar6 == param_2;
}



// FUNCTION 148a77bb2 FUN_148a77bb2 body=118 status=ok
// SIG undefined FUN_148a77bb2(void)

void FUN_148a77bb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e31d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e3160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148a77c28 FUN_148a77c28 body=156 status=ok
// SIG undefined FUN_148a77c28(void)

void FUN_148a77c28(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e31d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e3160;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a77cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a77cc4 FUN_148a77cc4 body=104 status=ok
// SIG undefined FUN_148a77cc4(void)

void FUN_148a77cc4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148a77d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a77d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a77d2c FUN_148a77d2c body=101 status=ok
// SIG undefined FUN_148a77d2c(void)

ulonglong FUN_148a77d2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148a77d86:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a77d86;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148a77d94 FUN_148a77d94 body=68 status=ok
// SIG undefined FUN_148a77d94(void)

undefined8 * FUN_148a77d94(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e3240;
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



// FUNCTION 148a77ddc FUN_148a77ddc body=81 status=ok
// SIG undefined FUN_148a77ddc(void)

undefined8 FUN_148a77ddc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148a77e34 FUN_148a77e34 body=89 status=ok
// SIG undefined FUN_148a77e34(void)

bool FUN_148a77e34(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a77e7f;
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
LAB_148a77e7f:
  return lVar6 == param_2;
}



// FUNCTION 148a77eb6 FUN_148a77eb6 body=118 status=ok
// SIG undefined FUN_148a77eb6(void)

void FUN_148a77eb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e32b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e3240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148a77f2c FUN_148a77f2c body=156 status=ok
// SIG undefined FUN_148a77f2c(void)

void FUN_148a77f2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e32b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e3240;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a77fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a77fc8 FUN_148a77fc8 body=104 status=ok
// SIG undefined FUN_148a77fc8(void)

void FUN_148a77fc8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148a78015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a78026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a78032 FUN_148a78032 body=298 status=ok
// SIG undefined FUN_148a78032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_148a78032(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb970e0 == (longlong *)0x0) {
    _DAT_14cb97100 = 0;
    _DAT_14cb97108 = 0;
    _DAT_14cb970f0 = 0;
    uRam000000014cb970f8 = 0;
    _DAT_14cb97110 = 0;
    DAT_14cb970e8 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14cb970f0);
    _DAT_14cb97100 = CONCAT44(DAT_14cb97100_4,0xffffffff);
    DAT_14cb970e8 = &PTR_FUN_14b4e3f80;
    _DAT_14cb97108 = 0x3200000064;
    _DAT_14cb97110 = CONCAT44(DAT_14cb97110_4,0xfa);
    DAT_14cb970e0 = (longlong *)&DAT_14cb970e8;
  }
  plVar1 = DAT_14cb970e0;
  lVar3 = FUN_144a7b9b0(DAT_14cb970e0 + 1);
  if (lVar3 == 0) {
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_148a78135;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_matchmaking",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar2 = FUN_1449e3c20(plVar1);
    if (cVar2 == '\0') goto LAB_148a78135;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_148a78135:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 148a7815e FUN_148a7815e body=237 status=ok
// SIG undefined FUN_148a7815e(void)

void FUN_148a7815e(longlong param_1)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = FUN_143f25876;
  local_28 = 0;
  FUN_148a78a86(*(longlong *)(param_1 + 0x100) + 0x10,param_1,&local_30);
  local_30 = (code *)&LAB_148a78d86;
  local_28 = 0;
  FUN_148a78c06(*(longlong *)(param_1 + 0x100) + 0x20,param_1,&local_30);
  FUN_148a851ee(*(longlong *)(param_1 + 0x100) + 0x30,param_1 + 0x60);
  FUN_148a85272(*(longlong *)(param_1 + 0x100) + 0x40,param_1 + 0x70);
  FUN_148a852f6(*(longlong *)(param_1 + 0x100) + 0x50,param_1 + 0x80);
  local_30 = FUN_143f2574a;
  local_28 = 0;
  FUN_148a78d90(*(longlong *)(param_1 + 0x100) + 0x60,param_1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7824c FUN_148a7824c body=93 status=ok
// SIG undefined FUN_148a7824c(void)

undefined8 * FUN_148a7824c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141175adb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145cc348e(param_1,iVar1);
      FUN_145cc3452(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a782aa FUN_148a782aa body=257 status=ok
// SIG undefined FUN_148a782aa(void)

void FUN_148a782aa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_145d6e79a();
  if (*(int *)(lVar2 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  uVar3 = FUN_145d6e79a();
  local_50 = FUN_143f238ae;
  local_48 = 0;
  FUN_148a78f10(local_40,param_1);
  FUN_1448b6402(uVar3,&local_50,local_40);
  FUN_1449db362(local_40);
  *(code **)(*(longlong *)(param_1 + 0xf0) + 0x40) = local_50;
  lVar2 = FUN_145d6e79a();
  if (*(int *)(lVar2 + 0x18) != 1) {
    uVar3 = FUN_145d6e79a();
    lVar2 = *(longlong *)(param_1 + 0xf0) + 4;
    cVar1 = FUN_146076bce(lVar2,0);
    uVar5 = 0xffffffff;
    if (cVar1 == '\0') {
      lVar2 = FUN_14479d2ce(lVar2);
      uVar5 = *(undefined4 *)(lVar2 + 0x38);
    }
    uVar4 = FUN_148a783be(param_1);
    FUN_14160233c(uVar3,uVar4,uVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a783be FUN_148a783be body=61 status=ok
// SIG undefined FUN_148a783be(void)

undefined8 FUN_148a783be(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0xb0);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xb0);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 148a783fc FUN_148a783fc body=342 status=ok
// SIG undefined FUN_148a783fc(void)

longlong * FUN_148a783fc(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_148a78479:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_148a78479;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b42c990;
  *(undefined4 *)(puVar5 + 1) = *param_4;
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
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b4e8d30;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a78552 FUN_148a78552 body=595 status=ok
// SIG undefined FUN_148a78552(void)

void FUN_148a78552(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x100) != 0) goto LAB_148a78576;
  plVar6 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4e8cf0;
  plVar8 = plVar6 + 2;
  FUN_148a7975a(plVar8,param_1);
  local_40 = plVar8;
  local_38 = plVar6;
  FUN_148a845a8(&local_40,plVar8);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x108);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x108) = 0;
LAB_148a7877f:
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148a786e8:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x100) = plVar8;
    plVar8 = *(longlong **)(param_1 + 0x108);
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x000148a786e8;
      }
    }
    else {
      *(longlong **)(param_1 + 0x108) = plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_148a7877f;
    }
  }
  plVar8 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    FUN_1401861f4(param_1 + 0x48,0);
  }
  FUN_148a7815e(param_1);
  lVar3 = *(longlong *)(param_1 + 0xf0);
  puVar4 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  else {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    plVar8 = *(longlong **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  uVar7 = FUN_14479d2ce(lVar3 + 4);
  FUN_143f24648(uVar5,uVar7,lVar3 + 0x10,lVar3 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_148a78576:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a787bc FUN_148a787bc body=87 status=ok
// SIG undefined FUN_148a787bc(void)

void FUN_148a787bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000148a78808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a78814 FUN_148a78814 body=512 status=ok
// SIG undefined FUN_148a78814(void)

longlong * FUN_148a78814(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  void **ppvVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x6000;
  param_2[2] = 0;
  if (0 < (int)param_4[1]) {
    if ((int)param_4[1] == 1) {
      uVar6 = 0;
    }
    else {
      FUN_148a79570(param_1,&local_50);
      local_68 = *(undefined8 *)*param_4;
      FUN_1400021e4(&local_68,&local_60);
      if (local_48 == local_58) {
        bVar9 = true;
        if (1 < local_48) {
          lVar7 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)local_50 + lVar7);
            uVar4 = (uint)uVar2;
            uVar3 = *(ushort *)(local_60 + lVar7);
            uVar8 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148a789b2;
              }
              iVar5 = uVar4 - uVar8;
              goto LAB_148a78a0d;
            }
            if (uVar2 == 0) break;
LAB_148a789b2:
            lVar7 = lVar7 + 2;
          }
          iVar5 = 0;
LAB_148a78a0d:
          bVar9 = iVar5 == 0;
        }
      }
      else {
        bVar9 = local_58 + local_48 == 1;
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = (ulonglong)bVar9;
    }
    local_60 = *(longlong *)(*param_4 + uVar6 * 0x18);
    iVar5 = *(int *)(*param_4 + 8 + uVar6 * 0x18);
    if (local_60 != 0 || iVar5 != 0x6000) {
      *param_2 = local_60;
      *(int *)(param_2 + 1) = iVar5;
      param_2[2] = 0;
    }
    FUN_1400021e4(&local_60,&local_50);
    ppvVar1 = (void **)(param_1 + 0x148);
    FUN_144a787a6(param_1 + 0x158,param_3);
    _Src = local_50;
    if (ppvVar1 != &local_50) {
      *(int *)(param_1 + 0x150) = local_48;
      if (local_48 == 0 && *(int *)(param_1 + 0x154) == 0) {
        *(undefined4 *)(param_1 + 0x154) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar1,_Src,(longlong)local_48 * 2);
        }
      }
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a78a16 FUN_148a78a16 body=111 status=ok
// SIG undefined FUN_148a78a16(void)

void FUN_148a78a16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_148a8319e(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000148a78a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a78a86 FUN_148a78a86 body=384 status=ok
// SIG undefined FUN_148a78a86(void)

void FUN_148a78a86(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a78b99:
    *puVar5 = &PTR_LAB_14b4e8e10;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8da0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a78b99;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4e8e10;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8da0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148a78b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a78c06 FUN_148a78c06 body=384 status=ok
// SIG undefined FUN_148a78c06(void)

void FUN_148a78c06(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a78d19:
    *puVar5 = &PTR_LAB_149e35290;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8e80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a78d19;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e35290;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8e80;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148a78d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a78d90 FUN_148a78d90 body=384 status=ok
// SIG undefined FUN_148a78d90(void)

void FUN_148a78d90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a78ea3:
    *puVar5 = &PTR_LAB_14b4e8f60;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8ef0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a78ea3;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4e8f60;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8ef0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148a78e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a78f10 FUN_148a78f10 body=386 status=ok
// SIG undefined FUN_148a78f10(void)

longlong * FUN_148a78f10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a79021:
    *puVar5 = &PTR_LAB_149e020b0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8fd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a79021;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e8fd0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a79092 FUN_148a79092 body=259 status=ok
// SIG undefined FUN_148a79092(void)

void FUN_148a79092(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_48 [16];
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x168) == 0) || (*(longlong *)(param_1 + 0x170) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x170) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_38 = FUN_143f25e78;
    local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
    FUN_148a79258(local_48,param_1);
    local_58 = 0x42700000;
    FUN_1405f67fc(uVar3,&local_38,local_48,L"FGbxMatchmaking_ProcessingResultFailsafeTimeout");
    *(code **)(param_1 + 0x168) = local_38;
    local_38 = (code *)0x0;
    plVar2 = *(longlong **)(param_1 + 0x170);
    *(longlong **)(param_1 + 0x170) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    FUN_1449db362(local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a79196 FUN_148a79196 body=177 status=ok
// SIG undefined FUN_148a79196(void)

void FUN_148a79196(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x168) != 0) && (*(longlong *)(param_1 + 0x170) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x170) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x168);
    local_20 = *(longlong *)(param_1 + 0x170);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
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



// FUNCTION 148a79258 FUN_148a79258 body=386 status=ok
// SIG undefined FUN_148a79258(void)

longlong * FUN_148a79258(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a79369:
    *puVar5 = &PTR_LAB_149e02020;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e9040;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a79369;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e02020;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e9040;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a793da FUN_148a793da body=245 status=ok
// SIG undefined FUN_148a793da(void)

undefined8 FUN_148a793da(undefined8 param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_145c6ff46(&local_48);
  lVar6 = (longlong)(int)uStack_40;
  uVar5 = (int)uStack_40 + 1;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
  if (uStack_40._4_4_ < uVar5) {
    FUN_140188694(&local_48);
  }
  lVar6 = lVar6 * 0x20;
  bVar3 = *param_3;
  *(undefined4 *)(local_48 + lVar6) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar6) = 0;
  *(undefined4 *)(local_48 + 0x18 + lVar6) = 0;
  *(ulonglong *)(local_48 + 8 + lVar6) = (ulonglong)bVar3;
  FUN_145c6ff28(param_1,param_2,&local_48);
  FUN_14007f2db(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a794d0 FUN_148a794d0 body=56 status=ok
// SIG undefined FUN_148a794d0(void)

void FUN_148a794d0(longlong param_1,longlong *param_2)

{
  FUN_140bee9ec(param_1 + 200);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a79508 FUN_148a79508 body=103 status=ok
// SIG undefined FUN_148a79508(void)

undefined8 * FUN_148a79508(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xc0) == 1) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0xd0);
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_140b856de(param_2,iVar1,0);
      FUN_140b8566a(*param_2,uVar2,iVar1);
    }
  }
  else {
    FUN_143f266bc(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148a79570 FUN_148a79570 body=207 status=ok
// SIG undefined FUN_148a79570(void)

undefined8 * FUN_148a79570(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (iVar1 == (int)param_3[1]) {
    if (1 < iVar1) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x158) + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(*param_3 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_148a795f0;
LAB_148a795b6:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_148a795b6;
      }
      if (uVar3 != uVar5) goto LAB_148a795e1;
    }
  }
  else if ((int)param_3[1] + iVar1 != 1) {
LAB_148a795e1:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
LAB_148a795f0:
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x150);
  _Src = *(void **)(param_1 + 0x148);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148a79640 FUN_148a79640 body=125 status=ok
// SIG undefined FUN_148a79640(void)

void FUN_148a79640(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_145d6e79a();
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_14480f766(uVar1);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_14127b1cd(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_141175adb(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a796be FUN_148a796be body=154 status=ok
// SIG undefined FUN_148a796be(void)

undefined8 * FUN_148a796be(undefined8 *param_1)

{
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146583581(&local_30);
  _Src = local_30;
  if ((int)local_28 < 2) {
    FUN_140056680(param_1,&DAT_149e25dfc);
  }
  else {
    *param_1 = 0;
    *(uint *)(param_1 + 1) = local_28;
    FUN_1446dd670(param_1,(ulonglong)local_28,0);
    memcpy((void *)*param_1,_Src,(ulonglong)local_28 * 2);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7975a FUN_148a7975a body=204 status=ok
// SIG undefined FUN_148a7975a(void)

void FUN_148a7975a(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x199) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a1) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d1) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return;
}



// FUNCTION 148a79826 FUN_148a79826 body=283 status=ok
// SIG undefined FUN_148a79826(void)

void FUN_148a79826(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    FUN_1446f470e(&local_50,L"SHIFT",1);
    FUN_148a783be(*(undefined8 *)(param_1 + 0x70));
    local_68[0] = local_50;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_48);
      plVar3 = local_48;
      if (local_48 != (longlong *)0x0) {
        FUN_148a7a5ca(local_68,param_1);
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_58,param_2,local_68);
        *(undefined8 *)(param_1 + 0x1d0) = local_58;
        FUN_1449db362(local_68);
      }
    }
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a79942 FUN_148a79942 body=336 status=ok
// SIG undefined FUN_148a79942(void)

longlong * FUN_148a79942(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar8 = (longlong *)param_2[1];
  bVar7 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_148a799b4:
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a799b4;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *param_2;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *puVar3 = &PTR_LAB_14b4e9120;
  *(undefined4 *)(puVar3 + 1) = *param_3;
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
  puVar3[2] = lVar9;
  *puVar3 = &PTR_FUN_14b4e90b0;
  puVar3[3] = uVar10;
  puVar3[4] = plVar8;
  if (bVar7) {
    puVar3[5] = FUN_143f26954;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_143f26954;
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
  return param_1;
}



// FUNCTION 148a79a92 FUN_148a79a92 body=84 status=ok
// SIG undefined FUN_148a79a92(void)

void FUN_148a79a92(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_145ec7454(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a79ae6 FUN_148a79ae6 body=235 status=ok
// SIG undefined FUN_148a79ae6(void)

void FUN_148a79ae6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1446f470e(&local_50,L"SHIFT",1);
    FUN_148a783be(*(undefined8 *)(param_1 + 0x70));
    local_30 = local_50;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_48);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x30))(local_48,param_2,(undefined8 *)(param_1 + 0x1d0));
      }
    }
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a79bd2 FUN_148a79bd2 body=142 status=ok
// SIG undefined FUN_148a79bd2(void)

void FUN_148a79bd2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_14021300e(&local_28,0x7b2,1,1);
  lVar1 = param_1 * 10000000 + local_28;
  FUN_140212f8e(&local_28);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)(lVar1 - local_28) / 10000000.0);
}



// FUNCTION 148a79c62 FUN_148a79c62 body=127 status=ok
// SIG undefined FUN_148a79c62(void)

ulonglong FUN_148a79c62(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [264];
  byte local_80;
  byte local_7f;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar1 = FUN_141546c72();
  FUN_148a99c30(uVar1,local_188,param_1 & 0xffffffff);
  if (local_20 == '\x01') {
    uVar2 = CONCAT71((int7)(param_1 >> 8),local_80 & local_7f) & 0xffffffff;
    FUN_143f2e2be();
  }
  else {
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a79ce2 FUN_148a79ce2 body=262 status=ok
// SIG undefined FUN_148a79ce2(void)

undefined8 * FUN_148a79ce2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_40,L"SHIFT",1);
  FUN_148a783be(*(undefined8 *)(param_1 + 0x70));
  local_50[0] = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      FUN_1411cb701(local_50,param_3);
      (**(code **)(*local_38 + 0x120))(local_38,param_2,local_50);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      bVar3 = false;
      goto LAB_148a79d94;
    }
  }
  bVar3 = true;
LAB_148a79d94:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (bVar3) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a79dea FUN_148a79dea body=118 status=ok
// SIG undefined FUN_148a79dea(void)

ulonglong FUN_148a79dea(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a79e62 FUN_148a79e62 body=373 status=ok
// SIG undefined FUN_148a79e62(void)

longlong * FUN_148a79e62(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148a79f6a:
    *puVar3 = &PTR_LAB_14b4e9350;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4e92e0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148a79f6a;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4e9350;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4e92e0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 148a79fd8 FUN_148a79fd8 body=177 status=ok
// SIG undefined FUN_148a79fd8(void)

void FUN_148a79fd8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1c8) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x1c0);
    local_20 = *(longlong *)(param_1 + 0x1c8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
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



// FUNCTION 148a7a09a FUN_148a7a09a body=336 status=ok
// SIG undefined FUN_148a7a09a(void)

longlong * FUN_148a7a09a(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar8 = (longlong *)param_2[1];
  bVar7 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_148a7a10c:
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a7a10c;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *param_2;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *puVar3 = &PTR_LAB_14b4e9120;
  *(undefined4 *)(puVar3 + 1) = *param_3;
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
  puVar3[2] = lVar9;
  *puVar3 = &PTR_FUN_14b4e90b0;
  puVar3[3] = uVar10;
  puVar3[4] = plVar8;
  if (bVar7) {
    puVar3[5] = FUN_143f26954;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_143f26954;
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
  return param_1;
}



// FUNCTION 148a7a1ea FUN_148a7a1ea body=380 status=ok
// SIG undefined FUN_148a7a1ea(void)

longlong * FUN_148a7a1ea(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148a7a2f4:
    *puVar3 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4e9430;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_143f26d58;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148a7a2f4;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4e9430;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_143f26d58;
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
  return param_1;
}



// FUNCTION 148a7a366 FUN_148a7a366 body=280 status=ok
// SIG undefined FUN_148a7a366(void)

void FUN_148a7a366(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x1c0) == 0) || (*(longlong *)(param_1 + 0x1c8) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1c8) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b4e95f0;
    local_68[0] = FUN_143f2f7b4;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,L"AvoidPlayersCancellationFailsafeTimer",0x40a00000);
    *(undefined8 *)(param_1 + 0x1c0) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1c8);
    *(longlong **)(param_1 + 0x1c8) = local_70;
    local_70 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7a480 FUN_148a7a480 body=330 status=ok
// SIG undefined FUN_148a7a480(void)

longlong *
FUN_148a7a480(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar8 = (longlong *)param_2[1];
  bVar7 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_148a7a4f7:
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a7a4f7;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *param_2;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *puVar3 = &PTR_LAB_14b4e9510;
  *(undefined4 *)(puVar3 + 1) = *param_4;
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
  puVar3[2] = lVar9;
  *puVar3 = &PTR_FUN_14b4e94a0;
  puVar3[3] = uVar10;
  puVar3[4] = plVar8;
  if (bVar7) {
    puVar3[5] = param_3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 148a7a5ca FUN_148a7a5ca body=380 status=ok
// SIG undefined FUN_148a7a5ca(void)

longlong * FUN_148a7a5ca(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148a7a6d4:
    *puVar3 = &PTR_LAB_14b4e4d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4e9580;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148a7a746;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148a7a6d4;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4e4d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4e9580;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148a7a746;
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
  return param_1;
}



// FUNCTION 148a7a746 FUN_148a7a746 body=77 status=ok
// SIG undefined FUN_148a7a746(void)

void FUN_148a7a746(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x78) == 5) {
    FUN_148a79ae6(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x78) != 1) {
      return;
    }
    FUN_148a79ae6(param_1);
    FUN_143f22faa(*(undefined8 *)(param_1 + 0x70),0xe);
  }
  FUN_143f26ae2(param_1);
  return;
}



// FUNCTION 148a7a793 FUN_148a7a793 body=131 status=ok
// SIG undefined FUN_148a7a793(void)

void FUN_148a7a793(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_140056680(local_48,L"matchmaking");
  FUN_1414f3dba(param_1,local_48,param_2,&local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7a818 FUN_148a7a818 body=159 status=ok
// SIG undefined FUN_148a7a818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a7a818(undefined8 *param_1)

{
  _DAT_14cb97170 = *param_1;
  if (param_1 != (undefined8 *)&DAT_14cb97170) {
    if (DAT_14cb97178 != 0) {
      FUN_1400020a8();
    }
    DAT_14cb97178 = param_1[1];
    param_1[1] = 0;
    DAT_14cb97180 = *(undefined4 *)(param_1 + 2);
    DAT_14cb97184 = *(undefined4 *)((longlong)param_1 + 0x14);
    param_1[2] = 0;
    if (DAT_14cb97188 != 0) {
      FUN_1400020a8();
    }
    DAT_14cb97188 = param_1[3];
    param_1[3] = 0;
    DAT_14cb97190 = *(undefined4 *)(param_1 + 4);
    _DAT_14cb97194 = *(undefined4 *)((longlong)param_1 + 0x24);
    param_1[4] = 0;
  }
  _DAT_14cb97198 = param_1[5];
  _DAT_14cb971a0 = param_1[6];
  return;
}



// FUNCTION 148a7a8b7 FUN_148a7a8b7 body=27 status=ok
// SIG undefined FUN_148a7a8b7(void)

undefined2 * FUN_148a7a8b7(uint param_1)

{
  if (param_1 < 0x16) {
    return (undefined2 *)(&PTR_u_Success_14b4edfa8)[param_1];
  }
  return &DAT_149dfb77a;
}



// FUNCTION 148a7a8d2 FUN_148a7a8d2 body=147 status=ok
// SIG undefined FUN_148a7a8d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a7a8d2(longlong *param_1)

{
  if (param_1 != &DAT_14cb971a8) {
    if (DAT_14cb971a8 != 0) {
      FUN_1400020a8();
    }
    DAT_14cb971a8 = *param_1;
    *param_1 = 0;
    _DAT_14cb971b0 = (undefined4)param_1[1];
    _DAT_14cb971b4 = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    if (DAT_14cb971b8 != 0) {
      FUN_1400020a8();
    }
    DAT_14cb971b8 = param_1[2];
    param_1[2] = 0;
    _DAT_14cb971c0 = (undefined4)param_1[3];
    _DAT_14cb971c4 = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_1[3] = 0;
  }
  _DAT_14cb971c8 = param_1[4];
  _DAT_14cb971d0 = param_1[5];
  return;
}



// FUNCTION 148a7a965 FUN_148a7a965 body=633 status=ok
// SIG undefined FUN_148a7a965(void)

void FUN_148a7a965(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_e8;
  undefined4 local_e0;
  void *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  _Src = DAT_14cb97178;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = (void *)0x0;
  lVar6 = (longlong)(int)DAT_14cb97180;
  plStack_d0 = (longlong *)CONCAT44(plStack_d0._4_4_,DAT_14cb97180);
  if (lVar6 == 0) {
    plStack_d0 = (longlong *)(ulonglong)DAT_14cb97180;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cb97180,0);
    memcpy(local_d8,_Src,lVar6 * 2);
  }
  local_c8 = 0;
  FUN_14485c47a(&local_c8,*(undefined8 *)(param_1 + 0x1f0));
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_14586fca4(&local_c0,param_2);
  iVar2 = DAT_14cb971e0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x42b400003f800000;
  lVar6 = (longlong)(int)DAT_14cb971e0;
  DAT_14cb971e0 = DAT_14cb971e0 + 1;
  local_70 = param_3;
  if (DAT_14cb971e4 < DAT_14cb971e0) {
    FUN_148a87292(iVar2);
  }
  FUN_148a87212(lVar6 * 0x88 + DAT_14cb971d8,&local_d8);
  FUN_148a7abe0(&local_d8);
  if (((DAT_14cb971e8 == (void *)0x0) || (DAT_14cb971f0 == (longlong *)0x0)) ||
     ((int)DAT_14cb971f0[1] < 1)) {
    uVar4 = FUN_1401cb356();
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,2,0x10);
    local_e0 = 2;
    *local_e8 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_e8[2] = lVar5;
    *local_e8 = &PTR_FUN_149e41f40;
    local_e8[3] = FUN_143f26ff1;
    local_f8 = 0;
    FUN_1405f67fc(uVar4,&local_d8,&local_e8,L"GbxMatchmakingTelemetry_TickLatencyRecordRequests");
    plVar3 = DAT_14cb971f0;
    DAT_14cb971e8 = local_d8;
    DAT_14cb971f0 = plStack_d0;
    local_d8 = (void *)0x0;
    plStack_d0 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_d0 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_e8);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7abe0 FUN_148a7abe0 body=95 status=ok
// SIG undefined FUN_148a7abe0(void)

void FUN_148a7abe0(longlong *param_1)

{
  FUN_148a833d5(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a7ac40 FUN_148a7ac40 body=101 status=ok
// SIG undefined FUN_148a7ac40(void)

void FUN_148a7ac40(uint param_1)

{
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_1 * 0x88 + DAT_14cb971d8);
  FUN_148a7abe0(_Dst);
  if (~param_1 + DAT_14cb971e0 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x88),(longlong)(int)(~param_1 + DAT_14cb971e0) * 0x88);
  }
  DAT_14cb971e0 = DAT_14cb971e0 + -1;
  FUN_148a87336();
  return;
}



// FUNCTION 148a7aca6 FUN_148a7aca6 body=330 status=ok
// SIG undefined FUN_148a7aca6(void)

void FUN_148a7aca6(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1414d0638();
  (**(code **)(*param_1 + 0x138))(param_1);
  FUN_1401cb356();
  local_28 = param_1[0x17];
  local_20 = param_1[0x18];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  plVar3 = (longlong *)param_1[0x18];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x16] != 0) {
    FUN_14480f766(&DAT_14cadbec8);
  }
  param_1[0x16] = 0;
  param_1[8] = 0;
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    param_1[9] = 0;
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
  if (param_1[0xf] != 0) {
    param_1[0xf] = 0;
    plVar3 = (longlong *)param_1[0x10];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x10] = 0;
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
  if ((longlong *)param_1[10] == (longlong *)0x0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  (**(code **)(*(longlong *)param_1[10] + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 148a7ae00 FUN_148a7ae00 body=33 status=ok
// SIG undefined FUN_148a7ae00(void)

undefined8 FUN_148a7ae00(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (iVar1 = FUN_145aa6012(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 148a7ae22 FUN_148a7ae22 body=16 status=ok
// SIG undefined FUN_148a7ae22(void)

int FUN_148a7ae22(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_14148f09a();
  iVar2 = (iVar2 - (*(int *)(lVar1 + 0x78) + *(int *)(lVar1 + 0x430))) + *(int *)(lVar1 + 0x45c);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 148a7ae32 FUN_148a7ae32 body=191 status=ok
// SIG undefined FUN_148a7ae32(void)

void FUN_148a7ae32(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_34;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d53afe(param_1,local_28);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x350))
                    (*(longlong **)(param_1 + 0x30),local_28);
  if (iVar1 == 4) {
    uVar2 = 0xc00000003;
    puVar3 = &local_40;
LAB_148a7aea5:
    *puVar3 = uVar2;
  }
  else {
    if (iVar1 == 3) {
      uVar2 = 0xb00000003;
      puVar3 = &local_34;
      goto LAB_148a7aea5;
    }
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      FUN_145d53660(param_1);
      goto LAB_148a7aeb7;
    }
    puVar3 = &local_4c;
    local_4c = 2;
  }
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  FUN_145d53d3a(param_1);
LAB_148a7aeb7:
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7aef2 FUN_148a7aef2 body=118 status=ok
// SIG undefined FUN_148a7aef2(void)

void FUN_148a7aef2(longlong param_1,char param_2)

{
  undefined1 auStack_48 [44];
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    FUN_145a0590e();
    local_1c = 1;
    local_14 = 0xffffffff;
    FUN_145d53d3a(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  FUN_14606dc4c();
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_145d53660(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7af70 FUN_148a7af70 body=65 status=ok
// SIG undefined FUN_148a7af70(void)

void FUN_148a7af70(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  FUN_14114e6dc(param_1 + 0x100,param_3);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_148a7afb2(param_1);
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a7afb2 FUN_148a7afb2 body=372 status=ok
// SIG undefined FUN_148a7afb2(void)

void FUN_148a7afb2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xf8) == 1) {
    uVar4 = FUN_14619f89c(*(undefined8 *)(param_1 + 0x50));
    uVar5 = FUN_1411eec94(param_1 + 0x38);
    FUN_14619f8a0(&local_38,uVar5,uVar4);
    *(undefined8 *)(param_1 + 0x38) = local_38;
    if ((*(int *)(param_1 + 0x108) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x100), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,1);
    }
  }
  else if (*(int *)(param_1 + 0xf8) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 == 0) {
      if ((*(int *)(param_1 + 0x108) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    else {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      local_28 = 3;
      *local_30 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14b4e99c0;
      local_30[3] = param_1;
      local_30[4] = &LAB_148a7b13a;
      *(undefined4 *)(local_30 + 5) = 0;
      FUN_148aa728c(lVar1,*(undefined4 *)(param_1 + 0xfc),&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7b16c FUN_148a7b16c body=29 status=ok
// SIG undefined FUN_148a7b16c(void)

void FUN_148a7b16c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  FUN_14119d4d6(uVar1);
  return;
}



// FUNCTION 148a7b18a FUN_148a7b18a body=65 status=ok
// SIG undefined FUN_148a7b18a(void)

void FUN_148a7b18a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x130) = param_2;
  FUN_148a88c36(param_1 + 0x138,param_3);
  *(undefined4 *)(param_1 + 300) = 0;
  FUN_148a7b1cc(param_1);
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a7b1cc FUN_148a7b1cc body=1200 status=ok
// SIG undefined FUN_148a7b1cc(void)

void FUN_148a7b1cc(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 **local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  local_2c = uVar1;
  switch(*(undefined4 *)(param_1 + 300)) {
  case 0:
    local_48 = *(undefined8 **)(param_1 + 0x38);
    iVar6 = FUN_1411eec94();
    if (iVar6 == 2) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 1;
      FUN_1446f48e2(&local_48,0);
      *(undefined4 *)local_48 = uVar1;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      local_50 = 2;
      *local_58 = &PTR_LAB_14b4edd40;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_58[2] = lVar8;
      *local_58 = &PTR_FUN_14b4ea040;
      local_58[3] = param_1;
      FUN_145d53e48(uVar3,&local_48,1,&local_58);
    }
    else {
      local_48 = *(undefined8 **)(param_1 + 0x38);
      iVar6 = FUN_1411eec94();
      if (iVar6 != 1) {
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        FUN_148a7b1cc(param_1);
        break;
      }
      local_48 = (undefined8 *)0x0;
      uStack_40 = 1;
      FUN_1446f48e2(&local_48,0);
      *(undefined4 *)local_48 = uVar1;
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x350))
                        (*(longlong **)(param_1 + 0x30),&local_48);
      if (iVar6 == 0) {
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        FUN_148a7b1cc(param_1);
      }
      else {
        FUN_148a7b6a8(param_1,7);
      }
    }
    goto LAB_148a7b2dc;
  case 1:
    if (((*(longlong *)(param_1 + 0x50) == 0) || (cVar4 = FUN_145c29970(), cVar4 == '\0')) ||
       (iVar6 = FUN_1458ff3f0(*(undefined8 *)(param_1 + 0x30),uVar1), iVar6 != 0)) {
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
LAB_148a7b4fe:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
    local_48 = (undefined8 *)0x0;
    uStack_40 = 1;
    FUN_1446f48e2(&local_48,0);
    *(undefined4 *)local_48 = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,2,0x10);
    local_60 = 2;
    *local_68 = &PTR_LAB_14b4eddb0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_68[2] = lVar8;
    *local_68 = &PTR_FUN_14b4ea0b0;
    local_68[3] = param_1;
    local_88 = 0;
    local_80 = &local_68;
    FUN_145d54248(uVar3,&local_48,1,1);
LAB_148a7b2dc:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 2:
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (lVar2 == 0) {
      *(undefined4 *)(param_1 + 300) = 3;
      goto LAB_148a7b4fe;
    }
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    local_70 = 3;
    *local_78 = &PTR_LAB_14b4e9d50;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_78[2] = lVar7;
    *local_78 = &PTR_FUN_14b4e9ce0;
    local_78[3] = param_1;
    local_78[4] = &LAB_148a7b798;
    *(undefined4 *)(local_78 + 5) = 0;
    uVar5 = FUN_1458ff3f0(*(undefined8 *)(param_1 + 0x30),uVar1);
    FUN_143f454d6(lVar2,uVar1,uVar5,&local_78);
    break;
  case 3:
    local_48 = (undefined8 *)0x0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    FUN_1446efa72(&local_48,0,3,0x10);
    uStack_40 = CONCAT44(uStack_40._4_4_,3);
    *local_48 = &PTR_LAB_14b4edb10;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_48[2] = lVar8;
    *local_48 = &PTR_FUN_14b4e9b10;
    local_48[3] = param_1;
    local_48[4] = &LAB_148a7b8c8;
    *(undefined4 *)(local_48 + 5) = 0;
    FUN_148a7b7f6(param_1,param_1,&local_2c,&local_48);
    FUN_1449db362(&local_48);
    break;
  case 4:
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_148a9a686(*(longlong *)(param_1 + 0x78),uVar1);
    }
    if ((*(int *)(param_1 + 0x140) != 0) && (*(longlong *)(param_1 + 0x138) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a7b6a8 FUN_148a7b6a8 body=238 status=ok
// SIG undefined FUN_148a7b6a8(void)

void FUN_148a7b6a8(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
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
  *local_30 = &PTR_FUN_14b4ea220;
  local_30[3] = param_1;
  *(undefined4 *)(local_30 + 4) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  FUN_14114e6dc(param_1 + 0x150,&local_30);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_148a7b958(param_1);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7b7f6 FUN_148a7b7f6 body=209 status=ok
// SIG undefined FUN_148a7b7f6(void)

void FUN_148a7b7f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_148a88cb9(param_2,param_3,param_4);
  plVar1 = plVar4 + 2;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_148a893bc(&local_40,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1411d7792(uVar3,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7b912 FUN_148a7b912 body=69 status=ok
// SIG undefined FUN_148a7b912(void)

void FUN_148a7b912(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_14114e6dc(param_1 + 0x150,param_3);
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_148a7b958(param_1);
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a7b958 FUN_148a7b958 body=531 status=ok
// SIG undefined FUN_148a7b958(void)

void FUN_148a7b958(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_1 + 0x14c);
  iVar2 = *(int *)(param_1 + 0x148);
  local_2c = uVar1;
  if (iVar2 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x148) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = 3;
    *local_50 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_50[2] = lVar4;
    *local_50 = &PTR_FUN_14b4e99c0;
    local_50[3] = param_1;
    local_50[4] = &LAB_148a7bc70;
    *(undefined4 *)(local_50 + 5) = 0;
    FUN_148aa72c4(lVar3,uVar1,&local_50);
  }
  else if (iVar2 == 2) {
    if ((*(int *)(param_1 + 0x158) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
  }
  else if (iVar2 == 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b4e99c0;
    local_40[3] = param_1;
    local_40[4] = &LAB_148a7bc64;
    *(undefined4 *)(local_40 + 5) = 0;
    FUN_148a7bb92(param_1,param_1,&local_2c,&local_40);
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7bb92 FUN_148a7bb92 body=209 status=ok
// SIG undefined FUN_148a7bb92(void)

void FUN_148a7bb92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_148a89463(param_2,param_3,param_4);
  plVar1 = plVar4 + 2;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_148a89b5e(&local_40,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1411d7792(uVar3,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7bc7c FUN_148a7bc7c body=255 status=ok
// SIG undefined FUN_148a7bc7c(void)

void FUN_148a7bc7c(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[10] != 0) {
    cVar1 = FUN_148a96c86();
    if (cVar1 == '\0') {
      local_38 = L"InviteFailedMessage";
      local_30 = 0x13;
      FUN_1446e940c(local_44,&local_38);
      local_38 = L"GbxNetwork";
      local_30 = 10;
      FUN_1446e940c(local_48,&local_38);
      FUN_140208bae(&local_38,local_48,local_44,
                    L"There was a problem sending the invite, please try again later.");
      (**(code **)(*param_1 + 0x128))(param_1,&local_38);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
    }
    else {
      FUN_1446f470e(&local_40,L"invite_sent",1);
      (**(code **)(*param_1 + 0x110))(param_1,local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7bd7c FUN_148a7bd7c body=175 status=ok
// SIG undefined FUN_148a7bd7c(void)

void FUN_148a7bd7c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[10] != 0) {
    (**(code **)(*param_1 + 0x20))();
    lVar3 = param_1[10];
    local_20 = *(longlong **)(param_2 + 0x10);
    if (local_20 == (longlong *)0x0) {
LAB_148a7bdc6:
      local_20 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)local_20[1];
      do {
        if (iVar6 == 0) goto LAB_148a7bdc6;
        LOCK();
        iVar5 = (int)local_20[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(local_20 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar7);
    }
    local_28 = 0;
    if (local_20 != (longlong *)0x0) {
      local_28 = *(undefined8 *)(param_2 + 8);
    }
    FUN_143f3895a(lVar3,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a7be2c FUN_148a7be2c body=260 status=ok
// SIG undefined FUN_148a7be2c(void)

void FUN_148a7be2c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_148a9a86c();
  }
  FUN_14114e6dc(param_1 + 0xa0,param_2);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e06450;
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
  *local_30 = &PTR_FUN_14b4e99c0;
  local_30[3] = param_1;
  local_30[4] = FUN_148a7bf32;
  *(undefined4 *)(local_30 + 5) = 0;
  FUN_145dd0ba6(param_1,param_1,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7bf32 FUN_148a7bf32 body=46 status=ok
// SIG undefined FUN_148a7bf32(void)

void FUN_148a7bf32(longlong *param_1,undefined4 param_2)

{
  FUN_145a0590e();
  (**(code **)(*param_1 + 0x148))(param_1,0);
  FUN_143f2815c(param_1,param_2);
  return;
}



// FUNCTION 148a7bf60 FUN_148a7bf60 body=397 status=ok
// SIG undefined FUN_148a7bf60(void)

ulonglong FUN_148a7bf60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_14101cf30(*(longlong *)(param_1 + 0x50),&local_58);
    lVar6 = local_58;
    lVar10 = (longlong)local_50;
    if (lVar10 == 0) {
      uVar9 = 0;
      local_50 = 0;
    }
    else {
      lVar11 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar6 + lVar11);
        if (*(int *)((longlong)puVar3 + 0x14) == 1) {
          if (*param_2 != 0) {
            puVar4 = (undefined8 *)*puVar3;
            plVar5 = (longlong *)puVar3[1];
            if (plVar5 == (longlong *)0x0) {
              cVar7 = (**(code **)*puVar4)();
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              cVar7 = (**(code **)*puVar4)();
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
            if (cVar7 != '\0') goto LAB_148a7c00b;
          }
          puVar3 = *(undefined8 **)(lVar6 + lVar11);
          local_68 = *puVar3;
          plVar5 = (longlong *)puVar3[1];
          local_60 = plVar5;
          if (plVar5 == (longlong *)0x0) {
            lVar8 = FUN_148a7c34e(param_1,&local_68);
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            lVar8 = FUN_148a7c34e(param_1,&local_68);
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
          }
          if (lVar8 != 0) {
            uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            goto LAB_148a7c09c;
          }
        }
LAB_148a7c00b:
        lVar11 = lVar11 + 0x10;
      } while (lVar10 * 0x10 != lVar11);
      uVar9 = 0;
    }
LAB_148a7c09c:
    FUN_14101cee4(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c0ee FUN_148a7c0ee body=246 status=ok
// SIG undefined FUN_148a7c0ee(void)

undefined8
FUN_148a7c0ee(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4ea660;
  *(undefined1 *)(local_48 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b4ea5f0;
  local_48[3] = param_2;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_141211dc4(&DAT_14cadbec8,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c1e6 FUN_148a7c1e6 body=358 status=ok
// SIG undefined FUN_148a7c1e6(void)

void FUN_148a7c1e6(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar5 = FUN_1447210f0(param_3);
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if (lVar5 == lVar6) {
      if (*(longlong *)(param_3 + 0x398) == 0) {
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
      }
      else {
        FUN_1408e4d18(*(longlong *)(param_3 + 0x398) + 0x3a0,&local_38);
      }
      cVar4 = FUN_148a7bf60(param_1,&local_38);
      if (cVar4 == '\0') {
        FUN_1401cb356();
        local_48 = *(undefined8 *)(param_1 + 0xb8);
        local_40 = *(longlong *)(param_1 + 0xc0);
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
          UNLOCK();
        }
        FUN_140d61352(&local_48);
        plVar3 = *(longlong **)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          FUN_14480f766(&DAT_14cadbec8);
        }
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if ((*(int *)(param_1 + 0xa8) != 0) &&
           (plVar3 = *(longlong **)(param_1 + 0xa0), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x60))(plVar3,param_4);
        }
      }
      plVar3 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_30)(plStack_30);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c34e FUN_148a7c34e body=179 status=ok
// SIG undefined FUN_148a7c34e(void)

undefined8 FUN_148a7c34e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x178), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    local_48 = &PTR_FUN_14a184370;
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    local_30 = 0;
    uVar2 = FUN_1434f73f8(lVar1,&local_48);
    local_48 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c43a FUN_148a7c43a body=98 status=ok
// SIG undefined FUN_148a7c43a(void)

void FUN_148a7c43a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    FUN_14619f8a0(&local_28,2,param_2);
    *(undefined8 *)(param_1 + 0x38) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c49e FUN_148a7c49e body=351 status=ok
// SIG undefined FUN_148a7c49e(void)

void FUN_148a7c49e(longlong *param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141589cce();
  cVar1 = FUN_146586100(param_1[10]);
  if ((param_2 == 0) && (cVar1 != '\0')) {
    local_50 = L"PartyCrossplayDisabledHeader";
    local_48 = 0x1c;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"GbxNetwork";
    local_48 = 10;
    FUN_1446e940c(local_68,&local_50);
    FUN_140208bae(local_60,local_68,local_64,L"Party Settings Changed");
    local_50 = L"PartyCrossplayDisabledMessage";
    local_48 = 0x1d;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"GbxNetwork";
    local_48 = 10;
    FUN_1446e940c(local_68,&local_50);
    FUN_140208bae(&local_50,local_68,local_64,L"Crossplay disabled due to party member settings.");
    (**(code **)(*param_1 + 0x118))(param_1,local_60,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  FUN_148a95d12(param_1[6]);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c5fe FUN_148a7c5fe body=434 status=ok
// SIG undefined FUN_148a7c5fe(void)

void FUN_148a7c5fe(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x14) == 0)) {
    FUN_145c2b2ec(param_1,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      plVar3 = (longlong *)((undefined8 *)*param_2)[1];
      if (plVar3 == (longlong *)0x0) {
        cVar5 = (**(code **)*local_30)(local_30,*(undefined8 *)*param_2);
        local_38 = local_28;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        cVar5 = (**(code **)*local_30)();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_38 = local_28;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_38 = local_28;
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            local_38 = local_28;
          }
        }
      }
      local_28 = local_38;
      if (cVar5 == '\0') {
        lVar4 = param_1[10];
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_143f3895a(lVar4,local_40);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (*(int *)((longlong)param_1 + 0x6c) != -1) {
      if (param_1[0xc] != 0) {
        FUN_1400020a8();
      }
      param_1[0xc] = 0;
      param_1[0xd] = -0x100000000;
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x161) = 0;
    FUN_1446f470e(&local_48,L"promoted_to_party_leader",1);
    (**(code **)(*param_1 + 0x110))(param_1,local_48);
  }
  FUN_148a95d06(param_1[6]);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7c7f8 FUN_148a7c7f8 body=1521 status=ok
// SIG undefined FUN_148a7c7f8(void)

void FUN_148a7c7f8(longlong param_1,longlong param_2)

{
  longlong **pplVar1;
  int *piVar2;
  longlong **pplVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  longlong **local_a8;
  longlong *local_a0;
  longlong **local_98;
  longlong *local_90;
  longlong local_88 [3];
  undefined **local_70;
  undefined **local_68;
  longlong **local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1408e4d18(param_2 + 0x3a0,&local_98);
  pplVar11 = local_98;
  if (local_98 == (longlong **)0x0) goto LAB_148a7cd36;
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  FUN_140b6e166(&local_a8,uVar7,pplVar11);
  pplVar11 = local_98;
  plVar9 = local_90;
  if (local_a8 != (longlong **)0x0) {
    if (param_2 == 0) {
LAB_148a7c896:
      (*(code *)(*local_98)[6])(local_98,&local_68);
      uVar6 = FUN_140b71325(&local_68);
      if (local_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_88[0] = 0;
      local_88[1] = 0;
      local_60 = &local_c8;
      local_68 = (undefined **)FUN_143efd7ea;
      local_c8 = local_88;
      bifrost::sessions::serviceName(uVar6);
      uVar7 = FUN_14101d2ea();
      cVar5 = FUN_143f3ac8a(local_88,uVar7);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      pplVar11 = local_98;
      plVar9 = local_90;
      if (cVar5 == '\0') goto LAB_148a7c9c4;
    }
    else {
      lVar8 = FUN_140082f10();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_148a7c896;
      if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x500)] == '\x01') {
        if ((*(longlong **)(param_2 + 0x4f0) != (longlong *)0x0) &&
           (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x4f0) + 0x28))(), cVar5 != '\0'))
        goto LAB_148a7c96f;
        goto LAB_148a7c896;
      }
      if ((*(uint *)(param_2 + 0x4f0) & 0xffffff) == 0) goto LAB_148a7c896;
LAB_148a7c96f:
      plVar9 = (longlong *)FUN_140a68038(1);
      if (plVar9 == (longlong *)0x0) goto LAB_148a7c896;
      (**(code **)(*plVar9 + 0x10))(plVar9,&local_68);
      FUN_140b6e8c2(param_2 + 0x4e8,&local_70);
      pplVar11 = local_98;
      plVar9 = local_90;
      if (local_68 != local_70) goto LAB_148a7c9c4;
    }
    pplVar11 = local_a8;
    plVar9 = local_a0;
  }
LAB_148a7c9c4:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  lVar8 = FUN_14119d4d6(uVar7);
  if ((((lVar8 != 0) &&
       (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar10 != 0)) &&
      (lVar10 = FUN_1400f6f32(lVar10), lVar10 != 0)) &&
     (lVar10 = *(longlong *)(lVar10 + 0x68), lVar10 != 0)) {
    local_68 = &PTR_FUN_14a184370;
    local_60 = local_98;
    local_58 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    local_50 = 0;
    FUN_1413d931e(lVar10,&local_ac,&local_68,1);
    local_68 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    if (-1 < (short)local_ac) {
      (*(code *)(*pplVar11)[2])(pplVar11,&local_70);
      uVar7 = FUN_140b6de3c();
      FUN_140b6df48(uVar7,&local_68,lVar8,local_98);
      if (local_68 == (undefined **)0x0) {
        if (local_98 == pplVar11 && local_98 != (longlong **)0x0) {
          local_70 = (undefined **)0x0;
        }
      }
      else {
        (*(code *)(*local_98)[2])(local_98,local_b8);
        local_c8 = (longlong *)0x0;
        uStack_c0 = 0;
        (**(code **)(*local_68 + 0x18))(local_68,local_88);
        local_d8 = local_b8;
        FUN_141589eda(lVar10,&local_b0,&local_ac,local_88);
        local_ac = local_b0;
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        if (local_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      pplVar3 = local_60;
      if (local_60 != (longlong **)0x0) {
        LOCK();
        pplVar1 = local_60 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)pplVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar3)[2])(pplVar3);
          }
        }
      }
      if (local_a8 != (longlong **)0x0) {
        local_68 = &PTR_FUN_14a184370;
        local_60 = local_a8;
        local_58 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
        }
        local_50 = 0;
        local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffffffffff00);
        FUN_1414c1098(lVar10,local_88,&local_ac,&local_68);
        local_ac = (undefined4)local_88[0];
        local_68 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
        uVar7 = FUN_140b6de3c();
        FUN_140b6df48(uVar7,&local_68,lVar8,local_a8);
        if (local_68 == (undefined **)0x0) {
          if (local_a8 == pplVar11 && local_a8 != (longlong **)0x0) {
            local_70 = (undefined **)0x0;
          }
        }
        else {
          (*(code *)(*local_a8)[2])(local_a8,local_b8);
          local_c8 = (longlong *)0x0;
          uStack_c0 = 0;
          (**(code **)(*local_68 + 0x18))(local_68,local_88);
          local_d8 = local_b8;
          FUN_141589eda(lVar10,&local_b0,&local_ac,local_88);
          local_ac = local_b0;
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        pplVar11 = local_60;
        if (local_60 != (longlong **)0x0) {
          LOCK();
          pplVar3 = local_60 + 1;
          *(int *)pplVar3 = *(int *)pplVar3 + -1;
          UNLOCK();
          if (*(int *)pplVar3 == 0) {
            (*(code *)**local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)pplVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pplVar11)[2])(pplVar11);
            }
          }
        }
      }
      FUN_141589e20(lVar10,&local_68,&local_ac,&local_70);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
LAB_148a7cd36:
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a7cdea FUN_148a7cdea body=156 status=ok
// SIG undefined FUN_148a7cdea(void)

void FUN_148a7cdea(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    if (((int)param_4[1] != 0) && (plVar2 = (longlong *)*param_4, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
    }
  }
  else {
    local_40 = 0;
    local_38 = 0;
    FUN_148a8cba8(&local_40,param_4);
    FUN_148aa7326(lVar1,param_2,param_3,&local_40);
  }
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7ce88 FUN_148a7ce88 body=444 status=ok
// SIG undefined FUN_148a7ce88(void)

void FUN_148a7ce88(longlong *param_1,char param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\x05') {
    local_38 = L"HostLostQuit";
    local_30 = 0xc;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxNetwork";
    local_30 = 10;
    FUN_1446e940c(local_40,&local_38);
    pwVar2 = L"Your connection to the host was lost. The host quit the game.";
  }
  else if (param_2 == '\x04') {
    local_38 = L"HostLostNewParty";
    local_30 = 0x10;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxNetwork";
    local_30 = 10;
    FUN_1446e940c(local_40,&local_38);
    pwVar2 = L"The host chose to end the session to join a new party.";
  }
  else {
    if (param_2 != '\x03') goto LAB_148a7cfe1;
    local_38 = L"HostLostModeChange";
    local_30 = 0x12;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"GbxNetwork";
    local_30 = 10;
    FUN_1446e940c(local_40,&local_38);
    pwVar2 = L"The host chose to end the session to play a different network mode.";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar2);
  FUN_140008f88(param_1 + 4,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
LAB_148a7cfe1:
  cVar1 = FUN_144a7c5f6(param_1 + 4);
  if (cVar1 == '\0') {
    if (*(int *)((longlong)param_1 + 0x6c) != -1) {
      if (param_1[0xc] != 0) {
        FUN_1400020a8();
      }
      param_1[0xc] = 0;
      param_1[0xd] = -0x100000000;
    }
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d046 FUN_148a7d046 body=7 status=ok
// SIG undefined FUN_148a7d046(void)

void FUN_148a7d046(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x220) = param_2;
  return;
}



// FUNCTION 148a7d04e FUN_148a7d04e body=207 status=ok
// SIG undefined FUN_148a7d04e(void)

void FUN_148a7d04e(code *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [20];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = param_2;
  FUN_146006c10();
  iVar1 = *(int *)(param_1 + 0x224);
  *(int *)(param_1 + 0x224) = iVar1 + 1;
  if (iVar1 == 0) {
    FUN_1447f69b6(param_1 + 0x88);
  }
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  local_58 = FUN_143f29156;
  local_50 = 0;
  FUN_1460067c8(local_48,param_1,&local_58,param_3);
  local_58 = param_1;
  FUN_148a7d1e4(param_1 + 0x30,&local_34,&local_58,local_48);
  FUN_1449db362(local_48);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d11e FUN_148a7d11e body=71 status=ok
// SIG undefined FUN_148a7d11e(void)

undefined8 * FUN_148a7d11e(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1400b465c();
  uVar2 = FUN_14001cc68(0xe0,0x10);
  FUN_145eb7430(uVar2,uVar1,param_3);
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 148a7d166 FUN_148a7d166 body=121 status=ok
// SIG undefined FUN_148a7d166(void)

undefined8 * FUN_148a7d166(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1400b465c();
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = &PTR_FUN_14b4edf00;
  puVar2[10] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 9) = 0;
  FUN_14485c47a(puVar2 + 10,uVar1);
  *(undefined4 *)(puVar2 + 0xb) = param_3;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 148a7d1e4 FUN_148a7d1e4 body=234 status=ok
// SIG undefined FUN_148a7d1e4(void)

void FUN_148a7d1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a8d29f(param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a8d392(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d2e0 FUN_148a7d2e0 body=152 status=ok
// SIG undefined FUN_148a7d2e0(void)

undefined8 FUN_148a7d2e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SplitscreenPlayerAdded";
  local_28 = 0x16;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"GbxOnlineLoginManager";
  local_28 = 0x15;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Split Screen Player Added!");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d37a FUN_148a7d37a body=95 status=ok
// SIG undefined FUN_148a7d37a(void)

void FUN_148a7d37a(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148a7d2e0(param_1,local_28);
  (**(code **)(*param_1 + 0x348))(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d3da FUN_148a7d3da body=200 status=ok
// SIG undefined FUN_148a7d3da(void)

longlong *
FUN_148a7d3da(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b4eb4c0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_140146ccc(puVar3 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14b4eb450;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



// FUNCTION 148a7d4a2 FUN_148a7d4a2 body=71 status=ok
// SIG undefined FUN_148a7d4a2(void)

undefined8 * FUN_148a7d4a2(longlong param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1460626ac(param_1 + 0x1d0,param_2);
  return param_2;
}



// FUNCTION 148a7d4ea FUN_148a7d4ea body=234 status=ok
// SIG undefined FUN_148a7d4ea(void)

void FUN_148a7d4ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a8df0b(param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a8e02c(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d5e6 FUN_148a7d5e6 body=200 status=ok
// SIG undefined FUN_148a7d5e6(void)

longlong *
FUN_148a7d5e6(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b4c34a0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_14114e6dc(puVar3 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14b4eb650;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



// FUNCTION 148a7d6ae FUN_148a7d6ae body=42 status=ok
// SIG undefined FUN_148a7d6ae(void)

void FUN_148a7d6ae(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a7d6d8 FUN_148a7d6d8 body=290 status=ok
// SIG undefined FUN_148a7d6d8(void)

void FUN_148a7d6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  local_68 = param_5;
  FUN_148a8e4a6(plVar3,param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a8e5dc(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7d812 FUN_148a7d812 body=200 status=ok
// SIG undefined FUN_148a7d812(void)

longlong *
FUN_148a7d812(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b4eb750;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_145d7fe18(puVar3 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14b4eb6e0;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



// FUNCTION 148a7d8da FUN_148a7d8da body=46 status=ok
// SIG undefined FUN_148a7d8da(void)

void FUN_148a7d8da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  
  if (((int)param_5[1] != 0) && (plVar1 = (longlong *)*param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_4);
  }
  FUN_1449db362(param_5);
  return;
}



// FUNCTION 148a7d908 FUN_148a7d908 body=119 status=ok
// SIG undefined FUN_148a7d908(void)

undefined8 FUN_148a7d908(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar2 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x210);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x1d0);
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x20;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar1 == 0) {
            return 0;
          }
          if ((longlong *)(lVar1 + 8) == (longlong *)0x0) {
            return 0;
          }
          if (*(int *)(*(longlong *)(lVar1 + 8) + 0x24) != 2) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a7d980 FUN_148a7d980 body=95 status=ok
// SIG undefined FUN_148a7d980(void)

void FUN_148a7d980(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400b465c();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x48), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_140b7066c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148a7d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x340))(plVar1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 148a7d9e0 FUN_148a7d9e0 body=85 status=ok
// SIG undefined FUN_148a7d9e0(void)

void FUN_148a7d9e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400b465c();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x48), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_140b7066c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148a7da32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x348))(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148a7daf2 FUN_148a7daf2 body=195 status=ok
// SIG undefined FUN_148a7daf2(void)

void FUN_148a7daf2(undefined8 param_1,undefined4 param_2)

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
  *local_30 = &PTR_LAB_14b4edcd0;
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
  *local_30 = &PTR_FUN_14b4eb8c0;
  local_30[3] = param_1;
  FUN_143f2a136(param_1,param_2,0,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7dbb6 FUN_148a7dbb6 body=372 status=ok
// SIG undefined FUN_148a7dbb6(void)

void FUN_148a7dbb6(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x37) = param_2;
  *(undefined1 *)(param_1 + 0x44) = 1;
  uVar5 = FUN_1401cb356();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar6;
  *local_48 = &PTR_FUN_14b4eb930;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  puVar3[4] = FUN_143f2ab8c;
  *(undefined4 *)(puVar3 + 5) = 0;
  local_58 = 0x3dcccccd;
  FUN_1405f67fc(uVar5,&local_38,&local_48,L"UGbxOnlineLoginManager_TickAutoLogin");
  param_1[0x38] = local_38;
  local_38 = 0;
  plVar2 = (longlong *)param_1[0x39];
  param_1[0x39] = (longlong)local_30;
  local_30 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  FUN_1449db362(&local_48);
  (**(code **)(*param_1 + 0x300))(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7dd2c FUN_148a7dd2c body=119 status=ok
// SIG undefined FUN_148a7dd2c(void)

undefined8 FUN_148a7dd2c(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20,
            *(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20) != param_2) {
        iVar2 = *(int *)(lVar1 + 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((longlong *)(lVar1 + 8) == (longlong *)0x0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar1 + 8);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 8));
    }
  }
  return 0;
}



// FUNCTION 148a7dda4 FUN_148a7dda4 body=119 status=ok
// SIG undefined FUN_148a7dda4(void)

undefined8 FUN_148a7dda4(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20,
            *(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20) != param_2) {
        iVar2 = *(int *)(lVar1 + 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((longlong *)(lVar1 + 8) == (longlong *)0x0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar1 + 8);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 4));
    }
  }
  return 0;
}



// FUNCTION 148a7de1c FUN_148a7de1c body=222 status=ok
// SIG undefined FUN_148a7de1c(void)

void FUN_148a7de1c(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 *local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_3;
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      plVar4 = (longlong *)(param_1 + 0x1d0);
      lVar1 = *plVar4;
      iVar3 = iVar2;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x20) == param_2) goto LAB_148a7deb3;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  goto LAB_148a7de93;
  while (iVar2 = *(int *)(local_28 + 0x18), iVar2 != -1) {
LAB_148a7deb3:
    local_28 = lVar1 + (longlong)iVar2 * 0x20;
    if (*(uint *)(lVar1 + (longlong)iVar2 * 0x20) == param_2) goto LAB_148a7decd;
  }
  local_28 = 0;
LAB_148a7decd:
  local_28 = local_28 + 8;
  local_30 = &local_34;
  FUN_146006d48(plVar4,local_1c);
  FUN_148a8d43a(plVar4,param_2);
LAB_148a7de93:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a7defc FUN_148a7defc body=152 status=ok
// SIG undefined FUN_148a7defc(void)

undefined8 FUN_148a7defc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1d8) != *(int *)(lVar2 + 0x204))) {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar3 = lVar2 + 0x208;
    if (*(longlong *)(lVar2 + 0x210) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x210);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x218) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(lVar2 + 0x1d0);
      iVar5 = iVar4;
      while (*(uint *)(lVar2 + (longlong)iVar5 * 0x20) != uVar1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar2 + 0x18);
        if (iVar5 == -1) {
          return 0;
        }
      }
      do {
        lVar3 = lVar2 + (longlong)iVar4 * 0x20;
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == uVar1) goto LAB_148a7df69;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
      lVar3 = 0;
LAB_148a7df69:
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 8) >> 8),
                      *(undefined1 *)(*(longlong *)(lVar3 + 8) + 6));
    }
  }
  return 0;
}



// FUNCTION 148a7df94 FUN_148a7df94 body=117 status=ok
// SIG undefined FUN_148a7df94(void)

void FUN_148a7df94(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar1 + 0x1d8) != *(int *)(lVar1 + 0x204)) {
    lVar2 = lVar1 + 0x208;
    if (*(longlong *)(lVar1 + 0x210) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x210);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x218) - 1U & *(uint *)(param_1 + 0x30)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x1d0) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(lVar1 + 0x1d0) + (longlong)iVar3 * 0x20) ==
            *(uint *)(param_1 + 0x30)) break;
        iVar3 = *(int *)(lVar2 + 0x18);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_148a7dfef;
    }
  }
  lVar2 = 0;
LAB_148a7dfef:
  *(undefined1 *)(*(longlong *)(lVar2 + 8) + 8) = param_2;
  return;
}



// FUNCTION 148a7e00a FUN_148a7e00a body=386 status=ok
// SIG undefined FUN_148a7e00a(void)

longlong * FUN_148a7e00a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a7e11b:
    *puVar5 = &PTR_LAB_14b438870;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eba40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a7e11b;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b438870;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eba40;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a7e18c FUN_148a7e18c body=178 status=ok
// SIG undefined FUN_148a7e18c(void)

void FUN_148a7e18c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x30) == param_2) {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_28);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x98))(local_28,*(undefined4 *)(param_1 + 0x30),param_1 + 0x78);
      }
    }
    plVar3 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x71) = 1;
    FUN_148a7e240(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7e240 FUN_148a7e240 body=165 status=ok
// SIG undefined FUN_148a7e240(void)

void FUN_148a7e240(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x71) == '\x01') {
    if (*(char *)(param_1 + 0x70) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_140056680(local_30,&DAT_149dfb77a);
    FUN_140056680(local_40,L"TitleActivateText");
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
              (*(longlong **)(param_1 + 0x38),local_40,local_30);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7e2e6 FUN_148a7e2e6 body=32 status=ok
// SIG undefined FUN_148a7e2e6(void)

undefined8 FUN_148a7e2e6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_CompileShaders");
  return param_2;
}



// FUNCTION 148a7e64c FUN_148a7e64c body=32 status=ok
// SIG undefined FUN_148a7e64c(void)

undefined8 FUN_148a7e64c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_PlatformLogin");
  return param_2;
}



// FUNCTION 148a7e66c FUN_148a7e66c body=386 status=ok
// SIG undefined FUN_148a7e66c(void)

longlong * FUN_148a7e66c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a7e77d:
    *puVar5 = &PTR_LAB_14b438870;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebab0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a7e77d;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b438870;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebab0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a7e7ee FUN_148a7e7ee body=173 status=ok
// SIG undefined FUN_148a7e7ee(void)

void FUN_148a7e7ee(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[6] == param_2) {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_28);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x98))(local_28,(int)param_1[6],param_1 + 9);
      }
    }
    (**(code **)(*param_1 + 8))(param_1);
    plVar3 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7e89c FUN_148a7e89c body=150 status=ok
// SIG undefined FUN_148a7e89c(void)

void FUN_148a7e89c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    local_48 = FUN_143f2b27c;
    local_40 = 0;
    FUN_148a8f3fa(local_38,param_1);
    FUN_1448b6402(lVar1 + 0xb8,&local_48,local_38);
    FUN_1449db362(local_38);
    *(code **)(param_1 + 0x50) = local_48;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7e934 FUN_148a7e934 body=32 status=ok
// SIG undefined FUN_148a7e934(void)

undefined8 FUN_148a7e934(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_ShiftLogin");
  return param_2;
}



// FUNCTION 148a7e954 FUN_148a7e954 body=386 status=ok
// SIG undefined FUN_148a7e954(void)

longlong * FUN_148a7e954(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a7ea65:
    *puVar5 = &PTR_LAB_149e06450;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebd50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a7ea65;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebd50;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a7ead6 FUN_148a7ead6 body=32 status=ok
// SIG undefined FUN_148a7ead6(void)

undefined8 FUN_148a7ead6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_LoadProfile");
  return param_2;
}



// FUNCTION 148a7eaf6 FUN_148a7eaf6 body=386 status=ok
// SIG undefined FUN_148a7eaf6(void)

longlong * FUN_148a7eaf6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a7ec07:
    *puVar5 = &PTR_LAB_14b434710;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebdc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a7ec07;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b434710;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebdc0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a7ec78 FUN_148a7ec78 body=294 status=ok
// SIG undefined FUN_148a7ec78(void)

void FUN_148a7ec78(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [36];
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined4 local_68;
  int local_60 [6];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1414354ce();
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1e0) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x68), lVar1 != 0)) {
    FUN_1465630bc(*param_2,local_74);
    iVar2 = FUN_140def96c(lVar1,local_74);
    if (iVar2 == *(int *)(param_1 + 0x30)) {
      local_70 = DAT_14cb8dd60;
      local_68 = DAT_14cb8dd68;
      FUN_1448075d0(local_60);
      iVar2 = *(int *)(param_2 + 1);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (((iVar2 == local_60[0]) && (*(longlong *)(lVar3 + 0x1e0) != 0)) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x30), lVar3 != 0)) {
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_14480f766(lVar3 + 0x280);
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
        if (*(int *)(param_2 + 6) == 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        else {
          FUN_148a7f96c(param_1);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7eda0 FUN_148a7eda0 body=513 status=ok
// SIG undefined FUN_148a7eda0(void)

void FUN_148a7eda0(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  wchar_t **local_58;
  code *local_48;
  undefined4 local_40;
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb97290) {
    FUN_144b3d300(&DAT_14cb97290);
    if (DAT_14cb97290 == -1) {
      local_30 = L"CorruptProfileHeader";
      local_28 = 0x14;
      FUN_1446e940c(&local_48,&local_30);
      local_30 = L"GbxOnlineLoginManagerTasks";
      local_28 = 0x1a;
      FUN_1446e940c(local_34,&local_30);
      FUN_140208bae(&DAT_14cb97280,local_34,&local_48,L"Use Defaults");
      atexit((_func_5014 *)&LAB_143f2b9c9);
      _Init_thread_footer(&DAT_14cb97290);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb972a8) {
    FUN_144b3d300(&DAT_14cb972a8);
    if (DAT_14cb972a8 == -1) {
      local_30 = L"CorruptProfileMessage";
      local_28 = 0x15;
      FUN_1446e940c(&local_48,&local_30);
      local_30 = L"GbxOnlineLoginManagerTasks";
      local_28 = 0x1a;
      FUN_1446e940c(local_34,&local_30);
      FUN_140208bae(&DAT_14cb97298,local_34,&local_48,
                    L"Save data is corrupt and must be overwritten to proceed. Overwrite with default settings?"
                   );
      atexit((_func_5014 *)&LAB_143f2b9dd);
      _Init_thread_footer(&DAT_14cb972a8);
    }
  }
  local_48 = FUN_148a7efe0;
  local_40 = 0;
  FUN_148a7e954(&local_30,param_1);
  local_58 = &local_30;
  FUN_148a7f212(param_1,&DAT_14cb97280,&DAT_14cb97298,1);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7efa2 FUN_148a7efa2 body=62 status=ok
// SIG undefined FUN_148a7efa2(void)

void FUN_148a7efa2(longlong param_1,int param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x398))
            (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x68));
  if (param_2 - 1U < 2) {
    FUN_148a7f91a(param_1);
    *(int *)(param_1 + 0x80) = param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// FUNCTION 148a7efe0 FUN_148a7efe0 body=291 status=ok
// SIG undefined FUN_148a7efe0(void)

void FUN_148a7efe0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [20];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148a7f91a();
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    lVar1 = FUN_1414354ce(param_1);
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1e0), lVar1 != 0)) &&
       (*(longlong *)(lVar1 + 0x68) != 0)) {
      FUN_140ceec26(*(longlong *)(lVar1 + 0x68),local_34,*(undefined4 *)(param_1 + 0x30));
      lVar1 = *(longlong *)(lVar1 + 0x30);
      if (lVar1 != 0) {
        FUN_1489b01a6(lVar1,local_34);
        local_58 = FUN_148a7ec78;
        local_50 = 0;
        FUN_148a7eaf6(local_48,param_1);
        FUN_1489b1224(lVar1,&local_58,local_48);
        *(code **)(param_1 + 0x58) = local_58;
        FUN_1449db362(local_48);
        local_78 = &local_68;
        local_68 = 0;
        uStack_60 = 0;
        FUN_1457cd3ba(lVar1,local_48,local_34,0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7f104 FUN_148a7f104 body=269 status=ok
// SIG undefined FUN_148a7f104(void)

void FUN_148a7f104(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [20];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148a7f91a();
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x80) = 2;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    lVar1 = FUN_1414354ce(param_1);
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1e0), lVar1 != 0)) &&
       (*(longlong *)(lVar1 + 0x68) != 0)) {
      FUN_140ceec26(*(longlong *)(lVar1 + 0x68),local_2c,*(undefined4 *)(param_1 + 0x30));
      lVar1 = *(longlong *)(lVar1 + 0x30);
      if (lVar1 != 0) {
        local_50 = FUN_148a7ec78;
        local_48 = 0;
        FUN_148a7eaf6(local_40,param_1);
        FUN_1489b1224(lVar1,&local_50,local_40);
        *(code **)(param_1 + 0x58) = local_50;
        FUN_1449db362(local_40);
        local_78 = &local_68;
        local_68 = 0;
        uStack_60 = 0;
        FUN_1457cd3ba(lVar1,local_40,local_2c,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7f212 FUN_148a7f212 body=1799 status=ok
// SIG undefined FUN_148a7f212(void)

void FUN_148a7f212(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(param_1 + 0x68) == -1) && (lVar7 = FUN_1414354ce(), lVar7 != 0)) {
    if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar13);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0xe0) == *(int *)(param_1 + 0x30))) {
          local_118 = param_5;
          iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x390))
                            (*(longlong **)(param_1 + 0x38),0xffffffff,param_2,param_3);
          *(int *)(param_1 + 0x68) = iVar6;
          if (iVar6 == -1) goto LAB_148a7f238;
          lVar7 = *(longlong *)(param_1 + 0x38);
          local_78 = (code *)0x0;
          local_70 = 0;
          FUN_1446efa72(&local_78,0,4,0x10);
          local_70 = 4;
          plVar8 = *(longlong **)(param_1 + 0x10);
          if (plVar8 == (longlong *)0x0) goto LAB_148a7f32a;
          iVar6 = (int)plVar8[1];
          goto LAB_148a7f526;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(lVar7 + 0x40) * 8 != lVar13);
    }
    local_b8[0] = 0;
    local_a8 = (longlong *)0x0;
    local_108 = (longlong *)*param_2;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    local_100 = (undefined4)param_2[1];
    local_f8 = (longlong *)*param_3;
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
    local_f0 = (undefined4)param_3[1];
    local_e8 = 0;
    local_e0 = 0;
    FUN_14114e6dc(&local_e8,param_5);
    local_78 = (code *)0x0;
    plVar8 = (longlong *)FUN_14001cc68(0x38,8);
    *plVar8 = (longlong)&PTR_LAB_14b4ebf10;
    plVar8[1] = (longlong)local_108;
    local_68 = plVar8;
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))();
    }
    *(undefined4 *)(plVar8 + 2) = local_100;
    plVar8[3] = (longlong)local_f8;
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
    *(undefined4 *)(plVar8 + 4) = local_f0;
    plVar8[5] = 0;
    *(undefined4 *)(plVar8 + 6) = 0;
    FUN_14114e6dc(plVar8 + 5,&local_e8);
    if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
      local_78 = FUN_143f32f92;
    }
    FUN_14170b918(&local_d8,local_b8);
    plVar8 = plStack_d0;
    local_c8 = 1;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    cVar5 = FUN_144a53f06();
    pcVar3 = local_78;
    plVar11 = DAT_14c8442c0;
    if (cVar5 == '\0') {
      plVar11 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar11 = &local_58;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar3)(uVar10);
      *(undefined4 *)(local_d8 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
      puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar9[1] = 0;
      *puVar9 = TAsyncQueuedWork<void>::vftable;
      puVar9[2] = local_78;
      puVar9[4] = local_68;
      local_68 = (longlong *)0x0;
      *(undefined4 *)(puVar9 + 8) = local_48;
      *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_44;
      *(undefined4 *)(puVar9 + 9) = uStack_40;
      *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_3c;
      puVar9[6] = local_58;
      puVar9[7] = uStack_50;
      if (local_78 != (code *)0x0) {
        local_78 = (code *)0x0;
      }
      puVar9[10] = local_d8;
      puVar9[0xb] = plStack_d0;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      *(undefined1 *)(puVar9 + 0xc) = 0;
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar9,3);
    }
    plVar11 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_78 != (code *)0x0) {
      plVar11 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar11 = &local_58;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_b8[0] != 0) {
      plVar11 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar11 = local_98;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    FUN_1449db362(&local_e8);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  goto LAB_148a7f238;
LAB_148a7f32a:
  *(undefined ***)local_78 = &PTR_LAB_14b4ede20;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  *(longlong *)(local_78 + 0x10) = lVar12;
  *(undefined ***)local_78 = &PTR_FUN_14b4ebe30;
  *(undefined8 *)(local_78 + 0x18) = 0;
  *(undefined8 *)(local_78 + 0x20) = 0;
  *(longlong *)(local_78 + 0x28) = param_1;
  *(undefined4 *)(local_78 + 0x30) = param_4;
  goto LAB_148a7f36c;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar8[1];
    bVar14 = iVar6 == iVar4;
    if (bVar14) {
      *(int *)(plVar8 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar14) break;
LAB_148a7f526:
    if (iVar6 == 0) goto LAB_148a7f32a;
  }
  uVar10 = *(undefined8 *)(param_1 + 8);
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  *(undefined ***)local_78 = &PTR_LAB_14b4ede20;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  *(longlong *)(local_78 + 0x10) = lVar12;
  *(undefined ***)local_78 = &PTR_FUN_14b4ebe30;
  *(undefined8 *)(local_78 + 0x18) = uVar10;
  *(longlong **)(local_78 + 0x20) = plVar8;
  LOCK();
  *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
  UNLOCK();
  *(longlong *)(local_78 + 0x28) = param_1;
  *(undefined4 *)(local_78 + 0x30) = param_4;
  LOCK();
  plVar11 = plVar8 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  LOCK();
  plVar11 = plVar8 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  LOCK();
  plVar11 = plVar8 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_148a7f36c:
  FUN_146146674(lVar7 + 0x70,&local_108,&local_78);
  FUN_1449db362(&local_78);
  *(longlong **)(param_1 + 0x70) = local_108;
  lVar7 = *(longlong *)(param_1 + 0x38);
  local_78 = (code *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,4,0x10);
  local_70 = 4;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
LAB_148a7f4b1:
    *(undefined ***)local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    *(longlong *)(local_78 + 0x10) = lVar12;
    *(undefined ***)local_78 = &PTR_FUN_14b4ebea0;
    *(undefined8 *)(local_78 + 0x18) = 0;
    *(undefined8 *)(local_78 + 0x20) = 0;
    *(longlong *)(local_78 + 0x28) = param_1;
    *(undefined4 *)(local_78 + 0x30) = param_4;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_148a7f4b1;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar14 = iVar6 == iVar4;
      if (bVar14) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar14);
    uVar10 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined ***)local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    *(longlong *)(local_78 + 0x10) = lVar12;
    *(undefined ***)local_78 = &PTR_FUN_14b4ebea0;
    *(undefined8 *)(local_78 + 0x18) = uVar10;
    *(longlong **)(local_78 + 0x20) = plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    *(longlong *)(local_78 + 0x28) = param_1;
    *(undefined4 *)(local_78 + 0x30) = param_4;
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  FUN_1448b6402(lVar7 + 0xb8,&local_108,&local_78);
  FUN_1449db362(&local_78);
  *(longlong **)(param_1 + 0x78) = local_108;
LAB_148a7f238:
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a7f91a FUN_148a7f91a body=82 status=ok
// SIG undefined FUN_148a7f91a(void)

void FUN_148a7f91a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14480f766(*(longlong *)(param_1 + 0x38) + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14480f766(*(longlong *)(param_1 + 0x38) + 0xb8);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148a7f96c FUN_148a7f96c body=513 status=ok
// SIG undefined FUN_148a7f96c(void)

void FUN_148a7f96c(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  wchar_t **local_58;
  code *local_48;
  undefined4 local_40;
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb972c0) {
    FUN_144b3d300(&DAT_14cb972c0);
    if (DAT_14cb972c0 == -1) {
      local_30 = L"WriteProfileFailedHeader";
      local_28 = 0x18;
      FUN_1446e940c(&local_48,&local_30);
      local_30 = L"GbxOnlineLoginManagerTasks";
      local_28 = 0x1a;
      FUN_1446e940c(local_34,&local_30);
      FUN_140208bae(&DAT_14cb972b0,local_34,&local_48,L"Try Again?");
      atexit((_func_5014 *)&LAB_143f2b9f1);
      _Init_thread_footer(&DAT_14cb972c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb972d8) {
    FUN_144b3d300(&DAT_14cb972d8);
    if (DAT_14cb972d8 == -1) {
      local_30 = L"WriteProfileFailedMessage";
      local_28 = 0x19;
      FUN_1446e940c(&local_48,&local_30);
      local_30 = L"GbxOnlineLoginManagerTasks";
      local_28 = 0x1a;
      FUN_1446e940c(local_34,&local_30);
      FUN_140208bae(&DAT_14cb972c8,local_34,&local_48,
                    L"Your settings have failed to save. Would you like to try saving again?");
      atexit((_func_5014 *)&LAB_143f2ba05);
      _Init_thread_footer(&DAT_14cb972d8);
    }
  }
  local_48 = FUN_148a7f104;
  local_40 = 0;
  FUN_148a7e954(&local_30,param_1);
  local_58 = &local_30;
  FUN_148a7f212(param_1,&DAT_14cb972b0,&DAT_14cb972c8,2);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7fb6e FUN_148a7fb6e body=32 status=ok
// SIG undefined FUN_148a7fb6e(void)

undefined8 FUN_148a7fb6e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_ShowFirstTimeCalibration");
  return param_2;
}



// FUNCTION 148a7fb8e FUN_148a7fb8e body=32 status=ok
// SIG undefined FUN_148a7fb8e(void)

undefined8 FUN_148a7fb8e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_ShowEulas");
  return param_2;
}



// FUNCTION 148a7fbae FUN_148a7fbae body=32 status=ok
// SIG undefined FUN_148a7fbae(void)

undefined8 FUN_148a7fbae(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_EnumerateDlc");
  return param_2;
}



// FUNCTION 148a7fbce FUN_148a7fbce body=32 status=ok
// SIG undefined FUN_148a7fbce(void)

undefined8 FUN_148a7fbce(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_Patchwork");
  return param_2;
}



// FUNCTION 148a7fbee FUN_148a7fbee body=723 status=ok
// SIG undefined FUN_148a7fbee(void)

void FUN_148a7fbee(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_140773fe2();
  if (plVar6 != (longlong *)0x0) {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
    lVar8 = (**(code **)(*plVar6 + 0x2d0))(plVar6,*(undefined4 *)(param_1 + 0x30),uVar7);
    if (lVar8 != 0) {
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar10 = (longlong)local_58;
      pvVar3 = (void *)*param_2;
      local_68 = param_1;
      if (lVar10 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar3,lVar10 * 2);
      }
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,4,0x10);
      pvVar3 = local_60;
      local_48 = 4;
      plVar6 = *(longlong **)(param_1 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_148a7fd32:
        *local_50 = &PTR_LAB_14b4ec7e0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_50[2] = lVar9;
        *local_50 = &PTR_FUN_14b4ec770;
        local_50[3] = 0;
        local_50[4] = 0;
        bVar12 = true;
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_148a7fd32;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar12 = iVar5 == iVar4;
          if (bVar12) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar12);
        uVar7 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *local_50 = &PTR_LAB_14b4ec7e0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_50[2] = lVar9;
        *local_50 = &PTR_FUN_14b4ec770;
        local_50[3] = uVar7;
        local_50[4] = plVar6;
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        bVar12 = false;
      }
      local_50[5] = local_68;
      local_50[6] = 0;
      lVar10 = (longlong)local_58;
      *(int *)(local_50 + 7) = local_58;
      if (lVar10 == 0) {
        *(undefined4 *)((longlong)local_50 + 0x3c) = 0;
      }
      else {
        puVar11 = local_50 + 6;
        FUN_1446dd670(puVar11,local_58,0);
        memcpy((void *)*puVar11,pvVar3,lVar10 * 2);
      }
      if (!bVar12) {
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
      FUN_148a5cf47(lVar8,param_2,&local_50);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148a7fde2;
    }
  }
  FUN_148a7df94(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_148a7fde2:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a7fec2 FUN_148a7fec2 body=174 status=ok
// SIG undefined FUN_148a7fec2(void)

void FUN_148a7fec2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    iVar1 = FUN_1415b1ce8(param_1);
    if (0x17 < iVar1) {
      local_48 = FUN_143f2cac2;
      local_40 = 0;
      FUN_148a7ff72(local_38,param_1);
      local_58 = local_38;
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3c0))
                (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),param_2,param_3);
      FUN_1449db362(local_38);
      goto LAB_148a7ff04;
    }
  }
  FUN_148a7df94(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_148a7ff04:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a7ff72 FUN_148a7ff72 body=386 status=ok
// SIG undefined FUN_148a7ff72(void)

longlong * FUN_148a7ff72(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a80083:
    *puVar5 = &PTR_LAB_149e063e0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecb00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a80083;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e063e0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecb00;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a800f4 FUN_148a800f4 body=32 status=ok
// SIG undefined FUN_148a800f4(void)

undefined8 FUN_148a800f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_ShiftFirstBootFlow");
  return param_2;
}



// FUNCTION 148a80114 FUN_148a80114 body=32 status=ok
// SIG undefined FUN_148a80114(void)

undefined8 FUN_148a80114(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_ShiftCanPlayOnline");
  return param_2;
}



// FUNCTION 148a80134 FUN_148a80134 body=101 status=ok
// SIG undefined FUN_148a80134(void)

void FUN_148a80134(undefined4 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146036e40();
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  plVar1 = (longlong *)FUN_146036e40();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x48))(plVar1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  plVar1 = (longlong *)FUN_146036e40();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a8018f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_1,*(code **)(*plVar1 + 8));
    return;
  }
  return;
}



// FUNCTION 148a8019a FUN_148a8019a body=386 status=ok
// SIG undefined FUN_148a8019a(void)

longlong * FUN_148a8019a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a802ab:
    *puVar5 = &PTR_LAB_149e020b0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecbe0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a802ab;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecbe0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a8031c FUN_148a8031c body=135 status=ok
// SIG undefined FUN_148a8031c(void)

void FUN_148a8031c(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a80134(1);
  local_40 = &LAB_148a80526;
  local_38 = 0;
  FUN_148a803a4(local_30,param_1);
  FUN_145d7d4ba(param_1 + 0x20,param_1 + 0x30,param_1 + 0x38,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a803a4 FUN_148a803a4 body=386 status=ok
// SIG undefined FUN_148a803a4(void)

longlong * FUN_148a803a4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a804b5:
    *puVar5 = &PTR_LAB_14b4eccc0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecc50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a804b5;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4eccc0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecc50;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a8052e FUN_148a8052e body=42 status=ok
// SIG undefined FUN_148a8052e(void)

void FUN_148a8052e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_148a80134(1);
  return;
}



// FUNCTION 148a80558 FUN_148a80558 body=36 status=ok
// SIG undefined FUN_148a80558(void)

void FUN_148a80558(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148a8057c FUN_148a8057c body=32 status=ok
// SIG undefined FUN_148a8057c(void)

undefined8 FUN_148a8057c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_AgeVerification");
  return param_2;
}



// FUNCTION 148a8059c FUN_148a8059c body=32 status=ok
// SIG undefined FUN_148a8059c(void)

undefined8 FUN_148a8059c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_InitializeCrossplay");
  return param_2;
}



// FUNCTION 148a805bc FUN_148a805bc body=32 status=ok
// SIG undefined FUN_148a805bc(void)

undefined8 FUN_148a805bc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_CheckLicenseType");
  return param_2;
}



// FUNCTION 148a805dc FUN_148a805dc body=150 status=ok
// SIG undefined FUN_148a805dc(void)

undefined8 *
FUN_148a805dc(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[7] = param_3;
  *param_1 = &PTR_FUN_14b4e80d0;
  param_1[4] = &PTR_FUN_14b4e80f8;
  param_1[8] = 0x100000000;
  *(undefined4 *)(param_1 + 9) = param_4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_148a91d94(param_1 + 10,param_5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 148a80672 FUN_148a80672 body=201 status=ok
// SIG undefined FUN_148a80672(void)

void FUN_148a80672(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b4e80d0;
  param_1[4] = &PTR_FUN_14b4e80f8;
  if (((param_1[0xc] != 0) && (param_1[0xd] != 0)) && (0 < *(int *)(param_1[0xd] + 8))) {
    FUN_1401cb356();
    local_20 = param_1[0xc];
    local_18 = param_1[0xd];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = (longlong *)param_1[0xd];
    param_1[0xc] = 0;
    param_1[0xd] = 0;
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
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1457f3dec(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a80748 FUN_148a80748 body=575 status=ok
// SIG undefined FUN_148a80748(void)

void FUN_148a80748(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar7 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar7 + 1;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x221) == '\x01') {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = 3;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_148a80820:
      *local_38 = &PTR_LAB_14b4edf20;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_38[2] = lVar8;
      *local_38 = &PTR_FUN_14b4ece30;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_148a80820;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar7 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar9);
      uVar4 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_38 = &PTR_LAB_14b4edf20;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_38[2] = lVar8;
      *local_38 = &PTR_FUN_14b4ece30;
      local_38[3] = uVar4;
      local_38[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_38[5] = param_1;
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
    FUN_148a809bc(param_1 + 0x20,param_1 + 0x30,param_1 + 0x38,&local_38);
    FUN_1449db362(&local_38);
  }
  else {
    switch(iVar7) {
    case 0:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    case 3:
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a809bc FUN_148a809bc body=234 status=ok
// SIG undefined FUN_148a809bc(void)

void FUN_148a809bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a91e26(param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a91f18(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a80ab8 FUN_148a80ab8 body=154 status=ok
// SIG undefined FUN_148a80ab8(void)

void FUN_148a80ab8(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [23];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_29 = 0;
  local_50 = &LAB_148a80e90;
  local_48 = 0;
  FUN_148a80d0e(local_40,param_1);
  local_68 = param_1 + 0x48;
  local_60 = local_40;
  FUN_148a80bfa(param_1 + 0x20,param_1 + 0x30,param_1 + 0x38,&local_29);
  FUN_1449db362(local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a80b54 FUN_148a80b54 body=165 status=ok
// SIG undefined FUN_148a80b54(void)

void FUN_148a80b54(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1414354ce();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x48), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_140b7066c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_40 = &LAB_143f2cdb4;
      local_38 = 0;
      FUN_148a80e96(local_30,param_1);
      (**(code **)(*plVar1 + 800))(plVar1,*(undefined4 *)(param_1 + 0x30),local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a80bfa FUN_148a80bfa body=258 status=ok
// SIG undefined FUN_148a80bfa(void)

void FUN_148a80bfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_6;
  plVar3 = (longlong *)FUN_148a92322(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_145d7f8ba(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a80d0e FUN_148a80d0e body=386 status=ok
// SIG undefined FUN_148a80d0e(void)

longlong * FUN_148a80d0e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a80e1f:
    *puVar5 = &PTR_LAB_149e020b0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecec0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a80e1f;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecec0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a80e96 FUN_148a80e96 body=386 status=ok
// SIG undefined FUN_148a80e96(void)

longlong * FUN_148a80e96(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a80fa7:
    *puVar5 = &PTR_LAB_14b4ede90;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecf50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a80fa7;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4ede90;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecf50;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a81018 FUN_148a81018 body=288 status=ok
// SIG undefined FUN_148a81018(void)

void FUN_148a81018(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  short local_40;
  undefined6 uStack_3e;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
  if (lVar3 != 0) {
    lVar3 = FUN_1400f6f32(lVar3);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
      FUN_1415b584a(lVar3,&local_40,*(undefined4 *)(param_1 + 0x30));
      if (-1 < local_40) {
        lVar4 = FUN_140bccd38(lVar3,&local_40);
        if (lVar4 == 0) {
          FUN_1414cf5f6(lVar3,local_2c,&local_40,param_2);
        }
      }
    }
  }
  FUN_1446f470e(&local_48,L"SHIFT",1);
  FUN_145ed8890(param_2,&local_40,local_48);
  if (CONCAT62(uStack_3e,local_40) != 0) {
    FUN_146069750(param_2);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  FUN_146068fdc(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30));
  FUN_148a80748(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a8113a FUN_148a8113a body=386 status=ok
// SIG undefined FUN_148a8113a(void)

longlong * FUN_148a8113a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a8124b:
    *puVar5 = &PTR_LAB_149e02020;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecfc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a8124b;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e02020;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ecfc0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a812bc FUN_148a812bc body=161 status=ok
// SIG undefined FUN_148a812bc(void)

ulonglong FUN_148a812bc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = FUN_1414354ce();
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar6);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == *(int *)(param_1 + 0x30))) {
        lVar4 = FUN_140628492();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30 &&
            (*(longlong *)(lVar2 + 0x30) != 0)))) {
          FUN_148a81018(param_1,lVar2);
          plVar3 = *(longlong **)(param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined8 *)(param_1 + 0x68) = 0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          uVar5 = 0;
        }
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148a81382 FUN_148a81382 body=32 status=ok
// SIG undefined FUN_148a81382(void)

undefined8 FUN_148a81382(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_SplitscreenAdd");
  return param_2;
}



// FUNCTION 148a813a2 FUN_148a813a2 body=123 status=ok
// SIG undefined FUN_148a813a2(void)

undefined8 *
FUN_148a813a2(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[7] = param_3;
  *param_1 = &PTR_FUN_14b4e81b0;
  param_1[4] = &PTR_LAB_14b4e81d8;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_148a92ac4(param_1 + 9,param_4);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 148a8141e FUN_148a8141e body=386 status=ok
// SIG undefined FUN_148a8141e(void)

longlong * FUN_148a8141e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a8152f:
    *puVar5 = &PTR_LAB_149e06450;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ed030;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a8152f;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ed030;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a815c4 FUN_148a815c4 body=32 status=ok
// SIG undefined FUN_148a815c4(void)

undefined8 FUN_148a815c4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_SplitscreenRemove");
  return param_2;
}



// FUNCTION 148a815e4 FUN_148a815e4 body=32 status=ok
// SIG undefined FUN_148a815e4(void)

undefined8 FUN_148a815e4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_CleanupForTitleScreen");
  return param_2;
}



// FUNCTION 148a81604 FUN_148a81604 body=132 status=ok
// SIG undefined FUN_148a81604(void)

void FUN_148a81604(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  
  if (0xffff < param_4) {
    iVar2 = FUN_140def96c(param_2,param_3);
    if (iVar2 == *(int *)(param_1 + 0x30)) {
      uVar3 = FUN_1402d8968(param_2,param_3);
      if (1 < uVar3) {
        if (*(longlong *)(param_1 + 0x68) != 0) {
          FUN_14480f766(param_2 + 0x58);
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
        if (((int)param_5[1] != 0) && (plVar1 = (longlong *)*param_5, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x60))(plVar1,1);
        }
      }
    }
  }
  FUN_1449db362(param_5);
  return;
}



// FUNCTION 148a81688 FUN_148a81688 body=32 status=ok
// SIG undefined FUN_148a81688(void)

undefined8 FUN_148a81688(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_TitleScreenLogin");
  return param_2;
}



// FUNCTION 148a816a8 FUN_148a816a8 body=165 status=ok
// SIG undefined FUN_148a816a8(void)

undefined8 *
FUN_148a816a8(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0;
  FUN_14594ec66(&local_40,param_4);
  local_58 = 1;
  local_50 = &local_40;
  FUN_146006b6e(param_1,param_2,param_3,1);
  *param_1 = &PTR_FUN_14b4e8500;
  param_1[4] = &PTR_LAB_14b4e85a0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a8174e FUN_148a8174e body=60 status=ok
// SIG undefined FUN_148a8174e(void)

void FUN_148a8174e(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x221) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar1 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    return;
  }
  FUN_143f2d342(param_1);
  return;
}



// FUNCTION 148a8178a FUN_148a8178a body=416 status=ok
// SIG undefined FUN_148a8178a(void)

void FUN_148a8178a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x221) == '\x01') {
    local_48 = FUN_148a81aae;
    local_40 = 0;
    FUN_148a8192c(&local_38,param_1);
    FUN_148a809bc(param_1 + 0x20,param_1 + 0x30,(undefined8 *)(param_1 + 0x38),&local_38);
    FUN_1449db362(&local_38);
  }
  else if (param_2 != '\0') {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x110))(local_38,&local_48,*(undefined4 *)(param_1 + 0x30));
        (**(code **)(*local_38 + 0x148))(local_38,&local_58,*(undefined4 *)(param_1 + 0x30));
        FUN_14614ca90(&local_68,&local_58,&local_48);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        local_58 = local_68;
        uStack_54 = uStack_64;
        uStack_50 = uStack_60;
        uStack_4c = uStack_5c;
        plVar3 = *(longlong **)(param_1 + 0x38);
        (**(code **)(*plVar3 + 0x3d8))(plVar3,&local_58);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
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
    }
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a8192c FUN_148a8192c body=386 status=ok
// SIG undefined FUN_148a8192c(void)

longlong * FUN_148a8192c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a81a3d:
    *puVar5 = &PTR_LAB_14b4edf20;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ed7d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a81a3d;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4edf20;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ed7d0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a81aae FUN_148a81aae body=47 status=ok
// SIG undefined FUN_148a81aae(void)

void FUN_148a81aae(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x221) == '\x01') {
    uVar1 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 148a81ade FUN_148a81ade body=228 status=ok
// SIG undefined FUN_148a81ade(void)

void FUN_148a81ade(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x221) == '\x01') {
    uVar1 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  else if (0x18 < *(int *)(param_1 + 0x44)) {
    local_50 = FUN_143f2d4f6;
    local_48 = 0;
    FUN_148a81ce2(local_40,param_1,&local_50,param_2);
    local_58 = local_40;
    FUN_148a81bda(param_1 + 0x20,param_1 + 0x30,param_1 + 0x38,param_1 + 0x5c);
    FUN_1449db362(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a81bda FUN_148a81bda body=245 status=ok
// SIG undefined FUN_148a81bda(void)

void FUN_148a81bda(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a94d43(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148a94e18(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a81ce2 FUN_148a81ce2 body=351 status=ok
// SIG undefined FUN_148a81ce2(void)

undefined8 *
FUN_148a81ce2(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_148a81d43:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_148a81d43;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_148a94878(uVar6,&local_58,&local_68,param_4);
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
  if (!bVar10) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148a81e48 FUN_148a81e48 body=159 status=ok
// SIG undefined FUN_148a81e48(void)

void FUN_148a81e48(longlong param_1)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x44) < 0x19) && (*(char *)(param_1 + 0x68) != '\0')) ||
     (*(char *)(*(longlong *)(param_1 + 0x38) + 0x221) == '\x01')) {
    local_40 = FUN_148a81aae;
    local_38 = 0;
    FUN_148a8192c(local_30,param_1);
    FUN_148a809bc(param_1 + 0x20,param_1 + 0x30,param_1 + 0x38,local_30);
    FUN_1449db362(local_30);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a81f10 FUN_148a81f10 body=32 status=ok
// SIG undefined FUN_148a81f10(void)

undefined8 FUN_148a81f10(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_SplitscreenLogin");
  return param_2;
}



// FUNCTION 148a81f80 FUN_148a81f80 body=32 status=ok
// SIG undefined FUN_148a81f80(void)

undefined8 FUN_148a81f80(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_RetryLoginForPlayer");
  return param_2;
}



// FUNCTION 148a81fa0 FUN_148a81fa0 body=174 status=ok
// SIG undefined FUN_148a81fa0(void)

undefined8 *
FUN_148a81fa0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = param_2;
  *param_1 = &PTR_FUN_14b4e86e0;
  param_1[4] = &PTR_FUN_14b4e8708;
  *(undefined1 *)(param_1 + 8) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14114e6dc(param_1 + 0x13,param_4);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 148a8204e FUN_148a8204e body=503 status=ok
// SIG undefined FUN_148a8204e(void)

void FUN_148a8204e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  code *local_d0;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uStack_78 = 0;
  local_70 = 0;
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1460626ac(*(longlong *)(param_1 + 0x38) + 0x1d0,&local_98);
  plVar1 = (longlong *)(param_1 + 0x48);
  FUN_145be27ca(plVar1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x7c)) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar3 = local_80;
  }
  else {
    lVar2 = param_1 + 0x58;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    uStack_b0 = lVar2;
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar5 = *(int *)(param_1 + 0x70);
    }
    local_88 = (undefined4)uStack_b0;
    uStack_84 = uStack_b0._4_4_;
    uStack_78 = CONCAT44(uStack_9c,uStack_a0);
    local_80 = local_a8;
    uVar3 = local_80;
    uStack_90 = (undefined4)local_b8;
    uStack_8c = local_b8._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar5) || (uStack_b0 != lVar2)) {
      iVar4 = local_80._4_4_;
      local_80 = uVar3;
      do {
        local_bc = *(undefined4 *)(*local_98 + (longlong)iVar4 * 0xc);
        local_d0 = FUN_148a82502;
        local_c8 = 0;
        FUN_148a82380(&local_b8,param_1,&local_d0);
        local_d8 = &local_b8;
        FUN_148a82246(param_1 + 0x20,&local_bc,param_1 + 0x38,param_1 + 0x40);
        FUN_1449db362(&local_b8);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&uStack_90);
        iVar4 = local_80._4_4_;
        uVar3 = local_80;
      } while (local_98 != plVar1 ||
               (CONCAT44(uStack_84,local_88) != lVar2 || local_80._4_4_ != iVar5));
    }
  }
  local_80 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a82246 FUN_148a82246 body=290 status=ok
// SIG undefined FUN_148a82246(void)

void FUN_148a82246(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  local_68 = param_5;
  FUN_148a95228(plVar3,param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a8e5dc(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a82380 FUN_148a82380 body=386 status=ok
// SIG undefined FUN_148a82380(void)

longlong * FUN_148a82380(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a82491:
    *puVar5 = &PTR_LAB_14b4edc60;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ed940;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a82491;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4edc60;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ed940;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a82502 FUN_148a82502 body=64 status=ok
// SIG undefined FUN_148a82502(void)

void FUN_148a82502(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_2 < 0x19) {
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  else {
    FUN_146068fdc(*(undefined8 *)(param_1 + 0x38),param_4);
  }
  FUN_144a7cc9e(param_1 + 0x48,param_4);
  if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x7c)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// FUNCTION 148a82568 FUN_148a82568 body=32 status=ok
// SIG undefined FUN_148a82568(void)

undefined8 FUN_148a82568(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_RetryLoginAll");
  return param_2;
}



// FUNCTION 148a82588 FUN_148a82588 body=386 status=ok
// SIG undefined FUN_148a82588(void)

longlong * FUN_148a82588(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148a82699:
    *puVar5 = &PTR_LAB_149e06450;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eda20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148a82699;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
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
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eda20;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148a8270a FUN_148a8270a body=32 status=ok
// SIG undefined FUN_148a8270a(void)

undefined8 FUN_148a8270a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxLoginTask_InitializeCrossSave");
  return param_2;
}



// FUNCTION 148a8272a FUN_148a8272a body=38 status=ok
// SIG undefined FUN_148a8272a(void)

undefined8 FUN_148a8272a(undefined8 param_1,int param_2)

{
  FUN_1461b9528();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a8277c FUN_148a8277c body=38 status=ok
// SIG undefined FUN_148a8277c(void)

undefined8 FUN_148a8277c(undefined8 param_1,int param_2)

{
  FUN_145a9b606();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a827a2 FUN_148a827a2 body=38 status=ok
// SIG undefined FUN_148a827a2(void)

undefined8 FUN_148a827a2(undefined8 param_1,int param_2)

{
  FUN_145c38e38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a827c8 FUN_148a827c8 body=45 status=ok
// SIG undefined FUN_148a827c8(void)

longlong FUN_148a827c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145c38e38(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a827f6 FUN_148a827f6 body=38 status=ok
// SIG undefined FUN_148a827f6(void)

undefined8 FUN_148a827f6(undefined8 param_1,int param_2)

{
  FUN_14600f38c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a8281c FUN_148a8281c body=45 status=ok
// SIG undefined FUN_148a8281c(void)

longlong FUN_148a8281c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_14600f38c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a8284a FUN_148a8284a body=38 status=ok
// SIG undefined FUN_148a8284a(void)

undefined8 FUN_148a8284a(undefined8 param_1,int param_2)

{
  FUN_145e3ea7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82870 FUN_148a82870 body=45 status=ok
// SIG undefined FUN_148a82870(void)

longlong FUN_148a82870(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145e3ea7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a8289e FUN_148a8289e body=38 status=ok
// SIG undefined FUN_148a8289e(void)

undefined8 FUN_148a8289e(undefined8 param_1,int param_2)

{
  FUN_1415aa4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a828c4 FUN_148a828c4 body=45 status=ok
// SIG undefined FUN_148a828c4(void)

longlong FUN_148a828c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1415aa4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a828f2 FUN_148a828f2 body=71 status=ok
// SIG undefined FUN_148a828f2(void)

undefined8 * FUN_148a828f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7c50;
  param_1[4] = &PTR_LAB_14b4e7c78;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82944 FUN_148a82944 body=71 status=ok
// SIG undefined FUN_148a82944(void)

undefined8 * FUN_148a82944(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7cd0;
  param_1[4] = &PTR_LAB_14b4e7cf8;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82996 FUN_148a82996 body=71 status=ok
// SIG undefined FUN_148a82996(void)

undefined8 * FUN_148a82996(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7d30;
  param_1[4] = &PTR_LAB_14b4e7d58;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a829e8 FUN_148a829e8 body=71 status=ok
// SIG undefined FUN_148a829e8(void)

undefined8 * FUN_148a829e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7da0;
  param_1[4] = &PTR_LAB_14b4e7dc8;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82a3a FUN_148a82a3a body=71 status=ok
// SIG undefined FUN_148a82a3a(void)

undefined8 * FUN_148a82a3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7e70;
  param_1[4] = &PTR_LAB_14b4e7e98;
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82a8c FUN_148a82a8c body=71 status=ok
// SIG undefined FUN_148a82a8c(void)

undefined8 * FUN_148a82a8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7ef0;
  param_1[4] = &PTR_LAB_14b4e7f18;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82ade FUN_148a82ade body=71 status=ok
// SIG undefined FUN_148a82ade(void)

undefined8 * FUN_148a82ade(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7f70;
  param_1[4] = &PTR_LAB_14b4e7f98;
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82b30 FUN_148a82b30 body=71 status=ok
// SIG undefined FUN_148a82b30(void)

undefined8 * FUN_148a82b30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e7fe0;
  param_1[4] = &PTR_LAB_14b4e8008;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82b82 FUN_148a82b82 body=71 status=ok
// SIG undefined FUN_148a82b82(void)

undefined8 * FUN_148a82b82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e8060;
  param_1[4] = &PTR_LAB_14b4e8088;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82bd4 FUN_148a82bd4 body=38 status=ok
// SIG undefined FUN_148a82bd4(void)

undefined8 FUN_148a82bd4(undefined8 param_1,int param_2)

{
  FUN_148a80672();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82bfa FUN_148a82bfa body=45 status=ok
// SIG undefined FUN_148a82bfa(void)

longlong FUN_148a82bfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_148a80672(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82c28 FUN_148a82c28 body=71 status=ok
// SIG undefined FUN_148a82c28(void)

undefined8 * FUN_148a82c28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e81b0;
  param_1[4] = &PTR_LAB_14b4e81d8;
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82c7a FUN_148a82c7a body=71 status=ok
// SIG undefined FUN_148a82c7a(void)

undefined8 * FUN_148a82c7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e82b0;
  param_1[4] = &PTR_LAB_14b4e82d8;
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82cda FUN_148a82cda body=71 status=ok
// SIG undefined FUN_148a82cda(void)

undefined8 * FUN_148a82cda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4e8330;
  param_1[4] = &PTR_LAB_14b4e83d0;
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82d2c FUN_148a82d2c body=71 status=ok
// SIG undefined FUN_148a82d2c(void)

undefined8 * FUN_148a82d2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4e8330;
  param_1[4] = &PTR_LAB_14b4e83d0;
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82d7e FUN_148a82d7e body=71 status=ok
// SIG undefined FUN_148a82d7e(void)

undefined8 * FUN_148a82d7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4e8330;
  param_1[4] = &PTR_LAB_14b4e83d0;
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82dd0 FUN_148a82dd0 body=38 status=ok
// SIG undefined FUN_148a82dd0(void)

undefined8 FUN_148a82dd0(undefined8 param_1,int param_2)

{
  FUN_148a8dfd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a82df6 FUN_148a82df6 body=45 status=ok
// SIG undefined FUN_148a82df6(void)

longlong FUN_148a82df6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_148a8dfd2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


