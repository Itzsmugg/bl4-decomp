// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a7f16e FUN_146a7f16e body=156 status=ok
// SIG undefined FUN_146a7f16e(void)

void FUN_146a7f16e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f12b90;
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
                    /* WARNING: Could not recover jumptable at 0x000146a7f1fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a7f20a FUN_146a7f20a body=105 status=ok
// SIG undefined FUN_146a7f20a(void)

undefined8 FUN_146a7f20a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a7f25e:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a7f25e;
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



// FUNCTION 146a7f274 FUN_146a7f274 body=162 status=ok
// SIG undefined FUN_146a7f274(void)

ulonglong FUN_146a7f274(longlong param_1)

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
LAB_146a7f2f4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a7f2f4;
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



// FUNCTION 146a7f317 FUN_146a7f317 body=56 status=ok
// SIG undefined FUN_146a7f317(void)

void FUN_146a7f317(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146a7f350 FUN_146a7f350 body=91 status=ok
// SIG undefined FUN_146a7f350(void)

void FUN_146a7f350(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  FUN_146a7f432();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    FUN_140a55872(param_1 + 0x28,param_1 + 0x20,param_3 + 0x18);
  }
  puVar1 = (undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_3 + 0x44) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = *puVar1;
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  return;
}



// FUNCTION 146a7f3ac FUN_146a7f3ac body=132 status=ok
// SIG undefined FUN_146a7f3ac(void)

void FUN_146a7f3ac(longlong param_1,int param_2)

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



// FUNCTION 146a7f432 FUN_146a7f432 body=150 status=ok
// SIG undefined FUN_146a7f432(void)

void FUN_146a7f432(longlong param_1,longlong param_2,longlong param_3)

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



// FUNCTION 146a7f4c8 FUN_146a7f4c8 body=38 status=ok
// SIG undefined FUN_146a7f4c8(void)

undefined8 FUN_146a7f4c8(undefined8 param_1,int param_2)

{
  FUN_146a7f576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a7f500 FUN_146a7f500 body=80 status=ok
// SIG undefined FUN_146a7f500(void)

int FUN_146a7f500(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x18))();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))
                        (*(longlong **)(param_1 + -0x18),iVar3);
      if (lVar2 == param_1 + -0x20) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return -1;
}



// FUNCTION 146a7f550 FUN_146a7f550 body=38 status=ok
// SIG undefined FUN_146a7f550(void)

undefined8 FUN_146a7f550(undefined8 param_1,int param_2)

{
  FUN_146a7f576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a7f576 FUN_146a7f576 body=69 status=ok
// SIG undefined FUN_146a7f576(void)

void FUN_146a7f576(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f13448;
  param_1[4] = &PTR_LAB_149f13450;
  if ((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 != 0)) {
    FUN_140c4c666(lVar1,param_1 + 4);
  }
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 146a7f5bc FUN_146a7f5bc body=313 status=ok
// SIG undefined FUN_146a7f5bc(void)

longlong * FUN_146a7f5bc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a7f6b8:
    *puVar5 = &PTR_LAB_149efe120;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12c00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a7f6b8;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149efe120;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12c00;
    puVar5[3] = uVar10;
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



// FUNCTION 146a7f6f6 FUN_146a7f6f6 body=64 status=ok
// SIG undefined FUN_146a7f6f6(void)

undefined8 * FUN_146a7f6f6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12c00;
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



// FUNCTION 146a7f73a FUN_146a7f73a body=81 status=ok
// SIG undefined FUN_146a7f73a(void)

undefined8 FUN_146a7f73a(longlong param_1)

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



// FUNCTION 146a7f792 FUN_146a7f792 body=89 status=ok
// SIG undefined FUN_146a7f792(void)

bool FUN_146a7f792(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a7f7dd;
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
LAB_146a7f7dd:
  return lVar6 == param_2;
}



// FUNCTION 146a7f808 FUN_146a7f808 body=118 status=ok
// SIG undefined FUN_146a7f808(void)

void FUN_146a7f808(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efe120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12c00;
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



// FUNCTION 146a7f87e FUN_146a7f87e body=118 status=ok
// SIG undefined FUN_146a7f87e(void)

void FUN_146a7f87e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efe120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12c00;
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



// FUNCTION 146a7f8f4 FUN_146a7f8f4 body=156 status=ok
// SIG undefined FUN_146a7f8f4(void)

void FUN_146a7f8f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149efe120;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12c00;
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
                    /* WARNING: Could not recover jumptable at 0x000146a7f980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a7f990 FUN_146a7f990 body=230 status=ok
// SIG undefined FUN_146a7f990(void)

void FUN_146a7f990(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a7f9d9;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_146a7f9d9:
  iVar6 = *(int *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar8 + iVar6,&local_30);
  if (!bVar4) {
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
  plVar7 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a7fa78 FUN_146a7fa78 body=253 status=ok
// SIG undefined FUN_146a7fa78(void)

ulonglong FUN_146a7fa78(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146a7fb2d;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_1 + 0x28);
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,&local_30);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_146a7fb2f;
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
LAB_146a7fb2d:
  uVar8 = 0;
LAB_146a7fb2f:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a7fb76 FUN_146a7fb76 body=140 status=ok
// SIG undefined FUN_146a7fb76(void)

void FUN_146a7fb76(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c98ef68;
  if (param_1 <= (int)DAT_14c98ef68) {
    if (DAT_14c98ef6c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c98ef68) {
        uVar2 = DAT_14c98ef68;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c98ef68 + ((ulonglong)((longlong)(int)DAT_14c98ef68 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    DAT_14c98ef6c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c98ef60,param_1,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a7fc04 FUN_146a7fc04 body=369 status=ok
// SIG undefined FUN_146a7fc04(void)

longlong *
FUN_146a7fc04(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  plVar4 = (longlong *)FUN_14001cc68(0x388,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f135d0;
  plVar1 = plVar4 + 2;
  FUN_146a92c10(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146a7feec(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a7fd09;
    param_1[1] = 0;
LAB_146a7fccc:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146a7fd09;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a7fd09;
      goto LAB_146a7fccc;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a7fd09;
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
LAB_146a7fd09:
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
  local_58 = 0x378;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a7fd76 FUN_146a7fd76 body=9 status=ok
// SIG undefined FUN_146a7fd76(void)

void FUN_146a7fd76(longlong param_1)

{
  FUN_146a7fd9e(param_1 + 0x10);
  return;
}



// FUNCTION 146a7fd80 FUN_146a7fd80 body=29 status=ok
// SIG undefined FUN_146a7fd80(void)

undefined8 FUN_146a7fd80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a7fd9e FUN_146a7fd9e body=296 status=ok
// SIG undefined FUN_146a7fd9e(void)

void FUN_146a7fd9e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f135f0;
  FUN_1449db362(param_1 + 100);
  FUN_1449db362(param_1 + 0x62);
  plVar3 = (longlong *)param_1[0x61];
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
  plVar3 = (longlong *)param_1[0x5e];
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
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x5a];
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
  plVar3 = (longlong *)param_1[0x58];
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
  FUN_1449db362(param_1 + 0x55);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a7fec6 FUN_146a7fec6 body=38 status=ok
// SIG undefined FUN_146a7fec6(void)

undefined8 FUN_146a7fec6(undefined8 param_1,int param_2)

{
  FUN_146a7fd9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a7feec FUN_146a7feec body=167 status=ok
// SIG undefined FUN_146a7feec(void)

void FUN_146a7feec(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a7ff67;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a7ff67;
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
LAB_146a7ff67:
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
                    /* WARNING: Could not recover jumptable at 0x000146a7ff87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a7ff94 FUN_146a7ff94 body=313 status=ok
// SIG undefined FUN_146a7ff94(void)

longlong * FUN_146a7ff94(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a80090:
    *puVar5 = &PTR_LAB_149f056a0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12c70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a80090;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12c70;
    puVar5[3] = uVar10;
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



// FUNCTION 146a800ce FUN_146a800ce body=64 status=ok
// SIG undefined FUN_146a800ce(void)

undefined8 * FUN_146a800ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12c70;
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



// FUNCTION 146a80112 FUN_146a80112 body=81 status=ok
// SIG undefined FUN_146a80112(void)

undefined8 FUN_146a80112(longlong param_1)

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



// FUNCTION 146a8016a FUN_146a8016a body=89 status=ok
// SIG undefined FUN_146a8016a(void)

bool FUN_146a8016a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a801b5;
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
LAB_146a801b5:
  return lVar6 == param_2;
}



// FUNCTION 146a801e0 FUN_146a801e0 body=118 status=ok
// SIG undefined FUN_146a801e0(void)

void FUN_146a801e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12c70;
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



// FUNCTION 146a80256 FUN_146a80256 body=118 status=ok
// SIG undefined FUN_146a80256(void)

void FUN_146a80256(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12c70;
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



// FUNCTION 146a802cc FUN_146a802cc body=156 status=ok
// SIG undefined FUN_146a802cc(void)

void FUN_146a802cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12c70;
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
                    /* WARNING: Could not recover jumptable at 0x000146a80358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a80368 FUN_146a80368 body=102 status=ok
// SIG undefined FUN_146a80368(void)

undefined8 FUN_146a80368(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
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
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a803ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 146a803ce FUN_146a803ce body=100 status=ok
// SIG undefined FUN_146a803ce(void)

ulonglong FUN_146a803ce(longlong param_1)

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
LAB_146a80427:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a80427;
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



// FUNCTION 146a80432 FUN_146a80432 body=313 status=ok
// SIG undefined FUN_146a80432(void)

longlong * FUN_146a80432(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a8052e:
    *puVar5 = &PTR_LAB_149f05990;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12ce0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a8052e;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12ce0;
    puVar5[3] = uVar10;
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



// FUNCTION 146a8056c FUN_146a8056c body=64 status=ok
// SIG undefined FUN_146a8056c(void)

undefined8 * FUN_146a8056c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12ce0;
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



// FUNCTION 146a805b0 FUN_146a805b0 body=81 status=ok
// SIG undefined FUN_146a805b0(void)

undefined8 FUN_146a805b0(longlong param_1)

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



// FUNCTION 146a80608 FUN_146a80608 body=89 status=ok
// SIG undefined FUN_146a80608(void)

bool FUN_146a80608(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a80653;
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
LAB_146a80653:
  return lVar6 == param_2;
}



// FUNCTION 146a8067e FUN_146a8067e body=118 status=ok
// SIG undefined FUN_146a8067e(void)

void FUN_146a8067e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12ce0;
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



// FUNCTION 146a806f4 FUN_146a806f4 body=118 status=ok
// SIG undefined FUN_146a806f4(void)

void FUN_146a806f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12ce0;
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



// FUNCTION 146a8076a FUN_146a8076a body=156 status=ok
// SIG undefined FUN_146a8076a(void)

void FUN_146a8076a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12ce0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a807f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a80806 FUN_146a80806 body=105 status=ok
// SIG undefined FUN_146a80806(void)

undefined8 FUN_146a80806(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a8085a:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a8085a;
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



// FUNCTION 146a80870 FUN_146a80870 body=143 status=ok
// SIG undefined FUN_146a80870(void)

ulonglong FUN_146a80870(longlong param_1)

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
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a808de:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a808de;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a80900 FUN_146a80900 body=313 status=ok
// SIG undefined FUN_146a80900(void)

longlong * FUN_146a80900(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a809fc:
    *puVar5 = &PTR_LAB_149f05530;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12d50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a809fc;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05530;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12d50;
    puVar5[3] = uVar10;
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



// FUNCTION 146a80a3a FUN_146a80a3a body=64 status=ok
// SIG undefined FUN_146a80a3a(void)

undefined8 * FUN_146a80a3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12d50;
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



// FUNCTION 146a80a7e FUN_146a80a7e body=81 status=ok
// SIG undefined FUN_146a80a7e(void)

undefined8 FUN_146a80a7e(longlong param_1)

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



// FUNCTION 146a80ad6 FUN_146a80ad6 body=89 status=ok
// SIG undefined FUN_146a80ad6(void)

bool FUN_146a80ad6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a80b21;
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
LAB_146a80b21:
  return lVar6 == param_2;
}



// FUNCTION 146a80b4c FUN_146a80b4c body=118 status=ok
// SIG undefined FUN_146a80b4c(void)

void FUN_146a80b4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05530;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12d50;
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



// FUNCTION 146a80bc2 FUN_146a80bc2 body=118 status=ok
// SIG undefined FUN_146a80bc2(void)

void FUN_146a80bc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05530;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12d50;
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



// FUNCTION 146a80c38 FUN_146a80c38 body=156 status=ok
// SIG undefined FUN_146a80c38(void)

void FUN_146a80c38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05530;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12d50;
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
                    /* WARNING: Could not recover jumptable at 0x000146a80cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a80cd4 FUN_146a80cd4 body=105 status=ok
// SIG undefined FUN_146a80cd4(void)

undefined8 FUN_146a80cd4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a80d28:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a80d28;
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



// FUNCTION 146a80d3e FUN_146a80d3e body=143 status=ok
// SIG undefined FUN_146a80d3e(void)

ulonglong FUN_146a80d3e(longlong param_1)

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
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a80dac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a80dac;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_28);
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



// FUNCTION 146a80dce FUN_146a80dce body=369 status=ok
// SIG undefined FUN_146a80dce(void)

longlong *
FUN_146a80dce(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  plVar4 = (longlong *)FUN_14001cc68(0x3e0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f12dc0;
  plVar1 = plVar4 + 2;
  FUN_146ae6f26(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146a80f68(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a80ed3;
    param_1[1] = 0;
LAB_146a80e96:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146a80ed3;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a80ed3;
      goto LAB_146a80e96;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a80ed3;
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
LAB_146a80ed3:
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
  local_58 = 0x3d0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a80f40 FUN_146a80f40 body=9 status=ok
// SIG undefined FUN_146a80f40(void)

void FUN_146a80f40(longlong param_1)

{
  FUN_146ae7086(param_1 + 0x10);
  return;
}



// FUNCTION 146a80f4a FUN_146a80f4a body=29 status=ok
// SIG undefined FUN_146a80f4a(void)

undefined8 FUN_146a80f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a80f68 FUN_146a80f68 body=167 status=ok
// SIG undefined FUN_146a80f68(void)

void FUN_146a80f68(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a80fe3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a80fe3;
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
LAB_146a80fe3:
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
                    /* WARNING: Could not recover jumptable at 0x000146a81003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a81010 FUN_146a81010 body=313 status=ok
// SIG undefined FUN_146a81010(void)

longlong * FUN_146a81010(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a8110c:
    *puVar5 = &PTR_LAB_149f126a0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12de0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a8110c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f126a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12de0;
    puVar5[3] = uVar10;
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



// FUNCTION 146a8114a FUN_146a8114a body=64 status=ok
// SIG undefined FUN_146a8114a(void)

undefined8 * FUN_146a8114a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12de0;
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



// FUNCTION 146a8118e FUN_146a8118e body=81 status=ok
// SIG undefined FUN_146a8118e(void)

undefined8 FUN_146a8118e(longlong param_1)

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



// FUNCTION 146a811e6 FUN_146a811e6 body=89 status=ok
// SIG undefined FUN_146a811e6(void)

bool FUN_146a811e6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a81231;
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
LAB_146a81231:
  return lVar6 == param_2;
}



// FUNCTION 146a8125c FUN_146a8125c body=118 status=ok
// SIG undefined FUN_146a8125c(void)

void FUN_146a8125c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f126a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12de0;
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



// FUNCTION 146a812d2 FUN_146a812d2 body=118 status=ok
// SIG undefined FUN_146a812d2(void)

void FUN_146a812d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f126a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12de0;
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



// FUNCTION 146a81348 FUN_146a81348 body=156 status=ok
// SIG undefined FUN_146a81348(void)

void FUN_146a81348(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f126a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12de0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a813d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a813e4 FUN_146a813e4 body=105 status=ok
// SIG undefined FUN_146a813e4(void)

undefined8 FUN_146a813e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a81438:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a81438;
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



// FUNCTION 146a8144e FUN_146a8144e body=198 status=ok
// SIG undefined FUN_146a8144e(void)

ulonglong FUN_146a8144e(longlong param_1)

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
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  longlong *local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a814ec:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a814ec;
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
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_80),
       local_48 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
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
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a81516 FUN_146a81516 body=313 status=ok
// SIG undefined FUN_146a81516(void)

longlong * FUN_146a81516(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a81612:
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12e50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a81612;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12e50;
    puVar5[3] = uVar10;
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



// FUNCTION 146a81650 FUN_146a81650 body=64 status=ok
// SIG undefined FUN_146a81650(void)

undefined8 * FUN_146a81650(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12e50;
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



// FUNCTION 146a81694 FUN_146a81694 body=81 status=ok
// SIG undefined FUN_146a81694(void)

undefined8 FUN_146a81694(longlong param_1)

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



// FUNCTION 146a816ec FUN_146a816ec body=89 status=ok
// SIG undefined FUN_146a816ec(void)

bool FUN_146a816ec(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a81737;
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
LAB_146a81737:
  return lVar6 == param_2;
}



// FUNCTION 146a81762 FUN_146a81762 body=118 status=ok
// SIG undefined FUN_146a81762(void)

void FUN_146a81762(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f12e50;
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



// FUNCTION 146a817d8 FUN_146a817d8 body=118 status=ok
// SIG undefined FUN_146a817d8(void)

void FUN_146a817d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f12e50;
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



// FUNCTION 146a8184e FUN_146a8184e body=156 status=ok
// SIG undefined FUN_146a8184e(void)

void FUN_146a8184e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f12e50;
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
                    /* WARNING: Could not recover jumptable at 0x000146a818da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a818ea FUN_146a818ea body=104 status=ok
// SIG undefined FUN_146a818ea(void)

void FUN_146a818ea(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a81937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a81948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a81952 FUN_146a81952 body=101 status=ok
// SIG undefined FUN_146a81952(void)

ulonglong FUN_146a81952(longlong param_1)

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
LAB_146a819ac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a819ac;
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



// FUNCTION 146a819b8 FUN_146a819b8 body=313 status=ok
// SIG undefined FUN_146a819b8(void)

longlong * FUN_146a819b8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a81ab4:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12ec0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a81ab4;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12ec0;
    puVar5[3] = uVar10;
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



// FUNCTION 146a81af2 FUN_146a81af2 body=64 status=ok
// SIG undefined FUN_146a81af2(void)

undefined8 * FUN_146a81af2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12ec0;
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



// FUNCTION 146a81b36 FUN_146a81b36 body=81 status=ok
// SIG undefined FUN_146a81b36(void)

undefined8 FUN_146a81b36(longlong param_1)

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



// FUNCTION 146a81b8e FUN_146a81b8e body=89 status=ok
// SIG undefined FUN_146a81b8e(void)

bool FUN_146a81b8e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a81bd9;
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
LAB_146a81bd9:
  return lVar6 == param_2;
}



// FUNCTION 146a81c04 FUN_146a81c04 body=118 status=ok
// SIG undefined FUN_146a81c04(void)

void FUN_146a81c04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12ec0;
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



// FUNCTION 146a81c7a FUN_146a81c7a body=118 status=ok
// SIG undefined FUN_146a81c7a(void)

void FUN_146a81c7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12ec0;
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



// FUNCTION 146a81cf0 FUN_146a81cf0 body=156 status=ok
// SIG undefined FUN_146a81cf0(void)

void FUN_146a81cf0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12ec0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a81d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a81d8c FUN_146a81d8c body=104 status=ok
// SIG undefined FUN_146a81d8c(void)

void FUN_146a81d8c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a81dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a81dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a81df4 FUN_146a81df4 body=101 status=ok
// SIG undefined FUN_146a81df4(void)

ulonglong FUN_146a81df4(longlong param_1)

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
LAB_146a81e4e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a81e4e;
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



// FUNCTION 146a81e5a FUN_146a81e5a body=130 status=ok
// SIG undefined FUN_146a81e5a(void)

void FUN_146a81e5a(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a81ede FUN_146a81ede body=313 status=ok
// SIG undefined FUN_146a81ede(void)

longlong * FUN_146a81ede(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a81fda:
    *puVar5 = &PTR_LAB_149f126a0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12f30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a81fda;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f126a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12f30;
    puVar5[3] = uVar10;
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



// FUNCTION 146a82018 FUN_146a82018 body=64 status=ok
// SIG undefined FUN_146a82018(void)

undefined8 * FUN_146a82018(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12f30;
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



// FUNCTION 146a8205c FUN_146a8205c body=81 status=ok
// SIG undefined FUN_146a8205c(void)

undefined8 FUN_146a8205c(longlong param_1)

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



// FUNCTION 146a820b4 FUN_146a820b4 body=89 status=ok
// SIG undefined FUN_146a820b4(void)

bool FUN_146a820b4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a820ff;
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
LAB_146a820ff:
  return lVar6 == param_2;
}



// FUNCTION 146a8212a FUN_146a8212a body=118 status=ok
// SIG undefined FUN_146a8212a(void)

void FUN_146a8212a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f126a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12f30;
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



// FUNCTION 146a821a0 FUN_146a821a0 body=118 status=ok
// SIG undefined FUN_146a821a0(void)

void FUN_146a821a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f126a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12f30;
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



// FUNCTION 146a82216 FUN_146a82216 body=156 status=ok
// SIG undefined FUN_146a82216(void)

void FUN_146a82216(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f126a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12f30;
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
                    /* WARNING: Could not recover jumptable at 0x000146a822a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a822b2 FUN_146a822b2 body=105 status=ok
// SIG undefined FUN_146a822b2(void)

undefined8 FUN_146a822b2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a82306:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a82306;
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



// FUNCTION 146a8231c FUN_146a8231c body=198 status=ok
// SIG undefined FUN_146a8231c(void)

ulonglong FUN_146a8231c(longlong param_1)

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
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  longlong *local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a823ba:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a823ba;
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
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_80),
       local_48 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
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
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146a823e4 FUN_146a823e4 body=313 status=ok
// SIG undefined FUN_146a823e4(void)

longlong * FUN_146a823e4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a824e0:
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f12fa0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a824e0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f12fa0;
    puVar5[3] = uVar10;
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



// FUNCTION 146a8251e FUN_146a8251e body=64 status=ok
// SIG undefined FUN_146a8251e(void)

undefined8 * FUN_146a8251e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f12fa0;
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



// FUNCTION 146a82562 FUN_146a82562 body=81 status=ok
// SIG undefined FUN_146a82562(void)

undefined8 FUN_146a82562(longlong param_1)

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



// FUNCTION 146a825ba FUN_146a825ba body=89 status=ok
// SIG undefined FUN_146a825ba(void)

bool FUN_146a825ba(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a82605;
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
LAB_146a82605:
  return lVar6 == param_2;
}



// FUNCTION 146a82630 FUN_146a82630 body=118 status=ok
// SIG undefined FUN_146a82630(void)

void FUN_146a82630(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f12fa0;
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



// FUNCTION 146a826a6 FUN_146a826a6 body=118 status=ok
// SIG undefined FUN_146a826a6(void)

void FUN_146a826a6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f12fa0;
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



// FUNCTION 146a8271c FUN_146a8271c body=156 status=ok
// SIG undefined FUN_146a8271c(void)

void FUN_146a8271c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f12fa0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a827a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a827b8 FUN_146a827b8 body=104 status=ok
// SIG undefined FUN_146a827b8(void)

void FUN_146a827b8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a82805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a82816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a82820 FUN_146a82820 body=101 status=ok
// SIG undefined FUN_146a82820(void)

ulonglong FUN_146a82820(longlong param_1)

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
LAB_146a8287a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a8287a;
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



// FUNCTION 146a82886 FUN_146a82886 body=313 status=ok
// SIG undefined FUN_146a82886(void)

longlong * FUN_146a82886(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a82982:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f13010;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a82982;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f13010;
    puVar5[3] = uVar10;
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



// FUNCTION 146a829c0 FUN_146a829c0 body=64 status=ok
// SIG undefined FUN_146a829c0(void)

undefined8 * FUN_146a829c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f13010;
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



// FUNCTION 146a82a04 FUN_146a82a04 body=81 status=ok
// SIG undefined FUN_146a82a04(void)

undefined8 FUN_146a82a04(longlong param_1)

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



// FUNCTION 146a82a5c FUN_146a82a5c body=89 status=ok
// SIG undefined FUN_146a82a5c(void)

bool FUN_146a82a5c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a82aa7;
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
LAB_146a82aa7:
  return lVar6 == param_2;
}



// FUNCTION 146a82ad2 FUN_146a82ad2 body=118 status=ok
// SIG undefined FUN_146a82ad2(void)

void FUN_146a82ad2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f13010;
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



// FUNCTION 146a82b48 FUN_146a82b48 body=118 status=ok
// SIG undefined FUN_146a82b48(void)

void FUN_146a82b48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f13010;
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



// FUNCTION 146a82bbe FUN_146a82bbe body=156 status=ok
// SIG undefined FUN_146a82bbe(void)

void FUN_146a82bbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f13010;
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
                    /* WARNING: Could not recover jumptable at 0x000146a82c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a82c5a FUN_146a82c5a body=104 status=ok
// SIG undefined FUN_146a82c5a(void)

void FUN_146a82c5a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146a82ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146a82cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146a82cc2 FUN_146a82cc2 body=101 status=ok
// SIG undefined FUN_146a82cc2(void)

ulonglong FUN_146a82cc2(longlong param_1)

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
LAB_146a82d1c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a82d1c;
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



// FUNCTION 146a82d28 FUN_146a82d28 body=369 status=ok
// SIG undefined FUN_146a82d28(void)

longlong *
FUN_146a82d28(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  plVar4 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f13080;
  plVar1 = plVar4 + 2;
  FUN_146a5d788(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146a82ee6(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146a82e2d;
    param_1[1] = 0;
LAB_146a82df0:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146a82e2d;
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
      if (plVar4 == (longlong *)0x0) goto LAB_146a82e2d;
      goto LAB_146a82df0;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a82e2d;
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
LAB_146a82e2d:
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
  local_58 = 0x290;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a82e9a FUN_146a82e9a body=45 status=ok
// SIG undefined FUN_146a82e9a(void)

void FUN_146a82e9a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f0ff40;
  FUN_1402bc42a(param_1 + 0x1f0);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 146a82ec8 FUN_146a82ec8 body=29 status=ok
// SIG undefined FUN_146a82ec8(void)

undefined8 FUN_146a82ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a82ee6 FUN_146a82ee6 body=167 status=ok
// SIG undefined FUN_146a82ee6(void)

void FUN_146a82ee6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146a82f61;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146a82f61;
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
LAB_146a82f61:
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
                    /* WARNING: Could not recover jumptable at 0x000146a82f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146a82f8e FUN_146a82f8e body=313 status=ok
// SIG undefined FUN_146a82f8e(void)

longlong * FUN_146a82f8e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a8308a:
    *puVar5 = &PTR_LAB_149f055c0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f130a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a8308a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f055c0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f130a0;
    puVar5[3] = uVar10;
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



// FUNCTION 146a830c8 FUN_146a830c8 body=64 status=ok
// SIG undefined FUN_146a830c8(void)

undefined8 * FUN_146a830c8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f130a0;
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



// FUNCTION 146a8310c FUN_146a8310c body=81 status=ok
// SIG undefined FUN_146a8310c(void)

undefined8 FUN_146a8310c(longlong param_1)

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



// FUNCTION 146a83164 FUN_146a83164 body=89 status=ok
// SIG undefined FUN_146a83164(void)

bool FUN_146a83164(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a831af;
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
LAB_146a831af:
  return lVar6 == param_2;
}



// FUNCTION 146a831da FUN_146a831da body=118 status=ok
// SIG undefined FUN_146a831da(void)

void FUN_146a831da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f130a0;
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



// FUNCTION 146a83250 FUN_146a83250 body=118 status=ok
// SIG undefined FUN_146a83250(void)

void FUN_146a83250(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f130a0;
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



// FUNCTION 146a832c6 FUN_146a832c6 body=156 status=ok
// SIG undefined FUN_146a832c6(void)

void FUN_146a832c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f130a0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a83352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a83362 FUN_146a83362 body=105 status=ok
// SIG undefined FUN_146a83362(void)

undefined8 FUN_146a83362(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a833b6:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a833b6;
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



// FUNCTION 146a833cc FUN_146a833cc body=143 status=ok
// SIG undefined FUN_146a833cc(void)

ulonglong FUN_146a833cc(longlong param_1)

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
LAB_146a8343a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a8343a;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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



// FUNCTION 146a8345c FUN_146a8345c body=313 status=ok
// SIG undefined FUN_146a8345c(void)

longlong * FUN_146a8345c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a83558:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f13110;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a83558;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f13110;
    puVar5[3] = uVar10;
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



// FUNCTION 146a83596 FUN_146a83596 body=64 status=ok
// SIG undefined FUN_146a83596(void)

undefined8 * FUN_146a83596(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f13110;
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



// FUNCTION 146a835da FUN_146a835da body=81 status=ok
// SIG undefined FUN_146a835da(void)

undefined8 FUN_146a835da(longlong param_1)

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



// FUNCTION 146a83632 FUN_146a83632 body=89 status=ok
// SIG undefined FUN_146a83632(void)

bool FUN_146a83632(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a8367d;
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
LAB_146a8367d:
  return lVar6 == param_2;
}



// FUNCTION 146a836a8 FUN_146a836a8 body=118 status=ok
// SIG undefined FUN_146a836a8(void)

void FUN_146a836a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f13110;
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



// FUNCTION 146a8371e FUN_146a8371e body=118 status=ok
// SIG undefined FUN_146a8371e(void)

void FUN_146a8371e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f13110;
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



// FUNCTION 146a83794 FUN_146a83794 body=156 status=ok
// SIG undefined FUN_146a83794(void)

void FUN_146a83794(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f13110;
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
                    /* WARNING: Could not recover jumptable at 0x000146a83820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a83830 FUN_146a83830 body=105 status=ok
// SIG undefined FUN_146a83830(void)

undefined8 FUN_146a83830(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a83884:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a83884;
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



// FUNCTION 146a8389a FUN_146a8389a body=162 status=ok
// SIG undefined FUN_146a8389a(void)

ulonglong FUN_146a8389a(longlong param_1)

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
LAB_146a8391a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a8391a;
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



// FUNCTION 146a8393e FUN_146a8393e body=327 status=ok
// SIG undefined FUN_146a8393e(void)

longlong * FUN_146a8393e(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_146a839c0:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_146a839c0;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_149f131f0;
  *(undefined4 *)(puVar5 + 1) = *param_4;
  uVar9 = FUN_144a3f946();
  puVar5[2] = uVar9;
  *puVar5 = &PTR_FUN_149f13180;
  puVar5[3] = uVar11;
  puVar5[4] = plVar10;
  if (bVar6) {
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



// FUNCTION 146a83a86 FUN_146a83a86 body=64 status=ok
// SIG undefined FUN_146a83a86(void)

undefined8 * FUN_146a83a86(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f13180;
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



// FUNCTION 146a83aca FUN_146a83aca body=81 status=ok
// SIG undefined FUN_146a83aca(void)

undefined8 FUN_146a83aca(longlong param_1)

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



// FUNCTION 146a83b22 FUN_146a83b22 body=89 status=ok
// SIG undefined FUN_146a83b22(void)

bool FUN_146a83b22(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a83b6d;
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
LAB_146a83b6d:
  return lVar6 == param_2;
}



// FUNCTION 146a83ba4 FUN_146a83ba4 body=118 status=ok
// SIG undefined FUN_146a83ba4(void)

void FUN_146a83ba4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f131f0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f13180;
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



// FUNCTION 146a83c1a FUN_146a83c1a body=118 status=ok
// SIG undefined FUN_146a83c1a(void)

void FUN_146a83c1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f131f0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f13180;
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



// FUNCTION 146a83c90 FUN_146a83c90 body=156 status=ok
// SIG undefined FUN_146a83c90(void)

void FUN_146a83c90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f131f0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_149f13180;
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
                    /* WARNING: Could not recover jumptable at 0x000146a83d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a83d2c FUN_146a83d2c body=113 status=ok
// SIG undefined FUN_146a83d2c(void)

undefined8 FUN_146a83d2c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a83d84:
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a83d84;
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
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2,
               *(undefined4 *)(param_1 + 8));
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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



// FUNCTION 146a83d9e FUN_146a83d9e body=172 status=ok
// SIG undefined FUN_146a83d9e(void)

ulonglong FUN_146a83d9e(longlong param_1)

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
LAB_146a83e22:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a83e22;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),local_d8,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 146a83e4e FUN_146a83e4e body=313 status=ok
// SIG undefined FUN_146a83e4e(void)

longlong * FUN_146a83e4e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a83f4a:
    *puVar5 = &PTR_LAB_149f05630;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f13260;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a83f4a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05630;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f13260;
    puVar5[3] = uVar10;
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



// FUNCTION 146a83f88 FUN_146a83f88 body=64 status=ok
// SIG undefined FUN_146a83f88(void)

undefined8 * FUN_146a83f88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f13260;
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



// FUNCTION 146a83fcc FUN_146a83fcc body=81 status=ok
// SIG undefined FUN_146a83fcc(void)

undefined8 FUN_146a83fcc(longlong param_1)

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



// FUNCTION 146a84024 FUN_146a84024 body=89 status=ok
// SIG undefined FUN_146a84024(void)

bool FUN_146a84024(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146a8406f;
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
LAB_146a8406f:
  return lVar6 == param_2;
}



// FUNCTION 146a8409a FUN_146a8409a body=118 status=ok
// SIG undefined FUN_146a8409a(void)

void FUN_146a8409a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f13260;
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



// FUNCTION 146a84110 FUN_146a84110 body=118 status=ok
// SIG undefined FUN_146a84110(void)

void FUN_146a84110(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f13260;
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



// FUNCTION 146a84186 FUN_146a84186 body=156 status=ok
// SIG undefined FUN_146a84186(void)

void FUN_146a84186(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f13260;
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
                    /* WARNING: Could not recover jumptable at 0x000146a84212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a84222 FUN_146a84222 body=105 status=ok
// SIG undefined FUN_146a84222(void)

undefined8 FUN_146a84222(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146a84276:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a84276;
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



// FUNCTION 146a8428c FUN_146a8428c body=168 status=ok
// SIG undefined FUN_146a8428c(void)

ulonglong FUN_146a8428c(longlong param_1)

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
LAB_146a8430c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a8430c;
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



// FUNCTION 146a84336 FUN_146a84336 body=124 status=ok
// SIG undefined FUN_146a84336(void)

undefined8 *
FUN_146a84336(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_149f13340;
  plVar3 = (longlong *)*param_4;
  param_1[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 2) = (int)param_4[1];
  uVar5 = FUN_144a3f946();
  param_1[3] = uVar5;
  *param_1 = &PTR_FUN_149f132d0;
  param_1[4] = *param_2;
  lVar4 = param_2[1];
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



// FUNCTION 146a843b2 FUN_146a843b2 body=89 status=ok
// SIG undefined FUN_146a843b2(void)

undefined8 * FUN_146a843b2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f132d0;
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
  *param_1 = &PTR_LAB_149f13340;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a84410 FUN_146a84410 body=81 status=ok
// SIG undefined FUN_146a84410(void)

undefined8 FUN_146a84410(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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



// FUNCTION 146a84468 FUN_146a84468 body=89 status=ok
// SIG undefined FUN_146a84468(void)

bool FUN_146a84468(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_146a844b3;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_146a844b3:
  return lVar6 == param_2;
}



// FUNCTION 146a844ea FUN_146a844ea body=64 status=ok
// SIG undefined FUN_146a844ea(void)

void FUN_146a844ea(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_146a847a0(*param_2,param_1);
  return;
}



// FUNCTION 146a8452a FUN_146a8452a body=64 status=ok
// SIG undefined FUN_146a8452a(void)

void FUN_146a8452a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_146a847a0(*param_2,param_1);
  return;
}



// FUNCTION 146a8456a FUN_146a8456a body=98 status=ok
// SIG undefined FUN_146a8456a(void)

void FUN_146a8456a(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_146a847a0(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a845bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a845cc FUN_146a845cc body=241 status=ok
// SIG undefined FUN_146a845cc(void)

undefined4 FUN_146a845cc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar9 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar9[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146a84629;
      }
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_146a84629:
  iVar6 = *(int *)(param_1 + 0x38);
  pcVar3 = *(code **)(param_1 + 0x30);
  local_70 = *(longlong **)(param_1 + 8);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_68 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = (*pcVar3)(lVar8 + iVar6,param_2,param_3);
  if (!bVar4) {
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
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146a846be FUN_146a846be body=222 status=ok
// SIG undefined FUN_146a846be(void)

ulonglong FUN_146a846be(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_146a8476b:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146a8476b;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x38);
      pcVar5 = *(code **)(param_1 + 0x30);
      local_70 = *(longlong **)(param_1 + 8);
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
      local_68 = *(undefined4 *)(param_1 + 0x10);
      (*pcVar5)(lVar4 + iVar7,param_2,param_3);
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
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a847a0 FUN_146a847a0 body=108 status=ok
// SIG undefined FUN_146a847a0(void)

undefined8 * FUN_146a847a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_149f13340;
  plVar1 = *(longlong **)(param_2 + 8);
  param_1[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_149f132d0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 146a8480c FUN_146a8480c body=127 status=ok
// SIG undefined FUN_146a8480c(void)

void FUN_146a8480c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f0f3f0;
  plVar3 = (longlong *)param_1[0x1f];
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
  param_1[2] = &PTR_FUN_149ed05f0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a8487f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a8488c FUN_146a8488c body=173 status=ok
// SIG undefined FUN_146a8488c(void)

void FUN_146a8488c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f0f450;
  FUN_1404578a2(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_146a50166(param_1 + 0x14);
  plVar3 = (longlong *)param_1[0x12];
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
  FUN_141720dbc(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a8492d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146a8493a FUN_146a8493a body=288 status=ok
// SIG undefined FUN_146a8493a(void)

undefined8 * FUN_146a8493a(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_149f13940;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f5) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  FUN_140a5808e((longlong)param_1 + 0x21c,param_1);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_140a5808e(param_1 + 0x44,param_1);
  *(undefined1 *)((longlong)param_1 + 0x221) = 0;
  FUN_140a5808e((longlong)param_1 + 0x221,param_1);
  *(undefined1 **)((longlong)param_1 + 0x224) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x22c) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x234) = 0;
  FUN_140a5808e((longlong)param_1 + 0x224,param_1);
  param_1[0x47] = &DAT_3f8000003f800000;
  param_1[0x48] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_140a5808e(param_1 + 0x47,param_1);
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 2;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfb;
  return param_1;
}



// FUNCTION 146a84a5a FUN_146a84a5a body=103 status=ok
// SIG undefined FUN_146a84a5a(void)

void FUN_146a84a5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f13940;
  FUN_1449db362(param_1 + 0x52);
  FUN_1449db362(param_1 + 0x50);
  FUN_1449db362(param_1 + 0x4e);
  FUN_1449db362(param_1 + 0x4c);
  FUN_1449db362(param_1 + 0x4a);
  FUN_1449db362(param_1 + 0x40);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a84ac2 FUN_146a84ac2 body=380 status=ok
// SIG undefined FUN_146a84ac2(void)

void FUN_146a84ac2(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x238);
  FUN_140a5ad86(param_1 + 0x220,param_1,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x219) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x21a) = *(undefined1 *)(param_2 + 0x1c1);
  FUN_140a5ad86(param_1 + 0x221,param_1,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1fc) = *(undefined1 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x240);
  FUN_140a52b3c(param_1 + 0x200,param_2 + 0x248);
  FUN_146a84c3e(param_1 + 0x21c,param_1,param_2 + 600);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x274);
  FUN_140a5abdc(param_1 + 0x224,param_1,param_2 + 0x1e8);
  FUN_140a5abdc(param_1 + 0x238,param_1,param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x21b) = *(undefined1 *)(param_2 + 0x278);
  FUN_14009d848(param_1 + 0x250,param_2 + 0x280);
  FUN_14009d848(param_1 + 0x260,param_2 + 0x290);
  FUN_14009d848(param_1 + 0x270,param_2 + 0x2a0);
  FUN_14009d848(param_1 + 0x280,param_2 + 0x2b0);
  FUN_140328a42(param_1 + 0x290,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x218) = 0;
  return;
}



// FUNCTION 146a84c3e FUN_146a84c3e body=176 status=ok
// SIG undefined FUN_146a84c3e(void)

undefined8 FUN_146a84c3e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      uVar2 = FUN_146aa7dde(param_1,param_2,param_3 + 2);
      return uVar2;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return 0;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_3 + 2);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *param_3 = uVar4;
    }
  }
  uVar2 = FUN_145ff9a80(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 146a84cee FUN_146a84cee body=2083 status=ok
// SIG undefined FUN_146a84cee(void)

int FUN_146a84cee(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,byte param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  byte bVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  float local_184;
  undefined8 local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  undefined8 local_164;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  byte local_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar7 = *(int *)(param_1 + 0x1e8);
  fVar15 = param_3[1];
  fVar16 = fVar15;
  if (iVar7 == 0) {
    fVar16 = *param_3;
  }
  bVar10 = *(byte *)(param_1 + 0x3a);
  if ((bVar10 == 1) && (*(char *)(param_1 + 0x221) != '\x01')) {
    lVar12 = *(longlong *)(param_1 + 0x1e0);
    if (*(char *)(param_1 + 0x3b) == '\x01') {
      lVar9 = lVar12 + 0x2d0;
    }
    else {
      lVar9 = lVar12 + 0x220;
    }
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x1e0);
    lVar9 = lVar12 + 0x380;
  }
  fVar18 = *(float *)(param_1 + 0x210);
  fVar1 = *(float *)(param_1 + 0x214);
  if ((fVar1 != fVar18) || (NAN(fVar1) || NAN(fVar18))) {
    fVar18 = (*(float *)(param_1 + 0x21c) - fVar18) / (fVar1 - fVar18);
  }
  else {
    fVar18 = 1.0;
  }
  fVar1 = *(float *)(lVar9 + 0x20);
  fVar17 = param_3[iVar7 == 0];
  local_1a8 = *(float *)(lVar9 + 0x24);
  cVar5 = *(char *)(param_1 + 0x220);
  local_f8 = *(undefined8 *)(param_3 + 0xc);
  local_128 = *(undefined8 *)param_3;
  uStack_120 = *(undefined8 *)(param_3 + 2);
  local_118 = *(undefined8 *)(param_3 + 4);
  uStack_110 = *(undefined8 *)(param_3 + 6);
  local_108 = *(undefined8 *)(param_3 + 8);
  uStack_100 = *(undefined8 *)(param_3 + 10);
  if (iVar7 == 1) {
    local_12c = fVar15 + 0.0;
    local_130 = fVar15 * 4.371139e-08;
    local_140 = -4.371139e-08;
    fStack_13c = -1.0;
    fStack_138 = 1.0;
    fStack_134 = -4.371139e-08;
    local_1c8 = &local_190;
    local_190 = DAT_14c84635c;
    local_19c = 0x3f800000;
    local_194 = 0;
    local_1b8 = param_3 + 7;
    local_180 = *(undefined8 *)(param_3 + 3);
    local_184 = param_3[2];
    local_1c0 = &local_184;
    local_1a4 = fVar15;
    local_1a0 = fVar17;
    FUN_146978c22(&local_178,&local_1a4,&local_19c);
    FUN_144b00ffc(&local_128,&local_178);
    bVar10 = *(byte *)(param_1 + 0x3a);
    lVar12 = *(longlong *)(param_1 + 0x1e0);
  }
  fVar19 = fVar1 * 0.5;
  fVar15 = *(float *)(lVar12 + 0x430);
  cVar11 = ' ';
  if (((bVar10 & 1) == 0) || (cVar11 = (param_8 ^ 1) << 5, *(char *)(param_1 + 0x221) != '\0')) {
    lVar9 = lVar12 + 0x170;
    lVar13 = 0x380;
  }
  else {
    bVar14 = *(char *)(param_1 + 0x3b) != '\0';
    lVar9 = lVar12 + 0x10;
    if (bVar14) {
      lVar9 = lVar12 + 0xc0;
    }
    lVar13 = 0x220;
    if (bVar14) {
      lVar13 = 0x2d0;
    }
  }
  fVar17 = fVar17 * 0.5;
  pfVar8 = (float *)(lVar9 + 8);
  cVar6 = *(char *)(lVar9 + 0x18);
  local_1b0 = fVar1;
  local_1ac = fVar16;
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      pfVar8 = (float *)FUN_1400c06fe(pfVar8);
    }
    else if (cVar6 == '\x03') {
      pfVar8 = param_7 + 8;
    }
    else {
      pfVar8 = param_7 + 4;
    }
  }
  fVar20 = fVar15 * -0.5 + fVar17;
  lVar12 = lVar12 + lVar13;
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  fVar3 = pfVar8[2];
  fVar4 = pfVar8[3];
  pfVar8 = (float *)(param_1 + 0x224);
  cVar6 = *(char *)(param_1 + 0x234);
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      pfVar8 = (float *)FUN_1400c06fe(pfVar8);
    }
    else if (cVar6 == '\x03') {
      pfVar8 = param_7 + 8;
    }
    else {
      pfVar8 = param_7 + 4;
    }
  }
  fStack_134 = fVar4 * pfVar8[3] * param_7[3];
  fStack_138 = fVar3 * pfVar8[2] * param_7[2];
  fStack_13c = fVar2 * pfVar8[1] * param_7[1];
  local_140 = fVar1 * *pfVar8 * *param_7;
  local_178 = CONCAT44(fVar20 * (float)uStack_120 + (float)local_118,
                       fVar19 * (float)uStack_120 + uStack_120._4_4_);
  local_164 = CONCAT44(fVar15,(fVar16 - fVar19) - fVar19);
  local_148 = fVar19 * (float)local_108 + fVar20 * (float)uStack_100 + (float)local_f8;
  local_14c = fVar19 * uStack_110._4_4_ + fVar20 * local_108._4_4_ + uStack_100._4_4_;
  local_150 = (float)local_108 * 0.0 + (float)uStack_100;
  local_154 = uStack_110._4_4_ * 0.0 + local_108._4_4_;
  local_158 = (float)uStack_100 * 0.0 + (float)local_108;
  local_15c = local_108._4_4_ * 0.0 + uStack_110._4_4_;
  local_170 = (float)uStack_120;
  local_16c = 0;
  local_144 = local_144 & 0xfc | local_f8._4_1_ * '\x02' & 2U;
  local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,cVar11);
  local_1c0 = &local_140;
  FUN_140239bd2(param_5,param_6,&local_178,lVar9);
  fVar15 = local_1ac;
  pfVar8 = (float *)(lVar12 + 8);
  cVar6 = *(char *)(lVar12 + 0x18);
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      pfVar8 = (float *)FUN_1400c06fe(pfVar8);
    }
    else if (cVar6 == '\x03') {
      pfVar8 = param_7 + 8;
    }
    else {
      pfVar8 = param_7 + 4;
    }
  }
  fVar16 = *pfVar8;
  fVar1 = pfVar8[1];
  fVar19 = pfVar8[2];
  fVar2 = pfVar8[3];
  pfVar8 = (float *)(param_1 + 0x238);
  cVar6 = *(char *)(param_1 + 0x248);
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      pfVar8 = (float *)FUN_1400c06fe(pfVar8);
    }
    else if (cVar6 == '\x03') {
      pfVar8 = param_7 + 8;
    }
    else {
      pfVar8 = param_7 + 4;
    }
  }
  fStack_134 = fVar2 * pfVar8[3] * param_7[3];
  fStack_138 = fVar19 * pfVar8[2] * param_7[2];
  fStack_13c = fVar1 * pfVar8[1] * param_7[1];
  local_140 = fVar16 * *pfVar8 * *param_7;
  if ((*(char *)(param_1 + 0x3a) == '\x01') && (*(char *)(param_1 + 0x221) != '\x01')) {
    if (*(char *)(param_1 + 0x3b) == '\x01') {
      lVar9 = *(longlong *)(param_1 + 0x1e0) + 0x2d0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x1e0) + 0x220;
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x1e0) + 0x380;
  }
  fVar17 = fVar17 - local_1a8 * 0.5;
  fVar16 = local_1b0;
  if (cVar5 == '\0') {
    fVar16 = 0.0;
  }
  if (1.0 <= fVar18) {
    fVar18 = 1.0;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar15 = fVar16 * 0.5 + (fVar15 - (local_1b0 + fVar16)) * fVar18;
  local_164 = *(undefined8 *)(lVar9 + 0x20);
  local_178 = CONCAT44(fVar17 * (float)uStack_120 + (float)local_118,
                       fVar15 * (float)uStack_120 + uStack_120._4_4_);
  local_148 = fVar15 * (float)local_108 + fVar17 * (float)uStack_100 + (float)local_f8;
  local_14c = fVar15 * uStack_110._4_4_ + fVar17 * local_108._4_4_ + uStack_100._4_4_;
  local_150 = (float)local_108 * 0.0 + (float)uStack_100;
  local_154 = uStack_110._4_4_ * 0.0 + local_108._4_4_;
  local_158 = (float)uStack_100 * 0.0 + (float)local_108;
  local_15c = local_108._4_4_ * 0.0 + uStack_110._4_4_;
  local_170 = (float)uStack_120;
  local_16c = 0;
  local_144 = local_144 & 0xfc | local_f8._4_1_ * '\x02' & 2U;
  local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,cVar11);
  local_1c0 = &local_140;
  FUN_140239bd2(param_5,param_6 + 1,&local_178,lVar12);
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6 + 1;
}



// FUNCTION 146a85512 FUN_146a85512 body=53 status=ok
// SIG undefined FUN_146a85512(void)

float FUN_146a85512(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  if ((fVar2 == fVar1) && (!NAN(fVar2) && !NAN(fVar1))) {
    return 1.0;
  }
  return (*(float *)(param_1 + 0x21c) - fVar1) / (fVar2 - fVar1);
}



// FUNCTION 146a85548 FUN_146a85548 body=226 status=ok
// SIG undefined FUN_146a85548(void)

double * FUN_146a85548(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98f0c0) {
    FUN_144b3d300(&DAT_14c98f0c0);
    if (DAT_14c98f0c0 == -1) {
      DAT_14c98f0b0 = &DAT_4030000000000000;
      DAT_14c98f0b8 = &DAT_4030000000000000;
      _Init_thread_footer(&DAT_14c98f0c0);
    }
  }
  puVar2 = DAT_14c98f0b8;
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (lVar1 == 0) {
    *param_2 = (double)DAT_14c98f0b0;
    param_2[1] = (double)puVar2;
  }
  else {
    fVar4 = *(float *)(lVar1 + 0x244);
    if (*(float *)(lVar1 + 0x244) <= *(float *)(lVar1 + 0x2f4)) {
      fVar4 = *(float *)(lVar1 + 0x2f4);
    }
    fVar3 = *(float *)(lVar1 + 0x430);
    if (*(float *)(lVar1 + 0x430) <= fVar4) {
      fVar3 = fVar4;
    }
    if (*(int *)(param_1 + 0x1e8) == 1) {
      *param_2 = (double)fVar3;
      param_2[1] = (double)puVar2;
    }
    else {
      *param_2 = (double)DAT_14c98f0b0;
      param_2[1] = (double)fVar3;
    }
  }
  return param_2;
}



// FUNCTION 146a8562a FUN_146a8562a body=14 status=ok
// SIG undefined FUN_146a8562a(void)

void FUN_146a8562a(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a8565c FUN_146a8565c body=444 status=ok
// SIG undefined FUN_146a8565c(void)

undefined8 *
FUN_146a8565c(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((char)param_1[0x43] != '\0') || (*(char *)((longlong)param_1 + 0x21a) == '\0')) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    fVar4 = *(float *)((longlong)param_1 + 0x21c);
    cVar1 = *(char *)(param_4 + 0x20);
    if ((int)param_1[0x3d] == 0) {
      if (cVar1 == '\x01') goto LAB_146a8577e;
      if (cVar1 == '\0') goto LAB_146a8572a;
    }
    else {
      if (cVar1 == '\x02') {
LAB_146a8577e:
        if (((int)param_1[0x41] != 0) && ((longlong *)param_1[0x40] != (longlong *)0x0)) {
          cVar1 = (**(code **)(*(longlong *)param_1[0x40] + 0x30))();
          if (cVar1 != '\0') {
            if ((int)param_1[0x41] == 0) {
              plVar2 = (longlong *)0x0;
            }
            else {
              plVar2 = (longlong *)param_1[0x40];
            }
            uVar3 = (**(code **)(*plVar2 + 0x58))();
            *(undefined4 *)(param_1 + 0x3f) = uVar3;
          }
        }
        fVar4 = fVar4 + *(float *)(param_1 + 0x3f);
      }
      else {
        if (cVar1 != '\x03') goto LAB_146a856ce;
LAB_146a8572a:
        if (((int)param_1[0x41] != 0) && ((longlong *)param_1[0x40] != (longlong *)0x0)) {
          cVar1 = (**(code **)(*(longlong *)param_1[0x40] + 0x30))();
          if (cVar1 != '\0') {
            if ((int)param_1[0x41] == 0) {
              plVar2 = (longlong *)0x0;
            }
            else {
              plVar2 = (longlong *)param_1[0x40];
            }
            uVar3 = (**(code **)(*plVar2 + 0x58))();
            *(undefined4 *)(param_1 + 0x3f) = uVar3;
          }
        }
        fVar4 = fVar4 - *(float *)(param_1 + 0x3f);
      }
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_48 = 3;
      FUN_146a8581a(param_2,&local_78);
      FUN_14171dea8(&local_78);
    }
LAB_146a856ce:
    if ((*(float *)((longlong)param_1 + 0x21c) != fVar4) ||
       (NAN(*(float *)((longlong)param_1 + 0x21c)) || NAN(fVar4))) {
      if (*(float *)((longlong)param_1 + 0x214) <= fVar4) {
        fVar4 = *(float *)((longlong)param_1 + 0x214);
      }
      if (fVar4 <= *(float *)(param_1 + 0x42)) {
        fVar4 = *(float *)(param_1 + 0x42);
      }
      (**(code **)(*param_1 + 0x240))(param_1,fVar4);
      goto LAB_146a856f6;
    }
    FUN_14171dea8(param_2);
  }
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_146a856f6:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8581a FUN_146a8581a body=199 status=ok
// SIG undefined FUN_146a8581a(void)

undefined8 * FUN_146a8581a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    param_1[2] = param_2[2];
    param_2[2] = 0;
    plVar2 = (longlong *)param_2[3];
    plVar3 = (longlong *)param_1[3];
    if (plVar2 != plVar3) {
      param_2[3] = 0;
      param_1[3] = plVar2;
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
  FUN_144a450dc(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 146a858e2 FUN_146a858e2 body=391 status=ok
// SIG undefined FUN_146a858e2(void)

undefined1 *
FUN_146a858e2(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0;
  undefined1 local_c8 [136];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
  if (((cVar1 == '\0') || (cVar1 = (**(code **)(*DAT_14c98e618 + 0xb0))(), cVar1 != '\0')) ||
     (*(char *)((longlong)param_1 + 0x21a) != '\x01')) {
    FUN_14171f816(param_1,local_f0,param_3,param_4);
    FUN_1403d4924(param_2,local_f0);
  }
  else {
    if ((char)param_1[0x43] == '\0') {
      *(undefined1 *)(param_1 + 0x43) = 1;
      if (((int)param_1[0x4f] != 0) && ((longlong *)param_1[0x4e] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x4e] + 0x60))();
      }
    }
    else {
      if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
      }
      *(undefined1 *)(param_1 + 0x43) = 0;
    }
    local_d0 = 0;
    local_f0[0] = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    memset(local_c8,0,0x88);
    local_40 = 0x20702;
    FUN_1403d4924(param_2,local_f0);
  }
  FUN_14493db24(local_f0);
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a85a6a FUN_146a85a6a body=213 status=ok
// SIG undefined FUN_146a85a6a(void)

undefined1 * FUN_146a85a6a(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x218) == '\x01') {
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    FUN_1403d4924(param_2,local_e8);
    FUN_14493db24(local_e8);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a85b40 FUN_146a85b40 body=83 status=ok
// SIG undefined FUN_146a85b40(void)

void FUN_146a85b40(longlong *param_1)

{
  if ((char)param_1[0x43] == '\x01') {
    (**(code **)(*param_1 + 0x240))(param_1,*(undefined4 *)((longlong)param_1 + 0x21c));
    if ((char)param_1[0x43] == '\x01') {
      if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
      }
      *(undefined1 *)(param_1 + 0x43) = 0;
    }
  }
  return;
}



// FUNCTION 146a85b94 FUN_146a85b94 body=666 status=ok
// SIG undefined FUN_146a85b94(void)

undefined1 *
FUN_146a85b94(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [136];
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_4 + 0x40);
  plVar5 = *(longlong **)(param_4 + 0x50);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == DAT_14c966e98) {
      cVar3 = *(char *)((longlong)param_1 + 0x221);
      goto joined_r0x000146a85c8e;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 == DAT_14c966e98) {
      cVar3 = *(char *)((longlong)param_1 + 0x221);
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
joined_r0x000146a85c8e:
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x1d0))(param_1,&local_108);
        uVar10 = 1;
        if (local_108._4_1_ != '\0') {
          uVar10 = (undefined4)local_108;
        }
        *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar10;
        if (((int)param_1[0x4b] != 0) && ((longlong *)param_1[0x4a] != (longlong *)0x0)) {
          (**(code **)(*(longlong *)param_1[0x4a] + 0x60))();
        }
        local_108 = *(undefined8 *)(param_4 + 0x20);
        uVar10 = FUN_146a85e30(param_1);
        (**(code **)(*param_1 + 0x240))(param_1,uVar10);
        if ((char)param_1[0x43] == '\x01') {
          if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
            (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
          }
          *(undefined1 *)(param_1 + 0x43) = 0;
        }
        local_108 = CONCAT71(local_108._1_7_,1);
        local_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        memset(local_e0,0,0x88);
        local_58 = 0x20702;
        local_54 = 0;
        plVar5 = (longlong *)param_1[2];
        if (plVar5 == (longlong *)0x0) {
LAB_146a85dda:
          local_118 = 0;
          plStack_110 = (longlong *)0x0;
          bVar9 = true;
        }
        else {
          iVar7 = (int)plVar5[1];
          do {
            if (iVar7 == 0) goto LAB_146a85dda;
            LOCK();
            iVar6 = (int)plVar5[1];
            bVar9 = iVar7 == iVar6;
            if (bVar9) {
              *(int *)(plVar5 + 1) = iVar7 + 1;
              iVar6 = iVar7;
            }
            iVar7 = iVar6;
            UNLOCK();
          } while (!bVar9);
          lVar4 = param_1[1];
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
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          bVar9 = false;
          local_118 = lVar4;
          plStack_110 = plVar5;
        }
        plVar5 = plStack_110;
        uVar8 = FUN_140592a6e(&local_108,&local_118);
        FUN_1403d4c6e(param_2,uVar8);
        if (!bVar9) {
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
        FUN_14493db24(&local_108);
        goto LAB_146a85c49;
      }
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a85c49:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a85e30 FUN_146a85e30 body=732 status=ok
// SIG undefined FUN_146a85e30(void)

undefined8 FUN_146a85e30(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((*(char *)(param_1 + 0x3a) == '\x01') && (*(char *)(param_1 + 0x221) != '\x01')) {
    if (*(char *)(param_1 + 0x3b) == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x1e0) + 0x2d0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x1e0) + 0x220;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x1e0) + 0x380;
  }
  if (*(char *)(param_1 + 0x220) == '\0') {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 2.0;
  }
  fVar9 = 1.0 / (param_2[7] * param_2[10] - param_2[9] * param_2[8]);
  fVar7 = fVar7 * *(float *)(lVar2 + 0x20);
  if (*(int *)(param_1 + 0x1e8) == 0) {
    fVar6 = -param_2[9] * fVar9;
    fVar9 = param_2[10] * fVar9;
    fVar9 = *param_3 * fVar9 + fVar6 * param_3[1] + (-param_2[0xb] * fVar9 - param_2[0xc] * fVar6);
    fVar6 = *param_2;
  }
  else {
    fVar5 = param_2[7] * fVar9;
    fVar9 = -param_2[8] * fVar9;
    fVar6 = param_2[1];
    fVar9 = fVar6 - (*param_3 * fVar9 + fVar5 * param_3[1] +
                    (-param_2[0xb] * fVar9 - param_2[0xc] * fVar5));
  }
  fVar6 = fVar6 - fVar7;
  fVar7 = (float)(-(uint)(fVar6 != 0.0) & (uint)((fVar9 + fVar7 * -0.5) / fVar6));
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  uVar8 = 0;
  fVar7 = (*(float *)(param_1 + 0x214) - *(float *)(param_1 + 0x210)) * fVar7 +
          *(float *)(param_1 + 0x210);
  if (*(char *)(param_1 + 0x219) != '\x01') goto LAB_146a860c3;
  fVar9 = *(float *)(param_1 + 0x21c);
  if (((*(int *)(param_1 + 0x208) == 0) || (*(longlong **)(param_1 + 0x200) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x30))(), cVar1 == '\0')) {
    fVar6 = *(float *)(param_1 + 0x1f8);
  }
  else {
    if (*(int *)(param_1 + 0x208) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x200);
    }
    fVar6 = (float)(**(code **)(*plVar3 + 0x58))();
    *(float *)(param_1 + 0x1f8) = fVar6;
  }
  if (0.0 < fVar6) {
    fVar9 = fVar9 - fVar7;
    uVar4 = FUN_144afe150(ABS(fVar9) / fVar6);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar7 = (float)uVar4 * fVar6;
    if (fVar6 * 0.5 < fVar9) {
      uVar8 = 0;
      fVar7 = *(float *)(param_1 + 0x21c) - fVar7;
      if (*(float *)(param_1 + 0x214) <= fVar7) {
        fVar7 = *(float *)(param_1 + 0x214);
      }
      if (fVar7 <= *(float *)(param_1 + 0x210)) {
        fVar7 = *(float *)(param_1 + 0x210);
      }
      goto LAB_146a860c3;
    }
    if (fVar9 < fVar6 * -0.5) {
      fVar7 = fVar7 + *(float *)(param_1 + 0x21c);
      if (*(float *)(param_1 + 0x214) <= fVar7) {
        fVar7 = *(float *)(param_1 + 0x214);
      }
      if (fVar7 <= *(float *)(param_1 + 0x210)) {
        fVar7 = *(float *)(param_1 + 0x210);
      }
      goto LAB_146a860c3;
    }
  }
  uVar8 = 0;
  fVar7 = *(float *)(param_1 + 0x21c);
LAB_146a860c3:
  return CONCAT44(uVar8,fVar7);
}



// FUNCTION 146a8610c FUN_146a8610c body=471 status=ok
// SIG undefined FUN_146a8610c(void)

undefined1 * FUN_146a8610c(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == DAT_14c966e98) goto LAB_146a86159;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 == DAT_14c966e98) {
LAB_146a86159:
      local_100 = *(undefined4 *)(param_4 + 0x58);
      local_fc = 1;
      cVar5 = FUN_14697e1bc(param_1);
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
      if (cVar5 != '\0') {
        local_f8 = *(undefined4 *)(param_1 + 0x1ec);
        local_f4 = 1;
        local_f0 = CONCAT71(local_f0._1_7_,1);
        uStack_e8 = 0;
        uStack_e0 = 0;
        FUN_140a5f03c(param_1);
        FUN_1449db362(&uStack_e8);
        if (*(char *)(param_1 + 0x218) == '\x01') {
          if ((*(int *)(param_1 + 0x288) != 0) &&
             (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x280) + 0x60))();
          }
          *(undefined1 *)(param_1 + 0x218) = 0;
        }
        local_f8 = CONCAT31(local_f8._1_3_,1);
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_c0 = 0;
        uStack_b8 = 0;
        local_44 = 1;
        FUN_1403d4c6e(param_2,&local_f8);
        FUN_14493db24(&local_f8);
        goto LAB_146a86291;
      }
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a86291:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a862e4 FUN_146a862e4 body=56 status=ok
// SIG undefined FUN_146a862e4(void)

void FUN_146a862e4(longlong param_1,undefined8 param_2)

{
  if ((*(int *)(param_1 + 0x268) != 0) && (*(longlong **)(param_1 + 0x260) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x60))();
  }
  FUN_140d9616c(param_1,param_2);
  return;
}



// FUNCTION 146a8631c FUN_146a8631c body=329 status=ok
// SIG undefined FUN_146a8631c(void)

undefined1 *
FUN_146a8631c(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_4 + 0x58);
  local_44 = 1;
  cVar1 = FUN_14697e1bc();
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x221) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    local_68._0_5_ = CONCAT14(1,4 - (uint)((int)param_1[0x3d] == 0));
    local_60 = 1;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140a5f03c(param_1,&local_68);
    FUN_1449db362(&local_58);
    local_68 = *(undefined8 *)(param_4 + 0x20);
    uVar3 = FUN_146a85e30(param_1,param_3,&local_68);
    (**(code **)(*param_1 + 0x240))(param_1,uVar3);
    if ((char)param_1[0x43] == '\x01') {
      if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
      }
      *(undefined1 *)(param_1 + 0x43) = 0;
    }
  }
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a86466 FUN_146a86466 body=145 status=ok
// SIG undefined FUN_146a86466(void)

undefined1 * FUN_146a86466(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x221) == '\0') {
    if (*(char *)(param_1 + 0x218) == '\x01') {
      if ((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0))
      {
        (**(code **)(**(longlong **)(param_1 + 0x280) + 0x60))();
      }
      *(undefined1 *)(param_1 + 0x218) = 0;
    }
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_4 + 0x20);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a864f8 FUN_146a864f8 body=690 status=ok
// SIG undefined FUN_146a864f8(void)

undefined1 *
FUN_146a864f8(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *plStack_110;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = *(undefined4 *)(param_4 + 0x58);
  local_fc = 1;
  cVar6 = FUN_14697e1bc();
  if (cVar6 == '\0') {
    cVar6 = FUN_140591fd6(param_1);
    if ((cVar6 == '\0') &&
       (cVar6 = FUN_1469aaa5a(DAT_14c98e618,param_4,param_1[0x3e],(int)param_1[0x3d]), cVar6 != '\0'
       )) {
      (**(code **)(*param_1 + 0x1d0))(param_1,&local_f8);
      uVar10 = 1;
      if (local_f8._4_1_ != '\0') {
        uVar10 = (undefined4)local_f8;
      }
      *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar10;
      if (((int)param_1[0x4b] != 0) && ((longlong *)param_1[0x4a] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x4a] + 0x60))();
      }
      local_f8 = *(undefined8 *)(param_4 + 0x20);
      uVar10 = FUN_146a85e30(param_1);
      (**(code **)(*param_1 + 0x240))(param_1,uVar10);
      if ((char)param_1[0x43] == '\x01') {
        if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
          (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
        }
        *(undefined1 *)(param_1 + 0x43) = 0;
      }
      local_f8 = CONCAT71(local_f8._1_7_,1);
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      plVar3 = (longlong *)param_1[2];
      if (plVar3 == (longlong *)0x0) {
LAB_146a86756:
        local_118 = 0;
        plStack_110 = (longlong *)0x0;
        bVar9 = true;
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_146a86756;
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
        lVar4 = param_1[1];
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
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
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
        local_118 = lVar4;
        plStack_110 = plVar3;
      }
      plVar3 = plStack_110;
      uVar8 = FUN_140592a6e(&local_f8,&local_118);
      FUN_1403d4c6e(param_2,uVar8);
      if (!bVar9) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      FUN_14493db24(&local_f8);
      goto LAB_146a865b1;
    }
    *param_2 = 0;
  }
  else {
    local_f8 = *(undefined8 *)(param_4 + 0x20);
    uVar10 = FUN_146a85e30(param_1);
    (**(code **)(*param_1 + 0x240))(param_1,uVar10);
    if ((char)param_1[0x43] == '\x01') {
      if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
      }
      *(undefined1 *)(param_1 + 0x43) = 0;
    }
    *param_2 = 1;
  }
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a865b1:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a867ac FUN_146a867ac body=430 status=ok
// SIG undefined FUN_146a867ac(void)

undefined1 *
FUN_146a867ac(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = *(undefined4 *)(param_4 + 0x58);
  local_fc = 1;
  cVar1 = FUN_14697e1bc();
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_f8._0_5_ = CONCAT14(1,*(undefined4 *)((longlong)param_1 + 0x1ec));
    local_f0 = CONCAT71(local_f0._1_7_,1);
    uStack_e8 = 0;
    uStack_e0 = 0;
    FUN_140a5f03c(param_1,&local_f8);
    FUN_1449db362(&uStack_e8);
    if (((int)param_1[0x4d] != 0) && ((longlong *)param_1[0x4c] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x4c] + 0x60))();
    }
    local_f8 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = FUN_146a85e30(param_1);
    (**(code **)(*param_1 + 0x240))(param_1,uVar2);
    if ((char)param_1[0x43] == '\x01') {
      if (((int)param_1[0x51] != 0) && ((longlong *)param_1[0x50] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x50] + 0x60))();
      }
      *(undefined1 *)(param_1 + 0x43) = 0;
    }
    local_f8 = CONCAT71(local_f8._1_7_,1);
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x100020702;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_1403d4c6e(param_2,&local_f8);
    FUN_14493db24(&local_f8);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8695c FUN_146a8695c body=192 status=ok
// SIG undefined FUN_146a8695c(void)

void FUN_146a8695c(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  float local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(float *)(param_1 + 0x21c) != param_2) || (NAN(*(float *)(param_1 + 0x21c)) || NAN(param_2))
     ) {
    cVar2 = FUN_14020e432(param_1 + 0x21c,param_1,0);
    if (cVar2 == '\0') {
      local_44 = 1;
      local_40 = 0;
      uStack_38 = 0;
      local_48 = param_2;
      FUN_140a5e0d2(param_1 + 0x21c,param_1,&local_48);
      FUN_1449db362(&local_40);
    }
    FUN_140163244(param_1,2);
    if ((*(int *)(param_1 + 0x298) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x290), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a86a1e FUN_146a86a1e body=9 status=ok
// SIG undefined FUN_146a86a1e(void)

undefined4 FUN_146a86a1e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x21c);
}



// FUNCTION 146a86a28 FUN_146a86a28 body=43 status=ok
// SIG undefined FUN_146a86a28(void)

void FUN_146a86a28(longlong param_1,longlong param_2)

{
  FUN_140a5e0d2(param_1 + 0x21c,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146a86a54 FUN_146a86a54 body=58 status=ok
// SIG undefined FUN_146a86a54(void)

void FUN_146a86a54(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x210);
  if ((fVar1 == param_2) && (!NAN(fVar1) && !NAN(param_2))) {
    fVar1 = *(float *)(param_1 + 0x214);
    if ((fVar1 == param_3) && (!NAN(fVar1) && !NAN(param_3))) {
      return;
    }
  }
  *(float *)(param_1 + 0x210) = param_2;
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  *(float *)(param_1 + 0x214) = param_2;
  FUN_140163244(fVar1,2);
  return;
}



// FUNCTION 146a86a8e FUN_146a86a8e body=43 status=ok
// SIG undefined FUN_146a86a8e(void)

void FUN_146a86a8e(longlong param_1,longlong param_2)

{
  FUN_140a52028(param_1 + 0x220,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146a86aba FUN_146a86aba body=43 status=ok
// SIG undefined FUN_146a86aba(void)

void FUN_146a86aba(longlong param_1,longlong param_2)

{
  FUN_140a52028(param_1 + 0x221,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146a86ae6 FUN_146a86ae6 body=22 status=ok
// SIG undefined FUN_146a86ae6(void)

void FUN_146a86ae6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1e8) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x1e8) = param_2;
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a86afc FUN_146a86afc body=43 status=ok
// SIG undefined FUN_146a86afc(void)

void FUN_146a86afc(longlong param_1,longlong param_2)

{
  FUN_140a5c8a2(param_1 + 0x224,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 146a86b28 FUN_146a86b28 body=43 status=ok
// SIG undefined FUN_146a86b28(void)

void FUN_146a86b28(longlong param_1,longlong param_2)

{
  FUN_140a5c8a2(param_1 + 0x238,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 146a86b54 FUN_146a86b54 body=87 status=ok
// SIG undefined FUN_146a86b54(void)

undefined4 FUN_146a86b54(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x208) != 0) && (*(longlong **)(param_1 + 0x200) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x208) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x200);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x1f8) = uVar3;
    }
  }
  return *(undefined4 *)(param_1 + 0x1f8);
}



// FUNCTION 146a86bac FUN_146a86bac body=54 status=ok
// SIG undefined FUN_146a86bac(void)

void FUN_146a86bac(longlong param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0x1fc) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x1f8) = *param_2;
  FUN_144a450dc(param_1 + 0x200,param_2 + 2);
  FUN_1449db362(param_2 + 2);
  return;
}



// FUNCTION 146a86be2 FUN_146a86be2 body=7 status=ok
// SIG undefined FUN_146a86be2(void)

void FUN_146a86be2(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x219) = param_2;
  return;
}



// FUNCTION 146a86bea FUN_146a86bea body=7 status=ok
// SIG undefined FUN_146a86bea(void)

void FUN_146a86bea(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x21a) = param_2;
  return;
}



// FUNCTION 146a86bf2 FUN_146a86bf2 body=448 status=ok
// SIG undefined FUN_146a86bf2(void)

longlong * FUN_146a86bf2(longlong param_1,longlong *param_2)

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
LAB_146a86c30:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a86c30;
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
  FUN_146a86db4(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146a86d6c;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146a86d6c;
LAB_146a86ccf:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146a86d6c;
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
      if (plVar8 != (longlong *)0x0) goto LAB_146a86ccf;
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
LAB_146a86d6c:
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



// FUNCTION 146a86db4 FUN_146a86db4 body=143 status=ok
// SIG undefined FUN_146a86db4(void)

undefined8 * FUN_146a86db4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_14697595a(param_1,&local_28,8);
  *param_1 = &PTR_FUN_149f16f60;
  param_1[0xd] = &PTR_FUN_149f17050;
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



// FUNCTION 146a86e44 FUN_146a86e44 body=162 status=ok
// SIG undefined FUN_146a86e44(void)

float FUN_146a86e44(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_1 <= param_2) {
    fVar1 = powf(1.0 - (param_2 - param_1) / param_2,param_3);
    param_2 = param_2 - (1.0 - fVar1) * param_2;
  }
  else {
    fVar1 = powf(1.0 - (param_1 - param_2) / (1.0 - param_2),param_3);
    param_2 = (1.0 - fVar1) * (1.0 - param_2) + param_2;
  }
  return param_2;
}



// FUNCTION 146a86ee6 FUN_146a86ee6 body=228 status=ok
// SIG undefined FUN_146a86ee6(void)

undefined8 * FUN_146a86ee6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x268) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        cVar5 = FUN_146a62c32(0);
        goto joined_r0x000146a86f68;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    cVar5 = FUN_146a62c32(*(undefined8 *)(param_1 + 0x268));
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
joined_r0x000146a86f68:
    if ((cVar5 != '\0') && (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) {
      iVar6 = (int)plVar3[1];
      while (iVar6 != 0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar6 == iVar4;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        if (bVar7) {
          *param_2 = *(undefined8 *)(param_1 + 0x268);
          param_2[1] = plVar3;
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return param_2;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return param_2;
          }
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return param_2;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146a86fca FUN_146a86fca body=270 status=ok
// SIG undefined FUN_146a86fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146a86fca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a86ee6(param_1,&local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_30 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x270);
    if (plVar3 == (longlong *)0x0) {
LAB_146a87076:
      (**(code **)(_DAT_00000000 + 0x248))(0,0,1,0);
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146a87076;
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
      (**(code **)(**(longlong **)(param_1 + 0x268) + 0x248))(*(longlong **)(param_1 + 0x268),0,1,0)
      ;
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
    lVar4 = *(longlong *)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a870ea FUN_146a870ea body=134 status=ok
// SIG undefined FUN_146a870ea(void)

void FUN_146a870ea(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x268) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x270);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x270);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x270) = plVar3;
    plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000146a87163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a87170 FUN_146a87170 body=133 status=ok
// SIG undefined FUN_146a87170(void)

longlong FUN_146a87170(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e0) = uVar3;
  *(longlong *)(param_1 + 0x4e8) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 146a871f6 FUN_146a871f6 body=611 status=ok
// SIG undefined FUN_146a871f6(void)

longlong FUN_146a871f6(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"ListView",1);
  uVar5 = 0;
  uVar4 = FUN_1458178ee(lVar3,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 3;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined1 *)(param_1 + 0x315) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0x19;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0;
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar4 = FUN_145817968(lVar3,local_38,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar4;
  *(undefined2 *)(param_1 + 0x350) = 0;
  lVar3 = DAT_14c96b2f0;
  cVar1 = FUN_144a8728e();
  if (cVar1 == '\0') {
    bVar2 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(lVar3 + uVar5 * 4);
  *(undefined4 *)(param_1 + 0x358) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x36c) = 0x101;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x101;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8745a FUN_146a8745a body=115 status=ok
// SIG undefined FUN_146a8745a(void)

longlong * FUN_146a8745a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146ab6e4e(*param_1,param_3);
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



// FUNCTION 146a874ce FUN_146a874ce body=414 status=ok
// SIG undefined FUN_146a874ce(void)

void FUN_146a874ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x378);
  FUN_1449db362(param_1 + 0x330);
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x308);
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
  plVar3 = *(longlong **)(param_1 + 0x2f0);
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
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a8766c FUN_146a8766c body=68 status=ok
// SIG undefined FUN_146a8766c(void)

void FUN_146a8766c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145cf7175(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146ab8eb4(param_1,param_2);
  return;
}



// FUNCTION 146a876b2 FUN_146a876b2 body=232 status=ok
// SIG undefined FUN_146a876b2(void)

void FUN_146a876b2(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146ab63d2(param_1,&local_38,param_2);
  if (local_38 != -1) {
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_146ab67a4(param_1,&local_48,param_3);
    if ((local_38 != -1) && (local_30 != (longlong *)0x0)) {
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
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8779c FUN_146a8779c body=164 status=ok
// SIG undefined FUN_146a8779c(void)

void FUN_146a8779c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  plVar5 = *(longlong **)(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  *(longlong *)(param_1 + 2000) = lVar4;
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
  *(undefined4 *)(param_1 + 0x7d8) = param_3;
  FUN_146af42a2(param_1);
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000146a87831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a87840 FUN_146a87840 body=153 status=ok
// SIG undefined FUN_146a87840(void)

void FUN_146a87840(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_146a8788c;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_146a8788c:
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x708) != *(int *)(param_1 + 0x734))) {
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
                    /* WARNING: Could not recover jumptable at 0x000146a878d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
    return;
  }
  return;
}



// FUNCTION 146a878da FUN_146a878da body=359 status=ok
// SIG undefined FUN_146a878da(void)

longlong FUN_146a878da(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a87a42 FUN_146a87a42 body=180 status=ok
// SIG undefined FUN_146a87a42(void)

longlong * FUN_146a87a42(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  plVar1 = (longlong *)*param_1;
  plVar2 = *(longlong **)param_1[2];
  FUN_146ab5558(plVar1,param_3,plVar2);
  (**(code **)(*plVar1 + 0x80))
            (plVar1,*(undefined4 *)(*plVar2 + 0x270),param_3 + 0x228,param_3 + 600);
  lVar3 = *param_1;
  bVar6 = *(byte *)(lVar3 + 0x38);
  bVar5 = 0x20;
  if ((bVar6 & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x220))(lVar3 + 8);
    bVar5 = cVar4 << 5;
    bVar6 = *(byte *)(lVar3 + 0x38);
  }
  *(byte *)(lVar3 + 0x38) = bVar6 & 0xdf | bVar5;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a87af6 FUN_146a87af6 body=160 status=ok
// SIG undefined FUN_146a87af6(void)

void FUN_146a87af6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a87b96 FUN_146a87b96 body=518 status=ok
// SIG undefined FUN_146a87b96(void)

longlong FUN_146a87b96(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ComboBox",1);
  uVar3 = FUN_145817be4(lVar2,local_38,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_40,"ComboBox.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_40,0,0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x588);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x580);
  *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x210) = 4;
  *(undefined1 *)(param_1 + 0x214) = 1;
  *(undefined1 *)(param_1 + 0x299) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0x43e10000;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined2 *)(param_1 + 0x2e0) = 1;
  *(undefined1 *)(param_1 + 0x2e2) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a87d9e FUN_146a87d9e body=133 status=ok
// SIG undefined FUN_146a87d9e(void)

longlong FUN_146a87d9e(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  *(longlong *)(param_1 + 0x290) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 146a87e24 FUN_146a87e24 body=115 status=ok
// SIG undefined FUN_146a87e24(void)

longlong * FUN_146a87e24(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aba536(*param_1,param_3);
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



// FUNCTION 146a87e98 FUN_146a87e98 body=295 status=ok
// SIG undefined FUN_146a87e98(void)

void FUN_146a87e98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x2d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b8) = 0;
  }
  if (*(char *)(param_1 + 0x299) == '\x01') {
    *(undefined1 *)(param_1 + 0x299) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x290);
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
  plVar3 = *(longlong **)(param_1 + 0x280);
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
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x248);
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
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1f0);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a87fc0 FUN_146a87fc0 body=152 status=ok
// SIG undefined FUN_146a87fc0(void)

ulonglong FUN_146a87fc0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar4 = 1;
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8805a FUN_146a8805a body=236 status=ok
// SIG undefined FUN_146a8805a(void)

void FUN_146a8805a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    FUN_146a87840(*(undefined8 *)(param_1 + 0x400));
  }
  else {
    plVar4 = (longlong *)param_2[1];
    local_28 = lVar3;
    if (plVar4 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      FUN_146a876b2(*(undefined8 *)(param_1 + 0x400),&local_28,3);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar5 = *(undefined8 *)(param_1 + 0x400);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_20 = plVar4;
      FUN_146a876b2(uVar5,&local_28,3);
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
  plVar4 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a88148 FUN_146a88148 body=314 status=ok
// SIG undefined FUN_146a88148(void)

longlong FUN_146a88148(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"ErrorReporting.BackgroundColor",1);
  local_38 = 0;
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x38))(plVar2,local_28,0,&DAT_14c75ed64);
  uVar1 = puVar3[1];
  *(undefined8 *)(param_1 + 0x1b8) = *puVar3;
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1ef) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x234) = 2;
  *(undefined1 *)(param_1 + 0x236) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 600) = 0x100;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a88284 FUN_146a88284 body=115 status=ok
// SIG undefined FUN_146a88284(void)

longlong * FUN_146a88284(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aa49a0(*param_1,param_3);
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



// FUNCTION 146a882f8 FUN_146a882f8 body=75 status=ok
// SIG undefined FUN_146a882f8(void)

void FUN_146a882f8(longlong param_1)

{
  FUN_1449db362(param_1 + 0x260);
  FUN_141515cba(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a88344 FUN_146a88344 body=193 status=ok
// SIG undefined FUN_146a88344(void)

void FUN_146a88344(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(uint *)(param_1 + 0x47c) = (*(uint *)(param_1 + 0x47c) & 0xfffffffa) + 1;
  plVar4 = DAT_14c968090;
  lVar3 = DAT_14c968088;
  if (DAT_14c968090 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
    UNLOCK();
  }
  local_40 = &LAB_146a88406;
  local_38 = 0;
  FUN_146abdd10(local_30,param_1);
  FUN_145937e4a(lVar3 + 0x38,&local_40,local_30);
  FUN_1449db362(local_30);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a88456 FUN_146a88456 body=110 status=ok
// SIG undefined FUN_146a88456(void)

void FUN_146a88456(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7,float param_8)

{
  *(undefined4 *)(param_1 + 0x460) = param_2;
  *(undefined4 *)(param_1 + 0x464) = param_3;
  *(undefined4 *)(param_1 + 0x468) = param_4;
  *(undefined4 *)(param_1 + 0x46c) = param_5;
  *(undefined4 *)(param_1 + 0x470) = param_6;
  *(float *)(param_1 + 0x474) = param_8;
  *(uint *)(param_1 + 0x47c) = (*(uint *)(param_1 + 0x47c) & 0xfffffffb) + (uint)param_7 * 4;
  if (0.0 < param_8) {
    *(undefined4 *)(param_1 + 0x478) = 4;
  }
  return;
}



// FUNCTION 146a884c4 FUN_146a884c4 body=1158 status=ok
// SIG undefined FUN_146a884c4(void)

int FUN_146a884c4(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  byte local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_1 + 0x47c) & 1) != 0) {
    local_100 = *(undefined4 *)(param_7 + 1);
    local_108 = *param_7;
    local_fc = *(undefined4 *)(param_1 + 0x480);
    if (0 < *(int *)(param_1 + 0x458)) {
      lVar9 = 0xf0;
      lVar7 = 0;
      do {
        lVar10 = *(longlong *)(param_1 + 0x450);
        if (*(longlong *)(param_1 + 0x450) == 0) {
          lVar10 = param_1 + 0x1e0;
        }
        plVar5 = *(longlong **)(lVar10 + -0xd8 + lVar9);
        iVar8 = param_6;
        if (plVar5 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 8))();
          dVar3 = *(double *)(lVar10 + -0x10 + lVar9);
          local_e0 = (float)dVar3;
          dVar4 = *(double *)(lVar10 + -0x18 + lVar9);
          local_e4 = (float)dVar4;
          fVar12 = (float)(*(double *)(lVar10 + -0x30 + lVar9) - dVar3 * 0.5);
          fVar11 = (float)(*(double *)(lVar10 + -0x38 + lVar9) - dVar4 * 0.5);
          local_f0 = *(float *)(param_3 + 8);
          local_dc = *(float *)(param_3 + 0x1c);
          local_f8 = CONCAT44(local_f0 * fVar12 + *(float *)(param_3 + 0x10),
                              local_f0 * fVar11 + *(float *)(param_3 + 0xc));
          local_d8 = *(float *)(param_3 + 0x20);
          fVar1 = *(float *)(param_3 + 0x28);
          fVar2 = *(float *)(param_3 + 0x24);
          local_c8 = fVar11 * local_d8 + fVar1 * fVar12 + *(float *)(param_3 + 0x30);
          local_cc = fVar11 * local_dc + fVar12 * fVar2 + *(float *)(param_3 + 0x2c);
          local_d0 = local_d8 * 0.0 + fVar1;
          local_d4 = local_dc * 0.0 + fVar2;
          local_d8 = fVar1 * 0.0 + local_d8;
          local_dc = fVar2 * 0.0 + local_dc;
          local_ec = 0;
          local_c4 = local_c4 & 0xfc | *(char *)(param_3 + 0x34) * '\x02' & 2U;
          iVar8 = param_6 + 1;
          local_110 = &local_108;
          local_118 = 0;
          FUN_140239bd2(param_5,param_6,&local_f8,uVar6);
        }
        plVar5 = *(longlong **)(lVar10 + -0xe8 + lVar9);
        param_6 = iVar8;
        if (plVar5 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 8))();
          local_e0 = (float)*(double *)(lVar10 + lVar9);
          dVar3 = *(double *)(lVar10 + -8 + lVar9);
          local_e4 = (float)dVar3;
          fVar12 = (float)((*(double *)(lVar10 + -0x30 + lVar9) +
                           *(double *)(lVar10 + -0x40 + lVar9)) - *(double *)(lVar10 + lVar9) * 0.5)
          ;
          fVar11 = (float)((*(double *)(lVar10 + -0x38 + lVar9) +
                           *(double *)(lVar10 + -0x48 + lVar9)) - dVar3 * 0.5);
          local_f0 = *(float *)(param_3 + 8);
          local_dc = *(float *)(param_3 + 0x1c);
          local_f8 = CONCAT44(local_f0 * fVar12 + *(float *)(param_3 + 0x10),
                              local_f0 * fVar11 + *(float *)(param_3 + 0xc));
          local_d8 = *(float *)(param_3 + 0x20);
          fVar1 = *(float *)(param_3 + 0x28);
          fVar2 = *(float *)(param_3 + 0x24);
          local_c8 = fVar11 * local_d8 + fVar1 * fVar12 + *(float *)(param_3 + 0x30);
          local_cc = fVar11 * local_dc + fVar12 * fVar2 + *(float *)(param_3 + 0x2c);
          local_d0 = local_d8 * 0.0 + fVar1;
          local_d4 = local_dc * 0.0 + fVar2;
          local_d8 = fVar1 * 0.0 + local_d8;
          local_dc = fVar2 * 0.0 + local_dc;
          local_ec = 0;
          local_c4 = local_c4 & 0xfc | *(char *)(param_3 + 0x34) * '\x02' & 2U;
          param_6 = iVar8 + 1;
          local_110 = &local_108;
          local_118 = 0;
          FUN_140239bd2(param_5,iVar8,&local_f8,uVar6);
        }
        lVar7 = lVar7 + 1;
        lVar9 = lVar9 + 0x138;
      } while (lVar7 < *(int *)(param_1 + 0x458));
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a88966 FUN_146a88966 body=1052 status=ok
// SIG undefined FUN_146a88966(void)

undefined1 * FUN_146a88966(longlong *param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong local_168;
  longlong *plStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  undefined8 uStack_138;
  undefined1 local_128;
  undefined1 local_120 [136];
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  fVar17 = 1.0 / (param_3[7] * param_3[10] - param_3[9] * param_3[8]);
  fVar16 = param_3[7] * fVar17;
  fVar14 = -param_3[9] * fVar17;
  fVar13 = -param_3[8] * fVar17;
  fVar17 = fVar17 * param_3[10];
  dStack_150 = (double)(fVar13 * *(float *)(param_4 + 0x20) + fVar16 * *(float *)(param_4 + 0x24) +
                       (-param_3[0xb] * fVar13 - fVar16 * param_3[0xc]));
  local_158 = (double)(fVar17 * *(float *)(param_4 + 0x20) + fVar14 * *(float *)(param_4 + 0x24) +
                      (-param_3[0xb] * fVar17 - param_3[0xc] * fVar14));
  iVar7 = (int)param_1[0x8b];
  if (0 < iVar7) {
    lVar10 = 0x132;
    uVar11 = 0;
    do {
      plVar9 = (longlong *)param_1[0x8a];
      if ((longlong *)param_1[0x8a] == (longlong *)0x0) {
        plVar9 = param_1 + 0x3c;
      }
      if (*(int *)((longlong)plVar9 + lVar10 + -0x1a) == -1) {
        dVar4 = *(double *)((longlong)plVar9 + lVar10 + -0x6a);
        dVar15 = *(double *)((longlong)plVar9 + lVar10 + -0x3a) * 0.5;
        if ((dVar4 - dVar15 <= local_158) && (local_158 <= dVar15 + dVar4)) {
          dVar4 = *(double *)((longlong)plVar9 + lVar10 + -0x62);
          dVar15 = *(double *)((longlong)plVar9 + lVar10 + -0x32) * 0.5;
          if ((dVar4 - dVar15 <= dStack_150) && (dStack_150 <= dVar15 + dVar4)) {
            local_140 = (double)param_3[1];
            local_148 = (double)*param_3;
            local_170 = param_4;
            FUN_146a88d84(&local_158,(longlong)plVar9 + lVar10 + -0x5a,&local_148);
            *(undefined4 *)((longlong)plVar9 + lVar10 + -0x1a) = *(undefined4 *)(local_170 + 0x58);
            if ((*(float *)(param_1 + 0x8e) != 0.0) || (NAN(*(float *)(param_1 + 0x8e)))) {
              *(undefined1 *)((longlong)plVar9 + lVar10) = 1;
              *(undefined4 *)((longlong)plVar9 + lVar10 + -0x16) = 0;
              pdVar3 = (double *)((longlong)plVar9 + lVar10 + -0x12);
              *pdVar3 = local_158;
              pdVar3[1] = dStack_150;
              break;
            }
            *(int *)(param_1 + 0x90) = (int)param_1[0x8c];
            if ((*(byte *)((longlong)param_1 + 0x47c) & 4) == 0) {
              pdVar3 = (double *)((longlong)plVar9 + lVar10 + -0x7a);
              *pdVar3 = local_158;
              pdVar3[1] = dStack_150;
            }
            local_140 = (double)param_3[1];
            local_148 = (double)*param_3;
            cVar6 = (**(code **)(*param_1 + 0x248))
                              (param_1,uVar11 & 0xffffffff,&local_158,&local_148);
            if (cVar6 != '\0') {
              local_148 = (double)CONCAT71(local_148._1_7_,1);
              local_128 = 0;
              local_140 = 0.0;
              uStack_138 = 0;
              memset(local_120,0,0x88);
              local_98 = 0x20702;
              plVar9 = (longlong *)param_1[2];
              if (plVar9 == (longlong *)0x0) goto LAB_146a88d2d;
              iVar7 = (int)plVar9[1];
              goto LAB_146a88ce8;
            }
            iVar7 = (int)param_1[0x8b];
            param_4 = local_170;
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x138;
    } while ((longlong)uVar11 < (longlong)iVar7);
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  goto LAB_146a88c58;
LAB_146a88d2d:
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  bVar12 = true;
  goto LAB_146a88d38;
  while( true ) {
    LOCK();
    iVar5 = (int)plVar9[1];
    bVar12 = iVar7 == iVar5;
    if (bVar12) {
      *(int *)(plVar9 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
    if (bVar12) break;
LAB_146a88ce8:
    if (iVar7 == 0) goto LAB_146a88d2d;
  }
  lVar10 = param_1[1];
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
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
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  bVar12 = false;
  local_168 = lVar10;
  plStack_160 = plVar9;
LAB_146a88d38:
  plVar9 = plStack_160;
  uVar8 = FUN_140592a6e(&local_148,&local_168);
  FUN_1403d4c6e(param_2,uVar8);
  if (!bVar12) {
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
  FUN_14493db24(&local_148);
LAB_146a88c58:
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a88d84 FUN_146a88d84 body=234 status=ok
// SIG undefined FUN_146a88d84(void)

void FUN_146a88d84(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_2;
  dVar1 = *param_3;
  if ((dVar2 <= dVar1) && (param_2[1] < param_3[1] || param_2[1] == param_3[1])) {
    dVar3 = *param_1;
    if (dVar2 * -0.5 + dVar3 < 0.0) {
      dVar3 = dVar2 * 0.5;
      *param_1 = dVar3;
      dVar2 = *param_2;
      dVar1 = *param_3;
    }
    if (dVar1 < dVar2 * 0.5 + dVar3) {
      *param_1 = dVar1 + dVar2 * -0.5;
    }
    dVar2 = param_1[1];
    dVar1 = param_2[1];
    if (dVar1 * -0.5 + dVar2 < 0.0) {
      dVar2 = dVar1 * 0.5;
      param_1[1] = dVar2;
      dVar1 = param_2[1];
    }
    if (param_3[1] < dVar1 * 0.5 + dVar2) {
      param_1[1] = param_3[1] + dVar1 * -0.5;
    }
  }
  return;
}



// FUNCTION 146a88e6e FUN_146a88e6e body=552 status=ok
// SIG undefined FUN_146a88e6e(void)

undefined1 * FUN_146a88e6e(longlong *param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar10 = 1.0 / (param_3[7] * param_3[10] - param_3[9] * param_3[8]);
  fVar9 = param_3[7] * fVar10;
  fVar8 = -param_3[9] * fVar10;
  fVar7 = -param_3[8] * fVar10;
  fVar10 = fVar10 * param_3[10];
  local_98 = (double)(fVar7 * *(float *)(param_4 + 0x20) + fVar9 * *(float *)(param_4 + 0x24) +
                     (-param_3[0xb] * fVar7 - fVar9 * param_3[0xc]));
  local_a0 = (double)(fVar10 * *(float *)(param_4 + 0x20) + fVar8 * *(float *)(param_4 + 0x24) +
                     (-param_3[0xb] * fVar10 - param_3[0xc] * fVar8));
  iVar3 = (int)param_1[0x8b];
  if (0 < iVar3) {
    lVar5 = 0x132;
    uVar6 = 0;
    do {
      plVar4 = (longlong *)param_1[0x8a];
      if ((longlong *)param_1[0x8a] == (longlong *)0x0) {
        plVar4 = param_1 + 0x3c;
      }
      if (*(int *)((longlong)plVar4 + lVar5 + -0x1a) == *(int *)(param_4 + 0x58)) {
        if (*(char *)((longlong)plVar4 + lVar5) != '\0') break;
        local_a8 = (double)param_3[1];
        local_b0 = (double)*param_3;
        cVar1 = (**(code **)(*param_1 + 0x248))(param_1,uVar6 & 0xffffffff,&local_a0,&local_b0);
        if (cVar1 != '\0') {
          uVar2 = 1;
          goto LAB_146a8901b;
        }
        iVar3 = (int)param_1[0x8b];
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x138;
    } while ((longlong)uVar6 < (longlong)iVar3);
  }
  uVar2 = 0;
LAB_146a8901b:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a89098 FUN_146a89098 body=353 status=ok
// SIG undefined FUN_146a89098(void)

undefined1 * FUN_146a89098(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < (longlong)*(int *)(param_1 + 0x458)) {
    lVar3 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x450) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x450);
    }
    lVar2 = 0;
    do {
      if (*(int *)(lVar3 + 0x118 + lVar2) == *(int *)(param_4 + 0x58)) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8 + lVar2);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(lVar3 + 0x118 + lVar2) = 0xffffffff;
        *(undefined1 *)(lVar3 + 0x130 + lVar2) = 1;
        if (*(char *)(lVar3 + 0x132 + lVar2) == '\x01') {
          *(undefined1 *)(lVar3 + 0x132 + lVar2) = 0;
          *param_2 = 0;
          param_2[0x20] = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          goto LAB_146a89114;
        }
        local_e8[0] = 1;
        local_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        memset(local_c0,0,0x88);
        local_38 = 0x100020702;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_1403d4c6e(param_2,local_e8);
        FUN_14493db24(local_e8);
        goto LAB_146a89132;
      }
      lVar2 = lVar2 + 0x138;
    } while ((longlong)*(int *)(param_1 + 0x458) * 0x138 - lVar2 != 0);
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
LAB_146a89114:
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a89132:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a891fa FUN_146a891fa body=376 status=ok
// SIG undefined FUN_146a891fa(void)

double * FUN_146a891fa(longlong param_1,double *param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = param_1 + 0x1e0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x450);
  }
  lVar3 = (longlong)param_3 * 0x138;
  dVar1 = param_4[1] - *(double *)(lVar4 + 0xc0 + lVar3);
  dVar2 = *param_4 - *(double *)(lVar4 + 0xb8 + lVar3);
  if ((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    dVar7 = (double)FUN_144afd35e(dVar1,dVar2);
    fVar5 = cosf((float)dVar7);
    fVar6 = sinf((float)dVar7);
    fVar8 = (float)((double)fVar5 / (*(double *)(lVar4 + lVar3 + 0xd8) * 0.5));
    fVar9 = (float)((double)fVar6 / (*(double *)(lVar4 + lVar3 + 0xe0) * 0.5));
    fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
    if (1.0 / fVar8 < (float)(dVar2 * dVar2 + dVar1 * dVar1)) {
      fVar8 = 1.0 / SQRT(fVar8);
      dVar1 = (double)(fVar6 * fVar8);
      dVar2 = (double)(fVar5 * fVar8);
    }
  }
  *param_2 = dVar2;
  param_2[1] = dVar1;
  return param_2;
}



// FUNCTION 146a89372 FUN_146a89372 body=256 status=ok
// SIG undefined FUN_146a89372(void)

undefined8 FUN_146a89372(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  double local_50;
  double dStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x450);
  if (*(longlong *)(param_1 + 0x450) == 0) {
    lVar3 = param_1 + 0x1e0;
  }
  lVar4 = (longlong)param_2 * 0x138;
  FUN_146a891fa(param_1,&local_50,(longlong)param_2,param_3);
  lVar3 = lVar3 + lVar4;
  *(double *)(lVar3 + 0xa8) = local_50;
  *(double *)(lVar3 + 0xb0) = dStack_48;
  lVar2 = *(longlong *)(param_1 + 0x450);
  if (*(longlong *)(param_1 + 0x450) == 0) {
    lVar2 = param_1 + 0x1e0;
  }
  dStack_48 = *(double *)(lVar3 + 0xb0) + *(double *)(lVar2 + 0xc0 + lVar4);
  local_50 = *(double *)(lVar3 + 0xa8) + *(double *)(lVar2 + 0xb8 + lVar4);
  FUN_146a88d84(&local_50,lVar3 + 0xe8,param_4);
  dVar1 = *(double *)(lVar2 + 0xc0 + lVar4);
  *(double *)(lVar3 + 0xa8) = local_50 - *(double *)(lVar2 + 0xb8 + lVar4);
  *(double *)(lVar3 + 0xb0) = dStack_48 - dVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a89474 FUN_146a89474 body=2369 status=ok
// SIG undefined FUN_146a89474(void)

void FUN_146a89474(longlong *param_1,float *param_2,undefined8 param_3,float param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  double *pdVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  byte bVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  undefined1 auStack_148 [32];
  byte local_128;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  float *local_108;
  float *local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(uint *)(param_1 + 0x8f) & 0xfffffffe) == 4) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    *(float *)(param_1 + 0x90) =
         (*(float *)((longlong)param_1 + (ulonglong)(1 < *(uint *)(param_1 + 0x8f)) * 4 + 0x460) -
         *(float *)(param_1 + 0x90)) * param_4 * 3.0 + *(float *)(param_1 + 0x90);
  }
  fVar31 = param_2[2];
  fVar24 = fVar31 * *param_2;
  if (fVar31 * *param_2 <= param_2[1] * fVar31) {
    fVar24 = param_2[1] * fVar31;
  }
  fVar31 = fVar24 * 0.0009765625 * (1.0 / fVar31);
  plVar20 = param_1 + 0x3c;
  if (0 < (int)param_1[0x8b]) {
    lVar18 = 0x120;
    uVar21 = 0;
    iVar23 = 0;
    local_118 = plVar20;
    do {
      plVar17 = (longlong *)param_1[0x8a];
      if ((longlong *)param_1[0x8a] == (longlong *)0x0) {
        plVar17 = plVar20;
      }
      if (*(char *)((longlong)plVar17 + lVar18 + 0x12) == '\x01') {
        fVar24 = *(float *)((longlong)plVar17 + lVar18 + -4) + param_4;
        *(float *)((longlong)plVar17 + lVar18 + -4) = fVar24;
        if (*(float *)(param_1 + 0x8e) <= fVar24 && fVar24 != *(float *)(param_1 + 0x8e)) {
          *(undefined1 *)((longlong)plVar17 + lVar18 + 0x12) = 0;
          *(int *)(param_1 + 0x90) = (int)param_1[0x8c];
          if ((*(byte *)((longlong)param_1 + 0x47c) & 4) == 0) {
            uVar11 = ((undefined8 *)((longlong)plVar17 + lVar18))[1];
            puVar15 = (undefined8 *)((longlong)plVar17 + lVar18 + -0x68);
            *puVar15 = *(undefined8 *)((longlong)plVar17 + lVar18);
            puVar15[1] = uVar11;
          }
          local_f8 = (double)param_2[1];
          local_100 = (float *)(double)*param_2;
          (**(code **)(*param_1 + 0x248))
                    (param_1,uVar21 & 0xffffffff,(longlong)plVar17 + lVar18,&local_100);
        }
      }
      if (*(char *)((longlong)plVar17 + lVar18 + 0x11) == '\x01') {
        if ((fVar31 != *(float *)(param_1 + 0x91)) ||
           (NAN(fVar31) || NAN(*(float *)(param_1 + 0x91)))) goto LAB_146a89659;
      }
      else {
LAB_146a89659:
        fVar25 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xf0);
        fVar24 = param_2[1];
        fVar27 = fVar31;
        if ((fVar25 < -1.0) || (fVar27 = fVar24, fVar25 < 0.0)) {
          fVar24 = fVar25 * fVar27 + fVar24;
        }
        else if (fVar25 <= 1.0) {
          fVar24 = fVar25 * fVar24;
        }
        else {
          fVar24 = fVar25 * fVar31;
        }
        fVar26 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xf8);
        fVar27 = *param_2;
        fVar25 = fVar31;
        if ((fVar26 < -1.0) || (fVar25 = fVar27, fVar26 < 0.0)) {
          fVar27 = fVar26 * fVar25 + fVar27;
        }
        else if (fVar26 <= 1.0) {
          fVar27 = fVar26 * fVar27;
        }
        else {
          fVar27 = fVar26 * fVar31;
        }
        *(double *)((longlong)plVar17 + lVar18 + -0x58) = (double)fVar27;
        *(double *)((longlong)plVar17 + lVar18 + -0x50) = (double)fVar24;
        puVar15 = (undefined8 *)((longlong)plVar17 + lVar18 + -0x58);
        uVar11 = puVar15[1];
        puVar1 = (undefined8 *)((longlong)plVar17 + lVar18 + -0x68);
        *puVar1 = *puVar15;
        puVar1[1] = uVar11;
        fVar25 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xe0);
        fVar24 = param_2[1];
        fVar27 = fVar31;
        if ((fVar25 < -1.0) || (fVar27 = fVar24, fVar25 < 0.0)) {
          fVar24 = fVar25 * fVar27 + fVar24;
        }
        else if (fVar25 <= 1.0) {
          fVar24 = fVar25 * fVar24;
        }
        else {
          fVar24 = fVar25 * fVar31;
        }
        fVar26 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xe8);
        fVar27 = *param_2;
        fVar25 = fVar31;
        if ((fVar26 < -1.0) || (fVar25 = fVar27, fVar26 < 0.0)) {
          fVar27 = fVar26 * fVar25 + fVar27;
        }
        else if (fVar26 <= 1.0) {
          fVar27 = fVar26 * fVar27;
        }
        else {
          fVar27 = fVar26 * fVar31;
        }
        *(double *)((longlong)plVar17 + lVar18 + -0x48) = (double)fVar27;
        *(double *)((longlong)plVar17 + lVar18 + -0x40) = (double)fVar24;
        fVar25 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xc0);
        fVar24 = param_2[1];
        fVar27 = fVar31;
        if ((fVar25 < -1.0) || (fVar27 = fVar24, fVar25 < 0.0)) {
          fVar24 = fVar25 * fVar27 + fVar24;
        }
        else if (fVar25 <= 1.0) {
          fVar24 = fVar25 * fVar24;
        }
        else {
          fVar24 = fVar25 * fVar31;
        }
        fVar26 = (float)*(double *)((longlong)plVar17 + lVar18 + -200);
        fVar27 = *param_2;
        fVar25 = fVar31;
        if ((fVar26 < -1.0) || (fVar25 = fVar27, fVar26 < 0.0)) {
          fVar27 = fVar26 * fVar25 + fVar27;
        }
        else if (fVar26 <= 1.0) {
          fVar27 = fVar26 * fVar27;
        }
        else {
          fVar27 = fVar26 * fVar31;
        }
        *(double *)((longlong)plVar17 + lVar18 + -0x28) = (double)fVar27;
        *(double *)((longlong)plVar17 + lVar18 + -0x20) = (double)fVar24;
        fVar25 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xd0);
        fVar24 = param_2[1];
        fVar27 = fVar31;
        if ((fVar25 < -1.0) || (fVar27 = fVar24, fVar25 < 0.0)) {
          fVar24 = fVar25 * fVar27 + fVar24;
        }
        else if (fVar25 <= 1.0) {
          fVar24 = fVar25 * fVar24;
        }
        else {
          fVar24 = fVar25 * fVar31;
        }
        fVar26 = (float)*(double *)((longlong)plVar17 + lVar18 + -0xd8);
        fVar27 = *param_2;
        fVar25 = fVar31;
        if ((fVar26 < -1.0) || (fVar25 = fVar27, fVar26 < 0.0)) {
          fVar27 = fVar26 * fVar25 + fVar27;
        }
        else if (fVar26 <= 1.0) {
          fVar27 = fVar26 * fVar27;
        }
        else {
          fVar27 = fVar26 * fVar31;
        }
        *(double *)((longlong)plVar17 + lVar18 + -0x38) = (double)fVar27;
        *(double *)((longlong)plVar17 + lVar18 + -0x30) = (double)fVar24;
        puVar3 = (undefined4 *)((longlong)plVar17 + lVar18 + -0xb8);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        puVar2 = (undefined4 *)((longlong)plVar17 + lVar18 + -0x18);
        *puVar2 = *puVar3;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        *(undefined1 *)((longlong)plVar17 + lVar18 + 0x11) = 1;
      }
      iVar13 = *(int *)((longlong)plVar17 + lVar18 + -8);
      bVar22 = *(byte *)((longlong)plVar17 + lVar18 + 0x10);
      if ((-1 < iVar13) || ((bVar22 & 1) != 0)) {
        *(undefined1 *)((longlong)plVar17 + lVar18 + 0x10) = 0;
        dVar28 = *(double *)((longlong)plVar17 + lVar18 + -0x70);
        dVar6 = (dVar28 + dVar28) / *(double *)((longlong)plVar17 + lVar18 + -0x40);
        dVar28 = *(double *)((longlong)plVar17 + lVar18 + -0x78);
        dVar28 = (dVar28 + dVar28) / *(double *)((longlong)plVar17 + lVar18 + -0x48);
        fVar24 = (float)(dVar28 * dVar28 + dVar6 * dVar6);
        bVar22 = (bVar22 ^ 1) & -1 < iVar13;
        fVar27 = SQRT(fVar24);
        dVar30 = (double)(1.0 / fVar27);
        dVar6 = dVar6 * dVar30;
        dVar28 = dVar28 * dVar30;
        dVar30 = 0.0;
        if (fVar24 <= 1e-08) {
          dVar28 = 0.0;
          dVar6 = 0.0;
          dVar29 = 0.0;
        }
        else {
          dVar29 = ABS(dVar6);
          dVar30 = ABS(dVar28);
        }
        if (dVar29 <= dVar30) {
          dVar30 = 1.0;
          if ((dVar28 != 0.0) || (NAN(dVar28))) {
            dVar30 = dVar6 * dVar6;
            dVar29 = dVar28 * dVar28;
            goto LAB_146a898c8;
          }
        }
        else {
          dVar30 = dVar28 * dVar28;
          dVar29 = dVar6 * dVar6;
LAB_146a898c8:
          dVar30 = SQRT(dVar30 / dVar29 + 1.0);
        }
        lVar19 = (longlong)plVar17 + lVar18 + -0xa8;
        dVar29 = *(double *)((longlong)plVar17 + lVar18 + -0x10);
        dVar4 = *(double *)((longlong)plVar17 + lVar18 + -0x18);
        cVar12 = FUN_1403e7f2a(lVar19);
        if (cVar12 == '\0') {
          pdVar14 = (double *)&DAT_14c967908;
          if (uVar21 == 0) {
            pdVar14 = (double *)&DAT_14c9678f8;
          }
          local_100 = (float *)*pdVar14;
        }
        else {
          FUN_1410e4a6a(lVar19,&local_100);
        }
        lVar19 = (longlong)plVar17 + lVar18 + -0x90;
        cVar12 = FUN_1403e7f2a(lVar19);
        if (cVar12 == '\0') {
          puVar15 = &DAT_14c967910;
          if (uVar21 == 0) {
            puVar15 = &DAT_14c967900;
          }
          local_108 = (float *)*puVar15;
        }
        else {
          FUN_1410e4a6a(lVar19,&local_108);
        }
        plVar20 = local_118;
        dVar7 = (double)fVar27;
        FUN_14627ed32(DAT_14c98e618,2);
        plVar16 = (longlong *)FUN_144a81a0a();
        (**(code **)(*plVar16 + 0x60))(plVar16,&local_10c,DAT_14c9680a8);
        local_110 = local_10c;
        local_128 = bVar22;
        FUN_142901fde(&local_110,local_100,(float)(dVar28 * dVar4 * dVar7 * (double)(float)dVar30),
                      *(undefined1 *)((longlong)plVar17 + lVar18 + -0x120));
        if (*(char *)((longlong)plVar17 + lVar18 + -0x120) == '\0') {
          local_128 = bVar22;
          FUN_142901fde(&local_110,local_108,
                        CONCAT44(0x80000000,-(float)(dVar6 * dVar29 * dVar7 * (double)(float)dVar30)
                                ),0);
        }
        iVar13 = *(int *)((longlong)plVar17 + lVar18 + -8);
      }
      iVar23 = iVar23 + (uint)(iVar13 != -1);
      uVar21 = uVar21 + 1;
      lVar18 = lVar18 + 0x138;
    } while ((longlong)uVar21 < (longlong)(int)param_1[0x8b]);
    bVar5 = 0 < (int)param_1[0x8b];
    *(float *)(param_1 + 0x91) = fVar31;
    if (iVar23 == 0) goto LAB_146a89c0f;
LAB_146a89c4b:
    *(undefined4 *)(param_1 + 0x8f) = 0;
    goto switchD_146a89c32_caseD_3;
  }
  *(float *)(param_1 + 0x91) = fVar31;
  bVar5 = false;
LAB_146a89c0f:
  if ((*(byte *)((longlong)param_1 + 0x47c) & 4) != 0) goto LAB_146a89c4b;
  switch((int)param_1[0x8f]) {
  case 0:
    *(undefined4 *)(param_1 + 0x8f) = 1;
    fVar31 = *(float *)(param_1 + 0x8d);
    break;
  case 1:
    param_4 = *(float *)((longlong)param_1 + 0x484) - param_4;
    *(float *)((longlong)param_1 + 0x484) = param_4;
    if (0.0 < param_4) goto switchD_146a89c32_caseD_3;
    fVar31 = *(float *)((longlong)param_1 + 0x46c);
    if (fVar31 <= 0.0) goto LAB_146a89da7;
    *(undefined4 *)(param_1 + 0x8f) = 2;
    break;
  case 2:
    param_4 = *(float *)((longlong)param_1 + 0x484) - param_4;
    *(float *)((longlong)param_1 + 0x484) = param_4;
    if (0.0 < param_4) goto switchD_146a89c32_caseD_3;
    if (bVar5) {
      lVar18 = 200;
      lVar19 = 0;
      do {
        plVar17 = (longlong *)param_1[0x8a];
        if ((longlong *)param_1[0x8a] == (longlong *)0x0) {
          plVar17 = plVar20;
        }
        puVar2 = (undefined4 *)((longlong)plVar17 + lVar18);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)plVar17 + lVar18 + -0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        lVar19 = lVar19 + 1;
        lVar18 = lVar18 + 0x138;
      } while (lVar19 < (int)param_1[0x8b]);
    }
    goto LAB_146a89da7;
  default:
    goto switchD_146a89c32_caseD_3;
  case 4:
    *(undefined4 *)(param_1 + 0x8f) = 5;
    fVar31 = *(float *)((longlong)param_1 + 0x474);
    break;
  case 5:
    param_4 = *(float *)((longlong)param_1 + 0x484) - param_4;
    *(float *)((longlong)param_1 + 0x484) = param_4;
    if (0.0 < param_4) goto switchD_146a89c32_caseD_3;
LAB_146a89da7:
    *(undefined4 *)(param_1 + 0x8f) = 3;
    goto switchD_146a89c32_caseD_3;
  }
  *(float *)((longlong)param_1 + 0x484) = fVar31;
switchD_146a89c32_caseD_3:
  if ((local_f0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a89db6 FUN_146a89db6 body=62 status=ok
// SIG undefined FUN_146a89db6(void)

void FUN_146a89db6(longlong param_1,byte param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x460 + (ulonglong)(1 < *(uint *)(param_1 + 0x478)) * 4);
    }
    *(undefined4 *)(param_1 + 0x480) = uVar1;
  }
  *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffe | (uint)param_2;
  return;
}



// FUNCTION 146a89df4 FUN_146a89df4 body=85 status=ok
// SIG undefined FUN_146a89df4(void)

longlong FUN_146a89df4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x278);
  *(uint *)(param_1 + 0x278) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x27c) < iVar1 + 1U) {
    FUN_146abe1b6(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x270);
  if (*(longlong *)(param_1 + 0x270) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x138 + lVar2;
  thunk_FUN_146abe2e2(lVar2);
  return lVar2;
}



// FUNCTION 146a89e4a FUN_146a89e4a body=204 status=ok
// SIG undefined FUN_146a89e4a(void)

undefined1 * FUN_146a89e4a(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar5;
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
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar5;
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
  puVar6 = (undefined8 *)(param_2 + 0x28);
  puVar7 = (undefined8 *)(param_1 + 0x28);
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1413a517a(param_1 + 0x78,param_2 + 0x78);
  FUN_1413a517a(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 146a89f16 FUN_146a89f16 body=71 status=ok
// SIG undefined FUN_146a89f16(void)

void FUN_146a89f16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x270);
  if (*(longlong *)(param_1 + 0x270) == 0) {
    lVar1 = param_1;
  }
  FUN_146abe3d0(lVar1,*(undefined4 *)(param_1 + 0x278));
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(int *)(param_1 + 0x27c) == 0) {
    return;
  }
  FUN_146abe3fa(param_1);
  return;
}



// FUNCTION 146a89f5e FUN_146a89f5e body=90 status=ok
// SIG undefined FUN_146a89f5e(void)

void FUN_146a89f5e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_146a89f16(param_1 + 0x1e0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0xa8;
    do {
      uVar1 = FUN_146a89df4(param_1 + 0x1e0);
      FUN_146a89e4a(uVar1,lVar3);
      lVar3 = lVar3 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146a89fb8 FUN_146a89fb8 body=121 status=ok
// SIG undefined FUN_146a89fb8(void)

void FUN_146a89fb8(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((int)param_1[4] != 0) {
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 3,0,0,0x10);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)*param_1;
  if (plVar3 != plVar2) {
    *param_1 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 146a8a032 FUN_146a8a032 body=394 status=ok
// SIG undefined FUN_146a8a032(void)

longlong FUN_146a8a032(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined2 *)(param_1 + 0x1a8) = 0x101;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined2 *)(param_1 + 0x1c0) = 0x100;
  *(undefined2 *)(param_1 + 0x1c8) = 0x100;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 500) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x224) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"Slider",1);
  uVar2 = FUN_145817a5c(lVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x240) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0x244) = 1;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x278) = 1;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x29c) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8a1be FUN_146a8a1be body=115 status=ok
// SIG undefined FUN_146a8a1be(void)

longlong * FUN_146a8a1be(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a84ac2(*param_1,param_3);
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



// FUNCTION 146a8a232 FUN_146a8a232 body=153 status=ok
// SIG undefined FUN_146a8a232(void)

void FUN_146a8a232(longlong param_1)

{
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  FUN_1449db362(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a8a2cc FUN_146a8a2cc body=80 status=ok
// SIG undefined FUN_146a8a2cc(void)

void FUN_146a8a2cc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 8,0,0,0x10);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  *param_1 = *param_2;
  param_1[1] = 1;
  return;
}



// FUNCTION 146a8a31c FUN_146a8a31c body=84 status=ok
// SIG undefined FUN_146a8a31c(void)

void FUN_146a8a31c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[4] != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 2,0,0,0x10);
      param_1[4] = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 146a8a370 FUN_146a8a370 body=269 status=ok
// SIG undefined FUN_146a8a370(void)

void FUN_146a8a370(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_14290214a(param_1 + 0x1e0);
  }
  else {
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_30 = plVar5;
    }
    local_38 = lVar4;
    FUN_140764512(param_1 + 0x1e0,&local_38);
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  FUN_140163244(param_1,4);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8a47e FUN_146a8a47e body=303 status=ok
// SIG undefined FUN_146a8a47e(void)

void FUN_146a8a47e(longlong param_1,float param_2,float param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x300);
  if ((*(float *)(lVar2 + 0x208) == param_2) && (!NAN(*(float *)(lVar2 + 0x208)) && !NAN(param_2)))
  {
    if ((*(float *)(lVar2 + 0x20c) == param_3) && (!NAN(*(float *)(lVar2 + 0x20c)) && !NAN(param_3))
       ) goto LAB_146a8a4c7;
  }
  *(float *)(lVar2 + 0x208) = param_2;
  *(float *)(lVar2 + 0x20c) = param_3;
  uVar5 = 0;
  if (((param_3 != 0.0) || (NAN(param_3))) || (*(char *)(lVar2 + 0x214) == '\x01')) {
    if ((1.0 < param_3) && (*(char *)(lVar2 + 0x214) == '\x01')) goto LAB_146a8a52a;
  }
  else {
    uVar5 = 0x3f800000;
LAB_146a8a52a:
    *(undefined4 *)(lVar2 + 0x20c) = uVar5;
  }
  FUN_140163244(lVar2,1);
  FUN_14020e58a(param_1,local_48);
  FUN_146a92022(local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  uVar4 = (**(code **)(*DAT_14c98e618 + 0x60))();
  *(undefined8 *)(param_1 + 0x340) = uVar4;
  if (((param_4 != '\0') && (*(int *)(param_1 + 0x318) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x310), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  }
LAB_146a8a4c7:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a8a5ae FUN_146a8a5ae body=111 status=ok
// SIG undefined FUN_146a8a5ae(void)

undefined8 * FUN_146a8a5ae(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f13f80;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  FUN_140a5808e(param_1 + 0x4f,param_1);
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_140a5808e((longlong)param_1 + 0x27c,param_1);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_140a5808e(param_1 + 0x52,param_1);
  return param_1;
}



// FUNCTION 146a8a61e FUN_146a8a61e body=59 status=ok
// SIG undefined FUN_146a8a61e(void)

void FUN_146a8a61e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}


