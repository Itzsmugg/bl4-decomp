// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a47e2e FUN_146a47e2e body=100 status=ok
// SIG undefined FUN_146a47e2e(void)

ulonglong FUN_146a47e2e(longlong param_1)

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
LAB_146a47e87:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a47e87;
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



// FUNCTION 146a47e92 FUN_146a47e92 body=392 status=ok
// SIG undefined FUN_146a47e92(void)

longlong * FUN_146a47e92(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x98);
  if (plVar6 == (longlong *)0x0) {
LAB_146a47fa9:
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
    *puVar5 = &PTR_FUN_149f0dc00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a47fa9;
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
    uVar7 = *(undefined8 *)(param_2 + 0x90);
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
    *puVar5 = &PTR_FUN_149f0dc00;
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



// FUNCTION 146a4801a FUN_146a4801a body=64 status=ok
// SIG undefined FUN_146a4801a(void)

undefined8 * FUN_146a4801a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0dc00;
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



// FUNCTION 146a4805e FUN_146a4805e body=81 status=ok
// SIG undefined FUN_146a4805e(void)

undefined8 FUN_146a4805e(longlong param_1)

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



// FUNCTION 146a480b6 FUN_146a480b6 body=89 status=ok
// SIG undefined FUN_146a480b6(void)

bool FUN_146a480b6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a48101;
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
LAB_146a48101:
  return lVar6 == param_2;
}



// FUNCTION 146a4812c FUN_146a4812c body=118 status=ok
// SIG undefined FUN_146a4812c(void)

void FUN_146a4812c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f0dc00;
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



// FUNCTION 146a481a2 FUN_146a481a2 body=118 status=ok
// SIG undefined FUN_146a481a2(void)

void FUN_146a481a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f0dc00;
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



// FUNCTION 146a48218 FUN_146a48218 body=156 status=ok
// SIG undefined FUN_146a48218(void)

void FUN_146a48218(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f0dc00;
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
                    /* WARNING: Could not recover jumptable at 0x000146a482a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a482b4 FUN_146a482b4 body=105 status=ok
// SIG undefined FUN_146a482b4(void)

undefined8 FUN_146a482b4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a48308:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a48308;
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



// FUNCTION 146a4831e FUN_146a4831e body=162 status=ok
// SIG undefined FUN_146a4831e(void)

ulonglong FUN_146a4831e(longlong param_1)

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
LAB_146a4839e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a4839e;
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



// FUNCTION 146a483c2 FUN_146a483c2 body=64 status=ok
// SIG undefined FUN_146a483c2(void)

undefined8 * FUN_146a483c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0dc70;
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



// FUNCTION 146a48406 FUN_146a48406 body=81 status=ok
// SIG undefined FUN_146a48406(void)

undefined8 FUN_146a48406(longlong param_1)

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



// FUNCTION 146a4845e FUN_146a4845e body=89 status=ok
// SIG undefined FUN_146a4845e(void)

bool FUN_146a4845e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a484a9;
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
LAB_146a484a9:
  return lVar6 == param_2;
}



// FUNCTION 146a484d4 FUN_146a484d4 body=118 status=ok
// SIG undefined FUN_146a484d4(void)

void FUN_146a484d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f0dc70;
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



// FUNCTION 146a4854a FUN_146a4854a body=118 status=ok
// SIG undefined FUN_146a4854a(void)

void FUN_146a4854a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f0dc70;
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



// FUNCTION 146a485c0 FUN_146a485c0 body=156 status=ok
// SIG undefined FUN_146a485c0(void)

void FUN_146a485c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f0dc70;
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
                    /* WARNING: Could not recover jumptable at 0x000146a4864c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a4865c FUN_146a4865c body=100 status=ok
// SIG undefined FUN_146a4865c(void)

void FUN_146a4865c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a486a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a486b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a486c0 FUN_146a486c0 body=100 status=ok
// SIG undefined FUN_146a486c0(void)

ulonglong FUN_146a486c0(longlong param_1)

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
LAB_146a48719:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a48719;
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



// FUNCTION 146a48724 FUN_146a48724 body=64 status=ok
// SIG undefined FUN_146a48724(void)

undefined8 * FUN_146a48724(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0dce0;
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



// FUNCTION 146a48768 FUN_146a48768 body=81 status=ok
// SIG undefined FUN_146a48768(void)

undefined8 FUN_146a48768(longlong param_1)

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



// FUNCTION 146a487c0 FUN_146a487c0 body=89 status=ok
// SIG undefined FUN_146a487c0(void)

bool FUN_146a487c0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a4880b;
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
LAB_146a4880b:
  return lVar6 == param_2;
}



// FUNCTION 146a48842 FUN_146a48842 body=118 status=ok
// SIG undefined FUN_146a48842(void)

void FUN_146a48842(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0dd50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0dce0;
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



// FUNCTION 146a488b8 FUN_146a488b8 body=118 status=ok
// SIG undefined FUN_146a488b8(void)

void FUN_146a488b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0dd50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0dce0;
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



// FUNCTION 146a4892e FUN_146a4892e body=156 status=ok
// SIG undefined FUN_146a4892e(void)

void FUN_146a4892e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0dd50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0dce0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a489ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a489ca FUN_146a489ca body=105 status=ok
// SIG undefined FUN_146a489ca(void)

undefined8 FUN_146a489ca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a48a1e:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a48a1e;
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



// FUNCTION 146a48a34 FUN_146a48a34 body=146 status=ok
// SIG undefined FUN_146a48a34(void)

ulonglong FUN_146a48a34(longlong param_1,undefined4 param_2)

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
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a48aa5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a48aa5;
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
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a48aca FUN_146a48aca body=64 status=ok
// SIG undefined FUN_146a48aca(void)

undefined8 * FUN_146a48aca(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0ddc0;
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



// FUNCTION 146a48b0e FUN_146a48b0e body=81 status=ok
// SIG undefined FUN_146a48b0e(void)

undefined8 FUN_146a48b0e(longlong param_1)

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



// FUNCTION 146a48b66 FUN_146a48b66 body=89 status=ok
// SIG undefined FUN_146a48b66(void)

bool FUN_146a48b66(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a48bb1;
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
LAB_146a48bb1:
  return lVar6 == param_2;
}



// FUNCTION 146a48be8 FUN_146a48be8 body=118 status=ok
// SIG undefined FUN_146a48be8(void)

void FUN_146a48be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0de30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0ddc0;
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



// FUNCTION 146a48c5e FUN_146a48c5e body=118 status=ok
// SIG undefined FUN_146a48c5e(void)

void FUN_146a48c5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0de30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0ddc0;
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



// FUNCTION 146a48cd4 FUN_146a48cd4 body=156 status=ok
// SIG undefined FUN_146a48cd4(void)

void FUN_146a48cd4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0de30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0ddc0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a48d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a48d70 FUN_146a48d70 body=104 status=ok
// SIG undefined FUN_146a48d70(void)

ulonglong FUN_146a48d70(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a48dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 146a48dd8 FUN_146a48dd8 body=101 status=ok
// SIG undefined FUN_146a48dd8(void)

ulonglong FUN_146a48dd8(longlong param_1)

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
LAB_146a48e32:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a48e32;
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



// FUNCTION 146a48e40 FUN_146a48e40 body=206 status=ok
// SIG undefined FUN_146a48e40(void)

longlong * FUN_146a48e40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1413a4324(param_1 + 3,param_2 + 3);
  plVar1 = (longlong *)param_2[5];
  param_1[5] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(char *)(param_1 + 7) = (char)param_2[7];
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1413a4324(param_1 + 8,param_2 + 8);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14009d848(param_1 + 10,param_2 + 10);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_146a48fa6(param_1 + 0xc,param_2 + 0xc);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_146a4902a(param_1 + 0xe,param_2 + 0xe);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  return param_1;
}



// FUNCTION 146a48f0e FUN_146a48f0e body=150 status=ok
// SIG undefined FUN_146a48f0e(void)

void FUN_146a48f0e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a48fa6 FUN_146a48fa6 body=130 status=ok
// SIG undefined FUN_146a48fa6(void)

void FUN_146a48fa6(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a4902a FUN_146a4902a body=130 status=ok
// SIG undefined FUN_146a4902a(void)

void FUN_146a4902a(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a490ae FUN_146a490ae body=52 status=ok
// SIG undefined FUN_146a490ae(void)

undefined8 * FUN_146a490ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f0df10;
  FUN_146a493fa(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a49106 FUN_146a49106 body=112 status=ok
// SIG undefined FUN_146a49106(void)

void FUN_146a49106(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 9) {
    FUN_1446efa72(param_2,0,9,0x10);
    *(undefined4 *)(param_2 + 1) = 9;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0df10;
  FUN_146a49492(puVar1 + 1,param_1 + 8);
  puVar1[0xf] = *(undefined8 *)(param_1 + 0x78);
  *puVar1 = &PTR_FUN_149f0dea0;
  puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
  return;
}



// FUNCTION 146a49176 FUN_146a49176 body=112 status=ok
// SIG undefined FUN_146a49176(void)

void FUN_146a49176(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 9) {
    FUN_1446efa72(param_2,0,9,0x10);
    *(undefined4 *)(param_2 + 1) = 9;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0df10;
  FUN_146a49492(puVar1 + 1,param_1 + 8);
  puVar1[0xf] = *(undefined8 *)(param_1 + 0x78);
  *puVar1 = &PTR_FUN_149f0dea0;
  puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
  return;
}



// FUNCTION 146a491e6 FUN_146a491e6 body=148 status=ok
// SIG undefined FUN_146a491e6(void)

void FUN_146a491e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 9) {
    FUN_1446efa72(param_2 + 1,0,9,0x10);
    param_2[1].LockCount = 9;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0df10;
  FUN_146a49492(&p_Var1->CriticalSection,param_1 + 8);
  p_Var1[2].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x78);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0dea0;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  p_Var1[2].EntryCount = (int)uVar2;
  p_Var1[2].ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a4926a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a4927a FUN_146a4927a body=75 status=ok
// SIG undefined FUN_146a4927a(void)

void FUN_146a4927a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_146a49558(param_1 + 8,param_1 + 0x80);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a492c6 FUN_146a492c6 body=77 status=ok
// SIG undefined FUN_146a492c6(void)

undefined8 FUN_146a492c6(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_146a49558(param_1 + 8,param_1 + 0x80);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a49316 FUN_146a49316 body=227 status=ok
// SIG undefined FUN_146a49316(void)

undefined8 *
FUN_146a49316(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,undefined8 param_7,longlong *param_8)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = *param_3;
  lVar1 = param_3[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)*param_4;
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_4[1];
  plVar2 = (longlong *)*param_5;
  param_1[6] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 7) = (int)param_5[1];
  plVar2 = (longlong *)*param_6;
  param_1[8] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 9) = (int)param_6[1];
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14009d848(param_1 + 10,param_7);
  plVar2 = (longlong *)*param_8;
  param_1[0xc] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 0xd) = (int)param_8[1];
  return param_1;
}



// FUNCTION 146a493fa FUN_146a493fa body=152 status=ok
// SIG undefined FUN_146a493fa(void)

void FUN_146a493fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
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
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a49486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146a49492 FUN_146a49492 body=198 status=ok
// SIG undefined FUN_146a49492(void)

undefined8 * FUN_146a49492(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_2[4];
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  plVar2 = (longlong *)param_2[6];
  param_1[6] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  plVar2 = (longlong *)param_2[8];
  param_1[8] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14009d848(param_1 + 10,param_2 + 10);
  plVar2 = (longlong *)param_2[0xc];
  param_1[0xc] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 146a49558 FUN_146a49558 body=357 status=ok
// SIG undefined FUN_146a49558(void)

void FUN_146a49558(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong **local_c0;
  undefined8 *local_b8;
  longlong **local_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined4 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pcVar1 = (code *)*param_2;
  local_40 = (longlong *)param_1[0xc];
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = *(undefined4 *)(param_1 + 0xd);
  local_50 = 0;
  local_48 = 0;
  FUN_14009d848(&local_50,param_1 + 10);
  local_60 = (longlong *)param_1[8];
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = *(undefined4 *)(param_1 + 9);
  local_70 = (longlong *)param_1[6];
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_68 = *(undefined4 *)(param_1 + 7);
  local_80 = (longlong *)param_1[4];
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  local_78 = *(undefined4 *)(param_1 + 5);
  local_90 = param_1[2];
  local_88 = param_1[3];
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  local_a0 = *param_1;
  local_98 = param_1[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + 1;
    UNLOCK();
  }
  local_b0 = &local_40;
  local_c0 = &local_60;
  local_c8 = &local_70;
  local_b8 = &local_50;
  (*pcVar1)(*param_3,&local_a0,&local_90,&local_80);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a496be FUN_146a496be body=132 status=ok
// SIG undefined FUN_146a496be(void)

void FUN_146a496be(longlong param_1,int param_2)

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



// FUNCTION 146a49744 FUN_146a49744 body=132 status=ok
// SIG undefined FUN_146a49744(void)

void FUN_146a49744(longlong param_1,int param_2)

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



// FUNCTION 146a497c9 FUN_146a497c9 body=73 status=ok
// SIG undefined FUN_146a497c9(void)

void FUN_146a497c9(longlong param_1,int param_2)

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



// FUNCTION 146a4982a FUN_146a4982a body=29 status=ok
// SIG undefined FUN_146a4982a(void)

undefined8 FUN_146a4982a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a49847 FUN_146a49847 body=58 status=ok
// SIG undefined FUN_146a49847(void)

void FUN_146a49847(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_146a267d0(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146a49881 FUN_146a49881 body=54 status=ok
// SIG undefined FUN_146a49881(void)

void FUN_146a49881(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146a26452(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146a498b8 FUN_146a498b8 body=86 status=ok
// SIG undefined FUN_146a498b8(void)

void FUN_146a498b8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146a4990e FUN_146a4990e body=99 status=ok
// SIG undefined FUN_146a4990e(void)

undefined8 FUN_146a4990e(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 4;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,8);
  }
  return uVar3;
}



// FUNCTION 146a49972 FUN_146a49972 body=143 status=ok
// SIG undefined FUN_146a49972(void)

void FUN_146a49972(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a49a02 FUN_146a49a02 body=77 status=ok
// SIG undefined FUN_146a49a02(void)

undefined8 * FUN_146a49a02(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146a49ad6(param_1,iVar1,0);
    FUN_146a49b45(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146a49a50 FUN_146a49a50 body=132 status=ok
// SIG undefined FUN_146a49a50(void)

void FUN_146a49a50(longlong param_1,int param_2)

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



// FUNCTION 146a49ad6 FUN_146a49ad6 body=111 status=ok
// SIG undefined FUN_146a49ad6(void)

void FUN_146a49ad6(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146a49b45 FUN_146a49b45 body=52 status=ok
// SIG undefined FUN_146a49b45(void)

void FUN_146a49b45(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146a49b7a(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 146a49b7a FUN_146a49b7a body=100 status=ok
// SIG undefined FUN_146a49b7a(void)

longlong FUN_146a49b7a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_14058ac20();
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  _Src = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0x68) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x60),iVar1,0);
    memcpy(*(void **)(param_1 + 0x60),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146a49bde FUN_146a49bde body=361 status=ok
// SIG undefined FUN_146a49bde(void)

undefined4 *
FUN_146a49bde(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146a49d48(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  uVar2 = puVar1[1];
  local_40[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = param_4;
  cVar3 = FUN_146a49e2e(param_1,uVar4,local_40);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146a49f96(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a49d48 FUN_146a49d48 body=229 status=ok
// SIG undefined FUN_146a49d48(void)

int * FUN_146a49d48(longlong *param_1,int *param_2)

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



// FUNCTION 146a49e2e FUN_146a49e2e body=221 status=ok
// SIG undefined FUN_146a49e2e(void)

void FUN_146a49e2e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_146a49f0c(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_146a49ea4;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_146a49ea4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 146a49f0c FUN_146a49f0c body=138 status=ok
// SIG undefined FUN_146a49f0c(void)

void FUN_146a49f0c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146a49f96 FUN_146a49f96 body=477 status=ok
// SIG undefined FUN_146a49f96(void)

void FUN_146a49f96(longlong *param_1)

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



// FUNCTION 146a4a174 FUN_146a4a174 body=361 status=ok
// SIG undefined FUN_146a4a174(void)

undefined4 *
FUN_146a4a174(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146a4a2de(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  uVar2 = puVar1[1];
  local_40[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = param_4;
  cVar3 = FUN_146a4a3c4(param_1,uVar4,local_40);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146a4a52c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4a2de FUN_146a4a2de body=229 status=ok
// SIG undefined FUN_146a4a2de(void)

int * FUN_146a4a2de(longlong *param_1,int *param_2)

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



// FUNCTION 146a4a3c4 FUN_146a4a3c4 body=221 status=ok
// SIG undefined FUN_146a4a3c4(void)

void FUN_146a4a3c4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_146a4a4a2(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_146a4a43a;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_146a4a43a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 146a4a4a2 FUN_146a4a4a2 body=138 status=ok
// SIG undefined FUN_146a4a4a2(void)

void FUN_146a4a4a2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146a4a52c FUN_146a4a52c body=477 status=ok
// SIG undefined FUN_146a4a52c(void)

void FUN_146a4a52c(longlong *param_1)

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



// FUNCTION 146a4a722 FUN_146a4a722 body=29 status=ok
// SIG undefined FUN_146a4a722(void)

undefined8 FUN_146a4a722(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a4a740 FUN_146a4a740 body=367 status=ok
// SIG undefined FUN_146a4a740(void)

undefined4 *
FUN_146a4a740(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146a4a8b0(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_48 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[2] = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_48;
    iVar8 = *(int *)(local_48 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_68 = param_4;
  cVar3 = FUN_146a4a996(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146a4ab78(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a4a8b0 FUN_146a4a8b0 body=229 status=ok
// SIG undefined FUN_146a4a8b0(void)

int * FUN_146a4a8b0(longlong *param_1,int *param_2)

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



// FUNCTION 146a4a996 FUN_146a4a996 body=140 status=ok
// SIG undefined FUN_146a4a996(void)

void FUN_146a4a996(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_146a4aa22();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
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
      FUN_146a4aaee(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_146a4a9b7;
    }
  }
  uVar6 = 0;
LAB_146a4a9b7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146a4aa22 FUN_146a4aa22 body=203 status=ok
// SIG undefined FUN_146a4aa22(void)

int FUN_146a4aa22(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_146a4aa6c:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_146a4aae2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146a4aae2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146a4aad3;
    }
  }
  return -1;
LAB_146a4aae2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146a4aad3:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146a4aa6c;
}



// FUNCTION 146a4aaee FUN_146a4aaee body=138 status=ok
// SIG undefined FUN_146a4aaee(void)

void FUN_146a4aaee(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146a4ab78 FUN_146a4ab78 body=476 status=ok
// SIG undefined FUN_146a4ab78(void)

void FUN_146a4ab78(longlong *param_1)

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



// FUNCTION 146a4ad56 FUN_146a4ad56 body=153 status=ok
// SIG undefined FUN_146a4ad56(void)

undefined8 * FUN_146a4ad56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_146a26486(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 146a4adf0 FUN_146a4adf0 body=143 status=ok
// SIG undefined FUN_146a4adf0(void)

void FUN_146a4adf0(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a4ae80 FUN_146a4ae80 body=93 status=ok
// SIG undefined FUN_146a4ae80(void)

undefined8 * FUN_146a4ae80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_146a4af72(param_1 + 1,iVar1,0);
    FUN_146a4afe1(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146a4aede FUN_146a4aede body=147 status=ok
// SIG undefined FUN_146a4aede(void)

void FUN_146a4aede(longlong param_1,int param_2)

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



// FUNCTION 146a4af72 FUN_146a4af72 body=111 status=ok
// SIG undefined FUN_146a4af72(void)

void FUN_146a4af72(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146a4afe1 FUN_146a4afe1 body=52 status=ok
// SIG undefined FUN_146a4afe1(void)

void FUN_146a4afe1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146a4ad56(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 146a4b016 FUN_146a4b016 body=132 status=ok
// SIG undefined FUN_146a4b016(void)

void FUN_146a4b016(longlong param_1,int param_2)

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



// FUNCTION 146a4b0b4 FUN_146a4b0b4 body=29 status=ok
// SIG undefined FUN_146a4b0b4(void)

undefined8 FUN_146a4b0b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a4b0d2 FUN_146a4b0d2 body=42 status=ok
// SIG undefined FUN_146a4b0d2(void)

void FUN_146a4b0d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14085279e(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 146a4b0fc FUN_146a4b0fc body=29 status=ok
// SIG undefined FUN_146a4b0fc(void)

undefined8 FUN_146a4b0fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a4b11a FUN_146a4b11a body=128 status=ok
// SIG undefined FUN_146a4b11a(void)

void FUN_146a4b11a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
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



// FUNCTION 146a4b1b8 FUN_146a4b1b8 body=448 status=ok
// SIG undefined FUN_146a4b1b8(void)

longlong * FUN_146a4b1b8(longlong param_1,longlong *param_2)

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
LAB_146a4b1f6:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a4b1f6;
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
  FUN_146a4b3ba(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146a4b332;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146a4b332;
LAB_146a4b295:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146a4b332;
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
      if (plVar8 != (longlong *)0x0) goto LAB_146a4b295;
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
LAB_146a4b332:
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a4b37a FUN_146a4b37a body=63 status=ok
// SIG undefined FUN_146a4b37a(void)

undefined8 * FUN_146a4b37a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f0e560;
  FUN_1449db362(param_1 + 0x6d);
  FUN_146a5ddd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a4b3ba FUN_146a4b3ba body=144 status=ok
// SIG undefined FUN_146a4b3ba(void)

undefined8 * FUN_146a4b3ba(undefined8 *param_1,undefined8 *param_2)

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
  FUN_146a4b44c(param_1,&local_28);
  *param_1 = &PTR_FUN_149f0e7c0;
  param_1[0xd] = &PTR_FUN_149f0e8b0;
  *(undefined1 *)(param_1 + 5) = 4;
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



// FUNCTION 146a4b44c FUN_146a4b44c body=143 status=ok
// SIG undefined FUN_146a4b44c(void)

undefined8 * FUN_146a4b44c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_14697595a(param_1,&local_28,1);
  *param_1 = &PTR_FUN_149f0e8d0;
  param_1[0xd] = &PTR_FUN_149f0e9c0;
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



// FUNCTION 146a4b4dc FUN_146a4b4dc body=38 status=ok
// SIG undefined FUN_146a4b4dc(void)

undefined8 FUN_146a4b4dc(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a4b510 FUN_146a4b510 body=38 status=ok
// SIG undefined FUN_146a4b510(void)

undefined8 FUN_146a4b510(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a4b536 FUN_146a4b536 body=1382 status=ok
// SIG undefined FUN_146a4b536(void)

void FUN_146a4b536(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_9a8 [32];
  undefined1 *local_988;
  undefined1 local_979;
  code *local_978;
  undefined4 local_970;
  undefined4 uStack_96c;
  longlong *local_960;
  undefined4 local_958;
  undefined1 local_950;
  undefined8 local_948;
  undefined4 local_940;
  undefined8 local_938;
  undefined1 local_930;
  undefined8 local_928;
  undefined4 local_920;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined1 local_908;
  undefined8 local_900;
  undefined4 local_8f8;
  longlong *local_8e8;
  undefined4 local_8e0;
  undefined1 local_8d8;
  undefined8 local_8d0;
  undefined4 local_8c8;
  undefined8 local_8c0;
  longlong *local_8b8;
  undefined8 local_8b0;
  undefined1 *puStack_8a8;
  undefined4 local_8a0;
  undefined1 local_89c;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined1 local_878;
  undefined8 local_870;
  undefined4 local_868;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined1 local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 local_828 [464];
  longlong local_658;
  undefined1 local_3b8 [424];
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8;
  undefined1 local_1d0 [56];
  undefined1 local_198 [216];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [88];
  undefined1 local_50;
  char local_4f;
  undefined1 local_4e;
  char local_4d;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_9a8;
  FUN_14009d848(param_1 + 0x368,param_2 + 0x210);
  lVar5 = *(longlong *)(param_2 + 0x1d0);
  lVar8 = lVar5 + 0x10;
  if (*(longlong *)(param_2 + 0x1e0) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x1e0);
  }
  lVar7 = lVar5 + 0x380;
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x1d8);
  }
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    local_848 = *(undefined1 *)(param_2 + 0x1f8);
    local_858 = *(undefined8 *)(param_2 + 0x1e8);
    uStack_850 = *(undefined8 *)(param_2 + 0x1f0);
    local_840 = 0;
    uStack_838 = (ulonglong)uStack_838._4_4_ << 0x20;
    FUN_140a58be0(&local_840,param_2 + 0x200);
  }
  else {
    local_858 = *(undefined8 *)(lVar5 + 0x660);
    uStack_850 = *(undefined8 *)(lVar5 + 0x668);
    local_848 = 1;
    local_840 = 0;
    uStack_838 = 0;
  }
  FUN_145ab3d24(local_3b8);
  local_888 = (undefined4)local_858;
  uStack_884 = local_858._4_4_;
  uStack_880 = (undefined4)uStack_850;
  uStack_87c = uStack_850._4_4_;
  local_878 = local_848;
  local_870 = 0;
  local_868 = 0;
  FUN_140a58be0(&local_870,&local_840);
  local_1d8 = local_878;
  local_1e8 = local_888;
  uStack_1e4 = uStack_884;
  uStack_1e0 = uStack_880;
  uStack_1dc = uStack_87c;
  FUN_144a450dc(local_1d0,&local_870);
  FUN_1449db362(&local_870);
  local_978 = FUN_146a4bc6a;
  local_970 = 0;
  local_200 = lVar8;
  FUN_146a4bcca(local_828,param_1);
  FUN_144a450dc(local_198,local_828);
  FUN_1449db362(local_828);
  local_8b0 = 0x3f800000;
  puStack_8a8 = &DAT_3f8000003f800000;
  local_8a0 = CONCAT22(local_8a0._2_2_,2);
  local_89c = 1;
  local_898 = 0;
  uStack_890 = 0;
  local_c0 = 0x3f800000;
  uStack_bc = 0;
  uStack_b8 = 0x3f800000;
  uStack_b4 = 0x3f800000;
  local_b0 = local_8a0;
  local_ac = 1;
  FUN_144a450dc(local_a8,&local_898);
  FUN_1449db362(&local_898);
  if (*(char *)(param_2 + 0x221) == '\x01') {
    local_50 = *(undefined1 *)(param_2 + 0x220);
    local_4f = '\x01';
  }
  else if (local_4f == '\x01') {
    local_4f = '\0';
  }
  if (*(char *)(param_2 + 0x223) == '\x01') {
    local_4e = *(undefined1 *)(param_2 + 0x222);
    local_4d = '\x01';
  }
  else if (local_4d == '\x01') {
    local_4d = '\0';
  }
  FUN_140a570d8(local_828);
  local_8e8 = *(longlong **)(param_2 + 0x1a8);
  local_658 = lVar7;
  if (local_8e8 != (longlong *)0x0) {
    (**(code **)(*local_8e8 + 8))();
  }
  local_8e0 = *(undefined4 *)(param_2 + 0x1b0);
  local_8d8 = *(undefined1 *)(param_2 + 0x1b8);
  local_8d0 = 0;
  local_8c8 = 0;
  FUN_1413a4324(&local_8d0,param_2 + 0x1c0);
  lVar5 = FUN_140a54906(local_828,&local_8e8);
  local_918 = *(undefined4 *)(param_2 + 0x228);
  uStack_914 = *(undefined4 *)(param_2 + 0x22c);
  uStack_910 = *(undefined4 *)(param_2 + 0x230);
  uStack_90c = *(undefined4 *)(param_2 + 0x234);
  local_908 = *(undefined1 *)(param_2 + 0x238);
  local_900 = 0;
  local_8f8 = 0;
  FUN_140a5c51c(&local_900,param_2 + 0x240);
  *(undefined1 *)(lVar5 + 0x2f8) = local_908;
  *(undefined4 *)(lVar5 + 0x2e8) = local_918;
  *(undefined4 *)(lVar5 + 0x2ec) = uStack_914;
  *(undefined4 *)(lVar5 + 0x2f0) = uStack_910;
  *(undefined4 *)(lVar5 + 0x2f4) = uStack_90c;
  FUN_144a450dc(lVar5 + 0x300,&local_900);
  FUN_1449db362(&local_900);
  local_930 = *(undefined1 *)(param_2 + 600);
  local_938 = *(undefined8 *)(param_2 + 0x250);
  local_928 = 0;
  local_920 = 0;
  FUN_140a5c3e8(&local_928,param_2 + 0x260);
  *(undefined1 *)(lVar5 + 0x318) = local_930;
  *(undefined8 *)(lVar5 + 0x310) = local_938;
  FUN_144a450dc(lVar5 + 800,&local_928);
  FUN_1449db362(&local_928);
  local_960 = *(longlong **)(param_2 + 0x270);
  if (local_960 != (longlong *)0x0) {
    (**(code **)(*local_960 + 8))();
  }
  local_958 = *(undefined4 *)(param_2 + 0x278);
  local_950 = *(undefined1 *)(param_2 + 0x280);
  local_948 = 0;
  local_940 = 0;
  FUN_1413a4324(&local_948,param_2 + 0x288);
  uVar6 = FUN_146a1d354(lVar5,&local_960);
  local_988 = &local_979;
  FUN_140a54526(&local_978,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SHyperlink.h",0x52);
  FUN_140a52852(&local_978,&local_8c0,uVar6);
  plVar3 = local_208;
  plVar4 = local_8b8;
  if (local_8b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_8b8 + 1) = (int)local_8b8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_8b8 + 1) = (int)local_8b8[1] + 1;
    UNLOCK();
  }
  local_210 = local_8c0;
  local_208 = local_8b8;
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
  FUN_145ab4204(param_1,local_3b8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_8b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_8b8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_8b8)(local_8b8);
      LOCK();
      piVar2 = (int *)((longlong)local_8b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_8b8 + 0x10))(local_8b8);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_96c,local_970);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_140a59ae6(local_828);
  FUN_145ab35f4(local_3b8);
  FUN_1449db362(&local_840);
  if ((local_48 ^ (ulonglong)auStack_9a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4ba9e FUN_146a4ba9e body=296 status=ok
// SIG undefined FUN_146a4ba9e(void)

longlong FUN_146a4ba9e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"Hyperlink",1);
  uVar2 = FUN_146a26814(lVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  *(undefined1 *)(param_1 + 0x221) = 0;
  *(undefined1 *)(param_1 + 0x223) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x249) = 0;
  *(undefined8 *)(param_1 + 0x251) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  FUN_144a5dc74(param_1 + 0x270);
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4bbc8 FUN_146a4bbc8 body=161 status=ok
// SIG undefined FUN_146a4bbc8(void)

void FUN_146a4bbc8(longlong param_1)

{
  FUN_1449db362(param_1 + 0x288);
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x240);
  if (*(char *)(param_1 + 0x223) == '\x01') {
    *(undefined1 *)(param_1 + 0x223) = 0;
  }
  if (*(char *)(param_1 + 0x221) == '\x01') {
    *(undefined1 *)(param_1 + 0x221) = 0;
  }
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a4bc6a FUN_146a4bc6a body=96 status=ok
// SIG undefined FUN_146a4bc6a(void)

undefined1 * FUN_146a4bc6a(longlong param_1,undefined1 *param_2)

{
  if ((*(int *)(param_1 + 0x370) != 0) && (*(longlong **)(param_1 + 0x368) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x368) + 0x60))();
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



// FUNCTION 146a4bcca FUN_146a4bcca body=386 status=ok
// SIG undefined FUN_146a4bcca(void)

longlong * FUN_146a4bcca(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146a4bddb:
    *puVar5 = &PTR_LAB_149f05630;
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
    *puVar5 = &PTR_FUN_149f0ea10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a4bddb;
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
    *puVar5 = &PTR_LAB_149f05630;
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
    *puVar5 = &PTR_FUN_149f0ea10;
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



// FUNCTION 146a4be4c FUN_146a4be4c body=64 status=ok
// SIG undefined FUN_146a4be4c(void)

undefined8 * FUN_146a4be4c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f0ea10;
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



// FUNCTION 146a4be90 FUN_146a4be90 body=81 status=ok
// SIG undefined FUN_146a4be90(void)

undefined8 FUN_146a4be90(longlong param_1)

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



// FUNCTION 146a4bee8 FUN_146a4bee8 body=89 status=ok
// SIG undefined FUN_146a4bee8(void)

bool FUN_146a4bee8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a4bf33;
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
LAB_146a4bf33:
  return lVar6 == param_2;
}



// FUNCTION 146a4bf5e FUN_146a4bf5e body=118 status=ok
// SIG undefined FUN_146a4bf5e(void)

void FUN_146a4bf5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0ea10;
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



// FUNCTION 146a4bfd4 FUN_146a4bfd4 body=118 status=ok
// SIG undefined FUN_146a4bfd4(void)

void FUN_146a4bfd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0ea10;
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



// FUNCTION 146a4c04a FUN_146a4c04a body=156 status=ok
// SIG undefined FUN_146a4c04a(void)

void FUN_146a4c04a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0ea10;
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
                    /* WARNING: Could not recover jumptable at 0x000146a4c0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a4c0e6 FUN_146a4c0e6 body=105 status=ok
// SIG undefined FUN_146a4c0e6(void)

undefined8 FUN_146a4c0e6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a4c13a:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a4c13a;
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



// FUNCTION 146a4c150 FUN_146a4c150 body=168 status=ok
// SIG undefined FUN_146a4c150(void)

ulonglong FUN_146a4c150(longlong param_1)

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
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a4c1d0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a4c1d0;
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
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a4c1fa FUN_146a4c1fa body=182 status=ok
// SIG undefined FUN_146a4c1fa(void)

void FUN_146a4c1fa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f09500;
  FUN_1449db362(param_1 + 0x15);
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  FUN_1449db362(param_1 + 5);
  FUN_1449db362(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a4c2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146a4c2b0 FUN_146a4c2b0 body=148 status=ok
// SIG undefined FUN_146a4c2b0(void)

void FUN_146a4c2b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f09250;
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000146a4c338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a4c344 FUN_146a4c344 body=275 status=ok
// SIG undefined FUN_146a4c344(void)

undefined8 *
FUN_146a4c344(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x380,0x10);
  FUN_1410f04a4(puVar2,param_2,param_3,param_4);
  *puVar2 = &PTR_FUN_149f0f220;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f11680;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar3) goto LAB_146a4c42b;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      puVar2[2] = plVar3;
      goto LAB_146a4c42b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  puVar2[2] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_146a4c42b:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 146a4c458 FUN_146a4c458 body=292 status=ok
// SIG undefined FUN_146a4c458(void)

undefined8 *
FUN_146a4c458(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x380,0x10);
  FUN_146a4d3f4(puVar2,param_2,param_3,param_4,param_5);
  *puVar2 = &PTR_FUN_149f0f220;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f11680;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar3) goto LAB_146a4c54e;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      puVar2[2] = plVar3;
      goto LAB_146a4c54e;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  puVar2[2] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_146a4c54e:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 146a4c57c FUN_146a4c57c body=476 status=ok
// SIG undefined FUN_146a4c57c(void)

double * FUN_146a4c57c(longlong *param_1,double *param_2,int param_3,int param_4,float param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  double dVar5;
  short sVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  float local_98;
  longlong local_88;
  int local_80;
  float local_78;
  float local_74;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar5 = 0.0;
  if (*(int *)((longlong)param_1 + 0x374) == param_4) {
    dVar5 = (double)ABS(*(float *)((longlong)param_1 + 0x10c) * param_5);
  }
  if (param_4 - param_3 == 0) {
    sVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_5);
    *param_2 = dVar5 * (double)param_5;
    param_2[1] = (double)(int)sVar6;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x22);
    FUN_146a4c75a(&local_70,param_4 - param_3);
    lVar4 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
      plVar8 = *(longlong **)(lVar4 + 0x38);
    }
    else {
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      plVar8 = *(longlong **)(lVar4 + 0x28);
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_88 = local_70;
    local_80 = local_68 + -1;
    if (local_68 == 0) {
      local_80 = 0;
    }
    local_98 = param_5;
    FUN_140499e78(uVar7,&local_78,&local_88,param_1 + 0x13);
    *param_2 = (double)((float)dVar5 + local_78);
    param_2[1] = (double)(ABS(fVar3 * param_5) + local_74);
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
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4c75a FUN_146a4c75a body=55 status=ok
// SIG undefined FUN_146a4c75a(void)

undefined8 * FUN_146a4c75a(undefined8 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < param_2) {
    FUN_1412d7f26(param_1);
    do {
      FUN_140002184(param_1,0x2022);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}



// FUNCTION 146a4c792 FUN_146a4c792 body=201 status=ok
// SIG undefined FUN_146a4c792(void)

ulonglong FUN_146a4c792(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  
  pvVar5 = ThreadLocalStoragePointer;
  uVar7 = 0;
  if (0 < param_2) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 8);
    iVar8 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    if (iVar8 != param_2) {
      lVar4 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x10) {
        uVar9 = *(undefined8 *)(lVar4 + 0x30);
        plVar10 = *(longlong **)(lVar4 + 0x38);
      }
      else {
        uVar9 = *(undefined8 *)(lVar4 + 0x20);
        plVar10 = *(longlong **)(lVar4 + 0x28);
      }
      if (plVar10 == (longlong *)0x0) {
        uVar7 = FUN_14693805a(uVar9,param_1 + 0x98,ThreadLocalStoragePointer,0x2022,0x2022);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        uVar6 = FUN_14693805a(uVar9,param_1 + 0x98,pvVar5,0x2022,0x2022);
        uVar7 = (ulonglong)uVar6;
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
  }
  return uVar7;
}



// FUNCTION 146a4c85c FUN_146a4c85c body=1689 status=ok
// SIG undefined FUN_146a4c85c(void)

int FUN_146a4c85c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8,byte param_9)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  int local_1a0;
  longlong local_198;
  char local_190;
  float *local_188;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  longlong local_140;
  int local_138;
  int local_130;
  int local_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  byte local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(float *)(param_1 + 0x120) <= 0.0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0.0 < *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x10c) +
                   *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x110);
  }
  (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x38))
            ((longlong *)**(undefined8 **)(param_3 + 8),local_128);
  (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x10))
            ((longlong *)**(undefined8 **)(param_3 + 8),&local_130);
  fVar1 = *(float *)(param_4 + 8);
  fVar2 = *(float *)(param_1 + 0x10c);
  fVar14 = *(float *)(param_1 + 0x110);
  dVar5 = 0.0;
  if (fVar14 < -fVar14) {
    dVar6 = (double)(-fVar14 * fVar1);
  }
  else {
    dVar6 = 0.0;
  }
  if (fVar2 < -fVar2) {
    dVar5 = (double)(-fVar2 * fVar1);
  }
  cVar11 = (param_9 ^ 1) << 5;
  FUN_146a4c75a(&local_140,local_12c - local_130);
  if (bVar10) {
    dVar7 = 0.0;
    if (0.0 < fVar2) {
      dVar8 = (double)(fVar2 * fVar1);
    }
    else {
      dVar8 = 0.0;
    }
    if (0.0 < fVar14) {
      dVar7 = (double)(fVar1 * fVar14);
    }
    local_144 = param_8[3] * *(float *)(param_1 + 0x120);
    local_148 = param_8[2] * *(float *)(param_1 + 0x11c);
    local_14c = param_8[1] * *(float *)(param_1 + 0x118);
    local_150 = *param_8 * *(float *)(param_1 + 0x114);
    local_178 = *(longlong *)(param_3 + 0x10) + 8;
    iVar12 = local_138 + -1;
    if (local_138 == 0) {
      iVar12 = 0;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x38))
              ((longlong *)**(undefined8 **)(param_3 + 8),&local_160);
    dVar9 = (double)(1.0 / fVar1);
    fVar16 = (float)((dVar7 + local_158) * dVar9);
    fVar15 = (float)((dVar8 + local_160) * dVar9);
    (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x18))
              ((longlong *)**(undefined8 **)(param_3 + 8),&local_170);
    local_100 = (float)(local_168 * dVar9);
    local_104 = (float)(dVar9 * local_170);
    local_110 = *(float *)(param_4 + 8);
    local_fc = *(float *)(param_4 + 0x1c);
    local_118 = CONCAT44(local_110 * fVar16 + *(float *)(param_4 + 0x10),
                         local_110 * fVar15 + *(float *)(param_4 + 0xc));
    local_f8 = *(float *)(param_4 + 0x20);
    fVar2 = *(float *)(param_4 + 0x28);
    fVar14 = *(float *)(param_4 + 0x24);
    local_e8 = fVar15 * local_f8 + fVar2 * fVar16 + *(float *)(param_4 + 0x30);
    local_ec = fVar15 * local_fc + fVar16 * fVar14 + *(float *)(param_4 + 0x2c);
    local_f0 = local_f8 * 0.0 + fVar2;
    local_f4 = local_fc * 0.0 + fVar14;
    local_f8 = fVar2 * 0.0 + local_f8;
    local_fc = fVar14 * 0.0 + local_fc;
    local_10c = 0;
    local_e4 = local_e4 & 0xfc | *(char *)(param_4 + 0x34) * '\x02' & 2U;
    param_7 = param_7 + 1;
    local_188 = &local_150;
    local_198 = local_178;
    local_1a8 = 0;
    local_1a0 = iVar12;
    local_190 = cVar11;
    FUN_1428694c6(param_6,param_7,&local_118,&local_140);
  }
  cVar3 = *(char *)(param_1 + 0x108);
  pfVar13 = (float *)(param_1 + 0xf8);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      pfVar13 = (float *)FUN_1400c06fe(pfVar13);
    }
    else if (cVar3 == '\x03') {
      pfVar13 = param_8 + 8;
    }
    else {
      pfVar13 = param_8 + 4;
    }
  }
  local_144 = param_8[3] * pfVar13[3];
  local_148 = param_8[2] * pfVar13[2];
  local_14c = param_8[1] * pfVar13[1];
  local_150 = *param_8 * *pfVar13;
  lVar4 = *(longlong *)(param_3 + 0x10);
  iVar12 = local_138 + -1;
  if (local_138 == 0) {
    iVar12 = 0;
  }
  (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x38))
            ((longlong *)**(undefined8 **)(param_3 + 8),&local_160);
  dVar7 = (double)(1.0 / fVar1);
  fVar15 = (float)((dVar6 + local_158) * dVar7);
  fVar14 = (float)((dVar5 + local_160) * dVar7);
  (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x18))
            ((longlong *)**(undefined8 **)(param_3 + 8),&local_170);
  local_100 = (float)(local_168 * dVar7);
  local_104 = (float)(dVar7 * local_170);
  local_110 = *(float *)(param_4 + 8);
  local_fc = *(float *)(param_4 + 0x1c);
  local_118 = CONCAT44(local_110 * fVar15 + *(float *)(param_4 + 0x10),
                       local_110 * fVar14 + *(float *)(param_4 + 0xc));
  local_f8 = *(float *)(param_4 + 0x20);
  fVar1 = *(float *)(param_4 + 0x28);
  fVar2 = *(float *)(param_4 + 0x24);
  local_e8 = fVar14 * local_f8 + fVar1 * fVar15 + *(float *)(param_4 + 0x30);
  local_ec = fVar14 * local_fc + fVar15 * fVar2 + *(float *)(param_4 + 0x2c);
  local_f0 = local_f8 * 0.0 + fVar1;
  local_f4 = local_fc * 0.0 + fVar2;
  local_f8 = fVar1 * 0.0 + local_f8;
  local_fc = fVar2 * 0.0 + local_fc;
  local_10c = 0;
  local_e4 = local_e4 & 0xfc | *(char *)(param_4 + 0x34) * '\x02' & 2U;
  local_1a8 = 0;
  local_1a0 = iVar12;
  local_198 = lVar4 + 8;
  local_190 = cVar11;
  local_188 = &local_150;
  FUN_1428694c6(param_6,param_7 + 1,&local_118,&local_140);
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4cef6 FUN_146a4cef6 body=605 status=ok
// SIG undefined FUN_146a4cef6(void)

int FUN_146a4cef6(longlong param_1,undefined8 *param_2,double *param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  char local_70;
  int local_68;
  int local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_50);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_60);
  iVar5 = -1;
  if (((double)(float)local_50 <= *param_3) && (*param_3 < (double)(float)(local_50 + local_60))) {
    if (((double)(float)local_48 <= param_3[1]) &&
       (param_3[1] < (double)(float)(local_48 + local_58))) {
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_68);
      (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,local_88);
      FUN_146a4c75a(&local_98,local_64 - local_68);
      lVar3 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x10) {
        uVar7 = *(undefined8 *)(lVar3 + 0x30);
        plVar8 = *(longlong **)(lVar3 + 0x38);
      }
      else {
        uVar7 = *(undefined8 *)(lVar3 + 0x20);
        plVar8 = *(longlong **)(lVar3 + 0x28);
      }
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_a8 = local_98;
      local_a0 = local_90 + -1;
      if (local_90 == 0) {
        local_a0 = 0;
      }
      local_b8 = param_4;
      iVar5 = FUN_146937fc6(uVar7,&local_a8,param_1 + 0x98,(int)(*param_3 - local_50));
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
      if (local_70 == '\x01') {
        iVar6 = local_90 + -1;
        if (local_90 == 0) {
          iVar6 = 0;
        }
        iVar5 = iVar6 - iVar5;
      }
      iVar5 = iVar5 + local_68;
      if (param_5 != (undefined1 *)0x0) {
        uVar4 = FUN_146a23889(iVar5,&local_68);
        *param_5 = uVar4;
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_78 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)local_78 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4d154 FUN_146a4d154 body=496 status=ok
// SIG undefined FUN_146a4d154(void)

double * FUN_146a4d154(longlong param_1,double *param_2,undefined8 *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  int local_b0;
  float local_a8;
  float local_a4;
  longlong local_a0;
  int local_98;
  int local_90;
  int local_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,&local_60);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_68);
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_88);
  FUN_146a23892(&local_90,param_4,local_68,local_70);
  FUN_146a4c75a(&local_a0,local_8c - local_90);
  lVar3 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    plVar5 = *(longlong **)(lVar3 + 0x38);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    plVar5 = *(longlong **)(lVar3 + 0x28);
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_b8 = local_a0;
  local_b0 = local_98 + -1;
  if (local_98 == 0) {
    local_b0 = 0;
  }
  local_c8 = param_5;
  FUN_140499e78(uVar4,&local_a8,&local_b8,param_1 + 0x98);
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
  *param_2 = (double)local_a8 + local_60;
  param_2[1] = (double)local_a4 + local_58;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4d346 FUN_146a4d346 body=171 status=ok
// SIG undefined FUN_146a4d346(void)

undefined8 * FUN_146a4d346(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1 + 0x370;
  FUN_146a4c458(&local_28,param_1 + 0x18,param_1 + 0x78,param_1 + 0x90);
  *param_2 = local_28;
  param_2[1] = local_20;
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
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4d3f4 FUN_146a4d3f4 body=114 status=ok
// SIG undefined FUN_146a4d3f4(void)

undefined8 *
FUN_146a4d3f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f0f340;
  FUN_14058ac20(param_1 + 3);
  param_1[0xf] = *param_3;
  lVar1 = param_3[1];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_140e9ea3a(param_1 + 0x12,param_4);
  param_1[0x6e] = *param_5;
  return param_1;
}



// FUNCTION 146a4d466 FUN_146a4d466 body=1068 status=ok
// SIG undefined FUN_146a4d466(void)

void FUN_146a4d466(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,int param_10,float *param_11,byte param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  float *pfVar8;
  double *pdVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 *local_160;
  int local_158;
  undefined8 *local_150;
  byte local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  double local_108;
  float local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  byte local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = param_4;
  local_130 = param_2;
  (**(code **)(*(longlong *)*param_5 + 0x38))((longlong *)*param_5,&local_f8);
  local_f0 = *(double *)(param_3 + 0x38);
  fVar1 = *(float *)(param_7 + 8);
  local_140 = param_6 + 0xc0;
  pfVar8 = (float *)(param_6 + 200);
  cVar6 = *(char *)(param_6 + 0xd8);
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      pfVar8 = (float *)FUN_1400c06fe(pfVar8);
    }
    else if (cVar6 == '\x03') {
      pfVar8 = param_11 + 8;
    }
    else {
      pfVar8 = param_11 + 4;
    }
  }
  local_128 = CONCAT44(param_11[1] * pfVar8[1],*param_11 * *pfVar8);
  local_120 = (undefined8 *)CONCAT44(param_11[3] * pfVar8[3],param_11[2] * pfVar8[2]);
  dVar7 = (double)(1.0 / fVar1);
  fVar11 = (float)(local_f0 * dVar7);
  fVar10 = (float)(local_f8 * dVar7);
  dVar5 = *(double *)(param_3 + 0x48);
  (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,&local_108);
  local_d0 = (float)(dVar5 * dVar7);
  fStack_d4 = (float)(dVar7 * local_108);
  fStack_e0 = *(float *)(param_7 + 8);
  fVar1 = *(float *)(param_7 + 0x1c);
  local_e8 = CONCAT44(fStack_e0 * fVar11 + *(float *)(param_7 + 0x10),
                      fStack_e0 * fVar10 + *(float *)(param_7 + 0xc));
  fVar2 = *(float *)(param_7 + 0x20);
  fVar3 = *(float *)(param_7 + 0x28);
  fVar4 = *(float *)(param_7 + 0x24);
  local_b8 = fVar10 * fVar2 + fVar3 * fVar11 + *(float *)(param_7 + 0x30);
  local_bc = fVar10 * fVar1 + fVar11 * fVar4 + *(float *)(param_7 + 0x2c);
  local_c0 = fVar2 * 0.0 + fVar3;
  local_cc = fVar4 * 0.0 + fVar1;
  fStack_dc = 0.0;
  uStack_d8 = 0;
  local_c8 = (double)CONCAT44(fVar1 * 0.0 + fVar4,fVar3 * 0.0 + fVar2);
  local_b4 = local_b4 & 0xfc | *(char *)(param_7 + 0x34) * '\x02' & 2U;
  local_168 = CONCAT71(local_168._1_7_,(param_12 ^ 1) << 5);
  local_160 = &local_128;
  FUN_140239bd2(param_9,param_10 + 1,&local_e8,local_140);
  pdVar9 = (double *)(param_6 + 0xa8);
  cVar6 = *(char *)(param_6 + 0xb8);
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      pdVar9 = (double *)FUN_1400c06fe(pdVar9);
    }
    else if (cVar6 == '\x03') {
      pdVar9 = (double *)(param_11 + 8);
    }
    else {
      pdVar9 = (double *)(param_11 + 4);
    }
  }
  local_100 = *(float *)(pdVar9 + 1);
  local_108 = *pdVar9;
  local_cc = param_11[7];
  local_e8 = *(undefined8 *)param_11;
  fStack_e0 = param_11[2];
  fStack_dc = param_11[3];
  uStack_d8 = SUB84(local_108,0);
  fStack_d4 = (float)((ulonglong)local_108 >> 0x20);
  local_bc = local_cc * 0.6;
  local_120 = param_5;
  local_118 = param_6;
  local_110 = 0;
  local_148 = param_12;
  local_160 = (undefined8 *)param_9;
  local_168 = param_8;
  local_158 = param_10 + 1;
  local_150 = &local_e8;
  local_128 = param_3;
  local_d0 = local_100;
  local_c8 = local_108;
  local_c0 = local_100;
  (**(code **)(*(longlong *)*local_138 + 0x90))((longlong *)*local_138,local_130,&local_128,param_7)
  ;
  if ((local_b0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4d894 FUN_146a4d894 body=8 status=ok
// SIG undefined FUN_146a4d894(void)

longlong FUN_146a4d894(longlong param_1)

{
  return param_1 + 0x440;
}



// FUNCTION 146a4d89c FUN_146a4d89c body=418 status=ok
// SIG undefined FUN_146a4d89c(void)

void FUN_146a4d89c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = *(int *)(param_1 + 0x38);
  if (0 < iVar5) {
    lVar7 = 0;
    local_78 = param_1;
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar7 * 0x68)) {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar7 * 0x68);
        lVar8 = 8;
        lVar9 = 0;
        local_70 = lVar7;
        do {
          lVar7 = *plVar6;
          local_58 = *(longlong **)(lVar7 + -8 + lVar8);
          local_50 = *(longlong **)(lVar7 + lVar8);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_58 + 8))(local_58,&local_68);
          plVar4 = local_60;
          plVar3 = local_68;
          if (local_60 == (longlong *)0x0) {
            (**(code **)(*local_68 + 0xa0))(local_68,&local_58,param_2,param_3);
          }
          else {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            (**(code **)(*plVar3 + 0xa0))(plVar3,&local_58,param_2,param_3);
            LOCK();
            plVar3 = plVar4 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          plVar3 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar9 < (int)plVar6[1]);
        iVar5 = *(int *)(local_78 + 0x38);
        param_1 = local_78;
        lVar7 = local_70;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4da40 FUN_146a4da40 body=95 status=ok
// SIG undefined FUN_146a4da40(void)

void FUN_146a4da40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x70 + lVar3;
    do {
      iVar1 = *(int *)(lVar3 + 0x30);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x28);
        lVar5 = 0;
        do {
          (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x58))();
          lVar5 = lVar5 + 0x30;
        } while ((longlong)iVar1 * 0x30 != lVar5);
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 146a4daa0 FUN_146a4daa0 body=26 status=ok
// SIG undefined FUN_146a4daa0(void)

void FUN_146a4daa0(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x470) = *param_2;
  FUN_14096c7c0(param_1 + 0x478,param_2 + 4);
  return;
}



// FUNCTION 146a4daba FUN_146a4daba body=27 status=ok
// SIG undefined FUN_146a4daba(void)

void FUN_146a4daba(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *param_1;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146a4dad6 FUN_146a4dad6 body=422 status=ok
// SIG undefined FUN_146a4dad6(void)

undefined8 *
FUN_146a4dad6(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_88 [13];
  
  local_88[0xc] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = local_88[0] & 0xffffffffffffff00;
  pcVar4 = (char *)FUN_1410f0184(param_1 + 0x470);
  local_b8 = param_4;
  if (*pcVar4 == '\x01') {
    local_a8 = *param_3;
    local_a0 = (longlong *)param_3[1];
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_88[6] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[7] = 0x8000000000;
    local_88[8] = 0xffffffff;
    FUN_146a4c458(&local_98,local_88,&local_a8,param_1 + 0x160);
  }
  else {
    local_a8 = *param_3;
    local_a0 = (longlong *)param_3[1];
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_88[6] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[7] = 0x8000000000;
    local_88[8] = 0xffffffff;
    FUN_146a4dc7e(&local_98,local_88,&local_a8,param_1 + 0x160);
  }
  *param_2 = local_98;
  param_2[1] = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  FUN_141720dbc(local_88);
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_88[0xc] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4dc7e FUN_146a4dc7e body=282 status=ok
// SIG undefined FUN_146a4dc7e(void)

longlong *
FUN_146a4dc7e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x380,0x10);
  FUN_146a4d3f4(lVar2,param_2,param_3,param_4,param_5);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f11730;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_146a4dd6a;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_146a4dd6a;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_146a4dd6a:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 146a4dda6 FUN_146a4dda6 body=512 status=ok
// SIG undefined FUN_146a4dda6(void)

undefined4
FUN_146a4dda6(longlong param_1,undefined8 *param_2,double *param_3,undefined4 param_4,
             undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined1 auStack_128 [32];
  int local_108;
  longlong local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_e8 [56];
  longlong *local_b0;
  undefined2 local_88 [4];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_50);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_60);
  uVar5 = 0xffffffff;
  if ((local_50 <= *param_3) && (*param_3 < local_50 + local_60)) {
    if ((local_48 <= param_3[1]) && (param_3[1] < local_48 + local_58)) {
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_68);
      (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,local_88);
      local_108 = (int)(*param_3 - local_50);
      iVar3 = *(int *)(*(undefined8 **)(param_1 + 0x78) + 1);
      if (iVar3 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
      }
      uVar6 = (ulonglong)(iVar3 - 1);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      local_f8 = uVar6 << 0x20;
      local_ec = local_88[0];
      local_f0 = param_4;
      FUN_144a87366(local_e8,param_1 + 0x98);
      uVar5 = FUN_146a23deb(local_80,&local_f8,local_68,puVar7);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
      if (param_5 != (undefined1 *)0x0) {
        uVar4 = FUN_146a23889(uVar5,local_68,local_70);
        *param_5 = uVar4;
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)local_78 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4dfa8 FUN_146a4dfa8 body=440 status=ok
// SIG undefined FUN_146a4dfa8(void)

double * FUN_146a4dfa8(longlong param_1,double *param_2,undefined8 *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f0 [56];
  longlong *local_b8;
  double local_90;
  double local_88;
  undefined1 local_80 [8];
  undefined2 local_78 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60;
  undefined1 local_58 [8];
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,&local_50);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_58);
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_78);
  FUN_146a23892(local_80,param_4,local_58,local_60);
  iVar3 = *(int *)(*(undefined8 **)(param_1 + 0x78) + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
  }
  uVar4 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  local_100 = uVar4 << 0x20;
  local_f8 = param_5;
  local_f4 = local_78[0];
  FUN_144a87366(local_f0,param_1 + 0x98);
  local_108 = puVar5;
  FUN_140863873(&local_90,local_70,&local_100,local_80);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  *param_2 = local_50 + local_90;
  param_2[1] = local_48 + local_88;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4e162 FUN_146a4e162 body=99 status=ok
// SIG undefined FUN_146a4e162(void)

void FUN_146a4e162(longlong param_1,undefined8 *param_2,undefined8 *param_3)

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
  plVar5 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(longlong *)(param_1 + 0x80) = lVar4;
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
  *(undefined8 *)(param_1 + 0x370) = *param_3;
  return;
}



// FUNCTION 146a4e1c6 FUN_146a4e1c6 body=171 status=ok
// SIG undefined FUN_146a4e1c6(void)

undefined8 * FUN_146a4e1c6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1 + 0x370;
  FUN_146a4dc7e(&local_28,param_1 + 0x18,param_1 + 0x78,param_1 + 0x90);
  *param_2 = local_28;
  param_2[1] = local_20;
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
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4e2e6 FUN_146a4e2e6 body=27 status=ok
// SIG undefined FUN_146a4e2e6(void)

void FUN_146a4e2e6(longlong param_1,float param_2)

{
  if ((param_2 != 0.0) || (NAN(param_2))) {
    *(float *)(param_1 + 0xe0) = param_2 * *(float *)(param_1 + 0xe0);
  }
  return;
}



// FUNCTION 146a4e302 FUN_146a4e302 body=1724 status=ok
// SIG undefined FUN_146a4e302(void)

int FUN_146a4e302(longlong *param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                 undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
                 int param_10,float *param_11,byte param_12)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  bool bVar10;
  ushort uVar11;
  short sVar12;
  float *pfVar13;
  char cVar14;
  longlong *plVar15;
  short sVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_178 [32];
  char local_158;
  float *local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  short local_12c;
  short local_12a;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  undefined8 local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  byte local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar9 = *(undefined8 **)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar17 = puVar9[2];
    plVar15 = (longlong *)puVar9[3];
  }
  else {
    uVar17 = *puVar9;
    plVar15 = (longlong *)puVar9[1];
  }
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_1469360fe(uVar17,param_1 + 0x18,*(undefined4 *)(param_7 + 8));
  sVar12 = FUN_146936108(uVar17,param_1 + 0x18,*(undefined4 *)(param_7 + 8));
  (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)(param_7 + 8),&local_12a,&local_12c);
  sVar16 = 1;
  if (1 < local_12c) {
    sVar16 = local_12c;
  }
  if ((param_5 != 0.0) || (NAN(param_5))) {
    dVar7 = *(double *)(param_3 + 0x38);
    dVar8 = *(double *)(param_3 + 0x30);
    fVar24 = 1.0 / *(float *)(param_7 + 8);
    pfVar13 = (float *)(param_1 + 0x24);
    cVar14 = (char)param_1[0x26];
    if (cVar14 != '\0') {
      if (cVar14 == '\x01') {
        pfVar13 = (float *)FUN_1400c06fe();
      }
      else if (cVar14 == '\x03') {
        pfVar13 = param_11 + 8;
      }
      else {
        pfVar13 = param_11 + 4;
      }
    }
    if (*(float *)(param_1 + 0x29) <= 0.0) {
      fVar20 = *(float *)((longlong)param_1 + 0x134);
      fVar22 = *(float *)(param_1 + 0x27);
      bVar10 = false;
    }
    else {
      fVar20 = *(float *)((longlong)param_1 + 0x134);
      fVar22 = *(float *)(param_1 + 0x27);
      bVar10 = 0.0 < fVar20 * fVar20 + fVar22 * fVar22;
    }
    fVar27 = (float)((double)(int)sVar12 + (double)uVar11 + dVar7 +
                    (double)((float)(int)local_12a * -0.5));
    fVar26 = (float)((double)param_4 + dVar8);
    fVar25 = *pfVar13;
    fVar3 = pfVar13[1];
    fVar4 = pfVar13[2];
    local_140 = pfVar13[3];
    local_120 = *(float *)(param_7 + 8);
    fVar18 = local_120 * -fVar22;
    fVar19 = local_120 * -fVar20;
    if (bVar10) {
      local_130 = *(float *)(param_1 + 0x29) * param_11[3];
      local_134 = *(float *)((longlong)param_1 + 0x144) * param_11[2];
      local_138 = *(float *)(param_1 + 0x28) * param_11[1];
      local_13c = *(float *)((longlong)param_1 + 0x13c) * *param_11;
      local_150 = &local_13c;
      cVar14 = (param_12 ^ 1) << 5;
      fVar23 = ((float)((uint)(fVar22 * local_120) & -(uint)(0.0 < fVar22)) + fVar27) * fVar24;
      fVar21 = ((float)((uint)(fVar20 * local_120) & -(uint)(0.0 < fVar20)) + fVar26) * fVar24;
      local_128 = CONCAT44(local_120 * fVar23 + *(float *)(param_7 + 0x10),
                           local_120 * fVar21 + *(float *)(param_7 + 0xc));
      uVar17 = CONCAT44((float)(int)sVar16 * fVar24,param_5 * fVar24);
      local_10c = *(float *)(param_7 + 0x1c);
      local_108 = *(float *)(param_7 + 0x20);
      fVar5 = *(float *)(param_7 + 0x28);
      fVar6 = *(float *)(param_7 + 0x24);
      local_f8 = fVar21 * local_108 + fVar23 * fVar5 + *(float *)(param_7 + 0x30);
      local_fc = fVar21 * local_10c + fVar23 * fVar6 + *(float *)(param_7 + 0x2c);
      local_100 = local_108 * 0.0 + fVar5;
      local_104 = local_10c * 0.0 + fVar6;
      local_108 = fVar5 * 0.0 + local_108;
      local_10c = fVar6 * 0.0 + local_10c;
      local_11c = 0;
      local_f4 = local_f4 & 0xfc | *(char *)(param_7 + 0x34) * '\x02' & 2U;
      param_10 = param_10 + 1;
      local_158 = cVar14;
      local_148 = fVar26;
      local_144 = fVar27;
      local_114 = uVar17;
      FUN_140239bd2(param_9,param_10,&local_128,param_1 + 2);
      local_120 = *(float *)(param_7 + 8);
    }
    else {
      cVar14 = (param_12 ^ 1) << 5;
      uVar17 = CONCAT44((float)(int)sVar16 * fVar24,param_5 * fVar24);
    }
    local_130 = local_140 * param_11[3];
    local_134 = fVar4 * param_11[2];
    local_138 = fVar3 * param_11[1];
    local_13c = fVar25 * *param_11;
    local_150 = &local_13c;
    fVar25 = ((float)(-(uint)(fVar22 < -fVar22) & (uint)fVar18) + fVar27) * fVar24;
    fVar24 = ((float)(-(uint)(fVar20 < -fVar20) & (uint)fVar19) + fVar26) * fVar24;
    local_128 = CONCAT44(fVar25 * local_120 + *(float *)(param_7 + 0x10),
                         fVar24 * local_120 + *(float *)(param_7 + 0xc));
    local_10c = *(float *)(param_7 + 0x1c);
    local_108 = *(float *)(param_7 + 0x20);
    fVar20 = *(float *)(param_7 + 0x28);
    fVar22 = *(float *)(param_7 + 0x24);
    local_f8 = fVar24 * local_108 + fVar25 * fVar20 + *(float *)(param_7 + 0x30);
    local_fc = fVar24 * local_10c + fVar25 * fVar22 + *(float *)(param_7 + 0x2c);
    local_100 = local_108 * 0.0 + fVar20;
    local_104 = local_10c * 0.0 + fVar22;
    local_108 = fVar20 * 0.0 + local_108;
    local_10c = fVar22 * 0.0 + local_10c;
    local_11c = 0;
    local_f4 = local_f4 & 0xfc | *(char *)(param_7 + 0x34) * '\x02' & 2U;
    param_10 = param_10 + 1;
    local_158 = cVar14;
    local_114 = uVar17;
    FUN_140239bd2(param_9,param_10,&local_128,param_1 + 2);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4e9c0 FUN_146a4e9c0 body=282 status=ok
// SIG undefined FUN_146a4e9c0(void)

undefined8 *
FUN_146a4e9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  local_58 = *param_6;
  uStack_50 = param_6[1];
  local_68 = param_4[4];
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  *puVar1 = &PTR_LAB_149f0f3f0;
  FUN_140e361c2(puVar1 + 2,param_2);
  FUN_144a87366(puVar1 + 0x18,param_3);
  puVar1[0x24] = CONCAT44(uStack_74,local_78);
  puVar1[0x25] = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(puVar1 + 0x26) = local_68;
  *(undefined8 *)((longlong)puVar1 + 0x134) = param_5;
  *(undefined4 *)((longlong)puVar1 + 0x13c) = (undefined4)local_58;
  *(undefined4 *)(puVar1 + 0x28) = local_58._4_4_;
  *(undefined4 *)((longlong)puVar1 + 0x144) = (undefined4)uStack_50;
  *(undefined4 *)(puVar1 + 0x29) = uStack_50._4_4_;
  *puVar1 = &PTR_FUN_149f0f410;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f11750;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4eadc FUN_146a4eadc body=165 status=ok
// SIG undefined FUN_146a4eadc(void)

void FUN_146a4eadc(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  puVar3 = *(undefined8 **)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar4 = puVar3[2];
    plVar5 = (longlong *)puVar3[3];
  }
  else {
    uVar4 = *puVar3;
    plVar5 = (longlong *)puVar3[1];
  }
  if (plVar5 == (longlong *)0x0) {
    FUN_14693634a(uVar4,param_1 + 0xc0,param_2,param_3,param_4);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_14693634a(uVar4,param_1 + 0xc0,param_2,param_3,param_4);
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
                    /* WARNING: Could not recover jumptable at 0x000146a4eb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a4eb82 FUN_146a4eb82 body=282 status=ok
// SIG undefined FUN_146a4eb82(void)

undefined8 *
FUN_146a4eb82(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  local_58 = *param_6;
  uStack_50 = param_6[1];
  local_68 = param_4[4];
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  *puVar1 = &PTR_LAB_149f0f3f0;
  FUN_140e361c2(puVar1 + 2,param_2);
  FUN_144a87366(puVar1 + 0x18,param_3);
  puVar1[0x24] = CONCAT44(uStack_74,local_78);
  puVar1[0x25] = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(puVar1 + 0x26) = local_68;
  *(undefined8 *)((longlong)puVar1 + 0x134) = param_5;
  *(undefined4 *)((longlong)puVar1 + 0x13c) = (undefined4)local_58;
  *(undefined4 *)(puVar1 + 0x28) = local_58._4_4_;
  *(undefined4 *)((longlong)puVar1 + 0x144) = (undefined4)uStack_50;
  *(undefined4 *)(puVar1 + 0x29) = uStack_50._4_4_;
  *puVar1 = &PTR_FUN_149f0f430;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f11770;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4ec9e FUN_146a4ec9e body=165 status=ok
// SIG undefined FUN_146a4ec9e(void)

void FUN_146a4ec9e(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  puVar3 = *(undefined8 **)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar4 = puVar3[2];
    plVar5 = (longlong *)puVar3[3];
  }
  else {
    uVar4 = *puVar3;
    plVar5 = (longlong *)puVar3[1];
  }
  if (plVar5 == (longlong *)0x0) {
    FUN_146936446(uVar4,param_1 + 0xc0,param_2,param_3,param_4);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_146936446(uVar4,param_1 + 0xc0,param_2,param_3,param_4);
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
                    /* WARNING: Could not recover jumptable at 0x000146a4ed17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a4ed44 FUN_146a4ed44 body=288 status=ok
// SIG undefined FUN_146a4ed44(void)

longlong *
FUN_146a4ed44(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x100,0x10);
  FUN_146a4ee64(lVar2,param_2,param_3,param_4,param_5,param_6);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f11790;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_146a4ee33;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_146a4ee33;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_146a4ee33:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 146a4ee64 FUN_146a4ee64 body=436 status=ok
// SIG undefined FUN_146a4ee64(void)

undefined8 *
FUN_146a4ee64(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f0f450;
  param_1[3] = *param_2;
  lVar6 = param_2[1];
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14058ac20(param_1 + 5,param_3);
  param_1[0x11] = *param_4;
  lVar6 = param_4[1];
  param_1[0x12] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = *param_6;
  param_1[0x14] = *param_5;
  lVar6 = param_5[1];
  param_1[0x15] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_5 + 0x12);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_5 + 2);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_146a26884(param_1 + 0x17,param_5 + 3);
  cVar2 = *(char *)(param_5 + 7);
  *(char *)(param_1 + 0x1b) = cVar2;
  if (cVar2 == '\x01') {
    uVar5 = param_5[6];
    param_1[0x19] = param_5[5];
    param_1[0x1a] = uVar5;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_1405d299c(param_1[0x14],*(undefined4 *)(*param_2 + 0x94));
  lVar6 = param_1[0x14];
  pfVar7 = (float *)&DAT_14c84635c;
  if ((*(byte *)(lVar6 + 0x31) & 0x20) != 0) {
    pfVar7 = (float *)(lVar6 + 0x168);
  }
  fVar1 = pfVar7[1];
  param_1[0x1e] = (double)*pfVar7;
  param_1[0x1f] = (double)fVar1;
  iVar3 = *(int *)(param_1 + 0x1d);
  *(uint *)(param_1 + 0x1d) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xec) < iVar3 + 1U) {
    FUN_1469e5f1c(param_1 + 0x1c,iVar3);
    lVar6 = param_1[0x14];
  }
  lVar4 = param_1[0x1c];
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar6;
  lVar6 = param_1[0x15];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146a4f032 FUN_146a4f032 body=134 status=ok
// SIG undefined FUN_146a4f032(void)

int FUN_146a4f032(longlong param_1,float param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  short *psVar4;
  short local_2a [13];
  
  local_2a[0] = 0;
  if (*(char *)(param_1 + 0xb2) == '\x01') {
    psVar4 = (short *)(param_1 + 0xb0);
    if ((*(int *)(param_1 + 0xc0) != 0) && (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xc0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0xb8);
        }
        sVar2 = (**(code **)(*plVar3 + 0x58))();
        *psVar4 = sVar2;
      }
    }
  }
  else {
    psVar4 = local_2a;
  }
  return (int)((float)(int)*psVar4 * param_2);
}



// FUNCTION 146a4f0fa FUN_146a4f0fa body=137 status=ok
// SIG undefined FUN_146a4f0fa(void)

double * FUN_146a4f0fa(longlong *param_1,double *param_2,int param_3,int param_4,float param_5)

{
  short sVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  
  if (param_4 == param_3) {
    sVar1 = (**(code **)(*param_1 + 0x20))();
    dVar3 = (double)(int)sVar1;
    dVar4 = 0.0;
  }
  else {
    if ((char)param_1[0x1b] == '\0') {
      pfVar2 = (float *)&DAT_14c84635c;
      if ((*(byte *)(param_1[0x14] + 0x31) & 0x20) != 0) {
        pfVar2 = (float *)(param_1[0x14] + 0x168);
      }
      dVar4 = (double)*pfVar2;
      dVar3 = (double)pfVar2[1];
    }
    else {
      dVar4 = (double)param_1[0x19];
      dVar3 = (double)param_1[0x1a];
    }
    dVar3 = dVar3 * (double)param_5;
    dVar4 = dVar4 * (double)param_5;
  }
  *param_2 = dVar4;
  param_2[1] = dVar3;
  return param_2;
}



// FUNCTION 146a4f188 FUN_146a4f188 body=428 status=ok
// SIG undefined FUN_146a4f188(void)

longlong *
FUN_146a4f188(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  plVar3 = *(longlong **)(param_1 + 0x10);
  local_60 = param_3;
  local_5c = param_4;
  if (plVar3 == (longlong *)0x0) {
LAB_146a4f221:
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a4f221;
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
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar9 = false;
    local_78 = uVar4;
    plStack_70 = plVar3;
  }
  plVar3 = plStack_70;
  lVar7 = FUN_14001cc68(0x70,0x10);
  local_48 = local_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  local_80 = param_7;
  local_88 = param_6;
  FUN_14086879c(lVar7,&local_78,&local_60);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f0e060;
  plVar8[2] = lVar7;
  *param_2 = lVar7;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  plVar8 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (!bVar9) {
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a4f336 FUN_146a4f336 body=1124 status=ok
// SIG undefined FUN_146a4f336(void)

void FUN_146a4f336(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_140;
  ulonglong local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pfVar13 = (float *)&DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x31) & 0x20) != 0) {
    pfVar13 = (float *)(*(longlong *)(param_1 + 0xa0) + 0x168);
  }
  dVar8 = (double)pfVar13[1];
  dVar9 = (double)*pfVar13;
  fVar3 = *(float *)(param_4 + 8);
  if ((*(double *)(param_1 + 0xf0) == dVar9) && (!NAN(*(double *)(param_1 + 0xf0)) && !NAN(dVar9)))
  {
    if ((*(double *)(param_1 + 0xf8) == dVar8) && (!NAN(*(double *)(param_1 + 0xf8)) && !NAN(dVar8))
       ) goto LAB_146a4f477;
  }
  *(double *)(param_1 + 0xf0) = dVar9;
  *(double *)(param_1 + 0xf8) = dVar8;
  plVar6 = *(longlong **)(param_1 + 0x20);
  if (plVar6 != (longlong *)0x0) {
    uVar12 = (ulonglong)*(uint *)(plVar6 + 1);
    do {
      uVar11 = (uint)uVar12;
      if (uVar11 == 0) goto LAB_146a4f477;
      LOCK();
      uVar4 = *(uint *)(plVar6 + 1);
      if (uVar11 == uVar4) {
        *(uint *)(plVar6 + 1) = uVar11 + 1;
      }
      else {
        uVar12 = (ulonglong)uVar4;
      }
      UNLOCK();
    } while (uVar11 != uVar4);
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (lVar7 != 0) {
      plVar14 = *(longlong **)(param_1 + 0x10);
      if (plVar14 == (longlong *)0x0) {
LAB_146a4f6b1:
        local_108 = 0;
        fStack_100 = 0.0;
        fStack_fc = 0.0;
        local_130 = CONCAT44(local_130._4_4_,(int)CONCAT71((int7)(uVar12 >> 8),1));
        plVar14 = (longlong *)0x0;
      }
      else {
        uVar12 = (ulonglong)*(uint *)(plVar14 + 1);
        do {
          uVar11 = (uint)uVar12;
          if (uVar11 == 0) goto LAB_146a4f6b1;
          LOCK();
          uVar4 = *(uint *)(plVar14 + 1);
          if (uVar11 == uVar4) {
            *(uint *)(plVar14 + 1) = uVar11 + 1;
          }
          else {
            uVar12 = (ulonglong)uVar4;
          }
          UNLOCK();
        } while (uVar11 != uVar4);
        local_108 = *(ulonglong *)(param_1 + 8);
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar14 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          local_130 = local_108;
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_108 = local_130;
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            local_108 = local_130;
          }
        }
        fStack_100 = SUB84(plVar14,0);
        fStack_fc = (float)((ulonglong)plVar14 >> 0x20);
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        local_130 = local_130 & 0xffffffff00000000;
      }
      FUN_146a4f79c(lVar7);
      plVar10 = (longlong *)CONCAT44(fStack_fc,fStack_100);
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
      if ((char)local_130 == '\0') {
        LOCK();
        plVar10 = plVar14 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
    LOCK();
    plVar14 = plVar6 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
LAB_146a4f477:
  (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x38))
            ((longlong *)**(undefined8 **)(param_3 + 8),&local_118);
  dVar8 = (double)(1.0 / fVar3);
  fVar15 = (float)(local_110 * dVar8);
  fVar16 = (float)(local_118 * dVar8);
  (**(code **)(*(longlong *)**(undefined8 **)(param_3 + 8) + 0x18))
            ((longlong *)**(undefined8 **)(param_3 + 8),&local_128);
  fStack_100 = *(float *)(param_4 + 8);
  fStack_f8 = fStack_100 * fVar15 + *(float *)(param_4 + 0x10);
  fStack_fc = fStack_100 * fVar16 + *(float *)(param_4 + 0xc);
  local_108 = CONCAT44((float)(local_120 * dVar8),(float)(dVar8 * local_128));
  local_ec = *(float *)(param_4 + 0x1c);
  local_e8 = *(float *)(param_4 + 0x20);
  fVar3 = *(float *)(param_4 + 0x28);
  fVar5 = *(float *)(param_4 + 0x24);
  local_d8 = fVar16 * local_e8 + fVar3 * fVar15 + *(float *)(param_4 + 0x30);
  local_dc = fVar16 * local_ec + fVar5 * fVar15 + *(float *)(param_4 + 0x2c);
  local_e0 = local_e8 * 0.0 + fVar3;
  local_e4 = local_ec * 0.0 + fVar5;
  local_e8 = fVar3 * 0.0 + local_e8;
  local_ec = fVar5 * 0.0 + local_ec;
  local_d4 = local_d4 & 0xfe | *(byte *)(param_4 + 0x34) & 1;
  local_140 = param_9;
  local_148 = param_8;
  local_158 = param_6;
  local_150 = param_7;
  local_f4 = fVar16;
  local_f0 = fVar15;
  FUN_14016eaf2(*(undefined8 *)(param_1 + 0xa0),param_2,&local_108,param_5);
  if ((local_d0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a4f79c FUN_146a4f79c body=214 status=ok
// SIG undefined FUN_146a4f79c(void)

void FUN_146a4f79c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar9 = 0;
    do {
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x68 + lVar9 * 0x70) & 1) == 0) &&
         (lVar7 = *(longlong *)(param_1 + 0x20) + lVar9 * 0x70, 0 < *(int *)(lVar7 + 0x30))) {
        lVar6 = 0;
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar6);
          plVar4 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + 8 + lVar6);
          if (plVar4 == (longlong *)0x0) {
            lVar5 = *param_2;
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            lVar5 = *param_2;
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
          if (lVar3 == lVar5) {
            FUN_140863510(lVar6 + *(longlong *)(lVar7 + 0x28));
            break;
          }
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar8 < *(int *)(lVar7 + 0x30));
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x28));
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  return;
}



// FUNCTION 146a4f87a FUN_146a4f87a body=1347 status=ok
// SIG undefined FUN_146a4f87a(void)

void FUN_146a4f87a(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  double dVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  float *local_190;
  longlong local_188;
  double local_178;
  double local_170;
  float local_168;
  float fStack_164;
  double local_160;
  double local_158;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  undefined8 local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  undefined4 local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  char local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  fVar12 = *(float *)(param_3 + 8);
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_160);
  dVar6 = (double)(1.0 / fVar12);
  fVar12 = (float)(local_158 * dVar6);
  fVar13 = (float)(local_160 * dVar6);
  local_14c = 0x3f800000;
  local_148 = fVar13;
  fStack_144 = fVar12;
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_178);
  fStack_164 = (float)(local_170 * dVar6);
  local_168 = (float)(dVar6 * local_178);
  local_100 = *(longlong *)(param_1 + 0xa0);
  local_a0 = *(char *)(local_100 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_a0 != '\0') {
      local_a8 = *(ulonglong *)(local_100 + 400);
      local_b8 = *(undefined8 *)(local_100 + 0x180);
      uStack_b0 = *(undefined8 *)(local_100 + 0x188);
      goto LAB_146a4fc8a;
    }
LAB_146a4f99c:
    uVar5 = *(undefined1 *)(param_3 + 0x34);
    fStack_130 = *(float *)(param_3 + 8);
    fStack_11c = *(float *)(param_3 + 0x1c);
    fVar9 = *(float *)(param_3 + 0x20);
    fVar3 = *(float *)(param_3 + 0x28);
    fVar4 = *(float *)(param_3 + 0x24);
    fVar8 = fVar13 * fVar9 + fVar3 * fVar12 + *(float *)(param_3 + 0x30);
    fVar10 = fVar13 * fStack_11c + fVar4 * fVar12 + *(float *)(param_3 + 0x2c);
    fVar11 = fVar9 * 0.0 + fVar3;
    fVar14 = fStack_11c * 0.0 + fVar4;
    fVar9 = fVar3 * 0.0 + fVar9;
    local_128 = fVar12 * fStack_130 + *(float *)(param_3 + 0x10);
    fStack_12c = fVar13 * fStack_130 + *(float *)(param_3 + 0xc);
    fStack_11c = fVar4 * 0.0 + fStack_11c;
    plVar7 = *(longlong **)(param_1 + 0xa8);
    local_138 = local_168;
    fStack_134 = fStack_164;
    if (plVar7 == (longlong *)0x0) {
      fStack_124 = local_148;
      fStack_120 = fStack_144;
      local_118 = CONCAT44(fVar14,fVar9);
      uStack_110 = CONCAT44(fVar10,fVar11);
      local_108 = CONCAT35(local_108._5_3_,CONCAT14(uVar5,fVar8)) & 0xffffff01ffffffff;
LAB_146a4fba9:
      local_f8 = (longlong *)0x0;
      goto LAB_146a4fbbd;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    fStack_124 = local_148;
    fStack_120 = fStack_144;
    local_118 = CONCAT44(fVar14,fVar9);
    uStack_110 = CONCAT44(fVar10,fVar11);
    local_108 = CONCAT17(local_f0._2_1_,CONCAT25((undefined2)local_f0,CONCAT14(uVar5,fVar8))) &
                0xffffff01ffffffff;
  }
  else {
    if (local_a0 == '\0') goto LAB_146a4f99c;
    local_b8 = *(undefined8 *)(local_100 + 0x180);
    uStack_b0 = *(undefined8 *)(local_100 + 0x188);
    local_a8 = *(ulonglong *)(local_100 + 400) ^ 0x80000000;
LAB_146a4fc8a:
    fVar12 = (float)*(double *)(local_100 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar12 = (0.5 - fVar12) + 0.5;
    }
    local_140 = CONCAT44((float)*(double *)(local_100 + 0x178),fVar12);
    local_198 = &local_140;
    local_188 = param_3 + 0x1c;
    local_138 = *(float *)(param_3 + 8);
    local_190 = &local_138;
    fStack_134 = (float)*(undefined8 *)(param_3 + 0xc);
    fStack_130 = (float)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
    FUN_146978c22(&local_f0,&local_168,&local_14c,&local_b8);
    local_100 = *(longlong *)(param_1 + 0xa0);
    plVar7 = *(longlong **)(param_1 + 0xa8);
    if (plVar7 == (longlong *)0x0) {
      local_108 = local_c0;
      local_118 = CONCAT44(uStack_cc,local_d0);
      uStack_110 = CONCAT44(uStack_c4,uStack_c8);
      local_128 = local_e0;
      fStack_124 = fStack_dc;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      local_138 = local_f0;
      fStack_134 = fStack_ec;
      fStack_130 = fStack_e8;
      fStack_12c = fStack_e4;
      goto LAB_146a4fba9;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_108 = local_c0;
    fStack_124 = fStack_dc;
    fStack_120 = fStack_d8;
    local_118 = CONCAT44(uStack_cc,local_d0);
    uStack_110 = CONCAT44(uStack_c4,uStack_c8);
    local_128 = local_e0;
    fStack_11c = fStack_d4;
    local_138 = local_f0;
    fStack_134 = fStack_ec;
    fStack_130 = fStack_e8;
    fStack_12c = fStack_e4;
  }
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  local_f8 = plVar7;
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
LAB_146a4fbbd:
  FUN_1402018be(param_4,&local_138);
  plVar7 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4fdbe FUN_146a4fdbe body=397 status=ok
// SIG undefined FUN_146a4fdbe(void)

undefined4
FUN_146a4fdbe(longlong param_1,undefined8 *param_2,double *param_3,float param_4,undefined1 *param_5
             )

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined1 uVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_87;
  longlong *local_78;
  undefined1 local_68 [8];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_50);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_60);
  dVar3 = *param_3;
  uVar6 = 0xffffffff;
  if (((double)(float)local_50 <= dVar3) && (dVar3 < (double)(float)(local_50 + local_60))) {
    if (((double)(float)local_48 <= param_3[1]) &&
       (param_3[1] < (double)(float)(local_48 + local_58))) {
      pfVar5 = (float *)&DAT_14c84635c;
      if ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x31) & 0x20) != 0) {
        pfVar5 = (float *)(*(longlong *)(param_1 + 0xa0) + 0x168);
      }
      uVar6 = *(undefined4 *)
               (param_1 + 0x98 +
               (ulonglong)((double)(param_4 * *pfVar5) * 0.5 + (double)(float)local_50 < dVar3) * 4)
      ;
      if (param_5 != (undefined1 *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_68);
        (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_88);
        uVar4 = FUN_146a23889(uVar6,local_68,local_87);
        *param_5 = uVar4;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_78 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)local_78 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_78 + 0x10))(local_78);
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a4ff4c FUN_146a4ff4c body=26 status=ok
// SIG undefined FUN_146a4ff4c(void)

undefined8 FUN_146a4ff4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*(longlong *)*param_3 + 0x38))();
  return param_2;
}



// FUNCTION 146a4ff66 FUN_146a4ff66 body=102 status=ok
// SIG undefined FUN_146a4ff66(void)

void FUN_146a4ff66(longlong param_1,undefined8 *param_2,undefined8 *param_3)

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
  plVar5 = *(longlong **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(longlong *)(param_1 + 0x90) = lVar4;
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
  *(undefined8 *)(param_1 + 0x98) = *param_3;
  return;
}



// FUNCTION 146a4ffcc FUN_146a4ffcc body=284 status=ok
// SIG undefined FUN_146a4ffcc(void)

undefined8 * FUN_146a4ffcc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1 + 0x98;
  local_58 = param_1 + 0xa0;
  local_38 = *(longlong **)(param_1 + 0x20);
  if (local_38 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    local_40 = 0;
  }
  else {
    iVar5 = (int)local_38[1];
    local_40 = 0;
    do {
      if (iVar5 == 0) {
        local_38 = (longlong *)0x0;
        goto LAB_146a5000f;
      }
      LOCK();
      iVar4 = (int)local_38[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_38 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_40 = *(undefined8 *)(param_1 + 0x18);
  }
LAB_146a5000f:
  FUN_146a4ed44(&local_30,&local_40,param_1 + 0x28,param_1 + 0x88);
  *param_2 = local_30;
  param_2[1] = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a50166 FUN_146a50166 body=78 status=ok
// SIG undefined FUN_146a50166(void)

void FUN_146a50166(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  FUN_1449db362(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000146a501a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a501b4 FUN_146a501b4 body=154 status=ok
// SIG undefined FUN_146a501b4(void)

float FUN_146a501b4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    plVar6 = *(longlong **)(lVar3 + 0x38);
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    plVar6 = *(longlong **)(lVar3 + 0x28);
  }
  if (plVar6 == (longlong *)0x0) {
    uVar4 = FUN_1408634be(uVar5,param_1,0x3f800000);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    uVar4 = FUN_1408634be(uVar5,param_1,0x3f800000);
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
  return (float)uVar4;
}



// FUNCTION 146a5024e FUN_146a5024e body=25 status=ok
// SIG undefined FUN_146a5024e(void)

float FUN_146a5024e(float param_1)

{
  param_1 = param_1 * 0.08;
  if (2.0 <= param_1) {
    param_1 = 2.0;
  }
  if (param_1 <= 1.0) {
    param_1 = 1.0;
  }
  return param_1;
}



// FUNCTION 146a50268 FUN_146a50268 body=90 status=ok
// SIG undefined FUN_146a50268(void)

void FUN_146a50268(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_14086811e(param_1,(ulonglong)uVar1);
  }
  memmove((void *)(*param_1 + 0x10),(void *)*param_1,(ulonglong)uVar1 << 4);
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = *param_2;
  lVar3 = param_2[1];
  puVar2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146a502c2 FUN_146a502c2 body=78 status=ok
// SIG undefined FUN_146a502c2(void)

longlong * FUN_146a502c2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1408680ad(*param_1,(int)param_1[1]);
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



// FUNCTION 146a50310 FUN_146a50310 body=99 status=ok
// SIG undefined FUN_146a50310(void)

void FUN_146a50310(longlong *param_1)

{
  FUN_140868060(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140868060(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1408680ad(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a50374 FUN_146a50374 body=41 status=ok
// SIG undefined FUN_146a50374(void)

void FUN_146a50374(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  iVar2 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x68 + lVar4);
      *pbVar1 = *pbVar1 | 7;
      lVar4 = lVar4 + 0x70;
    } while ((longlong)iVar2 * 0x70 - lVar4 != 0);
  }
  return;
}



// FUNCTION 146a5039e FUN_146a5039e body=201 status=ok
// SIG undefined FUN_146a5039e(void)

void FUN_146a5039e(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 0x70;
  plVar4 = (longlong *)(lVar1 + 0x48);
  iVar5 = *(int *)(lVar1 + 0x50);
  lVar6 = (longlong)iVar5;
  if (0 < lVar6) {
    piVar3 = (int *)(*plVar4 + 8);
    lVar2 = 0;
    do {
      if ((param_2[1] < piVar3[-1]) || (param_2[2] < *piVar3)) {
        iVar5 = 1;
        if (1 < (int)lVar2) {
          iVar5 = (int)lVar2;
        }
        FUN_146a50468(plVar4,param_2,iVar5 + -1);
        goto LAB_146a5042c;
      }
      lVar2 = lVar2 + 1;
      piVar3 = piVar3 + 8;
    } while (lVar6 != lVar2);
  }
  *(uint *)(lVar1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(lVar1 + 0x54) < iVar5 + 1U) {
    FUN_146a75516(plVar4,iVar5);
  }
  lVar1 = *plVar4;
  lVar6 = lVar6 * 0x20;
  *(int *)(lVar1 + 8 + lVar6) = param_2[2];
  *(undefined8 *)(lVar1 + lVar6) = *(undefined8 *)param_2;
  *(undefined8 *)(lVar1 + 0x10 + lVar6) = *(undefined8 *)(param_2 + 4);
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(lVar1 + 0x18 + lVar6) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_146a5042c:
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  return;
}



// FUNCTION 146a50468 FUN_146a50468 body=144 status=ok
// SIG undefined FUN_146a50468(void)

uint FUN_146a50468(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146a75516(param_1,iVar1);
  }
  lVar4 = (ulonglong)param_3 * 0x20;
  memmove((void *)(*param_1 + lVar4 + 0x20),(void *)(*param_1 + lVar4),
          (ulonglong)(iVar1 - param_3) << 5);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = param_2[2];
  lVar3 = param_2[3];
  *(longlong *)(lVar2 + 0x18 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 146a504f8 FUN_146a504f8 body=184 status=ok
// SIG undefined FUN_146a504f8(void)

void FUN_146a504f8(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 0x70;
  plVar5 = (longlong *)(lVar1 + 0x58);
  iVar6 = *(int *)(lVar1 + 0x60);
  lVar7 = (longlong)iVar6;
  if (0 < lVar7) {
    piVar4 = (int *)(*plVar5 + 0xc);
    lVar3 = 0;
    do {
      if (param_2[3] < *piVar4) {
        iVar6 = 1;
        if (1 < (int)lVar3) {
          iVar6 = (int)lVar3;
        }
        FUN_146a505b0(plVar5,param_2,iVar6 + -1);
        goto LAB_146a50575;
      }
      lVar3 = lVar3 + 1;
      piVar4 = piVar4 + 8;
    } while (lVar7 != lVar3);
  }
  *(uint *)(lVar1 + 0x60) = iVar6 + 1U;
  if (*(uint *)(lVar1 + 100) < iVar6 + 1U) {
    FUN_146a496be(plVar5,iVar6);
  }
  lVar1 = *plVar5;
  lVar7 = lVar7 * 0x20;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar1 + lVar7) = *(undefined8 *)param_2;
  ((undefined8 *)(lVar1 + lVar7))[1] = uVar2;
  *(undefined8 *)(lVar1 + 0x10 + lVar7) = *(undefined8 *)(param_2 + 4);
  lVar3 = *(longlong *)(param_2 + 6);
  *(longlong *)(lVar1 + 0x18 + lVar7) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
LAB_146a50575:
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 2;
  return;
}



// FUNCTION 146a505b0 FUN_146a505b0 body=137 status=ok
// SIG undefined FUN_146a505b0(void)

uint FUN_146a505b0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146a496be(param_1,iVar1);
  }
  lVar5 = (ulonglong)param_3 * 0x20;
  memmove((void *)(*param_1 + lVar5 + 0x20),(void *)(*param_1 + lVar5),
          (ulonglong)(iVar1 - param_3) << 5);
  lVar2 = *param_1;
  uVar4 = param_2[1];
  *(undefined8 *)(lVar2 + lVar5) = *param_2;
  ((undefined8 *)(lVar2 + lVar5))[1] = uVar4;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = param_2[2];
  lVar3 = param_2[3];
  *(longlong *)(lVar2 + 0x18 + lVar5) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 146a5063a FUN_146a5063a body=125 status=ok
// SIG undefined FUN_146a5063a(void)

void FUN_146a5063a(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (longlong)*param_2 * 0x70;
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x60 + lVar2);
  if (0 < lVar1) {
    plVar3 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2 + 0x58) + 0x10);
    lVar2 = 0;
    do {
      if (((((int)plVar3[-2] == *param_2) && (*(int *)((longlong)plVar3 + -0xc) == param_2[1])) &&
          ((int)plVar3[-1] == param_2[2])) &&
         ((*(int *)((longlong)plVar3 + -4) == param_2[3] && (*plVar3 == *(longlong *)(param_2 + 4)))
         )) {
        FUN_146a755fc();
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 2;
        return;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 4;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 146a506b8 FUN_146a506b8 body=640 status=ok
// SIG undefined FUN_146a506b8(void)

int * FUN_146a506b8(longlong param_1,int *param_2,longlong *param_3,double *param_4,
                   undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int *local_b0;
  double *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar8 = (int)param_3[1];
  local_a8 = param_4;
  if (0 < iVar8) {
    lVar11 = 0;
    lVar10 = 0;
    local_b0 = param_2;
    do {
      lVar5 = *param_3;
      (**(code **)(**(longlong **)(lVar5 + lVar11) + 8))(*(longlong **)(lVar5 + lVar11),&local_a0);
      plVar7 = local_a0;
      uVar3 = *(undefined4 *)(param_1 + 0x94);
      (**(code **)(**(longlong **)(lVar5 + lVar11) + 0x38))(*(longlong **)(lVar5 + lVar11),local_80)
      ;
      local_70 = *local_a8;
      local_68 = local_78;
      local_b8 = param_5;
      iVar8 = (**(code **)(*plVar7 + 0x40))(plVar7,lVar11 + lVar5,&local_70,uVar3);
      plVar7 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      param_2 = local_b0;
      if (iVar8 != -1) {
        *local_b0 = *(int *)((longlong)param_3 + 100);
        local_b0[1] = iVar8;
        goto LAB_146a50868;
      }
      lVar10 = lVar10 + 1;
      iVar8 = (int)param_3[1];
      lVar11 = lVar11 + 0x10;
    } while (lVar10 < iVar8);
  }
  iVar9 = *(int *)((longlong)param_3 + 100);
  if ((iVar8 == 0) ||
     (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 0x70) + 8) < 2)) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
      iVar9 = *(int *)((longlong)param_3 + 100);
    }
    *param_2 = iVar9;
    param_2[1] = 0;
    goto LAB_146a50868;
  }
  dVar4 = *local_a8;
  (**(code **)(**(longlong **)*param_3 + 0x38))(*(longlong **)*param_3,&local_a0);
  if ((double)local_a0 <= dVar4) {
    lVar10 = *param_3;
    lVar11 = (longlong)((int)param_3[1] + -1) * 0x10;
    plVar7 = *(longlong **)(lVar10 + lVar11);
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_70);
    plVar7 = *(longlong **)(lVar10 + lVar11);
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_a0);
    if (local_88 == '\0') goto LAB_146a5083d;
LAB_146a508e9:
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    iVar8 = (int)local_70;
  }
  else {
    puVar6 = (undefined8 *)*param_3;
    plVar7 = (longlong *)*puVar6;
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_70);
    plVar7 = (longlong *)*puVar6;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_a0);
    if (local_88 == '\0') goto LAB_146a508e9;
LAB_146a5083d:
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 2;
    }
    iVar8 = local_70._4_4_;
  }
  *param_2 = *(int *)((longlong)param_3 + 100);
  param_2[1] = iVar8;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_146a50868:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a5093a FUN_146a5093a body=144 status=ok
// SIG undefined FUN_146a5093a(void)

ulonglong FUN_146a5093a(longlong param_1,longlong *param_2,int *param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  
  iVar1 = *param_3;
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x28))) {
    iVar2 = (int)param_2[1];
    if (0 < (longlong)iVar2) {
      iVar3 = param_3[1];
      piVar5 = (int *)(*param_2 + 0x58);
      uVar4 = 0;
      do {
        if (piVar5[3] == iVar1) {
          if (((iVar3 == 0) ||
              (*(int *)(*(longlong *)((longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x20)) + 8) <
               2)) || ((*piVar5 <= iVar3 && (iVar3 < piVar5[1])))) {
LAB_146a509c0:
            return uVar4 & 0xffffffff;
          }
          if (iVar2 - 1 == uVar4) {
            if (piVar5[1] == iVar3) {
              return (ulonglong)(iVar2 - 1);
            }
          }
          else if (((piVar5[0x1d] == iVar1 & (param_4 ^ 1)) == 0) && (piVar5[1] == iVar3))
          goto LAB_146a509c0;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 0x1a;
      } while ((longlong)iVar2 != uVar4);
    }
  }
  return 0xffffffff;
}



// FUNCTION 146a509ca FUN_146a509ca body=298 status=ok
// SIG undefined FUN_146a509ca(void)

undefined8 *
FUN_146a509ca(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong in_RCX;
  uint uVar3;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  int iVar4;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(in_RCX + 0x38);
  if ((ulonglong)uVar1 == 0) {
    *param_2 = 0;
LAB_146a509f4:
    if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  uVar3 = 0;
  lVar2 = *(longlong *)(in_RCX + 0x30);
  local_28 = param_4;
  if ((int)uVar1 < 1) {
LAB_146a50a59:
    if ((int)uVar3 < (int)uVar1) {
      lVar6 = (ulonglong)
              ((uVar3 < uVar1 - 1 &&
               *(double *)(lVar2 + 0x38 + (ulonglong)uVar3 * 0x68) +
               *(double *)(lVar2 + 0x48 + (ulonglong)uVar3 * 0x68) < (double)param_3[1]) + uVar3) *
              0x68;
      local_18 = *(undefined8 *)(lVar2 + 0x38 + lVar6);
      local_20 = *param_3;
      FUN_146a506b8(local_18,param_2,lVar2 + lVar6,&local_20);
      goto LAB_146a509f4;
    }
  }
  else {
    param_1 = (double)param_3[1];
    pdVar5 = (double *)(lVar2 + 0x38);
    uVar7 = 0;
    do {
      if (param_1 < *pdVar5) {
        iVar4 = 1;
        if (1 < (int)uVar7) {
          iVar4 = (int)uVar7;
        }
        uVar3 = iVar4 - 1;
        goto LAB_146a50a59;
      }
      uVar7 = uVar7 + 1;
      pdVar5 = pdVar5 + 0xd;
    } while (uVar1 != uVar7);
  }
  FUN_146a506b8(param_1,param_2,(longlong)(int)uVar1 * 0x68 + lVar2 + -0x68,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 146a50afa FUN_146a50afa body=346 status=ok
// SIG undefined FUN_146a50afa(void)

double * FUN_146a50afa(longlong param_1,double *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong *local_78;
  longlong *local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *(int *)(param_3 + 4);
  uVar6 = FUN_146a5093a(param_1,(longlong *)(param_1 + 0x30));
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x38))) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    if (0 < *(int *)(lVar8 + 8 + (ulonglong)uVar6 * 0x68)) {
      plVar7 = (longlong *)(lVar8 + (ulonglong)uVar6 * 0x68);
      lVar8 = 0;
      lVar9 = 0;
      do {
        lVar4 = *plVar7;
        plVar5 = *(longlong **)(lVar4 + lVar8);
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_68);
        if ((local_68 <= iVar3) && (iVar3 <= local_64)) {
          puVar10 = (undefined8 *)(lVar4 + lVar8);
          plVar5 = (longlong *)*puVar10;
          (**(code **)(*plVar5 + 8))(plVar5,&local_78);
          local_88 = *(undefined4 *)(param_1 + 0x94);
          (**(code **)(*local_78 + 0x48))(local_78,param_2,puVar10,iVar3 - local_68);
          plVar5 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if ((*param_2 != 0.0) || (NAN(*param_2))) goto LAB_146a50c25;
          if ((param_2[1] != 0.0) || (NAN(param_2[1]))) goto LAB_146a50c25;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar9 < (int)plVar7[1]);
    }
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
LAB_146a50c25:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a50c56 FUN_146a50c56 body=824 status=ok
// SIG undefined FUN_146a50c56(void)

undefined8 FUN_146a50c56(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  int local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar14 = *param_2;
  if (((longlong)iVar14 < 0) || ((int)param_1[5] <= iVar14)) {
    uVar12 = 0;
  }
  else {
    iVar5 = param_2[1];
    lVar6 = param_1[4];
    lVar15 = (longlong)iVar14 * 0x70;
    local_b8 = param_1;
    FUN_1467aca2a(*(undefined8 *)(lVar6 + lVar15),iVar5);
    pbVar4 = (byte *)(lVar6 + 0x68 + lVar15);
    *pbVar4 = *pbVar4 | 7;
    if (0 < *(int *)(lVar6 + 0x30 + lVar15)) {
      lVar1 = lVar6 + lVar15;
      plVar16 = (longlong *)(lVar15 + lVar6 + 0x28);
      bVar9 = false;
      local_ac = iVar5 + 1;
      iVar14 = 0;
      do {
        puVar2 = (undefined8 *)(*plVar16 + (longlong)iVar14 * 0x30);
        plVar7 = *(longlong **)(*plVar16 + (longlong)iVar14 * 0x30);
        (**(code **)(*plVar7 + 8))(plVar7,&local_68);
        if ((iVar5 < local_68) || (iStack_64 <= iVar5)) {
          if (iVar14 == *(int *)(lVar1 + 0x30) + -1) {
            if (bVar9) goto LAB_146a50dae;
            goto LAB_146a50d13;
          }
          if (bVar9) {
LAB_146a50dae:
            iVar13 = -1;
            if (-1 < local_68) {
              iVar13 = local_68;
            }
            iVar11 = iStack_64;
            if (iStack_64 < 0) {
              iVar11 = -1;
            }
            local_a8 = CONCAT44(iVar11 + 1,iVar13 + 1);
            goto LAB_146a50d71;
          }
          bVar9 = false;
        }
        else {
LAB_146a50d13:
          plVar7 = (longlong *)*puVar2;
          plVar8 = (longlong *)puVar2[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          uVar10 = (**(code **)(*plVar7 + 0x88))();
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          if ((uVar10 & 1) == 0) {
            if (iVar5 == local_68) {
              local_a8 = CONCAT44(local_ac,iVar5);
              (**(code **)(*local_b8 + 0x30))(local_b8,&local_78,lVar1,&local_a8);
              local_a8 = CONCAT44(iStack_64 + 1,local_68 + 1);
              (**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,&local_a8);
              local_a8 = local_78;
              local_a0 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                UNLOCK();
              }
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              FUN_146a50f90(plVar16,&local_a8,iVar14);
              FUN_146a51008(&local_a8);
              plVar7 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_70 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar7 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              iVar14 = iVar14 + 1;
            }
            else {
              local_a8 = CONCAT44(iStack_64 + 1,iStack_64);
              (**(code **)(*local_b8 + 0x30))(local_b8,&local_78,lVar1,&local_a8);
              local_a8 = local_78;
              local_a0 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                UNLOCK();
              }
              iVar14 = iVar14 + 1;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              FUN_146a50f90(plVar16,&local_a8,iVar14);
              FUN_146a51008(&local_a8);
              plVar7 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_70 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar7 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
            }
          }
          else {
            local_a8 = CONCAT44(iStack_64 + 1,local_68);
LAB_146a50d71:
            (**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,&local_a8);
          }
          bVar9 = true;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar1 + 0x30));
    }
    *(byte *)(local_b8 + 0x12) = *(byte *)(local_b8 + 0x12) | 1;
    uVar12 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 146a50f90 FUN_146a50f90 body=119 status=ok
// SIG undefined FUN_146a50f90(void)

int FUN_146a50f90(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146a756d8(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x30;
  memmove((void *)(*param_1 + lVar2 + 0x30),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x30);
  FUN_146a75672(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 146a51008 FUN_146a51008 body=90 status=ok
// SIG undefined FUN_146a51008(void)

void FUN_146a51008(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a51050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a51062 FUN_146a51062 body=904 status=ok
// SIG undefined FUN_146a51062(void)

undefined8 FUN_146a51062(longlong *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar14 = *param_2;
  local_b8 = param_3;
  if (((longlong)iVar14 < 0) || ((int)param_1[5] <= iVar14)) {
    uVar13 = 0;
  }
  else {
    iVar5 = param_2[1];
    lVar6 = param_1[4];
    lVar15 = (longlong)iVar14 * 0x70;
    local_b0 = param_1;
    FUN_140e63652(*(undefined8 *)(lVar6 + lVar15),iVar5,param_3);
    pbVar4 = (byte *)(lVar6 + 0x68 + lVar15);
    *pbVar4 = *pbVar4 | 7;
    if (0 < *(int *)(lVar6 + 0x30 + lVar15)) {
      lVar2 = lVar6 + lVar15;
      plVar16 = (longlong *)(lVar15 + lVar6 + 0x28);
      bVar10 = false;
      iVar14 = 0;
      do {
        puVar3 = (undefined8 *)(*plVar16 + (longlong)iVar14 * 0x30);
        plVar7 = *(longlong **)(*plVar16 + (longlong)iVar14 * 0x30);
        (**(code **)(*plVar7 + 8))(plVar7,&local_68);
        if ((iVar5 < local_68) || (iStack_64 <= iVar5)) {
          if (iVar14 == *(int *)(lVar2 + 0x30) + -1) {
            if (bVar10) goto LAB_146a511ca;
            goto LAB_146a51122;
          }
          if (bVar10) {
LAB_146a511ca:
            iVar12 = *(int *)(local_b8 + 8) + -1;
            if (*(int *)(local_b8 + 8) == 0) {
              iVar12 = 0;
            }
            iVar9 = local_68 + iVar12;
            if (local_68 + iVar12 < 1) {
              iVar9 = 0;
            }
            iVar12 = iStack_64 + iVar12;
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            local_a8 = CONCAT44(iVar12,iVar9);
            goto LAB_146a51189;
          }
          bVar10 = false;
        }
        else {
LAB_146a51122:
          plVar7 = (longlong *)*puVar3;
          plVar8 = (longlong *)puVar3[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          uVar11 = (**(code **)(*plVar7 + 0x88))();
          if (plVar8 != (longlong *)0x0) {
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
          }
          lVar6 = local_b8;
          if ((uVar11 & 1) == 0) {
            if (iVar5 == local_68) {
              iVar12 = *(int *)(local_b8 + 8) + -1;
              if (*(int *)(local_b8 + 8) == 0) {
                iVar12 = 0;
              }
              local_a8 = CONCAT44(iVar12 + iVar5,iVar5);
              (**(code **)(*local_b0 + 0x30))(local_b0,&local_78,lVar2,&local_a8);
              iVar12 = *(int *)(lVar6 + 8) + -1;
              if (*(int *)(lVar6 + 8) == 0) {
                iVar12 = 0;
              }
              local_a8 = CONCAT44(iStack_64 + iVar12,iVar12 + local_68);
              (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,&local_a8);
              local_a8 = local_78;
              local_a0 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                UNLOCK();
              }
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              FUN_146a50f90(plVar16,&local_a8,iVar14);
              FUN_146a51008(&local_a8);
              plVar7 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_70 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              iVar14 = iVar14 + 1;
            }
            else {
              iVar12 = *(int *)(local_b8 + 8) + -1;
              if (*(int *)(local_b8 + 8) == 0) {
                iVar12 = 0;
              }
              local_a8 = CONCAT44(iVar12 + iStack_64,iStack_64);
              (**(code **)(*local_b0 + 0x30))(local_b0,&local_78,lVar2,&local_a8);
              local_a8 = local_78;
              local_a0 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                UNLOCK();
              }
              iVar14 = iVar14 + 1;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              FUN_146a50f90(plVar16,&local_a8,iVar14);
              FUN_146a51008(&local_a8);
              plVar7 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_70 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
            }
          }
          else {
            iVar12 = *(int *)(local_b8 + 8) + -1;
            if (*(int *)(local_b8 + 8) == 0) {
              iVar12 = 0;
            }
            local_a8 = CONCAT44(iVar12 + iStack_64,local_68);
LAB_146a51189:
            (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,&local_a8);
          }
          bVar10 = true;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar2 + 0x30));
    }
    *(byte *)(local_b0 + 0x12) = *(byte *)(local_b0 + 0x12) | 1;
    uVar13 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 146a513ec FUN_146a513ec body=87 status=ok
// SIG undefined FUN_146a513ec(void)

void FUN_146a513ec(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x30 + *param_1);
  FUN_146a51008(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar1) * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_146a7576c(param_1);
  return;
}



// FUNCTION 146a51444 FUN_146a51444 body=699 status=ok
// SIG undefined FUN_146a51444(void)

undefined8 FUN_146a51444(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  void *_Dst;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar8 = (int)param_2;
  if (((iVar8 < 0) || ((int)*(uint *)(param_1 + 0x28) <= iVar8)) ||
     (*(uint *)(param_1 + 0x28) <= iVar8 + 1U)) {
    uVar5 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x20);
    local_b0 = (ulonglong)(iVar8 + 1U) * 0x70;
    if (*(uint *)(*(longlong *)(lVar14 + local_b0) + 8) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
    }
    plVar13 = (longlong *)((param_2 & 0xffffffff) * 0x70 + lVar14);
    lVar14 = lVar14 + local_b0;
    iVar8 = *(int *)(*plVar13 + 8);
    iVar6 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar6 = 0;
    }
    local_a8 = param_2;
    local_a0 = param_1;
    FUN_140e63652(*plVar13,iVar6);
    *(byte *)(plVar13 + 0xd) = *(byte *)(plVar13 + 0xd) | 7;
    if (0 < *(int *)(lVar14 + 0x30)) {
      local_b8 = plVar13 + 5;
      lVar12 = 8;
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar14 + 0x28) + -8 + lVar12);
        plVar3 = *(longlong **)(*(longlong *)(lVar14 + 0x28) + lVar12);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar2 + 8))(plVar2,&local_68);
        if (local_68 < local_64) {
          local_68 = local_68 + iVar6;
          if (local_68 < 1) {
            local_68 = 0;
          }
          local_64 = local_64 + iVar6;
          if (local_64 < 1) {
            local_64 = 0;
          }
          (**(code **)(*plVar2 + 0x60))(plVar2,plVar13);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          iVar8 = (int)plVar13[6];
          *(uint *)(plVar13 + 6) = iVar8 + 1U;
          local_98 = plVar2;
          local_90 = plVar3;
          if (*(uint *)((longlong)plVar13 + 0x34) < iVar8 + 1U) {
            FUN_146a756d8(local_b8,iVar8);
          }
          lVar4 = *local_b8;
          lVar7 = (longlong)iVar8 * 0x30;
          *(longlong **)(lVar4 + lVar7) = local_98;
          *(longlong **)(lVar4 + 8 + lVar7) = local_90;
          if (local_90 == (longlong *)0x0) {
            uStack_70._4_4_ = 0;
            uVar10 = 0;
            local_78 = 0;
            uStack_80._4_4_ = 0;
            uVar11 = 0;
            local_88 = 0;
          }
          else {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
            uVar11 = (undefined4)uStack_80;
            uVar10 = (undefined4)uStack_70;
          }
          lVar4 = lVar4 + lVar7;
          *(undefined8 *)(lVar4 + 0x10) = local_88;
          local_88 = 0;
          *(undefined4 *)(lVar4 + 0x18) = uVar11;
          *(undefined4 *)(lVar4 + 0x1c) = uStack_80._4_4_;
          uStack_80 = 0;
          *(undefined8 *)(lVar4 + 0x20) = local_78;
          local_78 = 0;
          *(undefined4 *)(lVar4 + 0x28) = uVar10;
          *(undefined4 *)(lVar4 + 0x2c) = uStack_70._4_4_;
          uStack_70 = 0;
          FUN_146a51008(&local_98);
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
        lVar9 = lVar9 + 1;
        lVar12 = lVar12 + 0x30;
      } while (lVar9 < *(int *)(lVar14 + 0x30));
    }
    lVar14 = local_a0;
    _Dst = (void *)(local_b0 + *(longlong *)(local_a0 + 0x20));
    FUN_1410f0cf0(_Dst);
    iVar8 = *(int *)(lVar14 + 0x28);
    iVar6 = (iVar8 - (int)local_a8) + -2;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x70),(longlong)iVar6 * 0x70);
      iVar8 = *(int *)(lVar14 + 0x28);
    }
    *(int *)(lVar14 + 0x28) = iVar8 + -1;
    *(byte *)(lVar14 + 0x90) = *(byte *)(lVar14 + 0x90) | 1;
    uVar5 = CONCAT71((uint7)(uint3)((uint)(iVar8 + -1) >> 8),1);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146a51726 FUN_146a51726 body=565 status=ok
// SIG undefined FUN_146a51726(void)

ulonglong FUN_146a51726(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x28) <= param_2)) {
    uVar6 = 0;
  }
  else {
    FUN_146a5195c(param_1 + 0x20,param_2);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar5 < 1) {
        fVar11 = 0.0;
      }
      else {
        plVar9 = (longlong *)(param_1 + 0x30);
        local_a0 = param_1 + 0x40;
        uVar7 = 0;
        fVar12 = 0.0;
        fVar11 = 0.0;
        local_98 = plVar9;
        do {
          lVar3 = *plVar9;
          plVar1 = (longlong *)(lVar3 + (longlong)(int)uVar7 * 0x68);
          iVar2 = *(int *)(lVar3 + 100 + (longlong)(int)uVar7 * 0x68);
          if (iVar2 == param_2) {
            fVar11 = (float)((double)fVar11 + (double)plVar1[9]);
            if ((int)(uVar7 + 1) < iVar5 && -2 < (int)uVar7) {
              fVar12 = (float)((double)fVar12 +
                              (*(double *)(lVar3 + 0x38 + (ulonglong)(uVar7 + 1) * 0x68) -
                              (double)plVar1[7]));
            }
            else {
              fVar10 = 0.0;
              if (0 < (int)uVar7) {
                fVar10 = (float)(*(double *)(lVar3 + -0x20 + (ulonglong)uVar7 * 0x68) -
                                (double)*(float *)(lVar3 + -0x18 + (ulonglong)uVar7 * 0x68));
              }
              if (*(char *)(param_1 + 0xb8) == '\0') {
                fVar11 = fVar11 + (fVar10 - *(float *)(param_1 + 200));
              }
              *(float *)(param_1 + 200) = fVar10;
            }
            FUN_146a528da(plVar9,uVar7);
            FUN_144a7cc9e(local_a0,uVar7);
            uVar7 = uVar7 - 1;
          }
          else if (param_2 < iVar2) {
            *(int *)((longlong)plVar1 + 100) = iVar2 + -1;
            plVar1[7] = (longlong)((double)plVar1[7] - (double)fVar12);
            lVar3 = plVar1[1];
            if ((longlong)(int)lVar3 != 0) {
              lVar4 = *plVar1;
              lVar8 = 0;
              do {
                plVar9 = *(longlong **)(lVar4 + lVar8);
                (**(code **)(*plVar9 + 0x38))(plVar9,local_90);
                local_88 = local_88 - (double)fVar12;
                plVar9 = *(longlong **)(lVar4 + lVar8);
                (**(code **)(*plVar9 + 0x30))(plVar9,local_90);
                lVar8 = lVar8 + 0x10;
                plVar9 = local_98;
              } while ((longlong)(int)lVar3 * 0x10 != lVar8);
            }
          }
          uVar7 = uVar7 + 1;
          iVar5 = *(int *)(param_1 + 0x38);
        } while ((int)uVar7 < iVar5);
      }
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - fVar11;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146a5195c FUN_146a5195c body=80 status=ok
// SIG undefined FUN_146a5195c(void)

void FUN_146a5195c(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x70 + *param_1);
  FUN_1410f0cf0(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x70),(longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_146a7581a(param_1);
  return;
}



// FUNCTION 146a519ac FUN_146a519ac body=2723 status=ok
// SIG undefined FUN_146a519ac(void)

undefined8 FUN_146a519ac(longlong *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 auStack_1d8 [44];
  int local_1ac;
  longlong *local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  int local_150;
  int local_14c;
  int local_148;
  int iStack_144;
  longlong local_140;
  longlong *local_138;
  longlong local_118;
  uint local_110;
  uint local_10c;
  longlong local_d0 [5];
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = (longlong)*param_2;
  if ((lVar4 < 0) || ((int)param_1[5] <= *param_2)) {
    uVar8 = 0;
  }
  else {
    iVar20 = param_2[1];
    local_190 = param_1 + 4;
    lVar22 = *local_190;
    lVar11 = lVar4 * 0x70;
    local_188 = lVar4;
    lVar4 = FUN_14001cc68(0x10,0x10);
    puVar18 = *(undefined8 **)(lVar22 + lVar11);
    if (*(int *)(puVar18 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar18;
    }
    puVar18 = (undefined8 *)(lVar22 + lVar11);
    local_1a8 = param_1;
    local_198 = lVar11;
    FUN_14006620a(lVar4,puVar10,iVar20);
    local_140 = lVar4;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149f0ebe0;
    plVar5[2] = lVar4;
    local_138 = plVar5;
    FUN_1410f1238(local_d0,&local_140);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar5 = (longlong *)FUN_14001cc68(0x10,0x10);
    iVar12 = *(int *)((undefined8 *)*puVar18 + 1);
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    if (iVar12 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)*puVar18;
    }
    FUN_14006620a(plVar5,puVar10 + iVar20,iVar16 - iVar20);
    local_180 = plVar5;
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149f0ebe0;
    plVar6[2] = (longlong)plVar5;
    local_178 = plVar6;
    FUN_1410f1238(&local_140,&local_180);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (0 < *(int *)(puVar18 + 6)) {
      bVar2 = true;
      lVar4 = 8;
      uVar14 = 0;
      local_1ac = iVar20;
      local_1a0 = puVar18;
      do {
        iVar12 = 0;
        plVar5 = *(longlong **)(puVar18[5] + -8 + lVar4);
        plVar6 = *(longlong **)(puVar18[5] + lVar4);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar5 + 8))(plVar5,&local_148);
        iVar16 = 0;
        if ((iVar20 < local_148) || (iStack_144 <= iVar20)) {
          if (uVar14 == *(int *)(puVar18 + 6) - 1) {
            if (bVar2) goto LAB_146a51bf6;
LAB_146a52128:
            iVar9 = *(int *)(local_d0[0] + 8) + -1;
            if (*(int *)(local_d0[0] + 8) == 0) {
              iVar9 = iVar12;
            }
            local_150 = local_148 - iVar9;
            if (local_148 - iVar9 < 1) {
              local_150 = iVar16;
            }
            local_14c = iStack_144 - iVar9;
            if (iStack_144 - iVar9 < 1) {
              local_14c = iVar16;
            }
            (**(code **)(*plVar5 + 0x60))(plVar5,&local_140);
            uVar3 = local_110;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_160 = 0;
            uStack_158 = 0;
            local_170 = 0;
            uStack_168 = 0;
            lVar22 = (longlong)(int)local_110;
            local_110 = local_110 + 1;
            local_180 = plVar5;
            local_178 = plVar6;
            if (local_10c < local_110) {
              FUN_146a756d8(&local_118,uVar3);
            }
            lVar22 = lVar22 * 0x30;
            *(longlong **)(local_118 + lVar22) = local_180;
            *(longlong **)(local_118 + 8 + lVar22) = local_178;
            if (local_178 == (longlong *)0x0) {
              uStack_158._4_4_ = 0;
              uVar17 = 0;
              local_160 = 0;
              uStack_168._4_4_ = 0;
              uStack_168._0_4_ = 0;
              local_170 = 0;
            }
            else {
              LOCK();
              *(int *)(local_178 + 1) = (int)local_178[1] + 1;
              UNLOCK();
              uVar17 = (undefined4)uStack_158;
            }
            lVar22 = local_118 + lVar22;
            *(undefined8 *)(lVar22 + 0x10) = local_170;
            bVar2 = false;
            local_170 = 0;
            *(undefined4 *)(lVar22 + 0x18) = (undefined4)uStack_168;
            *(undefined4 *)(lVar22 + 0x1c) = uStack_168._4_4_;
            uStack_168 = 0;
            *(undefined8 *)(lVar22 + 0x20) = local_160;
            local_160 = 0;
            *(undefined4 *)(lVar22 + 0x28) = uVar17;
            *(undefined4 *)(lVar22 + 0x2c) = uStack_158._4_4_;
            uStack_158 = 0;
            FUN_146a51008(&local_180);
          }
          else {
            if (!bVar2) goto LAB_146a52128;
            (**(code **)(*plVar5 + 0x60))(plVar5,local_d0);
            uVar3 = local_a0;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_160 = 0;
            uStack_158 = 0;
            local_170 = 0;
            uStack_168 = 0;
            lVar22 = (longlong)(int)local_a0;
            local_a0 = local_a0 + 1;
            local_180 = plVar5;
            local_178 = plVar6;
            if (local_9c < local_a0) {
              FUN_146a756d8(&local_a8,uVar3);
            }
            lVar22 = lVar22 * 0x30;
            *(longlong **)(local_a8 + lVar22) = local_180;
            *(longlong **)(local_a8 + 8 + lVar22) = local_178;
            if (local_178 == (longlong *)0x0) {
              uStack_158._4_4_ = 0;
              uVar17 = 0;
              local_160 = 0;
              uStack_168._4_4_ = 0;
              uStack_168._0_4_ = 0;
              local_170 = 0;
            }
            else {
              LOCK();
              *(int *)(local_178 + 1) = (int)local_178[1] + 1;
              UNLOCK();
              uVar17 = (undefined4)uStack_158;
            }
            lVar22 = local_a8 + lVar22;
            *(undefined8 *)(lVar22 + 0x10) = local_170;
            local_170 = 0;
            *(undefined4 *)(lVar22 + 0x18) = (undefined4)uStack_168;
            *(undefined4 *)(lVar22 + 0x1c) = uStack_168._4_4_;
            uStack_168 = 0;
            *(undefined8 *)(lVar22 + 0x20) = local_160;
            local_160 = 0;
            *(undefined4 *)(lVar22 + 0x28) = uVar17;
            *(undefined4 *)(lVar22 + 0x2c) = uStack_158._4_4_;
            uStack_158 = 0;
            FUN_146a51008(&local_180);
            bVar2 = true;
          }
        }
        else {
LAB_146a51bf6:
          uVar7 = (**(code **)(*plVar5 + 0x88))(plVar5);
          if ((uVar7 & 1) == 0) {
            if (iVar20 == local_148) {
              local_14c = *(int *)(local_d0[0] + 8) + -1;
              if (*(int *)(local_d0[0] + 8) == 0) {
                local_14c = iVar12;
              }
              local_150 = iVar20;
              (**(code **)(*local_1a8 + 0x30))(local_1a8,&local_180,local_d0);
              plVar15 = local_178;
              plVar21 = local_180;
              if (local_178 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_178 + 1) = (int)local_178[1] + 1;
                UNLOCK();
                if (local_178 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_178 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*local_178)(local_178);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
              }
              goto LAB_146a51d53;
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            iVar9 = *(int *)(local_d0[0] + 8) + -1;
            if (*(int *)(local_d0[0] + 8) == 0) {
              iVar9 = iVar12;
            }
            local_180 = (longlong *)CONCAT44(iVar9,local_148);
            (**(code **)(*plVar5 + 0x60))(plVar5,local_d0,&local_180);
            local_14c = *(int *)(local_d0[0] + 8) + -1;
            if (*(int *)(local_d0[0] + 8) == 0) {
              local_14c = iVar16;
            }
            local_14c = iStack_144 - local_14c;
            local_150 = 0;
            (**(code **)(*local_1a8 + 0x30))(local_1a8,&local_180);
            plVar19 = local_178;
            plVar13 = local_180;
            plVar15 = plVar6;
            if (local_178 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_178 + 1) = (int)local_178[1] + 1;
              UNLOCK();
              if (local_178 != (longlong *)0x0) {
                LOCK();
                plVar21 = local_178 + 1;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)*plVar21 == 0) {
                  (**(code **)*local_178)(local_178);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar19 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar19 + 0x10))(plVar19);
                  }
                }
              }
            }
          }
          else {
            (**(code **)(*plVar5 + 0x68))(plVar5,&local_180);
            plVar15 = local_178;
            plVar21 = local_180;
            if (local_178 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_178 + 1) = (int)local_178[1] + 1;
              UNLOCK();
              if (local_178 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_178 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*local_178)(local_178);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
            }
            iVar20 = *(int *)(local_d0[0] + 8) + -1;
            if (*(int *)(local_d0[0] + 8) == 0) {
              iVar20 = iVar12;
            }
            local_180 = (longlong *)CONCAT44(iVar20,local_148);
            (**(code **)(*plVar21 + 0x60))(plVar21,local_d0,&local_180);
LAB_146a51d53:
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            iVar20 = *(int *)(local_d0[0] + 8) + -1;
            if (*(int *)(local_d0[0] + 8) == 0) {
              iVar20 = 0;
            }
            local_180 = (longlong *)((ulonglong)(uint)(iStack_144 - iVar20) << 0x20);
            (**(code **)(*plVar5 + 0x60))(plVar5,&local_140);
            plVar13 = plVar5;
            plVar19 = plVar6;
            plVar5 = plVar21;
            iVar20 = local_1ac;
          }
          uVar3 = local_a0;
          if (plVar15 == (longlong *)0x0) {
            local_178 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            local_178 = plVar15;
          }
          local_160 = 0;
          uStack_158 = 0;
          local_170 = 0;
          uStack_168 = 0;
          lVar22 = (longlong)(int)local_a0;
          local_a0 = local_a0 + 1;
          local_180 = plVar5;
          if (local_9c < local_a0) {
            FUN_146a756d8(&local_a8,uVar3);
          }
          lVar22 = lVar22 * 0x30;
          *(longlong **)(local_a8 + lVar22) = local_180;
          *(longlong **)(local_a8 + 8 + lVar22) = local_178;
          if (local_178 == (longlong *)0x0) {
            uStack_158._4_4_ = 0;
            uVar17 = 0;
            local_160 = 0;
            uStack_168._4_4_ = 0;
            uStack_168._0_4_ = 0;
            local_170 = 0;
          }
          else {
            LOCK();
            *(int *)(local_178 + 1) = (int)local_178[1] + 1;
            UNLOCK();
            uVar17 = (undefined4)uStack_158;
          }
          lVar22 = local_a8 + lVar22;
          *(undefined8 *)(lVar22 + 0x10) = local_170;
          local_170 = 0;
          *(undefined4 *)(lVar22 + 0x18) = (undefined4)uStack_168;
          *(undefined4 *)(lVar22 + 0x1c) = uStack_168._4_4_;
          uStack_168 = 0;
          *(undefined8 *)(lVar22 + 0x20) = local_160;
          local_160 = 0;
          *(undefined4 *)(lVar22 + 0x28) = uVar17;
          *(undefined4 *)(lVar22 + 0x2c) = uStack_158._4_4_;
          uStack_158 = 0;
          FUN_146a51008(&local_180);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar15 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          uVar3 = local_110;
          if (plVar19 == (longlong *)0x0) {
            local_178 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            local_178 = plVar19;
          }
          local_160 = 0;
          uStack_158 = 0;
          local_170 = 0;
          uStack_168 = 0;
          lVar22 = (longlong)(int)local_110;
          local_110 = local_110 + 1;
          local_180 = plVar13;
          if (local_10c < local_110) {
            FUN_146a756d8(&local_118,uVar3);
          }
          lVar22 = lVar22 * 0x30;
          *(longlong **)(local_118 + lVar22) = local_180;
          *(longlong **)(local_118 + 8 + lVar22) = local_178;
          if (local_178 == (longlong *)0x0) {
            uStack_158._4_4_ = 0;
            uVar17 = 0;
            local_160 = 0;
            uStack_168._4_4_ = 0;
            uStack_168._0_4_ = 0;
            local_170 = 0;
          }
          else {
            LOCK();
            *(int *)(local_178 + 1) = (int)local_178[1] + 1;
            UNLOCK();
            uVar17 = (undefined4)uStack_158;
          }
          lVar22 = local_118 + lVar22;
          *(undefined8 *)(lVar22 + 0x10) = local_170;
          local_170 = 0;
          *(undefined4 *)(lVar22 + 0x18) = (undefined4)uStack_168;
          *(undefined4 *)(lVar22 + 0x1c) = uStack_168._4_4_;
          uStack_168 = 0;
          *(undefined8 *)(lVar22 + 0x20) = local_160;
          local_160 = 0;
          *(undefined4 *)(lVar22 + 0x28) = uVar17;
          *(undefined4 *)(lVar22 + 0x2c) = uStack_158._4_4_;
          uStack_158 = 0;
          FUN_146a51008(&local_180);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar19 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
            LOCK();
            plVar5 = plVar19 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          puVar18 = local_1a0;
          if (plVar15 == (longlong *)0x0) {
            bVar2 = false;
          }
          else {
            LOCK();
            plVar5 = plVar15 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            bVar2 = false;
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        uVar14 = uVar14 + 1;
        lVar4 = lVar4 + 0x30;
      } while ((longlong)uVar14 < (longlong)*(int *)(puVar18 + 6));
    }
    plVar5 = local_1a8;
    FUN_146a52450(local_198 + local_1a8[4],local_d0);
    FUN_146a52524(local_190,&local_140,(int)local_188 + 1);
    *(byte *)(plVar5 + 0x12) = *(byte *)(plVar5 + 0x12) | 1;
    FUN_1410f0cf0(&local_140);
    FUN_1410f0cf0(local_d0);
    uVar8 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 146a52450 FUN_146a52450 body=212 status=ok
// SIG undefined FUN_146a52450(void)

undefined8 * FUN_146a52450(undefined8 *param_1,undefined8 *param_2)

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
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  uVar3 = param_2[2];
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[3];
  param_1[2] = uVar3;
  param_1[3] = lVar4;
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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  FUN_146a7469c(param_1 + 5,param_2 + 5);
  FUN_146a746fa(param_1 + 7,param_2 + 7);
  FUN_146a74754(param_1 + 9,param_2 + 9);
  FUN_146a747b2(param_1 + 0xb,param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 146a52524 FUN_146a52524 body=109 status=ok
// SIG undefined FUN_146a52524(void)

ulonglong FUN_146a52524(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146a758c0(param_1,iVar1);
  }
  lVar2 = (ulonglong)param_3 * 0x70;
  memmove((void *)(*param_1 + lVar2 + 0x70),(void *)(*param_1 + lVar2),
          (ulonglong)(iVar1 - param_3) * 0x70);
  FUN_1410f136e(lVar2 + *param_1,param_2);
  return (ulonglong)param_3;
}



// FUNCTION 146a52592 FUN_146a52592 body=838 status=ok
// SIG undefined FUN_146a52592(void)

undefined8 FUN_146a52592(longlong *param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar19 = *param_2;
  uVar7 = 0;
  if ((-1 < (longlong)iVar19) && (iVar19 < (int)param_1[5])) {
    iVar4 = param_2[1];
    lVar11 = (longlong)iVar19 * 0x70;
    lVar17 = *(longlong *)(param_1[4] + lVar11);
    iVar19 = *(int *)(lVar17 + 8);
    iVar18 = iVar19 + -1;
    if (iVar19 == 0) {
      iVar18 = 0;
    }
    iVar19 = iVar18 - iVar4;
    if (param_3 < iVar18 - iVar4) {
      iVar19 = param_3;
    }
    if (iVar19 != 0) {
      lVar11 = param_1[4] + lVar11;
      local_b0 = param_1;
      FUN_14496493a(lVar17,iVar4,iVar19,1);
      *(byte *)(lVar11 + 0x68) = *(byte *)(lVar11 + 0x68) | 7;
      uVar12 = (ulonglong)*(int *)(lVar11 + 0x30);
      local_b8 = lVar11;
      if (0 < (longlong)uVar12) {
        iVar18 = iVar19 + iVar4;
        plVar1 = (longlong *)(lVar11 + 0x28);
        lVar17 = uVar12 * 0x30;
        iVar13 = 0;
        do {
          lVar17 = lVar17 + -0x30;
          lVar11 = *plVar1;
          (**(code **)(**(longlong **)(lVar11 + lVar17) + 8))
                    (*(longlong **)(lVar11 + lVar17),&local_68);
          iVar9 = iVar18;
          if (iStack_64 < iVar18) {
            iVar9 = iStack_64;
          }
          iVar14 = local_68;
          if (local_68 < iVar4) {
            iVar14 = iVar4;
          }
          if (iVar9 <= iVar14) {
            iVar14 = 0;
            iVar9 = iVar13;
          }
          if ((iVar14 < iVar9) || (local_68 < iVar18)) {
            iVar10 = iVar9 - iVar14;
            if (iVar10 == 0 || iVar9 < iVar14) {
              if ((((iStack_64 <= local_68) && (iVar4 <= local_68)) && (iVar4 <= iStack_64)) &&
                 (local_68 < iVar18)) {
                FUN_146a513ec(plVar1,(int)uVar12 + -1);
              }
            }
            else {
              if (iStack_64 - local_68 == iVar10) {
                FUN_146a513ec(plVar1,(int)uVar12 + -1);
                if (*(int *)(local_b8 + 0x30) == 0) {
                  local_a8 = 0;
                  (**(code **)(*local_b0 + 0x30))(local_b0,&local_78);
                  local_a8 = local_78;
                  local_a0 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                    UNLOCK();
                  }
                  local_88 = 0;
                  uStack_80 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  iVar9 = *(int *)(local_b8 + 0x30);
                  *(uint *)(local_b8 + 0x30) = iVar9 + 1U;
                  if (*(uint *)(local_b8 + 0x34) < iVar9 + 1U) {
                    FUN_146a756d8(plVar1,iVar9);
                  }
                  lVar11 = *plVar1;
                  lVar8 = (longlong)iVar9 * 0x30;
                  *(undefined8 *)(lVar11 + lVar8) = local_a8;
                  *(longlong **)(lVar11 + 8 + lVar8) = local_a0;
                  if (local_a0 == (longlong *)0x0) {
                    uStack_80._4_4_ = 0;
                    uVar15 = 0;
                    local_88 = 0;
                    uStack_90._4_4_ = 0;
                    uVar16 = 0;
                    local_98 = 0;
                  }
                  else {
                    LOCK();
                    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                    UNLOCK();
                    uVar16 = (undefined4)uStack_90;
                    uVar15 = (undefined4)uStack_80;
                  }
                  lVar11 = lVar11 + lVar8;
                  *(undefined8 *)(lVar11 + 0x10) = local_98;
                  local_98 = 0;
                  *(undefined4 *)(lVar11 + 0x18) = uVar16;
                  *(undefined4 *)(lVar11 + 0x1c) = uStack_90._4_4_;
                  uStack_90 = 0;
                  *(undefined8 *)(lVar11 + 0x20) = local_88;
                  local_88 = 0;
                  *(undefined4 *)(lVar11 + 0x28) = uVar15;
                  *(undefined4 *)(lVar11 + 0x2c) = uStack_80._4_4_;
                  uStack_80 = 0;
                  FUN_146a51008(&local_a8);
                  plVar6 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_70 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*local_70)(local_70);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar6 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                }
              }
              else {
                iVar9 = local_68;
                if (iVar4 < local_68) {
                  iVar10 = iVar19;
                  iVar9 = iVar4;
                }
                local_a8 = CONCAT44(iStack_64 - iVar10,iVar9);
                (**(code **)(**(longlong **)(lVar11 + lVar17) + 0x10))
                          (*(longlong **)(lVar11 + lVar17),&local_a8);
              }
              if (local_68 <= iVar4) break;
            }
          }
          else {
            iVar9 = local_68 - iVar19;
            if (local_68 - iVar19 < 1) {
              iVar9 = iVar13;
            }
            iVar14 = iStack_64 - iVar19;
            if (iStack_64 - iVar19 < 1) {
              iVar14 = iVar13;
            }
            local_a8 = CONCAT44(iVar14,iVar9);
            (**(code **)(**(longlong **)(lVar11 + lVar17) + 0x10))
                      (*(longlong **)(lVar11 + lVar17),&local_a8);
          }
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar5);
      }
      *(byte *)(local_b0 + 0x12) = *(byte *)(local_b0 + 0x12) | 1;
      uVar7 = 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a528da FUN_146a528da body=79 status=ok
// SIG undefined FUN_146a528da(void)

void FUN_146a528da(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x68 + *param_1);
  FUN_146a50310(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x68),(longlong)(int)(~param_2 + iVar1) * 0x68);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_146a75950(param_1);
  return;
}



// FUNCTION 146a5292a FUN_146a5292a body=991 status=ok
// SIG undefined FUN_146a5292a(void)

void FUN_146a5292a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1410f1238(&local_e8);
  FUN_1410f0fa4(param_1,&local_e8);
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    pdVar11 = *(double **)(param_2 + 0x10);
    pdVar14 = pdVar11 + (longlong)*(int *)(param_2 + 0x18) * 2;
    do {
      uVar5 = local_b8;
      local_118 = *pdVar11;
      local_110 = pdVar11[1];
      if (local_110 != 0.0) {
        LOCK();
        *(int *)((longlong)local_110 + 8) = *(int *)((longlong)local_110 + 8) + 1;
        UNLOCK();
      }
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      lVar13 = (longlong)(int)local_b8;
      local_b8 = local_b8 + 1;
      if (local_b4 < local_b8) {
        FUN_146a756d8(&local_c0,uVar5);
      }
      lVar13 = lVar13 * 0x30;
      *(double *)(local_c0 + lVar13) = local_118;
      *(double *)(local_c0 + 8 + lVar13) = local_110;
      if (local_110 == 0.0) {
        uStack_f0._4_4_ = 0;
        uVar10 = 0;
        local_f8 = 0;
        uStack_100._4_4_ = 0;
        uStack_100._0_4_ = 0;
        local_108 = 0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_110 + 8) = *(int *)((longlong)local_110 + 8) + 1;
        UNLOCK();
        uVar10 = (undefined4)uStack_f0;
      }
      lVar13 = local_c0 + lVar13;
      *(undefined8 *)(lVar13 + 0x10) = local_108;
      local_108 = 0;
      *(undefined4 *)(lVar13 + 0x18) = (undefined4)uStack_100;
      *(undefined4 *)(lVar13 + 0x1c) = uStack_100._4_4_;
      uStack_100 = 0;
      *(undefined8 *)(lVar13 + 0x20) = local_f8;
      local_f8 = 0;
      *(undefined4 *)(lVar13 + 0x28) = uVar10;
      *(undefined4 *)(lVar13 + 0x2c) = uStack_f0._4_4_;
      uStack_f0 = 0;
      FUN_146a51008(&local_118);
      pdVar11 = pdVar11 + 2;
    } while (pdVar11 != pdVar14);
  }
  iVar7 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar7 + 1U) {
    FUN_146a758c0(param_1 + 0x20,iVar7);
  }
  FUN_1410f136e((longlong)iVar7 * 0x70 + *(longlong *)(param_1 + 0x20),&local_e8);
  FUN_1410f0cf0(&local_e8);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    uVar8 = (longlong)*(int *)(param_1 + 0x28) - 1;
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar13 = lVar9 + uVar8 * 0x70;
    FUN_1408625f2(param_1,lVar13);
    if ((*(byte *)(lVar9 + 0x68 + uVar8 * 0x70) & 4) != 0) {
      FUN_1408625c2(*(undefined8 *)(lVar13 + 0x10));
      *(byte *)(lVar13 + 0x68) = *(byte *)(lVar13 + 0x68) & 0xfb;
    }
    FUN_140862a18(param_1,lVar13);
    iVar7 = *(int *)(lVar13 + 0x30);
    if ((longlong)iVar7 != 0) {
      lVar9 = *(longlong *)(lVar13 + 0x28);
      lVar12 = 0;
      do {
        (**(code **)(**(longlong **)(lVar9 + lVar12) + 0x50))();
        lVar12 = lVar12 + 0x30;
      } while ((longlong)iVar7 * 0x30 != lVar12);
    }
    iVar7 = *(int *)(param_1 + 0x38);
    local_e8 = 0;
    uStack_e0 = 0;
    fVar15 = (*(float *)(param_1 + 0x98) - (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa8))
             ) * *(float *)(param_1 + 0x94);
    fVar16 = 0.01;
    if (0.01 <= fVar15) {
      fVar16 = fVar15;
    }
    FUN_140865462(param_1,uVar8 & 0xffffffff,fVar16);
    lVar9 = local_e8;
    dVar3 = (double)*(float *)(param_1 + 0xa4) * (double)*(float *)(param_1 + 0x94);
    dVar4 = (double)*(float *)(param_1 + 0xa0) * (double)*(float *)(param_1 + 0x94);
    lVar12 = (longlong)iVar7 + 1;
    iVar7 = *(int *)(param_1 + 0x38);
    if ((int)lVar12 < iVar7) {
      lVar6 = lVar12 * 0x68 + 0x30;
      do {
        lVar1 = *(longlong *)(param_1 + 0x30);
        if (*(int *)(lVar1 + 0x34 + lVar6) == (int)uVar8) {
          *(double *)(lVar1 + lVar6) = *(double *)(lVar1 + lVar6) + dVar4;
          *(double *)(lVar1 + 8 + lVar6) = *(double *)(lVar1 + 8 + lVar6) + dVar3;
          iVar7 = *(int *)(param_1 + 0x38);
        }
        lVar12 = lVar12 + 1;
        lVar6 = lVar6 + 0x68;
      } while (lVar12 < iVar7);
    }
    lVar12 = (longlong)(int)uStack_e0;
    if (lVar12 != 0) {
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar9 + lVar6);
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_128);
        local_110 = local_120 + dVar3;
        local_118 = local_128 + dVar4;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_118);
        lVar6 = lVar6 + 0x10;
      } while (lVar12 * 0x10 != lVar6);
    }
    FUN_1428fea26(param_1);
    iVar7 = *(int *)(lVar13 + 0x30);
    if ((longlong)iVar7 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x28);
      lVar9 = 0;
      do {
        (**(code **)(**(longlong **)(lVar13 + lVar9) + 0x58))();
        lVar9 = lVar9 + 0x30;
      } while ((longlong)iVar7 * 0x30 != lVar9);
    }
    FUN_1408680ad(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a52d0a FUN_146a52d0a body=35 status=ok
// SIG undefined FUN_146a52d0a(void)

undefined8 FUN_146a52d0a(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x28) == 1) {
    uVar1 = CONCAT71((int7)((ulonglong)**(longlong **)(param_1 + 0x20) >> 8),
                     *(uint *)(**(longlong **)(param_1 + 0x20) + 8) < 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146a52d34 FUN_146a52d34 body=477 status=ok
// SIG undefined FUN_146a52d34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146a52d34(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != (longlong *)0x0) {
    iVar6 = *(int *)(param_1 + 0x28);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
      FUN_146a759f6(param_3);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98eec4) && (FUN_144b3d300(&DAT_14c98eec4), DAT_14c98eec4 == -1)) {
    _DAT_14c98eec0 = 2;
    _Init_thread_footer(&DAT_14c98eec4);
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar8 = 0;
    iVar6 = 0;
    local_60 = param_1;
    local_58 = param_3;
    do {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (lVar8 != 0) {
        if (param_2 != 0) {
          FUN_1400020e8(param_2,&DAT_149e02010,2);
        }
        iVar6 = iVar6 + _DAT_14c98eec0;
      }
      local_64 = iVar6;
      if (*(int *)(lVar2 + 0x30 + lVar8 * 0x70) < 1) {
        iVar9 = 0;
      }
      else {
        lVar2 = lVar2 + lVar8 * 0x70;
        lVar5 = 0;
        lVar7 = 0;
        iVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + 0x28);
          if (param_2 != 0) {
            plVar4 = *(longlong **)(lVar3 + lVar5);
            (**(code **)(*plVar4 + 0x78))(plVar4,param_2);
          }
          plVar4 = *(longlong **)(lVar3 + lVar5);
          (**(code **)(*plVar4 + 8))(plVar4,&local_50);
          iVar9 = (iVar9 + local_4c) - local_50;
          lVar7 = lVar7 + 1;
          lVar5 = lVar5 + 0x30;
        } while (lVar7 < *(int *)(lVar2 + 0x30));
      }
      plVar4 = local_58;
      param_1 = local_60;
      iVar6 = local_64;
      if (local_58 != (longlong *)0x0) {
        iVar1 = (int)local_58[1];
        *(uint *)(local_58 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)local_58 + 0xc) < iVar1 + 1U) {
          FUN_146a75a56(local_58,iVar1);
        }
        *(ulonglong *)(*plVar4 + (longlong)iVar1 * 8) = CONCAT44(iVar9,iVar6);
      }
      iVar6 = iVar6 + iVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a52f14 FUN_146a52f14 body=10 status=ok
// SIG undefined FUN_146a52f14(void)

void FUN_146a52f14(undefined8 param_1,undefined8 param_2)

{
  FUN_146a52d34(param_1,0,param_2);
  return;
}



// FUNCTION 146a52f1e FUN_146a52f1e body=13 status=ok
// SIG undefined FUN_146a52f1e(void)

void FUN_146a52f1e(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146a52f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x78))();
  return;
}



// FUNCTION 146a52f2b FUN_146a52f2b body=203 status=ok
// SIG undefined FUN_146a52f2b(void)

void FUN_146a52f2b(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x28);
      plVar3 = *(longlong **)(lVar2 + lVar6);
      (**(code **)(*plVar3 + 8))(plVar3,&local_50);
      iVar1 = param_3[1];
      iVar4 = local_4c;
      if (iVar1 <= local_4c) {
        iVar4 = iVar1;
      }
      iVar5 = *param_3;
      if (*param_3 <= local_50) {
        iVar5 = local_50;
      }
      if (iVar5 < iVar4) {
        local_58 = CONCAT44(iVar4,iVar5);
        plVar3 = *(longlong **)(lVar2 + lVar6);
        (**(code **)(*plVar3 + 0x70))(plVar3,param_1,&local_58);
      }
      else if (iVar1 < local_50) break;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar7 < *(int *)(param_2 + 0x30));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a52ff8 FUN_146a52ff8 body=422 status=ok
// SIG undefined FUN_146a52ff8(void)

void FUN_146a52ff8(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_88 [40];
  uint local_60;
  uint local_5c;
  longlong local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *param_3;
  uVar1 = param_3[2];
  puVar5 = param_3 + 2;
  puVar6 = puVar5;
  if (uVar9 == uVar1) {
    if ((int)param_3[1] < (int)param_3[3]) {
      puVar6 = param_3;
    }
    bVar4 = (int)param_3[3] < (int)param_3[1];
    uVar13 = uVar9;
  }
  else {
    uVar13 = uVar1;
    if ((int)uVar9 < (int)uVar1) {
      puVar6 = param_3;
      uVar13 = uVar9;
    }
    bVar4 = (int)uVar1 < (int)uVar9;
    if ((int)uVar9 <= (int)uVar1) {
      uVar9 = uVar1;
    }
  }
  if (bVar4) {
    puVar5 = param_3;
  }
  if ((((-1 < (int)uVar13) && ((int)uVar13 < (int)*(uint *)(param_1 + 0x28))) && (-1 < (int)uVar9))
     && (uVar9 < *(uint *)(param_1 + 0x28))) {
    local_5c = puVar6[1];
    local_60 = puVar5[1];
    if (uVar13 == uVar9) {
      local_50 = local_5c;
      local_4c = local_60;
      FUN_146a52f2b(param_2,(ulonglong)uVar9 * 0x70 + *(longlong *)(param_1 + 0x20));
    }
    else if (uVar13 <= uVar9) {
      lVar10 = (ulonglong)uVar13 * 0x70;
      local_58 = (ulonglong)uVar9 * 0x70;
      lVar12 = (ulonglong)uVar9 - (ulonglong)uVar13;
      lVar11 = 0;
      lVar8 = lVar10;
      do {
        if (lVar11 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
          iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar10) + 8);
          local_4c = iVar2 - 1;
          if (iVar2 == 0) {
            local_4c = 0;
          }
          local_50 = local_5c;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x20);
          if (lVar12 == lVar11) {
            lVar7 = lVar3 + local_58;
            local_50 = 0;
            local_4c = local_60;
          }
          else {
            lVar7 = lVar3 + lVar8;
            iVar2 = *(int *)(*(longlong *)(lVar3 + lVar8) + 8);
            local_4c = iVar2 - 1;
            if (iVar2 == 0) {
              local_4c = 0;
            }
            local_50 = 0;
          }
        }
        FUN_146a52f2b(param_2,lVar7,&local_50);
        if (lVar12 != lVar11) {
          FUN_1400020e8(param_2,&DAT_149e02010,2);
        }
        lVar8 = lVar8 + 0x70;
        lVar11 = lVar11 + 1;
      } while ((int)((uVar13 - 1) + (int)lVar11) < (int)uVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a531a0 FUN_146a531a0 body=206 status=ok
// SIG undefined FUN_146a531a0(void)

ulonglong * FUN_146a531a0(longlong param_1,ulonglong *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*param_3;
  if ((-1 < (longlong)uVar7) && (*param_3 < *(int *)(param_1 + 0x28))) {
    iVar1 = param_3[1];
    lVar3 = *(longlong *)(param_1 + 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x30))
              (*(longlong **)(param_1 + 0x100),*(undefined8 *)(lVar3 + uVar7 * 0x70));
    iVar2 = *(int *)(*(longlong *)(lVar3 + uVar7 * 0x70) + 8);
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    lVar3 = **(longlong **)(param_1 + 0x100);
    if (iVar1 < iVar4) {
      uVar5 = (**(code **)(lVar3 + 0x88))(*(longlong **)(param_1 + 0x100),iVar1);
    }
    else {
      uVar5 = (**(code **)(lVar3 + 0x68))();
    }
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x50))();
    if (uVar5 != uVar6 && uVar6 != 0xffffffff) {
      *param_2 = (ulonglong)uVar6 << 0x20 | uVar7;
      param_2[1] = (ulonglong)uVar5 << 0x20 | uVar7;
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  return param_2;
}



// FUNCTION 146a5326e FUN_146a5326e body=293 status=ok
// SIG undefined FUN_146a5326e(void)

ulonglong * FUN_146a5326e(longlong param_1,ulonglong *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)*param_3;
  if ((-1 < (longlong)uVar12) && (*param_3 < *(int *)(param_1 + 0x28))) {
    iVar1 = param_3[1];
    lVar10 = uVar12 * 0x70;
    lVar3 = *(longlong *)(param_1 + 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x30))
              (*(longlong **)(param_1 + 0x110),*(undefined8 *)(lVar3 + lVar10));
    iVar2 = *(int *)(*(longlong *)(lVar3 + lVar10) + 8);
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    lVar11 = **(longlong **)(param_1 + 0x110);
    if (iVar1 < iVar4) {
      uVar7 = (**(code **)(lVar11 + 0x88))(*(longlong **)(param_1 + 0x110),iVar1);
    }
    else {
      uVar7 = (**(code **)(lVar11 + 0x68))();
    }
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x70))();
    bVar5 = 1;
    if (uVar8 != 0xffffffff) {
      uVar9 = uVar7;
      do {
        uVar7 = uVar8;
        if ((int)uVar7 < (int)uVar9) {
          lVar11 = (longlong)(int)uVar7;
          do {
            cVar6 = FUN_140665610(*(undefined2 *)(**(longlong **)(lVar3 + lVar10) + lVar11 * 2));
            if (cVar6 == '\0') {
              bVar5 = 0;
              goto LAB_146a53342;
            }
            lVar11 = lVar11 + 1;
          } while (uVar9 != (uint)lVar11);
        }
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x70))();
        uVar9 = uVar7;
      } while (uVar8 != 0xffffffff);
    }
    uVar9 = uVar7;
    uVar7 = 0xffffffff;
LAB_146a53342:
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x50))();
    if ((bool)(uVar9 != uVar7 & (bVar5 ^ 1))) {
      *param_2 = (ulonglong)uVar7 << 0x20 | uVar12;
      param_2[1] = (ulonglong)uVar9 << 0x20 | uVar12;
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  return param_2;
}



// FUNCTION 146a53394 FUN_146a53394 body=14 status=ok
// SIG undefined FUN_146a53394(void)

undefined8 * FUN_146a53394(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *param_2 = *(undefined8 *)(param_1 + 0xd0);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a533a2 FUN_146a533a2 body=29 status=ok
// SIG undefined FUN_146a533a2(void)

double * FUN_146a533a2(longlong param_1,double *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xc4);
  *param_2 = (double)*(float *)(param_1 + 0xbc);
  param_2[1] = (double)fVar1;
  return param_2;
}



// FUNCTION 146a533c0 FUN_146a533c0 body=57 status=ok
// SIG undefined FUN_146a533c0(void)

double * FUN_146a533c0(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  
  fVar1 = *(float *)(param_1 + 0xc4);
  dVar2 = (double)(1.0 / *(float *)(param_1 + 0x94));
  *param_2 = (double)*(float *)(param_1 + 0xc0) * dVar2;
  param_2[1] = (double)fVar1 * dVar2;
  return param_2;
}



// FUNCTION 146a533fa FUN_146a533fa body=30 status=ok
// SIG undefined FUN_146a533fa(void)

int FUN_146a533fa(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = -1;
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[1])) {
    iVar2 = param_2[1] + *(int *)(*param_1 + (longlong)iVar1 * 8);
  }
  return iVar2;
}



// FUNCTION 146a53418 FUN_146a53418 body=59 status=ok
// SIG undefined FUN_146a53418(void)

void FUN_146a53418(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (0 < (longlong)(int)param_1[1]) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(*param_1 + lVar2 * 8);
      iVar3 = param_3 - iVar1;
      if ((iVar1 <= param_3) && (param_3 <= iVar1 + *(int *)(*param_1 + 4 + lVar2 * 8)))
      goto LAB_146a5344c;
      lVar2 = lVar2 + 1;
    } while ((int)param_1[1] != lVar2);
  }
  lVar2 = 0;
  iVar3 = 0;
LAB_146a5344c:
  *param_2 = (int)lVar2;
  param_2[1] = iVar3;
  return;
}



// FUNCTION 146a53454 FUN_146a53454 body=26 status=ok
// SIG undefined FUN_146a53454(void)

int FUN_146a53454(longlong *param_1)

{
  longlong lVar1;
  
  if ((int)param_1[1] != 0) {
    lVar1 = (longlong)((int)param_1[1] + -1);
    return *(int *)(*param_1 + 4 + lVar1 * 8) + *(int *)(*param_1 + lVar1 * 8);
  }
  return 0;
}



// FUNCTION 146a5346e FUN_146a5346e body=194 status=ok
// SIG undefined FUN_146a5346e(void)

void FUN_146a5346e(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_140489acc();
  if (plVar4 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar4 + 0x410))(plVar4);
    if (cVar3 != '\0') {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x418))(plVar4);
      if (plVar4 != (longlong *)0x0) {
        local_38 = *param_4;
        local_30 = param_4[1];
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 8))(plVar4,param_2,param_3,&local_38);
      }
    }
  }
  plVar4 = (longlong *)param_4[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a53532 FUN_146a53532 body=225 status=ok
// SIG undefined FUN_146a53532(void)

void FUN_146a53532(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        FUN_146a53614(0,local_d0);
        FUN_14493db24(local_d0);
        goto LAB_146a53563;
      }
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
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_146a53614(uVar4,local_d0);
    FUN_14493db24(local_d0);
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
LAB_146a53563:
  if ((local_18 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a53614 FUN_146a53614 body=407 status=ok
// SIG undefined FUN_146a53614(void)

undefined1 * FUN_146a53614(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(int *)(param_1 + 0x2c0) == 0) || (*(longlong **)(param_1 + 0x2b8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x30))(), cVar5 == '\0')) {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    if (*(int *)(param_1 + 0x2c0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x2b8);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2);
    uVar4 = *(undefined8 *)(DAT_14c968098 + 200);
    plVar7 = *(longlong **)(DAT_14c968098 + 0xd0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_90[0] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8[0] = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = *(longlong *)(param_1 + 0x10);
    if (local_b0 == 0) {
LAB_146a53731:
      local_b8 = 0;
      local_b0 = 0;
    }
    else {
      iVar6 = *(int *)(local_b0 + 8);
      do {
        if (iVar6 == 0) goto LAB_146a53731;
        LOCK();
        iVar3 = *(int *)(local_b0 + 8);
        bVar8 = iVar6 == iVar3;
        if (bVar8) {
          *(int *)(local_b0 + 8) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar8);
      local_b8 = *(undefined8 *)(param_1 + 8);
    }
    local_c8 = local_90;
    local_c0 = 0;
    FUN_14171f2ba(local_78,&local_b8,CONCAT71((int7)((ulonglong)local_b0 >> 8),1),local_a8);
    FUN_1428785ec(uVar4,local_78);
    FUN_1417211dc(local_78);
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
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a537ac FUN_146a537ac body=139 status=ok
// SIG undefined FUN_146a537ac(void)

void FUN_146a537ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        FUN_146a53838(0);
        return;
      }
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
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_146a53838(uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x000146a53827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a53838 FUN_146a53838 body=642 status=ok
// SIG undefined FUN_146a53838(void)

void FUN_146a53838(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 unaff_RBX;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [80];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar2 = (undefined1 *)(param_1 + 0x278);
  if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar4 == '\0')) {
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*puVar2);
  }
  else {
    if (*(int *)(param_1 + 0x288) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x280);
    }
    uVar7 = (**(code **)(*plVar10 + 0x58))();
    uVar13 = (ulonglong)uVar7;
    *puVar2 = (char)uVar7;
  }
  cVar4 = (char)uVar13;
  if ((byte)(cVar4 - 1U) < 2) {
    if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0))
       || (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar5 == '\0')) {
      local_80[0] = 0;
      FUN_146a60f42(puVar2);
    }
    if ((*(int *)(param_1 + 0x298) == 0) ||
       (plVar10 = *(longlong **)(param_1 + 0x290), plVar10 == (longlong *)0x0)) goto LAB_146a538fc;
    lVar9 = *plVar10;
    uVar12 = 0;
  }
  else {
    if (cVar4 != '\0') goto LAB_146a538fc;
    if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0))
       || (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar5 == '\0')) {
      local_80[0] = 1;
      FUN_146a60f42(puVar2);
    }
    if ((*(int *)(param_1 + 0x298) == 0) ||
       (plVar10 = *(longlong **)(param_1 + 0x290), plVar10 == (longlong *)0x0)) goto LAB_146a538fc;
    lVar9 = *plVar10;
    uVar12 = 1;
  }
  (**(code **)(lVar9 + 0x60))(plVar10,uVar12);
LAB_146a538fc:
  uVar12 = *(undefined8 *)(DAT_14c968098 + 200);
  plVar10 = *(longlong **)(DAT_14c968098 + 0xd0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x288) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(param_1 + 0x280);
    }
    uVar6 = (**(code **)(*plVar11 + 0x58))();
    *puVar2 = uVar6;
  }
  FUN_14171d2aa(local_98,*(char *)(param_1 + 0x278) == '\x01');
  FUN_14171d2aa(local_b0,CONCAT71((int7)(uVar13 >> 8),cVar4 == '\x01') & 0xffffffff);
  local_b8 = *(longlong *)(param_1 + 0x10);
  if (local_b8 == 0) {
    local_b8 = 0;
    local_c0 = 0;
  }
  else {
    iVar8 = *(int *)(local_b8 + 8);
    local_c0 = 0;
    do {
      if (iVar8 == 0) {
        local_b8 = 0;
        goto LAB_146a539ab;
      }
      LOCK();
      iVar3 = *(int *)(local_b8 + 8);
      bVar14 = iVar8 == iVar3;
      if (bVar14) {
        *(int *)(local_b8 + 8) = iVar8 + 1;
        iVar3 = iVar8;
      }
      iVar8 = iVar3;
      UNLOCK();
    } while (!bVar14);
    local_c0 = *(undefined8 *)(param_1 + 8);
  }
LAB_146a539ab:
  local_d0 = 0;
  local_d8 = local_98;
  FUN_14171f2ba(local_80,&local_c0,CONCAT71((int7)((ulonglong)local_c0 >> 8),1),local_b0);
  FUN_1428785ec(uVar12,local_80);
  FUN_1417211dc(local_80);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a53ac0 FUN_146a53ac0 body=144 status=ok
// SIG undefined FUN_146a53ac0(void)

ulonglong FUN_146a53ac0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar8 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        uVar8 = FUN_146a0ece6(0);
        return uVar8;
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
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar7 = FUN_146a0ece6(uVar4);
    uVar8 = (ulonglong)uVar7;
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
  return uVar8;
}



// FUNCTION 146a53b50 FUN_146a53b50 body=45 status=ok
// SIG undefined FUN_146a53b50(void)

undefined8 * FUN_146a53b50(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a83b10(param_2,uVar1);
  return param_2;
}



// FUNCTION 146a53b7e FUN_146a53b7e body=38 status=ok
// SIG undefined FUN_146a53b7e(void)

undefined8 FUN_146a53b7e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
  FUN_14171d2aa(param_2,uVar1);
  return param_2;
}



// FUNCTION 146a53ba4 FUN_146a53ba4 body=342 status=ok
// SIG undefined FUN_146a53ba4(void)

undefined8 * FUN_146a53ba4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 == (longlong *)0x0)) || ((int)plVar7[1] < 1)
     ) {
    puVar5 = &DAT_14c98eed0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98eee0) && (FUN_144b3d300(&DAT_14c98eee0), DAT_14c98eee0 == -1)) {
      DAT_14c98eed0 = 0;
      uRam000000014c98eed8 = 0;
      atexit((_func_5014 *)&LAB_1428ff200);
      _Init_thread_footer(&DAT_14c98eee0);
    }
  }
  else {
    lVar6 = 0;
    iVar4 = (int)plVar7[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a53c47;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar8);
    lVar6 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
LAB_146a53c47:
    FUN_146adc2a4(*(undefined8 *)(lVar6 + 0x1f8),local_38);
    puVar5 = (undefined8 *)FUN_1447a1f4a(local_38);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (iVar3 != 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 146a53cfc FUN_146a53cfc body=29 status=ok
// SIG undefined FUN_146a53cfc(void)

undefined8 FUN_146a53cfc(longlong param_1,undefined8 param_2)

{
  FUN_146adc2a4(*(undefined8 *)(param_1 + 0x1f8));
  return param_2;
}



// FUNCTION 146a53d1a FUN_146a53d1a body=164 status=ok
// SIG undefined FUN_146a53d1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146a53d1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  bool bVar9;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(longlong *)(param_1 + -0x58) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x50), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a53dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(_DAT_000001e0 + 8))(0x1e0);
        return uVar8;
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
    lVar4 = *(longlong *)(param_1 + -0x58);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar7 = (**(code **)(*(longlong *)(lVar4 + 0x1e0) + 8))(lVar4 + 0x1e0);
    uVar8 = (ulonglong)uVar7;
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a53dbe FUN_146a53dbe body=162 status=ok
// SIG undefined FUN_146a53dbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146a53dbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  bool bVar9;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(longlong *)(param_1 + -0x58) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x50), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a53e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)*_DAT_000001e0)(0x1e0);
        return uVar8;
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
    lVar4 = *(longlong *)(param_1 + -0x58);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar7 = (*(code *)**(undefined8 **)(lVar4 + 0x1e0))(lVar4 + 0x1e0);
    uVar8 = (ulonglong)uVar7;
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a53e60 FUN_146a53e60 body=92 status=ok
// SIG undefined FUN_146a53e60(void)

undefined8 * FUN_146a53e60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + -8))(param_1 + -8);
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
  return param_2;
}



// FUNCTION 146a53ebc FUN_146a53ebc body=155 status=ok
// SIG undefined FUN_146a53ebc(void)

undefined8 FUN_146a53ebc(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + -8))(param_1 + -8);
  local_38 = (void *)0x0;
  local_30 = *(int *)(puVar1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*puVar1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_146918c70(param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a53f58 FUN_146a53f58 body=293 status=ok
// SIG undefined FUN_146a53f58(void)

void FUN_146a53f58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong *local_58 [2];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x58) != 0) &&
      (plVar5 = *(longlong **)(param_1 + -0x50), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    lVar6 = 0;
    iVar4 = (int)plVar5[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146a53fba;
      }
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + -0x58);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
LAB_146a53fba:
    FUN_140009b9a(local_68);
    FUN_14023423e(local_58,local_68);
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_146adb44a(*(undefined8 *)(lVar6 + 0x1f8),local_58);
    FUN_1449db362(&local_40);
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (iVar3 != 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a5407e FUN_146a5407e body=12 status=ok
// SIG undefined FUN_146a5407e(void)

void FUN_146a5407e(longlong param_1)

{
  FUN_146adb44a(*(undefined8 *)(param_1 + 0x1f8));
  return;
}



// FUNCTION 146a5408a FUN_146a5408a body=353 status=ok
// SIG undefined FUN_146a5408a(void)

undefined8 * FUN_146a5408a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 == (longlong *)0x0)) || ((int)plVar7[1] < 1)
     ) {
    puVar5 = &DAT_14c98eee8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98eef8) && (FUN_144b3d300(&DAT_14c98eef8), DAT_14c98eef8 == -1)) {
      DAT_14c98eee8 = 0;
      uRam000000014c98eef0 = 0;
      atexit((_func_5014 *)&LAB_1428ff211);
      _Init_thread_footer(&DAT_14c98eef8);
    }
  }
  else {
    lVar6 = 0;
    iVar4 = (int)plVar7[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a5412d;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar8);
    lVar6 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
LAB_146a5412d:
    FUN_146adc2a4(*(undefined8 *)(*(longlong *)(lVar6 + 0x2b8) + 0x1f8),local_38);
    puVar5 = (undefined8 *)FUN_1447a1f4a(local_38);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (iVar3 != 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 146a541ec FUN_146a541ec body=174 status=ok
// SIG undefined FUN_146a541ec(void)

ulonglong FUN_146a541ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(longlong *)(param_1 + -0x58) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x50), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar6 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a54238;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar3 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar9);
    lVar6 = *(longlong *)(param_1 + -0x58);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
LAB_146a54238:
    uVar5 = (**(code **)(*(longlong *)(*(longlong *)(lVar6 + 0x2b8) + 0x1e0) + 8))
                      (*(longlong *)(lVar6 + 0x2b8) + 0x1e0);
    uVar7 = (ulonglong)uVar5;
    if (iVar3 != 0) {
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a5429a FUN_146a5429a body=173 status=ok
// SIG undefined FUN_146a5429a(void)

ulonglong FUN_146a5429a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(longlong *)(param_1 + -0x58) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x50), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar6 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a542e6;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar3 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar9);
    lVar6 = *(longlong *)(param_1 + -0x58);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
LAB_146a542e6:
    uVar5 = (*(code *)**(undefined8 **)(*(longlong *)(lVar6 + 0x2b8) + 0x1e0))
                      (*(longlong *)(lVar6 + 0x2b8) + 0x1e0);
    uVar7 = (ulonglong)uVar5;
    if (iVar3 != 0) {
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a54348 FUN_146a54348 body=92 status=ok
// SIG undefined FUN_146a54348(void)

undefined8 * FUN_146a54348(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + -8))(param_1 + -8);
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
  return param_2;
}



// FUNCTION 146a543a4 FUN_146a543a4 body=155 status=ok
// SIG undefined FUN_146a543a4(void)

undefined8 FUN_146a543a4(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + -8))(param_1 + -8);
  local_38 = (void *)0x0;
  local_30 = *(int *)(puVar1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*puVar1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_146918c70(param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a54440 FUN_146a54440 body=300 status=ok
// SIG undefined FUN_146a54440(void)

void FUN_146a54440(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong *local_58 [2];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x58) != 0) &&
      (plVar5 = *(longlong **)(param_1 + -0x50), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    lVar6 = 0;
    iVar4 = (int)plVar5[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146a544a2;
      }
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + -0x58);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
LAB_146a544a2:
    FUN_140009b9a(local_68);
    FUN_14023423e(local_58,local_68);
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_146adb44a(*(undefined8 *)(*(longlong *)(lVar6 + 0x2b8) + 0x1f8),local_58);
    FUN_1449db362(&local_40);
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (iVar3 != 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a5456e FUN_146a5456e body=19 status=ok
// SIG undefined FUN_146a5456e(void)

void FUN_146a5456e(longlong param_1)

{
  FUN_146adb44a(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  return;
}



// FUNCTION 146a54582 FUN_146a54582 body=231 status=ok
// SIG undefined FUN_146a54582(void)

ulonglong FUN_146a54582(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined7 uVar9;
  
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar10 = *(longlong **)(param_1 + -0x48), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    lVar6 = 0;
    iVar4 = (int)plVar10[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_146a545d0;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar12 = iVar3 == iVar4;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    lVar6 = *(longlong *)(param_1 + -0x50);
LAB_146a545d0:
    uVar8 = CONCAT71(uVar9,1);
    if (*(char *)(lVar6 + 0x3a) == '\x01') {
      plVar11 = *(longlong **)(param_1 + -0x48);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar4 = (int)plVar11[1];
        plVar7 = (longlong *)0x0;
        do {
          if (iVar4 == 0) {
            plVar11 = (longlong *)0x0;
            goto LAB_146a54602;
          }
          LOCK();
          iVar2 = (int)plVar11[1];
          bVar12 = iVar4 == iVar2;
          if (bVar12) {
            *(int *)(plVar11 + 1) = iVar4 + 1;
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
          UNLOCK();
        } while (!bVar12);
        plVar7 = *(longlong **)(param_1 + -0x50);
      }
LAB_146a54602:
      uVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7);
      uVar8 = (ulonglong)uVar5 ^ 1;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    if (iVar3 != 0) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a5466a FUN_146a5466a body=157 status=ok
// SIG undefined FUN_146a5466a(void)

undefined8 FUN_146a5466a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x48), uVar7 = 0, plVar3 != (longlong *)0x0)) &&
     (uVar7 = 0, 0 < (int)plVar3[1])) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar7 = FUN_146a86b54(0);
        return uVar7;
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
    uVar7 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar7 = FUN_146a86b54(uVar7);
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
  return uVar7;
}



// FUNCTION 146a54708 FUN_146a54708 body=156 status=ok
// SIG undefined FUN_146a54708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_146a54708(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  
  uVar8 = 0x3f800000;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return _DAT_00000214;
      }
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
    lVar4 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar8 = *(undefined4 *)(lVar4 + 0x214);
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
  return uVar8;
}



// FUNCTION 146a547a4 FUN_146a547a4 body=151 status=ok
// SIG undefined FUN_146a547a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_146a547a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return _DAT_00000210;
      }
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
    lVar4 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar8 = *(undefined4 *)(lVar4 + 0x210);
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
  return uVar8;
}



// FUNCTION 146a5483c FUN_146a5483c body=183 status=ok
// SIG undefined FUN_146a5483c(void)

undefined8 FUN_146a5483c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  double dVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    dVar9 = 0.0;
LAB_146a548ce:
    FUN_1406112c4(param_2,dVar9,1);
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        fVar8 = (float)FUN_146a86a1e(0);
        dVar9 = (double)fVar8;
        goto LAB_146a548ce;
      }
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
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    fVar8 = (float)FUN_146a86a1e(uVar4);
    FUN_1406112c4(param_2,(double)fVar8,1);
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
  return param_2;
}



// FUNCTION 146a548f4 FUN_146a548f4 body=178 status=ok
// SIG undefined FUN_146a548f4(void)

undefined4 * FUN_146a548f4(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        uVar8 = FUN_146a86a1e(0);
        FUN_146a549a6(param_2,uVar8);
        return param_2;
      }
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
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar8 = FUN_146a86a1e(uVar4);
    FUN_146a549a6(param_2,uVar8);
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
  return param_2;
}



// FUNCTION 146a549a6 FUN_146a549a6 body=263 status=ok
// SIG undefined FUN_146a549a6(void)

undefined4 * FUN_146a549a6(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  ulonglong *local_d0;
  byte local_b0;
  byte local_af;
  byte local_ae;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = param_1 + 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_2c = param_2;
  memset(&local_d8,0,0x90);
  FUN_144869430(&local_d8);
  local_48 = 0;
  local_38 = 0;
  local_b0 = local_b0 | 4;
  local_af = local_af | 1;
  local_d8 = &PTR_FUN_149e1e330;
  puVar2 = (undefined4 *)*local_d0 + 1;
  local_40 = puVar1;
  if ((undefined4 *)local_d0[1] < puVar2) {
    if ((local_ae & 2) == 0) {
      FUN_144a2420a(&local_d8,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(&local_d8,&local_2c);
    }
  }
  else {
    local_2c = *(undefined4 *)*local_d0;
    *local_d0 = (ulonglong)puVar2;
  }
  *param_1 = 10;
  FUN_144a7fc42(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a54aae FUN_146a54aae body=241 status=ok
// SIG undefined FUN_146a54aae(void)

void FUN_146a54aae(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Str;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  double dVar8;
  undefined1 auStack_58 [32];
  float local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar6 = *(longlong **)(param_1 + -0x48), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1])
     ) {
    uVar5 = 0;
    iVar4 = (int)plVar6[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146a54b0b;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar7);
    uVar5 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_146a54b0b:
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    dVar8 = _wtof(_Str);
    local_38 = (float)dVar8;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a86a28(uVar5);
    if (iVar3 != 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a54ba0 FUN_146a54ba0 body=288 status=ok
// SIG undefined FUN_146a54ba0(void)

undefined8 * FUN_146a54ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar6 = *(longlong **)(param_1 + 0x20), plVar6 == (longlong *)0x0)) || ((int)plVar6[1] < 1))
  {
    puVar5 = &DAT_14c98ef00;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98ef10) && (FUN_144b3d300(&DAT_14c98ef10), DAT_14c98ef10 == -1)) {
      DAT_14c98ef00 = 0;
      uRam000000014c98ef08 = 0;
      atexit((_func_5014 *)&LAB_1428ff222);
      _Init_thread_footer(&DAT_14c98ef10);
    }
  }
  else {
    lVar7 = 0;
    iVar4 = (int)plVar6[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146a54c13;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x18);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_146a54c13:
    if ((*(byte *)(lVar7 + 0x5dc) & 1) != 0) {
      FUN_145ab0088(lVar7 + 0x1e0,lVar7,0);
    }
    puVar5 = (undefined8 *)FUN_1447a1f4a(lVar7 + 0x1e0);
    if (iVar3 != 0) {
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
  }
  return puVar5;
}



// FUNCTION 146a54cc0 FUN_146a54cc0 body=284 status=ok
// SIG undefined FUN_146a54cc0(void)

undefined8 * FUN_146a54cc0(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_149f0f900;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  FUN_140a5808e(param_1 + 0x3c,param_1);
  param_1[0x3e] = 0;
  FUN_140a5808e(param_1 + 0x3e,param_1);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3ff0000000000000;
  FUN_140a5808e(param_1 + 0x40,param_1);
  param_1[0x44] = &DAT_4030000000000000;
  param_1[0x45] = &DAT_4030000000000000;
  FUN_140a5808e(param_1 + 0x44,param_1);
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_140a5808e(param_1 + 0x48,param_1);
  *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  FUN_140a5808e((longlong)param_1 + 0x241,param_1);
  *(undefined1 *)((longlong)param_1 + 0x242) = 0;
  FUN_140a5808e((longlong)param_1 + 0x242,param_1);
  *(undefined1 *)((longlong)param_1 + 0x243) = 1;
  FUN_140a5808e((longlong)param_1 + 0x243,param_1);
  return param_1;
}



// FUNCTION 146a54ddc FUN_146a54ddc body=43 status=ok
// SIG undefined FUN_146a54ddc(void)

void FUN_146a54ddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f0f900;
  FUN_1449db362(param_1 + 0x46);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a54e08 FUN_146a54e08 body=292 status=ok
// SIG undefined FUN_146a54e08(void)

void FUN_146a54e08(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146a54f2e(param_1 + 0x1e0,param_1,param_2 + 0x1a8);
  FUN_140a5acbc(param_1 + 0x1f0,param_1,param_2 + 0x1d0);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  FUN_146a54fac(param_1 + 0x200,param_1,param_2 + 0x1f0);
  FUN_140a50dd4(param_1 + 0x220,param_1,param_2 + 0x290);
  FUN_145767132(param_1 + 0x230,param_2 + 0x2b8);
  FUN_146a55038(param_1 + 0x240,param_1,param_2 + 0x278);
  FUN_140a5ad86(param_1 + 0x241,param_1,param_2 + 0x230);
  FUN_140a5ad86(param_1 + 0x242,param_1,param_2 + 0x248);
  FUN_140a5ad86(param_1 + 0x243,param_1,param_2 + 0x260);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a54f2e FUN_146a54f2e body=126 status=ok
// SIG undefined FUN_146a54f2e(void)

void FUN_146a54f2e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146a75d96(param_1,param_2,param_3 + 0x18);
      return;
    }
  }
  if (*(char *)(param_3 + 0x10) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  uVar2 = FUN_146a5c9ee(param_3);
  FUN_146a75e34(param_1,param_2,uVar2);
  return;
}



// FUNCTION 146a54fac FUN_146a54fac body=140 status=ok
// SIG undefined FUN_146a54fac(void)

void FUN_146a54fac(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  
  if (*(longlong **)(param_3 + 0x28) != (longlong *)0x0 && *(int *)(param_3 + 0x30) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146a75f50(param_1,param_2,param_3 + 0x28);
      return;
    }
  }
  if (*(char *)(param_3 + 0x20) == '\x01') {
    FUN_146a7606e(param_3);
    FUN_146a75fee(param_1,param_2,param_3);
    return;
  }
  FUN_146a760ea(param_1,param_2,param_4);
  return;
}



// FUNCTION 146a55038 FUN_146a55038 body=171 status=ok
// SIG undefined FUN_146a55038(void)

void FUN_146a55038(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146a7651e(param_1,param_2,param_3 + 8);
      return;
    }
  }
  if (param_3[1] != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_3 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_3 + 8);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *param_3 = uVar2;
    }
  }
  FUN_146a765bc(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a550e4 FUN_146a550e4 body=1025 status=ok
// SIG undefined FUN_146a550e4(void)

int FUN_146a550e4(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,byte param_8)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  float *local_198;
  longlong local_188;
  undefined8 uStack_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined8 local_5c;
  byte local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar1 = *(char *)(param_1 + 0x240);
  local_98 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_90 = *(undefined8 *)(param_1 + 0x1e8);
  if (*(char *)(param_1 + 0x241) == '\x01') {
    FUN_1467eda2e(&local_98,&local_88);
    uStack_90 = CONCAT44(uStack_7c,fStack_80);
    local_98 = local_88;
  }
  cVar2 = (param_8 ^ 1) << 5;
  if ((*(char *)(param_1 + 0x242) == '\x01' && cVar1 != '\x02') && uStack_90._4_4_ < 1.0) {
    local_74 = *(undefined8 *)param_3;
    local_88 = *(undefined8 *)(param_3 + 3);
    fStack_80 = param_3[2];
    uStack_7c = 0;
    uStack_78 = 0;
    local_6c = param_3[7];
    fStack_68 = param_3[8];
    fStack_64 = param_3[9];
    fStack_60 = param_3[10];
    local_5c = *(undefined8 *)(param_3 + 0xb);
    local_54 = *(char *)(param_3 + 0xd) * '\x02' & 2;
    local_1a0 = &DAT_149e1e2f8;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,cVar2);
    FUN_140239bd2(param_5,param_6,&local_88,*(undefined8 *)(param_1 + 0x1f0));
  }
  local_a8 = 0;
  uStack_a0 = 0;
  if (cVar1 == '\x01') {
    local_1a8 = &local_e8;
    local_e8 = local_98;
    uStack_e0 = uStack_90;
    local_f0 = (double)(param_3[1] * 0.5);
    local_f8 = (double)(*param_3 * 0.5);
    local_108 = (undefined4)DAT_14c8463f0;
    uStack_104 = DAT_14c8463f0._4_4_;
    uStack_100 = (undefined4)DAT_14c8463f8;
    uStack_fc = DAT_14c8463f8._4_4_;
    local_1a0 = (undefined8 *)param_7;
    local_198 = (float *)((ulonglong)local_198._1_7_ << 8);
    FUN_146a554e6(param_1,&local_a8);
    local_1a8 = &local_118;
    local_118 = local_98;
    uStack_110 = uStack_90;
    local_120 = (double)param_3[1];
    local_128 = (double)*param_3;
    local_130 = (double)(param_3[1] * 0.5);
    local_138 = (double)(*param_3 * 0.5);
    local_198 = (float *)CONCAT71(local_198._1_7_,1);
  }
  else if (cVar1 == '\x02') {
    local_1a8 = &local_148;
    local_148 = local_98;
    uStack_140 = uStack_90;
    local_150 = (double)param_3[1];
    local_158 = (double)*param_3;
    local_168 = (undefined4)DAT_14c8463f0;
    uStack_164 = DAT_14c8463f0._4_4_;
    uStack_160 = (undefined4)DAT_14c8463f8;
    uStack_15c = DAT_14c8463f8._4_4_;
    local_198 = (float *)CONCAT71(local_198._1_7_,1);
  }
  else {
    local_1a8 = &local_b8;
    local_b8 = local_98;
    uStack_b0 = uStack_90;
    local_c0 = (double)param_3[1];
    local_c8 = (double)*param_3;
    local_d8 = (undefined4)DAT_14c8463f0;
    uStack_d4 = DAT_14c8463f0._4_4_;
    uStack_d0 = (undefined4)DAT_14c8463f8;
    uStack_cc = DAT_14c8463f8._4_4_;
    local_198 = (float *)((ulonglong)local_198._1_7_ << 8);
  }
  local_1a0 = (undefined8 *)param_7;
  FUN_146a554e6(param_1,&local_a8);
  local_16c = (float)*(double *)(param_1 + 0x218);
  local_170 = (float)*(double *)(param_1 + 0x210);
  local_174 = (float)*(double *)(param_1 + 0x208);
  local_178 = (float)*(double *)(param_1 + 0x200);
  local_198 = &local_178;
  local_188 = local_a8;
  uStack_180 = uStack_a0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_74 = *(undefined8 *)param_3;
  local_88 = *(undefined8 *)(param_3 + 3);
  fStack_80 = param_3[2];
  uStack_7c = 0;
  uStack_78 = 0;
  local_6c = param_3[7];
  fStack_68 = param_3[8];
  fStack_64 = param_3[9];
  fStack_60 = param_3[10];
  local_5c = *(undefined8 *)(param_3 + 0xb);
  local_54 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_1a0 = (undefined8 *)CONCAT71(local_1a0._1_7_,cVar2);
  local_1a8 = (undefined8 *)
              CONCAT44(local_1a8._4_4_,(uint)(param_3[1] <= *param_3 && *param_3 != param_3[1]));
  FUN_146954b7a(param_5,param_6 + 1);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6 + 1;
}



// FUNCTION 146a554e6 FUN_146a554e6 body=1838 status=ok
// SIG undefined FUN_146a554e6(void)

void FUN_146a554e6(longlong param_1,longlong *param_2,double *param_3,double *param_4,float *param_5
                  ,float *param_6,char param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_138 [32];
  float local_118;
  byte local_114;
  byte local_113;
  byte local_112;
  byte local_111;
  undefined8 local_110;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar19 = param_5[2];
  fVar22 = *param_5;
  fVar23 = param_5[1];
  fVar18 = fVar22;
  if (fVar22 <= fVar23) {
    fVar18 = fVar23;
  }
  if (fVar18 <= fVar19) {
    fVar18 = fVar19;
  }
  if (fVar18 <= 1.0) {
    if (*(char *)(param_1 + 0x243) == '\x01') {
      FUN_1411ab38a(param_5,&local_100);
    }
    else {
      fVar18 = param_5[3];
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
      local_100 = (float)CONCAT13((char)(int)(fVar18 * 255.0 + 0.5),
                                  CONCAT12((char)(int)(fVar22 * 255.0 + 0.5),
                                           CONCAT11((char)(int)(fVar23 * 255.0 + 0.5),
                                                    (char)(int)(fVar19 * 255.0 + 0.5))));
    }
    if (param_7 == '\0') {
      fVar19 = (float)((uint)local_100 >> 0x18) * 0.003921569;
    }
    else {
      local_100 = (float)CONCAT13(0xff,(undefined3)local_100);
      fVar19 = 1.0;
    }
    fVar22 = (float)(&DAT_14c758c60)[local_100._2_1_];
    fVar23 = (float)(&DAT_14c758c60)[local_100._1_1_];
    fVar18 = (float)(&DAT_14c758c60)[(byte)local_100];
    fVar25 = param_6[3];
    fVar24 = param_6[2];
    fVar17 = param_6[1];
    fVar20 = *param_6;
    dVar3 = *param_3;
    dVar4 = param_3[1];
    iVar7 = (int)param_2[1];
    lVar16 = (longlong)iVar7;
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      FUN_1469705bc(param_2,iVar7);
    }
    lVar9 = *param_2;
    *(float *)(lVar9 + lVar16 * 0x18) = (float)dVar3;
    *(float *)(lVar9 + 4 + lVar16 * 0x18) = (float)dVar4;
    *(float *)(lVar9 + 8 + lVar16 * 0x18) = fVar22 * fVar20;
    *(float *)(lVar9 + 0xc + lVar16 * 0x18) = fVar23 * fVar17;
    *(float *)(lVar9 + 0x10 + lVar16 * 0x18) = fVar18 * fVar24;
    *(float *)(lVar9 + 0x14 + lVar16 * 0x18) = fVar19 * fVar25;
    fVar19 = (float)(&DAT_14c758c60)[local_100._2_1_];
    fVar22 = (float)(&DAT_14c758c60)[local_100._1_1_];
    uVar12 = (uint)local_100 >> 0x18;
    fVar23 = (float)(&DAT_14c758c60)[(byte)local_100];
    fVar18 = param_6[3];
    fVar25 = param_6[2];
    fVar24 = param_6[1];
    fVar17 = *param_6;
    dVar3 = *param_4;
    dVar4 = param_4[1];
    iVar7 = (int)param_2[1];
    lVar16 = (longlong)iVar7;
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      FUN_1469705bc(param_2,iVar7);
    }
    lVar9 = *param_2;
    *(float *)(lVar9 + lVar16 * 0x18) = (float)dVar3;
    *(float *)(lVar9 + 4 + lVar16 * 0x18) = (float)dVar4;
    *(float *)(lVar9 + 8 + lVar16 * 0x18) = fVar19 * fVar17;
    *(float *)(lVar9 + 0xc + lVar16 * 0x18) = fVar22 * fVar24;
    *(float *)(lVar9 + 0x10 + lVar16 * 0x18) = fVar23 * fVar25;
    *(float *)(lVar9 + 0x14 + lVar16 * 0x18) = (float)uVar12 * 0.003921569 * fVar18;
  }
  else {
    fVar25 = 1.0;
    if (param_7 == '\0') {
      fVar25 = param_5[3];
    }
    local_100 = 1.0 / fVar18;
    local_f8 = fVar19 * local_100;
    local_fc = fVar23 * local_100;
    local_100 = fVar22 * local_100;
    bVar10 = *(byte *)(param_1 + 0x243);
    local_f4 = fVar25;
    if (bVar10 == 1) {
      FUN_1411ab38a(&local_100,&local_110);
      uVar14 = (uint)local_110._2_1_;
      uVar11 = (uint)(byte)local_110;
      uVar13 = (uint)local_110._1_1_;
      uVar12 = (uint)local_110._3_1_;
      bVar10 = *(byte *)(param_1 + 0x243);
    }
    else {
      fVar19 = fVar25;
      if (fVar25 <= 0.0) {
        fVar19 = 0.0;
      }
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      uVar12 = (uint)(fVar19 * 255.0 + 0.5);
      fVar19 = local_f8;
      if (local_f8 <= 0.0) {
        fVar19 = 0.0;
      }
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      uVar11 = (uint)(fVar19 * 255.0 + 0.5);
      fVar19 = local_fc;
      if (local_fc <= 0.0) {
        fVar19 = 0.0;
      }
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      uVar13 = (uint)(fVar19 * 255.0 + 0.5);
      fVar19 = local_100;
      if (local_100 <= 0.0) {
        fVar19 = 0.0;
      }
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      uVar14 = (uint)(fVar19 * 255.0 + 0.5);
    }
    fVar19 = param_6[3];
    fVar22 = param_6[2];
    fVar17 = (float)(&DAT_14c758c60)[uVar11 & 0xff] * fVar22;
    fVar23 = *param_6;
    fVar24 = param_6[1];
    fVar20 = (float)(&DAT_14c758c60)[uVar13 & 0xff] * fVar24;
    fVar21 = (float)(&DAT_14c758c60)[uVar14 & 0xff] * fVar23;
    local_108 = param_5[2];
    uVar8 = *(undefined8 *)param_5;
    local_104 = fVar18 * fVar25;
    local_110 = uVar8;
    if ((bVar10 & 1) == 0) {
      fVar18 = local_104;
      if (local_104 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar25 = 1.0;
      if (1.0 <= fVar18) {
        fVar18 = fVar25;
      }
      uVar11 = (uint)(fVar18 * 255.0 + 0.5);
      fVar18 = local_108;
      if (local_108 <= 0.0) {
        fVar18 = 0.0;
      }
      if (1.0 <= fVar18) {
        fVar18 = fVar25;
      }
      uVar13 = (uint)(fVar18 * 255.0 + 0.5);
      local_110._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      if (local_110._4_4_ <= 0.0) {
        local_110._4_4_ = 0.0;
      }
      if (1.0 <= local_110._4_4_) {
        local_110._4_4_ = fVar25;
      }
      uVar14 = (uint)(local_110._4_4_ * 255.0 + 0.5);
      local_110._0_4_ = (float)uVar8;
      if ((float)local_110 <= 0.0) {
        local_110._0_4_ = 0.0;
      }
      if (1.0 <= (float)local_110) {
        local_110._0_4_ = fVar25;
      }
      uVar15 = (uint)((float)local_110 * 255.0 + 0.5);
      fVar18 = fVar19;
    }
    else {
      FUN_1411ab38a(&local_110,&local_114);
      uVar15 = (uint)local_112;
      uVar13 = (uint)local_114;
      uVar14 = (uint)local_113;
      uVar11 = (uint)local_111;
      fVar22 = param_6[2];
      fVar23 = *param_6;
      fVar24 = param_6[1];
      fVar18 = param_6[3];
    }
    fVar25 = (float)(&DAT_14c758c60)[uVar13 & 0xff];
    fVar1 = (float)(&DAT_14c758c60)[uVar14 & 0xff];
    fVar2 = (float)(&DAT_14c758c60)[uVar15 & 0xff];
    fVar19 = (float)(uVar12 & 0xff) * 0.003921569 * fVar19;
    dVar3 = *param_3;
    dVar4 = param_3[1];
    iVar7 = (int)param_2[1];
    lVar16 = (longlong)iVar7;
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      local_118 = fVar17;
      FUN_1469705bc(param_2,iVar7);
      fVar17 = local_118;
    }
    lVar9 = *param_2;
    *(float *)(lVar9 + lVar16 * 0x18) = (float)dVar3;
    *(float *)(lVar9 + 4 + lVar16 * 0x18) = (float)dVar4;
    *(float *)(lVar9 + 8 + lVar16 * 0x18) = fVar21;
    *(float *)(lVar9 + 0xc + lVar16 * 0x18) = fVar20;
    *(float *)(lVar9 + 0x10 + lVar16 * 0x18) = fVar17;
    *(float *)(lVar9 + 0x14 + lVar16 * 0x18) = fVar19;
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar5 = param_4[1];
    dVar6 = *param_4;
    iVar7 = (int)param_2[1];
    lVar16 = (longlong)iVar7;
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      FUN_1469705bc(param_2,iVar7);
    }
    lVar9 = *param_2;
    *(float *)(lVar9 + lVar16 * 0x18) = (float)((dVar3 + dVar6) * 0.5);
    *(float *)(lVar9 + 4 + lVar16 * 0x18) = (float)((dVar4 + dVar5) * 0.5);
    *(float *)(lVar9 + 8 + lVar16 * 0x18) = fVar23 * fVar2;
    *(float *)(lVar9 + 0xc + lVar16 * 0x18) = fVar24 * fVar1;
    *(float *)(lVar9 + 0x10 + lVar16 * 0x18) = fVar22 * fVar25;
    *(float *)(lVar9 + 0x14 + lVar16 * 0x18) = fVar18 * (float)(uVar11 & 0xff) * 0.003921569;
    dVar3 = *param_4;
    dVar4 = param_4[1];
    iVar7 = (int)param_2[1];
    lVar16 = (longlong)iVar7;
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      FUN_1469705bc(param_2,iVar7);
    }
    lVar9 = *param_2;
    *(float *)(lVar9 + lVar16 * 0x18) = (float)dVar3;
    *(float *)(lVar9 + 4 + lVar16 * 0x18) = (float)dVar4;
    *(float *)(lVar9 + 8 + lVar16 * 0x18) = fVar21;
    *(float *)(lVar9 + 0xc + lVar16 * 0x18) = fVar20;
    *(float *)(lVar9 + 0x10 + lVar16 * 0x18) = fVar17;
    *(float *)(lVar9 + 0x14 + lVar16 * 0x18) = fVar19;
  }
  if ((local_f0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a55c16 FUN_146a55c16 body=153 status=ok
// SIG undefined FUN_146a55c16(void)

undefined1 *
FUN_146a55c16(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x238) != 0) && (*(longlong **)(param_1 + 0x230) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x238) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x230);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    return param_2;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a55cbe FUN_146a55cbe body=76 status=ok
// SIG undefined FUN_146a55cbe(void)

undefined8 * FUN_146a55cbe(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f0fb80;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  return param_1;
}



// FUNCTION 146a55d0a FUN_146a55d0a body=86 status=ok
// SIG undefined FUN_146a55d0a(void)

void FUN_146a55d0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f0fb80;
  if (*(char *)(param_1 + 0x51) == '\x01') {
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a55d60 FUN_146a55d60 body=87 status=ok
// SIG undefined FUN_146a55d60(void)

void FUN_146a55d60(longlong param_1,longlong param_2)

{
  FUN_146a55db8(param_1 + 0x278,param_1,param_2 + 0x1d8);
  FUN_146a55e36(param_1 + 0x268,param_1,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x1d4);
  return;
}



// FUNCTION 146a55db8 FUN_146a55db8 body=126 status=ok
// SIG undefined FUN_146a55db8(void)

void FUN_146a55db8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x20) != (longlong *)0x0 && *(int *)(param_3 + 0x28) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146a76b28(param_1,param_2,param_3 + 0x20);
      return;
    }
  }
  if (*(char *)(param_3 + 0x18) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  uVar2 = FUN_14697c486(param_3);
  FUN_146a76bc6(param_1,param_2,uVar2);
  return;
}



// FUNCTION 146a55e36 FUN_146a55e36 body=126 status=ok
// SIG undefined FUN_146a55e36(void)

void FUN_146a55e36(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146a76e44(param_1,param_2,param_3 + 0x18);
      return;
    }
  }
  if (*(char *)(param_3 + 0x10) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  FUN_146a76f40(param_3);
  FUN_146a76ee2(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a55eb4 FUN_146a55eb4 body=794 status=ok
// SIG undefined FUN_146a55eb4(void)

int FUN_146a55eb4(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined8 local_8c;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar11 = ' ';
  if (param_8 != '\0') {
    cVar11 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
  }
  if (*(char *)(param_1 + 0x290) == '\x01') {
    plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_c0,"ColorPicker.AlphaBackground",1);
    uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,local_c0,0,0);
    local_a4 = *(undefined8 *)param_3;
    local_b8 = *(undefined8 *)(param_3 + 3);
    fStack_b0 = param_3[2];
    uStack_ac = 0;
    uStack_a8 = 0;
    local_9c = param_3[7];
    fStack_98 = param_3[8];
    fStack_94 = param_3[9];
    fStack_90 = param_3[10];
    local_8c = *(undefined8 *)(param_3 + 0xb);
    local_84 = local_84 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_110 = &DAT_149e1e2f8;
    local_118 = CONCAT31(local_118._1_3_,cVar11);
    FUN_140239bd2(param_5,param_6,&local_b8,uVar9);
  }
  iVar4 = *(int *)(param_1 + 0x270);
  if (0 < (longlong)iVar4) {
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    lVar10 = 0;
    lVar13 = 0;
    do {
      uVar6 = uStack_d0;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x268) + lVar10);
      local_b8 = *puVar1;
      fStack_b0 = *(float *)(puVar1 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
      fVar14 = (float)(int)lVar13 / (float)(iVar4 + -1);
      fVar2 = param_3[1];
      fVar3 = *param_3;
      lVar12 = (longlong)(int)uStack_d0;
      uVar7 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar7);
      if (uStack_d0._4_4_ < uVar7) {
        FUN_1469705bc(&local_d8,uVar6 & 0xffffffff);
      }
      _Src = local_d8;
      *(float *)((longlong)local_d8 + lVar12 * 0x18) = fVar14 * fVar3;
      *(float *)((longlong)local_d8 + lVar12 * 0x18 + 4) = fVar2 * fVar14;
      puVar1 = (undefined8 *)((longlong)local_d8 + lVar12 * 0x18 + 8);
      *puVar1 = local_b8;
      puVar1[1] = CONCAT44(uStack_ac,fStack_b0);
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 0x10;
    } while (iVar4 != lVar13);
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0x3f800000;
    uVar5 = *(undefined4 *)(param_1 + 0x294);
    local_f8 = (void *)0x0;
    lVar10 = (longlong)(int)uStack_d0;
    local_f0 = (int)uStack_d0;
    if (lVar10 == 0) {
      local_ec = 0;
    }
    else {
      FUN_146970548(&local_f8,uStack_d0 & 0xffffffff,0);
      memcpy(local_f8,_Src,lVar10 * 0x18);
    }
    local_a4 = *(undefined8 *)param_3;
    local_b8 = *(undefined8 *)(param_3 + 3);
    fStack_b0 = param_3[2];
    uStack_ac = 0;
    uStack_a8 = 0;
    local_9c = param_3[7];
    fStack_98 = param_3[8];
    fStack_94 = param_3[9];
    fStack_90 = param_3[10];
    local_8c = *(undefined8 *)(param_3 + 0xb);
    local_84 = local_84 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_108 = &local_e8;
    local_110 = (undefined8 *)CONCAT71(local_110._1_7_,cVar11);
    local_118 = uVar5;
    FUN_146954b7a(param_5,param_6 + 1,&local_b8,&local_f8);
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6 + 1;
}



// FUNCTION 146a561d0 FUN_146a561d0 body=46 status=ok
// SIG undefined FUN_146a561d0(void)

undefined8 * FUN_146a561d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x288) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x280);
    *param_2 = *(undefined8 *)(param_1 + 0x278);
    param_2[1] = uVar1;
  }
  else {
    FUN_140105618(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 146a561fe FUN_146a561fe body=984 status=ok
// SIG undefined FUN_146a561fe(void)

undefined1 * FUN_146a561fe(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [136];
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar7 = FUN_140591fd6();
  if (cVar7 != '\0') {
LAB_146a5623b:
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_146a5626d;
  }
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar10 == CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98)) goto LAB_146a564be;
LAB_146a563bf:
    if (lVar10 != DAT_14c966fb8) goto LAB_146a5632c;
LAB_146a563cc:
    local_108[0] = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_54 = 0;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_146a56457:
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      bVar11 = true;
    }
    else {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_146a56457;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar9 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      bVar11 = false;
      local_148 = uVar9;
      plStack_140 = plVar4;
    }
    plVar4 = plStack_140;
    uVar9 = FUN_140592a6e(local_108,&local_148);
    FUN_1403d4c6e(param_2,uVar9);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar5 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
    if (lVar10 != lVar5) {
      lVar10 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_146a563bf;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c966fb8;
      UNLOCK();
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
      if (lVar10 == lVar5) goto LAB_146a563cc;
LAB_146a5632c:
      lVar10 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      lVar5 = DAT_14c966fa0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        lVar5 = DAT_14c966fa0;
        UNLOCK();
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
      if (lVar10 == lVar5) {
        FUN_146a565d8(param_1);
        *param_2 = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        goto LAB_146a5626d;
      }
      goto LAB_146a5623b;
    }
LAB_146a564be:
    FUN_146a565d8(param_1);
    local_108[0] = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_54 = 0;
    local_120 = (undefined4)DAT_14c966e98;
    uStack_11c = DAT_14c966e98._4_4_;
    uStack_118 = (undefined4)DAT_14c966ea0;
    uStack_114 = DAT_14c966ea0._4_4_;
    local_110 = DAT_14c966ea8;
    if (DAT_14c966ea8 != 0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_146a56574:
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
      bVar11 = true;
    }
    else {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_146a56574;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar9 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      bVar11 = false;
      local_138 = uVar9;
      plStack_130 = plVar4;
    }
    plVar4 = plStack_130;
    uVar9 = FUN_1407c9a0c(local_108,&local_138,&local_120);
    FUN_1403d4c6e(param_2,uVar9);
    plVar1 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_130 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_130)(plStack_130);
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
  if (!bVar11) {
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
  FUN_14493db24(local_108);
LAB_146a5626d:
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a565d8 FUN_146a565d8 body=453 status=ok
// SIG undefined FUN_146a565d8(void)

void FUN_146a565d8(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = *(longlong **)(param_1 + 0x330);
  bVar10 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a56609:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_146a56609;
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x328);
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_146a56706:
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        FUN_1469ce008(lVar4);
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_146a56706;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar10 = iVar7 == iVar6;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar10);
        uVar5 = *(undefined8 *)(param_1 + 8);
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
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_58 = uVar5;
        plStack_50 = plVar3;
        FUN_1469ce008(lVar4);
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
    bVar10 = false;
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_146a5661f:
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146a5661f;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    local_68 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_60 = plVar3;
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
  FUN_146a58da2(param_1 + 0x3b8,&local_68,param_2);
  if (!bVar10) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a5679e FUN_146a5679e body=452 status=ok
// SIG undefined FUN_146a5679e(void)

undefined1 * FUN_146a5679e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [136];
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  lVar5 = DAT_14c966fb8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966fb8;
    UNLOCK();
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
  if (lVar3 == lVar5) {
    local_108[0] = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    local_54 = 0;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_146a568e0:
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_146a568e0;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar9 = iVar7 == iVar6;
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar9);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      bVar9 = false;
      local_118 = uVar8;
      plStack_110 = plVar4;
    }
    plVar4 = plStack_110;
    uVar8 = FUN_140592a6e(local_108,&local_118);
    FUN_1403d4c6e(param_2,uVar8);
    if (!bVar9) {
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
    FUN_14493db24(local_108);
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
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a56964 FUN_146a56964 body=869 status=ok
// SIG undefined FUN_146a56964(void)

undefined1 * FUN_146a56964(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_a8;
  longlong *plStack_a0;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar8 = *(longlong **)(param_1 + 0x330);
  bVar11 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a56b92:
    plVar8 = (longlong *)0x0;
LAB_146a56b94:
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    if (bVar11) goto LAB_146a56be7;
  }
  else {
    fVar15 = 1.0 / (param_3[7] * param_3[10] - param_3[9] * param_3[8]);
    fVar16 = param_3[7] * fVar15;
    fVar14 = -param_3[9] * fVar15;
    fVar12 = -param_3[8] * fVar15;
    fVar15 = fVar15 * param_3[10];
    dVar5 = (double)(fVar12 * *(float *)(param_4 + 0x20) + fVar16 * *(float *)(param_4 + 0x24) +
                    (-param_3[0xb] * fVar12 - fVar16 * param_3[0xc])) / (double)param_3[1];
    dVar13 = (double)(fVar15 * *(float *)(param_4 + 0x20) + fVar14 * *(float *)(param_4 + 0x24) +
                     (-param_3[0xb] * fVar15 - param_3[0xc] * fVar14)) / (double)*param_3;
    if (1.0 <= dVar5) {
      dVar5 = 1.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    if (1.0 <= dVar13) {
      dVar13 = 1.0;
    }
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_146a56b92;
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *(longlong *)(param_1 + 0x328);
    if (lVar3 == 0) {
      bVar11 = false;
      goto LAB_146a56b94;
    }
    plVar9 = *(longlong **)(param_1 + 0x2c8);
    bVar11 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_146a56c2f:
      plVar9 = (longlong *)0x0;
LAB_146a56c32:
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      if (!bVar11) goto LAB_146a56c6d;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_146a56c2f;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar10 = iVar7 == iVar6;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar10);
      if ((*(longlong *)(param_1 + 0x2c0) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x2c0) + 0x150) != '\x01')) {
        bVar11 = false;
        goto LAB_146a56c32;
      }
      plVar4 = *(longlong **)(param_1 + 0x10);
      local_90 = dVar13;
      local_88 = dVar5;
      if (plVar4 == (longlong *)0x0) {
LAB_146a56ca4:
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_146a56ca4;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        local_a8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plStack_a0 = plVar4;
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
      local_b8 = param_4;
      FUN_1469d52ec(lVar3,param_2,&local_a8,&local_90);
LAB_146a56c6d:
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
  }
  LOCK();
  plVar9 = plVar8 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_146a56be7:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a56cca FUN_146a56cca body=659 status=ok
// SIG undefined FUN_146a56cca(void)

undefined1 * FUN_146a56cca(undefined8 param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_78;
  undefined1 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar5 = FUN_140591fd6();
  if (cVar5 == '\0') {
LAB_146a56ee3:
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    lVar6 = *(longlong *)(param_4 + 0x40);
    plVar3 = *(longlong **)(param_4 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      if (lVar6 != DAT_14c966e98) {
LAB_146a56dc4:
        if (lVar6 == DAT_14c966fb8) goto LAB_146a56dd1;
        goto LAB_146a56ee3;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      lVar4 = DAT_14c966e98;
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
      if (lVar6 != lVar4) {
        lVar6 = *(longlong *)(param_4 + 0x40);
        plVar3 = *(longlong **)(param_4 + 0x50);
        if (plVar3 == (longlong *)0x0) goto LAB_146a56dc4;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        lVar4 = DAT_14c966fb8;
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
        if (lVar6 != lVar4) goto LAB_146a56ee3;
LAB_146a56dd1:
        fVar8 = param_3[8] * 0.0;
        fVar9 = param_3[7] * 0.0;
        fVar7 = param_3[10] * 0.0;
        fVar10 = param_3[9] * 0.0;
        local_128 = CONCAT44(fVar7 + fVar8 + param_3[0xc],fVar10 + fVar9 + param_3[0xb]);
        local_120 = CONCAT44(*param_3 * param_3[8] + fVar7,*param_3 * param_3[7] + fVar10);
        uStack_118 = CONCAT44(param_3[10] * param_3[1] + fVar8,param_3[1] * param_3[9] + fVar9);
        cVar5 = FUN_1402b2a42();
        if (cVar5 != '\0') {
          FUN_146a56f5e(param_1);
        }
      }
    }
    local_128 = CONCAT71(local_128._1_7_,1);
    local_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    memset(local_100,0,0x88);
    local_78 = 0x20702;
    local_f0 = 0;
    uStack_e8 = 0;
    local_74 = 1;
    FUN_1403d4c6e(param_2,&local_128);
    FUN_14493db24(&local_128);
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a56f5e FUN_146a56f5e body=1013 status=ok
// SIG undefined FUN_146a56f5e(void)

undefined4 FUN_146a56f5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0x430) != 0) && (*(longlong **)(param_1 + 0x428) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x428) + 0x60))();
  }
  uVar6 = FUN_146a5ca8a(param_1);
  if ((char)uVar6 != '\0') {
    FUN_146a58688(param_1,&local_38);
    if (local_38 == 0) {
      cVar5 = '\0';
    }
    else {
      FUN_146a58688(param_1,&local_58);
      (**(code **)(*local_58 + 600))(local_58,&local_48);
      if (local_48 == (longlong *)0x0) {
        cVar5 = '\0';
      }
      else {
        FUN_146a58688(param_1,&local_78);
        (**(code **)(*local_78 + 600))(local_78,&local_68);
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 == (longlong *)0x0) {
LAB_146a57284:
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
        }
        else {
          iVar7 = (int)plVar3[1];
          do {
            if (iVar7 == 0) goto LAB_146a57284;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar8 = iVar7 == iVar4;
            if (bVar8) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar4 = iVar7;
            }
            iVar7 = iVar4;
            UNLOCK();
          } while (!bVar8);
          local_88 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          plStack_80 = plVar3;
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
        cVar5 = FUN_1469c4f26(local_68,&local_88);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
            }
          }
        }
      }
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    plVar3 = local_30;
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
        }
      }
    }
    if (cVar5 == '\0') {
      FUN_146a5870a(param_1);
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_146a57039:
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_146a57039;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar8 = iVar7 == iVar4;
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_98 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plStack_90 = plVar3;
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
      FUN_1469fa73c(param_1 + 0x3a8,&local_98);
      FUN_146a58688(param_1,&local_48);
      (**(code **)(*local_48 + 600))(local_48,&local_38);
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_146a57184:
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_146a57184;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar8 = iVar7 == iVar4;
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_a8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plStack_a0 = plVar3;
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
      FUN_1469c5162(local_38,&local_a8);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146a57354 FUN_146a57354 body=348 status=ok
// SIG undefined FUN_146a57354(void)

void FUN_146a57354(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  code *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x2a0) == 0) || (*(longlong *)(param_1 + 0x2a8) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x2a8) + 8) < 1)) {
    local_40 = FUN_146a575ec;
    local_38 = 0;
    FUN_146a574b2(local_50,param_1);
    FUN_14697ef1e(param_1,&local_40,0x3f400000,local_50);
    *(code **)(param_1 + 0x2a0) = local_40;
    plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
    plVar3 = *(longlong **)(param_1 + 0x2a8);
    if (plVar3 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar3 = *(longlong **)(param_1 + 0x2a8);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x2a8) = plVar4;
      plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  cVar2 = FUN_146a580d6(param_1);
  lVar5 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar2 != '\0') * 8) + 0x850;
  FUN_146aeb4ee(*(undefined8 *)(param_1 + 0x5d8),lVar5);
  FUN_146aeb4ee(*(undefined8 *)(param_1 + 0x5c8),lVar5);
  FUN_14697d97a(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


