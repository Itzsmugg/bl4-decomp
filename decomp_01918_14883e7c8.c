// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14883e7c8 FUN_14883e7c8 body=81 status=ok
// SIG undefined FUN_14883e7c8(void)

undefined8 FUN_14883e7c8(longlong param_1)

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



// FUNCTION 14883e820 FUN_14883e820 body=89 status=ok
// SIG undefined FUN_14883e820(void)

bool FUN_14883e820(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14883e86b;
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
LAB_14883e86b:
  return lVar6 == param_2;
}



// FUNCTION 14883e896 FUN_14883e896 body=118 status=ok
// SIG undefined FUN_14883e896(void)

void FUN_14883e896(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fcca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14883e90c FUN_14883e90c body=156 status=ok
// SIG undefined FUN_14883e90c(void)

void FUN_14883e90c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fcca0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014883e998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883e9a8 FUN_14883e9a8 body=98 status=ok
// SIG undefined FUN_14883e9a8(void)

void FUN_14883e9a8(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014883e9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014883ea00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14883ea0a FUN_14883ea0a body=128 status=ok
// SIG undefined FUN_14883ea0a(void)

void FUN_14883ea0a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7c0d0;
  if (DAT_14cb7c104 != 0) {
    *(int *)(DAT_14cb7c0d0 + (longlong)DAT_14cb7c100 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7c104) {
    iVar4 = DAT_14cb7c100;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb7c104 = DAT_14cb7c104 + 1;
  puVar3 = &DAT_14cb7c0e0;
  if (DAT_14cb7c0f0 != (undefined *)0x0) {
    puVar3 = DAT_14cb7c0f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7c100 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14883eaf0 FUN_14883eaf0 body=38 status=ok
// SIG undefined FUN_14883eaf0(void)

undefined8 FUN_14883eaf0(undefined8 param_1,int param_2)

{
  FUN_1415a3d30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883eb1e FUN_14883eb1e body=147 status=ok
// SIG undefined FUN_14883eb1e(void)

void FUN_14883eb1e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14883ebdc FUN_14883ebdc body=101 status=ok
// SIG undefined FUN_14883ebdc(void)

void FUN_14883ebdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fcde0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b3fcd70;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 14883ec42 FUN_14883ec42 body=134 status=ok
// SIG undefined FUN_14883ec42(void)

void FUN_14883ec42(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fcde0;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar3;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar4;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar5;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fcd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014883ecb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883ecc8 FUN_14883ecc8 body=38 status=ok
// SIG undefined FUN_14883ecc8(void)

void FUN_14883ecc8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x20))
            (param_2,param_3,param_4,*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc));
  return;
}



// FUNCTION 14883ecf0 FUN_14883ecf0 body=68 status=ok
// SIG undefined FUN_14883ecf0(void)

void FUN_14883ecf0(longlong param_1,uint param_2)

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
  FUN_1457b49cc(param_1);
  return;
}



// FUNCTION 14883ed34 FUN_14883ed34 body=113 status=ok
// SIG undefined FUN_14883ed34(void)

void FUN_14883ed34(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x58;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x54 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x50 + lVar6 * 0x58);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x58 + 0x50);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x50);
  FUN_14883ee1a(lVar3 + *param_1);
  FUN_14883eda6(param_1,param_2);
  return;
}



// FUNCTION 14883eda6 FUN_14883eda6 body=116 status=ok
// SIG undefined FUN_14883eda6(void)

void FUN_14883eda6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 14883ee1a FUN_14883ee1a body=74 status=ok
// SIG undefined FUN_14883ee1a(void)

void FUN_14883ee1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14883ee64 FUN_14883ee64 body=23 status=ok
// SIG undefined FUN_14883ee64(void)

void FUN_14883ee64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014883ee77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14883ee7c FUN_14883ee7c body=54 status=ok
// SIG undefined FUN_14883ee7c(void)

longlong FUN_14883ee7c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 14883eeb6 FUN_14883eeb6 body=81 status=ok
// SIG undefined FUN_14883eeb6(void)

undefined8 FUN_14883eeb6(longlong param_1)

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



// FUNCTION 14883ef0e FUN_14883ef0e body=118 status=ok
// SIG undefined FUN_14883ef0e(void)

void FUN_14883ef0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fcf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fcee0;
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



// FUNCTION 14883ef84 FUN_14883ef84 body=118 status=ok
// SIG undefined FUN_14883ef84(void)

void FUN_14883ef84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fcf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fcee0;
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



// FUNCTION 14883effa FUN_14883effa body=156 status=ok
// SIG undefined FUN_14883effa(void)

void FUN_14883effa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fcf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fcee0;
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
                    /* WARNING: Could not recover jumptable at 0x00014883f086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883f096 FUN_14883f096 body=104 status=ok
// SIG undefined FUN_14883f096(void)

void FUN_14883f096(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014883f0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014883f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14883f104 FUN_14883f104 body=81 status=ok
// SIG undefined FUN_14883f104(void)

undefined8 FUN_14883f104(longlong param_1)

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



// FUNCTION 14883f15c FUN_14883f15c body=118 status=ok
// SIG undefined FUN_14883f15c(void)

void FUN_14883f15c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fd030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fcfc0;
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



// FUNCTION 14883f1d2 FUN_14883f1d2 body=118 status=ok
// SIG undefined FUN_14883f1d2(void)

void FUN_14883f1d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fd030;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fcfc0;
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



// FUNCTION 14883f248 FUN_14883f248 body=156 status=ok
// SIG undefined FUN_14883f248(void)

void FUN_14883f248(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fd030;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fcfc0;
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
                    /* WARNING: Could not recover jumptable at 0x00014883f2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883f2e4 FUN_14883f2e4 body=114 status=ok
// SIG undefined FUN_14883f2e4(void)

void FUN_14883f2e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14883f341:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14883f341;
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
                    /* WARNING: Could not recover jumptable at 0x00014883f33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14883f358 FUN_14883f358 body=132 status=ok
// SIG undefined FUN_14883f358(void)

void FUN_14883f358(longlong param_1,int param_2)

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



// FUNCTION 14883f3ee FUN_14883f3ee body=132 status=ok
// SIG undefined FUN_14883f3ee(void)

void FUN_14883f3ee(longlong param_1,int param_2)

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



// FUNCTION 14883f478 FUN_14883f478 body=48 status=ok
// SIG undefined FUN_14883f478(void)

void FUN_14883f478(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14883f4a8 FUN_14883f4a8 body=31 status=ok
// SIG undefined FUN_14883f4a8(void)

undefined8 FUN_14883f4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883f4e2 FUN_14883f4e2 body=93 status=ok
// SIG undefined FUN_14883f4e2(void)

void FUN_14883f4e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14883f540 FUN_14883f540 body=93 status=ok
// SIG undefined FUN_14883f540(void)

void FUN_14883f540(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14883f59e FUN_14883f59e body=126 status=ok
// SIG undefined FUN_14883f59e(void)

void FUN_14883f59e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014883f60d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883f61c FUN_14883f61c body=40 status=ok
// SIG undefined FUN_14883f61c(void)

void FUN_14883f61c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014883f641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14883f644 FUN_14883f644 body=136 status=ok
// SIG undefined FUN_14883f644(void)

void FUN_14883f644(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar3) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar3) != 0) {
    FUN_1400020a8();
  }
  FUN_145c3efcc(lVar1 + lVar3 + 8);
  iVar2 = (int)param_1[1];
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x60),
            (longlong)iVar4 * 0x60);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14883f6cc FUN_14883f6cc body=62 status=ok
// SIG undefined FUN_14883f6cc(void)

void FUN_14883f6cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14883f70a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 14883f70a FUN_14883f70a body=112 status=ok
// SIG undefined FUN_14883f70a(void)

ulonglong FUN_14883f70a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14883f744;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_14883f744:
  return param_2 & 0xffffffff;
}



// FUNCTION 14883f782 FUN_14883f782 body=38 status=ok
// SIG undefined FUN_14883f782(void)

undefined8 FUN_14883f782(undefined8 param_1,int param_2)

{
  FUN_1414b5666();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883f7b0 FUN_14883f7b0 body=38 status=ok
// SIG undefined FUN_14883f7b0(void)

undefined8 FUN_14883f7b0(undefined8 param_1,int param_2)

{
  FUN_145aec480();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883f7d6 FUN_14883f7d6 body=345 status=ok
// SIG undefined FUN_14883f7d6(void)

undefined4 * FUN_14883f7d6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14883f930(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14883fa16(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14883fb26(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883f930 FUN_14883f930 body=230 status=ok
// SIG undefined FUN_14883f930(void)

int * FUN_14883f930(longlong *param_1,int *param_2)

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



// FUNCTION 14883fa16 FUN_14883fa16 body=158 status=ok
// SIG undefined FUN_14883fa16(void)

undefined8 FUN_14883fa16(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          plVar1 = (longlong *)plVar5[1];
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1,1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)*param_3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar2;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar3;
          FUN_14883fab4(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14883fab4 FUN_14883fab4 body=114 status=ok
// SIG undefined FUN_14883fab4(void)

void FUN_14883fab4(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 14883fb26 FUN_14883fb26 body=473 status=ok
// SIG undefined FUN_14883fb26(void)

void FUN_14883fb26(longlong *param_1)

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



// FUNCTION 14883fd10 FUN_14883fd10 body=114 status=ok
// SIG undefined FUN_14883fd10(void)

void FUN_14883fd10(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fd7d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14883fd96 FUN_14883fd96 body=68 status=ok
// SIG undefined FUN_14883fd96(void)

void FUN_14883fd96(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14883fdda(param_1);
  return;
}



// FUNCTION 14883fdda FUN_14883fdda body=54 status=ok
// SIG undefined FUN_14883fdda(void)

void FUN_14883fdda(longlong *param_1)

{
  FUN_14883fe10(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14883fe10 FUN_14883fe10 body=353 status=ok
// SIG undefined FUN_14883fe10(void)

void FUN_14883fe10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_14883ff74(*local_70 + (longlong)iStack_54 * 0x80 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14095c99c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14883ff74 FUN_14883ff74 body=68 status=ok
// SIG undefined FUN_14883ff74(void)

void FUN_14883ff74(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14883ffb8(param_1);
  return;
}



// FUNCTION 14883ffb8 FUN_14883ffb8 body=54 status=ok
// SIG undefined FUN_14883ffb8(void)

void FUN_14883ffb8(longlong *param_1)

{
  FUN_14883ffee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14883ffee FUN_14883ffee body=357 status=ok
// SIG undefined FUN_14883ffee(void)

void FUN_14883ffee(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_148840156(*local_70 + (longlong)iStack_54 * 0xc0 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1407da7e2(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148840156 FUN_148840156 body=101 status=ok
// SIG undefined FUN_148840156(void)

void FUN_148840156(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1414b5774(param_1 + 0x58);
  FUN_145a1a852(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1488401c4 FUN_1488401c4 body=160 status=ok
// SIG undefined FUN_1488401c4(void)

void FUN_1488401c4(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_148840264(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_148840264(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_148840442(param_1);
  return;
}



// FUNCTION 148840264 FUN_148840264 body=54 status=ok
// SIG undefined FUN_148840264(void)

void FUN_148840264(longlong *param_1)

{
  FUN_14884029a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14884029a FUN_14884029a body=353 status=ok
// SIG undefined FUN_14884029a(void)

void FUN_14884029a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_1488403fe(*local_70 + (longlong)iStack_54 * 0x80 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14095c99c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488403fe FUN_1488403fe body=68 status=ok
// SIG undefined FUN_1488403fe(void)

void FUN_1488403fe(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_148840442(param_1);
  return;
}



// FUNCTION 148840442 FUN_148840442 body=54 status=ok
// SIG undefined FUN_148840442(void)

void FUN_148840442(longlong *param_1)

{
  FUN_148840478(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148840478 FUN_148840478 body=357 status=ok
// SIG undefined FUN_148840478(void)

void FUN_148840478(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_1488405e0(*local_70 + (longlong)iStack_54 * 0xc0 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1407da7e2(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488405e0 FUN_1488405e0 body=101 status=ok
// SIG undefined FUN_1488405e0(void)

void FUN_1488405e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1414b5774(param_1 + 0x58);
  FUN_145a1a852(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148840646 FUN_148840646 body=266 status=ok
// SIG undefined FUN_148840646(void)

void FUN_148840646(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fd9b0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 2;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  return;
}



// FUNCTION 148840758 FUN_148840758 body=399 status=ok
// SIG undefined FUN_148840758(void)

void FUN_148840758(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fdaa0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  param_1[0x20] = 0;
  param_1[0x21] = 0x2000000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x2000000000;
  param_1[0x44] = 0;
  param_1[0x45] = 0x2000000000;
  param_1[0x56] = 0;
  param_1[0x57] = 0x2000000000;
  param_1[0x68] = 0;
  param_1[0x69] = 0x2000000000;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x2000000000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  return;
}



// FUNCTION 1488408f0 FUN_1488408f0 body=31 status=ok
// SIG undefined FUN_1488408f0(void)

undefined8 FUN_1488408f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14884092c FUN_14884092c body=93 status=ok
// SIG undefined FUN_14884092c(void)

void FUN_14884092c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fdf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdbe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14884098a FUN_14884098a body=93 status=ok
// SIG undefined FUN_14884098a(void)

void FUN_14884098a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fdf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdbe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488409e8 FUN_1488409e8 body=126 status=ok
// SIG undefined FUN_1488409e8(void)

void FUN_1488409e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fdf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fdbe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148840a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148840a76 FUN_148840a76 body=132 status=ok
// SIG undefined FUN_148840a76(void)

void FUN_148840a76(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148840afc FUN_148840afc body=62 status=ok
// SIG undefined FUN_148840afc(void)

void FUN_148840afc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148840b3a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,8);
  }
  return;
}



// FUNCTION 148840b3a FUN_148840b3a body=110 status=ok
// SIG undefined FUN_148840b3a(void)

ulonglong FUN_148840b3a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148840b73;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb0,8);
      param_2 = param_2 / 0xb0;
    }
  }
LAB_148840b73:
  return param_2 & 0xffffffff;
}



// FUNCTION 148840ba8 FUN_148840ba8 body=31 status=ok
// SIG undefined FUN_148840ba8(void)

undefined8 FUN_148840ba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148840be2 FUN_148840be2 body=101 status=ok
// SIG undefined FUN_148840be2(void)

void FUN_148840be2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdc50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148840c48 FUN_148840c48 body=101 status=ok
// SIG undefined FUN_148840c48(void)

void FUN_148840c48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fdc50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148840cae FUN_148840cae body=134 status=ok
// SIG undefined FUN_148840cae(void)

void FUN_148840cae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fdc50;
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
                    /* WARNING: Could not recover jumptable at 0x000148840d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148840d34 FUN_148840d34 body=44 status=ok
// SIG undefined FUN_148840d34(void)

void FUN_148840d34(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148840d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148840d60 FUN_148840d60 body=88 status=ok
// SIG undefined FUN_148840d60(void)

void FUN_148840d60(longlong param_1,int param_2)

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



// FUNCTION 148840db8 FUN_148840db8 body=40 status=ok
// SIG undefined FUN_148840db8(void)

void FUN_148840db8(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148840de0 FUN_148840de0 body=120 status=ok
// SIG undefined FUN_148840de0(void)

void FUN_148840de0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0 + 4) = uVar5;
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



// FUNCTION 148840e58 FUN_148840e58 body=163 status=ok
// SIG undefined FUN_148840e58(void)

void FUN_148840e58(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14007a5e6(lVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_140427846();
        plVar4 = (longlong *)FUN_144718840(param_1,uVar3);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x50))(plVar4,local_58);
          (**(code **)(*plVar2 + 0x68))(plVar2,local_58,param_2);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148840efc FUN_148840efc body=67 status=ok
// SIG undefined FUN_148840efc(void)

void FUN_148840efc(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14007a5e6(lVar1);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148840f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x48))(plVar2,*param_2,*(code **)(*plVar2 + 0x48));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148840f40 FUN_148840f40 body=721 status=ok
// SIG undefined FUN_148840f40(void)

void FUN_148840f40(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((param_1 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_1 + 0x180))(), lVar3 == 0)) ||
     (plVar4 = (longlong *)FUN_14007a5e6(lVar3), plVar4 == (longlong *)0x0)) goto LAB_148841117;
  local_48 = 0;
  local_50 = 0;
  (**(code **)(*plVar4 + 0x98))(plVar4,*param_2);
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  local_78 = DAT_14c8464f0;
  local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar3 = param_3[1];
  if (lVar3 == 0) {
    uVar5 = FUN_1418621d0();
    lVar3 = FUN_14477b664(uVar5);
    param_3[1] = lVar3;
  }
  if (param_3[2] == 0) {
    if ((lVar3 != 0) && (*param_3 != 0)) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_3[2] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar3 = FUN_144aff482(uVar5,param_3);
        param_3[2] = lVar3;
        if (lVar3 != 0) goto LAB_148841016;
      }
    }
  }
  else {
LAB_148841016:
    lVar3 = local_48;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_48);
    }
    local_c8 = lVar3;
    local_c0 = local_50;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_f8 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = 1;
    lVar3 = param_3[1];
    if (lVar3 == 0) {
      uVar5 = FUN_1418621d0();
      lVar3 = FUN_14477b664(uVar5);
      param_3[1] = lVar3;
    }
    lVar6 = param_3[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar3 != 0)) && (*param_3 != 0)) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0'))
      {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,param_3);
      }
      param_3[2] = lVar6;
    }
    FUN_141035d0a(lVar6,&local_c8,&local_128);
    local_78 = uStack_100;
    local_88 = uStack_110;
    uStack_80 = local_108;
    local_68 = (undefined4)local_f0;
    uStack_64 = local_f0._4_4_;
    uStack_60 = (undefined4)uStack_e8;
    uStack_5c = uStack_e8._4_4_;
    local_58 = local_e0;
  }
  (**(code **)(*plVar4 + 0x88))(plVar4,*param_2,&local_88,&local_68);
LAB_148841117:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148841212 FUN_148841212 body=70 status=ok
// SIG undefined FUN_148841212(void)

void FUN_148841212(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14007a5e6(lVar1);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014884124e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x90))(plVar2,*param_2,*(code **)(*plVar2 + 0x90));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148841258 FUN_148841258 body=182 status=ok
// SIG undefined FUN_148841258(void)

void FUN_148841258(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x180))(), lVar1 != 0)) &&
     (plVar2 = (longlong *)FUN_14007a5e6(lVar1), plVar2 != (longlong *)0x0)) {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,&local_38);
    lVar1 = local_38;
    lVar3 = (longlong)(int)uStack_30;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined4 *)(lVar1 + lVar4));
        lVar4 = lVar4 + 4;
      } while (lVar3 * 4 != lVar4);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148841310 FUN_148841310 body=133 status=ok
// SIG undefined FUN_148841310(void)

undefined8 FUN_148841310(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"MissionsChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148841396 FUN_148841396 body=32 status=ok
// SIG undefined FUN_148841396(void)

void FUN_148841396(undefined8 param_1,undefined4 param_2)

{
  FUN_145d2413a();
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 1488413b6 FUN_1488413b6 body=116 status=ok
// SIG undefined FUN_1488413b6(void)

undefined8 FUN_1488413b6(byte param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (DAT_14cb7c6d0 != DAT_14cb7c6fc) {
    puVar4 = &DAT_14cb7c700;
    if (DAT_14cb7c708 != (undefined *)0x0) {
      puVar4 = DAT_14cb7c708;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cb7c710 - 1U & (uint)param_1) * 4);
    while (iVar2 != -1) {
      pbVar1 = (byte *)(DAT_14cb7c6c8 + (longlong)iVar2 * 0x14);
      if (*pbVar1 == param_1) {
        if (pbVar1 + 4 == (byte *)0x0 || pbVar1 == (byte *)0x0) {
          return 0;
        }
        uVar3 = FUN_14479d2ce(pbVar1 + 4);
        return uVar3;
      }
      iVar2 = *(int *)(pbVar1 + 0xc);
    }
  }
  return 0;
}



// FUNCTION 14884142a FUN_14884142a body=140 status=ok
// SIG undefined FUN_14884142a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14884142a(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20,param_1);
  local_18 = local_20;
  iVar1 = FUN_1403d4296(&DAT_14cb7c718,(uint)((ulonglong)local_20 >> 0x20) ^ (uint)local_20);
  lVar2 = (longlong)iVar1 * 0x14 + _DAT_14cb7c718;
  if (lVar2 == 0 || iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488414b8 FUN_1488414b8 body=159 status=ok
// SIG undefined FUN_1488414b8(void)

undefined8 * FUN_1488414b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1459aa1ae();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14884155a FUN_14884155a body=334 status=ok
// SIG undefined FUN_14884155a(void)

ulonglong FUN_14884155a(char *param_1)

{
  int iVar1;
  uint3 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 uStack_3c;
  int local_2c [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == '\x0e') {
    FUN_144a659ac(param_1 + 0x10,&local_40,1);
    if (local_40 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_144a659ac(param_1 + 0x10,local_2c,2);
      if (0xfffffffd < iVar1 - 5U) {
        uVar2 = (uint3)(iVar1 - 5U >> 8);
        uVar4 = CONCAT71((uint7)uVar2,1);
        FUN_1408226d0(local_2c,&local_40,1);
        cVar3 = FUN_144a791f8(&local_40,&DAT_149e01f60,1,1);
        if (CONCAT44(uStack_3c,local_40) != 0) {
          FUN_1400020a8();
        }
        if ((((cVar3 == '\0') || ((local_2c[0] == DAT_14cb7c818 && (local_24 == DAT_14cb7c820)))) ||
            ((local_2c[0] == DAT_14cb7c830 && (local_24 == DAT_14cb7c838)))) ||
           (((local_2c[0] == DAT_14cb7c848 && (local_24 == DAT_14cb7c850)) ||
            ((local_2c[0] == DAT_14cb7c860 && (local_24 == DAT_14cb7c868)))))) goto LAB_1488415b7;
        if (local_2c[0] == DAT_14cb7c878) {
          uVar4 = (ulonglong)CONCAT31(uVar2,local_24 == DAT_14cb7c880);
          goto LAB_1488415b7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1488415b7:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1488416a9 FUN_1488416a9 body=531 status=ok
// SIG undefined FUN_1488416a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1488416a9(undefined2 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  undefined1 local_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [48];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_30 = 0;
  local_28 = 0x400000000;
  if (param_4 == '\0') {
    local_128 = &local_90;
    local_88 = DAT_14cb7baf8;
    local_90 = _DAT_14cb7baf0;
    local_84 = *param_2;
    local_7c = *(undefined4 *)(param_2 + 1);
    local_78 = *param_3;
    local_70 = *(undefined4 *)(param_3 + 1);
    local_120 = &local_6c;
    FUN_1488418be(local_60);
    puVar1 = local_e0;
  }
  else if (param_4 == '\x02') {
    local_138 = &local_90;
    local_88 = DAT_14cb7baf8;
    local_90 = _DAT_14cb7baf0;
    local_84 = *param_2;
    local_7c = *(undefined4 *)(param_2 + 1);
    local_78 = _DAT_14cb7c878;
    local_70 = DAT_14cb7c880;
    local_6c = *param_3;
    local_64 = *(undefined4 *)(param_3 + 1);
    local_130 = local_60;
    FUN_1488418be(local_60);
    puVar1 = local_108;
  }
  else {
    if (param_4 != '\x01') goto LAB_14884171a;
    local_118 = &local_90;
    local_88 = DAT_14cb7baf8;
    local_90 = _DAT_14cb7baf0;
    local_84 = *param_2;
    local_7c = *(undefined4 *)(param_2 + 1);
    local_78 = _DAT_14cb7c860;
    local_70 = DAT_14cb7c868;
    local_6c = *param_3;
    local_64 = *(undefined4 *)(param_3 + 1);
    local_110 = local_60;
    FUN_1488418be(local_60);
    puVar1 = local_b8;
  }
  FUN_14686d0d2(puVar1,local_60);
  FUN_14071d490(puVar1,param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_14884171a:
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488418be FUN_1488418be body=116 status=ok
// SIG undefined FUN_1488418be(void)

void * FUN_1488418be(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 2) * -0x5555555555555555;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x38) = iVar1;
  if (*(int *)((longlong)param_1 + 0x3c) == 0 && iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
  }
  else {
    FUN_14687429a(param_1,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x30);
      if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 148841932 FUN_148841932 body=168 status=ok
// SIG undefined FUN_148841932(void)

longlong FUN_148841932(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24 [2];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_1488419dc();
  FUN_144a659ac(param_2 + 0x10,local_24,3 < *(int *)(param_2 + 0x14) | 2);
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    if (local_1c != 0) {
      local_24[0] = FUN_144a78877(local_24[0],local_1c);
    }
    iVar1 = FUN_14884ad66(plVar2,local_24[0],local_24);
    if (iVar1 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar1 * 0xc0 + *plVar2;
    }
    lVar3 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1488419dc FUN_1488419dc body=146 status=ok
// SIG undefined FUN_1488419dc(void)

longlong FUN_1488419dc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24 [2];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a659ac(param_2 + 0x10,local_24,1);
  if (local_1c != 0) {
    local_24[0] = FUN_144a78877(local_24[0],local_1c);
  }
  iVar1 = FUN_14884a950((longlong *)(param_1 + 0x10),local_24[0],local_24);
  if (iVar1 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x120 + *(longlong *)(param_1 + 0x10);
  }
  lVar2 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148841a70 FUN_148841a70 body=328 status=ok
// SIG undefined FUN_148841a70(void)

undefined8 *
FUN_148841a70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar8 = FUN_14884155a(param_3);
  if (cVar8 == '\0') {
    *(undefined4 *)((longlong)param_4 + 0x94) = 4;
  }
  else {
    local_39 = '\0';
    FUN_148841bba(param_1,local_50,param_3,&local_39);
    if (local_39 == '\x01') {
      uVar7 = param_4[1];
      *(undefined8 *)(local_48 + 0x38) = *param_4;
      *(undefined8 *)(local_48 + 0x40) = uVar7;
    }
    uVar4 = *(undefined4 *)(local_48 + 0x3c);
    uVar5 = *(undefined4 *)(local_48 + 0x40);
    uVar6 = *(undefined4 *)(local_48 + 0x44);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(local_48 + 0x38);
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar4;
    *(undefined4 *)(param_4 + 3) = uVar5;
    *(undefined4 *)((longlong)param_4 + 0x1c) = uVar6;
    if ((longlong *)param_4[4] != (longlong *)0x0 && *(int *)(param_4 + 5) != 0) {
      cVar8 = (**(code **)(*(longlong *)param_4[4] + 0x30))();
      if (cVar8 != '\0') {
        iVar1 = *(int *)(local_48 + 0x50);
        *(uint *)(local_48 + 0x50) = iVar1 + 1U;
        if (*(uint *)(local_48 + 0x54) < iVar1 + 1U) {
          FUN_14884a3f6((longlong *)(local_48 + 0x48),iVar1);
        }
        lVar2 = *(longlong *)(local_48 + 0x48);
        lVar9 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar9) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
        FUN_1401aa3da(lVar2 + lVar9,param_4 + 4);
      }
    }
    *(undefined4 *)((longlong)param_4 + 0x94) = 1;
    plVar3 = (longlong *)param_4[4];
    if (plVar3 != (longlong *)0x0 && *(int *)(param_4 + 5) != 0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      goto LAB_148841ab5;
    }
  }
  *param_2 = 0;
LAB_148841ab5:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148841bba FUN_148841bba body=535 status=ok
// SIG undefined FUN_148841bba(void)

longlong * FUN_148841bba(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  int local_54 [2];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_4 = 0;
  puVar1 = param_3 + 2;
  FUN_144a659ac(puVar1,local_54,1);
  iVar3 = local_54[0];
  if (local_4c != 0) {
    iVar3 = FUN_144a78877(local_54[0],local_4c);
  }
  lVar4 = FUN_14884adcc(param_1 + 0x10,iVar3,local_54);
  FUN_144a659ac(puVar1,local_54,2);
  if ((local_54[0] == DAT_14cb7c860) && (local_4c == DAT_14cb7c868)) {
    FUN_144a659ac(puVar1,local_54,3);
    lVar6 = lVar4 + 0x50;
  }
  else {
    FUN_144a659ac(puVar1,local_54,2);
    if ((local_54[0] != DAT_14cb7c878) || (local_4c != DAT_14cb7c880)) {
      FUN_144a659ac(puVar1,local_54,2);
      lVar6 = lVar4;
      if (local_4c != 0) {
        FUN_144a78877(local_54[0],local_4c);
      }
      goto LAB_148841cb1;
    }
    FUN_144a659ac(puVar1,local_54,3);
    lVar6 = lVar4 + 0xa0;
  }
  iVar3 = local_54[0];
  if (local_4c != 0) {
    iVar3 = FUN_144a78877(local_54[0],local_4c);
  }
  lVar6 = FUN_14884b610(lVar6,iVar3,local_54);
  if (local_4c != 0) {
    FUN_144a78877(local_54[0],local_4c);
  }
LAB_148841cb1:
  puVar5 = (undefined8 *)FUN_14884bc6c(lVar6);
  cVar2 = FUN_145c7fb8e(puVar5,param_3);
  if (cVar2 != '\0') {
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar5 = *param_3;
    FUN_1447715ec(puVar5 + 2,puVar1);
    *param_4 = 1;
  }
  *param_2 = lVar4;
  param_2[1] = (longlong)puVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148841dd2 FUN_148841dd2 body=430 status=ok
// SIG undefined FUN_148841dd2(void)

bool FUN_148841dd2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_a8 [46];
  byte local_7a;
  byte local_79;
  longlong *local_78;
  int local_6c;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_148841932();
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x50);
    lVar11 = (longlong)iVar1;
    if (lVar11 != 0) {
      local_78 = *(longlong **)(lVar3 + 0x48);
      plVar6 = (longlong *)*local_78;
      uVar9 = 0;
      local_60 = lVar3;
      if (plVar6 == (longlong *)0x0 || (int)local_78[1] == 0) {
        lVar3 = 0;
      }
      else {
        (**(code **)(*plVar6 + 0x38))(plVar6,&local_50);
        lVar3 = local_50;
      }
      bVar12 = lVar3 == param_3;
      local_58 = local_78 + 3;
      iVar7 = 0;
      do {
        local_7a = bVar12 ^ 1;
        lVar3 = (longlong)iVar7;
        iVar10 = iVar7 + 1;
        if (iVar7 + 1 < iVar1) {
          iVar10 = iVar1;
        }
        plVar6 = local_58 + lVar3 * 2;
        lVar4 = lVar3;
        local_79 = bVar12;
        local_6c = iVar7;
        local_68 = uVar9;
        do {
          lVar4 = lVar4 + 1;
          iVar8 = iVar10;
          if (lVar11 <= lVar4) break;
          plVar2 = (longlong *)plVar6[-1];
          if (plVar2 == (longlong *)0x0 || (int)*plVar6 == 0) {
            lVar5 = 0;
          }
          else {
            (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
            lVar5 = local_50;
          }
          iVar7 = iVar7 + 1;
          plVar6 = plVar6 + 2;
          iVar8 = iVar7;
        } while ((bool)(bVar12 & 1) == (lVar5 == param_3));
        iVar7 = iVar8;
        bVar12 = local_7a;
        iVar10 = iVar7 - local_6c;
        if ((local_79 & 1) == 0) {
          iVar8 = (int)local_68;
          if (iVar8 != local_6c) {
            memmove(local_78 + (longlong)iVar8 * 2,local_78 + lVar3 * 2,(longlong)iVar10 << 4);
          }
          uVar9 = (ulonglong)(uint)(iVar8 + iVar10);
        }
        else {
          FUN_145a1a852(local_78 + lVar3 * 2,iVar10);
          uVar9 = local_68;
          bVar12 = local_7a;
        }
      } while (lVar4 < lVar11);
      *(int *)(local_60 + 0x50) = (int)uVar9;
      bVar13 = iVar1 != (int)uVar9;
      goto LAB_148841e31;
    }
  }
  bVar13 = false;
LAB_148841e31:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar13;
}



// FUNCTION 148841f82 FUN_148841f82 body=42 status=ok
// SIG undefined FUN_148841f82(void)

undefined4 * FUN_148841f82(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_148841932(param_1,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x38);
    uVar3 = *(undefined4 *)(lVar1 + 0x3c);
    uVar4 = *(undefined4 *)(lVar1 + 0x40);
    uVar5 = *(undefined4 *)(lVar1 + 0x44);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return param_2;
}



// FUNCTION 148841fac FUN_148841fac body=354 status=ok
// SIG undefined FUN_148841fac(void)

undefined8 * FUN_148841fac(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 4) < 1) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  do {
    uVar1 = uStack_60._4_4_;
    uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
    if ((int)uVar1 < 5) {
      FUN_1446f8c06(&local_68,5);
    }
    if (local_68 != (undefined2 *)0x0) {
      *local_68 = 0;
    }
    iVar4 = 4;
    do {
      uVar1 = rand();
      iVar3 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 26.0);
      if (0x18 < iVar3) {
        iVar3 = 0x19;
      }
      FUN_140002184(&local_68,iVar3 + 0x61);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_1405f0cf6(param_2,&local_68,0,1);
    uVar2 = *(undefined4 *)param_2;
    if (*(int *)(param_2 + 1) != 0) {
      uVar2 = FUN_144a78877(uVar2,*(int *)(param_2 + 1));
    }
    iVar4 = FUN_14884a950(param_1 + 0x10,uVar2);
  } while (iVar4 != -1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148842110 FUN_148842110 body=19 status=ok
// SIG undefined FUN_148842110(void)

void FUN_148842110(longlong param_1)

{
  FUN_14884a9b6(param_1 + 0x10);
  return;
}



// FUNCTION 148842124 FUN_148842124 body=83 status=ok
// SIG undefined FUN_148842124(void)

void FUN_148842124(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    FUN_145ff11e8(param_1 + 0x10);
    FUN_14884ab5e(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94)) {
    return;
  }
  FUN_145779f24(param_1 + 0x60);
  FUN_148812ff8(param_1 + 0x60);
  return;
}



// FUNCTION 148842178 FUN_148842178 body=354 status=ok
// SIG undefined FUN_148842178(void)

void FUN_148842178(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  ulonglong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar2 = param_1 + 0x20;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  local_58 = uVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x38);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (local_58 != uVar2)) {
    do {
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iStack_6c;
        local_60 = 0;
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1401aa3da(&local_60,param_2);
        FUN_14884ac7e(lVar3 + lVar4 * 0x120 + 0x100,local_90,&local_60);
        FUN_1449db362(&local_60);
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar5);
    } while ((local_78 != uVar2) || (local_88 != plVar1));
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488422dc FUN_1488422dc body=1211 status=ok
// SIG undefined FUN_1488422dc(void)

void FUN_1488422dc(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_138 [43];
  byte local_10d;
  int local_10c;
  longlong *local_108;
  longlong *local_100;
  int local_f4;
  uint local_f0;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  int *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = (longlong *)(param_1 + 0x10);
  local_e8 = param_1 + 0x20;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  local_d8 = param_1;
  uStack_b0 = local_e8;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar7 = *(int *)(param_1 + 0x38);
  }
  local_78 = local_a8;
  lVar3 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_108;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  iVar2 = local_78._4_4_;
  if ((local_78._4_4_ != iVar7) || (local_78 = lVar3, uStack_b0 != local_e8)) {
    do {
      local_78 = lVar3;
      local_f4 = iVar7;
      lVar3 = *local_90;
      lVar4 = (longlong)iVar2 * 0x120;
      FUN_140457ffc(lVar3 + lVar4 + 0x100,param_2);
      lVar10 = lVar3 + lVar4 + 0x20;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar10;
      if (*(int *)(lVar3 + lVar4 + 0x38) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_e0 = (longlong *)(lVar3 + lVar4 + 0x10);
      uStack_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar5 = *(uint *)(lVar3 + lVar4 + 0x38);
      local_68 = CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
      local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
      local_50 = uVar5 & 0xffffffe0;
      local_b8 = local_e0;
      local_60 = lVar10;
      if (*(uint *)(lVar3 + lVar4 + 0x38) != uVar5) {
        FUN_1449c0562(&local_68);
        uVar5 = local_58._4_4_;
      }
      lVar3 = local_60;
      local_f0 = uVar5;
      local_d0 = local_60;
      if ((local_b8 != local_e0 || local_a8 != local_60) || uStack_a0._4_4_ != uVar5) {
        do {
          lVar4 = *local_b8;
          lVar10 = (longlong)(int)uStack_a0._4_4_ * 0xc0;
          iVar7 = *(int *)(lVar4 + 0x60 + lVar10);
          lVar11 = (longlong)iVar7;
          if (lVar11 != 0) {
            local_100 = *(longlong **)(lVar4 + 0x58 + lVar10);
            if ((longlong *)*local_100 == (longlong *)0x0 || (int)local_100[1] == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = (**(code **)(*(longlong *)*local_100 + 8))();
            }
            local_c8 = (int *)(lVar4 + lVar10 + 0x60);
            local_c0 = local_100 + 3;
            iVar8 = 0;
            iVar2 = 0;
            bVar1 = lVar3 == param_2;
            do {
              local_ec = iVar2;
              local_10d = bVar1 ^ 1;
              lVar3 = (longlong)local_ec;
              iVar9 = local_ec + 1;
              if (local_ec + 1 < iVar7) {
                iVar9 = iVar7;
              }
              plVar6 = local_c0 + lVar3 * 2;
              lVar4 = lVar3;
              local_10c = iVar8;
              iVar8 = local_ec;
              do {
                lVar4 = lVar4 + 1;
                iVar2 = iVar9;
                if (lVar11 <= lVar4) break;
                if ((longlong *)plVar6[-1] == (longlong *)0x0 || (int)*plVar6 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (**(code **)(*(longlong *)plVar6[-1] + 8))();
                }
                iVar8 = iVar8 + 1;
                plVar6 = plVar6 + 2;
                iVar2 = iVar8;
              } while ((bool)(bVar1 & 1) == (lVar10 == param_2));
              iVar8 = local_10c;
              iVar9 = iVar2 - local_ec;
              if ((bVar1 & 1) == 0) {
                if (local_10c != local_ec) {
                  memmove(local_100 + (longlong)local_10c * 2,local_100 + lVar3 * 2,
                          (longlong)iVar9 << 4);
                }
                iVar8 = iVar8 + iVar9;
              }
              else {
                FUN_145a1a852(local_100 + lVar3 * 2,iVar9);
                iVar8 = local_10c;
              }
              bVar1 = local_10d;
            } while (lVar4 < lVar11);
            *local_c8 = iVar8;
            lVar3 = local_d0;
            uVar5 = local_f0;
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != local_e0 || (local_a8 != lVar3 || uStack_a0._4_4_ != uVar5));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar2 = local_78._4_4_;
      iVar7 = local_f4;
      lVar3 = local_78;
    } while (local_90 != local_108 ||
             (CONCAT44(uStack_7c,uStack_80) != local_e8 || local_78._4_4_ != local_f4));
  }
  if (*(int *)(local_d8 + 0x68) != *(int *)(local_d8 + 0x94)) {
    lVar3 = local_d8 + 0x60;
    FUN_145779f24(lVar3);
    FUN_148812ff8(lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148842798 FUN_148842798 body=421 status=ok
// SIG undefined FUN_148842798(void)

void FUN_148842798(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar4 = FUN_14884a950((longlong *)(param_1 + 0x10),uVar3,param_2);
  uVar6 = local_78;
  if (iVar4 != -1) {
    lVar8 = (longlong)iVar4 * 0x120 + *(longlong *)(param_1 + 0x10);
    plVar9 = (longlong *)(lVar8 + 0x10);
    if (plVar9 != (longlong *)0x0 && lVar8 != 0) {
      lVar1 = lVar8 + 0x20;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar1;
      if (*(int *)(lVar8 + 0x38) == 0) {
        iVar4 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar4 = *(int *)(lVar8 + 0x38);
      }
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar6 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar9;
      if ((local_78._4_4_ != iVar4) || (uStack_60 != lVar1)) {
        iVar5 = local_78._4_4_;
        local_78 = uVar6;
        do {
          lVar8 = *local_90;
          pcVar2 = (code *)*param_3;
          plVar7 = (longlong *)param_3[2];
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            plVar7 = param_3 + 4;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(uVar6,lVar8 + (longlong)iVar5 * 0xc0 + 0x10);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar6 = local_78;
        } while (local_90 != plVar9 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar4));
      }
    }
  }
  local_78 = uVar6;
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14884293e FUN_14884293e body=821 status=ok
// SIG undefined FUN_14884293e(void)

void FUN_14884293e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar4 = FUN_14884a950((longlong *)(param_1 + 0x10),uVar3,param_2);
  lVar1 = local_78;
  if (iVar4 != -1) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    if ((lVar9 + (longlong)iVar4 * 0x120 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar9 = lVar9 + (longlong)iVar4 * 0x120;
      local_d0 = (longlong *)(lVar9 + 0x60);
      local_c0 = lVar9 + 0x70;
      local_b8 = (longlong *)&DAT_100000000;
      local_a8 = 0xffffffff;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      uStack_b0 = local_c0;
      if (*(int *)(lVar9 + 0x88) == 0) {
        iVar4 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar4 = *(int *)(lVar9 + 0x88);
      }
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
      uStack_70 = uStack_a0;
      local_78 = local_a8;
      lVar1 = local_78;
      local_90 = local_d0;
      local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      if ((local_78._4_4_ != iVar4) || (uStack_b0 != local_c0)) {
        iVar5 = local_78._4_4_;
        local_c4 = iVar4;
        local_78 = lVar1;
        do {
          lVar9 = *local_90;
          lVar1 = lVar9 + (longlong)iVar5 * 0x80;
          lVar10 = lVar1 + 0x20;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar10;
          if (*(int *)(lVar1 + 0x38) != 0) {
            FUN_1449c0562(&local_68);
          }
          lVar9 = (longlong)iVar5 * 0x80 + lVar9;
          plVar11 = (longlong *)(lVar9 + 0x10);
          uStack_a0 = local_58;
          local_98 = local_50;
          local_94 = local_4c;
          uStack_b0 = local_68;
          local_a8 = local_60;
          uVar8 = *(uint *)(lVar9 + 0x38);
          local_68 = CONCAT44(1 << ((byte)uVar8 & 0x1f),(int)uVar8 >> 5);
          local_58 = CONCAT44(uVar8,-1 << ((byte)uVar8 & 0x1f));
          local_50 = uVar8 & 0xffffffe0;
          local_b8 = plVar11;
          local_60 = lVar10;
          if (*(uint *)(lVar9 + 0x38) != uVar8) {
            FUN_1449c0562(&local_68);
            uVar8 = local_58._4_4_;
          }
          lVar1 = local_60;
          while (((uStack_a0._4_4_ != uVar8 || (local_a8 != lVar1)) || (local_b8 != plVar11))) {
            lVar9 = *local_b8;
            lVar10 = (longlong)(int)uStack_a0._4_4_;
            pcVar2 = (code *)*param_3;
            plVar7 = (longlong *)param_3[2];
            if ((longlong *)param_3[2] == (longlong *)0x0) {
              plVar7 = param_3 + 4;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar2)(uVar6,lVar9 + lVar10 * 0xc0 + 0x10);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          lVar1 = local_78;
        } while (local_90 != local_d0 ||
                 (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != local_c4));
      }
    }
  }
  local_78 = lVar1;
  if (*param_3 != 0) {
    plVar11 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148842c74 FUN_148842c74 body=827 status=ok
// SIG undefined FUN_148842c74(void)

void FUN_148842c74(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar4 = FUN_14884a950((longlong *)(param_1 + 0x10),uVar3,param_2);
  lVar1 = local_78;
  if (iVar4 != -1) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    if ((lVar9 + (longlong)iVar4 * 0x120 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar9 = lVar9 + (longlong)iVar4 * 0x120;
      local_d0 = (longlong *)(lVar9 + 0xb0);
      local_c0 = lVar9 + 0xc0;
      local_b8 = (longlong *)&DAT_100000000;
      local_a8 = 0xffffffff;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      uStack_b0 = local_c0;
      if (*(int *)(lVar9 + 0xd8) == 0) {
        iVar4 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar4 = *(int *)(lVar9 + 0xd8);
      }
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
      uStack_70 = uStack_a0;
      local_78 = local_a8;
      lVar1 = local_78;
      local_90 = local_d0;
      local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      if ((local_78._4_4_ != iVar4) || (uStack_b0 != local_c0)) {
        iVar5 = local_78._4_4_;
        local_c4 = iVar4;
        local_78 = lVar1;
        do {
          lVar9 = *local_90;
          lVar1 = lVar9 + (longlong)iVar5 * 0x80;
          lVar10 = lVar1 + 0x20;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar10;
          if (*(int *)(lVar1 + 0x38) != 0) {
            FUN_1449c0562(&local_68);
          }
          lVar9 = (longlong)iVar5 * 0x80 + lVar9;
          plVar11 = (longlong *)(lVar9 + 0x10);
          uStack_a0 = local_58;
          local_98 = local_50;
          local_94 = local_4c;
          uStack_b0 = local_68;
          local_a8 = local_60;
          uVar8 = *(uint *)(lVar9 + 0x38);
          local_68 = CONCAT44(1 << ((byte)uVar8 & 0x1f),(int)uVar8 >> 5);
          local_58 = CONCAT44(uVar8,-1 << ((byte)uVar8 & 0x1f));
          local_50 = uVar8 & 0xffffffe0;
          local_b8 = plVar11;
          local_60 = lVar10;
          if (*(uint *)(lVar9 + 0x38) != uVar8) {
            FUN_1449c0562(&local_68);
            uVar8 = local_58._4_4_;
          }
          lVar1 = local_60;
          while (((uStack_a0._4_4_ != uVar8 || (local_a8 != lVar1)) || (local_b8 != plVar11))) {
            lVar9 = *local_b8;
            lVar10 = (longlong)(int)uStack_a0._4_4_;
            pcVar2 = (code *)*param_3;
            plVar7 = (longlong *)param_3[2];
            if ((longlong *)param_3[2] == (longlong *)0x0) {
              plVar7 = param_3 + 4;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar2)(uVar6,lVar9 + lVar10 * 0xc0 + 0x10);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          lVar1 = local_78;
        } while (local_90 != local_d0 ||
                 (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != local_c4));
      }
    }
  }
  local_78 = lVar1;
  if (*param_3 != 0) {
    plVar11 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148842fb0 FUN_148842fb0 body=77 status=ok
// SIG undefined FUN_148842fb0(void)

void FUN_148842fb0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 2;
  local_14 = 0;
  local_c = param_2;
  FUN_148842ffe(*(undefined8 *)(param_1 + 8),local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148842ffe FUN_148842ffe body=190 status=ok
// SIG undefined FUN_148842ffe(void)

void FUN_148842ffe(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) == '\x03') {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 != 0) goto LAB_148843029;
  cVar4 = *param_2;
  if (cVar4 == '\x03') {
    bVar7 = *(longlong *)(param_2 + 4) == 0;
LAB_14884306f:
    uVar5 = (uint)!bVar7;
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 != '\x01') {
        return;
      }
      bVar7 = *(int *)(param_2 + 0xc) == 0;
      goto LAB_14884306f;
    }
    uVar5 = *(uint *)(param_2 + 0xc);
  }
  if (uVar5 == 0) {
    return;
  }
  lVar6 = FUN_1403a1b12(*(longlong *)(param_1 + 8),param_1,&DAT_14cb889c8,0,0);
  *(longlong *)(param_1 + 0x58) = lVar6;
  if (lVar6 == 0) {
    return;
  }
LAB_148843029:
  cVar4 = FUN_1403218c0((undefined4 *)(lVar6 + 0x38),param_2);
  if (cVar4 != '\0') {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(lVar6 + 0x3c) = uVar1;
  *(undefined4 *)(lVar6 + 0x40) = uVar2;
  *(undefined4 *)(lVar6 + 0x44) = uVar3;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  FUN_140bde2c8(*(undefined8 *)(lVar6 + 0x30),lVar6,0);
  return;
}



// FUNCTION 1488430bc FUN_1488430bc body=10 status=ok
// SIG undefined FUN_1488430bc(void)

longlong FUN_1488430bc(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x188;
}



// FUNCTION 1488430c6 FUN_1488430c6 body=10 status=ok
// SIG undefined FUN_1488430c6(void)

longlong FUN_1488430c6(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x198;
}



// FUNCTION 1488430d0 FUN_1488430d0 body=10 status=ok
// SIG undefined FUN_1488430d0(void)

longlong FUN_1488430d0(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x1a8;
}



// FUNCTION 1488430da FUN_1488430da body=111 status=ok
// SIG undefined FUN_1488430da(void)

undefined8 FUN_1488430da(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_1 + 0x10);
  local_48 = *(undefined4 *)(param_1 + 0x18);
  FUN_1448075d0(local_40);
  uVar1 = FUN_14060eaf6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14884314a FUN_14884314a body=20 status=ok
// SIG undefined FUN_14884314a(void)

void FUN_14884314a(longlong param_1,undefined8 param_2)

{
  FUN_1405b70a4(param_2,*(longlong *)(param_1 + 8) + 0x128);
  return;
}



// FUNCTION 14884315e FUN_14884315e body=77 status=ok
// SIG undefined FUN_14884315e(void)

void FUN_14884315e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 2;
  local_14 = 0;
  local_c = param_2;
  FUN_1488431ac(*(undefined8 *)(param_1 + 8),local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488431ac FUN_1488431ac body=190 status=ok
// SIG undefined FUN_1488431ac(void)

void FUN_1488431ac(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) == '\x03') {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x60);
  if (lVar6 != 0) goto LAB_1488431d7;
  cVar4 = *param_2;
  if (cVar4 == '\x03') {
    bVar7 = *(longlong *)(param_2 + 4) == 0;
LAB_14884321d:
    uVar5 = (uint)!bVar7;
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 != '\x01') {
        return;
      }
      bVar7 = *(int *)(param_2 + 0xc) == 0;
      goto LAB_14884321d;
    }
    uVar5 = *(uint *)(param_2 + 0xc);
  }
  if (uVar5 == 0) {
    return;
  }
  lVar6 = FUN_1403a1b12(*(longlong *)(param_1 + 8),param_1,&DAT_14cb889c8,0,0);
  *(longlong *)(param_1 + 0x60) = lVar6;
  if (lVar6 == 0) {
    return;
  }
LAB_1488431d7:
  cVar4 = FUN_1403218c0((undefined4 *)(lVar6 + 0x38),param_2);
  if (cVar4 != '\0') {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(lVar6 + 0x3c) = uVar1;
  *(undefined4 *)(lVar6 + 0x40) = uVar2;
  *(undefined4 *)(lVar6 + 0x44) = uVar3;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  FUN_140bde2c8(*(undefined8 *)(lVar6 + 0x30),lVar6,0);
  return;
}



// FUNCTION 14884326a FUN_14884326a body=57 status=ok
// SIG undefined FUN_14884326a(void)

uint FUN_14884326a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x38);
    if (cVar1 == '\x03') {
      bVar4 = *(longlong *)(lVar2 + 0x3c) == 0;
LAB_148843289:
      return (uint)!bVar4;
    }
    if (cVar1 == '\x02') {
      uVar3 = *(uint *)(lVar2 + 0x44);
    }
    else if (cVar1 == '\x01') {
      bVar4 = *(int *)(lVar2 + 0x44) == 0;
      goto LAB_148843289;
    }
  }
  return uVar3;
}



// FUNCTION 1488432a4 FUN_1488432a4 body=77 status=ok
// SIG undefined FUN_1488432a4(void)

void FUN_1488432a4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 2;
  local_14 = 0;
  local_c = param_2;
  FUN_1488432f2(*(undefined8 *)(param_1 + 8),local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488432f2 FUN_1488432f2 body=212 status=ok
// SIG undefined FUN_1488432f2(void)

void FUN_1488432f2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) == '\x03') goto LAB_148843315;
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (lVar5 == 0) {
    FUN_1403a0728(param_2,&local_28);
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (local_28 != 0) {
      if (lVar5 != 0) goto LAB_14884333d;
      local_38 = 0;
      lVar5 = FUN_1403a1b12(*(undefined8 *)(param_1 + 8),param_1,&DAT_14cb889b0,0);
      *(longlong *)(param_1 + 0x70) = lVar5;
    }
    if (lVar5 == 0) goto LAB_148843315;
  }
LAB_14884333d:
  cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_2);
  if (cVar4 == '\0') {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(lVar5 + 0x38) = *param_2;
    *(undefined4 *)(lVar5 + 0x3c) = uVar1;
    *(undefined4 *)(lVar5 + 0x40) = uVar2;
    *(undefined4 *)(lVar5 + 0x44) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,0);
  }
LAB_148843315:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488433c8 FUN_1488433c8 body=9 status=ok
// SIG undefined FUN_1488433c8(void)

void FUN_1488433c8(longlong param_1)

{
  FUN_14049f098(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1488433d2 FUN_1488433d2 body=77 status=ok
// SIG undefined FUN_1488433d2(void)

void FUN_1488433d2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 2;
  local_14 = 0;
  local_c = param_2;
  FUN_148843420(*(undefined8 *)(param_1 + 8),local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148843420 FUN_148843420 body=138 status=ok
// SIG undefined FUN_148843420(void)

void FUN_148843420(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) != '\x03') {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 == 0) {
      lVar5 = FUN_1403a1b12(*(longlong *)(param_1 + 8),param_1,&DAT_14cb889e0,0,0);
      *(longlong *)(param_1 + 0x60) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_2);
    if (cVar4 == '\0') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(lVar5 + 0x38) = *param_2;
      *(undefined4 *)(lVar5 + 0x3c) = uVar1;
      *(undefined4 *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x44) = uVar3;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,0);
      return;
    }
  }
  return;
}



// FUNCTION 1488434aa FUN_1488434aa body=77 status=ok
// SIG undefined FUN_1488434aa(void)

void FUN_1488434aa(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 2;
  local_14 = 0;
  local_c = param_2;
  FUN_1488434f8(*(undefined8 *)(param_1 + 8),local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488434f8 FUN_1488434f8 body=138 status=ok
// SIG undefined FUN_1488434f8(void)

void FUN_1488434f8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) != '\x03') {
    lVar5 = *(longlong *)(param_1 + 0x68);
    if (lVar5 == 0) {
      lVar5 = FUN_1403a1b12(*(longlong *)(param_1 + 8),param_1,&DAT_14cb889f8,0,0);
      *(longlong *)(param_1 + 0x68) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_2);
    if (cVar4 == '\0') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(lVar5 + 0x38) = *param_2;
      *(undefined4 *)(lVar5 + 0x3c) = uVar1;
      *(undefined4 *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x44) = uVar3;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,0);
      return;
    }
  }
  return;
}



// FUNCTION 148843582 FUN_148843582 body=11 status=ok
// SIG undefined FUN_148843582(void)

void FUN_148843582(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148843589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  return;
}



// FUNCTION 14884358e FUN_14884358e body=9 status=ok
// SIG undefined FUN_14884358e(void)

void FUN_14884358e(longlong param_1)

{
  FUN_143d35c90(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 148843598 FUN_148843598 body=34 status=ok
// SIG undefined FUN_148843598(void)

void FUN_148843598(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = (**(code **)(*(longlong *)*param_2 + 8))();
  FUN_148843702(uVar1,uVar2);
  return;
}



// FUNCTION 1488435ba FUN_1488435ba body=57 status=ok
// SIG undefined FUN_1488435ba(void)

uint FUN_1488435ba(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x38);
    if (cVar1 == '\x03') {
      bVar4 = *(longlong *)(lVar2 + 0x3c) == 0;
LAB_1488435d9:
      return (uint)!bVar4;
    }
    if (cVar1 == '\x02') {
      uVar3 = *(uint *)(lVar2 + 0x44);
    }
    else if (cVar1 == '\x01') {
      bVar4 = *(int *)(lVar2 + 0x44) == 0;
      goto LAB_1488435d9;
    }
  }
  return uVar3;
}



// FUNCTION 1488435f4 FUN_1488435f4 body=77 status=ok
// SIG undefined FUN_1488435f4(void)

void FUN_1488435f4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 2;
  local_14 = 0;
  local_c = param_2;
  FUN_148843642(*(undefined8 *)(param_1 + 8),local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148843642 FUN_148843642 body=138 status=ok
// SIG undefined FUN_148843642(void)

void FUN_148843642(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) != '\x03') {
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (lVar5 == 0) {
      lVar5 = FUN_1403a1b12(*(longlong *)(param_1 + 8),param_1,&DAT_14cb889b0,0,0);
      *(longlong *)(param_1 + 0x70) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_2);
    if (cVar4 == '\0') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(lVar5 + 0x38) = *param_2;
      *(undefined4 *)(lVar5 + 0x3c) = uVar1;
      *(undefined4 *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x44) = uVar3;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,0);
      return;
    }
  }
  return;
}



// FUNCTION 1488436cc FUN_1488436cc body=54 status=ok
// SIG undefined FUN_1488436cc(void)

void FUN_1488436cc(longlong param_1)

{
  FUN_1461b4a86();
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1461b4b22();
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  FUN_1461b4b22();
  return;
}



// FUNCTION 148843702 FUN_148843702 body=301 status=ok
// SIG undefined FUN_148843702(void)

void FUN_148843702(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x88);
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(lVar5 + lVar3) + 8))();
      if (lVar2 == param_2) {
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x90))) {
          lVar5 = (ulonglong)(uVar4 & 0x7fffffff) * 0x10;
          FUN_143d3fdb0(*(longlong *)(param_1 + 8) + 0x408,
                        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + lVar5) + 0x38)
                       );
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + lVar5) + 0x18))();
          FUN_14884c3ac(param_1 + 0x88,uVar4);
          FUN_14884c422(param_1 + 0x88);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  local_48 = param_1;
  FUN_14884c95e(*(longlong *)(param_1 + 8) + 0x2a0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 148843850 FUN_148843850 body=77 status=ok
// SIG undefined FUN_148843850(void)

undefined8 * FUN_148843850(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_141000116(param_1,iVar1,0);
    FUN_140ffff67(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14884389e FUN_14884389e body=150 status=ok
// SIG undefined FUN_14884389e(void)

undefined8 FUN_14884389e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    FUN_1404a8902(*(longlong *)(lVar2 + 0x18) + (longlong)local_24 * 0x40 + 0x28,*param_3);
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148843936 FUN_148843936 body=200 status=ok
// SIG undefined FUN_148843936(void)

void FUN_148843936(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
    plVar3 = *(longlong **)(pbVar2 + 8);
    iVar1 = (int)plVar3[2];
    *(uint *)(plVar3 + 2) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0x14) < iVar1 + 1U) {
      FUN_14000961e(plVar3,iVar1);
    }
    lVar4 = *plVar3;
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar4 + lVar5) = 0;
    ((undefined8 *)(lVar4 + lVar5))[1] = 0;
    FUN_14009b010(lVar4 + lVar5,1,0);
    local_58 = *param_2;
    local_50 = *(undefined4 *)(param_2 + 1);
    FUN_1448075d0(local_48);
    if (*(longlong *)(lVar4 + lVar5) != 0) {
      FUN_1402afb64(*(longlong *)(lVar4 + lVar5),local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148843a00 FUN_148843a00 body=1030 status=ok
// SIG undefined FUN_148843a00(void)

void FUN_148843a00(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [24];
  longlong local_88;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = (longlong *)(param_1 + 0x188);
  FUN_140d5a359(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400));
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_14884c4be(local_128,0);
  }
  lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 8) + 0x140);
  if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) &&
      (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360), lVar5 != 0)) &&
     (*(longlong *)(lVar5 + 0x178) != 0)) {
    lVar6 = FUN_14041aabe();
    lVar5 = *(longlong *)(lVar5 + 0x178);
    if (((((lVar5 != 0) && (lVar6 != 0)) &&
         ((lVar13 = *(longlong *)(lVar5 + 0x10), lVar13 != 0 &&
          ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar13 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)))))) && (*(longlong *)(lVar5 + 0x488) != 0)) &&
       (lVar5 = FUN_1418a625b(), lVar5 != 0)) {
      local_100 = *(undefined8 *)(param_1 + 0x10);
      local_f8 = *(undefined4 *)(param_1 + 0x18);
      FUN_1448075d0(local_a0);
      lVar6 = FUN_14060eaf6(local_a0);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x78) != 0)) {
        lVar13 = param_1 + 0x10;
        puVar14 = *(undefined8 **)(lVar6 + 0x70);
        local_120 = puVar14 + (longlong)*(int *)(lVar6 + 0x78) * 0xc;
        local_118 = lVar13;
        local_110 = param_1;
        do {
          if (0 < *(int *)(puVar14 + 0xb)) {
            lVar6 = 0;
            local_108 = puVar14;
            do {
              lVar2 = puVar14[10];
              uVar7 = FUN_14479d2ce(*(longlong *)(param_1 + 8) + 0x148);
              FUN_140c5218a(lVar6 * 0x58 + lVar2,local_a0,uVar7,lVar13);
              plVar8 = (longlong *)FUN_140c520a2(local_a0);
              if (plVar8 != (longlong *)0x0) {
                local_b8 = 0;
                uStack_b0 = 0;
                lVar2 = plVar8[1];
                if ((longlong)(int)lVar2 == 0) {
                  uVar10 = 0;
                }
                else {
                  lVar3 = *plVar8;
                  lVar11 = 0;
                  iVar12 = 0;
                  do {
                    if (*(longlong *)(lVar3 + lVar11) != 0) {
                      local_c8 = 0;
                      uStack_c0 = 0;
                      plVar8 = *(longlong **)(lVar3 + lVar11);
                      FUN_14105c148(&local_100,lVar5);
                      (**(code **)(*plVar8 + 0x48))(plVar8,&local_100,&local_c8);
                      FUN_140de863f(local_d8,local_d0);
                      if (local_d8 != 0) {
                        FUN_1400020a8();
                      }
                      uVar10 = uStack_b0;
                      uVar9 = 0;
                      if ((int)uStack_c0 != 0) {
                        lVar13 = (longlong)(int)uStack_b0;
                        uVar4 = (int)uStack_b0 + 1;
                        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
                        if (uStack_b0._4_4_ < uVar4) {
                          FUN_145c70f7e(&local_b8,uVar10 & 0xffffffff);
                        }
                        FUN_145c70f24(lVar13 * 0x18 + local_b8,iVar12,&local_c8);
                        uVar9 = uStack_c0 & 0xffffffff;
                      }
                      FUN_1447a1747(local_c8,uVar9);
                      if (local_c8 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    puVar14 = local_108;
                    param_1 = local_110;
                    lVar13 = local_118;
                    iVar12 = iVar12 + 1;
                    lVar11 = lVar11 + 0x18;
                  } while ((longlong)(int)lVar2 * 0x18 != lVar11);
                  uVar10 = uStack_b0 & 0xffffffff;
                  if (0 < (int)uStack_b0) {
                    iVar12 = *(int *)(local_110 + 400);
                    *(uint *)(local_110 + 400) = iVar12 + 1U;
                    if (*(uint *)(local_110 + 0x194) < iVar12 + 1U) {
                      FUN_14884c51e(local_128,iVar12);
                    }
                    puVar1 = (undefined8 *)(*local_128 + (longlong)iVar12 * 0x20);
                    puVar1[2] = 0;
                    puVar1[3] = 0;
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *puVar1 = *puVar14;
                    *(int *)(puVar1 + 1) = (int)lVar6;
                    FUN_1459ff440(puVar1 + 2,&local_b8);
                    uVar10 = uStack_b0 & 0xffffffff;
                  }
                }
                FUN_140de863f(local_b8,uVar10);
                if (local_b8 != 0) {
                  FUN_1400020a8();
                }
              }
              (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_68])(local_a0);
              lVar6 = lVar6 + 1;
            } while (lVar6 < *(int *)(puVar14 + 0xb));
          }
          puVar14 = puVar14 + 0xc;
        } while (puVar14 != local_120);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148843e08 FUN_148843e08 body=12 status=ok
// SIG undefined FUN_148843e08(void)

void FUN_148843e08(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x148);
  return;
}



// FUNCTION 148843e14 FUN_148843e14 body=77 status=ok
// SIG undefined FUN_148843e14(void)

void FUN_148843e14(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1461b4a86();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1461b4b22();
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 8))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 148843e62 FUN_148843e62 body=438 status=ok
// SIG undefined FUN_148843e62(void)

void FUN_148843e62(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x151) != '\x01') || (cVar4 = FUN_140bde87c(), cVar4 == '\0'))
  goto LAB_148843e9a;
  FUN_148844250(&local_40);
  if (local_40 != 0) {
    *(undefined4 *)(local_40 + 0x18) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(local_40 + 0x10) = *param_2;
    *(undefined4 *)(local_40 + 0x24) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(local_40 + 0x1c) = *param_3;
    uVar6 = *param_4;
    plVar3 = (longlong *)param_4[1];
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(local_40 + 0x28) = uVar6;
      plVar7 = *(longlong **)(local_40 + 0x30);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(local_40 + 0x30) = 0;
LAB_148843f33:
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000148843f5e:
          if (iVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(undefined8 *)(local_40 + 0x28) = uVar6;
      plVar7 = *(longlong **)(local_40 + 0x30);
      if (plVar3 == plVar7) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar7 = plVar3;
          goto joined_r0x000148843f5e;
        }
      }
      else {
        *(longlong **)(local_40 + 0x30) = plVar3;
        if (plVar7 != (longlong *)0x0) goto LAB_148843f33;
      }
    }
    local_50 = local_40;
    local_48 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_14479d2ce(param_1 + 0x140);
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x360);
    }
    FUN_141000642(uVar6,&local_50);
    plVar3 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_48)(local_48);
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_148843e9a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148844162 FUN_148844162 body=96 status=ok
// SIG undefined FUN_148844162(void)

void FUN_148844162(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  if (param_2 != 0 && param_1 != 0) {
    cVar4 = FUN_1403218c0((undefined4 *)(param_1 + 0x38),(undefined4 *)(param_2 + 0x38));
    if (cVar4 == '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
      uVar2 = *(undefined4 *)(param_2 + 0x40);
      uVar3 = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(param_1 + 0x30),param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1488441c6 FUN_1488441c6 body=138 status=ok
// SIG undefined FUN_1488441c6(void)

void FUN_1488441c6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + 0x150) == '\x04') && ((longlong)(int)param_2[1] != 0)) {
    lVar5 = *param_2;
    lVar1 = lVar5 + (longlong)(int)param_2[1] * 0xc;
    do {
      plVar4 = (longlong *)FUN_140bc5192(param_1,lVar5);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        lVar3 = plVar4[0x10];
        if ((longlong)(int)lVar3 != 0) {
          lVar2 = plVar4[0xf];
          lVar6 = 0;
          do {
            (**(code **)(**(longlong **)(lVar2 + lVar6) + 8))();
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar6);
        }
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != lVar1);
  }
  return;
}



// FUNCTION 148844250 FUN_148844250 body=159 status=ok
// SIG undefined FUN_148844250(void)

undefined8 * FUN_148844250(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1459aa1e6();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488442f2 FUN_1488442f2 body=106 status=ok
// SIG undefined FUN_1488442f2(void)

void FUN_1488442f2(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140bc5192();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x80) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + lVar3);
      if ((*(int *)(lVar1 + 0x10) == *param_3) && (*(int *)(lVar1 + 0x18) == param_3[2])) {
        if (lVar1 == 0) {
          return;
        }
        FUN_143d35c90(lVar1,param_4);
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x80) * 8 != lVar3);
  }
  return;
}



// FUNCTION 14884435c FUN_14884435c body=105 status=ok
// SIG undefined FUN_14884435c(void)

void FUN_14884435c(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140bc5192();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x80) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + lVar3);
      if ((*(int *)(lVar1 + 0x10) == *param_3) && (*(int *)(lVar1 + 0x18) == param_3[2])) {
        if (lVar1 == 0) {
          return;
        }
        FUN_148843702(lVar1,param_4);
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x80) * 8 != lVar3);
  }
  return;
}



// FUNCTION 1488443c6 FUN_1488443c6 body=159 status=ok
// SIG undefined FUN_1488443c6(void)

undefined8 * FUN_1488443c6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1459aa21e();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148844468 FUN_148844468 body=89 status=ok
// SIG undefined FUN_148844468(void)

void FUN_148844468(longlong param_1)

{
  FUN_140d5a359(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488444c2 FUN_1488444c2 body=483 status=ok
// SIG undefined FUN_1488444c2(void)

int * FUN_1488444c2(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = (longlong *)FUN_140bc5192(param_1,param_3);
  if ((plVar2 != (longlong *)0x0) && (0 < (int)plVar2[3])) {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      local_64 = 1;
      local_60 = 0;
      uStack_58 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (longlong *)0x0;
      local_b8 = *param_3;
      local_b0 = *(undefined4 *)(param_3 + 1);
      uVar1 = FUN_141295fa2(param_1);
      if ((int)local_b8 != 0) {
        local_b0 = uVar1;
      }
      local_a4 = *(undefined4 *)(lVar3 + 0x18);
      local_ac = *(undefined8 *)(lVar3 + 0x10);
      local_78 = *param_3;
      local_70 = *(undefined4 *)(param_3 + 1);
      local_6c = *(undefined8 *)param_4;
      FUN_140ffff0a(&local_a0,plVar2 + 0x23);
      FUN_1410000be(&local_90,plVar2 + 0x33);
      local_80 = plVar2 + 0x35;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_140ffe232(param_1,param_2,&local_b8);
      if ((*param_2 != 0) && (*param_4 != '\0')) {
        FUN_148911bf6(param_4,&local_d0);
        local_e0 = 0;
        local_f0 = 0;
        local_f8 = local_d0;
        local_108 = &DAT_14cb88828;
        local_e8 = 0;
        local_100 = 1;
        (**(code **)(*param_1 + 0x50))(param_1,&local_ac,param_2,&DAT_14c948618);
      }
      FUN_148844468(&local_b8);
      goto LAB_148844670;
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_148844670:
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488446a6 FUN_1488446a6 body=193 status=ok
// SIG undefined FUN_1488446a6(void)

void FUN_1488446a6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x1c8);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1c0);
    lVar9 = 0;
    do {
      plVar8 = (longlong *)FUN_14112f3a2(*(undefined8 *)(lVar5 + lVar9));
      lVar6 = *plVar8;
      plVar8 = (longlong *)plVar8[1];
      if (plVar8 == (longlong *)0x0) {
        if (lVar6 != 0) goto LAB_1488446f4;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        if (lVar6 != 0) {
LAB_1488446f4:
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_14884cecc(param_2,iVar4);
          }
          lVar7 = *param_2;
          *(longlong *)(lVar7 + (longlong)iVar4 * 0x10) = lVar6;
          *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar8;
          if (plVar8 == (longlong *)0x0) goto LAB_148844739;
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
LAB_148844739:
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  return;
}



// FUNCTION 148844768 FUN_148844768 body=402 status=ok
// SIG undefined FUN_148844768(void)

void FUN_148844768(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)(param_1 + 0x1d0);
  lVar4 = param_1 + 0x1e0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar4;
  if (*(int *)(param_1 + 0x1f8) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x1f8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar3;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar4)) {
    do {
      plVar8 = (longlong *)
               FUN_140bc52d2(*(undefined8 *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20));
      lVar6 = *plVar8;
      plVar8 = (longlong *)plVar8[1];
      if (plVar8 == (longlong *)0x0) {
        if (lVar6 != 0) goto LAB_14884484b;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        if (lVar6 != 0) {
LAB_14884484b:
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_14884c2a0(param_2,iVar5);
          }
          lVar7 = *param_2;
          *(longlong *)(lVar7 + (longlong)iVar5 * 0x10) = lVar6;
          *(longlong **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = plVar8;
          if (plVar8 == (longlong *)0x0) goto LAB_148844891;
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
LAB_148844891:
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar3 || (CONCAT44(uStack_7c,uStack_80) != lVar4 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488448fc FUN_1488448fc body=262 status=ok
// SIG undefined FUN_1488448fc(void)

void FUN_1488448fc(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [4];
  undefined8 local_4c;
  int local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = FUN_14890bc4e(param_2);
  if (0 < iVar1) {
    local_50[0] = 2;
    local_4c = 0;
    local_44 = iVar1;
    FUN_1403a0728(local_50,&local_40);
    puVar2 = *(undefined4 **)(param_2 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_14c9485f0;
    }
    FUN_144a7660c(puVar2,local_5c,1);
    puVar2 = *(undefined4 **)(param_3 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_14c9485f0;
    }
    FUN_144a7660c(puVar2,local_68,1);
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = local_40;
    local_98 = &DAT_14cb88850;
    local_90 = 1;
    (**(code **)(*param_1 + 0x50))(param_1,local_68,local_5c,&DAT_14c947fe8);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148844a06 FUN_148844a06 body=115 status=ok
// SIG undefined FUN_148844a06(void)

void FUN_148844a06(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  (**(code **)(*param_1 + 0xa0))(0,&local_28,param_2,0);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148844a7a FUN_148844a7a body=137 status=ok
// SIG undefined FUN_148844a7a(void)

void FUN_148844a7a(undefined8 param_1,int *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  if (*param_2 != 0) {
    uStack_30 = 1;
    FUN_1446dd912(&local_38,0);
    *(int *)(local_38 + 1) = param_2[2];
    *local_38 = *(undefined8 *)param_2;
  }
  FUN_14612646c(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148844b04 FUN_148844b04 body=52 status=ok
// SIG undefined FUN_148844b04(void)

void FUN_148844b04(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (0 < *(int *)(param_1 + 0x168)) {
    puVar1 = *(undefined8 **)(param_1 + 0x160);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
    *param_2 = *puVar1;
    return;
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return;
}



// FUNCTION 148844b98 FUN_148844b98 body=351 status=ok
// SIG undefined FUN_148844b98(void)

void FUN_148844b98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) && ((*(byte *)(param_2 + 0x10) & 1) != 0)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 3;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    FUN_14009d848(param_1 + 0x40,param_2 + 0x40);
    FUN_1400fce78(param_1 + 0x30,param_2 + 0x30);
    lVar1 = param_1 + 0x50;
    FUN_148844cf8(lVar1,*(undefined4 *)(param_2 + 0x1d8));
    lVar6 = param_2 + 0x50;
    if (*(longlong *)(param_2 + 0x1d0) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x1d0);
    }
    if ((longlong)*(int *)(param_2 + 0x1d8) != 0) {
      lVar6 = lVar6 + 0x20;
      lVar7 = (longlong)*(int *)(param_2 + 0x1d8) * 0x60;
      do {
        iVar3 = *(int *)(param_1 + 0x1d8);
        *(uint *)(param_1 + 0x1d8) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x1dc) < iVar3 + 1U) {
          FUN_140d84fdc(lVar1,iVar3);
        }
        lVar5 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar5 = lVar1;
        }
        uVar4 = *(undefined4 *)(lVar6 + -0x18);
        plVar2 = (longlong *)(lVar5 + (longlong)iVar3 * 0x60);
        *plVar2 = param_1;
        *(undefined4 *)(plVar2 + 1) = uVar4;
        *(undefined2 *)(plVar2 + 2) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x14) = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
        *(undefined4 *)(plVar2 + 6) = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        plVar2[2] = *(longlong *)(lVar6 + -0x10);
        *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(lVar6 + -8);
        FUN_1447715ec(plVar2 + 4,lVar6);
        *(undefined1 *)(plVar2 + 9) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x4c) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x54) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x5c) = 0;
        lVar6 = lVar6 + 0x60;
        lVar7 = lVar7 + -0x60;
      } while (lVar7 != 0);
    }
    FUN_140983092(param_1);
    return;
  }
  return;
}



// FUNCTION 148844cf8 FUN_148844cf8 body=81 status=ok
// SIG undefined FUN_148844cf8(void)

void FUN_148844cf8(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x18c) < param_2) {
    FUN_140825930(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar1 = param_1;
  }
  FUN_1408258ff(lVar1,*(undefined4 *)(param_1 + 0x188));
  *(undefined4 *)(param_1 + 0x188) = 0;
  return;
}



// FUNCTION 148844d4a FUN_148844d4a body=11 status=ok
// SIG undefined FUN_148844d4a(void)

void FUN_148844d4a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1459855b4();
  return;
}



// FUNCTION 148844d56 FUN_148844d56 body=125 status=ok
// SIG undefined FUN_148844d56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148844d56(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7cac0) {
    FUN_144b3d300(&DAT_14cb7cac0);
    if (DAT_14cb7cac0 == -1) {
      DAT_14cb7cab0 = 0;
      _DAT_14cb7cab8 = 0;
      atexit(FUN_143d3799e);
      _Init_thread_footer(&DAT_14cb7cac0);
    }
  }
  puVar1 = &DAT_14cb7cab0;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x30);
  }
  return puVar1;
}



// FUNCTION 148844dd4 FUN_148844dd4 body=50 status=ok
// SIG undefined FUN_148844dd4(void)

undefined8 FUN_148844dd4(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x58);
  plVar2 = (longlong *)FUN_14007a5e6(uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148844df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x110))(plVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148844e06 FUN_148844e06 body=4 status=ok
// SIG undefined FUN_148844e06(void)

undefined1 FUN_148844e06(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// FUNCTION 148844e0a FUN_148844e0a body=185 status=ok
// SIG undefined FUN_148844e0a(void)

void FUN_148844e0a(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x18) != param_2) {
    *(char *)(param_1 + 0x18) = param_2;
    uVar2 = FUN_14479d2ce(param_1 + 0x58);
    plVar3 = (longlong *)FUN_14007a5e6(uVar2);
    if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x110))(plVar3), lVar4 != 0))
    {
      FUN_1461dc0e0(param_1,&local_38);
      lVar1 = local_38;
      if ((longlong)local_30 != 0) {
        lVar5 = 0;
        do {
          FUN_1410b5f9c(lVar4,*(undefined4 *)(lVar1 + lVar5));
          lVar5 = lVar5 + 4;
        } while ((longlong)local_30 * 4 != lVar5);
      }
      if (local_38 != 0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148844ec4 FUN_148844ec4 body=300 status=ok
// SIG undefined FUN_148844ec4(void)

undefined8 FUN_148844ec4(undefined8 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = *(undefined4 *)(param_1 + 4);
  local_50 = param_1[3];
  FUN_1408226d0(&local_50,&local_40,1);
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  local_68 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_70 = *(undefined8 *)((longlong)param_1 + 0xc);
  FUN_1408226d0(&local_70,&local_60,1);
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  local_88 = *(undefined4 *)(param_1 + 1);
  local_90 = *param_1;
  FUN_1408226d0(&local_90,&local_80,1);
  puVar1 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar1 = local_80;
  }
  local_98 = puVar3;
  FUN_140002266(param_2,L"%s.%s.%s",puVar1,puVar2);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148844ff2 FUN_148844ff2 body=263 status=ok
// SIG undefined FUN_148844ff2(void)

undefined8 FUN_148844ff2(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b68) {
    lVar3 = FUN_140b3ae8c();
    if (lVar3 != 0) {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_2 + 8));
      cVar2 = FUN_1468ec2ac(&local_58,*(undefined8 *)(lVar3 + 0x18));
      if (cVar2 != '\0') {
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        FUN_14047320e(lVar3,param_3,&local_58);
        *param_1 = 1;
        *(undefined4 *)(param_1 + 0xc) = uStack_44;
        *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,uStack_4c);
        *(undefined8 *)(param_1 + 0x10) = uStack_40;
        *(undefined4 *)(param_1 + 0x18) = local_38;
        *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_30,uStack_34);
        *(undefined4 *)(param_1 + 0x24) = uStack_2c;
        uVar4 = CONCAT71((uint7)(uint3)((uint)uStack_2c >> 8),1);
        goto LAB_1488450d3;
      }
    }
  }
  uVar4 = 0;
LAB_1488450d3:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488450fa FUN_1488450fa body=500 status=ok
// SIG undefined FUN_1488450fa(void)

void FUN_1488450fa(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  undefined2 *puVar4;
  longlong lVar5;
  wchar_t *_Str;
  longlong lVar6;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_142;
  undefined1 local_141;
  longlong *local_140;
  undefined1 local_134 [4];
  undefined8 local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined1 local_118 [128];
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_128 = 0;
  uStack_120 = 0;
  local_142 = param_3;
  local_141 = param_4;
  local_140 = param_1;
  FUN_1403de9f2(param_2,&local_128,&DAT_149e0635c,1);
  FUN_144928b90(local_80,6);
  lVar1 = local_128;
  lVar5 = (longlong)(int)uStack_120;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar6) != 0) {
        puVar4 = *(undefined2 **)(lVar1 + lVar6);
      }
      iVar2 = FUN_144a80a00(puVar4,L"stats");
      if (iVar2 != 0) {
        if (*(int *)(lVar1 + 8 + lVar6) == 0) {
          _Str = L"";
LAB_1488451c7:
          local_98 = 0;
          sVar3 = wcslen(_Str);
          FUN_1449b853c(local_118,_Str,sVar3 & 0xffffffff,1);
        }
        else {
          _Str = *(wchar_t **)(lVar1 + lVar6);
          local_98 = 0;
          if (_Str != (wchar_t *)0x0) goto LAB_1488451c7;
          local_90 = 0;
          local_88 = 0;
        }
        local_130 = 0;
        FUN_14052b5e0(local_134,local_90,0);
        FUN_1402939f8(local_80,local_134);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar5 * 0x10 != lVar6);
  }
  local_150 = param_6;
  local_158 = param_5;
  (**(code **)(*local_140 + 0x18))(local_140,local_80,local_142,local_141);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488452f0 FUN_1488452f0 body=189 status=ok
// SIG undefined FUN_1488452f0(void)

void FUN_1488452f0(longlong param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x06') {
    cVar2 = FUN_140114204(param_2);
    if (cVar2 != '\0') {
      local_30 = 0xffffffff;
      lVar3 = FUN_1408264ac(param_2,param_1 + 0x28,&local_30,local_2a);
      uVar1 = local_30;
      if (lVar3 != 0) {
        FUN_1488453ae(param_1,lVar3,local_30,param_3);
        FUN_140b254aa(param_1,lVar3,uVar1,0);
        cVar2 = FUN_144729dda(param_1 + 8);
        if (cVar2 != '\0') {
          uVar4 = FUN_14479d2ce(param_1 + 8);
          FUN_1405f658a(uVar4);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488453ae FUN_1488453ae body=147 status=ok
// SIG undefined FUN_1488453ae(void)

void FUN_1488453ae(longlong param_1,undefined8 *param_2,undefined2 param_3,char param_4)

{
  longlong lVar1;
  short sVar2;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    local_22 = param_3;
    FUN_140b25444(param_1 + 0x60);
    if (param_4 != '\0') {
      for (sVar2 = *(short *)(param_2 + 1); sVar2 != -1;
          sVar2 = *(short *)(lVar1 + 0xc + (longlong)sVar2 * 0x30)) {
        lVar1 = *(longlong *)(param_1 + 0x28);
        FUN_1488453ae(param_1,lVar1 + (longlong)sVar2 * 0x30,(int)sVar2,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148845442 FUN_148845442 body=146 status=ok
// SIG undefined FUN_148845442(void)

void FUN_148845442(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    lVar3 = param_1 + 0x38;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    if (((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) &&
       (lVar3 = (ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 0x28), lVar3 != 0)) {
      FUN_1488453ae(param_1,lVar3,param_2,param_3);
      FUN_140b254aa(param_1,lVar3,param_2,0);
      cVar1 = FUN_144729dda(param_1 + 8);
      if (cVar1 != '\0') {
        uVar2 = FUN_14479d2ce(param_1 + 8);
        FUN_1405f658a(uVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488454d4 FUN_1488454d4 body=102 status=ok
// SIG undefined FUN_1488454d4(void)

void FUN_1488454d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(param_1 + 0x70 + lVar4) == param_2) {
        *(undefined8 *)(param_1 + 0x70 + lVar4) = 0;
        plVar3 = *(longlong **)(param_1 + 0x78 + lVar4);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        *(undefined8 *)(param_1 + 0x78 + lVar4) = 0;
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000148845536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x80);
  }
  return;
}



// FUNCTION 14884553a FUN_14884553a body=498 status=ok
// SIG undefined FUN_14884553a(void)

ulonglong FUN_14884553a(char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  int local_38 [2];
  int local_30;
  int local_2c [2];
  int local_24;
  ulonglong local_20;
  undefined7 uVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == '\r') && (*(int *)(param_1 + 0x14) == 4)) {
    param_1 = param_1 + 0x10;
    FUN_144a659ac(param_1,local_2c,1);
    if (((local_2c[0] == DAT_14cb7bbb0) && (local_24 == DAT_14cb7bbb4._4_4_)) ||
       ((local_2c[0] == (int)DAT_14cb7cff8 && (local_24 == DAT_14cb7d000)))) {
      if (local_24 != 0) goto LAB_1488456c2;
    }
    else {
      piVar2 = (int *)FUN_144a8232a(local_2c);
      piVar3 = (int *)FUN_144a8232a(&DAT_14cb7cb30);
      if (*piVar2 == *piVar3) {
        if (local_24 == 0) goto LAB_1488456c2;
      }
      else {
        piVar2 = (int *)FUN_144a8232a(local_2c);
        piVar3 = (int *)FUN_144a8232a(&DAT_14cb7cb48);
        uVar4 = 0;
        if ((*piVar2 != *piVar3) || (local_24 == 0)) goto LAB_1488456c4;
      }
    }
    FUN_144a659ac(param_1,&local_48,2);
    if (local_48 != 0) {
      FUN_144a659ac(param_1,local_38,3);
      uVar5 = (undefined7)((ulonglong)&local_48 >> 8);
      uVar4 = CONCAT71(uVar5,1);
      FUN_1408226d0(local_38,&local_48,1);
      cVar1 = FUN_144a791f8(&local_48,&DAT_149e01f60,1,1);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FUN_1400020a8();
      }
      if ((((cVar1 == '\0') || ((local_38[0] == DAT_14cb7d0f8 && (local_30 == DAT_14cb7d100)))) ||
          ((local_38[0] == DAT_14cb7d0e0 && (local_30 == DAT_14cb7d0e8)))) ||
         ((local_38[0] == DAT_14cb7d0b0 && (local_30 == DAT_14cb7d0b8)))) goto LAB_1488456c4;
      if (local_38[0] == DAT_14cb7d0c8) {
        uVar4 = CONCAT71(uVar5,local_30 == DAT_14cb7d0d0);
        goto LAB_1488456c4;
      }
    }
  }
LAB_1488456c2:
  uVar4 = 0;
LAB_1488456c4:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14884572d FUN_14884572d body=243 status=ok
// SIG undefined FUN_14884572d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
FUN_14884572d(undefined2 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [48];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = &local_90;
  local_88 = DAT_14cb7be18;
  local_90 = _DAT_14cb7be10;
  local_7c = *(undefined4 *)(param_2 + 1);
  local_84 = *param_2;
  local_70 = *(undefined4 *)(param_3 + 1);
  local_78 = *param_3;
  local_64 = *(undefined4 *)(param_4 + 1);
  local_6c = *param_4;
  local_c0 = local_60;
  FUN_148845822(local_60);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_14686d0d2(local_b8,local_60);
  FUN_14071d490(local_b8,param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148845822 FUN_148845822 body=116 status=ok
// SIG undefined FUN_148845822(void)

void * FUN_148845822(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 2) * -0x5555555555555555;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
  }
  else {
    FUN_14687429a(param_1,uVar2 & 0xffffffff,0);
    _Dst = *(void **)((longlong)param_1 + 0x30);
    if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 148845896 FUN_148845896 body=164 status=ok
// SIG undefined FUN_148845896(void)

longlong FUN_148845896(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1488459cc();
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    FUN_144a659ac(param_2 + 0x10,local_2c,3);
    if (local_24 != 0) {
      local_2c[0] = FUN_144a78877(local_2c[0],local_24);
    }
    iVar1 = FUN_14884f83e(plVar2,local_2c[0],local_2c);
    if (iVar1 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar1 * 0xc0 + *plVar2;
    }
    lVar3 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14884593c FUN_14884593c body=143 status=ok
// SIG undefined FUN_14884593c(void)

longlong FUN_14884593c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24 [2];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a659ac(param_2 + 0x10,local_24,1);
  if (local_1c != 0) {
    local_24[0] = FUN_144a78877(local_24[0],local_1c);
  }
  iVar1 = FUN_14884e606((longlong *)(param_1 + 0x10),local_24[0],local_24);
  if (iVar1 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x10);
  }
  lVar2 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488459cc FUN_1488459cc body=161 status=ok
// SIG undefined FUN_1488459cc(void)

longlong FUN_1488459cc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_14884593c();
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    FUN_144a659ac(param_2 + 0x10,local_2c,2);
    if (local_24 != 0) {
      local_2c[0] = FUN_144a78877(local_2c[0],local_24);
    }
    iVar1 = FUN_14884e666(plVar2,local_2c[0],local_2c);
    if (iVar1 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar1 * 0x80 + *plVar2;
    }
    lVar3 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 148845a6e FUN_148845a6e body=328 status=ok
// SIG undefined FUN_148845a6e(void)

undefined8 *
FUN_148845a6e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar8 = FUN_14884553a(param_3);
  if (cVar8 == '\0') {
    *(undefined4 *)((longlong)param_4 + 0x94) = 4;
  }
  else {
    local_39 = '\0';
    FUN_148845bb8(param_1,local_58,param_3,&local_39);
    if (local_39 == '\x01') {
      uVar7 = param_4[1];
      *(undefined8 *)(local_48 + 0x38) = *param_4;
      *(undefined8 *)(local_48 + 0x40) = uVar7;
    }
    uVar4 = *(undefined4 *)(local_48 + 0x3c);
    uVar5 = *(undefined4 *)(local_48 + 0x40);
    uVar6 = *(undefined4 *)(local_48 + 0x44);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(local_48 + 0x38);
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar4;
    *(undefined4 *)(param_4 + 3) = uVar5;
    *(undefined4 *)((longlong)param_4 + 0x1c) = uVar6;
    if ((longlong *)param_4[4] != (longlong *)0x0 && *(int *)(param_4 + 5) != 0) {
      cVar8 = (**(code **)(*(longlong *)param_4[4] + 0x30))();
      if (cVar8 != '\0') {
        iVar1 = *(int *)(local_48 + 0x50);
        *(uint *)(local_48 + 0x50) = iVar1 + 1U;
        if (*(uint *)(local_48 + 0x54) < iVar1 + 1U) {
          FUN_14884a3f6((longlong *)(local_48 + 0x48),iVar1);
        }
        lVar2 = *(longlong *)(local_48 + 0x48);
        lVar9 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar9) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
        FUN_1401aa3da(lVar2 + lVar9,param_4 + 4);
      }
    }
    *(undefined4 *)((longlong)param_4 + 0x94) = 1;
    plVar3 = (longlong *)param_4[4];
    if (plVar3 != (longlong *)0x0 && *(int *)(param_4 + 5) != 0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      goto LAB_148845ab3;
    }
  }
  *param_2 = 0;
LAB_148845ab3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148845bb8 FUN_148845bb8 body=338 status=ok
// SIG undefined FUN_148845bb8(void)

undefined8 *
FUN_148845bb8(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_4 = 0;
  puVar1 = param_3 + 2;
  FUN_144a659ac(puVar1,local_4c,1);
  uVar3 = local_4c[0];
  if (local_44 != 0) {
    uVar3 = FUN_144a78877(local_4c[0],local_44);
  }
  uVar4 = FUN_14884eaf2(param_1 + 0x10,uVar3,local_4c);
  FUN_144a659ac(puVar1,local_4c,2);
  uVar3 = local_4c[0];
  if (local_44 != 0) {
    uVar3 = FUN_144a78877(local_4c[0],local_44);
  }
  uVar5 = FUN_14884f0b0(uVar4,uVar3,local_4c);
  FUN_144a659ac(puVar1,local_4c,3);
  if (local_44 != 0) {
    local_4c[0] = FUN_144a78877(local_4c[0],local_44);
  }
  puVar6 = (undefined8 *)FUN_14884f8a4(uVar5,local_4c[0],local_4c);
  cVar2 = FUN_145c7fb8e(puVar6,param_3);
  if (cVar2 != '\0') {
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar6 = *param_3;
    FUN_1447715ec(puVar6 + 2,puVar1);
    *param_4 = 1;
  }
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = puVar6;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148845d0c FUN_148845d0c body=430 status=ok
// SIG undefined FUN_148845d0c(void)

bool FUN_148845d0c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_a8 [46];
  byte local_7a;
  byte local_79;
  longlong *local_78;
  int local_6c;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_148845896();
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x50);
    lVar11 = (longlong)iVar1;
    if (lVar11 != 0) {
      local_78 = *(longlong **)(lVar3 + 0x48);
      plVar6 = (longlong *)*local_78;
      uVar9 = 0;
      local_60 = lVar3;
      if (plVar6 == (longlong *)0x0 || (int)local_78[1] == 0) {
        lVar3 = 0;
      }
      else {
        (**(code **)(*plVar6 + 0x38))(plVar6,&local_50);
        lVar3 = local_50;
      }
      bVar12 = lVar3 == param_3;
      local_58 = local_78 + 3;
      iVar7 = 0;
      do {
        local_7a = bVar12 ^ 1;
        lVar3 = (longlong)iVar7;
        iVar10 = iVar7 + 1;
        if (iVar7 + 1 < iVar1) {
          iVar10 = iVar1;
        }
        plVar6 = local_58 + lVar3 * 2;
        lVar4 = lVar3;
        local_79 = bVar12;
        local_6c = iVar7;
        local_68 = uVar9;
        do {
          lVar4 = lVar4 + 1;
          iVar8 = iVar10;
          if (lVar11 <= lVar4) break;
          plVar2 = (longlong *)plVar6[-1];
          if (plVar2 == (longlong *)0x0 || (int)*plVar6 == 0) {
            lVar5 = 0;
          }
          else {
            (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
            lVar5 = local_50;
          }
          iVar7 = iVar7 + 1;
          plVar6 = plVar6 + 2;
          iVar8 = iVar7;
        } while ((bool)(bVar12 & 1) == (lVar5 == param_3));
        iVar7 = iVar8;
        bVar12 = local_7a;
        iVar10 = iVar7 - local_6c;
        if ((local_79 & 1) == 0) {
          iVar8 = (int)local_68;
          if (iVar8 != local_6c) {
            memmove(local_78 + (longlong)iVar8 * 2,local_78 + lVar3 * 2,(longlong)iVar10 << 4);
          }
          uVar9 = (ulonglong)(uint)(iVar8 + iVar10);
        }
        else {
          FUN_145a1a852(local_78 + lVar3 * 2,iVar10);
          uVar9 = local_68;
          bVar12 = local_7a;
        }
      } while (lVar4 < lVar11);
      *(int *)(local_60 + 0x50) = (int)uVar9;
      bVar13 = iVar1 != (int)uVar9;
      goto LAB_148845d6b;
    }
  }
  bVar13 = false;
LAB_148845d6b:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar13;
}



// FUNCTION 148845ebc FUN_148845ebc body=42 status=ok
// SIG undefined FUN_148845ebc(void)

undefined4 * FUN_148845ebc(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_148845896(param_1,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x38);
    uVar3 = *(undefined4 *)(lVar1 + 0x3c);
    uVar4 = *(undefined4 *)(lVar1 + 0x40);
    uVar5 = *(undefined4 *)(lVar1 + 0x44);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return param_2;
}



// FUNCTION 148845ee6 FUN_148845ee6 body=450 status=ok
// SIG undefined FUN_148845ee6(void)

undefined8 * FUN_148845ee6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined4 local_5c [2];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_3 + 4) < 2) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
  }
  FUN_144a659ac(param_3,local_5c,1);
  if (local_54 != 0) {
    local_5c[0] = FUN_144a78877(local_5c[0],local_54);
  }
  iVar1 = FUN_14884e606((longlong *)(param_1 + 0x10),local_5c[0],local_5c);
  if (iVar1 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x10);
  }
  lVar6 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  do {
    uVar2 = uStack_70._4_4_;
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    if ((int)uVar2 < 5) {
      FUN_1446f8c06(&local_78,5);
    }
    if (local_78 != (undefined2 *)0x0) {
      *local_78 = 0;
    }
    iVar1 = 4;
    do {
      uVar2 = rand();
      iVar5 = (int)(((float)(uVar2 & 0x7fff) / 32767.0) * 26.0);
      if (0x18 < iVar5) {
        iVar5 = 0x19;
      }
      FUN_140002184(&local_78,iVar5 + 0x61);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_1405f0cf6(param_2,&local_78,0,1);
    if (lVar6 == 0) break;
    uVar3 = *(undefined4 *)param_2;
    if (*(int *)(param_2 + 1) != 0) {
      uVar3 = FUN_144a78877(uVar3,*(int *)(param_2 + 1));
    }
    iVar1 = FUN_14884e666(lVar6,uVar3);
  } while (iVar1 != -1);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488460aa FUN_1488460aa body=83 status=ok
// SIG undefined FUN_1488460aa(void)

void FUN_1488460aa(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    FUN_145ff4c0c(param_1 + 0x10);
    FUN_14884e6c6(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94)) {
    return;
  }
  FUN_145779f24(param_1 + 0x60);
  FUN_148812ff8(param_1 + 0x60);
  return;
}



// FUNCTION 1488460fe FUN_1488460fe body=19 status=ok
// SIG undefined FUN_1488460fe(void)

void FUN_1488460fe(longlong param_1)

{
  FUN_14884e7e2(param_1 + 0x10);
  return;
}



// FUNCTION 148846112 FUN_148846112 body=115 status=ok
// SIG undefined FUN_148846112(void)

undefined8 FUN_148846112(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar9 = plVar1;
  iVar4 = FUN_14884e606(plVar1,uVar3,param_2);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x80 + *plVar1, plVar9 = (longlong *)(lVar8 + 0x10),
     plVar9 == (longlong *)0x0 || lVar8 == 0)) {
    bVar7 = (byte)plVar9;
    bVar2 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14884e96a(plVar9,param_3);
    bVar7 = (byte)uVar5;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar6,bVar2 & bVar7);
}



// FUNCTION 148846186 FUN_148846186 body=160 status=ok
// SIG undefined FUN_148846186(void)

void FUN_148846186(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[2] == 0) {
    uVar1 = *param_2;
  }
  else {
    uVar1 = FUN_144a78877(*param_2,param_2[2]);
  }
  lVar2 = FUN_14884eaf2(param_1 + 0x10,uVar1,param_2);
  local_38 = 0;
  local_30 = 0;
  FUN_1401aa3da(&local_38,param_3);
  FUN_14884ac7e(lVar2 + 0x50,local_40,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148846228 FUN_148846228 body=205 status=ok
// SIG undefined FUN_148846228(void)

void FUN_148846228(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[2] == 0) {
    uVar1 = *param_2;
  }
  else {
    uVar1 = FUN_144a78877(*param_2,param_2[2]);
  }
  uVar2 = FUN_14884eaf2(param_1 + 0x10,uVar1,param_2);
  if (param_3[2] != 0) {
    FUN_144a78877(*param_3,param_3[2]);
  }
  lVar3 = FUN_14884f0b0(uVar2);
  local_40 = 0;
  local_38 = 0;
  FUN_1401aa3da(&local_40,param_4);
  FUN_14884ac7e(lVar3 + 0x50,local_48,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488462f6 FUN_1488462f6 body=1693 status=ok
// SIG undefined FUN_1488462f6(void)

void FUN_1488462f6(longlong param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_178 [43];
  byte local_14d;
  int local_14c;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  int local_12c;
  int local_128;
  uint local_124;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  int *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = (longlong *)(param_1 + 0x10);
  local_120 = param_1 + 0x20;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  local_148 = param_2;
  local_108 = param_1;
  uStack_b0 = local_120;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  local_78 = local_a8;
  lVar3 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_140;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  iVar11 = local_78._4_4_;
  if ((local_78._4_4_ != iVar4) || (local_78 = lVar3, uStack_b0 != local_120)) {
    do {
      local_78 = lVar3;
      local_12c = iVar4;
      lVar3 = *local_90;
      lVar7 = (longlong)iVar11 * 0x80;
      FUN_140457ffc(lVar3 + lVar7 + 0x60,local_148);
      lVar6 = lVar3 + lVar7 + 0x20;
      local_e0 = (longlong *)0x100000000;
      local_d0 = 0xffffffff;
      local_c8 = local_c8 & 0xffffffff00000000;
      local_d8 = lVar6;
      if (*(int *)(lVar3 + lVar7 + 0x38) != 0) {
        FUN_1449c0562(&local_e0);
      }
      local_118 = (longlong *)(lVar3 + lVar7 + 0x10);
      uStack_a0 = local_d0;
      local_98 = (uint)local_c8;
      local_94 = local_c8._4_4_;
      uStack_b0 = (longlong)local_e0;
      local_a8 = local_d8;
      iVar4 = *(int *)(lVar3 + lVar7 + 0x38);
      local_e0 = (longlong *)CONCAT44(1 << ((byte)iVar4 & 0x1f),iVar4 >> 5);
      local_d0 = CONCAT44(iVar4,-1 << ((byte)iVar4 & 0x1f));
      local_c8 = CONCAT44(local_c8._4_4_,iVar4) & 0xffffffffffffffe0;
      local_d8 = lVar6;
      local_b8 = local_118;
      if (*(int *)(lVar3 + lVar7 + 0x38) != iVar4) {
        FUN_1449c0562(&local_e0);
        iVar4 = local_d0._4_4_;
      }
      local_128 = iVar4;
      local_100 = local_d8;
      if ((local_b8 != local_118 || local_a8 != local_d8) || uStack_a0._4_4_ != iVar4) {
        do {
          lVar3 = *local_b8;
          lVar6 = (longlong)uStack_a0._4_4_ * 0x80;
          FUN_140457ffc(lVar3 + lVar6 + 0x60,local_148);
          lVar7 = lVar3 + lVar6 + 0x20;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar7;
          if (*(int *)(lVar3 + lVar6 + 0x38) != 0) {
            FUN_1449c0562(&local_68);
          }
          local_110 = (longlong *)(lVar3 + lVar6 + 0x10);
          local_c8 = local_58;
          local_c0 = local_50;
          local_bc = local_4c;
          local_d8 = local_68;
          local_d0 = local_60;
          uVar5 = *(uint *)(lVar3 + lVar6 + 0x38);
          local_68 = CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
          local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
          local_50 = uVar5 & 0xffffffe0;
          local_e0 = local_110;
          local_60 = lVar7;
          if (*(uint *)(lVar3 + lVar6 + 0x38) != uVar5) {
            FUN_1449c0562(&local_68);
            uVar5 = local_58._4_4_;
          }
          lVar3 = local_60;
          local_124 = uVar5;
          local_f8 = local_60;
          if ((local_e0 != local_110 || local_d0 != local_60) || local_c8._4_4_ != uVar5) {
            do {
              lVar6 = *local_e0;
              lVar8 = (longlong)(int)local_c8._4_4_ * 0xc0;
              iVar4 = *(int *)(lVar6 + 0x60 + lVar8);
              lVar7 = (longlong)iVar4;
              if (lVar7 != 0) {
                local_138 = *(longlong **)(lVar6 + 0x58 + lVar8);
                if ((longlong *)*local_138 == (longlong *)0x0 || (int)local_138[1] == 0) {
                  lVar3 = 0;
                }
                else {
                  lVar3 = (**(code **)(*(longlong *)*local_138 + 8))();
                }
                local_f0 = (int *)(lVar6 + lVar8 + 0x60);
                local_e8 = local_138 + 3;
                iVar11 = 0;
                iVar10 = 0;
                bVar2 = lVar3 == local_148;
                do {
                  local_14d = bVar2 ^ 1;
                  lVar3 = (longlong)iVar10;
                  iVar12 = iVar10 + 1;
                  if (iVar10 + 1 < iVar4) {
                    iVar12 = iVar4;
                  }
                  plVar9 = local_e8 + lVar3 * 2;
                  lVar6 = lVar3;
                  local_14c = iVar11;
                  iVar11 = iVar10;
                  do {
                    lVar6 = lVar6 + 1;
                    iVar1 = iVar12;
                    if (lVar7 <= lVar6) break;
                    if ((longlong *)plVar9[-1] == (longlong *)0x0 || (int)*plVar9 == 0) {
                      lVar8 = 0;
                    }
                    else {
                      lVar8 = (**(code **)(*(longlong *)plVar9[-1] + 8))();
                    }
                    iVar11 = iVar11 + 1;
                    plVar9 = plVar9 + 2;
                    iVar1 = iVar11;
                  } while ((bool)(bVar2 & 1) == (lVar8 == local_148));
                  iVar11 = local_14c;
                  iVar12 = iVar1 - iVar10;
                  if ((bVar2 & 1) == 0) {
                    if (local_14c != iVar10) {
                      memmove(local_138 + (longlong)local_14c * 2,local_138 + lVar3 * 2,
                              (longlong)iVar12 << 4);
                    }
                    iVar11 = iVar11 + iVar12;
                  }
                  else {
                    FUN_145a1a852(local_138 + lVar3 * 2,iVar12);
                    iVar11 = local_14c;
                  }
                  iVar10 = iVar1;
                  bVar2 = local_14d;
                } while (lVar6 < lVar7);
                *local_f0 = iVar11;
                lVar3 = local_f8;
                uVar5 = local_124;
              }
              local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
              FUN_1449c0562(&local_d8);
            } while (local_e0 != local_110 || (local_d0 != lVar3 || local_c8._4_4_ != uVar5));
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != local_118 || (local_a8 != local_100 || uStack_a0._4_4_ != local_128));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar11 = local_78._4_4_;
      iVar4 = local_12c;
      lVar3 = local_78;
    } while (local_90 != local_140 ||
             (CONCAT44(uStack_7c,uStack_80) != local_120 || local_78._4_4_ != local_12c));
  }
  if (*(int *)(local_108 + 0x68) != *(int *)(local_108 + 0x94)) {
    lVar3 = local_108 + 0x60;
    FUN_145779f24(lVar3);
    FUN_148812ff8(lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148846994 FUN_148846994 body=489 status=ok
// SIG undefined FUN_148846994(void)

void FUN_148846994(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar4 = FUN_14884e606((longlong *)(param_1 + 0x10),uVar3,param_2);
  uVar6 = local_78;
  if ((iVar4 != -1) &&
     (lVar8 = (longlong)iVar4 * 0x80 + *(longlong *)(param_1 + 0x10),
     plVar9 = (longlong *)(lVar8 + 0x10), plVar9 != (longlong *)0x0 && lVar8 != 0)) {
    if (param_3[2] != 0) {
      FUN_144a78877(*param_3,param_3[2]);
    }
    iVar4 = FUN_14884e666(plVar9);
    uVar6 = local_78;
    if (iVar4 != -1) {
      lVar8 = (longlong)iVar4 * 0x80 + *plVar9;
      plVar9 = (longlong *)(lVar8 + 0x10);
      if (plVar9 != (longlong *)0x0 && lVar8 != 0) {
        lVar1 = lVar8 + 0x20;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar1;
        if (*(int *)(lVar8 + 0x38) == 0) {
          iVar4 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar4 = *(int *)(lVar8 + 0x38);
        }
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar6 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = plVar9;
        if ((local_78._4_4_ != iVar4) || (uStack_60 != lVar1)) {
          iVar5 = local_78._4_4_;
          local_78 = uVar6;
          do {
            lVar8 = *local_90;
            pcVar2 = (code *)*param_4;
            plVar7 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar7 = param_4 + 4;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar2)(uVar6,lVar8 + (longlong)iVar5 * 0xc0 + 0x10);
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar5 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_90 != plVar9 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar4));
        }
      }
    }
  }
  local_78 = uVar6;
  if (*param_4 != 0) {
    plVar9 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148846b7e FUN_148846b7e body=202 status=ok
// SIG undefined FUN_148846b7e(void)

void FUN_148846b7e(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    lVar2 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & *param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x390);
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x38;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x38) == *param_2) {
          if (lVar1 == -0x28 || lVar1 == 0) {
            return;
          }
          if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
            lVar2 = param_1 + 0x3c8;
            if (*(longlong *)(param_1 + 0x3d0) != 0) {
              lVar2 = *(longlong *)(param_1 + 0x3d0);
            }
            iVar3 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x3d8) - 1U &
                                     (longlong)(int)*param_2) * 4);
            if (iVar3 != -1) {
              lVar2 = *(longlong *)(param_1 + 0x390);
              do {
                if (*(uint *)(lVar2 + (longlong)iVar3 * 0x38) == *param_2) {
                  FUN_148850152();
                  return;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x38 + lVar2 + 0x30);
              } while (iVar3 != -1);
            }
          }
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x30);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148846c30 FUN_148846c30 body=53 status=ok
// SIG undefined FUN_148846c30(void)

void FUN_148846c30(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3fe570;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 148846c66 FUN_148846c66 body=323 status=ok
// SIG undefined FUN_148846c66(void)

void FUN_148846c66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    iVar9 = *(int *)(puVar5 + 1);
    do {
      if (iVar9 == 0) goto LAB_148846d9c;
      LOCK();
      iVar4 = *(int *)(puVar5 + 1);
      bVar10 = iVar9 == iVar4;
      if (bVar10) {
        *(int *)(puVar5 + 1) = iVar9 + 1;
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x10);
      if (plVar7 == (longlong *)0x0) {
LAB_148846cff:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        bVar10 = true;
      }
      else {
        iVar9 = (int)plVar7[1];
        do {
          if (iVar9 == 0) goto LAB_148846cff;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar10 = iVar9 == iVar4;
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar9 + 1;
            iVar4 = iVar9;
          }
          iVar9 = iVar4;
          UNLOCK();
        } while (!bVar10);
        uVar8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        bVar10 = false;
        local_48 = uVar8;
        plStack_40 = plVar7;
      }
      plVar7 = plStack_40;
      FUN_14106cd80(lVar6,&local_48);
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (!bVar10) {
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
    }
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_148846d9c:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148846dbe FUN_148846dbe body=87 status=ok
// SIG undefined FUN_148846dbe(void)

void FUN_148846dbe(longlong param_1)

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
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_14106ce2e();
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
                    /* WARNING: Could not recover jumptable at 0x000148846e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148846e16 FUN_148846e16 body=120 status=ok
// SIG undefined FUN_148846e16(void)

undefined8 * FUN_148846e16(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148846e70;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      FUN_140daa42e(lVar4,param_2);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_148846e70:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 148846e8e FUN_148846e8e body=120 status=ok
// SIG undefined FUN_148846e8e(void)

undefined8 * FUN_148846e8e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148846ee8;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      FUN_14106b9aa(lVar4,param_2);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_148846ee8:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 148846f06 FUN_148846f06 body=101 status=ok
// SIG undefined FUN_148846f06(void)

ulonglong FUN_148846f06(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148846f5a:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148846f5a;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    if (bVar7) {
      uVar6 = FUN_14106ba28();
      unaff_RBX = (ulonglong)uVar6;
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
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
}



// FUNCTION 148846f6c FUN_148846f6c body=89 status=ok
// SIG undefined FUN_148846f6c(void)

void FUN_148846f6c(longlong param_1)

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
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_140daa31a();
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
                    /* WARNING: Could not recover jumptable at 0x000148846fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148846fc6 FUN_148846fc6 body=157 status=ok
// SIG undefined FUN_148846fc6(void)

undefined8 * FUN_148846fc6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_148847052;
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar8 = iVar7 == iVar3;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 != 0) {
      *param_2 = 0;
      lVar6 = *(longlong *)(lVar5 + 0x20);
      param_2[1] = lVar6;
      if (lVar6 != 0) {
        iVar7 = *(int *)(lVar6 + 8);
        do {
          if (iVar7 == 0) {
            param_2[1] = 0;
            goto LAB_148847030;
          }
          LOCK();
          iVar3 = *(int *)(lVar6 + 8);
          bVar8 = iVar7 == iVar3;
          if (bVar8) {
            *(int *)(lVar6 + 8) = iVar7 + 1;
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
          UNLOCK();
        } while (!bVar8);
        if (param_2[1] != 0) {
          *param_2 = *(undefined8 *)(lVar5 + 0x18);
        }
      }
    }
LAB_148847030:
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
    if (lVar5 != 0) {
      return param_2;
    }
  }
LAB_148847052:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148847064 FUN_148847064 body=111 status=ok
// SIG undefined FUN_148847064(void)

undefined8 * FUN_148847064(undefined8 *param_1,undefined8 *param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3e38b0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[5] = *param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(param_1 + 7,param_2 + 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1488470d4 FUN_1488470d4 body=443 status=ok
// SIG undefined FUN_1488470d4(void)

void FUN_1488470d4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14106c25a();
  if (param_2 != 0) {
    lVar4 = FUN_140929c72();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = *(longlong *)(param_2 + 0x410), lVar4 != 0)) {
      FUN_1448c1924(lVar4,&local_78);
      if (local_78 != (code *)0x0) {
        local_48 = 0;
        local_40 = 0x400000000;
        FUN_148847290(local_78,0,local_68);
        lVar5 = (longlong)(int)local_40;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            FUN_1488473f0(param_1);
            lVar6 = lVar6 + 8;
          } while (lVar5 * 8 != lVar6);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      plVar3 = (longlong *)CONCAT44(uStack_6c,local_70);
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
      local_78 = FUN_1488473f0;
      local_70 = 0;
      FUN_148850956(local_68,param_1);
      FUN_14885086e(lVar4 + 0x9a8,&local_78,local_68);
      FUN_1449db362(local_68);
      local_78 = FUN_14884783c;
      local_70 = 0;
      FUN_148850956(local_68,param_1,&local_78);
      FUN_14885086e(lVar4 + 0x9c0,&local_78,local_68);
      FUN_1449db362(local_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148847290 FUN_148847290 body=350 status=ok
// SIG undefined FUN_148847290(void)

void FUN_148847290(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      if ((*(char *)(*local_90 + 0x40 + (longlong)iStack_74 * 0x58) == '\0') &&
         (((lVar5 = *local_90 + (longlong)iStack_74 * 0x58, param_2 == '\x02' ||
           (*(char *)(lVar5 + 0x14) == param_2)) &&
          (lVar5 = FUN_14479d2ce(lVar5 + 0x30), lVar5 != 0)))) {
        iVar3 = *(int *)(param_3 + 0x28);
        *(uint *)(param_3 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x2c) < iVar3 + 1U) {
          FUN_14885072a(param_3,iVar3);
        }
        lVar4 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar4 = param_3;
        }
        *(longlong *)(lVar4 + (longlong)iVar3 * 8) = lVar5;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488473f0 FUN_1488473f0 body=1099 status=ok
// SIG undefined FUN_1488473f0(void)

void FUN_1488473f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_11c;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  longlong local_c0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 == (longlong *)0x0) goto LAB_14884745d;
  uVar6 = FUN_140427846();
  plVar7 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar6);
  if (plVar7 == (longlong *)0x0) goto LAB_14884745d;
  uVar6 = FUN_140427846();
  plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
  if (plVar8 == (longlong *)0x0 || plVar7 == plVar8) goto LAB_14884745d;
  (**(code **)(*plVar8 + 0x50))(plVar8,&local_e8);
  FUN_140ac173c(&local_10c,&local_e8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (iStack_f4 == 0) goto LAB_14884745d;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x48);
    lVar12 = (longlong)*(int *)(param_1 + 0x50) << 6;
    do {
      plVar7 = (longlong *)FUN_14479d2ce(lVar10);
      if (plVar7 == param_3) {
        if (lVar10 != 0) goto LAB_14884745d;
        break;
      }
      lVar10 = lVar10 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar4 + 1U) {
    FUN_148850f42(param_1 + 0x48,iVar4);
  }
  lVar12 = *(longlong *)(param_1 + 0x48);
  lVar11 = (longlong)iVar4 * 0x40;
  lVar10 = lVar11 + lVar12;
  puVar2 = (undefined8 *)(lVar12 + 0x30 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar12 + lVar11) = 0;
  ((undefined8 *)(lVar12 + lVar11))[1] = 0;
  *(undefined8 *)(lVar12 + 8 + lVar11) = DAT_14cb7bd68;
  *(undefined4 *)(lVar12 + 0x10 + lVar11) = DAT_14cb7bd70;
  *(undefined8 *)(lVar12 + 0x14 + lVar11) = DAT_14cb7bd80;
  *(undefined4 *)(lVar12 + 0x1c + lVar11) = DAT_14cb7bd88;
  *(undefined8 *)(lVar12 + 0x20 + lVar11) = 0;
  *(undefined4 *)(lVar12 + 0x28 + lVar11) = 0;
  puVar2 = (undefined8 *)(lVar12 + 0x30 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_14485c47a(lVar10,param_3);
  *(undefined4 *)(lVar12 + 0x28 + lVar11) = local_ec;
  puVar3 = (undefined4 *)(lVar12 + 0x18 + lVar11);
  *puVar3 = uStack_fc;
  puVar3[1] = uStack_f8;
  puVar3[2] = iStack_f4;
  puVar3[3] = uStack_f0;
  puVar3 = (undefined4 *)(lVar12 + 8 + lVar11);
  *puVar3 = local_10c;
  puVar3[1] = uStack_108;
  puVar3[2] = uStack_104;
  puVar3[3] = uStack_100;
  FUN_148846fc6(param_1,&local_130);
  puVar9 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar9[1] = &DAT_100000001;
  *puVar9 = &PTR_FUN_14b400bc0;
  puVar2 = puVar9 + 2;
  FUN_14105926a(puVar2,&local_130);
  uStack_e0 = SUB84(puVar9,0);
  uStack_dc = (undefined4)((ulonglong)puVar9 >> 0x20);
  local_e8 = puVar2;
  FUN_14105930c(&local_e8,puVar2);
  plVar7 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 **)(lVar10 + 0x30) = local_e8;
    plVar8 = *(longlong **)(lVar10 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x38) = 0;
LAB_148847801:
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x0001488477e7:
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(undefined8 **)(lVar10 + 0x30) = local_e8;
    plVar8 = *(longlong **)(lVar10 + 0x38);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar8 = plVar7;
        goto joined_r0x0001488477e7;
      }
    }
    else {
      *(longlong **)(lVar10 + 0x38) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_148847801;
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar7 != (longlong *)0x0) {
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
  plVar7 = (longlong *)CONCAT44(uStack_124,local_128);
  if (plVar7 != (longlong *)0x0) {
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
  FUN_14106c8ae(*(undefined8 *)(lVar11 + lVar12 + 0x30),param_3,DAT_14cb7cbe8);
  lVar10 = FUN_14479d2ce(param_1 + 0x28);
  local_130 = &LAB_148847bbe;
  local_128 = 0;
  FUN_148850fc8(&local_e8,param_1);
  FUN_14490d954(lVar10 + 0x2b8,&local_130,&local_e8);
  FUN_1449db362(&local_e8);
  FUN_148846dbe(param_1);
  cVar5 = FUN_148846f06(param_1);
  puVar2 = local_e8;
  if (cVar5 == '\0') {
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_e8._4_4_ = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    local_d4 = 0;
    local_e8._0_4_ = CONCAT31(SUB83(puVar2,1),3);
    FUN_148846e16(param_1,(longlong)&local_e8 + 4);
    FUN_148846e8e(param_1,&uStack_d8);
    local_128 = uStack_104;
    local_130 = (undefined1 *)CONCAT44(uStack_108,local_10c);
    local_11c = uStack_f8;
    local_68 = uStack_104;
    local_64 = uStack_100;
    local_50 = local_ec;
    local_60 = uStack_fc;
    local_5c = uStack_f8;
    FUN_148846f6c(param_1,&local_e8);
    FUN_14105a12a(&local_e8);
  }
LAB_14884745d:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14884783c FUN_14884783c body=556 status=ok
// SIG undefined FUN_14884783c(void)

void FUN_14884783c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *_Dst;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [4];
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_3 != 0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x48);
    lVar10 = (longlong)*(int *)(param_1 + 0x50) << 6;
    uVar11 = 0;
    do {
      lVar7 = FUN_14479d2ce(lVar8);
      if (lVar7 == param_3) {
        if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0x50))) {
          cVar5 = FUN_148846f06(param_1);
          if (cVar5 == '\0') {
            local_80 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_cc = 0;
            uStack_c4 = 0;
            local_bc = 0;
            local_d0[0] = 4;
            FUN_148846e16(param_1,&local_cc);
            FUN_148846e8e(param_1,(longlong)&uStack_c4 + 4);
            lVar8 = *(longlong *)(param_1 + 0x48);
            uVar9 = (ulonglong)(uVar11 & 0x7fffffff);
            lVar10 = uVar9 * 0x40;
            local_f0 = *(undefined4 *)(lVar8 + 0x10 + lVar10);
            local_f8 = *(undefined8 *)(lVar8 + 8 + lVar10);
            local_e4 = *(undefined4 *)(lVar8 + 0x1c + lVar10);
            uVar3 = *(undefined8 *)(lVar8 + 0x14 + lVar10);
            local_e0 = *(undefined8 *)(lVar8 + 0x20 + lVar10);
            local_d8 = *(undefined4 *)(lVar8 + 0x28 + lVar10);
            local_ec._0_4_ = (undefined4)uVar3;
            local_4c = (undefined4)local_ec;
            local_ec._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_48 = local_ec._4_4_;
            local_ec = uVar3;
            local_58 = local_f8;
            local_50 = local_f0;
            local_44 = local_e4;
            local_40 = local_e0;
            local_38 = local_d8;
            FUN_148846f6c(param_1,local_d0);
            FUN_14105a12a(local_d0);
          }
          else {
            uVar9 = (ulonglong)(uVar11 & 0x7fffffff);
          }
          FUN_140457ffc(param_3 + 0x2b8,param_1);
          lVar8 = *(longlong *)(param_1 + 0x48);
          lVar10 = uVar9 * 0x40;
          *(undefined8 *)(lVar8 + 0x30 + lVar10) = 0;
          plVar4 = *(longlong **)(lVar8 + 0x38 + lVar10);
          if (plVar4 != (longlong *)0x0) {
            *(undefined8 *)(lVar8 + lVar10 + 0x38) = 0;
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
          _Dst = (void *)(lVar10 + *(longlong *)(param_1 + 0x48));
          FUN_148850825(_Dst,1);
          iVar6 = *(int *)(param_1 + 0x50);
          if (iVar6 - 1U != uVar11) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~uVar11 + iVar6) << 6);
            iVar6 = *(int *)(param_1 + 0x50);
          }
          *(int *)(param_1 + 0x50) = iVar6 + -1;
          FUN_148846dbe(param_1);
        }
        break;
      }
      lVar8 = lVar8 + 0x40;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + -0x40;
    } while (lVar10 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148847a6a FUN_148847a6a body=339 status=ok
// SIG undefined FUN_148847a6a(void)

void FUN_148847a6a(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = FUN_140929c72();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0x410), lVar3 != 0)) {
      FUN_140457ffc(lVar3 + 0x9a8,param_1);
      FUN_140457ffc(lVar3 + 0x9c0,param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < iVar1) {
    local_40 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    local_38 = iVar1;
    FUN_148850e4e(&local_40,iVar1);
    FUN_148850ea4(local_40,uVar2,iVar1);
    if ((longlong)local_38 != 0) {
      lVar4 = (longlong)local_38 << 6;
      lVar3 = local_40;
      do {
        FUN_14479d2ce(lVar3);
        FUN_14884783c(param_1);
        lVar3 = lVar3 + 0x40;
        lVar4 = lVar4 + -0x40;
      } while (lVar4 != 0);
    }
    FUN_148850825(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_148850f12((undefined8 *)(param_1 + 0x48));
    }
    FUN_148850825(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14106ce84(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148847bc6 FUN_148847bc6 body=180 status=ok
// SIG undefined FUN_148847bc6(void)

void FUN_148847bc6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + *(longlong *)(param_1 + 0x48);
    bVar4 = false;
    lVar7 = *(longlong *)(param_1 + 0x48);
    do {
      while( true ) {
        lVar6 = lVar7 + 0x40;
        lVar2 = *(longlong *)(lVar7 + 0x30);
        if (lVar2 == 0) break;
        lVar7 = *(longlong *)(lVar7 + 0x38);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
          UNLOCK();
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14107fe10(param_2,iVar1);
        }
        lVar3 = *param_2;
        *(longlong *)(lVar3 + (longlong)iVar1 * 0x10) = lVar2;
        *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar7;
        bVar4 = true;
        lVar7 = lVar6;
        if (lVar6 == lVar5) {
          return;
        }
      }
      lVar7 = lVar6;
    } while (lVar6 != lVar5);
    if (bVar4) {
      return;
    }
  }
  FUN_1410d72b6(param_1,param_2);
  return;
}



// FUNCTION 148847c7a FUN_148847c7a body=366 status=ok
// SIG undefined FUN_148847c7a(void)

void FUN_148847c7a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    lVar11 = *(longlong *)(param_1 + 0x48);
    lVar12 = (longlong)*(int *)(param_1 + 0x50) << 6;
    do {
      cVar9 = FUN_144729dda(lVar11);
      if (cVar9 != '\0') {
        lVar13 = param_2[1];
        uVar10 = (int)lVar13 + 1;
        *(uint *)(param_2 + 1) = uVar10;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
          FUN_1457ecdd8(param_2);
        }
        lVar3 = *param_2;
        lVar13 = (longlong)(int)lVar13 * 0xa0;
        memset((void *)(lVar13 + lVar3),0,0xa0);
        *(undefined8 *)(lVar3 + 0x78 + lVar13) = DAT_14cb7bd68;
        *(undefined4 *)(lVar3 + 0x80 + lVar13) = DAT_14cb7bd70;
        *(undefined8 *)(lVar3 + 0x84 + lVar13) = DAT_14cb7bd80;
        *(undefined4 *)(lVar3 + 0x8c + lVar13) = DAT_14cb7bd88;
        *(undefined8 *)(lVar3 + 0x90 + lVar13) = 0;
        *(undefined4 *)(lVar3 + 0x98 + lVar13) = 0;
        *(undefined1 *)(lVar3 + lVar13) = 3;
        FUN_148846e16(param_1,&local_4c);
        *(undefined4 *)(lVar3 + 0xc + lVar13) = local_44;
        *(undefined8 *)(lVar3 + 4 + lVar13) = local_4c;
        FUN_148846e8e(param_1);
        *(undefined4 *)(lVar3 + 0x18 + lVar13) = local_44;
        *(undefined8 *)(lVar3 + 0x10 + lVar13) = local_4c;
        *(undefined4 *)(lVar3 + 0x98 + lVar13) = *(undefined4 *)(lVar11 + 0x28);
        uVar4 = *(undefined4 *)(lVar11 + 8);
        uVar5 = *(undefined4 *)(lVar11 + 0xc);
        uVar6 = *(undefined4 *)(lVar11 + 0x10);
        uVar7 = *(undefined4 *)(lVar11 + 0x14);
        uVar8 = *(undefined8 *)(lVar11 + 0x20);
        puVar2 = (undefined8 *)(lVar3 + 0x88 + lVar13);
        *puVar2 = *(undefined8 *)(lVar11 + 0x18);
        puVar2[1] = uVar8;
        puVar1 = (undefined4 *)(lVar3 + 0x78 + lVar13);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
      }
      lVar11 = lVar11 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148847dea FUN_148847dea body=322 status=ok
// SIG undefined FUN_148847dea(void)

longlong * FUN_148847dea(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_148847e10:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148847e10;
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
    local_48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_40 = plVar3;
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
  plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
  FUN_1488514b2(plVar6,&local_48);
  plVar3 = plVar6 + 2;
  local_30 = plVar3;
  local_28 = plVar6;
  FUN_1488515ce(&local_30,plVar3);
  plVar2 = local_28;
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148847f30 FUN_148847f30 body=162 status=ok
// SIG undefined FUN_148847f30(void)

longlong * FUN_148847f30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_148851675(param_1 + 8);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148851740(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148847fd6 FUN_148847fd6 body=49 status=ok
// SIG undefined FUN_148847fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148847fd6(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    _DAT_14cb7cc74 = _DAT_14cb7cc74 + -1;
    *param_1 = DAT_14cb7cc68;
    DAT_14cb7cc68 = param_1;
  }
  return;
}



// FUNCTION 148848020 FUN_148848020 body=701 status=ok
// SIG undefined FUN_148848020(void)

longlong * FUN_148848020(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar3 != 0) {
    local_58[0] = *(longlong *)(lVar3 + 0x18);
    FUN_1400021e4(local_58,&local_48);
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
      local_48 = 0;
      *(int *)(param_2 + 1) = (int)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
    }
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x40);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0xa8);
    if (lVar1 == 0) {
      FUN_144750a86(lVar3,&local_48,0,0);
      lVar3 = local_48;
      if (&local_48 != param_2) {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_48;
        local_48 = 0;
        *(int *)(param_2 + 1) = (int)local_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
        goto LAB_148848188;
      }
    }
    else {
      local_48 = *(longlong *)(lVar3 + 0x18);
      FUN_1400021e4(&local_48,local_58);
      local_48 = *(longlong *)(lVar1 + 0x18);
      FUN_1400021e4(&local_48,local_78);
      FUN_144a882a8(local_68,local_78,&DAT_149e0635c);
      FUN_1401c7f3e(&local_48,local_68,local_58);
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
        local_48 = 0;
        *(int *)(param_2 + 1) = (int)local_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
        local_40 = 0;
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      lVar3 = local_58[0];
      if (local_78[0] != 0) {
        FUN_1400020a8();
        lVar3 = local_58[0];
      }
    }
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
LAB_148848188:
  if ((int)param_2[1] < 2) {
    FUN_141706e52(param_1 + 0x50,&local_48);
    if (&local_48 != param_2) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_48;
      *(int *)(param_2 + 1) = (int)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
      goto LAB_148848226;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_148848226;
    FUN_1400020e8(param_2,&DAT_149e00c10,3);
    FUN_1400021e4(param_1 + 0x48,&local_48);
    iVar2 = (int)local_40 + -1;
    if ((int)local_40 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar2);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_148848226:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148848300 FUN_148848300 body=100 status=ok
// SIG undefined FUN_148848300(void)

undefined8 * FUN_148848300(undefined8 *param_1)

{
  FUN_14105926a();
  *param_1 = &PTR_FUN_14b3fe700;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 148848364 FUN_148848364 body=32 status=ok
// SIG undefined FUN_148848364(void)

undefined8 FUN_148848364(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x80);
  return param_2;
}



// FUNCTION 148848384 FUN_148848384 body=618 status=ok
// SIG undefined FUN_148848384(void)

void FUN_148848384(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [40];
  code *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_9c [12];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1447715ec(param_1 + 0x80);
  FUN_143d38554(param_1);
  if (1 < *(int *)(param_1 + 0x84)) {
    FUN_144928b90(&local_70,1);
    lVar2 = param_1 + 0xa8;
    FUN_1411b8130(lVar2,&local_70);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    uStack_68 = DAT_14cb7bba0;
    uStack_6c = DAT_14cb7bb98._4_4_;
    local_70 = (int)DAT_14cb7bb98;
    FUN_144928d62(param_1 + 0xb8,1,&local_70);
    local_80 = DAT_14cb7bd68;
    local_78 = DAT_14cb7bd70;
    FUN_14013eb2c(lVar2);
    local_88 = DAT_14cb7bd88;
    local_90 = DAT_14cb7bd80;
    FUN_14013eb54(lVar2);
    FUN_1400f0e12(param_1 + 0x80,local_9c,1);
    FUN_144928d62(param_1 + 0xb8,4,local_9c);
    plVar3 = *(longlong **)(param_1 + 0x70);
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1488484ee;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar5 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar9);
      if (*(longlong *)(param_1 + 0x68) != 0) {
        uVar6 = FUN_1400bd1c2(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10));
        plVar7 = (longlong *)FUN_140ec3c65(uVar6);
        if (plVar7 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            (**(code **)(*plVar7 + 0x78))(plVar7,lVar2);
            *(undefined8 *)(param_1 + 0xe0) = 0;
          }
          lVar8 = (**(code **)(*plVar7 + 0x60))(plVar7,lVar2);
          if (lVar8 != 0) {
            local_b0 = *(longlong *)(lVar8 + 0x10);
            if (*(longlong *)(lVar8 + 0x10) == 0) {
              local_b0 = lVar8;
            }
            local_a8 = *(undefined4 *)(lVar8 + 0x18);
            FUN_143d385f8(param_1);
          }
          local_c0 = FUN_148848772;
          local_b8 = 0;
          FUN_1488485f0(&local_70,param_1);
          (**(code **)(*plVar7 + 0x70))(plVar7,&local_c0,lVar2,&local_70);
          *(code **)(param_1 + 0xe0) = local_c0;
          FUN_1449db362(&local_70);
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_1488484ee:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488485f0 FUN_1488485f0 body=386 status=ok
// SIG undefined FUN_1488485f0(void)

longlong * FUN_1488485f0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148848701:
    *puVar5 = &PTR_LAB_14b3fc100;
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
    *puVar5 = &PTR_FUN_14b400a90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148848701;
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
    *puVar5 = &PTR_LAB_14b3fc100;
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
    *puVar5 = &PTR_FUN_14b400a90;
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



// FUNCTION 148848772 FUN_148848772 body=69 status=ok
// SIG undefined FUN_148848772(void)

void FUN_148848772(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_143d385f8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488487bc FUN_1488487bc body=2735 status=ok
// SIG undefined FUN_1488487bc(void)

void FUN_1488487bc(longlong param_1,double *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  float local_1ac;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_180;
  float local_17c;
  double local_178;
  double local_170;
  double local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144a76660(param_3,&local_108);
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  if ((*(char *)(param_1 + 0xb9) != '\0') ||
     (ABS((float)(local_108 * 0.0 + uStack_100 * 0.0 + local_f8)) < 0.7071)) {
    uStack_140 = *(undefined4 *)(param_3 + 8);
    uStack_13c = *(undefined4 *)(param_3 + 0xc);
    uVar22 = 0;
    local_138 = 0;
    local_148 = 0;
    FUN_144a76660(&local_148,&local_160);
    lVar23 = DAT_14cb7cef0;
    local_f8 = local_150;
    local_108 = (double)CONCAT44(uStack_15c,local_160);
    uStack_100 = (double)CONCAT44(uStack_154,uStack_158);
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (*piVar1 != 0x40000002) {
      bVar14 = FUN_144a61b4f();
      uVar22 = (ulonglong)(bVar14 ^ 1);
    }
    fVar36 = *(float *)(lVar23 + uVar22 * 4);
    lVar23 = DAT_14cb7cef0;
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      lVar23 = DAT_14cb7cdb8;
    }
    if (*piVar1 == 0x40000002) {
      uVar22 = 0;
    }
    else {
      bVar14 = FUN_144a61b4f();
      uVar22 = (ulonglong)(bVar14 ^ 1);
    }
    uVar15 = *(uint *)(param_1 + 0xa8);
    if (0 < (int)uVar15) {
      uVar25 = SUB84(local_108,0);
      uVar27 = (undefined4)((ulonglong)local_108 >> 0x20);
      uVar37 = SUB84(uStack_100,0);
      uVar38 = (undefined4)((ulonglong)uStack_100 >> 0x20);
      dVar9 = local_108 * local_108 + uStack_100 * uStack_100;
      local_1b8 = DAT_14c8464e8;
      local_1a8 = DAT_14c8464e8;
      dVar32 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar9) {
        local_1a8 = uStack_100 * (1.0 / SQRT(dVar9));
        dVar32 = (1.0 / SQRT(dVar9)) * local_108;
      }
      local_198 = DAT_14c8464f0;
      dVar31 = local_198;
      uStack_190 = 0;
      plVar2 = (longlong *)(param_1 + 0xa0);
      bVar7 = NAN(dVar9);
      bVar8 = dVar9 == 1.0;
      if ((bVar8) && (!bVar7)) {
        dVar32 = local_108;
      }
      uVar10 = -(ulonglong)(dVar9 < 9.99999993922529e-09) & (ulonglong)DAT_14c8464f0;
      uVar24 = (undefined4)uVar10;
      uVar26 = (undefined4)(uVar10 >> 0x20);
      if ((bVar8) && (!bVar7)) {
        local_1a8 = uStack_100;
      }
      uVar39 = SUB84(local_f8,0);
      uVar40 = (undefined4)((ulonglong)local_f8 >> 0x20);
      pvVar5 = (void *)*plVar2;
      if ((bVar8) && (!bVar7)) {
        uVar10 = -(ulonglong)(local_f8 == 0.0) & (ulonglong)local_f8;
        uVar24 = (undefined4)uVar10;
        uVar26 = (undefined4)(uVar10 >> 0x20);
      }
      local_1ac = *(float *)(lVar23 + uVar22 * 4);
      local_168 = param_2[2];
      local_170 = *param_2;
      local_178 = param_2[1];
      pdVar17 = (double *)((longlong)pvVar5 + 0x10);
      uVar18 = 0xffffffff;
      uVar22 = 0;
      bVar7 = false;
      local_1a0 = DAT_14c8464e0;
      do {
        local_198 = dVar31;
        local_17c = fVar36;
        if (uVar22 != 0) {
          dVar11 = *pdVar17 - local_168;
          dVar29 = pdVar17[-1] - local_178;
          dVar33 = pdVar17[-2] - local_170;
          dVar9 = dVar33 * dVar33 + dVar29 * dVar29;
          local_198._0_4_ = SUB84(DAT_14c8464f0,0);
          local_198._4_4_ = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          if ((dVar9 != 1.0) || (NAN(dVar9))) {
            dVar30 = DAT_14c8464e0;
            uVar34 = (undefined4)local_198;
            uVar35 = local_198._4_4_;
            dVar3 = DAT_14c8464e8;
            if (9.99999993922529e-09 <= dVar9) {
              dVar3 = dVar29 * (1.0 / SQRT(dVar9));
              dVar30 = dVar33 * (1.0 / SQRT(dVar9));
              uVar34 = 0;
              uVar35 = 0;
            }
          }
          else {
            uVar10 = -(ulonglong)(dVar11 == 0.0) & (ulonglong)dVar11;
            uVar34 = (undefined4)uVar10;
            uVar35 = (undefined4)(uVar10 >> 0x20);
            dVar30 = dVar33;
            dVar3 = dVar29;
          }
          fVar28 = (float)SQRT(dVar11 * dVar11 + dVar9);
          if ((uVar18 != 0xffffffff) && (10000.0 < fVar28)) break;
          if (fVar36 <= fVar28) {
            uVar13 = (uint)uVar22;
            if (-1 < (int)uVar18) {
              uVar13 = uVar18;
            }
            uVar18 = uVar13;
            if (!bVar7) {
              dVar33 = dVar30 * 0.0 + dVar3 * -0.0;
              dVar29 = (double)CONCAT44(uVar35,uVar34) * 0.0;
              dVar11 = dVar3 - dVar29;
              dVar29 = dVar29 - dVar30;
              dVar9 = dVar33 * dVar33 + dVar11 * dVar11 + dVar29 * dVar29;
              if ((dVar9 != 1.0) || (NAN(dVar9))) {
                dVar4 = DAT_14c8464e8;
                dVar12 = DAT_14c8464e0;
                if (9.99999993922529e-09 <= dVar9) {
                  dVar9 = 1.0 / SQRT(dVar9);
                  dVar33 = dVar33 * dVar9;
                  dVar29 = dVar29 * dVar9;
                  dVar11 = dVar11 * dVar9;
                  goto LAB_148848c03;
                }
              }
              else {
LAB_148848c03:
                local_198._0_4_ = SUB84(dVar33,0);
                local_198._4_4_ = (undefined4)((ulonglong)dVar33 >> 0x20);
                dVar4 = dVar29;
                dVar12 = dVar11;
              }
              local_180 = *(float *)((longlong)&DAT_149935368 +
                                    (ulonglong)
                                    (0.0 <= (float)((double)CONCAT44(local_198._4_4_,
                                                                     (undefined4)local_198) *
                                                    (double)CONCAT44(uVar26,uVar24) +
                                                   dVar12 * dVar32 + dVar4 * local_1a8)) * 4);
              bVar7 = true;
            }
            if (0.7071 <= (float)((double)CONCAT44(uVar35,uVar34) * (double)CONCAT44(uVar26,uVar24)
                                 + dVar30 * dVar32 + dVar3 * local_1a8)) goto LAB_1488491b0;
          }
        }
        uVar22 = uVar22 + 1;
        pdVar17 = pdVar17 + 3;
      } while (uVar15 != uVar22);
      if (bVar7) {
        dVar9 = (double)(local_180 * 10.0) * 0.017453292519943295;
      }
      else {
        dVar9 = -0.17453292519943295;
      }
      if (-1 < (int)uVar18) {
        pdVar17 = (double *)((longlong)pvVar5 + (ulonglong)uVar18 * 0x18);
        dVar32 = pdVar17[1] - local_178;
        dVar31 = *pdVar17 - local_170;
        dVar29 = dVar31 * dVar31 + dVar32 * dVar32;
        if ((dVar29 != 1.0) || (NAN(dVar29))) {
          dVar11 = DAT_14c8464e0;
          if (9.99999993922529e-09 <= dVar29) {
            local_1b8 = dVar32 * (1.0 / SQRT(dVar29));
            dVar11 = dVar31 * (1.0 / SQRT(dVar29));
            local_198 = 0.0;
          }
        }
        else {
          local_198 = (double)(-(ulonglong)(pdVar17[2] - local_168 == 0.0) &
                              (ulonglong)(pdVar17[2] - local_168));
          dVar11 = dVar31;
          local_1b8 = dVar32;
        }
        uStack_190 = 0;
        if (uVar18 != 0) {
          if (uVar15 != uVar18) {
            memmove(pvVar5,pdVar17,(longlong)(int)(uVar15 - uVar18) * 0x18);
            uVar15 = *(uint *)(param_1 + 0xa8);
            uVar39 = SUB84(local_f8,0);
            uVar40 = (undefined4)((ulonglong)local_f8 >> 0x20);
            uVar25 = SUB84(local_108,0);
            uVar27 = (undefined4)((ulonglong)local_108 >> 0x20);
            uVar37 = SUB84(uStack_100,0);
            uVar38 = (undefined4)((ulonglong)uStack_100 >> 0x20);
          }
          *(uint *)(param_1 + 0xa8) = uVar15 - uVar18;
        }
        dVar31 = (double)CONCAT44(uVar40,uVar39);
        dVar29 = (double)CONCAT44(uVar38,uVar37);
        dVar33 = (double)CONCAT44(uVar27,uVar25);
        dVar32 = (double)local_1ac;
        lVar23 = 0;
        fVar36 = -1.0;
        iVar20 = 0;
        do {
          iVar19 = iVar20;
          dVar3 = param_2[2];
          dVar30 = param_2[1];
          dVar4 = *param_2;
          iVar20 = *(int *)(param_1 + 0xa8);
          *(uint *)(param_1 + 0xa8) = iVar20 + 1U;
          if (*(uint *)(param_1 + 0xac) < iVar20 + 1U) {
            FUN_1403e3958(plVar2,iVar20);
          }
          memmove((void *)(*plVar2 + lVar23 + 0x18),(void *)(*plVar2 + lVar23),
                  (ulonglong)(uint)(iVar20 + iVar19) * 0x18);
          lVar6 = *plVar2;
          *(double *)(lVar6 + lVar23) = dVar33 * dVar32 + dVar4;
          *(double *)(lVar6 + 8 + lVar23) = dVar29 * dVar32 + dVar30;
          *(double *)(lVar6 + 0x10 + lVar23) = dVar31 * dVar32 + dVar3;
          FUN_140ccff96(&local_108,&local_160,dVar9,&local_128);
          dVar30 = (double)CONCAT44(uStack_15c,local_160);
          dVar4 = (double)CONCAT44(uStack_154,uStack_158);
          dVar3 = local_150 * local_150 + dVar30 * dVar30 + dVar4 * dVar4;
          if (((dVar3 != 1.0) || (dVar31 = local_150, dVar29 = dVar4, dVar33 = dVar30, NAN(dVar3)))
             && (dVar31 = DAT_14c8464f0, dVar29 = DAT_14c8464e8, dVar33 = DAT_14c8464e0,
                9.99999993922529e-09 <= dVar3)) {
            dVar33 = 1.0 / SQRT(dVar3);
            dVar31 = local_150 * dVar33;
            dVar29 = dVar4 * dVar33;
            dVar33 = dVar30 * dVar33;
          }
          dVar3 = dVar33 * dVar33 + dVar29 * dVar29;
          if ((dVar3 != 1.0) || (NAN(dVar3))) {
            if (9.99999993922529e-09 <= dVar3) {
              dVar30 = dVar29 * (1.0 / SQRT(dVar3));
              dVar3 = (1.0 / SQRT(dVar3)) * dVar33;
              uVar25 = 0;
              uVar27 = 0;
            }
            else {
              uVar25 = SUB84(DAT_14c8464f0,0);
              uVar27 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              dVar30 = DAT_14c8464e8;
              dVar3 = DAT_14c8464e0;
            }
          }
          else {
            uVar22 = -(ulonglong)(dVar31 == 0.0) & (ulonglong)dVar31;
            uVar25 = (undefined4)uVar22;
            uVar27 = (undefined4)(uVar22 >> 0x20);
            dVar30 = dVar29;
            dVar3 = dVar33;
          }
          fVar28 = (float)((double)CONCAT44(uVar27,uVar25) * local_198 +
                          dVar3 * dVar11 + dVar30 * local_1b8);
          lVar23 = lVar23 + 0x18;
          iVar20 = iVar19 + -1;
          bVar7 = fVar36 < fVar28;
          fVar36 = fVar28;
          local_108 = dVar33;
          uStack_100 = dVar29;
          local_f8 = dVar31;
        } while (bVar7);
        uVar15 = 1 - iVar20;
        dVar3 = local_198 * dVar32;
        dVar33 = local_1b8 * dVar32;
        dVar9 = param_2[2];
        dVar31 = param_2[1];
        dVar29 = *param_2;
        iVar16 = *(int *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = iVar16 + 1U;
        if (*(uint *)(param_1 + 0xac) < iVar16 + 1U) {
          FUN_1403e3958(plVar2,iVar16);
        }
        lVar6 = (ulonglong)(uint)-iVar20 * 0x18;
        memmove((void *)(*(longlong *)(param_1 + 0xa0) + lVar6 + 0x18),
                (void *)(*(longlong *)(param_1 + 0xa0) + lVar6),
                (ulonglong)(uint)(iVar16 + iVar20) * 0x18);
        lVar23 = *(longlong *)(param_1 + 0xa0);
        *(double *)(lVar23 + lVar6) = dVar11 * dVar32 + dVar29;
        *(double *)(lVar23 + 8 + lVar6) = dVar33 + dVar31;
        *(double *)(lVar23 + 0x10 + lVar6) = dVar3 + dVar9;
        iVar16 = *(int *)(param_1 + 0xa8);
        if ((int)uVar15 < iVar16 + -1) {
          uVar22 = (ulonglong)uVar15;
          do {
            lVar23 = *plVar2;
            dVar9 = *(double *)(lVar23 + 0x10 + uVar22 * 0x18) - param_2[2];
            dVar31 = *(double *)(lVar23 + 8 + uVar22 * 0x18) - param_2[1];
            dVar32 = *(double *)(lVar23 + uVar22 * 0x18) - *param_2;
            if (local_1ac <= (float)SQRT(dVar9 * dVar9 + dVar32 * dVar32 + dVar31 * dVar31)) break;
            iVar21 = iVar16;
            if (iVar16 + iVar20 != 2) {
              pvVar5 = (void *)(lVar23 + uVar22 * 0x18);
              memmove(pvVar5,(void *)((longlong)pvVar5 + 0x18),
                      (longlong)(iVar16 + iVar19 + -3) * 0x18);
              iVar21 = *(int *)(param_1 + 0xa8);
            }
            iVar16 = iVar21 + -1;
            *(int *)(param_1 + 0xa8) = iVar16;
          } while ((int)uVar15 < iVar21 + -2);
        }
      }
    }
  }
LAB_1488491b0:
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14884926c FUN_14884926c body=136 status=ok
// SIG undefined FUN_14884926c(void)

undefined8 FUN_14884926c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  double dVar9;
  
  fVar3 = 0.0;
  uVar4 = 0;
  if (1 < (longlong)(int)param_2[1]) {
    lVar1 = *param_2;
    lVar2 = 0x18;
    fVar3 = 0.0;
    uVar4 = 0;
    do {
      dVar6 = *(double *)(lVar1 + -0x18 + lVar2) - *(double *)(lVar1 + lVar2);
      dVar9 = *(double *)(lVar1 + -0x10 + lVar2) - *(double *)(lVar1 + 8 + lVar2);
      dVar7 = *(double *)(lVar1 + -8 + lVar2) - *(double *)(lVar1 + 0x10 + lVar2);
      dVar6 = SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar6 * dVar6);
      uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
      fVar5 = (float)dVar6 + fVar3;
      if ((0.0 < *(float *)(param_1 + 0xb0)) && (*(float *)(param_1 + 0xb0) < fVar5)) break;
      lVar2 = lVar2 + 0x18;
      fVar3 = fVar5;
      uVar4 = uVar8;
    } while ((longlong)(int)param_2[1] * 0x18 != lVar2);
  }
  return CONCAT44(uVar4,fVar3);
}



// FUNCTION 1488492f4 FUN_1488492f4 body=99 status=ok
// SIG undefined FUN_1488492f4(void)

void FUN_1488492f4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403e3958(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x18 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x18
           );
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 148849358 FUN_148849358 body=145 status=ok
// SIG undefined FUN_148849358(void)

void FUN_148849358(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_2 != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x14);
    cVar2 = FUN_144729dda(puVar1);
    if (cVar2 != '\0') {
      plVar3 = (longlong *)FUN_14479d2ce(puVar1);
      (**(code **)(*plVar3 + 0xa68))(plVar3);
      plVar3 = (longlong *)FUN_14479d2ce(puVar1);
      (**(code **)(*plVar3 + 0xa48))(plVar3);
      *puVar1 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1447a8aa0(param_1 + 0x20,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1447a8aa0(param_1 + 0x30,0);
  }
  *(undefined8 *)(param_1 + 0x44) = 0xbf80000000000000;
  return;
}



// FUNCTION 1488493ea FUN_1488493ea body=77 status=ok
// SIG undefined FUN_1488493ea(void)

void FUN_1488493ea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_148849358(param_1,0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014884942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148849438 FUN_148849438 body=104 status=ok
// SIG undefined FUN_148849438(void)

void FUN_148849438(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148849494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1488494a0 FUN_1488494a0 body=124 status=ok
// SIG undefined FUN_1488494a0(void)

undefined4 * FUN_1488494a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_1[4] = param_2[4];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  uVar3 = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_148851c24(param_1 + 10,iVar1,0);
    FUN_148851c96(*(undefined8 *)(param_1 + 10),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 14884951c FUN_14884951c body=110 status=ok
// SIG undefined FUN_14884951c(void)

undefined8 FUN_14884951c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  FUN_148851db8(param_2,lVar3 + 0x80);
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
  return param_2;
}



// FUNCTION 14884958a FUN_14884958a body=22 status=ok
// SIG undefined FUN_14884958a(void)

void FUN_14884958a(longlong param_1)

{
  if ((*(int *)(param_1 + 0x48) != 0) || (*(int *)(param_1 + 0x58) != 0)) {
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}



// FUNCTION 1488495a0 FUN_1488495a0 body=62 status=ok
// SIG undefined FUN_1488495a0(void)

longlong FUN_1488495a0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148851eca(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xe8 + *param_1;
  thunk_FUN_148852298(lVar2);
  return lVar2;
}



// FUNCTION 1488495de FUN_1488495de body=139 status=ok
// SIG undefined FUN_1488495de(void)

bool FUN_1488495de(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    bVar10 = false;
  }
  else {
    plVar8 = (longlong *)*param_1;
    plVar6 = plVar8 + (longlong)(int)param_1[1] * 2;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 == (longlong *)0x0) {
LAB_148849640:
        lVar9 = *param_2;
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_148849640;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        lVar7 = *plVar8;
        lVar9 = *param_2;
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
      bVar10 = lVar7 == lVar9;
    } while ((!bVar10) && (plVar8 = plVar8 + 2, plVar8 != plVar6));
  }
  return bVar10;
}



// FUNCTION 14884966a FUN_14884966a body=38 status=ok
// SIG undefined FUN_14884966a(void)

undefined8 FUN_14884966a(undefined8 param_1,int param_2)

{
  FUN_140c72088();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849696 FUN_148849696 body=38 status=ok
// SIG undefined FUN_148849696(void)

undefined8 FUN_148849696(undefined8 param_1,int param_2)

{
  FUN_14106c02c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488496bc FUN_1488496bc body=38 status=ok
// SIG undefined FUN_1488496bc(void)

undefined8 FUN_1488496bc(undefined8 param_1,int param_2)

{
  FUN_148851594();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488496e2 FUN_1488496e2 body=38 status=ok
// SIG undefined FUN_1488496e2(void)

undefined8 FUN_1488496e2(undefined8 param_1,int param_2)

{
  FUN_14106cf6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849708 FUN_148849708 body=38 status=ok
// SIG undefined FUN_148849708(void)

undefined8 FUN_148849708(undefined8 param_1,int param_2)

{
  FUN_14106cf6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14884972e FUN_14884972e body=72 status=ok
// SIG undefined FUN_14884972e(void)

undefined8 * FUN_14884972e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b400be0;
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14106cf6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849776 FUN_148849776 body=38 status=ok
// SIG undefined FUN_148849776(void)

undefined8 FUN_148849776(undefined8 param_1,int param_2)

{
  FUN_1488528e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488497a0 FUN_1488497a0 body=38 status=ok
// SIG undefined FUN_1488497a0(void)

undefined8 FUN_1488497a0(undefined8 param_1,int param_2)

{
  FUN_14156a562();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488497c6 FUN_1488497c6 body=38 status=ok
// SIG undefined FUN_1488497c6(void)

undefined8 FUN_1488497c6(undefined8 param_1,int param_2)

{
  FUN_140d59dc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488497f0 FUN_1488497f0 body=57 status=ok
// SIG undefined FUN_1488497f0(void)

undefined8 * FUN_1488497f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b400280;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849854 FUN_148849854 body=29 status=ok
// SIG undefined FUN_148849854(void)

undefined8 FUN_148849854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849888 FUN_148849888 body=34 status=ok
// SIG undefined FUN_148849888(void)

undefined8 FUN_148849888(longlong param_1,undefined8 param_2)

{
  FUN_1488ff73c(*(longlong *)(param_1 + 8) + 0x118);
  return param_2;
}



// FUNCTION 1488498bc FUN_1488498bc body=63 status=ok
// SIG undefined FUN_1488498bc(void)

void FUN_1488498bc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x148);
  FUN_143d26f42(param_2,uVar1);
  FUN_143d26f34(param_2,*(longlong *)(param_1 + 8) + 0x10);
  return;
}



// FUNCTION 148849912 FUN_148849912 body=29 status=ok
// SIG undefined FUN_148849912(void)

undefined8 FUN_148849912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849958 FUN_148849958 body=60 status=ok
// SIG undefined FUN_148849958(void)

undefined8 * FUN_148849958(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4003a0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849994 FUN_148849994 body=48 status=ok
// SIG undefined FUN_148849994(void)

void FUN_148849994(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488499c4 FUN_1488499c4 body=60 status=ok
// SIG undefined FUN_1488499c4(void)

undefined8 * FUN_1488499c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4003d0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849a00 FUN_148849a00 body=48 status=ok
// SIG undefined FUN_148849a00(void)

void FUN_148849a00(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148849a30 FUN_148849a30 body=60 status=ok
// SIG undefined FUN_148849a30(void)

undefined8 * FUN_148849a30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4003d0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849aac FUN_148849aac body=229 status=ok
// SIG undefined FUN_148849aac(void)

undefined8 * FUN_148849aac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 0x18);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 148849b92 FUN_148849b92 body=120 status=ok
// SIG undefined FUN_148849b92(void)

undefined8 * FUN_148849b92(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  FUN_1405b70a4(param_1 + 4,param_2 + 4);
  FUN_1405b70a4(param_1 + 6,param_2 + 6);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 148849c0a FUN_148849c0a body=110 status=ok
// SIG undefined FUN_148849c0a(void)

undefined8 * FUN_148849c0a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)((longlong)param_1 + 7) = *(undefined4 *)((longlong)param_2 + 7);
  *param_1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  if (param_1 != param_2) {
    param_1[3] = param_2[3];
    param_2[3] = 0;
    plVar2 = (longlong *)param_1[4];
    param_1[4] = param_2[4];
    param_2[4] = 0;
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
  FUN_148849c78(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 148849c78 FUN_148849c78 body=78 status=ok
// SIG undefined FUN_148849c78(void)

longlong * FUN_148849c78(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141506615(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 148849cc6 FUN_148849cc6 body=89 status=ok
// SIG undefined FUN_148849cc6(void)

void FUN_148849cc6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140d2ef74(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148849d20 FUN_148849d20 body=62 status=ok
// SIG undefined FUN_148849d20(void)

void FUN_148849d20(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148849d5e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148849d5e FUN_148849d5e body=93 status=ok
// SIG undefined FUN_148849d5e(void)

ulonglong FUN_148849d5e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148849dbc FUN_148849dbc body=114 status=ok
// SIG undefined FUN_148849dbc(void)

void FUN_148849dbc(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148849e2e FUN_148849e2e body=114 status=ok
// SIG undefined FUN_148849e2e(void)

void FUN_148849e2e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148849ea0 FUN_148849ea0 body=128 status=ok
// SIG undefined FUN_148849ea0(void)

void FUN_148849ea0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7c620;
  if (DAT_14cb7c654 != 0) {
    *(int *)(DAT_14cb7c620 + (longlong)DAT_14cb7c650 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7c654) {
    iVar4 = DAT_14cb7c650;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb7c654 = DAT_14cb7c654 + 1;
  puVar3 = &DAT_14cb7c630;
  if (DAT_14cb7c640 != (undefined *)0x0) {
    puVar3 = DAT_14cb7c640;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7c650 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148849f20 FUN_148849f20 body=31 status=ok
// SIG undefined FUN_148849f20(void)

undefined8 FUN_148849f20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148849f5a FUN_148849f5a body=93 status=ok
// SIG undefined FUN_148849f5a(void)

void FUN_148849f5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b400470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


