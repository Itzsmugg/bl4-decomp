// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14896af08 FUN_14896af08 body=81 status=ok
// SIG undefined FUN_14896af08(void)

undefined8 FUN_14896af08(longlong param_1)

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



// FUNCTION 14896af60 FUN_14896af60 body=89 status=ok
// SIG undefined FUN_14896af60(void)

bool FUN_14896af60(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896afab;
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
LAB_14896afab:
  return lVar6 == param_2;
}



// FUNCTION 14896afd6 FUN_14896afd6 body=118 status=ok
// SIG undefined FUN_14896afd6(void)

void FUN_14896afd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4266a0;
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



// FUNCTION 14896b04c FUN_14896b04c body=118 status=ok
// SIG undefined FUN_14896b04c(void)

void FUN_14896b04c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4266a0;
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



// FUNCTION 14896b0c2 FUN_14896b0c2 body=156 status=ok
// SIG undefined FUN_14896b0c2(void)

void FUN_14896b0c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4266a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896b14e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896b15e FUN_14896b15e body=104 status=ok
// SIG undefined FUN_14896b15e(void)

void FUN_14896b15e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896b1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896b1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896b1c6 FUN_14896b1c6 body=101 status=ok
// SIG undefined FUN_14896b1c6(void)

ulonglong FUN_14896b1c6(longlong param_1)

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
LAB_14896b220:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14896b220;
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



// FUNCTION 14896b22c FUN_14896b22c body=139 status=ok
// SIG undefined FUN_14896b22c(void)

void FUN_14896b22c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_14480f766(lVar4 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0xa0);
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    FUN_14103b6f6(lVar4,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896b2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14896b2b8 FUN_14896b2b8 body=167 status=ok
// SIG undefined FUN_14896b2b8(void)

void FUN_14896b2b8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14896b333;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14896b333;
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
LAB_14896b333:
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
                    /* WARNING: Could not recover jumptable at 0x00014896b353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14896b360 FUN_14896b360 body=38 status=ok
// SIG undefined FUN_14896b360(void)

undefined8 FUN_14896b360(undefined8 param_1,int param_2)

{
  FUN_14896b3ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896b386 FUN_14896b386 body=38 status=ok
// SIG undefined FUN_14896b386(void)

undefined8 FUN_14896b386(undefined8 param_1,int param_2)

{
  FUN_14896b3ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896b3ae FUN_14896b3ae body=145 status=ok
// SIG undefined FUN_14896b3ae(void)

void FUN_14896b3ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4267c0;
  if (*(char *)((longlong)param_1 + 0xb9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb9) = 0;
  }
  plVar3 = (longlong *)param_1[0x15];
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
  *param_1 = &PTR_LAB_14b426850;
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140f97a52(param_1);
  return;
}



// FUNCTION 14896b444 FUN_14896b444 body=81 status=ok
// SIG undefined FUN_14896b444(void)

undefined8 FUN_14896b444(longlong param_1)

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



// FUNCTION 14896b49c FUN_14896b49c body=89 status=ok
// SIG undefined FUN_14896b49c(void)

bool FUN_14896b49c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896b4e7;
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
LAB_14896b4e7:
  return lVar6 == param_2;
}



// FUNCTION 14896b4f6 FUN_14896b4f6 body=118 status=ok
// SIG undefined FUN_14896b4f6(void)

void FUN_14896b4f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4268d0;
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



// FUNCTION 14896b56c FUN_14896b56c body=118 status=ok
// SIG undefined FUN_14896b56c(void)

void FUN_14896b56c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4268d0;
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



// FUNCTION 14896b5e2 FUN_14896b5e2 body=156 status=ok
// SIG undefined FUN_14896b5e2(void)

void FUN_14896b5e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4268d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896b66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896b67e FUN_14896b67e body=104 status=ok
// SIG undefined FUN_14896b67e(void)

void FUN_14896b67e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896b6cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896b6e6 FUN_14896b6e6 body=63 status=ok
// SIG undefined FUN_14896b6e6(void)

undefined8 * FUN_14896b6e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b426960;
  FUN_145859e92(param_1 + 0x18);
  FUN_145859eca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896b726 FUN_14896b726 body=148 status=ok
// SIG undefined FUN_14896b726(void)

void FUN_14896b726(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_20 = *(undefined8 *)(param_1 + 0x70);
    local_18 = *(longlong **)(param_1 + 0x78);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896b7fc FUN_14896b7fc body=139 status=ok
// SIG undefined FUN_14896b7fc(void)

void FUN_14896b7fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(lVar4 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0xa0);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_14103b6f6(lVar4,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896b87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14896b888 FUN_14896b888 body=38 status=ok
// SIG undefined FUN_14896b888(void)

undefined8 FUN_14896b888(undefined8 param_1,int param_2)

{
  FUN_145859eca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896b8b4 FUN_14896b8b4 body=68 status=ok
// SIG undefined FUN_14896b8b4(void)

undefined8 * FUN_14896b8b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426b00;
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



// FUNCTION 14896b8fc FUN_14896b8fc body=81 status=ok
// SIG undefined FUN_14896b8fc(void)

undefined8 FUN_14896b8fc(longlong param_1)

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



// FUNCTION 14896b954 FUN_14896b954 body=89 status=ok
// SIG undefined FUN_14896b954(void)

bool FUN_14896b954(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896b99f;
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
LAB_14896b99f:
  return lVar6 == param_2;
}



// FUNCTION 14896b9ca FUN_14896b9ca body=118 status=ok
// SIG undefined FUN_14896b9ca(void)

void FUN_14896b9ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426b00;
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



// FUNCTION 14896ba40 FUN_14896ba40 body=118 status=ok
// SIG undefined FUN_14896ba40(void)

void FUN_14896ba40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426b00;
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



// FUNCTION 14896bab6 FUN_14896bab6 body=156 status=ok
// SIG undefined FUN_14896bab6(void)

void FUN_14896bab6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426b00;
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
                    /* WARNING: Could not recover jumptable at 0x00014896bb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896bb52 FUN_14896bb52 body=104 status=ok
// SIG undefined FUN_14896bb52(void)

void FUN_14896bb52(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896bb9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896bbba FUN_14896bbba body=110 status=ok
// SIG undefined FUN_14896bbba(void)

void FUN_14896bbba(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  FUN_144a1314c(param_1 + 0x28);
  return;
}



// FUNCTION 14896bc28 FUN_14896bc28 body=90 status=ok
// SIG undefined FUN_14896bc28(void)

void FUN_14896bc28(char *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\x03') {
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
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x01';
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_144a1314c(param_1 + 0x28);
  return;
}



// FUNCTION 14896bc86 FUN_14896bc86 body=81 status=ok
// SIG undefined FUN_14896bc86(void)

undefined8 FUN_14896bc86(longlong param_1)

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



// FUNCTION 14896bcde FUN_14896bcde body=89 status=ok
// SIG undefined FUN_14896bcde(void)

bool FUN_14896bcde(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896bd29;
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
LAB_14896bd29:
  return lVar6 == param_2;
}



// FUNCTION 14896bd38 FUN_14896bd38 body=118 status=ok
// SIG undefined FUN_14896bd38(void)

void FUN_14896bd38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426b70;
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



// FUNCTION 14896bdae FUN_14896bdae body=156 status=ok
// SIG undefined FUN_14896bdae(void)

void FUN_14896bdae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426b70;
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
                    /* WARNING: Could not recover jumptable at 0x00014896be3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896be4a FUN_14896be4a body=98 status=ok
// SIG undefined FUN_14896be4a(void)

void FUN_14896be4a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896be93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896bea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14896beac FUN_14896beac body=444 status=ok
// SIG undefined FUN_14896beac(void)

longlong * FUN_14896beac(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *puVar6 = &PTR_LAB_14ac8b4c0;
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
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b426be0;
    puVar6[3] = local_48;
    puVar6[4] = 0;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *puVar6 = &PTR_LAB_14ac8b4c0;
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
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b426be0;
    puVar6[3] = local_48;
    puVar6[4] = local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896c06a FUN_14896c06a body=64 status=ok
// SIG undefined FUN_14896c06a(void)

undefined8 * FUN_14896c06a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426be0;
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



// FUNCTION 14896c0ae FUN_14896c0ae body=81 status=ok
// SIG undefined FUN_14896c0ae(void)

undefined8 FUN_14896c0ae(longlong param_1)

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



// FUNCTION 14896c106 FUN_14896c106 body=89 status=ok
// SIG undefined FUN_14896c106(void)

bool FUN_14896c106(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896c151;
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
LAB_14896c151:
  return lVar6 == param_2;
}



// FUNCTION 14896c17c FUN_14896c17c body=118 status=ok
// SIG undefined FUN_14896c17c(void)

void FUN_14896c17c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426be0;
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



// FUNCTION 14896c1f2 FUN_14896c1f2 body=118 status=ok
// SIG undefined FUN_14896c1f2(void)

void FUN_14896c1f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426be0;
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



// FUNCTION 14896c268 FUN_14896c268 body=156 status=ok
// SIG undefined FUN_14896c268(void)

void FUN_14896c268(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426be0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896c2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896c304 FUN_14896c304 body=104 status=ok
// SIG undefined FUN_14896c304(void)

void FUN_14896c304(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896c351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896c362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896c36c FUN_14896c36c body=101 status=ok
// SIG undefined FUN_14896c36c(void)

ulonglong FUN_14896c36c(longlong param_1)

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
LAB_14896c3c6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14896c3c6;
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



// FUNCTION 14896c3d2 FUN_14896c3d2 body=444 status=ok
// SIG undefined FUN_14896c3d2(void)

longlong * FUN_14896c3d2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *puVar6 = &PTR_LAB_14a1c7440;
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
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b426c70;
    puVar6[3] = local_48;
    puVar6[4] = 0;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *puVar6 = &PTR_LAB_14a1c7440;
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
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b426c70;
    puVar6[3] = local_48;
    puVar6[4] = local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896c590 FUN_14896c590 body=64 status=ok
// SIG undefined FUN_14896c590(void)

undefined8 * FUN_14896c590(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426c70;
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



// FUNCTION 14896c5d4 FUN_14896c5d4 body=81 status=ok
// SIG undefined FUN_14896c5d4(void)

undefined8 FUN_14896c5d4(longlong param_1)

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



// FUNCTION 14896c62c FUN_14896c62c body=89 status=ok
// SIG undefined FUN_14896c62c(void)

bool FUN_14896c62c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896c677;
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
LAB_14896c677:
  return lVar6 == param_2;
}



// FUNCTION 14896c6a2 FUN_14896c6a2 body=118 status=ok
// SIG undefined FUN_14896c6a2(void)

void FUN_14896c6a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426c70;
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



// FUNCTION 14896c718 FUN_14896c718 body=118 status=ok
// SIG undefined FUN_14896c718(void)

void FUN_14896c718(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426c70;
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



// FUNCTION 14896c78e FUN_14896c78e body=156 status=ok
// SIG undefined FUN_14896c78e(void)

void FUN_14896c78e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426c70;
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
                    /* WARNING: Could not recover jumptable at 0x00014896c81a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896c82a FUN_14896c82a body=104 status=ok
// SIG undefined FUN_14896c82a(void)

void FUN_14896c82a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896c877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896c888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896c892 FUN_14896c892 body=101 status=ok
// SIG undefined FUN_14896c892(void)

ulonglong FUN_14896c892(longlong param_1)

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
LAB_14896c8ec:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14896c8ec;
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



// FUNCTION 14896c8f8 FUN_14896c8f8 body=136 status=ok
// SIG undefined FUN_14896c8f8(void)

void FUN_14896c8f8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x170);
  if (param_2 <= (int)uVar1) {
    iVar5 = 5;
    if (5 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x174)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      iVar4 = (int)(uVar3 / 0x48);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x174) = iVar5;
    FUN_14896c982(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14896c982 FUN_14896c982 body=149 status=ok
// SIG undefined FUN_14896c982(void)

void FUN_14896c982(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x168);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x168,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x168),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x168,param_2,param_3,0x48);
  return;
}



// FUNCTION 14896ca18 FUN_14896ca18 body=116 status=ok
// SIG undefined FUN_14896ca18(void)

void FUN_14896ca18(char *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
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
  FUN_1448173f8(param_1 + 0x28);
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if ((cVar3 == '\x03') &&
            (plVar4 = *(longlong **)(param_1 + 0x10), plVar4 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 14896ca8c FUN_14896ca8c body=119 status=ok
// SIG undefined FUN_14896ca8c(void)

void FUN_14896ca8c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 5;
    if (5 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x14c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 6,0);
      iVar2 = (int)(uVar3 >> 6);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_14896cb04(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14896cb04 FUN_14896cb04 body=141 status=ok
// SIG undefined FUN_14896cb04(void)

void FUN_14896cb04(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x40);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x40);
  return;
}



// FUNCTION 14896cb92 FUN_14896cb92 body=31 status=ok
// SIG undefined FUN_14896cb92(void)

undefined8 FUN_14896cb92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896cbc6 FUN_14896cbc6 body=85 status=ok
// SIG undefined FUN_14896cbc6(void)

void FUN_14896cbc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4271c0;
  return;
}



// FUNCTION 14896cc1c FUN_14896cc1c body=118 status=ok
// SIG undefined FUN_14896cc1c(void)

void FUN_14896cc1c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4271c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014896cc83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896cc92 FUN_14896cc92 body=105 status=ok
// SIG undefined FUN_14896cc92(void)

undefined8 FUN_14896cc92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145fe5316(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896ccfc FUN_14896ccfc body=45 status=ok
// SIG undefined FUN_14896ccfc(void)

longlong FUN_14896ccfc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145c87864(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896cd30 FUN_14896cd30 body=54 status=ok
// SIG undefined FUN_14896cd30(void)

longlong FUN_14896cd30(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14896cd66 FUN_14896cd66 body=113 status=ok
// SIG undefined FUN_14896cd66(void)

void FUN_14896cd66(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14896cddc FUN_14896cddc body=81 status=ok
// SIG undefined FUN_14896cddc(void)

undefined8 FUN_14896cddc(longlong param_1)

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



// FUNCTION 14896ce34 FUN_14896ce34 body=89 status=ok
// SIG undefined FUN_14896ce34(void)

bool FUN_14896ce34(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896ce7f;
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
LAB_14896ce7f:
  return lVar6 == param_2;
}



// FUNCTION 14896ceb6 FUN_14896ceb6 body=118 status=ok
// SIG undefined FUN_14896ceb6(void)

void FUN_14896ceb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426d60;
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



// FUNCTION 14896cf2c FUN_14896cf2c body=156 status=ok
// SIG undefined FUN_14896cf2c(void)

void FUN_14896cf2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b427140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426d60;
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
                    /* WARNING: Could not recover jumptable at 0x00014896cfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896cfc8 FUN_14896cfc8 body=98 status=ok
// SIG undefined FUN_14896cfc8(void)

void FUN_14896cfc8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896d011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896d020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14896d02c FUN_14896d02c body=38 status=ok
// SIG undefined FUN_14896d02c(void)

undefined8 FUN_14896d02c(undefined8 param_1,int param_2)

{
  FUN_145a0692c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896d052 FUN_14896d052 body=45 status=ok
// SIG undefined FUN_14896d052(void)

longlong FUN_14896d052(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145a0692c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896d080 FUN_14896d080 body=68 status=ok
// SIG undefined FUN_14896d080(void)

undefined8 * FUN_14896d080(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426ea0;
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



// FUNCTION 14896d0c8 FUN_14896d0c8 body=81 status=ok
// SIG undefined FUN_14896d0c8(void)

undefined8 FUN_14896d0c8(longlong param_1)

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



// FUNCTION 14896d120 FUN_14896d120 body=89 status=ok
// SIG undefined FUN_14896d120(void)

bool FUN_14896d120(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896d16b;
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
LAB_14896d16b:
  return lVar6 == param_2;
}



// FUNCTION 14896d196 FUN_14896d196 body=118 status=ok
// SIG undefined FUN_14896d196(void)

void FUN_14896d196(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426ea0;
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



// FUNCTION 14896d20c FUN_14896d20c body=156 status=ok
// SIG undefined FUN_14896d20c(void)

void FUN_14896d20c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b427140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426ea0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896d298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896d2a8 FUN_14896d2a8 body=98 status=ok
// SIG undefined FUN_14896d2a8(void)

void FUN_14896d2a8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896d2f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896d300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14896d30a FUN_14896d30a body=94 status=ok
// SIG undefined FUN_14896d30a(void)

ulonglong FUN_14896d30a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14896d35d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14896d35d;
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
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14896d368 FUN_14896d368 body=127 status=ok
// SIG undefined FUN_14896d368(void)

undefined8 * FUN_14896d368(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b426f30;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b426f50;
  param_1[6] = &PTR_FUN_14b426f90;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 14896d3f2 FUN_14896d3f2 body=29 status=ok
// SIG undefined FUN_14896d3f2(void)

undefined8 FUN_14896d3f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896d410 FUN_14896d410 body=38 status=ok
// SIG undefined FUN_14896d410(void)

undefined8 FUN_14896d410(undefined8 param_1,int param_2)

{
  FUN_14896d83a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896d436 FUN_14896d436 body=23 status=ok
// SIG undefined FUN_14896d436(void)

undefined1 FUN_14896d436(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 14896d44e FUN_14896d44e body=109 status=ok
// SIG undefined FUN_14896d44e(void)

undefined8 FUN_14896d44e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  FUN_140805e68(param_1 + 0x98,&local_28,1);
  FUN_144a7b126(param_1 + 0x98,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896d4bc FUN_14896d4bc body=454 status=ok
// SIG undefined FUN_14896d4bc(void)

void FUN_14896d4bc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined4 *local_170;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_130 [40];
  undefined4 local_108;
  undefined1 local_100 [40];
  undefined4 local_d8;
  undefined1 local_d0 [40];
  undefined4 local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_70[0] = 0;
  local_48 = 0;
  FUN_14896d8c6(param_2,&local_160,&DAT_14cb8aac8);
  local_a0[0] = 0;
  local_78 = 0;
  lVar1 = FUN_14896d98c(param_2,&DAT_14cb8aac0);
  if (lVar1 == 0) {
LAB_14896d550:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_14896d550;
  }
  local_d0[0] = 0;
  local_a8 = 0;
  uVar3 = FUN_14124a572(param_2,&DAT_14cb8aab8);
  local_100[0] = 0;
  local_d8 = 0;
  lVar2 = FUN_14896d98c(param_2,&DAT_14cb8aaa8);
  if (lVar2 != 0) {
    lVar4 = FUN_144a3a302();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_14896d5be;
  }
  lVar2 = 0;
LAB_14896d5be:
  local_130[0] = 0;
  local_108 = 0;
  uVar5 = FUN_14124a572(param_2,&DAT_14cb8aab0,local_130);
  local_170 = &local_148;
  local_138 = local_150;
  local_148 = local_160;
  uStack_144 = uStack_15c;
  uStack_140 = uStack_158;
  uStack_13c = uStack_154;
  local_178 = lVar1;
  FUN_148704823(param_1 + 0x98,uVar5,lVar2,uVar3);
  FUN_144a5ac3a(local_130);
  FUN_144a5ac3a(local_100);
  FUN_144a5ac3a(local_d0);
  FUN_144a5ac3a(local_a0);
  FUN_144a5ac3a(local_70);
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896d684 FUN_14896d684 body=182 status=ok
// SIG undefined FUN_14896d684(void)

undefined8 * FUN_14896d684(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a78b9e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_14896da4e;
      local_40 = 0;
      FUN_14896dc5c(local_38,param_1);
      FUN_1457a6ebe(param_3 + 0x11b8,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_14896d6d1;
    }
  }
  *param_2 = 0;
LAB_14896d6d1:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896d73c FUN_14896d73c body=95 status=ok
// SIG undefined FUN_14896d73c(void)

ulonglong FUN_14896d73c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong in_RAX;
  byte bVar3;
  undefined7 uVar4;
  
  if (param_2 != 0) {
    in_RAX = FUN_144a78b9e();
    piVar1 = (int *)(in_RAX + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (in_RAX = in_RAX + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       in_RAX)) {
      uVar4 = (undefined7)((ulonglong)param_3 >> 8);
      bVar3 = 1;
      if (*param_3 == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = FUN_14480f766(param_2 + 0x11b8);
      }
      goto LAB_14896d76f;
    }
  }
  bVar2 = (byte)in_RAX;
  bVar3 = 0;
  uVar4 = 0;
LAB_14896d76f:
  return CONCAT71(uVar4,bVar3 & bVar2) & 0xffffffff;
}



// FUNCTION 14896d79c FUN_14896d79c body=45 status=ok
// SIG undefined FUN_14896d79c(void)

longlong FUN_14896d79c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_14896d83a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896d7ca FUN_14896d7ca body=79 status=ok
// SIG undefined FUN_14896d7ca(void)

undefined8 * FUN_14896d7ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b426fa0;
  param_1[4] = &PTR_LAB_14b426fe0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896d83a FUN_14896d83a body=139 status=ok
// SIG undefined FUN_14896d83a(void)

void FUN_14896d83a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b426f50;
  param_1[4] = &PTR_FUN_14b426f90;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b426fa0;
  param_1[4] = &PTR_LAB_14b426fe0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14896d8c6 FUN_14896d8c6 body=197 status=ok
// SIG undefined FUN_14896d8c6(void)

undefined8
FUN_14896d8c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140f0e29e(param_1,local_88);
  FUN_1447c3578(local_88,local_50,param_4);
  FUN_144a7b7fe(local_50,param_2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a2da94(local_88);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896d98c FUN_14896d98c body=193 status=ok
// SIG undefined FUN_14896d98c(void)

undefined8 FUN_14896d98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140f0e29e(param_1,local_80,param_2);
  FUN_1447c3578(local_80,local_48,param_3);
  uVar2 = FUN_14070d842(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a2da94(local_80);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896da4e FUN_14896da4e body=525 status=ok
// SIG undefined FUN_14896da4e(void)

void FUN_14896da4e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = *param_5;
  uStack_114 = param_5[1];
  uStack_110 = param_5[2];
  uStack_10c = param_5[3];
  local_108 = *(undefined8 *)(param_5 + 4);
  local_c0 = param_2;
  local_b8 = param_3;
  local_b0 = param_4;
  lVar4 = FUN_143e28142();
  if (lVar4 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)*(double *)(lVar4 + 0x6d0);
  }
  local_f8 = 0;
  FUN_14485c47a(&local_f8,param_2);
  uStack_f0 = 0;
  FUN_14485c47a(&uStack_f0,param_3);
  local_e8 = 0;
  FUN_14485c47a(&local_e8,param_4);
  uStack_d0 = local_108;
  uStack_e0 = local_118;
  uStack_dc = uStack_114;
  uStack_d8 = uStack_110;
  uStack_d4 = uStack_10c;
  local_130 = param_6;
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 8);
  local_128 = &local_f8;
  local_120 = puVar1;
  local_c8 = fVar5;
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_130);
    if (cVar3 == (char)plVar2[1]) goto LAB_14896dc1e;
  }
  if (&local_f8 != puVar1) {
    *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_c4,local_c8);
    *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_d4,uStack_d8);
    *(undefined8 *)(param_1 + 0xe0) = uStack_d0;
    *(undefined8 *)(param_1 + 200) = local_e8;
    *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uStack_dc,uStack_e0);
    *(undefined4 *)puVar1 = (undefined4)local_f8;
    *(undefined4 *)(param_1 + 0xbc) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_f0;
    *(undefined4 *)(param_1 + 0xc4) = uStack_f0._4_4_;
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  local_a8[0] = (undefined1 *)0x0;
  local_98 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_98 = &PTR_FUN_14b4270d0;
  local_98[1] = &local_c0;
  local_98[2] = &local_b8;
  local_98[3] = &local_b0;
  local_98[4] = param_5;
  if (local_98 + 1 != (longlong *)0x0) {
    local_a8[0] = &LAB_14896e214;
  }
  FUN_140f73374(param_1,local_a8);
LAB_14896dc1e:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896dc5c FUN_14896dc5c body=386 status=ok
// SIG undefined FUN_14896dc5c(void)

longlong * FUN_14896dc5c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_14896dd6d:
    *puVar5 = &PTR_LAB_14b427060;
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
    *puVar5 = &PTR_FUN_14b426ff0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14896dd6d;
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
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b427060;
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
    *puVar5 = &PTR_FUN_14b426ff0;
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



// FUNCTION 14896ddde FUN_14896ddde body=64 status=ok
// SIG undefined FUN_14896ddde(void)

undefined8 * FUN_14896ddde(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426ff0;
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



// FUNCTION 14896de22 FUN_14896de22 body=81 status=ok
// SIG undefined FUN_14896de22(void)

undefined8 FUN_14896de22(longlong param_1)

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



// FUNCTION 14896de7a FUN_14896de7a body=89 status=ok
// SIG undefined FUN_14896de7a(void)

bool FUN_14896de7a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14896dec5;
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
LAB_14896dec5:
  return lVar6 == param_2;
}



// FUNCTION 14896def0 FUN_14896def0 body=118 status=ok
// SIG undefined FUN_14896def0(void)

void FUN_14896def0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426ff0;
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



// FUNCTION 14896df66 FUN_14896df66 body=118 status=ok
// SIG undefined FUN_14896df66(void)

void FUN_14896df66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426ff0;
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



// FUNCTION 14896dfdc FUN_14896dfdc body=156 status=ok
// SIG undefined FUN_14896dfdc(void)

void FUN_14896dfdc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b427060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426ff0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896e068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896e078 FUN_14896e078 body=215 status=ok
// SIG undefined FUN_14896e078(void)

void FUN_14896e078(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14896e106:
    local_28 = *(undefined8 *)(in_stack_00000028 + 4);
    local_48 = &local_38;
    local_38 = *in_stack_00000028;
    uStack_34 = in_stack_00000028[1];
    uStack_30 = in_stack_00000028[2];
    uStack_2c = in_stack_00000028[3];
    local_40 = in_stack_00000030;
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14896e106;
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
    local_28 = *(undefined8 *)(in_stack_00000028 + 4);
    local_48 = &local_38;
    local_38 = *in_stack_00000028;
    uStack_34 = in_stack_00000028[1];
    uStack_30 = in_stack_00000028[2];
    uStack_2c = in_stack_00000028[3];
    local_40 = in_stack_00000030;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14896e150 FUN_14896e150 body=193 status=ok
// SIG undefined FUN_14896e150(void)

undefined4 FUN_14896e150(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 == (longlong *)0x0) {
LAB_14896e1ed:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14896e1ed;
      iVar1 = iVar7 + 1;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar5 = *(longlong *)(param_1 + 0x18);
    uVar8 = CONCAT31((int3)((uint)iVar1 >> 8),lVar5 != 0);
    if (lVar5 != 0) {
      local_38 = *(undefined8 *)(in_stack_00000028 + 4);
      local_58 = &local_48;
      local_48 = *in_stack_00000028;
      uStack_44 = in_stack_00000028[1];
      uStack_40 = in_stack_00000028[2];
      uStack_3c = in_stack_00000028[3];
      local_50 = in_stack_00000030;
      (**(code **)(param_1 + 0x28))(lVar5 + *(int *)(param_1 + 0x30));
    }
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14896e21a FUN_14896e21a body=70 status=ok
// SIG undefined FUN_14896e21a(void)

undefined8 * FUN_14896e21a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b4270d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14896e266 FUN_14896e266 body=29 status=ok
// SIG undefined FUN_14896e266(void)

void FUN_14896e266(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14896e284 FUN_14896e284 body=29 status=ok
// SIG undefined FUN_14896e284(void)

undefined8 FUN_14896e284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896e2a2 FUN_14896e2a2 body=549 status=ok
// SIG undefined FUN_14896e2a2(void)

void FUN_14896e2a2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [64];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 8;
  FUN_14485c47a(&uStack_90,*(undefined8 *)*param_1);
  local_70 = 0xe;
  local_68 = 0;
  if ((DAT_14c9a94d4 & 0x20) == 0) {
    local_68 = 0xe;
  }
  FUN_141109e26(param_2,&DAT_14cb8aaa8,&local_98);
  FUN_144a2da94(&local_98);
  if (*(longlong *)*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)*param_1 + 0xa8);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 8;
  FUN_14485c47a(&uStack_90,uVar2);
  local_70 = 7;
  local_68 = 0;
  if ((DAT_14c9a8cf4 & 0x20) == 0) {
    local_68 = 7;
  }
  FUN_141109e26(param_2,&DAT_14cb8aab0,&local_98);
  FUN_144a2da94(&local_98);
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 8;
  FUN_14485c47a(&uStack_90,*(undefined8 *)param_1[1]);
  local_70 = 7;
  local_68 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_68 = 0;
  }
  FUN_141109e26(param_2,&DAT_14cb8aab8,&local_98);
  FUN_144a2da94(&local_98);
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 8;
  FUN_14485c47a(&uStack_90,*(undefined8 *)param_1[2]);
  local_70 = 0xe;
  local_68 = 0xe;
  if ((DAT_14c9a94d4 & 0x20) != 0) {
    local_68 = 0;
  }
  FUN_141109e26(param_2,&DAT_14cb8aac0,&local_98);
  FUN_144a2da94(&local_98);
  puVar1 = (undefined8 *)param_1[3];
  local_80 = puVar1[2];
  uStack_90 = *puVar1;
  uStack_88 = *(undefined4 *)(puVar1 + 1);
  uStack_84 = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_98 = 0;
  local_78 = 0x18;
  local_70 = 4;
  local_68 = (byte)~DAT_14c9a8994 >> 3 & 4;
  FUN_141109e26(param_2,&DAT_14cb8aac8,&local_98);
  FUN_144a2da94(&local_98);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896e4c8 FUN_14896e4c8 body=167 status=ok
// SIG undefined FUN_14896e4c8(void)

void FUN_14896e4c8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_14896e543;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_14896e543;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14896e543:
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
                    /* WARNING: Could not recover jumptable at 0x00014896e563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14896e570 FUN_14896e570 body=176 status=ok
// SIG undefined FUN_14896e570(void)

uint FUN_14896e570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f50b9e(param_1,&local_48,param_2);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x20))(local_48,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 14896e63c FUN_14896e63c body=176 status=ok
// SIG undefined FUN_14896e63c(void)

uint FUN_14896e63c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1462018b4(param_1,&local_48,param_2);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x20))(local_48,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 14896e712 FUN_14896e712 body=252 status=ok
// SIG undefined FUN_14896e712(void)

longlong *
FUN_14896e712(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_148977896(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14897855c(&local_30,plVar1);
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
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896e812 FUN_14896e812 body=60 status=ok
// SIG undefined FUN_14896e812(void)

void FUN_14896e812(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
    if (lVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + -0x50) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00014896e844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)((longlong *)(param_1 + -0x50),lVar1,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 14896e84e FUN_14896e84e body=60 status=ok
// SIG undefined FUN_14896e84e(void)

void FUN_14896e84e(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
    if (lVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + -0x50) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00014896e880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)((longlong *)(param_1 + -0x50),lVar1,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 14896e88a FUN_14896e88a body=53 status=ok
// SIG undefined FUN_14896e88a(void)

undefined8 FUN_14896e88a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x40);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x40);
    uVar2 = FUN_1447210f0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14896e8c0 FUN_14896e8c0 body=68 status=ok
// SIG undefined FUN_14896e8c0(void)

void FUN_14896e8c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a78b9e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14896e8f3;
  }
  param_2 = 0;
LAB_14896e8f3:
  FUN_1412bfed2(param_1,param_2);
  return;
}



// FUNCTION 14896e904 FUN_14896e904 body=180 status=ok
// SIG undefined FUN_14896e904(void)

uint FUN_14896e904(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141199ee6(param_1,&local_48,param_2 + 0x10);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x20))(local_48,param_2,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 14896e9d4 FUN_14896e9d4 body=72 status=ok
// SIG undefined FUN_14896e9d4(void)

void FUN_14896e9d4(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1412d7b64();
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14896ea1c FUN_14896ea1c body=72 status=ok
// SIG undefined FUN_14896ea1c(void)

void FUN_14896ea1c(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  thunk_FUN_1412d7b64();
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 & 0xfe;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14896ea64 FUN_14896ea64 body=64 status=ok
// SIG undefined FUN_14896ea64(void)

void FUN_14896ea64(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 4) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 4;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14896eaa4 FUN_14896eaa4 body=64 status=ok
// SIG undefined FUN_14896eaa4(void)

void FUN_14896eaa4(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 4) != 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 & 0xfb;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14896eae4 FUN_14896eae4 body=180 status=ok
// SIG undefined FUN_14896eae4(void)

uint FUN_14896eae4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14896ebb4(param_1,&local_48,param_2 + 0x10);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x18))(local_48,param_2,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 14896ebb4 FUN_14896ebb4 body=108 status=ok
// SIG undefined FUN_14896ebb4(void)

void FUN_14896ebb4(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x58);
    lVar3 = (longlong)*(int *)(param_1 + 0x60) << 4;
    do {
      lVar1 = *plVar2;
      if ((((*(int *)(lVar1 + 0x30) == *param_3) && (*(int *)(lVar1 + 0x34) == param_3[1])) &&
          (*(int *)(lVar1 + 0x38) == param_3[2])) && (*(int *)(lVar1 + 0x3c) == param_3[3])) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 14896ec20 FUN_14896ec20 body=180 status=ok
// SIG undefined FUN_14896ec20(void)

uint FUN_14896ec20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14896ebb4(param_1,&local_48,param_2 + 0x10);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x20))(local_48,param_2,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 14896ecf0 FUN_14896ecf0 body=697 status=ok
// SIG undefined FUN_14896ecf0(void)

longlong * FUN_14896ecf0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_1;
  local_70 = param_3;
  local_60 = param_2;
  plVar15 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar15[1] = (longlong)&DAT_100000001;
  *plVar15 = (longlong)&PTR_FUN_14b428790;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  *(undefined4 *)((longlong)plVar15 + 0x44) = 0xffffffff;
  plVar15[9] = 0;
  plVar15[10] = 0;
  *(undefined4 *)(plVar15 + 0xb) = 2;
  *(undefined1 *)(plVar15 + 0xc) = 0;
  plVar15[2] = (longlong)&PTR_FUN_14b24d380;
  plVar15[0xd] = 0;
  plVar15[0xe] = 0;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar15 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  local_68 = plVar15 + 2;
  iVar5 = *(int *)(local_80 + 0x58);
  if ((longlong)iVar5 != 0) {
    local_78 = plVar15 + 0xd;
    lVar7 = *(longlong *)(local_80 + 0x50);
    lVar17 = 0;
    do {
      plVar8 = *(longlong **)(lVar7 + 0x28 + lVar17);
      plVar9 = *(longlong **)(lVar7 + 0x30 + lVar17);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_58,local_70);
        lVar10 = local_58;
        if (local_58 != 0) {
          bVar4 = *(byte *)(local_80 + 0x60);
          uVar16 = FUN_141400eec(*(undefined8 *)(local_70 + 8));
          puVar3 = (undefined4 *)(lVar7 + 0x18 + lVar17);
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar13 = puVar3[3];
          *(undefined4 *)(lVar10 + 0x30) = *puVar3;
          *(undefined4 *)(lVar10 + 0x34) = uVar11;
          *(undefined4 *)(lVar10 + 0x38) = uVar12;
          *(undefined4 *)(lVar10 + 0x3c) = uVar13;
          FUN_14485c47a(lVar10 + 0x40,uVar16);
          plVar8 = local_50;
          lVar14 = local_58;
          *(byte *)(lVar10 + 0x68) = *(byte *)(lVar10 + 0x68) & 0xfe | bVar4;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          iVar6 = (int)plVar15[0xe];
          *(uint *)(plVar15 + 0xe) = iVar6 + 1U;
          if (*(uint *)((longlong)plVar15 + 0x74) < iVar6 + 1U) {
            FUN_145977ad4(local_78,iVar6);
          }
          lVar10 = *local_78;
          *(longlong *)(lVar10 + (longlong)iVar6 * 0x10) = lVar14;
          *(longlong **)(lVar10 + 8 + (longlong)iVar6 * 0x10) = plVar8;
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
        }
        plVar8 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_50)(local_50);
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
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      lVar17 = lVar17 + 0x40;
    } while ((longlong)iVar5 * 0x40 != lVar17);
  }
  plVar8 = local_60;
  *local_60 = (longlong)local_68;
  local_60[1] = (longlong)plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar15 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 14896efaa FUN_14896efaa body=303 status=ok
// SIG undefined FUN_14896efaa(void)

longlong * FUN_14896efaa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14896f0e0(param_1 + 8);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14001cc68(0xb8,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b4287b0;
    plVar1 = plVar5 + 2;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x69) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x71) = 0;
    plVar5[2] = (longlong)&PTR_FUN_14b4287d0;
    plVar5[0x10] = lVar4;
    plVar5[0x11] = 0;
    *(undefined4 *)(plVar5 + 0x12) = 0;
    plVar5[0x13] = 0;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    local_38 = plVar1;
    local_30 = plVar5;
    FUN_14897a276(&local_38,plVar1);
    plVar3 = local_30;
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896f0e0 FUN_14896f0e0 body=124 status=ok
// SIG undefined FUN_14896f0e0(void)

longlong FUN_14896f0e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_148887828(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896f15e FUN_14896f15e body=244 status=ok
// SIG undefined FUN_14896f15e(void)

longlong * FUN_14896f15e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14896f0e0(param_1 + 8);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14001cc68(0xc0,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b4288f0;
    plVar1 = plVar5 + 2;
    FUN_14897a31e(plVar1,lVar4,param_1 + 0x20);
    local_40 = plVar1;
    local_38 = plVar5;
    FUN_14897b304(&local_40,plVar1);
    plVar3 = local_38;
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896f258 FUN_14896f258 body=530 status=ok
// SIG undefined FUN_14896f258(void)

longlong FUN_14896f258(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [56];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar5 = FUN_145cdcf34();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    lVar6 = 0;
    if ((lVar7 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_14896f2d7;
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14896f45e:
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 == '\0') goto LAB_14896f45e;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 8));
      *(longlong *)(param_1 + 0x18) = lVar6;
      if (lVar6 != 0) goto LAB_14896f292;
    }
    lVar6 = 0;
    goto LAB_14896f2d7;
  }
LAB_14896f292:
  FUN_143e283b4(*param_2,&local_c8,lVar6);
  if (local_c8 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_14896f46c(local_c8,local_88,param_1 + 0x20);
    local_b8[0] = 0;
    local_90 = 0;
    FUN_1456bb102(local_b8,*param_2);
    FUN_1447c3578(local_88,local_50,local_b8);
    lVar6 = FUN_14105ccec(local_50,0);
    if (lVar6 == 0) {
LAB_14896f3f0:
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_14053ad22();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) != lVar7 + 0x30)) goto LAB_14896f3f0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar8 = local_50;
      if (0x18 < local_38) {
        pppuVar8 = (undefined8 ***)local_50[0];
      }
      (*pcVar3)(pppuVar8);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
    FUN_144a5ac3a(local_b8);
    FUN_144a2da94(local_88);
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
LAB_14896f2d7:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896f46c FUN_14896f46c body=215 status=ok
// SIG undefined FUN_14896f46c(void)

undefined8 * FUN_14896f46c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if (((*(longlong *)(param_1 + 0x58) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x20) != *(int *)(lVar2 + 0x4c))) {
    lVar3 = *param_3;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar6 = lVar2 + 0x50;
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x58);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar2 + 0x60) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar5 * 0x48);
        if (*plVar1 == lVar3) {
          if (plVar1 != (longlong *)&DAT_fffffffffffffff8 && plVar1 != (longlong *)0x0) {
            FUN_14034cca6(param_2);
            return param_2;
          }
          break;
        }
        iVar5 = (int)plVar1[8];
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14896f544 FUN_14896f544 body=174 status=ok
// SIG undefined FUN_14896f544(void)

void FUN_14896f544(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b427330;
  param_1[6] = 0;
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    param_1[7] = 0;
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
  if (DAT_14cb8ad08 != 0) {
    FUN_140457ffc(DAT_14cb8ad08 + 0x390,param_1);
  }
  plVar3 = (longlong *)param_1[7];
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
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014896f5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14896f5f2 FUN_14896f5f2 body=143 status=ok
// SIG undefined FUN_14896f5f2(void)

void FUN_14896f5f2(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8ad08 != 0) {
    lVar1 = DAT_14cb8ad08 + 0x390;
    local_39 = 1;
    local_38 = FUN_14896f682;
    local_30 = 0;
    FUN_14897b3ac(local_28,param_1);
    FUN_1448b6402(lVar1,&local_38,local_28);
    FUN_1449db362(local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896f682 FUN_14896f682 body=58 status=ok
// SIG undefined FUN_14896f682(void)

void FUN_14896f682(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (((param_2 != '\0') || (param_1[3] != lVar1)) &&
     (param_1[3] = lVar1, (char)param_1[5] == '\x01')) {
    FUN_14896f700(param_1);
    return;
  }
  return;
}



// FUNCTION 14896f6bc FUN_14896f6bc body=68 status=ok
// SIG undefined FUN_14896f6bc(void)

void FUN_14896f6bc(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[5] == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    (**(code **)(*param_1 + 0x10))();
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    if ((param_1[3] != lVar1) && (param_1[3] = lVar1, (char)param_1[5] == '\x01')) {
      FUN_14896f700(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14896f700 FUN_14896f700 body=316 status=ok
// SIG undefined FUN_14896f700(void)

void FUN_14896f700(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x29) == '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x20);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      plVar2 = *(longlong **)(param_1 + 0x38);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x18) != 0) {
        uVar5 = FUN_14050fd64();
        local_38 = 0;
        FUN_14088df30(uVar5,&local_30,*(undefined8 *)(param_1 + 0x18),0);
        plVar2 = local_28;
        if ((undefined8 *)(param_1 + 0x30) != &local_30) {
          *(undefined8 *)(param_1 + 0x30) = local_30;
          local_30 = 0;
          plVar3 = *(longlong **)(param_1 + 0x38);
          if (local_28 != plVar3) {
            local_28 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x38) = plVar2;
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
          }
        }
        plVar2 = local_28;
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
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896f868 FUN_14896f868 body=46 status=ok
// SIG undefined FUN_14896f868(void)

void FUN_14896f868(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if ((plVar1 != (longlong *)0x0) && ((char)plVar1[5] != '\0')) {
    *(undefined1 *)(plVar1 + 5) = 0;
    (**(code **)(*plVar1 + 0x18))();
  }
  thunk_FUN_1412d7b64(param_1);
  return;
}



// FUNCTION 14896f896 FUN_14896f896 body=523 status=ok
// SIG undefined FUN_14896f896(void)

longlong * FUN_14896f896(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b428aa0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *(undefined4 *)((longlong)plVar6 + 0x44) = 0xffffffff;
  plVar6[9] = 0;
  plVar6[10] = 0;
  *(undefined4 *)(plVar6 + 0xb) = 2;
  *(undefined1 *)(plVar6 + 0xc) = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b24d3f0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar3 = *(longlong **)(param_1 + 0x50);
  local_50 = 0;
  FUN_14485c47a(&local_50,*(undefined8 *)(param_3 + 8));
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  plVar5 = *(longlong **)(param_1 + 0x58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_60 = uVar4;
  local_58 = plVar5;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_48,&local_60,&local_50);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)plVar6[0xe];
  plVar6[0xd] = local_48;
  plVar6[0xe] = (longlong)local_40;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_14896f5f2(local_48);
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14896faa2 FUN_14896faa2 body=147 status=ok
// SIG undefined FUN_14896faa2(void)

undefined8 FUN_14896faa2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  FUN_14896fb38(param_2,&local_38);
  FUN_14896f46c(local_38,param_1,&local_28);
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
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896fb38 FUN_14896fb38 body=144 status=ok
// SIG undefined FUN_14896fb38(void)

undefined8 * FUN_14896fb38(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
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
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896fbcc FUN_14896fbcc body=231 status=ok
// SIG undefined FUN_14896fbcc(void)

longlong *
FUN_14896fbcc(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14897b89d(&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14897ba3a(&local_30,plVar1);
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
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896fcb6 FUN_14896fcb6 body=132 status=ok
// SIG undefined FUN_14896fcb6(void)

undefined8 * FUN_14896fcb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14896fd3a(&DAT_14cb8ac60);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b256de0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  return puVar1;
}



// FUNCTION 14896fd3a FUN_14896fd3a body=84 status=ok
// SIG undefined FUN_14896fd3a(void)

void FUN_14896fd3a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xd00,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0xd;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14896fd8e FUN_14896fd8e body=44 status=ok
// SIG undefined FUN_14896fd8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14896fd8e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8ac6c = _DAT_14cb8ac6c + -1;
  *param_1 = DAT_14cb8ac60;
  DAT_14cb8ac60 = param_1;
  return;
}



// FUNCTION 14896fdba FUN_14896fdba body=126 status=ok
// SIG undefined FUN_14896fdba(void)

void FUN_14896fdba(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b256de0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 14896fe38 FUN_14896fe38 body=22 status=ok
// SIG undefined FUN_14896fe38(void)

undefined8 FUN_14896fe38(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb8ad08;
  if (DAT_14cb8ad08 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8ad08 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8ad08 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8ad08[0x3a] <= *(int *)((longlong)DAT_14cb8ad08 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb8ad08 + 0x300))(DAT_14cb8ad08);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14896fe4e FUN_14896fe4e body=385 status=ok
// SIG undefined FUN_14896fe4e(void)

longlong FUN_14896fe4e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14155b440(param_4);
  if (lVar4 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (lVar7 == 0) {
      uVar5 = FUN_145cdcf34();
      lVar7 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x18) = lVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 != 0) {
LAB_14896fe9d:
      FUN_143e283b4(lVar4,&local_80,lVar6);
      if (local_80 == 0) {
        *(undefined2 *)(param_2 + 0x18) = 0;
        *(undefined1 *)(param_2 + 0x20) = 0;
      }
      else {
        FUN_14896f46c(local_80,local_70,param_1 + 8);
        FUN_1447c3578(local_70,param_2,param_4);
        FUN_144a2da94(local_70);
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_78 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
          }
        }
      }
      goto LAB_14896ff56;
    }
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x10));
          *(longlong *)(param_1 + 0x20) = lVar6;
          if (lVar6 != 0) goto LAB_14896fe9d;
          goto LAB_14896ff4c;
        }
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
LAB_14896ff4c:
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_14896ff56:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897000a FUN_14897000a body=174 status=ok
// SIG undefined FUN_14897000a(void)

void FUN_14897000a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_148970618();
  lVar2 = FUN_14870ca10();
  if (lVar2 != 0) {
    uVar3 = FUN_141715768(lVar2,*(undefined8 *)(param_2 + 0x20),0);
    if (uVar3 != 0xffffffffffffffff && lVar1 != 0) {
      local_2c = (undefined4)uVar3;
      uVar4 = FUN_14897c2f6(lVar1 + 0x38,uVar3 & 0xffffffff);
      FUN_14053c012(uVar4,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_143e2f022(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489700c6 FUN_1489700c6 body=116 status=ok
// SIG undefined FUN_1489700c6(void)

undefined4 FUN_1489700c6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_148970618();
  lVar3 = FUN_14870ca10();
  if (lVar3 != 0) {
    lVar3 = FUN_141715768(lVar3,*(undefined8 *)(param_2 + 0x20),0);
    if (lVar3 != -1 && lVar1 != 0) {
      FUN_14897013a((int)lVar3,lVar1,param_3);
      return 1;
    }
  }
  uVar2 = FUN_143e2f026(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 14897013a FUN_14897013a body=248 status=ok
// SIG undefined FUN_14897013a(void)

void FUN_14897013a(uint param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1403ae288(param_2 + 0x18);
  if ((cVar2 != '\0') && (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x6c))) {
    lVar4 = param_2 + 0x70;
    if (*(longlong *)(param_2 + 0x78) != 0) {
      lVar4 = *(longlong *)(param_2 + 0x78);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_2 + 0x80) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_2 + 0x38);
      do {
        lVar1 = lVar4 + (longlong)iVar3 * 0x20;
        if (*(uint *)(lVar4 + (longlong)iVar3 * 0x20) == param_1) {
          lVar4 = lVar1 + 8;
          if (lVar4 != 0 && lVar1 != 0) {
            local_48 = *param_3;
            local_40 = param_3[1];
            FUN_140805e68(lVar4,&local_48,1);
            FUN_144a7b126(lVar4,&local_31,1);
            if (*(int *)(lVar1 + 0x10) < 1) {
              FUN_14897c860((longlong *)(param_2 + 0x38),param_1);
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148970234 FUN_148970234 body=123 status=ok
// SIG undefined FUN_148970234(void)

undefined4 FUN_148970234(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar3 = 0x10;
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3) == param_2) {
        lVar2 = *(longlong *)(param_1 + 0x68) - lVar2;
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = lVar2 + 0x18;
        cVar1 = FUN_1403ae288(lVar2);
        if (cVar1 == '\0') {
          return 0;
        }
        lVar2 = FUN_140280ec4(lVar2);
        return *(undefined4 *)(lVar2 + 200);
      }
      lVar2 = lVar2 + -0x90;
      lVar3 = lVar3 + 0x90;
    } while (-lVar2 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return 0;
}



// FUNCTION 1489702b0 FUN_1489702b0 body=113 status=ok
// SIG undefined FUN_1489702b0(void)

undefined8 FUN_1489702b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar4) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x68) - lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = lVar3 + 0x18;
        cVar1 = FUN_1403ae288(lVar3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = FUN_140280ec4(lVar3);
        uVar2 = FUN_143d46e84(uVar2);
        return uVar2;
      }
      lVar3 = lVar3 + -0x90;
      lVar4 = lVar4 + 0x90;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return 0;
}



// FUNCTION 148970322 FUN_148970322 body=155 status=ok
// SIG undefined FUN_148970322(void)

float FUN_148970322(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar3 = 0x10;
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3) == param_2) {
        lVar2 = *(longlong *)(param_1 + 0x68) - lVar2;
        if (lVar2 == 0) {
          return 0.0;
        }
        lVar2 = lVar2 + 0x18;
        cVar1 = FUN_1403ae288(lVar2);
        if (cVar1 == '\0') {
          return 0.0;
        }
        lVar2 = FUN_140280ec4(lVar2);
        fVar4 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
        if ((fVar4 == 0.0) && (!NAN(fVar4))) {
          return 0.0;
        }
        return (*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar4;
      }
      lVar2 = lVar2 + -0x90;
      lVar3 = lVar3 + 0x90;
    } while (-lVar2 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return 0.0;
}



// FUNCTION 1489703be FUN_1489703be body=142 status=ok
// SIG undefined FUN_1489703be(void)

void FUN_1489703be(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar4) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x68) - lVar3;
        if (lVar3 == 0) {
          return;
        }
        lVar3 = lVar3 + 0x18;
        cVar1 = FUN_1403ae288(lVar3);
        if (cVar1 == '\0') {
          return;
        }
        uVar2 = thunk_FUN_14008e0ae(lVar3);
        uVar2 = FUN_14008e0a4(uVar2);
        FUN_1409d461e(uVar2,param_3,1);
        return;
      }
      lVar3 = lVar3 + -0x90;
      lVar4 = lVar4 + 0x90;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return;
}



// FUNCTION 14897044c FUN_14897044c body=139 status=ok
// SIG undefined FUN_14897044c(void)

void FUN_14897044c(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar4) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x68) - lVar3;
        if (lVar3 == 0) {
          return;
        }
        lVar3 = lVar3 + 0x18;
        cVar1 = FUN_1403ae288(lVar3);
        if (cVar1 == '\0') {
          return;
        }
        uVar2 = thunk_FUN_14008e0ae(lVar3);
        uVar2 = FUN_14008e0a4(uVar2);
        FUN_14008e202(uVar2,param_3);
        return;
      }
      lVar3 = lVar3 + -0x90;
      lVar4 = lVar4 + 0x90;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return;
}



// FUNCTION 1489704d8 FUN_1489704d8 body=160 status=ok
// SIG undefined FUN_1489704d8(void)

void FUN_1489704d8(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar4) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x68) - lVar3;
        if (lVar3 == 0) {
          return;
        }
        lVar3 = lVar3 + 0x18;
        cVar1 = FUN_1403ae288(lVar3);
        if (cVar1 == '\0') {
          return;
        }
        uVar2 = thunk_FUN_14008e0ae(lVar3);
        uVar2 = FUN_14008e0a4(uVar2);
        FUN_1414daa56(uVar2,param_3,param_4);
        return;
      }
      lVar3 = lVar3 + -0x90;
      lVar4 = lVar4 + 0x90;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return;
}



// FUNCTION 148970578 FUN_148970578 body=160 status=ok
// SIG undefined FUN_148970578(void)

void FUN_148970578(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar4) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x68) - lVar3;
        if (lVar3 == 0) {
          return;
        }
        lVar3 = lVar3 + 0x18;
        cVar1 = FUN_1403ae288(lVar3);
        if (cVar1 == '\0') {
          return;
        }
        uVar2 = thunk_FUN_14008e0ae(lVar3);
        uVar2 = FUN_14008e0a4(uVar2);
        FUN_14654e92a(uVar2,param_3,param_4);
        return;
      }
      lVar3 = lVar3 + -0x90;
      lVar4 = lVar4 + 0x90;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x70) * 0x90);
  }
  return;
}



// FUNCTION 148970618 FUN_148970618 body=121 status=ok
// SIG undefined FUN_148970618(void)

int * FUN_148970618(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    piVar1 = *(int **)(param_1 + 0x68);
    lVar2 = (longlong)*(int *)(param_1 + 0x70) * 0x90;
    do {
      if ((((*(int *)(param_1 + 0x14) == param_2[3] &&
             (*(int *)(param_1 + 0x10) == param_2[2] &&
             (*(int *)(param_1 + 0xc) == param_2[1] && *(int *)(param_1 + 8) == *param_2))) &&
           (*piVar1 == param_2[4])) && (piVar1[1] == param_2[5])) &&
         ((piVar1[2] == param_2[6] && (piVar1[3] == param_2[7])))) {
        return piVar1;
      }
      piVar1 = piVar1 + 0x24;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return (int *)0x0;
}



// FUNCTION 148970692 FUN_148970692 body=93 status=ok
// SIG undefined FUN_148970692(void)

void FUN_148970692(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x88 + lVar3) == '\x01') {
        FUN_14654ed90(lVar2 + 0x18 + lVar3);
      }
      lVar3 = lVar3 + 0x90;
    } while ((longlong)iVar1 * 0x90 != lVar3);
  }
  thunk_FUN_1412d7b64(param_1);
  return;
}



// FUNCTION 1489706f0 FUN_1489706f0 body=592 status=ok
// SIG undefined FUN_1489706f0(void)

void FUN_1489706f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x68);
    lVar7 = (longlong)*(int *)(param_1 + 0x70) * 0x90 + lVar9;
    local_a0 = lVar7;
    do {
      lVar1 = lVar9 + 0x18;
      cVar4 = FUN_1403ae288(lVar1);
      if (cVar4 != '\0') {
        lVar2 = lVar9 + 0x48;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar2;
        if (*(int *)(lVar9 + 0x60) == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar10 = *(int *)(lVar9 + 0x60);
        }
        plVar3 = (longlong *)(lVar9 + 0x38);
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar6 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar5 = local_78._4_4_;
        local_90 = plVar3;
        if ((local_78._4_4_ != iVar10) || (lVar7 = local_a0, local_78 = uVar6, uStack_60 != lVar2))
        {
          do {
            local_78 = uVar6;
            switch(*(undefined4 *)(*local_90 + (longlong)iVar5 * 0x20)) {
            case 0:
              uVar6 = thunk_FUN_14008e0ae(lVar1);
              lVar7 = FUN_14008e0a4(uVar6);
              lVar7 = lVar7 + 0x168;
              puVar8 = &LAB_148970942;
              break;
            case 1:
              uVar6 = thunk_FUN_14008e0ae(lVar1);
              lVar7 = FUN_14008e0a4(uVar6);
              lVar7 = lVar7 + 0x180;
              puVar8 = &LAB_14897094a;
              break;
            case 2:
              uVar6 = thunk_FUN_14008e0ae(lVar1);
              lVar7 = FUN_14008e0a4(uVar6);
              lVar7 = lVar7 + 0x198;
              puVar8 = &LAB_148970956;
              break;
            case 3:
              uVar6 = thunk_FUN_14008e0ae(lVar1);
              lVar7 = FUN_14008e0a4(uVar6);
              lVar7 = lVar7 + 0x1b0;
              puVar8 = &LAB_148970962;
              break;
            default:
              goto switchD_1489707e7_default;
            }
            FUN_14897bdde(&local_68,local_a8,puVar8);
            FUN_14036a282(lVar7,local_98,&local_68);
            FUN_1449db362(&local_68);
switchD_1489707e7_default:
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            lVar7 = local_a0;
            iVar5 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_90 != plVar3 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar10));
        }
      }
      lVar9 = lVar9 + 0x90;
    } while (lVar9 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14897096e FUN_14897096e body=387 status=ok
// SIG undefined FUN_14897096e(void)

void FUN_14897096e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x68);
    lVar7 = (longlong)*(int *)(param_1 + 0x70) * 0x90 + lVar9;
    local_98 = lVar7;
    do {
      cVar3 = FUN_1403ae288(lVar9 + 0x18);
      if (cVar3 != '\0') {
        lVar1 = lVar9 + 0x48;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar1;
        if (*(int *)(lVar9 + 0x60) == 0) {
          iVar8 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar8 = *(int *)(lVar9 + 0x60);
        }
        plVar2 = (longlong *)(lVar9 + 0x38);
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar6 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar4 = local_78._4_4_;
        local_90 = plVar2;
        if ((local_78._4_4_ != iVar8) || (lVar7 = local_98, local_78 = uVar6, uStack_60 != lVar1)) {
          do {
            local_78 = uVar6;
            uVar5 = (ulonglong)*(uint *)(*local_90 + (longlong)iVar4 * 0x20);
            if (uVar5 < 4) {
              uVar6 = thunk_FUN_14008e0ae(lVar9 + 0x18);
              lVar7 = FUN_14008e0a4(uVar6);
              FUN_140457ffc(lVar7 + uVar5 * 0x18 + 0x168,param_1);
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            lVar7 = local_98;
            iVar4 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_90 != plVar2 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar8));
        }
      }
      lVar9 = lVar9 + 0x90;
    } while (lVar9 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148970af2 FUN_148970af2 body=214 status=ok
// SIG undefined FUN_148970af2(void)

void FUN_148970af2(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  cVar1 = FUN_1403ae288(param_2);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = thunk_FUN_14008e0ae(param_2);
  lVar3 = FUN_14008e0a4(uVar2);
  if ((longlong)*(int *)(param_1 + 0x70) == 0) {
    return;
  }
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
  lVar6 = 0;
  while (*plVar4 != *(longlong *)(lVar3 + 0x10)) {
    plVar4 = plVar4 + 0x12;
    lVar6 = lVar6 + -0x90;
    if (-lVar6 == (longlong)*(int *)(param_1 + 0x70) * 0x90) {
      return;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x68) - lVar6;
  if (lVar6 == 0) {
    return;
  }
  if ((int)plVar4[6] == *(int *)((longlong)plVar4 + 0x5c)) {
    return;
  }
  lVar3 = lVar6 + 0x70;
  if (plVar4[0xd] != 0) {
    lVar3 = plVar4[0xd];
  }
  iVar5 = *(int *)(lVar3 + (ulonglong)((int)plVar4[0xe] - 1U & param_3) * 4);
  if (iVar5 == -1) {
    return;
  }
  do {
    lVar3 = plVar4[5] + (longlong)iVar5 * 0x20;
    if (*(uint *)(plVar4[5] + (longlong)iVar5 * 0x20) == param_3) {
      if (lVar3 + 8 == 0 || lVar3 == 0) {
        return;
      }
      FUN_1447cd2ec(lVar3 + 8,0);
      return;
    }
    iVar5 = *(int *)(lVar3 + 0x18);
  } while (iVar5 != -1);
  return;
}



// FUNCTION 148970bc8 FUN_148970bc8 body=63 status=ok
// SIG undefined FUN_148970bc8(void)

longlong FUN_148970bc8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14897c9ac(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  FUN_14897c967(lVar2);
  return lVar2;
}



// FUNCTION 148970c08 FUN_148970c08 body=205 status=ok
// SIG undefined FUN_148970c08(void)

undefined4 FUN_148970c08(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148970cd6(param_1,&local_70);
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_58);
  }
  uVar4 = FUN_148970234(local_70,uVar3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148970cd6 FUN_148970cd6 body=144 status=ok
// SIG undefined FUN_148970cd6(void)

undefined8 * FUN_148970cd6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
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
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148970d6a FUN_148970d6a body=205 status=ok
// SIG undefined FUN_148970d6a(void)

undefined4 FUN_148970d6a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148970cd6(param_1,&local_70);
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_58);
  }
  uVar4 = FUN_148970322(local_70,uVar3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148970e38 FUN_148970e38 body=205 status=ok
// SIG undefined FUN_148970e38(void)

undefined4 FUN_148970e38(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148970cd6(param_1,&local_70);
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_58);
  }
  uVar4 = FUN_1489702b0(local_70,uVar3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148970f06 FUN_148970f06 body=205 status=ok
// SIG undefined FUN_148970f06(void)

void FUN_148970f06(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148970cd6(param_1,&local_70);
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_58);
  }
  FUN_1489703be(local_70,uVar3,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148970fd4 FUN_148970fd4 body=205 status=ok
// SIG undefined FUN_148970fd4(void)

void FUN_148970fd4(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148970cd6(param_1,&local_70);
  local_60 = *param_2;
  FUN_1446dcdd4(local_58);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_58);
  }
  FUN_14897044c(local_70,uVar3,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489710a2 FUN_1489710a2 body=231 status=ok
// SIG undefined FUN_1489710a2(void)

void FUN_1489710a2(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148970cd6(param_1,&local_80);
  local_70 = *param_2;
  FUN_1446dcdd4(local_68);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_68);
  }
  FUN_1489704d8(local_80,uVar3,param_3,param_4);
  if (local_50 != 0) {
    FUN_1400020a8();
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897118a FUN_14897118a body=231 status=ok
// SIG undefined FUN_14897118a(void)

void FUN_14897118a(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148970cd6(param_1,&local_80);
  local_70 = *param_2;
  FUN_1446dcdd4(local_68);
  if (DAT_14cb7d760 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb7d760,local_68);
  }
  FUN_148970578(local_80,uVar3,param_3,param_4);
  if (local_50 != 0) {
    FUN_1400020a8();
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148971272 FUN_148971272 body=63 status=ok
// SIG undefined FUN_148971272(void)

longlong FUN_148971272(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14897ca60(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_14897ca40(lVar2);
  return lVar2;
}



// FUNCTION 1489712b2 FUN_1489712b2 body=158 status=ok
// SIG undefined FUN_1489712b2(void)

void FUN_1489712b2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140df5408(param_1,param_2 + 0x10);
  if (lVar1 != 0) {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_140805e68(lVar1 + 0x58,&local_40,1);
    FUN_144a7b126(lVar1 + 0x58,&local_29,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_143e2f026(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897135e FUN_14897135e body=841 status=ok
// SIG undefined FUN_14897135e(void)

undefined8 FUN_14897135e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0;
  char local_b8;
  wchar_t local_b0 [50];
  wchar_t local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = FUN_1470cc76c();
  local_d0 = local_b0;
  local_b8 = '\0';
  local_c0 = local_4c;
  builtin_wcsncpy(local_b0,L"Gbx Movement: [",0xf);
  local_c8 = local_b0 + 0xf;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar9 = 0;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    bVar6 = false;
    local_f0 = param_1;
    local_e8 = param_2;
    do {
      FUN_1401cfad2(uVar4,&local_e0,*(undefined1 *)(lVar2 + lVar5));
      if (bVar6) {
        if (local_c0 <= local_c8 + 1) {
          FUN_140213274(&local_d0,1);
        }
        *local_c8 = L'+';
        local_c8 = local_c8 + 1;
      }
      iVar7 = local_d8 + -1;
      if (local_d8 == 0) {
        iVar7 = iVar9;
      }
      FUN_1449668a2(&local_d0,local_e0,iVar7);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 1;
      bVar6 = true;
    } while (iVar1 != lVar5);
    iVar9 = 1;
    param_2 = local_e8;
    param_1 = local_f0;
  }
  cVar8 = (char)iVar9;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    FUN_140056680(&local_e0,L"Sprinting");
    if (cVar8 != '\0') {
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L'+';
      local_c8 = local_c8 + 1;
    }
    iVar1 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_d0,local_e0,iVar1);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    cVar8 = '\x01';
  }
  if ((uVar3 & 2) != 0) {
    FUN_140056680(&local_e0,L"Sliding");
    if (cVar8 != '\0') {
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L'+';
      local_c8 = local_c8 + 1;
    }
    iVar1 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_d0,local_e0,iVar1);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    cVar8 = '\x01';
  }
  if ((uVar3 & 4) != 0) {
    FUN_140056680(&local_e0,L"Crouching");
    if (cVar8 != '\0') {
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L'+';
      local_c8 = local_c8 + 1;
    }
    iVar1 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_d0,local_e0,iVar1);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_c0 <= local_c8 + 1) {
    FUN_140213274(&local_d0,1);
  }
  *local_c8 = L']';
  local_c8[1] = L'\0';
  local_c8 = local_c8 + 1;
  FUN_140056680(param_2,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489716a8 FUN_1489716a8 body=65 status=ok
// SIG undefined FUN_1489716a8(void)

undefined8 FUN_1489716a8(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  if ((ulonglong)*(byte *)(param_1 + 0x10) < 4) {
    pwVar1 = (wchar_t *)
             (&DAT_14b42aa28 + *(int *)(&DAT_14b42aa28 + (ulonglong)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    pwVar1 = L"INVALID";
  }
  FUN_140002266(param_2,L"Character Possession: %s",pwVar1);
  return param_2;
}



// FUNCTION 1489716ea FUN_1489716ea body=400 status=ok
// SIG undefined FUN_1489716ea(void)

longlong * FUN_1489716ea(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar6 != 0) {
    lVar7 = FUN_144a78b9e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30),
       *(longlong *)(lVar3 + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
      cVar5 = FUN_148971880(CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(param_1 + 0x10)),
                            lVar6);
      plVar8 = (longlong *)FUN_14001cc68(0x48,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14b428e10;
      plVar1 = plVar8 + 2;
      plVar8[3] = 0;
      plVar8[4] = 0;
      *(undefined8 *)((longlong)plVar8 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x2c) = 0;
      *(char *)(plVar8 + 7) = cVar5 * '\x02';
      plVar8[2] = (longlong)&PTR_FUN_14b428e30;
      *(undefined1 *)(plVar8 + 8) = 0;
      local_78 = plVar1;
      local_70 = plVar8;
      FUN_14897d032(&local_78,plVar1);
      local_68 = FUN_1489718ee;
      local_60 = 0;
      FUN_14897d0da(local_58,&local_78);
      FUN_140cd3d18(lVar6 + 0x1200,&local_68,local_58);
      FUN_1449db362(local_58);
      plVar4 = local_70;
      *(undefined1 *)(plVar8 + 8) = *(undefined1 *)(param_1 + 0x10);
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148971880 FUN_148971880 body=109 status=ok
// SIG undefined FUN_148971880(void)

ulonglong FUN_148971880(undefined1 param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  switch(param_1) {
  case 0:
    uVar2 = (**(code **)(*param_2 + 0x688))(param_2);
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0001489718e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_2 + 0x688))(param_2);
    return uVar2;
  case 2:
    uVar2 = FUN_144a783a6(param_2);
    return uVar2;
  case 3:
    cVar1 = FUN_1449ce97a(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = FUN_144a783a6(param_2);
    break;
  default:
    return 0;
  }
  return uVar2 ^ 1;
}



// FUNCTION 1489718ee FUN_1489718ee body=31 status=ok
// SIG undefined FUN_1489718ee(void)

void FUN_1489718ee(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_148971880(*(undefined1 *)(param_1 + 0x30));
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 14897190e FUN_14897190e body=32 status=ok
// SIG undefined FUN_14897190e(void)

undefined8 FUN_14897190e(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Is Cinematic active");
  return param_2;
}



// FUNCTION 14897192e FUN_14897192e body=419 status=ok
// SIG undefined FUN_14897192e(void)

longlong * FUN_14897192e(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = (**(code **)(*(longlong *)*param_3 + 0x10))();
  FUN_14154b34a(&local_78,uVar6);
  lVar4 = local_78;
  if (local_78 != 0) {
    cVar5 = FUN_143cd99ec(local_78);
    plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b428ec0;
    plVar1 = plVar7 + 2;
    plVar7[3] = 0;
    plVar7[4] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
    *(char *)(plVar7 + 7) = cVar5 * '\x02';
    plVar7[2] = (longlong)&PTR_FUN_14b428ee0;
    *(undefined1 *)(plVar7 + 8) = 0;
    local_88 = plVar1;
    local_80 = plVar7;
    FUN_14897d58e(&local_88,plVar1);
    local_68 = &LAB_148971ad2;
    local_60 = 0;
    FUN_14897d636(local_58,&local_88);
    FUN_1459850be(local_78 + 0x10,&local_68,local_58);
    FUN_1449db362(local_58);
    plVar3 = local_80;
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
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
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148971add FUN_148971add body=215 status=ok
// SIG undefined FUN_148971add(void)

uint FUN_148971add(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  cVar1 = FUN_144a43716();
  uVar6 = 0;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x20);
    uVar6 = 0xfffffffe;
    if (bVar2 < 3) {
      if (bVar2 == 1) {
        bVar2 = FUN_144a7fca4(param_1);
        bVar3 = FUN_144a7fca4(param_2);
        uVar6 = -(uint)(~bVar2 & bVar3) | 1;
      }
      else if (bVar2 == 2) {
        iVar4 = FUN_1405d5f74(param_1);
        iVar5 = FUN_1405d5f74(param_2);
        uVar6 = (uint)(iVar5 <= iVar4) * 2 - 1;
      }
    }
    else {
      if (bVar2 == 3) {
        fVar9 = (float)FUN_144a7ecd0(param_1);
        fVar10 = (float)FUN_144a7ecd0(param_2);
        bVar8 = fVar10 == fVar9;
        bVar7 = fVar10 < fVar9;
      }
      else {
        if (bVar2 != 0x15) {
          return 0xfffffffe;
        }
        dVar11 = (double)FUN_140ee352e(param_1);
        dVar12 = (double)FUN_140ee352e(param_2);
        bVar8 = dVar12 == dVar11;
        bVar7 = dVar12 < dVar11;
      }
      uVar6 = (uint)(bVar7 || bVar8) * 2 - 1;
    }
  }
  return uVar6;
}



// FUNCTION 148971bb4 FUN_148971bb4 body=345 status=ok
// SIG undefined FUN_148971bb4(void)

undefined8 FUN_148971bb4(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_14872541c();
  FUN_1406f1d90(uVar1,&local_58,*(undefined1 *)(param_1 + 0x40));
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_40;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  FUN_148971d0e(param_1 + 0x48,&local_58);
  local_78 = (longlong *)&DAT_149dfb77a;
  if (local_50 != 0) {
    local_78 = local_58;
  }
  puVar5 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FUN_148971d0e(param_1,&local_68);
  puVar4 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  FUN_140002266(param_2,L"%s %s %s",puVar4,puVar5);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148971d0e FUN_148971d0e body=720 status=ok
// SIG undefined FUN_148971d0e(void)

undefined8 FUN_148971d0e(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  int local_90;
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar2 = FUN_14596e031();
  FUN_1401cfad2(uVar2,&local_a8,*(undefined1 *)(param_1 + 0x38));
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
    local_98 = 0;
    local_70 = 0;
    FUN_1447c3578(param_1,local_68);
    FUN_141742dba(local_68,&local_b8);
    iVar7 = (int)uStack_b0;
    puVar4 = local_b8;
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
LAB_148971dbb:
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar8 = local_68;
      if (0x18 < local_50) {
        ppppuVar8 = (undefined8 ****)local_68[0];
      }
      (*pcVar1)(ppppuVar8);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(&local_98);
    break;
  case 1:
    lVar3 = FUN_14108b142(param_1);
    if (lVar3 != 0) {
      local_98 = 0;
      local_70 = 0;
      FUN_1447c3578(lVar3 + 0x30,local_68);
      FUN_141742dba(local_68,&local_c8);
      puVar4 = local_c8;
      if (local_c0 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      local_b8 = *(undefined2 **)(param_1 + 0x10);
      if (local_b8 == (undefined2 *)0x0) {
        local_d8 = (undefined2 *)0x0;
        uStack_d0 = 0;
LAB_148971f7b:
        puVar6 = &DAT_149dfb77a;
      }
      else {
        FUN_1400021e4(&local_b8,&local_d8);
        puVar6 = local_d8;
        if ((int)uStack_d0 == 0) goto LAB_148971f7b;
      }
      FUN_140002266(&local_b8,L"%s.%s",puVar6,puVar4);
      iVar7 = (int)uStack_b0;
      puVar4 = local_b8;
      local_b8 = (undefined2 *)0x0;
      uStack_b0 = 0;
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148971dbb;
    }
    local_68[0] = *(undefined8 ****)(param_1 + 0x10);
    if ((undefined8 ****)local_68[0] != (undefined8 ****)0x0) {
      FUN_1400021e4(local_68,&local_98);
      goto LAB_148971e34;
    }
    iVar7 = 0;
    puVar4 = (undefined2 *)0x0;
    break;
  case 2:
    FUN_1462464fe(param_1,&local_98);
    goto LAB_148971e34;
  case 3:
    FUN_140b126e4(param_1,&local_98);
LAB_148971e34:
    puVar4 = (undefined2 *)CONCAT71(uStack_97,local_98);
    iVar7 = local_90;
    break;
  default:
    puVar4 = (undefined2 *)0x0;
    puVar6 = &DAT_149dfb77a;
    goto LAB_148971e49;
  }
  puVar6 = &DAT_149dfb77a;
  if (iVar7 != 0) {
    puVar6 = puVar4;
  }
LAB_148971e49:
  puVar5 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar5 = local_a8;
  }
  FUN_140002266(param_2,L"[%s].%s",puVar5,puVar6);
  if (puVar4 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148971fe0 FUN_148971fe0 body=24 status=ok
// SIG undefined FUN_148971fe0(void)

undefined1 FUN_148971fe0(void)

{
  undefined1 *in_R9;
  
  FUN_145c323dc();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 148971ff8 FUN_148971ff8 body=71 status=ok
// SIG undefined FUN_148971ff8(void)

undefined8 FUN_148971ff8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x38) == *(char *)(param_2 + 0x38)) {
    switch(*(char *)(param_1 + 0x38)) {
    case '\0':
      uVar1 = FUN_144a43716(param_1 + 8,param_2 + 8);
      return uVar1;
    case '\x01':
      uVar1 = FUN_144a7afa6(param_1 + 8,param_2 + 8);
      return uVar1;
    case '\x02':
      uVar1 = FUN_1462b10f2();
      return uVar1;
    case '\x03':
      uVar1 = FUN_14493b798();
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148972050 FUN_148972050 body=956 status=ok
// SIG undefined FUN_148972050(void)

ulonglong FUN_148972050(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  short *psVar1;
  wchar_t *pwVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  wchar_t *_Str;
  bool bVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b0 [2];
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_2 == 0) {
    uVar11 = 0;
    goto LAB_1489721c8;
  }
  uVar11 = param_3 & 0xffffffff;
  FUN_140056680(&local_a0,&DAT_149dfb77a);
  puVar6 = (ushort *)FUN_1401e9420(*param_2,&local_a0,1);
  if (puVar6 == (ushort *)0x0) {
LAB_1489721b7:
    uVar11 = 0;
    goto LAB_1489721b9;
  }
  lVar7 = FUN_146506e4e();
  local_b0[0] = *(longlong *)(lVar7 + 0x18);
  FUN_1400021e4(local_b0,&local_88);
  if (local_98 == (int)uStack_80) {
    bVar12 = true;
    if (1 < local_98) {
      iVar4 = FUN_144a80a00(local_a0,local_88);
      bVar12 = iVar4 == 0;
    }
  }
  else {
    bVar12 = (int)uStack_80 + local_98 == 1;
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar12) goto LAB_1489721b7;
  *param_2 = (longlong)puVar6;
  if (*puVar6 == 0x28) {
    puVar6 = puVar6 + 1;
    *param_2 = (longlong)puVar6;
  }
  iVar4 = -1;
  puVar3 = puVar6;
  do {
    puVar10 = puVar3;
    iVar4 = iVar4 + 1;
    if (0x3f < *puVar10) break;
    puVar3 = puVar10 + 1;
  } while ((1L << ((byte)*puVar10 & 0x3f) & 0x3ff000100000000U) != 0);
  FUN_14006620a(&local_88,puVar6,iVar4);
  pwVar2 = local_88;
  if (*puVar10 != 0x2c) {
LAB_1489721a6:
    uVar11 = 0;
    goto LAB_1489721a8;
  }
  *param_2 = (longlong)(puVar10 + 1);
  _Str = L"";
  if ((int)uStack_80 != 0) {
    _Str = local_88;
  }
  uVar8 = _wtoi64(_Str);
  lVar7 = FUN_14596e031();
  if (*(uint *)(lVar7 + 0x48) < (uint)uVar8) goto LAB_1489721a6;
  switch(uVar8 & 0xff) {
  case 0:
    local_88 = (wchar_t *)0x0;
    local_68 = local_68 & 0xffffffffffff0000;
    local_60 = 0;
    local_58 = 0;
    local_d8 = param_5;
    uVar5 = FUN_1470ec434(&local_88,param_2,uVar11,param_4);
    uVar11 = (ulonglong)uVar5;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x38)])(param_1);
    FUN_14034cca6(param_1,&local_88);
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_144a2da94(&local_88);
    break;
  case 1:
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    local_d8 = param_5;
    local_d0 = 0;
    uVar5 = FUN_140c98f9a(&local_88,param_2,uVar11,param_4);
    FUN_14897240e(param_1,&local_88);
    lVar7 = local_78;
    goto LAB_1489722d2;
  case 2:
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    local_68 = 0;
    uVar9 = FUN_140cdfcd0();
    lVar7 = FUN_140cdfcd0();
    local_90 = *(undefined8 *)(lVar7 + 0x18);
    FUN_1400021e4(&local_90,local_b0);
    local_d0 = param_5;
    local_d8 = CONCAT44(local_d8._4_4_,(int)param_3);
    local_c0 = 1;
    local_c8 = local_b0;
    lVar7 = FUN_14115911a(uVar9,*param_2,&local_88,param_4);
    *param_2 = lVar7;
    if (local_b0[0] != 0) {
      FUN_1400020a8();
      lVar7 = *param_2;
    }
    uVar11 = CONCAT71((int7)(uVar11 >> 8),lVar7 != 0);
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x38)])(param_1);
    FUN_144a7f96e(param_1,&local_88);
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x1c) = uStack_70._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0x24) = local_68._4_4_;
    *(undefined1 *)(param_1 + 0x38) = 2;
    break;
  case 3:
    FUN_144928b90(&local_88,0);
    local_d8 = param_5;
    uVar5 = FUN_145c8e9e2(&local_88,param_2,uVar11,param_4);
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x38)])(param_1);
    FUN_1400750e6(param_1,&local_88);
    *(undefined1 *)(param_1 + 0x38) = 3;
    lVar7 = CONCAT71(uStack_5f,local_60);
LAB_1489722d2:
    uVar11 = (ulonglong)uVar5;
    if (lVar7 != 0) {
      FUN_1400020a8();
    }
    break;
  default:
    uVar11 = 0;
  }
  psVar1 = (short *)*param_2;
  if ((psVar1 != (short *)0x0) && (*psVar1 == 0x29)) {
    *param_2 = (longlong)(psVar1 + 1);
  }
LAB_1489721a8:
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar2);
  }
LAB_1489721b9:
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_1489721c8:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14897240e FUN_14897240e body=273 status=ok
// SIG undefined FUN_14897240e(void)

void FUN_14897240e(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 7)])();
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = param_2[1];
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 3);
  lVar4 = (longlong)local_40;
  pvVar1 = (void *)param_2[2];
  if (lVar4 == 0) {
    local_3c = 0;
    *param_1 = 0;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar4 * 2);
    pvVar1 = local_48;
    lVar4 = (longlong)local_40;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = local_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
    *(undefined4 *)(param_1 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
    param_1[3] = 0;
    *(int *)(param_1 + 4) = local_40;
    if (lVar4 != 0) {
      FUN_1446dd670(param_1 + 3,local_40,0);
      memcpy((void *)param_1[3],pvVar1,lVar4 * 2);
      goto LAB_1489724ec;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
LAB_1489724ec:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148972520 FUN_148972520 body=805 status=ok
// SIG undefined FUN_148972520(void)

undefined8
FUN_148972520(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,uint param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *pvVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined2 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
    lVar5 = 0;
    if (*(char *)(param_3 + 0x38) == '\0') {
      lVar5 = param_3;
    }
    if (lVar5 == 0 || (param_5 >> 0x13 & 1) != 0) {
      local_88 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
    }
    else {
      FUN_14034cca6(&local_88);
    }
    local_c0 = param_6;
    local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,param_5);
    FUN_140180b6e(param_1,&local_98,&local_88,param_4);
    FUN_144a2da94(&local_88);
    break;
  case 1:
    lVar5 = 0;
    if (*(char *)(param_3 + 0x38) == '\x01') {
      lVar5 = param_3;
    }
    if (lVar5 == 0 || (param_5 >> 0x13 & 1) != 0) {
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
    }
    else {
      local_88 = *(longlong *)(lVar5 + 8);
      uStack_80 = *(undefined8 *)(lVar5 + 0x10);
      local_78 = (void *)0x0;
      uVar2 = *(uint *)(lVar5 + 0x20);
      pvVar6 = *(void **)(lVar5 + 0x18);
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
      if ((longlong)(int)uVar2 == 0) {
        uStack_70 = (ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_78,uVar2,0);
        memcpy(local_78,pvVar6,(longlong)(int)uVar2 * 2);
      }
    }
    local_c0 = param_6;
    local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,param_5);
    FUN_1468fc1fc(param_1 + 8,&local_98,&local_88,param_4);
    pvVar6 = local_78;
    goto LAB_148972758;
  case 2:
    if (*(char *)(param_3 + 0x38) != '\x02') {
      param_3 = 0;
    }
    if ((param_5 & 0x80000) != 0) {
      param_3 = 0;
    }
    uVar4 = FUN_140cdfcd0();
    local_b8 = param_6;
    local_c0 = CONCAT44(local_c0._4_4_,param_5);
    local_b0 = 1;
    local_c8 = (undefined2 *)param_4;
    FUN_1446df618(uVar4,&local_98,param_1,param_3);
    break;
  case 3:
    if (((param_3 == 0) || ((param_5 & 0x80000) != 0)) || (*(char *)(param_3 + 0x38) != '\x03')) {
      FUN_144928b90(&local_88,0);
    }
    else {
      FUN_1400750e6(&local_88,param_3);
    }
    local_c0 = param_6;
    local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,param_5);
    FUN_140bb7c14(param_1,&local_98,&local_88,param_4);
    pvVar6 = (void *)CONCAT71(uStack_5f,local_60);
LAB_148972758:
    if (pvVar6 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar8 = &DAT_149dfb77a;
  if ((int)uStack_90 != 0) {
    puVar8 = local_98;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  lVar5 = FUN_146506e4e();
  local_88 = *(longlong *)(lVar5 + 0x18);
  FUN_1400021e4(&local_88,&local_a8);
  puVar7 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar7 = local_a8;
  }
  local_c8 = puVar8;
  FUN_140002266(&local_88,L"%s(%u,%s)",puVar7,uVar1);
  iVar3 = (int)uStack_80 + -1;
  if ((int)uStack_80 == 0) {
    iVar3 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_88,iVar3);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14897284c FUN_14897284c body=386 status=ok
// SIG undefined FUN_14897284c(void)

longlong * FUN_14897284c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14897295d:
    *puVar5 = &PTR_LAB_14b3e6310;
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
    *puVar5 = &PTR_FUN_14b428fe0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14897295d;
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
    *puVar5 = &PTR_LAB_14b3e6310;
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
    *puVar5 = &PTR_FUN_14b428fe0;
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



// FUNCTION 1489729d4 FUN_1489729d4 body=59 status=ok
// SIG undefined FUN_1489729d4(void)

void FUN_1489729d4(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_14619133c(*(longlong *)(param_1 + 0x30) + 0x10,lVar2);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 148972a10 FUN_148972a10 body=123 status=ok
// SIG undefined FUN_148972a10(void)

undefined8 FUN_148972a10(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148971bb4(param_1 + 0x10,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Comparison: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148972a8c FUN_148972a8c body=462 status=ok
// SIG undefined FUN_148972a8c(void)

undefined8 FUN_148972a8c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_108 [40];
  longlong local_e0;
  int local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 local_b0 [12];
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = local_b0;
  local_b8 = '\0';
  local_c0 = (undefined8 *)local_4c;
  iVar1 = *(int *)(param_1 + 0x18);
  local_d0 = puVar3;
  local_c8 = puVar3;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    bVar4 = false;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        if (bVar4) {
          if (local_c0 <= puVar3 + 1) {
            FUN_140213274(&local_d0,4);
            puVar3 = local_c8;
          }
          *puVar3 = 0x20002600260020;
          puVar3 = puVar3 + 1;
          local_c8 = puVar3;
        }
        if (local_c0 <= (undefined8 *)((longlong)puVar3 + 2)) {
          FUN_140213274(&local_d0,1);
          puVar3 = local_c8;
        }
        *(undefined2 *)puVar3 = 0x28;
        local_c8 = (undefined8 *)((longlong)puVar3 + 2);
        FUN_1489867cc(*(undefined8 *)(lVar2 + lVar6),&local_e0);
        iVar5 = local_d8 + -1;
        if (local_d8 == 0) {
          iVar5 = 0;
        }
        FUN_1449668a2(&local_d0,local_e0,iVar5);
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 <= (undefined8 *)((longlong)local_c8 + 4)) {
          FUN_140213274(&local_d0,2);
        }
        *(undefined4 *)local_c8 = 0x290020;
        puVar3 = (undefined8 *)((longlong)local_c8 + 4);
        bVar4 = true;
        local_c8 = puVar3;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  *(undefined2 *)puVar3 = 0;
  FUN_140056680(param_2,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  if ((local_4c._4_8_ ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148972c5c FUN_148972c5c body=462 status=ok
// SIG undefined FUN_148972c5c(void)

undefined8 FUN_148972c5c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_108 [40];
  longlong local_e0;
  int local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 local_b0 [12];
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = local_b0;
  local_b8 = '\0';
  local_c0 = (undefined8 *)local_4c;
  iVar1 = *(int *)(param_1 + 0x18);
  local_d0 = puVar3;
  local_c8 = puVar3;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    bVar4 = false;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        if (bVar4) {
          if (local_c0 <= puVar3 + 1) {
            FUN_140213274(&local_d0,4);
            puVar3 = local_c8;
          }
          *puVar3 = 0x20007c007c0020;
          puVar3 = puVar3 + 1;
          local_c8 = puVar3;
        }
        if (local_c0 <= (undefined8 *)((longlong)puVar3 + 2)) {
          FUN_140213274(&local_d0,1);
          puVar3 = local_c8;
        }
        *(undefined2 *)puVar3 = 0x28;
        local_c8 = (undefined8 *)((longlong)puVar3 + 2);
        FUN_1489867cc(*(undefined8 *)(lVar2 + lVar6),&local_e0);
        iVar5 = local_d8 + -1;
        if (local_d8 == 0) {
          iVar5 = 0;
        }
        FUN_1449668a2(&local_d0,local_e0,iVar5);
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 <= (undefined8 *)((longlong)local_c8 + 4)) {
          FUN_140213274(&local_d0,2);
        }
        *(undefined4 *)local_c8 = 0x290020;
        puVar3 = (undefined8 *)((longlong)local_c8 + 4);
        bVar4 = true;
        local_c8 = puVar3;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  *(undefined2 *)puVar3 = 0;
  FUN_140056680(param_2,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  if ((local_4c._4_8_ ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148972e2c FUN_148972e2c body=54 status=ok
// SIG undefined FUN_148972e2c(void)

undefined8 FUN_148972e2c(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Disabled";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar1 = L"Enabled";
  }
  FUN_140002266(param_2,L"Constant %s",pwVar1);
  return param_2;
}



// FUNCTION 148972e62 FUN_148972e62 body=51 status=ok
// SIG undefined FUN_148972e62(void)

undefined8 FUN_148972e62(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_140056680(param_2,L"Unknown");
  }
  else {
    FUN_1489867cc(*(longlong *)(param_1 + 0x10),param_2);
  }
  return param_2;
}



// FUNCTION 148972e96 FUN_148972e96 body=169 status=ok
// SIG undefined FUN_148972e96(void)

undefined8 FUN_148972e96(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  char local_88;
  wchar_t local_80 [50];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = local_1c;
  builtin_wcsncpy(local_80,L"Managed Resources: ",0x14);
  local_98 = local_80 + 0x13;
  FUN_140056680(param_2);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148972f40 FUN_148972f40 body=166 status=ok
// SIG undefined FUN_148972f40(void)

undefined8 FUN_148972f40(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  char local_88;
  wchar_t local_80 [50];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = local_1c;
  builtin_wcsncpy(local_80,L"Managed Resources Ex: ",0x17);
  local_98 = local_80 + 0x16;
  FUN_140056680(param_2);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148972fe8 FUN_148972fe8 body=36 status=ok
// SIG undefined FUN_148972fe8(void)

void FUN_148972fe8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14655e9da(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 0x48));
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 14897300c FUN_14897300c body=490 status=ok
// SIG undefined FUN_14897300c(void)

undefined8 FUN_14897300c(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  fVar8 = *(float *)((longlong)param_1 + 0x14);
  if ((char)param_1[3] != '\0') {
    fVar8 = fVar8 / 100.0;
  }
  FUN_140002266(&local_48,&DAT_149e02016,(double)fVar8);
  puVar6 = local_48;
  switch((char)param_1[2]) {
  case '\0':
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x11);
    uVar3 = FUN_14864710f();
    FUN_1406f1d90(uVar3,&local_58,uVar1);
    uVar3 = FUN_1447a1f4a(&local_58);
    FUN_144a787a6(&local_38,uVar3);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    iVar2 = (int)uStack_30;
    goto LAB_148973163;
  case '\x01':
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    pwVar4 = L" > %s";
    break;
  case '\x02':
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    pwVar4 = L" >= %s";
    break;
  case '\x03':
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    pwVar4 = L" < %s";
    break;
  case '\x04':
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    pwVar4 = L" <= %s";
    break;
  default:
    goto switchD_14897307b_default;
  }
  FUN_140002266(&local_58,pwVar4,puVar6);
  local_38 = local_58;
  uStack_30 = CONCAT44(local_4c,local_50);
  iVar2 = local_50;
LAB_148973163:
  plVar5 = local_38;
  if (iVar2 == 0) {
switchD_14897307b_default:
    plVar5 = (longlong *)&DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_58);
  plVar7 = local_58;
  if (local_50 == 0) {
    plVar7 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Resource Pool: %s -> %s",plVar7,plVar5);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489731f8 FUN_1489731f8 body=71 status=ok
// SIG undefined FUN_1489731f8(void)

undefined8 FUN_1489731f8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148973240 FUN_148973240 body=150 status=ok
// SIG undefined FUN_148973240(void)

undefined8 FUN_148973240(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"Disabled";
  if (*(char *)(param_1 + 0x18) != '\0') {
    pwVar1 = L"Enabled";
  }
  FUN_1400021e4(param_1 + 0x10,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"State \'%s\' %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489732e6 FUN_1489732e6 body=123 status=ok
// SIG undefined FUN_1489732e6(void)

undefined8 FUN_1489732e6(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(param_1 + 0x18,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Skill Param [%s] Is Default Value",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148973362 FUN_148973362 body=32 status=ok
// SIG undefined FUN_148973362(void)

void FUN_148973362(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144a8e0e6(param_4 + 8);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 148973382 FUN_148973382 body=230 status=ok
// SIG undefined FUN_148973382(void)

undefined8 FUN_148973382(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pwVar3 = L"Disabled";
  if (*(char *)(param_1 + 0x40) != '\0') {
    pwVar3 = L"Enabled";
  }
  local_48 = *(undefined8 *)(param_1 + 0x28);
  FUN_1400021e4(&local_48,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  local_60 = *(undefined8 *)(param_1 + 0x10);
  FUN_1400021e4(&local_60,&local_58);
  puVar1 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar1 = local_58;
  }
  local_68 = pwVar3;
  FUN_140002266(param_2,L"External Skill: \'%s\' - State \'%s\' %s",puVar1,puVar2);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897346a FUN_14897346a body=158 status=ok
// SIG undefined FUN_14897346a(void)

undefined8 FUN_14897346a(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"Disabled";
  if (*(char *)(param_1 + 0x28) != '\0') {
    pwVar1 = L"Enabled";
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  FUN_1400021e4(&local_38,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"State \'%s\' %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14897350a FUN_14897350a body=158 status=ok
// SIG undefined FUN_14897350a(void)

undefined8 FUN_14897350a(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"Disabled";
  if (*(char *)(param_1 + 0x28) != '\0') {
    pwVar1 = L"Enabled";
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  FUN_1400021e4(&local_38,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"State \'%s\' %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489735aa FUN_1489735aa body=159 status=ok
// SIG undefined FUN_1489735aa(void)

undefined8 FUN_1489735aa(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_1489877b3(*(undefined1 *)(param_1 + 0x28));
  local_40 = *(undefined8 *)(param_1 + 0x10);
  FUN_1400021e4(&local_40,&local_38);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_48 = uVar1;
  FUN_140002266(param_2,L"Register \'%s\' %s %i",puVar3,uVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14897364a FUN_14897364a body=276 status=ok
// SIG undefined FUN_14897364a(void)

undefined8 FUN_14897364a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pwVar5 = L"Disabled";
  if (*(char *)(param_1 + 0x28) != '\0') {
    pwVar5 = L"Enabled";
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = FUN_140e39176();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x18) = lVar4;
  }
  if (((*(longlong *)(param_1 + 0x20) == 0) && (lVar4 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)
     ) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  FUN_1410a642a(&local_40);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"State \'%s\' %s",puVar6,pwVar5);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148973760 FUN_148973760 body=427 status=ok
// SIG undefined FUN_148973760(void)

longlong * FUN_148973760(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)FUN_14001cc68(0x48,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14b429c60;
  local_40 = local_38 + 2;
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(local_38 + 7) = 0;
  *(undefined8 *)((longlong)local_38 + 0x24) = 0;
  *(undefined8 *)((longlong)local_38 + 0x2c) = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[2] = (longlong)&PTR_FUN_14b429c80;
  *(undefined1 *)(local_38 + 8) = uVar2;
  FUN_1489814e8(&local_40);
  plVar3 = (longlong *)*param_3;
  local_60 = &LAB_148973a3a;
  local_58 = 0;
  FUN_14897390c(local_50,&local_40);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    uVar6 = FUN_140e39176();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x18) = lVar7;
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (((lVar8 != 0) || (lVar8 = 0, lVar7 == 0)) || (*(longlong *)(param_1 + 0x10) == 0))
  goto LAB_148973830;
  plVar4 = *(longlong **)(lVar7 + 0xb8);
  if (plVar4 == (longlong *)0x0) {
LAB_148973908:
    lVar8 = 0;
  }
  else {
    cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
    if (cVar5 == '\0') goto LAB_148973908;
    uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar8 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x10));
  }
  *(longlong *)(param_1 + 0x20) = lVar8;
LAB_148973830:
  (**(code **)(*plVar3 + 0x38))(plVar3,lVar8,local_50);
  FUN_1449db362(local_50);
  plVar3 = local_38;
  *param_2 = (longlong)local_40;
  param_2[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897390c FUN_14897390c body=302 status=ok
// SIG undefined FUN_14897390c(void)

longlong * FUN_14897390c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429ca0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429ca0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148973a46 FUN_148973a46 body=155 status=ok
// SIG undefined FUN_148973a46(void)

undefined8 FUN_148973a46(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  char local_88;
  wchar_t local_80 [50];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = local_1c;
  builtin_wcsncpy(local_80,L"Target List: ",0xe);
  local_98 = local_80 + 0xd;
  FUN_140056680(param_2);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148973ae2 FUN_148973ae2 body=36 status=ok
// SIG undefined FUN_148973ae2(void)

void FUN_148973ae2(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14655ee46(*(undefined8 *)(param_1 + 0x40),param_1 + 0x30);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 148973b06 FUN_148973b06 body=155 status=ok
// SIG undefined FUN_148973b06(void)

undefined8 FUN_148973b06(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  char local_88;
  wchar_t local_80 [50];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = local_1c;
  builtin_wcsncpy(local_80,L"Target ListEx: ",0x10);
  local_98 = local_80 + 0xf;
  FUN_140056680(param_2);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148973ba2 FUN_148973ba2 body=40 status=ok
// SIG undefined FUN_148973ba2(void)

void FUN_148973ba2(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14655f070(*(undefined8 *)(param_1 + 0x40),param_1 + 0x30,
                        *(undefined4 *)(param_1 + 0x50));
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 148973bca FUN_148973bca body=155 status=ok
// SIG undefined FUN_148973bca(void)

undefined8 FUN_148973bca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  char local_88;
  wchar_t local_80 [50];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = local_1c;
  builtin_wcsncpy(local_80,L"Skill Timer: ",0xe);
  local_98 = local_80 + 0xd;
  FUN_140056680(param_2);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148973c66 FUN_148973c66 body=41 status=ok
// SIG undefined FUN_148973c66(void)

undefined8 FUN_148973c66(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 == 0) || ((*(char *)(lVar1 + 0x30) == '\0' && (*(char *)(lVar1 + 0x31) != '\x01')))) {
    uVar2 = 0;
  }
  else {
    FUN_1407d097e();
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 148973c90 FUN_148973c90 body=9 status=ok
// SIG undefined FUN_148973c90(void)

void FUN_148973c90(longlong param_1)

{
  FUN_143e3066c(param_1 + 0x78);
  return;
}



// FUNCTION 148973c9a FUN_148973c9a body=9 status=ok
// SIG undefined FUN_148973c9a(void)

void FUN_148973c9a(longlong param_1)

{
  FUN_143e306f0(param_1 + 0x78);
  return;
}



// FUNCTION 148973ca4 FUN_148973ca4 body=69 status=ok
// SIG undefined FUN_148973ca4(void)

void FUN_148973ca4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar3 = 0;
    do {
      FUN_1415c6aaa(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 148973cea FUN_148973cea body=283 status=ok
// SIG undefined FUN_148973cea(void)

void FUN_148973cea(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (lVar8 == 0) {
    lVar8 = FUN_145cd93aa();
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar9 = FUN_14477b664(lVar8);
  uVar4 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar11 = (uint)uVar1 & 0xffff;
  uVar6 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar5 >> 0x10 ^ uVar5);
  iVar7 = FUN_1412208fe((longlong *)(param_1 + 0x198),uVar6,(undefined8 *)(param_2 + 8));
  if (iVar7 != -1) {
    lVar8 = *(longlong *)(param_1 + 0x198) + (longlong)iVar7 * 0x48;
    plVar10 = (longlong *)(lVar8 + 0x18);
    if ((plVar10 != (longlong *)0x0 && lVar8 != 0) &&
       (uVar9 = (ulonglong)*(int *)(lVar8 + 0x20), 0 < (longlong)uVar9)) {
      lVar8 = uVar9 << 4;
      do {
        lVar8 = lVar8 + -0x10;
        cVar3 = FUN_148987d76(param_2,*(undefined8 *)(*plVar10 + lVar8));
        if (cVar3 != '\0') {
          FUN_145a2664e(param_1,plVar10,(int)uVar9 + -1);
        }
        bVar2 = 1 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar2);
    }
  }
  return;
}



// FUNCTION 148973e06 FUN_148973e06 body=397 status=ok
// SIG undefined FUN_148973e06(void)

undefined4 FUN_148973e06(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(param_2 + 8);
    }
    uVar5 = FUN_140d2f994(puVar9);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uVar6 = FUN_1410b14ea();
  lStack_50 = FUN_14477b664(uVar6);
  lVar7 = FUN_1410b14ea();
  uVar6 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_40,uVar6,uVar5);
  lVar3 = local_40;
  if (local_58 != local_40) {
    local_48 = 0;
  }
  local_58 = local_40;
  lVar8 = FUN_1410b14ea();
  if (lVar7 != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
      goto LAB_148973ed5;
    }
    if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_148973ed5;
  }
  lVar8 = lVar7;
LAB_148973ed5:
  if (lStack_50 != lVar8) {
    local_48 = 0;
  }
  uVar6 = FUN_14477b664(lVar8);
  lStack_50 = FUN_14477b664(uVar6);
  if (lStack_50 != 0 && lVar3 != 0) {
    local_48 = uVar5;
  }
  FUN_1410b15be(param_1,&local_40,&local_58);
  if (local_40 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_140ac0c72(local_40,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148973f94 FUN_148973f94 body=389 status=ok
// SIG undefined FUN_148973f94(void)

void FUN_148973f94(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_2 + 8);
    }
    uVar4 = FUN_140d2f994(puVar8);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uVar5 = FUN_1410b14ea();
  lStack_50 = FUN_14477b664(uVar5);
  lVar6 = FUN_1410b14ea();
  uVar5 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_40,uVar5,uVar4);
  lVar3 = local_40;
  if (local_58 != local_40) {
    local_48 = 0;
  }
  local_58 = local_40;
  lVar7 = FUN_1410b14ea();
  if (lVar6 != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_148974063;
    }
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_148974063;
  }
  lVar7 = lVar6;
LAB_148974063:
  if (lStack_50 != lVar7) {
    local_48 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  lStack_50 = FUN_14477b664(uVar5);
  if (lStack_50 != 0 && lVar3 != 0) {
    local_48 = uVar4;
  }
  FUN_1410b15be(param_1,&local_40,&local_58);
  if (local_40 != 0) {
    FUN_143e3c7b4(local_40,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897411a FUN_14897411a body=96 status=ok
// SIG undefined FUN_14897411a(void)

void FUN_14897411a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (0 < *(int *)(param_1 + 400)) {
    lVar3 = **(longlong **)(param_1 + 0x188);
    plVar4 = (longlong *)(*(longlong **)(param_1 + 0x188))[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_143e3d07c(lVar3,0);
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
                    /* WARNING: Could not recover jumptable at 0x00014897416f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14897417a FUN_14897417a body=78 status=ok
// SIG undefined FUN_14897417a(void)

void FUN_14897417a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xc0);
    lVar2 = (longlong)*(int *)(param_1 + 200) << 4;
    do {
      if (*(longlong *)(*plVar1 + 0x18) == param_3) {
        if (plVar1 != (longlong *)0x0) {
          *param_2 = *plVar1;
          lVar2 = plVar1[1];
          param_2[1] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          return;
        }
        break;
      }
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1489741c8 FUN_1489741c8 body=106 status=ok
// SIG undefined FUN_1489741c8(void)

void FUN_1489741c8(longlong param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x68) == '\x01') {
      if ((*(longlong *)(param_1 + 0x88) != 0) &&
         (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
        param_1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
        if (param_1 != 0) {
          param_1 = param_1 + 0x1a8;
          goto LAB_1489741ed;
        }
      }
    }
    else if (*(char *)(param_2 + 0x68) == '\0') {
      param_1 = param_1 + 0xe0;
LAB_1489741ed:
      FUN_143e34b3c(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148974232 FUN_148974232 body=12 status=ok
// SIG undefined FUN_148974232(void)

void FUN_148974232(longlong param_1)

{
  FUN_143e34b6a(param_1 + 0xe0);
  return;
}



// FUNCTION 14897423e FUN_14897423e body=87 status=ok
// SIG undefined FUN_14897423e(void)

undefined1 FUN_14897423e(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  
  uVar1 = 1;
  if ((((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 8) == param_2[1])) &&
      (*(char *)(param_1 + 0x10) == '\x01')) && ((char)param_2[2] == '\x01')) {
    if ((*param_2 == 0) || ((longlong)*(int *)(param_1 + 0x20) == 0)) {
      uVar1 = 0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar2) == *param_2) {
          return 1;
        }
        bVar3 = (longlong)*(int *)(param_1 + 0x20) * 8 + -8 != lVar2;
        uVar1 = 0;
        lVar2 = lVar2 + 8;
      } while (bVar3);
    }
  }
  return uVar1;
}



// FUNCTION 148974296 FUN_148974296 body=216 status=ok
// SIG undefined FUN_148974296(void)

void FUN_148974296(longlong param_1,float *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x01') {
    fVar6 = (float)(*(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b);
    *(float *)(param_3 + 4) = fVar6;
    *(undefined2 *)(param_2 + 6) = 4;
    if (0x7ffffffe < (uint)fVar6) {
      fVar6 = NAN;
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\x02') {
        uVar4 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_3 + 4) = uVar4;
        *(undefined2 *)(param_2 + 6) = 4;
        *param_2 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
        uVar3 = 3;
      }
      else {
        *(undefined2 *)(param_2 + 6) = 0;
        uVar3 = 0;
      }
      goto LAB_14897435c;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc) - iVar2;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else {
      uVar4 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar4;
      iVar5 = (int)((float)(iVar5 + 1) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0));
    }
    fVar6 = (float)(iVar5 + iVar2);
    *(undefined2 *)(param_2 + 6) = 4;
  }
  *param_2 = fVar6;
  uVar3 = 2;
LAB_14897435c:
  *(undefined1 *)(param_2 + 8) = uVar3;
  return;
}



// FUNCTION 14897436e FUN_14897436e body=152 status=ok
// SIG undefined FUN_14897436e(void)

undefined8 * FUN_14897436e(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x50) <= (int)param_3)) {
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)param_3 * 0x28);
    bVar2 = *(byte *)(puVar1 + 4);
    uVar3 = *(ushort *)(puVar1 + 3);
    *(ushort *)(param_2 + 3) = uVar3;
    _Dst = param_2;
    _Src = puVar1;
    if (0x18 < uVar3) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar3,0);
      *param_2 = _Dst;
      _Src = (undefined8 *)*puVar1;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar1 + 4);
  }
  return param_2;
}



// FUNCTION 148974406 FUN_148974406 body=324 status=ok
// SIG undefined FUN_148974406(void)

undefined4 FUN_148974406(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    if (cVar1 != '\0') {
      local_98 = *param_2;
      local_88[0] = (longlong *)0x0;
      if (local_98 != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_88);
      }
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
      local_58[0] = local_98;
      local_48 = local_88[0];
      local_88[0] = (longlong *)0x0;
      local_38 = local_78;
      uStack_30 = uStack_70;
      local_28 = local_68;
      uStack_24 = uStack_64;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      if (local_98 != 0) {
        local_98 = 0;
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))(local_68,*(undefined4 *)(param_1 + 0x38),local_58);
      if (local_98 != 0) {
        plVar3 = local_88[0];
        if (local_88[0] == (longlong *)0x0) {
          plVar3 = &local_78;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      goto LAB_148974500;
    }
  }
  uVar2 = 0;
LAB_148974500:
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897454c FUN_14897454c body=191 status=ok
// SIG undefined FUN_14897454c(void)

undefined4 FUN_14897454c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (lVar1 == 0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    FUN_14897436e(lVar1,local_48,param_2);
  }
  uVar4 = FUN_144a7ecd0(local_48);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar2)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897460c FUN_14897460c body=281 status=ok
// SIG undefined FUN_14897460c(void)

void FUN_14897460c(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar6 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (param_2 != 0 && (~bVar6 & 1) == 0) {
    FUN_1456cec3c(param_2);
    bVar6 = DAT_14c950c29;
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  if ((param_3 != 0) && ((bVar6 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  uVar4 = *param_5;
  lVar3 = param_5[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(longlong *)(param_1 + 0x68) = lVar3;
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
  plVar5 = (longlong *)param_5[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148974714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148974726 FUN_148974726 body=48 status=ok
// SIG undefined FUN_148974726(void)

void FUN_148974726(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1457f094f();
  }
  *param_2 = uVar1;
  *param_3 = (char)param_1[1];
  return;
}



// FUNCTION 148974756 FUN_148974756 body=22 status=ok
// SIG undefined FUN_148974756(void)

undefined8 FUN_148974756(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    uVar1 = FUN_140d137fe(*(undefined8 *)*param_2,param_3);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14897476c FUN_14897476c body=129 status=ok
// SIG undefined FUN_14897476c(void)

void FUN_14897476c(undefined8 param_1,longlong *param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_30 = FUN_14477b664(uVar2);
  local_28 = param_3[2];
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_140d137fe(*(undefined8 *)*param_2,&local_38);
    bVar1 = bVar1 ^ 1;
  }
  *param_4 = bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489747f6 FUN_1489747f6 body=8 status=ok
// SIG undefined FUN_1489747f6(void)

void FUN_1489747f6(longlong param_1,char param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x5c) != param_2;
  return;
}



// FUNCTION 1489747fe FUN_1489747fe body=127 status=ok
// SIG undefined FUN_1489747fe(void)

void FUN_1489747fe(longlong param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar2);
  local_28 = param_2[2];
  if (*(longlong *)(param_1 + 0x40) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_140d137fe(*(longlong *)(param_1 + 0x40),&local_38);
    bVar1 = bVar1 ^ 1;
  }
  *param_3 = bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14897487e FUN_14897487e body=16 status=ok
// SIG undefined FUN_14897487e(void)

undefined8 FUN_14897487e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (lVar7 == 0) {
    return 0;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar2 = FUN_14155b406();
    lVar4 = FUN_14477b664(uVar2);
    param_2[1] = lVar4;
  }
  lVar3 = param_2[2];
  if (((lVar3 == 0) && (lVar3 = 0, lVar4 != 0)) && (*param_2 != 0)) {
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 == '\0')) {
      lVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar3 = FUN_144aff482(uVar2,param_2);
    }
    param_2[2] = lVar3;
  }
  if ((longlong)*(int *)(lVar7 + 0x180) != 0) {
    plVar6 = *(longlong **)(lVar7 + 0x178);
    lVar7 = (longlong)*(int *)(lVar7 + 0x180) << 4;
    do {
      lVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (lVar4 == lVar3) {
        if (plVar6 == (longlong *)0x0) {
          return 0;
        }
        uVar5 = CONCAT71((int7)((ulonglong)*plVar6 >> 8),*(undefined1 *)(*plVar6 + 0x38)) &
                0xffffffffffffff02;
        return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 14897488e FUN_14897488e body=47 status=ok
// SIG undefined FUN_14897488e(void)

void FUN_14897488e(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1418a9db8(param_1 + 0x40,param_2);
  }
  FUN_141034304(param_1,param_2);
  return;
}



// FUNCTION 1489748be FUN_1489748be body=158 status=ok
// SIG undefined FUN_1489748be(void)

undefined8 FUN_1489748be(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"Disabled";
  if (*(char *)(param_1 + 0x20) == '\0') {
    pwVar1 = L"Enabled";
  }
  local_38 = *(undefined8 *)(param_1 + 8);
  FUN_1400021e4(&local_38,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Skill State: [%s] = %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14897495e FUN_14897495e body=123 status=ok
// SIG undefined FUN_14897495e(void)

undefined8 FUN_14897495e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 8,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Actionitem: [%s]",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489749da FUN_1489749da body=62 status=ok
// SIG undefined FUN_1489749da(void)

ulonglong FUN_1489749da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    cVar1 = FUN_144729dda(param_1 + 0x20);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x20);
      if (*(char *)(lVar2 + 0x5c) == '\x01') goto LAB_1489749ea;
    }
    uVar3 = 0;
  }
LAB_1489749ea:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148974a18 FUN_148974a18 body=38 status=ok
// SIG undefined FUN_148974a18(void)

undefined8 FUN_148974a18(undefined8 param_1,int param_2)

{
  FUN_14896f544();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148974a46 FUN_148974a46 body=38 status=ok
// SIG undefined FUN_148974a46(void)

undefined8 FUN_148974a46(undefined8 param_1,int param_2)

{
  FUN_141105d6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148974a6c FUN_148974a6c body=45 status=ok
// SIG undefined FUN_148974a6c(void)

longlong FUN_148974a6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_141105d6e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148974a9a FUN_148974a9a body=29 status=ok
// SIG undefined FUN_148974a9a(void)

undefined8 FUN_148974a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148974ac2 FUN_148974ac2 body=32 status=ok
// SIG undefined FUN_148974ac2(void)

undefined8 FUN_148974ac2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Invalid");
  return param_2;
}



// FUNCTION 148974aee FUN_148974aee body=29 status=ok
// SIG undefined FUN_148974aee(void)

undefined8 FUN_148974aee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148974b0e FUN_148974b0e body=68 status=ok
// SIG undefined FUN_148974b0e(void)

undefined8 * FUN_148974b0e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4278c0;
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



// FUNCTION 148974b56 FUN_148974b56 body=81 status=ok
// SIG undefined FUN_148974b56(void)

undefined8 FUN_148974b56(longlong param_1)

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



// FUNCTION 148974bae FUN_148974bae body=89 status=ok
// SIG undefined FUN_148974bae(void)

bool FUN_148974bae(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148974bf9;
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
LAB_148974bf9:
  return lVar6 == param_2;
}



// FUNCTION 148974c24 FUN_148974c24 body=118 status=ok
// SIG undefined FUN_148974c24(void)

void FUN_148974c24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4278c0;
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


