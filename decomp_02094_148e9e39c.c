// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e9e39c FUN_148e9e39c body=118 status=ok
// SIG undefined FUN_148e9e39c(void)

void FUN_148e9e39c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6480;
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



// FUNCTION 148e9e412 FUN_148e9e412 body=118 status=ok
// SIG undefined FUN_148e9e412(void)

void FUN_148e9e412(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6480;
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



// FUNCTION 148e9e488 FUN_148e9e488 body=156 status=ok
// SIG undefined FUN_148e9e488(void)

void FUN_148e9e488(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6480;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9e514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9e524 FUN_148e9e524 body=100 status=ok
// SIG undefined FUN_148e9e524(void)

void FUN_148e9e524(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148e9e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e9e57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e9e588 FUN_148e9e588 body=100 status=ok
// SIG undefined FUN_148e9e588(void)

ulonglong FUN_148e9e588(longlong param_1)

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
LAB_148e9e5e1:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e9e5e1;
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



// FUNCTION 148e9e5ec FUN_148e9e5ec body=30 status=ok
// SIG undefined FUN_148e9e5ec(void)

void * FUN_148e9e5ec(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e9e60a FUN_148e9e60a body=37 status=ok
// SIG undefined FUN_148e9e60a(void)

void FUN_148e9e60a(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148e9e62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148e9e636 FUN_148e9e636 body=30 status=ok
// SIG undefined FUN_148e9e636(void)

void * FUN_148e9e636(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e9e660 FUN_148e9e660 body=122 status=ok
// SIG undefined FUN_148e9e660(void)

void FUN_148e9e660(longlong param_1,longlong *param_2)

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



// FUNCTION 148e9e6dc FUN_148e9e6dc body=244 status=ok
// SIG undefined FUN_148e9e6dc(void)

undefined8 *
FUN_148e9e6dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  FUN_148e9e7d2(uVar5,param_3);
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



// FUNCTION 148e9e7d2 FUN_148e9e7d2 body=384 status=ok
// SIG undefined FUN_148e9e7d2(void)

void FUN_148e9e7d2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148e9e8e5:
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
    *puVar5 = &PTR_FUN_14b9c6530;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e9e8e5;
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
    *puVar5 = &PTR_FUN_14b9c6530;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9e8e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e9e952 FUN_148e9e952 body=64 status=ok
// SIG undefined FUN_148e9e952(void)

undefined8 * FUN_148e9e952(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6530;
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



// FUNCTION 148e9e996 FUN_148e9e996 body=81 status=ok
// SIG undefined FUN_148e9e996(void)

undefined8 FUN_148e9e996(longlong param_1)

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



// FUNCTION 148e9e9ee FUN_148e9e9ee body=89 status=ok
// SIG undefined FUN_148e9e9ee(void)

bool FUN_148e9e9ee(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e9ea39;
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
LAB_148e9ea39:
  return lVar6 == param_2;
}



// FUNCTION 148e9ea64 FUN_148e9ea64 body=118 status=ok
// SIG undefined FUN_148e9ea64(void)

void FUN_148e9ea64(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6530;
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



// FUNCTION 148e9eada FUN_148e9eada body=118 status=ok
// SIG undefined FUN_148e9eada(void)

void FUN_148e9eada(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6530;
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



// FUNCTION 148e9eb50 FUN_148e9eb50 body=156 status=ok
// SIG undefined FUN_148e9eb50(void)

void FUN_148e9eb50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6530;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9ebec FUN_148e9ebec body=100 status=ok
// SIG undefined FUN_148e9ebec(void)

void FUN_148e9ebec(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148e9ec38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e9ec45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e9ec50 FUN_148e9ec50 body=100 status=ok
// SIG undefined FUN_148e9ec50(void)

ulonglong FUN_148e9ec50(longlong param_1)

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
LAB_148e9eca9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e9eca9;
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



// FUNCTION 148e9ecb4 FUN_148e9ecb4 body=259 status=ok
// SIG undefined FUN_148e9ecb4(void)

undefined8 *
FUN_148e9ecb4(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  FUN_148e9edb8(uVar5,param_4);
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



// FUNCTION 148e9edb8 FUN_148e9edb8 body=384 status=ok
// SIG undefined FUN_148e9edb8(void)

void FUN_148e9edb8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148e9eecb:
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
    *puVar5 = &PTR_FUN_14b9c65a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e9eecb;
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
    *puVar5 = &PTR_FUN_14b9c65a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9eec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e9ef38 FUN_148e9ef38 body=64 status=ok
// SIG undefined FUN_148e9ef38(void)

undefined8 * FUN_148e9ef38(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c65a0;
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



// FUNCTION 148e9ef7c FUN_148e9ef7c body=81 status=ok
// SIG undefined FUN_148e9ef7c(void)

undefined8 FUN_148e9ef7c(longlong param_1)

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



// FUNCTION 148e9efd4 FUN_148e9efd4 body=89 status=ok
// SIG undefined FUN_148e9efd4(void)

bool FUN_148e9efd4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e9f01f;
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
LAB_148e9f01f:
  return lVar6 == param_2;
}



// FUNCTION 148e9f04a FUN_148e9f04a body=118 status=ok
// SIG undefined FUN_148e9f04a(void)

void FUN_148e9f04a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c65a0;
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



// FUNCTION 148e9f0c0 FUN_148e9f0c0 body=118 status=ok
// SIG undefined FUN_148e9f0c0(void)

void FUN_148e9f0c0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c65a0;
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



// FUNCTION 148e9f136 FUN_148e9f136 body=156 status=ok
// SIG undefined FUN_148e9f136(void)

void FUN_148e9f136(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c65a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9f1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9f1d2 FUN_148e9f1d2 body=104 status=ok
// SIG undefined FUN_148e9f1d2(void)

void FUN_148e9f1d2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148e9f21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e9f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e9f23a FUN_148e9f23a body=101 status=ok
// SIG undefined FUN_148e9f23a(void)

ulonglong FUN_148e9f23a(longlong param_1)

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
LAB_148e9f294:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e9f294;
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



// FUNCTION 148e9f2a0 FUN_148e9f2a0 body=68 status=ok
// SIG undefined FUN_148e9f2a0(void)

undefined8 * FUN_148e9f2a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6610;
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



// FUNCTION 148e9f2e8 FUN_148e9f2e8 body=81 status=ok
// SIG undefined FUN_148e9f2e8(void)

undefined8 FUN_148e9f2e8(longlong param_1)

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



// FUNCTION 148e9f340 FUN_148e9f340 body=89 status=ok
// SIG undefined FUN_148e9f340(void)

bool FUN_148e9f340(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e9f38b;
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
LAB_148e9f38b:
  return lVar6 == param_2;
}



// FUNCTION 148e9f3b6 FUN_148e9f3b6 body=118 status=ok
// SIG undefined FUN_148e9f3b6(void)

void FUN_148e9f3b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6610;
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



// FUNCTION 148e9f42c FUN_148e9f42c body=118 status=ok
// SIG undefined FUN_148e9f42c(void)

void FUN_148e9f42c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6610;
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



// FUNCTION 148e9f4a2 FUN_148e9f4a2 body=156 status=ok
// SIG undefined FUN_148e9f4a2(void)

void FUN_148e9f4a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6610;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9f52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9f53e FUN_148e9f53e body=100 status=ok
// SIG undefined FUN_148e9f53e(void)

ulonglong FUN_148e9f53e(longlong param_1)

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
LAB_148e9f597:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e9f597;
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



// FUNCTION 148e9f5a2 FUN_148e9f5a2 body=68 status=ok
// SIG undefined FUN_148e9f5a2(void)

undefined8 * FUN_148e9f5a2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6680;
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



// FUNCTION 148e9f5ea FUN_148e9f5ea body=81 status=ok
// SIG undefined FUN_148e9f5ea(void)

undefined8 FUN_148e9f5ea(longlong param_1)

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



// FUNCTION 148e9f642 FUN_148e9f642 body=89 status=ok
// SIG undefined FUN_148e9f642(void)

bool FUN_148e9f642(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e9f68d;
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
LAB_148e9f68d:
  return lVar6 == param_2;
}



// FUNCTION 148e9f6b8 FUN_148e9f6b8 body=118 status=ok
// SIG undefined FUN_148e9f6b8(void)

void FUN_148e9f6b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6680;
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



// FUNCTION 148e9f72e FUN_148e9f72e body=118 status=ok
// SIG undefined FUN_148e9f72e(void)

void FUN_148e9f72e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6680;
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



// FUNCTION 148e9f7a4 FUN_148e9f7a4 body=156 status=ok
// SIG undefined FUN_148e9f7a4(void)

void FUN_148e9f7a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6680;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9f830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9f840 FUN_148e9f840 body=101 status=ok
// SIG undefined FUN_148e9f840(void)

ulonglong FUN_148e9f840(longlong param_1)

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
LAB_148e9f89a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e9f89a;
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



// FUNCTION 148e9f8a6 FUN_148e9f8a6 body=30 status=ok
// SIG undefined FUN_148e9f8a6(void)

void * FUN_148e9f8a6(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e9f8d0 FUN_148e9f8d0 body=259 status=ok
// SIG undefined FUN_148e9f8d0(void)

undefined8 *
FUN_148e9f8d0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  FUN_148e9f9d4(uVar5,param_4);
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



// FUNCTION 148e9f9d4 FUN_148e9f9d4 body=384 status=ok
// SIG undefined FUN_148e9f9d4(void)

void FUN_148e9f9d4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148e9fae7:
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
    *puVar5 = &PTR_FUN_14b9c6710;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e9fae7;
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
    *puVar5 = &PTR_FUN_14b9c6710;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9fae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e9fb54 FUN_148e9fb54 body=64 status=ok
// SIG undefined FUN_148e9fb54(void)

undefined8 * FUN_148e9fb54(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6710;
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



// FUNCTION 148e9fb98 FUN_148e9fb98 body=81 status=ok
// SIG undefined FUN_148e9fb98(void)

undefined8 FUN_148e9fb98(longlong param_1)

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



// FUNCTION 148e9fbf0 FUN_148e9fbf0 body=89 status=ok
// SIG undefined FUN_148e9fbf0(void)

bool FUN_148e9fbf0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e9fc3b;
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
LAB_148e9fc3b:
  return lVar6 == param_2;
}



// FUNCTION 148e9fc66 FUN_148e9fc66 body=118 status=ok
// SIG undefined FUN_148e9fc66(void)

void FUN_148e9fc66(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6710;
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



// FUNCTION 148e9fcdc FUN_148e9fcdc body=118 status=ok
// SIG undefined FUN_148e9fcdc(void)

void FUN_148e9fcdc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6710;
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



// FUNCTION 148e9fd52 FUN_148e9fd52 body=156 status=ok
// SIG undefined FUN_148e9fd52(void)

void FUN_148e9fd52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6710;
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
                    /* WARNING: Could not recover jumptable at 0x000148e9fdde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9fdee FUN_148e9fdee body=104 status=ok
// SIG undefined FUN_148e9fdee(void)

void FUN_148e9fdee(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148e9fe3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e9fe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e9fe56 FUN_148e9fe56 body=101 status=ok
// SIG undefined FUN_148e9fe56(void)

ulonglong FUN_148e9fe56(longlong param_1)

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
LAB_148e9feb0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e9feb0;
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



// FUNCTION 148e9febc FUN_148e9febc body=259 status=ok
// SIG undefined FUN_148e9febc(void)

undefined8 *
FUN_148e9febc(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_148e9ffc0(uVar5,param_4);
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



// FUNCTION 148e9ffc0 FUN_148e9ffc0 body=384 status=ok
// SIG undefined FUN_148e9ffc0(void)

void FUN_148e9ffc0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148ea00d3:
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
    *puVar5 = &PTR_FUN_14b9c6780;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ea00d3;
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
    *puVar5 = &PTR_FUN_14b9c6780;
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
                    /* WARNING: Could not recover jumptable at 0x000148ea00cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ea0140 FUN_148ea0140 body=64 status=ok
// SIG undefined FUN_148ea0140(void)

undefined8 * FUN_148ea0140(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6780;
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



// FUNCTION 148ea0184 FUN_148ea0184 body=81 status=ok
// SIG undefined FUN_148ea0184(void)

undefined8 FUN_148ea0184(longlong param_1)

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



// FUNCTION 148ea01dc FUN_148ea01dc body=89 status=ok
// SIG undefined FUN_148ea01dc(void)

bool FUN_148ea01dc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ea0227;
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
LAB_148ea0227:
  return lVar6 == param_2;
}



// FUNCTION 148ea0252 FUN_148ea0252 body=118 status=ok
// SIG undefined FUN_148ea0252(void)

void FUN_148ea0252(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6780;
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



// FUNCTION 148ea02c8 FUN_148ea02c8 body=118 status=ok
// SIG undefined FUN_148ea02c8(void)

void FUN_148ea02c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6780;
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



// FUNCTION 148ea033e FUN_148ea033e body=156 status=ok
// SIG undefined FUN_148ea033e(void)

void FUN_148ea033e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6780;
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
                    /* WARNING: Could not recover jumptable at 0x000148ea03ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ea03da FUN_148ea03da body=100 status=ok
// SIG undefined FUN_148ea03da(void)

void FUN_148ea03da(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ea0426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ea0433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ea043e FUN_148ea043e body=100 status=ok
// SIG undefined FUN_148ea043e(void)

ulonglong FUN_148ea043e(longlong param_1)

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
LAB_148ea0497:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ea0497;
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



// FUNCTION 148ea04a2 FUN_148ea04a2 body=30 status=ok
// SIG undefined FUN_148ea04a2(void)

void * FUN_148ea04a2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ea04c0 FUN_148ea04c0 body=37 status=ok
// SIG undefined FUN_148ea04c0(void)

void FUN_148ea04c0(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148ea04e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148ea04f1 FUN_148ea04f1 body=18 status=ok
// SIG undefined FUN_148ea04f1(void)

void FUN_148ea04f1(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 148ea0504 FUN_148ea0504 body=143 status=ok
// SIG undefined FUN_148ea0504(void)

void FUN_148ea0504(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ea0594 FUN_148ea0594 body=48 status=ok
// SIG undefined FUN_148ea0594(void)

void FUN_148ea0594(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 148ea05c4 FUN_148ea05c4 body=48 status=ok
// SIG undefined FUN_148ea05c4(void)

void FUN_148ea05c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,8);
  }
  return;
}



// FUNCTION 148ea05f4 FUN_148ea05f4 body=48 status=ok
// SIG undefined FUN_148ea05f4(void)

void FUN_148ea05f4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x188,8);
  }
  return;
}



// FUNCTION 148ea0624 FUN_148ea0624 body=68 status=ok
// SIG undefined FUN_148ea0624(void)

undefined8 * FUN_148ea0624(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6810;
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



// FUNCTION 148ea066c FUN_148ea066c body=81 status=ok
// SIG undefined FUN_148ea066c(void)

undefined8 FUN_148ea066c(longlong param_1)

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



// FUNCTION 148ea06c4 FUN_148ea06c4 body=89 status=ok
// SIG undefined FUN_148ea06c4(void)

bool FUN_148ea06c4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ea070f;
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
LAB_148ea070f:
  return lVar6 == param_2;
}



// FUNCTION 148ea073a FUN_148ea073a body=118 status=ok
// SIG undefined FUN_148ea073a(void)

void FUN_148ea073a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6810;
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



// FUNCTION 148ea07b0 FUN_148ea07b0 body=118 status=ok
// SIG undefined FUN_148ea07b0(void)

void FUN_148ea07b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6810;
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



// FUNCTION 148ea0826 FUN_148ea0826 body=156 status=ok
// SIG undefined FUN_148ea0826(void)

void FUN_148ea0826(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6810;
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
                    /* WARNING: Could not recover jumptable at 0x000148ea08b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ea08c2 FUN_148ea08c2 body=104 status=ok
// SIG undefined FUN_148ea08c2(void)

void FUN_148ea08c2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ea090f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ea0920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ea092a FUN_148ea092a body=101 status=ok
// SIG undefined FUN_148ea092a(void)

ulonglong FUN_148ea092a(longlong param_1)

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
LAB_148ea0984:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ea0984;
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



// FUNCTION 148ea0990 FUN_148ea0990 body=68 status=ok
// SIG undefined FUN_148ea0990(void)

undefined8 * FUN_148ea0990(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6880;
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



// FUNCTION 148ea09d8 FUN_148ea09d8 body=81 status=ok
// SIG undefined FUN_148ea09d8(void)

undefined8 FUN_148ea09d8(longlong param_1)

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



// FUNCTION 148ea0a30 FUN_148ea0a30 body=89 status=ok
// SIG undefined FUN_148ea0a30(void)

bool FUN_148ea0a30(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ea0a7b;
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
LAB_148ea0a7b:
  return lVar6 == param_2;
}



// FUNCTION 148ea0aa6 FUN_148ea0aa6 body=118 status=ok
// SIG undefined FUN_148ea0aa6(void)

void FUN_148ea0aa6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6880;
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



// FUNCTION 148ea0b1c FUN_148ea0b1c body=118 status=ok
// SIG undefined FUN_148ea0b1c(void)

void FUN_148ea0b1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c6880;
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



// FUNCTION 148ea0b92 FUN_148ea0b92 body=156 status=ok
// SIG undefined FUN_148ea0b92(void)

void FUN_148ea0b92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c6880;
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
                    /* WARNING: Could not recover jumptable at 0x000148ea0c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ea0c2e FUN_148ea0c2e body=100 status=ok
// SIG undefined FUN_148ea0c2e(void)

void FUN_148ea0c2e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ea0c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ea0c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ea0c92 FUN_148ea0c92 body=100 status=ok
// SIG undefined FUN_148ea0c92(void)

ulonglong FUN_148ea0c92(longlong param_1)

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
LAB_148ea0ceb:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ea0ceb;
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



// FUNCTION 148ea0cf6 FUN_148ea0cf6 body=68 status=ok
// SIG undefined FUN_148ea0cf6(void)

undefined8 * FUN_148ea0cf6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c68f0;
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



// FUNCTION 148ea0d3e FUN_148ea0d3e body=81 status=ok
// SIG undefined FUN_148ea0d3e(void)

undefined8 FUN_148ea0d3e(longlong param_1)

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



// FUNCTION 148ea0d96 FUN_148ea0d96 body=89 status=ok
// SIG undefined FUN_148ea0d96(void)

bool FUN_148ea0d96(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148ea0de1;
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
LAB_148ea0de1:
  return lVar6 == param_2;
}



// FUNCTION 148ea0e0c FUN_148ea0e0c body=118 status=ok
// SIG undefined FUN_148ea0e0c(void)

void FUN_148ea0e0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c68f0;
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



// FUNCTION 148ea0e82 FUN_148ea0e82 body=118 status=ok
// SIG undefined FUN_148ea0e82(void)

void FUN_148ea0e82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9c68f0;
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



// FUNCTION 148ea0ef8 FUN_148ea0ef8 body=156 status=ok
// SIG undefined FUN_148ea0ef8(void)

void FUN_148ea0ef8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c68f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ea0f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ea0f94 FUN_148ea0f94 body=104 status=ok
// SIG undefined FUN_148ea0f94(void)

void FUN_148ea0f94(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148ea0fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ea0ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ea0ffc FUN_148ea0ffc body=101 status=ok
// SIG undefined FUN_148ea0ffc(void)

ulonglong FUN_148ea0ffc(longlong param_1)

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
LAB_148ea1056:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ea1056;
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



// FUNCTION 148ea1062 FUN_148ea1062 body=30 status=ok
// SIG undefined FUN_148ea1062(void)

void * FUN_148ea1062(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ea1086 FUN_148ea1086 body=30 status=ok
// SIG undefined FUN_148ea1086(void)

void * FUN_148ea1086(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ea10b6 FUN_148ea10b6 body=122 status=ok
// SIG undefined FUN_148ea10b6(void)

void FUN_148ea10b6(longlong param_1,longlong *param_2)

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



// FUNCTION 148ea1132 FUN_148ea1132 body=30 status=ok
// SIG undefined FUN_148ea1132(void)

void * FUN_148ea1132(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ea115c FUN_148ea115c body=170 status=ok
// SIG undefined FUN_148ea115c(void)

void FUN_148ea115c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_24 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_24);
  uVar1 = local_24;
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_24);
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar2 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar1,local_24);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea1208 FUN_148ea1208 body=147 status=ok
// SIG undefined FUN_148ea1208(void)

void FUN_148ea1208(longlong param_1,int param_2)

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



// FUNCTION 148ea129c FUN_148ea129c body=150 status=ok
// SIG undefined FUN_148ea129c(void)

void FUN_148ea129c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x188,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x188)) {
      uVar5 = uVar4 / 0x188 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x188,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ea1334 FUN_148ea1334 body=147 status=ok
// SIG undefined FUN_148ea1334(void)

void FUN_148ea1334(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ea13c8 FUN_148ea13c8 body=214 status=ok
// SIG undefined FUN_148ea13c8(void)

void FUN_148ea13c8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146245af8();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_148ee7ac0();
    if (*(longlong *)(param_1 + 0x288) != 0) {
      FUN_148ee794e();
    }
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9cbe60;
  FUN_1446ddc76(&local_38,"PlayerController",1);
  FUN_14039176c(puVar2,uVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9cbe60;
  FUN_140391314(param_1,puVar2);
  if (*(longlong *)(param_1 + 0x288) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x328) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea14a0 FUN_148ea14a0 body=221 status=ok
// SIG undefined FUN_148ea14a0(void)

void FUN_148ea14a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3a8) == '\x01') {
      puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9c98c0;
      FUN_1446ddc76(&local_40,&DAT_149e8cb32,1);
      FUN_14039176c(puVar3,uVar2,local_40,1);
      *puVar3 = &PTR_FUN_14b9c98c0;
      FUN_140391314(param_1,puVar3);
    }
    *(undefined8 *)(lVar1 + 0x458) = 0xffffffffffffffff;
    *(undefined1 *)(lVar1 + 0xc0) = 0;
    *(undefined1 *)(lVar1 + 0x1c0) = 0;
  }
  FUN_145eea7f2(param_1);
  FUN_141196df0(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea157e FUN_148ea157e body=121 status=ok
// SIG undefined FUN_148ea157e(void)

longlong FUN_148ea157e(longlong param_1)

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
    return local_28 + 0x4a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea15f8 FUN_148ea15f8 body=113 status=ok
// SIG undefined FUN_148ea15f8(void)

void FUN_148ea15f8(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_1400b2348(puVar2,local_28,1);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea166a FUN_148ea166a body=359 status=ok
// SIG undefined FUN_148ea166a(void)

void FUN_148ea166a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbde5f8) {
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*param_2 + lVar6);
        uVar7 = (ulonglong)uVar8;
        uVar4 = *(ushort *)(DAT_14cbde5f0 + lVar6);
        if (uVar8 != uVar4) break;
        if (uVar8 == 0) goto LAB_148ea1774;
LAB_148ea16cc:
        lVar6 = lVar6 + 2;
      }
      if ((uVar4 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148ea16cc;
      }
      if (uVar8 != uVar4) goto LAB_148ea16f5;
    }
  }
  else if (DAT_14cbde5f8 + iVar1 != 1) {
LAB_148ea16f5:
    if (iVar1 == DAT_14cbde5e8) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*param_2 + lVar6);
          uVar7 = (ulonglong)uVar8;
          uVar4 = *(ushort *)(DAT_14cbde5e0 + lVar6);
          if (uVar8 != uVar4) break;
          if (uVar8 == 0) goto LAB_148ea17bb;
LAB_148ea1738:
          lVar6 = lVar6 + 2;
        }
        if ((uVar4 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar5 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148ea1738;
        }
        if (uVar8 != uVar4) {
          return;
        }
      }
    }
    else if (DAT_14cbde5e8 + iVar1 != 1) {
      return;
    }
LAB_148ea17bb:
    *(undefined1 *)(lVar2 + 0xc0) = 0;
    FUN_148ee660a(lVar2);
    lVar6 = 0x1c0;
    goto LAB_148ea1788;
  }
LAB_148ea1774:
  *(undefined1 *)(lVar2 + 0x1c0) = 0;
  FUN_148ee65e8(lVar2);
  lVar6 = 0xc0;
LAB_148ea1788:
  puVar3 = &DAT_14cbde158;
  if (*(char *)(lVar2 + lVar6) != '\0') {
    puVar3 = &DAT_14cbde148;
  }
  FUN_140de1078(param_1,puVar3,0,0);
  return;
}



// FUNCTION 148ea17d2 FUN_148ea17d2 body=356 status=ok
// SIG undefined FUN_148ea17d2(void)

void FUN_148ea17d2(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    if (iVar1 == DAT_14cbde5f8) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar4);
          uVar5 = (ulonglong)uVar7;
          uVar3 = *(ushort *)(DAT_14cbde5f0 + lVar4);
          if (uVar7 != uVar3) break;
          if (uVar7 == 0) goto LAB_148ea18d9;
LAB_148ea1839:
          lVar4 = lVar4 + 2;
        }
        if ((uVar3 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar6 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar6]) goto LAB_148ea1839;
        }
        if (uVar7 != uVar3) goto LAB_148ea1865;
      }
    }
    else if (DAT_14cbde5f8 + iVar1 != 1) {
LAB_148ea1865:
      if (iVar1 == DAT_14cbde5e8) {
        if (1 < iVar1) {
          lVar4 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*param_2 + lVar4);
            uVar5 = (ulonglong)uVar7;
            uVar3 = *(ushort *)(DAT_14cbde5e0 + lVar4);
            if (uVar7 != uVar3) break;
            if (uVar7 == 0) goto LAB_148ea1915;
LAB_148ea18a4:
            lVar4 = lVar4 + 2;
          }
          if ((uVar3 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar6 = (ulonglong)uVar3;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar6]) goto LAB_148ea18a4;
          }
          if (uVar7 != uVar3) {
            return;
          }
        }
      }
      else if (DAT_14cbde5e8 + iVar1 != 1) {
        return;
      }
LAB_148ea1915:
      FUN_148ee63e0(lVar2,param_3);
      if (param_3 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0x210) <= param_3) {
        return;
      }
      goto LAB_148ea18ef;
    }
LAB_148ea18d9:
    FUN_148ee637a(lVar2,param_3);
    if ((-1 < param_3) && (param_3 < *(int *)(lVar2 + 0x110))) {
LAB_148ea18ef:
      FUN_140de1078(param_1,&DAT_14cbde148,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ea1936 FUN_148ea1936 body=523 status=ok
// SIG undefined FUN_148ea1936(void)

void FUN_148ea1936(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    lVar6 = FUN_148ee6aa8(lVar1);
    plVar7 = (longlong *)FUN_148ea157e(param_1);
    lVar2 = *plVar7;
    SRWLock = (PSRWLOCK)(lVar2 + 0x80);
    AcquireSRWLockShared(SRWLock);
    cVar4 = FUN_148e1ccee(lVar2);
    ReleaseSRWLockShared(SRWLock);
    if (cVar4 == '\0') {
      if ((lVar6 == 0) || ((~*(byte *)(lVar6 + 0xc0) & 0x41) != 0)) goto LAB_148ea1961;
      puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c9910;
      FUN_1446ddc76(local_58,&DAT_14a491e31,1);
      FUN_14039176c(puVar8,uVar3,local_58[0],1);
      *puVar8 = &PTR_FUN_14b9c9910;
      FUN_1418c6390(puVar8 + 7,lVar6 + 200);
      FUN_140391314(param_1,puVar8);
      FUN_1400b22c2(local_58,"ElementClicked");
      FUN_140de1078(param_1,local_58,0,0);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = *(undefined4 *)(lVar1 + 0x32c);
      *(undefined4 *)(lVar1 + 0x458) = *(undefined4 *)(lVar1 + 0x450);
    }
    else {
      puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c98c0;
      FUN_1446ddc76(local_58,&DAT_149e8cb32,1);
      FUN_14039176c(puVar8,uVar3,local_58[0],1);
      *puVar8 = &PTR_FUN_14b9c98c0;
      FUN_140391314(param_1,puVar8);
      FUN_1400b22c2(local_58,"EscapeInput");
      FUN_140de1078(param_1,local_58,0,0);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar1 + 0x458) = 0xffffffff;
      uVar5 = 0xffffffff;
    }
    *(undefined4 *)(lVar1 + 0x45c) = uVar5;
  }
LAB_148ea1961:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea1b42 FUN_148ea1b42 body=137 status=ok
// SIG undefined FUN_148ea1b42(void)

void FUN_148ea1b42(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = FUN_148ea1936;
      local_20 = 0;
      FUN_148ea1bcc(param_1,param_2,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea1bcc FUN_148ea1bcc body=269 status=ok
// SIG undefined FUN_148ea1bcc(void)

void FUN_148ea1bcc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442eca1e(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92b60;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea1cda FUN_148ea1cda body=121 status=ok
// SIG undefined FUN_148ea1cda(void)

longlong FUN_148ea1cda(longlong param_1)

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
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea1d54 FUN_148ea1d54 body=84 status=ok
// SIG undefined FUN_148ea1d54(void)

longlong FUN_148ea1d54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0x3aU) {
    FUN_140213274(param_1,0x1d);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  lVar2 = 0;
  do {
    *(short *)(lVar1 + lVar2 * 2) = (short)"character.inventory.echologs."[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1d);
  *(longlong *)(param_1 + 8) = lVar1 + 0x3a;
  return param_1;
}



// FUNCTION 148ea1da8 FUN_148ea1da8 body=482 status=ok
// SIG undefined FUN_148ea1da8(void)

undefined8 * FUN_148ea1da8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_90 [2];
  longlong *local_80 [2];
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [4];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1400b22c2(param_1 + 2,"No Node Description Set");
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_1413a454c(local_90,*(undefined4 *)(param_2 + 2),0);
  if (param_2[3] == 0) {
    lVar5 = FUN_140e82300();
  }
  else {
    lVar5 = param_2[3] + 0x18;
  }
  FUN_14023409e(&local_b8,lVar5,1);
  local_40[0] = 4;
  FUN_14023423e(local_30,local_90);
  local_60 = local_40;
  local_58 = &local_20;
  FUN_14010d304(&local_50);
  local_70 = local_b8;
  local_68 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_80,&local_70,&local_50);
  FUN_14007f2db(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
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
  if (local_90[0] != (longlong *)0x0) {
    (**(code **)(*local_90[0] + 0x10))();
  }
  uVar4 = FUN_1447a1f4a(local_80);
  FUN_144a787a6(param_1 + 2,uVar4);
  if (local_80[0] != (longlong *)0x0) {
    (**(code **)(*local_80[0] + 0x10))();
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea1f8c FUN_148ea1f8c body=1958 status=ok
// SIG undefined FUN_148ea1f8c(void)

/* WARNING: Removing unreachable block (ram,0x000148ea242a) */

longlong ** FUN_148ea1f8c(longlong **param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong *local_a0;
  int local_98 [2];
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1400b22c2(param_1,"SDU_Ident");
  FUN_1400b22c2(param_1 + 2,"SDU Group Name");
  FUN_1400b22c2(param_1 + 4,"SDU Group Description");
  plVar9 = (longlong *)FUN_140e82300();
  plVar5 = (longlong *)*plVar9;
  param_1[6] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(int *)(param_1 + 7) = (int)plVar9[1];
  *(undefined4 *)(param_1 + 8) = 0;
  plVar9 = (longlong *)FUN_140e82300();
  plVar5 = (longlong *)*plVar9;
  param_1[9] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(int *)(param_1 + 10) = (int)plVar9[1];
  *(undefined1 *)(param_1 + 0xb) = 1;
  plVar9 = (longlong *)FUN_140e82300();
  plVar5 = (longlong *)*plVar9;
  param_1[0xc] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(int *)(param_1 + 0xd) = (int)plVar9[1];
  param_1[0xe] = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_1400b22c2(param_1 + 0x10,"No Node Description Set");
  param_1[0x12] = (longlong *)0x0;
  param_1[0x13] = (longlong *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x9d) = 0;
  FUN_1400021e4(param_2,&local_a0);
  if (&local_a0 == param_1) {
    if (local_a0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_a0;
    local_a0 = (longlong *)0x0;
    *(int *)(param_1 + 1) = local_98[0];
    *(int *)((longlong)param_1 + 0xc) = local_98[1];
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_1400b22c2(&local_a0,"No Display Data Found");
  }
  else {
    puVar10 = (undefined8 *)FUN_1447a1f4a(*(longlong *)(param_2 + 8) + 0x18);
    local_a0 = (longlong *)0x0;
    local_98[0] = *(int *)(puVar10 + 1);
    lVar13 = (longlong)local_98[0];
    pvVar6 = (void *)*puVar10;
    if (lVar13 == 0) {
      local_98[1] = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98[0],0);
      memcpy(local_a0,pvVar6,lVar13 * 2);
    }
  }
  iVar3 = local_98[0] + -1;
  if (local_98[0] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 2,local_a0,iVar3);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_1400b22c2(&local_a0,"No Display Data Found");
  }
  else {
    puVar10 = (undefined8 *)FUN_1447a1f4a(*(longlong *)(param_2 + 8) + 0x28);
    local_a0 = (longlong *)0x0;
    local_98[0] = *(int *)(puVar10 + 1);
    lVar13 = (longlong)local_98[0];
    pvVar6 = (void *)*puVar10;
    if (lVar13 == 0) {
      local_98[1] = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98[0],0);
      memcpy(local_a0,pvVar6,lVar13 * 2);
    }
  }
  iVar3 = local_98[0] + -1;
  if (local_98[0] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 4,local_a0,iVar3);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x38);
  }
  *(undefined1 *)(param_1 + 0xb) = uVar8;
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 8) = uVar2;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  FUN_1413a454c(&local_a0,uVar2,0);
  FUN_140008f88(param_1 + 9,&local_a0);
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_b0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  FUN_1413a454c(&local_a0,*(undefined4 *)(param_2 + 0x28),0);
  FUN_140008f88(param_1 + 0xc,&local_a0);
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_b0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_148ea1da8(&local_a0,param_2 + 0x30);
  param_1[0xe] = local_a0;
  *(undefined1 *)(param_1 + 0xf) = (undefined1)local_98[0];
  if (param_1 + 0xe == &local_a0) {
    if (local_90 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x10] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x10] = local_90;
    local_90 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x11) = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 0x8c) = local_88._4_4_;
  }
  if ((longlong)*(int *)(param_2 + 0x58) != 0) {
    lVar13 = *(longlong *)(param_2 + 0x50);
    lVar11 = (longlong)*(int *)(param_2 + 0x58) << 5;
    plVar5 = local_90;
    uVar7 = local_88;
    do {
      local_88 = uVar7;
      local_90 = plVar5;
      FUN_148ea1da8(&local_a0,lVar13);
      iVar3 = *(int *)(param_1 + 0x13);
      lVar12 = (longlong)iVar3;
      *(uint *)(param_1 + 0x13) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
        FUN_148eb2ecc(param_1 + 0x12,iVar3);
      }
      plVar9 = param_1[0x12];
      *(undefined1 *)(plVar9 + lVar12 * 4 + 1) = (undefined1)local_98[0];
      plVar9[lVar12 * 4] = (longlong)local_a0;
      plVar9[lVar12 * 4 + 2] = 0;
      plVar9[lVar12 * 4 + 2] = (longlong)local_90;
      local_90 = (longlong *)0x0;
      plVar5 = local_90;
      *(undefined4 *)(plVar9 + lVar12 * 4 + 3) = (undefined4)local_88;
      *(undefined4 *)((longlong)plVar9 + lVar12 * 0x20 + 0x1c) = local_88._4_4_;
      local_88 = 0;
      uVar7 = local_88;
      local_88 = 0;
      local_90 = (longlong *)0x0;
      lVar13 = lVar13 + 0x20;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x14) = iVar3;
  iVar4 = *(int *)(param_2 + 0x58);
  *(bool *)((longlong)param_1 + 0xa4) = iVar4 <= iVar3;
  FUN_144a5dc74(local_e8);
  FUN_140ac6c96(&DAT_14cbde648,local_e8);
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  FUN_1413a454c(local_108,iVar4,0);
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  FUN_1413a454c(local_128,*(undefined4 *)(param_1 + 0x14),0);
  FUN_14023409e(&local_148,local_e8,1);
  local_a0 = (longlong *)CONCAT44(local_a0._4_4_,4);
  FUN_14023423e(&local_90,local_128);
  local_80 = 4;
  FUN_14023423e(local_70,local_108);
  local_c8 = &local_a0;
  local_c0 = local_60;
  FUN_14010d304(&local_b8);
  local_d8 = local_148;
  local_d0 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_f8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,(ulonglong)plStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar13 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_a0 + lVar13) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_a0 + lVar13) + 0x10))();
      *(undefined8 *)((longlong)&local_a0 + lVar13) = 0;
      *(undefined4 *)((longlong)local_98 + lVar13) = 0;
    }
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != -0x10);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_140 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  FUN_140008f88(param_1 + 6,local_f8);
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  plVar5 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_130 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_110 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if ((local_60[0] ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea2734 FUN_148ea2734 body=41 status=ok
// SIG undefined FUN_148ea2734(void)

void FUN_148ea2734(undefined8 param_1)

{
  FUN_146245af8();
  FUN_1442e146e(param_1);
  FUN_140afad18(param_1,&DAT_14cbde688);
  return;
}



// FUNCTION 148ea2764 FUN_148ea2764 body=1193 status=ok
// SIG undefined FUN_148ea2764(void)

void FUN_148ea2764(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong lVar14;
  undefined1 auStack_218 [36];
  uint local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong local_1d0 [32];
  longlong local_d0 [16];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar12 = *(longlong *)(param_1 + 0x288);
  local_1f4 = param_2;
  if ((((lVar12 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar12 + 0xc0) <= (int)param_2)) ||
     ((lVar14 = (ulonglong)param_2 * 0xa8 + *(longlong *)(lVar12 + 0xb8), lVar14 == 0 ||
      (*(char *)(lVar14 + 0xa4) != '\0')))) goto LAB_148ea27c2;
  *(uint *)(lVar12 + 0xcc) = param_2;
  if (*(int *)(lVar12 + 200) < *(int *)(lVar14 + 0x40)) {
    uVar9 = FUN_14479d2ce(param_1 + 0x30);
    local_1f0 = local_1d0;
    local_1d8 = '\0';
    local_1e0 = local_d0;
    local_1e8 = local_1f0;
    pwVar10 = (wchar_t *)FUN_140c7f682(param_1,L"Event_CanNotUpgrade",&local_1f0);
    local_50 = 0;
    if (pwVar10 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar11 = wcslen(pwVar10);
      FUN_1446fe5a4(local_d0,pwVar10,sVar11 & 0xffffffff,1);
    }
    FUN_140c7f7d4(uVar9,local_48,&local_1f4);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8 == '\x01') {
      FUN_1400020a8(local_1f0);
    }
    FUN_140de1078(param_1,&DAT_14cbde638,0,0);
    puVar13 = &DAT_14cbde680;
  }
  else {
    iVar3 = *(int *)(lVar14 + 0xa0);
    if (((longlong)iVar3 < 0) || (*(int *)(lVar14 + 0x98) <= iVar3)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar14 + 0x90) + (longlong)iVar3 * 0x20);
    }
    lVar12 = param_1 + 0x30;
    uVar6 = FUN_14479d2ce(lVar12);
    lVar7 = FUN_140391a3c(uVar6);
    if (lVar7 == 0) goto LAB_148ea27c2;
    puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar8 = &PTR_FUN_14b9c9ac8;
    puVar8[1] = 0;
    puVar8[2] = uVar9;
    FUN_14039144e(lVar7,puVar8);
    uVar9 = FUN_14479d2ce(lVar12);
    local_1f0 = local_1d0;
    local_1d8 = '\0';
    local_1e0 = local_d0;
    local_1e8 = local_1f0;
    pwVar10 = (wchar_t *)FUN_140c7f682(param_1,L"Event_UpgradeSDU",&local_1f0);
    local_50 = 0;
    if (pwVar10 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar11 = wcslen(pwVar10);
      FUN_1446fe5a4(local_d0,pwVar10,sVar11 & 0xffffffff,1);
    }
    FUN_140c7f7d4(uVar9,local_48,&local_1f4);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8 == '\x01') {
      FUN_1400020a8(local_1f0);
    }
    FUN_140de1078(param_1,&DAT_14cbde628,0,0);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,local_d0,DAT_14cbde610,0);
    if (local_d0[0] == 0) goto LAB_148ea27c2;
    uVar9 = FUN_14479d2ce(lVar12);
    lVar12 = FUN_1407f492e(uVar9);
    if (lVar12 == 0) goto LAB_148ea27c2;
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148ea27c2;
    FUN_148ef03d2(lVar12 + 0x3c28,&local_1f0);
    plVar5 = local_1e8;
    plVar4 = local_1f0;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_148ea27c2;
    FUN_1488aec8a(plVar4,&local_1f0,local_d0);
    if (*(int *)(lVar14 + 0xa0) + 1 < *(int *)(lVar14 + 0x98)) {
      if (local_1f0 == DAT_14caa8578) {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_1f0,DAT_14cbde618,0);
        if (local_1f0 != (longlong *)0x0) {
          FUN_148ec90d0(param_1,local_d0,&local_1f0);
        }
      }
      puVar13 = &DAT_14cbde678;
    }
    else {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_1f0,DAT_14cbde620,0);
      if (local_1f0 != (longlong *)0x0) {
        FUN_148ec90d0(param_1,local_d0,&local_1f0);
      }
      puVar13 = &DAT_14cbde670;
    }
  }
  FUN_1457d7894(param_1,puVar13);
LAB_148ea27c2:
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea2c26 FUN_148ea2c26 body=131 status=ok
// SIG undefined FUN_148ea2c26(void)

void FUN_148ea2c26(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_1400b2348(puVar2,local_28,1);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea2caa FUN_148ea2caa body=126 status=ok
// SIG undefined FUN_148ea2caa(void)

void FUN_148ea2caa(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbde760) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(DAT_14cbde758 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_148ea2d12;
LAB_148ea2ce9:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_148ea2ce9;
      }
      if (uVar5 != uVar2) {
        return;
      }
    }
  }
  else if (DAT_14cbde760 + iVar1 != 1) {
    return;
  }
LAB_148ea2d12:
  FUN_148ea3ce0(param_1,param_3);
  return;
}



// FUNCTION 148ea2d28 FUN_148ea2d28 body=870 status=ok
// SIG undefined FUN_148ea2d28(void)

void FUN_148ea2d28(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)FUN_145916aba();
  lVar13 = *plVar5;
  SRWLock = (PSRWLOCK)(lVar13 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  uVar2 = FUN_148e1abe8(lVar13 + 8);
  ReleaseSRWLockShared(SRWLock);
  if ((int)uVar2 < 1) {
    FUN_140de1078(param_1,&DAT_14cbde118,0,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  plVar5 = (longlong *)FUN_145916aba(param_1);
  lVar13 = *plVar5;
  AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x1c0));
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)*(int *)(lVar13 + 0x88) != 0) {
    lVar14 = *(longlong *)(lVar13 + 0x80);
    lVar12 = (longlong)*(int *)(lVar13 + 0x88) * 0x430;
    do {
      cVar1 = FUN_144240e0e(lVar14);
      uVar10 = uStack_60;
      if (cVar1 != '\0') {
        lVar11 = (longlong)(int)uStack_60;
        uVar3 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if (uStack_60._4_4_ < uVar3) {
          FUN_145917388(&local_68,uVar10 & 0xffffffff);
        }
        FUN_1413505e4(lVar11 * 0x430 + local_68,lVar14);
      }
      lVar14 = lVar14 + 0x430;
      lVar12 = lVar12 + -0x430;
    } while (lVar12 != 0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x1c0));
  uVar4 = 0;
  if ((uStack_60 & 0xffffffff) == 0) goto LAB_148ea2e6a;
  local_78 = 0;
  uStack_70 = 0;
  if ((int)uStack_60 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_60 & 0xffffffff);
  }
  FUN_148e9a4d0(&local_78);
  if ((longlong)(int)uStack_60 == 0) {
LAB_148ea2ed5:
    lVar13 = local_78;
    lVar14 = (longlong)(int)uStack_70;
    if ((int)uVar2 < (int)uStack_70) {
      lVar13 = 0x254;
      uVar10 = 1;
      do {
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        lVar14 = local_78;
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        *puVar6 = &PTR_FUN_14b9c6b40;
        FUN_1446ddc76(&local_50,"Deposit",1);
        FUN_14039176c(puVar6,uVar7,local_50,1);
        *puVar6 = &PTR_FUN_14b9c6b40;
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar14 + lVar13);
        FUN_140391314(param_1,puVar6);
        if (uVar2 == uVar10) break;
        lVar13 = lVar13 + 0x268;
        iVar9 = (int)uVar10;
        uVar10 = uVar10 + 1;
      } while (iVar9 < (int)uStack_70);
      lVar12 = param_1 + 0x318;
    }
    else {
      lVar12 = 0x310;
      if ((int)uStack_70 != 0) {
        lVar12 = 0;
        do {
          puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          *puVar6 = &PTR_FUN_14b9c6b40;
          FUN_1446ddc76(&local_50,"Deposit",1);
          FUN_14039176c(puVar6,uVar7,local_50,1);
          *puVar6 = &PTR_FUN_14b9c6b40;
          *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar13 + 0x254 + lVar12);
          FUN_140391314(param_1,puVar6);
          lVar12 = lVar12 + 0x268;
        } while (lVar14 * 0x268 - lVar12 != 0);
        lVar12 = (ulonglong)((int)uStack_70 == 1) * 0x10 + 0x310;
      }
      lVar12 = lVar12 + param_1;
    }
    FUN_1457d7894(param_1,lVar12);
  }
  else {
    lVar14 = (longlong)(int)uStack_60 * 0x430 + local_68;
    bVar8 = 0;
    lVar13 = local_68;
    do {
      uVar7 = FUN_141352650(&local_78);
      FUN_141352d9a(uVar7,lVar13);
      bVar8 = bVar8 | *(byte *)(lVar13 + 0x10);
      lVar13 = lVar13 + 0x430;
    } while (lVar13 != lVar14);
    if ((bVar8 & 1) == 0) goto LAB_148ea2ed5;
    FUN_148ea3196(param_1,&local_78);
  }
  FUN_1412d6a39(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar4 = (int)uStack_60;
LAB_148ea2e6a:
  FUN_141286eab(local_68,uVar4);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea30ac FUN_148ea30ac body=234 status=ok
// SIG undefined FUN_148ea30ac(void)

void FUN_148ea30ac(longlong param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar3 = (longlong *)FUN_14134fce6();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(uint *)(lVar2 + 8);
  ReleaseSRWLockShared(SRWLock);
  if (((uVar1 < 2) && (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 != 0)) &&
     ((longlong)*(int *)(lVar2 + 0xb58) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0xb50);
    lVar4 = (longlong)*(int *)(lVar2 + 0xb58) << 4;
    do {
      if (*plVar3 == DAT_14cbccb58) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(uint *)((longlong)plVar3 + 0xc) <= param_2) {
          return;
        }
        param_2 = param_2 + (int)plVar3[1];
        if ((int)param_2 < 0) {
          return;
        }
        if (*(int *)(lVar2 + 0xb68) <= (int)param_2) {
          return;
        }
        puVar5 = &DAT_14cbde118;
        if ((*(byte *)(*(longlong *)(lVar2 + 0xb60) + 0x9d + (ulonglong)param_2 * 0x280) & 4) == 0)
        {
          puVar5 = &DAT_14cbde148;
        }
        FUN_140de1078(param_1,puVar5,0,0);
        *(undefined1 *)(lVar2 + 0x928) = 0;
        FUN_145917952(param_1,param_2);
        return;
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 148ea3196 FUN_148ea3196 body=1528 status=ok
// SIG undefined FUN_148ea3196(void)

void FUN_148ea3196(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_188 [32];
  PSRWLOCK local_168;
  code *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  longlong local_108;
  uint local_100;
  uint local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined1 local_cc;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar10 = *(longlong *)(param_1 + 0x288);
  if (lVar10 != 0) {
    if ((((*(char *)(lVar10 + 0x928) != '\0') || (*(char *)(lVar10 + 0xc0) != '\0')) ||
        (*(char *)(lVar10 + 0x1c0) == '\x01')) &&
       (puVar3 = *(ushort **)(lVar10 + 0x80), puVar3 != (ushort *)0x0)) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar10 + 0x78) & 0x3f));
    }
    *(undefined1 *)(lVar10 + 0x928) = 0;
    *(undefined1 *)(lVar10 + 0xc0) = 0;
    *(undefined1 *)(lVar10 + 0x1c0) = 0;
    plVar6 = (longlong *)FUN_145916aba(param_1);
    lVar10 = *plVar6;
    local_168 = (PSRWLOCK)(lVar10 + 0x1c0);
    AcquireSRWLockExclusive(local_168);
    *(int *)(lVar10 + 0x1b8) = *(int *)(lVar10 + 0x1b8) + 1;
    plVar6 = (longlong *)(lVar10 + 0xb0);
    plVar1 = (longlong *)(lVar10 + 0x98);
    *(undefined4 *)(lVar10 + 0xb8) = 0;
    if (*(int *)(lVar10 + 0xbc) < 0) {
      FUN_148e9a5d8(plVar6,0);
    }
    *(int *)(lVar10 + 0xc0) = *(int *)(lVar10 + 0xc0) + 1;
    FUN_148e9a5ae(plVar1,(int)param_2[1]);
    *(int *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa8) + 1;
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar4 = *param_2;
      lVar8 = 0;
      do {
        iVar2 = *(int *)(lVar10 + 0xa0);
        *(uint *)(lVar10 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(lVar10 + 0xa4) < iVar2 + 1U) {
          FUN_148d699d4(plVar1,iVar2);
          *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar8);
LAB_148ea3602:
          *(int *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa8) + 1;
        }
        else {
          *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar8);
          if (iVar2 != -1) goto LAB_148ea3602;
        }
        if ((*(byte *)(lVar4 + 0x9c + lVar8) & 2) == 0) {
          iVar2 = *(int *)(lVar10 + 0xb8);
          *(uint *)(lVar10 + 0xb8) = iVar2 + 1U;
          if (*(uint *)(lVar10 + 0xbc) < iVar2 + 1U) {
            FUN_148d699d4(plVar6,iVar2);
            *(undefined4 *)(*plVar6 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar8);
          }
          else {
            *(undefined4 *)(*plVar6 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar4 + 0x254 + lVar8);
            if (iVar2 == -1) goto LAB_148ea364b;
          }
          *(int *)(lVar10 + 0xc0) = *(int *)(lVar10 + 0xc0) + 1;
        }
LAB_148ea364b:
        lVar8 = lVar8 + 0x268;
      } while ((longlong)(int)lVar9 * 0x268 - lVar8 != 0);
    }
    FUN_145be44b4(local_140);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"DepositEquippedItemTitle",0);
    FUN_1410d1eba(&local_160,&local_78);
    FUN_140008f88(local_138,&local_160);
    if (local_160 != (code *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"DepositEquippedItemDescription",0);
    FUN_1410d1eba(&local_160,&local_78);
    FUN_140008f88(local_128,&local_160);
    if (local_160 != (code *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"DepositEquippedItemConfirm",0);
    FUN_1410d1eba(&local_160,&local_78);
    uVar5 = local_100;
    local_150 = DAT_14cbde538;
    local_148 = 1;
    lVar9 = (longlong)(int)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      FUN_145da4fc8(&local_108,uVar5);
    }
    lVar4 = local_108;
    lVar9 = lVar9 * 0x20;
    FUN_14023423e(local_108 + lVar9,&local_160);
    *(undefined1 *)(lVar4 + 0x18 + lVar9) = local_148;
    *(undefined8 *)(lVar4 + 0x10 + lVar9) = local_150;
    if (local_160 != (code *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(lVar10 + 0xb8) != 0) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"DepositEquippedItemOnlyUnequipped",0);
      FUN_1410d1eba(&local_160,&local_78);
      uVar5 = local_100;
      local_150 = DAT_14cbde530;
      local_148 = 1;
      lVar10 = (longlong)(int)local_100;
      local_100 = local_100 + 1;
      if (local_fc < local_100) {
        FUN_145da4fc8(&local_108,uVar5);
      }
      lVar9 = local_108;
      lVar10 = lVar10 * 0x20;
      FUN_14023423e(local_108 + lVar10,&local_160);
      *(undefined1 *)(lVar9 + 0x18 + lVar10) = local_148;
      *(undefined8 *)(lVar9 + 0x10 + lVar10) = local_150;
      if (local_160 != (code *)0x0) {
        (**(code **)(*(longlong *)local_160 + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"DepositEquippedItemCancel",0);
    FUN_1410d1eba(&local_160,&local_78);
    uVar5 = local_100;
    local_150 = DAT_14cbde528;
    local_148 = 1;
    lVar10 = (longlong)(int)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      FUN_145da4fc8(&local_108,uVar5);
    }
    lVar10 = lVar10 * 0x20;
    FUN_14023423e(local_108 + lVar10,&local_160);
    *(undefined1 *)(local_108 + 0x18 + lVar10) = local_148;
    *(undefined8 *)(local_108 + 0x10 + lVar10) = local_150;
    if (local_160 != (code *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_160 = FUN_148ea3912;
    local_158 = 0;
    FUN_148ea3790(&local_78,param_1);
    FUN_144a450dc(local_f8,&local_78);
    FUN_1449db362(&local_78);
    local_d8 = DAT_14cbde530;
    local_cc = 1;
    uVar7 = FUN_14001cc68(0x100,0x10);
    FUN_148e875c4(uVar7,param_1 + 0x30,local_140);
    FUN_140391314(param_1,uVar7);
    FUN_1459ddea2(local_140);
    ReleaseSRWLockExclusive(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea3790 FUN_148ea3790 body=386 status=ok
// SIG undefined FUN_148ea3790(void)

longlong * FUN_148ea3790(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148ea38a1:
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
    *puVar5 = &PTR_FUN_14b9cc190;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ea38a1;
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
    *puVar5 = &PTR_FUN_14b9cc190;
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



// FUNCTION 148ea3912 FUN_148ea3912 body=831 status=ok
// SIG undefined FUN_148ea3912(void)

void FUN_148ea3912(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  PSRWLOCK SRWLock;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_2;
  if (lVar2 == DAT_14cbde530) {
    plVar4 = (longlong *)FUN_145916aba(param_1);
    lVar2 = *plVar4;
    AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x1c0));
    ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x1c0));
    iVar1 = *(int *)(lVar2 + 0xb8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0xb0);
      lVar6 = 0;
      do {
        puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        *puVar5 = &PTR_FUN_14b9c6b40;
        FUN_1446ddc76(&local_50,"Deposit",1);
        FUN_14039176c(puVar5,uVar3,local_50,1);
        *puVar5 = &PTR_FUN_14b9c6b40;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar2 + lVar6);
        FUN_140391314(param_1,puVar5);
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar1 * 4 != lVar6);
    }
    FUN_140de1078(param_1,&DAT_14cbde148,0,0);
    plVar4 = (longlong *)FUN_145916aba(param_1);
    lVar2 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar2 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(lVar2 + 0xb8);
  }
  else {
    if (lVar2 != DAT_14cbde538) {
      if (lVar2 == DAT_14cbde528) {
        FUN_140de1078(param_1,&DAT_14cbde158,0,0);
      }
      goto LAB_148ea3a4c;
    }
    plVar4 = (longlong *)FUN_145916aba(param_1);
    lVar2 = *plVar4;
    AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x1c0));
    ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x1c0));
    iVar1 = *(int *)(lVar2 + 0xa0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x98);
      lVar6 = 0;
      do {
        puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        *puVar5 = &PTR_FUN_14b9c6b40;
        FUN_1446ddc76(&local_50,"Deposit",1);
        FUN_14039176c(puVar5,uVar3,local_50,1);
        *puVar5 = &PTR_FUN_14b9c6b40;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar2 + lVar6);
        FUN_140391314(param_1,puVar5);
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar1 * 4 != lVar6);
    }
    FUN_140de1078(param_1,&DAT_14cbde148,0,0);
    plVar4 = (longlong *)FUN_145916aba(param_1);
    lVar2 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar2 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(lVar2 + 0xa0);
  }
  ReleaseSRWLockShared(SRWLock);
  FUN_1457d7894(param_1,(ulonglong)(iVar1 < 2) * 0x10 + param_1 + 0x310);
LAB_148ea3a4c:
  plVar4 = (longlong *)FUN_145916aba(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1c0));
  *(int *)(lVar2 + 0x1b8) = *(int *)(lVar2 + 0x1b8) + 1;
  if (*(int *)(lVar2 + 0xbc) < 0) {
    *(undefined4 *)(lVar2 + 0xb8) = 0;
    FUN_148e9a5d8(lVar2 + 0xb0,0);
  }
  else {
    *(undefined4 *)(lVar2 + 0xb8) = 0;
  }
  *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1c0));
  plVar4 = (longlong *)FUN_145916aba(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1c0));
  *(int *)(lVar2 + 0x1b8) = *(int *)(lVar2 + 0x1b8) + 1;
  if (*(int *)(lVar2 + 0xa4) < 0) {
    *(undefined4 *)(lVar2 + 0xa0) = 0;
    FUN_148e9a5d8(lVar2 + 0x98,0);
  }
  else {
    *(undefined4 *)(lVar2 + 0xa0) = 0;
  }
  *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea3c52 FUN_148ea3c52 body=141 status=ok
// SIG undefined FUN_148ea3c52(void)

undefined8 * FUN_148ea3c52(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9c7260;
  FUN_1446ddc76(&local_38,"UpdateItemFlags",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c7260;
  *(undefined4 *)(param_1 + 7) = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea3ce0 FUN_148ea3ce0 body=1230 status=ok
// SIG undefined FUN_148ea3ce0(void)

void FUN_148ea3ce0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((int)param_2 < 0 || lVar2 == 0) || (*(int *)(lVar2 + 0x978) <= (int)param_2)) {
    return;
  }
  plVar10 = (longlong *)((ulonglong)param_2 * 0x90 + *(longlong *)(lVar2 + 0x970));
  if ((*(int *)(lVar2 + 0x8e4) == -1) && (*(int *)(lVar2 + 0x8e8) == 0)) {
    lVar3 = 0;
    if ((*(byte *)(lVar2 + 0x72f) & 0x20) != 0) {
      lVar3 = lVar2 + 0x690;
    }
  }
  else {
    lVar3 = lVar2 + 0x690;
  }
  iVar1 = (int)plVar10[1];
  if (iVar1 == DAT_14cbddfc8) {
    if (1 < iVar1) {
      lVar11 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*plVar10 + lVar11);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(DAT_14cbddfc0 + lVar11);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_148ea3eac;
LAB_148ea3d83:
        lVar11 = lVar11 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar9 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea3d83;
      }
      if (uVar5 != uVar7) goto LAB_148ea3db0;
    }
LAB_148ea3eac:
    if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x9c) & 0x20) == 0)) {
      uVar8 = 2;
      puVar4 = &DAT_14cbde1e8;
      goto LAB_148ea3ec6;
    }
    uVar8 = 2;
  }
  else {
    if (DAT_14cbddfc8 + iVar1 == 1) goto LAB_148ea3eac;
LAB_148ea3db0:
    if (iVar1 == DAT_14cbddfb8) {
      if (1 < iVar1) {
        lVar11 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*plVar10 + lVar11);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(DAT_14cbddfb0 + lVar11);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_148ea3f29;
LAB_148ea3df4:
          lVar11 = lVar11 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar9 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea3df4;
        }
        if (uVar5 != uVar7) goto LAB_148ea3e21;
      }
LAB_148ea3f29:
      if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x9c) & 0x10) == 0)) {
        uVar8 = 4;
        puVar4 = &DAT_14cbde1d8;
        goto LAB_148ea3ec6;
      }
      uVar8 = 4;
    }
    else {
      if (DAT_14cbddfb8 + iVar1 == 1) goto LAB_148ea3f29;
LAB_148ea3e21:
      if (iVar1 == DAT_14cbddfe8) {
        uVar8 = 0x10;
        puVar4 = &DAT_14cbde108;
        if (1 < iVar1) {
          lVar11 = 0;
          while( true ) {
            uVar5 = *(ushort *)(*plVar10 + lVar11);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(DAT_14cbddfe0 + lVar11);
            if (uVar5 != uVar7) break;
            if (uVar5 == 0) goto LAB_148ea3ec6;
LAB_148ea3e6e:
            lVar11 = lVar11 + 2;
          }
          if ((uVar7 | uVar5) < 0x80) {
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar9 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea3e6e;
          }
          if (uVar5 != uVar7) goto LAB_148ea3f5b;
        }
        goto LAB_148ea3ec6;
      }
      if (DAT_14cbddfe8 + iVar1 == 1) {
        uVar8 = 0x10;
      }
      else {
LAB_148ea3f5b:
        if (iVar1 == DAT_14cbddff8) {
          uVar8 = 0x20;
          puVar4 = &DAT_14cbde108;
          if (1 < iVar1) {
            lVar11 = 0;
            while( true ) {
              uVar5 = *(ushort *)(*plVar10 + lVar11);
              uVar6 = (ulonglong)uVar5;
              uVar7 = *(ushort *)(DAT_14cbddff0 + lVar11);
              if (uVar5 != uVar7) break;
              if (uVar5 == 0) goto LAB_148ea3ec6;
LAB_148ea3fa8:
              lVar11 = lVar11 + 2;
            }
            if ((uVar7 | uVar5) < 0x80) {
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea3fa8;
            }
            if (uVar5 != uVar7) goto LAB_148ea3feb;
          }
          goto LAB_148ea3ec6;
        }
        if (DAT_14cbddff8 + iVar1 == 1) {
          uVar8 = 0x20;
        }
        else {
LAB_148ea3feb:
          if (iVar1 == DAT_14cbde008) {
            uVar8 = 0x40;
            puVar4 = &DAT_14cbde108;
            if (1 < iVar1) {
              lVar11 = 0;
              while( true ) {
                uVar5 = *(ushort *)(*plVar10 + lVar11);
                uVar6 = (ulonglong)uVar5;
                uVar7 = *(ushort *)(DAT_14cbde000 + lVar11);
                if (uVar5 != uVar7) break;
                if (uVar5 == 0) goto LAB_148ea3ec6;
LAB_148ea4038:
                lVar11 = lVar11 + 2;
              }
              if ((uVar7 | uVar5) < 0x80) {
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                uVar9 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea4038;
              }
              if (uVar5 != uVar7) goto LAB_148ea407b;
            }
            goto LAB_148ea3ec6;
          }
          if (DAT_14cbde008 + iVar1 == 1) {
            uVar8 = 0x40;
          }
          else {
LAB_148ea407b:
            if (iVar1 == DAT_14cbde018) {
              uVar8 = 0x80;
              puVar4 = &DAT_14cbde108;
              if (1 < iVar1) {
                lVar11 = 0;
                while( true ) {
                  uVar5 = *(ushort *)(*plVar10 + lVar11);
                  uVar6 = (ulonglong)uVar5;
                  uVar7 = *(ushort *)(DAT_14cbde010 + lVar11);
                  if (uVar5 != uVar7) break;
                  if (uVar5 == 0) goto LAB_148ea3ec6;
LAB_148ea40c8:
                  lVar11 = lVar11 + 2;
                }
                if ((uVar7 | uVar5) < 0x80) {
                  uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                  uVar9 = (ulonglong)uVar7;
                  uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea40c8;
                }
                if (uVar5 != uVar7) goto LAB_148ea410b;
              }
              goto LAB_148ea3ec6;
            }
            if (DAT_14cbde018 + iVar1 == 1) {
              uVar8 = 0x80;
            }
            else {
LAB_148ea410b:
              if (iVar1 == DAT_14cbddfd8) {
                if (1 < iVar1) {
                  lVar11 = 0;
                  while( true ) {
                    uVar5 = *(ushort *)(*plVar10 + lVar11);
                    uVar6 = (ulonglong)uVar5;
                    uVar7 = *(ushort *)(DAT_14cbddfd0 + lVar11);
                    if (uVar5 != uVar7) break;
                    if (uVar5 == 0) goto LAB_148ea4185;
LAB_148ea4145:
                    lVar11 = lVar11 + 2;
                  }
                  if ((uVar7 | uVar5) < 0x80) {
                    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                    uVar9 = (ulonglong)uVar7;
                    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ea4145;
                  }
                  if (uVar5 != uVar7) {
                    return;
                  }
                }
              }
              else if (DAT_14cbddfd8 + iVar1 != 1) {
                return;
              }
LAB_148ea4185:
              if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x9c) & 0x40) == 0)) {
                uVar8 = 8;
                puVar4 = &DAT_14cbde1c8;
                goto LAB_148ea3ec6;
              }
              uVar8 = 8;
            }
          }
        }
      }
    }
  }
  puVar4 = &DAT_14cbde108;
LAB_148ea3ec6:
  FUN_140de1078(param_1,puVar4,0,0);
  FUN_148ee5cde(lVar2,uVar8);
  return;
}



// FUNCTION 148ea41ae FUN_148ea41ae body=214 status=ok
// SIG undefined FUN_148ea41ae(void)

void FUN_148ea41ae(longlong param_1)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14134fce6();
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(uint *)(lVar2 + 8);
  ReleaseSRWLockShared(SRWLock);
  if ((uVar1 < 6) && ((0x32U >> (uVar1 & 0x1f) & 1) != 0)) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar5 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar5,uVar3,local_38,1);
    *puVar5 = &PTR_FUN_14b9c1410;
    puVar5[7] = DAT_14cbd9320;
    FUN_140391314(param_1,puVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea4286 FUN_148ea4286 body=296 status=ok
// SIG undefined FUN_148ea4286(void)

void FUN_148ea4286(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = FUN_1407f492e(uVar2);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x398) != 0)) {
      lVar4 = FUN_144a7b4ca();
      if (((*(longlong *)(lVar3 + 0x398) != 0) &&
          (((lVar4 != 0 && (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x398) + 0x10), lVar3 != 0))
           && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar3 = FUN_14129b2e6();
        if (lVar3 != 0) {
          local_a8[0] = 0;
          uStack_70 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          local_74 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0xffffffff;
          local_2c = 0;
          local_2a = 1;
          local_29 = 0;
          uStack_6c = 0x10000000000;
          lVar4 = thunk_FUN_1402735c8();
          uVar2 = FUN_1447210f0(lVar3);
          local_b8 = local_a8;
          FUN_140bdce7c(uVar2,lVar4 + 0x518,lVar3,0);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea43b0 FUN_148ea43b0 body=413 status=ok
// SIG undefined FUN_148ea43b0(void)

void FUN_148ea43b0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_48 = 0;
    uStack_40 = 0;
    bVar11 = true;
    FUN_1400b2348(puVar4);
    iVar3 = (int)param_2[1];
    if (iVar3 == (int)uStack_40) {
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_2 + lVar5);
          uVar2 = (uint)uVar6;
          uVar8 = *(ushort *)(local_48 + lVar5);
          uVar9 = (uint)uVar8;
          if (uVar6 != uVar8) {
            if ((uVar8 | uVar6) < 0x80) {
              uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148ea444e;
            }
            iVar3 = uVar2 - uVar9;
            goto LAB_148ea4543;
          }
          if (uVar6 == 0) break;
LAB_148ea444e:
          lVar5 = lVar5 + 2;
        }
        iVar3 = 0;
LAB_148ea4543:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = (int)uStack_40 + iVar3 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      iVar3 = (int)param_3[1];
      if (iVar3 == DAT_14cbde7c8) {
        if (1 < iVar3) {
          lVar5 = 0;
          while( true ) {
            uVar6 = *(ushort *)(*param_3 + lVar5);
            uVar7 = (ulonglong)uVar6;
            uVar8 = *(ushort *)(DAT_14cbde7c0 + lVar5);
            if (uVar6 != uVar8) break;
            if (uVar6 == 0) goto LAB_148ea450a;
LAB_148ea44d5:
            lVar5 = lVar5 + 2;
          }
          if ((uVar8 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_148ea44d5;
          }
          if (uVar6 != uVar8) goto LAB_148ea451d;
        }
      }
      else if (DAT_14cbde7c8 + iVar3 != 1) goto LAB_148ea451d;
LAB_148ea450a:
      if (*(longlong *)(param_1 + 0x288) != 0) {
        FUN_148ee857a(*(longlong *)(param_1 + 0x288),param_4);
      }
    }
  }
LAB_148ea451d:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea4554 FUN_148ea4554 body=26 status=ok
// SIG undefined FUN_148ea4554(void)

void FUN_148ea4554(undefined8 param_1)

{
  FUN_148ea456e();
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148ea456e FUN_148ea456e body=464 status=ok
// SIG undefined FUN_148ea456e(void)

void FUN_148ea456e(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xb0) = 0xffffffffffffffff;
    FUN_1400b22c2(&local_40,&DAT_149e02088);
    FUN_140233b1a(local_30,&local_40);
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_40,&DAT_149e02088);
    FUN_140233b1a(local_50,&local_40);
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_40,&DAT_149e02088);
    if ((longlong *)(lVar1 + 0xb8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0xb8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0xb8) = local_40;
      local_40 = 0;
      *(undefined4 *)(lVar1 + 0xc0) = local_38;
      *(undefined4 *)(lVar1 + 0xc4) = local_34;
    }
    FUN_1400b22c2(&local_40,&DAT_149e02088);
    if ((longlong *)(lVar1 + 0xe8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0xe8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0xe8) = local_40;
      local_40 = 0;
      *(undefined4 *)(lVar1 + 0xf0) = local_38;
      *(undefined4 *)(lVar1 + 0xf4) = local_34;
    }
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea4740 FUN_148ea4740 body=299 status=ok
// SIG undefined FUN_148ea4740(void)

void FUN_148ea4740(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x110) != '\0')) {
    return;
  }
  lVar4 = FUN_140391552();
  if (lVar4 != 0) {
    if (*(int *)(lVar3 + 0xf0) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(lVar3 + 0xe8);
    }
    lVar7 = 0;
    do {
      uVar2 = puVar5[lVar7];
      bVar1 = "warning"[lVar7];
      iVar8 = (uint)uVar2 - (uint)bVar1;
      if (iVar8 == 0) {
        if (uVar2 == 0) goto LAB_148ea47e6;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148ea47e1;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148ea47de;
      }
      lVar7 = lVar7 + 1;
    } while( true );
  }
LAB_148ea481f:
  FUN_148ea4dc0(param_1);
  return;
code_r0x000148ea47de:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148ea47e1:
  if (iVar8 == 0) {
LAB_148ea47e6:
    puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_14b9c9f60;
  }
  else {
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    FUN_148ea4ef4(puVar6,*(undefined8 *)(lVar3 + 0xb0),lVar3 + 0xb8);
  }
  FUN_14039144e(lVar4,puVar6);
  goto LAB_148ea481f;
}



// FUNCTION 148ea489a FUN_148ea489a body=348 status=ok
// SIG undefined FUN_148ea489a(void)

void FUN_148ea489a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ea4740;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea49f8(param_1,param_2,&DAT_14cb92d28,param_1);
      local_38 = (code *)&LAB_148ea4b14;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea49f8(param_1,param_2,&DAT_14cb92d40,param_1);
      local_38 = (code *)&LAB_148ea4b46;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea49f8(param_1,param_2,&DAT_14cb92d38,param_1);
      local_38 = (code *)&LAB_148ea4b78;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea49f8(param_1,param_2,&DAT_14cb92d48,param_1);
      local_38 = FUN_148ea4baa;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea49f8(param_1,param_2,&DAT_14cb92d50,param_1);
      local_38 = FUN_148ea4cb4;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea49f8(param_1,param_2,&DAT_14cb92d58,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea49f8 FUN_148ea49f8 body=282 status=ok
// SIG undefined FUN_148ea49f8(void)

void FUN_148ea49f8(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1442eccd6(param_2,param_3,param_4);
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



// FUNCTION 148ea4baa FUN_148ea4baa body=264 status=ok
// SIG undefined FUN_148ea4baa(void)

void FUN_148ea4baa(longlong param_1)

{
  undefined8 uVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  local_1d8 = local_1b8;
  local_1c0 = '\0';
  local_1c8 = local_b8;
  local_1d0 = local_1d8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"EULA_PageDown",&local_1d8);
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
  }
  FUN_1412a486e(uVar1,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 == '\x01') {
    FUN_1400020a8(local_1d8);
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea4cb4 FUN_148ea4cb4 body=264 status=ok
// SIG undefined FUN_148ea4cb4(void)

void FUN_148ea4cb4(longlong param_1)

{
  undefined8 uVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  local_1d8 = local_1b8;
  local_1c0 = '\0';
  local_1c8 = local_b8;
  local_1d0 = local_1d8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"EULA_PageUp",&local_1d8);
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
  }
  FUN_1412a486e(uVar1,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 == '\x01') {
    FUN_1400020a8(local_1d8);
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea4dc0 FUN_148ea4dc0 body=121 status=ok
// SIG undefined FUN_148ea4dc0(void)

void FUN_148ea4dc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
  cVar1 = FUN_148ea4e3a();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
  else {
    FUN_148ea456e(param_1);
    lVar2 = FUN_140391552(param_1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_14b9c9f50;
      FUN_14039144e(lVar2,puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148ea4e3a FUN_148ea4e3a body=184 status=ok
// SIG undefined FUN_148ea4e3a(void)

ulonglong FUN_148ea4e3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x208) == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar3 = *(longlong *)(local_38 + 0x430);
    SRWLock = (PSRWLOCK)(lVar3 + 0xf0);
    AcquireSRWLockShared(SRWLock);
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
        }
      }
    }
    uVar4 = CONCAT71((int7)((ulonglong)local_30 >> 8),
                     *(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x2c0));
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea4ef4 FUN_148ea4ef4 body=118 status=ok
// SIG undefined FUN_148ea4ef4(void)

undefined8 * FUN_148ea4ef4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9c9f70;
  param_1[4] = param_2;
  param_1[5] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148ea4f6a FUN_148ea4f6a body=47 status=ok
// SIG undefined FUN_148ea4f6a(void)

void FUN_148ea4f6a(longlong param_1)

{
  FUN_14588cd9e();
  *(undefined2 *)(param_1 + 0x361) = 0;
  *(undefined1 *)(param_1 + 0x354) = *(undefined1 *)(param_1 + 0x34c);
  FUN_140dd75a4(param_1);
  return;
}



// FUNCTION 148ea4f9a FUN_148ea4f9a body=195 status=ok
// SIG undefined FUN_148ea4f9a(void)

void FUN_148ea4f9a(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = FUN_140391552();
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x361) == '\x01') {
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x344);
      uVar3 = *(undefined4 *)(param_1 + 0x2e4);
      uVar1 = *(undefined1 *)(param_1 + 700);
      uVar2 = *(undefined1 *)(param_1 + 0x354);
      *puVar6 = &PTR_FUN_14b9ca0f0;
      *(undefined1 *)(puVar6 + 1) = uVar2;
      *(undefined1 *)((longlong)puVar6 + 9) = uVar1;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
      puVar6[2] = uVar4;
      FUN_14039144e(lVar5,puVar6);
      *(undefined1 *)(param_1 + 0x361) = 0;
    }
    if (*(char *)(param_1 + 0x362) == '\x01') {
      puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar1 = *(undefined1 *)(param_1 + 0x360);
      *puVar6 = &PTR_FUN_14b9ca100;
      *(undefined1 *)(puVar6 + 1) = uVar1;
      FUN_14039144e(lVar5,puVar6);
      *(undefined1 *)(param_1 + 0x362) = 0;
    }
  }
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148ea50a4 FUN_148ea50a4 body=682 status=ok
// SIG undefined FUN_148ea50a4(void)

void FUN_148ea50a4(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  uVar7 = (ulonglong)param_3;
  lVar5 = *param_2;
  if (lVar5 == DAT_14cbdea58) {
    if (((int)param_3 < 0) || (*(int *)(param_1 + 0x2c8) <= (int)param_3)) goto LAB_148ea5176;
    *(uint *)(param_1 + 700) = param_3;
    *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 1;
    FUN_1447a1f4a(uVar7 * 0x90 + *(longlong *)(param_1 + 0x2c0) + 0x40);
    FUN_144a787a6(lVar3 + 0xd0);
    uVar1 = *(uint *)(lVar3 + 0x118);
    if ((int)param_3 < (int)uVar1) {
      lVar5 = 0x88;
      uVar6 = 0;
      do {
        *(byte *)(*(longlong *)(lVar3 + 0x110) + lVar5) =
             *(byte *)(*(longlong *)(lVar3 + 0x110) + lVar5) & 0xbf | (uVar7 == uVar6) << 6;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x90;
      } while (uVar1 != uVar6);
    }
  }
  else {
    if (lVar5 == DAT_14cbdea60) {
      if (*(char *)(lVar3 + 800) != '\0') {
        return;
      }
      if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar3 + 0x270))) {
        *(uint *)(param_1 + 0x2e4) = param_3;
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x268) + 0x18 + uVar7 * 0x90);
        iVar8 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar8 = 0;
        }
        FUN_1402980a2(lVar3 + 0x228,
                      *(undefined8 *)(*(longlong *)(lVar3 + 0x268) + 0x10 + uVar7 * 0x90),iVar8);
        uVar1 = *(uint *)(lVar3 + 0x270);
        if ((int)param_3 < (int)uVar1) {
          lVar5 = 0x88;
          uVar6 = 0;
          do {
            *(byte *)(*(longlong *)(lVar3 + 0x268) + lVar5) =
                 *(byte *)(*(longlong *)(lVar3 + 0x268) + lVar5) & 0xbf | (uVar7 == uVar6) << 6;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x90;
          } while (uVar1 != uVar6);
        }
        FUN_140de1078(param_1,&DAT_14cbdeb08,0,0);
        lVar5 = *(longlong *)(param_1 + 0x288);
        if (lVar5 != 0) {
          *(bool *)(lVar5 + 0x120) = *(int *)(param_1 + 0x2e4) != 0;
          puVar4 = *(ushort **)(lVar5 + 0x80);
          if (puVar4 != (ushort *)0x0) {
            *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
          }
        }
      }
      goto LAB_148ea5176;
    }
    if (((lVar5 != DAT_14cbdea70) || ((int)param_3 < 0)) ||
       (*(int *)(param_1 + 0x328) <= (int)param_3)) goto LAB_148ea5176;
    iVar2 = *(int *)(param_1 + 0x330);
    *(int *)(param_1 + 0x330) = iVar2 + 1;
    *(undefined8 *)(param_1 + 0x344) = *(undefined8 *)(*(longlong *)(param_1 + 800) + uVar7 * 0x40);
    *(int *)(param_1 + 0x330) = iVar2 + 2;
    FUN_1447a1f4a();
    FUN_144a787a6(lVar3 + 0x2a8);
    uVar1 = *(uint *)(lVar3 + 0x2f0);
    if ((int)param_3 < (int)uVar1) {
      lVar5 = 0x88;
      uVar6 = 0;
      do {
        *(byte *)(*(longlong *)(lVar3 + 0x2e8) + lVar5) =
             *(byte *)(*(longlong *)(lVar3 + 0x2e8) + lVar5) & 0xbf | (uVar7 == uVar6) << 6;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x90;
      } while (uVar1 != uVar6);
    }
  }
  FUN_140de1078(param_1,&DAT_14cbdeb08,0,0);
LAB_148ea5176:
  puVar4 = *(ushort **)(lVar3 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  *(undefined1 *)(param_1 + 0x361) = 1;
  return;
}



// FUNCTION 148ea538c FUN_148ea538c body=678 status=ok
// SIG undefined FUN_148ea538c(void)

void FUN_148ea538c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_148ea55c7;
  FUN_14000bbd8(&local_58,param_2,0);
  lVar6 = FUN_141483196(&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (lVar6 == 0) {
    iVar1 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_58,iVar1,*param_2,1);
    if (local_58 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x2c0);
      *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 2;
      if ((longlong)*(int *)(param_1 + 0x2c8) != 0) {
        lVar6 = (longlong)*(int *)(param_1 + 0x2c8) * 0x90;
        do {
          if (local_58 == *plVar7) {
            if (plVar7 != (longlong *)0x0) goto LAB_148ea549a;
            break;
          }
          plVar7 = plVar7 + 0x12;
          lVar6 = lVar6 + -0x90;
        } while (lVar6 != 0);
      }
      plVar7 = *(longlong **)(param_1 + 0x2f0);
      *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 2;
      if ((longlong)*(int *)(param_1 + 0x2f8) != 0) {
        lVar6 = (longlong)*(int *)(param_1 + 0x2f8) * 0x90;
        do {
          if (local_58 == *plVar7) {
            if (plVar7 != (longlong *)0x0) goto LAB_148ea549a;
            break;
          }
          plVar7 = plVar7 + 0x12;
          lVar6 = lVar6 + -0x90;
        } while (lVar6 != 0);
      }
    }
    goto LAB_148ea55c7;
  }
  FUN_145a61fdc(param_1,lVar2 + 0x178,param_2);
  goto LAB_148ea55ac;
LAB_148ea549a:
  plVar3 = (longlong *)plVar7[8];
  plVar4 = *(longlong **)(lVar2 + 0x198);
  if (plVar4 != plVar3) {
    *(longlong **)(lVar2 + 0x198) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(lVar2 + 0x1a0) = (int)plVar7[9];
  plVar3 = (longlong *)plVar7[0xb];
  plVar4 = *(longlong **)(lVar2 + 0x1b8);
  if (plVar4 != plVar3) {
    *(longlong **)(lVar2 + 0x1b8) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(lVar2 + 0x1c0) = (int)plVar7[0xc];
  iVar1 = *(int *)(lVar2 + 0x204);
  FUN_140f9c02e(*(undefined8 *)(lVar2 + 0x1f8),*(undefined4 *)(lVar2 + 0x200));
  *(undefined4 *)(lVar2 + 0x200) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar2 + 0x204) != 0)) {
    FUN_148a07b08(lVar2 + 0x1f8,0);
  }
  lVar6 = FUN_140f9d3ac(lVar2 + 0x1f8);
  FUN_14020fad6(lVar6,L"action_ui_cursor_click");
  FUN_1400b22c2(&local_58,"GameSettings_AdjustDifficulty");
  if ((longlong *)(lVar6 + 0x10) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x10) = local_58;
    local_58 = 0;
    *(undefined4 *)(lVar6 + 0x18) = local_50;
    *(undefined4 *)(lVar6 + 0x1c) = local_4c;
  }
LAB_148ea55ac:
  puVar5 = *(ushort **)(lVar2 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_148ea55c7:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea5634 FUN_148ea5634 body=283 status=ok
// SIG undefined FUN_148ea5634(void)

void FUN_148ea5634(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsLeftInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea5750 FUN_148ea5750 body=283 status=ok
// SIG undefined FUN_148ea5750(void)

void FUN_148ea5750(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsRightInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea586c FUN_148ea586c body=86 status=ok
// SIG undefined FUN_148ea586c(void)

undefined8 * FUN_148ea586c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9ca210;
  return _Dst;
}



// FUNCTION 148ea58e8 FUN_148ea58e8 body=385 status=ok
// SIG undefined FUN_148ea58e8(void)

longlong FUN_148ea58e8(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_40;
  pvVar1 = (void *)*param_2;
  if (lVar4 == 0) {
    local_3c = 0;
    local_30 = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar4 * 2);
    pvVar1 = local_48;
    lVar4 = (longlong)local_40;
    local_38 = (void *)0x0;
    local_30 = local_40;
    if (lVar4 != 0) {
      FUN_1446dd670(&local_38,local_40,0);
      memcpy(local_38,pvVar1,lVar4 * 2);
      goto LAB_148ea599d;
    }
  }
  local_38 = (void *)0x0;
  local_2c = 0;
LAB_148ea599d:
  if ((longlong)*(int *)(param_1 + 0x110) == 0) {
LAB_148ea5a21:
    lVar4 = 0;
LAB_148ea5a23:
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return lVar4;
  }
  lVar4 = *(longlong *)(param_1 + 0x108);
  lVar2 = (longlong)*(int *)(param_1 + 0x110) * 0x70 + lVar4;
LAB_148ea59c2:
  if (*(int *)(lVar4 + 0x10) == local_30) {
    if (1 < local_30) {
      lVar8 = 0;
      do {
        uVar6 = *(ushort *)(*(longlong *)(lVar4 + 8) + lVar8);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)((longlong)local_38 + lVar8);
        if (uVar6 == uVar3) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar3 | uVar6)) goto LAB_148ea5a60;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar5 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar5]) goto LAB_148ea5a60;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
  }
  else if (*(int *)(lVar4 + 0x10) + local_30 != 1) goto LAB_148ea5a18;
  goto LAB_148ea5a23;
LAB_148ea5a60:
  if (uVar6 == uVar3) goto LAB_148ea5a23;
LAB_148ea5a18:
  lVar4 = lVar4 + 0x70;
  if (lVar4 == lVar2) goto LAB_148ea5a21;
  goto LAB_148ea59c2;
}



// FUNCTION 148ea5a6a FUN_148ea5a6a body=417 status=ok
// SIG undefined FUN_148ea5a6a(void)

void FUN_148ea5a6a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_1442e3308;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5c0c(param_1,param_2,&DAT_14cb92b90,param_1);
      local_38 = FUN_1442e34f6;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5c0c(param_1,param_2,&DAT_14cbc9da8,param_1);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_148ea5d28(param_1,param_2,param_1,&local_38);
      local_38 = (code *)&LAB_148ea5f8e;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5e72(param_1,param_2,&DAT_14cbc9d40,param_1);
      local_38 = (code *)&LAB_1442e39ee;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5e72(param_1,param_2,&DAT_14cbc9d58,param_1);
      local_38 = (code *)&LAB_148ea5ff6;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5e72(param_1,param_2,&DAT_14cbc9d50,param_1);
      local_38 = FUN_148ea6018;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5c0c(param_1,param_2,&DAT_14cbc9d48,param_1);
      local_38 = FUN_148ea6032;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ea5c0c(param_1,param_2,&DAT_14cbc9d60,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea5c0c FUN_148ea5c0c body=282 status=ok
// SIG undefined FUN_148ea5c0c(void)

void FUN_148ea5c0c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1442ecd6c(param_2,param_3,param_4);
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



// FUNCTION 148ea5d28 FUN_148ea5d28 body=329 status=ok
// SIG undefined FUN_148ea5d28(void)

void FUN_148ea5d28(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442ecdf0(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442ecdf0(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1442ecdf0(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea5e72 FUN_148ea5e72 body=282 status=ok
// SIG undefined FUN_148ea5e72(void)

void FUN_148ea5e72(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1442ece92(param_2,param_3,param_4);
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



// FUNCTION 148ea6018 FUN_148ea6018 body=26 status=ok
// SIG undefined FUN_148ea6018(void)

void FUN_148ea6018(undefined8 param_1)

{
  FUN_148ea6fc6();
  FUN_148ea6be0(param_1);
  return;
}



// FUNCTION 148ea6032 FUN_148ea6032 body=307 status=ok
// SIG undefined FUN_148ea6032(void)

/* WARNING: Removing unreachable block (ram,0x000148ea615b) */
/* WARNING: Removing unreachable block (ram,0x000148ea6164) */

void FUN_148ea6032(longlong param_1)

{
  ushort *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x7e8) != '\0')) {
    lVar3 = FUN_14479d2ce(param_1 + 0x30);
    cVar2 = FUN_144729dda(lVar3 + 900);
    if (cVar2 != '\0') {
      local_38 = 0;
      uStack_30 = 0;
      lVar3 = FUN_14479d2ce(param_1 + 0x30);
      uVar4 = FUN_14479d2ce(lVar3 + 900);
      FUN_1405b0040(uVar4,&local_38);
      lVar3 = local_38;
      *(undefined1 *)(param_1 + 0x5dd) = 1;
      lVar6 = (longlong)(int)uStack_30;
      if (lVar6 != 0) {
        lVar5 = 0;
        do {
          FUN_148a008f8(*(undefined8 *)(lVar3 + lVar5),0);
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
      if (local_38 != 0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  else {
    *(undefined1 *)(lVar3 + 0x7e8) = 1;
    *(int *)(lVar3 + 0x7ec) = *(int *)(lVar3 + 0x7ec) + 1;
    FUN_148ea7144(param_1);
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148a008f8(uVar4,0);
    puVar1 = *(ushort **)(lVar3 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea6166 FUN_148ea6166 body=77 status=ok
// SIG undefined FUN_148ea6166(void)

void FUN_148ea6166(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_1418fb0e0(param_1,param_2);
  return;
}



// FUNCTION 148ea61b4 FUN_148ea61b4 body=775 status=ok
// SIG undefined FUN_148ea61b4(void)

void FUN_148ea61b4(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  int iVar9;
  longlong lVar10;
  wchar_t *_Str;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 *local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((-1 < (int)param_2 && lVar2 != 0) && ((int)param_2 < *(int *)(lVar2 + 0x360))) {
    *(int *)(lVar2 + 0x368) = *(int *)(lVar2 + 0x368) + 1;
    lVar3 = *(longlong *)(lVar2 + 0x358);
    lVar10 = (ulonglong)param_2 * 0x70;
    *(int *)(lVar2 + 0x7c8) = *(int *)(lVar2 + 0x7c8) + 1;
    FUN_144a787a6(lVar2 + 0x758,lVar3 + lVar10);
    local_98 = lVar2 + 0x768;
    FUN_144a787a6(local_98,lVar3 + lVar10 + 0x10);
    FUN_144a787a6(lVar2 + 0x778,lVar3 + lVar10 + 0x20);
    FUN_144a787a6(lVar2 + 0x788,lVar3 + lVar10 + 0x30);
    lVar10 = lVar10 + lVar3;
    FUN_144a787a6(lVar2 + 0x798,lVar10 + 0x40);
    *(undefined4 *)(lVar2 + 0x7a8) = *(undefined4 *)(lVar10 + 0x50);
    *(undefined4 *)(lVar2 + 0x7c0) = *(undefined4 *)(lVar10 + 0x68);
    local_a0 = (undefined8 *)(lVar2 + 2000);
    *(int *)(lVar2 + 0x7e0) = *(int *)(lVar2 + 0x7e0) + 1;
    FUN_14020fad6(local_a0,&DAT_149dfb77a);
    plVar1 = (longlong *)(param_1 + 0x588);
    lVar3 = param_1 + 0x598;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar3;
    if (*(int *)(param_1 + 0x5b0) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(param_1 + 0x5b0);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar5 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (uStack_60 != lVar3)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar10 = *local_90;
        lVar7 = (longlong)iVar6;
        _Str = L"";
        if (*(int *)(lVar10 + 8 + lVar7 * 0x28) != 0) {
          _Str = *(wchar_t **)(lVar10 + lVar7 * 0x28);
        }
        if (_Str != (wchar_t *)0x0) {
          sVar8 = wcslen(_Str);
          local_b0 = 0xffffffff;
          local_b8 = 0;
          iVar6 = FUN_1447ee042(local_98,_Str,sVar8 & 0xffffffff,1);
          if (iVar6 != -1) {
            FUN_144a2b0a4(lVar10 + lVar7 * 0x28 + 0x10,&local_68);
            *(int *)(lVar2 + 0x7e0) = *(int *)(lVar2 + 0x7e0) + 1;
            if (local_a0 == &local_68) {
              uVar5 = local_78;
              if (local_68 != 0) {
                FUN_1400020a8();
                uVar5 = local_78;
              }
            }
            else {
              if (*(longlong *)(lVar2 + 2000) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar2 + 2000) = local_68;
              local_68 = 0;
              *(undefined4 *)(lVar2 + 0x7d8) = (undefined4)uStack_60;
              *(undefined4 *)(lVar2 + 0x7dc) = uStack_60._4_4_;
              uVar5 = local_78;
            }
            break;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar3 || local_78._4_4_ != iVar9));
    }
    local_78 = uVar5;
    puVar4 = *(ushort **)(lVar2 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea64bc FUN_148ea64bc body=1045 status=ok
// SIG undefined FUN_148ea64bc(void)

void FUN_148ea64bc(longlong param_1,int param_2)

{
  longlong lVar1;
  void *_Src;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  longlong *local_80 [2];
  undefined2 *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    lVar5 = (ulonglong)(param_2 != 0) * 0x10;
    local_70 = (undefined2 *)0x0;
    local_68 = *(int *)(lVar5 + 0x3e0 + lVar1);
    lVar9 = (longlong)local_68;
    _Src = *(void **)(lVar5 + 0x3d8 + lVar1);
    if (lVar9 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar9 * 2);
    }
    lVar5 = lVar1 + 0x418;
    if (param_2 == 0) {
      lVar5 = lVar1 + 0x400;
    }
    FUN_140bb4432(lVar1 + 0x740,lVar5);
    plVar10 = (longlong *)(param_1 + 0x398);
    puVar8 = local_70;
    if (local_68 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    iVar4 = local_68 + -1;
    if (local_68 == 0) {
      iVar4 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar4,puVar8);
    iVar4 = FUN_14587c6f0(plVar10,uVar3,&local_70);
    if (iVar4 != -1) {
      puVar8 = local_70;
      if (local_68 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(local_68 - 1);
      if (local_68 == 0) {
        uVar7 = uVar11;
      }
      uVar3 = FUN_144a49b4a(uVar7,puVar8);
      iVar4 = FUN_14587c6f0(plVar10,uVar3,&local_70);
      if (iVar4 != -1) {
        uVar11 = (longlong)iVar4 * 0x90 + *plVar10;
      }
      *(int *)(lVar1 + 0x698) = *(int *)(lVar1 + 0x698) + 1;
      FUN_140bb4432(lVar1 + 0x620,uVar11 + 0x10);
      puVar8 = local_70;
      if (local_68 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(local_68 - 1);
      if (local_68 == 0) {
        uVar7 = uVar11;
      }
      uVar3 = FUN_144a49b4a(uVar7,puVar8);
      iVar4 = FUN_14587c6f0(plVar10,uVar3,&local_70);
      if (iVar4 != -1) {
        uVar11 = (longlong)iVar4 * 0x90 + *plVar10;
      }
      *(int *)(lVar1 + 0x698) = *(int *)(lVar1 + 0x698) + 1;
      FUN_140bb4432(lVar1 + 0x638,uVar11 + 0x28);
      puVar8 = local_70;
      if (local_68 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(local_68 - 1);
      if (local_68 == 0) {
        uVar7 = uVar11;
      }
      uVar3 = FUN_144a49b4a(uVar7,puVar8);
      iVar4 = FUN_14587c6f0(plVar10,uVar3,&local_70);
      if (iVar4 != -1) {
        uVar11 = (longlong)iVar4 * 0x90 + *plVar10;
      }
      FUN_14000bbd8(local_60,uVar11 + 0x40,0);
      FUN_1410d1eba(local_80,local_60);
      uVar6 = FUN_1447a1f4a(local_80);
      *(int *)(lVar1 + 0x698) = *(int *)(lVar1 + 0x698) + 1;
      FUN_1449a0272(lVar1 + 0x650,uVar6);
      if (local_80[0] != (longlong *)0x0) {
        (**(code **)(*local_80[0] + 0x10))();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      puVar8 = local_70;
      if (local_68 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(local_68 - 1);
      if (local_68 == 0) {
        uVar7 = uVar11;
      }
      uVar3 = FUN_144a49b4a(uVar7,puVar8);
      iVar4 = FUN_14587c6f0(plVar10,uVar3,&local_70);
      if (iVar4 != -1) {
        uVar11 = (longlong)iVar4 * 0x90 + *plVar10;
      }
      FUN_14000bbd8(local_60,uVar11 + 0x58,0);
      FUN_1410d1eba(local_80,local_60);
      uVar6 = FUN_1447a1f4a(local_80);
      *(int *)(lVar1 + 0x698) = *(int *)(lVar1 + 0x698) + 1;
      FUN_1449a0272(lVar1 + 0x668,uVar6);
      if (local_80[0] != (longlong *)0x0) {
        (**(code **)(*local_80[0] + 0x10))();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      puVar8 = local_70;
      if (local_68 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(local_68 - 1);
      if (local_68 == 0) {
        uVar7 = uVar11;
      }
      uVar3 = FUN_144a49b4a(uVar7,puVar8);
      iVar4 = FUN_14587c6f0(plVar10,uVar3,&local_70);
      if (iVar4 != -1) {
        uVar11 = (longlong)iVar4 * 0x90 + *plVar10;
      }
      FUN_14000bbd8(local_60,uVar11 + 0x70,0);
      FUN_1410d1eba(local_80,local_60);
      uVar6 = FUN_1447a1f4a(local_80);
      *(int *)(lVar1 + 0x698) = *(int *)(lVar1 + 0x698) + 1;
      FUN_1449a0272(lVar1 + 0x680,uVar6);
      if (local_80[0] != (longlong *)0x0) {
        (**(code **)(*local_80[0] + 0x10))();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea68d2 FUN_148ea68d2 body=458 status=ok
// SIG undefined FUN_148ea68d2(void)

/* WARNING: Removing unreachable block (ram,0x000148ea69e2) */
/* WARNING: Removing unreachable block (ram,0x000148ea69eb) */

void FUN_148ea68d2(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x5dd) == '\x01') {
    lVar1 = param_1 + 0x30;
    lVar4 = FUN_14479d2ce(lVar1);
    cVar3 = FUN_144729dda(lVar4 + 900);
    if (cVar3 != '\0') {
      local_48 = 0;
      uStack_40 = 0;
      lVar4 = FUN_14479d2ce(lVar1);
      uVar5 = FUN_14479d2ce(lVar4 + 900);
      FUN_1405b0040(uVar5,&local_48);
      lVar4 = local_48;
      lVar8 = (longlong)(int)uStack_40;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          uVar5 = *(undefined8 *)(lVar4 + lVar7);
          cVar3 = FUN_148e94cd6(lVar1,uVar5);
          if (cVar3 == '\0') {
            FUN_148a008f8(uVar5,1);
          }
          lVar7 = lVar7 + 8;
        } while (lVar8 * 8 != lVar7);
      }
      *(undefined1 *)(param_1 + 0x5dd) = 0;
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x288);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x7e8) == '\x01')) {
      *(undefined1 *)(lVar1 + 0x7e8) = 0;
      *(int *)(lVar1 + 0x7ec) = *(int *)(lVar1 + 0x7ec) + 1;
      uVar5 = FUN_14479d2ce(param_1 + 0x30);
      FUN_148a008f8(uVar5,1);
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
      puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      FUN_148ea6b94(param_1,&local_50);
      *puVar6 = &PTR_FUN_14b9cd530;
      FUN_1446ddc76(&local_48,"SetStandInCameraIdentity",1);
      FUN_14039176c(puVar6,*(undefined8 *)(param_1 + 0x30),local_48,1);
      *puVar6 = &PTR_FUN_14b9cd530;
      puVar6[7] = local_50;
      FUN_140391314(param_1,puVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea6a9e FUN_148ea6a9e body=245 status=ok
// SIG undefined FUN_148ea6a9e(void)

void FUN_148ea6a9e(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  lVar2 = FUN_1407f492e(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (param_2 == '\0') {
        FUN_1446f470e(local_28,L"OakPCStatusMenu",1);
        uVar1 = (**(code **)(*(longlong *)(lVar2 + 0xe70) + 0x10))(lVar2 + 0xe70,local_28);
        FUN_14169654e(uVar1,lVar2,DAT_14cbdeca0);
      }
      else {
        FUN_1446f470e(local_28,L"OakPCStatusMenu",1);
        uVar1 = (**(code **)(*(longlong *)(lVar2 + 0xe70) + 0x10))(lVar2 + 0xe70,local_28);
        FUN_1415bd6c0(uVar1,lVar2,DAT_14cbdeca0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea6b94 FUN_148ea6b94 body=76 status=ok
// SIG undefined FUN_148ea6b94(void)

undefined8 * FUN_148ea6b94(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  lVar2 = thunk_FUN_1402735c8();
  if (lVar1 == 0) {
    *param_2 = *(undefined8 *)(lVar2 + 0xab8);
  }
  else {
    FUN_148eea4d8(lVar2,param_2,lVar1 + 0x250,lVar1 + 0x268);
  }
  return param_2;
}



// FUNCTION 148ea6be0 FUN_148ea6be0 body=265 status=ok
// SIG undefined FUN_148ea6be0(void)

void FUN_148ea6be0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9cd490;
  FUN_1446ddc76(&local_38,"ResetStandInCamera",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_38,1);
  *puVar1 = &PTR_FUN_14b9cd490;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_140391314(param_1,puVar1);
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  FUN_148ea6b94(param_1,&local_40);
  *puVar1 = &PTR_FUN_14b9cd530;
  FUN_1446ddc76(&local_38,"SetStandInCameraIdentity",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_38,1);
  *puVar1 = &PTR_FUN_14b9cd530;
  puVar1[7] = local_40;
  FUN_140391314(param_1,puVar1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea6cea FUN_148ea6cea body=731 status=ok
// SIG undefined FUN_148ea6cea(void)

void FUN_148ea6cea(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  PSRWLOCK SRWLock;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(lVar11 + 0x218) != 0) {
    if ((longlong)*(int *)(lVar11 + 0x230) != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0x228) + lVar9) == 0) goto LAB_148ea6f36;
        lVar9 = lVar9 + 8;
      } while ((longlong)*(int *)(lVar11 + 0x230) * 8 != lVar9);
    }
    FUN_1411f7666(param_1,param_2,param_3);
    lVar11 = *(longlong *)(param_3 + 0x10);
    if (*(int *)(param_2 + 0x618) != *(int *)(lVar11 + 0x168)) {
      FUN_144a787a6(param_2 + 0x608,lVar11 + 0x158);
      *(undefined4 *)(param_2 + 0x618) = *(undefined4 *)(lVar11 + 0x168);
      lVar11 = *(longlong *)(param_3 + 0x10);
    }
    plVar2 = (longlong *)(param_1 + 0x398);
    iVar6 = *(int *)(lVar11 + 0x198);
    if (iVar6 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(lVar11 + 400);
    }
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar3,puVar10);
    iVar6 = FUN_14587c6f0(plVar2,uVar5,lVar11 + 400);
    if (iVar6 != -1) {
      lVar11 = *(longlong *)(param_3 + 0x10);
      iVar6 = *(int *)(lVar11 + 0x198);
      if (iVar6 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = *(undefined2 **)(lVar11 + 400);
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(iVar6 - 1);
      if (iVar6 == 0) {
        uVar8 = uVar12;
      }
      uVar5 = FUN_144a49b4a(uVar8,puVar10);
      iVar6 = FUN_14587c6f0(plVar2,uVar5,lVar11 + 400);
      if (iVar6 != -1) {
        uVar12 = (longlong)iVar6 * 0x90 + *plVar2;
      }
      FUN_140bb4432(param_2 + 0x710,uVar12 + 0x10);
    }
    lVar11 = *(longlong *)(param_3 + 0x10);
    iVar6 = *(int *)(lVar11 + 0x1b0);
    if (iVar6 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(lVar11 + 0x1a8);
    }
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar3,puVar10);
    iVar6 = FUN_14587c6f0(plVar2,uVar5,lVar11 + 0x1a8);
    if (iVar6 != -1) {
      lVar11 = *(longlong *)(param_3 + 0x10);
      iVar6 = *(int *)(lVar11 + 0x1b0);
      if (iVar6 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = *(undefined2 **)(lVar11 + 0x1a8);
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(iVar6 - 1);
      if (iVar6 == 0) {
        uVar8 = uVar12;
      }
      uVar5 = FUN_144a49b4a(uVar8,puVar10);
      iVar6 = FUN_14587c6f0(plVar2,uVar5,lVar11 + 0x1a8);
      if (iVar6 != -1) {
        uVar12 = (longlong)iVar6 * 0x90 + *plVar2;
      }
      FUN_140bb4432(param_2 + 0x728,uVar12 + 0x10);
    }
    cVar4 = FUN_1413536d2(*(undefined8 *)(param_3 + 0x10));
    if (cVar4 != '\0') {
      FUN_1448d5e3c(&local_48,param_1 + 0x208);
      lVar11 = *(longlong *)(local_48 + 0x1b0);
      SRWLock = (PSRWLOCK)(lVar11 + 0x1c0);
      AcquireSRWLockShared(SRWLock);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      *(int *)(param_2 + 0x708) = *(int *)(param_2 + 0x708) + 1;
      FUN_14135375c(*(undefined8 *)(param_3 + 0x10),local_58);
      uVar7 = FUN_148e1b48e(lVar11,local_58);
      FUN_148e6a1f2(param_2 + 0x6a0,uVar7);
      ReleaseSRWLockShared(SRWLock);
    }
  }
LAB_148ea6f36:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea6fc6 FUN_148ea6fc6 body=380 status=ok
// SIG undefined FUN_148ea6fc6(void)

void FUN_148ea6fc6(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a7484c(param_1 + 0x570,&local_b8);
  uVar9 = local_b8;
  uVar8 = DAT_14c846520;
  uVar7 = DAT_14c846510._4_4_;
  uVar6 = (undefined4)DAT_14c846510;
  uVar5 = DAT_14c8464f0;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar1 = (ulonglong)DAT_14c8464e8 >> 0x20;
  uVar12 = (undefined4)DAT_14c846518;
  uVar2 = (ulonglong)DAT_14c846518 >> 0x20;
  puVar10 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *puVar10 = &PTR_FUN_14b9cd3f0;
  FUN_1446ddc76(&local_b8,"AddStandInTransform",1);
  FUN_14039176c(puVar10,*(undefined8 *)(param_1 + 0x30),local_b8,1);
  *puVar10 = &PTR_FUN_14b9cd3f0;
  puVar10[7] = *(undefined8 *)(param_1 + 0x538);
  puVar10[8] = uVar9;
  puVar10[9] = uStack_b0;
  puVar10[10] = local_a8;
  puVar10[0xb] = uStack_a0;
  *(undefined4 *)(puVar10 + 0xc) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 100) = uVar4;
  *(undefined4 *)(puVar10 + 0xd) = uVar11;
  *(int *)((longlong)puVar10 + 0x6c) = (int)uVar1;
  puVar10[0xe] = uVar5;
  puVar10[0xf] = 0;
  *(undefined4 *)(puVar10 + 0x10) = uVar6;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uVar7;
  *(undefined4 *)(puVar10 + 0x11) = uVar12;
  *(int *)((longlong)puVar10 + 0x8c) = (int)uVar2;
  puVar10[0x12] = uVar8;
  puVar10[0x13] = 0;
  FUN_140391314(param_1,puVar10);
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea7144 FUN_148ea7144 body=145 status=ok
// SIG undefined FUN_148ea7144(void)

void FUN_148ea7144(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = &PTR_FUN_14b9cd4c0;
  FUN_1446ddc76(&local_30,"EnterStandInCameraMode",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9cd4c0;
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea71d6 FUN_148ea71d6 body=113 status=ok
// SIG undefined FUN_148ea71d6(void)

void FUN_148ea71d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  FUN_1410ea50c();
  cVar5 = FUN_144729dda(param_1 + 0x30);
  if (cVar5 != '\0') {
    lVar6 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = *(longlong *)(lVar6 + 0x40);
    plVar4 = *(longlong **)(lVar6 + 0x48);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x308) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ea723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148ea7248 FUN_148ea7248 body=110 status=ok
// SIG undefined FUN_148ea7248(void)

void FUN_148ea7248(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  cVar5 = FUN_144729dda(param_1 + 0x30);
  if (cVar5 != '\0') {
    lVar6 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = *(longlong *)(lVar6 + 0x40);
    plVar4 = *(longlong **)(lVar6 + 0x48);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x308) = 1;
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
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 148ea72b6 FUN_148ea72b6 body=680 status=ok
// SIG undefined FUN_148ea72b6(void)

void FUN_148ea72b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_428 [32];
  PSRWLOCK local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0 [7];
  undefined1 local_3b8 [64];
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong *local_360;
  longlong local_220;
  int local_218;
  int local_210;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0xd8), iVar3 != -1)) && (-1 < iVar3)) &&
     (((iVar3 < *(int *)(lVar4 + 200) && (lVar8 = FUN_14479d2ce(param_1 + 0x30), lVar8 != 0)) &&
      (lVar9 = FUN_14101baae(lVar8), lVar9 != 0)))) {
    local_3f8 = lVar8;
    FUN_1448d5e3c(&local_368,param_1 + 0x208);
    plVar5 = *(longlong **)(local_368 + 0x3c0);
    local_408 = (PSRWLOCK)(plVar5 + 0xd);
    AcquireSRWLockShared(local_408);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_360 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar2 = (int *)((longlong)local_360 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_360 + 0x10))(local_360);
        }
      }
    }
    if ((longlong)(int)plVar5[1] != 0) {
      lVar8 = *plVar5;
      lVar9 = (longlong)(int)plVar5[1] * 0x308 + lVar8;
      local_400 = lVar9;
      do {
        FUN_14121ada2(&local_368,lVar8);
        FUN_1447325ac(&local_368,local_3f0,1);
        if (local_3f0[0] ==
            *(longlong *)(*(longlong *)(lVar4 + 0xc0) + (longlong)*(int *)(lVar4 + 0xd8) * 0xb0)) {
          local_210 = local_210 + 2;
          local_378 = 0;
          uStack_370 = 0;
          if ((longlong)local_218 != 0) {
            lVar12 = (longlong)local_218 * 0x78;
            lVar9 = local_220;
            do {
              FUN_1410d4112(local_3f0,lVar9);
              uVar6 = uStack_370;
              lVar11 = (longlong)(int)uStack_370;
              uVar7 = (int)uStack_370 + 1;
              uStack_370 = CONCAT44(uStack_370._4_4_,uVar7);
              if (uStack_370._4_4_ < uVar7) {
                FUN_140cb3cca(&local_378,uVar6 & 0xffffffff);
              }
              FUN_14144d64a(lVar11 * 0x38 + local_378,local_3b8);
              FUN_1418d06b0(local_3f0);
              lVar9 = lVar9 + 0x78;
              lVar12 = lVar12 + -0x78;
            } while (lVar12 != 0);
          }
          lVar9 = FUN_140391a3c(local_3f8);
          if (lVar9 != 0) {
            uVar10 = FUN_14001cc68(0x18,0x10);
            FUN_148ea7560(uVar10,&local_378);
            FUN_14039144e(lVar9,uVar10);
          }
          FUN_140cb1696(local_378,uStack_370 & 0xffffffff);
          lVar9 = local_400;
          if (local_378 != 0) {
            FUN_1400020a8();
          }
        }
        FUN_14121ab90(&local_368);
        lVar8 = lVar8 + 0x308;
      } while (lVar8 != lVar9);
    }
    ReleaseSRWLockShared(local_408);
  }
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea7560 FUN_148ea7560 body=96 status=ok
// SIG undefined FUN_148ea7560(void)

undefined8 * FUN_148ea7560(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b9caab0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140b70aa4(param_1 + 1,iVar1,0);
    FUN_140b709f1(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148ea760e FUN_148ea760e body=113 status=ok
// SIG undefined FUN_148ea760e(void)

void FUN_148ea760e(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if ((lVar1 != 0) && (*param_3 == DAT_14cbdf3e0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9cac30;
    *(undefined4 *)(puVar2 + 4) = param_2;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 148ea773a FUN_148ea773a body=348 status=ok
// SIG undefined FUN_148ea773a(void)

void FUN_148ea773a(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 != 0) &&
     (((*(char *)(lVar4 + 0xb3) != '\0' || (*(char *)(lVar4 + 0xb2) == '\x01')) &&
      (1 < *(int *)(lVar4 + 0x118))))) {
    lVar1 = FUN_140391552(param_1);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x30c) != 0)) {
      puVar2 = (undefined8 *)(lVar4 + 0x230);
      if (*(int *)(lVar4 + 0x238) < 2) {
        puVar2 = (undefined8 *)(lVar4 + 0x110);
      }
      local_40 = (void *)0x0;
      local_38 = *(int *)(puVar2 + 1);
      lVar4 = (longlong)local_38;
      _Src = (void *)*puVar2;
      if (lVar4 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,_Src,lVar4 * 2);
      }
      uVar3 = FUN_14001cc68(0x38,0x10);
      FUN_14597088a(uVar3,&local_40,*(undefined8 *)(param_1 + 0x30c));
      FUN_14039144e(lVar1,uVar3);
      uVar3 = FUN_14001cc68(0x30,0x10);
      FUN_1459c7456(uVar3,&local_40,param_1);
      FUN_14039144e(lVar1,uVar3);
      FUN_14129c92c(param_1);
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea7898 FUN_148ea7898 body=370 status=ok
// SIG undefined FUN_148ea7898(void)

void FUN_148ea7898(longlong param_1)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if ((lVar6 != 0) &&
     (((*(char *)(lVar6 + 0xb3) != '\0' || (*(char *)(lVar6 + 0xb2) == '\x01')) &&
      (1 < *(int *)(lVar6 + 0x118))))) {
    lVar3 = FUN_140391552(param_1);
    lVar2 = DAT_14cbdeff0;
    if ((lVar3 != 0) && (lVar1 = *(longlong *)(param_1 + 0x314), lVar1 != 0)) {
      puVar4 = (undefined8 *)(lVar6 + 0x230);
      if (*(int *)(lVar6 + 0x238) < 2) {
        puVar4 = (undefined8 *)(lVar6 + 0x110);
      }
      local_50 = (void *)0x0;
      local_48 = *(int *)(puVar4 + 1);
      lVar6 = (longlong)local_48;
      _Src = (void *)*puVar4;
      if (lVar6 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar6 * 2);
      }
      uVar5 = FUN_14001cc68(0x38,0x10);
      FUN_14597088a(uVar5,&local_50,*(undefined8 *)(param_1 + 0x314));
      FUN_14039144e(lVar3,uVar5);
      uVar5 = FUN_14001cc68(0x30,0x10);
      FUN_1459c7456(uVar5,&local_50,param_1);
      FUN_14039144e(lVar3,uVar5);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (lVar1 == lVar2) {
        FUN_14129c92c(param_1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea7a1c FUN_148ea7a1c body=87 status=ok
// SIG undefined FUN_148ea7a1c(void)

undefined8 * FUN_148ea7a1c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x378);
  memset(_Dst,0,0x378);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9cac40;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  return _Dst;
}



// FUNCTION 148ea7a74 FUN_148ea7a74 body=66 status=ok
// SIG undefined FUN_148ea7a74(void)

undefined8 * FUN_148ea7a74(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9caeb0;
  return _Dst;
}



// FUNCTION 148ea7ac2 FUN_148ea7ac2 body=764 status=ok
// SIG undefined FUN_148ea7ac2(void)

void FUN_148ea7ac2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  ushort *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_158 [40];
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  longlong local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_148eb77aa(param_2,&local_50,param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x40c);
  FUN_1412d6a39(param_1[0x80],(int)param_1[0x81]);
  *(undefined4 *)(param_1 + 0x81) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x40c) != 0)) {
    FUN_148e9a4d0(param_1 + 0x80,0);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = &PTR_FUN_14b895f80;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  plVar3 = (longlong *)FUN_145917192(param_1);
  lVar10 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x58));
  *(int *)(lVar10 + 0x50) = *(int *)(lVar10 + 0x50) + 1;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_130);
  lVar4 = FUN_145917130(lVar10,&local_130);
  if (local_130 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x58));
  if (lVar4 != 0) {
    FUN_148e1abf8(lVar4,&local_50);
    FUN_148eddec8(&local_c0,lVar4);
  }
  uVar5 = (ulonglong)local_48;
  if (uVar5 != 0) {
    lVar10 = 0;
    do {
      lVar4 = local_50 + lVar10;
      uVar6 = FUN_141352650(param_1 + 0x80);
      FUN_148eb773c(param_1,uVar6,lVar4,&local_c0);
      lVar10 = lVar10 + 0x448;
    } while (uVar5 * 0x448 - lVar10 != 0);
  }
  if ((longlong)(int)param_1[0x22] != 0) {
    lVar10 = param_1[0x21];
    lVar4 = (longlong)(int)param_1[0x22] * 0x90 + lVar10;
    do {
      if ((*(byte *)(lVar10 + 0x89) & 1) != 0) {
        bVar7 = *(byte *)(lVar10 + 0x88) & 0xbf;
        *(byte *)(lVar10 + 0x88) = bVar7;
        if ((longlong)*(int *)(lVar10 + 0x78) != 0) {
          lVar8 = 0;
          do {
            uVar9 = (uint)*(undefined8 *)(*(longlong *)(lVar10 + 0x70) + lVar8);
            if ((-1 < (int)uVar9) && ((int)uVar9 < (int)param_1[0x22])) {
              bVar7 = bVar7 | *(byte *)(param_1[0x21] + 0x88 +
                                       (ulonglong)(uVar9 & 0x7fffffff) * 0x90) & 0x40;
              *(byte *)(lVar10 + 0x88) = bVar7;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar10 + 0x78) * 8 != lVar8);
        }
      }
      lVar10 = lVar10 + 0x90;
    } while (lVar10 != lVar4);
  }
  local_128 = 0;
  uStack_120 = 0;
  local_130 = &PTR_FUN_14b895f80;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  bVar7 = FUN_14591720c(&local_c0,&local_130);
  *(byte *)((longlong)param_1 + 0x119) = bVar7 ^ 1;
  FUN_14591706c(&local_130);
  *(undefined1 *)(param_1 + 0x73) = 1;
  puVar2 = (ushort *)param_1[0x10];
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
  }
  FUN_14591706c(&local_c0);
  FUN_145d24fc7(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea7e4e FUN_148ea7e4e body=407 status=ok
// SIG undefined FUN_148ea7e4e(void)

void FUN_148ea7e4e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    local_d0 = lVar3 + 0x118;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x9f + lVar6) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar3 + 0x250 + lVar6);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = &LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = local_a0;
        lVar4 = FUN_148eb7980(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar5 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar5 = &local_a8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0xa0))) {
          FUN_144a787a6(local_d0 + lVar6,lVar4 + 0x98);
          pbVar1 = (byte *)(lVar3 + 0x9f + lVar6);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar6 = lVar6 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar6 != 0);
  }
  FUN_148ee57fc(param_1,local_88);
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea7ff2 FUN_148ea7ff2 body=967 status=ok
// SIG undefined FUN_148ea7ff2(void)

void FUN_148ea7ff2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  longlong lVar10;
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
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  longlong local_b0;
  undefined **ppuStack_a8;
  undefined4 local_a0;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar4 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x400);
    local_190 = lVar5 + 0x118;
    lVar10 = 0;
    do {
      if ((*(byte *)(lVar5 + 0x9f + lVar10) & 0x20) == 0) {
        local_e0 = *(undefined4 *)(lVar5 + 0x250 + lVar10);
        local_f8 = (undefined ***)0x0;
        local_e8 = &PTR_LAB_14b9cd890;
        local_108 = &LAB_148eb7a06;
        local_c8 = &LAB_148eb7a06;
        local_b8 = (undefined ***)0x0;
        ppuStack_a8 = &PTR_LAB_14b9cd890;
        local_a0 = local_e0;
        lVar7 = FUN_148eb7980(param_2,&local_c8);
        if (local_108 != (undefined1 *)0x0) {
          pppuVar9 = local_f8;
          if (local_f8 == (undefined ***)0x0) {
            pppuVar9 = &local_e8;
          }
          (*(code *)(*pppuVar9)[2])();
        }
        if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x44))) {
          local_168 = 0;
          plStack_160 = (longlong *)0x0;
          local_198 = param_2;
          FUN_1413a454c(local_158,*(int *)(lVar7 + 0x44),0,&local_168);
          local_c8 = (undefined1 *)0x0;
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
          plVar6 = local_170;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_170 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (local_158[0] != (longlong *)0x0) {
            (**(code **)(*local_158[0] + 0x10))();
          }
          uVar8 = FUN_1447a1f4a(local_148);
          FUN_144a787a6(local_190 + lVar10,uVar8);
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          if (local_188[0] != (longlong *)0x0) {
            (**(code **)(*local_188[0] + 0x10))();
          }
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
          plVar6 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_160 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          pbVar3 = (byte *)(lVar5 + 0x9f + lVar10);
          *pbVar3 = *pbVar3 | 2;
        }
      }
      lVar10 = lVar10 + 0x268;
    } while ((longlong)iVar4 * 0x268 - lVar10 != 0);
  }
  FUN_148ee586e(param_1,&local_c8);
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408));
  if (local_c8 != (undefined1 *)0x0) {
    pppuVar9 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar9 = &ppuStack_a8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if ((local_60[0] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea83c6 FUN_148ea83c6 body=407 status=ok
// SIG undefined FUN_148ea83c6(void)

void FUN_148ea83c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    local_d0 = lVar3 + 0x118;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x9f + lVar6) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar3 + 0x250 + lVar6);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = &LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = local_a0;
        lVar4 = FUN_148eb7980(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar5 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar5 = &local_a8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0xd8))) {
          FUN_144a787a6(local_d0 + lVar6,lVar4 + 0xd0);
          pbVar1 = (byte *)(lVar3 + 0x9f + lVar6);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar6 = lVar6 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar6 != 0);
  }
  FUN_148ee5822(param_1,local_88);
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea856a FUN_148ea856a body=407 status=ok
// SIG undefined FUN_148ea856a(void)

void FUN_148ea856a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    local_d0 = lVar3 + 0x118;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x9f + lVar6) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar3 + 0x250 + lVar6);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = &LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = local_a0;
        lVar4 = FUN_148eb7980(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar5 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar5 = &local_a8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0xc0))) {
          FUN_144a787a6(local_d0 + lVar6,lVar4 + 0xb8);
          pbVar1 = (byte *)(lVar3 + 0x9f + lVar6);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar6 = lVar6 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar6 != 0);
  }
  FUN_148ee5848(param_1,local_88);
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea870e FUN_148ea870e body=407 status=ok
// SIG undefined FUN_148ea870e(void)

void FUN_148ea870e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    local_d0 = lVar3 + 0x118;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x9f + lVar6) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar3 + 0x250 + lVar6);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = &LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = local_a0;
        lVar4 = FUN_148eb7980(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar5 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar5 = &local_a8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0x110))) {
          FUN_144a787a6(local_d0 + lVar6,lVar4 + 0x108);
          pbVar1 = (byte *)(lVar3 + 0x9f + lVar6);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar6 = lVar6 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar6 != 0);
  }
  FUN_148ee5894(param_1,local_88);
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea88b2 FUN_148ea88b2 body=407 status=ok
// SIG undefined FUN_148ea88b2(void)

void FUN_148ea88b2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    local_d0 = lVar3 + 0x118;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x9f + lVar6) & 0x20) == 0) {
        local_a0 = *(undefined4 *)(lVar3 + 0x250 + lVar6);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b9cd890;
        local_c8 = &LAB_148eb7a06;
        local_88[0] = &LAB_148eb7a06;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b9cd890;
        local_60 = local_a0;
        lVar4 = FUN_148eb7980(param_2,local_88);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar5 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar5 = &local_a8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0x148))) {
          FUN_144a787a6(local_d0 + lVar6,lVar4 + 0x140);
          pbVar1 = (byte *)(lVar3 + 0x9f + lVar6);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      lVar6 = lVar6 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar6 != 0);
  }
  FUN_148ee58ba(param_1,local_88);
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea8a56 FUN_148ea8a56 body=807 status=ok
// SIG undefined FUN_148ea8a56(void)

void FUN_148ea8a56(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined1 local_f0 [24];
  longlong local_d8;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  longlong *local_88;
  longlong local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = FUN_148e6a1c4(param_1 + 0x1b0,param_1 + 0x358);
  if (lVar2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x408) != 0) {
      pppuVar6 = *(undefined ****)(param_1 + 0x400);
      pppuVar8 = pppuVar6 + (longlong)*(int *)(param_1 + 0x408) * 0x4d;
      local_110 = lVar2 + 0x10;
      do {
        if ((*(byte *)((longlong)pppuVar6 + 0x9f) & 0x20) == 0) {
          local_a0 = *(undefined4 *)(pppuVar6 + 0x4a);
          local_b8 = (undefined ***)0x0;
          local_a8 = &PTR_LAB_14b9cd890;
          local_c8 = &LAB_148eb7a06;
          local_88 = (longlong *)&LAB_148eb7a06;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14b9cd890;
          local_60 = local_a0;
          lVar3 = FUN_148eb7980(param_2);
          if (local_c8 != (undefined1 *)0x0) {
            pppuVar5 = local_b8;
            if (local_b8 == (undefined ***)0x0) {
              pppuVar5 = &local_a8;
            }
            (*(code *)(*pppuVar5)[2])();
          }
          local_f8 = lVar3;
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x218) != 0)) {
            if ((longlong)*(int *)(lVar3 + 0x230) != 0) {
              lVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x228) + lVar7) == 0) goto LAB_148ea8adf;
                lVar7 = lVar7 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x230) * 8 != lVar7);
            }
            local_88 = &local_f8;
            local_80 = param_1;
            local_78 = pppuVar6;
            FUN_1442ed0a6(&local_88,&local_108);
            if (pppuVar6 + 0x23 == &local_108) {
              if (local_108 != (undefined **)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (pppuVar6[0x23] != (undefined **)0x0) {
                FUN_1400020a8();
              }
              pppuVar6[0x23] = local_108;
              local_108 = (undefined **)0x0;
              *(undefined4 *)(pppuVar6 + 0x24) = local_100;
              *(undefined4 *)((longlong)pppuVar6 + 0x124) = local_fc;
            }
            if (1 < *(int *)(pppuVar6 + 0x24)) {
              bVar1 = *(byte *)(lVar2 + 0x88);
              if ((bVar1 & 2) == 0) {
                FUN_14000bbd8(local_f0,local_110,0);
                FUN_1410d1eba(&local_88,local_f0);
              }
              else {
                local_88 = *(longlong **)(lVar2 + 0x60);
                if (local_88 != (longlong *)0x0) {
                  (**(code **)(*local_88 + 8))();
                }
                local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar2 + 0x68));
              }
              uVar4 = FUN_1447a1f4a(&local_88);
              FUN_144a787a6(pppuVar6 + 0x21,uVar4);
              if (local_88 != (longlong *)0x0) {
                (**(code **)(*local_88 + 0x10))();
              }
              if (((bVar1 & 2) == 0) && (local_d8 != 0)) {
                FUN_1400020a8();
              }
              *(byte *)((longlong)pppuVar6 + 0x9f) = *(byte *)((longlong)pppuVar6 + 0x9f) | 2;
            }
          }
        }
LAB_148ea8adf:
        pppuVar6 = pppuVar6 + 0x4d;
      } while (pppuVar6 != pppuVar8);
    }
    FUN_148ee58e0(param_1,&local_88);
    FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408));
    if (local_88 != (longlong *)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ea8d7e FUN_148ea8d7e body=118 status=ok
// SIG undefined FUN_148ea8d7e(void)

longlong FUN_148ea8d7e(longlong param_1)

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
    return local_28 + 0x620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea8df6 FUN_148ea8df6 body=1090 status=ok
// SIG undefined FUN_148ea8df6(void)

ulonglong FUN_148ea8df6(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong *unaff_RBX;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_178 [36];
  uint local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar7 = (undefined8 *)FUN_148ea8d7e();
  puVar5 = (undefined4 *)*puVar7;
  AcquireSRWLockShared((PSRWLOCK)(puVar5 + 0x50));
  if (*(int *)(param_1 + 0xac) != puVar5[0x4e]) {
    *(undefined4 *)(param_1 + 0xac) = puVar5[0x4e];
    bVar13 = *(int *)(param_1 + 0xb60) != puVar5[6] || *(int *)(param_1 + 0xb60) == 0;
    if (bVar13) {
      *(undefined4 *)(param_1 + 0xb60) = puVar5[6];
      FUN_148c813ae(param_1 + 0xb50,puVar5 + 2);
    }
    iVar9 = *(int *)(param_1 + 0x3dc);
    iVar14 = puVar5[1];
    if (iVar9 != iVar14) {
      *(undefined4 *)(param_1 + 0x3d8) = *puVar5;
      *(undefined4 *)(param_1 + 0x3dc) = puVar5[1];
    }
    iVar4 = puVar5[4];
    iVar8 = *(int *)(param_1 + 0x3d4);
    if (iVar4 == *(int *)(param_1 + 0x3d0)) {
      param_4 = 0;
      bVar15 = iVar8 == 0;
      iVar8 = 0;
      if (bVar15) goto LAB_148ea8ef7;
    }
    else {
LAB_148ea8ef7:
      *(int *)(param_1 + 0x3d0) = iVar4;
      *(int *)(param_1 + 0x3d4) = iVar8 + 1;
      param_4 = CONCAT71((int7)(param_4 >> 8),1);
    }
    if ((*(byte *)(param_1 + 0x330) & 8) != 0) {
      local_154 = (uint)param_4;
      if (iVar4 < *(int *)(param_1 + 0x3d8)) {
        pcVar10 = "ItemContainerCountFormat";
      }
      else {
        pcVar10 = "ItemContainerFullCountFormat";
      }
      uStack_88 = 0;
      local_90 = 0;
      local_98[0] = 0;
      uStack_a0 = 0;
      local_a8 = 0;
      local_150 = iVar14;
      local_14c = iVar9;
      FUN_1446ddda2(&local_a8,pcVar10,0);
      FUN_1410d1eba(local_e8,&local_a8);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      FUN_1413a454c(local_108,*(undefined4 *)(param_1 + 0x3d8),0);
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
      FUN_1413a454c(local_128,*(undefined4 *)(param_1 + 0x3d0),0);
      FUN_14023409e(&local_148,local_e8,1);
      local_a8 = CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(local_98,local_128);
      uStack_88 = CONCAT44(uStack_88._4_4_,4);
      FUN_14023423e(local_78,local_108);
      local_c8 = &local_a8;
      local_c0 = local_68;
      FUN_14010d304(&local_b8);
      local_d8 = local_148;
      local_d0 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f8,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,local_b0);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar11 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_a8 + lVar11) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_a8 + lVar11) + 0x10))();
          *(undefined8 *)((longlong)&local_a8 + lVar11) = 0;
          *(undefined4 *)((longlong)local_98 + lVar11 + -8) = 0;
        }
        lVar11 = lVar11 + -0x20;
      } while (lVar11 != -0x10);
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      if (local_128[0] != (longlong *)0x0) {
        (**(code **)(*local_128[0] + 0x10))();
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      FUN_140008f88(param_1 + 0x370,local_f8);
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
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
      unaff_RBX = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)unaff_RBX + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
          }
        }
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      param_4 = (ulonglong)local_154;
      iVar9 = local_14c;
      iVar14 = local_150;
    }
    if ((byte)(bVar13 | iVar9 != iVar14 | (byte)param_4 | *(int *)(param_1 + 0xacc) != puVar5[0xc])
        == 1) {
      *(undefined4 *)(param_1 + 0xacc) = puVar5[0xc];
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x80;
      puVar6 = *(ushort **)(param_1 + 0x80);
      uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
      }
      goto LAB_148ea8e4f;
    }
  }
  uVar12 = 0;
LAB_148ea8e4f:
  ReleaseSRWLockShared((PSRWLOCK)(puVar5 + 0x50));
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea923a FUN_148ea923a body=2147 status=ok
// SIG undefined FUN_148ea923a(void)

/* WARNING: Removing unreachable block (ram,0x000148ea977a) */
/* WARNING: Removing unreachable block (ram,0x000148ea9a09) */
/* WARNING: Removing unreachable block (ram,0x000148ea93b2) */
/* WARNING: Removing unreachable block (ram,0x000148ea9790) */
/* WARNING: Removing unreachable block (ram,0x000148ea9a1b) */
/* WARNING: Removing unreachable block (ram,0x000148ea93c4) */

void FUN_148ea923a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ushort *puVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_178 [32];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8 [2];
  longlong *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50 [3];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)(param_1 + 0x2b0);
  iVar11 = *(int *)(param_1 + 700);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((iVar11 < 0) && (*(int *)(param_1 + 700) != 0)) {
    FUN_148e23c9e(plVar3,0);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  bVar6 = true;
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x400);
    lVar12 = (longlong)*(int *)(param_1 + 0x408) * 0x268;
    do {
      uVar7 = uStack_d0;
      if (-1 < *(char *)(lVar13 + 0x9d)) {
        lVar14 = (longlong)(int)uStack_d0;
        uVar8 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
        if (uStack_d0._4_4_ < uVar8) {
          FUN_14591741c(&local_d8,uVar7 & 0xffffffff);
        }
        FUN_148c6b498(lVar14 * 0x268 + local_d8,lVar13);
      }
      lVar13 = lVar13 + 0x268;
      lVar12 = lVar12 + -0x268;
    } while (lVar12 != 0);
    if ((int)uStack_d0 != 0) {
      plVar9 = (longlong *)FUN_141350006(param_1);
      lVar13 = *plVar9;
      AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x1c0));
      iVar11 = *(int *)(lVar13 + 0x58);
      iVar4 = *(int *)(lVar13 + 0x50);
      ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x1c0));
      if (iVar4 < iVar11) {
        local_108 = (longlong *)0x0;
        plStack_100 = (longlong *)0x0;
        FUN_1413a454c(local_f8,uStack_d0 & 0xffffffff,0);
        local_98 = 0;
        uStack_90 = 0;
        local_88 = local_88 & 0xffffffff00000000;
        local_80 = 0;
        uStack_78 = 0;
        FUN_1446ddda2(&local_98,"TakeAllLostLoot",0);
        FUN_1410d1eba(&local_128,&local_98);
        FUN_14023409e(&local_118,&local_128,1);
        local_70 = CONCAT44(local_70._4_4_,4);
        FUN_14023423e(&local_60,local_f8);
        local_b8 = &local_70;
        local_b0 = local_50;
        FUN_14010d304(&local_a8);
        local_c8 = local_118;
        local_c0 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_110 + 1) = (int)local_110[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_e8,&local_c8,&local_a8);
        FUN_14007f2db(local_a8,local_a0);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != (longlong *)0x0) {
          (**(code **)(*local_60 + 0x10))();
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_110 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
            }
          }
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
        FUN_1447a1f4a(&local_e8);
        FUN_146637162(&local_70,&DAT_14cbdf700);
        iVar11 = *(int *)(param_1 + 0x2b8);
        *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
        if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
          FUN_146638242(plVar3,iVar11);
        }
        lVar13 = *plVar3;
        lVar12 = (longlong)iVar11 * 0x20;
        *(undefined8 *)(lVar13 + lVar12) = 0;
        *(undefined8 *)(lVar13 + lVar12) = local_70;
        *(undefined4 *)(lVar13 + 8 + lVar12) = (undefined4)local_68;
        *(undefined4 *)(lVar13 + 0xc + lVar12) = local_68._4_4_;
        *(undefined8 *)(lVar13 + 0x10 + lVar12) = 0;
        *(longlong **)(lVar13 + 0x10 + lVar12) = local_60;
        *(undefined4 *)(lVar13 + 0x18 + lVar12) = (undefined4)local_58;
        *(undefined4 *)(lVar13 + 0x1c + lVar12) = local_58._4_4_;
        local_58 = 0;
        local_60 = (longlong *)0x0;
        local_68 = 0;
        local_70 = 0;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        if (local_128 != (longlong *)0x0) {
          (**(code **)(*local_128 + 0x10))();
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        plVar9 = plStack_100;
        if (plStack_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_100)(plStack_100);
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
      bVar6 = false;
    }
  }
  plVar9 = (longlong *)FUN_140e82300();
  local_e8 = (longlong *)*plVar9;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 8))();
  }
  local_e0 = (undefined4)plVar9[1];
  if (!bVar6) {
    iVar11 = 0;
    if ((longlong)(int)uStack_d0 != 0) {
      lVar13 = 0;
      iVar11 = 0;
      do {
        iVar11 = iVar11 + *(int *)(local_d8 + 0x88 + lVar13);
        lVar13 = lVar13 + 0x268;
      } while ((longlong)(int)uStack_d0 * 0x268 - lVar13 != 0);
    }
    local_128 = (longlong *)0x0;
    plStack_120 = (longlong *)0x0;
    FUN_1413a454c(local_138,iVar11,0);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = local_88 & 0xffffffff00000000;
    local_80 = 0;
    uStack_78 = 0;
    FUN_1446ddda2(&local_98,"SellAllFilteredHint",0);
    FUN_1410d1eba(local_158,&local_98);
    FUN_14023409e(&local_148,local_158,1);
    local_70 = CONCAT44(local_70._4_4_,4);
    FUN_14023423e(&local_60,local_138);
    local_b8 = &local_70;
    local_b0 = local_50;
    FUN_14010d304(&local_a8);
    local_c8 = local_148;
    local_c0 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_108,&local_c8,&local_a8);
    FUN_14007f2db(local_a8,local_a0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_140 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    FUN_140008f88(&local_e8,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    plVar9 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_120 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar10 = FUN_1447a1f4a(&local_e8);
    FUN_146637162(&local_98,&DAT_14cbdf6f0,uVar10);
    iVar11 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
    if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
      FUN_146638242(plVar3,iVar11);
    }
    lVar13 = *plVar3;
    lVar12 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar13 + lVar12) = 0;
    *(undefined8 *)(lVar13 + lVar12) = local_98;
    local_98 = 0;
    *(undefined4 *)(lVar13 + 8 + lVar12) = (undefined4)uStack_90;
    *(undefined4 *)(lVar13 + 0xc + lVar12) = uStack_90._4_4_;
    uStack_90 = 0;
    *(undefined8 *)(lVar13 + 0x10 + lVar12) = 0;
    *(ulonglong *)(lVar13 + 0x10 + lVar12) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar13 + 0x18 + lVar12) = (undefined4)local_80;
    *(undefined4 *)(lVar13 + 0x1c + lVar12) = local_80._4_4_;
    local_80 = 0;
  }
  FUN_146637162(&local_98,&DAT_14cbdddf0,&DAT_14cbddf90);
  iVar11 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
  if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
    FUN_146638242(plVar3,iVar11);
  }
  lVar13 = *plVar3;
  lVar12 = (longlong)iVar11 * 0x20;
  *(undefined8 *)(lVar13 + lVar12) = 0;
  *(undefined8 *)(lVar13 + lVar12) = local_98;
  *(undefined4 *)(lVar13 + 8 + lVar12) = (undefined4)uStack_90;
  *(undefined4 *)(lVar13 + 0xc + lVar12) = uStack_90._4_4_;
  *(undefined8 *)(lVar13 + 0x10 + lVar12) = 0;
  *(ulonglong *)(lVar13 + 0x10 + lVar12) = local_88;
  *(undefined4 *)(lVar13 + 0x18 + lVar12) = (undefined4)local_80;
  *(undefined4 *)(lVar13 + 0x1c + lVar12) = local_80._4_4_;
  local_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  puVar5 = *(ushort **)(param_1 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  FUN_1412d6a39(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea9aaa FUN_148ea9aaa body=704 status=ok
// SIG undefined FUN_148ea9aaa(void)

void FUN_148ea9aaa(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148e82344();
  puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar3 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(local_50,"AddState",1);
  FUN_14039176c(puVar3,*(undefined8 *)(param_1 + 0x30),local_50[0],1);
  *puVar3 = &PTR_FUN_14b9c13e0;
  puVar3[7] = DAT_14cbd95f0;
  *(undefined1 *)(puVar3 + 8) = 0;
  FUN_140391314(param_1,puVar3);
  puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar3 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(local_50,"AddState",1);
  FUN_14039176c(puVar3,*(undefined8 *)(param_1 + 0x30),local_50[0],1);
  *puVar3 = &PTR_FUN_14b9c13e0;
  puVar3[7] = DAT_14cbd95f8;
  *(undefined1 *)(puVar3 + 8) = 0;
  FUN_140391314(param_1,puVar3);
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9cc8f0;
  FUN_1446ddc76(local_50,"PlayerController",1);
  FUN_14039176c(puVar3,uVar1,local_50[0],1);
  *puVar3 = &PTR_FUN_14b9cc8f0;
  FUN_140391314(param_1,puVar3);
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c7340;
  FUN_1446ddc76(local_50,"PlayerController",1);
  FUN_14039176c(puVar3,uVar1,local_50[0],1);
  *puVar3 = &PTR_FUN_14b9c7340;
  FUN_140391314(param_1,puVar3);
  FUN_1400b22c2(local_50,"StartLostLootTutorial");
  FUN_140afad18(param_1,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x330) = *(byte *)(lVar2 + 0x330) | 0x20;
    *(undefined4 *)(lVar2 + 0xac) = 0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_50,"ClearItem",1);
  FUN_14039176c(puVar3,uVar1,local_50[0],1);
  *puVar3 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar3 + 7) = 0;
  FUN_140391314(param_1,puVar3);
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_50,"ClearItem",1);
  FUN_14039176c(puVar3,uVar1,local_50[0],1);
  *puVar3 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar3 + 7) = 1;
  FUN_140391314(param_1,puVar3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea9d6c FUN_148ea9d6c body=445 status=ok
// SIG undefined FUN_148ea9d6c(void)

void FUN_148ea9d6c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c1410;
  FUN_1446ddc76(&local_40,"RemoveState",1);
  FUN_14039176c(puVar2,uVar1,local_40,1);
  *puVar2 = &PTR_FUN_14b9c1410;
  puVar2[7] = DAT_14cbd95f0;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c1410;
  FUN_1446ddc76(&local_40,"RemoveState",1);
  FUN_14039176c(puVar2,uVar1,local_40,1);
  *puVar2 = &PTR_FUN_14b9c1410;
  puVar2[7] = DAT_14cbd95f8;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_1446ddc76(&local_40,"ClearStructureredInteractable",1);
  FUN_14039176c(puVar2,uVar1,local_40,1);
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71e0;
  FUN_1446ddc76(&local_40,"ClearPendingThumbnails",1);
  FUN_14039176c(puVar2,uVar1,local_40,1);
  *puVar2 = &PTR_FUN_14b9c71e0;
  FUN_140391314(param_1,puVar2);
  FUN_148e82806(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ea9f2a FUN_148ea9f2a body=63 status=ok
// SIG undefined FUN_148ea9f2a(void)

void FUN_148ea9f2a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    cVar2 = FUN_148ea8df6(lVar1);
    if (cVar2 != '\0') {
      *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) | 2;
      *(undefined1 *)(lVar1 + 0x398) = 1;
      *(undefined1 *)(param_1 + 0x35a) = 1;
    }
  }
  return;
}



// FUNCTION 148ea9f6a FUN_148ea9f6a body=380 status=ok
// SIG undefined FUN_148ea9f6a(void)

void FUN_148ea9f6a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457fc042();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    puVar4 = &DAT_14c9a1308;
    puVar3 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdf6c8);
    }
    uVar2 = FUN_140625082(puVar3,&DAT_14c9a12e0);
    FUN_1447325ac(uVar2,local_38,1);
    *(longlong *)(param_1 + 0x360) = local_38[0];
    puVar3 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdf6d0);
    }
    uVar2 = FUN_140625082(puVar3,&DAT_14c9a12e0);
    FUN_1447325ac(uVar2,local_38,1);
    *(longlong *)(param_1 + 0x368) = local_38[0];
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar4 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdf6d8);
    }
    uVar2 = FUN_140625082(puVar4,&DAT_14c9a12e0);
    FUN_1447325ac(uVar2,local_38,1);
    *(longlong *)(param_1 + 0x370) = local_38[0];
    *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) | 2;
    *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x20;
    *(undefined2 *)(lVar1 + 0x398) = 0x101;
    FUN_1400b22c2(local_38,"unequipped");
    FUN_148e6a110(lVar1 + 0xb0,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaa0e8 FUN_148eaa0e8 body=377 status=ok
// SIG undefined FUN_148eaa0e8(void)

void FUN_148eaa0e8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1442c8c42();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_148eaa3f8;
      local_40 = 0;
      FUN_148eaa262(param_1,param_2,param_1,&local_48);
      local_48 = FUN_148eaa61c;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148eaa500(param_1,param_2,&DAT_14cb92b80,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148eaa7a4(param_1,param_2,&DAT_14cb92b80,param_1);
      local_48 = FUN_148eaa924;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148eaa500(param_1,param_2,&DAT_14cb92b78,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148eaa7a4(param_1,param_2,&DAT_14cb92b78,param_1);
      local_48 = (code *)&LAB_148eaaa4c;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148eaa500(param_1,param_2,&DAT_14cb92a90,param_1);
      local_48 = (code *)&LAB_148eaaa5a;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148eaa500(param_1,param_2,&DAT_14cb92b88,param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaa262 FUN_148eaa262 body=404 status=ok
// SIG undefined FUN_148eaa262(void)

void FUN_148eaa262(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  code **local_68;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined4 *)(param_4 + 1);
  local_58 = (code *)*param_4;
  FUN_148eb860c(param_1,param_2,param_3,&local_58);
  lVar1 = param_1 + 0x138;
  local_58 = FUN_140de0f20;
  local_50 = 0;
  local_68 = &local_58;
  uVar3 = FUN_1442edc34(param_2,&DAT_14cb92b70,2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar3;
  local_58 = FUN_140de0f20;
  local_50 = 0;
  local_68 = &local_58;
  uVar3 = FUN_1442edc34(param_2,&DAT_14cb92b70,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar3;
  local_58 = FUN_140de0f20;
  local_50 = 0;
  local_68 = &local_58;
  uVar3 = FUN_1442edc34(param_2,&DAT_14cb92b70,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_148a00eb4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaa3f8 FUN_148eaa3f8 body=262 status=ok
// SIG undefined FUN_148eaa3f8(void)

void FUN_148eaa3f8(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_148e87cec();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0x140);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar2 + 0x50);
  ReleaseSRWLockShared(SRWLock);
  if (cVar1 == '\x01') {
    uVar4 = FUN_14001cc68(0x40,0x10);
    FUN_140056680(local_30,L"UI.State.MENU_LOSTLOOT");
    FUN_148e928ea(uVar4,*(undefined8 *)(param_1 + 0x30),local_30);
    FUN_140391314(param_1,uVar4);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    uVar4 = FUN_14001cc68(0x48,0x10);
    FUN_140056680(local_30,L"UI.State.MENU_ECHO_UPGRADE");
    FUN_148e9299e(uVar4,*(undefined8 *)(param_1 + 0x30),local_30,0);
    FUN_140391314(param_1,uVar4);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaa500 FUN_148eaa500 body=282 status=ok
// SIG undefined FUN_148eaa500(void)

void FUN_148eaa500(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1442edcda(param_2,param_3,param_4);
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



// FUNCTION 148eaa61c FUN_148eaa61c body=391 status=ok
// SIG undefined FUN_148eaa61c(void)

void FUN_148eaa61c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[0x51];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x408) != 0)) {
    cVar1 = FUN_148e8621c();
    if (cVar1 == '\0') {
      local_38 = 0;
      uStack_30 = 0;
      if ((longlong)*(int *)(lVar3 + 0x408) != 0) {
        lVar4 = (longlong)*(int *)(lVar3 + 0x408) * 0x268;
        lVar3 = *(longlong *)(lVar3 + 0x400) + 600;
        do {
          if (-1 < *(char *)(lVar3 + -0x1bb)) {
            FUN_148eb94de(&local_38,lVar3);
          }
          lVar3 = lVar3 + 0x268;
          lVar4 = lVar4 + -0x268;
        } while (lVar4 != 0);
        if ((int)uStack_30 != 0) {
          uVar2 = FUN_14001cc68(0x48,0x10);
          FUN_148e6f21a(uVar2,param_1[6],&local_38,0);
          FUN_140391314(param_1,uVar2);
          FUN_140de1078(param_1,&DAT_14cbdf678,0,0);
          FUN_1446ddc76(local_40,"lost_loot_items_retrieved",1);
          (**(code **)(*param_1 + 0x178))(param_1,local_40);
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      FUN_140de1078(param_1,&DAT_14cbde118,0,0);
      FUN_1446ddc76(&local_38,"ui_message_full_backpack",1);
      (**(code **)(*param_1 + 0x178))(param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eaa7a4 FUN_148eaa7a4 body=382 status=ok
// SIG undefined FUN_148eaa7a4(void)

void FUN_148eaa7a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442edc34(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442edc34(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1442edc34(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaa924 FUN_148eaa924 body=294 status=ok
// SIG undefined FUN_148eaa924(void)

void FUN_148eaa924(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[0x51];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x408) != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    lVar3 = (longlong)*(int *)(lVar2 + 0x408) * 0x268;
    lVar2 = *(longlong *)(lVar2 + 0x400) + 600;
    do {
      if (-1 < *(char *)(lVar2 + -0x1bb)) {
        FUN_148eb94de(&local_38,lVar2);
      }
      lVar2 = lVar2 + 0x268;
      lVar3 = lVar3 + -0x268;
    } while (lVar3 != 0);
    if ((int)uStack_30 != 0) {
      uVar1 = FUN_14001cc68(0x48,0x10);
      FUN_148e6f42a(uVar1,param_1[6],&local_38,0);
      FUN_140391314(param_1,uVar1);
      FUN_140de1078(param_1,&DAT_14cbdf688,0,0);
      FUN_1446ddc76(local_40,"ui_message_item_sold",1);
      (**(code **)(*param_1 + 0x178))(param_1,local_40);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaaa72 FUN_148eaaa72 body=51 status=ok
// SIG undefined FUN_148eaaa72(void)

void FUN_148eaaa72(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x288) == 0) {
    return;
  }
  FUN_148ee2882();
  FUN_148eaaaa6(param_1,param_2);
  return;
}



// FUNCTION 148eaaaa6 FUN_148eaaaa6 body=303 status=ok
// SIG undefined FUN_148eaaaa6(void)

void FUN_148eaaaa6(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x51] != 0) {
    lVar3 = FUN_148e8413e();
    if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x9c) & 1) == 0)) &&
       ((*(byte *)(lVar3 + 0x9e) & 0x40) == 0)) {
      cVar2 = FUN_148e8621c(param_1);
      if (cVar2 == '\0') {
        uVar4 = FUN_14001cc68(0x48,0x10);
        uVar1 = *(undefined4 *)(lVar3 + 600);
        local_38 = (undefined4 *)0x0;
        local_30 = 1;
        FUN_148eb9454(&local_38);
        *local_38 = uVar1;
        FUN_148e6f21a(uVar4,param_1[6],&local_38,0);
        FUN_140391314(param_1,uVar4);
        if (local_38 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140de1078(param_1,&DAT_14cbdf678,0,0);
        pcVar5 = "lost_loot_item_retrieved";
      }
      else {
        FUN_140de1078(param_1,&DAT_14cbde118,0,0);
        pcVar5 = "ui_message_full_backpack";
      }
      FUN_1446ddc76(&local_38,pcVar5,1);
      (**(code **)(*param_1 + 0x178))(param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaabd6 FUN_148eaabd6 body=793 status=ok
// SIG undefined FUN_148eaabd6(void)

void FUN_148eaabd6(longlong param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 != 0) {
    if (((*(byte *)(lVar7 + 0x331) & 4) != 0) && (*(int *)(lVar7 + 0x328) != param_2)) {
      if (param_2 == -1) {
        pcVar9 = "BackpackSlotUnfocused";
      }
      else {
        pcVar9 = "BackpackSlotFocused";
      }
      FUN_1400b22c2(local_88,pcVar9);
      FUN_140de1078(param_1,local_88,0,0);
      if (local_88[0] != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_148ee223e(lVar7,param_2);
    cVar1 = FUN_148e83492(param_1);
    if (cVar1 != '\0') {
      FUN_140056680(local_98,&DAT_149dfb77a);
      lVar4 = FUN_148e84d1e(param_1);
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        *puVar5 = &PTR_FUN_14b9c7210;
        FUN_1446ddc76(local_88,"SetVisible",1);
        FUN_14039176c(puVar5,uVar6,local_88[0],1);
        *puVar5 = &PTR_FUN_14b9c7210;
        *(undefined1 *)(puVar5 + 7) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
        FUN_140391314(param_1,puVar5);
        uVar10 = 0;
      }
      else {
        uVar6 = FUN_14001cc68(0x148,0x10);
        uVar11 = 0;
        FUN_148eaaef0(uVar6,*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(lVar4 + 600));
        FUN_140391314(param_1,uVar6);
        if ((*(byte *)(lVar7 + 0x8f8) & 8) != 0) {
          bVar2 = FUN_148e83588(param_1);
          uVar11 = (uint)bVar2 * 0x10 + 0x10;
        }
        cVar1 = FUN_148e8621c(param_1);
        uVar10 = uVar11 + 0x1000;
        if (cVar1 != '\0') {
          uVar10 = uVar11;
        }
        uVar10 = uVar10 | 0x2001;
        FUN_144a787a6(local_98,lVar4 + 0x50);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      lVar7 = FUN_148e84d1e(param_1);
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_148e83588(param_1);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *puVar5 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(local_88,"SetVisible",1);
      FUN_14039176c(puVar5,uVar6,local_88[0],1);
      *puVar5 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar5 + 7) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = 1;
      FUN_140391314(param_1,puVar5);
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *puVar5 = &PTR_FUN_14b9c7290;
      FUN_1446ddc76(local_88,"SetGlyphs",1);
      FUN_14039176c(puVar5,uVar6,local_88[0],1);
      *puVar5 = &PTR_FUN_14b9c7290;
      *(uint *)(puVar5 + 7) = uVar10;
      FUN_140391314(param_1,puVar5);
      puVar5 = (undefined8 *)FUN_148e83714(param_1);
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14b9cc9f0;
      local_88[0] = &LAB_1442edd5e;
      local_60 = local_98;
      FUN_148e863d0(*puVar5,local_88);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar8 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar8 = &local_68;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaaef0 FUN_148eaaef0 body=297 status=ok
// SIG undefined FUN_148eaaef0(void)

undefined8 *
FUN_148eaaef0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c7240;
  FUN_1446ddc76(&local_40,"SetItem",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9c7240;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab01e FUN_148eab01e body=245 status=ok
// SIG undefined FUN_148eab01e(void)

void FUN_148eab01e(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x51] != 0) {
    lVar2 = FUN_148e8413e();
    if (lVar2 != 0) {
      uVar3 = FUN_14001cc68(0x48,0x10);
      uVar1 = *(undefined4 *)(lVar2 + 600);
      local_38 = (undefined4 *)0x0;
      local_30 = 1;
      FUN_148eb9454(&local_38);
      *local_38 = uVar1;
      FUN_148e6f42a(uVar3,param_1[6],&local_38,0);
      FUN_140391314(param_1,uVar3);
      if (local_38 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140de1078(param_1,&DAT_14cbdf688,0,0);
      FUN_1446ddc76(&local_38,"ui_message_item_sold",1);
      (**(code **)(*param_1 + 0x178))(param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab114 FUN_148eab114 body=118 status=ok
// SIG undefined FUN_148eab114(void)

longlong FUN_148eab114(longlong param_1)

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
    return local_28 + 0x500;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab18c FUN_148eab18c body=884 status=ok
// SIG undefined FUN_148eab18c(void)

ulonglong FUN_148eab18c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar9 = 0;
  }
  else {
    plVar7 = (longlong *)FUN_148eab114();
    puVar5 = (undefined8 *)*plVar7;
    AcquireSRWLockShared((PSRWLOCK)(puVar5 + 4));
    iVar3 = *(int *)(puVar5 + 3);
    bVar12 = *(int *)(param_1 + 0xac) != iVar3;
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar12);
    if (bVar12) {
      *(int *)(param_1 + 0xac) = iVar3;
      if ((longlong)*(int *)(puVar5 + 1) != 0) {
        puVar11 = (undefined8 *)*puVar5;
        lVar10 = (longlong)*(int *)(puVar5 + 1) * 0x60;
        do {
          cVar6 = FUN_144709e00(*puVar11,"Lost_Loot_Upgrades");
          if (cVar6 != '\0') {
            if (puVar11 != (undefined8 *)0x0) {
              iVar3 = *(int *)(puVar11 + 2);
              iVar4 = *(int *)(puVar11 + 3);
              if (iVar3 < iVar4) {
                pcVar8 = "ItemContainerCountFormat";
              }
              else {
                pcVar8 = "ItemContainerFullCountFormat";
              }
              uStack_88 = 0;
              local_90 = 0;
              local_98[0] = 0;
              uStack_a0 = 0;
              local_a8 = 0;
              FUN_1446ddda2(&local_a8,pcVar8,0);
              FUN_1410d1eba(local_e8,&local_a8);
              if (local_90 != 0) {
                FUN_1400020a8();
              }
              local_118 = 0;
              plStack_110 = (longlong *)0x0;
              FUN_1413a454c(local_108,iVar4,0);
              local_138 = 0;
              plStack_130 = (longlong *)0x0;
              FUN_1413a454c(local_128,iVar3,0);
              FUN_14023409e(&local_148,local_e8,1);
              local_a8 = CONCAT44(local_a8._4_4_,4);
              FUN_14023423e(local_98,local_128);
              uStack_88 = CONCAT44(uStack_88._4_4_,4);
              FUN_14023423e(local_78,local_108);
              local_c8 = &local_a8;
              local_c0 = local_68;
              FUN_14010d304(&local_b8);
              local_d8 = local_148;
              local_d0 = local_140;
              if (local_140 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_f8,&local_d8,&local_b8);
              FUN_14007f2db(local_b8,local_b0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              lVar10 = 0x30;
              do {
                if (*(longlong **)((longlong)&local_a8 + lVar10) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)((longlong)&local_a8 + lVar10) + 0x10))();
                  *(undefined8 *)((longlong)&local_a8 + lVar10) = 0;
                  *(undefined4 *)((longlong)local_98 + lVar10 + -8) = 0;
                }
                lVar10 = lVar10 + -0x20;
              } while (lVar10 != -0x10);
              if (local_140 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_140 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_140)(local_140);
                  LOCK();
                  piVar1 = (int *)((longlong)local_140 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_140 + 0x10))(local_140);
                  }
                }
              }
              if (local_128[0] != (longlong *)0x0) {
                (**(code **)(*local_128[0] + 0x10))();
              }
              if (local_108[0] != (longlong *)0x0) {
                (**(code **)(*local_108[0] + 0x10))();
              }
              FUN_140008f88(param_1 + 0xb8,local_f8);
              if (local_f8[0] != (longlong *)0x0) {
                (**(code **)(*local_f8[0] + 0x10))();
              }
              plVar7 = plStack_130;
              if (plStack_130 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_130 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_130)(plStack_130);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              plVar7 = plStack_110;
              if (plStack_110 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_110 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_110)(plStack_110);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
            }
            break;
          }
          puVar11 = puVar11 + 0xc;
          lVar10 = lVar10 + -0x60;
        } while (lVar10 != 0);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar5 + 4));
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab502 FUN_148eab502 body=132 status=ok
// SIG undefined FUN_148eab502(void)

void FUN_148eab502(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cca50;
  puVar1[2] = FUN_148eab586;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnHoverRankButton",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cca50;
  puVar1[2] = FUN_148eab5f2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnUnhoverRankButton",puVar1);
  return;
}



// FUNCTION 148eab586 FUN_148eab586 body=108 status=ok
// SIG undefined FUN_148eab586(void)

void FUN_148eab586(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  plVar4 = (longlong *)FUN_148eab734();
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0x140);
  AcquireSRWLockExclusive(SRWLock);
  *(undefined1 *)(lVar2 + 0x50) = 1;
  ReleaseSRWLockExclusive(SRWLock);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb0) & 1) == 0)) {
    *(byte *)(lVar1 + 0xb0) = *(byte *)(lVar1 + 0xb0) | 1;
    puVar3 = *(ushort **)(lVar1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eab5f2 FUN_148eab5f2 body=108 status=ok
// SIG undefined FUN_148eab5f2(void)

void FUN_148eab5f2(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  plVar4 = (longlong *)FUN_148eab734();
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0x140);
  AcquireSRWLockExclusive(SRWLock);
  *(undefined1 *)(lVar2 + 0x50) = 0;
  ReleaseSRWLockExclusive(SRWLock);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb0) & 1) != 0)) {
    *(byte *)(lVar1 + 0xb0) = *(byte *)(lVar1 + 0xb0) & 0xfe;
    puVar3 = *(ushort **)(lVar1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eab65e FUN_148eab65e body=212 status=ok
// SIG undefined FUN_148eab65e(void)

void FUN_148eab65e(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407cbc56();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"LostLootRankPanelText",0);
    FUN_1410d1eba(local_68,&local_58);
    FUN_140008f88(lVar1 + 200,local_68);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab734 FUN_148eab734 body=121 status=ok
// SIG undefined FUN_148eab734(void)

longlong FUN_148eab734(longlong param_1)

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
    return local_28 + 0x620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab7ae FUN_148eab7ae body=63 status=ok
// SIG undefined FUN_148eab7ae(void)

void FUN_148eab7ae(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    cVar3 = FUN_148eab18c(lVar1);
    if ((cVar3 != '\0') && (puVar2 = *(ushort **)(lVar1 + 0x80), puVar2 != (ushort *)0x0)) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eab7ee FUN_148eab7ee body=173 status=ok
// SIG undefined FUN_148eab7ee(void)

void FUN_148eab7ee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148eab9aa;
      local_30 = 0;
      FUN_148eab89c(param_1,param_2,param_1,&local_38);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_148eaba22(param_1,param_2,param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab89c FUN_148eab89c body=269 status=ok
// SIG undefined FUN_148eab89c(void)

void FUN_148eab89c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442ede12(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92cb8;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eab9aa FUN_148eab9aa body=119 status=ok
// SIG undefined FUN_148eab9aa(void)

void FUN_148eab9aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (((*(char *)(param_2 + 0x13) == '\x01') && (*(longlong *)(param_1 + 0x288) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x288) + 0x160) == 3)) {
    lVar1 = FUN_140391552(param_1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9cb190;
      FUN_14039144e(lVar1,puVar2);
    }
    *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  }
  return;
}



// FUNCTION 148eaba22 FUN_148eaba22 body=329 status=ok
// SIG undefined FUN_148eaba22(void)

void FUN_148eaba22(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442edea4(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442edea4(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1442edea4(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eabb6c FUN_148eabb6c body=210 status=ok
// SIG undefined FUN_148eabb6c(void)

void FUN_148eabb6c(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  lVar3 = FUN_14479d2ce(param_1 + 0x30);
  bVar1 = FUN_140426394(lVar3 + 0x3c0,&DAT_14cbd9310);
  *puVar2 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(&local_40,"AddState",1);
  FUN_14039176c(puVar2,*(undefined8 *)(param_1 + 0x30),local_40,1);
  *puVar2 = &PTR_FUN_14b9c13e0;
  puVar2[7] = *(undefined8 *)(&DAT_14cbd9390 + (ulonglong)(bVar1 ^ 1) * 8);
  *(undefined1 *)(puVar2 + 8) = 0;
  FUN_140391314(param_1,puVar2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eabc40 FUN_148eabc40 body=26 status=ok
// SIG undefined FUN_148eabc40(void)

void FUN_148eabc40(longlong param_1)

{
  FUN_14588cd9e();
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  return;
}



// FUNCTION 148eabc60 FUN_148eabc60 body=161 status=ok
// SIG undefined FUN_148eabc60(void)

undefined8 FUN_148eabc60(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_140775538(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eabd02 FUN_148eabd02 body=85 status=ok
// SIG undefined FUN_148eabd02(void)

void FUN_148eabd02(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x160) == 5) {
      FUN_145a3fe70();
      return;
    }
    FUN_145a61fdc((char)param_1,lVar1 + 0xb0,param_2);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eabd72 FUN_148eabd72 body=105 status=ok
// SIG undefined FUN_148eabd72(void)

void FUN_148eabd72(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_14588cd9e();
  *(undefined1 *)(param_1 + 0x308) = 0;
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9cb310;
    *(undefined1 *)(puVar2 + 4) = 1;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 148eabddc FUN_148eabddc body=122 status=ok
// SIG undefined FUN_148eabddc(void)

void FUN_148eabddc(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_14020fad6(param_1 + 0x2e8,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x308) = 0;
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9cb310;
    *(undefined1 *)(puVar2 + 4) = 0;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148eabe56 FUN_148eabe56 body=369 status=ok
// SIG undefined FUN_148eabe56(void)

void FUN_148eabe56(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_50 = FUN_148eac0e4;
      local_48 = 0;
      local_58 = &local_50;
      FUN_148eabfc8(param_1,param_2,&DAT_14cb92cc0,param_1);
      local_50 = FUN_148eac168;
      local_48 = 0;
      local_58 = &local_50;
      FUN_148eabfc8(param_1,param_2,&DAT_14cb92cc8,param_1);
      local_50 = FUN_148eac20a;
      local_48 = 0;
      local_58 = &local_50;
      FUN_148eabfc8(param_1,param_2,&DAT_14cb92cd0,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_148eac2b6(param_1,param_2,&DAT_14cb92cd0,param_1);
      local_50 = FUN_148eac436;
      local_48 = 0;
      local_58 = &local_50;
      FUN_148eabfc8(param_1,param_2,&DAT_14cbc9c28,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_148eac2b6(param_1,param_2,&DAT_14cbc9c28,param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eabfc8 FUN_148eabfc8 body=282 status=ok
// SIG undefined FUN_148eabfc8(void)

void FUN_148eabfc8(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1442edf8a(param_2,param_3,param_4);
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



// FUNCTION 148eac0e4 FUN_148eac0e4 body=131 status=ok
// SIG undefined FUN_148eac0e4(void)

void FUN_148eac0e4(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0x51];
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x2b4) == '\0')) && (0 < *(int *)(lVar1 + 0x2f0))) {
    lVar1 = FUN_140391552();
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9cb320;
      FUN_14039144e(lVar1,puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x000148eac160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  return;
}



// FUNCTION 148eac168 FUN_148eac168 body=160 status=ok
// SIG undefined FUN_148eac168(void)

void FUN_148eac168(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(&local_30,"AddState",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9c13e0;
  puVar1[7] = DAT_14cbd93a8;
  *(undefined1 *)(puVar1 + 8) = 0;
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eac20a FUN_148eac20a body=172 status=ok
// SIG undefined FUN_148eac20a(void)

void FUN_148eac20a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 700) == '\0') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9cb340;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  else {
    if (*(char *)(lVar1 + 0x2b4) == '\x01') {
      FUN_148eac436(param_1);
      return;
    }
    if (*(int *)(lVar1 + 0x2f0) < 2) {
      return;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9cb350;
  }
  FUN_140391314(param_1,puVar2);
  return;
}



// FUNCTION 148eac2b6 FUN_148eac2b6 body=382 status=ok
// SIG undefined FUN_148eac2b6(void)

void FUN_148eac2b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442ee00e(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442ee00e(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1442ee00e(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eac436 FUN_148eac436 body=94 status=ok
// SIG undefined FUN_148eac436(void)

void FUN_148eac436(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0x2b4) == '\x01')) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_14b9cb190;
    FUN_140391314(param_1,puVar1);
    return;
  }
  return;
}



// FUNCTION 148eac4b8 FUN_148eac4b8 body=221 status=ok
// SIG undefined FUN_148eac4b8(void)

void FUN_148eac4b8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Str2;
  ushort *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0xb8) != 0)) {
    puVar5 = *(undefined8 **)(lVar2 + 0xb0);
    iVar1 = *(int *)(param_2 + 1);
    _Str2 = (wchar_t *)*param_2;
    lVar6 = (longlong)*(int *)(lVar2 + 0xb8) * 0x58;
    do {
      if (*(int *)(puVar5 + 1) == iVar1) {
        if ((iVar1 < 2) || (iVar4 = wcscmp((wchar_t *)*puVar5,_Str2), iVar4 == 0))
        goto LAB_148eac53b;
      }
      else if (*(int *)(puVar5 + 1) + iVar1 == 1) {
LAB_148eac53b:
        FUN_144a787a6(param_1 + 0x2e8,param_2);
        *(undefined1 *)(lVar2 + 0x2b0) = 1;
        *(undefined1 *)(lVar2 + 0x2b1) = *(undefined1 *)((longlong)puVar5 + 0x51);
        *(undefined1 *)(lVar2 + 0x2b2) = *(undefined1 *)(puVar5 + 10);
        FUN_148c82308(lVar2 + 0x1c0,puVar5);
        puVar3 = *(ushort **)(lVar2 + 0x80);
        if (puVar3 == (ushort *)0x0) {
          return;
        }
        *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
        return;
      }
      puVar5 = puVar5 + 0xb;
      lVar6 = lVar6 + -0x58;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 148eac596 FUN_148eac596 body=87 status=ok
// SIG undefined FUN_148eac596(void)

void FUN_148eac596(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_14020fad6(param_1 + 0x2e8,&DAT_149dfb77a);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0x2b0) = 0;
    *(undefined1 *)(lVar1 + 0x2b2) = 0;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eac5ee FUN_148eac5ee body=123 status=ok
// SIG undefined FUN_148eac5ee(void)

void FUN_148eac5ee(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*param_2 == DAT_14cbdf8f0)) {
    lVar2 = FUN_140391552();
    if (lVar2 != 0) {
      uVar3 = FUN_14001cc68(0x30,0x10);
      FUN_148eaca48(uVar3,(longlong)param_3 * 0x90 + *(longlong *)(lVar1 + 0x118));
      FUN_14039144e(lVar2,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148eac6f6 FUN_148eac6f6 body=26 status=ok
// SIG undefined FUN_148eac6f6(void)

void FUN_148eac6f6(undefined8 param_1)

{
  FUN_1414dd5aa();
  FUN_145874b40(param_1);
  return;
}



// FUNCTION 148eac710 FUN_148eac710 body=604 status=ok
// SIG undefined FUN_148eac710(void)

void FUN_148eac710(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x298;
    iVar2 = *(int *)(lVar3 + 0x2a4);
    FUN_140f9c02e(*(undefined8 *)(lVar3 + 0x298),*(undefined4 *)(lVar3 + 0x2a0));
    *(undefined4 *)(lVar3 + 0x2a0) = 0;
    if ((iVar2 < 0) && (*(int *)(lVar3 + 0x2a4) != 0)) {
      FUN_148a07b08(lVar1,0);
    }
    if (*(char *)(lVar3 + 0x2b4) == '\x01') {
      plVar4 = (longlong *)FUN_140f9d3ac(lVar1);
      FUN_1400b22c2(&local_38,"action_ui_cursor_hold");
      if (plVar4 == &local_38) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar4 != 0) {
          FUN_1400020a8();
        }
        *plVar4 = local_38;
        local_38 = 0;
        *(undefined4 *)(plVar4 + 1) = local_30;
        *(undefined4 *)((longlong)plVar4 + 0xc) = local_2c;
      }
      pcVar5 = "Matchmaking_StopMatchmaking";
    }
    else if (*(char *)(param_2 + 0x51) == '\x01') {
      plVar4 = (longlong *)FUN_140f9d3ac(lVar1);
      FUN_1400b22c2(&local_38,"action_ui_cursor_click");
      if (plVar4 == &local_38) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar4 != 0) {
          FUN_1400020a8();
        }
        *plVar4 = local_38;
        local_38 = 0;
        *(undefined4 *)(plVar4 + 1) = local_30;
        *(undefined4 *)((longlong)plVar4 + 0xc) = local_2c;
      }
      pcVar5 = "Matchmaking_RemoveFromQueueText";
    }
    else {
      if (*(char *)(param_2 + 0x50) != '\0') goto LAB_148eac819;
      plVar4 = (longlong *)FUN_140f9d3ac(lVar1);
      FUN_1400b22c2(&local_38,"action_ui_cursor_click");
      if (plVar4 == &local_38) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar4 != 0) {
          FUN_1400020a8();
        }
        *plVar4 = local_38;
        local_38 = 0;
        *(undefined4 *)(plVar4 + 1) = local_30;
        *(undefined4 *)((longlong)plVar4 + 0xc) = local_2c;
      }
      pcVar5 = "Matchmaking_AddToQueueText";
    }
    FUN_1400b22c2(&local_38,pcVar5);
    if (plVar4 + 2 == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar4[2] != 0) {
        FUN_1400020a8();
      }
      plVar4[2] = local_38;
      *(undefined4 *)(plVar4 + 3) = local_30;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = local_2c;
    }
  }
LAB_148eac819:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eac96e FUN_148eac96e body=102 status=ok
// SIG undefined FUN_148eac96e(void)

void FUN_148eac96e(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x2b0) == '\x01')) &&
     (1 < *(int *)(param_1 + 0x2f0))) {
    uVar1 = FUN_14001cc68(0x30,0x10);
    FUN_148eac9d4(uVar1,param_1 + 0x2e8);
    FUN_140391314(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 148eac9d4 FUN_148eac9d4 body=115 status=ok
// SIG undefined FUN_148eac9d4(void)

undefined8 * FUN_148eac9d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9cb330;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148eaca48 FUN_148eaca48 body=115 status=ok
// SIG undefined FUN_148eaca48(void)

undefined8 * FUN_148eaca48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9cb360;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148eacabc FUN_148eacabc body=354 status=ok
// SIG undefined FUN_148eacabc(void)

void FUN_148eacabc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0xb8) != 0)) {
    puVar4 = *(undefined8 **)(lVar1 + 0xb0);
    local_60 = lVar1 + 0x238;
    local_68 = lVar1 + 600;
    lVar5 = (longlong)*(int *)(lVar1 + 0xb8) * 0x58;
    do {
      iVar3 = *(int *)(puVar4 + 1);
      if (iVar3 == *(int *)(param_2 + 1)) {
        if ((iVar3 < 2) || (iVar3 = wcscmp((wchar_t *)*puVar4,(wchar_t *)*param_2), iVar3 == 0)) {
LAB_148eacb6b:
          FUN_140009b9a(local_58,puVar4 + 2);
          FUN_140008f88(local_60,local_58);
          if (local_58[0] != (longlong *)0x0) {
            (**(code **)(*local_58[0] + 0x10))();
          }
          FUN_140009b9a(local_58,puVar4 + 6);
          FUN_140008f88(local_68,local_58);
          if (local_58[0] != (longlong *)0x0) {
            (**(code **)(*local_58[0] + 0x10))();
          }
          FUN_144a787a6(lVar1 + 0x268,puVar4 + 4);
          FUN_148eac710(param_1,puVar4);
          puVar2 = *(ushort **)(lVar1 + 0x80);
          if (puVar2 != (ushort *)0x0) {
            *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
          }
        }
      }
      else if (*(int *)(param_2 + 1) + iVar3 == 1) goto LAB_148eacb6b;
      puVar4 = puVar4 + 0xb;
      lVar5 = lVar5 + -0x58;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eacc20 FUN_148eacc20 body=68 status=ok
// SIG undefined FUN_148eacc20(void)

longlong FUN_148eacc20(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140e63d9c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_140e63a00(lVar2,1);
  return lVar2;
}



// FUNCTION 148eacc64 FUN_148eacc64 body=26 status=ok
// SIG undefined FUN_148eacc64(void)

void FUN_148eacc64(undefined8 param_1)

{
  FUN_14042c0e0();
  FUN_148eacc7e(param_1);
  return;
}



// FUNCTION 148eacc7e FUN_148eacc7e body=401 status=ok
// SIG undefined FUN_148eacc7e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148eacc7e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70 [4];
  undefined1 local_50;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x308) == '\x01') && ((*(byte *)(param_1 + 0x8e) & 1) != 0)) {
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    if ((lVar2 == 0) ||
       (((lVar2 = FUN_14101baae(lVar2), lVar2 == 0 || (lVar2 = FUN_1400b6e86(lVar2), lVar2 == 0)) ||
        (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(lVar2 + 0x30), lVar2 == 0))))
    goto LAB_148eaccc5;
    lVar3 = FUN_140dd10c4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_148eaccc5;
    if ((longlong)*(int *)(lVar2 + 0x548) != 0) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x540) + 0x20 + lVar3);
        if (DAT_14cbdf900 == *(longlong *)(lVar1 + 0x18)) {
          local_48[2] = 0;
          local_48[3] = 0;
          local_48[0] = 0;
          local_48[1] = 0;
          local_70[1] = 0x3ff0000000000000;
          local_70[2] = 0;
          local_70[3] = 0;
          local_50 = 0;
          local_70[0] = lVar1;
          if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          local_78 = local_48 + 2;
          FUN_14570e87e(lVar2,local_70,local_70 + 1,local_48);
          if (local_48[0] != 0) {
            FUN_1400020a8();
          }
          if (local_48[2] != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar3 = lVar3 + 0x50;
      } while ((longlong)*(int *)(lVar2 + 0x548) * 0x50 != lVar3);
    }
  }
  if ((*(char *)(param_1 + 0x308) == '\x01') && ((*(byte *)(param_1 + 0x8e) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x308) = 0;
  }
LAB_148eaccc5:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eace10 FUN_148eace10 body=38 status=ok
// SIG undefined FUN_148eace10(void)

void FUN_148eace10(longlong param_1)

{
  FUN_14588cd9e();
  *(undefined1 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x31c) = *(undefined1 *)(param_1 + 0x314);
  return;
}



// FUNCTION 148eace36 FUN_148eace36 body=199 status=ok
// SIG undefined FUN_148eace36(void)

void FUN_148eace36(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 0x338) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x288);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x308) == '\0')) {
      lVar4 = FUN_140391552(param_1);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar1 = *(undefined1 *)(param_1 + 0x31c);
        *puVar5 = &PTR_FUN_14b9cb4e0;
        *(undefined1 *)(puVar5 + 1) = uVar1;
        FUN_14039144e(lVar4,puVar5);
        if (*(char *)(lVar3 + 0x310) == '\0') {
          puVar5 = (undefined8 *)FUN_14001cc68(0x28);
          uVar2 = *(undefined4 *)(param_1 + 700);
          puVar5[1] = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[3] = 0;
          *puVar5 = &PTR_FUN_14b9cb4f0;
          *(undefined4 *)(puVar5 + 4) = uVar2;
          FUN_14039144e(lVar4,puVar5);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x338) = 0;
  }
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148eacf06 FUN_148eacf06 body=372 status=ok
// SIG undefined FUN_148eacf06(void)

void FUN_148eacf06(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x308) != '\0') {
    return;
  }
  if (*(char *)(lVar3 + 0x310) != '\0') {
    return;
  }
  if (*param_2 == DAT_14cbdf9a0) {
    if (((int)param_3 < 0) || (*(int *)(lVar3 + 0x1d0) <= (int)param_3)) goto LAB_148eacff7;
    *(uint *)(param_1 + 700) = param_3;
    lVar6 = (ulonglong)param_3 * 0x90;
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x1c8) + 0x18 + lVar6);
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(lVar3 + 0x188,*(undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x10 + lVar6),iVar8);
    uVar2 = *(uint *)(lVar3 + 0x1d0);
    if ((int)param_3 < (int)uVar2) {
      lVar6 = 0x88;
      uVar7 = 0;
      do {
        *(byte *)(*(longlong *)(lVar3 + 0x1c8) + lVar6) =
             *(byte *)(*(longlong *)(lVar3 + 0x1c8) + lVar6) & 0xbf | (param_3 == uVar7) << 6;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x90;
      } while (uVar2 != uVar7);
    }
  }
  else {
    if ((*param_2 != DAT_14cbdf9a8) || (lVar6 = FUN_140391552(param_1), lVar6 == 0))
    goto LAB_148eacff7;
    uVar5 = FUN_14001cc68(0x30,0x10);
    FUN_148eaca48(uVar5,(longlong)(int)param_3 * 0x90 + *(longlong *)(lVar3 + 0x2c8));
    FUN_14039144e(lVar6,uVar5);
  }
  FUN_140de1078(param_1,&DAT_14cbdfa20,0,0);
LAB_148eacff7:
  puVar4 = *(ushort **)(lVar3 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  return;
}



// FUNCTION 148ead122 FUN_148ead122 body=66 status=ok
// SIG undefined FUN_148ead122(void)

void FUN_148ead122(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_145a61fdc((char)param_1,lVar1 + 0xd8,param_2);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ead1b6 FUN_148ead1b6 body=283 status=ok
// SIG undefined FUN_148ead1b6(void)

void FUN_148ead1b6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsLeftInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ead2d2 FUN_148ead2d2 body=283 status=ok
// SIG undefined FUN_148ead2d2(void)

void FUN_148ead2d2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsRightInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ead3ee FUN_148ead3ee body=66 status=ok
// SIG undefined FUN_148ead3ee(void)

undefined8 * FUN_148ead3ee(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9cb500;
  return _Dst;
}



// FUNCTION 148ead436 FUN_148ead436 body=1478 status=ok
// SIG undefined FUN_148ead436(void)

void FUN_148ead436(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined1 auStack_338 [40];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_1407cbe30();
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    uVar5 = FUN_146606b8a();
    FUN_144a2e342(lVar3,param_1 + 0x160,uVar5);
    FUN_1400b22c2(&local_1b0,"Rank 1");
    local_100 = local_1b0;
    uStack_fc = uStack_1ac;
    uStack_f8 = uStack_1a8;
    uStack_f4 = uStack_1a4;
    local_f0 = 0;
    FUN_1400b22c2(&local_1b0,"+100%");
    local_e8 = local_1b0;
    uStack_e4 = uStack_1ac;
    uStack_e0 = uStack_1a8;
    uStack_dc = uStack_1a4;
    local_d8 = 0;
    FUN_1400b22c2(&local_1b0,"+100%");
    local_d0 = local_1b0;
    uStack_cc = uStack_1ac;
    uStack_c8 = uStack_1a8;
    uStack_c4 = uStack_1a4;
    local_c0 = 0;
    FUN_1400b22c2(&local_1b0,"+100%");
    local_b8 = local_1b0;
    uStack_b4 = uStack_1ac;
    uStack_b0 = uStack_1a8;
    uStack_ac = uStack_1a4;
    local_a8 = 0;
    FUN_1400b22c2(&local_1b0,"+100%");
    local_a0 = local_1b0;
    uStack_9c = uStack_1ac;
    uStack_98 = uStack_1a8;
    uStack_94 = uStack_1a4;
    local_90 = 0;
    FUN_1400b22c2(&local_1b0,"+100%");
    local_88 = local_1b0;
    uStack_84 = uStack_1ac;
    uStack_80 = uStack_1a8;
    uStack_7c = uStack_1a4;
    local_78 = 0;
    FUN_1400b22c2(&local_1b0,"+100%");
    local_70 = local_1b0;
    uStack_6c = uStack_1ac;
    uStack_68 = uStack_1a8;
    uStack_64 = uStack_1a4;
    local_60 = 0;
    local_58 = 0;
    FUN_1400b22c2(&local_260,"Rank 2");
    local_1b0 = local_260;
    uStack_1ac = uStack_25c;
    uStack_1a8 = uStack_258;
    uStack_1a4 = uStack_254;
    local_1a0 = 0;
    FUN_1400b22c2(&local_260,&DAT_14b9c8b05);
    local_198 = local_260;
    uStack_194 = uStack_25c;
    uStack_190 = uStack_258;
    uStack_18c = uStack_254;
    local_188 = 0;
    FUN_1400b22c2(&local_260,&DAT_14b9c8b05);
    local_180 = local_260;
    uStack_17c = uStack_25c;
    uStack_178 = uStack_258;
    uStack_174 = uStack_254;
    local_170 = 0;
    FUN_1400b22c2(&local_260,&DAT_14b9c8b05);
    local_168 = local_260;
    uStack_164 = uStack_25c;
    uStack_160 = uStack_258;
    uStack_15c = uStack_254;
    local_158 = 0;
    FUN_1400b22c2(&local_260,&DAT_14b9c8b05);
    local_150 = local_260;
    uStack_14c = uStack_25c;
    uStack_148 = uStack_258;
    uStack_144 = uStack_254;
    local_140 = 0;
    FUN_1400b22c2(&local_260,&DAT_14b9c8b05);
    local_138 = local_260;
    uStack_134 = uStack_25c;
    uStack_130 = uStack_258;
    uStack_12c = uStack_254;
    local_128 = 0;
    FUN_1400b22c2(&local_260,&DAT_14b9c8b05);
    local_120 = local_260;
    uStack_11c = uStack_25c;
    uStack_118 = uStack_258;
    uStack_114 = uStack_254;
    local_110 = 0;
    local_108 = 0;
    FUN_1400b22c2(&local_310,"Rank 3");
    local_260 = local_310;
    uStack_25c = uStack_30c;
    uStack_258 = uStack_308;
    uStack_254 = uStack_304;
    local_250 = 0;
    FUN_1400b22c2(&local_310,&DAT_14b9c8b11);
    local_248 = local_310;
    uStack_244 = uStack_30c;
    uStack_240 = uStack_308;
    uStack_23c = uStack_304;
    local_238 = 0;
    FUN_1400b22c2(&local_310,"+100%");
    local_230 = local_310;
    uStack_22c = uStack_30c;
    uStack_228 = uStack_308;
    uStack_224 = uStack_304;
    local_220 = 0;
    FUN_1400b22c2(&local_310,&DAT_14b9c8b16);
    local_218 = local_310;
    uStack_214 = uStack_30c;
    uStack_210 = uStack_308;
    uStack_20c = uStack_304;
    local_208 = 0;
    FUN_1400b22c2(&local_310,&DAT_14b9c8b1b);
    local_200 = local_310;
    uStack_1fc = uStack_30c;
    uStack_1f8 = uStack_308;
    uStack_1f4 = uStack_304;
    local_1f0 = 0;
    FUN_1400b22c2(&local_310,&DAT_14b9c8b20);
    local_1e8 = local_310;
    uStack_1e4 = uStack_30c;
    uStack_1e0 = uStack_308;
    uStack_1dc = uStack_304;
    local_1d8 = 0;
    FUN_1400b22c2(&local_310,&DAT_14b9c8b25);
    local_1d0 = local_310;
    uStack_1cc = uStack_30c;
    uStack_1c8 = uStack_308;
    uStack_1c4 = uStack_304;
    local_1c0 = 0;
    local_1b8 = 0;
    FUN_1400b22c2(&local_50,"Rank 4");
    local_310 = local_50;
    uStack_30c = uStack_4c;
    uStack_308 = uStack_48;
    uStack_304 = uStack_44;
    local_300 = 0;
    FUN_1400b22c2(&local_50,"+100%");
    local_2f8 = local_50;
    uStack_2f4 = uStack_4c;
    uStack_2f0 = uStack_48;
    uStack_2ec = uStack_44;
    local_2e8 = 0;
    FUN_1400b22c2(&local_50,&DAT_14b9c8b31);
    local_2e0 = local_50;
    uStack_2dc = uStack_4c;
    uStack_2d8 = uStack_48;
    uStack_2d4 = uStack_44;
    local_2d0 = 0;
    FUN_1400b22c2(&local_50,&DAT_14b9c8b36);
    local_2c8 = local_50;
    uStack_2c4 = uStack_4c;
    uStack_2c0 = uStack_48;
    uStack_2bc = uStack_44;
    local_2b8 = 0;
    FUN_1400b22c2(&local_50,&DAT_14b9c8b3b);
    local_2b0 = local_50;
    uStack_2ac = uStack_4c;
    uStack_2a8 = uStack_48;
    uStack_2a4 = uStack_44;
    local_2a0 = 0;
    FUN_1400b22c2(&local_50,&DAT_14b9c8b25);
    local_298 = local_50;
    uStack_294 = uStack_4c;
    uStack_290 = uStack_48;
    uStack_28c = uStack_44;
    local_288 = 0;
    FUN_1400b22c2(&local_50,&DAT_14b9c8b20);
    local_280 = local_50;
    uStack_27c = uStack_4c;
    uStack_278 = uStack_48;
    uStack_274 = uStack_44;
    local_270 = 0;
    lVar1 = lVar3 + 0xb0;
    local_268 = 0;
    iVar2 = *(int *)(lVar3 + 0xb8);
    *(uint *)(lVar3 + 0xb8) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xbc) < iVar2 + 1U) {
      FUN_148ebb1b2(lVar1,iVar2);
    }
    FUN_148c8346c((longlong)iVar2 * 0xb0 + *(longlong *)(lVar3 + 0xb0),&local_100);
    iVar2 = *(int *)(lVar3 + 0xb8);
    *(uint *)(lVar3 + 0xb8) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xbc) < iVar2 + 1U) {
      FUN_148ebb1b2(lVar1,iVar2);
    }
    FUN_148c8346c((longlong)iVar2 * 0xb0 + *(longlong *)(lVar3 + 0xb0),&local_1b0);
    iVar2 = *(int *)(lVar3 + 0xb8);
    *(uint *)(lVar3 + 0xb8) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xbc) < iVar2 + 1U) {
      FUN_148ebb1b2(lVar1,iVar2);
    }
    FUN_148c8346c((longlong)iVar2 * 0xb0 + *(longlong *)(lVar3 + 0xb0),&local_260);
    iVar2 = *(int *)(lVar3 + 0xb8);
    *(uint *)(lVar3 + 0xb8) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xbc) < iVar2 + 1U) {
      FUN_148ebb1b2(lVar1,iVar2);
    }
    FUN_148c8346c((longlong)iVar2 * 0xb0 + *(longlong *)(lVar3 + 0xb0),&local_310);
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
    FUN_148c82eec(&local_310);
    FUN_148c82eec(&local_260);
    FUN_148c82eec(&local_1b0);
    FUN_148c82eec(&local_100);
  }
  if ((local_40 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ead9fe FUN_148ead9fe body=79 status=ok
// SIG undefined FUN_148ead9fe(void)

void FUN_148ead9fe(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccd70;
  puVar1[2] = FUN_148eada4e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SelectMayhemClicked",puVar1);
  return;
}



// FUNCTION 148eada4e FUN_148eada4e body=238 status=ok
// SIG undefined FUN_148eada4e(void)

void FUN_148eada4e(longlong param_1,int param_2)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  iVar3 = *(int *)(lVar1 + 0xb8);
  if (0 < iVar3) {
    iVar6 = 0;
    lVar7 = (longlong)param_2 * 0xb0;
    do {
      lVar4 = *(longlong *)(lVar1 + 0xb0);
      iVar5 = *(int *)(lVar4 + 0xac + lVar7);
      if (*(char *)(lVar4 + 0xa8 + lVar7) == '\0') {
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_148eada89;
        }
      }
      else {
LAB_148eada89:
        *(undefined1 *)(lVar4 + lVar7 + 0xa8) = 0;
        *(int *)(lVar4 + lVar7 + 0xac) = iVar5 + 1;
        iVar3 = *(int *)(lVar1 + 0xb8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  lVar7 = *(longlong *)(lVar1 + 0xb0);
  lVar4 = (longlong)param_2 * 0xb0;
  iVar3 = *(int *)(lVar7 + 0xac + lVar4);
  if (*(char *)(lVar7 + 0xa8 + lVar4) == '\0') {
    iVar3 = iVar3 + 1;
LAB_148eadae8:
    *(undefined1 *)(lVar4 + lVar7 + 0xa8) = 1;
    *(int *)(lVar4 + lVar7 + 0xac) = iVar3;
  }
  else if (iVar3 == 0) {
    iVar3 = 1;
    goto LAB_148eadae8;
  }
  if (*(int *)(lVar1 + 0xc0) == param_2) {
    if (*(int *)(lVar1 + 0xc4) != 0) goto LAB_148eadb20;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0xc4) + 1;
  }
  *(int *)(lVar1 + 0xc0) = param_2;
  *(int *)(lVar1 + 0xc4) = iVar3;
LAB_148eadb20:
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148eadc00 FUN_148eadc00 body=291 status=ok
// SIG undefined FUN_148eadc00(void)

void FUN_148eadc00(longlong param_1)

{
  longlong lVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined2 *puVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    puVar3 = DAT_14cbdfa78;
    if (DAT_14cbdfa80 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,puVar3,&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    FUN_1412a486e(lVar1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eadd40 FUN_148eadd40 body=129 status=ok
// SIG undefined FUN_148eadd40(void)

void FUN_148eadd40(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[0x51] != 0) && (*(char *)(param_1[0x51] + 0x1b8) == '\0')) {
    FUN_1400b22c2(local_28,"MENU_OPTIONS");
    (**(code **)(*param_1 + 0x100))(param_1,&DAT_14cbdd950,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaddc2 FUN_148eaddc2 body=77 status=ok
// SIG undefined FUN_148eaddc2(void)

undefined8 * FUN_148eaddc2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9cb8d0;
  _Dst[0x56] = 0;
  return _Dst;
}


