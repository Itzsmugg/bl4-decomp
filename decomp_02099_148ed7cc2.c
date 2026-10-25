// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ed7cc2 FUN_148ed7cc2 body=147 status=ok
// SIG undefined FUN_148ed7cc2(void)

void FUN_148ed7cc2(longlong param_1,int param_2)

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



// FUNCTION 148ed7d56 FUN_148ed7d56 body=48 status=ok
// SIG undefined FUN_148ed7d56(void)

void FUN_148ed7d56(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148ed7d86 thunk_FUN_148c8f3b2 body=5 status=ok
// SIG undefined thunk_FUN_148c8f3b2(void)

longlong thunk_FUN_148c8f3b2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 148ed7d8c FUN_148ed7d8c body=132 status=ok
// SIG undefined FUN_148ed7d8c(void)

void FUN_148ed7d8c(longlong param_1,int param_2)

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



// FUNCTION 148ed7e12 FUN_148ed7e12 body=30 status=ok
// SIG undefined FUN_148ed7e12(void)

void * FUN_148ed7e12(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed7e36 FUN_148ed7e36 body=30 status=ok
// SIG undefined FUN_148ed7e36(void)

void * FUN_148ed7e36(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed7e5a FUN_148ed7e5a body=30 status=ok
// SIG undefined FUN_148ed7e5a(void)

void * FUN_148ed7e5a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed7e7e FUN_148ed7e7e body=30 status=ok
// SIG undefined FUN_148ed7e7e(void)

void * FUN_148ed7e7e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed7ea2 FUN_148ed7ea2 body=30 status=ok
// SIG undefined FUN_148ed7ea2(void)

void * FUN_148ed7ea2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed7ecc FUN_148ed7ecc body=285 status=ok
// SIG undefined FUN_148ed7ecc(void)

void FUN_148ed7ecc(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_28);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_2c);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_30);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_34);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,4);
  local_24 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_24);
  uVar1 = local_24;
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar2 == '\0') {
    local_40 = (undefined1)uVar1;
    local_48 = local_34;
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_28,local_2c,
               local_30);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed7fea FUN_148ed7fea body=68 status=ok
// SIG undefined FUN_148ed7fea(void)

undefined8 * FUN_148ed7fea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d34c0;
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



// FUNCTION 148ed8032 FUN_148ed8032 body=81 status=ok
// SIG undefined FUN_148ed8032(void)

undefined8 FUN_148ed8032(longlong param_1)

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



// FUNCTION 148ed808a FUN_148ed808a body=89 status=ok
// SIG undefined FUN_148ed808a(void)

bool FUN_148ed808a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ed80d5;
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
LAB_148ed80d5:
  return lVar6 == param_2;
}



// FUNCTION 148ed8100 FUN_148ed8100 body=118 status=ok
// SIG undefined FUN_148ed8100(void)

void FUN_148ed8100(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d34c0;
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



// FUNCTION 148ed8176 FUN_148ed8176 body=118 status=ok
// SIG undefined FUN_148ed8176(void)

void FUN_148ed8176(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d34c0;
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



// FUNCTION 148ed81ec FUN_148ed81ec body=156 status=ok
// SIG undefined FUN_148ed81ec(void)

void FUN_148ed81ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d34c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed8278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ed8288 FUN_148ed8288 body=100 status=ok
// SIG undefined FUN_148ed8288(void)

void FUN_148ed8288(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ed82d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ed82e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ed82ec FUN_148ed82ec body=100 status=ok
// SIG undefined FUN_148ed82ec(void)

ulonglong FUN_148ed82ec(longlong param_1)

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
LAB_148ed8345:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ed8345;
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



// FUNCTION 148ed8350 FUN_148ed8350 body=68 status=ok
// SIG undefined FUN_148ed8350(void)

undefined8 * FUN_148ed8350(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3530;
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



// FUNCTION 148ed8398 FUN_148ed8398 body=81 status=ok
// SIG undefined FUN_148ed8398(void)

undefined8 FUN_148ed8398(longlong param_1)

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



// FUNCTION 148ed83f0 FUN_148ed83f0 body=89 status=ok
// SIG undefined FUN_148ed83f0(void)

bool FUN_148ed83f0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ed843b;
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
LAB_148ed843b:
  return lVar6 == param_2;
}



// FUNCTION 148ed8466 FUN_148ed8466 body=118 status=ok
// SIG undefined FUN_148ed8466(void)

void FUN_148ed8466(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3530;
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



// FUNCTION 148ed84dc FUN_148ed84dc body=118 status=ok
// SIG undefined FUN_148ed84dc(void)

void FUN_148ed84dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3530;
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



// FUNCTION 148ed8552 FUN_148ed8552 body=156 status=ok
// SIG undefined FUN_148ed8552(void)

void FUN_148ed8552(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3530;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed85de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ed85ee FUN_148ed85ee body=104 status=ok
// SIG undefined FUN_148ed85ee(void)

void FUN_148ed85ee(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ed863b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ed864c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ed8656 FUN_148ed8656 body=101 status=ok
// SIG undefined FUN_148ed8656(void)

ulonglong FUN_148ed8656(longlong param_1)

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
LAB_148ed86b0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ed86b0;
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



// FUNCTION 148ed86bc FUN_148ed86bc body=114 status=ok
// SIG undefined FUN_148ed86bc(void)

void FUN_148ed86bc(longlong *param_1,int param_2)

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



// FUNCTION 148ed872e FUN_148ed872e body=62 status=ok
// SIG undefined FUN_148ed872e(void)

void FUN_148ed872e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ed876c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148ed876c FUN_148ed876c body=93 status=ok
// SIG undefined FUN_148ed876c(void)

ulonglong FUN_148ed876c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148ed87ca FUN_148ed87ca body=48 status=ok
// SIG undefined FUN_148ed87ca(void)

void FUN_148ed87ca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,200,8);
  }
  return;
}



// FUNCTION 148ed87fa FUN_148ed87fa body=48 status=ok
// SIG undefined FUN_148ed87fa(void)

void FUN_148ed87fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148ed882a FUN_148ed882a body=68 status=ok
// SIG undefined FUN_148ed882a(void)

undefined8 * FUN_148ed882a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3740;
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



// FUNCTION 148ed8872 FUN_148ed8872 body=83 status=ok
// SIG undefined FUN_148ed8872(void)

undefined8 FUN_148ed8872(longlong param_1)

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



// FUNCTION 148ed88cc FUN_148ed88cc body=89 status=ok
// SIG undefined FUN_148ed88cc(void)

bool FUN_148ed88cc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ed8917;
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
LAB_148ed8917:
  return lVar6 == param_2;
}



// FUNCTION 148ed8942 FUN_148ed8942 body=118 status=ok
// SIG undefined FUN_148ed8942(void)

void FUN_148ed8942(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3740;
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



// FUNCTION 148ed89b8 FUN_148ed89b8 body=156 status=ok
// SIG undefined FUN_148ed89b8(void)

void FUN_148ed89b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3740;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed8a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ed8a54 FUN_148ed8a54 body=100 status=ok
// SIG undefined FUN_148ed8a54(void)

ulonglong FUN_148ed8a54(longlong param_1)

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
LAB_148ed8aad:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ed8aad;
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



// FUNCTION 148ed8ab8 FUN_148ed8ab8 body=30 status=ok
// SIG undefined FUN_148ed8ab8(void)

void * FUN_148ed8ab8(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed8ae2 FUN_148ed8ae2 body=159 status=ok
// SIG undefined FUN_148ed8ae2(void)

void FUN_148ed8ae2(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_20);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c,local_20);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed8b82 FUN_148ed8b82 body=30 status=ok
// SIG undefined FUN_148ed8b82(void)

void * FUN_148ed8b82(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed8ba0 FUN_148ed8ba0 body=37 status=ok
// SIG undefined FUN_148ed8ba0(void)

void FUN_148ed8ba0(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148ed8bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148ed8bcc FUN_148ed8bcc body=30 status=ok
// SIG undefined FUN_148ed8bcc(void)

void * FUN_148ed8bcc(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed8bf6 FUN_148ed8bf6 body=196 status=ok
// SIG undefined FUN_148ed8bf6(void)

void FUN_148ed8bf6(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_20);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_24);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c,local_20,
               local_24);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed8cbc FUN_148ed8cbc body=30 status=ok
// SIG undefined FUN_148ed8cbc(void)

void * FUN_148ed8cbc(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ed8ce6 FUN_148ed8ce6 body=236 status=ok
// SIG undefined FUN_148ed8ce6(void)

void FUN_148ed8ce6(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_20);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar2 + 0x238))(plVar2,&local_21);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    local_38 = local_28;
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c,local_20,
               local_21);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed8dd4 FUN_148ed8dd4 body=244 status=ok
// SIG undefined FUN_148ed8dd4(void)

undefined8 *
FUN_148ed8dd4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148ed8eca(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed8eca FUN_148ed8eca body=384 status=ok
// SIG undefined FUN_148ed8eca(void)

void FUN_148ed8eca(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148ed8fdd:
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
    *puVar5 = &PTR_FUN_14b9d3830;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ed8fdd;
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
    *puVar5 = &PTR_FUN_14b9d3830;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed8fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ed904a FUN_148ed904a body=64 status=ok
// SIG undefined FUN_148ed904a(void)

undefined8 * FUN_148ed904a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3830;
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



// FUNCTION 148ed908e FUN_148ed908e body=81 status=ok
// SIG undefined FUN_148ed908e(void)

undefined8 FUN_148ed908e(longlong param_1)

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



// FUNCTION 148ed90e6 FUN_148ed90e6 body=89 status=ok
// SIG undefined FUN_148ed90e6(void)

bool FUN_148ed90e6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ed9131;
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
LAB_148ed9131:
  return lVar6 == param_2;
}



// FUNCTION 148ed915c FUN_148ed915c body=118 status=ok
// SIG undefined FUN_148ed915c(void)

void FUN_148ed915c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3830;
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



// FUNCTION 148ed91d2 FUN_148ed91d2 body=118 status=ok
// SIG undefined FUN_148ed91d2(void)

void FUN_148ed91d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3830;
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



// FUNCTION 148ed9248 FUN_148ed9248 body=156 status=ok
// SIG undefined FUN_148ed9248(void)

void FUN_148ed9248(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3830;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed92d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ed92e4 FUN_148ed92e4 body=100 status=ok
// SIG undefined FUN_148ed92e4(void)

void FUN_148ed92e4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ed9330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ed933d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ed9348 FUN_148ed9348 body=100 status=ok
// SIG undefined FUN_148ed9348(void)

ulonglong FUN_148ed9348(longlong param_1)

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
LAB_148ed93a1:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ed93a1;
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



// FUNCTION 148ed93ac FUN_148ed93ac body=259 status=ok
// SIG undefined FUN_148ed93ac(void)

undefined8 *
FUN_148ed93ac(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_148ed94b0(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed94b0 FUN_148ed94b0 body=384 status=ok
// SIG undefined FUN_148ed94b0(void)

void FUN_148ed94b0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148ed95c3:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9d38a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ed95c3;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9d38a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed95bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ed9630 FUN_148ed9630 body=64 status=ok
// SIG undefined FUN_148ed9630(void)

undefined8 * FUN_148ed9630(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d38a0;
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



// FUNCTION 148ed9674 FUN_148ed9674 body=81 status=ok
// SIG undefined FUN_148ed9674(void)

undefined8 FUN_148ed9674(longlong param_1)

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



// FUNCTION 148ed96cc FUN_148ed96cc body=89 status=ok
// SIG undefined FUN_148ed96cc(void)

bool FUN_148ed96cc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ed9717;
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
LAB_148ed9717:
  return lVar6 == param_2;
}



// FUNCTION 148ed9742 FUN_148ed9742 body=118 status=ok
// SIG undefined FUN_148ed9742(void)

void FUN_148ed9742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d38a0;
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



// FUNCTION 148ed97b8 FUN_148ed97b8 body=118 status=ok
// SIG undefined FUN_148ed97b8(void)

void FUN_148ed97b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d38a0;
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



// FUNCTION 148ed982e FUN_148ed982e body=156 status=ok
// SIG undefined FUN_148ed982e(void)

void FUN_148ed982e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d38a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed98ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ed98ca FUN_148ed98ca body=104 status=ok
// SIG undefined FUN_148ed98ca(void)

void FUN_148ed98ca(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ed9917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ed9928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ed9932 FUN_148ed9932 body=101 status=ok
// SIG undefined FUN_148ed9932(void)

ulonglong FUN_148ed9932(longlong param_1)

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
LAB_148ed998c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ed998c;
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



// FUNCTION 148ed9998 FUN_148ed9998 body=153 status=ok
// SIG undefined FUN_148ed9998(void)

void FUN_148ed9998(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_14c872d28 == (longlong *)0x0) {
      uVar1 = 0x10;
    }
    else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,8);
    }
    uVar2 = 0x7fffffff;
    if (0 < (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148ed9a31 thunk_FUN_144a5dc74 body=5 status=ok
// SIG undefined thunk_FUN_144a5dc74(void)

undefined8 * thunk_FUN_144a5dc74(undefined8 *param_1)

{
  longlong *plVar1;
  
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
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 148ed9a36 FUN_148ed9a36 body=132 status=ok
// SIG undefined FUN_148ed9a36(void)

void FUN_148ed9a36(longlong param_1,int param_2)

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



// FUNCTION 148ed9abc FUN_148ed9abc body=244 status=ok
// SIG undefined FUN_148ed9abc(void)

undefined8 *
FUN_148ed9abc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148ed9bb2(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed9bb2 FUN_148ed9bb2 body=384 status=ok
// SIG undefined FUN_148ed9bb2(void)

void FUN_148ed9bb2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148ed9cc5:
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
    *puVar5 = &PTR_FUN_14b9d3ac0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ed9cc5;
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
    *puVar5 = &PTR_FUN_14b9d3ac0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed9cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ed9d32 FUN_148ed9d32 body=64 status=ok
// SIG undefined FUN_148ed9d32(void)

undefined8 * FUN_148ed9d32(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3ac0;
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



// FUNCTION 148ed9d76 FUN_148ed9d76 body=81 status=ok
// SIG undefined FUN_148ed9d76(void)

undefined8 FUN_148ed9d76(longlong param_1)

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



// FUNCTION 148ed9dce FUN_148ed9dce body=89 status=ok
// SIG undefined FUN_148ed9dce(void)

bool FUN_148ed9dce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ed9e19;
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
LAB_148ed9e19:
  return lVar6 == param_2;
}



// FUNCTION 148ed9e44 FUN_148ed9e44 body=118 status=ok
// SIG undefined FUN_148ed9e44(void)

void FUN_148ed9e44(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3ac0;
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



// FUNCTION 148ed9eba FUN_148ed9eba body=118 status=ok
// SIG undefined FUN_148ed9eba(void)

void FUN_148ed9eba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3ac0;
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



// FUNCTION 148ed9f30 FUN_148ed9f30 body=156 status=ok
// SIG undefined FUN_148ed9f30(void)

void FUN_148ed9f30(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3ac0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ed9fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ed9fcc FUN_148ed9fcc body=100 status=ok
// SIG undefined FUN_148ed9fcc(void)

void FUN_148ed9fcc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eda018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eda025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eda030 FUN_148eda030 body=100 status=ok
// SIG undefined FUN_148eda030(void)

ulonglong FUN_148eda030(longlong param_1)

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
LAB_148eda089:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eda089;
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



// FUNCTION 148eda094 FUN_148eda094 body=68 status=ok
// SIG undefined FUN_148eda094(void)

undefined8 * FUN_148eda094(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3b30;
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



// FUNCTION 148eda0dc FUN_148eda0dc body=81 status=ok
// SIG undefined FUN_148eda0dc(void)

undefined8 FUN_148eda0dc(longlong param_1)

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



// FUNCTION 148eda134 FUN_148eda134 body=89 status=ok
// SIG undefined FUN_148eda134(void)

bool FUN_148eda134(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eda17f;
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
LAB_148eda17f:
  return lVar6 == param_2;
}



// FUNCTION 148eda1aa FUN_148eda1aa body=118 status=ok
// SIG undefined FUN_148eda1aa(void)

void FUN_148eda1aa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3b30;
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



// FUNCTION 148eda220 FUN_148eda220 body=118 status=ok
// SIG undefined FUN_148eda220(void)

void FUN_148eda220(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3b30;
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



// FUNCTION 148eda296 FUN_148eda296 body=156 status=ok
// SIG undefined FUN_148eda296(void)

void FUN_148eda296(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3b30;
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
                    /* WARNING: Could not recover jumptable at 0x000148eda322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eda332 FUN_148eda332 body=100 status=ok
// SIG undefined FUN_148eda332(void)

void FUN_148eda332(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eda37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eda38b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eda396 FUN_148eda396 body=100 status=ok
// SIG undefined FUN_148eda396(void)

ulonglong FUN_148eda396(longlong param_1)

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
LAB_148eda3ef:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eda3ef;
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



// FUNCTION 148eda3fa FUN_148eda3fa body=48 status=ok
// SIG undefined FUN_148eda3fa(void)

void FUN_148eda3fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148eda42e FUN_148eda42e body=81 status=ok
// SIG undefined FUN_148eda42e(void)

undefined8 FUN_148eda42e(longlong param_1)

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



// FUNCTION 148eda486 FUN_148eda486 body=89 status=ok
// SIG undefined FUN_148eda486(void)

bool FUN_148eda486(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eda4d1;
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
LAB_148eda4d1:
  return lVar6 == param_2;
}



// FUNCTION 148eda4fc FUN_148eda4fc body=118 status=ok
// SIG undefined FUN_148eda4fc(void)

void FUN_148eda4fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3ba0;
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



// FUNCTION 148eda572 FUN_148eda572 body=156 status=ok
// SIG undefined FUN_148eda572(void)

void FUN_148eda572(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3ba0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eda5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eda60e FUN_148eda60e body=104 status=ok
// SIG undefined FUN_148eda60e(void)

void FUN_148eda60e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eda65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eda66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eda67a FUN_148eda67a body=81 status=ok
// SIG undefined FUN_148eda67a(void)

undefined8 FUN_148eda67a(longlong param_1)

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



// FUNCTION 148eda6d2 FUN_148eda6d2 body=89 status=ok
// SIG undefined FUN_148eda6d2(void)

bool FUN_148eda6d2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eda71d;
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
LAB_148eda71d:
  return lVar6 == param_2;
}



// FUNCTION 148eda748 FUN_148eda748 body=118 status=ok
// SIG undefined FUN_148eda748(void)

void FUN_148eda748(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3c10;
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



// FUNCTION 148eda7be FUN_148eda7be body=156 status=ok
// SIG undefined FUN_148eda7be(void)

void FUN_148eda7be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3c10;
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
                    /* WARNING: Could not recover jumptable at 0x000148eda84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eda85a FUN_148eda85a body=104 status=ok
// SIG undefined FUN_148eda85a(void)

void FUN_148eda85a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eda8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eda8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eda8c2 FUN_148eda8c2 body=96 status=ok
// SIG undefined FUN_148eda8c2(void)

void FUN_148eda8c2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 148eda926 FUN_148eda926 body=81 status=ok
// SIG undefined FUN_148eda926(void)

undefined8 FUN_148eda926(longlong param_1)

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



// FUNCTION 148eda97e FUN_148eda97e body=89 status=ok
// SIG undefined FUN_148eda97e(void)

bool FUN_148eda97e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eda9c9;
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
LAB_148eda9c9:
  return lVar6 == param_2;
}



// FUNCTION 148eda9f4 FUN_148eda9f4 body=118 status=ok
// SIG undefined FUN_148eda9f4(void)

void FUN_148eda9f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3d70;
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



// FUNCTION 148edaa6a FUN_148edaa6a body=156 status=ok
// SIG undefined FUN_148edaa6a(void)

void FUN_148edaa6a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3d70;
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
                    /* WARNING: Could not recover jumptable at 0x000148edaaf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edab06 FUN_148edab06 body=104 status=ok
// SIG undefined FUN_148edab06(void)

void FUN_148edab06(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edab53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edab64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edab6e FUN_148edab6e body=68 status=ok
// SIG undefined FUN_148edab6e(void)

undefined8 * FUN_148edab6e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3de0;
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



// FUNCTION 148edabb6 FUN_148edabb6 body=81 status=ok
// SIG undefined FUN_148edabb6(void)

undefined8 FUN_148edabb6(longlong param_1)

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



// FUNCTION 148edac0e FUN_148edac0e body=89 status=ok
// SIG undefined FUN_148edac0e(void)

bool FUN_148edac0e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edac59;
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
LAB_148edac59:
  return lVar6 == param_2;
}



// FUNCTION 148edac84 FUN_148edac84 body=118 status=ok
// SIG undefined FUN_148edac84(void)

void FUN_148edac84(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3de0;
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



// FUNCTION 148edacfa FUN_148edacfa body=118 status=ok
// SIG undefined FUN_148edacfa(void)

void FUN_148edacfa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3de0;
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



// FUNCTION 148edad70 FUN_148edad70 body=156 status=ok
// SIG undefined FUN_148edad70(void)

void FUN_148edad70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3de0;
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
                    /* WARNING: Could not recover jumptable at 0x000148edadfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edae0c FUN_148edae0c body=100 status=ok
// SIG undefined FUN_148edae0c(void)

void FUN_148edae0c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edae58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edae65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edae70 FUN_148edae70 body=100 status=ok
// SIG undefined FUN_148edae70(void)

ulonglong FUN_148edae70(longlong param_1)

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
LAB_148edaec9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edaec9;
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



// FUNCTION 148edaed4 FUN_148edaed4 body=30 status=ok
// SIG undefined FUN_148edaed4(void)

void * FUN_148edaed4(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edaf20 FUN_148edaf20 body=12 status=ok
// SIG undefined FUN_148edaf20(void)

void FUN_148edaf20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148edaf29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148edaf2c FUN_148edaf2c body=29 status=ok
// SIG undefined FUN_148edaf2c(void)

undefined8 FUN_148edaf2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148edaf4a FUN_148edaf4a body=38 status=ok
// SIG undefined FUN_148edaf4a(void)

undefined8 FUN_148edaf4a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlayerController",1);
  return param_2;
}



// FUNCTION 148edaf70 FUN_148edaf70 body=61 status=ok
// SIG undefined FUN_148edaf70(void)

longlong FUN_148edaf70(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148edafae FUN_148edafae body=164 status=ok
// SIG undefined FUN_148edafae(void)

void FUN_148edafae(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_1406d14fa();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_145d18230(lVar2);
      if ((lVar2 != 0) && (pcVar1 = *(code **)(param_1 + 0x40), pcVar1 != (code *)0x0)) {
        plVar5 = (longlong *)(param_1 + 0x60);
        if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 0x50);
        }
        local_28 = lVar2;
        uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
        (*pcVar1)(uVar4,&local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edb054 FUN_148edb054 body=30 status=ok
// SIG undefined FUN_148edb054(void)

void * FUN_148edb054(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edb084 FUN_148edb084 body=528 status=ok
// SIG undefined FUN_148edb084(void)

void FUN_148edb084(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_88 = (void *)0x0;
  local_58 = 0;
  (**(code **)(*plVar7 + 0x1c8))(plVar7,&local_58,&local_88);
  FUN_1409ee323(local_58,local_88,&local_78);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar7 + 0x1c8))(plVar7,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,&local_88);
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar7 + 0x220))(plVar7,&local_58);
  cVar6 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar5 = local_58;
  pvVar4 = local_88;
  if (cVar6 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_98 = (void *)0x0;
    lVar8 = (longlong)(int)uStack_80;
    local_90 = (int)uStack_80;
    if (lVar8 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,uStack_80 & 0xffffffff,0);
      memcpy(local_98,pvVar4,lVar8 * 2);
    }
    pvVar4 = local_78;
    local_a8 = (void *)0x0;
    lVar8 = (longlong)(int)uStack_70;
    local_a0 = (int)uStack_70;
    if (lVar8 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,uStack_70 & 0xffffffff,0);
      memcpy(local_a8,pvVar4,lVar8 * 2);
    }
    (*pcVar2)(iVar1 + lVar3,&local_a8,&local_98,uVar5 & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edb296 FUN_148edb296 body=30 status=ok
// SIG undefined FUN_148edb296(void)

void * FUN_148edb296(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edb2b4 FUN_148edb2b4 body=37 status=ok
// SIG undefined FUN_148edb2b4(void)

void FUN_148edb2b4(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148edb2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148edb2e6 FUN_148edb2e6 body=244 status=ok
// SIG undefined FUN_148edb2e6(void)

undefined8 *
FUN_148edb2e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148edb3dc(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edb3dc FUN_148edb3dc body=384 status=ok
// SIG undefined FUN_148edb3dc(void)

void FUN_148edb3dc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148edb4ef:
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
    *puVar5 = &PTR_FUN_14b9d3f10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148edb4ef;
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
    *puVar5 = &PTR_FUN_14b9d3f10;
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
                    /* WARNING: Could not recover jumptable at 0x000148edb4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148edb55c FUN_148edb55c body=64 status=ok
// SIG undefined FUN_148edb55c(void)

undefined8 * FUN_148edb55c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3f10;
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



// FUNCTION 148edb5a0 FUN_148edb5a0 body=81 status=ok
// SIG undefined FUN_148edb5a0(void)

undefined8 FUN_148edb5a0(longlong param_1)

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



// FUNCTION 148edb5f8 FUN_148edb5f8 body=89 status=ok
// SIG undefined FUN_148edb5f8(void)

bool FUN_148edb5f8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edb643;
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
LAB_148edb643:
  return lVar6 == param_2;
}



// FUNCTION 148edb66e FUN_148edb66e body=118 status=ok
// SIG undefined FUN_148edb66e(void)

void FUN_148edb66e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3f10;
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



// FUNCTION 148edb6e4 FUN_148edb6e4 body=118 status=ok
// SIG undefined FUN_148edb6e4(void)

void FUN_148edb6e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d3f10;
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



// FUNCTION 148edb75a FUN_148edb75a body=156 status=ok
// SIG undefined FUN_148edb75a(void)

void FUN_148edb75a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3f10;
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
                    /* WARNING: Could not recover jumptable at 0x000148edb7e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edb7f6 FUN_148edb7f6 body=100 status=ok
// SIG undefined FUN_148edb7f6(void)

void FUN_148edb7f6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edb842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edb84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edb85a FUN_148edb85a body=100 status=ok
// SIG undefined FUN_148edb85a(void)

ulonglong FUN_148edb85a(longlong param_1)

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
LAB_148edb8b3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edb8b3;
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



// FUNCTION 148edb8be FUN_148edb8be body=486 status=ok
// SIG undefined FUN_148edb8be(void)

void FUN_148edb8be(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,L"rarity");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,L"rarity");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_148edba58;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_148edba58:
  FUN_140056680(lVar7,L"rarity");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148edbaa6 FUN_148edbaa6 body=486 status=ok
// SIG undefined FUN_148edbaa6(void)

void FUN_148edbaa6(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,L"eridium_cost");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,L"eridium_cost");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_148edbc40;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_148edbc40:
  FUN_140056680(lVar7,L"eridium_cost");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148edbc8e FUN_148edbc8e body=64 status=ok
// SIG undefined FUN_148edbc8e(void)

undefined8 * FUN_148edbc8e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3fc0;
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



// FUNCTION 148edbcd2 FUN_148edbcd2 body=81 status=ok
// SIG undefined FUN_148edbcd2(void)

undefined8 FUN_148edbcd2(longlong param_1)

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



// FUNCTION 148edbd2a FUN_148edbd2a body=89 status=ok
// SIG undefined FUN_148edbd2a(void)

bool FUN_148edbd2a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edbd75;
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
LAB_148edbd75:
  return lVar6 == param_2;
}



// FUNCTION 148edbda0 FUN_148edbda0 body=118 status=ok
// SIG undefined FUN_148edbda0(void)

void FUN_148edbda0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3fc0;
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



// FUNCTION 148edbe16 FUN_148edbe16 body=118 status=ok
// SIG undefined FUN_148edbe16(void)

void FUN_148edbe16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3fc0;
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



// FUNCTION 148edbe8c FUN_148edbe8c body=156 status=ok
// SIG undefined FUN_148edbe8c(void)

void FUN_148edbe8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3fc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148edbf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edbf28 FUN_148edbf28 body=104 status=ok
// SIG undefined FUN_148edbf28(void)

void FUN_148edbf28(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edbf75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edbf86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edbf90 FUN_148edbf90 body=101 status=ok
// SIG undefined FUN_148edbf90(void)

ulonglong FUN_148edbf90(longlong param_1)

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
LAB_148edbfea:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edbfea;
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



// FUNCTION 148edc02a FUN_148edc02a body=29 status=ok
// SIG undefined FUN_148edc02a(void)

undefined8 FUN_148edc02a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148edc048 FUN_148edc048 body=146 status=ok
// SIG undefined FUN_148edc048(void)

void FUN_148edc048(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148edc0dc FUN_148edc0dc body=132 status=ok
// SIG undefined FUN_148edc0dc(void)

void FUN_148edc0dc(longlong param_1,int param_2)

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



// FUNCTION 148edc162 FUN_148edc162 body=30 status=ok
// SIG undefined FUN_148edc162(void)

void * FUN_148edc162(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edc180 FUN_148edc180 body=37 status=ok
// SIG undefined FUN_148edc180(void)

void FUN_148edc180(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148edc1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148edc1b2 FUN_148edc1b2 body=30 status=ok
// SIG undefined FUN_148edc1b2(void)

void * FUN_148edc1b2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edc1dc FUN_148edc1dc body=122 status=ok
// SIG undefined FUN_148edc1dc(void)

void FUN_148edc1dc(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edc258 FUN_148edc258 body=30 status=ok
// SIG undefined FUN_148edc258(void)

void * FUN_148edc258(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edc276 FUN_148edc276 body=37 status=ok
// SIG undefined FUN_148edc276(void)

void FUN_148edc276(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148edc297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148edc2a2 FUN_148edc2a2 body=30 status=ok
// SIG undefined FUN_148edc2a2(void)

void * FUN_148edc2a2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edc2c0 FUN_148edc2c0 body=37 status=ok
// SIG undefined FUN_148edc2c0(void)

void FUN_148edc2c0(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148edc2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148edc2ec FUN_148edc2ec body=30 status=ok
// SIG undefined FUN_148edc2ec(void)

void * FUN_148edc2ec(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148edc316 FUN_148edc316 body=234 status=ok
// SIG undefined FUN_148edc316(void)

void FUN_148edc316(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,local_58 + 3);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58,
               local_58[3] & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edc402 FUN_148edc402 body=244 status=ok
// SIG undefined FUN_148edc402(void)

undefined8 *
FUN_148edc402(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148edc4f8(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edc4f8 FUN_148edc4f8 body=384 status=ok
// SIG undefined FUN_148edc4f8(void)

void FUN_148edc4f8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148edc60b:
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
    *puVar5 = &PTR_FUN_14b9d4150;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148edc60b;
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
    *puVar5 = &PTR_FUN_14b9d4150;
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
                    /* WARNING: Could not recover jumptable at 0x000148edc607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148edc678 FUN_148edc678 body=64 status=ok
// SIG undefined FUN_148edc678(void)

undefined8 * FUN_148edc678(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d4150;
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



// FUNCTION 148edc6bc FUN_148edc6bc body=81 status=ok
// SIG undefined FUN_148edc6bc(void)

undefined8 FUN_148edc6bc(longlong param_1)

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



// FUNCTION 148edc714 FUN_148edc714 body=89 status=ok
// SIG undefined FUN_148edc714(void)

bool FUN_148edc714(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edc75f;
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
LAB_148edc75f:
  return lVar6 == param_2;
}



// FUNCTION 148edc78a FUN_148edc78a body=118 status=ok
// SIG undefined FUN_148edc78a(void)

void FUN_148edc78a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d4150;
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



// FUNCTION 148edc800 FUN_148edc800 body=118 status=ok
// SIG undefined FUN_148edc800(void)

void FUN_148edc800(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d4150;
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



// FUNCTION 148edc876 FUN_148edc876 body=156 status=ok
// SIG undefined FUN_148edc876(void)

void FUN_148edc876(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d4150;
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
                    /* WARNING: Could not recover jumptable at 0x000148edc902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edc912 FUN_148edc912 body=100 status=ok
// SIG undefined FUN_148edc912(void)

void FUN_148edc912(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edc95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edc96b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edc976 FUN_148edc976 body=100 status=ok
// SIG undefined FUN_148edc976(void)

ulonglong FUN_148edc976(longlong param_1)

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
LAB_148edc9cf:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edc9cf;
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



// FUNCTION 148edc9da FUN_148edc9da body=244 status=ok
// SIG undefined FUN_148edc9da(void)

undefined8 *
FUN_148edc9da(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148edcad0(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edcad0 FUN_148edcad0 body=384 status=ok
// SIG undefined FUN_148edcad0(void)

void FUN_148edcad0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148edcbe3:
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9d41c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148edcbe3;
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
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9d41c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148edcbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148edcc50 FUN_148edcc50 body=64 status=ok
// SIG undefined FUN_148edcc50(void)

undefined8 * FUN_148edcc50(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d41c0;
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



// FUNCTION 148edcc94 FUN_148edcc94 body=81 status=ok
// SIG undefined FUN_148edcc94(void)

undefined8 FUN_148edcc94(longlong param_1)

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



// FUNCTION 148edccec FUN_148edccec body=89 status=ok
// SIG undefined FUN_148edccec(void)

bool FUN_148edccec(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edcd37;
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
LAB_148edcd37:
  return lVar6 == param_2;
}



// FUNCTION 148edcd62 FUN_148edcd62 body=118 status=ok
// SIG undefined FUN_148edcd62(void)

void FUN_148edcd62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d41c0;
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



// FUNCTION 148edcdd8 FUN_148edcdd8 body=118 status=ok
// SIG undefined FUN_148edcdd8(void)

void FUN_148edcdd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d41c0;
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



// FUNCTION 148edce4e FUN_148edce4e body=156 status=ok
// SIG undefined FUN_148edce4e(void)

void FUN_148edce4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d41c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148edceda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edceea FUN_148edceea body=104 status=ok
// SIG undefined FUN_148edceea(void)

void FUN_148edceea(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edcf37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edcf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edcf52 FUN_148edcf52 body=101 status=ok
// SIG undefined FUN_148edcf52(void)

ulonglong FUN_148edcf52(longlong param_1)

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
LAB_148edcfac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edcfac;
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



// FUNCTION 148edcfb8 FUN_148edcfb8 body=259 status=ok
// SIG undefined FUN_148edcfb8(void)

undefined8 *
FUN_148edcfb8(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_148edd0bc(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edd0bc FUN_148edd0bc body=384 status=ok
// SIG undefined FUN_148edd0bc(void)

void FUN_148edd0bc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148edd1cf:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9d4230;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148edd1cf;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9d4230;
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
                    /* WARNING: Could not recover jumptable at 0x000148edd1cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148edd23c FUN_148edd23c body=64 status=ok
// SIG undefined FUN_148edd23c(void)

undefined8 * FUN_148edd23c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d4230;
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



// FUNCTION 148edd280 FUN_148edd280 body=81 status=ok
// SIG undefined FUN_148edd280(void)

undefined8 FUN_148edd280(longlong param_1)

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



// FUNCTION 148edd2d8 FUN_148edd2d8 body=89 status=ok
// SIG undefined FUN_148edd2d8(void)

bool FUN_148edd2d8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edd323;
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
LAB_148edd323:
  return lVar6 == param_2;
}



// FUNCTION 148edd34e FUN_148edd34e body=118 status=ok
// SIG undefined FUN_148edd34e(void)

void FUN_148edd34e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d4230;
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



// FUNCTION 148edd3c4 FUN_148edd3c4 body=118 status=ok
// SIG undefined FUN_148edd3c4(void)

void FUN_148edd3c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d4230;
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



// FUNCTION 148edd43a FUN_148edd43a body=156 status=ok
// SIG undefined FUN_148edd43a(void)

void FUN_148edd43a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d4230;
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
                    /* WARNING: Could not recover jumptable at 0x000148edd4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edd4d6 FUN_148edd4d6 body=104 status=ok
// SIG undefined FUN_148edd4d6(void)

void FUN_148edd4d6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edd523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edd534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edd53e FUN_148edd53e body=101 status=ok
// SIG undefined FUN_148edd53e(void)

ulonglong FUN_148edd53e(longlong param_1)

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
LAB_148edd598:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edd598;
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



// FUNCTION 148edd5a4 FUN_148edd5a4 body=64 status=ok
// SIG undefined FUN_148edd5a4(void)

undefined8 * FUN_148edd5a4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d4310;
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



// FUNCTION 148edd5e8 FUN_148edd5e8 body=81 status=ok
// SIG undefined FUN_148edd5e8(void)

undefined8 FUN_148edd5e8(longlong param_1)

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



// FUNCTION 148edd640 FUN_148edd640 body=89 status=ok
// SIG undefined FUN_148edd640(void)

bool FUN_148edd640(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148edd68b;
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
LAB_148edd68b:
  return lVar6 == param_2;
}



// FUNCTION 148edd6b6 FUN_148edd6b6 body=118 status=ok
// SIG undefined FUN_148edd6b6(void)

void FUN_148edd6b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d4310;
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



// FUNCTION 148edd72c FUN_148edd72c body=118 status=ok
// SIG undefined FUN_148edd72c(void)

void FUN_148edd72c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d4310;
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



// FUNCTION 148edd7a2 FUN_148edd7a2 body=156 status=ok
// SIG undefined FUN_148edd7a2(void)

void FUN_148edd7a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d4310;
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
                    /* WARNING: Could not recover jumptable at 0x000148edd82e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148edd83e FUN_148edd83e body=104 status=ok
// SIG undefined FUN_148edd83e(void)

void FUN_148edd83e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148edd88b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148edd89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148edd8a6 FUN_148edd8a6 body=101 status=ok
// SIG undefined FUN_148edd8a6(void)

ulonglong FUN_148edd8a6(longlong param_1)

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
LAB_148edd900:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148edd900;
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



// FUNCTION 148edd90c FUN_148edd90c body=104 status=ok
// SIG undefined FUN_148edd90c(void)

undefined8 * FUN_148edd90c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x3b0);
  memset(_Dst,0,0x3b0);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d8180;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  _Dst[0x6f] = 0;
  _Dst[0x70] = 0;
  _Dst[0x71] = 0;
  _Dst[0x72] = 0;
  _Dst[0x73] = 0;
  _Dst[0x74] = 0;
  _Dst[0x75] = 0;
  return _Dst;
}



// FUNCTION 148edd974 FUN_148edd974 body=1098 status=ok
// SIG undefined FUN_148edd974(void)

void FUN_148edd974(longlong param_1)

{
  int iVar1;
  ushort *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c8;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((bool)*(char *)(param_1 + 0xb50) != (*(char *)(param_1 + 0xb54) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0xbf8) != 0) {
    lVar11 = *(longlong *)(param_1 + 0xbf0);
    lVar6 = (longlong)*(int *)(param_1 + 0xbf8) * 0x448;
    do {
      uVar7 = uStack_50;
      if ((bool)*(char *)(lVar11 + 0x440) != (*(char *)(param_1 + 0xb54) == '\0')) {
        lVar10 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_148e4246c(&local_58,uVar7 & 0xffffffff);
        }
        lVar3 = local_58;
        lVar10 = lVar10 * 0x448;
        FUN_1413505e4(lVar10 + local_58,lVar11);
        *(undefined ***)(lVar3 + lVar10) = &PTR_FUN_14b8b6620;
        *(undefined8 *)(lVar3 + 0x430 + lVar10) = 0;
        *(undefined4 *)(lVar3 + 0x430 + lVar10) = *(undefined4 *)(lVar11 + 0x430);
        *(undefined4 *)(lVar3 + 0x434 + lVar10) = *(undefined4 *)(lVar11 + 0x434);
        *(undefined1 *)(lVar3 + 0x438 + lVar10) = 0;
        *(undefined4 *)(lVar3 + 0x43c + lVar10) = 0;
        *(undefined1 *)(lVar3 + 0x438 + lVar10) = *(undefined1 *)(lVar11 + 0x438);
        *(undefined4 *)(lVar3 + 0x43c + lVar10) = *(undefined4 *)(lVar11 + 0x43c);
        *(undefined1 *)(lVar3 + 0x440 + lVar10) = 0;
        *(undefined4 *)(lVar3 + 0x444 + lVar10) = 0;
        *(undefined1 *)(lVar3 + 0x440 + lVar10) = *(undefined1 *)(lVar11 + 0x440);
        *(undefined4 *)(lVar3 + 0x444 + lVar10) = *(undefined4 *)(lVar11 + 0x444);
      }
      lVar11 = lVar11 + 0x448;
      lVar6 = lVar6 + -0x448;
    } while (lVar6 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x40c);
  FUN_1412d6a39(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408));
  *(undefined4 *)(param_1 + 0x408) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x40c) != 0)) {
    FUN_148e9a4d0(param_1 + 0x400,0);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = &PTR_FUN_14b895f80;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  plVar5 = (longlong *)FUN_145917192(param_1);
  lVar11 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x58));
  *(int *)(lVar11 + 0x50) = *(int *)(lVar11 + 0x50) + 1;
  FUN_148edddde(param_1,&local_138);
  lVar6 = FUN_145917130(lVar11,&local_138);
  if (local_138 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x58));
  if (lVar6 != 0) {
    FUN_148e1abf8(lVar6,&local_58);
    FUN_148eddec8(&local_c8,lVar6);
  }
  uVar7 = uStack_50 & 0xffffffff;
  if (uVar7 != 0) {
    lVar11 = 0;
    do {
      lVar6 = local_58 + lVar11;
      uVar8 = FUN_141352650(param_1 + 0x400);
      FUN_148eb773c(param_1,uVar8,lVar6,&local_c8);
      lVar11 = lVar11 + 0x448;
    } while (uVar7 * 0x448 - lVar11 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x108);
    lVar6 = (longlong)*(int *)(param_1 + 0x110) * 0x90 + lVar11;
    do {
      if ((*(byte *)(lVar11 + 0x89) & 1) != 0) {
        bVar9 = *(byte *)(lVar11 + 0x88) & 0xbf;
        *(byte *)(lVar11 + 0x88) = bVar9;
        if ((longlong)*(int *)(lVar11 + 0x78) != 0) {
          lVar10 = 0;
          do {
            uVar4 = (uint)*(undefined8 *)(*(longlong *)(lVar11 + 0x70) + lVar10);
            if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x110))) {
              bVar9 = bVar9 | *(byte *)(*(longlong *)(param_1 + 0x108) + 0x88 +
                                       (ulonglong)(uVar4 & 0x7fffffff) * 0x90) & 0x40;
              *(byte *)(lVar11 + 0x88) = bVar9;
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(lVar11 + 0x78) * 8 != lVar10);
        }
      }
      lVar11 = lVar11 + 0x90;
    } while (lVar11 != lVar6);
  }
  local_130 = 0;
  uStack_128 = 0;
  local_138 = &PTR_FUN_14b895f80;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  bVar9 = FUN_14591720c(&local_c8,&local_138);
  *(byte *)(param_1 + 0x119) = bVar9 ^ 1;
  FUN_14591706c(&local_138);
  *(undefined1 *)(param_1 + 0x398) = 1;
  puVar2 = *(ushort **)(param_1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  FUN_14591706c(&local_c8);
  FUN_145d24fc7(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148edddde FUN_148edddde body=232 status=ok
// SIG undefined FUN_148edddde(void)

undefined8 FUN_148edddde(undefined8 param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148edf11c();
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0x1f0);
  AcquireSRWLockShared(SRWLock);
  lVar1 = *(longlong *)(lVar1 + 0x100);
  ReleaseSRWLockShared(SRWLock);
  if (lVar1 != 0) {
    puVar2 = *(undefined4 **)(lVar1 + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2;
    }
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1400b2348(puVar4,local_38,1);
    FUN_144313ede(param_1,local_48);
    FUN_1401c7f3e(param_2,local_48,local_38);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_68);
  }
  FUN_144313ede(param_1,param_2);
  if ((local_38[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148eddec8 FUN_148eddec8 body=144 status=ok
// SIG undefined FUN_148eddec8(void)

void FUN_148eddec8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e1b1d0(param_2,&local_30);
  if ((longlong)local_28 == 0) {
    local_28 = 0;
  }
  else {
    lVar1 = (longlong)local_28 << 4;
    lVar2 = local_30;
    do {
      FUN_148ee4800(param_1,lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  FUN_1447a1747(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eddf84 FUN_148eddf84 body=440 status=ok
// SIG undefined FUN_148eddf84(void)

void FUN_148eddf84(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_d0 = lVar6 + 0x118;
    lVar7 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x9f + lVar7) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar6 + 0x250 + lVar7);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = (code *)&LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = CONCAT44(local_60._4_4_,local_a0);
        lVar3 = FUN_148eec5b0(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar4 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar4 = &local_a8;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0xa0))) {
          FUN_144a787a6(local_d0 + lVar7,lVar3 + 0x98);
          pbVar1 = (byte *)(lVar6 + 0x9f + lVar7);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar7 = lVar7 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar7 != 0);
    uVar5 = *(undefined4 *)(param_1 + 0x408);
    lVar6 = *(longlong *)(param_1 + 0x400);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d88c0;
  local_88[0] = FUN_14432237e;
  local_60 = param_1;
  FUN_1415d0667(lVar6,uVar5,param_3,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ede168 FUN_148ede168 body=440 status=ok
// SIG undefined FUN_148ede168(void)

void FUN_148ede168(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_d0 = lVar6 + 0x118;
    lVar7 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x9f + lVar7) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar6 + 0x250 + lVar7);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = (code *)&LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = CONCAT44(local_60._4_4_,local_a0);
        lVar3 = FUN_148eec5b0(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar4 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar4 = &local_a8;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0xd8))) {
          FUN_144a787a6(local_d0 + lVar7,lVar3 + 0xd0);
          pbVar1 = (byte *)(lVar6 + 0x9f + lVar7);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar7 = lVar7 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar7 != 0);
    uVar5 = *(undefined4 *)(param_1 + 0x408);
    lVar6 = *(longlong *)(param_1 + 0x400);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d88e0;
  local_88[0] = FUN_1443225ba;
  local_60 = param_1;
  FUN_1415d0667(lVar6,uVar5,param_3,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ede34c FUN_148ede34c body=440 status=ok
// SIG undefined FUN_148ede34c(void)

void FUN_148ede34c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_d0 = lVar6 + 0x118;
    lVar7 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x9f + lVar7) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar6 + 0x250 + lVar7);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = (code *)&LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = CONCAT44(local_60._4_4_,local_a0);
        lVar3 = FUN_148eec5b0(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar4 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar4 = &local_a8;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0xc0))) {
          FUN_144a787a6(local_d0 + lVar7,lVar3 + 0xb8);
          pbVar1 = (byte *)(lVar6 + 0x9f + lVar7);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar7 = lVar7 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar7 != 0);
    uVar5 = *(undefined4 *)(param_1 + 0x408);
    lVar6 = *(longlong *)(param_1 + 0x400);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d8900;
  local_88[0] = FUN_1443228f2;
  local_60 = param_1;
  FUN_1415d0667(lVar6,uVar5,param_3,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ede506 FUN_148ede506 body=135 status=ok
// SIG undefined FUN_148ede506(void)

void FUN_148ede506(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b9d8960;
  local_58[0] = FUN_144323090;
  local_30 = param_1;
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ede5b8 FUN_148ede5b8 body=1000 status=ok
// SIG undefined FUN_148ede5b8(void)

void FUN_148ede5b8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *plStack_160;
  longlong *local_158 [2];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined4 *local_128;
  ulonglong *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined1 *local_108;
  undefined ***local_f8;
  undefined **local_e8;
  undefined4 local_e0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  longlong local_b0;
  undefined **ppuStack_a8;
  longlong local_a0;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar11 = *(longlong *)(param_1 + 0x400);
  iVar4 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar4 == 0) {
    uVar9 = 0;
  }
  else {
    local_190 = lVar11 + 0x118;
    lVar10 = 0;
    do {
      if ((*(byte *)(lVar11 + 0x9f + lVar10) & 0x20) == 0) {
        local_e0 = *(undefined4 *)(lVar11 + 0x250 + lVar10);
        local_f8 = (undefined ***)0x0;
        local_e8 = &PTR_LAB_14b9cd890;
        local_108 = &LAB_148eb7a06;
        local_c8 = (code *)&LAB_148eb7a06;
        local_b8 = (undefined ***)0x0;
        ppuStack_a8 = &PTR_LAB_14b9cd890;
        local_a0 = CONCAT44(local_a0._4_4_,local_e0);
        lVar6 = FUN_148eec5b0(param_2,&local_c8);
        if (local_108 != (undefined1 *)0x0) {
          pppuVar8 = local_f8;
          if (local_f8 == (undefined ***)0x0) {
            pppuVar8 = &local_e8;
          }
          (*(code *)(*pppuVar8)[2])();
        }
        if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x44))) {
          local_168 = 0;
          plStack_160 = (longlong *)0x0;
          local_198 = param_2;
          FUN_1413a454c(local_158,*(int *)(lVar6 + 0x44),0,&local_168);
          local_c8 = (code *)0x0;
          uStack_c0 = 0;
          local_b8 = (undefined ***)((ulonglong)local_b8 & 0xffffffff00000000);
          local_b0 = 0;
          ppuStack_a8 = (undefined **)0x0;
          FUN_1446ddda2(&local_c8,"LevelTextFormat",0);
          FUN_1410d1eba(local_188,&local_c8);
          FUN_14023409e(&local_178,local_188,1);
          local_80[0] = 4;
          FUN_14023423e(local_70,local_158);
          local_128 = local_80;
          local_120 = local_60;
          FUN_14010d304(&local_118,&local_128);
          local_138 = local_178;
          local_130 = local_170;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_170 + 1) = (int)local_170[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_148,&local_138);
          FUN_14007f2db(local_118,local_110);
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          param_2 = local_198;
          if (local_70[0] != (longlong *)0x0) {
            (**(code **)(*local_70[0] + 0x10))();
          }
          plVar5 = local_170;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_170 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (local_158[0] != (longlong *)0x0) {
            (**(code **)(*local_158[0] + 0x10))();
          }
          uVar7 = FUN_1447a1f4a(local_148);
          FUN_144a787a6(local_190 + lVar10,uVar7);
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          if (local_188[0] != (longlong *)0x0) {
            (**(code **)(*local_188[0] + 0x10))();
          }
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
          plVar5 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_160 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          pbVar3 = (byte *)(lVar11 + 0x9f + lVar10);
          *pbVar3 = *pbVar3 | 2;
        }
      }
      lVar10 = lVar10 + 0x268;
    } while ((longlong)iVar4 * 0x268 - lVar10 != 0);
    uVar9 = *(undefined4 *)(param_1 + 0x408);
    lVar11 = *(longlong *)(param_1 + 0x400);
  }
  local_b8 = (undefined ***)0x0;
  ppuStack_a8 = &PTR_LAB_14b9d8920;
  local_c8 = FUN_144322c22;
  local_a0 = param_1;
  FUN_1415d0667(lVar11,uVar9);
  if (local_c8 != (code *)0x0) {
    pppuVar8 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar8 = &ppuStack_a8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if ((local_60[0] ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ede9cc FUN_148ede9cc body=440 status=ok
// SIG undefined FUN_148ede9cc(void)

void FUN_148ede9cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_d0 = lVar6 + 0x118;
    lVar7 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x9f + lVar7) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar6 + 0x250 + lVar7);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = (code *)&LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = CONCAT44(local_60._4_4_,local_a0);
        lVar3 = FUN_148eec5b0(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar4 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar4 = &local_a8;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0x110))) {
          FUN_144a787a6(local_d0 + lVar7,lVar3 + 0x108);
          pbVar1 = (byte *)(lVar6 + 0x9f + lVar7);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar7 = lVar7 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar7 != 0);
    uVar5 = *(undefined4 *)(param_1 + 0x408);
    lVar6 = *(longlong *)(param_1 + 0x400);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d8940;
  local_88[0] = FUN_144322e56;
  local_60 = param_1;
  FUN_1415d0667(lVar6,uVar5,param_3,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edebb0 FUN_148edebb0 body=440 status=ok
// SIG undefined FUN_148edebb0(void)

void FUN_148edebb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    local_d0 = lVar6 + 0x118;
    lVar7 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x9f + lVar7) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar6 + 0x250 + lVar7);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = (code *)&LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = CONCAT44(local_60._4_4_,local_a0);
        lVar3 = FUN_148eec5b0(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar4 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar4 = &local_a8;
          }
          (*(code *)(*pppuVar4)[2])();
        }
        if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0x148))) {
          FUN_144a787a6(local_d0 + lVar7,lVar3 + 0x140);
          pbVar1 = (byte *)(lVar6 + 0x9f + lVar7);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar7 = lVar7 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar7 != 0);
    uVar5 = *(undefined4 *)(param_1 + 0x408);
    lVar6 = *(longlong *)(param_1 + 0x400);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d8980;
  local_88[0] = FUN_1443232c4;
  local_60 = param_1;
  FUN_1415d0667(lVar6,uVar5,param_3,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eded94 FUN_148eded94 body=817 status=ok
// SIG undefined FUN_148eded94(void)

void FUN_148eded94(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [39];
  byte local_111;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined1 local_f0 [24];
  longlong local_d8;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  code *local_88;
  longlong local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = FUN_148e6a1c4(param_1 + 0x1b0,param_1 + 0x358);
  if (lVar2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x400);
    if ((longlong)*(int *)(param_1 + 0x408) == 0) {
      uVar6 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(param_1 + 0x408) * 0x268;
      local_110 = lVar2 + 0x10;
      do {
        if ((*(byte *)(lVar7 + 0x9f) & 0x20) == 0) {
          local_a0 = *(undefined4 *)(lVar7 + 0x250);
          local_b8 = (undefined ***)0x0;
          local_a8 = &PTR_LAB_14b9cd890;
          local_c8 = &LAB_148eb7a06;
          local_88 = (code *)&LAB_148eb7a06;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14b9cd890;
          local_60 = CONCAT44(local_60._4_4_,local_a0);
          lVar3 = FUN_148eec5b0(param_2,&local_88);
          if (local_c8 != (undefined1 *)0x0) {
            pppuVar5 = local_b8;
            if (local_b8 == (undefined ***)0x0) {
              pppuVar5 = &local_a8;
            }
            (*(code *)(*pppuVar5)[2])();
          }
          local_f8 = lVar3;
          if ((lVar3 != 0) && (cVar1 = FUN_1415b545a(lVar3 + 0x218), cVar1 != '\0')) {
            local_88 = (code *)&local_f8;
            local_80 = param_1;
            local_78 = (undefined ***)lVar7;
            FUN_144321930(&local_88,&local_108);
            if ((longlong *)(lVar7 + 0x118) == &local_108) {
              if (local_108 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar7 + 0x118) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar7 + 0x118) = local_108;
              *(undefined4 *)(lVar7 + 0x120) = local_100;
              *(undefined4 *)(lVar7 + 0x124) = local_fc;
            }
            if (1 < *(int *)(lVar7 + 0x120)) {
              local_111 = *(byte *)(lVar2 + 0x88);
              if ((local_111 & 2) == 0) {
                FUN_14000bbd8(local_f0,local_110,0);
                FUN_1410d1eba(&local_88,local_f0);
              }
              else {
                local_88 = *(code **)(lVar2 + 0x60);
                if (local_88 != (code *)0x0) {
                  (**(code **)(*(longlong *)local_88 + 8))();
                }
                local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar2 + 0x68));
              }
              uVar4 = FUN_1447a1f4a(&local_88);
              FUN_144a787a6(lVar7 + 0x108,uVar4);
              if (local_88 != (code *)0x0) {
                (**(code **)(*(longlong *)local_88 + 0x10))();
              }
              if (((local_111 & 2) == 0) && (local_d8 != 0)) {
                FUN_1400020a8();
              }
              *(byte *)(lVar7 + 0x9f) = *(byte *)(lVar7 + 0x9f) | 2;
            }
          }
        }
        lVar7 = lVar7 + 0x268;
        lVar8 = lVar8 + -0x268;
      } while (lVar8 != 0);
      uVar6 = *(undefined4 *)(param_1 + 0x408);
      lVar7 = *(longlong *)(param_1 + 0x400);
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b9d89a0;
    local_88 = FUN_1443234ee;
    local_60 = param_1;
    FUN_1415d0667(lVar7,uVar6);
    if (local_88 != (code *)0x0) {
      pppuVar5 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar5 = &local_68;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148edf0c6 FUN_148edf0c6 body=85 status=ok
// SIG undefined FUN_148edf0c6(void)

int FUN_148edf0c6(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((bool)*(char *)(param_1 + 0xb50) != (*(char *)(param_1 + 0xb54) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0xb00);
    iVar3 = *(int *)(param_1 + 0x3d8);
    if ((bVar1 & 4) != 0) {
      iVar3 = iVar3 + *(int *)(param_1 + 0x3ec);
    }
    iVar4 = *(int *)(param_1 + 0x408);
    if (((bVar1 & 1) != 0) && (iVar4 < iVar3)) {
      iVar4 = iVar3;
    }
    if ((*(byte *)(param_1 + 0x8f9) & 1) != 0) {
      iVar4 = iVar4 - *(int *)(param_1 + 0x900);
      if (*(int *)(param_1 + 0x8fc) <= iVar4) {
        iVar4 = *(int *)(param_1 + 0x8fc);
      }
    }
    iVar3 = *(int *)(param_1 + 0x908);
    iVar2 = iVar4;
    if (iVar4 < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar3 < 1) {
      iVar2 = iVar4;
    }
    if ((((bVar1 & 0x10) != 0) && (iVar3 = *(int *)(param_1 + 0x390), 0 < iVar3)) &&
       (iVar2 % iVar3 != 0)) {
      iVar2 = (iVar3 + iVar2) - iVar2 % iVar3;
    }
    return iVar2;
  }
  iVar3 = *(int *)(param_1 + 0xbf8);
  if (*(int *)(param_1 + 0xbf8) < *(int *)(param_1 + 0x908)) {
    iVar3 = *(int *)(param_1 + 0x908);
  }
  if ((((*(byte *)(param_1 + 0xb00) & 0x10) != 0) && (iVar4 = *(int *)(param_1 + 0x390), 0 < iVar4))
     && (iVar3 % iVar4 != 0)) {
    iVar3 = (iVar4 + iVar3) - iVar3 % iVar4;
  }
  return iVar3;
}



// FUNCTION 148edf11c FUN_148edf11c body=118 status=ok
// SIG undefined FUN_148edf11c(void)

longlong FUN_148edf11c(longlong param_1)

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
    return local_28 + 0x210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edf194 FUN_148edf194 body=707 status=ok
// SIG undefined FUN_148edf194(void)

void FUN_148edf194(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457fc9d2();
  if (*(int *)(param_1 + 0xb84) != 0) {
    *(undefined1 *)(param_1 + 0xb80) = 0;
    *(undefined4 *)(param_1 + 0xb84) = 0;
  }
  uVar3 = FUN_144a7cdc2(param_2,&DAT_14cbe38b8);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0xb50) = uVar1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"RefillShieldsHint");
  FUN_1410d1eba(local_58,&local_48);
  FUN_140008f88(param_1 + 0xba8,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"RefillHealthHint");
  FUN_1410d1eba(local_58,&local_48);
  FUN_140008f88(param_1 + 3000,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"RefillAmmoHint");
  FUN_1410d1eba(local_58,&local_48);
  FUN_140008f88(param_1 + 0xbc8,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"SellAllJunkHint");
  FUN_1410d1eba(local_58,&local_48);
  FUN_140008f88(param_1 + 0xbd8,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xacc) = 0;
  *(undefined2 *)(param_1 + 0x398) = 0x101;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x20;
  *(byte *)(param_1 + 0x331) = *(byte *)(param_1 + 0x331) | 2;
  *(undefined1 *)(param_1 + 0x928) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  bVar2 = *(byte *)(param_1 + 0x8f9) & 0xfd;
  *(byte *)(param_1 + 0x8f9) = bVar2;
  if ((longlong)*(int *)(param_1 + 0xbf8) != 0) {
    lVar4 = 0;
    do {
      bVar2 = *(char *)(*(longlong *)(param_1 + 0xbf0) + 0x438 + lVar4) * '\x02' | bVar2;
      *(byte *)(param_1 + 0x8f9) = bVar2;
      if (*(char *)(*(longlong *)(param_1 + 0xbf0) + 0x438 + lVar4) != '\0') break;
      bVar5 = (longlong)*(int *)(param_1 + 0xbf8) * 0x448 + -0x448 != lVar4;
      lVar4 = lVar4 + 0x448;
    } while (bVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148edf458 FUN_148edf458 body=416 status=ok
// SIG undefined FUN_148edf458(void)

ulonglong FUN_148edf458(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  PSRWLOCK local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  local_80 = (PSRWLOCK)(param_2 + 4);
  AcquireSRWLockShared(local_80);
  local_84 = *(int *)(param_1 + 0xc08);
  local_88 = (int)param_2[3];
  if (local_84 != local_88) {
    *(int *)(param_1 + 0xc08) = local_88;
    if ((longlong)(int)param_2[1] != 0) {
      unaff_RBX = *param_2;
      lVar8 = (longlong)(int)param_2[1] * 0x40 + unaff_RBX;
      do {
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(unaff_RBX,&local_78);
        uVar3 = (int)uStack_70 - 1;
        if ((int)uStack_70 == 0) {
          uVar3 = 0;
        }
        if (0 < (int)uVar3) {
          uVar4 = 0;
          do {
            local_78[uVar4] =
                 (ushort)((ushort)local_78[uVar4] - 0x41 < 0x1a) * 0x20 + local_78[uVar4];
            uVar4 = uVar4 + 1;
          } while (uVar3 != uVar4);
        }
        puVar1 = local_78;
        if ((int)uStack_70 == 0) {
          puVar1 = &DAT_149dfb77a;
        }
        lVar5 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar1 + lVar5);
          uVar4 = (ulonglong)uVar2;
          uVar6 = *(ushort *)((longlong)&DAT_14ae66bec + lVar5);
          if (uVar2 != uVar6) break;
          if (uVar2 == 0) goto LAB_148edf594;
LAB_148edf569:
          lVar5 = lVar5 + 2;
        }
        if ((uVar6 | uVar2) < 0x80) {
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148edf569;
        }
        if (uVar2 != uVar6) goto LAB_148edf59d;
LAB_148edf594:
        *(undefined4 *)(param_1 + 0xc10) = *(undefined4 *)(unaff_RBX + 0x30);
LAB_148edf59d:
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        unaff_RBX = unaff_RBX + 0x40;
      } while (unaff_RBX != lVar8);
    }
  }
  bVar9 = local_84 != local_88;
  ReleaseSRWLockShared(local_80);
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9) & 0xffffffff;
}



// FUNCTION 148edf642 FUN_148edf642 body=222 status=ok
// SIG undefined FUN_148edf642(void)

undefined4 FUN_148edf642(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_14134fe5a();
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_1 + 0xb98) = 0;
    if (*(int *)(param_1 + 0xb9c) != 0) {
      FUN_148e9a5d8(param_1 + 0xb90,0);
    }
    *(undefined4 *)(param_1 + 0xba0) = 0;
    iVar1 = *(int *)(param_1 + 0x418);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x410);
      lVar5 = 0;
      do {
        if ((*(byte *)(lVar3 + 0x18 + lVar5) & 4) != 0) {
          iVar2 = *(int *)(param_1 + 0xb98);
          *(uint *)(param_1 + 0xb98) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0xb9c) < iVar2 + 1U) {
            FUN_148d699d4(param_1 + 0xb90,iVar2);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0xb90) + (longlong)iVar2 * 4) =
               *(undefined4 *)(lVar3 + 8 + lVar5);
          *(int *)(param_1 + 0xba0) = *(int *)(param_1 + 0xba0) + *(int *)(lVar3 + 0x34 + lVar5);
        }
        lVar5 = lVar5 + 0x430;
      } while ((longlong)iVar1 * 0x430 - lVar5 != 0);
    }
  }
  return uVar4;
}



// FUNCTION 148edf720 FUN_148edf720 body=4571 status=ok
// SIG undefined FUN_148edf720(void)

/* WARNING: Removing unreachable block (ram,0x000148ee0468) */
/* WARNING: Removing unreachable block (ram,0x000148ee00f6) */
/* WARNING: Removing unreachable block (ram,0x000148edfc65) */
/* WARNING: Removing unreachable block (ram,0x000148ee000c) */
/* WARNING: Removing unreachable block (ram,0x000148ee0867) */
/* WARNING: Removing unreachable block (ram,0x000148ee022a) */
/* WARNING: Removing unreachable block (ram,0x000148ee047a) */
/* WARNING: Removing unreachable block (ram,0x000148ee0108) */
/* WARNING: Removing unreachable block (ram,0x000148edfc77) */
/* WARNING: Removing unreachable block (ram,0x000148ee001e) */
/* WARNING: Removing unreachable block (ram,0x000148ee087d) */
/* WARNING: Removing unreachable block (ram,0x000148ee023c) */

void FUN_148edf720(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  longlong lVar17;
  undefined1 auStack_218 [32];
  undefined4 *local_1f8;
  ulonglong *local_1f0;
  longlong *local_1e8 [2];
  longlong *local_1d8 [2];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  longlong *local_1a8 [2];
  longlong *local_198 [2];
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong *local_168 [2];
  longlong *local_158;
  undefined4 local_150;
  undefined4 *local_148;
  ulonglong *local_140;
  longlong *local_138 [2];
  undefined4 *local_128;
  ulonglong *local_120;
  longlong *local_118 [2];
  undefined4 *local_108;
  ulonglong *local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar4 = (longlong *)(param_1 + 0x2b0);
  iVar13 = *(int *)(param_1 + 700);
  FUN_145a5bc9c();
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((iVar13 < 0) && (*(int *)(param_1 + 700) != 0)) {
    FUN_148e23c9e();
  }
  cVar7 = *(char *)(param_1 + 0xb54);
  if (*(char *)(param_1 + 0xb50) == '\x01') {
    bVar12 = (bool)(*(byte *)(param_1 + 0x8f8) >> 7);
  }
  else {
    bVar12 = false;
  }
  cVar5 = *(char *)(param_1 + 0xb80);
  if (cVar5 == '\x01') {
    iVar13 = *(int *)(param_1 + 0xb88);
    if ((0 < iVar13) && (iVar13 <= *(int *)(param_1 + 0xc10))) {
      local_f8 = (longlong *)0x0;
      plStack_f0 = (longlong *)0x0;
      FUN_1413a454c(local_118,iVar13,0);
      FUN_14023409e(&local_128,param_1 + 3000,1);
      local_a8 = CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(&local_98,local_118);
      local_b8 = &local_a8;
      local_b0 = &uStack_88;
      FUN_14010d304(&local_80);
      local_c8 = local_128;
      local_c0 = local_120;
      if (local_120 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_d8,&local_c8,&local_80);
      FUN_14007f2db(CONCAT44(uStack_7c,local_80),local_78);
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      if (local_120 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = local_120 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_120 + 0x10))(local_120);
          }
        }
      }
      goto LAB_148edfb90;
    }
  }
  else if (cVar5 == '\x02') {
    iVar13 = *(int *)(param_1 + 0xb88);
    if (((0 < iVar13) && (iVar13 <= *(int *)(param_1 + 0xc10))) &&
       (*(char *)(param_1 + 0xb51) == '\x01')) {
      local_f8 = (longlong *)0x0;
      plStack_f0 = (longlong *)0x0;
      FUN_1413a454c(local_138,iVar13,0);
      FUN_14023409e(&local_148,param_1 + 0xbc8,1);
      local_a8 = CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(&local_98,local_138);
      local_b8 = &local_a8;
      local_b0 = &uStack_88;
      FUN_14010d304(&local_80);
      local_c8 = local_148;
      local_c0 = local_140;
      if (local_140 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_d8,&local_c8,&local_80);
      FUN_14007f2db(CONCAT44(uStack_7c,local_80),local_78);
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      local_118[0] = local_138[0];
      if (local_140 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = local_140 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_118[0] = local_138[0];
          if (*piVar2 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
            local_118[0] = local_138[0];
          }
        }
      }
      goto LAB_148edfb90;
    }
  }
  else if (((cVar5 == '\x03') && (iVar13 = *(int *)(param_1 + 0xb88), 0 < iVar13)) &&
          (iVar13 <= *(int *)(param_1 + 0xc10))) {
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
    FUN_1413a454c(local_e8,iVar13,0);
    FUN_14023409e(&local_108,param_1 + 0xba8,1);
    local_a8 = CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(&local_98,local_e8);
    local_b8 = &local_a8;
    local_b0 = &uStack_88;
    FUN_14010d304(&local_80);
    local_c8 = local_108;
    local_c0 = local_100;
    if (local_100 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_d8,&local_c8,&local_80);
    FUN_14007f2db(CONCAT44(uStack_7c,local_80),local_78);
    if (CONCAT44(uStack_7c,local_80) != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    local_118[0] = local_e8[0];
    if (local_100 != (ulonglong *)0x0) {
      LOCK();
      puVar1 = local_100 + 1;
      *(int *)puVar1 = (int)*puVar1 + -1;
      UNLOCK();
      if ((int)*puVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_118[0] = local_e8[0];
        if (*piVar2 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
          local_118[0] = local_e8[0];
        }
      }
    }
LAB_148edfb90:
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    FUN_1447a1f4a(&local_d8);
    FUN_146637162(&local_a8,&DAT_14cbe3808);
    iVar13 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar13 + 1U;
    if (*(uint *)(param_1 + 700) < iVar13 + 1U) {
      FUN_146638242(plVar4,iVar13);
    }
    lVar15 = *plVar4;
    lVar14 = (longlong)iVar13 * 0x20;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined8 *)(lVar15 + lVar14) = local_a8;
    *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_a0._4_4_;
    *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
    *(longlong **)(lVar15 + 0x10 + lVar14) = local_98;
    *(undefined4 *)(lVar15 + 0x18 + lVar14) = (undefined4)local_90;
    *(undefined4 *)(lVar15 + 0x1c + lVar14) = local_90._4_4_;
    local_90 = 0;
    local_98 = (longlong *)0x0;
    uStack_a0 = 0;
    local_a8 = 0;
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    plVar9 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_f0)(plStack_f0);
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
  if ((cVar7 == '\x01') == bVar12) goto LAB_148ee0162;
  iVar13 = 0;
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar15 = 0;
    iVar13 = 0;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x400) + 0x9c + lVar15) & 0xf1) == 0) {
        bVar12 = -1 < *(char *)(*(longlong *)(param_1 + 0x400) + 0x9d + lVar15);
      }
      else {
        bVar12 = false;
      }
      iVar13 = iVar13 + (uint)bVar12;
      lVar15 = lVar15 + 0x268;
    } while ((longlong)*(int *)(param_1 + 0x408) * 0x268 - lVar15 != 0);
  }
  if (((*(byte *)(param_1 + 0x8f8) & 0x10) == 0) ||
     (bVar12 = 0 < iVar13, *(char *)(param_1 + 0x928) != '\0')) {
    bVar12 = false;
LAB_148edfcf3:
    bVar16 = false;
  }
  else {
    if ((((*(int *)(param_1 + 0x67c) == -1) && (*(int *)(param_1 + 0x680) == 0)) &&
        ((*(byte *)(param_1 + 0x4c7) & 0x20) == 0)) ||
       (((*(byte *)(param_1 + 0x4c6) & 0x40) != 0 || ((*(byte *)(param_1 + 0x4c4) & 1) != 0))))
    goto LAB_148edfcf3;
    bVar16 = (char)*(byte *)(param_1 + 0x4c6) < '\0' && (*(byte *)(param_1 + 0x4c7) & 0x20) == 0;
  }
  plVar9 = (longlong *)FUN_140e82300();
  local_f8 = (longlong *)*plVar9;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  plStack_f0 = (longlong *)CONCAT44(plStack_f0._4_4_,(int)plVar9[1]);
  if (bVar12) {
    local_178 = 0;
    uStack_170 = (longlong *)0x0;
    FUN_1413a454c(local_168,iVar13,0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
    local_90 = 0;
    uStack_88 = 0;
    FUN_1446ddda2(&local_a8,"MarkAllFilteredHint",0);
    FUN_1410d1eba(local_198,&local_a8);
    FUN_14023409e(&local_188,local_198,1);
    local_80 = 4;
    FUN_14023423e(local_70,local_168);
    local_c8 = &local_80;
    local_c0 = local_60;
    FUN_14010d304(&local_b8);
    local_d8 = local_188;
    local_d0 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_180 + 1) = (int)local_180[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_158,&local_d8);
    FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_180 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)local_180 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_180 + 0x10))(local_180);
        }
      }
    }
    if (local_168[0] != (longlong *)0x0) {
      (**(code **)(*local_168[0] + 0x10))();
    }
    FUN_140008f88(&local_f8,&local_158);
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 0x10))();
    }
    if (local_198[0] != (longlong *)0x0) {
      (**(code **)(*local_198[0] + 0x10))();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    plVar9 = uStack_170;
    if (uStack_170 != (longlong *)0x0) {
      LOCK();
      plVar3 = uStack_170 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*uStack_170)(uStack_170);
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
  puVar10 = (undefined8 *)FUN_140e82300();
  local_158 = (longlong *)*puVar10;
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 8))();
  }
  local_150 = *(undefined4 *)(puVar10 + 1);
  local_178 = 0;
  uStack_170 = (longlong *)0x0;
  bVar6 = true;
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x400);
    lVar14 = (longlong)*(int *)(param_1 + 0x408) * 0x268 + lVar15;
    do {
      cVar7 = FUN_148ee229c(lVar15);
      plVar9 = uStack_170;
      if ((cVar7 != '\0') && (-1 < *(char *)(lVar15 + 0x9d))) {
        lVar17 = (longlong)(int)uStack_170;
        uVar8 = (int)uStack_170 + 1;
        uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,uVar8);
        if (uStack_170._4_4_ < uVar8) {
          FUN_14591741c(&local_178,(ulonglong)plVar9 & 0xffffffff);
        }
        FUN_148c6b498(lVar17 * 0x268 + local_178,lVar15);
      }
      lVar15 = lVar15 + 0x268;
    } while (lVar15 != lVar14);
    bVar6 = true;
    if ((longlong)(int)uStack_170 != 0) {
      lVar15 = 0;
      iVar13 = 0;
      do {
        iVar13 = iVar13 + *(int *)(local_178 + 0x88 + lVar15);
        lVar15 = lVar15 + 0x268;
      } while ((longlong)(int)uStack_170 * 0x268 - lVar15 != 0);
      local_1b8 = 0;
      plStack_1b0 = (longlong *)0x0;
      FUN_1413a454c(local_1a8,iVar13,0);
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      local_90 = 0;
      uStack_88 = 0;
      FUN_1446ddda2(&local_a8,"SellAllFilteredHint",0);
      FUN_1410d1eba(local_1d8,&local_a8);
      FUN_14023409e(&local_1c8,local_1d8,1);
      local_80 = 4;
      FUN_14023423e(local_70,local_1a8);
      local_c8 = &local_80;
      local_c0 = local_60;
      FUN_14010d304(&local_b8);
      local_d8 = local_1c8;
      local_d0 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_198,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,(ulonglong)local_b0 & 0xffffffff);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1c0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1c0 + 0x10))(local_1c0);
          }
        }
      }
      if (local_1a8[0] != (longlong *)0x0) {
        (**(code **)(*local_1a8[0] + 0x10))();
      }
      FUN_140008f88(&local_158,local_198);
      if (local_198[0] != (longlong *)0x0) {
        (**(code **)(*local_198[0] + 0x10))();
      }
      if (local_1d8[0] != (longlong *)0x0) {
        (**(code **)(*local_1d8[0] + 0x10))();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plStack_1b0;
      if (plStack_1b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_1b0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_1b0)(plStack_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar6 = false;
    }
  }
  if (bVar16) {
    FUN_146637162(&local_a8,&DAT_14cbe2f28,&DAT_14cbe3038);
    iVar13 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar13 + 1U;
    if (*(uint *)(param_1 + 700) < iVar13 + 1U) {
      FUN_146638242(plVar4,iVar13);
    }
    lVar15 = *plVar4;
    lVar14 = (longlong)iVar13 * 0x20;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined8 *)(lVar15 + lVar14) = local_a8;
    *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_a0._4_4_;
    *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
    *(longlong **)(lVar15 + 0x10 + lVar14) = local_98;
    *(undefined4 *)(lVar15 + 0x18 + lVar14) = (undefined4)local_90;
    *(undefined4 *)(lVar15 + 0x1c + lVar14) = local_90._4_4_;
    local_90 = 0;
    local_98 = (longlong *)0x0;
    uStack_a0 = 0;
    local_a8 = 0;
  }
  if (bVar12) {
    uVar11 = FUN_1447a1f4a(&local_f8);
    FUN_146637162(&local_a8,&DAT_14cbe2ef8,uVar11);
    iVar13 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar13 + 1U;
    if (*(uint *)(param_1 + 700) < iVar13 + 1U) {
      FUN_146638242(plVar4,iVar13);
    }
    lVar15 = *plVar4;
    lVar14 = (longlong)iVar13 * 0x20;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined8 *)(lVar15 + lVar14) = local_a8;
    *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_a0._4_4_;
    *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
    *(longlong **)(lVar15 + 0x10 + lVar14) = local_98;
    *(undefined4 *)(lVar15 + 0x18 + lVar14) = (undefined4)local_90;
    *(undefined4 *)(lVar15 + 0x1c + lVar14) = local_90._4_4_;
    local_90 = 0;
    local_98 = (longlong *)0x0;
    uStack_a0 = 0;
    local_a8 = 0;
  }
  if (!bVar6) {
    uVar11 = FUN_1447a1f4a(&local_158);
    FUN_146637162(&local_a8,&DAT_14cbe37e8,uVar11);
    iVar13 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar13 + 1U;
    if (*(uint *)(param_1 + 700) < iVar13 + 1U) {
      FUN_146638242(plVar4,iVar13);
    }
    lVar15 = *plVar4;
    lVar14 = (longlong)iVar13 * 0x20;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined8 *)(lVar15 + lVar14) = local_a8;
    local_a8 = 0;
    *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_a0._4_4_;
    uStack_a0 = 0;
    *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
    *(longlong **)(lVar15 + 0x10 + lVar14) = local_98;
    local_98 = (longlong *)0x0;
    *(undefined4 *)(lVar15 + 0x18 + lVar14) = (undefined4)local_90;
    *(undefined4 *)(lVar15 + 0x1c + lVar14) = local_90._4_4_;
    local_90 = 0;
  }
  FUN_1412d6a39(local_178,(ulonglong)uStack_170 & 0xffffffff);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
LAB_148ee0162:
  if (*(int *)(param_1 + 0xb98) != 0) {
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
    FUN_1413a454c(local_1e8,*(undefined4 *)(param_1 + 0xba0),0);
    FUN_14023409e(&local_1f8,param_1 + 0xbd8,1);
    local_a8 = CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(&local_98,local_1e8);
    local_b8 = &local_a8;
    local_b0 = &uStack_88;
    FUN_14010d304(&local_80);
    local_c8 = local_1f8;
    local_c0 = local_1f0;
    if (local_1f0 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_d8,&local_c8,&local_80);
    FUN_14007f2db(CONCAT44(uStack_7c,local_80),local_78);
    if (CONCAT44(uStack_7c,local_80) != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    if (local_1f0 != (ulonglong *)0x0) {
      LOCK();
      puVar1 = local_1f0 + 1;
      *(int *)puVar1 = (int)*puVar1 + -1;
      UNLOCK();
      if ((int)*puVar1 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1f0 + 0x10))(local_1f0);
        }
      }
    }
    if (local_1e8[0] != (longlong *)0x0) {
      (**(code **)(*local_1e8[0] + 0x10))();
    }
    uVar11 = FUN_1447a1f4a(&local_d8);
    FUN_146637162(&local_a8,&DAT_14cbe37f8,uVar11);
    iVar13 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar13 + 1U;
    if (*(uint *)(param_1 + 700) < iVar13 + 1U) {
      FUN_146638242(plVar4,iVar13);
    }
    lVar15 = *plVar4;
    lVar14 = (longlong)iVar13 * 0x20;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined8 *)(lVar15 + lVar14) = local_a8;
    *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_a0._4_4_;
    *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
    *(longlong **)(lVar15 + 0x10 + lVar14) = local_98;
    *(undefined4 *)(lVar15 + 0x18 + lVar14) = (undefined4)local_90;
    *(undefined4 *)(lVar15 + 0x1c + lVar14) = local_90._4_4_;
    local_90 = 0;
    local_98 = (longlong *)0x0;
    uStack_a0 = 0;
    local_a8 = 0;
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    plVar9 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_f0)(plStack_f0);
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
  FUN_146637162(&local_a8,&DAT_14cbe2f08,&DAT_14cbe30a8);
  iVar13 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar13 + 1U;
  if (*(uint *)(param_1 + 700) < iVar13 + 1U) {
    FUN_146638242(plVar4,iVar13);
  }
  lVar15 = *plVar4;
  lVar14 = (longlong)iVar13 * 0x20;
  *(undefined8 *)(lVar15 + lVar14) = 0;
  *(undefined8 *)(lVar15 + lVar14) = local_a8;
  *(undefined4 *)(lVar15 + 8 + lVar14) = (undefined4)uStack_a0;
  *(undefined4 *)(lVar15 + 0xc + lVar14) = uStack_a0._4_4_;
  *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
  *(longlong **)(lVar15 + 0x10 + lVar14) = local_98;
  *(undefined4 *)(lVar15 + 0x18 + lVar14) = (undefined4)local_90;
  *(undefined4 *)(lVar15 + 0x1c + lVar14) = local_90._4_4_;
  local_90 = 0;
  local_98 = (longlong *)0x0;
  uStack_a0 = 0;
  local_a8 = 0;
  FUN_144315e9e(param_1);
  if ((local_60[0] ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee08fc FUN_148ee08fc body=34 status=ok
// SIG undefined FUN_148ee08fc(void)

byte FUN_148ee08fc(longlong param_1)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((*(int *)(param_1 + 0x254) == -1) && (*(int *)(param_1 + 600) == 0)) {
    bVar1 = (*(byte *)(param_1 + 0x9f) & 0x20) >> 5;
  }
  return bVar1;
}



// FUNCTION 148ee091e FUN_148ee091e body=565 status=ok
// SIG undefined FUN_148ee091e(void)

void FUN_148ee091e(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1413516b8();
  if ((bool)*(char *)(param_1 + 0xb50) == (*(char *)(param_1 + 0xb54) == '\x01')) {
    uVar4 = FUN_148edf0c6(param_1);
    iVar3 = *(int *)(param_1 + 0xbf8);
    lVar5 = FUN_145916fde(param_1);
    if (uVar4 != 0) {
      local_d0 = param_1 + 0xbf0;
      lVar9 = 0x88;
      uVar10 = 0;
      do {
        iVar7 = (int)uVar10;
        if ((*(byte *)(param_1 + 0x8f9) & 1) != 0) {
          iVar7 = *(int *)(param_1 + 0x900) + iVar7;
        }
        lVar6 = *(longlong *)(param_1 + 0x3f0);
        if ((iVar7 < 0) || (*(int *)(param_1 + 0x408) <= iVar7)) {
          *(byte *)(lVar6 + 0x16 + lVar9) =
               *(byte *)(lVar6 + 0x16 + lVar9) & 0xbf | (iVar3 <= iVar7) << 6;
        }
        else {
          pbVar1 = (byte *)(lVar6 + 0x16 + lVar9);
          *pbVar1 = *pbVar1 & 0xbf;
        }
        bVar2 = *(byte *)(lVar6 + 0x17 + lVar9);
        *(byte *)(lVar6 + 0x17 + lVar9) = bVar2 & 0xfb;
        *(byte *)(lVar6 + 0x17 + lVar9) =
             bVar2 & 0xf3 | (*(int *)(param_1 + 0xc10) < *(int *)(lVar6 + lVar9)) << 3;
        if ((lVar5 != 0) && ((*(byte *)(lVar6 + 0x18 + lVar9) & 1) != 0)) {
          local_a0 = *(undefined4 *)(lVar6 + 0x1d0 + lVar9);
          local_b8 = (undefined ***)0x0;
          local_a8 = &PTR_LAB_14b9d83f0;
          local_c8 = &LAB_148eec040;
          local_88[0] = &LAB_148eec040;
          local_78 = 0;
          local_68 = &PTR_LAB_14b9d83f0;
          local_60 = local_a0;
          lVar6 = FUN_148eecbf0(local_d0,local_88);
          if (local_c8 != (undefined1 *)0x0) {
            pppuVar8 = local_b8;
            if (local_b8 == (undefined ***)0x0) {
              pppuVar8 = &local_a8;
            }
            (*(code *)(*pppuVar8)[2])();
          }
          if (lVar6 != 0) {
            local_d8 = FUN_14001cc68(0x48,0x10);
            FUN_145916e18(local_d8,*(undefined8 *)(param_1 + 0x54),lVar6 + 0x1f0);
            FUN_14039144e(lVar5,local_d8);
          }
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x268;
      } while (uVar4 != uVar10);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3f8);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x3f0);
      lVar9 = 0;
      do {
        *(byte *)(lVar5 + 0x9f + lVar9) = *(byte *)(lVar5 + 0x9f + lVar9) & 0xf3 | 4;
        lVar9 = lVar9 + 0x268;
      } while ((longlong)iVar3 * 0x268 - lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee0b54 FUN_148ee0b54 body=171 status=ok
// SIG undefined FUN_148ee0b54(void)

void FUN_148ee0b54(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x54);
    plVar3 = (longlong *)FUN_143eb474e(uVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_148eecc76(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"nextshuffle");
        *(undefined8 *)(param_1 + 0xbe8) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee0c00 FUN_148ee0c00 body=225 status=ok
// SIG undefined FUN_148ee0c00(void)

void FUN_148ee0c00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x68);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (((*(longlong *)(param_1 + 0x60) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x60) + 0x8c) & 0x80) != 0)) &&
       (*(longlong *)(param_1 + 0xbe8) != 0)) {
      cVar5 = FUN_144729dda(param_1 + 0x54);
      if (cVar5 != '\0') {
        uVar7 = FUN_14479d2ce(param_1 + 0x54);
        plVar8 = (longlong *)FUN_143eb474e(uVar7);
        if ((plVar8 != (longlong *)0x0) &&
           (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x210))(plVar8), plVar8 != (longlong *)0x0))
        {
          (**(code **)(*plVar8 + 0x290))(plVar8,param_1,*(undefined8 *)(param_1 + 0xbe8));
          puVar3 = *(ushort **)(param_1 + 0x90);
          if (puVar3 != (ushort *)0x0) {
            *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x88) & 0x3f));
          }
        }
      }
    }
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148ee0c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ee0ce2 FUN_148ee0ce2 body=435 status=ok
// SIG undefined FUN_148ee0ce2(void)

void FUN_148ee0ce2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e82344();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x20;
    *(undefined4 *)(lVar1 + 0xac) = 0;
    if (*(char *)(lVar1 + 0xb50) == '\0') {
      puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9c71b0;
      FUN_1446ddc76(local_48,"ClearItem",1);
      FUN_14039176c(puVar3,uVar2,local_48[0],1);
      *puVar3 = &PTR_FUN_14b9c71b0;
      *(undefined4 *)(puVar3 + 7) = 0;
      FUN_140391314(param_1,puVar3);
      puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9c71b0;
      FUN_1446ddc76(local_48,"ClearItem",1);
      FUN_14039176c(puVar3,uVar2,local_48[0],1);
      *puVar3 = &PTR_FUN_14b9c71b0;
      *(undefined4 *)(puVar3 + 7) = 1;
      FUN_140391314(param_1,puVar3);
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c7340;
  FUN_1446ddc76(local_48,"PlayerController",1);
  FUN_14039176c(puVar3,uVar2,local_48[0],1);
  *puVar3 = &PTR_FUN_14b9c7340;
  FUN_140391314(param_1,puVar3);
  FUN_1400b22c2(local_48,"StartVendingMachineTutorial");
  thunk_FUN_140afad18(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee0e96 FUN_148ee0e96 body=217 status=ok
// SIG undefined FUN_148ee0e96(void)

void FUN_148ee0e96(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x364) = 0;
  cVar2 = FUN_148e83588();
  if (cVar2 != '\0') {
    FUN_148ee0f70(param_1);
  }
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xb50) == '\0')) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c71e0;
    FUN_1446ddc76(&local_38,"ClearPendingThumbnails",1);
    FUN_14039176c(puVar3,uVar1,local_38,1);
    *puVar3 = &PTR_FUN_14b9c71e0;
    FUN_140391314(param_1,puVar3);
  }
  FUN_148e82806(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee0f70 FUN_148ee0f70 body=485 status=ok
// SIG undefined FUN_148ee0f70(void)

void FUN_148ee0f70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    plVar4 = (longlong *)FUN_1408cbae2();
    lVar2 = *plVar4;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
    *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
    FUN_140bad112(lVar2 + 0x38,&DAT_149dfb77a);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
    plVar4 = (longlong *)FUN_1408cbae2(param_1);
    lVar2 = *plVar4;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
    *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
    FUN_146234ee6(lVar2);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
    *(byte *)(lVar1 + 0x8f8) = *(byte *)(lVar1 + 0x8f8) & 0x7f;
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar5 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(local_88,"ClearItem",1);
    FUN_14039176c(puVar5,uVar3,local_88[0],1);
    *puVar5 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar5 + 7) = 1;
    FUN_140391314(param_1,puVar5);
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b9c7360;
    local_60 = &LAB_14432223e;
    local_88[0] = &LAB_148e9a540;
    FUN_1462350d0(lVar1,local_88);
    if (local_88[0] != (undefined1 *)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar5 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(local_88,"RemoveState",1);
    FUN_14039176c(puVar5,uVar3,local_88[0],1);
    *puVar5 = &PTR_FUN_14b9c1410;
    puVar5[7] = DAT_14cbd93e8;
    FUN_140391314(param_1,puVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee1156 FUN_148ee1156 body=394 status=ok
// SIG undefined FUN_148ee1156(void)

void FUN_148ee1156(longlong param_1)

{
  PSRWLOCK pRVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  if (*(longlong *)(param_1 + 0x388) != 0) {
    plVar8 = (longlong *)FUN_148e87bf8(param_1);
    lVar3 = *plVar8;
    pRVar1 = (PSRWLOCK)(lVar3 + 0x1f0);
    AcquireSRWLockShared(pRVar1);
    cVar2 = *(char *)(lVar3 + 0x108);
    ReleaseSRWLockShared(pRVar1);
    if (cVar2 == '\x01') {
      plVar8 = (longlong *)FUN_148e87bf8(param_1);
      lVar3 = *plVar8;
      pRVar1 = (PSRWLOCK)(lVar3 + 0x1f0);
      AcquireSRWLockShared(pRVar1);
      cVar2 = *(char *)(lVar3 + 0xf0);
      ReleaseSRWLockShared(pRVar1);
      if (cVar2 == '\x01') {
        FUN_1457d7894(param_1,param_1 + 0x388);
      }
      plVar8 = (longlong *)FUN_148e87bf8(param_1);
      lVar3 = *plVar8;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1f0));
      *(int *)(lVar3 + 0x1e8) = *(int *)(lVar3 + 0x1e8) + 1;
      *(undefined1 *)(lVar3 + 0x108) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1f0));
    }
  }
  bVar4 = FUN_148e82c06(param_1);
  bVar5 = FUN_1442c8b50(param_1);
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    bVar6 = 0;
  }
  else {
    uVar9 = FUN_148ee2c78(param_1);
    bVar6 = FUN_148edf458(lVar3,uVar9);
  }
  bVar7 = FUN_148ee12e0(param_1);
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && ((byte)(bVar6 | bVar7 | bVar4 | bVar5) == 1)) {
    plVar8 = (longlong *)FUN_148e83714(param_1);
    plVar8 = (longlong *)*plVar8;
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 7));
    if ((longlong)(int)plVar8[1] == 0) {
      bVar12 = false;
    }
    else {
      lVar10 = *plVar8;
      lVar11 = (longlong)(int)plVar8[1] * 0x50;
      do {
        if (*(int *)(lVar10 + 0x20) < *(int *)(lVar10 + 0x28)) goto LAB_148ee12ab;
        lVar10 = lVar10 + 0x50;
        lVar11 = lVar11 + -0x50;
      } while (lVar11 != 0);
      lVar10 = 0;
LAB_148ee12ab:
      bVar12 = lVar10 != 0;
    }
    *(bool *)(lVar3 + 0xb51) = bVar12;
    ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 7));
    *(byte *)(lVar3 + 0x331) = *(byte *)(lVar3 + 0x331) | 2;
    *(undefined1 *)(lVar3 + 0x398) = 1;
  }
  return;
}



// FUNCTION 148ee12e0 FUN_148ee12e0 body=99 status=ok
// SIG undefined FUN_148ee12e0(void)

ulonglong FUN_148ee12e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0xb54);
    uVar4 = FUN_148e87bf8();
    cVar3 = FUN_1443140a2(lVar2,uVar4);
    if (cVar3 != '\0') {
      cVar3 = *(char *)(lVar2 + 0xb54);
      uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (cVar1 != cVar3) {
        FUN_148ee2cf0(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff);
        FUN_148ee2e6c(param_1,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff);
      }
      goto LAB_148ee12f6;
    }
  }
  uVar5 = 0;
LAB_148ee12f6:
  return uVar5 & 0xffffffff;
}



// FUNCTION 148ee1344 FUN_148ee1344 body=93 status=ok
// SIG undefined FUN_148ee1344(void)

void FUN_148ee1344(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_145916b62(lVar1);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    FUN_148e83588(param_1);
    FUN_148ee13a6(param_1,*(undefined4 *)(lVar1 + 0x328));
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x80;
  }
  return;
}



// FUNCTION 148ee13a6 FUN_148ee13a6 body=1063 status=ok
// SIG undefined FUN_148ee13a6(void)

void FUN_148ee13a6(longlong param_1,int param_2)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_148e83492();
  if ((cVar3 != '\0') && (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 != 0)) {
    if (((*(byte *)(lVar2 + 0x331) & 4) != 0) && (*(int *)(lVar2 + 0x328) != param_2)) {
      if (param_2 == -1) {
        pcVar10 = "BackpackSlotUnfocused";
      }
      else {
        pcVar10 = "BackpackSlotFocused";
      }
      FUN_1400b22c2(local_58,pcVar10);
      FUN_140de1078(param_1,local_58,0,0);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_148ee223e(lVar2,param_2);
    plVar6 = (longlong *)FUN_148e87bf8(param_1);
    lVar7 = *plVar6;
    SRWLock = (PSRWLOCK)(lVar7 + 0x1f0);
    AcquireSRWLockShared(SRWLock);
    cVar3 = *(char *)(lVar7 + 0x30);
    ReleaseSRWLockShared(SRWLock);
    uVar1 = *(uint *)(lVar2 + 0x8f8);
    lVar7 = FUN_148e84d1e(param_1);
    if (lVar7 == 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(local_58,"SetVisible",1);
      FUN_14039176c(puVar8,uVar9,local_58[0],1);
      *puVar8 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
      FUN_140391314(param_1,puVar8);
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(local_58,"SetVisible",1);
      FUN_14039176c(puVar8,uVar9,local_58[0],1);
      *puVar8 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 1;
      FUN_140391314(param_1,puVar8);
    }
    else {
      bVar13 = cVar3 == '\x01';
      bVar5 = *(byte *)(lVar2 + 0xb50);
      uVar12 = (uint)(bVar13 ^ bVar5) * 0x40 + 0x40;
      uVar9 = FUN_14001cc68(0x148,0x10);
      if ((bool)bVar5 == bVar13) {
        FUN_148eaaef0(uVar9,*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(lVar7 + 600));
        FUN_140391314(param_1,uVar9);
        cVar3 = FUN_148ee230e();
        uVar11 = 0;
        if (((cVar3 != '\0') && (uVar11 = 0, *(longlong *)(param_1 + 0x288) != 0)) &&
           (uVar11 = uVar12,
           *(int *)(*(longlong *)(param_1 + 0x288) + 0xc10) < *(int *)(lVar7 + 0x88))) {
          uVar11 = 0;
        }
      }
      else {
        local_80 = &local_78;
        local_68 = DAT_14c8464f0;
        local_78 = (undefined4)DAT_14c8464e0;
        uStack_74 = DAT_14c8464e0._4_4_;
        uStack_70 = (undefined4)DAT_14c8464e8;
        uStack_6c = DAT_14c8464e8._4_4_;
        local_88 = *(undefined4 *)(lVar7 + 0x254);
        FUN_14664e342(uVar9,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(lVar7 + 0x25c));
        FUN_140391314(param_1,uVar9);
        cVar3 = FUN_148ee229c(lVar7);
        uVar11 = uVar12;
        if (cVar3 == '\0') {
          uVar11 = 0;
        }
      }
      if ((*(byte *)(lVar7 + 0x9d) & 1) != 0) {
        puVar8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        *puVar8 = &PTR_FUN_14b9c7260;
        FUN_1446ddc76(local_58,"UpdateItemFlags",1);
        FUN_14039176c(puVar8,uVar9,local_58[0],1);
        *puVar8 = &PTR_FUN_14b9c7260;
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(lVar7 + 0x254);
        *(undefined8 *)((longlong)puVar8 + 0x3c) = 1;
        FUN_140391314(param_1,puVar8);
      }
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar4 = FUN_148e83588(param_1);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(local_58,"SetVisible",1);
      FUN_14039176c(puVar8,uVar9,local_58[0],1);
      *puVar8 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar8 + 7) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 1;
      FUN_140391314(param_1,puVar8);
      bVar5 = FUN_148e83588(param_1);
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c7290;
      FUN_1446ddc76(local_58,"SetGlyphs",1);
      FUN_14039176c(puVar8,uVar9,local_58[0],1);
      *puVar8 = &PTR_FUN_14b9c7290;
      *(uint *)(puVar8 + 7) = uVar1 >> 3 & 2 | uVar11 | (uint)bVar5 * 0x10 + 0x10 | 1;
      FUN_140391314(param_1,puVar8);
      *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x360);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee17ce FUN_148ee17ce body=804 status=ok
// SIG undefined FUN_148ee17ce(void)

void FUN_148ee17ce(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  FUN_1457fc042();
  lVar1 = param_1 + 0x160;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe3898);
  uVar6 = FUN_140b963dc(uVar5,0x3fc00000);
  *(undefined4 *)(param_1 + 0x360) = uVar6;
  *(undefined4 *)(param_1 + 0x364) = 0;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38d0);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x378) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38c0);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x368) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38c8);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x370) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38e0);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x380) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38e8);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x388) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38d8);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x390) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38f0);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x398) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe38f8);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x3a0) = local_38;
  uVar5 = FUN_144a7cdc2(lVar1,&DAT_14cbe3900);
  uVar5 = FUN_140625082(uVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x3a8) = local_38;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xb50) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x2d4);
      FUN_1447a1747(*(undefined8 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2d0));
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x2d4) != 0)) {
        FUN_1408be2c4(param_1 + 0x2c8,0);
      }
      iVar2 = *(int *)(param_1 + 0x2c4);
      FUN_1447a1747(*(undefined8 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 0x2c0));
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x2c4) != 0)) {
        FUN_1408be2c4(param_1 + 0x2b8,0);
      }
    }
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee1af4 FUN_148ee1af4 body=249 status=ok
// SIG undefined FUN_148ee1af4(void)

void FUN_148ee1af4(longlong param_1,float param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1442c986c();
  if (((((*(byte *)(param_1 + 0x8c) & 0x80) == 0) ||
       (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 == 0)) || (*(float *)(param_1 + 0x364) <= 0.0)
      ) || (param_2 = *(float *)(param_1 + 0x364) - param_2, *(float *)(param_1 + 0x364) = param_2,
           0.0 < param_2)) goto LAB_148ee1b24;
  if ((*(int *)(lVar2 + 0x67c) == -1) && (*(int *)(lVar2 + 0x680) == 0)) {
    bVar1 = *(byte *)(lVar2 + 0x4c7);
    uVar3 = FUN_14001cc68(0x68,0x10);
    local_44 = 0;
    if ((bVar1 & 0x20) != 0) goto LAB_148ee1b8f;
  }
  else {
    uVar3 = FUN_14001cc68(0x68,0x10);
LAB_148ee1b8f:
    local_44 = *(undefined4 *)(lVar2 + 0x680);
  }
  FUN_148e703f8(uVar3,*(undefined8 *)(param_1 + 0x30),&local_44,0);
  FUN_140391314(param_1,uVar3);
LAB_148ee1b24:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee1bee FUN_148ee1bee body=231 status=ok
// SIG undefined FUN_148ee1bee(void)

void FUN_148ee1bee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1442c8c42();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ee1e74;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ee1cd6(param_1,param_2,&DAT_14cb92b48,param_1);
      local_38 = FUN_148ee2074;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ee1cd6(param_1,param_2,&DAT_14cb92b50,param_1);
      local_38 = (code *)&LAB_148ee2218;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ee20fc(param_1,param_2,&DAT_14cb92b58,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee1cd6 FUN_148ee1cd6 body=413 status=ok
// SIG undefined FUN_148ee1cd6(void)

void FUN_148ee1cd6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  code **local_68;
  longlong local_60;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = (code *)*param_5;
  local_68 = &local_58;
  FUN_148ee20fc(param_1);
  local_60 = param_1 + 0x138;
  local_58 = FUN_140de0f20;
  local_50 = 0;
  local_68 = &local_58;
  uVar2 = FUN_144322114(param_2,param_3,2,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar2;
  local_58 = FUN_140de0f20;
  local_50 = 0;
  local_68 = &local_58;
  uVar2 = FUN_144322114(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar2;
  local_58 = FUN_140de0f20;
  local_50 = 0;
  local_68 = &local_58;
  uVar2 = FUN_144322114(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee1e74 FUN_148ee1e74 body=511 status=ok
// SIG undefined FUN_148ee1e74(void)

void FUN_148ee1e74(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0x288);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0xb54) == '\x01')) {
    local_48 = 0;
    uStack_40 = 0;
    if ((longlong)*(int *)(lVar8 + 0x408) != 0) {
      lVar6 = *(longlong *)(lVar8 + 0x400);
      lVar8 = (longlong)*(int *)(lVar8 + 0x408) * 0x268 + lVar6;
      do {
        cVar2 = FUN_148ee229c(lVar6);
        uVar1 = uStack_40;
        if ((cVar2 != '\0') && (-1 < *(char *)(lVar6 + 0x9d))) {
          lVar7 = (longlong)(int)uStack_40;
          uVar3 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
          if (uStack_40._4_4_ < uVar3) {
            FUN_14591741c(&local_48,uVar1 & 0xffffffff);
          }
          FUN_148c6b498(lVar7 * 0x268 + local_48,lVar6);
        }
        lVar7 = local_48;
        lVar6 = lVar6 + 0x268;
      } while (lVar6 != lVar8);
      if ((longlong)(int)uStack_40 != 0) {
        lVar6 = (longlong)(int)uStack_40 * 0x268;
        lVar8 = 0;
        do {
          if ((*(byte *)(local_48 + 0x9c + lVar8) & 2) != 0) {
            FUN_144316760(param_1,&local_48);
            goto LAB_148ee1fb3;
          }
          lVar8 = lVar8 + 0x268;
        } while (lVar6 - lVar8 != 0);
        local_58 = 0;
        uStack_50 = 0;
        lVar8 = 0;
        do {
          uVar1 = uStack_50;
          lVar5 = (longlong)(int)uStack_50;
          uVar3 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
          if (uStack_50._4_4_ < uVar3) {
            FUN_148d699d4(&local_58,uVar1 & 0xffffffff);
          }
          *(undefined4 *)(local_58 + lVar5 * 4) = *(undefined4 *)(lVar7 + 0x254 + lVar8);
          lVar8 = lVar8 + 0x268;
        } while (lVar6 - lVar8 != 0);
        if ((int)uStack_50 != 0) {
          uVar4 = FUN_14001cc68(0x70,0x10);
          FUN_148e70a92(uVar4,*(undefined8 *)(param_1 + 0x30),&local_58,0);
          FUN_140391314(param_1,uVar4);
          FUN_140de1078(param_1,&DAT_14cbe3828,0,0);
          FUN_1457d7894(param_1,param_1 + 0x370);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
    }
LAB_148ee1fb3:
    FUN_1412d6a39(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee2074 FUN_148ee2074 body=136 status=ok
// SIG undefined FUN_148ee2074(void)

void FUN_148ee2074(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0xb98) != 0)) {
    uVar2 = FUN_14001cc68(0x70,0x10);
    FUN_148e70ec6(uVar2,*(undefined8 *)(param_1 + 0x30),lVar1 + 0xb90,0);
    FUN_140391314(param_1,uVar2);
    FUN_140de1078(param_1,&DAT_14cbe3828,0,0);
    FUN_1457d7894(param_1,param_1 + 0x378);
    return;
  }
  return;
}



// FUNCTION 148ee20fc FUN_148ee20fc body=282 status=ok
// SIG undefined FUN_148ee20fc(void)

void FUN_148ee20fc(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1443221ba(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee223e FUN_148ee223e body=94 status=ok
// SIG undefined FUN_148ee223e(void)

void FUN_148ee223e(longlong param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x928) == '\0') {
    if (((int)param_2 < 0) || (*(int *)(param_1 + 0x3f8) <= (int)param_2)) {
      FUN_1401e0130(param_1 + 0x428);
    }
    else {
      FUN_14135191a(param_1 + 0x428,(ulonglong)param_2 * 0x268 + *(longlong *)(param_1 + 0x3f0));
    }
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x20;
    *(uint *)(param_1 + 0x328) = param_2;
  }
  return;
}



// FUNCTION 148ee229c FUN_148ee229c body=114 status=ok
// SIG undefined FUN_148ee229c(void)

bool FUN_148ee229c(longlong param_1)

{
  bool bVar1;
  
  if ((((((DAT_14cbe3b50 == '\0') && ((*(byte *)(param_1 + 0x9c) & 0x40) != 0)) ||
        ((DAT_14cbe3b80 == '\0' && ((*(byte *)(param_1 + 0x9c) & 0x20) != 0)))) ||
       ((DAT_14c76409c == '\0' && (*(char *)(param_1 + 0x9c) < '\0')))) ||
      ((DAT_14c76409e == '\0' && ((*(byte *)(param_1 + 0x9c) & 0x10) != 0)))) ||
     ((((*(byte *)(param_1 + 0x9e) & 0x40) != 0 || ((*(byte *)(param_1 + 0x9c) & 1) != 0)) ||
      ((*(byte *)(param_1 + 0x9f) & 0x20) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x254) != -1;
  }
  return bVar1;
}



// FUNCTION 148ee230e FUN_148ee230e body=67 status=ok
// SIG undefined FUN_148ee230e(void)

ulonglong FUN_148ee230e(void)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  
  plVar3 = (longlong *)FUN_148e8625c();
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  iVar2 = FUN_148e1abe8(lVar1 + 0x50);
  ReleaseSRWLockShared(SRWLock);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0 < iVar2) & 0xffffffff;
}



// FUNCTION 148ee2352 FUN_148ee2352 body=139 status=ok
// SIG undefined FUN_148ee2352(void)

void FUN_148ee2352(longlong param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  plVar4 = (longlong *)FUN_148e87bf8();
  lVar3 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar3 + 0x1f0);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar3 + 0x30);
  ReleaseSRWLockShared(SRWLock);
  if ((bool)*(char *)(lVar2 + 0xb50) == (cVar1 == '\x01')) {
    FUN_148ee25c4(param_1,param_2);
    return;
  }
  FUN_148ee23de(param_1,param_2);
  return;
}



// FUNCTION 148ee23de FUN_148ee23de body=462 status=ok
// SIG undefined FUN_148ee23de(void)

void FUN_148ee23de(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_2d8 [40];
  int **local_2b0;
  ulonglong *local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  int *local_290;
  undefined4 local_288;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar3 = FUN_148e8413e();
  if ((lVar3 != 0) &&
     (((iVar2 = *(int *)(lVar3 + 0x254), iVar2 != -1 || (*(int *)(lVar3 + 600) != 0)) ||
      ((*(byte *)(lVar3 + 0x9f) & 0x20) != 0)))) {
    bVar1 = *(byte *)(lVar3 + 0x9c);
    if ((bVar1 & 0x20) == 0) {
      if ((bVar1 & 0x40) == 0) {
        if ((bVar1 & 2) == 0) {
          if (iVar2 != -1) {
            uVar4 = FUN_14001cc68(0x70,0x10);
            local_290 = (int *)0x0;
            local_288 = 1;
            FUN_148c6bbc2(&local_290,1,0);
            *local_290 = iVar2;
            FUN_148e70a92(uVar4,*(undefined8 *)(param_1 + 0x30),&local_290,0);
            FUN_140391314(param_1,uVar4);
            if (local_290 != (int *)0x0) {
              FUN_1400020a8();
            }
            FUN_140de1078(param_1,&DAT_14cbe3828,0,0);
            FUN_1457d7894(param_1,param_1 + 0x370);
          }
        }
        else {
          FUN_148c6b498(&local_290,lVar3);
          local_2a8 = &local_28;
          local_2b0 = &local_290;
          FUN_148e8a332(&local_2a0);
          FUN_144316760(param_1,&local_2a0);
          FUN_1412d6a39(local_2a0,local_298);
          if (local_2a0 != 0) {
            FUN_1400020a8();
          }
          FUN_1412d6a62(&local_290);
        }
        goto LAB_148ee2439;
      }
      FUN_140de1078(param_1,&DAT_14cbe3230,0,0);
    }
    else {
      FUN_140de1078(param_1,&DAT_14cbe3230,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_2d8);
  }
LAB_148ee2439:
  if ((local_28 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee25c4 FUN_148ee25c4 body=296 status=ok
// SIG undefined FUN_148ee25c4(void)

void FUN_148ee25c4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_148e8413e();
  if ((lVar2 == 0) ||
     (((*(int *)(lVar2 + 0x254) == -1 && (*(int *)(lVar2 + 600) == 0)) &&
      ((*(byte *)(lVar2 + 0x9f) & 0x20) == 0)))) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x288) + 0xc10) < *(int *)(lVar2 + 0x88))) {
    uVar3 = FUN_14001cc68(0x60,0x10);
    FUN_148e71828(uVar3,*(undefined8 *)(param_1 + 0x30),0);
    lVar2 = 0x398;
  }
  else {
    cVar1 = FUN_148ee230e(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_14001cc68(0x68,0x10);
      FUN_148e706f4(uVar3,*(undefined8 *)(param_1 + 0x30),lVar2 + 600,0);
      lVar2 = 0x368;
      puVar4 = &DAT_14cbe3818;
      goto LAB_148ee2649;
    }
    uVar3 = FUN_14001cc68(0x60,0x10);
    FUN_148e71828(uVar3,*(undefined8 *)(param_1 + 0x30),0);
    lVar2 = 0x390;
  }
  puVar4 = &DAT_14cbe3230;
LAB_148ee2649:
  FUN_140391314(param_1,uVar3);
  FUN_140de1078(param_1,puVar4,0,0);
  FUN_1457d7894(param_1,lVar2 + param_1);
  return;
}



// FUNCTION 148ee26ec FUN_148ee26ec body=380 status=ok
// SIG undefined FUN_148ee26ec(void)

void FUN_148ee26ec(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x928) == '\x01') {
      *(undefined1 *)(lVar1 + 0x928) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(lVar1 + 0x1c0) == '\x01') {
      *(undefined1 *)(lVar1 + 0x1c0) = 0;
    }
    else {
      if (*(char *)(lVar1 + 0xc0) != '\x01') {
        if (*(char *)(lVar1 + 0xb50) == '\0') {
          cVar3 = FUN_145effa8e();
          if (cVar3 == '\0') {
            uVar5 = FUN_14001cc68(0x40,0x10);
            FUN_148e83602(uVar5,*(undefined8 *)(param_1 + 0x30),0);
            FUN_140391314(param_1,uVar5);
            uVar5 = FUN_14001cc68(0x40,0x10);
            FUN_148e83602(uVar5,*(undefined8 *)(param_1 + 0x30),1);
            FUN_140391314(param_1,uVar5);
          }
          puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          *puVar4 = &PTR_FUN_14b9c13a0;
          FUN_1446ddc76(&local_38,"ClearStructureredInteractable",1);
          FUN_14039176c(puVar4,uVar5,local_38,1);
          *puVar4 = &PTR_FUN_14b9c13a0;
          FUN_140391314(param_1,puVar4);
        }
        goto LAB_148ee2749;
      }
      *(undefined1 *)(lVar1 + 0xc0) = 0;
    }
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
LAB_148ee2749:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee2882 FUN_148ee2882 body=322 status=ok
// SIG undefined FUN_148ee2882(void)

void FUN_148ee2882(longlong param_1,uint param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x928) != '\0') {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x32c);
  if ((-1 < (longlong)(int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x3f8))) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3f0) + 0x9e + (longlong)(int)uVar3 * 0x268);
    *pbVar1 = *pbVar1 & 0xfd;
    uVar3 = *(uint *)(param_1 + 0x32c);
  }
  if ((*(byte *)(param_1 + 0x8f9) & 1) != 0) {
    if (uVar3 == 0xffffffff) goto LAB_148ee28ff;
    uVar3 = uVar3 + *(int *)(param_1 + 0x900);
  }
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x408))) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x400) + 0x9e + (ulonglong)uVar3 * 0x268);
    *pbVar1 = *pbVar1 & 0xfd;
  }
LAB_148ee28ff:
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x3f8) <= (int)param_2)) {
    FUN_1401e0130(param_1 + 0x690);
  }
  else {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3f0) + 0x9e + (ulonglong)param_2 * 0x268);
    *pbVar1 = *pbVar1 | 2;
    FUN_14135191a(param_1 + 0x690,(ulonglong)param_2 * 0x268 + *(longlong *)(param_1 + 0x3f0));
  }
  uVar3 = param_2;
  if ((param_2 != 0xffffffff) && ((*(byte *)(param_1 + 0x8f9) & 1) != 0)) {
    uVar3 = *(int *)(param_1 + 0x900) + param_2;
  }
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x408))) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x400) + 0x9e + (ulonglong)uVar3 * 0x268);
    *pbVar1 = *pbVar1 | 2;
  }
  *(uint *)(param_1 + 0x32c) = param_2;
  puVar2 = *(ushort **)(param_1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee29c4 FUN_148ee29c4 body=306 status=ok
// SIG undefined FUN_148ee29c4(void)

void FUN_148ee29c4(longlong param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x928) != '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x3f8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3f0);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar4 = lVar4 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar4 = lVar4 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar4 != 0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3f8))) {
    lVar3 = *(longlong *)(param_1 + 0x3f0);
    lVar4 = (ulonglong)param_2 * 0x268;
    if ((*(int *)(lVar3 + 0x254 + lVar4) != -1) ||
       ((*(int *)(lVar3 + lVar4 + 600) != 0 || ((*(byte *)(lVar3 + lVar4 + 0x9f) & 0x20) != 0)))) {
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 | 1;
      *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) | 0x80;
      if (((*(byte *)(param_1 + 0x8f9) & 1) != 0) &&
         (param_2 = param_2 + *(int *)(param_1 + 0x900), (int)param_2 < 0)) {
        return;
      }
      if (*(int *)(param_1 + 0x408) <= (int)param_2) {
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x400);
      lVar4 = (ulonglong)param_2 * 0x268;
      if (((*(int *)(lVar3 + 0x254 + lVar4) == -1) && (*(int *)(lVar3 + lVar4 + 600) == 0)) &&
         ((*(byte *)(lVar3 + lVar4 + 0x9f) & 0x20) == 0)) {
        return;
      }
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 | 1;
      return;
    }
  }
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0x7f;
  return;
}



// FUNCTION 148ee2af6 FUN_148ee2af6 body=386 status=ok
// SIG undefined FUN_148ee2af6(void)

longlong * FUN_148ee2af6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148ee2c07:
    *puVar5 = &PTR_LAB_14b972ed0;
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
    *puVar5 = &PTR_FUN_14b9d8810;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ee2c07;
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
    *puVar5 = &PTR_LAB_14b972ed0;
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
    *puVar5 = &PTR_FUN_14b9d8810;
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



// FUNCTION 148ee2c78 FUN_148ee2c78 body=118 status=ok
// SIG undefined FUN_148ee2c78(void)

longlong FUN_148ee2c78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee2cf0 FUN_148ee2cf0 body=379 status=ok
// SIG undefined FUN_148ee2cf0(void)

void FUN_148ee2cf0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    if (param_2 == '\x02') {
      puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar1 = &PTR_FUN_14b9c1410;
      FUN_1446ddc76(&local_38,"RemoveState",1);
      FUN_14039176c(puVar1,uVar2,local_38,1);
      *puVar1 = &PTR_FUN_14b9c1410;
      uVar2 = DAT_14cbd93e0;
    }
    else if (param_2 == '\x01') {
      puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar1 = &PTR_FUN_14b9c1410;
      FUN_1446ddc76(&local_38,"RemoveState",1);
      FUN_14039176c(puVar1,uVar2,local_38,1);
      *puVar1 = &PTR_FUN_14b9c1410;
      uVar2 = DAT_14cbd93d8;
    }
    else {
      if (param_2 != '\0') goto LAB_148ee2e49;
      puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar1 = &PTR_FUN_14b9c1410;
      FUN_1446ddc76(&local_38,"RemoveState",1);
      FUN_14039176c(puVar1,uVar2,local_38,1);
      *puVar1 = &PTR_FUN_14b9c1410;
      uVar2 = DAT_14cbd93d0;
    }
    puVar1[7] = uVar2;
    FUN_140391314(param_1,puVar1);
  }
LAB_148ee2e49:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee2e6c FUN_148ee2e6c body=414 status=ok
// SIG undefined FUN_148ee2e6c(void)

void FUN_148ee2e6c(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_148ee2fe8;
  FUN_14431454e(lVar1);
  if (param_2 == '\x02') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar2 = &PTR_FUN_14b9c13e0;
    FUN_1446ddc76(&local_38,"AddState",1);
    FUN_14039176c(puVar2,*(undefined8 *)(param_1 + 0x30),local_38,1);
    *puVar2 = &PTR_FUN_14b9c13e0;
    uVar3 = DAT_14cbd93e0;
LAB_148ee2fc7:
    puVar2[7] = uVar3;
    *(undefined1 *)(puVar2 + 8) = 0;
    lVar4 = 0xba4;
  }
  else {
    if (param_2 != '\x01') {
      if (param_2 != '\0') goto LAB_148ee2fe8;
      puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      *puVar2 = &PTR_FUN_14b9c13e0;
      FUN_1446ddc76(&local_38,"AddState",1);
      FUN_14039176c(puVar2,*(undefined8 *)(param_1 + 0x30),local_38,1);
      *puVar2 = &PTR_FUN_14b9c13e0;
      uVar3 = DAT_14cbd93d0;
      goto LAB_148ee2fc7;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar2 = &PTR_FUN_14b9c13e0;
    FUN_1446ddc76(&local_38,"AddState",1);
    FUN_14039176c(puVar2,*(undefined8 *)(param_1 + 0x30),local_38,1);
    *puVar2 = &PTR_FUN_14b9c13e0;
    puVar2[7] = DAT_14cbd93d8;
    *(undefined1 *)(puVar2 + 8) = 0;
    lVar4 = 0xacc;
  }
  FUN_140391314(param_1,puVar2);
  *(undefined4 *)(lVar1 + lVar4) = 0;
LAB_148ee2fe8:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee300c FUN_148ee300c body=150 status=ok
// SIG undefined FUN_148ee300c(void)

void FUN_148ee300c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0xb80) == '\x02')) && (0 < *(int *)(lVar1 + 0xb88))) &&
     ((*(int *)(lVar1 + 0xb88) <= *(int *)(lVar1 + 0xc10) && (*(char *)(lVar1 + 0xb51) == '\x01'))))
  {
    FUN_140de1078(param_1,&DAT_14cbe3818,0,0);
    uVar2 = FUN_14001cc68(0x68,0x10);
    FUN_148e7129c(uVar2,*(undefined8 *)(param_1 + 0x30),0);
    FUN_140391314(param_1,uVar2);
    FUN_1457d7894(param_1,param_1 + 0x380);
    return;
  }
  return;
}



// FUNCTION 148ee30a2 FUN_148ee30a2 body=126 status=ok
// SIG undefined FUN_148ee30a2(void)

void FUN_148ee30a2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0xb80) == '\x01')) && (0 < *(int *)(lVar1 + 0xb88))) &&
     (*(int *)(lVar1 + 0xb88) <= *(int *)(lVar1 + 0xc10))) {
    FUN_140de1078(param_1,&DAT_14cbe3818,0,0);
    uVar2 = FUN_14001cc68(0x60,0x10);
    FUN_148e71566(uVar2,*(undefined8 *)(param_1 + 0x30),0);
    FUN_140391314(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 148ee3120 FUN_148ee3120 body=75 status=ok
// SIG undefined FUN_148ee3120(void)

void FUN_148ee3120(undefined8 param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_148e87bf8();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0x1f0);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar2 + 0x30);
  ReleaseSRWLockShared(SRWLock);
  if (cVar1 == '\x01') {
    FUN_1442ca1f6(param_1);
    return;
  }
  return;
}



// FUNCTION 148ee316c FUN_148ee316c body=75 status=ok
// SIG undefined FUN_148ee316c(void)

void FUN_148ee316c(undefined8 param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_148e87bf8();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0x1f0);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar2 + 0x30);
  ReleaseSRWLockShared(SRWLock);
  if (cVar1 == '\x01') {
    FUN_1442ca9a0(param_1);
    return;
  }
  return;
}



// FUNCTION 148ee31b8 FUN_148ee31b8 body=380 status=ok
// SIG undefined FUN_148ee31b8(void)

void FUN_148ee31b8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146149dcc();
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_50,"ClearItem",1);
  FUN_14039176c(puVar4,uVar1,local_50[0],1);
  *puVar4 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar4 + 7) = 0;
  FUN_140391314(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_50,"ClearItem",1);
  FUN_14039176c(puVar4,uVar1,local_50[0],1);
  *puVar4 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar4 + 7) = 1;
  FUN_140391314(param_1,puVar4);
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_148ee32ea;
  if (*(int *)(param_1 + 0x370) == 0) {
    FUN_1400b22c2(local_50,"vending_buy_back");
    iVar3 = FUN_1405e9454(lVar2 + 0x188,local_50);
    if (iVar3 != -1) goto LAB_148ee32d4;
  }
  else {
    FUN_1400b22c2(local_50,"vending_buy_back");
    local_40 = local_50;
    iVar3 = FUN_140c8411c(lVar2 + 0x188);
    if (0 < iVar3) {
LAB_148ee32d4:
      *(int *)(lVar2 + 0x198) = *(int *)(lVar2 + 0x198) + 1;
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_148ee32ea:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee3336 FUN_148ee3336 body=324 status=ok
// SIG undefined FUN_148ee3336(void)

void FUN_148ee3336(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145da7d00();
  iVar1 = *(int *)(param_1 + 0x360);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x358);
    lVar6 = 0;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar6) != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar6);
      }
      FUN_140002266(&local_68,L"UI.State.%s",puVar7);
      iVar4 = local_60 + -1;
      if (local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1446f82e2(local_58,iVar4,local_68,1);
      FUN_1447683ea(&local_50,local_58,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar5 = &PTR_FUN_14b9c1410;
      FUN_1446ddc76(&local_68,"RemoveState",1);
      FUN_14039176c(puVar5,uVar3,local_68,1);
      *puVar5 = &PTR_FUN_14b9c1410;
      puVar5[7] = local_50;
      FUN_140391314(param_1,puVar5);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee347c FUN_148ee347c body=1204 status=ok
// SIG undefined FUN_148ee347c(void)

void FUN_148ee347c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  PSRWLOCK SRWLock;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *param_2;
  if (lVar5 == DAT_14cbe3980) {
    FUN_1405e93bc(param_1,&local_38);
    AcquireSRWLockExclusive((PSRWLOCK)(local_38 + 0x3e));
    *(int *)(local_38 + 0x3d) = (int)local_38[0x3d] + 1;
    FUN_1449a0272(local_38 + 0x17,param_3);
    ReleaseSRWLockExclusive((PSRWLOCK)(local_38 + 0x3e));
    plVar6 = local_30;
  }
  else {
    if (lVar5 == DAT_14cbe3988) {
      if ((int)param_3[1] == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_3;
      }
      lVar5 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar4 + lVar5);
        uVar7 = (ulonglong)uVar8;
        uVar10 = *(ushort *)((longlong)L"default" + lVar5);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_148ee37ae;
LAB_148ee36ee:
        lVar5 = lVar5 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ee36ee;
      }
      if (uVar8 != uVar10) {
        FUN_140009b9a(&local_38,param_3);
        FUN_1405e93bc(param_1,&local_48);
        AcquireSRWLockExclusive((PSRWLOCK)(local_48 + 0x1f0));
        *(int *)(local_48 + 0x1e8) = *(int *)(local_48 + 0x1e8) + 1;
        FUN_14003c038(local_48 + 0x18,&local_38);
        ReleaseSRWLockExclusive((PSRWLOCK)(local_48 + 0x1f0));
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_40 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x10))();
        }
        goto LAB_148ee3514;
      }
LAB_148ee37ae:
      FUN_1405e93bc(param_1,&local_38);
      AcquireSRWLockExclusive((PSRWLOCK)(local_38 + 0x3e));
      *(int *)(local_38 + 0x3d) = (int)local_38[0x3d] + 1;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      FUN_1410e88ee(local_38 + 3,local_38);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    if (lVar5 != DAT_14cbe3990) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    iVar3 = (int)param_3[1];
    if (iVar3 == DAT_14cbe39a0) {
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*param_3 + lVar5);
          uVar7 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(DAT_14cbe3998 + lVar5);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_148ee385b;
LAB_148ee35a4:
          lVar5 = lVar5 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ee35a4;
        }
        if (uVar8 != uVar10) goto LAB_148ee35d3;
      }
LAB_148ee385b:
      FUN_1405e93bc(param_1,&local_38);
      SRWLock = (PSRWLOCK)(local_38 + 0x3e);
      AcquireSRWLockExclusive(SRWLock);
      *(int *)(local_38 + 0x3d) = (int)local_38[0x3d] + 1;
      if ((char)local_38[6] != '\0') {
        iVar3 = *(int *)((longlong)local_38 + 0x34) + 1;
LAB_148ee388f:
        *(undefined1 *)(local_38 + 6) = 0;
        goto LAB_148ee3893;
      }
      if (*(int *)((longlong)local_38 + 0x34) == 0) {
        iVar3 = 1;
        goto LAB_148ee388f;
      }
    }
    else {
      if (DAT_14cbe39a0 + iVar3 == 1) goto LAB_148ee385b;
LAB_148ee35d3:
      if (iVar3 != DAT_14cbe39b0) {
        if (DAT_14cbe39b0 + iVar3 == 1) goto LAB_148ee38bf;
LAB_148ee3646:
        if (iVar3 == DAT_14cbe39c0) {
          if (1 < iVar3) {
            lVar5 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*param_3 + lVar5);
              uVar7 = (ulonglong)uVar8;
              uVar10 = *(ushort *)(DAT_14cbe39b8 + lVar5);
              if (uVar8 != uVar10) break;
              if (uVar8 == 0) goto LAB_148ee390f;
LAB_148ee3689:
              lVar5 = lVar5 + 2;
            }
            if ((uVar10 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar9 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ee3689;
            }
            if (uVar8 != uVar10) goto LAB_148ee3514;
          }
        }
        else if (DAT_14cbe39c0 + iVar3 != 1) goto LAB_148ee3514;
LAB_148ee390f:
        FUN_1405e93bc(param_1,&local_38);
        SRWLock = (PSRWLOCK)(local_38 + 0x3e);
        AcquireSRWLockExclusive(SRWLock);
        *(int *)(local_38 + 0x3d) = (int)local_38[0x3d] + 1;
        if ((char)local_38[6] != '\x02') {
          iVar3 = *(int *)((longlong)local_38 + 0x34) + 1;
LAB_148ee3952:
          *(undefined1 *)(local_38 + 6) = 2;
          goto LAB_148ee3893;
        }
        if (*(int *)((longlong)local_38 + 0x34) == 0) {
          iVar3 = 1;
          goto LAB_148ee3952;
        }
        goto LAB_148ee3896;
      }
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*param_3 + lVar5);
          uVar7 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(DAT_14cbe39a8 + lVar5);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_148ee38bf;
LAB_148ee3617:
          lVar5 = lVar5 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ee3617;
        }
        if (uVar8 != uVar10) goto LAB_148ee3646;
      }
LAB_148ee38bf:
      FUN_1405e93bc(param_1,&local_38);
      SRWLock = (PSRWLOCK)(local_38 + 0x3e);
      AcquireSRWLockExclusive(SRWLock);
      *(int *)(local_38 + 0x3d) = (int)local_38[0x3d] + 1;
      if ((char)local_38[6] == '\x01') {
        if (*(int *)((longlong)local_38 + 0x34) != 0) goto LAB_148ee3896;
        iVar3 = 1;
      }
      else {
        iVar3 = *(int *)((longlong)local_38 + 0x34) + 1;
      }
      *(undefined1 *)(local_38 + 6) = 1;
LAB_148ee3893:
      *(int *)((longlong)local_38 + 0x34) = iVar3;
    }
LAB_148ee3896:
    ReleaseSRWLockExclusive(SRWLock);
    plVar6 = local_30;
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
LAB_148ee3514:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee395c FUN_148ee395c body=1105 status=ok
// SIG undefined FUN_148ee395c(void)

void FUN_148ee395c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a787a6(param_1,param_2 + 0xb8);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0xf0);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x80);
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0x1d8);
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfe | *(byte *)(param_2 + 0x1d0);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_1413a454c(&local_40,uVar3,0);
  uVar6 = FUN_1447a1f4a(&local_40);
  FUN_144a787a6(param_1 + 0x60,uVar6);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x44);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x188);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 400);
  FUN_144a787a6(param_1 + 200,param_2 + 0x1a8);
  bVar10 = *(byte *)(param_1 + 0x9c);
  bVar8 = *(byte *)(param_1 + 0x9e) & 0xfb | *(char *)(param_2 + 0x1c0) << 2;
  *(byte *)(param_1 + 0x9e) = bVar8;
  bVar9 = bVar8 & 0xf7 | *(char *)(param_2 + 0x1c8) << 3;
  *(byte *)(param_1 + 0x9e) = bVar9;
  bVar11 = *(int *)(param_2 + 0x430) == 0;
  *(byte *)(param_1 + 0x9c) = bVar10 & 0xfc | bVar11;
  bVar10 = bVar10 & 0xf8 | bVar11 | *(char *)(param_2 + 0xe8) << 2;
  *(byte *)(param_1 + 0x9c) = bVar10;
  cVar5 = FUN_141353716(param_2);
  *(byte *)(param_1 + 0x9c) = bVar10 & 5 | cVar5 << 3;
  bVar10 = *(byte *)(param_1 + 0x9d);
  *(byte *)(param_1 + 0x9d) = bVar10 & 0xfe;
  *(byte *)(param_1 + 0x9e) = bVar9 & 0xbf;
  bVar8 = 4;
  if (*(char *)(param_2 + 0x400) == '\0') {
    bVar8 = *(char *)(param_2 + 0x408) << 2;
  }
  bVar8 = bVar10 & 0xfa | bVar8;
  *(byte *)(param_1 + 0x9d) = bVar8;
  bVar8 = bVar8 & 0xf6 | *(char *)(param_2 + 0x3f8) << 3;
  *(byte *)(param_1 + 0x9d) = bVar8;
  bVar10 = *(byte *)(param_1 + 0x9f) & 0xbf | *(char *)(param_2 + 0x400) << 6;
  *(byte *)(param_1 + 0x9f) = bVar10;
  *(byte *)(param_1 + 0x9f) = bVar10 & 0x7f | *(char *)(param_2 + 0x408) << 7;
  *(byte *)(param_1 + 0x9d) = bVar8 & 0xee;
  *(byte *)(param_1 + 0x9e) = bVar9 & 0x3f;
  cVar5 = FUN_1413536d2(param_2);
  *(byte *)(param_1 + 0x9d) = bVar8 & 0xce | cVar5 << 5;
  lVar7 = FUN_140b47a16(param_2 + 0x218,&DAT_14cbcb7b0);
  if ((lVar7 == 0) || (*(char *)(lVar7 + 8) != '\0')) {
    bVar10 = 0;
  }
  else {
    bVar10 = (*(longlong *)(lVar7 + 0x28) != 0) << 4;
  }
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xef | bVar10;
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    bVar10 = *(byte *)(param_1 + 0x9d);
    bVar8 = 0x40;
    if (((bVar10 & 0x20) == 0 && (*(byte *)(param_1 + 0x9c) & 8) == 0) &&
       (*(int *)(param_1 + 0xc0) < 2)) {
      bVar8 = (1 < *(int *)(param_1 + 0xd0)) << 6;
    }
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x9d);
    bVar8 = 0;
  }
  *(byte *)(param_1 + 0x9d) = bVar10 & 0xbf | bVar8;
  FUN_140bee9ec(param_1 + 0x70,param_2 + 0x50);
  FUN_14020fad6(param_1 + 0x108,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x118,&DAT_149dfb77a);
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xfd;
  FUN_14135375c(param_2,&local_40);
  if ((longlong **)(param_1 + 0xf8) == &local_40) {
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_1 + 0xf8) = local_40;
    *(undefined4 *)(param_1 + 0x100) = local_38;
    *(undefined4 *)(param_1 + 0x104) = local_34;
  }
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 0x430);
  bVar10 = *(byte *)(param_1 + 0x9e) & 0xef | *(char *)(param_2 + 0x438) << 4;
  *(byte *)(param_1 + 0x9e) = bVar10;
  *(byte *)(param_1 + 0x9e) = bVar10 & 0xdf | *(char *)(param_2 + 0x440) << 5;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee3dae FUN_148ee3dae body=719 status=ok
// SIG undefined FUN_148ee3dae(void)

undefined8 * FUN_148ee3dae(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  void *_Src;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    param_1 = param_1 + 0x70;
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe34a0);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3318;
      _Src = DAT_14cbe3310;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe34b0);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3328;
      _Src = DAT_14cbe3320;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe34c0);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3348;
      _Src = DAT_14cbe3340;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe34d0);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3358;
      _Src = DAT_14cbe3350;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe34e0);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3338;
      _Src = DAT_14cbe3330;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe3500);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe33c8;
      _Src = DAT_14cbe33c0;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe34f0);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3378;
      _Src = DAT_14cbe3370;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe3510);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3388;
      _Src = DAT_14cbe3380;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe3520);
    if (cVar1 != '\0') {
      *param_2 = 0;
      uVar2 = (ulonglong)DAT_14cbe3368;
      _Src = DAT_14cbe3360;
      goto LAB_148ee3e07;
    }
    cVar1 = FUN_144a23846(param_1,&DAT_14cbe3530);
    if (cVar1 == '\0') {
      cVar1 = FUN_144a23846(param_1,&DAT_14cbe3540);
      if (cVar1 == '\0') {
        cVar1 = FUN_144a23846(param_1,&DAT_14cbe3550);
        if (cVar1 == '\0') {
          cVar1 = FUN_144a23846(param_1,&DAT_14cbe3560);
          if (cVar1 == '\0') {
            cVar1 = FUN_144a23846(param_1,&DAT_14cbe3570);
            if (cVar1 == '\0') {
              cVar1 = FUN_144a23846(param_1,&DAT_14cbe3590);
              if (cVar1 != '\0') {
                *param_2 = 0;
                uVar2 = (ulonglong)DAT_14cbe33b8;
                _Src = DAT_14cbe33b0;
                goto LAB_148ee3e07;
              }
              cVar1 = FUN_144a23846(param_1,&DAT_14cbe3580);
              *param_2 = 0;
              if (cVar1 != '\0') {
                uVar2 = (ulonglong)DAT_14cbe33a8;
                _Src = DAT_14cbe33a0;
                goto LAB_148ee3e07;
              }
              goto LAB_148ee3df9;
            }
          }
        }
      }
    }
    *param_2 = 0;
    uVar2 = (ulonglong)DAT_14cbe3398;
    _Src = DAT_14cbe3390;
  }
  else {
    *param_2 = 0;
LAB_148ee3df9:
    uVar2 = (ulonglong)DAT_14cbe3268;
    _Src = DAT_14cbe3260;
  }
LAB_148ee3e07:
  *(int *)(param_2 + 1) = (int)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,uVar2 & 0xffffffff,0);
    memcpy((void *)*param_2,_Src,uVar2 * 2);
  }
  return param_2;
}


