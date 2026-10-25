// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b021c0 FUN_146b021c0 body=126 status=ok
// SIG undefined FUN_146b021c0(void)

void FUN_146b021c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f680;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b0222f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0224c FUN_146b0224c body=21 status=ok
// SIG undefined FUN_146b0224c(void)

undefined8 FUN_146b0224c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b02270 FUN_146b02270 body=386 status=ok
// SIG undefined FUN_146b02270(void)

longlong * FUN_146b02270(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b02381:
    *puVar5 = &PTR_LAB_149f05a70;
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
    *puVar5 = &PTR_FUN_149f1f920;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b02381;
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
    *puVar5 = &PTR_LAB_149f05a70;
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
    *puVar5 = &PTR_FUN_149f1f920;
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



// FUNCTION 146b023f2 FUN_146b023f2 body=64 status=ok
// SIG undefined FUN_146b023f2(void)

undefined8 * FUN_146b023f2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1f920;
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



// FUNCTION 146b02436 FUN_146b02436 body=81 status=ok
// SIG undefined FUN_146b02436(void)

undefined8 FUN_146b02436(longlong param_1)

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



// FUNCTION 146b0248e FUN_146b0248e body=89 status=ok
// SIG undefined FUN_146b0248e(void)

bool FUN_146b0248e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b024d9;
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
LAB_146b024d9:
  return lVar6 == param_2;
}



// FUNCTION 146b02504 FUN_146b02504 body=118 status=ok
// SIG undefined FUN_146b02504(void)

void FUN_146b02504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f920;
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



// FUNCTION 146b0257a FUN_146b0257a body=118 status=ok
// SIG undefined FUN_146b0257a(void)

void FUN_146b0257a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f920;
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



// FUNCTION 146b025f0 FUN_146b025f0 body=156 status=ok
// SIG undefined FUN_146b025f0(void)

void FUN_146b025f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f920;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0267c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0268c FUN_146b0268c body=105 status=ok
// SIG undefined FUN_146b0268c(void)

undefined8 FUN_146b0268c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146b026e0:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146b026e0;
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
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 146b026f6 FUN_146b026f6 body=162 status=ok
// SIG undefined FUN_146b026f6(void)

ulonglong FUN_146b026f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146b02776:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b02776;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146b0279a FUN_146b0279a body=64 status=ok
// SIG undefined FUN_146b0279a(void)

undefined8 * FUN_146b0279a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1f990;
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



// FUNCTION 146b027de FUN_146b027de body=81 status=ok
// SIG undefined FUN_146b027de(void)

undefined8 FUN_146b027de(longlong param_1)

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



// FUNCTION 146b02836 FUN_146b02836 body=89 status=ok
// SIG undefined FUN_146b02836(void)

bool FUN_146b02836(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b02881;
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
LAB_146b02881:
  return lVar6 == param_2;
}



// FUNCTION 146b028ac FUN_146b028ac body=118 status=ok
// SIG undefined FUN_146b028ac(void)

void FUN_146b028ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f990;
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



// FUNCTION 146b02922 FUN_146b02922 body=118 status=ok
// SIG undefined FUN_146b02922(void)

void FUN_146b02922(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f990;
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



// FUNCTION 146b02998 FUN_146b02998 body=156 status=ok
// SIG undefined FUN_146b02998(void)

void FUN_146b02998(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f990;
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
                    /* WARNING: Could not recover jumptable at 0x000146b02a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b02a34 FUN_146b02a34 body=100 status=ok
// SIG undefined FUN_146b02a34(void)

void FUN_146b02a34(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b02a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b02a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146b02a98 FUN_146b02a98 body=100 status=ok
// SIG undefined FUN_146b02a98(void)

ulonglong FUN_146b02a98(longlong param_1)

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
LAB_146b02af1:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b02af1;
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



// FUNCTION 146b02afc FUN_146b02afc body=64 status=ok
// SIG undefined FUN_146b02afc(void)

undefined8 * FUN_146b02afc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fa00;
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



// FUNCTION 146b02b40 FUN_146b02b40 body=81 status=ok
// SIG undefined FUN_146b02b40(void)

undefined8 FUN_146b02b40(longlong param_1)

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



// FUNCTION 146b02b98 FUN_146b02b98 body=89 status=ok
// SIG undefined FUN_146b02b98(void)

bool FUN_146b02b98(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b02be3;
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
LAB_146b02be3:
  return lVar6 == param_2;
}



// FUNCTION 146b02c0e FUN_146b02c0e body=118 status=ok
// SIG undefined FUN_146b02c0e(void)

void FUN_146b02c0e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149f1fa00;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = uVar2;
  return;
}



// FUNCTION 146b02c84 FUN_146b02c84 body=118 status=ok
// SIG undefined FUN_146b02c84(void)

void FUN_146b02c84(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149f1fa00;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = uVar2;
  return;
}



// FUNCTION 146b02cfa FUN_146b02cfa body=156 status=ok
// SIG undefined FUN_146b02cfa(void)

void FUN_146b02cfa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fa00;
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
                    /* WARNING: Could not recover jumptable at 0x000146b02d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b02d96 FUN_146b02d96 body=100 status=ok
// SIG undefined FUN_146b02d96(void)

ulonglong FUN_146b02d96(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b02df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146b02dfa FUN_146b02dfa body=100 status=ok
// SIG undefined FUN_146b02dfa(void)

ulonglong FUN_146b02dfa(longlong param_1)

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
LAB_146b02e53:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b02e53;
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



// FUNCTION 146b02e5e FUN_146b02e5e body=64 status=ok
// SIG undefined FUN_146b02e5e(void)

undefined8 * FUN_146b02e5e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fa70;
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



// FUNCTION 146b02ea2 FUN_146b02ea2 body=81 status=ok
// SIG undefined FUN_146b02ea2(void)

undefined8 FUN_146b02ea2(longlong param_1)

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



// FUNCTION 146b02efa FUN_146b02efa body=89 status=ok
// SIG undefined FUN_146b02efa(void)

bool FUN_146b02efa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b02f45;
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
LAB_146b02f45:
  return lVar6 == param_2;
}



// FUNCTION 146b02f70 FUN_146b02f70 body=118 status=ok
// SIG undefined FUN_146b02f70(void)

void FUN_146b02f70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fa70;
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



// FUNCTION 146b02fe6 FUN_146b02fe6 body=118 status=ok
// SIG undefined FUN_146b02fe6(void)

void FUN_146b02fe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fa70;
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



// FUNCTION 146b0305c FUN_146b0305c body=156 status=ok
// SIG undefined FUN_146b0305c(void)

void FUN_146b0305c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fa70;
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
                    /* WARNING: Could not recover jumptable at 0x000146b030e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b030f8 FUN_146b030f8 body=100 status=ok
// SIG undefined FUN_146b030f8(void)

ulonglong FUN_146b030f8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b03158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146b0315c FUN_146b0315c body=100 status=ok
// SIG undefined FUN_146b0315c(void)

ulonglong FUN_146b0315c(longlong param_1)

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
LAB_146b031b5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b031b5;
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



// FUNCTION 146b031c0 FUN_146b031c0 body=64 status=ok
// SIG undefined FUN_146b031c0(void)

undefined8 * FUN_146b031c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fae0;
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



// FUNCTION 146b03204 FUN_146b03204 body=81 status=ok
// SIG undefined FUN_146b03204(void)

undefined8 FUN_146b03204(longlong param_1)

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



// FUNCTION 146b0325c FUN_146b0325c body=89 status=ok
// SIG undefined FUN_146b0325c(void)

bool FUN_146b0325c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b032a7;
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
LAB_146b032a7:
  return lVar6 == param_2;
}



// FUNCTION 146b032d2 FUN_146b032d2 body=118 status=ok
// SIG undefined FUN_146b032d2(void)

void FUN_146b032d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05b50;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f1fae0;
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



// FUNCTION 146b03348 FUN_146b03348 body=118 status=ok
// SIG undefined FUN_146b03348(void)

void FUN_146b03348(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05b50;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f1fae0;
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



// FUNCTION 146b033be FUN_146b033be body=156 status=ok
// SIG undefined FUN_146b033be(void)

void FUN_146b033be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05b50;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fae0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0344a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0345a FUN_146b0345a body=112 status=ok
// SIG undefined FUN_146b0345a(void)

void FUN_146b0345a(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000146b034ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b034c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 146b034ca FUN_146b034ca body=105 status=ok
// SIG undefined FUN_146b034ca(void)

ulonglong FUN_146b034ca(longlong param_1)

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
LAB_146b03528:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b03528;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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



// FUNCTION 146b03534 FUN_146b03534 body=64 status=ok
// SIG undefined FUN_146b03534(void)

undefined8 * FUN_146b03534(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fbc0;
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



// FUNCTION 146b03578 FUN_146b03578 body=81 status=ok
// SIG undefined FUN_146b03578(void)

undefined8 FUN_146b03578(longlong param_1)

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



// FUNCTION 146b035d0 FUN_146b035d0 body=89 status=ok
// SIG undefined FUN_146b035d0(void)

bool FUN_146b035d0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0361b;
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
LAB_146b0361b:
  return lVar6 == param_2;
}



// FUNCTION 146b03652 FUN_146b03652 body=118 status=ok
// SIG undefined FUN_146b03652(void)

void FUN_146b03652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1fc30;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f1fbc0;
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



// FUNCTION 146b036c8 FUN_146b036c8 body=118 status=ok
// SIG undefined FUN_146b036c8(void)

void FUN_146b036c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1fc30;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f1fbc0;
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



// FUNCTION 146b0373e FUN_146b0373e body=156 status=ok
// SIG undefined FUN_146b0373e(void)

void FUN_146b0373e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f1fc30;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fbc0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b037ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b037da FUN_146b037da body=118 status=ok
// SIG undefined FUN_146b037da(void)

undefined4 FUN_146b037da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146b0380f;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar3 = false;
  }
LAB_146b0380f:
  uVar6 = (**(code **)(param_1 + 0x28))
                    (*(int *)(param_1 + 0x30) + lVar7,*(undefined8 *)(param_1 + 8));
  if (!bVar3) {
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
  return uVar6;
}



// FUNCTION 146b03850 FUN_146b03850 body=105 status=ok
// SIG undefined FUN_146b03850(void)

ulonglong FUN_146b03850(longlong param_1)

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
LAB_146b038ae:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b038ae;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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



// FUNCTION 146b038bc FUN_146b038bc body=156 status=ok
// SIG undefined FUN_146b038bc(void)

bool FUN_146b038bc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146b039a2(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0395a FUN_146b0395a body=72 status=ok
// SIG undefined FUN_146b0395a(void)

bool FUN_146b0395a(char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_1400b73c8(param_2,param_1);
  cVar1 = *param_1;
  cVar2 = *param_3;
  if (cVar1 != cVar2) {
    *param_1 = cVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return cVar1 != cVar2;
}



// FUNCTION 146b039a2 FUN_146b039a2 body=169 status=ok
// SIG undefined FUN_146b039a2(void)

void FUN_146b039a2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f1fca0;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_146af7e0a(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b03a4c FUN_146b03a4c body=89 status=ok
// SIG undefined FUN_146b03a4c(void)

undefined1 * FUN_146b03a4c(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      cVar1 = (**(code **)(*plVar3 + 0x58))();
      if (**(char **)(param_1 + 0x18) != cVar1) {
        **(char **)(param_1 + 0x18) = cVar1;
        uVar2 = 1;
        goto LAB_146b03a8b;
      }
    }
  }
  uVar2 = 0;
LAB_146b03a8b:
  *param_2 = 0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 146b03ab2 FUN_146b03ab2 body=50 status=ok
// SIG undefined FUN_146b03ab2(void)

undefined8 * FUN_146b03ab2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146b03ae4 FUN_146b03ae4 body=42 status=ok
// SIG undefined FUN_146b03ae4(void)

longlong FUN_146b03ae4(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b03b0e FUN_146b03b0e body=90 status=ok
// SIG undefined FUN_146b03b0e(void)

int FUN_146b03b0e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146b03c5e(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_146b03bc8(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 146b03b68 FUN_146b03b68 body=95 status=ok
// SIG undefined FUN_146b03b68(void)

void FUN_146b03b68(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146b03bc8 FUN_146b03bc8 body=150 status=ok
// SIG undefined FUN_146b03bc8(void)

void FUN_146b03bc8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 146b03c5e FUN_146b03c5e body=132 status=ok
// SIG undefined FUN_146b03c5e(void)

void FUN_146b03c5e(longlong param_1,int param_2)

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



// FUNCTION 146b03ce4 FUN_146b03ce4 body=38 status=ok
// SIG undefined FUN_146b03ce4(void)

undefined8 FUN_146b03ce4(undefined8 param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b03d0a FUN_146b03d0a body=129 status=ok
// SIG undefined FUN_146b03d0a(void)

void FUN_146b03d0a(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146b03c5e(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_146b03bc8(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 146b03d8c FUN_146b03d8c body=53 status=ok
// SIG undefined FUN_146b03d8c(void)

void FUN_146b03d8c(undefined8 *param_1)

{
  FUN_146af7dd5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_146b03b68(param_1,0);
  return;
}



// FUNCTION 146b03dc2 FUN_146b03dc2 body=80 status=ok
// SIG undefined FUN_146b03dc2(void)

longlong * FUN_146b03dc2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146af7dd5(*param_1,(int)param_1[1]);
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



// FUNCTION 146b03e12 FUN_146b03e12 body=130 status=ok
// SIG undefined FUN_146b03e12(void)

void FUN_146b03e12(longlong *param_1,longlong *param_2)

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



// FUNCTION 146b03e96 FUN_146b03e96 body=329 status=ok
// SIG undefined FUN_146b03e96(void)

longlong * FUN_146b03e96(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x240,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f1fcd0;
  plVar4 = plVar3 + 2;
  FUN_146af25ae(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_146b04008(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146b03f73;
    param_1[1] = 0;
LAB_146b03f3b:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146b03f73;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146b03f73;
      goto LAB_146b03f3b;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b03f73;
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
LAB_146b03f73:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x230;
  FUN_140a52e78(*param_1,"SListPanel",".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",
                param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b03fe0 FUN_146b03fe0 body=9 status=ok
// SIG undefined FUN_146b03fe0(void)

void FUN_146b03fe0(longlong param_1)

{
  FUN_14290d7ea(param_1 + 0x10);
  return;
}



// FUNCTION 146b03fea FUN_146b03fea body=29 status=ok
// SIG undefined FUN_146b03fea(void)

undefined8 FUN_146b03fea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b04008 FUN_146b04008 body=167 status=ok
// SIG undefined FUN_146b04008(void)

void FUN_146b04008(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b04083;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b04083;
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
LAB_146b04083:
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
                    /* WARNING: Could not recover jumptable at 0x000146b040a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b040b0 FUN_146b040b0 body=386 status=ok
// SIG undefined FUN_146b040b0(void)

longlong * FUN_146b040b0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b041c1:
    *puVar5 = &PTR_LAB_149f0f120;
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
    *puVar5 = &PTR_FUN_149f1fcf0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b041c1;
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
    *puVar5 = &PTR_LAB_149f0f120;
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
    *puVar5 = &PTR_FUN_149f1fcf0;
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



// FUNCTION 146b04232 FUN_146b04232 body=64 status=ok
// SIG undefined FUN_146b04232(void)

undefined8 * FUN_146b04232(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fcf0;
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



// FUNCTION 146b04276 FUN_146b04276 body=81 status=ok
// SIG undefined FUN_146b04276(void)

undefined8 FUN_146b04276(longlong param_1)

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



// FUNCTION 146b042ce FUN_146b042ce body=89 status=ok
// SIG undefined FUN_146b042ce(void)

bool FUN_146b042ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b04319;
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
LAB_146b04319:
  return lVar6 == param_2;
}



// FUNCTION 146b04344 FUN_146b04344 body=118 status=ok
// SIG undefined FUN_146b04344(void)

void FUN_146b04344(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0f120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fcf0;
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



// FUNCTION 146b043ba FUN_146b043ba body=118 status=ok
// SIG undefined FUN_146b043ba(void)

void FUN_146b043ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0f120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fcf0;
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



// FUNCTION 146b04430 FUN_146b04430 body=156 status=ok
// SIG undefined FUN_146b04430(void)

void FUN_146b04430(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0f120;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fcf0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b044bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b044cc FUN_146b044cc body=100 status=ok
// SIG undefined FUN_146b044cc(void)

ulonglong FUN_146b044cc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b0452c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146b04530 FUN_146b04530 body=100 status=ok
// SIG undefined FUN_146b04530(void)

ulonglong FUN_146b04530(longlong param_1)

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
LAB_146b04589:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b04589;
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



// FUNCTION 146b04594 FUN_146b04594 body=64 status=ok
// SIG undefined FUN_146b04594(void)

undefined8 * FUN_146b04594(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fd60;
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



// FUNCTION 146b045d8 FUN_146b045d8 body=81 status=ok
// SIG undefined FUN_146b045d8(void)

undefined8 FUN_146b045d8(longlong param_1)

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



// FUNCTION 146b04630 FUN_146b04630 body=89 status=ok
// SIG undefined FUN_146b04630(void)

bool FUN_146b04630(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0467b;
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
LAB_146b0467b:
  return lVar6 == param_2;
}



// FUNCTION 146b046a6 FUN_146b046a6 body=118 status=ok
// SIG undefined FUN_146b046a6(void)

void FUN_146b046a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fd60;
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



// FUNCTION 146b0471c FUN_146b0471c body=118 status=ok
// SIG undefined FUN_146b0471c(void)

void FUN_146b0471c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fd60;
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



// FUNCTION 146b04792 FUN_146b04792 body=156 status=ok
// SIG undefined FUN_146b04792(void)

void FUN_146b04792(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fd60;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0481e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0482e FUN_146b0482e body=103 status=ok
// SIG undefined FUN_146b0482e(void)

void FUN_146b0482e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b0487a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b0488b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146b04896 FUN_146b04896 body=100 status=ok
// SIG undefined FUN_146b04896(void)

ulonglong FUN_146b04896(longlong param_1)

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
LAB_146b048ef:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b048ef;
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



// FUNCTION 146b048fa FUN_146b048fa body=64 status=ok
// SIG undefined FUN_146b048fa(void)

undefined8 * FUN_146b048fa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1fdd0;
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



// FUNCTION 146b0493e FUN_146b0493e body=81 status=ok
// SIG undefined FUN_146b0493e(void)

undefined8 FUN_146b0493e(longlong param_1)

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



// FUNCTION 146b04996 FUN_146b04996 body=89 status=ok
// SIG undefined FUN_146b04996(void)

bool FUN_146b04996(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b049e1;
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
LAB_146b049e1:
  return lVar6 == param_2;
}



// FUNCTION 146b04a0c FUN_146b04a0c body=118 status=ok
// SIG undefined FUN_146b04a0c(void)

void FUN_146b04a0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fdd0;
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



// FUNCTION 146b04a82 FUN_146b04a82 body=118 status=ok
// SIG undefined FUN_146b04a82(void)

void FUN_146b04a82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1fdd0;
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



// FUNCTION 146b04af8 FUN_146b04af8 body=156 status=ok
// SIG undefined FUN_146b04af8(void)

void FUN_146b04af8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fdd0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b04b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b04b94 FUN_146b04b94 body=103 status=ok
// SIG undefined FUN_146b04b94(void)

ulonglong FUN_146b04b94(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b04bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146b04bfc FUN_146b04bfc body=100 status=ok
// SIG undefined FUN_146b04bfc(void)

ulonglong FUN_146b04bfc(longlong param_1)

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
LAB_146b04c55:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b04c55;
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



// FUNCTION 146b04c60 FUN_146b04c60 body=62 status=ok
// SIG undefined FUN_146b04c60(void)

void FUN_146b04c60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[3] = DAT_14c8463f0;
  param_1[4] = uVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 146b04c9e FUN_146b04c9e body=78 status=ok
// SIG undefined FUN_146b04c9e(void)

void FUN_146b04c9e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_146b05622(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b04ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146b04cec FUN_146b04cec body=132 status=ok
// SIG undefined FUN_146b04cec(void)

void FUN_146b04cec(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_146b05b9c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146b04d70 FUN_146b04d70 body=472 status=ok
// SIG undefined FUN_146b04d70(void)

undefined4 * FUN_146b04d70(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x10) == DAT_14c872be0) {
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x24);
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
  }
  uVar7 = (undefined4)DAT_14c8463f0;
  uVar8 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar6 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
  plVar1 = (longlong *)(param_1 + 0x28);
  dVar2 = (double)(param_1 + 0x38);
  local_90 = 2.12199579096527e-314;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  uStack_88 = dVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar4 = *(int *)(param_1 + 0x50);
  }
  uStack_98 = CONCAT44(uStack_74,uStack_78);
  local_a0 = local_80;
  iStack_9c = iStack_7c;
  local_b0 = (undefined4)local_90;
  uStack_ac = local_90._4_4_;
  uStack_a8 = (undefined4)uStack_88;
  uStack_a4 = uStack_88._4_4_;
  local_b8 = plVar1;
  if ((iStack_7c != iVar4) || (uStack_88 != dVar2)) {
    do {
      lVar3 = *(longlong *)(*local_b8 + (longlong)iStack_9c * 0x10);
      if (*(char *)(lVar3 + 0x39) != DAT_14c96b1e1) {
        FUN_14171f99a(*(undefined8 *)(lVar3 + 0x208));
        FUN_146b04f4a(lVar3,&local_90);
        if ((((local_90 != 0.0) || (NAN(local_90))) || (uStack_88 != 0.0)) || (NAN(uStack_88))) {
          if ((double)CONCAT44(uVar8,uVar7) <= local_90) {
            uVar7 = SUB84(local_90,0);
            uVar8 = (undefined4)((ulonglong)local_90 >> 0x20);
          }
          if ((double)CONCAT44(uVar6,uVar5) <= uStack_88) {
            uVar6 = (undefined4)((ulonglong)uStack_88 >> 0x20);
            uVar5 = SUB84(uStack_88,0);
          }
        }
      }
      local_a0 = local_a0 & ~uStack_ac;
      FUN_1449c0562(&local_b0);
    } while (local_b8 != plVar1 ||
             ((double)CONCAT44(uStack_a4,uStack_a8) != dVar2 || iStack_9c != iVar4));
  }
  *(longlong *)(param_1 + 0x10) = DAT_14c872be0;
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar8,uVar7);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar6,uVar5);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b04f4a FUN_146b04f4a body=191 status=ok
// SIG undefined FUN_146b04f4a(void)

double * FUN_146b04f4a(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  ulonglong local_40;
  
  uVar7 = DAT_14c8463f8._4_4_;
  uVar6 = (undefined4)DAT_14c8463f8;
  uVar5 = DAT_14c8463f0._4_4_;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x39) != DAT_14c96b1e1) {
    fVar1 = *(float *)(param_1 + 0x218);
    fVar2 = *(float *)(param_1 + 0x21c);
    fVar3 = *(float *)(param_1 + 0x224);
    fVar4 = *(float *)(param_1 + 0x220);
    FUN_144b013c4(*(longlong *)(param_1 + 0x208),&local_48);
    *param_2 = (double)(fVar1 + fVar4 + local_48);
    param_2[1] = (double)(fVar2 + fVar3 + local_44);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b0500a FUN_146b0500a body=46 status=ok
// SIG undefined FUN_146b0500a(void)

undefined8 * FUN_146b0500a(undefined8 *param_1)

{
  FUN_140a53f9a();
  *param_1 = &PTR_FUN_149f20530;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x80;
  return param_1;
}



// FUNCTION 146b05038 FUN_146b05038 body=93 status=ok
// SIG undefined FUN_146b05038(void)

void FUN_146b05038(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f20530;
  FUN_146b04cec(param_1[0x4a] + 0x28,param_1);
  plVar3 = (longlong *)param_1[0x4b];
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
  FUN_1414c34ce(param_1);
  return;
}



// FUNCTION 146b05096 FUN_146b05096 body=1346 status=ok
// SIG undefined FUN_146b05096(void)

void FUN_146b05096(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  undefined1 local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_390;
  undefined1 local_38c;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_360;
  undefined1 local_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_348;
  undefined1 local_344;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined1 local_2ec [4];
  longlong local_2e8 [53];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128;
  undefined1 auStack_120 [16];
  undefined8 local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 auStack_f8 [16];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 auStack_e0 [16];
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 auStack_c8 [16];
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 auStack_98 [16];
  undefined4 local_88;
  undefined1 local_84;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined1 local_54;
  undefined1 auStack_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  uVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = uVar4;
    plVar7 = *(longlong **)(param_1 + 600);
    if (plVar7 == (longlong *)0x0) goto LAB_146b050ea;
    *(undefined8 *)(param_1 + 600) = 0;
LAB_146b0559b:
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146b050ea;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x250) = uVar4;
    plVar7 = *(longlong **)(param_1 + 600);
    if (plVar5 != plVar7) {
      *(longlong **)(param_1 + 600) = plVar5;
      if (plVar7 == (longlong *)0x0) goto LAB_146b050ea;
      goto LAB_146b0559b;
    }
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_146b050ea;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar7 = plVar5;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_146b050ea:
  local_2e8[0] = param_1;
  FUN_146b056b0(*(longlong *)(param_1 + 0x250) + 0x28,local_2ec,local_2e8);
  FUN_140a53a96(local_2e8);
  local_140 = *(undefined4 *)(param_2 + 0x1a8);
  local_13c = *(undefined4 *)(param_2 + 0x1ac);
  local_308 = *(undefined1 *)(param_2 + 0x1c0);
  local_318 = *(undefined4 *)(param_2 + 0x1b0);
  uStack_314 = *(undefined4 *)(param_2 + 0x1b4);
  uStack_310 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_30c = *(undefined4 *)(param_2 + 0x1bc);
  local_300 = 0;
  local_2f8 = 0;
  FUN_140a58be0(&local_300,param_2 + 0x1c8);
  local_128 = local_308;
  local_138 = local_318;
  uStack_134 = uStack_314;
  uStack_130 = uStack_310;
  uStack_12c = uStack_30c;
  FUN_144a450dc(auStack_120,&local_300);
  FUN_1449db362(&local_300);
  local_32c = *(undefined1 *)(param_2 + 0x1ec);
  local_330 = *(undefined4 *)(param_2 + 0x1e8);
  local_328 = 0;
  local_320 = 0;
  FUN_140a58922(&local_328,param_2 + 0x1f0);
  local_fc = local_32c;
  local_100 = local_330;
  FUN_144a450dc(auStack_f8,&local_328);
  FUN_1449db362(&local_328);
  local_344 = *(undefined1 *)(param_2 + 0x204);
  local_348 = *(undefined4 *)(param_2 + 0x200);
  local_340 = 0;
  local_338 = 0;
  FUN_140a58922(&local_340,param_2 + 0x208);
  local_e4 = local_344;
  local_e8 = local_348;
  FUN_144a450dc(auStack_e0,&local_340);
  FUN_1449db362(&local_340);
  local_35c = *(undefined1 *)(param_2 + 0x21c);
  local_360 = *(undefined4 *)(param_2 + 0x218);
  local_358 = 0;
  local_350 = 0;
  FUN_140a58922(&local_358,param_2 + 0x220);
  local_cc = local_35c;
  local_d0 = local_360;
  FUN_144a450dc(auStack_c8,&local_358);
  FUN_1449db362(&local_358);
  local_374 = *(undefined1 *)(param_2 + 0x234);
  local_378 = *(undefined4 *)(param_2 + 0x230);
  local_370 = 0;
  local_368 = 0;
  FUN_140a58922(&local_370,param_2 + 0x238);
  local_b4 = local_374;
  local_b8 = local_378;
  FUN_144a450dc(auStack_b0,&local_370);
  FUN_1449db362(&local_370);
  local_38c = *(undefined1 *)(param_2 + 0x24c);
  local_390 = *(undefined4 *)(param_2 + 0x248);
  local_388 = 0;
  local_380 = 0;
  FUN_140a58922(&local_388,param_2 + 0x250);
  local_9c = local_38c;
  local_a0 = local_390;
  FUN_144a450dc(auStack_98,&local_388);
  FUN_1449db362(&local_388);
  local_3a4 = *(undefined1 *)(param_2 + 0x264);
  local_3a8 = *(undefined4 *)(param_2 + 0x260);
  local_3a0 = 0;
  local_398 = 0;
  FUN_140a58922(&local_3a0,param_2 + 0x268);
  local_84 = local_3a4;
  local_88 = local_3a8;
  FUN_144a450dc(auStack_80,&local_3a0);
  FUN_1449db362(&local_3a0);
  local_3bc = *(undefined1 *)(param_2 + 0x27c);
  local_3c0 = *(undefined4 *)(param_2 + 0x278);
  local_3b8 = 0;
  local_3b0 = 0;
  FUN_140a58922(&local_3b8,param_2 + 0x280);
  local_6c = local_3bc;
  local_70 = local_3c0;
  FUN_144a450dc(auStack_68,&local_3b8);
  FUN_1449db362(&local_3b8);
  local_3d4 = *(undefined1 *)(param_2 + 0x294);
  local_3d8 = *(undefined4 *)(param_2 + 0x290);
  local_3d0 = 0;
  local_3c8 = 0;
  FUN_140a58922(&local_3d0,param_2 + 0x298);
  local_54 = local_3d4;
  local_58 = local_3d8;
  FUN_144a450dc(auStack_50,&local_3d0);
  FUN_1449db362(&local_3d0);
  plVar7 = local_108;
  local_110 = *(undefined8 *)(param_2 + 0x1d8);
  plVar5 = *(longlong **)(param_2 + 0x1e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 8) = *(int *)((longlong)plVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar6 = (undefined8 *)*local_108;
      local_108 = plVar5;
      (*(code *)*puVar6)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar5 = local_108;
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar5 = local_108;
      }
    }
  }
  local_108 = plVar5;
  FUN_140a58268(param_1,local_2e8);
  FUN_140a5660c(local_2e8);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b055de FUN_146b055de body=29 status=ok
// SIG undefined FUN_146b055de(void)

undefined8 FUN_146b055de(longlong param_1,undefined8 param_2)

{
  FUN_146b04d70(*(undefined8 *)(param_1 + 0x250));
  return param_2;
}



// FUNCTION 146b055fc FUN_146b055fc body=38 status=ok
// SIG undefined FUN_146b055fc(void)

undefined8 FUN_146b055fc(undefined8 param_1,int param_2)

{
  FUN_146b05038();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b05622 FUN_146b05622 body=52 status=ok
// SIG undefined FUN_146b05622(void)

void FUN_146b05622(longlong *param_1)

{
  FUN_146b05656();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b05656 FUN_146b05656 body=89 status=ok
// SIG undefined FUN_146b05656(void)

void FUN_146b05656(longlong param_1)

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



// FUNCTION 146b056b0 FUN_146b056b0 body=312 status=ok
// SIG undefined FUN_146b056b0(void)

undefined4 * FUN_146b056b0(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_146b057ea(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146b058d0(param_1,uVar3,local_40,&local_4c);
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
      FUN_146b059be(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b057ea FUN_146b057ea body=229 status=ok
// SIG undefined FUN_146b057ea(void)

int * FUN_146b057ea(longlong *param_1,int *param_2)

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



// FUNCTION 146b058d0 FUN_146b058d0 body=124 status=ok
// SIG undefined FUN_146b058d0(void)

undefined8 FUN_146b058d0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146b0594c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b0594c FUN_146b0594c body=114 status=ok
// SIG undefined FUN_146b0594c(void)

void FUN_146b0594c(longlong *param_1,int param_2)

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



// FUNCTION 146b059be FUN_146b059be body=477 status=ok
// SIG undefined FUN_146b059be(void)

void FUN_146b059be(longlong *param_1)

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



// FUNCTION 146b05b9c FUN_146b05b9c body=90 status=ok
// SIG undefined FUN_146b05b9c(void)

void FUN_146b05b9c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146b0594c();
  return;
}



// FUNCTION 146b05bf6 FUN_146b05bf6 body=123 status=ok
// SIG undefined FUN_146b05bf6(void)

void FUN_146b05bf6(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_146ad64ee(param_2);
  puVar3 = (undefined4 *)(param_1 + 1000);
  if (*(char *)(lVar2 + 4) != '\0') {
    puVar3 = param_2;
  }
  if (puVar3 != (undefined4 *)(param_1 + 0x428)) {
    if (*(char *)(puVar3 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x428) = *puVar3;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x42c) != '\x01') goto LAB_146b05c25;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x42c) = uVar1;
  }
LAB_146b05c25:
  *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)(puVar3 + 2);
  FUN_146af763c(param_1 + 0x438,puVar3 + 4);
  FUN_146b0757c(param_1);
  return;
}



// FUNCTION 146b05c72 FUN_146b05c72 body=123 status=ok
// SIG undefined FUN_146b05c72(void)

void FUN_146b05c72(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_146ad64ee(param_2);
  puVar3 = (undefined4 *)(param_1 + 0x3c8);
  if (*(char *)(lVar2 + 4) != '\0') {
    puVar3 = param_2;
  }
  if (puVar3 != (undefined4 *)(param_1 + 0x408)) {
    if (*(char *)(puVar3 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x408) = *puVar3;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x40c) != '\x01') goto LAB_146b05ca1;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x40c) = uVar1;
  }
LAB_146b05ca1:
  *(undefined1 *)(param_1 + 0x410) = *(undefined1 *)(puVar3 + 2);
  FUN_146af763c(param_1 + 0x418,puVar3 + 4);
  FUN_146b0757c(param_1);
  return;
}



// FUNCTION 146b05cee FUN_146b05cee body=134 status=ok
// SIG undefined FUN_146b05cee(void)

longlong FUN_146b05cee(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b05d76 FUN_146b05d76 body=136 status=ok
// SIG undefined FUN_146b05d76(void)

longlong FUN_146b05d76(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146b05dcf;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146b05dcf:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146b05dfe FUN_146b05dfe body=84 status=ok
// SIG undefined FUN_146b05dfe(void)

undefined8 FUN_146b05dfe(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = lVar5;
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
  return *param_1;
}



// FUNCTION 146b05e52 FUN_146b05e52 body=115 status=ok
// SIG undefined FUN_146b05e52(void)

longlong * FUN_146b05e52(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a8ea6e(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146b05ec6 FUN_146b05ec6 body=792 status=ok
// SIG undefined FUN_146b05ec6(void)

longlong FUN_146b05ec6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [56];
  longlong *local_88;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140a5071c();
  plVar3 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_58,"ExpandableArea",1);
  uVar4 = FUN_145817d52(plVar3,local_58,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined1 **)(param_1 + 0x1b0) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x1b8) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  plVar3 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_60,"ExpandableArea.Border",1);
  uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,local_60,0,0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined1 **)(param_1 + 0x1f8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x200) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  uVar4 = DAT_14c98dec8;
  *(undefined8 *)(param_1 + 0x228) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x230) = DAT_14c98ded0;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x238) = uVar4;
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    lVar2 = DAT_14c98ded0;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x238) = DAT_14c98dec8;
    *(longlong *)(param_1 + 0x240) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_144a5dc74(param_1 + 0x248);
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x40400000;
  *(undefined1 *)(param_1 + 0x290) = 1;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x4000000040800000;
  *(undefined8 *)(param_1 + 0x2b0) = 0x4000000040800000;
  *(undefined1 *)(param_1 + 0x2b8) = 1;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f4) = 0;
  *(undefined8 *)(param_1 + 0x2fc) = 0;
  plVar3 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_c8,"ExpandableArea.TitleFont",1);
  (**(code **)(*plVar3 + 0x88))(plVar3,local_c0,local_c8,0);
  FUN_144a87366(param_1 + 0x308,local_c0);
  *(undefined1 *)(param_1 + 0x368) = 1;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  *(undefined1 *)(param_1 + 900) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b061e0 FUN_146b061e0 body=115 status=ok
// SIG undefined FUN_146b061e0(void)

longlong * FUN_146b061e0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a8b750(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146b06254 FUN_146b06254 body=181 status=ok
// SIG undefined FUN_146b06254(void)

longlong FUN_146b06254(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0630a FUN_146b0630a body=136 status=ok
// SIG undefined FUN_146b0630a(void)

longlong FUN_146b0630a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146b06363;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146b06363:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146b06392 FUN_146b06392 body=115 status=ok
// SIG undefined FUN_146b06392(void)

longlong * FUN_146b06392(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a9eb7c(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146b06406 FUN_146b06406 body=92 status=ok
// SIG undefined FUN_146b06406(void)

void FUN_146b06406(longlong param_1)

{
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_146ac5506(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146b06462 FUN_146b06462 body=259 status=ok
// SIG undefined FUN_146b06462(void)

void FUN_146b06462(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x390);
  if (*(char *)(param_1 + 900) == '\x01') {
    *(undefined1 *)(param_1 + 900) = 0;
  }
  FUN_141515cba(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2f8);
  FUN_1449db362(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x298);
  FUN_1449db362(param_1 + 0x260);
  if (*(longlong **)(param_1 + 0x248) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x248) + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x240);
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
  plVar3 = *(longlong **)(param_1 + 0x230);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146b06566 FUN_146b06566 body=116 status=ok
// SIG undefined FUN_146b06566(void)

void FUN_146b06566(longlong param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x74) == '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  FUN_1449db362(param_1 + 0x30);
  FUN_146b06cae(param_1);
  return;
}



// FUNCTION 146b065da FUN_146b065da body=126 status=ok
// SIG undefined FUN_146b065da(void)

void FUN_146b065da(longlong param_1)

{
  FUN_146ac0ab8(*(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_146ac0ab8(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_146b06d01(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146b06658 FUN_146b06658 body=932 status=ok
// SIG undefined FUN_146b06658(void)

longlong FUN_146b06658(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [56];
  longlong *local_70;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140a5071c();
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"SpinBox",1);
  uVar3 = FUN_145817ec0(plVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 1;
  *(undefined1 *)(param_1 + 0x24c) = 1;
  *(undefined1 *)(param_1 + 0x250) = 1;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 6;
  *(undefined1 *)(param_1 + 0x26c) = 1;
  *(undefined1 *)(param_1 + 0x270) = 1;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined2 *)(param_1 + 0x288) = 0x100;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined2 *)(param_1 + 0x2a0) = 0x101;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 700) = 1;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2cd) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x41200000;
  *(undefined1 *)(param_1 + 0x2ec) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x304) = 1;
  *(undefined8 *)(param_1 + 0x315) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined2 *)(param_1 + 0x330) = 0x100;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x348) = 0x100;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0x3f800000;
  *(undefined1 *)(param_1 + 900) = 1;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x395) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined2 *)(param_1 + 0x3b0) = 1;
  *(undefined1 *)(param_1 + 0x3bc) = 0;
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_b0,L"NormalFont",1);
  (**(code **)(*plVar2 + 0x88))(plVar2,local_a8,local_b0,0);
  FUN_144a87366(param_1 + 0x3d8,local_a8);
  *(undefined1 *)(param_1 + 0x438) = 1;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70)();
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x450) = 0x3f80000040000000;
  *(undefined8 *)(param_1 + 0x458) = 0x3f80000040000000;
  *(undefined1 *)(param_1 + 0x460) = 1;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined2 *)(param_1 + 0x4b8) = 0x100;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x494) = 0;
  *(undefined8 *)(param_1 + 0x49c) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined2 *)(param_1 + 0x4d0) = 0x101;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined1 *)(param_1 + 0x4ec) = 1;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined1 *)(param_1 + 0x504) = 1;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x51c) = 1;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0x540) = 1;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b069fe FUN_146b069fe body=115 status=ok
// SIG undefined FUN_146b069fe(void)

longlong * FUN_146b069fe(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146b0b330(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146b06a72 FUN_146b06a72 body=572 status=ok
// SIG undefined FUN_146b06a72(void)

void FUN_146b06a72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x548);
  plVar3 = *(longlong **)(param_1 + 0x538);
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
  FUN_1449db362(param_1 + 0x520);
  FUN_1449db362(param_1 + 0x508);
  FUN_1449db362(param_1 + 0x4f0);
  FUN_1449db362(param_1 + 0x4d8);
  FUN_1449db362(param_1 + 0x4c0);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_1449db362(param_1 + 0x498);
  FUN_1449db362(param_1 + 0x488);
  FUN_1449db362(param_1 + 0x478);
  FUN_1449db362(param_1 + 0x468);
  FUN_141515cba(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3c8);
  if (*(char *)(param_1 + 0x3bc) == '\x01') {
    *(undefined1 *)(param_1 + 0x3bc) = 0;
  }
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x388);
  FUN_1449db362(param_1 + 0x370);
  FUN_1449db362(param_1 + 0x360);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2f0);
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2a8);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x278);
  if (*(char *)(param_1 + 0x26c) == '\x01') {
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  FUN_1449db362(param_1 + 600);
  if (*(char *)(param_1 + 0x24c) == '\x01') {
    *(undefined1 *)(param_1 + 0x24c) = 0;
  }
  FUN_1449db362(param_1 + 0x238);
  if (*(char *)(param_1 + 0x22c) == '\x01') {
    *(undefined1 *)(param_1 + 0x22c) = 0;
  }
  FUN_1449db362(param_1 + 0x218);
  if (*(char *)(param_1 + 0x20c) == '\x01') {
    *(undefined1 *)(param_1 + 0x20c) = 0;
  }
  FUN_1449db362(param_1 + 0x1f8);
  if (*(char *)(param_1 + 0x1ec) == '\x01') {
    *(undefined1 *)(param_1 + 0x1ec) = 0;
  }
  FUN_1449db362(param_1 + 0x1d8);
  if (*(char *)(param_1 + 0x1cc) == '\x01') {
    *(undefined1 *)(param_1 + 0x1cc) = 0;
  }
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146b06cae FUN_146b06cae body=83 status=ok
// SIG undefined FUN_146b06cae(void)

void FUN_146b06cae(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b06cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146b06d01 FUN_146b06d01 body=41 status=ok
// SIG undefined FUN_146b06d01(void)

void FUN_146b06d01(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b06566(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 146b06d2a FUN_146b06d2a body=34 status=ok
// SIG undefined FUN_146b06d2a(void)

void FUN_146b06d2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f208b0;
  return;
}



// FUNCTION 146b06d4c FUN_146b06d4c body=31 status=ok
// SIG undefined FUN_146b06d4c(void)

undefined8 FUN_146b06d4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b06d88 FUN_146b06d88 body=93 status=ok
// SIG undefined FUN_146b06d88(void)

void FUN_146b06d88(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f20840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b06de6 FUN_146b06de6 body=126 status=ok
// SIG undefined FUN_146b06de6(void)

void FUN_146b06de6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f20840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b06e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b06e70 FUN_146b06e70 body=21 status=ok
// SIG undefined FUN_146b06e70(void)

undefined8 FUN_146b06e70(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b06e86 FUN_146b06e86 body=29 status=ok
// SIG undefined FUN_146b06e86(void)

undefined8 FUN_146b06e86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b06eb6 FUN_146b06eb6 body=142 status=ok
// SIG undefined FUN_146b06eb6(void)

undefined4 * FUN_146b06eb6(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[6] != 0) && (*(longlong **)(param_1 + 4) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 4) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[6] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 4);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_20);
      if (&local_20 != param_1) {
        if ((local_1c & 1) == 0) {
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_146b06f16;
          uVar2 = 0;
        }
        else {
          *param_1 = local_20;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar2;
      }
    }
  }
LAB_146b06f16:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b06f46 FUN_146b06f46 body=130 status=ok
// SIG undefined FUN_146b06f46(void)

void FUN_146b06f46(longlong *param_1,longlong *param_2)

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



// FUNCTION 146b06fca FUN_146b06fca body=29 status=ok
// SIG undefined FUN_146b06fca(void)

undefined8 FUN_146b06fca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b06ff0 FUN_146b06ff0 body=60 status=ok
// SIG undefined FUN_146b06ff0(void)

void FUN_146b06ff0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 1;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}



// FUNCTION 146b0702c FUN_146b0702c body=60 status=ok
// SIG undefined FUN_146b0702c(void)

void FUN_146b0702c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 6;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 146b07068 FUN_146b07068 body=199 status=ok
// SIG undefined FUN_146b07068(void)

undefined8 * FUN_146b07068(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 uStack_67;
  undefined4 uStack_64;
  undefined2 uStack_5a;
  undefined8 local_58;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined4 uStack_44;
  undefined2 uStack_3a;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141366fce(&local_48);
  uStack_47 = 0;
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < iVar2) {
    iVar3 = iVar2;
  }
  local_38 = CONCAT44(iVar3,iVar2);
  local_68 = local_48;
  uStack_67 = 0;
  uStack_64 = uStack_44;
  uStack_5a = uStack_3a;
  local_58 = local_38;
  uVar4 = FUN_140b6087d();
  fVar1 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = local_58;
  local_48 = local_68;
  uStack_47 = uStack_67;
  uStack_44 = uStack_64;
  uStack_3a = uStack_5a;
  FUN_140235a22((double)fVar1,uVar4,&local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b07130 FUN_146b07130 body=606 status=ok
// SIG undefined FUN_146b07130(void)

float * FUN_146b07130(undefined8 param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  double *local_88;
  double *local_80;
  int *local_78;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  double local_68;
  double local_60 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1467cf2b8(local_60);
  local_60[0] = (double)((ulonglong)local_60[0] & 0xffffffffffffff00);
  local_6c = local_60[0]._0_2_;
  local_6a = 1;
  local_70 = 0;
  uVar2 = FUN_140b6087d();
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar4 = 0;
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  local_68 = 0.0;
  local_60[0] = -3.4028234663852886e+38;
  local_60[1] = 3.4028234663852886e+38;
  local_88 = local_60;
  local_80 = &local_68;
  local_78 = &local_70;
  cVar1 = FUN_140b60baa(puVar5,iVar4,uVar2,&local_6c);
  if (cVar1 == '\0') {
LAB_146b07214:
    local_70 = 0;
    uVar2 = FUN_140b60818();
    iVar4 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar4 = 0;
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    local_68 = 0.0;
    local_60[0] = -3.4028234663852886e+38;
    local_60[1] = 3.4028234663852886e+38;
    local_88 = local_60;
    local_80 = &local_68;
    local_78 = &local_70;
    cVar1 = FUN_140b60baa(puVar5,iVar4,uVar2,&local_6c);
    if (cVar1 != '\0') {
      iVar4 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar4 = 0;
      }
      if (local_70 == iVar4) goto LAB_146b071fd;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9908a0) && (FUN_144b3d300(&DAT_14c9908a0), DAT_14c9908a0 == -1)) {
      FUN_1467ebd14(&DAT_14c990608);
      atexit((_func_5014 *)&LAB_14290db90);
      _Init_thread_footer(&DAT_14c9908a0);
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    FUN_1467ecfa6(&DAT_14c990608,local_60,puVar5,(double)*param_4);
    if ((&DAT_149f209a8)[local_50] == '\x01') {
      fVar6 = (float)local_60[0];
      if (3.4028235e+38 <= fVar6) {
        fVar6 = 3.4028235e+38;
      }
      if (fVar6 <= -3.4028235e+38) {
        fVar6 = -3.4028235e+38;
      }
      *param_2 = fVar6;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_2 + 1) = uVar3;
    (*(code *)(&PTR_FUN_149f209b0)[local_50])(local_60);
  }
  else {
    iVar4 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar4 = 0;
    }
    if (local_70 != iVar4) goto LAB_146b07214;
LAB_146b071fd:
    *param_2 = (float)local_68;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b07390 FUN_146b07390 body=216 status=ok
// SIG undefined FUN_146b07390(void)

ulonglong FUN_146b07390(undefined8 param_1,short param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((int)puVar3[0x44] < DAT_14c9908b8) {
    puVar3 = &DAT_14c9908b8;
    FUN_144b3d300(&DAT_14c9908b8);
    if (DAT_14c9908b8 == -1) {
      FUN_140056680(&DAT_14c9908a8);
      atexit((_func_5014 *)&LAB_14290db9c);
      puVar3 = &DAT_14c9908b8;
      _Init_thread_footer(&DAT_14c9908b8);
    }
  }
  if (param_2 != 0) {
    if ((longlong)DAT_14c9908b0 != 0) {
      lVar4 = 0;
      do {
        if (*(short *)((longlong)DAT_14c9908a8 + lVar4) == param_2) {
          uVar1 = CONCAT71((int7)((ulonglong)DAT_14c9908a8 >> 8),1);
          goto LAB_146b0740f;
        }
        lVar4 = lVar4 + 2;
        puVar3 = DAT_14c9908a8;
      } while ((longlong)DAT_14c9908b0 * 2 != lVar4);
    }
    lVar4 = FUN_140b6087d();
    uVar1 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    if ((*(short *)(lVar4 + 0x70) == param_2) || (*(short *)(lVar4 + 0x72) == param_2))
    goto LAB_146b0740f;
    lVar2 = 0;
    do {
      if (*(short *)(lVar4 + 0x78 + lVar2) == param_2) {
        uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 + 0x78 + lVar2 != 0);
        goto LAB_146b0740f;
      }
      lVar2 = lVar2 + 2;
    } while (lVar2 != 0x14);
  }
  uVar1 = 0;
LAB_146b0740f:
  return uVar1 & 0xffffffff;
}



// FUNCTION 146b07468 FUN_146b07468 body=3 status=ok
// SIG undefined FUN_146b07468(void)

undefined8 FUN_146b07468(void)

{
  return 0;
}



// FUNCTION 146b0746c FUN_146b0746c body=67 status=ok
// SIG undefined FUN_146b0746c(void)

void FUN_146b0746c(longlong param_1)

{
  FUN_1461ee2bc(param_1 + 0x158);
  FUN_145a34d36(param_1 + 0x18);
  FUN_141359509(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b074b0 FUN_146b074b0 body=16 status=ok
// SIG undefined FUN_146b074b0(void)

void FUN_146b074b0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b074bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 146b074c2 FUN_146b074c2 body=24 status=ok
// SIG undefined FUN_146b074c2(void)

void FUN_146b074c2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b074d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146b074da FUN_146b074da body=29 status=ok
// SIG undefined FUN_146b074da(void)

undefined8 FUN_146b074da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b074f8 FUN_146b074f8 body=130 status=ok
// SIG undefined FUN_146b074f8(void)

void FUN_146b074f8(longlong *param_1,longlong *param_2)

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



// FUNCTION 146b0757c FUN_146b0757c body=100 status=ok
// SIG undefined FUN_146b0757c(void)

void FUN_146b0757c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = FUN_146ad64ee(param_1 + 0x3c8);
  if (*(char *)(lVar1 + 4) == '\x01') {
    lVar1 = FUN_146ad64ee();
    if (*(char *)(lVar1 + 4) != '\0') {
      bVar2 = 0;
      goto LAB_146b075c0;
    }
  }
  lVar1 = FUN_146ad64ee(param_1 + 0x408);
  bVar2 = 1;
  if (*(char *)(lVar1 + 4) == '\x01') {
    lVar1 = FUN_146ad64ee(param_1 + 0x428);
    bVar2 = *(byte *)(lVar1 + 4) ^ 1;
  }
LAB_146b075c0:
  *(byte *)(param_1 + 0x2f0) = bVar2;
  return;
}



// FUNCTION 146b075e0 FUN_146b075e0 body=369 status=ok
// SIG undefined FUN_146b075e0(void)

longlong *
FUN_146b075e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x268,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f20a20;
  plVar1 = plVar4 + 2;
  FUN_146a8e5d6(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146b0777a(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146b076e5;
    param_1[1] = 0;
LAB_146b076a8:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146b076e5;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_146b076e5;
      goto LAB_146b076a8;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b076e5;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146b076e5:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 600;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b07752 FUN_146b07752 body=9 status=ok
// SIG undefined FUN_146b07752(void)

void FUN_146b07752(longlong param_1)

{
  FUN_142902706(param_1 + 0x10);
  return;
}



// FUNCTION 146b0775c FUN_146b0775c body=29 status=ok
// SIG undefined FUN_146b0775c(void)

undefined8 FUN_146b0775c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b0777a FUN_146b0777a body=167 status=ok
// SIG undefined FUN_146b0777a(void)

void FUN_146b0777a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b077f5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b077f5;
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
LAB_146b077f5:
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
                    /* WARNING: Could not recover jumptable at 0x000146b07815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b07822 FUN_146b07822 body=340 status=ok
// SIG undefined FUN_146b07822(void)

longlong *
FUN_146b07822(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar3 = (longlong *)FUN_14001cc68(0x368,0x10);
  FUN_146b07978(plVar3);
  local_48 = plVar3 + 2;
  local_40 = plVar3;
  FUN_146b07b56(&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *param_1 = (longlong)local_48;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146b0790c;
    param_1[1] = 0;
LAB_146b078cf:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146b0790c;
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
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_48;
    plVar4 = (longlong *)param_1[1];
    if (local_40 != plVar4) {
      param_1[1] = (longlong)local_40;
      if (plVar4 == (longlong *)0x0) goto LAB_146b0790c;
      goto LAB_146b078cf;
    }
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b0790c;
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_146b0790c:
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_58 = 0x358;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b07978 FUN_146b07978 body=146 status=ok
// SIG undefined FUN_146b07978(void)

undefined8 * FUN_146b07978(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149f20a40;
  memset(param_1 + 2,0,0x358);
  FUN_140a55f88(param_1 + 2);
  param_1[2] = &PTR_FUN_149f20a60;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_14285ff5a(param_1 + 0x58);
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  return param_1;
}



// FUNCTION 146b07a14 FUN_146b07a14 body=29 status=ok
// SIG undefined FUN_146b07a14(void)

undefined8 FUN_146b07a14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b07a32 FUN_146b07a32 body=38 status=ok
// SIG undefined FUN_146b07a32(void)

undefined8 FUN_146b07a32(undefined8 param_1,int param_2)

{
  FUN_146b07a62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b07a62 FUN_146b07a62 body=243 status=ok
// SIG undefined FUN_146b07a62(void)

void FUN_146b07a62(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f20a60;
  FUN_1449db362(param_1 + 100);
  FUN_1402bc42a(param_1 + 0x56);
  plVar3 = (longlong *)param_1[0x55];
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
  plVar3 = (longlong *)param_1[0x53];
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
  plVar3 = (longlong *)param_1[0x51];
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
  plVar3 = (longlong *)param_1[0x4f];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146b07b56 FUN_146b07b56 body=167 status=ok
// SIG undefined FUN_146b07b56(void)

void FUN_146b07b56(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b07bd1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b07bd1;
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
LAB_146b07bd1:
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
                    /* WARNING: Could not recover jumptable at 0x000146b07bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b07bfe FUN_146b07bfe body=369 status=ok
// SIG undefined FUN_146b07bfe(void)

longlong *
FUN_146b07bfe(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f20cf0;
  plVar1 = plVar4 + 2;
  FUN_146a9eb04(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146b07d98(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146b07d03;
    param_1[1] = 0;
LAB_146b07cc6:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146b07d03;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_146b07d03;
      goto LAB_146b07cc6;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b07d03;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146b07d03:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x228;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b07d70 FUN_146b07d70 body=9 status=ok
// SIG undefined FUN_146b07d70(void)

void FUN_146b07d70(longlong param_1)

{
  FUN_142903802(param_1 + 0x10);
  return;
}



// FUNCTION 146b07d7a FUN_146b07d7a body=29 status=ok
// SIG undefined FUN_146b07d7a(void)

undefined8 FUN_146b07d7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b07d98 FUN_146b07d98 body=167 status=ok
// SIG undefined FUN_146b07d98(void)

void FUN_146b07d98(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b07e13;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b07e13;
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
LAB_146b07e13:
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
                    /* WARNING: Could not recover jumptable at 0x000146b07e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b07e40 FUN_146b07e40 body=369 status=ok
// SIG undefined FUN_146b07e40(void)

longlong *
FUN_146b07e40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x5a0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f20d10;
  plVar1 = plVar4 + 2;
  FUN_146b07fb2(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146b0b288(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146b07f45;
    param_1[1] = 0;
LAB_146b07f08:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146b07f45;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_146b07f45;
      goto LAB_146b07f08;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b07f45;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146b07f45:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x590;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b07fb2 FUN_146b07fb2 body=462 status=ok
// SIG undefined FUN_146b07fb2(void)

undefined8 * FUN_146b07fb2(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f20d30;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x365) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x395) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ad) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined2 *)(param_1 + 0x91) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined2 *)(param_1 + 0x94) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined2 *)(param_1 + 0x97) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined2 *)((longlong)param_1 + 0x574) = 1;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  return param_1;
}



// FUNCTION 146b08180 FUN_146b08180 body=9 status=ok
// SIG undefined FUN_146b08180(void)

void FUN_146b08180(longlong param_1)

{
  FUN_146b0ab04(param_1 + 0x10);
  return;
}



// FUNCTION 146b0818a FUN_146b0818a body=29 status=ok
// SIG undefined FUN_146b0818a(void)

undefined8 FUN_146b0818a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b081a8 FUN_146b081a8 body=38 status=ok
// SIG undefined FUN_146b081a8(void)

undefined8 FUN_146b081a8(undefined8 param_1,int param_2)

{
  FUN_146b0ab04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b081ce FUN_146b081ce body=91 status=ok
// SIG undefined FUN_146b081ce(void)

void FUN_146b081ce(longlong param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x588) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x578);
    dVar2 = dVar1;
    if (3.4028234663852886e+38 <= dVar1) {
      dVar2 = 3.4028234663852886e+38;
    }
    if (dVar2 <= -3.4028234663852886e+38) {
      dVar2 = -3.4028234663852886e+38;
    }
    FUN_14290dbae(dVar2,(float)dVar2,dVar1,*(undefined4 *)(param_1 + 0x580),1);
    if (*(char *)(param_1 + 0x588) == '\x01') {
      *(undefined1 *)(param_1 + 0x588) = 0;
    }
  }
  return;
}



// FUNCTION 146b0822a FUN_146b0822a body=442 status=ok
// SIG undefined FUN_146b0822a(void)

undefined1 * FUN_146b0822a(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(param_1 + 0x571) == '\0') && ((byte)(*param_4 - 1U) < 2)) {
    local_f8 = DAT_14c96b1e1;
    local_f7 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x1c0))
              (*(longlong **)(param_1 + 0x2c0),&local_f8);
    local_110 = DAT_14c96b238;
    local_10f = 1;
    local_108 = 0;
    uStack_100 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x1c0))();
    local_f8 = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    cVar3 = *param_4;
    local_120 = *(undefined8 *)(param_1 + 0x2d0);
    plVar4 = *(longlong **)(param_1 + 0x2d8);
    if (plVar4 == (longlong *)0x0) {
      local_118 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_118 = plVar4;
    }
    uVar5 = FUN_140592b68(&local_f8,&local_120,cVar3,0);
    FUN_1403d4c6e(param_2,uVar5);
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
    FUN_14493db24(&local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b083e6 FUN_146b083e6 body=1308 status=ok
// SIG undefined FUN_146b083e6(void)

undefined1 * FUN_146b083e6(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar3 == DAT_14c964dd0) && (cVar5 = FUN_140591fd6(param_1), cVar5 != '\0')) {
    *(undefined1 *)(param_1 + 0x571) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
    *(double *)(param_1 + 0x550) = (double)*(float *)(param_1 + 0x558);
    FUN_146b0adc0(param_1);
    local_108 = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_d0 = 0;
    uStack_c8 = 0;
    local_54 = 1;
    uVar6 = FUN_146948cd0(&local_108,param_1 + 0x544);
    FUN_1403d4c6e(param_2,uVar6);
LAB_146b085ce:
    FUN_14493db24(&local_108);
    goto LAB_146b08718;
  }
  if ((lVar3 == DAT_14c964e78) || (lVar3 == DAT_14c964e90)) {
    if ((*(int *)(param_1 + 0x278) != 0) &&
       ((*(longlong **)(param_1 + 0x270) != (longlong *)0x0 &&
        (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar5 != '\0')))) {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x270);
      }
      uVar8 = (**(code **)(*plVar7 + 0x58))();
      *(undefined4 *)(param_1 + 0x268) = uVar8;
    }
    fVar10 = *(float *)(param_1 + 0x268);
    if (((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x348) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x340);
      }
      uVar8 = (**(code **)(*plVar7 + 0x58))();
      *(undefined4 *)(param_1 + 0x338) = uVar8;
    }
    dVar9 = (double)fVar10;
    *(double *)(param_1 + 0x550) = dVar9;
    dVar9 = (double)*(float *)(param_1 + 0x338) + dVar9;
    fVar10 = fVar10 + *(float *)(param_1 + 0x338);
LAB_146b08682:
    local_138 = 1;
    FUN_14290dbae(param_1,fVar10,dVar9,2);
    local_108 = DAT_14c96b238;
    local_107 = 1;
    local_100 = 0;
    uStack_f8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x1c0))();
    local_120 = DAT_14c96b1e1;
    local_11f = 1;
    local_118 = 0;
    uStack_110 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x1c0))();
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    if ((lVar3 == DAT_14c964ea8) || (lVar3 == DAT_14c964e60)) {
      if ((*(int *)(param_1 + 0x278) != 0) &&
         ((*(longlong **)(param_1 + 0x270) != (longlong *)0x0 &&
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar5 != '\0')))) {
        if (*(int *)(param_1 + 0x278) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x270);
        }
        uVar8 = (**(code **)(*plVar7 + 0x58))();
        *(undefined4 *)(param_1 + 0x268) = uVar8;
      }
      fVar10 = *(float *)(param_1 + 0x268);
      if (((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x348) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x340);
        }
        uVar8 = (**(code **)(*plVar7 + 0x58))();
        *(undefined4 *)(param_1 + 0x338) = uVar8;
      }
      dVar9 = (double)fVar10;
      *(double *)(param_1 + 0x550) = dVar9;
      dVar9 = (double)*(float *)(param_1 + 0x338) + dVar9;
      fVar10 = fVar10 - *(float *)(param_1 + 0x338);
      goto LAB_146b08682;
    }
    if (lVar3 == DAT_14c964d88) {
      if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0))
         && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(param_1 + 0x278) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x270);
        }
        uVar8 = (**(code **)(*plVar7 + 0x58))();
        *(undefined4 *)(param_1 + 0x268) = uVar8;
      }
      *(double *)(param_1 + 0x550) = (double)*(float *)(param_1 + 0x268);
      local_108 = DAT_14c96b1e1;
      local_107 = 1;
      local_100 = 0;
      uStack_f8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x1c0))
                (*(longlong **)(param_1 + 0x2c0),&local_108);
      local_120 = DAT_14c96b238;
      local_11f = 1;
      local_118 = 0;
      uStack_110 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x1c0))();
      local_108 = 1;
      local_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      memset(local_e0,0,0x88);
      local_58 = 0x20702;
      local_54 = 0;
      local_130 = *(undefined8 *)(param_1 + 0x2d0);
      plVar7 = *(longlong **)(param_1 + 0x2d8);
      if (plVar7 == (longlong *)0x0) {
        local_128 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_128 = plVar7;
      }
      uVar6 = FUN_140592b68(&local_108,&local_130,1,0);
      FUN_1403d4c6e(param_2,uVar6);
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
      goto LAB_146b085ce;
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146b08718:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b08904 FUN_146b08904 body=1046 status=ok
// SIG undefined FUN_146b08904(void)

undefined1 * FUN_146b08904(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [136];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_4 + 0x40);
  plVar14 = *(longlong **)(param_4 + 0x50);
  if (plVar14 == (longlong *)0x0) {
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x540);
      goto joined_r0x000146b08a02;
    }
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    if (lVar6 == DAT_14c966e98) {
      iVar11 = *(int *)(param_1 + 0x540);
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
joined_r0x000146b08a02:
      if (iVar11 == -1) {
        *(undefined4 *)(param_1 + 0x330) = 0;
        if (((*(int *)(param_1 + 0x278) != 0) &&
            (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x278) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x270);
          }
          uVar17 = (**(code **)(*plVar14 + 0x58))();
          *(undefined4 *)(param_1 + 0x268) = uVar17;
        }
        *(float *)(param_1 + 0x558) = *(float *)(param_1 + 0x268);
        *(double *)(param_1 + 0x550) = (double)*(float *)(param_1 + 0x268);
        *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_4 + 0x58);
        *(ulonglong *)(param_1 + 0x544) =
             CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1
                      ,(int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >>
                       1);
        local_118[0] = 1;
        local_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        pvVar12 = memset(local_f0,0,0x88);
        local_68 = 0x20702;
        local_64 = 0;
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_146b08b6d:
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          local_14c = (undefined4)CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
        }
        else {
          pvVar12 = (void *)(ulonglong)*(uint *)(plVar14 + 1);
          do {
            uVar10 = (uint)pvVar12;
            if (uVar10 == 0) goto LAB_146b08b6d;
            LOCK();
            uVar5 = *(uint *)(plVar14 + 1);
            if (uVar10 == uVar5) {
              *(uint *)(plVar14 + 1) = uVar10 + 1;
            }
            else {
              pvVar12 = (void *)(ulonglong)uVar5;
            }
            UNLOCK();
          } while (uVar10 != uVar5);
          uVar13 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          local_14c = 0;
          local_128 = uVar13;
          plStack_120 = plVar14;
        }
        plVar1 = plStack_120;
        uVar13 = FUN_140592a6e(local_118,&local_128);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_146b08be4:
          local_138 = 0;
          plStack_130 = (longlong *)0x0;
          bVar15 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_146b08be4;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar15 = iVar11 == iVar8;
            if (bVar15) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar15);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar14 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar15 = false;
          local_138 = uVar7;
          plStack_130 = plVar14;
        }
        plVar3 = plStack_130;
        uVar13 = FUN_140592ae6(uVar13,&local_138);
        plVar14 = *(longlong **)(param_1 + 0x10);
        if (plVar14 == (longlong *)0x0) {
LAB_146b08c59:
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          bVar16 = true;
        }
        else {
          iVar11 = (int)plVar14[1];
          do {
            if (iVar11 == 0) goto LAB_146b08c59;
            LOCK();
            iVar8 = (int)plVar14[1];
            bVar16 = iVar11 == iVar8;
            if (bVar16) {
              *(int *)(plVar14 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar16);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar16 = false;
          local_148 = uVar7;
          plStack_140 = plVar14;
        }
        plVar14 = plStack_140;
        uVar13 = FUN_140592b68(uVar13,&local_148,0,0);
        FUN_1403d4c6e(param_2,uVar13);
        if (!bVar16) {
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        if (!bVar15) {
          LOCK();
          plVar14 = plVar3 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        if ((char)local_14c == '\0') {
          LOCK();
          plVar14 = plVar1 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        FUN_14493db24(local_118);
        if (*(char *)(param_1 + 0x573) == '\x01') {
          param_2[0xb4] = param_2[0xb4] | 0x40;
        }
        goto LAB_146b089b9;
      }
    }
    else {
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146b089b9:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b08d1c FUN_146b08d1c body=936 status=ok
// SIG undefined FUN_146b08d1c(void)

undefined1 * FUN_146b08d1c(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if ((lVar5 == DAT_14c966e98) && (*(int *)(param_1 + 0x540) == *(int *)(param_4 + 0x58))) {
LAB_146b08da3:
      cVar7 = FUN_140591fd6(param_1);
      if (cVar7 == '\0') {
        *(undefined1 *)(param_1 + 0x571) = 0;
        *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
        *param_2 = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
      }
      else {
        if (*(char *)(param_1 + 0x571) == '\x01') {
          if (((*(int *)(param_1 + 0x348) == 0) ||
              (*(longlong **)(param_1 + 0x340) == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar7 == '\0')) {
            fVar11 = *(float *)(param_1 + 0x338);
          }
          else {
            if (*(int *)(param_1 + 0x348) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(param_1 + 0x340);
            }
            fVar11 = (float)(**(code **)(*plVar8 + 0x58))();
            *(float *)(param_1 + 0x338) = fVar11;
          }
          if (((fVar11 != 0.0) || (NAN(fVar11))) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
            dVar6 = (double)fVar11;
            auVar13._0_8_ = (dVar6 * 0.5 + *(double *)(param_1 + 0x550)) / dVar6;
            auVar13._8_8_ = 0;
            auVar13 = roundpd(auVar13,auVar13,1);
            *(double *)(param_1 + 0x550) = auVar13._0_8_ * dVar6;
          }
          dVar6 = *(double *)(param_1 + 0x550);
          uVar10 = SUB84(dVar6,0);
          uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20);
          if (3.4028234663852886e+38 <= dVar6) {
            uVar10 = 0xe0000000;
            uVar12 = 0x47efffff;
          }
          if ((double)CONCAT44(uVar12,uVar10) <= -3.4028234663852886e+38) {
            uVar10 = 0xe0000000;
            uVar12 = 0xc7efffff;
          }
          FUN_146b0adc0(param_1,(float)(double)CONCAT44(uVar12,uVar10));
        }
        *(undefined1 *)(param_1 + 0x571) = 0;
        *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
        local_108 = 1;
        local_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        memset(local_e0,0,0x88);
        local_58 = 0x20702;
        local_d0 = 0;
        uStack_c8 = 0;
        local_54 = 1;
        FUN_1403d4c6e(param_2,&local_108);
        FUN_14493db24(&local_108);
        if (*(char *)(param_4 + 100) == '\0') {
          FUN_146948cd0(param_2,param_1 + 0x544);
        }
        fVar11 = *(float *)(param_1 + 0x330);
        fVar9 = (float)FUN_1469aaa10(DAT_14c98e618);
        if (fVar11 < fVar9) {
          local_108 = DAT_14c96b1e1;
          local_107 = 1;
          local_100 = 0;
          uStack_f8 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x1c0))();
          local_120 = DAT_14c96b238;
          local_11f = 1;
          local_118 = 0;
          uStack_110 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x1c0))();
          local_130 = *(undefined8 *)(param_1 + 0x2d0);
          plVar8 = *(longlong **)(param_1 + 0x2d8);
          if (plVar8 == (longlong *)0x0) {
            local_128 = (longlong *)0x0;
            FUN_140592b68(param_2,&local_130,2,0);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_128 = plVar8;
            FUN_140592b68(param_2,&local_130,2,0);
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
      }
      goto LAB_146b08f70;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (lVar5 == DAT_14c966e98) {
      iVar3 = *(int *)(param_1 + 0x540);
      iVar4 = *(int *)(param_4 + 0x58);
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
      if (iVar3 == iVar4) goto LAB_146b08da3;
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146b08f70:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b090c6 FUN_146b090c6 body=3506 status=ok
// SIG undefined FUN_146b090c6(void)

undefined1 * FUN_146b090c6(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  longlong *plVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_112;
  char local_111;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar9 = FUN_146b0b234();
  uVar10 = 0;
  if ((cVar9 == '\0') || (*(int *)(param_1 + 0x540) != *(int *)(param_4 + 0x58)))
  goto LAB_146b0926f;
  cVar9 = FUN_140591fd6();
  if (cVar9 == '\0') {
    *(undefined1 *)(param_1 + 0x571) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
    uVar10 = 0;
    goto LAB_146b0926f;
  }
  if (*(char *)(param_1 + 0x571) == '\0') {
    fVar22 = ABS(*(float *)(param_4 + 0x30)) + *(float *)(param_1 + 0x330);
    *(float *)(param_1 + 0x330) = fVar22;
    fVar18 = (float)FUN_1469aaa10(DAT_14c98e618);
    if (fVar18 < fVar22) {
      local_f8 = DAT_14c96b238;
      local_f7 = 1;
      local_f0 = 0;
      uStack_e8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x1c0))();
      local_110 = DAT_14c96b1e1;
      local_10f = 1;
      local_108 = 0;
      uStack_100 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x1c0))();
      *(undefined1 *)(param_1 + 0x571) = 1;
      if ((*(int *)(param_1 + 0x2a8) != 0) && (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x60))();
      }
    }
    *(ulonglong *)(param_1 + 0x544) =
         CONCAT44((int)ROUND(*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24) + 0.5) >> 1,
                  (int)ROUND(*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20) + 0.5) >> 1);
  }
  else {
    fVar18 = *param_3 * param_3[2];
    if (fVar18 <= 100.0) {
      fVar18 = 100.0;
    }
    if ((*(byte *)(param_4 + 8) & 0x30) != 0) {
      fVar22 = *(float *)(param_4 + 0x30);
      if (((*(int *)(param_1 + 0x4c8) != 0) && (*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x30))(), cVar9 != '\0')) {
        if (*(int *)(param_1 + 0x4c8) == 0) {
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = *(longlong **)(param_1 + 0x4c0);
        }
        uVar10 = (**(code **)(*plVar16 + 0x58))();
        *(undefined1 *)(param_1 + 0x4b8) = uVar10;
      }
      fVar22 = fVar22 / fVar18;
      if (*(char *)(param_1 + 0x4b8) == '\x01') {
        dVar5 = *(double *)(param_1 + 0x550);
        pfVar15 = (float *)FUN_146ad64ee(param_1 + 0x428);
        if (*(char *)(pfVar15 + 1) == '\0') {
          fVar19 = 3.4028235e+38;
        }
        else {
          fVar19 = *pfVar15;
        }
        if ((fVar19 == (float)dVar5) && (!NAN(fVar19) && !NAN((float)dVar5))) {
          FUN_146b0ae80(param_1,fVar22,0);
          goto LAB_146b09335;
        }
      }
      if (((*(int *)(param_1 + 0x4e0) != 0) && (*(longlong **)(param_1 + 0x4d8) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x30))(), cVar9 != '\0')) {
        if (*(int *)(param_1 + 0x4e0) == 0) {
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = *(longlong **)(param_1 + 0x4d8);
        }
        uVar10 = (**(code **)(*plVar16 + 0x58))();
        *(undefined1 *)(param_1 + 0x4d0) = uVar10;
      }
      if (*(char *)(param_1 + 0x4d0) == '\x01') {
        dVar5 = *(double *)(param_1 + 0x550);
        pfVar15 = (float *)FUN_146ad64ee(param_1 + 0x408);
        if (*(char *)(pfVar15 + 1) == '\0') {
          fVar19 = -3.4028235e+38;
        }
        else {
          fVar19 = *pfVar15;
        }
        if ((fVar19 == (float)dVar5) && (!NAN(fVar19) && !NAN((float)dVar5))) {
          FUN_146b0b05a(param_1,fVar22,0);
        }
      }
    }
LAB_146b09335:
    lVar1 = param_1 + 0x428;
    pfVar15 = (float *)FUN_146ad64ee(lVar1);
    if (*(char *)(pfVar15 + 1) == '\0') {
      fVar22 = 3.4028235e+38;
    }
    else {
      fVar22 = *pfVar15;
    }
    lVar2 = param_1 + 0x408;
    pfVar15 = (float *)FUN_146ad64ee(lVar2);
    if (*(char *)(pfVar15 + 1) == '\0') {
      fVar19 = -3.4028235e+38;
    }
    else {
      fVar19 = *pfVar15;
    }
    dVar5 = *(double *)(&DAT_149f20770 + (ulonglong)(fVar22 - fVar19 <= 10.0) * 8);
    if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
      if ((*(ushort *)(param_4 + 8) & 3) != 0) {
        pfVar15 = (float *)(param_1 + 0x350);
        if (*(int *)(param_1 + 0x360) != 0) {
          plVar16 = (longlong *)(param_1 + 0x358);
          if (((longlong *)*plVar16 != (longlong *)0x0) &&
             (cVar9 = (**(code **)(*(longlong *)*plVar16 + 0x30))(), cVar9 != '\0')) {
            iVar13 = *(int *)(param_1 + 0x360);
            goto joined_r0x000146b0956a;
          }
        }
        goto LAB_146b09435;
      }
      uVar17 = 0;
      bVar8 = true;
    }
    else {
      pfVar15 = (float *)(param_1 + 0x368);
      if (*(int *)(param_1 + 0x378) != 0) {
        plVar16 = (longlong *)(param_1 + 0x370);
        if (((longlong *)*plVar16 != (longlong *)0x0) &&
           (cVar9 = (**(code **)(*(longlong *)*plVar16 + 0x30))(), cVar9 != '\0')) {
          iVar13 = *(int *)(param_1 + 0x378);
joined_r0x000146b0956a:
          if (iVar13 == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = (longlong *)*plVar16;
          }
          fVar22 = (float)(**(code **)(*plVar16 + 0x58))();
          *pfVar15 = fVar22;
        }
      }
LAB_146b09435:
      dVar5 = dVar5 * (double)*pfVar15;
      uVar17 = 4;
      bVar8 = false;
    }
    if (*(char *)(param_1 + 0x2f0) == '\0') {
      if (*(char *)(param_1 + 0x3b4) == '\x01') {
        if (((*(int *)(param_1 + 0x3c0) != 0) &&
            (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x3c0) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x3b8);
          }
          uVar14 = (**(code **)(*plVar16 + 0x58))();
          *(undefined4 *)(param_1 + 0x3b0) = uVar14;
        }
        fVar22 = *(float *)(param_1 + 0x3b0);
        pfVar15 = (float *)FUN_146ad64ee(lVar2);
        if (*(char *)(pfVar15 + 1) == '\0') {
          fVar19 = -3.4028235e+38;
        }
        else {
          fVar19 = *pfVar15;
        }
        if (fVar22 <= fVar19) goto LAB_146b09a36;
        if (((*(int *)(param_1 + 0x3c0) != 0) &&
            (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x3c0) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x3b8);
          }
          uVar14 = (**(code **)(*plVar16 + 0x58))();
          *(undefined4 *)(param_1 + 0x3b0) = uVar14;
        }
        fVar22 = *(float *)(param_1 + 0x3b0);
        pfVar15 = (float *)FUN_146ad64ee(lVar1);
        if (*(char *)(pfVar15 + 1) == '\0') {
          fVar19 = 3.4028235e+38;
        }
        else {
          fVar19 = *pfVar15;
        }
        bVar7 = fVar22 < fVar19;
      }
      else {
LAB_146b09a36:
        bVar7 = false;
      }
      if (((*(int *)(param_1 + 0x3a8) != 0) && (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x30))(), cVar9 != '\0')) {
        if (*(int *)(param_1 + 0x3a8) == 0) {
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = *(longlong **)(param_1 + 0x3a0);
        }
        uVar14 = (**(code **)(*plVar16 + 0x58))();
        *(undefined4 *)(param_1 + 0x398) = uVar14;
      }
      fVar22 = *(float *)(param_1 + 0x398);
      pfVar15 = (float *)FUN_146ad64ee(lVar1);
      if (*(char *)(pfVar15 + 1) == '\0') {
        dVar21 = 1.7014117331926443e+38;
      }
      else {
        dVar21 = (double)*pfVar15 * 0.5;
      }
      pfVar15 = (float *)FUN_146ad64ee(lVar2);
      if (*(char *)(pfVar15 + 1) == '\0') {
        dVar6 = -1.7014117331926443e+38;
      }
      else {
        dVar6 = (double)*pfVar15 * 0.5;
      }
      dVar21 = (*(double *)(param_1 + 0x550) * 0.5 - dVar6) / (dVar21 - dVar6);
      if (1.0 <= dVar21) {
        dVar21 = 1.0;
      }
      if (dVar21 <= 0.0) {
        dVar21 = 0.0;
      }
      fVar19 = (float)dVar21;
      if (1e-08 < ABS(fVar22 + -1.0)) {
        if (bVar7) {
          pfVar15 = (float *)FUN_146ad64ee(lVar1);
          local_111 = *(char *)(pfVar15 + 1);
          fVar4 = *pfVar15;
          pfVar15 = (float *)FUN_146ad64ee(lVar2);
          cVar9 = *(char *)(pfVar15 + 1);
          fVar3 = *pfVar15;
          if (((*(int *)(param_1 + 0x3c0) != 0) &&
              (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) &&
             (local_112 = cVar9, cVar11 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(),
             cVar9 = local_112, cVar11 != '\0')) {
            if (*(int *)(param_1 + 0x3c0) == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)(param_1 + 0x3b8);
            }
            uVar14 = (**(code **)(*plVar16 + 0x58))();
            *(undefined4 *)(param_1 + 0x3b0) = uVar14;
            cVar9 = local_112;
          }
          if (local_111 == '\0') {
            dVar21 = 1.7014117331926443e+38;
          }
          else {
            dVar21 = (double)fVar4 * 0.5;
          }
          if (cVar9 == '\0') {
            dVar6 = -1.7014117331926443e+38;
          }
          else {
            dVar6 = (double)fVar3 * 0.5;
          }
          dVar21 = ((double)*(float *)(param_1 + 0x3b0) * 0.5 - dVar6) / (dVar21 - dVar6);
          if (1.0 <= dVar21) {
            dVar21 = 1.0;
          }
          if (dVar21 <= 0.0) {
            dVar21 = 0.0;
          }
          fVar19 = (float)FUN_146a86e44(fVar19,(float)dVar21,fVar22);
        }
        else {
          fVar19 = powf(1.0 - fVar19,fVar22);
          fVar19 = 1.0 - fVar19;
        }
      }
      fVar19 = (float)(dVar5 * (double)*(float *)(param_4 + 0x30)) + fVar19 * fVar18;
      if (fVar18 <= fVar19) {
        fVar19 = fVar18;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar19 = fVar19 / fVar18;
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (1e-08 < ABS(fVar22 + -1.0)) {
        if (bVar7) {
          pfVar15 = (float *)FUN_146ad64ee(lVar1);
          cVar9 = *(char *)(pfVar15 + 1);
          fVar18 = *pfVar15;
          pfVar15 = (float *)FUN_146ad64ee(lVar2);
          cVar11 = *(char *)(pfVar15 + 1);
          fVar4 = *pfVar15;
          if (((*(int *)(param_1 + 0x3c0) != 0) &&
              (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) &&
             (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(), cVar12 != '\0')) {
            if (*(int *)(param_1 + 0x3c0) == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)(param_1 + 0x3b8);
            }
            uVar14 = (**(code **)(*plVar16 + 0x58))();
            *(undefined4 *)(param_1 + 0x3b0) = uVar14;
          }
          if (cVar9 == '\0') {
            dVar5 = 1.7014117331926443e+38;
          }
          else {
            dVar5 = (double)fVar18 * 0.5;
          }
          if (cVar11 == '\0') {
            dVar21 = -1.7014117331926443e+38;
          }
          else {
            dVar21 = (double)fVar4 * 0.5;
          }
          dVar5 = ((double)*(float *)(param_1 + 0x3b0) * 0.5 - dVar21) / (dVar5 - dVar21);
          if (1.0 <= dVar5) {
            dVar5 = 1.0;
          }
          if (dVar5 <= 0.0) {
            dVar5 = 0.0;
          }
          fVar19 = (float)FUN_146a86e44(fVar19,(float)dVar5,1.0 / fVar22);
        }
        else {
          fVar19 = powf(1.0 - fVar19,1.0 / fVar22);
          fVar19 = 1.0 - fVar19;
        }
      }
      pfVar15 = (float *)FUN_146ad64ee(lVar1);
      if (*(char *)(pfVar15 + 1) == '\0') {
        dVar5 = 3.4028234663852886e+38;
      }
      else {
        dVar5 = (double)*pfVar15;
      }
      pfVar15 = (float *)FUN_146ad64ee(lVar2);
      if (*(char *)(pfVar15 + 1) == '\0') {
        dVar21 = -3.4028234663852886e+38;
      }
      else {
        dVar21 = (double)*pfVar15;
      }
      dVar5 = dVar5 * (double)fVar19 + (double)(1.0 - fVar19) * dVar21;
    }
    else {
      dVar21 = (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x30)];
      if (*(char *)(param_1 + 900) == '\x01') {
        if (((*(int *)(param_1 + 0x390) == 0) ||
            (*(longlong **)(param_1 + 0x388) == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x30))(), cVar9 == '\0')) {
          iVar13 = *(int *)(param_1 + 0x380);
        }
        else {
          if (*(int *)(param_1 + 0x390) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x388);
          }
          iVar13 = (**(code **)(*plVar16 + 0x58))();
          *(int *)(param_1 + 0x380) = iVar13;
        }
        if ((iVar13 == 0) || (*(char *)(param_1 + 0x33c) != '\x01')) goto LAB_146b096a1;
        if ((*(int *)(param_1 + 0x348) == 0) ||
           ((*(longlong **)(param_1 + 0x340) == (longlong *)0x0 ||
            (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar9 == '\0')))) {
          fVar22 = *(float *)(param_1 + 0x338);
        }
        else {
          if (*(int *)(param_1 + 0x348) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x340);
          }
          fVar22 = (float)(**(code **)(*plVar16 + 0x58))();
          *(float *)(param_1 + 0x338) = fVar22;
        }
        if (fVar22 <= 0.0) goto LAB_146b096a1;
        fVar18 = *(float *)(param_4 + 0x30);
        if (((*(int *)(param_1 + 0x390) != 0) &&
            (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x390) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x388);
          }
          uVar14 = (**(code **)(*plVar16 + 0x58))();
          *(undefined4 *)(param_1 + 0x380) = uVar14;
        }
        fVar18 = fVar18 / (float)*(int *)(param_1 + 0x380);
        uVar14 = (undefined4)*(undefined8 *)(param_1 + 0x550);
        uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x550) >> 0x20);
        if (((*(int *)(param_1 + 0x3a8) != 0) &&
            (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x3a8) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x3a0);
          }
          uVar20 = (**(code **)(*plVar16 + 0x58))();
          *(undefined4 *)(param_1 + 0x398) = uVar20;
        }
        fVar22 = *(float *)(param_1 + 0x398);
        if (((*(int *)(param_1 + 0x348) != 0) &&
            (*(longlong **)(param_1 + 0x340) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x348) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x340);
          }
          uVar20 = (**(code **)(*plVar16 + 0x58))();
          *(undefined4 *)(param_1 + 0x338) = uVar20;
        }
        dVar6 = (double)*(float *)(param_1 + 0x338);
      }
      else {
LAB_146b096a1:
        fVar18 = *(float *)(param_4 + 0x30) / fVar18;
        dVar6 = *(double *)(param_1 + 0x550);
        uVar14 = SUB84(dVar6,0);
        uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar6 = ABS(dVar6);
        if (3.4028234663852886e+38 <= dVar6) {
          dVar6 = 3.4028234663852886e+38;
        }
        if (dVar6 <= 1.0) {
          dVar6 = 1.0;
        }
        if (((*(int *)(param_1 + 0x3a8) != 0) &&
            (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x3a8) == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = *(longlong **)(param_1 + 0x3a0);
          }
          uVar20 = (**(code **)(*plVar16 + 0x58))();
          *(undefined4 *)(param_1 + 0x398) = uVar20;
        }
        fVar22 = *(float *)(param_1 + 0x398);
      }
      dVar6 = pow(dVar6,(double)fVar22);
      dVar5 = dVar21 * (double)ABS(fVar18) * dVar6 * dVar5 + (double)CONCAT44(uVar23,uVar14);
    }
    if (DAT_14c75ef58 == '\x01') {
      if (bVar8) {
        pfVar15 = (float *)FUN_146ad64ee(lVar1);
        if (*(char *)(pfVar15 + 1) == '\0') {
          dVar21 = 3.4028234663852886e+38;
        }
        else {
          dVar21 = (double)*pfVar15;
        }
        pfVar15 = (float *)FUN_146ad64ee(lVar2);
        if (*(char *)(pfVar15 + 1) == '\0') {
          dVar6 = -3.4028234663852886e+38;
        }
        else {
          dVar6 = (double)*pfVar15;
        }
        if (dVar21 <= dVar5) {
          dVar5 = dVar21;
        }
        if (dVar5 <= dVar6) {
          dVar5 = dVar6;
        }
      }
      pfVar15 = (float *)FUN_146ad64ee(param_1 + 1000);
      if (*(char *)(pfVar15 + 1) == '\0') {
        dVar21 = 3.4028234663852886e+38;
      }
      else {
        dVar21 = (double)*pfVar15;
      }
      pfVar15 = (float *)FUN_146ad64ee(param_1 + 0x3c8);
      if (*(char *)(pfVar15 + 1) == '\0') {
        dVar6 = -3.4028234663852886e+38;
      }
      else {
        dVar6 = (double)*pfVar15;
      }
      if (dVar21 <= dVar5) {
        dVar5 = dVar21;
      }
      if (dVar5 <= dVar6) {
        dVar5 = dVar6;
      }
      *(double *)(param_1 + 0x550) = dVar5;
      *(double *)(param_1 + 0x578) = dVar5;
      *(undefined4 *)(param_1 + 0x580) = uVar17;
      *(undefined1 *)(param_1 + 0x588) = 1;
    }
    else {
      dVar21 = dVar5;
      if (3.4028234663852886e+38 <= dVar5) {
        dVar21 = 3.4028234663852886e+38;
      }
      if (dVar21 <= -3.4028234663852886e+38) {
        dVar21 = -3.4028234663852886e+38;
      }
      local_128 = 1;
      FUN_14290dbae(param_1,(float)dVar21,dVar5,uVar17);
    }
  }
  uVar10 = 1;
LAB_146b0926f:
  *param_2 = uVar10;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b09e7a FUN_146b09e7a body=935 status=ok
// SIG undefined FUN_146b09e7a(void)

undefined1 *
FUN_146b09e7a(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  int iVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  float local_9c;
  longlong local_98 [2];
  longlong *local_88 [2];
  longlong *local_78 [2];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(char *)((longlong)param_1 + 0x574) != '\x01') || ((int)param_1[0xa8] != -1)) ||
     (cVar4 = (**(code **)(*param_1 + 0x198))(param_1), cVar4 == '\0')) {
    uVar5 = 0;
    goto LAB_146b09ed4;
  }
  pfVar6 = (float *)FUN_146ad64ee(param_1 + 0x85);
  if (*(char *)(pfVar6 + 1) == '\0') {
    fVar9 = 3.4028235e+38;
  }
  else {
    fVar9 = *pfVar6;
  }
  pfVar6 = (float *)FUN_146ad64ee(param_1 + 0x81);
  if (*(char *)(pfVar6 + 1) == '\0') {
    fVar10 = -3.4028235e+38;
  }
  else {
    fVar10 = *pfVar6;
  }
  if ((char)param_1[0x9e] == '\x01') {
    lVar7 = FUN_146ad64ee(param_1 + 0x9d);
    if (*(char *)(lVar7 + 4) != '\x01') goto LAB_146b09f8b;
    pfVar6 = (float *)FUN_146ad64ee(param_1 + 0x9d);
    dVar1 = (double)*pfVar6;
  }
  else {
LAB_146b09f8b:
    dVar1 = *(double *)(&DAT_149f20770 + (ulonglong)(fVar9 - fVar10 <= 10.0) * 8);
  }
  if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
    if ((*(ushort *)(param_4 + 8) & 3) != 0) {
      pfVar6 = (float *)(param_1 + 0x6a);
      if ((int)param_1[0x6c] != 0) {
        plVar8 = param_1 + 0x6b;
        if (((longlong *)*plVar8 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*(longlong *)*plVar8 + 0x30))(), cVar4 != '\0')) {
          iVar2 = (int)param_1[0x6c];
          goto joined_r0x000146b0a1e8;
        }
      }
      goto LAB_146b09ffb;
    }
  }
  else {
    pfVar6 = (float *)(param_1 + 0x6d);
    if ((int)param_1[0x6f] != 0) {
      plVar8 = param_1 + 0x6e;
      if (((longlong *)*plVar8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar8 + 0x30))(), cVar4 != '\0')) {
        iVar2 = (int)param_1[0x6f];
joined_r0x000146b0a1e8:
        if (iVar2 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)*plVar8;
        }
        fVar9 = (float)(**(code **)(*plVar8 + 0x58))();
        *pfVar6 = fVar9;
      }
    }
LAB_146b09ffb:
    dVar1 = dVar1 * (double)*pfVar6;
  }
  dVar1 = dVar1 * (double)(&DAT_149931160)[0.0 < *(float *)(param_4 + 0x6c)] + (double)param_1[0xaa]
  ;
  dVar3 = dVar1;
  if (3.4028234663852886e+38 <= dVar1) {
    dVar3 = 3.4028234663852886e+38;
  }
  lVar7 = param_1[0x5a];
  local_9c = (float)dVar1;
  (**(code **)(*(longlong *)param_1[0x5c] + 0x28))((longlong *)param_1[0x5c],local_98);
  FUN_140233b1a(local_88,local_98);
  FUN_14023423e(local_78,local_88);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_146a5407e(lVar7,local_78);
  FUN_1449db362(&local_60);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (dVar3 <= -3.4028234663852886e+38) {
    dVar3 = -3.4028234663852886e+38;
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  local_a8 = 1;
  FUN_14290dbae(param_1,(float)dVar3,SUB84(dVar1,0),0);
  lVar7 = param_1[0x5a];
  local_9c = (float)(double)param_1[0xaa];
  (**(code **)(*(longlong *)param_1[0x5c] + 0x28))((longlong *)param_1[0x5c],local_98);
  FUN_140233b1a(local_88,local_98);
  FUN_14023423e(local_78,local_88);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_146a5407e(lVar7);
  FUN_1449db362(&local_60);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  uVar5 = 1;
LAB_146b09ed4:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b0a222 FUN_146b0a222 body=117 status=ok
// SIG undefined FUN_146b0a222(void)

undefined1 * FUN_146b0a222(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_146b0b234();
  if (cVar1 == '\0') {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x571);
    *param_2 = 1;
    if (cVar1 == '\x01') {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x38) = 3;
    }
  }
  return param_2;
}



// FUNCTION 146b0a29c FUN_146b0a29c body=58 status=ok
// SIG undefined FUN_146b0a29c(void)

undefined8 FUN_146b0a29c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14697dddc();
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b0a2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x198))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146b0a2d6 FUN_146b0a2d6 body=2093 status=ok
// SIG undefined FUN_146b0a2d6(void)

int FUN_146b0a2d6(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined8 in_RAX;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  char cVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  float *local_130;
  float *local_128;
  undefined1 local_120;
  undefined4 local_114;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_bc;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(char *)(param_1 + 0x571) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x2d0) + 0x39) != DAT_14c96b238)) {
    uVar14 = *(byte *)(param_1 + 0x3b) ^ 1;
    lVar13 = (ulonglong)uVar14 * 8 + 800;
    plVar15 = (longlong *)((ulonglong)(uVar14 << 4) + param_1 + 0x300);
  }
  else {
    plVar15 = (longlong *)(param_1 + 0x308);
    lVar13 = 0x318;
  }
  lVar7 = *plVar15;
  if (param_8 == '\0') {
    cVar16 = ' ';
    local_114 = 0;
  }
  else {
    local_114 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_1 + 0x3a));
    cVar16 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
  }
  local_110 = *(longlong *)(param_1 + lVar13);
  pfVar12 = (float *)(lVar7 + 8);
  cVar9 = *(char *)(lVar7 + 0x18);
  local_108 = param_2;
  local_100 = param_4;
  if (cVar9 != '\0') {
    if (cVar9 == '\x01') {
      pfVar12 = (float *)FUN_1400c06fe(pfVar12);
    }
    else if (cVar9 == '\x03') {
      pfVar12 = param_7 + 8;
    }
    else {
      pfVar12 = param_7 + 4;
    }
  }
  local_ec = pfVar12[3] * param_7[3];
  local_f0 = pfVar12[2] * param_7[2];
  local_f4 = pfVar12[1] * param_7[1];
  local_f8 = *pfVar12 * *param_7;
  local_d4 = *(undefined8 *)param_3;
  local_e8 = *(undefined8 *)(param_3 + 3);
  local_e0 = param_3[2];
  local_dc = 0;
  local_cc = param_3[7];
  fStack_c8 = param_3[8];
  fStack_c4 = param_3[9];
  fStack_c0 = param_3[10];
  local_bc = *(undefined8 *)(param_3 + 0xb);
  local_b4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_138 = CONCAT71(local_138._1_7_,cVar16);
  local_130 = &local_f8;
  FUN_140239bd2(param_5,param_6,&local_e8,lVar7);
  param_6 = param_6 + 1;
  if (*(char *)(param_1 + 0x2f0) != '\0') goto LAB_146b0a4aa;
  if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar9 != '\0')) {
    if (*(int *)(param_1 + 0x278) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x270);
    }
    uVar17 = (**(code **)(*plVar15 + 0x58))();
    *(undefined4 *)(param_1 + 0x268) = uVar17;
  }
  fVar21 = *(float *)(param_1 + 0x268);
  if (((*(int *)(param_1 + 0x348) == 0) || (*(longlong **)(param_1 + 0x340) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar9 == '\0')) {
    fVar19 = *(float *)(param_1 + 0x338);
  }
  else {
    if (*(int *)(param_1 + 0x348) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x340);
    }
    fVar19 = (float)(**(code **)(*plVar15 + 0x58))();
    *(float *)(param_1 + 0x338) = fVar19;
  }
  if ((fVar19 != 0.0) || (NAN(fVar19))) {
    fVar21 = (fVar21 + fVar19 * 0.5) / fVar19;
    auVar23 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21),1);
    fVar21 = auVar23._0_4_ * fVar19;
  }
  lVar13 = param_1 + 0x428;
  pfVar12 = (float *)FUN_146ad64ee(lVar13);
  lVar7 = param_1 + 0x408;
  if (*(char *)(pfVar12 + 1) == '\0') {
    dVar22 = 1.7014117331926443e+38;
  }
  else {
    dVar22 = (double)*pfVar12 * 0.5;
  }
  pfVar12 = (float *)FUN_146ad64ee(lVar7);
  if (*(char *)(pfVar12 + 1) == '\0') {
    dVar8 = -1.7014117331926443e+38;
  }
  else {
    dVar8 = (double)*pfVar12 * 0.5;
  }
  dVar22 = ((double)fVar21 * 0.5 - dVar8) / (dVar22 - dVar8);
  if (1.0 <= dVar22) {
    dVar22 = 1.0;
  }
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  if (((*(int *)(param_1 + 0x3a8) != 0) && (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x30))(), cVar9 != '\0')) {
    if (*(int *)(param_1 + 0x3a8) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x3a0);
    }
    uVar17 = (**(code **)(*plVar15 + 0x58))();
    *(undefined4 *)(param_1 + 0x398) = uVar17;
  }
  fVar19 = (float)dVar22;
  fVar21 = *(float *)(param_1 + 0x398);
  if (1e-08 < ABS(fVar21 + -1.0)) {
    if (*(char *)(param_1 + 0x3b4) == '\x01') {
      if (((*(int *)(param_1 + 0x3c0) != 0) && (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0))
         && (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(), cVar9 != '\0')) {
        if (*(int *)(param_1 + 0x3c0) == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = *(longlong **)(param_1 + 0x3b8);
        }
        uVar17 = (**(code **)(*plVar15 + 0x58))();
        *(undefined4 *)(param_1 + 0x3b0) = uVar17;
      }
      fVar1 = *(float *)(param_1 + 0x3b0);
      pfVar12 = (float *)FUN_146ad64ee(lVar7);
      if (*(char *)(pfVar12 + 1) == '\0') {
        fVar20 = -3.4028235e+38;
      }
      else {
        fVar20 = *pfVar12;
      }
      if (fVar20 < fVar1) {
        if (((*(int *)(param_1 + 0x3c0) != 0) &&
            (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(), cVar9 != '\0')) {
          if (*(int *)(param_1 + 0x3c0) == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = *(longlong **)(param_1 + 0x3b8);
          }
          uVar17 = (**(code **)(*plVar15 + 0x58))();
          *(undefined4 *)(param_1 + 0x3b0) = uVar17;
        }
        fVar1 = *(float *)(param_1 + 0x3b0);
        pfVar12 = (float *)FUN_146ad64ee(lVar13);
        if (*(char *)(pfVar12 + 1) == '\0') {
          fVar20 = 3.4028235e+38;
        }
        else {
          fVar20 = *pfVar12;
        }
        if (fVar1 < fVar20) {
          pfVar12 = (float *)FUN_146ad64ee(lVar13);
          cVar9 = *(char *)(pfVar12 + 1);
          fVar1 = *pfVar12;
          pfVar12 = (float *)FUN_146ad64ee(lVar7);
          cVar6 = *(char *)(pfVar12 + 1);
          fVar20 = *pfVar12;
          if (((*(int *)(param_1 + 0x3c0) != 0) &&
              (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) &&
             (cVar10 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x30))(), cVar10 != '\0')) {
            if (*(int *)(param_1 + 0x3c0) == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)(param_1 + 0x3b8);
            }
            uVar17 = (**(code **)(*plVar15 + 0x58))();
            *(undefined4 *)(param_1 + 0x3b0) = uVar17;
          }
          if (cVar9 == '\0') {
            dVar22 = 1.7014117331926443e+38;
          }
          else {
            dVar22 = (double)fVar1 * 0.5;
          }
          if (cVar6 == '\0') {
            dVar8 = -1.7014117331926443e+38;
          }
          else {
            dVar8 = (double)fVar20 * 0.5;
          }
          dVar22 = ((double)*(float *)(param_1 + 0x3b0) * 0.5 - dVar8) / (dVar22 - dVar8);
          if (1.0 <= dVar22) {
            dVar22 = 1.0;
          }
          if (dVar22 <= 0.0) {
            dVar22 = 0.0;
          }
          fVar19 = (float)FUN_146a86e44(fVar19,(float)dVar22,fVar21);
          goto LAB_146b0a71b;
        }
      }
    }
    fVar19 = powf(1.0 - fVar19,fVar21);
    fVar19 = 1.0 - fVar19;
  }
LAB_146b0a71b:
  lVar13 = local_110;
  if (*(char *)(*(longlong *)(param_1 + 0x2d0) + 0x39) != DAT_14c96b238) {
    fVar21 = *param_3;
    fVar1 = param_3[1];
    pfVar12 = (float *)(local_110 + 8);
    cVar9 = *(char *)(local_110 + 0x18);
    if (cVar9 != '\0') {
      if (cVar9 == '\x01') {
        pfVar12 = (float *)FUN_1400c06fe(pfVar12);
      }
      else if (cVar9 == '\x03') {
        pfVar12 = param_7 + 8;
      }
      else {
        pfVar12 = param_7 + 4;
      }
    }
    local_ec = pfVar12[3] * param_7[3];
    local_f0 = pfVar12[2] * param_7[2];
    local_f4 = pfVar12[1] * param_7[1];
    local_f8 = *pfVar12 * *param_7;
    lVar7 = *(longlong *)(param_1 + 0x2f8);
    fVar20 = *(float *)(lVar7 + 0x504);
    fVar2 = *(float *)(lVar7 + 0x508);
    local_e0 = param_3[2];
    local_cc = param_3[7];
    local_e8 = CONCAT44(fVar2 * local_e0 + param_3[4],fVar20 * local_e0 + param_3[3]);
    fVar3 = param_3[8];
    fVar4 = param_3[10];
    fVar5 = param_3[9];
    fVar18 = fVar20 * local_cc + fVar2 * fVar5 + param_3[0xb];
    fStack_c0 = fVar3 * 0.0 + fVar4;
    fStack_c4 = local_cc * 0.0 + fVar5;
    fStack_c8 = fVar4 * 0.0 + fVar3;
    local_cc = fVar5 * 0.0 + local_cc;
    local_dc = 0;
    local_d4 = CONCAT44(fVar1 - (*(float *)(lVar7 + 0x510) + fVar2),
                        fVar19 * fVar21 - (*(float *)(lVar7 + 0x50c) + fVar20));
    local_bc = CONCAT44(fVar20 * fVar3 + fVar2 * fVar4 + param_3[0xc],fVar18);
    local_b4 = local_b4 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_138 = CONCAT71(local_138._1_7_,cVar16);
    local_130 = &local_f8;
    FUN_140239bd2(fVar18,param_6,&local_e8,lVar13);
  }
LAB_146b0a4aa:
  local_120 = (undefined1)local_114;
  local_128 = param_7;
  local_130 = (float *)CONCAT44(local_130._4_4_,param_6);
  local_138 = param_5;
  iVar11 = FUN_1400c0302(param_1,local_108,param_3,local_100);
  if (param_6 < iVar11) {
    param_6 = iVar11;
  }
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146b0ab04 FUN_146b0ab04 body=699 status=ok
// SIG undefined FUN_146b0ab04(void)

void FUN_146b0ab04(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f20d30;
  if ((*(char *)((longlong)param_1 + 0x571) != '\0') || (*(int *)(param_1 + 0xa8) != -1)) {
    *(undefined1 *)((longlong)param_1 + 0x571) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    param_1[0xaa] = (double)*(float *)(param_1 + 0xab);
    FUN_146b0adc0(param_1);
  }
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xa6);
  FUN_1449db362(param_1 + 0xa3);
  FUN_1449db362(param_1 + 0xa1);
  FUN_1449db362(param_1 + 0x9f);
  if (*(char *)((longlong)param_1 + 0x4ec) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  }
  FUN_1449db362(param_1 + 0x9b);
  FUN_1449db362(param_1 + 0x98);
  FUN_1449db362(param_1 + 0x95);
  FUN_1449db362(param_1 + 0x92);
  FUN_1449db362(param_1 + 0x8f);
  if (*(char *)((longlong)param_1 + 0x46c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x46c) = 0;
  }
  FUN_1449db362(param_1 + 0x8b);
  if (*(char *)((longlong)param_1 + 0x44c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44c) = 0;
  }
  FUN_1449db362(param_1 + 0x87);
  if (*(char *)((longlong)param_1 + 0x42c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  }
  FUN_1449db362(param_1 + 0x83);
  if (*(char *)((longlong)param_1 + 0x40c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x40c) = 0;
  }
  FUN_1449db362(param_1 + 0x7f);
  if (*(char *)((longlong)param_1 + 0x3ec) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3ec) = 0;
  }
  FUN_1449db362(param_1 + 0x7b);
  if (*(char *)((longlong)param_1 + 0x3cc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3cc) = 0;
  }
  FUN_1449db362(param_1 + 0x77);
  FUN_1449db362(param_1 + 0x74);
  FUN_1449db362(param_1 + 0x71);
  FUN_1449db362(param_1 + 0x6e);
  FUN_1449db362(param_1 + 0x6b);
  FUN_1449db362(param_1 + 0x68);
  plVar3 = (longlong *)param_1[0x5d];
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
  plVar3 = (longlong *)param_1[0x5b];
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
  plVar3 = (longlong *)param_1[0x59];
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
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x54);
  FUN_1449db362(param_1 + 0x52);
  FUN_1449db362(param_1 + 0x50);
  FUN_1449db362(param_1 + 0x4e);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146b0adc0 FUN_146b0adc0 body=107 status=ok
// SIG undefined FUN_146b0adc0(void)

void FUN_146b0adc0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x298) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x290), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1);
  }
  if ((*(int *)(param_1 + 0x2b8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2b0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146b0ae1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 146b0ae2c FUN_146b0ae2c body=83 status=ok
// SIG undefined FUN_146b0ae2c(void)

undefined1 FUN_146b0ae2c(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x498) != 0) && (*(longlong **)(param_1 + 0x490) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x498) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x490);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x488) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x488);
}



// FUNCTION 146b0ae80 FUN_146b0ae80 body=472 status=ok
// SIG undefined FUN_146b0ae80(void)

void FUN_146b0ae80(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  byte local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar12 = 1.1754944e-38;
  if (*(char *)(param_1 + 0x430) == '\x01') {
    lVar2 = param_1 + 0x428;
    lVar7 = FUN_146ad64ee(lVar2);
    if (*(char *)(lVar7 + 4) == '\x01') {
      pfVar8 = (float *)FUN_146ad64ee(lVar2);
      fVar13 = 3.4028235e+38;
      if (*(char *)(pfVar8 + 1) == '\0') {
        fVar12 = 3.4028235e+38;
      }
      else {
        fVar12 = *pfVar8;
      }
      param_2 = param_2 + fVar12;
      pfVar8 = (float *)FUN_146ad64ee(lVar2);
      if (*(char *)(pfVar8 + 1) != '\0') {
        fVar13 = *pfVar8;
      }
      if (((param_2 <= fVar13 & param_3) == 0) &&
         (((fVar12 = param_2, *(int *)(param_1 + 0x440) == 0 ||
           (*(longlong **)(param_1 + 0x438) == (longlong *)0x0)) ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x30))(), cVar5 == '\0')))) {
        local_80._0_5_ = CONCAT14(1,param_2);
        local_78 = (longlong *)CONCAT71(local_78._1_7_,1);
        local_70 = 0;
        uStack_68 = 0;
        FUN_146b05bf6(param_1);
        FUN_1449db362(&local_70);
      }
    }
  }
  if (((*(int *)(param_1 + 0x510) != 0) && (*(longlong **)(param_1 + 0x508) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x508) + 0x30))(), cVar5 != '\0')) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_146b0af19:
      local_80 = 0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar10[1];
      do {
        if (iVar6 == 0) goto LAB_146b0af19;
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_80 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    if (*(int *)(param_1 + 0x510) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x508);
    }
    local_88 = param_3;
    local_78 = plVar10;
    (**(code **)(*plVar9 + 0x58))(plVar9,fVar12,&local_80,1);
    if (!bVar3) {
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
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b0b05a FUN_146b0b05a body=472 status=ok
// SIG undefined FUN_146b0b05a(void)

void FUN_146b0b05a(longlong param_1,float param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  byte local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar12 = 1.1754944e-38;
  if (*(char *)(param_1 + 0x410) == '\x01') {
    lVar2 = param_1 + 0x408;
    lVar7 = FUN_146ad64ee(lVar2);
    if (*(char *)(lVar7 + 4) == '\x01') {
      pfVar8 = (float *)FUN_146ad64ee(lVar2);
      fVar13 = -3.4028235e+38;
      if (*(char *)(pfVar8 + 1) == '\0') {
        fVar12 = -3.4028235e+38;
      }
      else {
        fVar12 = *pfVar8;
      }
      param_2 = param_2 + fVar12;
      pfVar8 = (float *)FUN_146ad64ee(lVar2);
      if (*(char *)(pfVar8 + 1) != '\0') {
        fVar13 = *pfVar8;
      }
      if (((fVar13 <= param_2 & param_3) == 0) &&
         (((fVar12 = param_2, *(int *)(param_1 + 0x420) == 0 ||
           (*(longlong **)(param_1 + 0x418) == (longlong *)0x0)) ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x418) + 0x30))(), cVar5 == '\0')))) {
        local_80._0_5_ = CONCAT14(1,param_2);
        local_78 = (longlong *)CONCAT71(local_78._1_7_,1);
        local_70 = 0;
        uStack_68 = 0;
        FUN_146b05c72(param_1);
        FUN_1449db362(&local_70);
      }
    }
  }
  if (((*(int *)(param_1 + 0x520) != 0) && (*(longlong **)(param_1 + 0x518) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x518) + 0x30))(), cVar5 != '\0')) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_146b0b0f3:
      local_80 = 0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar10[1];
      do {
        if (iVar6 == 0) goto LAB_146b0b0f3;
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_80 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    if (*(int *)(param_1 + 0x520) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x518);
    }
    local_88 = param_3;
    local_78 = plVar10;
    (**(code **)(*plVar9 + 0x58))(plVar9,fVar12,&local_80,1);
    if (!bVar3) {
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
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b0b234 FUN_146b0b234 body=83 status=ok
// SIG undefined FUN_146b0b234(void)

undefined1 FUN_146b0b234(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x4b0) != 0) && (*(longlong **)(param_1 + 0x4a8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4b0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4a8);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x4a0) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x4a0);
}



// FUNCTION 146b0b288 FUN_146b0b288 body=167 status=ok
// SIG undefined FUN_146b0b288(void)

void FUN_146b0b288(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b0b303;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b0b303;
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
LAB_146b0b303:
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
                    /* WARNING: Could not recover jumptable at 0x000146b0b323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b0b330 FUN_146b0b330 body=6144 status=ok
// SIG undefined FUN_146b0b330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146b0b330(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_1428 [32];
  undefined1 *local_1408;
  longlong local_1400;
  undefined4 *local_13f8;
  longlong local_13f0;
  longlong local_13e8;
  undefined4 *local_13e0;
  longlong local_13d8;
  undefined1 local_13c9;
  undefined1 local_13c8 [8];
  longlong *local_13c0;
  undefined1 local_13a9;
  undefined1 local_13a8 [8];
  longlong *local_13a0;
  undefined8 local_1390;
  undefined1 *puStack_1388;
  undefined4 local_1380;
  undefined1 local_137c;
  undefined8 local_1378;
  undefined8 uStack_1370;
  longlong local_1368;
  undefined1 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  longlong *local_1340;
  undefined8 local_1338;
  longlong *local_1330;
  undefined1 local_1321;
  undefined8 local_1320;
  longlong *local_1318;
  undefined2 local_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined8 local_12e8;
  undefined4 local_12e0;
  undefined4 local_12d8;
  undefined1 local_12d4;
  undefined8 local_12d0;
  undefined4 local_12c8;
  undefined2 local_12c0;
  undefined8 local_12b8;
  undefined4 local_12b0;
  undefined2 local_12a8;
  undefined8 local_12a0;
  undefined4 local_1298;
  undefined2 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined1 local_1278 [96];
  undefined1 local_1218;
  undefined8 local_1210;
  undefined4 local_1208;
  undefined2 local_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  longlong *local_11e0;
  undefined8 local_11d8;
  longlong *local_11d0;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined1 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined1 local_1181;
  undefined8 local_1180;
  longlong *local_1178;
  undefined4 local_1168;
  undefined1 local_1164;
  undefined8 local_1160;
  undefined4 local_1158;
  undefined1 local_1150 [96];
  undefined1 local_10f0;
  undefined8 local_10e8;
  undefined4 local_10e0;
  undefined8 local_10d8;
  longlong *local_10d0;
  undefined8 local_10c8;
  longlong *local_10c0;
  undefined4 local_10b8;
  undefined4 uStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined1 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined4 local_1090;
  undefined1 local_108c;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  longlong *local_1070;
  undefined8 local_1068;
  longlong *local_1060;
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined8 local_1010;
  undefined8 uStack_1008;
  code *local_ff8;
  undefined4 local_ff0;
  longlong local_e50;
  undefined1 local_e48;
  undefined1 local_e40 [16];
  undefined4 local_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined1 local_e18 [88];
  code *local_dc0;
  undefined4 local_db8;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined2 local_c90;
  undefined1 local_c88 [432];
  undefined1 local_ad8 [96];
  undefined1 local_a78;
  undefined1 local_a70 [224];
  undefined2 local_990;
  undefined1 local_988 [384];
  undefined1 local_808 [192];
  code *local_748;
  undefined4 local_740;
  undefined1 local_570 [96];
  undefined1 local_510;
  undefined1 local_508 [560];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146b0b346;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1428;
  lVar11 = *(longlong *)(param_2 + 0x1a8);
  *(longlong *)(param_1 + 0x2f8) = lVar11;
  local_1018 = *(undefined4 *)(lVar11 + 0x4f0);
  local_1028 = *(undefined8 *)(lVar11 + 0x4e0);
  uStack_1020 = *(undefined8 *)(lVar11 + 0x4e8);
  local_1014 = 1;
  local_1010 = 0;
  uStack_1008 = 0;
  FUN_140a5c8a2(param_1 + 0x250,param_1,&local_1028);
  FUN_1449db362(&local_1010);
  puVar9 = *(undefined8 **)(param_2 + 0x530);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar9 = &PTR_FUN_149f20960;
    puVar9[1] = 0x600000001;
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_149f20a00;
    plVar10[2] = (longlong)puVar9;
    if (plVar10 == (longlong *)0x0) goto LAB_146b0b441;
LAB_146b0b453:
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar5 = false;
  }
  else {
    plVar10 = *(longlong **)(param_2 + 0x538);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      goto LAB_146b0b453;
    }
LAB_146b0b441:
    bVar5 = true;
    plVar10 = (longlong *)0x0;
  }
  plVar17 = *(longlong **)(param_1 + 0x2e8);
  *(undefined8 **)(param_1 + 0x2e0) = puVar9;
  *(longlong **)(param_1 + 0x2e8) = plVar10;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar17 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (!bVar5) {
    LOCK();
    plVar17 = plVar10 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  if ((*(longlong *)(param_2 + 0x530) != 0) &&
     (lVar11 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))(), lVar11 != 0)) {
    uVar12 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))();
    local_748 = FUN_146b0cb32;
    local_740 = 0;
    FUN_146b0d5da(&local_d00,param_1);
    FUN_1448b6402(uVar12,&local_748,&local_d00);
    FUN_1449db362(&local_d00);
  }
  *(undefined1 *)(param_1 + 0x26c) = *(undefined1 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x1b0);
  plVar10 = (longlong *)(param_1 + 0x270);
  FUN_140a52b3c(plVar10,param_2 + 0x1b8);
  FUN_140328a42(param_1 + 0x280,param_2 + 0x478);
  FUN_146b06f46(param_1 + 0x290,param_2 + 0x488);
  FUN_14009d848(param_1 + 0x2a0,param_2 + 0x498);
  FUN_140328a42(param_1 + 0x2b0,param_2 + 0x4a8);
  *(undefined1 *)(param_1 + 0x52c) = *(undefined1 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x4e8);
  FUN_140a52b3c(param_1 + 0x530,param_2 + 0x4f0);
  puVar20 = (undefined4 *)(param_1 + 0x3c8);
  if ((undefined4 *)(param_2 + 0x1c8) != puVar20) {
    if (*(char *)(param_2 + 0x1cc) == '\x01') {
      *puVar20 = *(undefined4 *)(param_2 + 0x1c8);
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3cc) != '\x01') goto LAB_146b0b5e1;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x3cc) = uVar8;
  }
LAB_146b0b5e1:
  *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_2 + 0x1d0);
  FUN_146af763c(param_1 + 0x3d8,param_2 + 0x1d8);
  puVar19 = (undefined4 *)(param_1 + 1000);
  if ((undefined4 *)(param_2 + 0x1e8) != puVar19) {
    if (*(char *)(param_2 + 0x1ec) == '\x01') {
      *puVar19 = *(undefined4 *)(param_2 + 0x1e8);
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3ec) != '\x01') goto LAB_146b0b617;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x3ec) = uVar8;
  }
LAB_146b0b617:
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 0x1f0);
  FUN_146af763c(param_1 + 0x3f8,param_2 + 0x1f8);
  lVar11 = FUN_146ad64ee((undefined4 *)(param_2 + 0x208));
  if (*(char *)(lVar11 + 4) != '\0') {
    puVar20 = (undefined4 *)(param_2 + 0x208);
  }
  puVar2 = (undefined4 *)(param_1 + 0x408);
  if (puVar20 != puVar2) {
    if (*(char *)(puVar20 + 1) == '\x01') {
      *puVar2 = *puVar20;
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x40c) != '\x01') goto LAB_146b0b65d;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x40c) = uVar8;
  }
LAB_146b0b65d:
  *(undefined1 *)(param_1 + 0x410) = *(undefined1 *)(puVar20 + 2);
  FUN_146af763c(param_1 + 0x418,puVar20 + 4);
  lVar11 = FUN_146ad64ee((undefined4 *)(param_2 + 0x228));
  if (*(char *)(lVar11 + 4) != '\0') {
    puVar19 = (undefined4 *)(param_2 + 0x228);
  }
  puVar20 = (undefined4 *)(param_1 + 0x428);
  if (puVar19 != puVar20) {
    if (*(char *)(puVar19 + 1) == '\x01') {
      *puVar20 = *puVar19;
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x42c) != '\x01') goto LAB_146b0b6a1;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x42c) = uVar8;
  }
LAB_146b0b6a1:
  *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)(puVar19 + 2);
  FUN_146af763c(param_1 + 0x438,puVar19 + 4);
  lVar11 = FUN_146b06eb6((undefined4 *)(param_2 + 0x248));
  local_13f8 = puVar2;
  if (*(char *)(lVar11 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x24c),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x24c) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x248));
    }
    local_cf8._0_1_ = *(undefined1 *)(param_2 + 0x250);
    local_cf0 = 0;
    uStack_ce8 = (ulonglong)uStack_ce8._4_4_ << 0x20;
    FUN_146aa7480(&local_cf0,param_2 + 600);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000001);
    local_cf8._0_1_ = 1;
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar9 = (undefined8 *)(param_1 + 0x448);
  if (&local_d00 != puVar9) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar9 = (undefined4)local_d00;
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x44c) != '\x01') goto LAB_146b0b7f3;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x44c) = uVar8;
  }
LAB_146b0b7f3:
  *(undefined1 *)(param_1 + 0x450) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x458,&local_cf0);
  FUN_1449db362(&local_cf0);
  lVar11 = FUN_146b06eb6((undefined4 *)(param_2 + 0x268));
  if (*(char *)(lVar11 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x26c),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x26c) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x268));
    }
    local_cf8 = CONCAT31(local_cf8._1_3_,*(undefined1 *)(param_2 + 0x270));
    local_cf0 = 0;
    uStack_ce8 = uStack_ce8 & 0xffffffff00000000;
    FUN_146aa7480(&local_cf0,param_2 + 0x278);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000006);
    local_cf8 = CONCAT31(local_cf8._1_3_,1);
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar3 = (undefined8 *)(param_1 + 0x468);
  if (&local_d00 != puVar3) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar3 = (undefined4)local_d00;
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x46c) != '\x01') goto LAB_146b0b8d4;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x46c) = uVar8;
  }
LAB_146b0b8d4:
  *(undefined1 *)(param_1 + 0x470) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x478,&local_cf0);
  FUN_1449db362(&local_cf0);
  FUN_146b0cc2a(param_1,puVar3);
  FUN_146b0cd02(param_1,puVar9);
  *(undefined2 *)(param_1 + 0x488) = *(undefined2 *)(param_2 + 0x288);
  FUN_14096c7c0(param_1 + 0x490,param_2 + 0x290);
  *(undefined2 *)(param_1 + 0x4a0) = *(undefined2 *)(param_2 + 0x2a0);
  FUN_14096c7c0(param_1 + 0x4a8,param_2 + 0x2a8);
  *(undefined2 *)(param_1 + 0x4b8) = *(undefined2 *)(param_2 + 0x330);
  plVar17 = (longlong *)(param_1 + 0x4c0);
  FUN_14096c7c0(plVar17,param_2 + 0x338);
  *(undefined2 *)(param_1 + 0x4d0) = *(undefined2 *)(param_2 + 0x348);
  plVar18 = (longlong *)(param_1 + 0x4d8);
  FUN_14096c7c0(plVar18,param_2 + 0x350);
  FUN_146b074f8(param_1 + 0x508,param_2 + 0x360);
  FUN_146b074f8(param_1 + 0x518,param_2 + 0x370);
  *(undefined1 *)(param_1 + 0x574) = *(undefined1 *)(param_2 + 0x3b0);
  *(undefined1 *)(param_1 + 0x575) = *(undefined1 *)(param_2 + 0x3b1);
  if ((undefined4 *)(param_2 + 0x3b8) != (undefined4 *)(param_1 + 0x4e8)) {
    if (*(char *)(param_2 + 0x3bc) == '\x01') {
      *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x3b8);
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x4ec) != '\x01') goto LAB_146b0b9f1;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x4ec) = uVar8;
  }
LAB_146b0b9f1:
  *(undefined1 *)(param_1 + 0x4f0) = *(undefined1 *)(param_2 + 0x3c0);
  FUN_146af763c(param_1 + 0x4f8,param_2 + 0x3c8);
  *(undefined1 *)(param_1 + 0x573) = *(undefined1 *)(param_2 + 0x540);
  if (((*(int *)(param_1 + 0x278) != 0) && ((longlong *)*plVar10 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x278) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)*plVar10;
    }
    uVar21 = (**(code **)(*plVar10 + 0x58))();
    *(undefined4 *)(param_1 + 0x268) = uVar21;
  }
  pfVar14 = (float *)(param_1 + 0x55c);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x28))
            (*(longlong **)(param_1 + 0x2e0),&local_d00,pfVar14);
  if ((undefined8 *)(param_1 + 0x560) == &local_d00) {
    if (local_d00 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x560) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_1 + 0x560) = local_d00;
    local_d00 = (code *)0x0;
    *(undefined4 *)(param_1 + 0x568) = local_cf8;
    *(undefined4 *)(param_1 + 0x56c) = local_cf4;
  }
  *(undefined1 *)(param_1 + 0x570) = 0;
  *(double *)(param_1 + 0x550) = (double)*(float *)(param_1 + 0x55c);
  if (((*(int *)(param_1 + 0x4c8) != 0) && ((longlong *)*plVar17 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*(longlong *)*plVar17 + 0x30))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x4c8) == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = (longlong *)*plVar17;
    }
    uVar8 = (**(code **)(*plVar17 + 0x58))();
    *(undefined1 *)(param_1 + 0x4b8) = uVar8;
  }
  if (*(char *)(param_1 + 0x4b8) == '\x01') {
    fVar4 = *pfVar14;
    pfVar13 = (float *)FUN_146ad64ee(puVar20);
    if (*(char *)(pfVar13 + 1) == '\0') {
      fVar22 = 3.4028235e+38;
    }
    else {
      fVar22 = *pfVar13;
    }
    if (fVar22 < fVar4) {
      fVar4 = *(float *)(param_1 + 0x55c);
      pfVar14 = (float *)FUN_146ad64ee(puVar20);
      if (*(char *)(pfVar14 + 1) == '\0') {
        fVar22 = 3.4028235e+38;
      }
      else {
        fVar22 = *pfVar14;
      }
      FUN_146b0ae80(param_1,fVar4 - fVar22,1);
      goto LAB_146b0bd2b;
    }
  }
  if (((*(int *)(param_1 + 0x4e0) != 0) && ((longlong *)*plVar18 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*(longlong *)*plVar18 + 0x30))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x4e0) == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = (longlong *)*plVar18;
    }
    uVar8 = (**(code **)(*plVar18 + 0x58))();
    *(undefined1 *)(param_1 + 0x4d0) = uVar8;
  }
  puVar20 = local_13f8;
  if (*(char *)(param_1 + 0x4d0) == '\x01') {
    fVar4 = *pfVar14;
    pfVar14 = (float *)FUN_146ad64ee(local_13f8);
    if (*(char *)(pfVar14 + 1) == '\0') {
      fVar22 = -3.4028235e+38;
    }
    else {
      fVar22 = *pfVar14;
    }
    if (fVar4 < fVar22) {
      fVar4 = *(float *)(param_1 + 0x55c);
      pfVar14 = (float *)FUN_146ad64ee(puVar20);
      if (*(char *)(pfVar14 + 1) == '\0') {
        fVar22 = -3.4028235e+38;
      }
      else {
        fVar22 = *pfVar14;
      }
      FUN_146b0b05a(param_1,fVar4 - fVar22,1);
    }
  }
LAB_146b0bd2b:
  FUN_146b0757c(param_1);
  *(undefined1 *)(param_1 + 0x39c) = *(undefined1 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x380);
  FUN_140a52b3c(param_1 + 0x3a0,param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_2 + 0x39c);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x398);
  FUN_140a52b3c(param_1 + 0x3b8,param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_2 + 700);
  FUN_140a52b3c(param_1 + 0x340,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x354) = *(undefined1 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x2e8);
  FUN_140a52b3c(param_1 + 0x358,param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x36c) = *(undefined1 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x300);
  FUN_140a52b3c(param_1 + 0x370,param_2 + 0x308);
  *(undefined1 *)(param_1 + 900) = *(undefined1 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x318);
  FUN_146a24854(param_1 + 0x388,param_2 + 800);
  lVar15 = *(longlong *)(param_2 + 0x1a8) + 0x170;
  *(longlong *)(param_1 + 0x300) = lVar15;
  *(longlong *)(param_1 + 0x310) = *(longlong *)(param_2 + 0x1a8) + 0x10;
  lVar11 = *(longlong *)(param_2 + 0x1a8) + 0xc0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x154) & 4) == 0) {
    lVar11 = lVar15;
  }
  *(longlong *)(param_1 + 0x308) = lVar11;
  lVar15 = *(longlong *)(param_2 + 0x1a8) + 0x220;
  *(longlong *)(param_1 + 0x318) = lVar15;
  lVar11 = *(longlong *)(param_2 + 0x1a8) + 0x2d0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x364) & 4) == 0) {
    lVar11 = lVar15;
  }
  *(longlong *)(param_1 + 800) = lVar11;
  *(longlong *)(param_1 + 0x328) = *(longlong *)(param_2 + 0x1a8) + 0x380;
  lVar11 = *(longlong *)(param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x571) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
  local_1048 = *(undefined1 *)(param_2 + 0x460);
  local_1058 = *(undefined4 *)(param_2 + 0x450);
  uStack_1054 = *(undefined4 *)(param_2 + 0x454);
  uStack_1050 = *(undefined4 *)(param_2 + 0x458);
  uStack_104c = *(undefined4 *)(param_2 + 0x45c);
  local_1040 = 0;
  local_1038 = 0;
  FUN_140a58be0(&local_1040,param_2 + 0x468);
  local_13f8 = (undefined4 *)FUN_140a58d14(param_1 + 0x218,&local_1058);
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  local_1090 = 0x3f800000;
  local_108c = 1;
  local_1088 = 0;
  uStack_1080 = 0;
  lVar15 = FUN_140a5475a(local_2d8);
  local_10b8 = *(undefined4 *)(lVar11 + 0x4f4);
  uStack_10b4 = *(undefined4 *)(lVar11 + 0x4f8);
  uStack_10b0 = *(undefined4 *)(lVar11 + 0x4fc);
  uStack_10ac = *(undefined4 *)(lVar11 + 0x500);
  local_10a8 = 1;
  local_10a0 = 0;
  uStack_1098 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = local_10b8;
  *(undefined4 *)(lVar15 + 0x1c) = uStack_10b4;
  *(undefined4 *)(lVar15 + 0x20) = uStack_10b0;
  *(undefined4 *)(lVar15 + 0x24) = uStack_10ac;
  local_1400 = lVar11;
  FUN_144a450dc(lVar15 + 0x30,&local_10a0);
  FUN_1449db362(&local_10a0);
  *(undefined4 *)(lVar15 + 0x40) = 0;
  *(undefined1 *)(lVar15 + 0x44) = 1;
  *(undefined4 *)(lVar15 + 0x48) = 2;
  *(undefined1 *)(lVar15 + 0x4c) = 1;
  FUN_140a570d8(&local_748);
  local_13f0 = param_2 + 0x3d8;
  FUN_144a87366(local_1150);
  local_10f0 = *(undefined1 *)(param_2 + 0x438);
  local_13e8 = param_2 + 0x440;
  local_10e8 = 0;
  local_10e0 = 0;
  FUN_140a5d470(&local_10e8);
  FUN_1412cc59c(local_570,local_1150);
  local_510 = local_10f0;
  FUN_144a450dc(local_508,&local_10e8);
  FUN_141515cba(local_1150);
  local_d00 = FUN_146b0ceb2;
  local_cf8 = 0;
  uVar12 = FUN_146b0cdda(&local_748,param_1,&local_d00);
  local_d00 = FUN_146b0cfc0;
  local_cf8 = 0;
  lVar11 = FUN_146b0cf10(uVar12,param_1,&local_d00);
  local_1168 = *(undefined4 *)(param_2 + 0x500);
  local_1164 = *(undefined1 *)(param_2 + 0x504);
  local_13d8 = param_2 + 0x508;
  local_1160 = 0;
  local_1158 = 0;
  FUN_140a5d648(&local_1160);
  *(undefined1 *)(lVar11 + 0x414) = local_1164;
  *(undefined4 *)(lVar11 + 0x410) = local_1168;
  FUN_144a450dc(lVar11 + 0x418,&local_1160);
  FUN_1449db362(&local_1160);
  local_1408 = &local_1181;
  FUN_140a54526(&local_1180,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",300);
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1178 + 1) = (int)local_1178[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = local_1180;
  *(longlong **)(param_1 + 0x2c8) = local_1178;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar10 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  lVar6 = local_1400;
  puVar20 = (undefined4 *)(local_1400 + 0x4f4);
  local_13e0 = (undefined4 *)(param_2 + 0x500);
  FUN_140a52852(&local_1180,&local_10d8,lVar11);
  local_10c8 = local_10d8;
  local_10c0 = local_10d0;
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10d0 + 1) = (int)local_10d0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar15,&local_10c8);
  local_1400 = FUN_140a52392(local_218,uVar12);
  FUN_140a50426(local_808);
  local_11a0 = 0x3f800000;
  local_119c = 1;
  local_1198 = 0;
  uStack_1190 = 0;
  lVar11 = FUN_140a5475a(local_808);
  local_11c8 = *puVar20;
  uStack_11c4 = *(undefined4 *)(lVar6 + 0x4f8);
  uStack_11c0 = *(undefined4 *)(lVar6 + 0x4fc);
  uStack_11bc = *(undefined4 *)(lVar6 + 0x500);
  local_11b8 = 1;
  local_11b0 = 0;
  uStack_11a8 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = local_11c8;
  *(undefined4 *)(lVar11 + 0x1c) = uStack_11c4;
  *(undefined4 *)(lVar11 + 0x20) = uStack_11c0;
  *(undefined4 *)(lVar11 + 0x24) = uStack_11bc;
  FUN_144a450dc(lVar11 + 0x30,&local_11b0);
  FUN_1449db362(&local_11b0);
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  FUN_146a63634(&local_d00);
  local_1200 = CONCAT11(1,DAT_14c96b1e1);
  local_11f8 = 0;
  uStack_11f0 = 0;
  local_c90 = local_1200;
  FUN_144a450dc(local_c88,&local_11f8);
  FUN_1449db362(&local_11f8);
  FUN_144a87366(local_1278,local_13f0);
  local_1218 = *(undefined1 *)(param_2 + 0x438);
  local_1210 = 0;
  local_1208 = 0;
  FUN_140a5d470(&local_1210,local_13e8);
  FUN_1412cc59c(local_ad8,local_1278);
  local_a78 = local_1218;
  FUN_144a450dc(local_a70,&local_1210);
  FUN_141515cba(local_1278);
  local_1290 = 0x101;
  local_1288 = 0;
  uStack_1280 = 0;
  local_990 = 0x101;
  FUN_144a450dc(local_988,&local_1288);
  FUN_1449db362(&local_1288);
  local_ff8 = FUN_146b0ceb2;
  local_ff0 = 0;
  lVar15 = FUN_146b0d02e(&local_d00,param_1);
  local_dc0 = (code *)&LAB_146b0d106;
  local_db8 = 0;
  FUN_146b0e5f2(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(lVar15 + 0x410,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_146b0d118;
  local_db8 = 0;
  FUN_146b0eaea(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(lVar15 + 0x420,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_146b0d3f4;
  local_db8 = 0;
  FUN_146b0efd4(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(lVar15 + 0x430,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_12a8 = *(undefined2 *)(param_2 + 0x4b8);
  local_12a0 = 0;
  local_1298 = 0;
  FUN_14096c7c0(&local_12a0,param_2 + 0x4c0);
  *(undefined2 *)(lVar15 + 0x3b8) = local_12a8;
  FUN_144a450dc(lVar15 + 0x3c0,&local_12a0);
  FUN_1449db362(&local_12a0);
  local_12c0 = *(undefined2 *)(param_2 + 0x4d0);
  local_12b8 = 0;
  local_12b0 = 0;
  FUN_14096c7c0(&local_12b8,param_2 + 0x4d8);
  *(undefined2 *)(lVar15 + 0x458) = local_12c0;
  FUN_144a450dc(lVar15 + 0x460,&local_12b8);
  FUN_1449db362(&local_12b8);
  local_ff8 = FUN_146b0cfc0;
  local_ff0 = 0;
  lVar15 = FUN_146b0d52a(lVar15,param_1,&local_ff8);
  local_12d8 = *(undefined4 *)(param_2 + 0x518);
  local_12d4 = *(undefined1 *)(param_2 + 0x51c);
  local_12d0 = 0;
  local_12c8 = 0;
  FUN_146a74c58(&local_12d0,param_2 + 0x520);
  *(undefined1 *)(lVar15 + 0x4a4) = local_12d4;
  *(undefined4 *)(lVar15 + 0x4a0) = local_12d8;
  FUN_144a450dc(lVar15 + 0x4a8,&local_12d0);
  FUN_1449db362(&local_12d0);
  local_12ec = *(undefined1 *)(local_13e0 + 1);
  local_12f0 = *local_13e0;
  local_12e8 = 0;
  local_12e0 = 0;
  FUN_140a5d648(&local_12e8,local_13d8);
  *(undefined1 *)(lVar15 + 0x3d4) = local_12ec;
  *(undefined4 *)(lVar15 + 0x3d0) = local_12f0;
  FUN_144a450dc(lVar15 + 0x3d8,&local_12e8);
  FUN_1449db362(&local_12e8);
  local_1308 = 0x101;
  local_1300 = 0;
  uStack_12f8 = 0;
  *(undefined2 *)(lVar15 + 0x4c0) = 0x101;
  FUN_144a450dc(lVar15 + 0x4c8,&local_1300);
  FUN_1449db362(&local_1300);
  FUN_146a26a60(lVar15 + 0x490,param_2 + 0x548);
  local_1408 = &local_1321;
  FUN_146a7c5de(&local_1320,"SEditableText","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x138
               );
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1318 + 1) = (int)local_1318[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d0) = local_1320;
  *(longlong **)(param_1 + 0x2d8) = local_1318;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar10 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  FUN_146a639a0(&local_1320,&local_11e8,lVar15);
  local_11d8 = local_11e8;
  local_11d0 = local_11e0;
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11e0 + 1) = (int)local_11e0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar11,&local_11d8);
  uVar12 = FUN_140a52392(local_1400,uVar12);
  FUN_140a50426(&local_dc0);
  lVar11 = FUN_140a52578(&local_dc0);
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  FUN_140a53334(&local_ff8);
  local_1368 = *(longlong *)(param_2 + 0x1a8) + 0x430;
  local_1360 = 1;
  local_1358 = 0;
  uStack_1350 = 0;
  local_e48 = 1;
  local_e50 = local_1368;
  FUN_144a450dc(local_e40,&local_1358);
  FUN_1449db362(&local_1358);
  local_1390 = 0x3f800000;
  puStack_1388 = &DAT_3f8000003f800000;
  local_1380 = CONCAT22(local_1380._2_2_,2);
  local_137c = 1;
  local_1378 = 0;
  uStack_1370 = 0;
  local_e30 = 0x3f800000;
  uStack_e2c = 0;
  uStack_e28 = 0x3f800000;
  uStack_e24 = 0x3f800000;
  local_e20 = local_1380;
  local_e1c = 1;
  FUN_144a450dc(local_e18,&local_1378);
  FUN_1449db362(&local_1378);
  local_1408 = &local_13a9;
  FUN_140a554b8(local_13a8,"SImage","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x14d);
  FUN_140a52c70(local_13a8,&local_1348,&local_ff8);
  local_1338 = local_1348;
  local_1330 = local_1340;
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1340 + 1) = (int)local_1340[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fe8e(lVar11,&local_1338);
  uVar12 = FUN_140a52392(uVar12,uVar16);
  local_1408 = &local_13c9;
  FUN_140a541dc(local_13c8,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x124
               );
  FUN_140a50ec6(local_13c8,&local_1078,uVar12);
  local_1068 = local_1078;
  local_1060 = local_1070;
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1070 + 1) = (int)local_1070[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_13f8,&local_1068);
  plVar10 = local_1060;
  if (local_1060 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_1060 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_1060)(local_1060);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1070 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_1070)(local_1070);
      LOCK();
      piVar1 = (int *)((longlong)local_1070 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1070 + 0x10))(local_1070);
      }
    }
  }
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_13c0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_13c0)(local_13c0);
      LOCK();
      piVar1 = (int *)((longlong)local_13c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13c0 + 0x10))(local_13c0);
      }
    }
  }
  plVar10 = local_1330;
  if (local_1330 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_1330 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_1330)(local_1330);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1340 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_1340)(local_1340);
      LOCK();
      piVar1 = (int *)((longlong)local_1340 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1340 + 0x10))(local_1340);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_13a0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar1 = (int *)((longlong)local_13a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  FUN_140a55a86(&local_ff8);
  FUN_140a509a6(&local_dc0);
  plVar10 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_11d0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_11e0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_11e0)(local_11e0);
      LOCK();
      piVar1 = (int *)((longlong)local_11e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11e0 + 0x10))(local_11e0);
      }
    }
  }
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1318 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_1318)(local_1318);
      LOCK();
      piVar1 = (int *)((longlong)local_1318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1318 + 0x10))(local_1318);
      }
    }
  }
  FUN_146a63a14(&local_d00);
  FUN_140a509a6(local_808);
  plVar10 = local_10c0;
  if (local_10c0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_10c0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_10c0)(local_10c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_10d0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_10d0)(local_10d0);
      LOCK();
      piVar1 = (int *)((longlong)local_10d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_10d0 + 0x10))(local_10d0);
      }
    }
  }
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1178 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_1178)(local_1178);
      LOCK();
      piVar1 = (int *)((longlong)local_1178 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1178 + 0x10))(local_1178);
      }
    }
  }
  FUN_140a59ae6(&local_748);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  if ((local_60 ^ (ulonglong)auStack_1428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b0cb32 FUN_146b0cb32 body=247 status=ok
// SIG undefined FUN_146b0cb32(void)

void FUN_146b0cb32(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x270);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x268) = uVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x28))
            (*(longlong **)(param_1 + 0x2e0),&local_28,param_1 + 0x55c);
  if ((longlong *)(param_1 + 0x560) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x560) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x560) = local_28;
    *(undefined4 *)(param_1 + 0x568) = local_20;
    *(undefined4 *)(param_1 + 0x56c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0cc2a FUN_146b0cc2a body=215 status=ok
// SIG undefined FUN_146b0cc2a(void)

void FUN_146b0cc2a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x46c);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x468);
    }
    local_38 = *(undefined1 *)(param_1 + 0x470);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x478);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x570) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0cd02 FUN_146b0cd02 body=215 status=ok
// SIG undefined FUN_146b0cd02(void)

void FUN_146b0cd02(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x44c);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x448);
    }
    local_38 = *(undefined1 *)(param_1 + 0x450);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x458);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x570) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0cdda FUN_146b0cdda body=215 status=ok
// SIG undefined FUN_146b0cdda(void)

longlong FUN_146b0cdda(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146b0dabe(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0ceb2 FUN_146b0ceb2 body=93 status=ok
// SIG undefined FUN_146b0ceb2(void)

undefined8 FUN_146b0ceb2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b0dfe8(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0cf10 FUN_146b0cf10 body=175 status=ok
// SIG undefined FUN_146b0cf10(void)

longlong FUN_146b0cf10(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146b0e100(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x42c) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x428) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x430,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0cfc0 FUN_146b0cfc0 body=109 status=ok
// SIG undefined FUN_146b0cfc0(void)

float FUN_146b0cfc0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x538) != 0) && (*(longlong **)(param_1 + 0x530) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x530) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x538) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x530);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x528) = uVar3;
    }
  }
  fVar5 = *(float *)(param_1 + 0x528) - *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x450);
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  return fVar4;
}



// FUNCTION 146b0d02e FUN_146b0d02e body=215 status=ok
// SIG undefined FUN_146b0d02e(void)

longlong FUN_146b0d02e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146b0dabe(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0d118 FUN_146b0d118 body=730 status=ok
// SIG undefined FUN_146b0d118(void)

void FUN_146b0d118(longlong param_1,undefined8 param_2)

{
  wint_t _C;
  void *_Src;
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  wint_t *pwVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90 [2];
  longlong local_80 [2];
  wint_t *local_70;
  int local_68;
  undefined4 local_64;
  float local_60;
  undefined4 uStack_5c;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x572) == '\0') {
    *(undefined1 *)(param_1 + 0x572) = 1;
    puVar6 = (undefined8 *)FUN_1447a1f4a(param_2);
    local_70 = (wint_t *)0x0;
    local_68 = *(int *)(puVar6 + 1);
    lVar11 = (longlong)local_68;
    _Src = (void *)*puVar6;
    if (lVar11 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar11 * 2);
      iVar5 = local_68 + -1;
      if (local_68 == 0) {
        iVar5 = 0;
      }
      if (local_68 - 2U < 0x7fffffff) {
        lVar11 = 0;
        do {
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x38))
                            (*(longlong **)(param_1 + 0x2e0),local_70[lVar11]);
          iVar8 = local_68 + -1;
          if (local_68 == 0) {
            iVar8 = 0;
          }
          if (cVar4 == '\0') {
            iVar5 = (int)lVar11;
            break;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        if (iVar5 < iVar8) {
          if (iVar5 < 1) {
            FUN_146b0dfe8(param_1,local_80);
          }
          else {
            pwVar9 = local_70;
            if (local_68 == 0) {
              pwVar9 = &DAT_149dfb77a;
            }
            FUN_14006620a(local_80,pwVar9,iVar5);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x2d0);
          FUN_140009b9a(local_90,local_80);
          FUN_14023423e(&local_60,local_90);
          local_50 = 1;
          local_48 = 0;
          uStack_40 = 0;
          FUN_146a5407e(uVar2,&local_60);
          FUN_1449db362(&local_48);
          if ((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x10))();
          }
          if (local_90[0] != (longlong *)0x0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
          if (local_80[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x575) == '\x01') {
      pwVar9 = local_70;
      if (local_68 == 0) {
        pwVar9 = &DAT_149dfb77a;
      }
      if ((*pwVar9 == 0x2d) || (*pwVar9 == 0x2b)) {
        pwVar9 = pwVar9 + 1;
      }
      bVar10 = false;
      do {
        _C = *pwVar9;
        if (_C == 0x2e) {
          bVar3 = true;
          if (bVar10) break;
        }
        else {
          if (_C == 0) {
            plVar1 = *(longlong **)(param_1 + 0x2e0);
            if (((*(int *)(param_1 + 0x278) != 0) &&
                (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar4 != '\0')) {
              if (*(int *)(param_1 + 0x278) == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = *(longlong **)(param_1 + 0x270);
              }
              uVar12 = (**(code **)(*plVar7 + 0x58))();
              *(undefined4 *)(param_1 + 0x268) = uVar12;
            }
            (**(code **)(*plVar1 + 0x30))
                      (plVar1,&local_60,&local_70,(undefined4 *)(param_1 + 0x268));
            if ((char)uStack_5c == '\x01') {
              local_98 = 0;
              FUN_14290dbae(param_1,local_60,(double)local_60,3);
            }
            break;
          }
          iVar5 = iswdigit(_C);
          bVar3 = bVar10;
          if (iVar5 == 0) break;
        }
        bVar10 = bVar3;
        pwVar9 = pwVar9 + 1;
      } while( true );
    }
    if (local_70 != (wint_t *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x572) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b0d3f4 FUN_146b0d3f4 body=309 status=ok
// SIG undefined FUN_146b0d3f4(void)

void FUN_146b0d3f4(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 1) {
    local_68._0_2_ = CONCAT11(1,DAT_14c96b238);
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x1c0))();
    local_80 = DAT_14c96b1e1;
    local_7f = 1;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x1c0))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  if ((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x270);
      }
      uVar5 = (**(code **)(*plVar4 + 0x58))();
      *(undefined4 *)(param_1 + 0x268) = uVar5;
    }
  }
  uVar3 = FUN_1447a1f4a(param_2);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_68,uVar3,(undefined4 *)(param_1 + 0x268));
  if (local_64 == '\x01') {
    local_88 = param_3;
    FUN_14290dbae(param_1,local_68,(double)local_68,1);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0d52a FUN_146b0d52a body=175 status=ok
// SIG undefined FUN_146b0d52a(void)

longlong FUN_146b0d52a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146b0e100(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x444) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x440) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x448,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0d5da FUN_146b0d5da body=386 status=ok
// SIG undefined FUN_146b0d5da(void)

longlong * FUN_146b0d5da(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b0d6eb:
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
    *puVar5 = &PTR_FUN_149f20fc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b0d6eb;
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
    *puVar5 = &PTR_FUN_149f20fc0;
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



// FUNCTION 146b0d75c FUN_146b0d75c body=64 status=ok
// SIG undefined FUN_146b0d75c(void)

undefined8 * FUN_146b0d75c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f20fc0;
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



// FUNCTION 146b0d7a0 FUN_146b0d7a0 body=81 status=ok
// SIG undefined FUN_146b0d7a0(void)

undefined8 FUN_146b0d7a0(longlong param_1)

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



// FUNCTION 146b0d7f8 FUN_146b0d7f8 body=89 status=ok
// SIG undefined FUN_146b0d7f8(void)

bool FUN_146b0d7f8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0d843;
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
LAB_146b0d843:
  return lVar6 == param_2;
}



// FUNCTION 146b0d86e FUN_146b0d86e body=118 status=ok
// SIG undefined FUN_146b0d86e(void)

void FUN_146b0d86e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f20fc0;
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



// FUNCTION 146b0d8e4 FUN_146b0d8e4 body=118 status=ok
// SIG undefined FUN_146b0d8e4(void)

void FUN_146b0d8e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f20fc0;
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



// FUNCTION 146b0d95a FUN_146b0d95a body=156 status=ok
// SIG undefined FUN_146b0d95a(void)

void FUN_146b0d95a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f20fc0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0d9e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0d9f6 FUN_146b0d9f6 body=100 status=ok
// SIG undefined FUN_146b0d9f6(void)

void FUN_146b0d9f6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b0da42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b0da4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146b0da5a FUN_146b0da5a body=100 status=ok
// SIG undefined FUN_146b0da5a(void)

ulonglong FUN_146b0da5a(longlong param_1)

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
LAB_146b0dab3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b0dab3;
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



// FUNCTION 146b0dabe FUN_146b0dabe body=386 status=ok
// SIG undefined FUN_146b0dabe(void)

longlong * FUN_146b0dabe(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b0dbcf:
    *puVar5 = &PTR_LAB_149f05a70;
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
    *puVar5 = &PTR_FUN_149f21030;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b0dbcf;
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
    *puVar5 = &PTR_LAB_149f05a70;
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
    *puVar5 = &PTR_FUN_149f21030;
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



// FUNCTION 146b0dc40 FUN_146b0dc40 body=64 status=ok
// SIG undefined FUN_146b0dc40(void)

undefined8 * FUN_146b0dc40(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f21030;
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



// FUNCTION 146b0dc84 FUN_146b0dc84 body=81 status=ok
// SIG undefined FUN_146b0dc84(void)

undefined8 FUN_146b0dc84(longlong param_1)

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



// FUNCTION 146b0dcdc FUN_146b0dcdc body=89 status=ok
// SIG undefined FUN_146b0dcdc(void)

bool FUN_146b0dcdc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0dd27;
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
LAB_146b0dd27:
  return lVar6 == param_2;
}



// FUNCTION 146b0dd52 FUN_146b0dd52 body=118 status=ok
// SIG undefined FUN_146b0dd52(void)

void FUN_146b0dd52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f21030;
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



// FUNCTION 146b0ddc8 FUN_146b0ddc8 body=118 status=ok
// SIG undefined FUN_146b0ddc8(void)

void FUN_146b0ddc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f21030;
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



// FUNCTION 146b0de3e FUN_146b0de3e body=156 status=ok
// SIG undefined FUN_146b0de3e(void)

void FUN_146b0de3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f21030;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0deca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0deda FUN_146b0deda body=105 status=ok
// SIG undefined FUN_146b0deda(void)

undefined8 FUN_146b0deda(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146b0df2e:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146b0df2e;
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
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 146b0df44 FUN_146b0df44 body=162 status=ok
// SIG undefined FUN_146b0df44(void)

ulonglong FUN_146b0df44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146b0dfc4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b0dfc4;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146b0dfe8 FUN_146b0dfe8 body=276 status=ok
// SIG undefined FUN_146b0dfe8(void)

undefined8 * FUN_146b0dfe8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x270);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + 0x268) = uVar4;
    }
  }
  local_24 = *(float *)(param_1 + 0x268);
  if (((*(char *)(param_1 + 0x570) != '\0') || (local_24 != *(float *)(param_1 + 0x55c))) ||
     (NAN(local_24) || NAN(*(float *)(param_1 + 0x55c)))) {
    *(undefined1 *)(param_1 + 0x570) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x28))
              (*(longlong **)(param_1 + 0x2e0),param_2,&local_24);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x568);
    _Src = *(void **)(param_1 + 0x560);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0e100 FUN_146b0e100 body=386 status=ok
// SIG undefined FUN_146b0e100(void)

longlong * FUN_146b0e100(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b0e211:
    *puVar5 = &PTR_LAB_149f05210;
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
    *puVar5 = &PTR_FUN_149f210a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b0e211;
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
    *puVar5 = &PTR_LAB_149f05210;
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
    *puVar5 = &PTR_FUN_149f210a0;
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



// FUNCTION 146b0e282 FUN_146b0e282 body=64 status=ok
// SIG undefined FUN_146b0e282(void)

undefined8 * FUN_146b0e282(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f210a0;
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



// FUNCTION 146b0e2c6 FUN_146b0e2c6 body=81 status=ok
// SIG undefined FUN_146b0e2c6(void)

undefined8 FUN_146b0e2c6(longlong param_1)

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



// FUNCTION 146b0e31e FUN_146b0e31e body=89 status=ok
// SIG undefined FUN_146b0e31e(void)

bool FUN_146b0e31e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0e369;
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
LAB_146b0e369:
  return lVar6 == param_2;
}



// FUNCTION 146b0e394 FUN_146b0e394 body=118 status=ok
// SIG undefined FUN_146b0e394(void)

void FUN_146b0e394(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f210a0;
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



// FUNCTION 146b0e40a FUN_146b0e40a body=118 status=ok
// SIG undefined FUN_146b0e40a(void)

void FUN_146b0e40a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f210a0;
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



// FUNCTION 146b0e480 FUN_146b0e480 body=156 status=ok
// SIG undefined FUN_146b0e480(void)

void FUN_146b0e480(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f210a0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0e50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0e51c FUN_146b0e51c body=114 status=ok
// SIG undefined FUN_146b0e51c(void)

undefined4 FUN_146b0e51c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
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
        uVar7 = (**(code **)(param_1 + 0x28))
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
        return uVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b0e58a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146b0e58e FUN_146b0e58e body=100 status=ok
// SIG undefined FUN_146b0e58e(void)

ulonglong FUN_146b0e58e(longlong param_1)

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
LAB_146b0e5e7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b0e5e7;
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



// FUNCTION 146b0e5f2 FUN_146b0e5f2 body=386 status=ok
// SIG undefined FUN_146b0e5f2(void)

longlong * FUN_146b0e5f2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b0e703:
    *puVar5 = &PTR_LAB_149f21180;
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
    *puVar5 = &PTR_FUN_149f21110;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b0e703;
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
    *puVar5 = &PTR_LAB_149f21180;
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
    *puVar5 = &PTR_FUN_149f21110;
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



// FUNCTION 146b0e774 FUN_146b0e774 body=64 status=ok
// SIG undefined FUN_146b0e774(void)

undefined8 * FUN_146b0e774(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f21110;
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



// FUNCTION 146b0e7b8 FUN_146b0e7b8 body=81 status=ok
// SIG undefined FUN_146b0e7b8(void)

undefined8 FUN_146b0e7b8(longlong param_1)

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



// FUNCTION 146b0e810 FUN_146b0e810 body=89 status=ok
// SIG undefined FUN_146b0e810(void)

bool FUN_146b0e810(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0e85b;
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
LAB_146b0e85b:
  return lVar6 == param_2;
}



// FUNCTION 146b0e892 FUN_146b0e892 body=118 status=ok
// SIG undefined FUN_146b0e892(void)

void FUN_146b0e892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f21110;
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



// FUNCTION 146b0e908 FUN_146b0e908 body=118 status=ok
// SIG undefined FUN_146b0e908(void)

void FUN_146b0e908(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f21110;
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



// FUNCTION 146b0e97e FUN_146b0e97e body=156 status=ok
// SIG undefined FUN_146b0e97e(void)

void FUN_146b0e97e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f21180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f21110;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0ea0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0ea1a FUN_146b0ea1a body=104 status=ok
// SIG undefined FUN_146b0ea1a(void)

ulonglong FUN_146b0ea1a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b0ea7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146b0ea82 FUN_146b0ea82 body=101 status=ok
// SIG undefined FUN_146b0ea82(void)

ulonglong FUN_146b0ea82(longlong param_1)

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
LAB_146b0eadc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b0eadc;
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



// FUNCTION 146b0eaea FUN_146b0eaea body=386 status=ok
// SIG undefined FUN_146b0eaea(void)

longlong * FUN_146b0eaea(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b0ebfb:
    *puVar5 = &PTR_LAB_149f0eae0;
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
    *puVar5 = &PTR_FUN_149f211f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b0ebfb;
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
    *puVar5 = &PTR_LAB_149f0eae0;
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
    *puVar5 = &PTR_FUN_149f211f0;
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



// FUNCTION 146b0ec6c FUN_146b0ec6c body=64 status=ok
// SIG undefined FUN_146b0ec6c(void)

undefined8 * FUN_146b0ec6c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f211f0;
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



// FUNCTION 146b0ecb0 FUN_146b0ecb0 body=81 status=ok
// SIG undefined FUN_146b0ecb0(void)

undefined8 FUN_146b0ecb0(longlong param_1)

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



// FUNCTION 146b0ed08 FUN_146b0ed08 body=89 status=ok
// SIG undefined FUN_146b0ed08(void)

bool FUN_146b0ed08(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0ed53;
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
LAB_146b0ed53:
  return lVar6 == param_2;
}



// FUNCTION 146b0ed7e FUN_146b0ed7e body=118 status=ok
// SIG undefined FUN_146b0ed7e(void)

void FUN_146b0ed7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f211f0;
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



// FUNCTION 146b0edf4 FUN_146b0edf4 body=118 status=ok
// SIG undefined FUN_146b0edf4(void)

void FUN_146b0edf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f211f0;
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



// FUNCTION 146b0ee6a FUN_146b0ee6a body=156 status=ok
// SIG undefined FUN_146b0ee6a(void)

void FUN_146b0ee6a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f211f0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0eef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0ef06 FUN_146b0ef06 body=104 status=ok
// SIG undefined FUN_146b0ef06(void)

void FUN_146b0ef06(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b0ef53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b0ef64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146b0ef6e FUN_146b0ef6e body=101 status=ok
// SIG undefined FUN_146b0ef6e(void)

ulonglong FUN_146b0ef6e(longlong param_1)

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
LAB_146b0efc8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b0efc8;
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



// FUNCTION 146b0efd4 FUN_146b0efd4 body=386 status=ok
// SIG undefined FUN_146b0efd4(void)

longlong * FUN_146b0efd4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146b0f0e5:
    *puVar5 = &PTR_LAB_149f0eb50;
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
    *puVar5 = &PTR_FUN_149f21260;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146b0f0e5;
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
    *puVar5 = &PTR_LAB_149f0eb50;
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
    *puVar5 = &PTR_FUN_149f21260;
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



// FUNCTION 146b0f156 FUN_146b0f156 body=64 status=ok
// SIG undefined FUN_146b0f156(void)

undefined8 * FUN_146b0f156(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f21260;
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


