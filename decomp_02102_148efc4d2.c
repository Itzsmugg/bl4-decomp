// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148efc4d2 FUN_148efc4d2 body=81 status=ok
// SIG undefined FUN_148efc4d2(void)

undefined8 FUN_148efc4d2(longlong param_1)

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



// FUNCTION 148efc52a FUN_148efc52a body=89 status=ok
// SIG undefined FUN_148efc52a(void)

bool FUN_148efc52a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148efc575;
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
LAB_148efc575:
  return lVar6 == param_2;
}



// FUNCTION 148efc5a0 FUN_148efc5a0 body=118 status=ok
// SIG undefined FUN_148efc5a0(void)

void FUN_148efc5a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db790;
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



// FUNCTION 148efc616 FUN_148efc616 body=118 status=ok
// SIG undefined FUN_148efc616(void)

void FUN_148efc616(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db790;
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



// FUNCTION 148efc68c FUN_148efc68c body=156 status=ok
// SIG undefined FUN_148efc68c(void)

void FUN_148efc68c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db790;
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
                    /* WARNING: Could not recover jumptable at 0x000148efc718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efc728 FUN_148efc728 body=100 status=ok
// SIG undefined FUN_148efc728(void)

void FUN_148efc728(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148efc774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148efc781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148efc78c FUN_148efc78c body=100 status=ok
// SIG undefined FUN_148efc78c(void)

ulonglong FUN_148efc78c(longlong param_1)

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
LAB_148efc7e5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148efc7e5;
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



// FUNCTION 148efc7f0 FUN_148efc7f0 body=30 status=ok
// SIG undefined FUN_148efc7f0(void)

void * FUN_148efc7f0(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efc820 FUN_148efc820 body=122 status=ok
// SIG undefined FUN_148efc820(void)

void FUN_148efc820(longlong param_1,longlong *param_2)

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



// FUNCTION 148efc89c FUN_148efc89c body=30 status=ok
// SIG undefined FUN_148efc89c(void)

void * FUN_148efc89c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efc8ba FUN_148efc8ba body=37 status=ok
// SIG undefined FUN_148efc8ba(void)

void FUN_148efc8ba(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148efc8db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148efc8e6 FUN_148efc8e6 body=30 status=ok
// SIG undefined FUN_148efc8e6(void)

void * FUN_148efc8e6(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efc916 FUN_148efc916 body=197 status=ok
// SIG undefined FUN_148efc916(void)

void FUN_148efc916(longlong param_1,longlong *param_2)

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
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
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



// FUNCTION 148efc9dc FUN_148efc9dc body=30 status=ok
// SIG undefined FUN_148efc9dc(void)

void * FUN_148efc9dc(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efca0c FUN_148efca0c body=234 status=ok
// SIG undefined FUN_148efca0c(void)

void FUN_148efca0c(longlong param_1,longlong *param_2)

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



// FUNCTION 148efcaf8 FUN_148efcaf8 body=48 status=ok
// SIG undefined FUN_148efcaf8(void)

void FUN_148efcaf8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 148efcb28 FUN_148efcb28 body=147 status=ok
// SIG undefined FUN_148efcb28(void)

void FUN_148efcb28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148efcbbc FUN_148efcbbc body=68 status=ok
// SIG undefined FUN_148efcbbc(void)

undefined8 * FUN_148efcbbc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9db880;
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



// FUNCTION 148efcc04 FUN_148efcc04 body=81 status=ok
// SIG undefined FUN_148efcc04(void)

undefined8 FUN_148efcc04(longlong param_1)

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



// FUNCTION 148efcc5c FUN_148efcc5c body=89 status=ok
// SIG undefined FUN_148efcc5c(void)

bool FUN_148efcc5c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148efcca7;
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
LAB_148efcca7:
  return lVar6 == param_2;
}



// FUNCTION 148efccd2 FUN_148efccd2 body=118 status=ok
// SIG undefined FUN_148efccd2(void)

void FUN_148efccd2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db880;
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



// FUNCTION 148efcd48 FUN_148efcd48 body=118 status=ok
// SIG undefined FUN_148efcd48(void)

void FUN_148efcd48(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db880;
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



// FUNCTION 148efcdbe FUN_148efcdbe body=156 status=ok
// SIG undefined FUN_148efcdbe(void)

void FUN_148efcdbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db880;
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
                    /* WARNING: Could not recover jumptable at 0x000148efce4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efce5a FUN_148efce5a body=100 status=ok
// SIG undefined FUN_148efce5a(void)

ulonglong FUN_148efce5a(longlong param_1)

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
LAB_148efceb3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148efceb3;
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



// FUNCTION 148efcebe FUN_148efcebe body=30 status=ok
// SIG undefined FUN_148efcebe(void)

void * FUN_148efcebe(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efcee2 FUN_148efcee2 body=30 status=ok
// SIG undefined FUN_148efcee2(void)

void * FUN_148efcee2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efcf12 FUN_148efcf12 body=197 status=ok
// SIG undefined FUN_148efcf12(void)

void FUN_148efcf12(longlong param_1,longlong *param_2)

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
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
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



// FUNCTION 148efcfd8 FUN_148efcfd8 body=76 status=ok
// SIG undefined FUN_148efcfd8(void)

void FUN_148efcfd8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b92dba();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148efd015;
    }
  }
  lVar2 = 0;
LAB_148efd015:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148efd024 FUN_148efd024 body=95 status=ok
// SIG undefined FUN_148efd024(void)

void FUN_148efd024(longlong param_1,uint param_2)

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



// FUNCTION 148efd084 FUN_148efd084 body=17 status=ok
// SIG undefined FUN_148efd084(void)

void FUN_148efd084(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efd090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148efd096 FUN_148efd096 body=29 status=ok
// SIG undefined FUN_148efd096(void)

undefined8 FUN_148efd096(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efd0b4 FUN_148efd0b4 body=132 status=ok
// SIG undefined FUN_148efd0b4(void)

void FUN_148efd0b4(longlong param_1,int param_2)

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



// FUNCTION 148efd139 FUN_148efd139 body=40 status=ok
// SIG undefined FUN_148efd139(void)

void FUN_148efd139(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148efd162 FUN_148efd162 body=31 status=ok
// SIG undefined FUN_148efd162(void)

undefined8 FUN_148efd162(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efd19c FUN_148efd19c body=29 status=ok
// SIG undefined FUN_148efd19c(void)

bool FUN_148efd19c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efd1ba FUN_148efd1ba body=26 status=ok
// SIG undefined FUN_148efd1ba(void)

bool FUN_148efd1ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148efd1d4 FUN_148efd1d4 body=101 status=ok
// SIG undefined FUN_148efd1d4(void)

void FUN_148efd1d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9dbc90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbc20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd23a FUN_148efd23a body=101 status=ok
// SIG undefined FUN_148efd23a(void)

void FUN_148efd23a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9dbc90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbc20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd2a0 FUN_148efd2a0 body=134 status=ok
// SIG undefined FUN_148efd2a0(void)

void FUN_148efd2a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9dbc90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbc20;
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
                    /* WARNING: Could not recover jumptable at 0x000148efd317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efd326 FUN_148efd326 body=60 status=ok
// SIG undefined FUN_148efd326(void)

void FUN_148efd326(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efd35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148efd362 FUN_148efd362 body=173 status=ok
// SIG undefined FUN_148efd362(void)

bool FUN_148efd362(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efd412 FUN_148efd412 body=31 status=ok
// SIG undefined FUN_148efd412(void)

undefined8 FUN_148efd412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efd44c FUN_148efd44c body=29 status=ok
// SIG undefined FUN_148efd44c(void)

bool FUN_148efd44c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efd46a FUN_148efd46a body=101 status=ok
// SIG undefined FUN_148efd46a(void)

void FUN_148efd46a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd4d0 FUN_148efd4d0 body=101 status=ok
// SIG undefined FUN_148efd4d0(void)

void FUN_148efd4d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd536 FUN_148efd536 body=134 status=ok
// SIG undefined FUN_148efd536(void)

void FUN_148efd536(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbd00;
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
                    /* WARNING: Could not recover jumptable at 0x000148efd5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efd5bc FUN_148efd5bc body=50 status=ok
// SIG undefined FUN_148efd5bc(void)

void FUN_148efd5bc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efd5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efd5ee FUN_148efd5ee body=165 status=ok
// SIG undefined FUN_148efd5ee(void)

bool FUN_148efd5ee(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148efd694 FUN_148efd694 body=31 status=ok
// SIG undefined FUN_148efd694(void)

undefined8 FUN_148efd694(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efd6ce FUN_148efd6ce body=29 status=ok
// SIG undefined FUN_148efd6ce(void)

bool FUN_148efd6ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efd6ec FUN_148efd6ec body=26 status=ok
// SIG undefined FUN_148efd6ec(void)

bool FUN_148efd6ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148efd706 FUN_148efd706 body=101 status=ok
// SIG undefined FUN_148efd706(void)

void FUN_148efd706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd76c FUN_148efd76c body=101 status=ok
// SIG undefined FUN_148efd76c(void)

void FUN_148efd76c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd7d2 FUN_148efd7d2 body=134 status=ok
// SIG undefined FUN_148efd7d2(void)

void FUN_148efd7d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbd70;
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
                    /* WARNING: Could not recover jumptable at 0x000148efd849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efd858 FUN_148efd858 body=50 status=ok
// SIG undefined FUN_148efd858(void)

void FUN_148efd858(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efd887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efd88a FUN_148efd88a body=165 status=ok
// SIG undefined FUN_148efd88a(void)

bool FUN_148efd88a(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148efd930 FUN_148efd930 body=31 status=ok
// SIG undefined FUN_148efd930(void)

undefined8 FUN_148efd930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efd96a FUN_148efd96a body=29 status=ok
// SIG undefined FUN_148efd96a(void)

bool FUN_148efd96a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efd988 FUN_148efd988 body=101 status=ok
// SIG undefined FUN_148efd988(void)

void FUN_148efd988(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efd9ee FUN_148efd9ee body=101 status=ok
// SIG undefined FUN_148efd9ee(void)

void FUN_148efd9ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148efda54 FUN_148efda54 body=134 status=ok
// SIG undefined FUN_148efda54(void)

void FUN_148efda54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbde0;
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
                    /* WARNING: Could not recover jumptable at 0x000148efdacb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efdada FUN_148efdada body=50 status=ok
// SIG undefined FUN_148efdada(void)

void FUN_148efdada(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efdb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efdb0c FUN_148efdb0c body=165 status=ok
// SIG undefined FUN_148efdb0c(void)

bool FUN_148efdb0c(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148efdbb2 FUN_148efdbb2 body=31 status=ok
// SIG undefined FUN_148efdbb2(void)

undefined8 FUN_148efdbb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efdbec FUN_148efdbec body=29 status=ok
// SIG undefined FUN_148efdbec(void)

bool FUN_148efdbec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efdc0a FUN_148efdc0a body=93 status=ok
// SIG undefined FUN_148efdc0a(void)

void FUN_148efdc0a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dbe50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efdc68 FUN_148efdc68 body=93 status=ok
// SIG undefined FUN_148efdc68(void)

void FUN_148efdc68(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dbe50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efdcc6 FUN_148efdcc6 body=126 status=ok
// SIG undefined FUN_148efdcc6(void)

void FUN_148efdcc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbe50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efdd35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efdd44 FUN_148efdd44 body=35 status=ok
// SIG undefined FUN_148efdd44(void)

void FUN_148efdd44(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efdd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148efdd82 FUN_148efdd82 body=29 status=ok
// SIG undefined FUN_148efdd82(void)

bool FUN_148efdd82(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efdda0 FUN_148efdda0 body=26 status=ok
// SIG undefined FUN_148efdda0(void)

bool FUN_148efdda0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148efddba FUN_148efddba body=24 status=ok
// SIG undefined FUN_148efddba(void)

bool FUN_148efddba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148efddd2 FUN_148efddd2 body=93 status=ok
// SIG undefined FUN_148efddd2(void)

void FUN_148efddd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efde30 FUN_148efde30 body=126 status=ok
// SIG undefined FUN_148efde30(void)

void FUN_148efde30(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbec0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efde9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efdeae FUN_148efdeae body=40 status=ok
// SIG undefined FUN_148efdeae(void)

void FUN_148efdeae(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efded3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efded6 FUN_148efded6 body=31 status=ok
// SIG undefined FUN_148efded6(void)

undefined8 FUN_148efded6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efdf10 FUN_148efdf10 body=29 status=ok
// SIG undefined FUN_148efdf10(void)

bool FUN_148efdf10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efdf2e FUN_148efdf2e body=26 status=ok
// SIG undefined FUN_148efdf2e(void)

bool FUN_148efdf2e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148efdf48 FUN_148efdf48 body=24 status=ok
// SIG undefined FUN_148efdf48(void)

bool FUN_148efdf48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148efdf60 FUN_148efdf60 body=93 status=ok
// SIG undefined FUN_148efdf60(void)

void FUN_148efdf60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efdfbe FUN_148efdfbe body=126 status=ok
// SIG undefined FUN_148efdfbe(void)

void FUN_148efdfbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbf30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efe02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efe03c FUN_148efe03c body=48 status=ok
// SIG undefined FUN_148efe03c(void)

void FUN_148efe03c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efe069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efe06c FUN_148efe06c body=175 status=ok
// SIG undefined FUN_148efe06c(void)

void FUN_148efe06c(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_148efe0f5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148efe0f5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148efe11c FUN_148efe11c body=132 status=ok
// SIG undefined FUN_148efe11c(void)

void FUN_148efe11c(longlong param_1,int param_2)

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



// FUNCTION 148efe1a2 FUN_148efe1a2 body=48 status=ok
// SIG undefined FUN_148efe1a2(void)

void FUN_148efe1a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148efe1d2 FUN_148efe1d2 body=31 status=ok
// SIG undefined FUN_148efe1d2(void)

undefined8 FUN_148efe1d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efe20c FUN_148efe20c body=93 status=ok
// SIG undefined FUN_148efe20c(void)

void FUN_148efe20c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dc0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe26a FUN_148efe26a body=93 status=ok
// SIG undefined FUN_148efe26a(void)

void FUN_148efe26a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dc0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe2c8 FUN_148efe2c8 body=126 status=ok
// SIG undefined FUN_148efe2c8(void)

void FUN_148efe2c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc0f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efe337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efe346 FUN_148efe346 body=35 status=ok
// SIG undefined FUN_148efe346(void)

void FUN_148efe346(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efe365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148efe36a FUN_148efe36a body=31 status=ok
// SIG undefined FUN_148efe36a(void)

undefined8 FUN_148efe36a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efe3a4 FUN_148efe3a4 body=93 status=ok
// SIG undefined FUN_148efe3a4(void)

void FUN_148efe3a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe402 FUN_148efe402 body=93 status=ok
// SIG undefined FUN_148efe402(void)

void FUN_148efe402(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe460 FUN_148efe460 body=126 status=ok
// SIG undefined FUN_148efe460(void)

void FUN_148efe460(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efe4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efe4de FUN_148efe4de body=58 status=ok
// SIG undefined FUN_148efe4de(void)

void FUN_148efe4de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efe515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148efe518 FUN_148efe518 body=31 status=ok
// SIG undefined FUN_148efe518(void)

undefined8 FUN_148efe518(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efe552 FUN_148efe552 body=29 status=ok
// SIG undefined FUN_148efe552(void)

bool FUN_148efe552(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efe570 FUN_148efe570 body=93 status=ok
// SIG undefined FUN_148efe570(void)

void FUN_148efe570(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9dc240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe5ce FUN_148efe5ce body=93 status=ok
// SIG undefined FUN_148efe5ce(void)

void FUN_148efe5ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9dc240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe62c FUN_148efe62c body=126 status=ok
// SIG undefined FUN_148efe62c(void)

void FUN_148efe62c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9dc240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc1d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efe69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efe6aa FUN_148efe6aa body=40 status=ok
// SIG undefined FUN_148efe6aa(void)

void FUN_148efe6aa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efe6cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efe6d4 FUN_148efe6d4 body=31 status=ok
// SIG undefined FUN_148efe6d4(void)

undefined8 FUN_148efe6d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efe70e FUN_148efe70e body=29 status=ok
// SIG undefined FUN_148efe70e(void)

bool FUN_148efe70e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efe72c FUN_148efe72c body=26 status=ok
// SIG undefined FUN_148efe72c(void)

bool FUN_148efe72c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148efe746 FUN_148efe746 body=93 status=ok
// SIG undefined FUN_148efe746(void)

void FUN_148efe746(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9dc390;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9dc320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efe7a4 FUN_148efe7a4 body=126 status=ok
// SIG undefined FUN_148efe7a4(void)

void FUN_148efe7a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9dc390;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc320;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efe813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efe822 FUN_148efe822 body=70 status=ok
// SIG undefined FUN_148efe822(void)

void FUN_148efe822(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 148efe86a FUN_148efe86a body=193 status=ok
// SIG undefined FUN_148efe86a(void)

void FUN_148efe86a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148efe901;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148efe901:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148efe92c FUN_148efe92c body=175 status=ok
// SIG undefined FUN_148efe92c(void)

void FUN_148efe92c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148efe9b5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148efe9b5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148efe9dc FUN_148efe9dc body=175 status=ok
// SIG undefined FUN_148efe9dc(void)

void FUN_148efe9dc(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_148efea65;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148efea65:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148efea8c FUN_148efea8c body=175 status=ok
// SIG undefined FUN_148efea8c(void)

void FUN_148efea8c(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_148efeb15;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148efeb15:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148efeb3c FUN_148efeb3c body=175 status=ok
// SIG undefined FUN_148efeb3c(void)

void FUN_148efeb3c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148efebc5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148efebc5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148efebeb FUN_148efebeb body=283 status=ok
// SIG undefined FUN_148efebeb(void)

void FUN_148efebeb(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined8 local_c0;
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
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_144904448(param_4);
  if (cVar1 != '\0') {
    FUN_14072d42a(param_4);
  }
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    FUN_141900771();
    local_e8 = *(undefined8 *)(param_1 + 0x3d0);
    local_98 = *param_3;
    uStack_90 = param_3[1];
    local_88 = param_3[2];
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3ff00000;
    uStack_80 = 0;
    local_78 = 0;
    uStack_74 = 0x3ff00000;
    uStack_70 = 0;
    uStack_6c = 0x3ff00000;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0;
    local_58 = 0x3f800000;
    local_50 = 0;
    local_4c = 0;
    local_e0 = 0;
    FUN_140cb5d65(local_d0,lVar2,param_2);
    FUN_1416659c6(param_4,local_d0);
    *(undefined8 *)(param_4 + 0x10) = local_c0;
    FUN_144a7b030(local_d0);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efed08 FUN_148efed08 body=422 status=ok
// SIG undefined FUN_148efed08(void)

void FUN_148efed08(longlong *param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined1 local_e4 [12];
  undefined1 local_d8 [4];
  undefined8 local_d4;
  uint local_cc;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = FUN_1403a1726();
  if (lVar2 != 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_60 = *(undefined8 *)(lVar2 + 0x10);
    local_58 = *(undefined4 *)(lVar2 + 0x18);
    FUN_1447715ec(&local_50,lVar2 + 0x20);
    cVar1 = FUN_1401144ce(&local_60);
    if (cVar1 != '\0') {
      local_c8[0] = DAT_14cbe7058;
      FUN_1401533ba(local_e4,local_c8,1);
      FUN_144928d62(&local_50,5,local_e4);
      local_d8[0] = 1;
      local_cc = (uint)param_3;
      puVar4 = &DAT_14cb7c580;
      if (param_3 != 0) {
        puVar4 = &DAT_14cb7c588;
      }
      local_d4 = *puVar4;
      lVar2 = (**(code **)(*param_1 + 0x180))();
      if (lVar2 != 0) {
        local_c8[0] = 0;
        local_b8 = (longlong *)0x0;
        local_88 = 0;
        uStack_80 = 0;
        uStack_7e = 0;
        uStack_70 = 0;
        local_e8 = (float)*(double *)(lVar2 + 0x6d0);
        local_78 = SUB82(&local_e8,0);
        uStack_76 = (undefined6)((ulonglong)&local_e8 >> 0x10);
        lVar2 = FUN_140149a73(lVar2,0);
        if (lVar2 != 0) {
          FUN_140bc53f1(&local_60,local_d8,lVar2,local_c8);
          if (local_c8[0] != 0) {
            plVar3 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar3 = local_a8;
            }
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efeeb0 FUN_148efeeb0 body=595 status=ok
// SIG undefined FUN_148efeeb0(void)

void FUN_148efeeb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar2 != 0) {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(lVar2 + 8);
    }
    FUN_1447325ac(puVar3,&local_28,1);
    if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
      lVar2 = *(longlong *)(lVar2 + 0x98);
      uVar10 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar5 = (uint)lVar2 & 0xffff;
      plVar4 = param_1 + 0x1b;
      if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x1c];
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_1[0x1d] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                      (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        lVar1 = param_1[0x14];
        iVar8 = iVar6;
        do {
          iVar9 = iVar6;
          if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x60) == lVar2) goto LAB_148efefb1;
          iVar8 = *(int *)((longlong)iVar8 * 0x60 + lVar1 + 0x58);
        } while (iVar8 != -1);
      }
    }
  }
  goto LAB_148efef07;
  while (iVar9 = *(int *)(lVar7 + 0x58), *(int *)(lVar7 + 0x58) != -1) {
LAB_148efefb1:
    lVar7 = lVar1 + (longlong)iVar9 * 0x60;
    if (*(longlong *)(lVar1 + (longlong)iVar9 * 0x60) == lVar2) goto LAB_148efefd3;
  }
  lVar7 = 0;
LAB_148efefd3:
  if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
    uVar10 = (uint)((ulonglong)local_28 >> 0x10);
    uVar5 = (uint)local_28 & 0xffff;
    uVar10 = (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar5) +
             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar5 >> 4);
    lVar11 = lVar7 + 0x40;
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      lVar11 = *(longlong *)(lVar7 + 0x48);
    }
    iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar10) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar8 * 0x90) == local_28)
        goto LAB_148eff06f;
        iVar8 = *(int *)((longlong)iVar8 * 0x90 + *(longlong *)(lVar7 + 8) + 0x88);
      } while (iVar8 != -1);
    }
  }
  goto LAB_148efef07;
  while (iVar6 = *(int *)(lVar7 + 0x58), iVar6 != -1) {
LAB_148eff06f:
    lVar7 = lVar1 + (longlong)iVar6 * 0x60;
    if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x60) == lVar2) goto LAB_148eff088;
  }
  lVar7 = 0;
LAB_148eff088:
  if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
    lVar2 = lVar7 + 0x40;
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      lVar2 = *(longlong *)(lVar7 + 0x48);
    }
    iVar6 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar10) * 4);
    if (iVar6 != -1) {
      do {
        lVar2 = *(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x90;
        if (*(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x90) == local_28)
        goto LAB_148eff092;
        iVar6 = *(int *)(lVar2 + 0x88);
      } while (iVar6 != -1);
    }
  }
  lVar2 = 0;
LAB_148eff092:
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar2 != 0) {
    FUN_140fb8846(param_1,lVar2);
  }
LAB_148efef07:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eff104 FUN_148eff104 body=192 status=ok
// SIG undefined FUN_148eff104(void)

void FUN_148eff104(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x4f0) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x4e8);
    if (cVar1 != '\0') {
      local_28 = (float)*(double *)(lVar2 + 0x6d0);
      local_24 = 1;
      puVar3 = &DAT_14c9a63f8;
      if (param_2 != '\0') {
        puVar3 = &DAT_14c9a6400;
      }
      local_38 = *puVar3;
      local_30 = 0xffffffff;
      local_48 = DAT_14cbe7058;
      local_40 = 0xffffffff;
      FUN_140f8b8f2(param_1 + 0x4d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eff1c6 FUN_148eff1c6 body=172 status=ok
// SIG undefined FUN_148eff1c6(void)

void FUN_148eff1c6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  float local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x4f0) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x4e8);
    if (cVar1 != '\0') {
      local_20 = (float)*(double *)(lVar2 + 0x6d0);
      local_1c = 1;
      local_30 = DAT_14c9a6400;
      local_28 = 0xffffffff;
      local_40 = DAT_14cbe7060;
      local_38 = 0xffffffff;
      FUN_140f8b8f2(param_1 + 0x4d8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eff274 FUN_148eff274 body=151 status=ok
// SIG undefined FUN_148eff274(void)

undefined2 * FUN_148eff274(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406f1bc8(param_1 + -0x19d8,local_50);
  cVar1 = FUN_1401144ce(local_50);
  if (cVar1 == '\0') {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    FUN_14014e938(param_2,local_50);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eff310 FUN_148eff310 body=545 status=ok
// SIG undefined FUN_148eff310(void)

ulonglong FUN_148eff310(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((((byte *)*param_3 != (byte *)0x0) && ((*(byte *)*param_3 & 0x6b) == 3)) && (*param_2 != 0))
     && ((param_2[1] != 0 && (*param_2 != DAT_14c948000)))) {
    local_80 = DAT_14cb8dcf8;
    local_78 = (longlong *)CONCAT44(local_78._4_4_,DAT_14cb8dd00);
    FUN_1448075d0(&local_60);
    iVar5 = local_60;
    iVar3 = *param_2;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (iVar3 != iVar5) {
      local_78 = (longlong *)CONCAT44(local_78._4_4_,DAT_14cbe66b8);
      local_80 = DAT_14cbe66b0;
      FUN_1448075d0(&local_60,&local_80);
      puVar6 = (undefined8 *)FUN_144a06846(param_3,&local_60);
      local_80 = *puVar6;
      local_78 = (longlong *)puVar6[1];
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_68 = DAT_14cbe66a0;
      local_70 = DAT_14cbe6698;
      FUN_1448075d0(&local_60);
      plVar7 = (longlong *)FUN_144a06846(&local_80,&local_60);
      lVar4 = *plVar7;
      plVar7 = (longlong *)plVar7[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_70 = 0;
      if (lVar4 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_1400bc2ec(lVar4,&local_60,&local_70);
        lVar8 = CONCAT44(uStack_5c,local_60);
      }
      uVar9 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar8 != DAT_14cb71810);
      if (lVar8 == DAT_14cb71810) {
        *param_4 = DAT_14cb8dd10;
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
      plVar7 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
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
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eff532 FUN_148eff532 body=106 status=ok
// SIG undefined FUN_148eff532(void)

undefined4 FUN_148eff532(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((((*(int *)(param_1 + 4) < 2 && *(int *)(param_1 + 0x24) < 1) || (*(int *)(param_1 + 4) != 4))
      || (piVar1 = *(int **)(param_1 + 0x18), *piVar1 != DAT_14cb8dd18)) ||
     (((piVar1[2] != DAT_14cb8dd20 || (piVar1[3] != DAT_14cb8dd30)) ||
      ((piVar1[5] != DAT_14cb8dd38 || (piVar1[6] != DAT_14cb8dd48)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)piVar1[8] >> 8),piVar1[8] == DAT_14cb8dd4c._4_4_);
  }
  return uVar2;
}



// FUNCTION 148eff59c FUN_148eff59c body=168 status=ok
// SIG undefined FUN_148eff59c(void)

longlong FUN_148eff59c(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar6 = FUN_14117daa2();
        if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30)) && (((int)plVar3[1] == *param_3 && ((char)plVar3[0xb] == '\x03')))) {
          FUN_14112ded2(param_2,plVar3);
          uVar4 = 1;
          goto LAB_148eff62b;
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  uVar4 = 0;
LAB_148eff62b:
  *(undefined1 *)(param_2 + 0x1b8) = uVar4;
  return param_2;
}



// FUNCTION 148eff644 FUN_148eff644 body=186 status=ok
// SIG undefined FUN_148eff644(void)

longlong FUN_148eff644(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    local_24 = FUN_140b9fef0(lVar1,param_3,0);
    lVar1 = FUN_140b9ffa8(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_14130c6ae();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148eff59c(lVar1,param_2,param_4);
        goto LAB_148eff6cd;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x1b8) = 0;
LAB_148eff6cd:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eff700 FUN_148eff700 body=119 status=ok
// SIG undefined FUN_148eff700(void)

void FUN_148eff700(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_20;
  short local_18;
  undefined4 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && (DAT_14cbe6990 == '\0')) {
    local_10 = 0;
    local_18 = (ushort)DAT_14cbe6978 << 8;
    local_14 = 0;
    local_20 = param_5;
    local_28 = param_4;
    FUN_1489afdd8();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eff778 FUN_148eff778 body=572 status=ok
// SIG undefined FUN_148eff778(void)

void FUN_148eff778(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1b0) == 0) goto LAB_148eff839;
  uVar2 = FUN_144a7af92();
  lVar3 = FUN_14583d396(uVar2);
  if (lVar3 == 0) goto LAB_148eff839;
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x498))();
  if (bVar1 == 5) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"SaveData_NoSpace",0);
    FUN_1410d1eba(&local_58,&local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_1441bbed8(lVar3,&local_58,&DAT_14c9485f0);
    plVar5 = local_58;
  }
  else {
    if (bVar1 < 6) goto LAB_148eff839;
    lVar4 = FUN_14156969a();
    if (lVar4 == 0) {
LAB_148eff8e0:
      FUN_1400b22c2(&local_58,"Save Failed");
      FUN_140233b1a(&local_48,&local_58);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(local_68,"Failed to write save data. Progress may be lost.");
      FUN_140233b1a(&local_58,local_68);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      FUN_1446ddda2(&local_48,"SaveData_SaveFailed",0);
      plVar5 = (longlong *)thunk_FUN_144837462(lVar4,&local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (plVar5 == (longlong *)0x0) goto LAB_148eff8e0;
      lVar4 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar6 = FUN_140c54336();
      if (((lVar6 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_148eff8e0;
      local_48 = (longlong *)plVar5[5];
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,(int)plVar5[6]);
      local_58 = (longlong *)plVar5[3];
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = (undefined4)plVar5[4];
    }
    FUN_1458d9546(lVar3,&local_48,&local_58);
    plVar5 = local_48;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      plVar5 = local_48;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
LAB_148eff839:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148effb24 FUN_148effb24 body=503 status=ok
// SIG undefined FUN_148effb24(void)

undefined8 * FUN_148effb24(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined8 ***local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined8 uStack_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  FUN_145f8d864(&local_78);
  iVar10 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar10 = 0;
  }
  FUN_1412cfe60(&local_58,&local_78,iVar10 + 1 + (uint)(local_70 == 0));
  FUN_1401aebe8(&local_58,*param_2,iVar10);
  ppppuVar9 = (undefined8 ****)local_58;
  if ((int)uStack_50 == 0) {
    ppppuVar9 = (undefined8 ****)&DAT_149dfb77a;
  }
  cVar6 = FUN_14158b496(&local_68,ppppuVar9,0);
  if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar5 = uStack_60;
  if (cVar6 != '\0') {
    lVar11 = (longlong)(int)uStack_60;
    uVar7 = (int)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
    if (uStack_60._4_4_ < uVar7) {
      FUN_1447403be(&local_68,uVar5 & 0xffffffff);
    }
    pcVar4 = local_68;
    local_68[lVar11] = '\0';
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar8 = strlen(local_68);
    FUN_140cd1a74(&local_58,pcVar4,sVar8);
    local_88 = L"UnspecifiedFile";
    local_80 = 0xf;
    local_98 = 0;
    local_96 = 0;
    local_90 = 0;
    local_a8 = &local_58;
    if (0xf < uStack_40) {
      local_a8 = local_58;
    }
    local_a0 = local_48;
    FUN_141183efe(&local_78,&local_a8,&local_98,&local_88);
    FUN_1446dcc2e(param_1,&local_78);
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
    FUN_1401d9a90(&local_58);
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148effd1c FUN_148effd1c body=165 status=ok
// SIG undefined FUN_148effd1c(void)

longlong FUN_148effd1c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0x390;
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x398);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x3a0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x358) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x358) + (longlong)iVar5 * 0x20) == lVar2)
        goto LAB_148effd2c;
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_148effd2c:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 148effdc2 FUN_148effdc2 body=333 status=ok
// SIG undefined FUN_148effdc2(void)

undefined4
FUN_148effdc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = *param_5;
  if (((iVar5 == 0) || (param_5[1] == 0)) || (iVar5 == DAT_14c948000)) {
    plVar3 = (longlong *)FUN_148effd1c(param_1,param_3);
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != 0)) {
      FUN_1447715ec(param_5,*plVar3 + 8);
      iVar5 = *param_5;
    }
    if (iVar5 == 0) {
      uVar2 = 0;
      goto LAB_148effe36;
    }
  }
  uVar2 = 0;
  if ((param_5[1] != 0) && (iVar5 != DAT_14c948000)) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1400b2348(param_5,&local_68,1);
    FUN_148effb24(local_50,&local_68);
    uVar4 = FUN_144a8232a(&DAT_14cb8dd48);
    local_78 = param_4;
    uVar2 = FUN_1489b020a(param_1,param_2,uVar4,local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
LAB_148effe36:
  if (*(longlong *)(param_5 + 6) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efff12 FUN_148efff12 body=125 status=ok
// SIG undefined FUN_148efff12(void)

undefined8 FUN_148efff12(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_148b7d2c8();
  FUN_1406f1d90(uVar1,local_28,*(undefined1 *)(param_1 + 0x38));
  uVar1 = FUN_1447a1f4a(local_28);
  FUN_140b1283a(param_2,L"Vehicle: ",uVar1);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efffc8 FUN_148efffc8 body=40 status=ok
// SIG undefined FUN_148efffc8(void)

undefined8 FUN_148efffc8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d4761c(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148effffe FUN_148effffe body=58 status=ok
// SIG undefined FUN_148effffe(void)

void FUN_148effffe(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b677390;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  return;
}



// FUNCTION 148f00070 FUN_148f00070 body=40 status=ok
// SIG undefined FUN_148f00070(void)

undefined8 FUN_148f00070(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f0f97c(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148f000a4 FUN_148f000a4 body=28 status=ok
// SIG undefined FUN_148f000a4(void)

void FUN_148f000a4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140fba784(param_1);
  return;
}



// FUNCTION 148f000c0 FUN_148f000c0 body=239 status=ok
// SIG undefined FUN_148f000c0(void)

undefined8 FUN_148f000c0(longlong param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x3d1) == '\0') {
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88);
    FUN_1448729ea(param_1 + 0x3d8,local_58,local_88);
    uVar3 = FUN_144a7ecd0(local_58);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_58;
      if (0x18 < local_40) {
        pppuVar2 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  else {
    uVar3 = 0xbf800000;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f001b0 FUN_148f001b0 body=81 status=ok
// SIG undefined FUN_148f001b0(void)

longlong FUN_148f001b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x5f8))();
    if (lVar1 != 0) {
      lVar2 = FUN_1402095ca();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_148f001f1;
    }
  }
  lVar1 = 0;
LAB_148f001f1:
  *(bool *)param_2 = lVar1 == 0;
  return lVar1;
}



// FUNCTION 148f00202 FUN_148f00202 body=24 status=ok
// SIG undefined FUN_148f00202(void)

undefined1 FUN_148f00202(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float extraout_XMM0_Da;
  
  if ((param_1 != 0) && (plVar1 = *(longlong **)(param_1 + 0x1700), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x6d8))();
    if (lVar2 == 0) {
      *(undefined1 *)((longlong)plVar1 + 0x1a6c) = 1;
    }
    else {
      FUN_14020975c(lVar2);
      if (extraout_XMM0_Da <= 1e-08) {
        *(undefined1 *)((longlong)plVar1 + 0x1a6c) = 2;
      }
      else {
        if (*(longlong *)(lVar2 + 0x40) == 0) {
          return *(undefined1 *)((longlong)plVar1 + 0x19a1);
        }
        *(undefined1 *)((longlong)plVar1 + 0x1a6c) = 3;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 148f0021a FUN_148f0021a body=96 status=ok
// SIG undefined FUN_148f0021a(void)

undefined8 FUN_148f0021a(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  float extraout_XMM0_Da;
  
  if ((param_1 != 0) && (plVar1 = *(longlong **)(param_1 + 0x1700), plVar1 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar1 + 0x6d8))(plVar1);
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      FUN_14020975c(lVar3);
      uVar2 = 2;
      if ((1e-08 < extraout_XMM0_Da) && (uVar2 = 3, *(longlong *)(lVar3 + 0x40) == 0)) {
        return 1;
      }
    }
    *(undefined1 *)((longlong)plVar1 + 0x1a6c) = uVar2;
  }
  return 0;
}



// FUNCTION 148f0027a FUN_148f0027a body=26 status=ok
// SIG undefined FUN_148f0027a(void)

void FUN_148f0027a(longlong param_1,undefined8 param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1700) != 0)) {
    FUN_1406f39a0(*(longlong *)(param_1 + 0x1700),param_2,0);
    return;
  }
  return;
}



// FUNCTION 148f00294 FUN_148f00294 body=33 status=ok
// SIG undefined FUN_148f00294(void)

void FUN_148f00294(longlong param_1,longlong param_2)

{
  if (param_1 != 0 && param_2 != 0) {
    FUN_140affd74(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 148f002b6 FUN_148f002b6 body=437 status=ok
// SIG undefined FUN_148f002b6(void)

undefined8 FUN_148f002b6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x540);
    if (lVar5 == 0) {
      uVar4 = FUN_140aff5aa();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x540) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 0x538);
    lVar6 = *(longlong *)(param_1 + 0x548);
    if (lVar6 != 0) {
LAB_148f00310:
      if (lVar5 == 0) {
        uVar4 = FUN_140aff5aa(lVar6);
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x540) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x548);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_148f00468:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))();
            if (cVar3 == '\0') goto LAB_148f00468;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x548) = lVar6;
        }
      }
      FUN_140b0053c(lVar6,local_50,param_2);
      uVar4 = FUN_1402d1dc0(local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      goto LAB_148f00444;
    }
    uVar4 = 0;
    if ((lVar5 == 0) || (uVar4 = 0, *plVar1 == 0)) goto LAB_148f00444;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x548) = lVar6;
        if (lVar6 == 0) goto LAB_148f00441;
        lVar5 = *(longlong *)(param_1 + 0x540);
        goto LAB_148f00310;
      }
    }
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
LAB_148f00441:
  uVar4 = 0;
LAB_148f00444:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0046c FUN_148f0046c body=110 status=ok
// SIG undefined FUN_148f0046c(void)

void FUN_148f0046c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148f03dbc(param_1,iVar1);
    }
    FUN_148f03d93((longlong)iVar1 * 0xe8 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_148f03e50(param_1,param_2,iVar1 - param_2);
  FUN_148f03eb2(param_1);
  return;
}



// FUNCTION 148f004da FUN_148f004da body=1492 status=ok
// SIG undefined FUN_148f004da(void)

undefined8 * FUN_148f004da(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  iVar16 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar6;
  *(undefined4 *)(param_1 + 0xf) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar8;
  param_1[0x10] = DAT_14c8464f0;
  plVar1 = param_1 + 0x13;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  FUN_140d02432(param_1 + 2,param_2 + 0x3b);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x10] = param_2[0x24];
  uVar9 = param_2[0x23];
  param_1[0xe] = param_2[0x22];
  param_1[0xf] = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar6;
  *(undefined4 *)(param_1 + 0x12) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar8;
  puVar2 = param_1 + 0x15;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = puVar2;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1449c0562(&local_68);
    iVar16 = *(int *)(param_1 + 0x18);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 == iVar16) && (local_60 == puVar2)) {
LAB_148f00698:
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  local_98 = param_2 + 0x4c;
  local_a0 = param_2 + 9;
  local_a8 = param_2 + 0x14;
  local_b0 = param_2 + 0x1f;
  local_b8 = param_2 + 0x2c;
LAB_148f0070a:
  lVar5 = *local_90;
  lVar10 = (longlong)iStack_74 * 0xa0;
  lVar3 = lVar5 + lVar10;
  bVar4 = *(byte *)(lVar5 + lVar10);
  *(undefined1 *)(lVar5 + 0x60 + lVar10) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)(lVar5 + 8 + lVar10) = *(undefined1 *)(param_2 + 1);
  uVar15 = (uint)bVar4;
  if (*(int *)(param_2 + 0x46) != *(int *)((longlong)param_2 + 0x25c)) {
    puVar11 = (undefined8 *)param_2[0x4d];
    if ((undefined8 *)param_2[0x4d] == (undefined8 *)0x0) {
      puVar11 = local_98;
    }
    iVar12 = *(int *)((longlong)puVar11 + (ulonglong)(*(int *)(param_2 + 0x4e) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar5 = param_2[0x45];
      iVar14 = iVar12;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar14 * 0x60) == bVar4) goto LAB_148f00823;
        iVar14 = *(int *)((longlong)iVar14 * 0x60 + lVar5 + 0x58);
      } while (iVar14 != -1);
    }
  }
  goto LAB_148f0073f;
  while (iVar12 = *(int *)(lVar10 + 0x58), iVar12 != -1) {
LAB_148f00823:
    lVar10 = lVar5 + (longlong)iVar12 * 0x60;
    if (*(byte *)(lVar5 + (longlong)iVar12 * 0x60) == bVar4) goto LAB_148f00842;
  }
  lVar10 = 0;
LAB_148f00842:
  FUN_140d02432(lVar3 + 0x10,lVar10 + 8);
LAB_148f0073f:
  if (*(int *)(param_2 + 3) != *(int *)((longlong)param_2 + 0x44)) {
    puVar11 = (undefined8 *)param_2[10];
    if ((undefined8 *)param_2[10] == (undefined8 *)0x0) {
      puVar11 = local_a0;
    }
    iVar12 = *(int *)((longlong)puVar11 + (ulonglong)(*(int *)(param_2 + 0xb) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar5 = param_2[2];
      iVar14 = iVar12;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar14 * 0xc) == bVar4) goto LAB_148f00898;
        iVar14 = *(int *)(lVar5 + (longlong)iVar14 * 0xc + 4);
      } while (iVar14 != -1);
    }
  }
LAB_148f0074b:
  if (*(int *)(param_2 + 0xe) != *(int *)((longlong)param_2 + 0x9c)) {
    puVar11 = (undefined8 *)param_2[0x15];
    if ((undefined8 *)param_2[0x15] == (undefined8 *)0x0) {
      puVar11 = local_a8;
    }
    iVar12 = *(int *)((longlong)puVar11 + (ulonglong)(*(int *)(param_2 + 0x16) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar5 = param_2[0xd];
      iVar14 = iVar12;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar14 * 0x10) == bVar4) goto LAB_148f00907;
        iVar14 = *(int *)((longlong)iVar14 * 0x10 + lVar5 + 8);
      } while (iVar14 != -1);
    }
  }
LAB_148f0075a:
  if (*(int *)(param_2 + 0x19) != *(int *)((longlong)param_2 + 0xf4)) {
    puVar11 = (undefined8 *)param_2[0x20];
    if ((undefined8 *)param_2[0x20] == (undefined8 *)0x0) {
      puVar11 = local_b0;
    }
    iVar12 = *(int *)((longlong)puVar11 + (ulonglong)(*(int *)(param_2 + 0x21) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar5 = param_2[0x18];
      iVar14 = iVar12;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar14 * 0x10) == bVar4) goto LAB_148f0097a;
        iVar14 = *(int *)((longlong)iVar14 * 0x10 + lVar5 + 8);
      } while (iVar14 != -1);
    }
  }
LAB_148f0076c:
  if (*(int *)(param_2 + 0x26) != *(int *)((longlong)param_2 + 0x15c)) {
    puVar11 = (undefined8 *)param_2[0x2d];
    if ((undefined8 *)param_2[0x2d] == (undefined8 *)0x0) {
      puVar11 = local_b8;
    }
    iVar12 = *(int *)((longlong)puVar11 + (ulonglong)(*(int *)(param_2 + 0x2e) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar5 = param_2[0x25];
      iVar14 = iVar12;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar14 * 0x28) == bVar4) goto LAB_148f009f2;
        iVar14 = *(int *)(lVar5 + (longlong)iVar14 * 0x28 + 0x20);
      } while (iVar14 != -1);
    }
  }
LAB_148f0077e:
  if (*(int *)(param_2 + 0x32) != *(int *)((longlong)param_2 + 0x1bc)) {
    puVar11 = (undefined8 *)param_2[0x39];
    if ((undefined8 *)param_2[0x39] == (undefined8 *)0x0) {
      puVar11 = param_2 + 0x38;
    }
    iVar12 = *(int *)((longlong)puVar11 + (ulonglong)(*(int *)(param_2 + 0x3a) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar5 = param_2[0x31];
      iVar14 = iVar12;
      do {
        if (*(byte *)(lVar5 + (longlong)iVar14 * 0x1c) == bVar4) goto LAB_148f00a76;
        iVar14 = *(int *)((longlong)iVar14 * 0x1c + lVar5 + 0x14);
      } while (iVar14 != -1);
    }
  }
LAB_148f00790:
  local_78 = local_78 & ~local_88._4_4_;
  FUN_1449c0562(&local_88);
  if (local_90 == plVar1 && (local_80 == puVar2 && iStack_74 == iVar16)) goto LAB_148f00698;
  goto LAB_148f0070a;
  while (iVar12 = *(int *)(pbVar13 + 4), iVar12 != -1) {
LAB_148f00898:
    pbVar13 = (byte *)(lVar5 + (longlong)iVar12 * 0xc);
    if (*pbVar13 == bVar4) goto LAB_148f008b2;
  }
  pbVar13 = (byte *)0x0;
LAB_148f008b2:
  *(byte *)(lVar3 + 0x61) = pbVar13[1];
  goto LAB_148f0074b;
  while (iVar12 = *(int *)(lVar10 + 8), iVar12 != -1) {
LAB_148f00907:
    lVar10 = lVar5 + (longlong)iVar12 * 0x10;
    if (*(byte *)(lVar5 + (longlong)iVar12 * 0x10) == bVar4) goto LAB_148f00922;
  }
  lVar10 = 0;
LAB_148f00922:
  *(undefined4 *)(lVar3 + 100) = *(undefined4 *)(lVar10 + 4);
  goto LAB_148f0075a;
  while (iVar12 = *(int *)(lVar10 + 8), iVar12 != -1) {
LAB_148f0097a:
    lVar10 = lVar5 + (longlong)iVar12 * 0x10;
    if (*(byte *)(lVar5 + (longlong)iVar12 * 0x10) == bVar4) goto LAB_148f00995;
  }
  lVar10 = 0;
LAB_148f00995:
  *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(lVar10 + 4);
  goto LAB_148f0076c;
  while (iVar12 = *(int *)(pbVar13 + 0x20), iVar12 != -1) {
LAB_148f009f2:
    pbVar13 = (byte *)(lVar5 + (longlong)iVar12 * 0x28);
    if (*pbVar13 == bVar4) goto LAB_148f00a0c;
  }
  pbVar13 = (byte *)0x0;
LAB_148f00a0c:
  *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(pbVar13 + 0x18);
  uVar6 = *(undefined4 *)(pbVar13 + 0xc);
  uVar7 = *(undefined4 *)(pbVar13 + 0x10);
  uVar8 = *(undefined4 *)(pbVar13 + 0x14);
  *(undefined4 *)(lVar3 + 0x70) = *(undefined4 *)(pbVar13 + 8);
  *(undefined4 *)(lVar3 + 0x74) = uVar6;
  *(undefined4 *)(lVar3 + 0x78) = uVar7;
  *(undefined4 *)(lVar3 + 0x7c) = uVar8;
  goto LAB_148f0077e;
  while (iVar12 = *(int *)(lVar10 + 0x14), iVar12 != -1) {
LAB_148f00a76:
    lVar10 = lVar5 + (longlong)iVar12 * 0x1c;
    if (*(byte *)(lVar5 + (longlong)iVar12 * 0x1c) == bVar4) goto LAB_148f00a98;
  }
  lVar10 = 0;
LAB_148f00a98:
  uVar6 = *(undefined4 *)(lVar10 + 8);
  uVar7 = *(undefined4 *)(lVar10 + 0xc);
  uVar8 = *(undefined4 *)(lVar10 + 0x10);
  *(undefined4 *)(lVar3 + 0x88) = *(undefined4 *)(lVar10 + 4);
  *(undefined4 *)(lVar3 + 0x8c) = uVar6;
  *(undefined4 *)(lVar3 + 0x90) = uVar7;
  *(undefined4 *)(lVar3 + 0x94) = uVar8;
  goto LAB_148f00790;
}



// FUNCTION 148f00ab0 FUN_148f00ab0 body=122 status=ok
// SIG undefined FUN_148f00ab0(void)

undefined8 * FUN_148f00ab0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined4 *)(param_1 + 0xbc);
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  uVar4 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0xd0);
  _Src = *(void **)(param_1 + 200);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148f00b62 FUN_148f00b62 body=40 status=ok
// SIG undefined FUN_148f00b62(void)

undefined8 FUN_148f00b62(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1458ef7c8(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148f00b96 FUN_148f00b96 body=28 status=ok
// SIG undefined FUN_148f00b96(void)

void FUN_148f00b96(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145f9f920(param_1);
  return;
}



// FUNCTION 148f00bb2 FUN_148f00bb2 body=38 status=ok
// SIG undefined FUN_148f00bb2(void)

undefined * FUN_148f00bb2(longlong param_1)

{
  undefined *puVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x60) < 1)) {
    FUN_148f00bd8();
    puVar1 = &DAT_14cbe6ef8;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x58);
  }
  return puVar1;
}



// FUNCTION 148f00bd8 FUN_148f00bd8 body=226 status=ok
// SIG undefined FUN_148f00bd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_148f00bd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe6f60) {
    FUN_144b3d300(&DAT_14cbe6f60);
    if (DAT_14cbe6f60 == -1) {
      _DAT_14cbe6f00 = 0;
      uRam000000014cbe6f08 = 0x200000000;
      DAT_14cbe6f10 = DAT_14cbe6f10 | 1;
      DAT_14cbe6f11 = 3;
      _DAT_14cbe6f18 = 6;
      _DAT_14cbe6f20 = &DAT_14cbe6ef8;
      _DAT_14cbe6ef8 = &PTR_FUN_14a1dee70;
      _DAT_14cbe6f28 = DAT_14c8464e0;
      uRam000000014cbe6f30 = DAT_14c8464e8;
      _DAT_14cbe6f38 = DAT_14c8464f0;
      _DAT_14cbe6f40 = (undefined4)DAT_14c8464f8;
      uRam000000014cbe6f44 = DAT_14c8464f8._4_4_;
      uRam000000014cbe6f48 = (undefined4)DAT_14c846500;
      uRam000000014cbe6f4c = DAT_14c846500._4_4_;
      _DAT_14cbe6f50 = DAT_14c846508;
      _DAT_14cbe6f58 = &DAT_3f8000003f800000;
      _Init_thread_footer(&DAT_14cbe6f60);
    }
  }
  return &DAT_14cbe6ef8;
}



// FUNCTION 148f00cd2 FUN_148f00cd2 body=14 status=ok
// SIG undefined FUN_148f00cd2(void)

undefined4 FUN_148f00cd2(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



// FUNCTION 148f00ce6 FUN_148f00ce6 body=812 status=ok
// SIG undefined FUN_148f00ce6(void)

void FUN_148f00ce6(longlong param_1,float param_2,float param_3,double *param_4,float param_5,
                  undefined4 param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0xf0))) {
    fVar10 = *(float *)(**(longlong **)(lVar1 + 0xe8) + 0x24);
    fVar4 = cosf(param_3 * 0.017453292);
    if (0.0 < fVar4) {
      if (fVar10 <= fVar4 * param_2) {
        fVar10 = fVar4 * param_2;
      }
      if (0.0 < fVar10) {
        *(double *)(param_1 + 0x9d8) = DAT_14c8464f0;
        dVar2 = DAT_14c8464e8;
        *(double *)(param_1 + 0x9c8) = DAT_14c8464e0;
        *(double *)(param_1 + 0x9d0) = dVar2;
        *(undefined8 *)(param_1 + 0x9e0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x9e8) = 0;
        *(undefined1 *)(param_1 + 0x9c0) = 1;
        local_78 = param_4[2] - *(double *)(param_1 + 0x50);
        local_80 = param_4[1] - *(double *)(param_1 + 0x48);
        local_88 = *param_4 - *(double *)(param_1 + 0x40);
        FUN_144a79a9c(&local_88,local_a0);
        *(float *)(param_1 + 0x9e4) = (float)local_98;
        dVar2 = SQRT(local_88 * local_88 + local_80 * local_80);
        if (9.99999993922529e-09 < dVar2) {
          dVar3 = (double)fVar10;
          fVar11 = (float)(dVar2 / dVar3);
          *(undefined4 *)(param_1 + 0x9e8) = param_6;
          fVar4 = tanf(param_3 * 0.017453292);
          dVar2 = (double)(fVar4 * fVar10);
          dVar6 = local_78 / (double)fVar11 - dVar2;
          *(float *)(param_1 + 0x9e0) = (float)((dVar6 + dVar6) / (double)(param_5 * fVar11));
          dVar6 = local_88 * local_88 + local_80 * local_80;
          if ((dVar6 != 1.0) || (NAN(dVar6))) {
            dVar5 = DAT_14c8464e0;
            dVar7 = DAT_14c8464e8;
            dVar8 = DAT_14c8464f0;
            if (9.99999993922529e-09 <= dVar6) {
              dVar7 = local_80 * (1.0 / SQRT(dVar6));
              dVar5 = local_88 * (1.0 / SQRT(dVar6));
              dVar8 = 0.0;
            }
          }
          else {
            dVar5 = local_88;
            dVar7 = local_80;
            dVar8 = (double)(-(ulonglong)(local_78 == 0.0) & (ulonglong)local_78);
          }
          dVar9 = DAT_14c8462d0 * dVar2;
          dVar6 = DAT_14c8462c8 * dVar2;
          *(double *)(param_1 + 0x9c8) = dVar2 * DAT_14c8462c0 + dVar5 * dVar3;
          *(double *)(param_1 + 0x9d0) = dVar6 + dVar7 * dVar3;
          *(double *)(param_1 + 0x9d8) = dVar9 + dVar8 * dVar3;
          *(undefined1 *)(param_1 + 0x988) = 0;
          *(undefined1 *)(param_1 + 0x98a) = 0;
          *(undefined4 *)(param_1 + 0x98c) = 0;
          *(undefined4 *)(param_1 + 0x9a0) = 0;
          *(undefined4 *)(param_1 + 0x9b4) = 0;
          *(undefined4 *)(param_1 + 0x9a8) = 0;
          *(undefined1 *)(param_1 + 0x99c) = 0;
          *(undefined8 *)(param_1 + 0x994) = 0;
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f01014 FUN_148f01014 body=416 status=ok
// SIG undefined FUN_148f01014(void)

void FUN_148f01014(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x1a68) = 0xbf800000;
  plVar1 = (longlong *)(param_1 + 0x1a18);
  lVar2 = param_1 + 0x1a28;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x1a40) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x1a40);
  }
  local_68 = (uint)local_48;
  iStack_64 = local_48._4_4_;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((local_48._4_4_ != iVar5) || (uStack_50 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_80 + (longlong)iStack_64 * 0x10);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
LAB_148f0111f:
        if ((*(longlong *)(param_1 + 0x1990) != 0) &&
           (fVar6 = (float)FUN_148f000c0(lVar4), 0.0 < fVar6)) {
          fVar3 = *(float *)(param_1 + 0x1a68);
          fVar7 = fVar3;
          if (fVar6 <= fVar3) {
            fVar7 = fVar6;
          }
          *(uint *)(param_1 + 0x1a68) =
               ~-(uint)(0.0 < fVar3) & (uint)fVar6 | (uint)fVar7 & -(uint)(0.0 < fVar3);
        }
      }
      else if (lVar4 != 0) goto LAB_148f0111f;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5));
  }
  if (0.0 < *(float *)(param_1 + 0x1a68)) {
    *(float *)(param_1 + 0x1a68) = (*(float *)(param_1 + 0x1a68) * 100000.0) / 2236.942;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f011b6 FUN_148f011b6 body=318 status=ok
// SIG undefined FUN_148f011b6(void)

undefined8 FUN_148f011b6(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_148f045f8(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[1];
        puVar7 = puVar8 + 1;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 148f012f4 FUN_148f012f4 body=96 status=ok
// SIG undefined FUN_148f012f4(void)

void FUN_148f012f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_140cf1f64();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x110) != 0)) {
      FUN_140043566(lVar2,*(longlong *)(param_1 + 0x110) + 0x240,1,1);
    }
  }
  FUN_140bdceb2(param_1);
  return;
}



// FUNCTION 148f01354 FUN_148f01354 body=68 status=ok
// SIG undefined FUN_148f01354(void)

bool FUN_148f01354(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x5b8))();
  if ((char)param_1[0x78] == '\x01') {
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if (cVar1 != '\0') goto LAB_148f01383;
    }
    bVar3 = false;
  }
  else {
LAB_148f01383:
    bVar3 = param_1[0x130] != 0;
  }
  return bVar3;
}



// FUNCTION 148f013a8 FUN_148f013a8 body=123 status=ok
// SIG undefined FUN_148f013a8(void)

void FUN_148f013a8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0x1da0));
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0x1da0));
    }
  }
  *(undefined8 *)(param_1 + 0x1da0) = 0;
  return;
}



// FUNCTION 148f01424 FUN_148f01424 body=421 status=ok
// SIG undefined FUN_148f01424(void)

void FUN_148f01424(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148f013a8();
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar3 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_a8[2] = lVar4;
    *local_a8 = &PTR_FUN_14b9dd720;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_148f0195a;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    local_b0 = 0xbf800000;
    local_b8 = 0;
    FUN_1406f3fee(uVar1,param_1 + 0x1da0,&local_98,param_2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f015ca FUN_148f015ca body=199 status=ok
// SIG undefined FUN_148f015ca(void)

ulonglong FUN_148f015ca(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(longlong *)(param_1 + 0x1990) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x1a00), lVar1 != 0)) {
    dVar4 = *(double *)(param_1 + 0x1ae0);
    dVar5 = dVar4;
    if (1.0 <= dVar4) {
      dVar5 = 1.0;
    }
    dVar4 = acos((double)(~-(ulonglong)(dVar4 < -1.0) & (ulonglong)dVar5 |
                         -(ulonglong)(dVar4 < -1.0) & 0xbff0000000000000));
    if ((float)dVar4 <= *(float *)(lVar1 + 0x1250) * 0.017453292) {
      fVar6 = *(float *)(param_1 + 0x1aec) * *(float *)(param_1 + 0x12e8);
      cVar2 = FUN_140bdbb20(param_1);
      if ((cVar2 == '\0') &&
         ((*(int *)(param_1 + 0x970) != 0 ||
          ((*(float *)(param_1 + 0x1cdc) < *(float *)(lVar1 + 0x1254) ||
            *(float *)(param_1 + 0x1cdc) == *(float *)(lVar1 + 0x1254) &&
           (fVar6 < *(float *)(lVar1 + 0x1258) || fVar6 == *(float *)(lVar1 + 0x1258)))))))
      goto LAB_148f0165d;
    }
    uVar3 = 0;
  }
LAB_148f0165d:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148f01692 FUN_148f01692 body=549 status=ok
// SIG undefined FUN_148f01692(void)

float FUN_148f01692(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 **local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar7 = 0.0;
  if ((param_1[0x332] != 0) && (lVar1 = *(longlong *)(param_1[0x332] + 0x1a00), lVar1 != 0)) {
    fVar7 = *(float *)(lVar1 + 0x124c);
    fVar4 = (float)(**(code **)(*param_1 + 0x478))();
    local_b8[0] = 0;
    local_90 = 0;
    FUN_1456bb102(local_b8,param_1[0x332]);
    FUN_1448729ea(param_1 + 0x29f,local_88,local_b8);
    fVar5 = (float)FUN_144a7ecd0(local_88);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar3 = local_88;
      if (0x18 < local_70) {
        pppuVar3 = (undefined8 ***)local_88[0];
      }
      (*pcVar2)(pppuVar3);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(local_b8);
    if (1e-08 < ABS(fVar4 * fVar5)) {
      local_b8[0] = 0;
      local_90 = 0;
      FUN_1456bb102(local_b8,param_1[0x332]);
      FUN_1448729ea(param_1 + 0x295,local_88,local_b8);
      fVar6 = (float)FUN_144a7ecd0(local_88);
      fVar4 = (fVar6 * -2.0) / (fVar4 * fVar5);
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppuVar3 = local_88;
        if (0x18 < local_70) {
          pppuVar3 = (undefined8 ***)local_88[0];
        }
        (*pcVar2)(pppuVar3);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88[0]);
      }
      FUN_144a5ac3a(local_b8);
      fVar7 = (float)(~-(uint)(0.0 < fVar4) & (uint)fVar7 |
                     (uint)(fVar4 + fVar4 + fVar7) & -(uint)(0.0 < fVar4));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f018be FUN_148f018be body=31 status=ok
// SIG undefined FUN_148f018be(void)

void FUN_148f018be(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  if (*(char *)(param_1 + 0x19a4) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x19a4) = param_2;
  lVar3 = *(longlong *)(param_1 + 0x1990);
  if (lVar3 == 0) {
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(lVar3 + 0x1a00);
  if (lVar1 == 0) goto LAB_1440bc1b6;
  lVar6 = *(longlong *)(lVar1 + 0x15e8);
  if (lVar6 == 0) {
    uVar5 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar1 + 0x15e8) = lVar6;
  }
  if (*(longlong *)(lVar1 + 0x15f0) == 0) {
    if ((lVar6 != 0) && (*(longlong *)(lVar1 + 0x15e0) != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
        *(undefined8 *)(lVar1 + 0x15f0) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar1 + 0x15e0));
        *(longlong *)(lVar1 + 0x15f0) = lVar6;
        if (lVar6 != 0) goto LAB_1440bc137;
      }
    }
    if ((*(char *)(lVar1 + 0x15d0) == '\x01') && (*(longlong *)(lVar1 + 0x15d4) != 0))
    goto LAB_1440bc137;
    if ((param_2 == '\0') || (cVar4 = FUN_144904448(lVar3 + 0x1b00), cVar4 != '\0'))
    goto LAB_1440bc1b6;
  }
  else {
LAB_1440bc137:
    if (param_2 == '\0') {
      uStack_68 = 0;
      FUN_140b32deb(auStack_60,lVar3,*(longlong *)(lVar3 + 0x1a00) + 0x15d0,
                    *(undefined8 *)(*(longlong *)(lVar3 + 0x1a00) + 0x1598));
      goto LAB_1440bc1b6;
    }
  }
  uStack_68 = 0;
  FUN_140b32deb(&uStack_48,lVar3,*(longlong *)(lVar3 + 0x1a00) + 0x15a0,
                *(undefined8 *)(*(longlong *)(lVar3 + 0x1a00) + 0x1598));
  *(undefined8 *)(lVar3 + 0x1b00) = uStack_48;
  *(undefined8 *)(lVar3 + 0x1b08) = uStack_40;
  *(undefined8 *)(lVar3 + 0x1b10) = uStack_38;
LAB_1440bc1b6:
  if ((uStack_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f018de FUN_148f018de body=123 status=ok
// SIG undefined FUN_148f018de(void)

void FUN_148f018de(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0x1d98));
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0x1d98));
    }
  }
  *(undefined8 *)(param_1 + 0x1d98) = 0;
  return;
}



// FUNCTION 148f0195a FUN_148f0195a body=35 status=ok
// SIG undefined FUN_148f0195a(void)

void FUN_148f0195a(longlong param_1)

{
  FUN_148f013a8();
  FUN_1406f39a0(param_1,*(undefined1 *)(param_1 + 0x19a2),*(undefined1 *)(param_1 + 0x19a2));
  return;
}



// FUNCTION 148f0197e FUN_148f0197e body=927 status=ok
// SIG undefined FUN_148f0197e(void)

void FUN_148f0197e(longlong param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  double *local_b0;
  undefined4 *local_a8;
  longlong *local_a0;
  code *local_98;
  longlong *local_90;
  longlong local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = param_2;
  local_74 = param_3;
  local_7c = FUN_144800006();
  if ((*(longlong *)(param_1 + 0x1990) != 0) &&
     (local_88 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x1a00), local_88 != 0)) {
    dVar6 = param_4[1] - *(double *)(param_1 + 0x828);
    dVar4 = *param_4 - *(double *)(param_1 + 0x820);
    dVar8 = dVar4 * dVar4 + dVar6 * dVar6;
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      dVar5 = DAT_14c8464e0;
      dVar7 = DAT_14c8464e8;
      dVar9 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar8) {
        dVar5 = dVar4 * (1.0 / SQRT(dVar8));
        dVar7 = dVar6 * (1.0 / SQRT(dVar8));
        dVar9 = 0.0;
      }
    }
    else {
      dVar8 = param_4[2] - *(double *)(param_1 + 0x830);
      dVar5 = dVar4;
      dVar7 = dVar6;
      dVar9 = (double)(-(ulonglong)(dVar8 == 0.0) & (ulonglong)dVar8);
    }
    dVar4 = *(double *)(param_1 + 0x8f0);
    dVar6 = *(double *)(param_1 + 0x8f8);
    dVar8 = dVar4 * dVar4 + dVar6 * dVar6;
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      dVar10 = DAT_14c8464e0;
      dVar11 = DAT_14c8464e8;
      dVar12 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar8) {
        dVar10 = dVar4 * (1.0 / SQRT(dVar8));
        dVar11 = dVar6 * (1.0 / SQRT(dVar8));
        dVar12 = 0.0;
      }
    }
    else {
      dVar10 = dVar4;
      dVar11 = dVar6;
      dVar12 = (double)(-(ulonglong)(*(double *)(param_1 + 0x900) == 0.0) &
                       (ulonglong)*(double *)(param_1 + 0x900));
    }
    dVar4 = *(double *)(param_1 + 0x860);
    dVar6 = *(double *)(param_1 + 0x868);
    dVar8 = dVar4 * dVar4 + dVar6 * dVar6;
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      if (9.99999993922529e-09 <= dVar8) {
        dVar6 = dVar6 * (1.0 / SQRT(dVar8));
        dVar4 = dVar4 * (1.0 / SQRT(dVar8));
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        uVar13 = SUB84(DAT_14c8464f0,0);
        uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar6 = DAT_14c8464e8;
        dVar4 = DAT_14c8464e0;
      }
    }
    else {
      uVar2 = -(ulonglong)(*(double *)(param_1 + 0x870) == 0.0) &
              (ulonglong)*(double *)(param_1 + 0x870);
      uVar13 = (undefined4)uVar2;
      uVar14 = (undefined4)(uVar2 >> 0x20);
    }
    if (((((double)(*(float *)(param_1 + 0x1ab0) * *(float *)(local_88 + 0x184)) < SQRT(dVar8)) &&
         (0.0 < dVar12 * dVar9 + dVar10 * dVar5 + dVar11 * dVar7)) &&
        (0.0 < dVar9 * (double)CONCAT44(uVar14,uVar13) + dVar5 * dVar4 + dVar7 * dVar6)) &&
       ((plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0 &&
        (lVar3 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff), lVar3 != 0)))) {
      local_90 = &local_c8;
      local_c0 = &local_78;
      local_b8 = &local_74;
      local_a8 = &local_7c;
      local_a0 = &local_88;
      local_98 = FUN_1443478d0;
      local_c8 = param_1;
      local_b0 = param_4;
      FUN_144966906(lVar3 + 0x138);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f01d1e FUN_148f01d1e body=78 status=ok
// SIG undefined FUN_148f01d1e(void)

void FUN_148f01d1e(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_148ad4a70();
  if ((*(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc)) /
      (*(int *)(param_3 + 0xc) - *(int *)(param_2 + 0xc)) < 1) {
    param_3 = param_2;
  }
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_3 + 0xa8);
  *(undefined1 *)(param_1 + 0xa9) = *(undefined1 *)(param_3 + 0xa9);
  return;
}



// FUNCTION 148f01d6c FUN_148f01d6c body=70 status=ok
// SIG undefined FUN_148f01d6c(void)

void FUN_148f01d6c(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(int *)(param_2 + 0x44) != 0) {
LAB_148f01d96:
      FUN_145705f7c(param_1 + 0x3910);
      FUN_140374ef4(param_1 + 0x3910);
      return;
    }
  }
  else {
    cVar1 = FUN_140321d1a(param_2 + 0x38);
    if (cVar1 != '\0') goto LAB_148f01d96;
  }
  return;
}



// FUNCTION 148f01db2 FUN_148f01db2 body=132 status=ok
// SIG undefined FUN_148f01db2(void)

void FUN_148f01db2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 2) == 0)) &&
     ((*(byte *)(lVar1 + 0x348) & 2) == 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    FUN_148cd7136(lVar1,param_2);
    lVar1 = *(longlong *)(param_1 + 0x90);
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 2) == 0)) &&
       (plVar2 = *(longlong **)(lVar1 + 0xf48), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148f01e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x978))(plVar2,param_2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148f01e36 FUN_148f01e36 body=71 status=ok
// SIG undefined FUN_148f01e36(void)

undefined8 * FUN_148f01e36(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148f01e7e FUN_148f01e7e body=7 status=ok
// SIG undefined FUN_148f01e7e(void)

void FUN_148f01e7e(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// FUNCTION 148f01e86 FUN_148f01e86 body=31 status=ok
// SIG undefined FUN_148f01e86(void)

undefined8 FUN_148f01e86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f01ec0 FUN_148f01ec0 body=29 status=ok
// SIG undefined FUN_148f01ec0(void)

bool FUN_148f01ec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f01ede FUN_148f01ede body=26 status=ok
// SIG undefined FUN_148f01ede(void)

bool FUN_148f01ede(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f01ef8 FUN_148f01ef8 body=101 status=ok
// SIG undefined FUN_148f01ef8(void)

void FUN_148f01ef8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dcbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f01f5e FUN_148f01f5e body=134 status=ok
// SIG undefined FUN_148f01f5e(void)

void FUN_148f01f5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcbd0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f01fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f01fe4 FUN_148f01fe4 body=162 status=ok
// SIG undefined FUN_148f01fe4(void)

bool FUN_148f01fe4(longlong param_1,undefined4 param_2)

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



// FUNCTION 148f02088 FUN_148f02088 body=380 status=ok
// SIG undefined FUN_148f02088(void)

longlong * FUN_148f02088(longlong *param_1,undefined8 *param_2)

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
LAB_148f02192:
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
    *puVar3 = &PTR_FUN_14b9dcc90;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14580f2c8;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148f02192;
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
    *puVar3 = &PTR_FUN_14b9dcc90;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14580f2c8;
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



// FUNCTION 148f02204 FUN_148f02204 body=64 status=ok
// SIG undefined FUN_148f02204(void)

undefined8 * FUN_148f02204(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9dcc90;
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



// FUNCTION 148f02248 FUN_148f02248 body=81 status=ok
// SIG undefined FUN_148f02248(void)

undefined8 FUN_148f02248(longlong param_1)

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



// FUNCTION 148f022a0 FUN_148f022a0 body=89 status=ok
// SIG undefined FUN_148f022a0(void)

bool FUN_148f022a0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148f022eb;
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
LAB_148f022eb:
  return lVar6 == param_2;
}



// FUNCTION 148f02316 FUN_148f02316 body=118 status=ok
// SIG undefined FUN_148f02316(void)

void FUN_148f02316(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcc90;
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



// FUNCTION 148f0238c FUN_148f0238c body=118 status=ok
// SIG undefined FUN_148f0238c(void)

void FUN_148f0238c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcc90;
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



// FUNCTION 148f02402 FUN_148f02402 body=156 status=ok
// SIG undefined FUN_148f02402(void)

void FUN_148f02402(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcc90;
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
                    /* WARNING: Could not recover jumptable at 0x000148f0248e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f0249e FUN_148f0249e body=97 status=ok
// SIG undefined FUN_148f0249e(void)

ulonglong FUN_148f0249e(longlong param_1)

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
        uVar6 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
        LOCK();
        plVar1 = plVar3 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000148f024fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))(0);
  return uVar7;
}



// FUNCTION 148f02500 FUN_148f02500 body=93 status=ok
// SIG undefined FUN_148f02500(void)

ulonglong FUN_148f02500(longlong param_1)

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
LAB_148f02552:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148f02552;
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



// FUNCTION 148f0255e FUN_148f0255e body=93 status=ok
// SIG undefined FUN_148f0255e(void)

longlong FUN_148f0255e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_148f025bc(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 148f025bc FUN_148f025bc body=146 status=ok
// SIG undefined FUN_148f025bc(void)

longlong * FUN_148f025bc(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 148f0264e FUN_148f0264e body=114 status=ok
// SIG undefined FUN_148f0264e(void)

void FUN_148f0264e(longlong *param_1,int param_2)

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



// FUNCTION 148f026c0 FUN_148f026c0 body=114 status=ok
// SIG undefined FUN_148f026c0(void)

void FUN_148f026c0(longlong *param_1,int param_2)

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



// FUNCTION 148f02732 FUN_148f02732 body=114 status=ok
// SIG undefined FUN_148f02732(void)

void FUN_148f02732(longlong *param_1,int param_2)

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



// FUNCTION 148f027a4 FUN_148f027a4 body=299 status=ok
// SIG undefined FUN_148f027a4(void)

undefined4 * FUN_148f027a4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_141901314(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_14120f6aa(param_1,uVar9,local_40,&local_4c);
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
      FUN_14665e1ee(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f028d0 FUN_148f028d0 body=31 status=ok
// SIG undefined FUN_148f028d0(void)

undefined8 FUN_148f028d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f0290a FUN_148f0290a body=101 status=ok
// SIG undefined FUN_148f0290a(void)

void FUN_148f0290a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f02970 FUN_148f02970 body=101 status=ok
// SIG undefined FUN_148f02970(void)

void FUN_148f02970(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f029d6 FUN_148f029d6 body=134 status=ok
// SIG undefined FUN_148f029d6(void)

void FUN_148f029d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcd00;
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
                    /* WARNING: Could not recover jumptable at 0x000148f02a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f02a5c FUN_148f02a5c body=147 status=ok
// SIG undefined FUN_148f02a5c(void)

void FUN_148f02a5c(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined2 local_40 [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x28);
  pcVar2 = *(code **)(param_1 + 0x20);
  local_40[0] = *param_3;
  local_38 = *(longlong *)(param_3 + 4);
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar2)(lVar3 + iVar1,param_2,local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f02af0 FUN_148f02af0 body=122 status=ok
// SIG undefined FUN_148f02af0(void)

void FUN_148f02af0(longlong *param_1,int param_2)

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



// FUNCTION 148f02b6a FUN_148f02b6a body=122 status=ok
// SIG undefined FUN_148f02b6a(void)

void FUN_148f02b6a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 148f02bfe FUN_148f02bfe body=29 status=ok
// SIG undefined FUN_148f02bfe(void)

bool FUN_148f02bfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f02c1c FUN_148f02c1c body=26 status=ok
// SIG undefined FUN_148f02c1c(void)

bool FUN_148f02c1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f02c36 FUN_148f02c36 body=101 status=ok
// SIG undefined FUN_148f02c36(void)

void FUN_148f02c36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f02c9c FUN_148f02c9c body=134 status=ok
// SIG undefined FUN_148f02c9c(void)

void FUN_148f02c9c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcd70;
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
                    /* WARNING: Could not recover jumptable at 0x000148f02d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f02d22 FUN_148f02d22 body=68 status=ok
// SIG undefined FUN_148f02d22(void)

void FUN_148f02d22(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f02d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148f02d66 FUN_148f02d66 body=122 status=ok
// SIG undefined FUN_148f02d66(void)

void FUN_148f02d66(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 148f02de0 FUN_148f02de0 body=31 status=ok
// SIG undefined FUN_148f02de0(void)

undefined8 FUN_148f02de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f02e1a FUN_148f02e1a body=29 status=ok
// SIG undefined FUN_148f02e1a(void)

bool FUN_148f02e1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f02e38 FUN_148f02e38 body=26 status=ok
// SIG undefined FUN_148f02e38(void)

bool FUN_148f02e38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f02e52 FUN_148f02e52 body=101 status=ok
// SIG undefined FUN_148f02e52(void)

void FUN_148f02e52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dcde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f02eb8 FUN_148f02eb8 body=101 status=ok
// SIG undefined FUN_148f02eb8(void)

void FUN_148f02eb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dcde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f02f1e FUN_148f02f1e body=134 status=ok
// SIG undefined FUN_148f02f1e(void)

void FUN_148f02f1e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcde0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f02f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f02fa4 FUN_148f02fa4 body=39 status=ok
// SIG undefined FUN_148f02fa4(void)

void FUN_148f02fa4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f02fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f02fcc FUN_148f02fcc body=146 status=ok
// SIG undefined FUN_148f02fcc(void)

bool FUN_148f02fcc(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 148f03078 FUN_148f03078 body=31 status=ok
// SIG undefined FUN_148f03078(void)

undefined8 FUN_148f03078(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f030b2 FUN_148f030b2 body=29 status=ok
// SIG undefined FUN_148f030b2(void)

bool FUN_148f030b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f030d0 FUN_148f030d0 body=93 status=ok
// SIG undefined FUN_148f030d0(void)

void FUN_148f030d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dce90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f0312e FUN_148f0312e body=93 status=ok
// SIG undefined FUN_148f0312e(void)

void FUN_148f0312e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dce90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f0318c FUN_148f0318c body=126 status=ok
// SIG undefined FUN_148f0318c(void)

void FUN_148f0318c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dce90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f031fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f0320a FUN_148f0320a body=58 status=ok
// SIG undefined FUN_148f0320a(void)

void FUN_148f0320a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f03241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148f03244 FUN_148f03244 body=31 status=ok
// SIG undefined FUN_148f03244(void)

undefined8 FUN_148f03244(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f0327e FUN_148f0327e body=29 status=ok
// SIG undefined FUN_148f0327e(void)

bool FUN_148f0327e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f0329c FUN_148f0329c body=26 status=ok
// SIG undefined FUN_148f0329c(void)

bool FUN_148f0329c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f032b6 FUN_148f032b6 body=93 status=ok
// SIG undefined FUN_148f032b6(void)

void FUN_148f032b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcf00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f03314 FUN_148f03314 body=93 status=ok
// SIG undefined FUN_148f03314(void)

void FUN_148f03314(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcf00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f03372 FUN_148f03372 body=126 status=ok
// SIG undefined FUN_148f03372(void)

void FUN_148f03372(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b991970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcf00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f033e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f033f0 FUN_148f033f0 body=58 status=ok
// SIG undefined FUN_148f033f0(void)

void FUN_148f033f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f03427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148f0342a FUN_148f0342a body=48 status=ok
// SIG undefined FUN_148f0342a(void)

void FUN_148f0342a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 148f0345a FUN_148f0345a body=114 status=ok
// SIG undefined FUN_148f0345a(void)

void FUN_148f0345a(longlong *param_1,int param_2)

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



// FUNCTION 148f034cc FUN_148f034cc body=181 status=ok
// SIG undefined FUN_148f034cc(void)

longlong FUN_148f034cc(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_148f03564;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148f03582(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_148f03564:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148f03582 FUN_148f03582 body=286 status=ok
// SIG undefined FUN_148f03582(void)

undefined4 * FUN_148f03582(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f036a2(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_14117dadb(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_148f03788(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_148f038a8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f036a2 FUN_148f036a2 body=229 status=ok
// SIG undefined FUN_148f036a2(void)

int * FUN_148f036a2(longlong *param_1,int *param_2)

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



// FUNCTION 148f03788 FUN_148f03788 body=174 status=ok
// SIG undefined FUN_148f03788(void)

undefined8 FUN_148f03788(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_14117dadb(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148f03836(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148f03836 FUN_148f03836 body=114 status=ok
// SIG undefined FUN_148f03836(void)

void FUN_148f03836(longlong *param_1,int param_2)

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



// FUNCTION 148f038a8 FUN_148f038a8 body=476 status=ok
// SIG undefined FUN_148f038a8(void)

void FUN_148f038a8(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 148f03a86 FUN_148f03a86 body=48 status=ok
// SIG undefined FUN_148f03a86(void)

void FUN_148f03a86(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148f03ab6 FUN_148f03ab6 body=201 status=ok
// SIG undefined FUN_148f03ab6(void)

void FUN_148f03ab6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 148f03b80 FUN_148f03b80 body=48 status=ok
// SIG undefined FUN_148f03b80(void)

void FUN_148f03b80(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 148f03bca FUN_148f03bca body=29 status=ok
// SIG undefined FUN_148f03bca(void)

bool FUN_148f03bca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f03be8 FUN_148f03be8 body=26 status=ok
// SIG undefined FUN_148f03be8(void)

bool FUN_148f03be8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f03c02 FUN_148f03c02 body=24 status=ok
// SIG undefined FUN_148f03c02(void)

bool FUN_148f03c02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f03c1a FUN_148f03c1a body=101 status=ok
// SIG undefined FUN_148f03c1a(void)

void FUN_148f03c1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dd0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f03c80 FUN_148f03c80 body=101 status=ok
// SIG undefined FUN_148f03c80(void)

void FUN_148f03c80(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dd0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f03ce6 FUN_148f03ce6 body=134 status=ok
// SIG undefined FUN_148f03ce6(void)

void FUN_148f03ce6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd0c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f03d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f03d6c FUN_148f03d6c body=39 status=ok
// SIG undefined FUN_148f03d6c(void)

void FUN_148f03d6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f03d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f03d93 FUN_148f03d93 body=41 status=ok
// SIG undefined FUN_148f03d93(void)

void FUN_148f03d93(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148ca2a14(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 148f03dbc FUN_148f03dbc body=146 status=ok
// SIG undefined FUN_148f03dbc(void)

void FUN_148f03dbc(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f03e50 FUN_148f03e50 body=98 status=ok
// SIG undefined FUN_148f03e50(void)

void FUN_148f03e50(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xe8 + *param_1);
  FUN_140bb61a8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xe8 + (longlong)_Dst),(longlong)iVar2 * 0xe8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148f03eb2 FUN_148f03eb2 body=62 status=ok
// SIG undefined FUN_148f03eb2(void)

void FUN_148f03eb2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f03ef0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe8,8);
  }
  return;
}



// FUNCTION 148f03ef0 FUN_148f03ef0 body=110 status=ok
// SIG undefined FUN_148f03ef0(void)

ulonglong FUN_148f03ef0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f03f29;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe8,8);
      param_2 = param_2 / 0xe8;
    }
  }
LAB_148f03f29:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f03f5e FUN_148f03f5e body=48 status=ok
// SIG undefined FUN_148f03f5e(void)

void FUN_148f03f5e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x278,8);
  }
  return;
}



// FUNCTION 148f03f8e FUN_148f03f8e body=48 status=ok
// SIG undefined FUN_148f03f8e(void)

void FUN_148f03f8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148f03fbe FUN_148f03fbe body=365 status=ok
// SIG undefined FUN_148f03fbe(void)

undefined4 * FUN_148f03fbe(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f0412c(param_1,local_40);
  uVar6 = *param_3;
  *local_38 = uVar6;
  if ((uVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar6);
    uVar6 = *local_38;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  if (((bVar1 & 1) != 0) && (uVar6 != 0)) {
    FUN_1456cec3c(uVar6);
  }
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_148f04212(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0xc) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148f043f8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0412c FUN_148f0412c body=229 status=ok
// SIG undefined FUN_148f0412c(void)

int * FUN_148f0412c(longlong *param_1,int *param_2)

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



// FUNCTION 148f04212 FUN_148f04212 body=162 status=ok
// SIG undefined FUN_148f04212(void)

undefined8 FUN_148f04212(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_148f042b6(param_1,param_2,&local_30);
    if (iVar1 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_148f04386(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_148f04236;
    }
  }
  uVar2 = 0;
LAB_148f04236:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f042b6 FUN_148f042b6 body=207 status=ok
// SIG undefined FUN_148f042b6(void)

int FUN_148f042b6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 148f04386 FUN_148f04386 body=114 status=ok
// SIG undefined FUN_148f04386(void)

void FUN_148f04386(longlong *param_1,int param_2)

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


