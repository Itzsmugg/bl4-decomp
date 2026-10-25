// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e13a68 FUN_148e13a68 body=134 status=ok
// SIG undefined FUN_148e13a68(void)

void FUN_148e13a68(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa6ea50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a3580;
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
                    /* WARNING: Could not recover jumptable at 0x000148e13adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e13b04 FUN_148e13b04 body=81 status=ok
// SIG undefined FUN_148e13b04(void)

undefined8 FUN_148e13b04(longlong param_1)

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



// FUNCTION 148e13b5c FUN_148e13b5c body=91 status=ok
// SIG undefined FUN_148e13b5c(void)

bool FUN_148e13b5c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e13b8c;
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
LAB_148e13b8c:
  return lVar6 == param_2;
}



// FUNCTION 148e13bd4 FUN_148e13bd4 body=118 status=ok
// SIG undefined FUN_148e13bd4(void)

void FUN_148e13bd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a35f0;
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



// FUNCTION 148e13c4a FUN_148e13c4a body=118 status=ok
// SIG undefined FUN_148e13c4a(void)

void FUN_148e13c4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a35f0;
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



// FUNCTION 148e13cc0 FUN_148e13cc0 body=156 status=ok
// SIG undefined FUN_148e13cc0(void)

void FUN_148e13cc0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a35f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e13d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e13d5c FUN_148e13d5c body=104 status=ok
// SIG undefined FUN_148e13d5c(void)

void FUN_148e13d5c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148e13da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e13dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e13dc4 FUN_148e13dc4 body=31 status=ok
// SIG undefined FUN_148e13dc4(void)

undefined8 FUN_148e13dc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e13dfc FUN_148e13dfc body=101 status=ok
// SIG undefined FUN_148e13dfc(void)

void FUN_148e13dfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a3660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e13e62 FUN_148e13e62 body=101 status=ok
// SIG undefined FUN_148e13e62(void)

void FUN_148e13e62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a3660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e13ec8 FUN_148e13ec8 body=134 status=ok
// SIG undefined FUN_148e13ec8(void)

void FUN_148e13ec8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90a240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a3660;
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
                    /* WARNING: Could not recover jumptable at 0x000148e13f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e13f60 FUN_148e13f60 body=25 status=ok
// SIG undefined FUN_148e13f60(void)

undefined8 FUN_148e13f60(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148e13f7a FUN_148e13f7a body=180 status=ok
// SIG undefined FUN_148e13f7a(void)

longlong * FUN_148e13f7a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_148e14011;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148e14030(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_148e14011:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 148e14030 FUN_148e14030 body=281 status=ok
// SIG undefined FUN_148e14030(void)

undefined4 * FUN_148e14030(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148e1414a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_148e14230(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148e1434e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1414a FUN_148e1414a body=230 status=ok
// SIG undefined FUN_148e1414a(void)

int * FUN_148e1414a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148e14230 FUN_148e14230 body=148 status=ok
// SIG undefined FUN_148e14230(void)

void FUN_148e14230(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_148e142c4((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_148e1429a;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_148e1429a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 148e142c4 FUN_148e142c4 body=138 status=ok
// SIG undefined FUN_148e142c4(void)

void FUN_148e142c4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148e1434e FUN_148e1434e body=473 status=ok
// SIG undefined FUN_148e1434e(void)

void FUN_148e1434e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148e14528 FUN_148e14528 body=122 status=ok
// SIG undefined FUN_148e14528(void)

void FUN_148e14528(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 148e145a2 FUN_148e145a2 body=175 status=ok
// SIG undefined FUN_148e145a2(void)

void FUN_148e145a2(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148e1462b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148e1462b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148e14651 FUN_148e14651 body=49 status=ok
// SIG undefined FUN_148e14651(void)

void FUN_148e14651(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148e14682 FUN_148e14682 body=164 status=ok
// SIG undefined FUN_148e14682(void)

void FUN_148e14682(longlong *param_1,undefined8 param_2)

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
        goto LAB_148e14702;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148e14702:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148e14726 FUN_148e14726 body=201 status=ok
// SIG undefined FUN_148e14726(void)

void FUN_148e14726(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_148e15246(param_3);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if (param_3 != 0) {
    lVar1 = FUN_1402095ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = param_3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_3);
      }
      FUN_148e1f8c8(param_1 + 0x450,&local_28);
      FUN_148e15292(param_3 + 0x1eb8,&local_28,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e14804 FUN_148e14804 body=909 status=ok
// SIG undefined FUN_148e14804(void)

void FUN_148e14804(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_148e15246(param_3);
  if ((lVar3 != 0) && ((longlong)*(int *)(param_1 + 0x428) != 0)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x420) + lVar6) == lVar3) {
        cVar2 = FUN_148ccfd1e(lVar3);
        if (cVar2 == '\0') {
          cVar2 = FUN_148ccfd4c(lVar3);
          if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
          }
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          iVar1 = *(int *)(param_1 + 0x448);
          *(uint *)(param_1 + 0x448) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x44c) < iVar1 + 1U) {
            FUN_1456d180a((longlong *)(param_1 + 0x440),iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x440) + (longlong)iVar1 * 8) = lVar3;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          lVar3 = FUN_1447210f0(param_1);
          if (lVar3 == 0) break;
          if (*(longlong *)(lVar3 + 0x1f0) == 0) {
            puVar5 = (undefined8 *)(lVar3 + 0x458);
          }
          else {
            puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
          }
          uVar7 = *puVar5;
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_1446efa72(&local_88,0,3,0x10);
          puVar5 = local_88;
          local_80 = 3;
          *local_88 = &PTR_LAB_14a1c8830;
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
          local_88[2] = lVar6;
          *local_88 = &PTR_FUN_14b9a55c0;
          local_88[3] = 0;
          FUN_14485c47a(local_88 + 3,param_1);
          pcVar4 = FUN_148e15908;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          iVar1 = *(int *)(param_1 + 0x438);
          *(uint *)(param_1 + 0x438) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x43c) < iVar1 + 1U) {
            FUN_1456d180a((longlong *)(param_1 + 0x430),iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x430) + (longlong)iVar1 * 8) = lVar3;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          lVar3 = FUN_1447210f0(param_1);
          if (lVar3 == 0) break;
          if (*(longlong *)(lVar3 + 0x1f0) == 0) {
            puVar5 = (undefined8 *)(lVar3 + 0x458);
          }
          else {
            puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
          }
          uVar7 = *puVar5;
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_1446efa72(&local_88,0,3,0x10);
          puVar5 = local_88;
          local_80 = 3;
          *local_88 = &PTR_LAB_14a1c8830;
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
          local_88[2] = lVar6;
          *local_88 = &PTR_FUN_14b9a55c0;
          local_88[3] = 0;
          FUN_14485c47a(local_88 + 3,param_1);
          pcVar4 = FUN_148e15602;
        }
        puVar5[4] = pcVar4;
        local_78 = 0;
        local_70 = 0;
        FUN_14487d8d8(&local_78,&local_88);
        local_38 = 1;
        FUN_14016fdb0(uVar7,local_90,&local_78);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
        FUN_1449db362(&local_88);
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(param_1 + 0x428) * 8 != lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e14baa FUN_148e14baa body=86 status=ok
// SIG undefined FUN_148e14baa(void)

undefined8 FUN_148e14baa(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x428);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*plVar3 + 0x5d0))(), lVar4 == param_2)) {
        return 1;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 148e14c00 FUN_148e14c00 body=11 status=ok
// SIG undefined FUN_148e14c00(void)

bool FUN_148e14c00(longlong param_1)

{
  return *(int *)(param_1 + 0x428) != 0;
}



// FUNCTION 148e14c0c FUN_148e14c0c body=132 status=ok
// SIG undefined FUN_148e14c0c(void)

ulonglong FUN_148e14c0c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  longlong lVar8;
  undefined7 uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x428);
    uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x420);
      lVar8 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar8);
        if ((plVar3 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*plVar3 + 0x5d0))(), lVar5 == param_2)) {
          cVar4 = FUN_148e14c90(param_1,*(undefined8 *)(param_2 + 0x3d0));
          uVar6 = CONCAT71(uVar7,cVar4 == *(char *)(param_1 + 0x460));
          break;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148e14c90 FUN_148e14c90 body=335 status=ok
// SIG undefined FUN_148e14c90(void)

undefined8 FUN_148e14c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((*(longlong *)(param_1 + 0x3f0) == 0) || (*(longlong *)(param_1 + 0x3f8) == 0)) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      pdVar7 = (double *)&DAT_14c8464e0;
      dVar8 = DAT_14c8464f0;
    }
    else {
      pdVar7 = (double *)(lVar1 + 0x260);
      dVar8 = *(double *)(lVar1 + 0x270);
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x1c8);
    if (lVar2 == 0) {
      pdVar6 = (double *)&DAT_14c8464e0;
      dVar10 = DAT_14c8464f0;
    }
    else {
      pdVar6 = (double *)(lVar2 + 0x260);
      dVar10 = *(double *)(lVar2 + 0x270);
    }
    if (lVar1 == 0) {
      pdVar5 = (double *)&DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
    else {
      pdVar5 = (double *)(lVar1 + 0x260);
      dVar9 = *(double *)(lVar1 + 0x270);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x1c8);
    if (lVar1 == 0) {
      pdVar3 = (double *)&DAT_14c8464e0;
      dVar11 = DAT_14c8464f0;
    }
    else {
      pdVar3 = (double *)(lVar1 + 0x260);
      dVar11 = *(double *)(lVar1 + 0x270);
    }
    uVar4 = CONCAT71((int7)((ulonglong)pdVar3 >> 8),
                     (float)((dVar9 - dVar11) * (dVar9 - dVar11) +
                            (*pdVar5 - *pdVar3) * (*pdVar5 - *pdVar3) +
                            (pdVar5[1] - pdVar3[1]) * (pdVar5[1] - pdVar3[1])) <=
                     (float)((dVar8 - dVar10) * (dVar8 - dVar10) +
                            (*pdVar7 - *pdVar6) * (*pdVar7 - *pdVar6) +
                            (pdVar7[1] - pdVar6[1]) * (pdVar7[1] - pdVar6[1])));
  }
  return uVar4;
}



// FUNCTION 148e14de0 FUN_148e14de0 body=86 status=ok
// SIG undefined FUN_148e14de0(void)

undefined8 FUN_148e14de0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x428);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*plVar3 + 0x5d0))(), lVar4 == param_2)) {
        return 1;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 148e14e36 thunk_FUN_148e14e3c body=5 status=ok
// SIG undefined thunk_FUN_148e14e3c(void)

void thunk_FUN_148e14e3c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  undefined1 auStack_98 [46];
  byte bStack_6a;
  byte bStack_69;
  int iStack_68;
  int iStack_64;
  longlong lStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x428);
    lVar10 = (longlong)iVar5;
    if (lVar10 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x420);
      lStack_60 = param_1;
      lVar6 = (**(code **)(*(longlong *)*puVar3 + 0x5d0))();
      bStack_6a = lVar6 == param_2;
      iVar15 = 0;
      iVar13 = 0;
      do {
        lVar6 = (longlong)iVar13;
        iVar11 = iVar13 + 1;
        if (iVar13 + 1 < iVar5) {
          iVar11 = iVar5;
        }
        bVar14 = (bool)(bStack_6a & 1);
        lVar7 = lVar6;
        bVar4 = bStack_6a ^ 1;
        bStack_69 = bStack_6a;
        iStack_68 = iVar15;
        iStack_64 = iVar13;
        do {
          bStack_6a = bVar4;
          lVar7 = lVar7 + 1;
          iVar15 = iVar11;
          if (lVar10 <= lVar7) break;
          lVar8 = (**(code **)(*(longlong *)puVar3[lVar7] + 0x5d0))();
          iVar13 = iVar13 + 1;
          iVar15 = iVar13;
          bVar4 = bStack_6a;
        } while (bVar14 == (lVar8 == param_2));
        iVar13 = iVar15;
        iVar15 = iStack_68;
        if ((bStack_69 & 1) == 0) {
          iVar11 = iVar13 - iStack_64;
          if (iStack_68 != iStack_64) {
            memmove(puVar3 + iStack_68,puVar3 + lVar6,(longlong)iVar11 << 3);
          }
          iVar15 = iVar15 + iVar11;
        }
      } while (lVar7 < lVar10);
      *(int *)(lStack_60 + 0x428) = iVar15;
      param_1 = lStack_60;
    }
    lVar10 = FUN_148dc20a4(param_2);
    if (lVar10 == param_1) {
      FUN_148dc20ac(param_2,0);
    }
    if (*(int *)(param_1 + 0x428) == 0) {
      uVar9 = FUN_1447210f0(param_1);
      FUN_1410d53f0(&lStack_58,uVar9);
      if (plStack_50 != (longlong *)0x0) {
        iVar5 = (int)plStack_50[1];
        do {
          if (iVar5 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar15 = (int)plStack_50[1];
          bVar14 = iVar5 == iVar15;
          if (bVar14) {
            *(int *)(plStack_50 + 1) = iVar5 + 1;
            iVar15 = iVar5;
          }
          iVar5 = iVar15;
          UNLOCK();
          plVar12 = plStack_50;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)plStack_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_50 + 0x10))();
        }
        if (plVar12 != (longlong *)0x0) {
          if (lStack_58 != 0) {
            FUN_1442300bc(lStack_58,param_1);
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
        }
      }
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e14e3c FUN_148e14e3c body=476 status=ok
// SIG undefined FUN_148e14e3c(void)

void FUN_148e14e3c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  undefined1 auStack_98 [46];
  byte local_6a;
  byte local_69;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x428);
    lVar10 = (longlong)iVar5;
    if (lVar10 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x420);
      local_60 = param_1;
      lVar6 = (**(code **)(*(longlong *)*puVar3 + 0x5d0))();
      local_6a = lVar6 == param_2;
      iVar15 = 0;
      iVar13 = 0;
      do {
        lVar6 = (longlong)iVar13;
        iVar11 = iVar13 + 1;
        if (iVar13 + 1 < iVar5) {
          iVar11 = iVar5;
        }
        bVar14 = (bool)(local_6a & 1);
        lVar7 = lVar6;
        bVar4 = local_6a ^ 1;
        local_69 = local_6a;
        local_68 = iVar15;
        local_64 = iVar13;
        do {
          local_6a = bVar4;
          lVar7 = lVar7 + 1;
          iVar15 = iVar11;
          if (lVar10 <= lVar7) break;
          lVar8 = (**(code **)(*(longlong *)puVar3[lVar7] + 0x5d0))();
          iVar13 = iVar13 + 1;
          iVar15 = iVar13;
          bVar4 = local_6a;
        } while (bVar14 == (lVar8 == param_2));
        iVar13 = iVar15;
        iVar15 = local_68;
        if ((local_69 & 1) == 0) {
          iVar11 = iVar13 - local_64;
          if (local_68 != local_64) {
            memmove(puVar3 + local_68,puVar3 + lVar6,(longlong)iVar11 << 3);
          }
          iVar15 = iVar15 + iVar11;
        }
      } while (lVar7 < lVar10);
      *(int *)(local_60 + 0x428) = iVar15;
      param_1 = local_60;
    }
    lVar10 = FUN_148dc20a4(param_2);
    if (lVar10 == param_1) {
      FUN_148dc20ac(param_2,0);
    }
    if (*(int *)(param_1 + 0x428) == 0) {
      uVar9 = FUN_1447210f0(param_1);
      FUN_1410d53f0(&local_58,uVar9);
      if (local_50 != (longlong *)0x0) {
        iVar5 = (int)local_50[1];
        do {
          if (iVar5 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar15 = (int)local_50[1];
          bVar14 = iVar5 == iVar15;
          if (bVar14) {
            *(int *)(local_50 + 1) = iVar5 + 1;
            iVar15 = iVar5;
          }
          iVar5 = iVar15;
          UNLOCK();
          plVar12 = local_50;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        if (plVar12 != (longlong *)0x0) {
          if (local_58 != 0) {
            FUN_1442300bc(local_58,param_1);
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
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1501a FUN_148e1501a body=463 status=ok
// SIG undefined FUN_148e1501a(void)

void FUN_148e1501a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    local_40 = 0;
    local_38 = 0x6000;
    local_30 = 0;
    lVar1 = *(longlong *)(param_1 + 0x3f0 + (ulonglong)*(byte *)(param_1 + 0x460) * 8);
    uVar3 = (ulonglong)(~(uint)*(byte *)(param_1 + 0x460) & 1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x2640) != 0 || *(int *)(lVar1 + 0x2648) != 0x6000) {
        local_40 = *(longlong *)(lVar1 + 0x2640);
        local_38 = *(int *)(lVar1 + 0x2648);
      }
    }
    local_58 = 0;
    local_50 = 0x6000;
    local_48 = 0;
    lVar1 = *(longlong *)(param_1 + 0x3f0 + uVar3 * 8);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x2640) != 0 || *(int *)(lVar1 + 0x2648) != 0x6000) {
        local_58 = *(longlong *)(lVar1 + 0x2640);
        local_50 = *(int *)(lVar1 + 0x2648);
      }
    }
    FUN_143dbe266(lVar2,&local_58,&local_40,1);
    local_40 = 0;
    local_38 = 0x6000;
    local_30 = 0;
    lVar1 = *(longlong *)(param_1 + 0x3f0 + (ulonglong)*(byte *)(param_1 + 0x460) * 8);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x2640) != 0 || *(int *)(lVar1 + 0x2648) != 0x6000) {
        local_40 = *(longlong *)(lVar1 + 0x2640);
        local_38 = *(int *)(lVar1 + 0x2648);
      }
    }
    local_58 = 0;
    local_50 = 0x6000;
    local_48 = 0;
    lVar1 = *(longlong *)(param_1 + 0x3f0 + uVar3 * 8);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x2640) != 0 || *(int *)(lVar1 + 0x2648) != 0x6000) {
        local_58 = *(longlong *)(lVar1 + 0x2640);
        local_50 = *(int *)(lVar1 + 0x2648);
      }
    }
    FUN_143dbe266(lVar2,&local_58,&local_40,0);
    FUN_148cacd0e(param_1 + 0x3c8,*(undefined1 *)(param_1 + 0x460));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e151fc FUN_148e151fc body=73 status=ok
// SIG undefined FUN_148e151fc(void)

longlong FUN_148e151fc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_2 + 0x5d8))(param_2), lVar1 != 0)
     ) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e15246 FUN_148e15246 body=76 status=ok
// SIG undefined FUN_148e15246(void)

undefined8 FUN_148e15246(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x5d8))(), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0xf48);
    }
  }
  return 0;
}



// FUNCTION 148e15292 FUN_148e15292 body=244 status=ok
// SIG undefined FUN_148e15292(void)

undefined8 FUN_148e15292(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b96eb30;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9a5550;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148e15388;
  FUN_148d2dad2(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e15388 FUN_148e15388 body=332 status=ok
// SIG undefined FUN_148e15388(void)

void FUN_148e15388(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140457ffc(param_2 + 0x1eb8,param_1);
  local_38 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_48 = &local_38;
  FUN_148e1fca2(param_1 + 0x8a,&local_48);
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_50 = 0;
  FUN_140d0a558(param_1);
  if ((longlong)(int)uStack_40 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)((longlong)local_48 + lVar1) == param_2) {
        if (param_3 != 0) {
          if ((longlong)(int)param_1[0x85] == 0) goto LAB_148e15493;
          lVar1 = 0;
          goto LAB_148e15484;
        }
        break;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)uStack_40 * 8 != lVar1);
  }
  goto LAB_148e15438;
  while (lVar1 = lVar1 + 8, (longlong)(int)param_1[0x85] * 8 != lVar1) {
LAB_148e15484:
    if (*(longlong *)(param_1[0x84] + lVar1) == param_3) goto LAB_148e15438;
  }
LAB_148e15493:
  if ((longlong)(int)param_1[0x87] != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1[0x86] + lVar1) == param_3) goto LAB_148e15438;
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)param_1[0x87] * 8 != lVar1);
  }
  (**(code **)(*param_1 + 0x6a8))(param_1,param_3);
LAB_148e15438:
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e154d6 FUN_148e154d6 body=299 status=ok
// SIG undefined FUN_148e154d6(void)

longlong FUN_148e154d6(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = param_1;
    if ((longlong)*(int *)(param_1 + 0x438) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x430);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar4) == param_2) {
          return 0;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x438) * 8 != lVar4);
    }
    if ((longlong)*(int *)(param_1 + 0x448) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x440);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar4) == param_2) {
          return 0;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x448) * 8 != lVar4);
    }
    lVar3 = FUN_148e151fc(lVar3,param_2);
    if (((lVar3 != 0) && (lVar4 = FUN_148dc20a4(lVar3), lVar4 == 0)) &&
       ((cVar2 = FUN_148e14c90(param_1,param_2), cVar2 == '\0' ||
        (*(char *)(param_1 + 1000) == '\x01')))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x428);
      *(uint *)(param_1 + 0x428) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x42c) < iVar1 + 1U) {
        FUN_1456d180a((longlong *)(param_1 + 0x420),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x420) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_148dc20ac(lVar3,param_1);
      if (*(int *)(param_1 + 0x428) != 1) {
        return lVar3;
      }
      *(char *)(param_1 + 0x460) = cVar2;
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 148e15602 FUN_148e15602 body=773 status=ok
// SIG undefined FUN_148e15602(void)

void FUN_148e15602(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < (longlong)(int)param_1[0x87]) {
    uVar8 = (longlong)(int)param_1[0x87];
LAB_148e15655:
    uVar9 = uVar8 - 1;
    lVar5 = *(longlong *)(param_1[0x86] + -8 + uVar8 * 8);
    if (lVar5 != 0) {
      if ((longlong)(int)param_1[0x85] != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(param_1[0x84] + lVar7) == lVar5) {
            cVar3 = FUN_148ccfd1e(lVar5);
            if (cVar3 != '\0') goto LAB_148e156f6;
            local_a8 = 0;
            uStack_a0 = 0;
            local_c0 = 0;
            FUN_140d0a558(param_1);
            lVar7 = (**(code **)(*(longlong *)(lVar5 + 0x3c20) + 0x18))(lVar5 + 0x3c20);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) != 0)) {
              if ((longlong)(int)uStack_a0 == 0) goto LAB_148e1574a;
              lVar5 = 0;
              goto LAB_148e156d9;
            }
            if ((longlong)(int)uStack_a0 == 0) goto LAB_148e1574a;
            lVar7 = 0;
            goto LAB_148e1577c;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)param_1[0x85] * 8 != lVar7);
      }
      goto LAB_148e15694;
    }
    goto LAB_148e156f6;
  }
LAB_148e158b1:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar7 = lVar7 + 8, (longlong)(int)uStack_a0 * 8 != lVar7) {
LAB_148e1577c:
    if (*(longlong *)(local_a8 + lVar7) == lVar5) goto LAB_148e1575e;
  }
  goto LAB_148e1574a;
  while (lVar5 = lVar5 + 8, (longlong)(int)uStack_a0 << 3 != lVar5) {
LAB_148e156d9:
    if (*(longlong *)(local_a8 + lVar5) == *(longlong *)(lVar7 + 0x20)) goto LAB_148e1575e;
  }
LAB_148e1574a:
  (**(code **)(*param_1 + 0x6b0))(param_1);
LAB_148e1575e:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_148e15694:
  uVar4 = *(uint *)(param_1 + 0x87);
  if (uVar8 != uVar4) {
    memmove((void *)(param_1[0x86] + uVar9 * 8),(void *)(param_1[0x86] + uVar9 * 8 + 8),
            (longlong)(int)(uVar4 - (int)uVar8) << 3);
    uVar4 = *(uint *)(param_1 + 0x87);
  }
  *(uint *)(param_1 + 0x87) = uVar4 - 1;
  FUN_145712f7e(param_1 + 0x86);
LAB_148e156f6:
  bVar2 = (longlong)uVar8 < 2;
  uVar8 = uVar9;
  if (bVar2) goto LAB_148e157a8;
  goto LAB_148e15655;
LAB_148e157a8:
  if ((0 < (int)param_1[0x87]) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar6;
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar6 = local_b8;
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a1c8830;
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
    local_b8[2] = lVar7;
    *local_b8 = &PTR_FUN_14b9a55c0;
    local_b8[3] = 0;
    FUN_14485c47a(local_b8 + 3,param_1);
    puVar6[4] = FUN_148e15602;
    local_a8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    FUN_14016fdb0(uVar1,local_c8,&local_a8);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_b8);
  }
  goto LAB_148e158b1;
}



// FUNCTION 148e15908 FUN_148e15908 body=691 status=ok
// SIG undefined FUN_148e15908(void)

void FUN_148e15908(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < (longlong)(int)param_1[0x89]) {
    uVar8 = (longlong)(int)param_1[0x89];
LAB_148e1595b:
    uVar9 = uVar8 - 1;
    lVar5 = *(longlong *)(param_1[0x88] + -8 + uVar8 * 8);
    if (lVar5 != 0) {
      if ((longlong)(int)param_1[0x85] != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(param_1[0x84] + lVar7) == lVar5) {
            cVar3 = FUN_148ccfd4c(lVar5);
            if (cVar3 != '\0') goto LAB_148e159e7;
            local_a8 = 0;
            uStack_a0 = 0;
            local_c0 = 0;
            FUN_140d0a558(param_1,&local_a8,&local_c0);
            if ((longlong)(int)uStack_a0 == 0) goto LAB_148e15a19;
            lVar7 = 0;
            goto LAB_148e15a4b;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)param_1[0x85] * 8 != lVar7);
      }
      goto LAB_148e15996;
    }
    goto LAB_148e159e7;
  }
LAB_148e15b65:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar7 = lVar7 + 8, (longlong)(int)uStack_a0 * 8 != lVar7) {
LAB_148e15a4b:
    if (*(longlong *)(local_a8 + lVar7) == lVar5) goto LAB_148e15a2d;
  }
LAB_148e15a19:
  (**(code **)(*param_1 + 0x6b0))(param_1);
LAB_148e15a2d:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_148e15996:
  uVar4 = *(uint *)(param_1 + 0x89);
  if (uVar8 != uVar4) {
    memmove((void *)(param_1[0x88] + uVar9 * 8),(void *)(param_1[0x88] + uVar9 * 8 + 8),
            (longlong)(int)(uVar4 - (int)uVar8) << 3);
    uVar4 = *(uint *)(param_1 + 0x89);
  }
  *(uint *)(param_1 + 0x89) = uVar4 - 1;
  FUN_145712f7e(param_1 + 0x88);
LAB_148e159e7:
  bVar2 = (longlong)uVar8 < 2;
  uVar8 = uVar9;
  if (bVar2) goto LAB_148e15a5c;
  goto LAB_148e1595b;
LAB_148e15a5c:
  if ((0 < (int)param_1[0x89]) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar6;
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar6 = local_b8;
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a1c8830;
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
    local_b8[2] = lVar7;
    *local_b8 = &PTR_FUN_14b9a55c0;
    local_b8[3] = 0;
    FUN_14485c47a(local_b8 + 3,param_1);
    puVar6[4] = FUN_148e15908;
    local_a8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    FUN_14016fdb0(uVar1,local_c8,&local_a8);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_b8);
  }
  goto LAB_148e15b65;
}



// FUNCTION 148e15bbc FUN_148e15bbc body=963 status=ok
// SIG undefined FUN_148e15bbc(void)

void FUN_148e15bbc(longlong param_1,longlong param_2)

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
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_148e14c90();
  if (cVar4 == *(char *)(param_1 + 0x460)) {
    local_88 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    local_70 = &local_88;
    FUN_148e12720(param_1 + 0x420);
    lVar7 = FUN_140cf8aa6(param_2);
    if ((lVar7 != 0) && (lVar8 = FUN_148dc20a4(lVar7), lVar8 == param_1)) {
      FUN_148dc20ac(lVar7,0);
    }
    if (*(int *)(param_1 + 0x428) != 0) goto LAB_148e15e03;
    uVar6 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_70,uVar6);
    plVar12 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar12 == (longlong *)0x0) goto LAB_148e15e03;
    iVar5 = (int)plVar12[1];
    do {
      if (iVar5 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar12[1];
      bVar14 = iVar5 == iVar3;
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_64,local_68) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
    }
    if (plVar12 == (longlong *)0x0) goto LAB_148e15e03;
    if (local_70 != (longlong *)0x0) {
      FUN_1442300bc(local_70,param_1);
    }
  }
  else {
    uVar6 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_70,uVar6);
    plVar12 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar12 == (longlong *)0x0) goto LAB_148e15e03;
    iVar5 = (int)plVar12[1];
    do {
      if (iVar5 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar12[1];
      bVar14 = iVar5 == iVar3;
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_64,local_68) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
    }
    plVar10 = local_70;
    if (plVar12 == (longlong *)0x0) goto LAB_148e15e03;
    if (local_70 != (longlong *)0x0) {
      FUN_148e097f2(local_70,param_1);
      local_70 = (longlong *)0x0;
      iVar5 = *(int *)(param_1 + 0x428);
      uVar6 = *(undefined8 *)(param_1 + 0x420);
      local_68 = iVar5;
      if (iVar5 == 0) {
        uStack_64 = 0;
      }
      else {
        FUN_148e20048(&local_70,iVar5);
        FUN_148e200a1(local_70,uVar6,iVar5);
      }
      *(undefined4 *)(param_1 + 0x428) = 0;
      if (*(int *)(param_1 + 0x42c) != 0) {
        FUN_148d020d2(param_1 + 0x420,0);
      }
      if ((longlong)local_68 != 0) {
        plVar2 = local_70 + local_68;
        plVar13 = local_70;
        do {
          local_98 = plVar10;
          if (((*plVar13 != 0) && (lVar7 = FUN_140cf8aa6(*plVar13), lVar7 != 0)) &&
             (lVar8 = FUN_148dc20a4(lVar7), lVar8 == param_1)) {
            FUN_148dc20ac(lVar7,0);
            cVar4 = FUN_14603dd6a(plVar10);
            if ((cVar4 == '\0') && (lVar7 = *(longlong *)(lVar7 + 0x3d0), lVar7 != 0)) {
              local_88 = 0;
              uStack_80 = 0;
              local_90 = FUN_14595dd3a();
              if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(local_90);
              }
              FUN_140d0a558(lVar7,&local_88,&local_90);
              lVar7 = local_88;
              lVar8 = (longlong)(int)uStack_80;
              if (lVar8 != 0) {
                lVar11 = 0;
                local_a0 = param_1;
                do {
                  plVar10 = *(longlong **)(lVar7 + lVar11);
                  if (plVar10 != (longlong *)0x0) {
                    lVar9 = FUN_14595dd3a();
                    if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                        == lVar9 + 0x30)) {
                      (**(code **)(*plVar10 + 0x6a8))(plVar10);
                    }
                  }
                  lVar11 = lVar11 + 8;
                  param_1 = local_a0;
                } while (lVar8 << 3 != lVar11);
              }
              if (local_88 != 0) {
                FUN_1400020a8();
              }
            }
          }
          plVar13 = plVar13 + 1;
          plVar10 = local_98;
        } while (plVar13 != plVar2);
      }
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8(local_70);
      }
    }
  }
  LOCK();
  plVar10 = plVar12 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_148e15e03:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e15f8c FUN_148e15f8c body=62 status=ok
// SIG undefined FUN_148e15f8c(void)

undefined8 FUN_148e15f8c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x690))(param_1,(char)param_1[0x4e2]);
  if ((param_1[0x4e0] == 0) || (lVar1 = param_1[0x4e1], lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 8));
  }
  return uVar2;
}



// FUNCTION 148e15fca FUN_148e15fca body=145 status=ok
// SIG undefined FUN_148e15fca(void)

void FUN_148e15fca(longlong param_1)

{
  int iVar1;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x2640) == *(longlong *)(param_1 + 0x2658)) {
    iVar1 = *(int *)(param_1 + 0x2660);
    if (*(int *)(param_1 + 0x2648) == iVar1) goto LAB_148e1601b;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2660);
  }
  *(longlong *)(param_1 + 0x2640) = *(longlong *)(param_1 + 0x2658);
  *(int *)(param_1 + 0x2648) = iVar1;
  *(undefined8 *)(param_1 + 0x2650) = 0;
LAB_148e1601b:
  if (*(longlong *)(param_1 + 0x26e0) != 0) {
    local_10 = *(longlong *)(param_1 + 0x26e0);
    (**(code **)(*(longlong *)(param_1 + 0x400) + 0x48))(param_1 + 0x400);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1605c FUN_148e1605c body=254 status=ok
// SIG undefined FUN_148e1605c(void)

undefined8
FUN_148e1605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac8b4c0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a5860;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e0aeb0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1615c FUN_148e1615c body=933 status=ok
// SIG undefined FUN_148e1615c(void)

void FUN_148e1615c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double *pdVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar21;
  longlong lVar22;
  undefined4 unaff_XMM6_Da;
  float unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  ulonglong local_c0;
  longlong lVar20;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*param_2 != 0) {
    local_108 = 0;
    uStack_100 = 0;
    FUN_1461d0af6(param_1,&local_108);
    if ((int)uStack_100 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined4 *)(local_108 + 0x30);
      unaff_XMM8_Da = *(undefined4 *)(local_108 + 0x34);
      unaff_XMM7_Da = *(float *)(local_108 + 0x38);
      unaff_XMM6_Da = *(undefined4 *)(local_108 + 0x3c);
    }
    plVar4 = (longlong *)(param_1 + 0x26d0);
    lVar14 = FUN_1412e3d68(*param_2);
    FUN_148e1699a(plVar4,*(undefined4 *)(lVar14 + 0x388));
    lVar15 = FUN_1412e3d68(*param_2);
    lVar14 = *(longlong *)(lVar15 + 0x380);
    if (*(longlong *)(lVar15 + 0x380) == 0) {
      lVar14 = lVar15;
    }
    if ((longlong)*(int *)(lVar15 + 0x388) != 0) {
      lVar15 = (longlong)*(int *)(lVar15 + 0x388) * 0x38;
      do {
        if ((*(byte *)(lVar14 + 0x34) & 1) == 0) {
          cVar12 = FUN_144a7b75a(*(undefined1 *)(lVar14 + 0x20),4);
          if (cVar12 != '\0') {
            lVar20 = lVar14;
            dVar16 = (double)FUN_144a7b7fe(lVar14,&local_f8);
            dVar11 = local_e8;
            uVar18 = (undefined4)lVar20;
            local_118 = (undefined4)local_f8;
            uStack_114 = local_f8._4_4_;
            uStack_110 = (undefined4)uStack_f0;
            uStack_10c = uStack_f0._4_4_;
            lVar20 = *(longlong *)(param_1 + 0x1c8);
            if (lVar20 == 0) {
              local_c8 = DAT_14c846508;
              local_d8 = (undefined4)DAT_14c8464f8;
              uStack_d4 = DAT_14c8464f8._4_4_;
              uStack_d0 = (undefined4)DAT_14c846500;
              uStack_cc = DAT_14c846500._4_4_;
            }
            else {
              dVar7 = *(double *)(lVar20 + 0x240);
              dVar8 = *(double *)(lVar20 + 0x248);
              dVar9 = *(double *)(lVar20 + 0x250);
              dVar10 = *(double *)(lVar20 + 600);
              pdVar17 = *(double **)(lVar20 + 0x228);
              local_f8 = dVar7;
              uStack_f0 = dVar8;
              local_e8 = dVar9;
              uStack_e0 = dVar10;
              if (pdVar17 == (double *)0x0) {
                uVar18 = 0x40;
                pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
                dVar16 = DAT_14c8463d8;
                *pdVar17 = DAT_14c8463d0;
                pdVar17[1] = dVar16;
                dVar16 = DAT_14c8463e8;
                pdVar17[2] = DAT_14c8463e0;
                pdVar17[3] = dVar16;
                dVar16 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
                pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
                pdVar17[5] = dVar16;
                dVar16 = DAT_14c846508;
                pdVar17[6] = DAT_14c846508;
                *(double **)(lVar20 + 0x228) = pdVar17;
              }
              auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar17[1]);
              auVar5._0_8_ = -(ulonglong)(dVar7 != *pdVar17);
              auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar17[1]) >> 0x20);
              iVar13 = movmskpd(SUB84(dVar16,0),auVar5);
              auVar6._8_4_ = (int)-(ulonglong)(dVar10 != pdVar17[3]);
              auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar17[2]);
              auVar6._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar17[3]) >> 0x20);
              uVar19 = movmskpd(uVar18,auVar6);
              if ((uVar19 & 0x3fffffff) != 0 || iVar13 != 0) {
                *(undefined4 *)(pdVar17 + 2) = (undefined4)local_e8;
                *(undefined4 *)((longlong)pdVar17 + 0x14) = local_e8._4_4_;
                *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_e0;
                *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_e0._4_4_;
                *(undefined4 *)pdVar17 = (undefined4)local_f8;
                *(undefined4 *)((longlong)pdVar17 + 4) = local_f8._4_4_;
                *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_f0;
                *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_f0._4_4_;
                FUN_1448052ee(&local_f8,&local_d8);
                pdVar17[6] = local_c8;
                pdVar17[4] = (double)CONCAT44(uStack_d4,local_d8);
                pdVar17[5] = (double)CONCAT44(uStack_cc,uStack_d0);
              }
              local_c8 = pdVar17[6];
              local_d8 = *(undefined4 *)(pdVar17 + 4);
              uStack_d4 = *(undefined4 *)((longlong)pdVar17 + 0x24);
              uStack_d0 = *(undefined4 *)(pdVar17 + 5);
              uStack_cc = *(undefined4 *)((longlong)pdVar17 + 0x2c);
            }
            local_e8 = local_c8;
            local_f8 = (double)CONCAT44(uStack_d4,local_d8);
            uStack_f0 = (double)CONCAT44(uStack_cc,uStack_d0);
            iVar13 = *(int *)(param_1 + 0x26d8);
            *(uint *)(param_1 + 0x26d8) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x26dc) < iVar13 + 1U) {
              FUN_1461d0d4a(plVar4,iVar13);
            }
            lVar20 = *plVar4;
            lVar22 = (longlong)iVar13 * 0x40;
            *(undefined8 *)(lVar20 + lVar22) = CONCAT44(uStack_114,local_118);
            ((undefined8 *)(lVar20 + lVar22))[1] = CONCAT44(uStack_10c,uStack_110);
            *(double *)(lVar20 + 0x10 + lVar22) = dVar11 + (double)(unaff_XMM7_Da + 1.0);
            puVar3 = (undefined4 *)(lVar20 + 0x18 + lVar22);
            *puVar3 = (undefined4)local_f8;
            puVar3[1] = local_f8._4_4_;
            puVar3[2] = (undefined4)uStack_f0;
            puVar3[3] = uStack_f0._4_4_;
            *(double *)(lVar20 + 0x28 + lVar22) = local_e8;
            *(undefined4 *)(lVar20 + 0x30 + lVar22) = uVar21;
            *(undefined4 *)(lVar20 + 0x34 + lVar22) = unaff_XMM8_Da;
            *(float *)(lVar20 + 0x38 + lVar22) = unaff_XMM7_Da;
            *(undefined4 *)(lVar20 + 0x3c + lVar22) = unaff_XMM6_Da;
          }
        }
        lVar14 = lVar14 + 0x38;
        lVar15 = lVar15 + -0x38;
      } while (lVar15 != 0);
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x26e8) = 0;
  plVar4 = *(longlong **)(param_1 + 0x26f0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x26f0) = 0;
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
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e16502 FUN_148e16502 body=123 status=ok
// SIG undefined FUN_148e16502(void)

void FUN_148e16502(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x26a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2698);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        FUN_1400337aa(plVar3);
        if (*(longlong *)(param_1 + 0x1c8) != plVar3[0x24]) {
          (**(code **)(*plVar3 + 0x490))(plVar3,*(longlong *)(param_1 + 0x1c8),&DAT_14cadad98,0);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 148e1657e FUN_148e1657e body=681 status=ok
// SIG undefined FUN_148e1657e(void)

void FUN_148e1657e(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  ulonglong uStack_60;
  longlong local_58 [2];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_1447210f0();
  local_48 = *(longlong *)(param_1 + 0x2640);
  if (local_48 == 0) goto LAB_148e166cb;
  FUN_1400021e4(&local_48,local_58);
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  FUN_1403de9f2(local_58,&local_68,&DAT_149e0635c,1);
  plVar3 = local_68;
  if ((int)uStack_60 == 2) {
    local_40 = *(longlong *)(lVar6 + 0x18);
    FUN_1400021e4(&local_40,&local_78);
    iVar5 = (int)plVar3[1];
    if (iVar5 == local_70) {
      bVar12 = true;
      if (1 < iVar5) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*plVar3 + lVar8);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_78 + lVar8);
          uVar11 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e16656;
            }
            iVar5 = uVar4 - uVar11;
            goto LAB_148e16805;
          }
          if (uVar1 == 0) break;
LAB_148e16656:
          lVar8 = lVar8 + 2;
        }
        iVar5 = 0;
LAB_148e16805:
        bVar12 = iVar5 == 0;
      }
    }
    else {
      bVar12 = local_70 + iVar5 == 1;
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (!bVar12) {
      local_40 = *(longlong *)(lVar6 + 0x18);
      FUN_1400021e4(&local_40,&local_78);
      plVar3 = local_68;
      if (local_68 == &local_78) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*local_68 != 0) {
          FUN_1400020a8();
        }
        *plVar3 = local_78;
        local_78 = 0;
        *(int *)(plVar3 + 1) = local_70;
        *(undefined4 *)((longlong)plVar3 + 0xc) = local_6c;
      }
      puVar9 = &DAT_149dfb77a;
      puVar10 = &DAT_149dfb77a;
      if ((int)local_68[3] != 0) {
        puVar10 = (undefined2 *)local_68[2];
      }
      if ((int)local_68[1] != 0) {
        puVar9 = (undefined2 *)*local_68;
      }
      FUN_140002266(&local_78,L"%ls.%ls",puVar9,puVar10);
      iVar5 = local_70 + -1;
      if (local_70 == 0) {
        iVar5 = 0;
      }
      FUN_1446f82e2(&local_40,iVar5,local_78,1);
      if (*(longlong *)(param_1 + 0x2640) == local_40) {
        if (*(longlong *)(param_1 + 0x2650) == 0) goto LAB_148e167d7;
      }
      else {
        *(undefined8 *)(param_1 + 0x2650) = 0;
        *(longlong *)(param_1 + 0x2640) = local_40;
LAB_148e167d7:
        uVar7 = FUN_14050aea0();
        *(undefined8 *)(param_1 + 0x2650) = uVar7;
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e166cb:
  local_80 = *param_2;
  *(int *)(local_80 + 0x94) = *(int *)(local_80 + 0x94) + 1;
  FUN_148cd57e8(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e16838 FUN_148e16838 body=173 status=ok
// SIG undefined FUN_148e16838(void)

longlong * FUN_148e16838(longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a1c8830;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b9a58d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148e168e6 FUN_148e168e6 body=173 status=ok
// SIG undefined FUN_148e168e6(void)

longlong * FUN_148e168e6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b3e6310;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b9a5940;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148e1699a FUN_148e1699a body=41 status=ok
// SIG undefined FUN_148e1699a(void)

void FUN_148e1699a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148e2113c();
  return;
}



// FUNCTION 148e169c8 FUN_148e169c8 body=367 status=ok
// SIG undefined FUN_148e169c8(void)

void FUN_148e169c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xe0) * 400;
    lVar1 = *(longlong *)(param_1 + 0xd8) + 0x38;
    do {
      FUN_140d077bc(lVar1,param_2);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xf0) * 400;
    lVar1 = *(longlong *)(param_1 + 0xe8) + 0x38;
    do {
      FUN_140d077bc(lVar1,param_2);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x100) * 400;
    lVar1 = *(longlong *)(param_1 + 0xf8) + 0x38;
    do {
      FUN_140d077bc(lVar1,param_2);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x110) * 400;
    lVar1 = *(longlong *)(param_1 + 0x108) + 0x38;
    do {
      FUN_140d077bc(lVar1,param_2);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x120) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x120) * 400;
    lVar1 = *(longlong *)(param_1 + 0x118) + 0x38;
    do {
      FUN_140d077bc(lVar1,param_2);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x130) * 400;
    lVar2 = *(longlong *)(param_1 + 0x128) + 0x38;
    do {
      FUN_140d077bc(lVar2,param_2);
      lVar2 = lVar2 + 400;
      lVar1 = lVar1 + -400;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148e16b38 FUN_148e16b38 body=392 status=ok
// SIG undefined FUN_148e16b38(void)

void FUN_148e16b38(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xe0) * 400;
    lVar1 = *(longlong *)(param_1 + 0xd8) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xf0) * 400;
    lVar1 = *(longlong *)(param_1 + 0xe8) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x100) * 400;
    lVar1 = *(longlong *)(param_1 + 0xf8) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x110) * 400;
    lVar1 = *(longlong *)(param_1 + 0x108) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x120) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x120) * 400;
    lVar1 = *(longlong *)(param_1 + 0x118) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x130) * 400;
    lVar1 = *(longlong *)(param_1 + 0x128) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 148e16cc0 FUN_148e16cc0 body=505 status=ok
// SIG undefined FUN_148e16cc0(void)

void FUN_148e16cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xe0) * 400;
    lVar2 = *(longlong *)(param_1 + 0xd8) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xf0) * 400;
    lVar2 = *(longlong *)(param_1 + 0xe8) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x100) * 400;
    lVar2 = *(longlong *)(param_1 + 0xf8) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x110) * 400;
    lVar2 = *(longlong *)(param_1 + 0x108) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0x120) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x120) * 400;
    lVar2 = *(longlong *)(param_1 + 0x118) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x130) * 400;
    lVar2 = *(longlong *)(param_1 + 0x128) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148e16eba FUN_148e16eba body=144 status=ok
// SIG undefined FUN_148e16eba(void)

void FUN_148e16eba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148e169c8();
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x140) * 400;
    lVar1 = *(longlong *)(param_1 + 0x138) + 0x38;
    do {
      FUN_140d077bc(lVar1,param_2);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x150) * 400;
    lVar2 = *(longlong *)(param_1 + 0x148) + 0x38;
    do {
      FUN_140d077bc(lVar2,param_2);
      lVar2 = lVar2 + 400;
      lVar1 = lVar1 + -400;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148e16f4a FUN_148e16f4a body=157 status=ok
// SIG undefined FUN_148e16f4a(void)

void FUN_148e16f4a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148e16b38();
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x140) * 400;
    lVar1 = *(longlong *)(param_1 + 0x138) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x150) * 400;
    lVar1 = *(longlong *)(param_1 + 0x148) + 0x38;
    do {
      FUN_1489a50d2(lVar1,param_2,param_3);
      lVar1 = lVar1 + 400;
      lVar2 = lVar2 + -400;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 148e16fe8 FUN_148e16fe8 body=202 status=ok
// SIG undefined FUN_148e16fe8(void)

void FUN_148e16fe8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_148e16cc0();
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x140) * 400;
    lVar2 = *(longlong *)(param_1 + 0x138) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x150) * 400;
    lVar2 = *(longlong *)(param_1 + 0x148) + 0x38;
    do {
      FUN_141022b78(lVar2,param_2,param_3,uVar1);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148e170b2 FUN_148e170b2 body=282 status=ok
// SIG undefined FUN_148e170b2(void)

void FUN_148e170b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(byte *)(param_2 + 0xad) & 1) != 0) &&
      (((lVar1 = FUN_14479d2ce(param_2 + 0xd8), lVar1 != 0 ||
        ((lVar1 = FUN_14485cccc(param_2 + 0xb8), lVar1 != 0 &&
         (lVar1 = *(longlong *)(lVar1 + 0x1c8), lVar1 != 0)))) && (*(char *)(lVar1 + 0x1fb) == '\0')
       ))) && (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    uVar3 = (ulonglong)*(int *)(lVar2 + 0x38);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + uVar3 * 8) == lVar2 + 0x30
       )) {
      lVar2 = *(longlong *)(lVar1 + 0x858);
      if (lVar2 != 0) {
        uVar3 = 2;
        if (2 < (int)*(uint *)(lVar2 + 0x153c)) {
          uVar3 = (ulonglong)*(uint *)(lVar2 + 0x153c);
        }
        *(int *)(lVar2 + 0x153c) = (int)uVar3;
      }
      local_40 = 0;
      local_38 = (undefined4)DAT_14c8464e0;
      uStack_34 = DAT_14c8464e0._4_4_;
      uStack_30 = (undefined4)DAT_14c8464e8;
      uStack_2c = DAT_14c8464e8._4_4_;
      local_28 = DAT_14c8464f0;
      local_20 = 0;
      FUN_140e26dfa(lVar1 + 0x7c78,CONCAT71((int7)(uVar3 >> 8),4),1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e171ce FUN_148e171ce body=192 status=ok
// SIG undefined FUN_148e171ce(void)

longlong * FUN_148e171ce(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x178,0x10);
  FUN_148e21718(plVar4,param_1,param_3);
  plVar1 = plVar4 + 2;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148e2187a(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e17292 FUN_148e17292 body=1512 status=ok
// SIG undefined FUN_148e17292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148e17292(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  double *pdVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined8 *local_2b0;
  undefined1 *local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined1 local_290 [8];
  double local_288;
  undefined1 local_280;
  double local_278;
  double local_270;
  undefined1 local_268;
  double local_260;
  double local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong lStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined4 local_144;
  undefined4 local_118;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_140880c0c();
  plVar6 = (longlong *)FUN_1403cba6c(*(undefined8 *)(param_1 + 0x38));
  uVar13 = 1;
  if (plVar6 != (longlong *)0x0) {
    FUN_14485c47a(param_1 + 0x158,plVar6);
    lVar7 = FUN_14479d2ce(param_1 + 0x158);
    if (lVar7 != 0) {
      lVar7 = FUN_14025708c(lVar7);
      if (lVar7 != 0) {
        if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x98) == '\x01') {
          (**(code **)(*plVar6 + 0x690))(plVar6);
        }
        *(undefined1 *)(lVar7 + 0x1c0) = 0;
        if ((longlong)*(int *)(lVar7 + 600) != 0) {
          plVar10 = *(longlong **)(lVar7 + 0x250);
          lVar14 = (longlong)*(int *)(lVar7 + 600) * 0xb0;
          do {
            if (*plVar10 == *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x9c)) {
              if (plVar10 != (longlong *)0x0) {
                local_1e8 = (double)plVar6[0x4c];
                lStack_1e0 = plVar6[0x4d];
                if ((char)plVar10[0xb] == '\x01') {
                  dVar15 = (double)plVar10[10];
                  pdVar11 = (double *)(plVar10 + 8);
                }
                else {
                  dVar15 = (double)plVar6[0x4e];
                  pdVar11 = (double *)&local_1e8;
                }
                goto LAB_148e17399;
              }
              break;
            }
            plVar10 = plVar10 + 0x16;
            lVar14 = lVar14 + -0xb0;
          } while (lVar14 != 0);
        }
        pdVar11 = (double *)(plVar6 + 0x4c);
        dVar15 = (double)plVar6[0x4e];
LAB_148e17399:
        dVar2 = *pdVar11;
        dVar3 = pdVar11[1];
        dVar1 = pdVar11[1];
        *(double *)(param_1 + 0xe0) = dVar2;
        *(double *)(param_1 + 0xe8) = dVar3;
        *(double *)(param_1 + 0xf0) = dVar15;
        dVar20 = (double)*(float *)(*(longlong *)(param_1 + 0xd8) + 0xc4);
        local_2a0 = param_1 + 0xe0;
        auVar19._0_8_ = dVar1 - *(double *)(param_1 + 0x130) * dVar20;
        auVar19._8_8_ = 0;
        auVar18._0_8_ = dVar2 - dVar20 * *(double *)(param_1 + 0x128);
        auVar18._8_8_ = dVar3;
        *(double *)(param_1 + 0xf8) = auVar18._0_8_;
        *(double *)(param_1 + 0x100) = auVar19._0_8_;
        *(double *)(param_1 + 0x108) = dVar15 - *(double *)(param_1 + 0x138) * dVar20;
        lVar14 = plVar6[0x16];
        if (lVar14 == 0) {
          lVar14 = FUN_1448abda6(plVar6);
        }
        memset(&local_1e8,0,0x100);
        local_118 = 0xffffffff;
        local_1e8 = (double)CONCAT44(0x3f800000,(undefined4)local_1e8);
        local_144 = 0xffffffff;
        local_bc = 0;
        local_b8 = 0x101;
        local_90 = 0;
        local_88 = 0x800000000;
        local_70 = 0;
        local_68 = 0x400000000;
        local_d0 = 0;
        local_c4 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_cf = 1;
        local_cd = 0;
        local_c0 = 0;
        local_cc = 0x1000000;
        local_c8 = 1;
        FUN_144a85a22(&local_e0,plVar6[0x15]);
        local_2a8 = &DAT_14cad0f10;
        local_2b8 = 2;
        local_2b0 = &local_e0;
        cVar5 = FUN_1400b50cc(lVar14,&local_1e8,local_2a0,(undefined8 *)(param_1 + 0xf8));
        if (cVar5 != '\0') {
          dVar15 = (double)*(float *)(*(longlong *)(param_1 + 0xd8) + 0x104);
          auVar18._0_8_ = *(double *)(param_1 + 0x138) * dVar15 + local_1c8;
          auVar18._8_8_ = 0;
          auVar19._0_8_ = *(double *)(param_1 + 0x130) * dVar15 + local_1d0;
          auVar19._8_8_ = 0;
          *(double *)(param_1 + 0xf8) = dVar15 * *(double *)(param_1 + 0x128) + local_1d8;
          *(double *)(param_1 + 0x100) = auVar19._0_8_;
          *(double *)(param_1 + 0x108) = auVar18._0_8_;
        }
        if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x9a) == '\x01') {
          FUN_1402c73be(param_1 + 0x148,lVar7 + 0x118);
          auVar4 = _DAT_149931e80;
          if ((longlong)*(int *)(lVar7 + 0x120) != 0) {
            uVar8 = (longlong)*(int *)(lVar7 + 0x120) * 0xf8 - 0xf8U >> 3;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar8;
            auVar16._8_4_ = SUB164(auVar22 * ZEXT816(0x2108421084210843),8);
            auVar16._0_8_ = SUB168(auVar22 * ZEXT816(0x2108421084210843),8);
            auVar16._12_4_ = (int)(uVar8 / 0x7c0000000);
            auVar17._0_8_ = uVar8 / 0x1f;
            auVar17._8_8_ = auVar16._8_8_ >> 2;
            puVar12 = (undefined4 *)(*(longlong *)(lVar7 + 0x118) + 0x398);
            uVar9 = 0;
            auVar18 = pmovsxbq(auVar18,0x302);
            auVar19 = pmovsxbq(auVar19,0x100);
            auVar17 = auVar17 | _DAT_149931e80;
            do {
              lVar7 = auVar17._0_8_;
              lVar14 = auVar17._8_8_;
              if ((bool)(~(lVar7 < (longlong)(uVar9 ^ auVar4._0_8_)) & 1)) {
                puVar12[-0xba] = 3;
              }
              auVar21._8_4_ = (int)uVar9;
              auVar21._0_8_ = uVar9;
              auVar21._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar21._8_8_ | auVar19._8_8_) ^ auVar4._8_8_) <= lVar14) {
                puVar12[-0x7c] = 3;
              }
              auVar22 = (auVar21 | auVar18) ^ auVar4;
              if (auVar22._0_8_ <= lVar7) {
                puVar12[-0x3e] = 3;
              }
              if (auVar22._8_8_ <= lVar14) {
                *puVar12 = 3;
              }
              uVar9 = uVar9 + 4;
              puVar12 = puVar12 + 0xf8;
            } while ((uVar8 / 0x1f + 4 & 0xfffffffffffffffc) != uVar9);
          }
        }
        lVar7 = *(longlong *)(param_1 + 0xd8);
        local_220 = DAT_14c8464f0;
        local_230 = DAT_14c8464e0;
        uStack_228 = DAT_14c8464e8;
        local_218 = 0x40c3880000000000;
        local_208 = 0x402e000000000000;
        local_200 = 0;
        lStack_1f8 = 0;
        local_1f0 = 0;
        local_288 = (double)*(float *)(lVar7 + 0xa8);
        local_290[0] = *(undefined1 *)(lVar7 + 0xa4);
        local_280 = *(undefined1 *)(lVar7 + 0xac);
        local_268 = *(undefined1 *)(lVar7 + 0xb8);
        local_270 = (double)*(float *)(lVar7 + 0xb4);
        local_278 = (double)*(float *)(lVar7 + 0xb0);
        local_258 = (double)*(float *)(lVar7 + 0xc0);
        local_260 = (double)*(float *)(lVar7 + 0xbc);
        local_210 = 0;
        local_250 = 0;
        local_238 = *(undefined8 *)(param_1 + 0x108);
        local_248 = *(undefined8 *)(param_1 + 0xf8);
        uStack_240 = *(undefined8 *)(param_1 + 0x100);
        FUN_1446f470e(&local_298,L"Primary",1);
        FUN_145da7162(plVar6,*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x9c),local_290,
                      local_298);
        if (lStack_1f8 != 0) {
          FUN_1402c7646(&local_200);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        uVar13 = 0;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1787c FUN_148e1787c body=104 status=ok
// SIG undefined FUN_148e1787c(void)

undefined8 FUN_148e1787c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  
  uVar1 = 1;
  cVar2 = *(char *)(param_1 + 0xd0);
  do {
    switch(cVar2) {
    case '\0':
      *(undefined1 *)(param_1 + 0xd0) = 1;
      break;
    case '\x01':
      uVar1 = FUN_148e178e4(param_1);
      break;
    case '\x02':
      uVar1 = FUN_148e17a22(param_1);
      break;
    case '\x03':
      uVar1 = FUN_148e17e14(param_1);
    }
    bVar3 = *(char *)(param_1 + 0xd0) != cVar2;
    cVar2 = *(char *)(param_1 + 0xd0);
  } while (bVar3);
  return uVar1;
}



// FUNCTION 148e178e4 FUN_148e178e4 body=318 status=ok
// SIG undefined FUN_148e178e4(void)

undefined8 FUN_148e178e4(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x158);
  if (((lVar2 != 0) && (lVar2 = FUN_14025708c(lVar2,DAT_14c9abbf0), lVar2 != 0)) &&
     ((longlong)*(int *)(lVar2 + 600) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0x250);
    lVar2 = (longlong)*(int *)(lVar2 + 600) * 0xb0;
    do {
      if (*plVar3 == *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x9c)) {
        if (plVar3 == (longlong *)0x0) {
          return 1;
        }
        if ((char)plVar3[0xb] != '\x01') {
          return 1;
        }
        dVar4 = *(double *)(param_1 + 0xf8) - (double)plVar3[8];
        dVar5 = *(double *)(param_1 + 0x100) - (double)plVar3[9];
        dVar6 = *(double *)(param_1 + 0x108) - (double)plVar3[10];
        fVar1 = *(float *)(*(longlong *)(param_1 + 0xd8) + 200);
        if (dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 <= (double)(fVar1 * fVar1)) {
          lVar2 = FUN_14479d2ce(param_1 + 0x158);
          if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0xa8) == 0)) {
            lVar2 = 0;
          }
          else {
            lVar2 = FUN_1447210f0();
          }
          if (*(float *)(*(longlong *)(param_1 + 0xd8) + 0xcc) <= *(float *)(param_1 + 0x140)) {
            *(undefined1 *)(param_1 + 0xd0) = 2;
          }
          *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + *(float *)(lVar2 + 0x6f4);
        }
        else {
          *(undefined4 *)(param_1 + 0x140) = 0;
        }
        return 0;
      }
      plVar3 = plVar3 + 0x16;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  return 1;
}



// FUNCTION 148e17a22 FUN_148e17a22 body=1008 status=ok
// SIG undefined FUN_148e17a22(void)

undefined8 FUN_148e17a22(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined1 *local_298;
  undefined8 local_288;
  undefined1 local_280 [8];
  double local_278;
  undefined1 local_270;
  double local_268;
  double local_260;
  undefined1 local_258;
  double local_250;
  double local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong lStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [4];
  undefined4 local_1cc;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined4 local_12c;
  undefined4 local_100;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar3 = FUN_14479d2ce(param_1 + 0x158);
  if (lVar3 == 0) {
    uVar5 = 1;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(lVar3);
    }
    dVar1 = (double)*(float *)(*(longlong *)(param_1 + 0xd8) + 0xf8);
    *(double *)(param_1 + 0x110) =
         dVar1 * *(double *)(param_1 + 0x128) + *(double *)(param_1 + 0xe0);
    *(double *)(param_1 + 0x118) =
         *(double *)(param_1 + 0x130) * dVar1 + *(double *)(param_1 + 0xe8);
    *(double *)(param_1 + 0x120) =
         *(double *)(param_1 + 0x138) * dVar1 + *(double *)(param_1 + 0xf0);
    memset(local_1d0,0,0x100);
    local_100 = 0xffffffff;
    local_1cc = 0x3f800000;
    local_12c = 0xffffffff;
    local_ac = 0;
    local_a8 = 0x101;
    local_80 = 0;
    local_78 = 0x800000000;
    local_60 = 0;
    local_58 = 0x400000000;
    local_c0 = 0;
    local_b4 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_bf = 1;
    local_bd = 0;
    local_b0 = 0;
    local_bc = 0x1000000;
    local_b8 = 1;
    FUN_144a85a22(&local_d0,*(undefined8 *)(lVar3 + 0xa8));
    local_298 = &DAT_14cad0f10;
    local_2a8 = 2;
    local_2a0 = &local_d0;
    cVar2 = FUN_1400b50cc(lVar4,local_1d0,param_1 + 0xf8,(undefined4 *)(param_1 + 0x110));
    if (cVar2 != '\0') {
      dVar1 = (double)*(float *)(*(longlong *)(param_1 + 0xd8) + 0x104);
      *(double *)(param_1 + 0x110) = local_1c0 - dVar1 * *(double *)(param_1 + 0x128);
      *(double *)(param_1 + 0x118) = local_1b8 - *(double *)(param_1 + 0x130) * dVar1;
      *(double *)(param_1 + 0x120) = local_1b0 - *(double *)(param_1 + 0x138) * dVar1;
    }
    FUN_1446f470e(&local_1d8,L"Primary",1);
    FUN_148811c8c(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x9c),local_1d8);
    lVar4 = *(longlong *)(param_1 + 0xd8);
    local_210 = DAT_14c8464f0;
    local_220 = DAT_14c8464e0;
    uStack_218 = DAT_14c8464e8;
    local_208 = 0x40c3880000000000;
    local_1f8 = 0x402e000000000000;
    local_1f0 = 0;
    lStack_1e8 = 0;
    local_1e0 = 0;
    local_278 = (double)*(float *)(lVar4 + 0xdc);
    local_280[0] = *(undefined1 *)(lVar4 + 0xd8);
    local_270 = *(undefined1 *)(lVar4 + 0xe0);
    local_258 = *(undefined1 *)(lVar4 + 0xec);
    local_260 = (double)*(float *)(lVar4 + 0xe8);
    local_268 = (double)*(float *)(lVar4 + 0xe4);
    local_248 = (double)*(float *)(lVar4 + 0xf4);
    local_250 = (double)*(float *)(lVar4 + 0xf0);
    local_200 = 0;
    local_240 = 0;
    local_228 = *(undefined8 *)(param_1 + 0x120);
    local_238 = *(undefined4 *)(param_1 + 0x110);
    uStack_234 = *(undefined4 *)(param_1 + 0x114);
    uStack_230 = *(undefined4 *)(param_1 + 0x118);
    uStack_22c = *(undefined4 *)(param_1 + 0x11c);
    FUN_1446f470e(&local_288,L"Primary",1);
    FUN_145da7162(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0xd0),local_280,local_288);
    *(undefined1 *)(param_1 + 0xd0) = 3;
    *(undefined4 *)(param_1 + 0x140) = 0;
    if (lStack_1e8 != 0) {
      FUN_1402c7646(&local_1f0);
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    uVar5 = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e17e14 FUN_148e17e14 body=323 status=ok
// SIG undefined FUN_148e17e14(void)

undefined8 FUN_148e17e14(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x158);
  if (((lVar2 != 0) && (lVar2 = FUN_14025708c(lVar2,DAT_14c9abbf0), lVar2 != 0)) &&
     ((longlong)*(int *)(lVar2 + 600) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0x250);
    lVar2 = (longlong)*(int *)(lVar2 + 600) * 0xb0;
    do {
      if (*plVar3 == *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xd0)) {
        if (plVar3 == (longlong *)0x0) {
          return 1;
        }
        if ((char)plVar3[0xb] == '\x01') {
          dVar4 = *(double *)(param_1 + 0x110) - (double)plVar3[8];
          dVar5 = *(double *)(param_1 + 0x118) - (double)plVar3[9];
          dVar6 = *(double *)(param_1 + 0x120) - (double)plVar3[10];
          fVar1 = *(float *)(*(longlong *)(param_1 + 0xd8) + 0xfc);
          if (dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 <= (double)(fVar1 * fVar1)) {
            lVar2 = FUN_14479d2ce(param_1 + 0x158);
            if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0xa8) == 0)) {
              lVar2 = 0;
            }
            else {
              lVar2 = FUN_1447210f0();
            }
            if (*(float *)(*(longlong *)(param_1 + 0xd8) + 0x100) <= *(float *)(param_1 + 0x140)) {
              *(undefined4 *)(param_1 + 0x140) = 0;
              return 1;
            }
            *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + *(float *)(lVar2 + 0x6f4);
          }
          else {
            *(undefined4 *)(param_1 + 0x140) = 0;
          }
          return 0;
        }
        return 1;
      }
      plVar3 = plVar3 + 0x16;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  return 1;
}



// FUNCTION 148e17f58 FUN_148e17f58 body=852 status=ok
// SIG undefined FUN_148e17f58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148e17f58(longlong param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [12];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_140670e42();
  lVar3 = FUN_14479d2ce(param_1 + 0x158);
  if (lVar3 != 0) {
    lVar3 = FUN_14025708c(lVar3,DAT_14c9abbf0);
    auVar1 = _DAT_149931e80;
    if (lVar3 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x9a) == '\x01') {
        if ((longlong)*(int *)(lVar3 + 0x120) != 0) {
          uVar4 = (longlong)*(int *)(lVar3 + 0x120) * 0xf8 - 0xf8U >> 3;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar4;
          auVar12._8_4_ = SUB164(auVar11 * ZEXT816(0x2108421084210843),8);
          auVar12._0_8_ = SUB168(auVar11 * ZEXT816(0x2108421084210843),8);
          auVar12._12_4_ = (int)(uVar4 / 0x7c0000000);
          auVar9._0_8_ = uVar4 / 0x1f;
          auVar9._8_8_ = auVar12._8_8_ >> 2;
          puVar6 = (undefined4 *)(*(longlong *)(lVar3 + 0x118) + 0x398);
          uVar5 = 0;
          auVar11 = pmovsxbq(in_XMM1,0x302);
          auVar12 = pmovsxbq(in_XMM2,0x100);
          auVar9 = auVar9 | _DAT_149931e80;
          lVar7 = auVar9._0_8_;
          do {
            lVar10 = auVar9._8_8_;
            if ((bool)(~(lVar7 < (longlong)(uVar5 ^ auVar1._0_8_)) & 1)) {
              puVar6[-0xba] = 3;
            }
            auVar13._8_4_ = (int)uVar5;
            auVar13._0_8_ = uVar5;
            auVar13._12_4_ = (int)(uVar5 >> 0x20);
            if ((longlong)((auVar13._8_8_ | auVar12._8_8_) ^ auVar1._8_8_) <= lVar10) {
              puVar6[-0x7c] = 3;
            }
            auVar13 = (auVar13 | auVar11) ^ auVar1;
            if (auVar13._0_8_ <= lVar7) {
              puVar6[-0x3e] = 3;
            }
            if (auVar13._8_8_ <= lVar10) {
              *puVar6 = 3;
            }
            uVar5 = uVar5 + 4;
            puVar6 = puVar6 + 0xf8;
          } while ((uVar4 / 0x1f + 4 & 0xfffffffffffffffc) != uVar5);
        }
        if ((longlong)*(int *)(param_1 + 0x150) != 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x148);
          lVar7 = (longlong)*(int *)(param_1 + 0x150) * 0xf8;
          do {
            local_158 = *puVar8;
            local_150 = 1;
            local_148 = 0x408f400000000000;
            local_140 = 0;
            local_138 = 0xc08f400000000000;
            local_130 = 0x406f400000000000;
            local_128 = 1;
            local_120 = 0x4097700000000000;
            local_118 = 0;
            local_110 = 0;
            local_f8 = DAT_14c8464f0;
            local_108 = DAT_14c8464e0;
            uStack_100 = DAT_14c8464e8;
            local_e0 = DAT_14c8464f0;
            local_f0 = DAT_14c8464e0;
            uStack_e8 = DAT_14c8464e8;
            local_d8 = 0x40c3880000000000;
            local_d0 = 0;
            local_c8 = 0x402e000000000000;
            auStack_b0 = SUB1612((undefined1  [16])0x0,4);
            local_c0 = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            local_70 = (undefined1  [16])0x0;
            local_80 = (undefined1  [16])0x0;
            local_90 = (undefined1  [16])0x0;
            local_a0 = (undefined1  [16])0x0;
            iVar2 = FUN_1465490d8((longlong *)(lVar3 + 0x118),&local_158);
            if (CONCAT44(uStack_b4,uStack_b8) != 0) {
              FUN_1402c7646(&local_c0);
            }
            FUN_1470fa54a((longlong)iVar2 * 0xf8 + *(longlong *)(lVar3 + 0x118),puVar8);
            puVar8 = puVar8 + 0x1f;
            lVar7 = lVar7 + -0xf8;
          } while (lVar7 != 0);
        }
      }
      *(undefined1 *)(lVar3 + 0x1c0) = *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x99);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e182ae FUN_148e182ae body=192 status=ok
// SIG undefined FUN_148e182ae(void)

longlong * FUN_148e182ae(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x198,0x10);
  FUN_148e21922(plVar4,param_1,param_3);
  plVar1 = plVar4 + 2;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148e219e4(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e18372 FUN_148e18372 body=124 status=ok
// SIG undefined FUN_148e18372(void)

undefined8 * FUN_148e18372(undefined8 *param_1,undefined8 param_2)

{
  FUN_140724c88();
  *param_1 = &PTR_FUN_14b9a0a70;
  *(undefined1 *)(param_1 + 0x1a) = 2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return param_1;
}



// FUNCTION 148e183ee FUN_148e183ee body=572 status=ok
// SIG undefined FUN_148e183ee(void)

void FUN_148e183ee(longlong param_1,uint *param_2,undefined4 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x180) == '\x01') {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
    if (lVar10 == 0) {
      puVar8 = &DAT_14c8464e0;
      uVar13 = (undefined4)DAT_14c8464f0;
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar13 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
      puVar8 = (undefined8 *)(lVar10 + 0x260);
    }
    uVar2 = *(undefined4 *)((longlong)puVar8 + 4);
    uVar3 = *(undefined4 *)(puVar8 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)puVar8;
    *(undefined4 *)(param_1 + 0x134) = uVar2;
    *(undefined4 *)(param_1 + 0x138) = uVar3;
    *(undefined4 *)(param_1 + 0x13c) = uVar4;
    *(ulonglong *)(param_1 + 0x140) = CONCAT44(uVar14,uVar13);
    *(undefined1 *)(param_1 + 0x148) = 1;
    puVar12 = (uint *)(param_1 + 0xf0);
    if (puVar12 != param_2) {
      *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 4);
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *puVar12 = *param_2;
      *(uint *)(param_1 + 0xf4) = uVar5;
      *(uint *)(param_1 + 0xf8) = uVar6;
      *(uint *)(param_1 + 0xfc) = uVar7;
      *(undefined1 *)(param_1 + 0x108) = 1;
    }
    lVar10 = *(longlong *)(param_1 + 0xe8);
    if (*(char *)(lVar10 + 0x2c9) == '\x01') {
      FUN_148e1862c(param_1,puVar12,*(undefined4 *)(lVar10 + 0x2cc));
      lVar10 = *(longlong *)(param_1 + 0xe8);
    }
    *(undefined1 *)(param_1 + 0xd0) = 1;
    FUN_148e18996(param_1,lVar10 + 0x98);
    *(undefined4 *)(param_1 + 0x178) = param_3;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    if (*(char *)(param_4 + 2) == '\x01') {
      uVar9 = param_4[1];
      *(undefined8 *)(param_1 + 0x158) = *param_4;
    }
    else {
      *(undefined8 *)(param_1 + 0x158) = 0;
      uVar9 = 0;
    }
    *(undefined8 *)(param_1 + 0x160) = uVar9;
    FUN_148e18c78(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0x2c8));
    if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03') {
      puVar11 = &local_58;
      local_40 = 0x18;
      local_58 = *puVar12;
      uStack_54 = *(undefined4 *)(param_1 + 0xf4);
      uStack_50 = *(undefined4 *)(param_1 + 0xf8);
      uStack_4c = *(undefined4 *)(param_1 + 0xfc);
      local_48 = *(undefined8 *)(param_1 + 0x100);
      local_38 = 4;
      FUN_1408834b4(param_1,&DAT_14cbd4328,puVar11);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar11 = (uint *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar11);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      puVar12 = &local_58;
      local_40 = 4;
      local_58 = (uint)*(byte *)(param_1 + 0xd0);
      local_38 = 2;
      FUN_1408834b4(param_1,&DAT_14cbd4330,puVar12);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar12 = (uint *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar12);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1862c FUN_148e1862c body=872 status=ok
// SIG undefined FUN_148e1862c(void)

void FUN_148e1862c(longlong param_1,undefined4 *param_2,float param_3)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined4 *local_240;
  undefined4 *local_238;
  undefined8 *local_230;
  undefined1 *local_228;
  int local_218;
  float local_214;
  float local_210;
  float local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_174;
  undefined4 local_148;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined2 local_ca;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar3 = FUN_14479d2ce(param_1 + 0x150);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xa8) != 0)) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_1410c6bfc(*(undefined8 *)(param_1 + 0x38));
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
        if (lVar5 == 0) {
          local_e8 = DAT_14c8464f0;
          local_f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_f8 = *(undefined8 *)(lVar5 + 0x260);
          uStack_f0 = *(undefined8 *)(lVar5 + 0x268);
          local_e8 = *(double *)(lVar5 + 0x270);
        }
        (**(code **)(*plVar4 + 0x820))(plVar4,&local_218,0);
        if (local_218 == 3) {
          dVar1 = (double)local_210;
          dVar7 = (double)local_214;
          dVar8 = dVar7;
        }
        else if (local_218 == 2) {
          dVar7 = (double)local_214;
          dVar8 = dVar7;
          dVar1 = dVar7;
        }
        else if (local_218 == 1) {
          dVar7 = (double)local_210;
          dVar8 = (double)local_214;
          dVar1 = (double)local_20c;
        }
        else {
          dVar7 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar1 = DAT_14c8464f0;
        }
        dVar9 = (double)param_3;
        local_100 = (float)(dVar1 * dVar9);
        local_104 = (float)(dVar8 * dVar9);
        if ((float)(dVar8 * dVar9) <= (float)(dVar7 * dVar9)) {
          local_104 = (float)(dVar7 * dVar9);
        }
        local_108 = 3;
        local_bc = 0;
        local_b8 = 0x101;
        local_90 = 0;
        local_88 = 0x800000000;
        local_70 = 0;
        local_68 = 0x400000000;
        local_d0 = 0;
        local_c4 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_ce = 0x1000000;
        local_c0 = 0;
        local_ca = 0x100;
        local_c8 = 1;
        FUN_144a85a22(&local_e0,*(undefined8 *)(param_1 + 0x38));
        local_118 = 0;
        uStack_110 = 0;
        local_238 = (undefined4 *)&DAT_14cad0f68;
        local_248 = (undefined8 *)&DAT_14cad0f08;
        local_240 = &local_108;
        FUN_1417bb7cc(lVar3,&local_118,&local_f8,&DAT_14c8463d0);
        if ((longlong)(int)uStack_110 != 0) {
          lVar5 = (longlong)(int)uStack_110 * 0x48;
          lVar6 = local_118;
          do {
            FUN_14485cccc(lVar6);
            FUN_144a85a22(&local_e0);
            lVar6 = lVar6 + 0x48;
            lVar5 = lVar5 + -0x48;
          } while (lVar5 != 0);
        }
        memset(&local_218,0,0x100);
        local_148 = 0xffffffff;
        local_214 = 1.0;
        local_174 = 0xffffffff;
        local_228 = &DAT_14cad0f10;
        local_248 = &DAT_14c8463d0;
        local_240 = (undefined4 *)CONCAT44(local_240._4_4_,2);
        local_238 = &local_108;
        local_230 = &local_e0;
        cVar2 = FUN_14021655c(lVar3,&local_218,&local_f8,param_2);
        if (cVar2 != '\0') {
          *(undefined8 *)(param_2 + 4) = local_1f8;
          *param_2 = local_208;
          param_2[1] = uStack_204;
          param_2[2] = uStack_200;
          param_2[3] = uStack_1fc;
        }
        if (local_118 != 0) {
          FUN_1400020a8();
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e18996 FUN_148e18996 body=736 status=ok
// SIG undefined FUN_148e18996(void)

void FUN_148e18996(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80 [3];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = (longlong *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) < 0) {
    FUN_148e21a8c(local_120);
  }
  plVar5 = (longlong *)FUN_1403dcec8(param_2);
  if ((longlong)(int)plVar5[1] != 0) {
    lVar8 = *plVar5;
    lVar9 = (longlong)(int)plVar5[1] * 0xf0;
    do {
      lVar6 = FUN_1418b0ad8(*(undefined8 *)(param_1 + 0x98),lVar8 + 4);
      lVar7 = FUN_1418b0ab2(lVar8 + 0x10,lVar6);
      if (lVar6 != 0 && lVar7 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0xae8);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) goto LAB_148e18a4d;
        local_118 = 0;
        lStack_110 = 0;
        local_108 = 0x3f800000;
        FUN_140e78e14(local_100);
        FUN_140e78e14(local_e0);
        local_c0 = 0;
        local_b8 = 0;
        local_a0 = DAT_14c8464f0;
        local_b0 = (undefined4)DAT_14c8464e0;
        uStack_ac = DAT_14c8464e0._4_4_;
        uStack_a8 = (undefined4)DAT_14c8464e8;
        uStack_a4 = DAT_14c8464e8._4_4_;
        local_118 = *(undefined8 *)(lVar8 + 0x28);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar7);
        }
        local_90 = local_90 & 0xffffffffffffff00;
        local_68 = 0;
        lStack_110 = lVar7;
        FUN_1456bb102(&local_90,*(undefined8 *)(param_1 + 0x38));
        uVar10 = FUN_140bb540c(lVar8,&local_90);
        local_108 = CONCAT44(local_108._4_4_,uVar10);
        FUN_144a5ac3a(&local_90);
        FUN_140e78ece(local_100,lVar8 + 0x30);
        FUN_140e78ece(local_e0,lVar8 + 0x50);
        local_c0 = 2;
        uVar4 = local_b8;
        if ((*(char *)(lVar8 + 0xe0) == '\x01') &&
           (FUN_1411e1c16(lVar6,&local_90), uVar4 = local_90, DAT_14c950c29 == '\x01')) {
          if (local_90 == 0) {
            uVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            uVar4 = local_90;
          }
        }
        local_b8 = uVar4;
        FUN_140657bfa(lVar3,&local_118);
        local_90 = *(ulonglong *)(lVar8 + 0x28);
        uStack_88 = 0;
        FUN_14485c47a(&uStack_88,lVar7);
        local_80[0] = 0;
        FUN_14485c47a(local_80,lVar3);
        iVar2 = *(int *)(param_1 + 0xe0);
        *(uint *)(param_1 + 0xe0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0xe4) < iVar2 + 1U) {
          FUN_148e21abc(local_120,iVar2);
        }
        lVar6 = *local_120;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar2 * 0x18) = local_80[0];
        puVar1 = (undefined4 *)(lVar6 + (longlong)iVar2 * 0x18);
        *puVar1 = (undefined4)local_90;
        puVar1[1] = local_90._4_4_;
        puVar1[2] = (undefined4)uStack_88;
        puVar1[3] = uStack_88._4_4_;
      }
LAB_148e18a4d:
      lVar8 = lVar8 + 0xf0;
      lVar9 = lVar9 + -0xf0;
    } while (lVar9 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e18c78 FUN_148e18c78 body=640 status=ok
// SIG undefined FUN_148e18c78(void)

void FUN_148e18c78(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_4f;
  char local_4e;
  undefined1 local_4d;
  ushort local_4c;
  undefined1 local_49;
  undefined1 local_47;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1 = param_1 + 0x150;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_14025708c(lVar3,DAT_14c9abbf0);
      if (lVar3 != 0) {
        lVar1 = lVar3 + 0x368;
        plVar4 = (longlong *)FUN_1470fa6fe(lVar1);
        lVar5 = FUN_1470fa6da(lVar1);
        if (((*plVar4 != DAT_14cbd4318) || (*(char *)(lVar5 + 0x13) != '\x01')) ||
           (*(char *)(lVar5 + 0x12) != param_2)) {
          local_5c = 0;
          local_54 = 0;
          local_4f = 0;
          local_4d = 0;
          local_4c = local_4c & 0xff;
          local_49 = 0;
          local_47 = 0;
          local_44 = 0xffffffff;
          uStack_3c = 0xffffffff;
          uStack_38 = 0;
          local_33 = 0;
          local_31 = 0;
          puVar6 = (undefined8 *)(lVar3 + 0xf8);
          if (param_2 == '\0') {
            if (*(int *)(lVar3 + 0x100) == 0) {
              *(undefined4 *)(lVar3 + 0x100) = 1;
              if (*(int *)(lVar3 + 0x104) == 0) {
                FUN_148e21b50();
              }
              puVar6 = (undefined8 *)*puVar6;
              *puVar6 = 0;
              puVar6[1] = 0x1ffffffff;
              puVar6[2] = 1;
              *(undefined4 *)(puVar6 + 3) = 0;
              *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f0000003f800000;
              *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
              *(undefined1 **)((longlong)puVar6 + 0x2c) = &DAT_3f8000003f800000;
              puVar6[7] = 0;
              puVar6[8] = 0;
              puVar6[9] = 0;
            }
            else {
              puVar6 = (undefined8 *)*puVar6;
            }
            *(undefined4 *)(puVar6 + 1) = 0;
            *(undefined4 *)(puVar6 + 3) = 0;
          }
          else {
            if (*(int *)(lVar3 + 0x100) == 0) {
              *(undefined4 *)(lVar3 + 0x100) = 1;
              if (*(int *)(lVar3 + 0x104) == 0) {
                FUN_148e21b50();
              }
              puVar6 = (undefined8 *)*puVar6;
              *puVar6 = 0;
              puVar6[1] = 0x1ffffffff;
              puVar6[2] = 1;
              *(undefined4 *)(puVar6 + 3) = 0;
              *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f0000003f800000;
              *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
              *(undefined1 **)((longlong)puVar6 + 0x2c) = &DAT_3f8000003f800000;
              puVar6[7] = 0;
              puVar6[8] = 0;
              puVar6[9] = 0;
            }
            else {
              puVar6 = (undefined8 *)*puVar6;
            }
            *(undefined4 *)(puVar6 + 1) = 0;
            *(undefined4 *)(puVar6 + 3) = 2;
            lVar3 = FUN_140d92dee(lVar1,&DAT_14cbd4318);
            if (lVar3 != 0) {
              FUN_1457a6fa4(&local_60,lVar3);
            }
            local_60 = 0;
            local_5c = 1;
            local_58 = 0;
            local_54 = 1;
            FUN_140798412(&local_68);
            local_44 = local_68;
            local_4c = 0x100;
          }
          local_4d = 1;
          local_4e = param_2;
          plVar4 = (longlong *)FUN_14479d2ce(param_1);
          (**(code **)(*plVar4 + 0xd78))(plVar4,&DAT_14cbd4318,&local_60);
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



// FUNCTION 148e18efa FUN_148e18efa body=540 status=ok
// SIG undefined FUN_148e18efa(void)

void FUN_148e18efa(longlong param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x180) == '\x01') {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
    if (lVar9 == 0) {
      puVar8 = &DAT_14c8464e0;
      uVar12 = (undefined4)DAT_14c8464f0;
      uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
      puVar8 = (undefined8 *)(lVar9 + 0x260);
    }
    uVar2 = *(undefined4 *)((longlong)puVar8 + 4);
    uVar3 = *(undefined4 *)(puVar8 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)puVar8;
    *(undefined4 *)(param_1 + 0x134) = uVar2;
    *(undefined4 *)(param_1 + 0x138) = uVar3;
    *(undefined4 *)(param_1 + 0x13c) = uVar4;
    *(ulonglong *)(param_1 + 0x140) = CONCAT44(uVar13,uVar12);
    *(undefined1 *)(param_1 + 0x148) = 1;
    puVar11 = (uint *)(param_1 + 0xf0);
    if (puVar11 != param_2) {
      *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 4);
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *puVar11 = *param_2;
      *(uint *)(param_1 + 0xf4) = uVar5;
      *(uint *)(param_1 + 0xf8) = uVar6;
      *(uint *)(param_1 + 0xfc) = uVar7;
      *(undefined1 *)(param_1 + 0x108) = 1;
    }
    lVar9 = *(longlong *)(param_1 + 0xe8);
    if (*(char *)(lVar9 + 0x501) == '\x01') {
      FUN_148e1862c(param_1,puVar11,*(undefined4 *)(lVar9 + 0x504));
      lVar9 = *(longlong *)(param_1 + 0xe8);
    }
    *(undefined1 *)(param_1 + 0xd0) = 3;
    FUN_148e18996(param_1,lVar9 + 0x2d8);
    uVar12 = param_3[1];
    uVar13 = param_3[2];
    uVar2 = param_3[3];
    *(undefined4 *)(param_1 + 0x168) = *param_3;
    *(undefined4 *)(param_1 + 0x16c) = uVar12;
    *(undefined4 *)(param_1 + 0x170) = uVar13;
    *(undefined4 *)(param_1 + 0x174) = uVar2;
    *(undefined4 *)(param_1 + 0x178) = param_4;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    FUN_148e18c78(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0x500));
    if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03') {
      puVar10 = &local_58;
      local_40 = 0x18;
      local_58 = *puVar11;
      uStack_54 = *(undefined4 *)(param_1 + 0xf4);
      uStack_50 = *(undefined4 *)(param_1 + 0xf8);
      uStack_4c = *(undefined4 *)(param_1 + 0xfc);
      local_48 = *(undefined8 *)(param_1 + 0x100);
      local_38 = 4;
      FUN_1408834b4(param_1,&DAT_14cbd4328,puVar10);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar10 = (uint *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar10);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      puVar11 = &local_58;
      local_40 = 4;
      local_58 = (uint)*(byte *)(param_1 + 0xd0);
      local_38 = 2;
      FUN_1408834b4(param_1,&DAT_14cbd4330,puVar11);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar11 = (uint *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar11);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e19118 FUN_148e19118 body=671 status=ok
// SIG undefined FUN_148e19118(void)

undefined8 FUN_148e19118(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  bool bVar12;
  
  FUN_140880c0c();
  lVar5 = FUN_1403cba6c(*(undefined8 *)(param_1 + 0x38));
  if (lVar5 == 0) {
    return 1;
  }
  FUN_14485c47a(param_1 + 0x150,lVar5);
  if (*(char *)(param_1 + 0x148) == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
    if (lVar5 == 0) {
      puVar6 = &DAT_14c8464e0;
      uVar8 = DAT_14c8464f0;
    }
    else {
      puVar6 = (undefined8 *)(lVar5 + 0x260);
      uVar8 = *(undefined8 *)(lVar5 + 0x270);
    }
    uVar2 = puVar6[1];
    *(undefined8 *)(param_1 + 0x130) = *puVar6;
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    *(undefined8 *)(param_1 + 0x140) = uVar8;
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  if (*(char *)(param_1 + 0x108) == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
    if (lVar5 == 0) {
      puVar6 = &DAT_14c8464e0;
      uVar8 = DAT_14c8464f0;
    }
    else {
      puVar6 = (undefined8 *)(lVar5 + 0x260);
      uVar8 = *(undefined8 *)(lVar5 + 0x270);
    }
    puVar11 = (undefined1 *)(param_1 + 0x108);
    uVar2 = puVar6[1];
    *(undefined8 *)(param_1 + 0xf0) = *puVar6;
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    *(undefined8 *)(param_1 + 0x100) = uVar8;
  }
  else {
    puVar11 = (undefined1 *)(param_1 + 0xd0);
  }
  *puVar11 = 1;
  if (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x2c8) == '\x01') {
    FUN_148e18c78(param_1,1);
    FUN_148e193b8(param_1,0);
  }
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if (lVar5 == 0) goto LAB_148e1922d;
  lVar7 = FUN_1459f2b8e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_148e1922d;
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_148e19310:
    *(undefined8 *)(lVar5 + 0x40) = 0;
    plVar10 = *(longlong **)(lVar5 + 0x48);
    if (plVar10 == (longlong *)0x0) goto LAB_148e1922d;
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) {
      *(undefined8 *)(lVar5 + 0x48) = 0;
      goto LAB_148e1922d;
    }
    plVar9 = (longlong *)0x0;
    bVar12 = true;
LAB_148e19334:
    (**(code **)(*plVar10 + 0x10))();
    *(longlong **)(lVar5 + 0x48) = plVar9;
    if (bVar12) goto LAB_148e1922d;
  }
  else {
    iVar4 = (int)plVar9[1];
    do {
      if (iVar4 == 0) goto LAB_148e19310;
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar12 = iVar4 == iVar3;
      if (bVar12) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar12);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 *)(lVar5 + 0x40) = uVar8;
    if (*(longlong **)(lVar5 + 0x48) != plVar9) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(lVar5 + 0x48);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          bVar12 = false;
          goto LAB_148e19334;
        }
      }
      *(longlong **)(lVar5 + 0x48) = plVar9;
    }
  }
  LOCK();
  plVar10 = plVar9 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  LOCK();
  plVar10 = plVar9 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_148e1922d:
  plVar9 = *(longlong **)(param_1 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    uVar8 = FUN_140d929b2();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
    if (plVar9 != (longlong *)0x0) {
      uVar8 = FUN_140d929b2();
      plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
      if (plVar10 != (longlong *)0x0 && plVar9 != plVar10) {
        (**(code **)(*plVar10 + 0x40))(plVar10,DAT_14cbd4318,1);
      }
    }
  }
  return 0;
}



// FUNCTION 148e193b8 FUN_148e193b8 body=124 status=ok
// SIG undefined FUN_148e193b8(void)

void FUN_148e193b8(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03') {
    lVar1 = FUN_14479d2ce(param_1 + 0x150);
    if (lVar1 != 0) {
      lVar1 = FUN_14025708c(lVar1,DAT_14c9abbf0);
      if (lVar1 != 0) {
        lVar2 = FUN_140cddb32(lVar1 + 0x368);
        if ((*(char *)(lVar2 + 0x13) == '\x01') && ((*(byte *)(lVar2 + 0x12) & 1) != 0)) {
          lVar1 = FUN_140d92dee(lVar1 + 0x368,&DAT_14cbd4318);
          if (lVar1 != 0) {
            *(undefined1 *)(lVar1 + 0x2c) = param_2;
            *(undefined1 *)(lVar1 + 0x2d) = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148e19434 FUN_148e19434 body=1675 status=ok
// SIG undefined FUN_148e19434(void)

undefined4 FUN_148e19434(longlong param_1)

{
  undefined8 *_Dst;
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  double *pdVar16;
  float *pfVar17;
  undefined4 uVar18;
  longlong lVar19;
  byte bVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_108 [36];
  undefined4 local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  float local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  undefined4 local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar13 = FUN_14479d2ce(param_1 + 0x150);
  uVar18 = 1;
  if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0xa8) != 0)) &&
     (lVar13 = FUN_1447210f0(), lVar13 != 0)) {
    *(float *)(param_1 + 0x17c) = *(float *)(lVar13 + 0x6f4) + *(float *)(param_1 + 0x17c);
    lVar13 = FUN_14479d2ce(param_1 + 0x150);
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_14025708c(lVar13);
    }
    lVar19 = lVar13 + 0x368;
    local_d0 = (longlong *)(lVar13 + 0x240);
    local_d8 = param_1 + 0x158;
    local_e4 = 0;
    bVar10 = *(byte *)(param_1 + 0xd0);
    local_e0 = lVar19;
    do {
      bVar20 = bVar10;
      switch(bVar20) {
      case 1:
        lVar14 = *(longlong *)(param_1 + 0xe8);
        local_c8 = (float)((uint)local_c8._1_3_ << 8);
        local_a0 = 0;
        FUN_1456bb102(&local_c8,*(undefined8 *)(param_1 + 0x38));
        FUN_1448729ea(lVar14 + 0x1f0,local_98,&local_c8);
        fVar22 = (float)FUN_144a7ecd0(local_98);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar15 = local_98;
          if (0x18 < local_80) {
            ppppuVar15 = (undefined8 ****)local_98[0];
          }
          (*pcVar3)(ppppuVar15);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(local_98[0]);
        }
        FUN_144a5ac3a(&local_c8);
        lVar14 = FUN_1401e2d36(*(longlong *)(param_1 + 0xe8) + 0x240);
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x78) != 0)) {
          fVar23 = (float)FUN_1448c9f94(lVar14,*(undefined4 *)(param_1 + 0x17c),0x3f800000);
          fVar22 = fVar22 * fVar23;
        }
        local_c8 = fVar22 * *(float *)(param_1 + 0x178);
        cVar11 = FUN_148e19ac0(param_1);
        if (cVar11 != '\0') {
          *(undefined1 *)(param_1 + 0xd0) = 2;
          *(undefined4 *)(param_1 + 0x17c) = 0;
          cVar11 = FUN_14113f0c0(local_d8);
          if (cVar11 != '\0') {
            FUN_148bc16c3(local_d8);
          }
          FUN_148e193b8(param_1);
        }
        if ((((lVar13 != 0) && (lVar14 = FUN_140cddb32(lVar19), *(char *)(lVar14 + 0x13) == '\x01'))
            && ((*(byte *)(lVar14 + 0x12) & 1) != 0)) &&
           (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x2d0) == '\x01')) {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
          if (lVar14 == 0) {
            pdVar16 = (double *)&DAT_14c8464e0;
            dVar25 = DAT_14c8464f0;
          }
          else {
            pdVar16 = (double *)(lVar14 + 0x260);
            dVar25 = *(double *)(lVar14 + 0x270);
          }
          dVar26 = *(double *)(param_1 + 0xf8) - pdVar16[1];
          dVar6 = *(double *)(param_1 + 0xf0) - *pdVar16;
          dVar5 = *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x140);
          dVar24 = *(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x138);
          dVar4 = *(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0x130);
          dVar25 = *(double *)(param_1 + 0x100) - dVar25;
          fVar22 = 1.0 - *(float *)(*(longlong *)(param_1 + 0xe8) + 0x2d4);
          if (((float)(dVar25 * dVar25 + dVar6 * dVar6 + dVar26 * dVar26) <
               fVar22 * fVar22 * (float)(dVar5 * dVar5 + dVar4 * dVar4 + dVar24 * dVar24)) &&
             (lVar14 = FUN_140d92dee(lVar19), lVar14 != 0)) {
            *(undefined2 *)(lVar14 + 0x18) = 0x101;
          }
        }
        break;
      case 2:
        if (((lVar13 != 0) && (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x2d1) != '\0')) &&
           ((lVar14 = FUN_140cddb32(lVar19), *(char *)(lVar14 + 0x13) == '\x01' &&
            (((*(byte *)(lVar14 + 0x12) & 1) != 0 && (*(int *)(lVar13 + 600) != 0)))))) {
          puVar2 = *(undefined8 **)(lVar13 + 0x250);
          iVar1 = *(int *)(lVar13 + 0x248);
          uVar12 = iVar1 + 1;
          *(uint *)(lVar13 + 0x248) = uVar12;
          if (*(uint *)(lVar13 + 0x24c) < uVar12) {
            FUN_141020442(local_d0);
          }
          lVar14 = *local_d0;
          lVar21 = (longlong)iVar1 * 0xb0;
          _Dst = (undefined8 *)(lVar14 + lVar21);
          memset(_Dst,0,0xb0);
          *(undefined8 *)(lVar14 + lVar21) = *puVar2;
          lVar19 = local_e0;
          if ((puVar2 != _Dst) && (*(char *)(puVar2 + 6) == '\x01')) {
            lVar14 = lVar14 + lVar21;
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            uVar9 = puVar2[5];
            *(undefined8 *)(lVar14 + 0x20) = puVar2[4];
            *(undefined8 *)(lVar14 + 0x28) = uVar9;
            *(undefined8 *)(lVar14 + 0x10) = uVar7;
            *(undefined8 *)(lVar14 + 0x18) = uVar8;
            *(undefined1 *)(_Dst + 6) = 1;
          }
        }
        break;
      case 3:
        lVar14 = *(longlong *)(param_1 + 0xe8);
        local_c8 = (float)((uint)local_c8._1_3_ << 8);
        local_a0 = 0;
        FUN_1456bb102(&local_c8,*(undefined8 *)(param_1 + 0x38));
        FUN_1448729ea(lVar14 + 0x428,local_98,&local_c8);
        fVar22 = (float)FUN_144a7ecd0(local_98);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar15 = local_98;
          if (0x18 < local_80) {
            ppppuVar15 = (undefined8 ****)local_98[0];
          }
          (*pcVar3)(ppppuVar15);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(local_98[0]);
        }
        FUN_144a5ac3a(&local_c8);
        lVar14 = FUN_1401e2d36(*(longlong *)(param_1 + 0xe8) + 0x478);
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x78) != 0)) {
          fVar23 = (float)FUN_1448c9f94(lVar14,*(undefined4 *)(param_1 + 0x17c),0x3f800000);
          fVar22 = fVar22 * fVar23;
        }
        local_c8 = fVar22 * *(float *)(param_1 + 0x178);
        cVar11 = FUN_148e19ac0(param_1);
        if (cVar11 != '\0') {
          *(undefined1 *)(param_1 + 0xd0) = 2;
          FUN_148e18996(param_1);
          cVar11 = FUN_14113f0c0(param_1 + 0x168);
          if (cVar11 != '\0') {
            FUN_148bc165c(param_1 + 0x168);
          }
          FUN_148e19dd8(param_1);
          FUN_148e193b8(param_1);
        }
        break;
      case 4:
        FUN_148e193b8(param_1);
        local_e4 = 1;
      }
      bVar10 = *(byte *)(param_1 + 0xd0);
    } while (*(byte *)(param_1 + 0xd0) != bVar20);
    uVar18 = local_e4;
    if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03') {
      pfVar17 = &local_c8;
      local_b0 = 4;
      local_c8 = (float)(uint)bVar20;
      local_a8 = 2;
      FUN_1408834b4(param_1,&DAT_14cbd4330,pfVar17);
      uVar18 = local_e4;
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_b0) {
          pfVar17 = (float *)CONCAT44(uStack_c4,local_c8);
        }
        (*pcVar3)(pfVar17);
      }
      if (0x18 < local_b0) {
        FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 148e19ac0 FUN_148e19ac0 body=791 status=ok
// SIG undefined FUN_148e19ac0(void)

ulonglong FUN_148e19ac0(longlong param_1,float *param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x108) == '\x01') {
    lVar8 = param_1 + 0x150;
    pfVar10 = param_2;
    cVar5 = FUN_144729dda(lVar8);
    if (cVar5 != '\0') {
      lVar7 = FUN_14479d2ce(lVar8);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0xa8) != 0)) {
        lVar7 = FUN_1447210f0();
        if (lVar7 != 0) {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
          if (lVar12 == 0) {
            pdVar9 = (double *)&DAT_14c8464e0;
            dVar13 = DAT_14c8464f0;
          }
          else {
            pdVar9 = (double *)(lVar12 + 0x260);
            dVar13 = *(double *)(lVar12 + 0x270);
          }
          if (*(char *)(param_1 + 0x128) == '\0') {
            dVar17 = *pdVar9;
            dVar18 = pdVar9[1];
          }
          else {
            dVar17 = *(double *)(param_1 + 0x110);
            dVar18 = *(double *)(param_1 + 0x118);
            dVar13 = *(double *)(param_1 + 0x120);
          }
          dVar16 = *(double *)(param_1 + 0x100) - dVar13;
          dVar15 = *(double *)(param_1 + 0xf8) - dVar18;
          dVar14 = *(double *)(param_1 + 0xf0) - dVar17;
          fVar19 = (float)(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15);
          fVar20 = *(float *)(*(longlong *)(param_1 + 0xe8) + 0x1e8);
          uVar11 = CONCAT71((int7)((ulonglong)pfVar10 >> 8),1);
          if (fVar19 < fVar20 * fVar20) goto LAB_148e19d83;
          fVar19 = SQRT(fVar19);
          dVar4 = 1.0 / (double)fVar19;
          fVar20 = *(float *)(lVar7 + 0x6f4) * *param_2;
          if (fVar20 <= fVar19) {
            fVar19 = fVar20;
          }
          dVar3 = (double)fVar19;
          local_78 = dVar13 + dVar16 * dVar4 * dVar3;
          dStack_80 = dVar18 + dVar15 * dVar4 * dVar3;
          local_88 = dVar17 + dVar14 * dVar4 * dVar3;
          if (&local_88 != (double *)(param_1 + 0x110)) {
            *(double *)(param_1 + 0x120) = local_78;
            *(double *)(param_1 + 0x110) = local_88;
            *(double *)(param_1 + 0x118) = dStack_80;
            *(undefined1 *)(param_1 + 0x128) = 1;
          }
          lVar8 = FUN_14479d2ce(lVar8);
          if (lVar8 != 0) {
            lVar8 = FUN_14025708c(lVar8);
            if (lVar8 != 0) {
              lVar7 = FUN_140cddb32(lVar8 + 0x368);
              if ((*(char *)(lVar7 + 0x13) == '\x01') && ((*(byte *)(lVar7 + 0x12) & 1) != 0)) {
                if (*(int *)(lVar8 + 600) != 0) {
                  iVar2 = *(int *)(lVar8 + 0x248);
                  uVar6 = iVar2 + 1;
                  *(uint *)(lVar8 + 0x248) = uVar6;
                  if (*(uint *)(lVar8 + 0x24c) < uVar6) {
                    FUN_141020442(lVar8 + 0x240);
                  }
                  lVar7 = *(longlong *)(lVar8 + 0x240);
                  lVar12 = (longlong)iVar2 * 0xb0;
                  _Dst = (void *)(lVar7 + lVar12);
                  memset(_Dst,0,0xb0);
                  puVar1 = (undefined8 *)(lVar7 + lVar12);
                  *puVar1 = **(undefined8 **)(lVar8 + 0x250);
                  if (&local_88 != (double *)(puVar1 + 8)) {
                    puVar1[10] = local_78;
                    puVar1[8] = local_88;
                    puVar1[9] = dStack_80;
                    *(undefined1 *)((longlong)_Dst + 0x58) = 1;
                  }
                }
                goto LAB_148e19d81;
              }
            }
          }
          local_98 = 0;
          FUN_1413dd462(*(undefined8 *)(param_1 + 0x38),&local_88,0,0);
        }
      }
    }
  }
LAB_148e19d81:
  uVar11 = 0;
LAB_148e19d83:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e19dd8 FUN_148e19dd8 body=68 status=ok
// SIG undefined FUN_148e19dd8(void)

void FUN_148e19dd8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_1459f2b8e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148bc17e2(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148e19e1c FUN_148e19e1c body=459 status=ok
// SIG undefined FUN_148e19e1c(void)

void FUN_148e19e1c(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined1 local_44;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140670e42();
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) goto LAB_148e19e63;
  lVar3 = FUN_144a78b9e();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_148e19e63;
  if (*(longlong *)(lVar4 + 0x11e8) != 0) {
    FUN_1409df526(*(longlong *)(lVar4 + 0x11e8),&DAT_14cbd4318);
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x150);
  if (lVar4 == 0) goto LAB_148e19e63;
  lVar4 = FUN_14025708c(lVar4,DAT_14c9abbf0);
  if (lVar4 == 0) goto LAB_148e19e63;
  if (*(int *)(lVar4 + 0x100) != 0) {
    *(undefined4 *)(*(longlong *)(lVar4 + 0xf8) + 0x18) = 0;
  }
  uVar2 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3f = 0;
  local_3b = 0;
  local_37 = 0;
  local_34 = 0xffffffff;
  uStack_30 = 0;
  uStack_2c = 0xffffffff;
  uStack_28 = 0;
  local_23 = 0;
  local_21 = 0;
  local_3e = 0x101;
  local_3a = 0x101;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x508);
  if (iVar1 == 1) {
LAB_148e19f24:
    local_37 = 1;
    local_38 = uVar2;
  }
  else if (iVar1 == 2) {
    uVar2 = 1;
    goto LAB_148e19f24;
  }
  FUN_14079848a();
  FUN_14124a00a(lVar4 + 0x368,&DAT_14cbd4318);
  FUN_140d94080(lVar4 + 0x368,&DAT_14cbd4320,local_50);
  *(undefined1 *)(param_1 + 0x180) = 0;
  if (*(int *)(lVar4 + 0x100) != 0) {
    *(undefined4 *)(*(longlong *)(lVar4 + 0xf8) + 0x18) = 0;
  }
  plVar6 = *(longlong **)(param_1 + 0x38);
  if (plVar6 != (longlong *)0x0) {
    uVar5 = FUN_140d929b2();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_140d929b2();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
        (**(code **)(*plVar7 + 0x40))(plVar7,DAT_14cbd4318,0);
      }
    }
  }
LAB_148e19e63:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e19ff0 FUN_148e19ff0 body=265 status=ok
// SIG undefined FUN_148e19ff0(void)

void FUN_148e19ff0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03') {
    if (*param_2 == DAT_14cbd4330) {
      cVar1 = FUN_1405d5f74(param_3);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xd0);
      if (*param_2 == DAT_14cbd4328) {
        FUN_144a7b7fe(param_3,&local_38);
        if (&local_38 != (undefined8 *)(param_1 + 0xf0)) {
          *(ulonglong *)(param_1 + 0x100) = CONCAT71(uStack_27,local_28);
          *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_38;
          *(undefined4 *)(param_1 + 0xf4) = local_38._4_4_;
          *(undefined4 *)(param_1 + 0xf8) = (undefined4)uStack_30;
          *(undefined4 *)(param_1 + 0xfc) = uStack_30._4_4_;
          *(undefined1 *)(param_1 + 0x108) = 1;
        }
      }
    }
    if (*(char *)(param_1 + 0x108) == '\x01') {
      if (cVar1 == '\x03') {
        local_38 = 0;
        uStack_30 = 0;
        FUN_148e18efa(param_1,param_1 + 0xf0,&local_38,*(undefined4 *)(param_1 + 0x178));
      }
      else {
        if (cVar1 != '\x01') goto LAB_148e1a013;
        local_28 = 0;
        FUN_148e183ee(param_1,param_1 + 0xf0,*(undefined4 *)(param_1 + 0x178));
      }
      FUN_148e193b8(param_1,1);
    }
  }
LAB_148e1a013:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1a0fa FUN_148e1a0fa body=533 status=ok
// SIG undefined FUN_148e1a0fa(void)

void FUN_148e1a0fa(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0 && param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        uVar3 = FUN_144a7b040();
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_144a7b040();
          plVar6 = (longlong *)FUN_144718840(plVar4,uVar3);
          if (plVar6 != (longlong *)0x0 && plVar4 != plVar6) {
            cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
            if (cVar2 != '\0') goto LAB_148e1a172;
          }
        }
        uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
        cVar2 = FUN_143e50aa0(uVar3,param_2);
        if (cVar2 == '\0') {
          uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
          local_68 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          uStack_60 = 0x8000000000;
          local_58 = 0xffffffff;
          FUN_14096df60(uVar3,param_2,0,&local_88);
          uStack_40 = uStack_40 & 0xffffffff00000000;
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_88);
        }
        uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
        FUN_1489a6964(uVar3,&local_88,param_2);
        plVar4 = plStack_80;
        if (local_88 != 0) {
          if (plStack_80 == (longlong *)0x0) {
            FUN_148e183ee(local_88,param_3,param_5,param_4);
          }
          else {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
            FUN_148e183ee(local_88,param_3,param_5,param_4);
            LOCK();
            plVar5 = plVar4 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
        }
        plVar4 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_80 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
  }
LAB_148e1a172:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1a310 FUN_148e1a310 body=67 status=ok
// SIG undefined FUN_148e1a310(void)

void FUN_148e1a310(void)

{
  undefined4 in_XMM3_Da;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_c = 0;
  local_28 = in_XMM3_Da;
  FUN_148e1a0fa();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1a354 FUN_148e1a354 body=89 status=ok
// SIG undefined FUN_148e1a354(void)

void FUN_148e1a354(void)

{
  undefined8 *in_R9;
  undefined4 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *in_R9;
  local_18 = in_R9[1];
  local_10 = 1;
  local_28 = in_stack_00000028;
  FUN_148e1a0fa();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1a3ae FUN_148e1a3ae body=440 status=ok
// SIG undefined FUN_148e1a3ae(void)

void FUN_148e1a3ae(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        uVar3 = FUN_144a7b040();
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_144a7b040();
          plVar6 = (longlong *)FUN_144718840(plVar4,uVar3);
          if (plVar6 != (longlong *)0x0 && plVar4 != plVar6) {
            cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
            if (cVar2 != '\0') goto LAB_148e1a416;
          }
        }
        uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
        uVar7 = FUN_1458d5cdc();
        FUN_140d92a98(uVar3,&local_40,uVar7);
        plVar4 = local_38;
        if (local_40 != 0) {
          if (local_38 == (longlong *)0x0) {
            local_50 = *param_3;
            local_48 = param_3[1];
            FUN_148e18efa(local_40,param_2,&local_50,0x3f800000);
          }
          else {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
            local_50 = *param_3;
            local_48 = param_3[1];
            FUN_148e18efa(local_40,param_2,&local_50,0x3f800000);
            LOCK();
            plVar5 = plVar4 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_38 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      }
    }
  }
LAB_148e1a416:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1a568 FUN_148e1a568 body=278 status=ok
// SIG undefined FUN_148e1a568(void)

void FUN_148e1a568(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4);
        uVar5 = FUN_1458d5cdc();
        FUN_140d92a98(uVar2,&local_28,uVar5);
        plVar3 = local_20;
        if (local_28 != 0) {
          if (local_20 == (longlong *)0x0) {
            *(undefined1 *)(local_28 + 0xd0) = 4;
          }
          else {
            LOCK();
            *(int *)(local_20 + 1) = (int)local_20[1] + 1;
            UNLOCK();
            *(undefined1 *)(local_28 + 0xd0) = 4;
            LOCK();
            plVar4 = local_20 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_20)(local_20);
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
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_20 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)local_20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_20 + 0x10))(local_20);
            }
          }
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



// FUNCTION 148e1a680 FUN_148e1a680 body=148 status=ok
// SIG undefined FUN_148e1a680(void)

void FUN_148e1a680(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [60];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    iVar5 = *(int *)(puVar3 + 1);
    do {
      if (iVar5 == 0) goto LAB_148e1a6ee;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar6 = iVar5 == iVar2;
      if (bVar6) {
        *(int *)(puVar3 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
    } while (!bVar6);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (lVar4 != 0) {
      local_1c = 0;
      FUN_148e183ee(lVar4,param_2,*(undefined4 *)(lVar4 + 0x178));
    }
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
LAB_148e1a6ee:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1a726 FUN_148e1a726 body=150 status=ok
// SIG undefined FUN_148e1a726(void)

void FUN_148e1a726(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    iVar5 = *(int *)(puVar3 + 1);
    do {
      if (iVar5 == 0) goto LAB_148e1a794;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar6 = iVar5 == iVar2;
      if (bVar6) {
        *(int *)(puVar3 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
    } while (!bVar6);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (lVar4 != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_148e18efa(lVar4,param_2,&local_28,*(undefined4 *)(lVar4 + 0x178));
    }
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_148e1a794:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1a7ce FUN_148e1a7ce body=89 status=ok
// SIG undefined FUN_148e1a7ce(void)

void FUN_148e1a7ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xd0) = 4;
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
                    /* WARNING: Could not recover jumptable at 0x000148e1a81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e1a828 FUN_148e1a828 body=38 status=ok
// SIG undefined FUN_148e1a828(void)

void FUN_148e1a828(longlong param_1,undefined8 param_2)

{
  FUN_140b168f0();
  FUN_148e1a84e(param_1 + -0x3d8,param_2);
  return;
}



// FUNCTION 148e1a84e FUN_148e1a84e body=320 status=ok
// SIG undefined FUN_148e1a84e(void)

void FUN_148e1a84e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined1 local_79;
  undefined1 local_78 [40];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar1 = FUN_144a7cbb2();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (plVar2 = *(longlong **)(param_2 + 0x3c0), plVar2 != (longlong *)0x0)) {
      lVar1 = FUN_1449f3324();
      if (((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
           lVar1 + 0x30)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x1098))(plVar2), plVar2 != (longlong *)0x0))
      {
        local_79 = 0xff;
        if ((longlong)*(int *)(param_1 + 0x628) != 0) {
          lVar1 = *(longlong *)(param_1 + 0x620);
          lVar4 = (longlong)*(int *)(param_1 + 0x628) * 0x38;
          do {
            FUN_1400750e6(local_78,lVar1);
            if (*(char *)(param_1 + 0x618) == '\x01') {
              local_80 = 0;
              lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,local_78,&local_80);
              if (lVar3 == 0) goto LAB_148e1a959;
            }
            else {
LAB_148e1a959:
              (**(code **)(*plVar2 + 0x40))
                        (plVar2,local_78,&local_79,(longlong)*(int *)(param_1 + 0x61c));
            }
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            lVar1 = lVar1 + 0x38;
            lVar4 = lVar4 + -0x38;
          } while (lVar4 != 0);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1a990 FUN_148e1a990 body=173 status=ok
// SIG undefined FUN_148e1a990(void)

undefined8 * FUN_148e1a990(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a7c5f6(&DAT_14cbd44c8);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"CampaignProgressInfoText",0);
    FUN_140ac6c96(&local_48,&DAT_14cbd44c8);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = DAT_14cbd44c8;
  *param_1 = DAT_14cbd44c8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cbd44d0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1aa3e FUN_148e1aa3e body=219 status=ok
// SIG undefined FUN_148e1aa3e(void)

longlong FUN_148e1aa3e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [216];
  undefined1 local_1d0 [216];
  undefined1 local_f8 [216];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_1406fd608(local_2a8);
  FUN_1406fd608(local_1d0,local_2a8);
  FUN_1406fd608(local_f8,local_1d0);
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x430;
    do {
      cVar1 = FUN_140991644(local_f8,lVar3 + 0x218);
      if (cVar1 != '\0') goto LAB_148e1aace;
      lVar3 = lVar3 + 0x430;
      lVar2 = lVar2 + -0x430;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_148e1aace:
  FUN_140368b56(local_f8);
  FUN_140368b56(local_1d0);
  FUN_140368b56(local_2a8);
  if ((local_20 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1ab1a FUN_148e1ab1a body=45 status=ok
// SIG undefined FUN_148e1ab1a(void)

longlong FUN_148e1ab1a(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x430;
    do {
      if (*(int *)(lVar1 + 8) == *param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x430;
      lVar2 = lVar2 + -0x430;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 148e1ab48 FUN_148e1ab48 body=160 status=ok
// SIG undefined FUN_148e1ab48(void)

longlong FUN_148e1ab48(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x430 + lVar2;
  iVar1 = (int)param_2[1];
LAB_148e1ab72:
  if (iVar1 == *(int *)(lVar2 + 0x1f8)) {
    if (iVar1 < 2) {
      return lVar2;
    }
    lVar8 = 0;
    do {
      uVar6 = *(ushort *)(*param_2 + lVar8);
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(ushort *)(*(longlong *)(lVar2 + 0x1f0) + lVar8);
      if (uVar6 == uVar4) {
        if (uVar6 == 0) {
          return lVar2;
        }
      }
      else {
        if (0x7f < (uVar4 | uVar6)) goto LAB_148e1abe0;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar5]) goto LAB_148e1abe0;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  if (*(int *)(lVar2 + 0x1f8) + iVar1 == 1) {
    return lVar2;
  }
  goto LAB_148e1abce;
LAB_148e1abe0:
  if (uVar6 == uVar4) {
    return lVar2;
  }
LAB_148e1abce:
  lVar2 = lVar2 + 0x430;
  if (lVar2 == lVar3) {
    return 0;
  }
  goto LAB_148e1ab72;
}



// FUNCTION 148e1abe8 FUN_148e1abe8 body=6 status=ok
// SIG undefined FUN_148e1abe8(void)

int FUN_148e1abe8(int *param_1)

{
  return param_1[2] - *param_1;
}



// FUNCTION 148e1abee FUN_148e1abee body=9 status=ok
// SIG undefined FUN_148e1abee(void)

undefined4 FUN_148e1abee(int *param_1)

{
  return CONCAT31((int3)((uint)param_1[2] >> 8),param_1[2] <= *param_1);
}



// FUNCTION 148e1abf8 FUN_148e1abf8 body=747 status=ok
// SIG undefined FUN_148e1abf8(void)

void FUN_148e1abf8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x24);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_1408be2c4(lVar1,0);
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x448 + lVar9;
    do {
      FUN_1412fabe8(lVar1,lVar9 + 0x80);
      FUN_1412fabe8(lVar1,lVar9 + 0xf0);
      FUN_1412fabe8(lVar1,lVar9 + 0x120);
      FUN_1412fabe8(lVar1,lVar9 + 0x170);
      FUN_1412fabe8(lVar1,lVar9 + 400);
      FUN_1412fabe8(lVar1,lVar9 + 0x1a8);
      pcVar6 = "equipped";
      if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
        pcVar6 = "unequipped";
      }
      FUN_1400b22c2(local_58,pcVar6);
      FUN_1405e9454(lVar1,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(uint *)(lVar9 + 0x18);
      if ((uVar3 & 4) != 0) {
        FUN_1400b22c2(local_58,"trash");
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
      }
      if ((uVar3 & 2) != 0) {
        FUN_1400b22c2(local_58,"favorite");
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
      }
      if ((uVar3 & 8) != 0) {
        FUN_1400b22c2(local_58,"bankdeposit");
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong)*(int *)(lVar9 + 0x418) != 0) {
        plVar4 = *(longlong **)(lVar9 + 0x410);
        lVar5 = (longlong)*(int *)(lVar9 + 0x418) * 0x18;
        do {
          if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0x18) == '\x04')) {
            if ((plVar4 != (longlong *)0x0) && ((int)plVar4[2] != 0)) {
              FUN_1400b22c2(local_58,"firmware");
              FUN_1405e9454(lVar1,local_58);
              if (local_58[0] != 0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          plVar4 = plVar4 + 3;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      uVar3 = *(uint *)(lVar9 + 0x18);
      if ((uVar3 & 0x10) == 0) {
        if ((uVar3 & 0x20) != 0) {
          pcVar6 = "taggroup2";
          goto LAB_148e1adec;
        }
        if ((uVar3 & 0x40) != 0) {
          pcVar6 = "taggroup3";
          goto LAB_148e1adec;
        }
        if ((char)uVar3 < '\0') {
          pcVar6 = "taggroup4";
          goto LAB_148e1adec;
        }
      }
      else {
        pcVar6 = "taggroup1";
LAB_148e1adec:
        FUN_1400b22c2(local_58,pcVar6);
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong)*(int *)(lVar9 + 0x58) != 0) {
        lVar5 = *(longlong *)(lVar9 + 0x50);
        lVar8 = (longlong)*(int *)(lVar9 + 0x58) << 4;
        do {
          FUN_1412fabe8(lVar1,lVar5);
          lVar5 = lVar5 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      lVar9 = lVar9 + 0x448;
    } while (lVar9 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1aee4 FUN_148e1aee4 body=747 status=ok
// SIG undefined FUN_148e1aee4(void)

void FUN_148e1aee4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x24);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_1408be2c4(lVar1,0);
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x430 + lVar9;
    do {
      FUN_1412fabe8(lVar1,lVar9 + 0x80);
      FUN_1412fabe8(lVar1,lVar9 + 0xf0);
      FUN_1412fabe8(lVar1,lVar9 + 0x120);
      FUN_1412fabe8(lVar1,lVar9 + 0x170);
      FUN_1412fabe8(lVar1,lVar9 + 400);
      FUN_1412fabe8(lVar1,lVar9 + 0x1a8);
      pcVar6 = "equipped";
      if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
        pcVar6 = "unequipped";
      }
      FUN_1400b22c2(local_58,pcVar6);
      FUN_1405e9454(lVar1,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(uint *)(lVar9 + 0x18);
      if ((uVar3 & 4) != 0) {
        FUN_1400b22c2(local_58,"trash");
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
      }
      if ((uVar3 & 2) != 0) {
        FUN_1400b22c2(local_58,"favorite");
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
      }
      if ((uVar3 & 8) != 0) {
        FUN_1400b22c2(local_58,"bankdeposit");
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong)*(int *)(lVar9 + 0x418) != 0) {
        plVar4 = *(longlong **)(lVar9 + 0x410);
        lVar5 = (longlong)*(int *)(lVar9 + 0x418) * 0x18;
        do {
          if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0x18) == '\x04')) {
            if ((plVar4 != (longlong *)0x0) && ((int)plVar4[2] != 0)) {
              FUN_1400b22c2(local_58,"firmware");
              FUN_1405e9454(lVar1,local_58);
              if (local_58[0] != 0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          plVar4 = plVar4 + 3;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      uVar3 = *(uint *)(lVar9 + 0x18);
      if ((uVar3 & 0x10) == 0) {
        if ((uVar3 & 0x20) != 0) {
          pcVar6 = "taggroup2";
          goto LAB_148e1b0d8;
        }
        if ((uVar3 & 0x40) != 0) {
          pcVar6 = "taggroup3";
          goto LAB_148e1b0d8;
        }
        if ((char)uVar3 < '\0') {
          pcVar6 = "taggroup4";
          goto LAB_148e1b0d8;
        }
      }
      else {
        pcVar6 = "taggroup1";
LAB_148e1b0d8:
        FUN_1400b22c2(local_58,pcVar6);
        FUN_1405e9454(lVar1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong)*(int *)(lVar9 + 0x58) != 0) {
        lVar5 = *(longlong *)(lVar9 + 0x50);
        lVar8 = (longlong)*(int *)(lVar9 + 0x58) << 4;
        do {
          FUN_1412fabe8(lVar1,lVar5);
          lVar5 = lVar5 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      lVar9 = lVar9 + 0x430;
    } while (lVar9 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1b1d0 FUN_148e1b1d0 body=218 status=ok
// SIG undefined FUN_148e1b1d0(void)

longlong * FUN_148e1b1d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    lVar6 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      if ((*(int *)(param_1 + 0x20) == 0) ||
         (cVar4 = FUN_144a23846(param_1 + 0x18,puVar5), cVar4 != '\0')) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(param_2,iVar2);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar3 + lVar7);
        *(undefined8 *)(lVar3 + lVar7) = 0;
        iVar2 = *(int *)(puVar5 + 1);
        _Src = (void *)*puVar5;
        *(int *)(lVar3 + 8 + lVar7) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return param_2;
}



// FUNCTION 148e1b2aa FUN_148e1b2aa body=95 status=ok
// SIG undefined FUN_148e1b2aa(void)

longlong FUN_148e1b2aa(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1459172b8(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x50 + *param_1;
  }
  lVar3 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 148e1b30a FUN_148e1b30a body=63 status=ok
// SIG undefined FUN_148e1b30a(void)

void FUN_148e1b30a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar4);
  FUN_148e22b28(param_1,uVar3,param_2);
  return;
}



// FUNCTION 148e1b34a FUN_148e1b34a body=120 status=ok
// SIG undefined FUN_148e1b34a(void)

void FUN_148e1b34a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  lVar4 = FUN_148e22b28(param_1,uVar3,param_2);
  iVar1 = *(int *)(lVar4 + 0x34);
  FUN_1447a1747(*(undefined8 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x30));
  *(undefined4 *)(lVar4 + 0x30) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar4 + 0x34) != 0)) {
    FUN_1408be2c4(lVar4 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 148e1b3c2 FUN_148e1b3c2 body=80 status=ok
// SIG undefined FUN_148e1b3c2(void)

void FUN_148e1b3c2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  lVar4 = FUN_148e22b28(param_1,uVar3,param_2);
  FUN_1412fabe8(lVar4 + 0x28,param_3);
  return;
}



// FUNCTION 148e1b412 FUN_148e1b412 body=123 status=ok
// SIG undefined FUN_148e1b412(void)

void FUN_148e1b412(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  lVar4 = FUN_148e22b28(param_1,uVar3,param_2);
  local_28 = param_3;
  FUN_140c8411c(lVar4 + 0x28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1b48e FUN_148e1b48e body=194 status=ok
// SIG undefined FUN_148e1b48e(void)

longlong FUN_148e1b48e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = (int)param_2[1];
  if ((iVar1 < 2) || ((longlong)*(int *)(param_1 + 0xd0) == 0)) {
    lVar5 = 0;
LAB_148e1b4a2:
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    return lVar5;
  }
  lVar2 = *(longlong *)(param_1 + 200);
  lVar8 = (longlong)*(int *)(param_1 + 0xd0) * 0x40 + lVar2;
LAB_148e1b4e0:
  lVar5 = lVar2;
  if (iVar1 == *(int *)(lVar2 + 0x20)) {
    lVar3 = 0;
    do {
      uVar6 = *(ushort *)(*param_2 + lVar3);
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(ushort *)(*(longlong *)(lVar2 + 0x18) + lVar3);
      if (uVar6 == uVar4) {
        if (uVar6 == 0) goto LAB_148e1b4a2;
      }
      else {
        if (0x7f < (uVar4 | uVar6)) goto LAB_148e1b542;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar9]) goto LAB_148e1b542;
      }
      lVar3 = lVar3 + 2;
    } while( true );
  }
  if (*(int *)(lVar2 + 0x20) + iVar1 != 1) goto LAB_148e1b534;
  goto LAB_148e1b4a2;
LAB_148e1b542:
  if (uVar6 == uVar4) goto LAB_148e1b4a2;
LAB_148e1b534:
  lVar2 = lVar2 + 0x40;
  lVar5 = 0;
  if (lVar2 == lVar8) goto LAB_148e1b4a2;
  goto LAB_148e1b4e0;
}



// FUNCTION 148e1b550 FUN_148e1b550 body=54 status=ok
// SIG undefined FUN_148e1b550(void)

void FUN_148e1b550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_148e1ab48(param_1 + 0x50);
  if (lVar1 != 0) {
    return;
  }
  FUN_148e1ab48(param_1 + 8,param_2);
  return;
}



// FUNCTION 148e1b586 FUN_148e1b586 body=150 status=ok
// SIG undefined FUN_148e1b586(void)

void FUN_148e1b586(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1407b25f0(param_1 + 0xe0);
  plVar1 = *(longlong **)(param_1 + 0x80);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 2;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x88) * 0x430;
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      plVar1 = plVar1 + 0x86;
      lVar2 = lVar2 + -0x430;
    } while (lVar2 != 0);
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x430;
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      plVar1 = plVar1 + 0x86;
      lVar2 = lVar2 + -0x430;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 148e1b61c FUN_148e1b61c body=67 status=ok
// SIG undefined FUN_148e1b61c(void)

void FUN_148e1b61c(byte *param_1)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = 0;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar1 = 0;
    bVar2 = 0;
    do {
      bVar2 = bVar2 | *(byte *)(*(longlong *)(param_1 + 0x80) + 0x18 + lVar1) >> 2 & 1;
      *param_1 = bVar2;
      lVar1 = lVar1 + 0x430;
    } while ((longlong)*(int *)(param_1 + 0x88) * 0x430 - lVar1 != 0);
  }
  return;
}



// FUNCTION 148e1b660 FUN_148e1b660 body=348 status=ok
// SIG undefined FUN_148e1b660(void)

void FUN_148e1b660(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  *(byte *)(param_1 + 0x80) =
       *(byte *)(param_1 + 0x80) & 0xfd |
       (*(int *)(param_1 + 0x84) <= *(int *)(param_2 + 0x14)) * '\x02';
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_144a787a6(plVar1,&DAT_14cbd5020);
  if (*(char *)(param_2 + 0x11) == '\0') {
    if ((int)(uint)*(byte *)(param_2 + 0x10) <= *(int *)(param_1 + 0x84)) goto LAB_148e1b6b5;
    puVar4 = &DAT_14cbd5040;
  }
  else {
    puVar4 = &DAT_14cbd5050;
  }
  FUN_144a787a6(plVar1,puVar4);
LAB_148e1b6b5:
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == DAT_14cbd5048) {
    bVar11 = true;
    if (1 < iVar3) {
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*plVar1 + lVar7);
        uVar10 = (ulonglong)uVar8;
        uVar5 = *(ushort *)(DAT_14cbd5040 + lVar7);
        if (uVar8 != uVar5) break;
        if (uVar8 == 0) goto LAB_148e1b73e;
LAB_148e1b6f2:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar6]) goto LAB_148e1b6f2;
      }
      if (uVar8 != uVar5) goto LAB_148e1b74a;
    }
  }
  else {
    bVar11 = true;
    if (DAT_14cbd5048 + iVar3 != 1) {
LAB_148e1b74a:
      if (iVar3 == DAT_14cbd5058) {
        bVar11 = true;
        if (1 < iVar3) {
          lVar7 = 0;
          while( true ) {
            uVar8 = *(ushort *)(*plVar1 + lVar7);
            uVar2 = (uint)uVar8;
            uVar5 = *(ushort *)(DAT_14cbd5050 + lVar7);
            uVar9 = (uint)uVar5;
            if (uVar8 != uVar5) {
              if ((uVar5 | uVar8) < 0x80) {
                uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar5]) goto LAB_148e1b783;
              }
              iVar3 = uVar2 - uVar9;
              goto LAB_148e1b7b8;
            }
            if (uVar8 == 0) break;
LAB_148e1b783:
            lVar7 = lVar7 + 2;
          }
          iVar3 = 0;
LAB_148e1b7b8:
          bVar11 = iVar3 == 0;
        }
      }
      else {
        bVar11 = DAT_14cbd5058 + iVar3 == 1;
      }
    }
  }
LAB_148e1b73e:
  *(bool *)(param_1 + 0x78) = bVar11;
  return;
}



// FUNCTION 148e1b7bc FUN_148e1b7bc body=252 status=ok
// SIG undefined FUN_148e1b7bc(void)

void FUN_148e1b7bc(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68 [2];
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  fVar4 = param_2;
  if (param_2 <= 0.0) {
    fVar4 = 0.0;
  }
  local_58 = 0x100;
  local_54 = 0x100000000;
  uStack_4c = 0x144;
  local_44 = 0;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_1467d068c(local_68,fVar4);
  FUN_140008f88(param_1 + 0x30,local_68);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xdf | (0.0 < param_2) << 5;
  *(float *)(param_1 + 0x28) = fVar4;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1b8ba FUN_148e1b8ba body=1464 status=ok
// SIG undefined FUN_148e1b8ba(void)

void FUN_148e1b8ba(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  ushort uVar15;
  byte bVar16;
  ushort uVar17;
  uint uVar18;
  undefined2 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  cVar5 = FUN_144729dda();
  if ((cVar5 == '\0') ||
     (*(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xdf | (param_3 == 0) << 5, param_3 == 0))
  goto LAB_148e1b909;
  plVar11 = *(longlong **)(param_3 + 8);
  plVar4 = (longlong *)*param_1;
  if (plVar4 != plVar11) {
    *param_1 = (longlong)plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x10);
  plVar11 = *(longlong **)(param_3 + 0x18);
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != plVar11) {
    param_1[2] = (longlong)plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x20);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfa | *(byte *)(param_3 + 0x62) >> 1 & 1;
  if ((*(byte *)(param_3 + 0x62) & 4) == 0) {
    iVar14 = *(int *)((longlong)param_1 + 0x2c);
    FUN_1407ddd8e(param_1[4],(int)param_1[5]);
    *(undefined4 *)(param_1 + 5) = 0;
    if ((iVar14 < 1) && (*(int *)((longlong)param_1 + 0x2c) != 1)) {
      FUN_1418f4546(param_1 + 4,1);
    }
    bVar6 = *(byte *)(param_3 + 0x60);
    if ((int)(uint)bVar6 < *(int *)(param_3 + 0x58)) {
      lVar23 = *(longlong *)(param_3 + 0x50);
      lVar22 = (ulonglong)bVar6 * 0x80 + (ulonglong)bVar6 * 8;
      if (*(int *)(lVar23 + 0x40 + lVar22) != 0) {
        iVar14 = (int)param_1[5];
        *(uint *)(param_1 + 5) = iVar14 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2c) < iVar14 + 1U) {
          FUN_148e22f42(param_1 + 4,iVar14);
        }
        FUN_148c4e994((longlong)iVar14 * 0x88 + param_1[4],lVar23 + lVar22);
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      }
    }
  }
  FUN_148e1be74(param_1 + 6,*(undefined4 *)(param_3 + 0x58));
  if ((longlong)*(int *)(param_3 + 0x58) != 0) {
    lVar22 = *(longlong *)(param_3 + 0x50);
    lVar23 = (longlong)*(int *)(param_3 + 0x58) * 0x88 + lVar22;
    do {
      lVar8 = FUN_148e1beb2(param_1 + 6);
      iVar14 = *(int *)(lVar22 + 0x18);
      if (iVar14 == DAT_14cbd5048) {
        bVar24 = true;
        if (1 < iVar14) {
          lVar20 = 0;
          while( true ) {
            uVar17 = *(ushort *)(*(longlong *)(lVar22 + 0x10) + lVar20);
            uVar12 = (ulonglong)uVar17;
            uVar15 = *(ushort *)(DAT_14cbd5040 + lVar20);
            if (uVar17 != uVar15) break;
            if (uVar17 == 0) goto LAB_148e1bab2;
LAB_148e1ba79:
            lVar20 = lVar20 + 2;
          }
          if ((uVar15 | uVar17) < 0x80) {
            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar21 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar21]) goto LAB_148e1ba79;
          }
          if (uVar17 != uVar15) goto LAB_148e1bad3;
        }
      }
      else {
        bVar24 = true;
        if (DAT_14cbd5048 + iVar14 != 1) {
LAB_148e1bad3:
          if (iVar14 == DAT_14cbd5058) {
            bVar24 = true;
            if (1 < iVar14) {
              lVar20 = 0;
              while( true ) {
                uVar17 = *(ushort *)(*(longlong *)(lVar22 + 0x10) + lVar20);
                uVar7 = (uint)uVar17;
                uVar15 = *(ushort *)(DAT_14cbd5050 + lVar20);
                uVar18 = (uint)uVar15;
                if (uVar17 != uVar15) {
                  if ((uVar15 | uVar17) < 0x80) {
                    uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar17];
                    uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar15];
                    if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar15]) goto LAB_148e1bb06;
                  }
                  iVar14 = uVar7 - uVar18;
                  goto LAB_148e1bb42;
                }
                if (uVar17 == 0) break;
LAB_148e1bb06:
                lVar20 = lVar20 + 2;
              }
              iVar14 = 0;
LAB_148e1bb42:
              bVar24 = iVar14 == 0;
            }
          }
          else {
            bVar24 = DAT_14cbd5058 + iVar14 == 1;
          }
        }
      }
LAB_148e1bab2:
      *(bool *)(lVar8 + 0x10) = bVar24;
      FUN_144a787a6(lVar8,lVar22 + 0x68);
      lVar22 = lVar22 + 0x88;
    } while (lVar22 != lVar23);
  }
  cVar5 = DAT_14cbd56f0;
  if ((longlong)(int)param_1[7] != 0) {
    puVar9 = (undefined8 *)param_1[6];
    puVar3 = puVar9 + (longlong)(int)param_1[7] * 3;
LAB_148e1bb74:
    puVar19 = &DAT_149dfb77a;
    if (*(int *)(puVar9 + 1) != 0) {
      puVar19 = (undefined2 *)*puVar9;
    }
    lVar22 = 0;
    do {
      uVar17 = puVar19[lVar22];
      bVar6 = (&DAT_149e02088)[lVar22];
      iVar14 = (uint)uVar17 - (uint)bVar6;
      if (iVar14 == 0) {
        if (uVar17 == 0) goto LAB_148e1bbb8;
      }
      else {
        if (0x7f < ((uint)bVar6 | (uint)uVar17)) goto LAB_148e1bbb4;
        if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[bVar6]) goto code_r0x000148e1bbb2;
      }
      lVar22 = lVar22 + 1;
    } while( true );
  }
  bVar6 = 0;
  goto LAB_148e1bc27;
code_r0x000148e1bbb2:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar17] - (uint)(byte)(&DAT_149e05da0)[bVar6];
LAB_148e1bbb4:
  if (iVar14 != 0) goto LAB_148e1bc1e;
LAB_148e1bbb8:
  puVar9 = puVar9 + 3;
  if (puVar9 == puVar3) goto LAB_148e1bc1c;
  goto LAB_148e1bb74;
LAB_148e1bc1c:
  puVar9 = (undefined8 *)0x0;
LAB_148e1bc1e:
  bVar6 = (puVar9 != (undefined8 *)0x0) << 3;
LAB_148e1bc27:
  *(byte *)(param_1 + 8) = DAT_14cbd56f0 * '\x02' | *(byte *)(param_1 + 8) & 0xf5 | bVar6;
  if (cVar5 == '\0') {
    uVar10 = FUN_14479d2ce(&local_50);
    lVar22 = FUN_1407f492e(uVar10);
    if (lVar22 != 0) {
      lVar23 = FUN_144a5dd5e();
      if ((((*(int *)(lVar23 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar23 + 0x38) * 8) == lVar23 + 0x30)) &&
          (lVar22 = FUN_140c154c8(lVar22), lVar22 != 0)) &&
         ((*(longlong *)(lVar22 + 0x170) != 0 &&
          (plVar11 = (longlong *)
                     FUN_14148eec0(*(longlong *)(lVar22 + 0x170),*(undefined8 *)(param_3 + 0x68)),
          plVar11 != (longlong *)0x0)))) {
        uVar10 = FUN_14479d2ce(&local_50);
        uVar12 = FUN_14101baae(uVar10);
        uVar7 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        local_64 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        local_64 = local_64 >> 0x10 ^ local_64;
        FUN_1448d5e3c(&local_60);
        plVar4 = (longlong *)local_60[0x98];
        AcquireSRWLockShared((PSRWLOCK)(plVar4 + 0x11));
        plVar13 = (longlong *)CONCAT44(uStack_54,local_58);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        if (*(char *)(param_3 + 0x60) != '\0') {
          bVar6 = 0;
          do {
            lVar22 = *plVar11;
            if ((lVar22 == 0) || (*(byte *)(lVar22 + 0x4a0) <= bVar6)) {
              lVar22 = 0;
            }
            else {
              lVar22 = *(longlong *)(lVar22 + 0x498) + (ulonglong)((uint)bVar6 * 0x50) + 0x10;
            }
            FUN_14424236e(&local_60,lVar22);
            bVar24 = true;
            if ((longlong)local_58 != 0) {
              plVar13 = local_60;
              do {
                if (*plVar13 != 0) {
                  if ((longlong)(int)plVar4[1] != 0) {
                    lVar22 = *plVar4;
                    lVar23 = (longlong)(int)plVar4[1] * 0xe8;
                    do {
                      if (*(longlong *)(lVar22 + 0xb0) == *plVar13) goto LAB_148e1bdee;
                      lVar22 = lVar22 + 0xe8;
                      lVar23 = lVar23 + -0xe8;
                    } while (lVar23 != 0);
                  }
                  lVar22 = 0;
LAB_148e1bdee:
                  bVar16 = (*(byte *)(param_1 + 8) & 2) >> 1 | lVar22 != 0;
                  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd | bVar16 * '\x02';
                  if (bVar16 != 0) {
                    bVar24 = false;
                    break;
                  }
                }
                plVar13 = plVar13 + 1;
              } while (plVar13 != local_60 + local_58);
            }
            if (local_60 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          } while ((bVar24) && (bVar6 = bVar6 + 1, bVar6 != *(byte *)(param_3 + 0x60)));
        }
        ReleaseSRWLockShared((PSRWLOCK)(plVar4 + 0x11));
      }
    }
  }
LAB_148e1b909:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1be74 FUN_148e1be74 body=61 status=ok
// SIG undefined FUN_148e1be74(void)

void FUN_148e1be74(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_148e22fda(param_1);
    return;
  }
  FUN_14594221d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 148e1beb2 FUN_148e1beb2 body=63 status=ok
// SIG undefined FUN_148e1beb2(void)

longlong FUN_148e1beb2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e230a2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_148e23084(lVar2);
  return lVar2;
}



// FUNCTION 148e1bef2 FUN_148e1bef2 body=1420 status=ok
// SIG undefined FUN_148e1bef2(void)

void FUN_148e1bef2(longlong param_1,uint param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined1 auStack_128 [40];
  uint local_100;
  uint local_fc;
  longlong local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)param_2)) ||
     (lVar8 = FUN_141427ed0(param_1), lVar8 == 0)) goto LAB_148e1bf58;
  lVar9 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
      lVar9 + 0x30)) goto LAB_148e1bf58;
  lVar9 = FUN_140c154c8(lVar8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  lVar9 = *(longlong *)(lVar9 + 0x170);
  iVar6 = FUN_1408966e4(lVar8);
  if ((lVar9 == 0) || (iVar6 == -1)) goto LAB_148e1bf58;
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  local_d8 = (ulonglong)param_2 * 0x70;
  plVar19 = (longlong *)(*(longlong *)(param_1 + 0xb8) + local_d8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_fc = param_2;
  local_f0 = plVar19;
  if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x1e8);
    plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x1f0) * 0xe;
    do {
      uVar23 = uStack_b0;
      if ((longlong)(int)plVar19[10] != 0) {
        plVar10 = (longlong *)plVar19[9];
        lVar8 = (longlong)(int)plVar19[10] * 0x18;
        do {
          if (*plVar10 == *plVar12) {
            if (plVar10 != (longlong *)0x0) {
              lVar8 = (longlong)(int)uStack_b0;
              uVar7 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
              if (uStack_b0._4_4_ < uVar7) {
                FUN_148e23136(&local_b8,uVar23 & 0xffffffff);
              }
              FUN_148c4f364(lVar8 * 0x70 + local_b8,plVar12);
              plVar19 = local_f0;
            }
            break;
          }
          plVar10 = plVar10 + 3;
          lVar8 = lVar8 + -0x18;
        } while (lVar8 != 0);
      }
      plVar12 = plVar12 + 0xe;
    } while (plVar12 != plVar13);
  }
  FUN_1456e0f56(param_1 + 0x108,&local_b8);
  FUN_1407ddd26(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar19 = local_f0;
  uVar7 = local_fc;
  iVar6 = *(int *)(param_1 + 0x110);
  uVar23 = (ulonglong)iVar6;
  if (0 < (longlong)uVar23) {
    local_d0 = *(longlong **)(param_1 + 0x108);
    uVar21 = 0;
    plVar12 = local_d0;
    do {
      if (uVar21 + 1 < uVar23) {
        bVar2 = *(byte *)((longlong)plVar12 + 0x62);
        bVar3 = *(byte *)((longlong)plVar12 + 0xd2);
        if ((bVar3 & 2) == 0) {
          if ((bVar2 & 2) != 0) goto LAB_148e1c0b7;
          if ((bVar3 & 4) != 0) goto LAB_148e1c084;
        }
        else if ((bVar3 & 4) != 0 && (bVar2 & 2) != 0) {
LAB_148e1c084:
          if ((bVar2 & 4) == 0) goto LAB_148e1c0b7;
        }
        plVar13 = plVar12;
        plVar10 = &local_b8;
        for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
          *plVar10 = *plVar13;
          plVar13 = plVar13 + 1;
          plVar10 = plVar10 + 1;
        }
        plVar13 = plVar12 + 0xe;
        plVar10 = plVar12;
        for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
          *plVar10 = *plVar13;
          plVar13 = plVar13 + 1;
          plVar10 = plVar10 + 1;
        }
        plVar13 = &local_b8;
        plVar10 = plVar12 + 0xe;
        for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
          *plVar10 = *plVar13;
          plVar13 = plVar13 + 1;
          plVar10 = plVar10 + 1;
        }
      }
LAB_148e1c0b7:
      uVar21 = uVar21 + 2;
      plVar12 = plVar12 + 0x1c;
    } while (uVar21 < uVar23);
    if (2 < iVar6) {
      uVar21 = 2;
      do {
        local_e8 = uVar21;
        iVar5 = (int)local_e8;
        local_100 = iVar5 * 2;
        local_c0 = (longlong)(int)local_100;
        lVar8 = 0;
        do {
          local_e0 = lVar8;
          uVar22 = iVar6 - (int)local_e0;
          if ((int)local_100 <= (int)uVar22) {
            uVar22 = local_100;
          }
          if (iVar5 < (int)uVar22 && 0 < iVar5) {
            iVar11 = 0;
            uVar21 = local_e8;
            do {
              iVar24 = (int)uVar21;
              lVar8 = (longlong)iVar24 * 0x70 + local_e0 * 0x70;
              iVar20 = 0;
              if (iVar24 - iVar11 != 0 && iVar11 <= iVar24) {
                bVar2 = *(byte *)((longlong)local_d0 + lVar8 + 0x62);
                iVar20 = 0;
                uVar18 = iVar24 - iVar11;
                do {
                  iVar16 = (uVar18 >> 1) + iVar20;
                  iVar15 = (uVar18 & 1) + iVar16;
                  bVar3 = *(byte *)((longlong)local_d0 +
                                   (longlong)iVar16 * 0x70 +
                                   (longlong)iVar11 * 0x70 + local_e0 * 0x70 + 0x62);
                  if ((bVar2 & 2) == 0) {
                    iVar16 = iVar15;
                    if ((bVar3 & 2) == 0) {
LAB_148e1c18f:
                      if ((bVar3 & 4) != 0) {
                        iVar15 = iVar20;
                      }
                      iVar16 = iVar20;
                      if ((bVar2 & 4) != 0) {
                        iVar16 = iVar15;
                      }
                    }
                  }
                  else {
                    iVar16 = iVar20;
                    if ((bVar3 & 2) != 0) goto LAB_148e1c18f;
                  }
                  iVar20 = iVar16;
                  bVar4 = 1 < uVar18;
                  uVar18 = uVar18 >> 1;
                } while (bVar4);
              }
              iVar20 = iVar20 + iVar11;
              if (iVar24 - iVar20 == 0 || iVar24 < iVar20) break;
              if (uVar22 - iVar24 == 0 || (int)uVar22 < iVar24) {
                iVar11 = 0;
              }
              else {
                plVar12 = local_d0 + local_e0 * 0xe + (longlong)iVar20 * 0xe;
                bVar2 = *(byte *)((longlong)plVar12 + 0x62);
                iVar11 = 0;
                uVar18 = uVar22 - iVar24;
                do {
                  uVar25 = (uVar18 >> 1) + iVar11;
                  iVar16 = (uVar18 & 1) + uVar25;
                  bVar3 = *(byte *)((longlong)local_d0 + (ulonglong)uVar25 * 0x70 + lVar8 + 0x62);
                  if ((bVar3 & 2) == 0) {
                    if ((bVar2 & 2) == 0) {
LAB_148e1c200:
                      if ((bVar2 & 4) != 0) {
                        iVar11 = iVar16;
                      }
                      if ((bVar3 & 4) == 0) goto LAB_148e1c20d;
                    }
                  }
                  else {
                    if ((bVar2 & 2) != 0) goto LAB_148e1c200;
LAB_148e1c20d:
                    iVar11 = iVar16;
                  }
                  bVar4 = 1 < uVar18;
                  uVar18 = uVar18 >> 1;
                } while (bVar4);
                uVar21 = (ulonglong)(uint)(iVar24 + iVar11);
                if (0 < iVar11) {
                  plVar13 = plVar12 + (longlong)(iVar24 - iVar20) * 0xe;
                  plVar10 = plVar12;
                  plVar26 = plVar12 + (longlong)(iVar24 - iVar20) * 0xe;
                  do {
                    while( true ) {
                      plVar1 = plVar13 + 0xe;
                      plVar27 = plVar10 + 0xe;
                      plVar14 = plVar10;
                      plVar17 = &local_b8;
                      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *plVar17 = *plVar14;
                        plVar14 = plVar14 + 1;
                        plVar17 = plVar17 + 1;
                      }
                      plVar14 = plVar13;
                      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *plVar10 = *plVar14;
                        plVar14 = plVar14 + 1;
                        plVar10 = plVar10 + 1;
                      }
                      plVar10 = &local_b8;
                      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *plVar13 = *plVar10;
                        plVar10 = plVar10 + 1;
                        plVar13 = plVar13 + 1;
                      }
                      plVar10 = plVar27;
                      if (plVar1 == plVar12 + (longlong)((iVar24 + iVar11) - iVar20) * 0xe) break;
                      plVar13 = plVar1;
                      if (plVar27 == plVar26) {
                        plVar26 = plVar1;
                      }
                    }
                    plVar13 = plVar26;
                  } while (plVar27 != plVar26);
                }
              }
              if (((int)uVar22 <= (int)uVar21) ||
                 (iVar11 = iVar20 + iVar11 + 1, (int)uVar21 <= iVar11)) break;
            } while( true );
          }
          lVar8 = local_e0 + local_c0;
        } while (local_e0 + local_c0 < (longlong)uVar23);
        uVar21 = (ulonglong)local_100;
        local_c8 = uVar23;
      } while ((int)local_100 < iVar6);
    }
  }
  plVar12 = (longlong *)local_f0[6];
  plVar13 = *(longlong **)(param_1 + 0xf8);
  local_f8 = param_1;
  if (plVar13 != plVar12) {
    *(longlong **)(param_1 + 0xf8) = plVar12;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  *(int *)(param_1 + 0x100) = (int)plVar19[7];
  plVar12 = (longlong *)*plVar19;
  plVar13 = *(longlong **)(param_1 + 0xe8);
  if (plVar13 != plVar12) {
    *(longlong **)(param_1 + 0xe8) = plVar12;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  *(int *)(param_1 + 0xf0) = (int)plVar19[1];
  FUN_144a787a6(param_1 + 0xd8,plVar19 + 2);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  uVar22 = *(uint *)(param_1 + 0xc0);
  if ((ulonglong)uVar22 != 0) {
    lVar8 = 0;
    do {
      *(byte *)(*(longlong *)(param_1 + 0xb8) + 0x42 + lVar8) =
           *(byte *)(*(longlong *)(param_1 + 0xb8) + 0x42 + lVar8) & 0xf7 | (local_d8 == lVar8) << 3
      ;
      lVar8 = lVar8 + 0x70;
    } while ((ulonglong)uVar22 * 0x70 - lVar8 != 0);
  }
  if (*(uint *)(param_1 + 0xd0) == uVar7) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar6 = 1;
      goto LAB_148e1c47f;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0xd4) + 1;
LAB_148e1c47f:
    *(uint *)(param_1 + 0xd0) = uVar7;
    *(int *)(param_1 + 0xd4) = iVar6;
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
LAB_148e1bf58:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1c49a FUN_148e1c49a body=118 status=ok
// SIG undefined FUN_148e1c49a(void)

longlong FUN_148e1c49a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0xd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1c512 FUN_148e1c512 body=627 status=ok
// SIG undefined FUN_148e1c512(void)

void FUN_148e1c512(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)FUN_148e1c49a();
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b9a67c0;
  local_68[0] = &LAB_1442474a4;
  local_40 = param_1;
  FUN_148e1c786(*puVar2,local_68);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  plVar3 = (longlong *)FUN_148e1c49a(param_1);
  lVar1 = *plVar3;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x220));
  if (*(int *)(param_1 + 0xac) != *(int *)(lVar1 + 0x218)) {
    *(int *)(param_1 + 0xac) = *(int *)(lVar1 + 0x218);
    if (*(int *)(param_1 + 0xb4) != *(int *)(lVar1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar1 + 0xb0);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar1 + 0xb4);
      FUN_142b2fdea(param_1 + 0x78);
    }
    lVar5 = param_1 + 0x78;
    if (*(int *)(param_1 + 0x170) != *(int *)(lVar1 + 0x170)) {
      FUN_148c4ee88(param_1 + 0x128,lVar1 + 0x128);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar1 + 0x170);
      FUN_142b2fdea(lVar5);
    }
    if ((*(int *)(param_1 + 200) == 0) || (*(int *)(param_1 + 200) != *(int *)(lVar1 + 200))) {
      *(int *)(param_1 + 200) = *(int *)(lVar1 + 200);
      FUN_148c4f746(param_1 + 0xb8,lVar1 + 0xb8);
      FUN_142b2fdea(lVar5);
    }
    if (*(int *)(param_1 + 0xd4) != *(int *)(lVar1 + 0xd4)) {
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(lVar1 + 0xd0);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(lVar1 + 0xd4);
      FUN_142b2fdea(lVar5);
    }
    if (*(int *)(param_1 + 0x120) != *(int *)(lVar1 + 0x120)) {
      FUN_148c4f1ce(param_1 + 0xd8,lVar1 + 0xd8);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar1 + 0x120);
      FUN_142b2fdea(lVar5);
    }
    if (*(int *)(param_1 + 0x17c) != *(int *)(lVar1 + 0x17c)) {
      *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(lVar1 + 0x178);
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(lVar1 + 0x17c);
      FUN_142b2fdea(lVar5);
    }
    if (*(int *)(param_1 + 0x1e0) != *(int *)(lVar1 + 0x1e0)) {
      FUN_140b855d0(param_1 + 0x180,lVar1 + 0x180);
      FUN_140bee9ec(param_1 + 0x1d0,lVar1 + 0x1d0);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar1 + 0x1e0);
      FUN_142b2fdea(lVar5);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x220));
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1c786 FUN_148e1c786 body=113 status=ok
// SIG undefined FUN_148e1c786(void)

void FUN_148e1c786(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x220));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3,param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000148e1c7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x220));
    return;
  }
  return;
}



// FUNCTION 148e1c7f8 FUN_148e1c7f8 body=84 status=ok
// SIG undefined FUN_148e1c7f8(void)

longlong FUN_148e1c7f8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    lVar2 = (longlong)*(int *)(param_1 + 0xc0) * 0x70 + lVar1;
    do {
      if ((longlong)*(int *)(lVar1 + 0x50) != 0) {
        plVar3 = *(longlong **)(lVar1 + 0x48);
        lVar4 = (longlong)*(int *)(lVar1 + 0x50) * 0x18;
        do {
          if (*plVar3 == *param_2) {
            if (plVar3 != (longlong *)0x0) {
              return lVar1;
            }
            break;
          }
          plVar3 = plVar3 + 3;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
      lVar1 = lVar1 + 0x70;
    } while (lVar1 != lVar2);
  }
  return 0;
}



// FUNCTION 148e1c84c FUN_148e1c84c body=14 status=ok
// SIG undefined FUN_148e1c84c(void)

bool FUN_148e1c84c(longlong param_1)

{
  return (*(byte *)(param_1 + 0x168) & 0x22) == 2;
}



// FUNCTION 148e1c85a FUN_148e1c85a body=77 status=ok
// SIG undefined FUN_148e1c85a(void)

longlong FUN_148e1c85a(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x110) <= (int)param_2)) {
    lVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    lVar1 = (ulonglong)param_2 * 0x70 + *(longlong *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  FUN_148e1b8ba(param_1 + 0x128,*(undefined8 *)(param_1 + 0x54),lVar1);
  return lVar1;
}



// FUNCTION 148e1c8a8 FUN_148e1c8a8 body=154 status=ok
// SIG undefined FUN_148e1c8a8(void)

undefined8 FUN_148e1c8a8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    return 0;
  }
  plVar4 = (longlong *)*param_1;
  plVar9 = plVar4 + (longlong)(int)param_1[1] * 2;
  iVar1 = (int)param_2[1];
LAB_148e1c8cc:
  iVar2 = (int)plVar4[1];
  if (iVar2 == iVar1) {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    if (iVar1 < 2) {
      return uVar3;
    }
    lVar5 = 0;
    do {
      uVar7 = *(ushort *)(*plVar4 + lVar5);
      uVar8 = (ulonglong)uVar7;
      uVar6 = *(ushort *)(*param_2 + lVar5);
      if (uVar7 == uVar6) {
        if (uVar7 == 0) {
          return uVar3;
        }
      }
      else {
        if (0x7f < (uVar6 | uVar7)) goto LAB_148e1c936;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar10]) goto LAB_148e1c936;
      }
      lVar5 = lVar5 + 2;
    } while( true );
  }
  if (iVar2 + iVar1 == 1) {
    return 1;
  }
  goto LAB_148e1c924;
LAB_148e1c936:
  if (uVar7 == uVar6) {
    return uVar3;
  }
LAB_148e1c924:
  plVar4 = plVar4 + 2;
  if (plVar4 == plVar9) {
    return 0;
  }
  goto LAB_148e1c8cc;
}



// FUNCTION 148e1c942 FUN_148e1c942 body=104 status=ok
// SIG undefined FUN_148e1c942(void)

void FUN_148e1c942(longlong param_1)

{
  FUN_148e1c9aa();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1408be2c4(param_1 + 0x20,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1408be2c4(param_1 + 0x30,0);
    return;
  }
  return;
}



// FUNCTION 148e1c9aa FUN_148e1c9aa body=106 status=ok
// SIG undefined FUN_148e1c9aa(void)

void FUN_148e1c9aa(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  FUN_148e23322(param_1 + 1,&local_28);
  FUN_1461edd49(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1ca16 FUN_148e1ca16 body=263 status=ok
// SIG undefined FUN_148e1ca16(void)

bool FUN_148e1ca16(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_1[1] == 0) {
    bVar9 = false;
  }
  else {
    lVar8 = *param_1;
    lVar7 = (longlong)(int)param_1[1] * 0x110;
    do {
      if (param_2[1] == 0) {
        uVar4 = FUN_140b7bb2c();
        uVar4 = FUN_14477b664(uVar4);
        param_2[1] = uVar4;
      }
      lVar5 = *(longlong *)(lVar8 + 0xd0);
      if (lVar5 == 0) {
        lVar5 = FUN_140b7bb2c();
      }
      uVar4 = *(undefined8 *)(lVar8 + 200);
      uVar6 = FUN_14477b664(lVar5);
      local_50 = uVar4;
      uVar2 = FUN_144a7891a(uVar6);
      local_58 = *param_2;
      uVar4 = param_2[1];
      uVar3 = FUN_144a7891a(uVar4);
      local_68 = uVar6;
      local_60 = &local_50;
      cVar1 = FUN_144a789b8(uVar3,uVar4,&local_58,uVar2);
      if (cVar1 != '\0') goto LAB_148e1caec;
      lVar8 = lVar8 + 0x110;
      lVar7 = lVar7 + -0x110;
    } while (lVar7 != 0);
    lVar8 = 0;
LAB_148e1caec:
    bVar9 = lVar8 != 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1cb1e FUN_148e1cb1e body=416 status=ok
// SIG undefined FUN_148e1cb1e(void)

longlong FUN_148e1cb1e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_140b7bb2c();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  if (param_2[2] == 0) {
    lVar7 = 0;
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_148e1cbb7;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,param_2);
      param_2[2] = lVar6;
      if (lVar6 != 0) goto LAB_148e1cbe2;
    }
  }
  else {
LAB_148e1cbe2:
    cVar2 = FUN_148e1ca16(param_1,param_2);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      if ((longlong)(int)param_1[1] != 0) {
        lVar6 = *param_1;
        lVar9 = (longlong)(int)param_1[1] * 0x110;
        do {
          if (param_2[1] == 0) {
            uVar5 = FUN_140b7bb2c();
            lVar7 = FUN_14477b664(uVar5);
            param_2[1] = lVar7;
          }
          lVar7 = *(longlong *)(lVar6 + 0xd0);
          if (lVar7 == 0) {
            lVar7 = FUN_140b7bb2c();
          }
          uVar5 = *(undefined8 *)(lVar6 + 200);
          uVar8 = FUN_14477b664(lVar7);
          local_50 = uVar5;
          uVar3 = FUN_144a7891a(uVar8);
          local_58 = *param_2;
          lVar7 = param_2[1];
          uVar4 = FUN_144a7891a(lVar7);
          local_60 = &local_50;
          local_68 = uVar8;
          cVar2 = FUN_144a789b8(uVar4,lVar7,&local_58,uVar3);
          lVar7 = lVar6;
          if (cVar2 != '\0') break;
          lVar6 = lVar6 + 0x110;
          lVar9 = lVar9 + -0x110;
          lVar7 = 0;
        } while (lVar9 != 0);
        goto LAB_148e1cbb7;
      }
    }
  }
  lVar7 = 0;
LAB_148e1cbb7:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 148e1ccc0 FUN_148e1ccc0 body=46 status=ok
// SIG undefined FUN_148e1ccc0(void)

longlong FUN_148e1ccc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x110;
    do {
      if ((*(byte *)(lVar1 + 0xc0) & 0x10) != 0) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x110;
      lVar2 = lVar2 + -0x110;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 148e1ccee FUN_148e1ccee body=56 status=ok
// SIG undefined FUN_148e1ccee(void)

undefined8 FUN_148e1ccee(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0x110;
    do {
      if ((*(byte *)(lVar1 + 0xc0) & 0x10) != 0) goto LAB_148e1cd1b;
      lVar1 = lVar1 + 0x110;
      lVar3 = lVar3 + -0x110;
    } while (lVar3 != 0);
    lVar1 = 0;
LAB_148e1cd1b:
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
  }
  return uVar2;
}



// FUNCTION 148e1cd26 FUN_148e1cd26 body=19 status=ok
// SIG undefined FUN_148e1cd26(void)

undefined8 FUN_148e1cd26(longlong param_1,uint param_2)

{
  if (param_2 < 0x32) {
    return CONCAT71((int7)((ulonglong)param_2 * 0x68 >> 8),
                    *(undefined1 *)(param_1 + 0x50 + (ulonglong)param_2 * 0x68));
  }
  return 0;
}



// FUNCTION 148e1cd3a FUN_148e1cd3a body=336 status=ok
// SIG undefined FUN_148e1cd3a(void)

ulonglong FUN_148e1cd3a(longlong param_1,longlong param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined8 uVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  int iVar7;
  
  if (param_2 == 0) {
    uVar5 = 0;
    goto LAB_148e1ce68;
  }
  iVar2 = *(int *)(param_2 + 0x254);
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (iVar2 == -1) {
    iVar7 = *(int *)(param_2 + 600);
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x50) == -1) {
        if (iVar2 == 0) {
          iVar2 = 1;
          goto LAB_148e1cd8b;
        }
        uVar4 = 0;
      }
      else {
        iVar2 = iVar2 + 1;
LAB_148e1cd8b:
        *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
        *(int *)(param_1 + 0x54) = iVar2;
        iVar7 = *(int *)(param_2 + 600);
        uVar4 = CONCAT71(uVar6,1);
      }
      if (iVar7 == *(int *)(param_1 + 0x58)) {
        if (*(int *)(param_1 + 0x5c) == 0) {
          iVar2 = 1;
          goto LAB_148e1ce37;
        }
        goto LAB_148e1cdf8;
      }
      iVar2 = *(int *)(param_1 + 0x5c) + 1;
LAB_148e1ce37:
      *(int *)(param_1 + 0x58) = iVar7;
      *(int *)(param_1 + 0x5c) = iVar2;
      goto LAB_148e1cddb;
    }
    if (*(int *)(param_1 + 0x50) == -1) {
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_148e1ce05;
      }
      bVar3 = 0;
      uVar6 = 0;
    }
    else {
      iVar2 = iVar2 + 1;
LAB_148e1ce05:
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(int *)(param_1 + 0x54) = iVar2;
      bVar3 = 1;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        iVar2 = 1;
        goto LAB_148e1ce1e;
      }
      goto LAB_148e1ce63;
    }
    iVar2 = *(int *)(param_1 + 0x5c) + 1;
LAB_148e1ce1e:
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x5c) = iVar2;
    bVar1 = 1;
  }
  else {
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar7 = 1;
        goto LAB_148e1cdbc;
      }
      uVar4 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54) + 1;
LAB_148e1cdbc:
      *(int *)(param_1 + 0x50) = iVar2;
      *(int *)(param_1 + 0x54) = iVar7;
      uVar4 = CONCAT71(uVar6,1);
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        iVar2 = 1;
        goto LAB_148e1cdd1;
      }
LAB_148e1cdf8:
      bVar3 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5c) + 1;
LAB_148e1cdd1:
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(int *)(param_1 + 0x5c) = iVar2;
LAB_148e1cddb:
      bVar3 = 1;
    }
    uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
    bVar3 = (byte)uVar4 | bVar3;
    if (param_3 == '\0') {
LAB_148e1ce63:
      bVar1 = 0;
    }
    else {
      bVar1 = FUN_1449a0272(param_1 + 0x38,param_2 + 0x40);
    }
  }
  uVar5 = CONCAT71(uVar6,bVar3 | bVar1);
LAB_148e1ce68:
  return uVar5 & 0xffffffff;
}



// FUNCTION 148e1ce8a FUN_148e1ce8a body=336 status=ok
// SIG undefined FUN_148e1ce8a(void)

ulonglong FUN_148e1ce8a(longlong param_1,longlong param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined8 uVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  int iVar7;
  
  if (param_2 == 0) {
    uVar5 = 0;
    goto LAB_148e1cfb8;
  }
  iVar2 = *(int *)(param_2 + 0x254);
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (iVar2 == -1) {
    iVar7 = *(int *)(param_2 + 600);
    iVar2 = *(int *)(param_1 + 100);
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x60) == -1) {
        if (iVar2 == 0) {
          iVar2 = 1;
          goto LAB_148e1cedb;
        }
        uVar4 = 0;
      }
      else {
        iVar2 = iVar2 + 1;
LAB_148e1cedb:
        *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
        *(int *)(param_1 + 100) = iVar2;
        iVar7 = *(int *)(param_2 + 600);
        uVar4 = CONCAT71(uVar6,1);
      }
      if (iVar7 == *(int *)(param_1 + 0x68)) {
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar2 = 1;
          goto LAB_148e1cf87;
        }
        goto LAB_148e1cf48;
      }
      iVar2 = *(int *)(param_1 + 0x6c) + 1;
LAB_148e1cf87:
      *(int *)(param_1 + 0x68) = iVar7;
      *(int *)(param_1 + 0x6c) = iVar2;
      goto LAB_148e1cf2b;
    }
    if (*(int *)(param_1 + 0x60) == -1) {
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_148e1cf55;
      }
      bVar3 = 0;
      uVar6 = 0;
    }
    else {
      iVar2 = iVar2 + 1;
LAB_148e1cf55:
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      *(int *)(param_1 + 100) = iVar2;
      bVar3 = 1;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        iVar2 = 1;
        goto LAB_148e1cf6e;
      }
      goto LAB_148e1cfb3;
    }
    iVar2 = *(int *)(param_1 + 0x6c) + 1;
LAB_148e1cf6e:
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x6c) = iVar2;
    bVar1 = 1;
  }
  else {
    if (iVar2 == *(int *)(param_1 + 0x60)) {
      if (*(int *)(param_1 + 100) == 0) {
        iVar7 = 1;
        goto LAB_148e1cf0c;
      }
      uVar4 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 100) + 1;
LAB_148e1cf0c:
      *(int *)(param_1 + 0x60) = iVar2;
      *(int *)(param_1 + 100) = iVar7;
      uVar4 = CONCAT71(uVar6,1);
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        iVar2 = 1;
        goto LAB_148e1cf21;
      }
LAB_148e1cf48:
      bVar3 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x6c) + 1;
LAB_148e1cf21:
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(int *)(param_1 + 0x6c) = iVar2;
LAB_148e1cf2b:
      bVar3 = 1;
    }
    uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
    bVar3 = (byte)uVar4 | bVar3;
    if (param_3 == '\0') {
LAB_148e1cfb3:
      bVar1 = 0;
    }
    else {
      bVar1 = FUN_1449a0272(param_1 + 0x38,param_2 + 0x40);
    }
  }
  uVar5 = CONCAT71(uVar6,bVar3 | bVar1);
LAB_148e1cfb8:
  return uVar5 & 0xffffffff;
}



// FUNCTION 148e1cfda FUN_148e1cfda body=76 status=ok
// SIG undefined FUN_148e1cfda(void)

undefined8 FUN_148e1cfda(longlong param_1,int *param_2)

{
  byte bVar1;
  uint7 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  if (iVar5 == *(int *)(param_1 + 0x60)) {
    if (*(int *)(param_1 + 100) == 0) {
      iVar4 = 1;
      goto LAB_148e1cfee;
    }
    bVar1 = 0;
    uVar2 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 100) + 1;
LAB_148e1cfee:
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 100) = iVar4;
    uVar2 = (uint7)(uint3)((uint)iVar5 >> 8);
    bVar1 = 1;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      bVar3 = 0;
      goto LAB_148e1d00d;
    }
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x6c) + 1;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(int *)(param_1 + 0x6c) = iVar5;
  bVar3 = 1;
LAB_148e1d00d:
  return CONCAT71(uVar2,bVar1 | bVar3);
}



// FUNCTION 148e1d026 FUN_148e1d026 body=399 status=ok
// SIG undefined FUN_148e1d026(void)

void FUN_148e1d026(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar2 = *(int *)(param_1 + 0x42c);
  FUN_140bb299f(*(undefined8 *)(param_1 + 0x420));
  *(undefined4 *)(param_1 + 0x428) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x42c) != 0)) {
    FUN_148e23372(param_1 + 0x420);
  }
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar5) == 0) goto LAB_148e1d0a5;
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar5);
    }
    FUN_140bb182a(param_2,param_1 + 0x420,0);
  }
LAB_148e1d0a5:
  iVar2 = *(int *)(param_1 + 0x41c);
  FUN_140bb299f(*(undefined8 *)(param_1 + 0x410));
  *(undefined4 *)(param_1 + 0x418) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x41c) != 0)) {
    FUN_148e23372(param_1 + 0x410);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    if ((longlong)*(int *)(param_1 + 0x230) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x228) + lVar5) == 0) {
          return;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(param_1 + 0x230) * 8 != lVar5);
    }
    cVar3 = FUN_140bb182a(param_1 + 0x218,param_1 + 0x410,0);
    if ((cVar3 != '\0') && ((longlong)*(int *)(param_1 + 0x428) != 0)) {
      plVar6 = *(longlong **)(param_1 + 0x420);
      plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x428) * 3;
      do {
        if ((longlong)*(int *)(param_1 + 0x418) != 0) {
          plVar4 = *(longlong **)(param_1 + 0x410);
          lVar5 = (longlong)*(int *)(param_1 + 0x418) * 0x18;
          do {
            if (*plVar4 == *plVar6) {
              if (plVar4 != (longlong *)0x0) {
                FUN_140bb0c2a(plVar4,plVar6);
              }
              break;
            }
            plVar4 = plVar4 + 3;
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != 0);
        }
        plVar6 = plVar6 + 3;
      } while (plVar6 != plVar1);
    }
  }
  return;
}



// FUNCTION 148e1d1b6 FUN_148e1d1b6 body=54 status=ok
// SIG undefined FUN_148e1d1b6(void)

longlong * FUN_148e1d1b6(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x410);
    lVar2 = (longlong)*(int *)(param_1 + 0x418) * 0x18;
    do {
      if ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x18) == param_2)) {
        return plVar1;
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 148e1d1ec FUN_148e1d1ec body=95 status=ok
// SIG undefined FUN_148e1d1ec(void)

undefined8 FUN_148e1d1ec(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if (-1 < (char)uVar1) {
          FUN_140056680(param_2,&DAT_149e62e78);
          return param_2;
        }
        pcVar2 = "TagGroup4FilterLabel";
      }
      else {
        pcVar2 = "TagGroup3FilterLabel";
      }
    }
    else {
      pcVar2 = "TagGroup2FilterLabel";
    }
  }
  else {
    pcVar2 = "TagGroup1FilterLabel";
  }
  FUN_1400b22c2(param_2,pcVar2);
  return param_2;
}



// FUNCTION 148e1d24c FUN_148e1d24c body=82 status=ok
// SIG undefined FUN_148e1d24c(void)

void FUN_148e1d24c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1407b25f0(param_1 + 0x58);
  plVar2 = *(longlong **)(param_1 + 8);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 2;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x10) * 0x448;
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar2 = plVar2 + 0x89;
      lVar1 = lVar1 + -0x448;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148e1d29e FUN_148e1d29e body=562 status=ok
// SIG undefined FUN_148e1d29e(void)

longlong FUN_148e1d29e(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined1 auStack_158 [40];
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  undefined ***local_f8;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = 0;
  iVar7 = 0;
  if (*param_2 != -1) {
    plVar1 = param_1 + 2;
    local_88 = (undefined1 *)0x100000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_88);
      iVar7 = (int)param_1[5];
    }
    local_118 = local_78;
    uVar2 = local_118;
    local_110 = local_70;
    local_10c = local_6c;
    local_128 = local_88;
    local_120 = local_80;
    local_118._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    local_130 = param_1;
    if ((local_118._4_4_ != iVar7) || (local_80 != plVar1)) {
      iVar3 = local_118._4_4_;
      local_118 = uVar2;
      do {
        lVar4 = *local_130;
        local_e8 = &PTR_LAB_14b9a5460;
        local_c8 = &LAB_144246dfc;
        local_b8 = (longlong *)0x0;
        local_f8 = (undefined ***)0x0;
        uStack_e0._0_4_ = SUB84(param_2,0);
        uStack_e0._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
        local_98 = local_d8;
        uStack_94 = uStack_d4;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        local_a8 = 0x4b9a5460;
        uStack_a4 = 1;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        local_108 = 0;
        local_88 = &LAB_144246dfc;
        local_78 = 0;
        uStack_e0 = param_2;
        (*(code *)&LAB_144246e08)(&local_a8,&local_78);
        lVar4 = FUN_148e23532(lVar4 + (longlong)iVar3 * 0x28 + 8,&local_88);
        if (local_c8 != (undefined1 *)0x0) {
          plVar5 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar5 = (longlong *)&local_a8;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
        if (local_108 != 0) {
          pppuVar6 = local_f8;
          if (local_f8 == (undefined ***)0x0) {
            pppuVar6 = &local_e8;
          }
          (*(code *)(*pppuVar6)[2])();
        }
        if (lVar4 != 0) goto LAB_148e1d373;
        local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
        FUN_1449c0562(&local_128);
        iVar3 = local_118._4_4_;
        uVar2 = local_118;
      } while (local_130 != param_1 || (local_120 != plVar1 || local_118._4_4_ != iVar7));
    }
    local_118 = uVar2;
    lVar4 = 0;
  }
LAB_148e1d373:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 148e1d4d2 FUN_148e1d4d2 body=9 status=ok
// SIG undefined FUN_148e1d4d2(void)

void FUN_148e1d4d2(longlong param_1)

{
  FUN_148e6a044(param_1 + 0x58);
  return;
}



// FUNCTION 148e1d4dc FUN_148e1d4dc body=82 status=ok
// SIG undefined FUN_148e1d4dc(void)

int FUN_148e1d4dc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = (longlong)(int)param_1[1] * 0xe8;
    lVar2 = *param_1 + 0x58;
    iVar3 = 0;
    do {
      iVar1 = FUN_148e6a044(lVar2,param_2);
      iVar3 = iVar3 + iVar1;
      lVar2 = lVar2 + 0xe8;
      lVar4 = lVar4 + -0xe8;
    } while (lVar4 != 0);
  }
  return iVar3;
}



// FUNCTION 148e1d52e FUN_148e1d52e body=123 status=ok
// SIG undefined FUN_148e1d52e(void)

void FUN_148e1d52e(longlong param_1)

{
  int iVar1;
  
  FUN_140bad112(param_1 + 0x68,&DAT_149dfb77a);
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_141165946(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_14581d39c(param_1 + 0x18,0);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_141286eab(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_148e23880(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 148e1d5aa FUN_148e1d5aa body=1 status=ok
// SIG undefined FUN_148e1d5aa(void)

void FUN_148e1d5aa(void)

{
  return;
}



// FUNCTION 148e1d5ac FUN_148e1d5ac body=32 status=ok
// SIG undefined FUN_148e1d5ac(void)

void FUN_148e1d5ac(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    iVar1 = *(int *)(param_1 + 100) + 1;
  }
  else {
    if (*(int *)(param_1 + 100) != 0) {
      return;
    }
    iVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(int *)(param_1 + 100) = iVar1;
  return;
}



// FUNCTION 148e1d5cc FUN_148e1d5cc body=152 status=ok
// SIG undefined FUN_148e1d5cc(void)

void FUN_148e1d5cc(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    if (*(int *)(param_1 + 100) != 0) goto LAB_148e1d5e7;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 100) + 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 100) = iVar1;
LAB_148e1d5e7:
  FUN_140bad112(param_1 + 0x68,&DAT_149dfb77a);
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_141165946(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_14581d39c(param_1 + 0x18,0);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_141286eab(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_148e23880(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 148e1d664 FUN_148e1d664 body=204 status=ok
// SIG undefined FUN_148e1d664(void)

undefined8 FUN_148e1d664(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_478 [40];
  undefined1 local_450 [184];
  undefined1 local_398 [104];
  undefined1 local_330 [472];
  undefined1 local_158 [224];
  char local_78;
  int local_74;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_140d8e6ac(local_450);
  FUN_1449a0272(local_398,param_3);
  FUN_1449a0272(local_330,param_3 + 0x20);
  if (local_74 == 0 || local_78 == '\0') {
    local_78 = '\x01';
    local_74 = local_74 + 1;
  }
  FUN_148e238b0(local_158,param_3);
  FUN_1413505e4(param_2,local_450);
  FUN_141286efe(local_450);
  if ((local_20 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1d732 FUN_148e1d732 body=336 status=ok
// SIG undefined FUN_148e1d732(void)

void FUN_148e1d732(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x230));
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar1 + 0x228);
  *(undefined1 *)(param_1 + 0x21c) = *(undefined1 *)(lVar1 + 0x21c);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar1 + 0x1d0);
  FUN_148c559c4(param_1 + 0x1c0,lVar1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(lVar1 + 0x1e8);
  FUN_148c55572(param_1 + 0x1d8,lVar1 + 0x1d8);
  if (*(int *)(param_1 + 0x1bc) != *(int *)(lVar1 + 0x1bc)) {
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(lVar1 + 0x1bc);
  }
  if (*(int *)(param_1 + 0x214) != *(int *)(lVar1 + 0x214)) {
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar1 + 0x210);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(lVar1 + 0x214);
  }
  if (*(int *)(param_1 + 0x204) != *(int *)(lVar1 + 0x204)) {
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(lVar1 + 0x200);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar1 + 0x204);
  }
  if (*(int *)(param_1 + 0xf0) != *(int *)(lVar1 + 0xf0) || *(int *)(param_1 + 0xf0) == 0) {
    *(int *)(param_1 + 0xf0) = *(int *)(lVar1 + 0xf0);
    FUN_14054c6c4(param_1 + 0xe0,lVar1 + 0xe0);
  }
  FUN_142b2fdea(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000148e1d87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x230));
  return;
}



// FUNCTION 148e1d882 FUN_148e1d882 body=462 status=ok
// SIG undefined FUN_148e1d882(void)

ulonglong FUN_148e1d882(longlong param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  int local_128 [38];
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_2 = (longlong *)*param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 5));
  if (*(int *)(param_1 + 0x220) != (int)param_2[4]) {
    *(int *)(param_1 + 0x220) = (int)param_2[4];
    if ((longlong)(int)param_2[1] != 0) {
      lVar4 = *param_2;
      lVar6 = (longlong)(int)param_2[1] * 0xf8 + lVar4;
      do {
        memset(local_128,0,0xf0);
        FUN_1442474f4(local_128);
        local_38 = 0;
        FUN_1407f50ea(local_128);
        local_38 = *(undefined4 *)(lVar4 + 0xf0);
        piVar2 = (int *)FUN_143d20218();
        if (local_128[0] == *piVar2) {
          if (*(int *)(param_1 + 500) == local_8c) {
            if (*(int *)(param_1 + 0x1fc) == local_84) goto LAB_148e1d97b;
            *(undefined4 *)(param_1 + 0x1f8) = local_88;
            *(int *)(param_1 + 0x1fc) = local_84;
          }
          else {
            *(undefined4 *)(param_1 + 0x1f0) = local_90;
            *(int *)(param_1 + 500) = local_8c;
          }
          FUN_142b2fdea(param_1 + 0x78);
          if ((longlong)*(int *)(param_1 + 0xe8) < 1) {
            iVar1 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0xf0);
            lVar4 = 0;
            iVar1 = 0;
            do {
              *(int *)(param_1 + 0xf0) = iVar3 + 1 + (int)lVar4;
              iVar1 = iVar1 + (uint)(*(int *)(*(longlong *)(param_1 + 0xe0) + lVar4 * 4) <=
                                    *(int *)(param_1 + 0x1f8));
              lVar4 = lVar4 + 1;
            } while (*(int *)(param_1 + 0xe8) != lVar4);
          }
          if (iVar1 == *(int *)(param_1 + 0x208)) {
            if (*(int *)(param_1 + 0x20c) == 0) {
              iVar3 = 1;
              goto LAB_148e1da33;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x20c) + 1;
LAB_148e1da33:
            *(int *)(param_1 + 0x208) = iVar1;
            *(int *)(param_1 + 0x20c) = iVar3;
          }
          FUN_1413d5a30(local_128);
          uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_148e1d8c2;
        }
LAB_148e1d97b:
        FUN_1413d5a30(local_128);
        lVar4 = lVar4 + 0xf8;
      } while (lVar4 != lVar6);
    }
  }
  uVar5 = 0;
LAB_148e1d8c2:
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 5));
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148e1da52 FUN_148e1da52 body=27 status=ok
// SIG undefined FUN_148e1da52(void)

undefined4 FUN_148e1da52(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if (*(int *)(param_1 + 0x208) < *(int *)(param_1 + 0x210)) {
    iVar1 = *(int *)(param_1 + 0x208);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 <= *(int *)(param_1 + 0x200));
}



// FUNCTION 148e1da6e FUN_148e1da6e body=55 status=ok
// SIG undefined FUN_148e1da6e(void)

undefined4 FUN_148e1da6e(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x210);
  iVar2 = iVar1 - *(int *)(param_1 + 0x200);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  if (*(int *)(param_1 + 0x208) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x208);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),param_2 <= iVar3 && *(int *)(param_1 + 0x200) < iVar1);
}



// FUNCTION 148e1daa6 FUN_148e1daa6 body=99 status=ok
// SIG undefined FUN_148e1daa6(void)

void FUN_148e1daa6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  
  if ((param_1[6] == 0 & *(byte *)(param_1 + 8)) == 1) {
    pwVar2 = L"inactive";
  }
  else {
    if ((longlong)param_1[6] <= param_2) {
      iVar1 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(param_1 + 2,*param_1,iVar1);
      goto LAB_148e1dad4;
    }
    pwVar2 = L"locked";
  }
  FUN_14020fad6(param_1 + 2,pwVar2);
LAB_148e1dad4:
  param_1[7] = param_2;
  return;
}



// FUNCTION 148e1db0a FUN_148e1db0a body=12 status=ok
// SIG undefined FUN_148e1db0a(void)

undefined8 FUN_148e1db0a(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x38) >> 8),
                  *(longlong *)(param_1 + 0x30) <= *(longlong *)(param_1 + 0x38));
}



// FUNCTION 148e1db16 FUN_148e1db16 body=1280 status=ok
// SIG undefined FUN_148e1db16(void)

ulonglong FUN_148e1db16(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  longlong lVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  ulonglong uVar35;
  
  lVar31 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(lVar31 + 0xa28));
  if (*(int *)(param_1 + 0xac) == *(int *)(lVar31 + 0xa20)) {
    uVar35 = 0;
  }
  else {
    *(int *)(param_1 + 0xac) = *(int *)(lVar31 + 0xa20);
    iVar1 = *(int *)(param_1 + 0x318);
    iVar2 = *(int *)(lVar31 + 0x318);
    if (iVar1 != iVar2) {
      FUN_14135191a(param_1 + 0xb0,lVar31 + 0xb0);
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(lVar31 + 0x318);
    }
    iVar3 = *(int *)(param_1 + 0x588);
    iVar4 = *(int *)(lVar31 + 0x588);
    if (iVar3 != iVar4) {
      FUN_14135191a(param_1 + 800,lVar31 + 800);
      *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(lVar31 + 0x588);
    }
    iVar5 = *(int *)(param_1 + 0x7f8);
    iVar6 = *(int *)(lVar31 + 0x7f8);
    if (iVar5 != iVar6) {
      FUN_14135191a(param_1 + 0x590,lVar31 + 0x590);
      *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(lVar31 + 0x7f8);
    }
    iVar7 = *(int *)(param_1 + 0x868);
    iVar8 = *(int *)(lVar31 + 0x868);
    if (iVar7 != iVar8) {
      FUN_148c5648a(param_1 + 0x800,lVar31 + 0x800);
      *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(lVar31 + 0x868);
    }
    iVar9 = *(int *)(param_1 + 0x8b8);
    iVar10 = *(int *)(lVar31 + 0x8b8);
    if (iVar9 != iVar10) {
      FUN_148c55df6(param_1 + 0x870,lVar31 + 0x870);
      *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(lVar31 + 0x8b8);
    }
    iVar11 = *(int *)(param_1 + 0x908);
    iVar12 = *(int *)(lVar31 + 0x908);
    if (iVar11 != iVar12) {
      FUN_148c55df6(param_1 + 0x8c0,lVar31 + 0x8c0);
      *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(lVar31 + 0x908);
    }
    iVar13 = *(int *)(param_1 + 0x958);
    iVar14 = *(int *)(lVar31 + 0x958);
    if (iVar13 != iVar14) {
      FUN_148c55fa2(param_1 + 0x910,lVar31 + 0x910);
      *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(lVar31 + 0x958);
    }
    iVar15 = *(int *)(param_1 + 0x970);
    iVar16 = *(int *)(lVar31 + 0x970);
    if (iVar15 != iVar16 || iVar15 == 0) {
      *(int *)(param_1 + 0x970) = iVar16;
      FUN_148c56694(param_1 + 0x960,lVar31 + 0x960);
    }
    iVar17 = *(int *)(param_1 + 0xa10);
    iVar18 = *(int *)(lVar31 + 0xa10);
    if (iVar17 != iVar18) {
      FUN_144a787a6(param_1 + 0xa00,lVar31 + 0xa00);
      *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(lVar31 + 0xa10);
    }
    iVar19 = *(int *)(param_1 + 0x9fc);
    iVar20 = *(int *)(lVar31 + 0x9fc);
    if (iVar19 != iVar20) {
      *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(lVar31 + 0x9f8);
      *(undefined4 *)(param_1 + 0x9fc) = *(undefined4 *)(lVar31 + 0x9fc);
    }
    iVar21 = *(int *)(param_1 + 0x9c4);
    iVar22 = *(int *)(lVar31 + 0x9c4);
    if (iVar21 != iVar22) {
      *(undefined1 *)(param_1 + 0x9c0) = *(undefined1 *)(lVar31 + 0x9c0);
      *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(lVar31 + 0x9c4);
    }
    iVar23 = *(int *)(param_1 + 0x9cc);
    iVar24 = *(int *)(lVar31 + 0x9cc);
    if (iVar23 != iVar24) {
      *(undefined1 *)(param_1 + 0x9c8) = *(undefined1 *)(lVar31 + 0x9c8);
      *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(lVar31 + 0x9cc);
    }
    iVar25 = *(int *)(param_1 + 0x9d4);
    iVar26 = *(int *)(lVar31 + 0x9d4);
    if (iVar25 != iVar26) {
      *(undefined1 *)(param_1 + 0x9d0) = *(undefined1 *)(lVar31 + 0x9d0);
      *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(lVar31 + 0x9d4);
    }
    iVar27 = *(int *)(param_1 + 0x9dc);
    iVar28 = *(int *)(lVar31 + 0x9dc);
    if (iVar27 != iVar28) {
      *(undefined1 *)(param_1 + 0x9d8) = *(undefined1 *)(lVar31 + 0x9d8);
      *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(lVar31 + 0x9dc);
    }
    iVar29 = *(int *)(param_1 + 0x9e4);
    iVar30 = *(int *)(lVar31 + 0x9e4);
    if (iVar29 != iVar30) {
      *(undefined1 *)(param_1 + 0x9e0) = *(undefined1 *)(lVar31 + 0x9e0);
      *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(lVar31 + 0x9e4);
    }
    bVar32 = FUN_140ae1244(param_1 + 0x978,lVar31 + 0x978);
    bVar33 = FUN_140ae1244(param_1 + 0x990,lVar31 + 0x990);
    bVar34 = FUN_140ae1244(param_1 + 0x9a8,lVar31 + 0x9a8);
    if (*(int *)(param_1 + 0x9ec) == *(int *)(lVar31 + 0x9ec)) {
      if (((((iVar29 == iVar30) && (iVar27 == iVar28)) && (iVar25 == iVar26)) &&
          ((iVar23 == iVar24 && (iVar21 == iVar22)))) &&
         ((iVar19 == iVar20 &&
          ((iVar17 == iVar18 &&
           ((iVar15 == iVar16 && iVar15 != 0) &&
            (iVar13 == iVar14 &&
            ((iVar11 == iVar12 && (iVar9 == iVar10 && iVar7 == iVar8)) &&
            ((iVar5 == iVar6 && iVar1 == iVar2) &&
            (iVar3 == iVar4 && ((bVar32 | bVar33 | bVar34) & 1) == 0)))))))))) {
        uVar35 = 0;
        goto LAB_148e1df4f;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x9e8) = *(undefined1 *)(lVar31 + 0x9e8);
      *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(lVar31 + 0x9ec);
    }
    FUN_142b2fdea(param_1 + 0x78);
    uVar35 = CONCAT71((int7)((ulonglong)(param_1 + 0x78) >> 8),1);
  }
LAB_148e1df4f:
  ReleaseSRWLockShared((PSRWLOCK)(lVar31 + 0xa28));
  return uVar35 & 0xffffffff;
}



// FUNCTION 148e1e016 FUN_148e1e016 body=34 status=ok
// SIG undefined FUN_148e1e016(void)

void FUN_148e1e016(longlong param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_3 < 3) {
    uVar1 = *(undefined4 *)(param_1 + 0x304 + (ulonglong)param_3 * 0x270);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 148e1e038 FUN_148e1e038 body=384 status=ok
// SIG undefined FUN_148e1e038(void)

void FUN_148e1e038(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x960;
  iVar2 = *(int *)(param_1 + 0x96c);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x960),*(undefined4 *)(param_1 + 0x968));
  *(undefined4 *)(param_1 + 0x968) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x96c) != 0)) {
    FUN_148e23c9e(lVar1,0);
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + 1;
  if (*(int *)(param_1 + 0x9f0) == 0) {
    lVar3 = 0x304;
  }
  else {
    if (*(int *)(param_1 + 0x9f0) != 1) goto LAB_148e1e0fe;
    lVar3 = 0x574;
  }
  iVar2 = *(int *)(param_1 + lVar3);
  FUN_146637162(local_48,&DAT_14cbd5838,&DAT_14cbd5868);
  FUN_148e1e1ba(lVar1,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (iVar2 != -1) {
    FUN_146637162(local_48,&DAT_14cbd5858,&DAT_14cbd5888);
    FUN_148e1e1ba(lVar1,local_48);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_148e1e0fe:
  FUN_146637162(local_48,&DAT_14cbd5848,&DAT_14cbd4a50);
  FUN_148e1e1ba(lVar1,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_142b2fdea(param_1 + 0x78);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1e1ba FUN_148e1e1ba body=144 status=ok
// SIG undefined FUN_148e1e1ba(void)

void FUN_148e1e1ba(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146638242(param_1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar2 + 0x1c + lVar3) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e1e24a FUN_148e1e24a body=54 status=ok
// SIG undefined FUN_148e1e24a(void)

void FUN_148e1e24a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong alStack_48 [2];
  longlong lStack_38;
  ulonglong uStack_28;
  
  if (*(int *)(param_1 + 0x9f0) != param_2) {
    iVar3 = *(int *)(param_1 + 0x9f4) + 1;
LAB_148e1e267:
    *(int *)(param_1 + 0x9f0) = param_2;
    *(int *)(param_1 + 0x9f4) = iVar3;
    FUN_148e1e038();
    return;
  }
  iVar3 = 1;
  if (*(int *)(param_1 + 0x9f4) == 0) goto LAB_148e1e267;
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x960;
  iVar3 = *(int *)(param_1 + 0x96c);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x960),*(undefined4 *)(param_1 + 0x968));
  *(undefined4 *)(param_1 + 0x968) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x96c) != 0)) {
    FUN_148e23c9e(lVar1,0);
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + 1;
  if (*(int *)(param_1 + 0x9f0) == 0) {
    lVar2 = 0x304;
  }
  else {
    if (*(int *)(param_1 + 0x9f0) != 1) goto LAB_148e1e0fe;
    lVar2 = 0x574;
  }
  iVar3 = *(int *)(param_1 + lVar2);
  FUN_146637162(alStack_48,&DAT_14cbd5838,&DAT_14cbd5868);
  FUN_148e1e1ba(lVar1,alStack_48);
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if (alStack_48[0] != 0) {
    FUN_1400020a8();
  }
  if (iVar3 != -1) {
    FUN_146637162(alStack_48,&DAT_14cbd5858,&DAT_14cbd5888);
    FUN_148e1e1ba(lVar1,alStack_48);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    if (alStack_48[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_148e1e0fe:
  FUN_146637162(alStack_48,&DAT_14cbd5848,&DAT_14cbd4a50);
  FUN_148e1e1ba(lVar1,alStack_48);
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if (alStack_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_142b2fdea(param_1 + 0x78);
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e1e31c FUN_148e1e31c body=53 status=ok
// SIG undefined FUN_148e1e31c(void)

void FUN_148e1e31c(longlong param_1,longlong param_2)

{
  *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x868) + 1;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) & 0xfd;
  }
  else {
    FUN_148e6a1f2(param_1 + 0x800);
    *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) | 2;
  }
  return;
}



// FUNCTION 148e1e352 FUN_148e1e352 body=25 status=ok
// SIG undefined FUN_148e1e352(void)

void FUN_148e1e352(longlong param_1,char param_2)

{
  *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x868) + 1;
  *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) & 0xfd | param_2 * '\x02';
  return;
}



// FUNCTION 148e1e36c FUN_148e1e36c body=141 status=ok
// SIG undefined FUN_148e1e36c(void)

undefined8 FUN_148e1e36c(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  FUN_148e23cfe(param_1 + 0xb0);
  FUN_1449a0272(param_1 + 0xa00,param_2 + 0x40);
  if (*(char *)(param_1 + 0x9d0) == '\0') {
    iVar1 = *(int *)(param_1 + 0x9d4) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x9d4) != 0) goto LAB_148e1e3c0;
    iVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x9d0) = 1;
  *(int *)(param_1 + 0x9d4) = iVar1;
LAB_148e1e3c0:
  if (*(int *)(param_1 + 0x9f8) == 0) {
    if (*(int *)(param_1 + 0x9fc) != 0) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = (ulonglong)(*(int *)(param_1 + 0x9fc) + 1);
  }
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  *(int *)(param_1 + 0x9fc) = (int)uVar2;
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 148e1e3fa FUN_148e1e3fa body=172 status=ok
// SIG undefined FUN_148e1e3fa(void)

undefined8 FUN_148e1e3fa(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  
  FUN_148e23cfe(param_1 + 800);
  bVar1 = *(byte *)(param_2 + 0x9d) >> 5 & 1;
  if (*(byte *)(param_1 + 0x9d8) == bVar1) {
    if (*(int *)(param_1 + 0x9dc) == 0) {
      iVar2 = 1;
      goto LAB_148e1e438;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x9dc) + 1;
LAB_148e1e438:
    *(byte *)(param_1 + 0x9d8) = bVar1;
    *(int *)(param_1 + 0x9dc) = iVar2;
  }
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    iVar2 = *(int *)(param_1 + 0x9e4) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x9e4) != 0) goto LAB_148e1e46d;
    iVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x9e0) = 1;
  *(int *)(param_1 + 0x9e4) = iVar2;
LAB_148e1e46d:
  if (*(int *)(param_1 + 0x9f8) == 0) {
    if (*(int *)(param_1 + 0x9fc) != 0) {
      return 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = (ulonglong)(*(int *)(param_1 + 0x9fc) + 1);
  }
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  *(int *)(param_1 + 0x9fc) = (int)uVar3;
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 148e1e4a6 FUN_148e1e4a6 body=399 status=ok
// SIG undefined FUN_148e1e4a6(void)

void FUN_148e1e4a6(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x868) + 1;
  *(byte *)(param_1 + 0x860) = *(byte *)(param_1 + 0x860) & 0xfd;
  *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
  FUN_1401e0130(param_1 + 0xb0);
  *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
  FUN_1401e0130(param_1 + 800);
  *(int *)(param_1 + 0x7f8) = *(int *)(param_1 + 0x7f8) + 1;
  FUN_1401e0130(param_1 + 0x590);
  if (*(int *)(param_1 + 0x9f8) == 0) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9fc) == 0) goto LAB_148e1e50f;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9fc) + 1;
LAB_148e1e50f:
    *(undefined4 *)(param_1 + 0x9f8) = 0;
    *(int *)(param_1 + 0x9fc) = iVar1;
  }
  *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + 1;
  FUN_1456e1820(param_1 + 0x8c0,0);
  *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
  FUN_1456e1820(param_1 + 0x870,0);
  if (*(char *)(param_1 + 0x9c0) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9c4) == 0) goto LAB_148e1e565;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c4) + 1;
LAB_148e1e565:
    *(undefined1 *)(param_1 + 0x9c0) = 0;
    *(int *)(param_1 + 0x9c4) = iVar1;
  }
  if (*(char *)(param_1 + 0x9d0) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9d4) == 0) goto LAB_148e1e590;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9d4) + 1;
LAB_148e1e590:
    *(undefined1 *)(param_1 + 0x9d0) = 0;
    *(int *)(param_1 + 0x9d4) = iVar1;
  }
  if (*(char *)(param_1 + 0x9d8) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9dc) == 0) goto LAB_148e1e5bb;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9dc) + 1;
LAB_148e1e5bb:
    *(undefined1 *)(param_1 + 0x9d8) = 0;
    *(int *)(param_1 + 0x9dc) = iVar1;
  }
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9e4) == 0) goto LAB_148e1e5e6;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9e4) + 1;
LAB_148e1e5e6:
    *(undefined1 *)(param_1 + 0x9e0) = 0;
    *(int *)(param_1 + 0x9e4) = iVar1;
  }
  if (*(int *)(param_1 + 0x9f0) == -1) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9f4) != 0) goto LAB_148e1e621;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9f4) + 1;
  }
  *(undefined4 *)(param_1 + 0x9f0) = 0xffffffff;
  *(int *)(param_1 + 0x9f4) = iVar1;
LAB_148e1e621:
  *(undefined1 *)(param_1 + 0xa19) = 0;
  FUN_148e1e038(param_1);
  return;
}



// FUNCTION 148e1e636 FUN_148e1e636 body=328 status=ok
// SIG undefined FUN_148e1e636(void)

void FUN_148e1e636(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
  FUN_1401e0130(param_1 + 800);
  *(int *)(param_1 + 0x7f8) = *(int *)(param_1 + 0x7f8) + 1;
  FUN_1401e0130(param_1 + 0x590);
  if (*(int *)(param_1 + 0x9f8) == 0) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x9fc) == 0) goto LAB_148e1e681;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9fc) + 1;
LAB_148e1e681:
    *(undefined4 *)(param_1 + 0x9f8) = 0;
    *(int *)(param_1 + 0x9fc) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x96c);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x960),*(undefined4 *)(param_1 + 0x968));
  *(undefined4 *)(param_1 + 0x968) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x96c) != 0)) {
    FUN_148e23c9e(param_1 + 0x960,0);
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + 1;
  *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + 1;
  FUN_1456e1820(param_1 + 0x8c0,0);
  *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
  FUN_1456e1820(param_1 + 0x870,0);
  if (*(char *)(param_1 + 0x9c0) == '\0') {
    if (*(int *)(param_1 + 0x9c4) == 0) {
      iVar1 = 1;
      goto LAB_148e1e70d;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c4) + 1;
LAB_148e1e70d:
    *(undefined1 *)(param_1 + 0x9c0) = 0;
    *(int *)(param_1 + 0x9c4) = iVar1;
  }
  if (*(char *)(param_1 + 0x9d8) == '\0') {
    if (*(int *)(param_1 + 0x9dc) != 0) goto LAB_148e1e738;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9dc) + 1;
  }
  *(undefined1 *)(param_1 + 0x9d8) = 0;
  *(int *)(param_1 + 0x9dc) = iVar1;
LAB_148e1e738:
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    if (*(int *)(param_1 + 0x9e4) != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9e4) + 1;
  }
  *(undefined1 *)(param_1 + 0x9e0) = 0;
  *(int *)(param_1 + 0x9e4) = iVar1;
  return;
}



// FUNCTION 148e1e77e FUN_148e1e77e body=168 status=ok
// SIG undefined FUN_148e1e77e(void)

longlong FUN_148e1e77e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 0xe0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 0xe0) == lVar2)
        goto LAB_148e1e78e;
        iVar5 = *(int *)(lVar3 + 0xd8);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_148e1e78e:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 148e1e826 FUN_148e1e826 body=168 status=ok
// SIG undefined FUN_148e1e826(void)

undefined4 FUN_148e1e826(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*(longlong *)(param_1 + 0x38) == 0))
  goto LAB_148e1e85a;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148e1e8ca:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148e1e8ca;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
LAB_148e1e85a:
  uVar6 = 0;
  if ((int)param_2 < *(int *)(lVar5 + 0xd0)) {
    uVar6 = *(undefined4 *)(*(longlong *)(lVar5 + 200) + (ulonglong)param_2 * 0x20);
  }
  return uVar6;
}



// FUNCTION 148e1e8ce FUN_148e1e8ce body=196 status=ok
// SIG undefined FUN_148e1e8ce(void)

undefined8 FUN_148e1e8ce(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*(longlong *)(param_1 + 0x38) == 0))
  goto LAB_148e1e907;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148e1e98e:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148e1e98e;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
LAB_148e1e907:
  if ((int)param_2 < *(int *)(lVar5 + 0xd0)) {
    uVar3 = FUN_140de8536((ulonglong)param_2 * 0x20 + *(longlong *)(lVar5 + 200),
                          *(undefined8 *)(param_3 + 0x398));
    return uVar3;
  }
  return 0;
}



// FUNCTION 148e1e992 FUN_148e1e992 body=104 status=ok
// SIG undefined FUN_148e1e992(void)

void FUN_148e1e992(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xf0))) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    lVar1 = *(longlong *)(param_1 + 0xe8);
    lVar2 = (ulonglong)param_2 * 0x208;
    uVar4 = FUN_148e1e826(param_1,param_2);
    *(undefined4 *)(lVar1 + 0x48 + lVar2) = uVar4;
    uVar3 = FUN_148e1e8ce(param_1,(ulonglong)param_2,param_3);
    *(undefined1 *)(lVar1 + 0x50 + lVar2) = uVar3;
  }
  return;
}



// FUNCTION 148e1e9fa FUN_148e1e9fa body=48 status=ok
// SIG undefined FUN_148e1e9fa(void)

void FUN_148e1e9fa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  uVar1 = FUN_148e2408a();
  FUN_1442463aa(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e1ea2a FUN_148e1ea2a body=52 status=ok
// SIG undefined FUN_148e1ea2a(void)

void FUN_148e1ea2a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  uVar1 = FUN_148e2408a(param_1 + 0x18);
  FUN_1442463aa(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e1ea5e FUN_148e1ea5e body=83 status=ok
// SIG undefined FUN_148e1ea5e(void)

void FUN_148e1ea5e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 2;
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(lVar1 + lVar2) == (int)*param_2) &&
         (*(int *)(lVar1 + 4 + lVar2) == (int)((ulonglong)*param_2 >> 0x20))) {
        *(undefined1 *)(lVar1 + 0x50 + lVar2) = 1;
        return;
      }
      lVar2 = lVar2 + 0x208;
    } while ((longlong)*(int *)(param_1 + 0xd8) * 0x208 != lVar2);
  }
  return;
}



// FUNCTION 148e1eab2 FUN_148e1eab2 body=85 status=ok
// SIG undefined FUN_148e1eab2(void)

undefined8 * FUN_148e1eab2(undefined8 *param_1,undefined8 param_2)

{
  FUN_140d8e6ac();
  *param_1 = &PTR_FUN_14b8b6620;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x86] = 0;
  FUN_148e1eb08(param_1,param_2);
  return param_1;
}



// FUNCTION 148e1eb08 FUN_148e1eb08 body=298 status=ok
// SIG undefined FUN_148e1eb08(void)

void FUN_148e1eb08(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 8))();
  if (*(char *)(param_2 + 0xe4) == (char)param_1[0x87]) {
    if (*(int *)((longlong)param_1 + 0x43c) == 0) {
      iVar1 = 1;
      goto LAB_148e1eb4c;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x43c) + 1;
LAB_148e1eb4c:
    *(char *)(param_1 + 0x87) = *(char *)(param_2 + 0xe4);
    *(int *)((longlong)param_1 + 0x43c) = iVar1;
  }
  iVar1 = 1;
  FUN_1446ddc76(&local_30,"vending_machine",1);
  if (local_30 == param_1[4]) {
    if ((int)param_1[5] == 0) goto LAB_148e1eb8d;
  }
  else {
    iVar1 = (int)param_1[5] + 1;
LAB_148e1eb8d:
    param_1[4] = local_30;
    *(int *)(param_1 + 5) = iVar1;
  }
  if (*(char *)(param_2 + 0xe5) == (char)param_1[0x88]) {
    if (*(int *)((longlong)param_1 + 0x444) == 0) {
      iVar1 = 1;
      goto LAB_148e1ebb5;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x444) + 1;
LAB_148e1ebb5:
    *(char *)(param_1 + 0x88) = *(char *)(param_2 + 0xe5);
    *(int *)((longlong)param_1 + 0x444) = iVar1;
  }
  if (*(int *)(param_2 + 0xd8) == (int)param_1[0x86]) {
    if (*(int *)((longlong)param_1 + 0x434) == 0) {
      iVar1 = 1;
      goto LAB_148e1ebe2;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x434) + 1;
LAB_148e1ebe2:
    *(int *)(param_1 + 0x86) = *(int *)(param_2 + 0xd8);
    *(int *)((longlong)param_1 + 0x434) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0xdc);
  if (0 < iVar1) {
    if (iVar1 == *(int *)((longlong)param_1 + 0x34)) {
      if ((int)param_1[7] != 0) goto LAB_148e1ec13;
      iVar2 = 1;
    }
    else {
      iVar2 = (int)param_1[7] + 1;
    }
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    *(int *)(param_1 + 7) = iVar2;
  }
LAB_148e1ec13:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e1ec34 FUN_148e1ec34 body=85 status=ok
// SIG undefined FUN_148e1ec34(void)

void FUN_148e1ec34(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1407b25f0(param_1 + 0x110);
  plVar2 = *(longlong **)(param_1 + 0x38);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x448;
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar2 = plVar2 + 0x89;
      lVar1 = lVar1 + -0x448;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148e1ec8a FUN_148e1ec8a body=767 status=ok
// SIG undefined FUN_148e1ec8a(void)

void FUN_148e1ec8a(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88 [3];
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_1 + 0xd0;
  iVar3 = *(int *)(param_1 + 0xdc);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    FUN_1408be2c4(local_98,0);
  }
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  local_a0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x38);
    local_90 = (longlong)*(int *)(param_1 + 0x40) * 0x448 + lVar8;
    do {
      if ((longlong)*(int *)(lVar8 + 0x418) != 0) {
        lVar9 = *(longlong *)(lVar8 + 0x410);
        lVar1 = lVar9 + (longlong)*(int *)(lVar8 + 0x418) * 0x18;
        do {
          if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
            plVar10 = *(longlong **)(lVar9 + 8);
            plVar11 = plVar10 + (longlong)*(int *)(lVar9 + 0x10) * 0xc;
LAB_148e1ed64:
            if ((((*(char *)((longlong)plVar10 + 0x5c) == '\x01') && (*plVar10 != 0)) &&
                (lVar4 = FUN_144873cc0(*plVar10 + 0x68), lVar4 != 0)) &&
               (FUN_1446ddc76(&local_68,"Value",1),
               (int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c))) {
              uVar2 = (uint)((ulonglong)local_68 >> 0x10);
              uVar7 = (uint)local_68 & 0xffff;
              plVar5 = (longlong *)plVar10[9];
              if ((longlong *)plVar10[9] == (longlong *)0x0) {
                plVar5 = plVar10 + 8;
              }
              iVar3 = *(int *)((longlong)plVar5 +
                              (ulonglong)
                              ((int)plVar10[10] - 1U &
                              (int)((ulonglong)local_68 >> 0x20) + ((uint)local_68 << 0x10 | uVar7)
                              + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
              if (iVar3 != -1) {
                do {
                  if (*(longlong *)(plVar10[1] + (longlong)iVar3 * 0x20) == local_68) {
                    FUN_1446ddc76(&local_70,"Label",1);
                    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
                      uVar2 = (uint)((ulonglong)local_70 >> 0x10);
                      uVar7 = (uint)local_70 & 0xffff;
                      plVar5 = plVar10 + 8;
                      if ((longlong *)plVar10[9] != (longlong *)0x0) {
                        plVar5 = (longlong *)plVar10[9];
                      }
                      iVar3 = *(int *)((longlong)plVar5 +
                                      (ulonglong)
                                      ((int)plVar10[10] - 1U &
                                      (int)((ulonglong)local_70 >> 0x20) +
                                      ((uint)local_70 << 0x10 | uVar7) +
                                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
                      if (iVar3 != -1) {
                        goto LAB_148e1ee95;
                      }
                    }
                    break;
                  }
                  iVar3 = *(int *)((longlong)iVar3 * 0x20 + plVar10[1] + 0x18);
                } while (iVar3 != -1);
              }
            }
            goto LAB_148e1ed9d;
          }
LAB_148e1eeb2:
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != lVar1);
      }
      lVar8 = lVar8 + 0x448;
    } while (lVar8 != local_90);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar3 = *(int *)((longlong)iVar3 * 0x20 + plVar10[1] + 0x18), iVar3 != -1) {
LAB_148e1ee95:
    if (*(longlong *)(plVar10[1] + (longlong)iVar3 * 0x20) == local_70) {
      lVar4 = FUN_144873cc0(*plVar10 + 0x68);
      puVar6 = *(undefined4 **)(lVar4 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1400b2348(puVar6,local_88,1);
      iVar3 = FUN_1405e9454(local_98,local_88);
      if (iVar3 != -1) {
        *(int *)(local_a0 + 0xe0) = *(int *)(local_a0 + 0xe0) + 1;
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      break;
    }
  }
LAB_148e1ed9d:
  plVar10 = plVar10 + 0xc;
  if (plVar10 == plVar11) goto LAB_148e1eeb2;
  goto LAB_148e1ed64;
}



// FUNCTION 148e1ef8a FUN_148e1ef8a body=58 status=ok
// SIG undefined FUN_148e1ef8a(void)

float FUN_148e1ef8a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if ((longlong)(int)param_1[1] == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar2);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x19) != '\x02')) {
        fVar3 = fVar3 + *(float *)(*param_1 + 0x38 + lVar2);
      }
      lVar2 = lVar2 + 0x58;
    } while ((longlong)(int)param_1[1] * 0x58 - lVar2 != 0);
  }
  return fVar3;
}



// FUNCTION 148e1efc4 FUN_148e1efc4 body=58 status=ok
// SIG undefined FUN_148e1efc4(void)

float FUN_148e1efc4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if ((longlong)(int)param_1[1] == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar2);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x19) != '\x02')) {
        fVar3 = fVar3 + *(float *)(*param_1 + 0x28 + lVar2);
      }
      lVar2 = lVar2 + 0x58;
    } while ((longlong)(int)param_1[1] * 0x58 - lVar2 != 0);
  }
  return fVar3;
}



// FUNCTION 148e1effe FUN_148e1effe body=39 status=ok
// SIG undefined FUN_148e1effe(void)

undefined8 FUN_148e1effe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar2;
}



// FUNCTION 148e1f026 FUN_148e1f026 body=67 status=ok
// SIG undefined FUN_148e1f026(void)

undefined8 FUN_148e1f026(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_1401e6dab(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148e1f06a FUN_148e1f06a body=59 status=ok
// SIG undefined FUN_148e1f06a(void)

longlong FUN_148e1f06a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14011be0c();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x440);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 148e1f0a6 FUN_148e1f0a6 body=111 status=ok
// SIG undefined FUN_148e1f0a6(void)

longlong FUN_148e1f0a6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + -0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144a2f878();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar2 = (**(code **)(*plVar1 + 0x5f8))(plVar1), lVar2 != 0)) {
      lVar3 = FUN_144a83daa();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 148e1f116 FUN_148e1f116 body=22 status=ok
// SIG undefined FUN_148e1f116(void)

void FUN_148e1f116(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))();
  FUN_1404960a8(uVar1);
  return;
}



// FUNCTION 148e1f154 FUN_148e1f154 body=39 status=ok
// SIG undefined FUN_148e1f154(void)

undefined8 FUN_148e1f154(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  return uVar2;
}



// FUNCTION 148e1f17c FUN_148e1f17c body=39 status=ok
// SIG undefined FUN_148e1f17c(void)

undefined8 FUN_148e1f17c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar2;
}



// FUNCTION 148e1f210 FUN_148e1f210 body=33 status=ok
// SIG undefined FUN_148e1f210(void)

void FUN_148e1f210(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400b465c(param_1 + -0x30);
  uVar1 = FUN_14119d4d6(uVar1);
  FUN_1404960a8(uVar1);
  return;
}



// FUNCTION 148e1f246 FUN_148e1f246 body=74 status=ok
// SIG undefined FUN_148e1f246(void)

longlong FUN_148e1f246(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x14);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
    lVar2 = FUN_144a7cacc();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e1f290 FUN_148e1f290 body=74 status=ok
// SIG undefined FUN_148e1f290(void)

longlong FUN_148e1f290(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x14);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
    lVar2 = FUN_144a83daa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e1f2da FUN_148e1f2da body=90 status=ok
// SIG undefined FUN_148e1f2da(void)

longlong FUN_148e1f2da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = *(longlong *)(lVar1 + 0x440);
      if ((lVar1 != 0 & DAT_14c950c29) != 1) {
        return lVar1;
      }
      FUN_1456cec3c(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e1f334 FUN_148e1f334 body=103 status=ok
// SIG undefined FUN_148e1f334(void)

longlong FUN_148e1f334(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
      lVar2 = FUN_144a83daa();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 148e1f3c4 FUN_148e1f3c4 body=39 status=ok
// SIG undefined FUN_148e1f3c4(void)

undefined8 FUN_148e1f3c4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  return uVar2;
}



// FUNCTION 148e1f3ec FUN_148e1f3ec body=39 status=ok
// SIG undefined FUN_148e1f3ec(void)

undefined8 FUN_148e1f3ec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar2;
}



// FUNCTION 148e1f47e FUN_148e1f47e body=39 status=ok
// SIG undefined FUN_148e1f47e(void)

undefined8 FUN_148e1f47e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  return uVar2;
}



// FUNCTION 148e1f4a6 FUN_148e1f4a6 body=39 status=ok
// SIG undefined FUN_148e1f4a6(void)

undefined8 FUN_148e1f4a6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar2;
}



// FUNCTION 148e1f4ce FUN_148e1f4ce body=63 status=ok
// SIG undefined FUN_148e1f4ce(void)

undefined8 FUN_148e1f4ce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_1402095ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x3b0);
    }
  }
  return 0;
}



// FUNCTION 148e1f50e FUN_148e1f50e body=59 status=ok
// SIG undefined FUN_148e1f50e(void)

longlong FUN_148e1f50e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145881af4();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x440);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 148e1f54a FUN_148e1f54a body=57 status=ok
// SIG undefined FUN_148e1f54a(void)

longlong FUN_148e1f54a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_1402095ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e1f588 FUN_148e1f588 body=57 status=ok
// SIG undefined FUN_148e1f588(void)

longlong FUN_148e1f588(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_1402095ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148e1f5c2 FUN_148e1f5c2 body=33 status=ok
// SIG undefined FUN_148e1f5c2(void)

undefined8 FUN_148e1f5c2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145881af4();
  if (lVar1 != 0) {
    uVar2 = FUN_144a7ba4c(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148e1f5e4 FUN_148e1f5e4 body=38 status=ok
// SIG undefined FUN_148e1f5e4(void)

void FUN_148e1f5e4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145881af4();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144a7ba4c(lVar1);
  }
  FUN_1404960a8(uVar2);
  return;
}



// FUNCTION 148e1f610 FUN_148e1f610 body=60 status=ok
// SIG undefined FUN_148e1f610(void)

void FUN_148e1f610(longlong param_1)

{
  if (DAT_14cbd58e8 != 0) {
    FUN_145b16772(param_1 + -8);
  }
  if (DAT_14cbd5918 != '\0') {
    return;
  }
  FUN_145b16d88(param_1 + -0x38);
  return;
}



// FUNCTION 148e1f64c FUN_148e1f64c body=38 status=ok
// SIG undefined FUN_148e1f64c(void)

undefined8 FUN_148e1f64c(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f678 FUN_148e1f678 body=38 status=ok
// SIG undefined FUN_148e1f678(void)

undefined8 FUN_148e1f678(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f69e FUN_148e1f69e body=38 status=ok
// SIG undefined FUN_148e1f69e(void)

undefined8 FUN_148e1f69e(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f6c4 FUN_148e1f6c4 body=38 status=ok
// SIG undefined FUN_148e1f6c4(void)

undefined8 FUN_148e1f6c4(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f6ea FUN_148e1f6ea body=38 status=ok
// SIG undefined FUN_148e1f6ea(void)

undefined8 FUN_148e1f6ea(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f710 FUN_148e1f710 body=38 status=ok
// SIG undefined FUN_148e1f710(void)

undefined8 FUN_148e1f710(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f736 FUN_148e1f736 body=38 status=ok
// SIG undefined FUN_148e1f736(void)

undefined8 FUN_148e1f736(undefined8 param_1,int param_2)

{
  FUN_148e21838();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f75c FUN_148e1f75c body=38 status=ok
// SIG undefined FUN_148e1f75c(void)

undefined8 FUN_148e1f75c(undefined8 param_1,int param_2)

{
  FUN_1403ad826();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1f782 FUN_148e1f782 body=114 status=ok
// SIG undefined FUN_148e1f782(void)

void FUN_148e1f782(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148e1f7f4 FUN_148e1f7f4 body=60 status=ok
// SIG undefined FUN_148e1f7f4(void)

void FUN_148e1f7f4(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140bb15ba(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 148e1f830 FUN_148e1f830 body=150 status=ok
// SIG undefined FUN_148e1f830(void)

void FUN_148e1f830(longlong param_1,int param_2)

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



// FUNCTION 148e1f8c8 FUN_148e1f8c8 body=190 status=ok
// SIG undefined FUN_148e1f8c8(void)

void FUN_148e1f8c8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e1f986(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 148e1f986 FUN_148e1f986 body=132 status=ok
// SIG undefined FUN_148e1f986(void)

void FUN_148e1f986(longlong param_1,int param_2)

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



// FUNCTION 148e1fa0c FUN_148e1fa0c body=29 status=ok
// SIG undefined FUN_148e1fa0c(void)

undefined8 FUN_148e1fa0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1fa44 FUN_148e1fa44 body=29 status=ok
// SIG undefined FUN_148e1fa44(void)

bool FUN_148e1fa44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e1fa62 FUN_148e1fa62 body=26 status=ok
// SIG undefined FUN_148e1fa62(void)

bool FUN_148e1fa62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e1fa7c FUN_148e1fa7c body=24 status=ok
// SIG undefined FUN_148e1fa7c(void)

bool FUN_148e1fa7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e1fa94 FUN_148e1fa94 body=93 status=ok
// SIG undefined FUN_148e1fa94(void)

void FUN_148e1fa94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eb30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e1faf2 FUN_148e1faf2 body=93 status=ok
// SIG undefined FUN_148e1faf2(void)

void FUN_148e1faf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eb30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e1fb50 FUN_148e1fb50 body=126 status=ok
// SIG undefined FUN_148e1fb50(void)

void FUN_148e1fb50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eb30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e1fbbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e1fbce FUN_148e1fbce body=48 status=ok
// SIG undefined FUN_148e1fbce(void)

void FUN_148e1fbce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e1fbfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e1fbfe FUN_148e1fbfe body=163 status=ok
// SIG undefined FUN_148e1fbfe(void)

bool FUN_148e1fbfe(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148e1fca2 FUN_148e1fca2 body=303 status=ok
// SIG undefined FUN_148e1fca2(void)

void FUN_148e1fca2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 148e1fdd2 FUN_148e1fdd2 body=29 status=ok
// SIG undefined FUN_148e1fdd2(void)

undefined8 FUN_148e1fdd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e1fe0a FUN_148e1fe0a body=29 status=ok
// SIG undefined FUN_148e1fe0a(void)

bool FUN_148e1fe0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e1fe28 FUN_148e1fe28 body=26 status=ok
// SIG undefined FUN_148e1fe28(void)

bool FUN_148e1fe28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e1fe42 FUN_148e1fe42 body=24 status=ok
// SIG undefined FUN_148e1fe42(void)

bool FUN_148e1fe42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e1fe5a FUN_148e1fe5a body=93 status=ok
// SIG undefined FUN_148e1fe5a(void)

void FUN_148e1fe5a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a55c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e1feb8 FUN_148e1feb8 body=93 status=ok
// SIG undefined FUN_148e1feb8(void)

void FUN_148e1feb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a55c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e1ff16 FUN_148e1ff16 body=126 status=ok
// SIG undefined FUN_148e1ff16(void)

void FUN_148e1ff16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a55c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e1ff85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e1ff94 FUN_148e1ff94 body=35 status=ok
// SIG undefined FUN_148e1ff94(void)

void FUN_148e1ff94(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e1ffb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148e1ffb8 FUN_148e1ffb8 body=142 status=ok
// SIG undefined FUN_148e1ffb8(void)

bool FUN_148e1ffb8(longlong param_1)

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



// FUNCTION 148e20048 FUN_148e20048 body=89 status=ok
// SIG undefined FUN_148e20048(void)

void FUN_148e20048(longlong param_1,int param_2)

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



// FUNCTION 148e200a1 FUN_148e200a1 body=77 status=ok
// SIG undefined FUN_148e200a1(void)

void FUN_148e200a1(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148e200ee FUN_148e200ee body=62 status=ok
// SIG undefined FUN_148e200ee(void)

void FUN_148e200ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e2012c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148e2012c FUN_148e2012c body=112 status=ok
// SIG undefined FUN_148e2012c(void)

ulonglong FUN_148e2012c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148e20166;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148e20166:
  return param_2 & 0xffffffff;
}



// FUNCTION 148e2019c FUN_148e2019c body=29 status=ok
// SIG undefined FUN_148e2019c(void)

undefined8 FUN_148e2019c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e201d4 FUN_148e201d4 body=29 status=ok
// SIG undefined FUN_148e201d4(void)

bool FUN_148e201d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e201f2 FUN_148e201f2 body=26 status=ok
// SIG undefined FUN_148e201f2(void)

bool FUN_148e201f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e2020c FUN_148e2020c body=24 status=ok
// SIG undefined FUN_148e2020c(void)

bool FUN_148e2020c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e20224 FUN_148e20224 body=101 status=ok
// SIG undefined FUN_148e20224(void)

void FUN_148e20224(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a5630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2028a FUN_148e2028a body=101 status=ok
// SIG undefined FUN_148e2028a(void)

void FUN_148e2028a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a5630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e202f0 FUN_148e202f0 body=134 status=ok
// SIG undefined FUN_148e202f0(void)

void FUN_148e202f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5630;
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
                    /* WARNING: Could not recover jumptable at 0x000148e20367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e20376 FUN_148e20376 body=52 status=ok
// SIG undefined FUN_148e20376(void)

void FUN_148e20376(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e203a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148e203aa FUN_148e203aa body=162 status=ok
// SIG undefined FUN_148e203aa(void)

bool FUN_148e203aa(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148e2044e FUN_148e2044e body=31 status=ok
// SIG undefined FUN_148e2044e(void)

undefined8 FUN_148e2044e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e20488 FUN_148e20488 body=101 status=ok
// SIG undefined FUN_148e20488(void)

void FUN_148e20488(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a5710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a56a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e204ee FUN_148e204ee body=101 status=ok
// SIG undefined FUN_148e204ee(void)

void FUN_148e204ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a5710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a56a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20554 FUN_148e20554 body=134 status=ok
// SIG undefined FUN_148e20554(void)

void FUN_148e20554(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a5710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a56a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e205cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e205da FUN_148e205da body=52 status=ok
// SIG undefined FUN_148e205da(void)

void FUN_148e205da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e2060b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e2062a FUN_148e2062a body=29 status=ok
// SIG undefined FUN_148e2062a(void)

bool FUN_148e2062a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e20648 FUN_148e20648 body=26 status=ok
// SIG undefined FUN_148e20648(void)

bool FUN_148e20648(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e20662 FUN_148e20662 body=101 status=ok
// SIG undefined FUN_148e20662(void)

void FUN_148e20662(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a5780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e206c8 FUN_148e206c8 body=134 status=ok
// SIG undefined FUN_148e206c8(void)

void FUN_148e206c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5780;
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
                    /* WARNING: Could not recover jumptable at 0x000148e2073f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e2074e FUN_148e2074e body=39 status=ok
// SIG undefined FUN_148e2074e(void)

void FUN_148e2074e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e20771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e20790 FUN_148e20790 body=29 status=ok
// SIG undefined FUN_148e20790(void)

bool FUN_148e20790(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e207ae FUN_148e207ae body=101 status=ok
// SIG undefined FUN_148e207ae(void)

void FUN_148e207ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a57f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


