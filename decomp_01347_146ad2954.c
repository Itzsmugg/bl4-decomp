// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ad2954 FUN_146ad2954 body=122 status=ok
// SIG undefined FUN_146ad2954(void)

undefined8 *
FUN_146ad2954(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_149f1b380;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_146a4902a(param_1 + 1,param_4);
  uVar4 = FUN_144a3f946();
  param_1[3] = uVar4;
  *param_1 = &PTR_FUN_149f1b310;
  param_1[4] = *param_2;
  lVar3 = param_2[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



// FUNCTION 146ad29ce FUN_146ad29ce body=83 status=ok
// SIG undefined FUN_146ad29ce(void)

undefined8 * FUN_146ad29ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b310;
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
  *param_1 = &PTR_LAB_149f1b380;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ad2a26 FUN_146ad2a26 body=81 status=ok
// SIG undefined FUN_146ad2a26(void)

undefined8 FUN_146ad2a26(longlong param_1)

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



// FUNCTION 146ad2a7e FUN_146ad2a7e body=89 status=ok
// SIG undefined FUN_146ad2a7e(void)

bool FUN_146ad2a7e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad2ac9;
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
LAB_146ad2ac9:
  return lVar6 == param_2;
}



// FUNCTION 146ad2b00 FUN_146ad2b00 body=64 status=ok
// SIG undefined FUN_146ad2b00(void)

void FUN_146ad2b00(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_146ad2d6e(*param_2,param_1);
  return;
}



// FUNCTION 146ad2b40 FUN_146ad2b40 body=64 status=ok
// SIG undefined FUN_146ad2b40(void)

void FUN_146ad2b40(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_146ad2d6e(*param_2,param_1);
  return;
}



// FUNCTION 146ad2b80 FUN_146ad2b80 body=98 status=ok
// SIG undefined FUN_146ad2b80(void)

void FUN_146ad2b80(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_146ad2d6e(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad2bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad2be2 FUN_146ad2be2 body=202 status=ok
// SIG undefined FUN_146ad2be2(void)

undefined4 FUN_146ad2be2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    iVar7 = (int)plVar8[1];
    lVar9 = 0;
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146ad2c0c;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_146ad2c0c:
  pcVar3 = *(code **)(param_1 + 0x30);
  iVar7 = *(int *)(param_1 + 0x38);
  local_40 = 0;
  local_38 = 0;
  FUN_146a4902a(&local_40,param_1 + 8);
  uVar6 = (*pcVar3)(iVar7 + lVar9,&local_40);
  if (!bVar4) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146ad2cae FUN_146ad2cae body=188 status=ok
// SIG undefined FUN_146ad2cae(void)

ulonglong FUN_146ad2cae(longlong param_1)

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
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad2d0e:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146ad2d0e;
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
      pcVar5 = *(code **)(param_1 + 0x30);
      iVar7 = *(int *)(param_1 + 0x38);
      local_40 = 0;
      local_38 = 0;
      FUN_146a4902a(&local_40,param_1 + 8);
      (*pcVar5)(lVar4 + iVar7,&local_40);
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146ad2d6e FUN_146ad2d6e body=111 status=ok
// SIG undefined FUN_146ad2d6e(void)

undefined8 * FUN_146ad2d6e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_149f1b380;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_146a4902a(param_1 + 1,param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_149f1b310;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  return param_1;
}



// FUNCTION 146ad2dde FUN_146ad2dde body=313 status=ok
// SIG undefined FUN_146ad2dde(void)

longlong * FUN_146ad2dde(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146ad2eda:
    *puVar5 = &PTR_LAB_149f05530;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1b3f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ad2eda;
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
    *puVar5 = &PTR_FUN_149f1b3f0;
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



// FUNCTION 146ad2f18 FUN_146ad2f18 body=64 status=ok
// SIG undefined FUN_146ad2f18(void)

undefined8 * FUN_146ad2f18(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b3f0;
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



// FUNCTION 146ad2f5c FUN_146ad2f5c body=81 status=ok
// SIG undefined FUN_146ad2f5c(void)

undefined8 FUN_146ad2f5c(longlong param_1)

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



// FUNCTION 146ad2fb4 FUN_146ad2fb4 body=89 status=ok
// SIG undefined FUN_146ad2fb4(void)

bool FUN_146ad2fb4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad2fff;
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
LAB_146ad2fff:
  return lVar6 == param_2;
}



// FUNCTION 146ad302a FUN_146ad302a body=118 status=ok
// SIG undefined FUN_146ad302a(void)

void FUN_146ad302a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f1b3f0;
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



// FUNCTION 146ad30a0 FUN_146ad30a0 body=118 status=ok
// SIG undefined FUN_146ad30a0(void)

void FUN_146ad30a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f1b3f0;
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



// FUNCTION 146ad3116 FUN_146ad3116 body=156 status=ok
// SIG undefined FUN_146ad3116(void)

void FUN_146ad3116(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f1b3f0;
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
                    /* WARNING: Could not recover jumptable at 0x000146ad31a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad31b2 FUN_146ad31b2 body=105 status=ok
// SIG undefined FUN_146ad31b2(void)

undefined8 FUN_146ad31b2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad3206:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ad3206;
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



// FUNCTION 146ad321c FUN_146ad321c body=143 status=ok
// SIG undefined FUN_146ad321c(void)

ulonglong FUN_146ad321c(longlong param_1)

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
LAB_146ad328a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad328a;
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



// FUNCTION 146ad32ac FUN_146ad32ac body=313 status=ok
// SIG undefined FUN_146ad32ac(void)

longlong * FUN_146ad32ac(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146ad33a8:
    *puVar5 = &PTR_LAB_149f1b4d0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1b460;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ad33a8;
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
    *puVar5 = &PTR_LAB_149f1b4d0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f1b460;
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



// FUNCTION 146ad33e6 FUN_146ad33e6 body=64 status=ok
// SIG undefined FUN_146ad33e6(void)

undefined8 * FUN_146ad33e6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b460;
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



// FUNCTION 146ad342a FUN_146ad342a body=81 status=ok
// SIG undefined FUN_146ad342a(void)

undefined8 FUN_146ad342a(longlong param_1)

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



// FUNCTION 146ad3482 FUN_146ad3482 body=89 status=ok
// SIG undefined FUN_146ad3482(void)

bool FUN_146ad3482(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad34cd;
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
LAB_146ad34cd:
  return lVar6 == param_2;
}



// FUNCTION 146ad3504 FUN_146ad3504 body=118 status=ok
// SIG undefined FUN_146ad3504(void)

void FUN_146ad3504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1b460;
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



// FUNCTION 146ad357a FUN_146ad357a body=118 status=ok
// SIG undefined FUN_146ad357a(void)

void FUN_146ad357a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1b460;
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



// FUNCTION 146ad35f0 FUN_146ad35f0 body=156 status=ok
// SIG undefined FUN_146ad35f0(void)

void FUN_146ad35f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f1b4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1b460;
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
                    /* WARNING: Could not recover jumptable at 0x000146ad367c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad368c FUN_146ad368c body=105 status=ok
// SIG undefined FUN_146ad368c(void)

undefined8 FUN_146ad368c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad36e0:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ad36e0;
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



// FUNCTION 146ad36f6 FUN_146ad36f6 body=159 status=ok
// SIG undefined FUN_146ad36f6(void)

ulonglong FUN_146ad36f6(longlong param_1)

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
  undefined1 auStack_68 [44];
  undefined1 local_3c [24];
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad3773:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad3773;
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
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_3c), local_24 == '\x01'
       )) {
      local_24 = '\0';
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ad3798 FUN_146ad3798 body=313 status=ok
// SIG undefined FUN_146ad3798(void)

longlong * FUN_146ad3798(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146ad3894:
    *puVar5 = &PTR_LAB_149f056a0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f1b540;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146ad3894;
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
    *puVar5 = &PTR_FUN_149f1b540;
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



// FUNCTION 146ad38d2 FUN_146ad38d2 body=64 status=ok
// SIG undefined FUN_146ad38d2(void)

undefined8 * FUN_146ad38d2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1b540;
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



// FUNCTION 146ad3916 FUN_146ad3916 body=81 status=ok
// SIG undefined FUN_146ad3916(void)

undefined8 FUN_146ad3916(longlong param_1)

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



// FUNCTION 146ad396e FUN_146ad396e body=89 status=ok
// SIG undefined FUN_146ad396e(void)

bool FUN_146ad396e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146ad39b9;
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
LAB_146ad39b9:
  return lVar6 == param_2;
}



// FUNCTION 146ad39e4 FUN_146ad39e4 body=118 status=ok
// SIG undefined FUN_146ad39e4(void)

void FUN_146ad39e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f1b540;
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



// FUNCTION 146ad3a5a FUN_146ad3a5a body=118 status=ok
// SIG undefined FUN_146ad3a5a(void)

void FUN_146ad3a5a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f1b540;
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



// FUNCTION 146ad3ad0 FUN_146ad3ad0 body=156 status=ok
// SIG undefined FUN_146ad3ad0(void)

void FUN_146ad3ad0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f1b540;
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
                    /* WARNING: Could not recover jumptable at 0x000146ad3b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ad3b6c FUN_146ad3b6c body=102 status=ok
// SIG undefined FUN_146ad3b6c(void)

undefined8 FUN_146ad3b6c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146ad3bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 146ad3bd2 FUN_146ad3bd2 body=100 status=ok
// SIG undefined FUN_146ad3bd2(void)

ulonglong FUN_146ad3bd2(longlong param_1)

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
LAB_146ad3c2b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad3c2b;
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



// FUNCTION 146ad3c36 FUN_146ad3c36 body=1521 status=ok
// SIG undefined FUN_146ad3c36(void)

void FUN_146ad3c36(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_9b8 [32];
  undefined1 *local_998;
  undefined1 local_981;
  undefined8 local_980;
  longlong *local_978;
  undefined1 local_968 [96];
  undefined1 local_908;
  undefined8 local_900;
  undefined4 local_8f8;
  undefined8 local_8f0;
  longlong *local_8e8;
  undefined4 local_8e0;
  undefined1 local_8dc;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_8c1;
  undefined8 local_8c0;
  longlong *local_8b8;
  undefined1 local_8a8 [96];
  undefined1 local_848;
  undefined8 local_840;
  undefined4 local_838;
  undefined1 local_830 [4];
  undefined1 local_82c [4];
  longlong *local_828;
  undefined4 local_820;
  undefined8 local_818;
  longlong *local_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined1 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  wchar_t *local_7d8;
  undefined4 local_7d0;
  undefined1 local_5f8 [96];
  undefined1 local_598;
  undefined1 local_590 [40];
  undefined1 local_568 [424];
  longlong *local_3c0;
  undefined4 local_3b8;
  undefined1 local_388 [96];
  undefined1 local_328;
  undefined1 local_320 [40];
  undefined1 local_2f8 [424];
  undefined8 local_150;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  FUN_146a0f1de(local_2f8);
  FUN_1446ddc76(&local_7e0,"MessageLogListingComboButton",1);
  lVar6 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar6 == 0) {
    lVar6 = DAT_14c96b350;
  }
  local_150 = FUN_145a4e810(lVar6,local_7e0,0,0);
  local_ef = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = 1;
  local_7f0 = 0;
  uStack_7e8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  FUN_144a450dc(local_80,&local_7f0);
  FUN_1449db362(&local_7f0);
  local_f0 = 0;
  FUN_146a88148(local_568);
  local_7d8 = L"Error";
  local_7d0 = 5;
  FUN_1446e940c(local_82c,&local_7d8);
  local_7d8 = L"UnrealEd";
  local_7d0 = 8;
  FUN_1446e940c(local_830,&local_7d8);
  FUN_140208bae(&local_828,local_830,local_82c,&DAT_149e06128);
  plVar4 = local_3c0;
  if (local_3c0 != local_828) {
    local_3c0 = local_828;
    if (local_828 != (longlong *)0x0) {
      (**(code **)(*local_828 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  local_3b8 = local_820;
  if (local_828 != (longlong *)0x0) {
    (**(code **)(*local_828 + 0x10))();
  }
  FUN_144a87366(local_8a8,param_2 + 0x1b0);
  local_848 = *(undefined1 *)(param_2 + 0x210);
  local_840 = 0;
  local_838 = 0;
  FUN_140a5d470(&local_840,param_2 + 0x218);
  FUN_1412cc59c(local_388,local_8a8);
  local_328 = local_848;
  FUN_144a450dc(local_320,&local_840);
  FUN_141515cba(local_8a8);
  local_998 = &local_8c1;
  FUN_146abd944(&local_8c0,"SErrorText",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SPopUpErrorText.cpp",0xf);
  if (local_8b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_8b8 + 1) = (int)local_8b8[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x398) = local_8c0;
  *(longlong **)(param_1 + 0x3a0) = local_8b8;
  if (plVar4 != (longlong *)0x0) {
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
  FUN_146a88284(&local_8c0,&local_818,local_568);
  plVar5 = local_138;
  plVar4 = local_810;
  if (local_810 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_810 + 1) = (int)local_810[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_810 + 1) = (int)local_810[1] + 1;
    UNLOCK();
  }
  local_140 = local_818;
  local_138 = local_810;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  local_8e0 = 0;
  local_8dc = 1;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_70 = 0;
  local_6c = 1;
  FUN_144a450dc(local_68,&local_8d8);
  FUN_1449db362(&local_8d8);
  FUN_146a88148(&local_7d8);
  FUN_144a87366(local_968,param_2 + 0x1b0);
  local_908 = *(undefined1 *)(param_2 + 0x210);
  local_900 = 0;
  local_8f8 = 0;
  FUN_140a5d470(&local_900,param_2 + 0x218);
  FUN_1412cc59c(local_5f8,local_968);
  local_598 = local_908;
  FUN_144a450dc(local_590,&local_900);
  FUN_141515cba(local_968);
  local_998 = &local_981;
  FUN_146abd944(&local_980,"SErrorText",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SPopUpErrorText.cpp",0x16);
  if (local_978 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_978 + 1) = (int)local_978[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3a8) = local_980;
  *(longlong **)(param_1 + 0x3b0) = local_978;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_146a88284(&local_980,&local_8f0,&local_7d8);
  plVar3 = local_128;
  plVar5 = local_8e8;
  if (local_8e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_8e8 + 1) = (int)local_8e8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_8e8 + 1) = (int)local_8e8[1] + 1;
    UNLOCK();
  }
  local_130 = local_8f0;
  local_128 = local_8e8;
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
  FUN_146a616ac(param_1,local_2f8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_8e8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_8e8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_8e8)(local_8e8);
      LOCK();
      piVar1 = (int *)((longlong)local_8e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_8e8 + 0x10))(local_8e8);
      }
    }
  }
  if (local_978 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_978 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_978)(local_978);
      LOCK();
      piVar1 = (int *)((longlong)local_978 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_978 + 0x10))(local_978);
      }
    }
  }
  FUN_146a882f8(&local_7d8);
  if (plVar4 != (longlong *)0x0) {
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
  if (local_810 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_810 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_810)(local_810);
      LOCK();
      piVar1 = (int *)((longlong)local_810 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_810 + 0x10))(local_810);
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
      piVar1 = (int *)((longlong)local_8b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_8b8 + 0x10))(local_8b8);
      }
    }
  }
  FUN_146a882f8(local_568);
  FUN_146a0f6a8(local_2f8);
  if ((local_48 ^ (ulonglong)auStack_9b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ad4228 FUN_146ad4228 body=37 status=ok
// SIG undefined FUN_146ad4228(void)

void FUN_146ad4228(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447a1f4a(param_2);
                    /* WARNING: Could not recover jumptable at 0x000146ad424a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar1,*(code **)(*param_1 + 8));
  return;
}



// FUNCTION 146ad424e FUN_146ad424e body=302 status=ok
// SIG undefined FUN_146ad424e(void)

void FUN_146ad424e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 8);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2a0) + 8))
            (*(longlong *)(param_1 + 0x18) + 0x2a0);
  lVar2 = *(longlong *)(param_1 + 8);
  if (iVar1 < 2) {
    plVar3 = (longlong *)FUN_140e82300();
    local_40 = (wchar_t *)*plVar3;
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 8))();
    }
    local_38 = (undefined4)plVar3[1];
  }
  else {
    local_40 = L"Error";
    local_38 = 5;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UnrealEd";
    local_38 = 8;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,&DAT_149e06128);
  }
  (*(code *)**(undefined8 **)(lVar2 + 0x2a0))(lVar2 + 0x2a0,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  (**(code **)(*(longlong *)(param_1 + -0x390) + 0x248))(param_1 + -0x390,1 < iVar1,0,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad4394 FUN_146ad4394 body=138 status=ok
// SIG undefined FUN_146ad4394(void)

undefined8 * FUN_146ad4394(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x380);
  if (plVar3 == (longlong *)0x0) {
LAB_146ad440d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ad440d;
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
    uVar4 = *(undefined8 *)(param_1 + -0x388);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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
  }
  return param_2;
}



// FUNCTION 146ad441e FUN_146ad441e body=386 status=ok
// SIG undefined FUN_146ad441e(void)

void FUN_146ad441e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1a8);
  local_3c = *(char *)(param_2 + 0x1bc);
  if (local_3c == '\x01') {
    local_40 = *(undefined4 *)(param_2 + 0x1b8);
  }
  local_38 = *(undefined1 *)(param_2 + 0x1c0);
  local_30 = 0;
  local_28 = 0;
  FUN_146af763c(&local_30,param_2 + 0x1c8);
  FUN_146ad45a2(param_1,&local_40);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x238);
  uVar1 = *(undefined4 *)(param_2 + 0x1dc);
  uVar2 = *(undefined4 *)(param_2 + 0x1e0);
  uVar3 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x23c) = *(undefined1 *)(param_2 + 0x1ec);
  FUN_140a5aaa0(param_1 + 0x240,param_2 + 0x1f0);
  uVar1 = *(undefined4 *)(param_2 + 0x204);
  uVar2 = *(undefined4 *)(param_2 + 0x208);
  uVar3 = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  *(undefined4 *)(param_1 + 600) = uVar2;
  *(undefined4 *)(param_1 + 0x25c) = uVar3;
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x210);
  FUN_140a51be2(param_1 + 0x268,param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x240);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_146ad4634(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad45a2 FUN_146ad45a2 body=146 status=ok
// SIG undefined FUN_146ad45a2(void)

void FUN_146ad45a2(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x1e8);
  cVar2 = FUN_146ad47e2(puVar1);
  if (cVar2 != '\0') goto LAB_146ad45c2;
  if (puVar1 != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *puVar1 = *param_2;
      uVar3 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1ec) != '\x01') goto LAB_146ad45e2;
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x1ec) = uVar3;
  }
LAB_146ad45e2:
  *(undefined1 *)(param_1 + 0x1f0) = *(undefined1 *)(param_2 + 2);
  FUN_146af763c(param_1 + 0x1f8,param_2 + 4);
  FUN_146ad4634(param_1);
  FUN_140163244(param_1,5);
LAB_146ad45c2:
  FUN_1449db362(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146ad4634 FUN_146ad4634 body=429 status=ok
// SIG undefined FUN_146ad4634(void)

void FUN_146ad4634(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x280) != 0) &&
      (plVar7 = *(longlong **)(param_1 + 0x288), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    iVar5 = (int)plVar7[1];
    local_30 = (code *)0x0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146ad4689;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    local_30 = *(code **)(param_1 + 0x280);
LAB_146ad4689:
    local_28 = plVar7;
    FUN_14697f106(param_1,&local_30);
    plVar7 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  if (((((*(int *)(param_1 + 0x200) == 0) || (*(longlong **)(param_1 + 0x1f8) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x30))(), cVar4 == '\0')) &&
      (lVar6 = FUN_146ad64ee(param_1 + 0x1e8), *(char *)(lVar6 + 4) != '\x01')) ||
     (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x220) == '\x01')) {
    local_30 = FUN_146ad68d0;
    local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
    FUN_146ad674e(local_40,param_1);
    FUN_14697ef1e(param_1,&local_30,*(undefined4 *)(param_1 + 0x290),local_40);
    plVar1 = local_28;
    *(code **)(param_1 + 0x280) = local_30;
    plVar7 = *(longlong **)(param_1 + 0x288);
    if (plVar7 != local_28) {
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x288);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x288) = plVar1;
    }
    plVar7 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ad47e2 FUN_146ad47e2 body=268 status=ok
// SIG undefined FUN_146ad47e2(void)

bool FUN_146ad47e2(float *param_1,float *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[6] == 0.0) || (*(longlong **)(param_1 + 4) == (longlong *)0x0)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 4) + 0x30))();
  }
  if (*(longlong **)(param_2 + 4) == (longlong *)0x0 || param_2[6] == 0.0) {
    if (cVar3 == '\0') {
LAB_146ad4882:
      if (*(char *)(param_1 + 2) == *(char *)(param_2 + 2)) {
        bVar1 = *(byte *)(param_1 + 1);
        bVar5 = (bool)(-(*param_2 == *param_1) & 1);
        if ((bVar1 & 1) == 0) {
          bVar5 = bVar1 == *(byte *)(param_2 + 1);
        }
        bVar5 = (bool)(bVar1 == *(byte *)(param_2 + 1) & bVar5);
        goto LAB_146ad4843;
      }
    }
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_2 + 4) + 0x30))();
    if (cVar3 == cVar4) {
      if (cVar3 != '\0') {
        if ((param_1[6] == 0.0) || (plVar2 = *(longlong **)(param_1 + 4), plVar2 == (longlong *)0x0)
           ) {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_28);
        }
        plVar2 = *(longlong **)(param_2 + 4);
        if (plVar2 == (longlong *)0x0 || param_2[6] == 0.0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        }
        bVar5 = local_28 == local_30;
        goto LAB_146ad4843;
      }
      goto LAB_146ad4882;
    }
  }
  bVar5 = false;
LAB_146ad4843:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 146ad48f0 FUN_146ad48f0 body=130 status=ok
// SIG undefined FUN_146ad48f0(void)

void FUN_146ad48f0(longlong param_1,longlong param_2)

{
  undefined1 auStack_288 [40];
  undefined1 local_260 [424];
  undefined8 local_b8;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *(longlong *)(param_1 + 0x1e0) = param_2;
  if (param_2 == 0) {
    FUN_146ad4974(local_260);
    *(undefined8 *)(param_1 + 0x1e0) = local_b8;
    FUN_146ad4aa0(local_260);
  }
  FUN_146ad4634(param_1);
  FUN_140163244(param_1,1);
  if ((local_18 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad4974 FUN_146ad4974 body=298 status=ok
// SIG undefined FUN_146ad4974(void)

longlong FUN_146ad4974(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"ProgressBar",1);
  uVar2 = FUN_145817dcc(lVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0x40000000;
  local_40 = CONCAT11(1,DAT_14c96b23c);
  local_38 = 0;
  uStack_30 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_40;
  FUN_144a450dc(param_1 + 0x78,&local_38);
  FUN_1449db362(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad4aa0 FUN_146ad4aa0 body=73 status=ok
// SIG undefined FUN_146ad4aa0(void)

void FUN_146ad4aa0(longlong param_1)

{
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1c8);
  if (*(char *)(param_1 + 0x1bc) == '\x01') {
    *(undefined1 *)(param_1 + 0x1bc) = 0;
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146ad4aea FUN_146ad4aea body=22 status=ok
// SIG undefined FUN_146ad4aea(void)

void FUN_146ad4aea(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x208) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x208) = param_2;
  FUN_140163244(param_1,2);
  return;
}



// FUNCTION 146ad4b00 FUN_146ad4b00 body=22 status=ok
// SIG undefined FUN_146ad4b00(void)

void FUN_146ad4b00(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x20c) = param_2;
  FUN_140163244(param_1,2);
  return;
}



// FUNCTION 146ad4b16 FUN_146ad4b16 body=98 status=ok
// SIG undefined FUN_146ad4b16(void)

void FUN_146ad4b16(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = FUN_146ad4b78((undefined4 *)(param_1 + 0x228));
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = param_2[4];
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x228) = *param_2;
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    *(undefined4 *)(param_1 + 0x230) = uVar2;
    *(undefined4 *)(param_1 + 0x234) = uVar3;
    *(undefined1 *)(param_1 + 0x23c) = *(undefined1 *)(param_2 + 5);
    FUN_140a5aaa0(param_1 + 0x240,param_2 + 6);
    FUN_140163244(param_1,2);
  }
  FUN_1449db362(param_2 + 6);
  return;
}



// FUNCTION 146ad4b78 FUN_146ad4b78 body=244 status=ok
// SIG undefined FUN_146ad4b78(void)

bool FUN_146ad4b78(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x20) == 0) || (*(longlong **)(param_1 + 0x18) == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  if (*(longlong **)(param_2 + 0x18) == (longlong *)0x0 || *(int *)(param_2 + 0x20) == 0) {
    if (cVar2 == '\0') {
LAB_146ad4c18:
      if (*(char *)(param_1 + 0x14) == *(char *)(param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if ((*(int *)(param_1 + 0x20) == 0) ||
           (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 == (longlong *)0x0)) {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = *(longlong **)(param_2 + 0x18);
        if (plVar1 == (longlong *)0x0 || *(int *)(param_2 + 0x20) == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_146ad4bd9;
      }
      goto LAB_146ad4c18;
    }
  }
  bVar4 = false;
LAB_146ad4bd9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 146ad4c80 FUN_146ad4c80 body=92 status=ok
// SIG undefined FUN_146ad4c80(void)

void FUN_146ad4c80(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = FUN_146ad4cdc((undefined4 *)(param_1 + 0x250));
  if (cVar4 == '\0') {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x250) = *param_2;
    *(undefined4 *)(param_1 + 0x254) = uVar1;
    *(undefined4 *)(param_1 + 600) = uVar2;
    *(undefined4 *)(param_1 + 0x25c) = uVar3;
    *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 4);
    FUN_140a51be2(param_1 + 0x268,param_2 + 6);
    FUN_140163244(param_1,1);
  }
  FUN_1449db362(param_2 + 6);
  return;
}



// FUNCTION 146ad4cdc FUN_146ad4cdc body=264 status=ok
// SIG undefined FUN_146ad4cdc(void)

bool FUN_146ad4cdc(double *param_1,double *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 4) == 0) || ((longlong *)param_1[3] == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
  }
  if ((longlong *)param_2[3] == (longlong *)0x0 || *(int *)(param_2 + 4) == 0) {
    if (cVar2 == '\0') {
LAB_146ad4d7c:
      if (*(char *)(param_1 + 2) == *(char *)(param_2 + 2)) {
        if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
          bVar4 = (bool)(-(param_2[1] == param_1[1]) & 1);
          goto LAB_146ad4d3d;
        }
      }
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_2[3] + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if ((*(int *)(param_1 + 4) == 0) ||
           (plVar1 = (longlong *)param_1[3], plVar1 == (longlong *)0x0)) {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = (longlong *)param_2[3];
        if (plVar1 == (longlong *)0x0 || *(int *)(param_2 + 4) == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_146ad4d3d;
      }
      goto LAB_146ad4d7c;
    }
  }
  bVar4 = false;
LAB_146ad4d3d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 146ad4de5 FUN_146ad4de5 body=783 status=ok
// SIG undefined FUN_146ad4de5(void)

undefined8
FUN_146ad4de5(undefined8 param_1,float *param_2,double *param_3,double *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_138 [32];
  float *local_118;
  double local_110;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_cc;
  float local_c8;
  byte local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar1 = *param_3;
  local_110 = param_3[1];
  dVar5 = (double)(param_2[1] - (float)(local_110 + local_110));
  dVar2 = (double)(*param_2 - (float)(dVar1 + dVar1));
  fVar9 = (float)(((double)param_5[3] + param_4[1]) * dVar5 + local_110);
  fVar6 = (float)(((double)param_5[2] + *param_4) * dVar2 + dVar1);
  fVar10 = param_2[10] * fVar9;
  fVar9 = fVar9 * param_2[9];
  fVar7 = fVar6 * param_2[7];
  local_104 = param_2[0xb];
  local_ec = fVar7 + fVar9 + local_104;
  local_118 = &local_ec;
  local_100 = param_2[0xc];
  fVar6 = fVar6 * param_2[8];
  local_e8 = fVar6 + fVar10 + local_100;
  fVar8 = (float)((*param_4 - (double)*param_5) * dVar2 + dVar1);
  fVar4 = param_2[8] * fVar8;
  fVar8 = fVar8 * param_2[7];
  local_f4 = fVar9 + fVar8 + local_104;
  local_f0 = fVar10 + fVar4 + local_100;
  fVar10 = (float)((param_4[1] - (double)param_5[1]) * dVar5 + local_110);
  fVar9 = param_2[10] * fVar10;
  fVar10 = param_2[9] * fVar10;
  local_fc = fVar7 + fVar10 + local_104;
  local_f8 = fVar6 + fVar9 + local_100;
  local_100 = fVar9 + fVar4 + local_100;
  local_104 = fVar10 + fVar8 + local_104;
  FUN_146948f0a(&local_e4);
  if (((local_c4 & 1) == 0) ||
     ((uVar3 = 0, 1e-08 < ABS(local_e4 - local_cc) && (1e-08 < ABS(local_e0 - local_c8))))) {
    FUN_1400d7f4c(param_1,&local_e4);
    uVar3 = 1;
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146ad50f6 FUN_146ad50f6 body=5110 status=ok
// SIG undefined FUN_146ad50f6(void)

int FUN_146ad50f6(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_2b8 [32];
  float *local_298;
  float *local_290;
  int local_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258 [2];
  undefined1 *puStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_228 [3];
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 local_200;
  float local_1f8 [5];
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198 [4];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  float local_164;
  undefined4 local_160;
  float local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  float local_138 [3];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  cVar9 = ' ';
  if (param_8 != '\0') {
    cVar9 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
  }
  lVar11 = *(longlong *)(param_1 + 0x218);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(param_1 + 0x1e0) + 0xc0;
  }
  pfVar7 = (float *)FUN_146ad64ee(param_1 + 0x1e8);
  cVar5 = *(char *)(pfVar7 + 1);
  fVar14 = *pfVar7;
  puVar8 = (undefined4 *)FUN_140133f12(param_1 + 0x250);
  local_e8 = *puVar8;
  uStack_e4 = puVar8[1];
  uStack_e0 = puVar8[2];
  uStack_dc = puVar8[3];
  lVar10 = *(longlong *)(param_1 + 0x210);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x1e0) + 0x10;
  }
  pfVar7 = (float *)(lVar10 + 8);
  cVar3 = *(char *)(lVar10 + 0x18);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      pfVar7 = (float *)FUN_1400c06fe(pfVar7);
    }
    else if (cVar3 == '\x03') {
      pfVar7 = param_7 + 8;
    }
    else {
      pfVar7 = param_7 + 4;
    }
  }
  local_ec = pfVar7[3] * param_7[3];
  local_f0 = pfVar7[2] * param_7[2];
  local_f4 = pfVar7[1] * param_7[1];
  local_f8 = *pfVar7 * *param_7;
  local_290 = &local_f8;
  local_c4 = *(undefined8 *)param_3;
  local_d8 = *(undefined8 *)(param_3 + 3);
  local_d0 = param_3[2];
  local_cc = 0;
  local_bc = param_3[7];
  fStack_b8 = param_3[8];
  fStack_b4 = param_3[9];
  fStack_b0 = param_3[10];
  local_ac = *(undefined8 *)(param_3 + 0xb);
  local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
  local_27c = param_6 + 1;
  local_298 = (float *)CONCAT71(local_298._1_7_,cVar9);
  FUN_140239bd2(param_5,param_6,&local_d8,lVar10);
  if (cVar5 == '\0') {
    lVar11 = *(longlong *)(param_1 + 0x220);
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(param_1 + 0x1e0) + 0x170;
    }
    pfVar7 = (float *)FUN_1400c0682(param_1 + 0x228);
    cVar5 = *(char *)(pfVar7 + 4);
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        pfVar7 = (float *)FUN_1400c06fe(pfVar7);
      }
      else if (cVar5 == '\x03') {
        pfVar7 = param_7 + 8;
      }
      else {
        pfVar7 = param_7 + 4;
      }
    }
    fVar14 = param_7[3];
    fVar17 = pfVar7[3];
    fVar18 = param_7[2];
    fVar15 = pfVar7[2];
    fVar16 = *param_7;
    fVar13 = param_7[1];
    fVar12 = pfVar7[1];
    fVar1 = *pfVar7;
    pfVar7 = (float *)(lVar11 + 8);
    cVar5 = *(char *)(lVar11 + 0x18);
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        pfVar7 = (float *)FUN_1400c06fe(pfVar7);
      }
      else if (cVar5 == '\x03') {
        pfVar7 = param_7 + 8;
      }
      else {
        pfVar7 = param_7 + 4;
      }
    }
    local_ec = fVar14 * fVar17 * pfVar7[3];
    local_f0 = fVar18 * fVar15 * pfVar7[2];
    local_f4 = fVar13 * fVar12 * pfVar7[1];
    local_f8 = fVar16 * fVar1 * *pfVar7;
    fVar14 = *(float *)(lVar11 + 0x20);
    fVar17 = *(float *)(param_1 + 0x278);
    local_298 = local_258;
    local_258[0] = 0.0;
    local_258[1] = 0.0;
    puStack_250 = &DAT_3f8000003f800000;
    local_268 = 0;
    uStack_260 = 0;
    local_278 = local_e8;
    uStack_274 = uStack_e4;
    uStack_270 = uStack_e0;
    uStack_26c = uStack_dc;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    fVar16 = fVar17 * fVar14 - fVar14;
    local_d0 = param_3[2];
    local_d8 = CONCAT44(local_d0 * 0.0 + param_3[4],fVar16 * local_d0 + param_3[3]);
    fVar17 = param_3[8];
    fStack_b0 = fVar17 * 0.0 + param_3[10];
    fVar15 = param_3[10] * 0.0;
    fVar18 = param_3[7];
    fVar13 = param_3[9] * 0.0;
    fStack_b4 = fVar18 * 0.0 + param_3[9];
    fStack_b8 = fVar15 + fVar17;
    local_bc = fVar13 + fVar18;
    local_c4 = CONCAT44(param_3[1],fVar14 + *param_3);
    local_ac = CONCAT44(fVar16 * fVar17 + fVar15 + param_3[0xc],
                        fVar16 * fVar18 + fVar13 + param_3[0xb]);
    local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
    goto LAB_146ad647b;
  }
  pfVar7 = (float *)FUN_1400c0682(param_1 + 0x228);
  cVar5 = *(char *)(pfVar7 + 4);
  if (cVar5 != '\0') {
    if (cVar5 == '\x01') {
      pfVar7 = (float *)FUN_1400c06fe(pfVar7);
    }
    else if (cVar5 == '\x03') {
      pfVar7 = param_7 + 8;
    }
    else {
      pfVar7 = param_7 + 4;
    }
  }
  fVar17 = param_7[3];
  fVar18 = pfVar7[3];
  fVar15 = param_7[2];
  fVar16 = pfVar7[2];
  fVar13 = *param_7;
  fVar12 = param_7[1];
  fVar1 = pfVar7[1];
  fVar2 = *pfVar7;
  pfVar7 = (float *)(lVar11 + 8);
  cVar5 = *(char *)(lVar11 + 0x18);
  if (cVar5 != '\0') {
    if (cVar5 == '\x01') {
      pfVar7 = (float *)FUN_1400c06fe(pfVar7);
    }
    else if (cVar5 == '\x03') {
      pfVar7 = param_7 + 8;
    }
    else {
      pfVar7 = param_7 + 4;
    }
  }
  local_ec = fVar17 * fVar18 * pfVar7[3];
  local_f0 = fVar15 * fVar16 * pfVar7[2];
  local_f4 = fVar12 * fVar1 * pfVar7[1];
  local_f8 = fVar13 * fVar2 * *pfVar7;
  iVar6 = *(int *)(param_1 + 0x208);
  if (DAT_14c96b1e0 == '\x01') {
    if (iVar6 == 1) {
      iVar6 = 0;
    }
    else if (iVar6 == 0) {
      iVar6 = 1;
    }
  }
  fVar18 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar15 = 0.0;
  if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x220) == '\x01') {
    fVar17 = *(float *)(lVar11 + 0x20);
    fVar18 = *(float *)(lVar11 + 0x24);
    fVar15 = fVar17 * *(float *)(param_1 + 0x278);
    fVar16 = *(float *)(param_1 + 0x278) * fVar18;
  }
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  iVar4 = *(int *)(param_1 + 0x20c);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  switch(iVar6) {
  case 1:
    local_298 = local_1f8;
    local_1f8[1] = 0.0;
    local_1f8[2] = 0.0;
    local_1f8[3] = 1.0;
    local_208 = 0x3ff0000000000000;
    local_200 = 0;
    local_218 = local_e8;
    uStack_214 = uStack_e4;
    uStack_210 = uStack_e0;
    uStack_20c = uStack_dc;
    local_1f8[0] = fVar14;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      fVar15 = (1.0 - fVar14) * *param_3;
      fVar14 = fVar14 * *param_3;
    }
    else {
      fVar15 = fVar15 - fVar17;
      fVar14 = fVar17 + *param_3;
    }
    local_d0 = param_3[2];
    local_d8 = CONCAT44(local_d0 * 0.0 + param_3[4],fVar15 * local_d0 + param_3[3]);
    fVar17 = param_3[8];
    fStack_b0 = fVar17 * 0.0 + param_3[10];
    fStack_b8 = param_3[10] * 0.0;
    fVar18 = param_3[7];
    local_bc = param_3[9] * 0.0;
    fVar13 = fVar15 * fVar17 + fStack_b8 + param_3[0xc];
    fVar15 = fVar15 * fVar18 + local_bc + param_3[0xb];
    fStack_b4 = fVar18 * 0.0 + param_3[9];
    fStack_b8 = fStack_b8 + fVar17;
    local_bc = local_bc + fVar18;
    cVar5 = *(char *)(param_3 + 0xd);
    local_c4 = CONCAT44(param_3[1],fVar14);
    goto LAB_146ad6457;
  case 2:
    local_108 = fVar14 * 0.5;
    local_298 = &local_108;
    local_118 = 0x3fe0000000000000;
    local_110 = 0x3fe0000000000000;
    local_128 = local_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    local_104 = local_108;
    local_100 = local_108;
    local_fc = local_108;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      fVar13 = fVar14 * param_3[1];
      fVar12 = param_3[1] * 0.5 + fVar13 * -0.5;
      fVar14 = fVar14 * *param_3;
      fVar18 = *param_3 * 0.5 + fVar14 * -0.5;
      local_d0 = param_3[2];
      local_d8 = CONCAT44(fVar12 * local_d0 + param_3[4],fVar18 * local_d0 + param_3[3]);
      fStack_b8 = param_3[8];
      fVar16 = param_3[10];
      fVar17 = param_3[7];
      local_bc = param_3[9];
      fVar15 = fVar18 * fStack_b8 + fVar12 * fVar16 + param_3[0xc];
      fVar18 = fVar18 * fVar17 + fVar12 * local_bc + param_3[0xb];
      local_c4 = CONCAT44(fVar13,fVar14);
      fStack_b0 = fStack_b8 * 0.0 + fVar16;
      fStack_b4 = fVar17 * 0.0 + local_bc;
      fStack_b8 = fVar16 * 0.0 + fStack_b8;
      local_bc = local_bc * 0.0;
    }
    else {
      local_d0 = param_3[2];
      local_c4 = *(undefined8 *)param_3;
      fVar14 = param_3[8] * 0.0;
      fStack_b0 = fVar14 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      fVar17 = param_3[7];
      local_bc = param_3[9] * 0.0;
      fVar15 = fVar14 + fStack_b8 + param_3[0xc];
      fVar18 = fVar17 * 0.0 + local_bc + param_3[0xb];
      local_d8 = CONCAT44(param_3[4] + local_d0 * 0.0,local_d0 * 0.0 + param_3[3]);
      fStack_b4 = fVar17 * 0.0 + param_3[9];
      fStack_b8 = fStack_b8 + param_3[8];
    }
    local_bc = local_bc + fVar17;
    cVar5 = *(char *)(param_3 + 0xd);
    goto LAB_146ad623e;
  case 3:
    local_138[0] = fVar14 * 0.5;
    local_298 = local_138;
    local_138[1] = 0.0;
    local_12c = 0x3f800000;
    local_148 = 0x3fe0000000000000;
    local_140 = 0;
    local_158 = local_e8;
    uStack_154 = uStack_e4;
    uStack_150 = uStack_e0;
    uStack_14c = uStack_dc;
    local_138[2] = local_138[0];
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      fVar14 = fVar14 * *param_3;
      fVar15 = *param_3 * 0.5 + fVar14 * -0.5;
      local_d0 = param_3[2];
      local_d8 = CONCAT44(local_d0 * 0.0 + param_3[4],fVar15 * local_d0 + param_3[3]);
      local_c4 = CONCAT44(param_3[1],fVar14);
      fVar14 = param_3[8];
      fStack_b0 = fVar14 * 0.0 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      fVar17 = param_3[7];
      fVar18 = param_3[9];
      local_bc = fVar18 * 0.0;
      fVar16 = fVar15 * fVar14 + fStack_b8 + param_3[0xc];
      fVar15 = fVar15 * fVar17 + local_bc + param_3[0xb];
      fStack_b4 = fVar17 * 0.0;
    }
    else {
      local_d0 = param_3[2];
      local_c4 = *(undefined8 *)param_3;
      fVar14 = param_3[8];
      fStack_b0 = fVar14 * 0.0 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      fVar17 = param_3[7];
      fVar18 = param_3[9];
      local_bc = fVar18 * 0.0;
      fStack_b4 = fVar17 * 0.0;
      fVar16 = fVar14 * 0.0 + fStack_b8 + param_3[0xc];
      fVar15 = fStack_b4 + local_bc + param_3[0xb];
      local_d8 = CONCAT44(param_3[4] + local_d0 * 0.0,local_d0 * 0.0 + param_3[3]);
    }
    fStack_b4 = fStack_b4 + fVar18;
    fStack_b8 = fStack_b8 + fVar14;
    local_bc = local_bc + fVar17;
    local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
    local_ac = CONCAT44(fVar16,fVar15);
    break;
  case 4:
    local_164 = fVar14 * 0.5;
    local_298 = &local_168;
    local_168 = 0.0;
    local_160 = 0x3f800000;
    local_178 = 0;
    local_170 = 0x3fe0000000000000;
    local_188 = local_e8;
    uStack_184 = uStack_e4;
    uStack_180 = uStack_e0;
    uStack_17c = uStack_dc;
    local_15c = local_164;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      fVar14 = fVar14 * param_3[1];
      fVar18 = param_3[1] * 0.5 + fVar14 * -0.5;
      local_d0 = param_3[2];
      local_d8 = CONCAT44(fVar18 * local_d0 + param_3[4],local_d0 * 0.0 + param_3[3]);
      local_c4 = CONCAT44(fVar14,*param_3);
      fVar14 = param_3[10];
      fStack_b0 = param_3[8] * 0.0;
      fVar17 = param_3[9];
      fStack_b4 = param_3[7] * 0.0;
      fVar13 = fVar18 * fVar14 + fStack_b0 + param_3[0xc];
      fVar15 = fVar18 * fVar17 + fStack_b4 + param_3[0xb];
      fStack_b0 = fStack_b0 + fVar14;
      fStack_b4 = fStack_b4 + fVar17;
      fStack_b8 = fVar14 * 0.0 + param_3[8];
      local_bc = fVar17 * 0.0 + param_3[7];
    }
    else {
      local_d0 = param_3[2];
      local_c4 = *(undefined8 *)param_3;
      fVar14 = param_3[8] * 0.0;
      fStack_b0 = fVar14 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      local_bc = param_3[9] * 0.0;
      fStack_b4 = param_3[7] * 0.0;
      fVar13 = fVar14 + fStack_b8 + param_3[0xc];
      fVar15 = fStack_b4 + local_bc + param_3[0xb];
      local_d8 = CONCAT44(param_3[4] + local_d0 * 0.0,local_d0 * 0.0 + param_3[3]);
      fStack_b4 = fStack_b4 + param_3[9];
      fStack_b8 = fStack_b8 + param_3[8];
      local_bc = local_bc + param_3[7];
    }
    cVar5 = *(char *)(param_3 + 0xd);
    goto LAB_146ad6457;
  case 5:
    local_298 = local_198;
    local_198[0] = 0.0;
    local_198[1] = 0.0;
    local_198[2] = 1.0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = local_e8;
    uStack_1b4 = uStack_e4;
    uStack_1b0 = uStack_e0;
    uStack_1ac = uStack_dc;
    local_198[3] = fVar14;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      local_d0 = param_3[2];
      local_d8 = CONCAT44(param_3[4] + local_d0 * 0.0,local_d0 * 0.0 + param_3[3]);
      fVar17 = param_3[8] * 0.0;
      fStack_b0 = fVar17 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      local_bc = param_3[9] * 0.0;
      fStack_b4 = param_3[7] * 0.0;
      fVar15 = fVar17 + fStack_b8 + param_3[0xc];
      fVar18 = fStack_b4 + local_bc + param_3[0xb];
      local_c4 = CONCAT44(fVar14 * param_3[1],*param_3);
      fStack_b4 = fStack_b4 + param_3[9];
      fStack_b8 = fStack_b8 + param_3[8];
      local_bc = local_bc + param_3[7];
    }
    else {
      fVar16 = fVar16 - fVar18;
      local_d0 = param_3[2];
      local_d8 = CONCAT44(fVar16 * local_d0 + param_3[4],local_d0 * 0.0 + param_3[3]);
      local_c4 = CONCAT44(fVar18 + param_3[1],*param_3);
      fVar14 = param_3[10];
      fStack_b0 = param_3[8] * 0.0;
      fVar17 = param_3[9];
      fStack_b4 = param_3[7] * 0.0;
      fVar15 = fVar16 * fVar14 + fStack_b0 + param_3[0xc];
      fVar18 = fVar16 * fVar17 + fStack_b4 + param_3[0xb];
      fStack_b0 = fStack_b0 + fVar14;
      fStack_b4 = fStack_b4 + fVar17;
      fStack_b8 = fVar14 * 0.0 + param_3[8];
      local_bc = fVar17 * 0.0 + param_3[7];
    }
    cVar5 = *(char *)(param_3 + 0xd);
LAB_146ad623e:
    local_a4 = cVar5 * '\x02' & 2;
    local_ac = CONCAT44(fVar15,fVar18);
    break;
  case 6:
    local_298 = &local_1c8;
    local_1c8 = 0.0;
    local_1c0 = 0x3f800000;
    local_1d8 = 0;
    local_1d0 = 0x3ff0000000000000;
    local_1f8[4] = (float)local_e8;
    uStack_1e4 = uStack_e4;
    uStack_1e0 = uStack_e0;
    uStack_1dc = uStack_dc;
    local_1c4 = fVar14;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      fVar16 = (1.0 - fVar14) * param_3[1];
      fVar14 = fVar14 * param_3[1];
    }
    else {
      fVar16 = fVar16 - fVar18;
      fVar14 = fVar18 + param_3[1];
    }
    local_d0 = param_3[2];
    fVar17 = param_3[10];
    fVar15 = param_3[8] * 0.0;
    fVar18 = param_3[9];
    fVar13 = param_3[7] * 0.0;
    local_d8 = CONCAT44(fVar16 * local_d0 + param_3[4],local_d0 * 0.0 + param_3[3]);
    fStack_b0 = fVar15 + fVar17;
    fStack_b4 = fVar13 + fVar18;
    fStack_b8 = fVar17 * 0.0 + param_3[8];
    local_bc = fVar18 * 0.0 + param_3[7];
    local_c4 = CONCAT44(fVar14,*param_3);
    local_a4 = *(char *)(param_3 + 0xd) * '\x02' & 2;
    local_ac = CONCAT44(fVar16 * fVar17 + fVar15 + param_3[0xc],
                        fVar16 * fVar18 + fVar13 + param_3[0xb]);
    break;
  default:
    local_298 = local_228;
    local_228[0] = 0.0;
    local_228[1] = 0.0;
    local_21c = 0x3f800000;
    local_238 = 0;
    uStack_230 = 0;
    local_248 = local_e8;
    uStack_244 = uStack_e4;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    local_228[2] = fVar14;
    cVar5 = FUN_146ad4de5(param_5,param_3);
    iVar6 = local_27c;
    if (cVar5 == '\0') goto LAB_146ad648e;
    if (iVar4 == 1) {
      local_d0 = param_3[2];
      local_d8 = CONCAT44(param_3[4] + local_d0 * 0.0,local_d0 * 0.0 + param_3[3]);
      fVar17 = param_3[8];
      fStack_b0 = fVar17 * 0.0 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      fVar18 = param_3[7];
      fVar16 = param_3[9];
      local_bc = fVar16 * 0.0;
      fStack_b4 = fVar18 * 0.0;
      fVar13 = fVar17 * 0.0 + fStack_b8 + param_3[0xc];
      fVar15 = fStack_b4 + local_bc + param_3[0xb];
      local_c4 = CONCAT44(param_3[1],fVar14 * *param_3);
    }
    else {
      fVar15 = fVar15 - fVar17;
      local_d0 = param_3[2];
      local_d8 = CONCAT44(local_d0 * 0.0 + param_3[4],fVar15 * local_d0 + param_3[3]);
      local_c4 = CONCAT44(param_3[1],fVar17 + *param_3);
      fVar17 = param_3[8];
      fStack_b0 = fVar17 * 0.0 + param_3[10];
      fStack_b8 = param_3[10] * 0.0;
      fVar18 = param_3[7];
      fVar16 = param_3[9];
      local_bc = fVar16 * 0.0;
      fVar13 = fVar15 * fVar17 + fStack_b8 + param_3[0xc];
      fVar15 = fVar15 * fVar18 + local_bc + param_3[0xb];
      fStack_b4 = fVar18 * 0.0;
    }
    fStack_b4 = fStack_b4 + fVar16;
    fStack_b8 = fStack_b8 + fVar17;
    local_bc = local_bc + fVar18;
    cVar5 = *(char *)(param_3 + 0xd);
LAB_146ad6457:
    local_a4 = cVar5 * '\x02' & 2;
    local_ac = CONCAT44(fVar13,fVar15);
  }
LAB_146ad647b:
  local_290 = &local_f8;
  local_cc = 0;
  local_298 = (float *)CONCAT71(local_298._1_7_,cVar9);
  FUN_140239bd2(param_5,local_27c,&local_d8,lVar11);
  FUN_14171ebf2(param_5);
  iVar6 = param_6 + 2;
LAB_146ad648e:
  if ((local_a0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6 + -1;
}



// FUNCTION 146ad64ee FUN_146ad64ee body=146 status=ok
// SIG undefined FUN_146ad64ee(void)

undefined4 * FUN_146ad64ee(undefined4 *param_1)

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
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_146ad6552;
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
LAB_146ad6552:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad65b2 FUN_146ad65b2 body=119 status=ok
// SIG undefined FUN_146ad65b2(void)

undefined8 FUN_146ad65b2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x200) != 0) && (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x248) != 0) && (*(longlong **)(param_1 + 0x240) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146ad661d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 146ad662a FUN_146ad662a body=275 status=ok
// SIG undefined FUN_146ad662a(void)

void FUN_146ad662a(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(float *)(param_1 + 0x290) != param_2) ||
       (NAN(*(float *)(param_1 + 0x290)) || NAN(param_2))) || (*(longlong *)(param_1 + 0x280) == 0))
     || ((*(longlong *)(param_1 + 0x288) == 0 || (*(int *)(*(longlong *)(param_1 + 0x288) + 8) < 1))
        )) {
    *(float *)(param_1 + 0x290) = param_2;
    plVar4 = *(longlong **)(param_1 + 0x288);
    if (plVar4 == (longlong *)0x0) {
LAB_146ad66a1:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_146ad66a1;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar5 = *(longlong *)(param_1 + 0x280);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_30 = lVar5;
      local_28 = plVar4;
      FUN_14697f106(param_1,&local_30);
      plVar3 = local_28;
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
    FUN_146ad4634(param_1);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ad674e FUN_146ad674e body=386 status=ok
// SIG undefined FUN_146ad674e(void)

longlong * FUN_146ad674e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146ad685f:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f1e430;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146ad685f;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f1e430;
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



// FUNCTION 146ad68d0 FUN_146ad68d0 body=108 status=ok
// SIG undefined FUN_146ad68d0(void)

undefined8 FUN_146ad68d0(longlong param_1,double param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar2 = roundpd(auVar2,auVar2,1);
  *(float *)(param_1 + 0x278) = (float)(param_2 - auVar2._0_8_);
  lVar1 = FUN_146ad64ee(param_1 + 0x1e8);
  uVar3 = 0;
  if ((*(char *)(lVar1 + 4) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x220) == '\0')) {
    uVar3 = *(undefined4 *)(param_1 + 0x294);
  }
  FUN_146ad662a(param_1,uVar3);
  FUN_140163244(param_1,2);
  return 1;
}



// FUNCTION 146ad695a FUN_146ad695a body=379 status=ok
// SIG undefined FUN_146ad695a(void)

undefined8 * FUN_146ad695a(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a55f88();
  FUN_1407651e0(param_1 + 0x4d);
  *param_1 = &PTR_FUN_149f1bf60;
  param_1[0x4d] = &PTR_FUN_149f1c1a0;
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149f1e4e0;
  FUN_141581cde(puVar1 + 2);
  param_1[0x5d] = puVar1 + 2;
  param_1[0x5e] = puVar1;
  bVar2 = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  FUN_14570e3a0(param_1 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x39c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x39e) = 0;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x80;
  param_1[0x57] = param_1;
  param_1[0x58] = param_1[0x5d];
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  if (*(char *)((longlong)param_1 + 0x39c) == '\x01') {
    if (DAT_14c979cd2 == '\0') {
      bVar2 = DAT_14c75ef70 << 7;
    }
    else {
      bVar2 = 0;
    }
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0x7f | bVar2;
  FUN_144a88240(param_1 + 3,param_1);
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x72) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x73) = 0x3f800000;
  local_38 = FUN_146ad6be2;
  local_30 = 0;
  FUN_146ad6af4(DAT_14c968098 + 0xf0,local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad6ad6 FUN_146ad6ad6 body=29 status=ok
// SIG undefined FUN_146ad6ad6(void)

undefined1 FUN_146ad6ad6(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(char *)(param_1 + 0x39c) != '\x01') || (uVar1 = DAT_14c75ef70, DAT_14c979cd2 != '\0')) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146ad6af4 FUN_146ad6af4 body=237 status=ok
// SIG undefined FUN_146ad6af4(void)

undefined8
FUN_146ad6af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_149f1e500;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad6be2 FUN_146ad6be2 body=117 status=ok
// SIG undefined FUN_146ad6be2(void)

void FUN_146ad6be2(longlong param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  FUN_14032aaf4(param_1 + 0x268,0);
  FUN_14032abc4(param_1 + 0x268,1);
  if (*(char *)(param_1 + 0x39c) == '\x01') {
    if (DAT_14c979cd2 == '\0') {
      bVar1 = DAT_14c75ef70 << 7;
    }
    else {
      bVar1 = 0;
    }
  }
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0x7f | bVar1;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_140163244(param_1,5);
  return;
}



// FUNCTION 146ad6c58 FUN_146ad6c58 body=609 status=ok
// SIG undefined FUN_146ad6c58(void)

ulonglong FUN_146ad6c58(longlong param_1,undefined8 param_2,float *param_3,float *param_4,
                       int param_5,float *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_98 [32];
  longlong local_78 [6];
  char local_44;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar4 = *(int *)(param_1 + 0x388) < param_5;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(int *)(param_1 + 0x388) < param_5) {
    *(int *)(param_1 + 0x388) = param_5;
  }
  if ((*param_3 != *(float *)(param_1 + 0x340)) ||
     (NAN(*param_3) || NAN(*(float *)(param_1 + 0x340)))) {
LAB_146ad6cbb:
    FUN_144b00ffc(param_1 + 0x340,param_3);
    bVar4 = true;
  }
  else if (((param_3[1] != *(float *)(param_1 + 0x344)) ||
           ((((NAN(param_3[1]) || NAN(*(float *)(param_1 + 0x344)) ||
              (cVar3 = FUN_146983284(param_3 + 7,param_1 + 0x35c), cVar3 == '\0')) ||
             (param_3[0xb] != *(float *)(param_1 + 0x36c))) ||
            ((NAN(param_3[0xb]) || NAN(*(float *)(param_1 + 0x36c)) ||
             (param_3[0xc] != *(float *)(param_1 + 0x370))))))) ||
          (NAN(param_3[0xc]) || NAN(*(float *)(param_1 + 0x370)))) goto LAB_146ad6cbb;
  auVar8 = blendps(ZEXT416((uint)((param_4[3] - param_4[1]) + 0.5)),ZEXT816(0),0xe);
  auVar8 = roundps(auVar8,auVar8,1);
  auVar10 = blendps(ZEXT416((uint)((param_4[2] - *param_4) + 0.5)),ZEXT816(0),0xe);
  auVar10 = roundps(auVar10,auVar10,1);
  dVar7 = (double)auVar8._0_4_;
  dVar9 = (double)auVar10._0_4_;
  if (((*(double *)(param_1 + 0x378) != dVar9) || (NAN(*(double *)(param_1 + 0x378)) || NAN(dVar9)))
     || ((*(double *)(param_1 + 0x380) != dVar7 || (NAN(*(double *)(param_1 + 0x380)) || NAN(dVar7))
         ))) {
    *(double *)(param_1 + 0x378) = dVar9;
    *(double *)(param_1 + 0x380) = dVar7;
    bVar4 = true;
  }
  uVar5 = CONCAT71(uVar6,bVar4);
  FUN_144b011a6(param_2,local_78);
  bVar1 = *(byte *)(param_1 + 0x338);
  if ((bVar1 == local_38 & bVar1) == 1) {
    cVar3 = FUN_144aa28c6(param_1 + 0x2f8,local_78);
    if (cVar3 != '\0') goto LAB_146ad6d97;
  }
  else if (bVar1 == local_38) goto LAB_146ad6d97;
  FUN_146ad6eba(param_1 + 0x2f8,local_78);
  uVar5 = CONCAT71(uVar6,1);
LAB_146ad6d97:
  if (((((*(float *)(param_1 + 0x38c) != *param_6) ||
        (NAN(*(float *)(param_1 + 0x38c)) || NAN(*param_6))) ||
       (*(float *)(param_1 + 0x390) != param_6[1])) ||
      ((NAN(*(float *)(param_1 + 0x390)) || NAN(param_6[1]) ||
       (*(float *)(param_1 + 0x394) != param_6[2])))) ||
     ((NAN(*(float *)(param_1 + 0x394)) || NAN(param_6[2]) ||
      ((*(float *)(param_1 + 0x398) != param_6[3] ||
       (NAN(*(float *)(param_1 + 0x398)) || NAN(param_6[3]))))))) {
    uVar2 = *(undefined8 *)(param_6 + 2);
    *(undefined8 *)(param_1 + 0x38c) = *(undefined8 *)param_6;
    *(undefined8 *)(param_1 + 0x394) = uVar2;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  if (local_38 == 1) {
    if (local_44 == '\x01') {
      local_44 = '\0';
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 146ad6eba FUN_146ad6eba body=71 status=ok
// SIG undefined FUN_146ad6eba(void)

longlong * FUN_146ad6eba(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if ((char)param_2[8] == '\x01') {
      FUN_146af8776(param_1);
    }
    else if ((char)param_1[8] == '\x01') {
      if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x34) = 0;
      }
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return param_1;
}



// FUNCTION 146ad6f02 FUN_146ad6f02 body=106 status=ok
// SIG undefined FUN_146ad6f02(void)

void FUN_146ad6f02(longlong param_1,char param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x39c) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x39c) = param_2;
  if ((param_2 == '\0') || (DAT_14c979cd2 != '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = DAT_14c75ef70 << 7;
  }
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0x7f | bVar1;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_14032aaf4(param_1 + 0x268,0);
  return;
}



// FUNCTION 146ad6f9c FUN_146ad6f9c body=128 status=ok
// SIG undefined FUN_146ad6f9c(void)

undefined8 FUN_146ad6f9c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x39d) = 0;
  uVar1 = 1;
  if (((*(char *)(param_1 + 0x39c) == '\x01') && (DAT_14c979cd2 == '\0')) &&
     (DAT_14c75ef70 == '\x01')) {
    if (*(char *)(param_1 + 0x30) < '\0') {
      FUN_1469315e4(param_1 + 0x268,1);
    }
    FUN_142860bc8(param_1 + 0x268);
    if (*(char *)(param_1 + 0x2e0) == '\x01') {
      uVar1 = FUN_144b012e6(param_1);
      FUN_14287b89e(param_1,param_2,uVar1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146ad706c FUN_146ad706c body=104 status=ok
// SIG undefined FUN_146ad706c(void)

undefined8 * FUN_146ad706c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(char *)(param_1 + 0x134) == '\x01') && (DAT_14c979cd2 == '\0')) &&
     (DAT_14c75ef70 == '\x01')) {
    plVar3 = (longlong *)FUN_144b012e6(param_1 + -0x268);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,0);
  }
  else {
    *param_2 = DAT_14c98dec8;
    lVar2 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 146ad70d4 FUN_146ad70d4 body=97 status=ok
// SIG undefined FUN_146ad70d4(void)

void FUN_146ad70d4(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = FUN_144b013ec(param_1 + -0x268);
  FUN_1400c0302(param_1 + -0x268,*(undefined8 *)(param_2 + 0x18),uVar5,param_2,uVar4,uVar2,uVar3,
                uVar1);
  return;
}



// FUNCTION 146ad7136 FUN_146ad7136 body=68 status=ok
// SIG undefined FUN_146ad7136(void)

undefined4 FUN_146ad7136(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14c9902f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined4 *)(lVar1 + uVar3 * 4);
}



// FUNCTION 146ad717a FUN_146ad717a body=61 status=ok
// SIG undefined FUN_146ad717a(void)

void FUN_146ad717a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[7];
  param_1[6] = 0;
  param_1[7] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146ad71b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_14c98dec8);
  return;
}



// FUNCTION 146ad71b8 FUN_146ad71b8 body=54 status=ok
// SIG undefined FUN_146ad71b8(void)

undefined8 FUN_146ad71b8(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 8))) {
    return 0;
  }
  uVar1 = FUN_14142e2d2(param_1 + 8);
  uVar1 = FUN_144a7c5f6(uVar1);
  return uVar1;
}



// FUNCTION 146ad71ee FUN_146ad71ee body=83 status=ok
// SIG undefined FUN_146ad71ee(void)

undefined1 FUN_146ad71ee(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x120) != 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x120) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x118);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x110) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x110);
}



// FUNCTION 146ad7242 FUN_146ad7242 body=90 status=ok
// SIG undefined FUN_146ad7242(void)

void FUN_146ad7242(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x130) != 0) && (*(longlong **)(param_1 + 0x128) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x130) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x128);
      }
                    /* WARNING: Could not recover jumptable at 0x000146ad728d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146ad729c FUN_146ad729c body=182 status=ok
// SIG undefined FUN_146ad729c(void)

undefined1 * FUN_146ad729c(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad72dd;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad72dd:
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad7352 FUN_146ad7352 body=180 status=ok
// SIG undefined FUN_146ad7352(void)

undefined1 * FUN_146ad7352(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad73d3;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad73d3:
    (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad7406 FUN_146ad7406 body=134 status=ok
// SIG undefined FUN_146ad7406(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ad7406(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad746c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_DAT_00000000 + 0x140))(0);
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
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x140))();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146ad7488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146ad748c FUN_146ad748c body=208 status=ok
// SIG undefined FUN_146ad748c(void)

void FUN_146ad748c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if (local_28 == 0) {
    local_28 = DAT_14c98dec8;
    local_20 = DAT_14c98ded0;
  }
  else {
    local_20 = (longlong *)param_2[1];
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_28);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad755e FUN_146ad755e body=158 status=ok
// SIG undefined FUN_146ad755e(void)

void FUN_146ad755e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  if (*(longlong *)(param_1 + 0x2b0) != lVar3) {
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0x2b8);
    *(longlong *)(param_1 + 0x2b0) = lVar3;
    *(longlong *)(param_1 + 0x2b8) = lVar4;
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
    FUN_140163244(param_1,2);
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
                    /* WARNING: Could not recover jumptable at 0x000146ad75ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146ad75fc FUN_146ad75fc body=34 status=ok
// SIG undefined FUN_146ad75fc(void)

void FUN_146ad75fc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x2b0);
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146ad761e FUN_146ad761e body=180 status=ok
// SIG undefined FUN_146ad761e(void)

undefined1 * FUN_146ad761e(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad769f;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad769f:
    (**(code **)(*plVar4 + 0xe0))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad76d2 FUN_146ad76d2 body=180 status=ok
// SIG undefined FUN_146ad76d2(void)

undefined1 * FUN_146ad76d2(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad7753;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad7753:
    (**(code **)(*plVar4 + 0xe8))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad7786 FUN_146ad7786 body=180 status=ok
// SIG undefined FUN_146ad7786(void)

undefined1 * FUN_146ad7786(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad7807;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad7807:
    (**(code **)(*plVar4 + 0xf0))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad783a FUN_146ad783a body=180 status=ok
// SIG undefined FUN_146ad783a(void)

undefined1 * FUN_146ad783a(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad78bb;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad78bb:
    (**(code **)(*plVar4 + 0xf8))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad78ee FUN_146ad78ee body=180 status=ok
// SIG undefined FUN_146ad78ee(void)

undefined1 * FUN_146ad78ee(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad796f;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad796f:
    (**(code **)(*plVar4 + 0x100))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad79a2 FUN_146ad79a2 body=180 status=ok
// SIG undefined FUN_146ad79a2(void)

undefined1 * FUN_146ad79a2(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad7a23;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad7a23:
    (**(code **)(*plVar4 + 0x108))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad7a56 FUN_146ad7a56 body=180 status=ok
// SIG undefined FUN_146ad7a56(void)

undefined1 * FUN_146ad7a56(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146ad7ad7;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_146ad7ad7:
    (**(code **)(*plVar4 + 0x110))(plVar4,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_2;
}



// FUNCTION 146ad7b0a FUN_146ad7b0a body=137 status=ok
// SIG undefined FUN_146ad7b0a(void)

undefined1 * FUN_146ad7b0a(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x270);
  if (plVar2 == (longlong *)0x0) {
LAB_146ad7b67:
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined2 *)(param_2 + 0x18) = 0x100;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146ad7b67;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 0x268);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined2 *)(param_2 + 0x18) = 0x100;
    }
    else {
      (**(code **)(*plVar3 + 0x128))(plVar3,param_2);
    }
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
  return param_2;
}



// FUNCTION 146ad7b94 FUN_146ad7b94 body=130 status=ok
// SIG undefined FUN_146ad7b94(void)

longlong FUN_146ad7b94(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  else {
    local_28 = *param_6;
    uStack_20 = param_6[1];
    local_40 = &local_28;
    local_38 = *param_5;
    uStack_34 = param_5[1];
    uStack_30 = param_5[2];
    uStack_2c = param_5[3];
    local_48 = &local_38;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad7c2c FUN_146ad7c2c body=91 status=ok
// SIG undefined FUN_146ad7c2c(void)

undefined8 FUN_146ad7c2c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0x678);
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_146a8a370(uVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad7c88 FUN_146ad7c88 body=102 status=ok
// SIG undefined FUN_146ad7c88(void)

undefined8 * FUN_146ad7c88(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f1c560;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f200f0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return param_1;
}



// FUNCTION 146ad7cee FUN_146ad7cee body=55 status=ok
// SIG undefined FUN_146ad7cee(void)

void FUN_146ad7cee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1c560;
  plVar2 = (longlong *)param_1[0x40];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146ad7d26 FUN_146ad7d26 body=70 status=ok
// SIG undefined FUN_146ad7d26(void)

void FUN_146ad7d26(longlong param_1,longlong param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_140764512(param_1 + 0x1e0,param_2 + 0x1a8);
  return;
}



// FUNCTION 146ad7d6c FUN_146ad7d6c body=238 status=ok
// SIG undefined FUN_146ad7d6c(void)

double * FUN_146ad7d6c(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x1f8) != 0) && (*(longlong *)(param_1 + 0x200) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x200) + 8))) {
    FUN_140398bd0(param_1 + 0x1e0,&local_30);
    bVar4 = true;
    if ((local_30 != DAT_14c98dec8) && (*(char *)(local_30 + 0x39) != DAT_14c96b1e1)) {
      pfVar8 = (float *)&DAT_14c84635c;
      if ((*(byte *)(local_30 + 0x31) & 0x20) != 0) {
        pfVar8 = (float *)(local_30 + 0x168);
      }
      fVar3 = pfVar8[1];
      *param_2 = (double)*pfVar8;
      param_2[1] = (double)fVar3;
      bVar4 = false;
    }
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
    if (!bVar4) goto LAB_146ad7e39;
  }
  uVar7 = DAT_14c8463f8._4_4_;
  uVar6 = (undefined4)DAT_14c8463f8;
  uVar5 = DAT_14c8463f0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
LAB_146ad7e39:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad7e5c FUN_146ad7e5c body=1238 status=ok
// SIG undefined FUN_146ad7e5c(void)

void FUN_146ad7e5c(longlong param_1,undefined8 *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined4 *local_150;
  longlong local_148;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  char local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((*(longlong *)(param_1 + 0x1f8) == 0) || (*(longlong *)(param_1 + 0x200) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x200) + 8) < 1)) goto LAB_146ad817d;
  FUN_140398bd0(param_1 + 0x1e0,&local_138);
  if ((local_138 != DAT_14c98dec8) && ((*(byte *)(local_138 + 0x39) & *param_3) != 0)) {
    local_128 = *param_2;
    local_11c = 0x3f800000;
    local_118 = 0;
    local_70 = *(char *)(local_138 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_70 != '\0') {
        local_78 = *(ulonglong *)(local_138 + 400);
        local_88 = *(undefined8 *)(local_138 + 0x180);
        uStack_80 = *(undefined8 *)(local_138 + 0x188);
        goto LAB_146ad81fb;
      }
LAB_146ad7f36:
      uVar4 = *(undefined1 *)((longlong)param_2 + 0x34);
      fStack_100 = *(float *)(param_2 + 1);
      fVar5 = *(float *)(param_2 + 4) * 0.0;
      fVar6 = fVar5 + *(float *)(param_2 + 5);
      fVar7 = *(float *)(param_2 + 5) * 0.0;
      fVar8 = *(float *)((longlong)param_2 + 0x1c) * 0.0;
      fVar9 = fVar8 + *(float *)((longlong)param_2 + 0x24);
      fStack_ec = *(float *)((longlong)param_2 + 0x24) * 0.0;
      fVar5 = fVar5 + fVar7 + *(float *)(param_2 + 6);
      fVar8 = fVar8 + fStack_ec + *(float *)((longlong)param_2 + 0x2c);
      fVar7 = fVar7 + *(float *)(param_2 + 4);
      fStack_ec = fStack_ec + *(float *)((longlong)param_2 + 0x1c);
      local_f8 = *(float *)(param_2 + 2) + fStack_100 * 0.0;
      fStack_fc = fStack_100 * 0.0 + *(float *)((longlong)param_2 + 0xc);
      local_108 = (undefined4)local_128;
      uStack_104 = (undefined4)((ulonglong)local_128 >> 0x20);
      if (local_130 == (longlong *)0x0) {
        uStack_f4 = 0;
        uStack_f0 = 0;
        local_e8 = CONCAT44(fVar9,fVar7);
        uStack_e0 = CONCAT44(fVar8,fVar6);
        local_d8 = CONCAT35(local_d8._5_3_,CONCAT14(uVar4,fVar5)) & 0xffffff01ffffffff;
        local_d0 = local_138;
        local_c8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
        uStack_f4 = 0;
        uStack_f0 = 0;
        local_e8 = CONCAT44(fVar9,fVar7);
        uStack_e0 = CONCAT44(fVar8,fVar6);
        local_d8 = CONCAT17(local_c0._2_1_,CONCAT25((undefined2)local_c0,CONCAT14(uVar4,fVar5))) &
                   0xffffff01ffffffff;
LAB_146ad8044:
        plVar3 = local_130;
        local_c8 = local_130;
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = local_130 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_d0 = local_138;
        if ((int)*plVar1 == 0) {
          (**(code **)*local_130)(local_130);
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
    else {
      if (local_70 == '\0') goto LAB_146ad7f36;
      local_88 = *(undefined8 *)(local_138 + 0x180);
      uStack_80 = *(undefined8 *)(local_138 + 0x188);
      local_78 = *(ulonglong *)(local_138 + 400) ^ 0x80000000;
LAB_146ad81fb:
      fVar5 = (float)*(double *)(local_138 + 0x170);
      if (DAT_14c96b1e0 != '\0') {
        fVar5 = (0.5 - fVar5) + 0.5;
      }
      local_110 = CONCAT44((float)*(double *)(local_138 + 0x178),fVar5);
      local_158 = &local_110;
      local_148 = (longlong)param_2 + 0x1c;
      local_108 = *(undefined4 *)(param_2 + 1);
      local_150 = &local_108;
      uStack_104 = (undefined4)*(undefined8 *)((longlong)param_2 + 0xc);
      fStack_100 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
      FUN_146978c22(&local_c0,&local_128,&local_11c,&local_88);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
        local_d8 = local_90;
        local_108 = local_c0;
        uStack_104 = uStack_bc;
        uStack_f4 = uStack_ac;
        uStack_f0 = uStack_a8;
        local_e8 = CONCAT44(uStack_9c,local_a0);
        uStack_e0 = CONCAT44(uStack_94,uStack_98);
        local_f8 = local_b0;
        fStack_ec = fStack_a4;
        fStack_100 = fStack_b8;
        fStack_fc = fStack_b4;
        goto LAB_146ad8044;
      }
      local_d8 = local_90;
      local_108 = local_c0;
      uStack_104 = uStack_bc;
      local_e8 = CONCAT44(uStack_9c,local_a0);
      uStack_e0 = CONCAT44(uStack_94,uStack_98);
      local_f8 = local_b0;
      uStack_f4 = uStack_ac;
      uStack_f0 = uStack_a8;
      fStack_ec = fStack_a4;
      fStack_100 = fStack_b8;
      fStack_fc = fStack_b4;
      local_d0 = local_138;
      local_c8 = (longlong *)0x0;
    }
    FUN_1402018be(param_3,&local_108);
    plVar1 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c8)(local_c8);
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
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_130 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)local_130 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
LAB_146ad817d:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad833c FUN_146ad833c body=323 status=ok
// SIG undefined FUN_146ad833c(void)

int FUN_146ad833c(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  longlong *plStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_170 [8];
  undefined1 local_168 [56];
  undefined8 local_130 [29];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_170[0] = DAT_14c96b238;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x400000000;
  local_38 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_3,local_170);
  if (0 < (int)local_40) {
    puVar1 = local_168;
    puVar2 = local_130;
    if (local_48 != (undefined1 *)0x0) {
      puVar2 = (undefined8 *)(local_48 + 0x38);
      puVar1 = local_48;
    }
    if (param_8 == '\0') {
      local_1b0 = 0;
    }
    else {
      local_1b0 = *(undefined1 *)((longlong)param_1 + 0x3a);
    }
    local_1c0 = param_6 + 1;
    local_1a8 = *param_2;
    uStack_1a4 = param_2[1];
    uStack_1a0 = param_2[2];
    uStack_19c = param_2[3];
    local_198 = param_2[4];
    uStack_194 = param_2[5];
    local_188 = param_2[8];
    uStack_184 = param_2[9];
    uStack_180 = param_2[10];
    uStack_17c = param_2[0xb];
    local_1b8 = param_7;
    local_1c8 = param_5;
    plStack_190 = param_1;
    param_6 = FUN_14016eaf2(*puVar2,&local_1a8,puVar1,param_4);
  }
  FUN_144715780(local_168);
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad8480 FUN_146ad8480 body=115 status=ok
// SIG undefined FUN_146ad8480(void)

longlong * FUN_146ad8480(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a6d21a(*param_1,param_3);
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



// FUNCTION 146ad84f4 FUN_146ad84f4 body=6599 status=ok
// SIG undefined FUN_146ad84f4(void)

undefined8 *
FUN_146ad84f4(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  void *_Dst;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar8 = param_1 + 7;
  puVar7 = param_1 + 0xc;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_1d0 = param_3;
  FUN_140a581a0(puVar7);
  FUN_140a581a0(param_1 + 0x68);
  local_1c8 = param_1 + 0xc4;
  FUN_144a5dc74();
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  FUN_144a5dc74(param_1 + 0xcd);
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  FUN_144a5dc74(param_1 + 0xd2);
  *(undefined1 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  FUN_144a5dc74(param_1 + 0xda);
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined8 *)((longlong)param_1 + 0x714) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x744) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8bc) = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined1 *)(param_1 + 0x127) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined2 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined2 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ad) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c5) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined2 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined2 *)(param_1 + 0x11b) = 0;
  param_1[0x11a] = 0;
  param_1[0x11e] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  FUN_144a5dc74(param_1 + 0x129);
  *(undefined1 *)(param_1 + 300) = 0;
  param_1[0x12f] = 0;
  param_1[0x12d] = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  FUN_144a5dc74(param_1 + 0x131);
  *(undefined1 *)((longlong)param_1 + 0x99d) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  FUN_146a75078(plVar8,param_7);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
LAB_146ad877e:
    FUN_1446efa72(plVar8,0,2,0x10);
    *(undefined4 *)(param_1 + 8) = 2;
LAB_146ad879b:
    puVar2 = (undefined8 *)*plVar8;
    *puVar2 = &PTR_LAB_149f1e680;
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
    puVar2[2] = lVar11;
    *puVar2 = &PTR_FUN_149f1e610;
  }
  else {
    if ((longlong *)*plVar8 == (longlong *)0x0) {
LAB_146ad8865:
      if (iVar5 != 2) goto LAB_146ad877e;
      goto LAB_146ad879b;
    }
    cVar4 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
    if (cVar4 == '\0') {
      iVar5 = *(int *)(param_1 + 8);
      goto LAB_146ad8865;
    }
  }
  *param_1 = param_2;
  uVar6 = *param_8;
  plVar10 = (longlong *)param_8[1];
  if (plVar10 == (longlong *)0x0) {
    param_1[3] = uVar6;
    plVar12 = (longlong *)param_1[4];
    if (plVar12 != (longlong *)0x0) {
      param_1[4] = 0;
LAB_146ad8e28:
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000146ad88a1:
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    param_1[3] = uVar6;
    plVar12 = (longlong *)param_1[4];
    if (plVar10 == plVar12) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar12 = plVar10;
        goto joined_r0x000146ad88a1;
      }
    }
    else {
      param_1[4] = plVar10;
      if (plVar12 != (longlong *)0x0) goto LAB_146ad8e28;
    }
  }
  uVar6 = *param_9;
  plVar10 = (longlong *)param_9[1];
  if (plVar10 == (longlong *)0x0) {
    param_1[5] = uVar6;
    plVar12 = (longlong *)param_1[6];
    if (plVar12 != (longlong *)0x0) {
      param_1[6] = 0;
LAB_146ad8e5a:
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000146ad88da:
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    param_1[5] = uVar6;
    plVar12 = (longlong *)param_1[6];
    if (plVar10 == plVar12) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar12 = plVar10;
        goto joined_r0x000146ad88da;
      }
    }
    else {
      param_1[6] = plVar10;
      if (plVar12 != (longlong *)0x0) goto LAB_146ad8e5a;
    }
  }
  FUN_140a5e6b8(puVar7,param_4);
  (**(code **)(*param_2 + 0x88))(param_2,&local_70);
  if (*(int *)(param_1 + 8) == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)*plVar8;
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,&local_98,local_70,puVar7);
  plVar8 = plStack_90;
  if (plStack_90 == (longlong *)0x0) {
    param_1[9] = local_98;
    plVar10 = (longlong *)param_1[10];
    if (plVar10 != (longlong *)0x0) {
      param_1[10] = 0;
LAB_146ad8ec3:
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000146ad8d97:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
    param_1[9] = local_98;
    plVar10 = (longlong *)param_1[10];
    if (plStack_90 == plVar10) {
      LOCK();
      plVar10 = plStack_90 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar10 = plVar8;
        goto joined_r0x000146ad8d97;
      }
    }
    else {
      param_1[10] = plStack_90;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad8ec3;
    }
  }
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_90 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
      }
    }
  }
  local_208 = param_1 + 0xec;
  local_200 = param_1 + 0xef;
  local_1f8 = param_1 + 0xf4;
  local_1f0 = param_1 + 0xf7;
  local_1e8 = param_1 + 0xf9;
  local_1e0 = param_1 + 0xfa;
  local_1d8 = param_1 + 0xff;
  local_1c0 = param_4;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  local_98 = (longlong *)CONCAT35(local_98._5_3_,0x100000000);
  plStack_90 = (longlong *)0x0;
  uStack_88 = 0;
  *(undefined1 *)((longlong)param_1 + 0x744) = 1;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_144a450dc(param_1 + 0xe9,&plStack_90);
  FUN_1449db362(&plStack_90);
  local_98._0_2_ = 0x100;
  plStack_90 = (longlong *)0x0;
  uStack_88 = 0;
  *(undefined2 *)(param_1 + 0xeb) = 0x100;
  FUN_144a450dc(local_208,&plStack_90);
  FUN_1449db362(&plStack_90);
  local_98 = (longlong *)CONCAT62(local_98._2_6_,0x100);
  plStack_90 = (longlong *)0x0;
  uStack_88 = 0;
  *(undefined2 *)(param_1 + 0xee) = 0x100;
  FUN_144a450dc(local_200,&plStack_90);
  FUN_1449db362(&plStack_90);
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  uStack_88 = CONCAT71(uStack_88._1_7_,1);
  local_80 = 0;
  uStack_78 = 0;
  *(undefined1 *)(param_1 + 0xf3) = 1;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  FUN_144a450dc(local_1f8,&local_80);
  FUN_1449db362(&local_80);
  local_98._5_3_ = (undefined3)((ulonglong)local_98 >> 0x28);
  local_98._0_5_ = 0x100000000;
  plStack_90 = (longlong *)0x0;
  uStack_88 = 0;
  *(undefined1 *)((longlong)param_1 + 0x7b4) = 1;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  FUN_144a450dc(local_1f0,&plStack_90);
  FUN_1449db362(&plStack_90);
  local_98 = (longlong *)CONCAT35(local_98._5_3_,0x13f800000);
  plStack_90 = (longlong *)0x0;
  uStack_88 = 0;
  *(undefined1 *)((longlong)local_1e8 + 4) = 1;
  *(undefined4 *)local_1e8 = 0x3f800000;
  FUN_144a450dc(local_1e0,&plStack_90);
  FUN_1449db362(&plStack_90);
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  uStack_88 = CONCAT71(uStack_88._1_7_,1);
  local_80 = 0;
  uStack_78 = 0;
  FUN_146ad9ebc(local_1d8,&local_98);
  FUN_1449db362(&local_80);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xdc) = 1;
  FUN_140e9ef24(&local_98);
  plVar8 = plStack_90;
  puVar7 = local_1c8;
  if (plStack_90 == (longlong *)0x0) {
    param_1[1] = local_98;
    plVar10 = (longlong *)param_1[2];
    if (plVar10 != (longlong *)0x0) {
      param_1[2] = 0;
LAB_146ad8ef5:
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000146ad8dd0:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
    param_1[1] = local_98;
    plVar10 = (longlong *)param_1[2];
    if (plStack_90 == plVar10) {
      LOCK();
      plVar10 = plStack_90 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar10 = plVar8;
        goto joined_r0x000146ad8dd0;
      }
    }
    else {
      param_1[2] = plStack_90;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad8ef5;
    }
  }
  plVar8 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_14133824c(puVar7,local_1d0);
  uVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_98._0_2_ = CONCAT11(1,uVar3);
  plStack_90 = (longlong *)0x0;
  uStack_88 = 0;
  FUN_146a4daa0(param_1[9],&local_98);
  FUN_1449db362(&plStack_90);
  uVar6 = FUN_140e82300();
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    uVar6 = FUN_14142e2d2(puVar7);
  }
  FUN_146ad9f16(param_1,uVar6,1);
  FUN_1409d10d4(&local_98,uVar6);
  FUN_14010d4a2(param_1 + 0xc9,&local_98);
  if (plStack_90 != (longlong *)0x0) {
    local_70 = plStack_90;
    FUN_1447a2442();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  *(undefined1 *)(param_1 + 0xcc) = uVar3;
  if (param_5[1] == '\x01') {
    FUN_1428ff0d4(param_1[9],*param_5);
  }
  if (param_6[1] == '\x01') {
    FUN_1428ff10e(param_1[9],*param_6);
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = &PTR_FUN_149f1c820;
  puVar7[3] = param_1;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f1e8d0;
  plVar8[2] = (longlong)puVar7;
  if (plVar8 == (longlong *)0x0) {
    param_1[0x104] = puVar7;
    plVar10 = (longlong *)param_1[0x105];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x105] = 0;
LAB_146ad8d3e:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar8 != (longlong *)0x0) goto LAB_146ad8f4d;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x104] = puVar7;
    plVar10 = (longlong *)param_1[0x105];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x105] = plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad8d3e;
    }
LAB_146ad8f4d:
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  *(undefined1 *)(param_1 + 0x106) = 0;
  FUN_146ada3c2(&local_98,param_1);
  plVar8 = plStack_90;
  if (plStack_90 == (longlong *)0x0) {
    param_1[0x107] = local_98;
    plVar10 = (longlong *)param_1[0x108];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x108] = 0;
LAB_146ad90f0:
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000146ad90a7:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
    param_1[0x107] = local_98;
    plVar10 = (longlong *)param_1[0x108];
    if (plStack_90 == plVar10) {
      LOCK();
      plVar10 = plStack_90 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar10 = plVar8;
        goto joined_r0x000146ad90a7;
      }
    }
    else {
      param_1[0x108] = plStack_90;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad90f0;
    }
  }
  plVar8 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  lVar9 = FUN_14001cc68(0x30,0x10);
  FUN_146ae5e10(lVar9,param_1 + 0x11a);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f1e910;
  plVar8[2] = lVar9;
  if (plVar8 == (longlong *)0x0) {
    param_1[0x10b] = lVar9;
    plVar10 = (longlong *)param_1[0x10c];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x10c] = 0;
LAB_146ad9048:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar8 != (longlong *)0x0) goto LAB_146ad913c;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x10b] = lVar9;
    plVar10 = (longlong *)param_1[0x10c];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x10c] = plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad9048;
    }
LAB_146ad913c:
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  lVar9 = FUN_14001cc68(0x28,0x10);
  FUN_146ae62da(lVar9);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f1e930;
  plVar8[2] = lVar9;
  if (plVar8 == (longlong *)0x0) {
    param_1[0x10d] = lVar9;
    plVar10 = (longlong *)param_1[0x10e];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x10e] = 0;
LAB_146ad91be:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar8 != (longlong *)0x0) goto LAB_146ad9224;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x10d] = lVar9;
    plVar10 = (longlong *)param_1[0x10e];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x10e] = plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad91be;
    }
LAB_146ad9224:
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar7 = &PTR_FUN_149f1c908;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f1e950;
  plVar8[2] = (longlong)puVar7;
  if (plVar8 == (longlong *)0x0) {
    param_1[0x10f] = puVar7;
    plVar10 = (longlong *)param_1[0x110];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x110] = 0;
LAB_146ad92a8:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar8 != (longlong *)0x0) goto LAB_146ad930e;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x10f] = puVar7;
    plVar10 = (longlong *)param_1[0x110];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x110] = plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad92a8;
    }
LAB_146ad930e:
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar7 = &PTR_FUN_149f1c918;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f1e970;
  plVar8[2] = (longlong)puVar7;
  if (plVar8 == (longlong *)0x0) {
    param_1[0x111] = puVar7;
    plVar10 = (longlong *)param_1[0x112];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x112] = 0;
LAB_146ad9392:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)();
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      if (plVar8 != (longlong *)0x0) goto LAB_146ad93f8;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x111] = puVar7;
    plVar10 = (longlong *)param_1[0x112];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    else {
      param_1[0x112] = plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_146ad9392;
    }
LAB_146ad93f8:
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  uVar6 = DAT_14c84635c;
  param_1[0x115] = DAT_14c84635c;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0;
  if (*(char *)(param_1 + 0x119) == '\x01') {
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  *(undefined4 *)(param_1 + 0x11f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined4 *)(param_1 + 0x133) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)((longlong)param_1 + 0x984) = 0;
  param_1[0x134] = uVar6;
  _Dst = (void *)FUN_14001cc68(0x138);
  memset(_Dst,0,0x138);
  FUN_1469d24c4(_Dst);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f054e0;
  plVar8[2] = (longlong)_Dst;
  if ((_Dst != (void *)0x0) &&
     (((*(longlong *)((longlong)_Dst + 8) == 0 || (*(longlong *)((longlong)_Dst + 0x10) == 0)) ||
      (*(int *)(*(longlong *)((longlong)_Dst + 0x10) + 8) < 1)))) {
    if (plVar8 == (longlong *)0x0) {
      *(void **)((longlong)_Dst + 8) = _Dst;
      plVar10 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar10 != (longlong *)0x0) {
LAB_146ad9534:
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        *(longlong **)((longlong)_Dst + 0x10) = plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_146ad9d54;
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *(void **)((longlong)_Dst + 8) = _Dst;
      if (*(longlong **)((longlong)_Dst + 0x10) != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)((longlong)_Dst + 0x10);
        if (plVar10 != (longlong *)0x0) goto LAB_146ad9534;
        *(longlong **)((longlong)_Dst + 0x10) = plVar8;
      }
LAB_146ad9d54:
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  puVar7 = param_1 + 0x135;
  param_1[0x135] = _Dst;
  plVar10 = (longlong *)param_1[0x136];
  if (plVar8 == plVar10) {
    if (plVar8 == (longlong *)0x0) goto LAB_146ad957a;
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_146ad957a;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
  }
  else {
    param_1[0x136] = plVar8;
    if (plVar10 == (longlong *)0x0) goto LAB_146ad957a;
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_146ad957a;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
    plVar8 = plVar10;
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_146ad957a:
  uVar6 = *puVar7;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  local_a0 = 3;
  *local_a8 = &DAT_149efe500;
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
  local_a8[2] = lVar11;
  *local_a8 = &PTR_FUN_149f1e760;
  local_a8[3] = param_1;
  local_a8[4] = FUN_146ada44a;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,3,0x10);
  local_b0 = 3;
  *local_b8 = &PTR_LAB_149e020b0;
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
  local_b8[2] = lVar11;
  *local_b8 = &PTR_FUN_149f1e6f0;
  local_b8[3] = param_1;
  local_b8[4] = FUN_146ada478;
  lVar9 = FUN_146ada658();
  local_c8 = *(undefined8 *)(lVar9 + 0xd0);
  local_c0 = *(longlong *)(lVar9 + 0xd8);
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
  }
  local_218 = 1;
  FUN_1469baea0(uVar6,&local_c8,&local_b8,&local_a8);
  uVar6 = *puVar7;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  local_d0 = 3;
  *local_d8 = &DAT_149efe500;
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
  local_d8[2] = lVar11;
  *local_d8 = &PTR_FUN_149f1e760;
  local_d8[3] = param_1;
  local_d8[4] = FUN_146ada6b0;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  local_e0 = 3;
  *local_e8 = &PTR_LAB_149e020b0;
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
  local_e8[2] = lVar11;
  *local_e8 = &PTR_FUN_149f1e6f0;
  local_e8[3] = param_1;
  local_e8[4] = FUN_146ada72e;
  lVar9 = FUN_146ada658();
  local_f8 = *(undefined8 *)(lVar9 + 0x90);
  local_f0 = *(longlong *)(lVar9 + 0x98);
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
    UNLOCK();
  }
  local_218 = 0;
  FUN_1469baea0(uVar6,&local_f8,&local_e8,&local_d8);
  uVar6 = *puVar7;
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  FUN_1446efa72(&local_108,0,3,0x10);
  local_100 = 3;
  *local_108 = &DAT_149efe500;
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
  local_108[2] = lVar11;
  *local_108 = &PTR_FUN_149f1e760;
  local_108[3] = param_1;
  local_108[4] = FUN_146ada872;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  FUN_1446efa72(&local_118,0,3,0x10);
  local_110 = 3;
  *local_118 = &PTR_LAB_149e020b0;
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
  local_118[2] = lVar11;
  *local_118 = &PTR_FUN_149f1e6f0;
  local_118[3] = param_1;
  local_118[4] = FUN_146ada8e2;
  lVar9 = FUN_146ada658();
  local_128 = *(undefined8 *)(lVar9 + 0xb0);
  local_120 = *(longlong *)(lVar9 + 0xb8);
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  local_218 = 1;
  FUN_1469baea0(uVar6,&local_128,&local_118,&local_108);
  uVar6 = *puVar7;
  local_138 = (undefined8 *)0x0;
  local_130 = 0;
  FUN_1446efa72(&local_138,0,3,0x10);
  local_130 = 3;
  *local_138 = &DAT_149efe500;
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
  local_138[2] = lVar11;
  *local_138 = &PTR_FUN_149f1e760;
  local_138[3] = param_1;
  local_138[4] = FUN_146ada984;
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  FUN_1446efa72(&local_148,0,3,0x10);
  local_140 = 3;
  *local_148 = &PTR_LAB_149e020b0;
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
  local_148[2] = lVar11;
  *local_148 = &PTR_FUN_149f1e6f0;
  local_148[3] = param_1;
  local_148[4] = FUN_146ada9f4;
  lVar9 = FUN_146ada658();
  local_158 = *(undefined8 *)(lVar9 + 0xa0);
  local_150 = *(longlong *)(lVar9 + 0xa8);
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  local_218 = 0;
  FUN_1469baea0(uVar6,&local_158,&local_148,&local_138);
  uVar6 = *puVar7;
  local_168 = (undefined8 *)0x0;
  local_160 = 0;
  FUN_1446efa72(&local_168,0,3,0x10);
  local_160 = 3;
  *local_168 = &DAT_149efe500;
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
  local_168[2] = lVar11;
  *local_168 = &PTR_FUN_149f1e760;
  local_168[3] = param_1;
  local_168[4] = FUN_146adaafa;
  local_178 = (undefined8 *)0x0;
  local_170 = 0;
  FUN_1446efa72(&local_178,0,2,0x10);
  local_170 = 2;
  *local_178 = &PTR_LAB_149e020b0;
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
  local_178[2] = lVar11;
  *local_178 = &PTR_FUN_149f1e7d0;
  local_178[3] = param_1;
  lVar9 = FUN_146ada658();
  local_188 = *(undefined8 *)(lVar9 + 0xf0);
  local_180 = *(longlong *)(lVar9 + 0xf8);
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
    UNLOCK();
  }
  local_218 = 0;
  FUN_1469baea0(uVar6,&local_188,&local_178,&local_168);
  uVar6 = *puVar7;
  local_198 = (undefined8 *)0x0;
  local_190 = 0;
  FUN_1446efa72(&local_198,0,3,0x10);
  local_190 = 3;
  *local_198 = &DAT_149efe500;
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
  local_198[2] = lVar11;
  *local_198 = &PTR_FUN_149f1e760;
  local_198[3] = param_1;
  local_198[4] = &LAB_146adab68;
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0;
  FUN_1446efa72(&local_1a8,0,3,0x10);
  local_1a0 = 3;
  *local_1a8 = &PTR_LAB_149e020b0;
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
  local_1a8[2] = lVar11;
  *local_1a8 = &PTR_FUN_149f1e6f0;
  local_1a8[3] = param_1;
  local_1a8[4] = FUN_146adab6c;
  lVar9 = FUN_146ada658();
  local_1b8 = *(undefined8 *)(lVar9 + 0x110);
  local_1b0 = *(longlong *)(lVar9 + 0x118);
  if (local_1b0 != 0) {
    LOCK();
    *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
    UNLOCK();
  }
  local_218 = 0;
  FUN_1469baea0(uVar6,&local_1b8,&local_1a8,&local_198);
  FUN_140e9e952(local_1c0);
  if (param_5[1] == '\x01') {
    param_5[1] = 0;
  }
  if (param_6[1] == '\x01') {
    param_6[1] = 0;
  }
  plVar8 = (longlong *)param_8[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  plVar8 = (longlong *)param_9[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ad9ebc FUN_146ad9ebc body=89 status=ok
// SIG undefined FUN_146ad9ebc(void)

longlong * FUN_146ad9ebc(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_144a450dc(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 146ad9f16 FUN_146ad9f16 body=1195 status=ok
// SIG undefined FUN_146ad9f16(void)

ulonglong FUN_146ad9f16(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_108;
  longlong *local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  int iStack_d4;
  longlong *local_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_3 == '\0') {
    FUN_146adb77e(param_1,&local_b8);
    puVar9 = (undefined8 *)FUN_1447a1f4a(&local_b8);
    puVar8 = (undefined8 *)FUN_1447a1f4a(param_2);
    iVar13 = *(int *)(puVar9 + 1);
    if (iVar13 == *(int *)(puVar8 + 1)) {
      bVar14 = true;
      if (1 < iVar13) {
        iVar13 = wcscmp((wchar_t *)*puVar9,(wchar_t *)*puVar8);
        bVar14 = iVar13 == 0;
      }
    }
    else {
      bVar14 = *(int *)(puVar8 + 1) + iVar13 == 1;
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    if (bVar14) {
      uVar12 = 0;
      goto LAB_146ada045;
    }
  }
  uVar6 = FUN_1447a1f4a(param_2);
  if (*(char *)(param_1 + 0x119) == '\x01') {
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  FUN_1409d1334(param_1[9]);
  FUN_1410f0110(param_1[9]);
  FUN_1409d1214(param_1[9]);
  (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],uVar6,param_1[9]);
  (**(code **)(*(longlong *)param_1[3] + 0x28))();
  lVar5 = param_1[9];
  if (*(int *)(lVar5 + 0x28) == 0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar9 = 0;
    puVar9[1] = 0;
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_149f0ebe0;
    plVar10[2] = (longlong)puVar9;
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    local_118 = param_1 + 0xc;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_88 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    uStack_80 = 0x8000000000;
    local_78 = 0xffffffff;
    local_e8 = puVar9;
    local_e0 = plVar10;
    FUN_146adc808(param_1,&local_d8);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
    FUN_1410f05b0(&local_c8,0);
    *local_c8 = CONCAT44(iStack_d4,local_d8);
    local_c8[1] = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d0 + 0x10))(local_d0);
          }
        }
      }
    }
    FUN_141720dbc(&local_b8);
    plVar1 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_e0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    uVar6 = param_1[9];
    local_f8 = local_c8;
    uStack_f0 = uStack_c0;
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_108 = puVar9;
    local_100 = plVar10;
    FUN_1410f0234(&local_b8,&local_108,&local_f8);
    FUN_146a5292a(uVar6,&local_b8);
    FUN_1417233a6(&local_b8);
    FUN_1410f0078(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
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
  }
  if (*(int *)(param_1 + 0x11a) < *(int *)(lVar5 + 0x28)) {
    iVar13 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    if (iVar13 < 1) {
      iVar13 = 0;
    }
    iVar4 = *(int *)(*(longlong *)
                      (*(longlong *)(lVar5 + 0x20) + (longlong)*(int *)(param_1 + 0x11a) * 0x70) + 8
                    );
    iVar11 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar11 = 0;
    }
    if (iVar11 < iVar13) goto LAB_146ada079;
  }
  else {
LAB_146ada079:
    lVar7 = (longlong)*(int *)(lVar5 + 0x28) + -1;
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + lVar7 * 0x70) + 8);
    iStack_d4 = iVar13 + -1;
    if (iVar13 == 0) {
      iStack_d4 = 0;
    }
    local_d8 = (undefined4)lVar7;
    FUN_146adc8c2(param_1 + 0x11a,param_1[9]);
    iVar13 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    if (iVar13 < 1) {
      iVar13 = 0;
    }
    local_b8 = (longlong *)CONCAT44(iVar13,*(undefined4 *)(param_1 + 0x11a));
    (**(code **)(*(longlong *)*param_1 + 0xb0))();
    iVar13 = *(int *)((longlong)param_1 + 0x8d4) + (uint)(*(char *)(param_1 + 0x11b) == '\x01');
    if (iVar13 < 1) {
      iVar13 = 0;
    }
    local_c8 = (undefined8 *)CONCAT44(iVar13,*(undefined4 *)(param_1 + 0x11a));
    FUN_146a50afa(param_1[9],&local_b8);
    *(float *)((longlong)param_1 + 0x8cc) = (float)(double)local_b8;
    FUN_146adc948(param_1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_b8);
  uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  FUN_140163244(local_b8,1);
  plVar10 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_146ada045:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ada3c2 FUN_146ada3c2 body=135 status=ok
// SIG undefined FUN_146ada3c2(void)

undefined8 * FUN_146ada3c2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *puVar1 = &PTR_FUN_149f1c870;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_14570e3a0(puVar1 + 4);
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f1e8f0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 146ada44a FUN_146ada44a body=45 status=ok
// SIG undefined FUN_146ada44a(void)

ulonglong FUN_146ada44a(undefined8 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*(longlong *)param_1[0x107] + 8))();
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146ada478 FUN_146ada478 body=479 status=ok
// SIG undefined FUN_146ada478(void)

void FUN_146ada478(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  char local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (*(code *)**(undefined8 **)*param_1)();
  if ((cVar2 != '\0') || (*(int *)(param_1 + 0x11e) < 1)) goto LAB_146ada49d;
  cVar2 = (**(code **)(*(longlong *)param_1[0x107] + 8))();
  if (cVar2 != '\0') goto LAB_146ada49d;
  iVar4 = *(int *)(param_1 + 0x11f);
  if (iVar4 == -1) {
    iVar4 = *(int *)(param_1 + 0x11e);
    FUN_144a5dc74(&local_58);
    local_40 = '\0';
    local_28 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_146adec1a(param_1,&local_58);
    FUN_146ae32fe(param_1,&local_58);
    if (local_40 == '\x01') {
      local_40 = '\0';
    }
    if ((longlong *)CONCAT44(iStack_54,local_58) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(iStack_54,local_58) + 0x10))();
    }
  }
  if (iVar4 < 1) goto LAB_146ada49d;
  lVar5 = (ulonglong)(iVar4 - 1U) * 0x38 + param_1[0x11d];
  if ((*(int *)(param_1 + 200) == 0) || ((longlong *)param_1[199] == (longlong *)0x0)) {
LAB_146ada515:
    FUN_146a89fb8(param_1 + 0xc4,lVar5);
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[199] + 0x30))();
    if (cVar2 == '\0') goto LAB_146ada515;
  }
  cVar2 = FUN_146ad9f16(param_1,lVar5,0);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,lVar5);
  }
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  cVar2 = *(char *)(lVar5 + 0x28);
  uVar3 = *(undefined1 *)(lVar5 + 0x29);
  param_1[0x11a] = uVar1;
  *(char *)(param_1 + 0x11b) = cVar2;
  *(undefined1 *)((longlong)param_1 + 0x8d9) = uVar3;
  param_1[0x11c] = 0;
  if ((undefined8 *)(lVar5 + 0x10) != param_1 + 0x118) {
    if (*(char *)(lVar5 + 0x18) == '\x01') {
      param_1[0x118] = *(undefined8 *)(lVar5 + 0x10);
      uVar3 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x119) != '\x01') goto LAB_146ada588;
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x119) = uVar3;
  }
LAB_146ada588:
  local_58 = (undefined4)uVar1;
  iVar6 = (uint)(cVar2 == '\x01') + (int)((ulonglong)uVar1 >> 0x20);
  iStack_54 = 0;
  if (0 < iVar6) {
    iStack_54 = iVar6;
  }
  (**(code **)(*(longlong *)*param_1 + 0xb0))();
  FUN_146adc948(param_1);
  *(uint *)(param_1 + 0x11f) = iVar4 - 1U;
LAB_146ada49d:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ada658 FUN_146ada658 body=87 status=ok
// SIG undefined FUN_146ada658(void)

undefined8 FUN_146ada658(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = DAT_14c98e610;
  if (DAT_14c98e610 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)DAT_14c98e610[1];
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
      uVar6 = DAT_14c98e608;
      UNLOCK();
    } while (!bVar7);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
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



// FUNCTION 146ada6b0 FUN_146ada6b0 body=125 status=ok
// SIG undefined FUN_146ada6b0(void)

byte FUN_146ada6b0(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int local_18;
  int iStack_14;
  
  bVar1 = (*(code *)**(undefined8 **)*param_1)();
  bVar2 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_18 = *(int *)(param_1 + 0x11a);
  iVar3 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  iStack_14 = 0;
  if (0 < iVar3) {
    iStack_14 = iVar3;
  }
  piVar4 = (int *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x119) == '\0') {
    piVar4 = &local_18;
  }
  return ((bVar2 | bVar1) ^ 1) &
         ((int)((ulonglong)*(undefined8 *)piVar4 >> 0x20) != iStack_14 ||
         (int)*(undefined8 *)piVar4 != *(int *)(param_1 + 0x11a));
}



// FUNCTION 146ada72e FUN_146ada72e body=322 status=ok
// SIG undefined FUN_146ada72e(void)

void FUN_146ada72e(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  int iStack_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(longlong *)*param_1 + 8))(), cVar1 == '\0')) {
    iVar2 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    local_30 = CONCAT44(iVar2,*(int *)(param_1 + 0x11a));
    puVar3 = &local_30;
    if (*(char *)(param_1 + 0x119) != '\0') {
      puVar3 = param_1 + 0x118;
    }
    if ((*(int *)(param_1 + 0x11a) != (int)*puVar3) || (iVar2 != (int)((ulonglong)*puVar3 >> 0x20)))
    {
      FUN_146ae304e(param_1);
      local_50 = *(undefined4 *)(param_1 + 0x11a);
      iVar2 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
      iStack_4c = 0;
      if (0 < iVar2) {
        iStack_4c = iVar2;
      }
      puVar3 = param_1 + 0x118;
      if (*(char *)(param_1 + 0x119) == '\0') {
        puVar3 = (undefined8 *)&local_50;
      }
      local_30 = *puVar3;
      local_28 = CONCAT44(iStack_4c,*(undefined4 *)(param_1 + 0x11a));
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      FUN_146a52ff8(param_1[9],&local_48);
      puVar4 = local_48;
      if ((int)uStack_40 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_142855b70(puVar4);
      FUN_146ae1f82(param_1);
      FUN_146adc948(param_1);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_146ae311c(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ada872 FUN_146ada872 body=110 status=ok
// SIG undefined FUN_146ada872(void)

byte FUN_146ada872(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = (*(code *)**(undefined8 **)*param_1)();
  local_38 = 0;
  uStack_30 = 0;
  FUN_140d67490(&local_38);
  iVar1 = (int)uStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (bVar2 ^ 1) & 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ada8e2 FUN_146ada8e2 body=161 status=ok
// SIG undefined FUN_146ada8e2(void)

void FUN_146ada8e2(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar1 == '\0') {
    FUN_146ae304e(param_1);
    FUN_146ae1f82(param_1);
    local_28 = 0;
    uStack_20 = 0;
    FUN_140d67490(&local_28);
    if ((int)uStack_20 - 2U < 0x7fffffff) {
      FUN_146ae2744(param_1,&local_28);
      (**(code **)(*(longlong *)param_1[9] + 8))();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    FUN_146ae311c(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ada984 FUN_146ada984 body=111 status=ok
// SIG undefined FUN_146ada984(void)

byte FUN_146ada984(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int iStack_c;
  
  bVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_10 = *(int *)(param_1 + 0x11a);
  iVar2 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  iStack_c = 0;
  if (0 < iVar2) {
    iStack_c = iVar2;
  }
  piVar3 = (int *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x119) == '\0') {
    piVar3 = &local_10;
  }
  return (bVar1 ^ 1) &
         ((int)((ulonglong)*(undefined8 *)piVar3 >> 0x20) != iStack_c ||
         (int)*(undefined8 *)piVar3 != *(int *)(param_1 + 0x11a));
}



// FUNCTION 146ada9f4 FUN_146ada9f4 body=260 status=ok
// SIG undefined FUN_146ada9f4(void)

void FUN_146ada9f4(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_68 [40];
  int local_40;
  int iStack_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x11a);
    iVar5 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    local_28 = CONCAT44(iVar3,iVar1);
    piVar6 = (int *)&local_28;
    if (*(char *)(param_1 + 0x119) != '\0') {
      piVar6 = (int *)(param_1 + 0x118);
    }
    if ((iVar1 != (int)*(undefined8 *)piVar6) ||
       (iVar3 != (int)((ulonglong)*(undefined8 *)piVar6 >> 0x20))) {
      local_40 = iVar1;
      iStack_3c = iVar3;
      piVar6 = (int *)(param_1 + 0x118);
      if (*(char *)(param_1 + 0x119) == '\0') {
        piVar6 = &local_40;
      }
      local_28 = *(undefined8 *)piVar6;
      local_20 = CONCAT44(iVar3,iVar1);
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      FUN_146a52ff8(param_1[9],&local_38);
      puVar4 = local_38;
      if ((int)uStack_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_142855b70(puVar4);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146adaafa FUN_146adaafa body=110 status=ok
// SIG undefined FUN_146adaafa(void)

byte FUN_146adaafa(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int iStack_c;
  
  bVar1 = (*(code *)**(undefined8 **)*param_1)();
  local_10 = *(int *)(param_1 + 0x11a);
  iVar2 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  iStack_c = 0;
  if (0 < iVar2) {
    iStack_c = iVar2;
  }
  piVar3 = (int *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x119) == '\0') {
    piVar3 = &local_10;
  }
  return (bVar1 ^ 1) &
         ((int)((ulonglong)*(undefined8 *)piVar3 >> 0x20) != iStack_c ||
         (int)*(undefined8 *)piVar3 != *(int *)(param_1 + 0x11a));
}



// FUNCTION 146adab6c FUN_146adab6c body=235 status=ok
// SIG undefined FUN_146adab6c(void)

void FUN_146adab6c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar4 = FUN_146a52d0a(param_1[9]);
  if (cVar4 == '\0') {
    iVar3 = *(int *)(param_1[9] + 0x28);
    param_1[0x118] = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    lVar5 = (longlong)iVar3 + -1;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1[9] + 0x20) + lVar5 * 0x70) + 8);
    local_14 = iVar3 + -1;
    if (iVar3 == 0) {
      local_14 = 0;
    }
    local_18 = (undefined4)lVar5;
    FUN_146adc8c2(param_1 + 0x11a);
    FUN_146adc948(param_1);
    (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_28);
    FUN_140163244(local_28,5);
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adac58 FUN_146adac58 body=1884 status=ok
// SIG undefined FUN_146adac58(void)

void FUN_146adac58(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x137) != '\0') ||
     (((param_1[0x138] != 0 && (param_1[0x139] != 0)) && (0 < *(int *)(param_1[0x139] + 8))))) {
    FUN_146adb3b6(param_1 + 0x137);
  }
  if (DAT_14c98e618 != 0) {
    plVar7 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe8))();
    if ((plVar7 != (longlong *)0x0) && (*(char *)(param_1 + 0x106) == '\x01')) {
      lVar4 = param_1[0x107];
      plVar5 = (longlong *)param_1[0x108];
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined1 *)(lVar4 + 0x58) = 0;
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined1 *)(lVar4 + 0x58) = 0;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_48 = plVar5;
      }
      local_50 = lVar4;
      cVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_50);
      plVar3 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (cVar6 != '\0') {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_50 = lVar4;
        local_48 = plVar5;
        (**(code **)(*plVar7 + 0x28))(plVar7,&local_50);
        plVar3 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_50 = lVar4;
      local_48 = plVar5;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
      plVar7 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    }
    if ((DAT_14c98e618 != 0) && (cVar6 = FUN_1469133c2(), cVar6 != '\0')) {
      (**(code **)(*(longlong *)*param_1 + 0x90))((longlong *)*param_1,&local_50);
      if (local_50 == 0) {
        cVar6 = '\0';
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 0x90))((longlong *)*param_1,&local_60);
        FUN_14287b7b4(local_60,&local_3a);
        cVar6 = local_39;
        if (local_39 == '\x01') {
          local_39 = '\0';
        }
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_58 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_58 + 0x10))(local_58);
            }
          }
        }
      }
      plVar7 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (cVar6 != '\0') {
        local_78 = 0;
        uStack_70 = 0;
        FUN_1428f5168(DAT_14c98e618,0,0);
      }
    }
  }
  plVar7 = (longlong *)param_1[0x139];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = (longlong *)param_1[0x136];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (*(char *)((longlong)param_1 + 0x99d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x99d) = 0;
  }
  if ((longlong *)param_1[0x131] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x131] + 0x10))();
  }
  if (*(char *)(param_1 + 300) == '\x01') {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  if ((longlong *)param_1[0x129] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x129] + 0x10))();
  }
  if (*(char *)(param_1 + 0x127) == '\x01') {
    if (*(char *)(param_1 + 0x123) == '\x01') {
      *(undefined1 *)(param_1 + 0x123) = 0;
    }
    if ((longlong *)param_1[0x120] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x120] + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x127) = 0;
  }
  FUN_146af9143(param_1[0x11d],*(undefined4 *)(param_1 + 0x11e));
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x119) == '\x01') {
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x8bc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x8bc) = 0;
  }
  FUN_1410f0dc1(param_1[0x113],*(undefined4 *)(param_1 + 0x114));
  if (param_1[0x113] != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)param_1[0x112];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[0x110];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[0x10e];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[0x10c];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[0x10a];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[0x108];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[0x105];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_1449db362(param_1 + 0x102);
  if (param_1[0xff] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xfd);
  FUN_1449db362(param_1 + 0xfa);
  FUN_1449db362(param_1 + 0xf7);
  FUN_1449db362(param_1 + 0xf4);
  FUN_1449db362(param_1 + 0xef);
  FUN_1449db362(param_1 + 0xec);
  FUN_1449db362(param_1 + 0xe9);
  *(undefined4 *)(param_1 + 0xe6) = 0;
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  FUN_146af797e(param_1 + 0xdd);
  if ((longlong *)param_1[0xda] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xda] + 0x10))();
  }
  if (param_1[0xd8] != 0) {
    local_50 = param_1[0xd8];
    FUN_1447a2442();
  }
  if ((longlong *)param_1[0xd7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd7] + 0x10))();
  }
  FUN_1449db362(param_1 + 0xd5);
  if ((longlong *)param_1[0xd2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd2] + 0x10))();
  }
  FUN_1449db362(param_1 + 0xd0);
  if ((longlong *)param_1[0xcd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xcd] + 0x10))();
  }
  if (param_1[0xca] != 0) {
    local_50 = param_1[0xca];
    FUN_1447a2442();
  }
  if ((longlong *)param_1[0xc9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc9] + 0x10))();
  }
  FUN_1449db362(param_1 + 199);
  if ((longlong *)param_1[0xc4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc4] + 0x10))();
  }
  FUN_140e9e952(param_1 + 0x68);
  FUN_140e9e952(param_1 + 0xc);
  lVar4 = param_1[0xb];
  if (lVar4 != 0) {
    FUN_140f1f828(lVar4);
    FUN_1400020a8(lVar4);
  }
  plVar7 = (longlong *)param_1[10];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_1449db362(param_1 + 7);
  plVar7 = (longlong *)param_1[6];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[4];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146adb3b6 FUN_146adb3b6 body=148 status=ok
// SIG undefined FUN_146adb3b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146adb3b6(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0);
        goto LAB_146adb41c;
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
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_146adb41c:
  *param_1 = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146adb43e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146adb44a FUN_146adb44a body=819 status=ok
// SIG undefined FUN_146adb44a(void)

void FUN_146adb44a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar6 = param_1 + 0xc4;
  plVar5 = (longlong *)FUN_140e82300();
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    plVar5 = (longlong *)FUN_14142e2d2(puVar6);
  }
  local_48 = (longlong *)*plVar5;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  local_40 = (undefined4)plVar5[1];
  FUN_14133824c(puVar6,param_2);
  plVar5 = (longlong *)FUN_140e82300();
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    plVar5 = (longlong *)FUN_14142e2d2(puVar6);
  }
  local_58 = (longlong *)*plVar5;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_50 = (undefined4)plVar5[1];
  pplVar8 = &local_58;
  FUN_146adb77e(param_1,local_68);
  puVar6 = (undefined8 *)FUN_1447a1f4a(local_68);
  puVar7 = (undefined8 *)FUN_1447a1f4a(pplVar8);
  iVar4 = *(int *)(puVar6 + 1);
  if (iVar4 == *(int *)(puVar7 + 1)) {
    pplVar8 = (longlong **)CONCAT71((int7)((ulonglong)pplVar8 >> 8),1);
    uVar9 = (uint)pplVar8;
    if (1 < iVar4) {
      iVar4 = wcscmp((wchar_t *)*puVar6,(wchar_t *)*puVar7);
      bVar10 = iVar4 == 0;
      goto LAB_146adb52f;
    }
  }
  else {
    bVar10 = *(int *)(puVar7 + 1) + iVar4 == 1;
LAB_146adb52f:
    uVar9 = (uint)CONCAT71((int7)((ulonglong)pplVar8 >> 8),bVar10);
  }
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_78);
  FUN_14287b7b4(local_78,&local_32);
  cVar3 = local_31;
  puVar6 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (cVar3 == '\x01') {
    pplVar8 = local_68;
  }
  else {
    pplVar8 = &local_48;
  }
  puVar7 = (undefined8 *)FUN_1447a1f4a(pplVar8);
  iVar4 = *(int *)(puVar6 + 1);
  if (iVar4 == *(int *)(puVar7 + 1)) {
    bVar10 = true;
    if (1 < iVar4) {
      iVar4 = wcscmp((wchar_t *)*puVar6,(wchar_t *)*puVar7);
      bVar10 = iVar4 == 0;
    }
  }
  else {
    bVar10 = *(int *)(puVar7 + 1) + iVar4 == 1;
  }
  plVar5 = local_70;
  if (local_31 == '\x01') {
    local_31 = '\0';
  }
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
  cVar3 = FUN_146adb7f0(param_1,&local_58,uVar9 ^ 1);
  if (cVar3 == '\0') {
    if (bVar10) goto LAB_146adb67c;
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_78);
    FUN_14287b7b4(local_78,&local_32);
    plVar5 = local_70;
    if (local_31 == '\x01') {
      cVar3 = *(char *)((longlong)param_1 + 0x981);
      local_31 = '\0';
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
      if (cVar3 == '\0') {
        FUN_146adb98e(param_1,1,0);
      }
    }
    else if (local_70 != (longlong *)0x0) {
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
    if (bVar10) {
LAB_146adb67c:
      if (((*(int *)(param_1 + 200) == 0) || ((longlong *)param_1[199] == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*(longlong *)param_1[199] + 0x30))(), cVar3 == '\0'))
      goto LAB_146adb6df;
    }
    else {
      (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,&local_58);
    }
  }
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_78);
  FUN_140163244(local_78,5);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_146adb6df:
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146adb77e FUN_146adb77e body=112 status=ok
// SIG undefined FUN_146adb77e(void)

undefined8 FUN_146adb77e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),local_28,*(undefined8 *)(param_1 + 0x48));
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adb7f0 FUN_146adb7f0 body=412 status=ok
// SIG undefined FUN_146adb7f0(void)

undefined8 FUN_146adb7f0(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_50._0_2_ = CONCAT11(1,cVar1);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146a4daa0(param_1[9],&local_50);
  FUN_1449db362(local_48);
  if (param_2 == (undefined8 *)0x0) {
LAB_146adb86e:
    cVar2 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0xcc) == cVar1)) {
      uVar3 = 0;
      goto LAB_146adb89d;
    }
    if (param_2 == (undefined8 *)0x0) {
      FUN_146adb77e(param_1,&local_50);
    }
    else {
      local_50 = (longlong *)*param_2;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
      local_48[0] = CONCAT44(local_48[0]._4_4_,*(undefined4 *)(param_2 + 1));
    }
    FUN_146ade2ee(param_1,&local_50);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  else {
    if (param_3 == '\0') {
      cVar2 = FUN_14010cac8(param_1 + 0xc9,param_2);
      if (cVar2 != '\0') goto LAB_146adb86e;
      cVar2 = FUN_1409d1136(param_1 + 0xc9,param_2);
      if (cVar2 == '\0') goto LAB_146adb941;
      cVar2 = '\0';
    }
    else {
LAB_146adb941:
      cVar2 = FUN_146ad9f16(param_1,param_2,1);
    }
    FUN_1409d10d4(&local_50,param_2);
    FUN_14010d4a2(param_1 + 0xc9,&local_50);
    if (local_48[0] != 0) {
      local_48[2] = local_48[0];
      FUN_1447a2442();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (cVar2 == '\0') goto LAB_146adb86e;
  }
  *(char *)(param_1 + 0xcc) = cVar1;
  (**(code **)(*(longlong *)param_1[9] + 8))();
  uVar3 = 1;
LAB_146adb89d:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adb98e FUN_146adb98e body=55 status=ok
// SIG undefined FUN_146adb98e(void)

void FUN_146adb98e(undefined8 param_1,uint param_2)

{
  undefined1 auStack_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
                    /* WARNING: Could not recover jumptable at 0x000146adb9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_149f204d0 + *(int *)(&DAT_149f204d0 + (ulonglong)param_2 * 4)))();
  return;
}



// FUNCTION 146adc2a4 FUN_146adc2a4 body=79 status=ok
// SIG undefined FUN_146adc2a4(void)

longlong * FUN_146adc2a4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  if (*(char *)(param_1 + 0x630) == '\x01') {
    plVar2 = (longlong *)FUN_14142e2d2(param_1 + 0x620);
  }
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 146adc2f4 FUN_146adc2f4 body=642 status=ok
// SIG undefined FUN_146adc2f4(void)

void FUN_146adc2f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 auStack_3b8 [32];
  undefined1 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 local_378;
  undefined8 *local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
  undefined1 local_329;
  undefined8 local_328;
  longlong *local_320;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_14133824c(param_1 + 0xcd);
  if ((*(int *)(param_1 + 0xd1) == 0) || ((longlong *)param_1[0xd0] == (longlong *)0x0)) {
LAB_146adc34a:
    uVar8 = FUN_140e82300();
    if (*(char *)(param_1 + 0xcf) == '\x01') {
      uVar8 = FUN_14142e2d2(param_1 + 0xcd);
    }
    cVar7 = FUN_144a7c5f6(uVar8);
    if (cVar7 != '\0') {
      lVar5 = param_1[0xb];
      if (lVar5 != 0) {
        param_1[0xb] = 0;
        FUN_140f1f828(lVar5);
        FUN_1400020a8(lVar5);
      }
      goto LAB_146adc502;
    }
  }
  else {
    cVar7 = (**(code **)(*(longlong *)param_1[0xd0] + 0x30))();
    if (cVar7 == '\0') goto LAB_146adc34a;
  }
  FUN_140a5e6b8(param_1 + 0x68,param_1 + 0xc);
  local_358 = param_1[5];
  plVar6 = (longlong *)param_1[6];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_370 = param_1 + 7;
  uVar3 = *(undefined1 *)(param_1[9] + 0x91);
  uVar4 = *(undefined1 *)(param_1[9] + 0x92);
  (**(code **)(*(longlong *)*param_1 + 0x90))((longlong *)*param_1,&local_368);
  local_378 = local_368;
  uVar8 = FUN_14001cc68(0x70,0x10);
  local_348 = 0;
  uStack_340 = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_329 = 1;
  local_32b = 1;
  local_350 = plVar6;
  local_32c = uVar3;
  local_32a = uVar4;
  FUN_140e9ea3a(&local_328,param_1 + 0x68);
  local_380 = &local_348;
  local_388 = &local_358;
  local_390 = local_370;
  local_398 = &local_32a;
  FUN_140a5eb46(uVar8,local_378,&local_328,&local_32c);
  lVar5 = param_1[0xb];
  param_1[0xb] = uVar8;
  if (lVar5 != 0) {
    FUN_140f1f828(lVar5);
    FUN_1400020a8(lVar5);
  }
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
  FUN_1428ff1b2(*(undefined8 *)param_1[0xb],param_1 + 0xff);
LAB_146adc502:
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_328);
  FUN_140163244(local_328,5);
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_320 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar2 = (int *)((longlong)local_320 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_320 + 0x10))(local_320);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adc578 FUN_146adc578 body=79 status=ok
// SIG undefined FUN_146adc578(void)

longlong * FUN_146adc578(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  if (*(char *)(param_1 + 0x678) == '\x01') {
    plVar2 = (longlong *)FUN_14142e2d2(param_1 + 0x668);
  }
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 146adc5c8 FUN_146adc5c8 body=252 status=ok
// SIG undefined FUN_146adc5c8(void)

void FUN_146adc5c8(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_140e82300();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar3 = FUN_14142e2d2(param_2);
  }
  FUN_14133824c(param_1 + 0xd2,param_2);
  FUN_1409d10d4(&local_40,uVar3);
  FUN_14010d4a2(param_1 + 0xd7,&local_40);
  if (local_38 != (longlong *)0x0) {
    local_28 = local_38;
    FUN_1447a2442();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  FUN_146adc6c6(param_1,uVar3,1,0);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_40);
  FUN_140163244(local_40,5);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adc6c6 FUN_146adc6c6 body=109 status=ok
// SIG undefined FUN_146adc6c6(void)

void FUN_146adc6c6(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x6d0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x6d0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x6d8) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x6e0) = param_3;
  FUN_146ade3d0(param_1,param_4);
  return;
}



// FUNCTION 146adc734 FUN_146adc734 body=137 status=ok
// SIG undefined FUN_146adc734(void)

void FUN_146adc734(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_328 [32];
  undefined1 local_308 [736];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140a5e6b8(param_1 + 0x60);
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_140e9ea3a(local_308,param_1 + 0x60);
  FUN_140a5e6b8(lVar1 + 0x160,local_308);
  FUN_140e9e952(local_308);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  if ((local_28 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adc7be FUN_146adc7be body=5 status=ok
// SIG undefined FUN_146adc7be(void)

longlong FUN_146adc7be(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 146adc7c4 FUN_146adc7c4 body=33 status=ok
// SIG undefined FUN_146adc7c4(void)

void FUN_146adc7c4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x858);
  *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 0x10) = *param_2;
  FUN_140a5c3e8(lVar1 + 0x20,param_2 + 2);
  return;
}



// FUNCTION 146adc7e6 FUN_146adc7e6 body=33 status=ok
// SIG undefined FUN_146adc7e6(void)

void FUN_146adc7e6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x868);
  *(undefined1 *)(lVar1 + 0x10) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 8) = *param_2;
  FUN_140a5c3e8(lVar1 + 0x18,param_2 + 2);
  return;
}



// FUNCTION 146adc808 FUN_146adc808 body=184 status=ok
// SIG undefined FUN_146adc808(void)

undefined8 *
FUN_146adc808(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (cVar3 == '\0') {
    FUN_1410f039c(&local_40,param_3,param_4,param_5);
  }
  else {
    FUN_146a4c344();
  }
  *param_2 = local_40;
  param_2[1] = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adc8c2 FUN_146adc8c2 body=132 status=ok
// SIG undefined FUN_146adc8c2(void)

void FUN_146adc8c2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_3;
  uVar3 = 0;
  iVar2 = (int)((ulonglong)local_10 >> 0x20);
  if (0 < iVar2) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)local_10 * 0x70) +
                    8);
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 == iVar2) {
      local_10 = local_10 + -0x100000000;
      uVar3 = 1;
    }
  }
  FUN_146ae2ea4(param_1,param_2,&local_10,uVar3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adc948 FUN_146adc948 body=3009 status=ok
// SIG undefined FUN_146adc948(void)

void FUN_146adc948(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *plVar26;
  int iVar27;
  undefined8 uVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  byte local_d4;
  char local_d3;
  char local_d2;
  byte local_d1;
  undefined8 *local_d0;
  int local_c8;
  uint uStack_c4;
  longlong *local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  uint local_84;
  ulonglong local_80;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar16 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  uVar17 = (ulonglong)uVar16;
  if ((int)uVar16 < 1) {
    uVar17 = 0;
  }
  param_1[0x116] = uVar17 << 0x20 | (ulonglong)*(uint *)(param_1 + 0x11a);
  *(char *)(param_1 + 0x117) = *(char *)(param_1 + 0x11b);
  *(undefined1 *)((longlong)param_1 + 0x8bc) = 1;
  (**(code **)(*(longlong *)*param_1 + 0x60))();
  FUN_146ae2fb4(param_1);
  local_c8 = *(int *)(param_1 + 0x11a);
  uStack_c4 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  if ((int)uStack_c4 < 1) {
    uStack_c4 = 0;
  }
  puVar10 = param_1 + 0x118;
  puVar18 = (uint *)((longlong)param_1 + 0x8c4);
  if (*(char *)(param_1 + 0x119) == '\0') {
    puVar18 = &uStack_c4;
    puVar10 = (ulonglong *)&local_c8;
  }
  uVar16 = *puVar18;
  uVar17 = *puVar10;
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_68);
  FUN_14287b7b4(local_68,&local_50);
  plVar7 = uStack_60;
  local_d4 = local_50._1_1_;
  if (local_50._1_1_ == 1) {
    local_50._0_2_ = (ushort)(byte)local_50;
  }
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar26 = uStack_60 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  cVar12 = (**(code **)(*(longlong *)param_1[0x107] + 8))();
  local_d2 = uStack_c4 != (uint)(uVar17 >> 0x20) || local_c8 != (int)uVar17;
  cVar13 = FUN_144a7c5f6(param_1 + 0xda);
  local_d1 = (*(code *)**(undefined8 **)*param_1)();
  uVar25 = uVar17 >> 0x20;
  local_d0 = param_1;
  if (cVar13 == '\0') {
    local_d3 = cVar12;
    local_b0 = uVar17;
    local_84 = uVar16;
    local_80 = uVar17 >> 0x20;
    puVar15 = (undefined8 *)FUN_1447a1f4a(param_1 + 0xda);
    local_90 = (ulonglong)(*(int *)(puVar15 + 1) - 1);
    if (*(int *)(puVar15 + 1) == 0) {
      local_90 = 0;
    }
    local_6c = 0;
    lVar21 = param_1[9];
    iVar24 = *(int *)(lVar21 + 0x28);
    if (0 < iVar24) {
      local_c0 = param_1 + 0x113;
      local_a0 = param_1 + 0xdd;
      lVar22 = 0;
      local_a8 = lVar21;
      local_98 = puVar15;
      do {
        iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar21 + 0x20) + lVar22 * 0x70) + 8);
        iVar27 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar27 = 0;
        }
        if (0 < iVar27) {
          puVar20 = (undefined8 *)(*(longlong *)(lVar21 + 0x20) + lVar22 * 0x70);
          local_b8 = puVar20;
          iVar24 = 0;
          do {
            local_e0 = iVar24;
            iVar24 = *(int *)(puVar15 + 1);
            iVar14 = iVar24 + -1;
            if (iVar24 == 0) {
              iVar14 = 0;
            }
            puVar19 = &DAT_149dfb77a;
            if (iVar24 != 0) {
              puVar19 = (undefined2 *)*puVar15;
            }
            local_e8 = 0;
            iVar14 = FUN_1447ee042(*puVar20,puVar19,iVar14,*(undefined4 *)(param_1 + 0xdc));
            if (iVar14 == -1) break;
            iVar24 = (int)local_90 + iVar14;
            uVar6 = param_1[0x111];
            plVar7 = (longlong *)param_1[0x112];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            iVar3 = *(int *)(param_1 + 0x114);
            *(uint *)(param_1 + 0x114) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0x8a4) < iVar3 + 1U) {
              FUN_146a496be(local_c0,iVar3);
            }
            puVar15 = local_98;
            puVar20 = local_b8;
            param_1 = local_d0;
            lVar23 = (longlong)iVar3 * 0x20;
            lVar21 = *local_c0;
            *(int *)(lVar21 + lVar23) = (int)lVar22;
            *(ulonglong *)(lVar21 + 4 + lVar23) = CONCAT44(iVar24,iVar14);
            *(undefined4 *)(lVar21 + 0xc + lVar23) = 0xfffffff7;
            *(undefined8 *)(lVar21 + 0x10 + lVar23) = uVar6;
            *(longlong **)(lVar21 + 0x18 + lVar23) = plVar7;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              plVar26 = plVar7 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
              LOCK();
              plVar26 = plVar7 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
              LOCK();
              plVar26 = plVar7 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
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
            local_6c = local_6c + 1;
            local_50 = CONCAT44(iVar14,(int)lVar22);
            local_68 = &local_50;
            uStack_60 = (longlong *)&local_6c;
            FUN_146af9764(local_a0,&local_74,&local_68);
          } while (iVar24 < iVar27);
          iVar24 = *(int *)(local_a8 + 0x28);
          lVar21 = local_a8;
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar24);
    }
    *(byte *)(param_1[0x111] + 8) = local_d4;
    uVar17 = local_b0;
    uVar25 = local_80;
    uVar16 = local_84;
    cVar12 = local_d3;
  }
  if (cVar12 == '\0') {
    if (local_d2 != '\0') {
      *(byte *)(local_d0[0x10f] + 8) = local_d4;
      iVar24 = (int)uVar17;
      if (iVar24 == local_c8) {
        uVar8 = uStack_c4;
        if ((int)uVar25 < (int)uStack_c4) {
          uVar8 = uVar16;
        }
        uVar9 = uStack_c4;
        if ((int)uStack_c4 < (int)uVar25) {
          uVar9 = uVar16;
        }
        uVar6 = local_d0[0x10f];
        plVar7 = (longlong *)local_d0[0x110];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        plVar26 = local_d0 + 0x113;
        iVar14 = *(int *)(local_d0 + 0x114);
        *(uint *)(local_d0 + 0x114) = iVar14 + 1U;
        if (*(uint *)((longlong)local_d0 + 0x8a4) < iVar14 + 1U) {
          FUN_146a496be(plVar26,iVar14);
        }
        lVar22 = (longlong)iVar14 * 0x20;
        lVar21 = *plVar26;
        *(int *)(lVar21 + lVar22) = iVar24;
        *(ulonglong *)(lVar21 + 4 + lVar22) = CONCAT44(uVar9,uVar8);
        *(undefined4 *)(lVar21 + 0xc + lVar22) = 0xfffffff6;
        *(undefined8 *)(lVar21 + 0x10 + lVar22) = uVar6;
        *(longlong **)(lVar21 + 0x18 + lVar22) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar26 = plVar7 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          LOCK();
          plVar26 = plVar7 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          LOCK();
          plVar26 = plVar7 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
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
      }
      else {
        uVar25 = CONCAT44(uStack_c4,local_c8);
        if (iVar24 < local_c8) {
          uVar25 = uVar17;
        }
        local_b8 = (undefined8 *)(uVar25 & 0xffffffff);
        if (iVar24 <= local_c8) {
          uVar17 = CONCAT44(uStack_c4,local_c8);
        }
        local_b0 = uVar17 & 0xffffffff;
        uVar8 = uStack_c4;
        if (iVar24 < local_c8) {
          uVar8 = uVar16;
        }
        local_98 = (undefined8 *)(ulonglong)uVar8;
        uVar8 = uStack_c4;
        if (local_c8 <= iVar24) {
          uVar8 = uVar16;
        }
        local_c0 = (longlong *)local_d0[9];
        plVar7 = local_d0 + 0x113;
        local_a8 = (ulonglong)uVar8 << 0x20;
        iVar24 = (int)uVar25;
        puVar15 = (undefined8 *)((longlong)iVar24 * 0x70);
        local_90 = (longlong)iVar24 - (longlong)(int)(uint)uVar17;
        lVar21 = 0;
        local_a0 = puVar15;
        do {
          if (lVar21 == 0) {
            iVar14 = *(int *)(*(longlong *)(local_c0[4] + (longlong)local_a0) + 8);
            uVar16 = iVar14 - 1;
            if (iVar14 == 0) {
              uVar16 = 0;
            }
            uVar6 = local_d0[0x10f];
            plVar26 = (longlong *)local_d0[0x110];
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
            }
            iVar14 = *(int *)(local_d0 + 0x114);
            *(uint *)(local_d0 + 0x114) = iVar14 + 1U;
            if (*(uint *)((longlong)local_d0 + 0x8a4) < iVar14 + 1U) {
              FUN_146a496be(plVar7,iVar14);
            }
            lVar23 = (longlong)iVar14 * 0x20;
            lVar22 = *plVar7;
            *(int *)(lVar22 + lVar23) = (int)local_b8;
            *(ulonglong *)(lVar22 + 4 + lVar23) = ((ulonglong)uVar16 << 0x20) + (longlong)local_98;
            *(undefined4 *)(lVar22 + 0xc + lVar23) = 0xfffffff6;
            *(undefined8 *)(lVar22 + 0x10 + lVar23) = uVar6;
LAB_146add3a8:
            *(longlong **)(lVar22 + 0x18 + lVar23) = plVar26;
          }
          else {
            if (local_90 + lVar21 == 0) {
              uVar6 = local_d0[0x10f];
              plVar26 = (longlong *)local_d0[0x110];
              if (plVar26 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
                UNLOCK();
              }
              iVar14 = *(int *)(local_d0 + 0x114);
              *(uint *)(local_d0 + 0x114) = iVar14 + 1U;
              if (*(uint *)((longlong)local_d0 + 0x8a4) < iVar14 + 1U) {
                FUN_146a496be(plVar7,iVar14);
              }
              lVar23 = (longlong)iVar14 * 0x20;
              lVar22 = *plVar7;
              *(int *)(lVar22 + lVar23) = (int)local_b0;
              *(longlong *)(lVar22 + 4 + lVar23) = local_a8;
              *(undefined4 *)(lVar22 + 0xc + lVar23) = 0xfffffff6;
              *(undefined8 *)(lVar22 + 0x10 + lVar23) = uVar6;
              goto LAB_146add3a8;
            }
            iVar14 = *(int *)(*(longlong *)(local_c0[4] + (longlong)puVar15) + 8);
            uVar16 = iVar14 - 1;
            if (iVar14 == 0) {
              uVar16 = 0;
            }
            uVar6 = local_d0[0x10f];
            plVar26 = (longlong *)local_d0[0x110];
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
            }
            iVar14 = *(int *)(local_d0 + 0x114);
            *(uint *)(local_d0 + 0x114) = iVar14 + 1U;
            if (*(uint *)((longlong)local_d0 + 0x8a4) < iVar14 + 1U) {
              FUN_146a496be(plVar7,iVar14);
            }
            lVar23 = (longlong)iVar14 * 0x20;
            lVar22 = *plVar7;
            *(int *)(lVar22 + lVar23) = (int)local_b8 + (int)lVar21;
            *(ulonglong *)(lVar22 + 4 + lVar23) = (ulonglong)uVar16 << 0x20;
            *(undefined4 *)(lVar22 + 0xc + lVar23) = 0xfffffff6;
            *(undefined8 *)(lVar22 + 0x10 + lVar23) = uVar6;
            *(longlong **)(lVar22 + 0x18 + lVar23) = plVar26;
          }
          if (plVar26 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar26 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
              }
            }
            LOCK();
            plVar2 = plVar26 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
              }
            }
            LOCK();
            plVar2 = plVar26 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
              }
            }
          }
          puVar15 = puVar15 + 0xe;
          lVar21 = lVar21 + 1;
        } while (~(uint)uVar17 + iVar24 + (int)lVar21 != 0);
      }
    }
  }
  else {
    local_68 = (undefined8 *)0x0;
    uStack_60 = (longlong *)0x0;
    FUN_146a52f14(param_1[9],&local_68);
    iVar24 = *(int *)(param_1[0x107] + 0x5c);
    iVar14 = *(int *)(param_1[0x107] + 0x60);
    FUN_146a53418(&local_68,&local_50,iVar24);
    FUN_146a53418(&local_68,&local_74,iVar14 + iVar24);
    iVar24 = (int)local_50;
    if (((((int)local_50 == local_74) && ((int)local_50 == local_c8)) && (local_50._4_4_ < local_70)
        ) && ((local_50._4_4_ <= (int)uStack_c4 && ((int)uStack_c4 <= local_70)))) {
      uVar6 = param_1[0x10d];
      plVar7 = (longlong *)param_1[0x10e];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      uVar28 = CONCAT44(local_70,local_50._4_4_);
      iVar14 = *(int *)(param_1 + 0x114);
      *(uint *)(param_1 + 0x114) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0x8a4) < iVar14 + 1U) {
        FUN_146a496be(param_1 + 0x113,iVar14);
      }
      lVar22 = (longlong)iVar14 * 0x20;
      lVar21 = param_1[0x113];
      *(int *)(lVar21 + lVar22) = iVar24;
      *(undefined8 *)(lVar21 + 4 + lVar22) = uVar28;
      *(undefined4 *)(lVar21 + 0xc + lVar22) = 10;
      *(undefined8 *)(lVar21 + 0x10 + lVar22) = uVar6;
      *(longlong **)(lVar21 + 0x18 + lVar22) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar26 = plVar7 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        LOCK();
        plVar26 = plVar7 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        LOCK();
        plVar26 = plVar7 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
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
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar15 = local_d0;
  local_d1 = local_d1 | local_d4 ^ 1;
  if (local_d1 == 0) {
    local_50 = local_d0[0x11a];
    if ((-1 < (int)local_50) && ((int)local_50 < *(int *)(local_d0[9] + 0x28))) {
      FUN_146a531a0(local_d0[9],&local_68,&local_50);
      uVar6 = puVar15[0x10b];
      plVar7 = (longlong *)puVar15[0x10c];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      bVar30 = SBORROW4((int)local_68,(int)uStack_60);
      iVar24 = (int)local_68 - (int)uStack_60;
      bVar29 = false;
      if ((int)local_68 == (int)uStack_60) {
        bVar30 = SBORROW4(local_68._4_4_,uStack_60._4_4_);
        iVar24 = local_68._4_4_ - uStack_60._4_4_;
        bVar29 = local_68._4_4_ == uStack_60._4_4_;
      }
      puVar20 = &uStack_60;
      if (!bVar29 && bVar30 == iVar24 < 0) {
        puVar20 = &local_68;
      }
      uVar4 = *(undefined4 *)((longlong)&local_68 + (ulonglong)(bVar30 == iVar24 < 0) * 8 + 4);
      uVar5 = *(undefined4 *)((longlong)puVar20 + 4);
      uVar11 = (int)local_50;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar24 = *(int *)(puVar15 + 0x114);
      *(uint *)(puVar15 + 0x114) = iVar24 + 1U;
      if (*(uint *)((longlong)puVar15 + 0x8a4) < iVar24 + 1U) {
        FUN_146a496be(puVar15 + 0x113,iVar24);
      }
      lVar22 = (longlong)iVar24 * 0x20;
      lVar21 = puVar15[0x113];
      *(undefined4 *)(lVar21 + lVar22) = uVar11;
      *(ulonglong *)(lVar21 + 4 + lVar22) = CONCAT44(uVar5,uVar4);
      *(undefined4 *)(lVar21 + 0xc + lVar22) = 0xb;
      *(undefined8 *)(lVar21 + 0x10 + lVar22) = uVar6;
      *(longlong **)(lVar21 + 0x18 + lVar22) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar26 = plVar7 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        LOCK();
        plVar26 = plVar7 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        LOCK();
        plVar26 = plVar7 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
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
    }
  }
  if ((longlong)*(int *)(puVar15 + 0x114) != 0) {
    lVar21 = puVar15[0x113];
    lVar22 = (longlong)*(int *)(puVar15 + 0x114) << 5;
    do {
      FUN_146a504f8(puVar15[9],lVar21);
      lVar21 = lVar21 + 0x20;
      lVar22 = lVar22 + -0x20;
    } while (lVar22 != 0);
  }
  if ((*(int *)(puVar15[0x104] + 0x10) != 0) &&
     (plVar7 = *(longlong **)(puVar15[0x104] + 8), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add50a FUN_146add50a body=259 status=ok
// SIG undefined FUN_146add50a(void)

longlong * FUN_146add50a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_68 [40];
  int local_40;
  int iStack_3c;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x8d0);
  iVar5 = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  local_28 = CONCAT44(iVar4,iVar1);
  piVar6 = (int *)&local_28;
  if (*(char *)(param_1 + 0x8c8) != '\0') {
    piVar6 = (int *)(param_1 + 0x8c0);
  }
  if ((iVar1 == (int)*(undefined8 *)piVar6) &&
     (iVar4 == (int)((ulonglong)*(undefined8 *)piVar6 >> 0x20))) {
    plVar3 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar3[1];
  }
  else {
    local_40 = iVar1;
    iStack_3c = iVar4;
    piVar6 = (int *)(param_1 + 0x8c0);
    if (*(char *)(param_1 + 0x8c8) == '\0') {
      piVar6 = &local_40;
    }
    local_28 = *(undefined8 *)piVar6;
    local_20 = CONCAT44(iVar4,iVar1);
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_146a52ff8(*(undefined8 *)(param_1 + 0x48),local_38);
    FUN_140233b1a(param_2,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add60e FUN_146add60e body=56 status=ok
// SIG undefined FUN_146add60e(void)

void FUN_146add60e(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (param_2[1] == 1) {
    uVar3 = (uint)*param_2;
  }
  else {
    uVar2 = (**(code **)(*DAT_14c968338 + 0xb0))();
    uVar3 = 0;
    if (uVar2 < 3) {
      uVar3 = uVar2;
    }
  }
  FUN_1428ff0d4(uVar1,uVar3);
  return;
}



// FUNCTION 146add646 FUN_146add646 body=56 status=ok
// SIG undefined FUN_146add646(void)

void FUN_146add646(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (param_2[1] == 1) {
    uVar3 = (uint)*param_2;
  }
  else {
    uVar2 = (**(code **)(*DAT_14c98eeb0 + 0xb0))();
    uVar3 = 0;
    if (uVar2 < 3) {
      uVar3 = uVar2;
    }
  }
  FUN_1428ff10e(uVar1,uVar3);
  return;
}



// FUNCTION 146add67e FUN_146add67e body=220 status=ok
// SIG undefined FUN_146add67e(void)

void FUN_146add67e(undefined8 *param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)((longlong)param_1 + 0x744) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0xe8) = *param_2;
  FUN_140a52b3c(param_1 + 0xe9,param_2 + 2);
  *(undefined2 *)(param_1 + 0xeb) = *param_3;
  FUN_14096c7c0(param_1 + 0xec,param_3 + 4);
  *(undefined2 *)(param_1 + 0xee) = *param_4;
  FUN_140a5d77c(param_1 + 0xef,param_4 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_30);
  FUN_140163244(local_30,5);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add75c FUN_146add75c body=152 status=ok
// SIG undefined FUN_146add75c(void)

void FUN_146add75c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)((longlong)param_1 + 0x744) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0xe8) = *param_2;
  FUN_140a52b3c(param_1 + 0xe9,param_2 + 2);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_20);
  FUN_140163244(local_20,5);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add7f6 FUN_146add7f6 body=145 status=ok
// SIG undefined FUN_146add7f6(void)

void FUN_146add7f6(undefined8 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined2 *)(param_1 + 0xeb) = *param_2;
  FUN_14096c7c0(param_1 + 0xec,param_2 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_20);
  FUN_140163244(local_20,5);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add888 FUN_146add888 body=145 status=ok
// SIG undefined FUN_146add888(void)

void FUN_146add888(undefined8 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined2 *)(param_1 + 0xee) = *param_2;
  FUN_140a5d77c(param_1 + 0xef,param_2 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_20);
  FUN_140163244(local_20,5);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add91a FUN_146add91a body=154 status=ok
// SIG undefined FUN_146add91a(void)

void FUN_146add91a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0xf1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x78c) = uVar3;
  *(undefined4 *)(param_1 + 0xf2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x794) = uVar5;
  *(undefined1 *)(param_1 + 0xf3) = *(undefined1 *)(param_2 + 4);
  FUN_140a58be0(param_1 + 0xf4,param_2 + 6);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_20);
  FUN_140163244(local_20,5);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146add9b6 FUN_146add9b6 body=176 status=ok
// SIG undefined FUN_146add9b6(void)

void FUN_146add9b6(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146adda68(param_1 + 0xf6);
  if (cVar3 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7b4) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0xf6) = *param_2;
    FUN_140a5d648(param_1 + 0xf7,param_2 + 2);
    (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_30);
    FUN_140163244(local_30,5);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adda68 FUN_146adda68 body=234 status=ok
// SIG undefined FUN_146adda68(void)

bool FUN_146adda68(int *param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[4] == 0) || (*(longlong **)(param_1 + 2) == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x30))();
  }
  if (*(longlong **)(param_2 + 2) == (longlong *)0x0 || param_2[4] == 0) {
    if (cVar2 == '\0') {
LAB_146addb08:
      if ((char)param_1[1] == (char)param_2[1]) {
        bVar4 = *param_1 == *param_2;
        goto LAB_146addac9;
      }
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 2) + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if ((param_1[4] == 0) || (plVar1 = *(longlong **)(param_1 + 2), plVar1 == (longlong *)0x0))
        {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = *(longlong **)(param_2 + 2);
        if (plVar1 == (longlong *)0x0 || param_2[4] == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_146addac9;
      }
      goto LAB_146addb08;
    }
  }
  bVar4 = false;
LAB_146addac9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146addb54 FUN_146addb54 body=152 status=ok
// SIG undefined FUN_146addb54(void)

void FUN_146addb54(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)((longlong)param_1 + 0x7cc) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0xf9) = *param_2;
  FUN_140a52b3c(param_1 + 0xfa,param_2 + 2);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_20);
  FUN_140163244(local_20,5);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146addbee FUN_146addbee body=145 status=ok
// SIG undefined FUN_146addbee(void)

void FUN_146addbee(undefined8 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined2 *)(param_1 + 0xfc) = *param_2;
  FUN_14096c7c0(param_1 + 0xfd,param_2 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_20);
  FUN_140163244(local_20,5);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146addc80 FUN_146addc80 body=348 status=ok
// SIG undefined FUN_146addc80(void)

void FUN_146addc80(undefined8 *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [32];
  char local_38;
  char cStack_37;
  undefined6 uStack_36;
  longlong *local_30;
  char local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = *(byte *)((longlong)param_1 + 0x99d);
  cVar4 = *param_2;
  bVar7 = param_2[1];
  bVar6 = *(char *)((longlong)param_1 + 0x99c) == cVar4;
  if ((bVar3 & 1) == 0) {
    bVar6 = bVar3 == bVar7;
  }
  if ((bool)(bVar3 == bVar7 & bVar6)) goto LAB_146addda8;
  local_21 = bVar3;
  if ((char *)((longlong)param_1 + 0x99c) == param_2) {
    uVar8 = param_1[9];
    cVar4 = *(char *)((longlong)param_1 + 0x99c);
    if ((bVar3 & 1) != 0) goto LAB_146addcfb;
  }
  else if (bVar7 == 0) {
    if ((bVar3 & 1) == 0) {
      uVar8 = param_1[9];
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x99d) = 0;
      uVar8 = param_1[9];
      local_21 = 0;
    }
  }
  else {
    *(char *)((longlong)param_1 + 0x99c) = cVar4;
    *(undefined1 *)((longlong)param_1 + 0x99d) = 1;
    uVar8 = param_1[9];
    local_21 = 1;
LAB_146addcfb:
    local_22 = cVar4;
  }
  FUN_1428ff148(uVar8,&local_22);
  puVar5 = (undefined8 *)param_1[0xb];
  if (puVar5 != (undefined8 *)0x0) {
    cStack_37 = *(char *)((longlong)param_1 + 0x99d);
    if (cStack_37 == '\x01') {
      local_38 = *(char *)((longlong)param_1 + 0x99c);
      uVar8 = *puVar5;
    }
    else {
      uVar8 = *puVar5;
    }
    FUN_1428ff148(uVar8);
  }
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_38);
  FUN_140163244(CONCAT62(uStack_36,CONCAT11(cStack_37,local_38)),5);
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
  bVar7 = param_2[1];
LAB_146addda8:
  if ((bVar7 & 1) != 0) {
    param_2[1] = '\0';
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146adddde FUN_146adddde body=91 status=ok
// SIG undefined FUN_146adddde(void)

void FUN_146adddde(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_38 [38];
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_2[1];
  if (local_11 == '\x01') {
    local_12 = *param_2;
  }
  FUN_1428ff148(*param_1,&local_12);
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adde3a FUN_146adde3a body=121 status=ok
// SIG undefined FUN_146adde3a(void)

void FUN_146adde3a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x7f8;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(lVar1,*param_2,iVar2);
  *(undefined1 *)(param_1 + 0x808) = *(undefined1 *)(param_2 + 2);
  FUN_140a5cea4(param_1 + 0x810,param_2 + 3);
  FUN_1428ff1b2(*(undefined8 *)(param_1 + 0x48),lVar1);
  if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
    FUN_1428ff1b2(**(undefined8 **)(param_1 + 0x58),lVar1);
    return;
  }
  return;
}



// FUNCTION 146addeb4 FUN_146addeb4 body=680 status=ok
// SIG undefined FUN_146addeb4(void)

void FUN_146addeb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe8))();
  if (plVar5 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x830) == '\0') {
      *(undefined1 *)(param_1 + 0x830) = 1;
      local_50 = *(undefined8 *)(param_1 + 0x838);
      plVar3 = *(longlong **)(param_1 + 0x840);
      if (plVar3 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_48 = plVar3;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_40,&local_50);
      plVar1 = local_38;
      if ((longlong **)(param_1 + 0x848) != &local_40) {
        *(longlong **)(param_1 + 0x848) = local_40;
        local_40 = (longlong *)0x0;
        plVar4 = *(longlong **)(param_1 + 0x850);
        if (local_38 != plVar4) {
          local_38 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x850) = plVar1;
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
      plVar3 = *(longlong **)(param_1 + 0x848);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,0);
      }
    }
    FUN_146ade15e(*(undefined8 *)(param_1 + 0x838));
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x58))
              (*(longlong **)(param_1 + 0x838),&local_40);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x90))();
    }
    plVar3 = local_38;
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
    local_40 = *(longlong **)(param_1 + 0x838);
    plVar3 = *(longlong **)(param_1 + 0x840);
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = plVar3;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    plVar5 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
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
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ade15e FUN_146ade15e body=344 status=ok
// SIG undefined FUN_146ade15e(void)

void FUN_146ade15e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    plVar2 = (longlong *)**(undefined8 **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x88))(plVar2,&local_38);
    plVar2 = local_30;
    if (local_30 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      plVar3 = DAT_14c98e618;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar3 = DAT_14c98e618;
      local_40 = plVar2;
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_38,local_48);
    plVar4 = local_30;
    *(undefined8 *)(param_1 + 0x10) = local_38;
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 != local_30) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        plVar3 = *(longlong **)(param_1 + 0x18);
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
      *(longlong **)(param_1 + 0x18) = plVar4;
      plVar4 = local_30;
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
    if (plVar2 != (longlong *)0x0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ade2b8 FUN_146ade2b8 body=53 status=ok
// SIG undefined FUN_146ade2b8(void)

void FUN_146ade2b8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e82300();
  if (*(char *)(param_1 + 0x630) == '\x01') {
    uVar1 = FUN_14142e2d2(param_1 + 0x620);
  }
  FUN_146adb7f0(param_1,uVar1,0);
  return;
}



// FUNCTION 146ade2ee FUN_146ade2ee body=225 status=ok
// SIG undefined FUN_146ade2ee(void)

void FUN_146ade2ee(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x8c8) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x8c0);
    local_38 = *(undefined8 *)(param_1 + 0x8e0);
    local_48 = *(undefined4 *)(param_1 + 0x8d0);
    uStack_44 = *(undefined4 *)(param_1 + 0x8d4);
    uStack_40 = *(undefined4 *)(param_1 + 0x8d8);
    uStack_3c = *(undefined4 *)(param_1 + 0x8dc);
    uVar2 = 1;
    FUN_146ad9f16(param_1,param_2,1);
    *(undefined8 *)(param_1 + 0x8c0) = uVar1;
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x8e0);
    local_48 = *(undefined4 *)(param_1 + 0x8d0);
    uStack_44 = *(undefined4 *)(param_1 + 0x8d4);
    uStack_40 = *(undefined4 *)(param_1 + 0x8d8);
    uStack_3c = *(undefined4 *)(param_1 + 0x8dc);
    FUN_146ad9f16(param_1,param_2,1);
    if (*(char *)(param_1 + 0x8c8) != '\x01') goto LAB_146ade352;
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x8c8) = uVar2;
LAB_146ade352:
  *(undefined8 *)(param_1 + 0x8e0) = local_38;
  *(undefined4 *)(param_1 + 0x8d0) = local_48;
  *(undefined4 *)(param_1 + 0x8d4) = uStack_44;
  *(undefined4 *)(param_1 + 0x8d8) = uStack_40;
  *(undefined4 *)(param_1 + 0x8dc) = uStack_3c;
  FUN_146adc948(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146ade38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 146ade3d0 FUN_146ade3d0 body=1504 status=ok
// SIG undefined FUN_146ade3d0(void)

void FUN_146ade3d0(longlong param_1,byte param_2)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e0;
  longlong local_d8;
  int local_cc;
  int local_c8;
  int iStack_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  int iStack_a4;
  int local_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = *(int *)(param_1 + 0x8d0);
  iVar11 = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
  iStack_c4 = 0;
  if (0 < iVar11) {
    iStack_c4 = iVar11;
  }
  cVar10 = FUN_144a7c5f6(param_1 + 0x6d0);
  uVar23 = 0xffffffff;
  iVar11 = -1;
  if (cVar10 == '\0') {
    puVar15 = (ulonglong *)(param_1 + 0x8c0);
    if (*(char *)(param_1 + 0x8c8) == '\0') {
      puVar15 = (ulonglong *)&local_c8;
    }
    uVar23 = *puVar15;
    iVar11 = (int)uVar23;
    iVar18 = (int)(uVar23 >> 0x20);
    if (param_2 == 0) {
      bVar26 = SBORROW4(iVar11,local_c8);
      iVar20 = iVar11 - local_c8;
      if (iVar11 == local_c8) {
        bVar26 = SBORROW4(iVar18,iStack_c4);
        iVar20 = iVar18 - iStack_c4;
      }
      bVar26 = (iVar11 != local_c8 || iVar18 != iStack_c4) && bVar26 == iVar20 < 0;
    }
    else {
      bVar26 = SBORROW4(iVar11,local_c8);
      iVar20 = iVar11 - local_c8;
      if (iVar11 == local_c8) {
        bVar26 = SBORROW4(iVar18,iStack_c4);
        iVar20 = iVar18 - iStack_c4;
      }
      bVar26 = bVar26 != iVar20 < 0;
    }
    local_c0 = param_1 + 0x8d0;
    uVar22 = CONCAT44(iStack_c4,local_c8);
    if (bVar26) {
      uVar22 = uVar23;
    }
    uVar23 = uVar22 >> 0x20;
    puVar16 = (undefined8 *)FUN_1447a1f4a(param_1 + 0x6d0);
    local_cc = *(int *)(puVar16 + 1) + -1;
    if (*(int *)(puVar16 + 1) == 0) {
      local_cc = 0;
    }
    lVar19 = *(longlong *)(param_1 + 0x48);
    iVar11 = -1;
    local_d8 = param_1;
    do {
      uVar12 = (uint)uVar22;
      lVar5 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + (longlong)(int)uVar12 * 0x70);
      if (param_2 == 0) {
        iVar18 = *(int *)(lVar5 + 8);
        iVar20 = iVar18 + -1;
        if (iVar18 == 0) {
          iVar20 = 0;
        }
        if ((int)uVar23 < iVar20) goto LAB_146ade7d9;
        uVar13 = *(uint *)(lVar19 + 0x28);
LAB_146ade845:
        uVar23 = 0;
        uVar22 = (ulonglong)(uVar12 + 1);
        if (uVar12 + 1 == uVar13) {
          uVar22 = uVar23;
        }
      }
      else {
LAB_146ade7d9:
        iVar18 = *(int *)(puVar16 + 1);
        uVar25 = (ulonglong)(iVar18 - 1);
        if (iVar18 == 0) {
          uVar25 = 0;
        }
        puVar21 = &DAT_149dfb77a;
        if (iVar18 != 0) {
          puVar21 = (undefined2 *)*puVar16;
        }
        local_e8 = (uint)param_2;
        local_e0 = (int)uVar23;
        uVar13 = FUN_1447ee042(lVar5,puVar21,uVar25,*(undefined4 *)(local_d8 + 0x6e0));
        param_1 = local_d8;
        if (uVar13 != 0xffffffff) {
          *(ulonglong *)(local_d8 + 0x8c0) = uVar22 & 0xffffffff | (ulonglong)uVar13 << 0x20;
          *(undefined1 *)(local_d8 + 0x8c8) = 1;
          iStack_a4 = local_cc + uVar13;
          local_a8 = uVar12;
          FUN_146adc8c2(local_c0,*(undefined8 *)(local_d8 + 0x48));
          uVar23 = *(ulonglong *)(param_1 + 0x8c0);
          iVar11 = (int)(uVar23 >> 0x20);
          goto LAB_146ade464;
        }
        uVar13 = *(uint *)(lVar19 + 0x28);
        if (param_2 == 0) goto LAB_146ade845;
        if ((int)uVar12 < 1) {
          uVar12 = uVar13;
        }
        uVar22 = (ulonglong)(uVar12 - 1);
        iVar18 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar19 + 0x20) + (longlong)(int)(uVar12 - 1) * 0x70) + 8);
        uVar23 = (ulonglong)(iVar18 - 1);
        if (iVar18 == 0) {
          uVar23 = 0;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar13);
    uVar23 = 0xffffffff;
    iVar11 = -1;
    param_1 = local_d8;
  }
LAB_146ade464:
  FUN_146adc948(param_1);
  *(undefined4 *)(param_1 + 0x738) = 0;
  if (iVar11 != -1 && (int)uVar23 != -1) {
    uVar12 = FUN_144a78877(uVar23 & 0xffffffff,iVar11);
    if (*(int *)(param_1 + 0x6f0) != *(int *)(param_1 + 0x71c)) {
      lVar19 = param_1 + 0x720;
      if (*(longlong *)(param_1 + 0x728) != 0) {
        lVar19 = *(longlong *)(param_1 + 0x728);
      }
      iVar18 = *(int *)(lVar19 + (ulonglong)(*(int *)(param_1 + 0x730) - 1U & uVar12) * 4);
      if (iVar18 != -1) {
        do {
          piVar2 = (int *)(*(longlong *)(param_1 + 0x6e8) + (longlong)iVar18 * 0x14);
          if ((*piVar2 == (int)uVar23) &&
             (*(int *)(*(longlong *)(param_1 + 0x6e8) + 4 + (longlong)iVar18 * 0x14) == iVar11)) {
            if (piVar2 + 2 != (int *)0x0 && piVar2 != (int *)0x0) {
              *(int *)(param_1 + 0x738) = piVar2[2];
            }
            break;
          }
          iVar18 = piVar2[3];
        } while (iVar18 != -1);
      }
    }
    iVar11 = *(int *)(param_1 + 0x8d0);
    iVar18 = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
    if (iVar18 < 1) {
      iVar18 = 0;
    }
    puVar1 = (uint *)(param_1 + 0x8c0);
    iVar20 = iVar11;
    iVar24 = iVar18;
    if (*(char *)(param_1 + 0x8c8) == '\x01') {
      iVar20 = *(int *)(param_1 + 0x8c0);
      iVar24 = *(int *)(param_1 + 0x8c4);
    }
    iVar7 = iVar11;
    if (iVar24 < iVar18) {
      iVar7 = iVar20;
    }
    local_98 = iVar11;
    if (iVar20 < iVar11) {
      local_98 = iVar20;
    }
    if (iVar20 == iVar11) {
      local_98 = iVar7;
    }
    uStack_94 = 0;
    FUN_146a50afa(*(undefined8 *)(param_1 + 0x48),&local_a8,&local_98,0);
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x94);
    dVar8 = (double)CONCAT44(iStack_a4,local_a8);
    local_a8 = *(uint *)(param_1 + 0x8d0);
    iStack_a4 = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
    if (iStack_a4 < 1) {
      iStack_a4 = 0;
    }
    puVar14 = &local_a8;
    if (*(char *)(param_1 + 0x8c8) != '\0') {
      puVar14 = puVar1;
    }
    local_b8 = *(undefined8 *)puVar14;
    local_b0 = CONCAT44(iStack_a4,local_a8);
    bVar26 = (int)((ulonglong)local_b8 >> 0x20) < iStack_a4;
    if ((uint)local_b8 != local_a8) {
      bVar26 = (int)(uint)local_b8 < (int)local_a8;
    }
    puVar16 = &local_b0;
    if (bVar26) {
      puVar16 = &local_b8;
    }
    FUN_146a50afa(*(longlong *)(param_1 + 0x48),&local_a8,puVar16,0);
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x94);
    dVar9 = (double)CONCAT44(iStack_a4,local_a8);
    local_a8 = *(uint *)(param_1 + 0x8d0);
    iStack_a4 = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
    if (iStack_a4 < 1) {
      iStack_a4 = 0;
    }
    puVar14 = &local_a8;
    if (*(char *)(param_1 + 0x8c8) != '\0') {
      puVar14 = puVar1;
    }
    local_b8 = *(undefined8 *)puVar14;
    local_b0 = CONCAT44(iStack_a4,local_a8);
    bVar26 = iStack_a4 < (int)((ulonglong)local_b8 >> 0x20);
    if ((uint)local_b8 != local_a8) {
      bVar26 = (int)local_a8 < (int)(uint)local_b8;
    }
    puVar16 = &local_b0;
    if (bVar26) {
      puVar16 = &local_b8;
    }
    FUN_146a50afa(*(longlong *)(param_1 + 0x48),&local_a8,puVar16,0);
    if ((1.0 / (double)fVar4) * dVar9 < 0.0) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x94);
      dVar9 = (double)CONCAT44(iStack_a4,local_a8);
      FUN_146a53394(*(longlong *)(param_1 + 0x48),&local_a8);
      if ((double)CONCAT44(iStack_a4,local_a8) <=
          (double)(float)((1.0 / (double)fVar4) * dVar9 - dVar8 * (1.0 / (double)fVar3))) {
        local_a8 = *(uint *)(param_1 + 0x8d0);
        iVar11 = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
        iStack_a4 = 0;
        if (0 < iVar11) {
          iStack_a4 = iVar11;
        }
        puVar14 = &local_a8;
        if (*(char *)(param_1 + 0x8c8) != '\0') {
          puVar14 = puVar1;
        }
        uVar6 = *(undefined8 *)puVar14;
        bVar26 = (int)((ulonglong)uVar6 >> 0x20) < iStack_a4;
        if ((uint)uVar6 != local_a8) {
          bVar26 = (int)(uint)uVar6 < (int)local_a8;
        }
        uVar17 = CONCAT44(iStack_a4,local_a8);
        if (bVar26) {
          uVar17 = uVar6;
        }
      }
      else {
        uVar17 = CONCAT44(uStack_94,local_98);
      }
      *(undefined8 *)(param_1 + 0x8b0) = uVar17;
      *(undefined1 *)(param_1 + 0x8b8) = 0;
      *(undefined1 *)(param_1 + 0x8bc) = 1;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ade9b2 FUN_146ade9b2 body=14 status=ok
// SIG undefined FUN_146ade9b2(void)

undefined8 * FUN_146ade9b2(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x8a8);
  return param_2;
}



// FUNCTION 146ade9c0 FUN_146ade9c0 body=83 status=ok
// SIG undefined FUN_146ade9c0(void)

undefined1 FUN_146ade9c0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x768) != 0) && (*(longlong **)(param_1 + 0x760) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x768) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x760);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x758) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x758);
}



// FUNCTION 146adea14 FUN_146adea14 body=441 status=ok
// SIG undefined FUN_146adea14(void)

undefined8 FUN_146adea14(undefined8 *param_1,byte *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x137) != '\0') ||
     (((param_1[0x138] != 0 && (param_1[0x139] != 0)) && (0 < *(int *)(param_1[0x139] + 8))))) {
    uVar5 = 0;
    goto LAB_146adea34;
  }
  (**(code **)(*(longlong *)*param_1 + 0x60))();
  cVar3 = FUN_1469133c2();
  if (cVar3 == '\0') {
    FUN_146addeb4(param_1);
  }
  else {
    cVar3 = (*(code *)**(undefined8 **)*param_1)();
    if (cVar3 == '\0') {
      if (*param_2 == 0) {
        cVar3 = (**(code **)(*(longlong *)*param_1 + 0x78))();
        if (cVar3 != '\0') goto LAB_146adeaa2;
      }
      else {
LAB_146adeaa2:
        cVar3 = (**(code **)(*(longlong *)*param_1 + 0x78))();
        if (cVar3 != '\x01') goto LAB_146adeaf7;
      }
      plVar1 = DAT_14c98e618;
      local_28 = param_1[0x104];
      local_20 = param_1[0x105];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_1428f5168(plVar1,1,*(undefined4 *)(param_2 + 4),&local_28);
    }
  }
LAB_146adeaf7:
  FUN_146adebce(param_1);
  FUN_146adec1a(param_1,param_1 + 0x129);
  bVar4 = *param_2;
  if ((bVar4 & 0xfb) != 0) {
    cVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar3 != '\0') {
      FUN_146adb98e(param_1,1,0);
    }
    bVar4 = *param_2;
  }
  if (bVar4 != 0) {
    cVar3 = (**(code **)(*(longlong *)*param_1 + 0x20))();
    if (cVar3 != '\0') {
      FUN_146adab6c(param_1);
    }
  }
  FUN_146adc948(param_1);
  if (*(char *)((longlong)param_1 + 0x8bc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x8bc) = 0;
  }
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_38);
  FUN_140163244(local_38,5);
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
  (**(code **)(*DAT_14c98e618 + 0x60))();
  param_1[0x11c] = extraout_XMM0_Qa;
  uVar5 = 1;
LAB_146adea34:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adebce FUN_146adebce body=76 status=ok
// SIG undefined FUN_146adebce(void)

void FUN_146adebce(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x640) != 0) && (*(longlong **)(param_1 + 0x638) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x638) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146adb44a(param_1,param_1 + 0x620);
                    /* WARNING: Could not recover jumptable at 0x000146adec16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
      return;
    }
  }
  return;
}



// FUNCTION 146adec1a FUN_146adec1a body=201 status=ok
// SIG undefined FUN_146adec1a(void)

void FUN_146adec1a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146adb77e(param_1,&local_30);
  plVar1 = (longlong *)*param_2;
  if (plVar1 != local_30) {
    *param_2 = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_2 + 1) = local_28;
  uVar2 = *(undefined4 *)(param_1 + 0x8d4);
  uVar3 = *(undefined4 *)(param_1 + 0x8d8);
  uVar4 = *(undefined4 *)(param_1 + 0x8dc);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x8d0);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 5) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
  param_2[6] = *(longlong *)(param_1 + 0x8e0);
  if ((longlong *)(param_1 + 0x8c0) != param_2 + 2) {
    if (*(char *)(param_1 + 0x8c8) == '\x01') {
      param_2[2] = *(longlong *)(param_1 + 0x8c0);
      uVar5 = 1;
    }
    else {
      if ((char)param_2[3] != '\x01') goto LAB_146adecab;
      uVar5 = 0;
    }
    *(undefined1 *)(param_2 + 3) = uVar5;
  }
LAB_146adecab:
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adece4 FUN_146adece4 body=591 status=ok
// SIG undefined FUN_146adece4(void)

undefined8 FUN_146adece4(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x137) == '\0') &&
     (((param_1[0x138] == 0 || (param_1[0x139] == 0)) || (*(int *)(param_1[0x139] + 8) < 1)))) {
    cVar4 = FUN_1469133c2();
    if (cVar4 == '\0') {
      plVar6 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe8))();
      if ((plVar6 != (longlong *)0x0) && (*(char *)(param_1 + 0x106) == '\x01')) {
        local_48 = (longlong *)param_1[0x107];
        plVar3 = (longlong *)param_1[0x108];
        if (plVar3 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_40 = plVar3;
        }
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_48);
        plVar6 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar3 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
    else {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1428f5168(DAT_14c98e618,0,*(undefined4 *)(param_2 + 4));
    }
    cVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))();
    if (((cVar4 != '\0') && (*param_2 != 5)) && (*(char *)(param_1 + 0x119) == '\x01')) {
      *(undefined1 *)(param_1 + 0x119) = 0;
    }
    cVar4 = (*(code *)**(undefined8 **)*param_1)();
    if (cVar4 == '\0') {
      uVar7 = 0;
      if ((ulonglong)*param_2 < 4) {
        uVar7 = *(undefined4 *)(&DAT_149f204a8 + (ulonglong)*param_2 * 4);
      }
      FUN_146adef34(param_1);
      FUN_146adb77e(param_1,&local_48);
      (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_48,uVar7);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    FUN_146adebce(param_1);
    FUN_146adc948(param_1);
    if (*(char *)((longlong)param_1 + 0x8bc) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x8bc) = 0;
    }
    (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_48);
    FUN_140163244(local_48,5);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adef34 FUN_146adef34 body=81 status=ok
// SIG undefined FUN_146adef34(void)

void FUN_146adef34(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8f8) = 0xffffffff;
  FUN_146af9143(*(undefined8 *)(param_1 + 0x8e8),*(undefined4 *)(param_1 + 0x8f0));
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  if (*(int *)(param_1 + 0x8f4) == 0) {
    return;
  }
  FUN_146afa018(param_1 + 0x8e8);
  return;
}



// FUNCTION 146adef86 FUN_146adef86 body=254 status=ok
// SIG undefined FUN_146adef86(void)

undefined1 * FUN_146adef86(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = *(ushort *)(param_3 + 0x20);
  if (uVar1 < 0x1c) {
    if ((0xf40200aU >> (uVar1 & 0x1f) & 1) == 0) {
      if (uVar1 == 8) {
        cVar2 = (*(code *)**(undefined8 **)*param_1)();
        if (cVar2 == '\0') {
          FUN_146ae304e(param_1);
          uVar3 = FUN_146adf084(param_1);
          goto LAB_146adf048;
        }
        goto LAB_146adf02e;
      }
      if (uVar1 != 10) goto LAB_146adefee;
    }
  }
  else {
LAB_146adefee:
    if (uVar1 != 0x7f) {
      cVar2 = (*(code *)**(undefined8 **)*param_1)();
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x58))(), cVar2 != '\0'))
      {
        FUN_146ae304e(param_1);
        uVar3 = FUN_146adf248(param_1);
LAB_146adf048:
        *param_2 = uVar3;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        FUN_146ae311c(param_1);
        return param_2;
      }
LAB_146adf02e:
      *param_2 = 0;
      goto LAB_146adefac;
    }
  }
  *param_2 = 1;
LAB_146adefac:
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146adf084 FUN_146adf084 body=450 status=ok
// SIG undefined FUN_146adf084(void)

uint FUN_146adf084(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_88 [40];
  uint local_60;
  int local_5c;
  uint local_58;
  int iStack_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (*(code *)**(undefined8 **)*param_1)();
  if ((char)uVar3 == '\0') {
    uVar8 = *(uint *)(param_1 + 0x11a);
    local_58 = uVar8;
    iVar4 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    iVar9 = 0;
    if (0 < iVar4) {
      iVar9 = iVar4;
    }
    iStack_54 = iVar9;
    puVar7 = (uint *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x119) == '\0') {
      puVar7 = &local_58;
    }
    if ((uVar8 == (uint)*(undefined8 *)puVar7) &&
       (iVar9 == (int)((ulonglong)*(undefined8 *)puVar7 >> 0x20))) {
      local_48 = CONCAT44(iVar9,uVar8);
      lVar1 = param_1[9];
      if (iVar4 < 1) {
        if (0 < (int)uVar8) {
          uVar8 = uVar8 - 1;
          iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)uVar8 * 0x70) + 8)
          ;
          cVar2 = FUN_146a51444(lVar1,(ulonglong)uVar8);
          if (cVar2 != '\0') {
            iVar4 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar4 = 0;
            }
            local_48 = CONCAT44(iVar4,uVar8);
          }
        }
      }
      else {
        local_5c = iVar9 + -1;
        local_60 = uVar8;
        FUN_146a531a0(lVar1,&local_58);
        puVar7 = &local_50;
        if (local_58 == local_50) {
          if (iStack_54 < local_4c) {
            puVar7 = &local_58;
          }
          iVar4 = -(iStack_54 - local_4c);
          if (iVar4 < 0) {
            iVar4 = iStack_54 - local_4c;
          }
        }
        else {
          iVar6 = local_4c;
          iVar4 = iStack_54;
          if ((int)local_58 < (int)local_50) {
            iVar6 = iStack_54;
            puVar7 = &local_58;
            iVar4 = local_4c;
          }
          iVar4 = iVar4 - iVar6;
        }
        cVar2 = FUN_146a52592(param_1[9],puVar7,iVar4);
        if (cVar2 != '\0') {
          uVar5 = 0;
          if (0 < iVar9 - iVar4) {
            uVar5 = (ulonglong)(uint)(iVar9 - iVar4);
          }
          local_48 = uVar5 << 0x20 | (ulonglong)uVar8;
        }
      }
      FUN_146adc8c2(param_1 + 0x11a,param_1[9],&local_48);
      if (*(char *)(param_1 + 0x119) == '\x01') {
        *(undefined1 *)(param_1 + 0x119) = 0;
      }
      FUN_146adc948(param_1);
    }
    else {
      FUN_146ae1f82(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 ^ 1;
}



// FUNCTION 146adf248 FUN_146adf248 body=348 status=ok
// SIG undefined FUN_146adf248(void)

undefined8 FUN_146adf248(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar2 == '\0') {
    uVar4 = 0;
    if (((ushort)param_2 == 9) || (0x1f < (ushort)param_2)) {
      cVar2 = *(char *)(param_1 + 0x11b);
      local_38 = *(int *)(param_1 + 0x11a);
      iVar5 = *(int *)((longlong)param_1 + 0x8d4);
      iVar6 = (uint)(cVar2 == '\x01') + iVar5;
      iStack_34 = 0;
      if (0 < iVar6) {
        iStack_34 = iVar6;
      }
      piVar7 = (int *)(param_1 + 0x118);
      if (*(char *)(param_1 + 0x119) == '\0') {
        piVar7 = &local_38;
      }
      if ((local_38 != (int)*(undefined8 *)piVar7) ||
         (iStack_34 != (int)((ulonglong)*(undefined8 *)piVar7 >> 0x20))) {
        FUN_146ae1f82(param_1);
        cVar2 = *(char *)(param_1 + 0x11b);
        local_38 = *(int *)(param_1 + 0x11a);
        iVar5 = *(int *)((longlong)param_1 + 0x8d4);
      }
      iStack_34 = (uint)(cVar2 == '\x01') + iVar5;
      if (iStack_34 < 1) {
        iStack_34 = 0;
      }
      lVar3 = (longlong)local_38;
      lVar1 = *(longlong *)(param_1[9] + 0x20);
      FUN_146a50c56(param_1[9],&local_38,param_2);
      if (*(char *)(param_1 + 0x119) == '\x01') {
        *(undefined1 *)(param_1 + 0x119) = 0;
      }
      iVar5 = *(int *)(*(longlong *)(lVar3 * 0x70 + lVar1) + 8);
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      local_3c = iStack_34 + 1;
      if (iVar6 <= iStack_34 + 1) {
        local_3c = iVar6;
      }
      local_40 = local_38;
      FUN_146adc8c2(param_1 + 0x11a,param_1[9]);
      FUN_146adc948(param_1);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146adf3a6 FUN_146adf3a6 body=2092 status=ok
// SIG undefined FUN_146adf3a6(void)

char * FUN_146adf3a6(undefined8 *param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  bool bVar13;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 local_100;
  uint local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0;
  undefined1 local_c8 [136];
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
  lVar3 = *(longlong *)(param_3 + 0x20);
  plVar4 = *(longlong **)(param_3 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == DAT_14c964e60) {
    cVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
    uVar8 = *(ushort *)(param_3 + 8);
    if (cVar6 == '\0') {
      uVar9 = (uint)((uVar8 & 0xc) != 0);
    }
    else {
      uVar9 = 0;
      if ((uVar8 & 0xc) != 0) {
        bVar13 = (uVar8 & 3) != 0;
        cVar6 = '\x02';
        goto LAB_146adf771;
      }
    }
    local_100 = 0xbf800000;
LAB_146adf8fb:
    local_108 = (ulonglong)uVar9;
LAB_146adf71b:
    local_f8 = (uint)((uVar8 & 3) != 0);
    local_f4 = 0x3f800000;
    uVar7 = FUN_146adfbd4(param_1);
LAB_146adf72a:
    local_f0 = (longlong *)CONCAT71(local_f0._1_7_,uVar7);
  }
  else {
    if (lVar3 == DAT_14c964e90) {
      cVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
      uVar8 = *(ushort *)(param_3 + 8);
      if (cVar6 == '\0') {
        uVar9 = (uint)((uVar8 & 0xc) != 0);
      }
      else {
        uVar9 = 0;
        if ((uVar8 & 0xc) != 0) {
          bVar13 = (uVar8 & 3) != 0;
          cVar6 = '\x03';
          goto LAB_146adf771;
        }
      }
      local_100 = 0x3f800000;
      goto LAB_146adf8fb;
    }
    if (lVar3 == DAT_14c964e78) {
      uVar8 = *(ushort *)(param_3 + 8);
      local_100 = 0xbf80000000000000;
LAB_146adf714:
      local_108 = 0;
      goto LAB_146adf71b;
    }
    if (lVar3 == DAT_14c964ea8) {
      uVar8 = *(ushort *)(param_3 + 8);
      local_100 = 0x3f80000000000000;
      goto LAB_146adf714;
    }
    if (lVar3 != DAT_14c964e48) {
      if (lVar3 == DAT_14c964e30) {
        uVar8 = *(ushort *)(param_3 + 8);
        cVar6 = ((uVar8 & 0xc) == 0) * '\x02' + '\x01';
        goto LAB_146adf76e;
      }
      if (lVar3 == DAT_14c964e00) {
        bVar13 = (*(ushort *)(param_3 + 8) & 3) != 0;
        cVar6 = '\x04';
        goto LAB_146adf771;
      }
      if (lVar3 == DAT_14c964e18) {
        bVar13 = (*(ushort *)(param_3 + 8) & 3) != 0;
        cVar6 = '\x05';
        goto LAB_146adf771;
      }
      if ((lVar3 == DAT_14c964d88) &&
         (cVar6 = (*(code *)**(undefined8 **)*param_1)(), cVar6 == '\0')) {
        FUN_146ae304e(param_1);
        FUN_146ae018e(param_1);
        local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
LAB_146adf9d6:
        local_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        memset(local_c8,0,0x88);
        local_40 = 0x20702;
        local_3c = 0;
        FUN_1403d4924(param_2,&local_f0);
        FUN_14493db24(&local_f0);
        FUN_146ae311c(param_1);
        goto LAB_146adf7c8;
      }
      if ((lVar3 == DAT_14c964d70) &&
         (cVar6 = (**(code **)(*(longlong *)*param_1 + 0x58))(), cVar6 != '\0')) goto LAB_146adf776;
      if (lVar3 != DAT_14c964dd0) {
        if (lVar3 == DAT_14c966f58) {
          if ((*(byte *)(param_3 + 8) & 3) != 0) {
            cVar6 = FUN_146ada6b0(param_1);
            if (cVar6 != '\0') {
              FUN_146ada72e(param_1);
              goto LAB_146adf776;
            }
            goto LAB_146adfa7e;
          }
LAB_146adf4d9:
          cVar6 = (*(code *)**(undefined8 **)*param_1)();
          if (cVar6 != '\0') goto LAB_146adf4e9;
          iVar11 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') +
                   *(int *)((longlong)param_1 + 0x8d4);
          iVar10 = 0;
          if (0 < iVar11) {
            iVar10 = iVar11;
          }
          local_f0 = (longlong *)CONCAT44(iVar10,*(int *)(param_1 + 0x11a));
          puVar12 = param_1 + 0x118;
          if (*(char *)(param_1 + 0x119) == '\0') {
            puVar12 = &local_f0;
          }
          if (((*(int *)(param_1 + 0x11a) == (int)*puVar12) &&
              (iVar10 == (int)((ulonglong)*puVar12 >> 0x20))) &&
             ((*(ushort *)(param_3 + 8) & 0x33) == 0 && (*(ushort *)(param_3 + 8) & 0xc) != 0)) {
            cVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
            if (cVar6 == '\0') {
              local_f0 = (longlong *)&DAT_00000001;
              local_e8 = 0x3f800000;
              uStack_e0 = 0x3f80000000000001;
              FUN_146adfbd4(param_1);
            }
            else {
              FUN_146adb98e(param_1,3,1);
            }
          }
          FUN_146ae304e(param_1);
          uVar7 = FUN_146ae0392(param_1);
LAB_146adf9cd:
          local_f0 = (longlong *)CONCAT71(local_f0._1_7_,uVar7);
          goto LAB_146adf9d6;
        }
LAB_146adfa7e:
        if (lVar3 == DAT_14c966f58) goto LAB_146adf4d9;
LAB_146adf4e9:
        if (lVar3 == DAT_14c964ec0) {
          uVar8 = *(ushort *)(param_3 + 8);
          if ((uVar8 & 0xc) != 0) {
            cVar6 = FUN_146ada984(param_1);
            if (cVar6 != '\0') {
              FUN_146ada9f4(param_1);
              goto LAB_146adf776;
            }
            goto LAB_146adfaa3;
          }
LAB_146adf505:
          if (((uVar8 & 3) != 0) && (cVar6 = FUN_146ada872(param_1), cVar6 != '\0')) {
            FUN_146ada8e2(param_1);
            goto LAB_146adf776;
          }
        }
        else {
LAB_146adfaa3:
          if (lVar3 == DAT_14c964ec0) {
            uVar8 = *(ushort *)(param_3 + 8);
            goto LAB_146adf505;
          }
        }
        cVar6 = (*(code *)**(undefined8 **)*param_1)();
        if (((cVar6 == '\0') &&
            (cVar6 = (**(code **)(*(longlong *)param_1[0x107] + 8))(), cVar6 == '\0')) &&
           ((lVar3 == DAT_14c966f40 &&
            ((*(ushort *)(param_3 + 8) & 3) == 0 && (*(ushort *)(param_3 + 8) & 0x30) != 0)))) {
          FUN_146ada478(param_1);
        }
        else {
          cVar6 = (*(code *)**(undefined8 **)*param_1)();
          if (((cVar6 == '\0') &&
              (cVar6 = (**(code **)(*(longlong *)param_1[0x107] + 8))(), cVar6 == '\0')) &&
             ((((lVar3 == DAT_14c966f28 && ((*(byte *)(param_3 + 8) & 0xc) != 0)) ||
               ((lVar3 == DAT_14c966f10 &&
                ((*(ushort *)(param_3 + 8) & 0xc) != 0 && (*(ushort *)(param_3 + 8) & 3) != 0)))) ||
              ((lVar3 == DAT_14c966f40 &&
               ((*(ushort *)(param_3 + 8) & 3) != 0 && (*(ushort *)(param_3 + 8) & 0x30) != 0))))))
          {
            FUN_146ae0534(param_1);
          }
          else {
            if (((lVar3 == DAT_14c966f40) &&
                ((*(ushort *)(param_3 + 8) & 0x33) == 0 && (*(ushort *)(param_3 + 8) & 0xc) != 0))
               && (cVar6 = (*(code *)**(undefined8 **)*param_1)(), cVar6 == '\0')) {
              FUN_146ae304e(param_1);
              cVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
              if (cVar6 == '\0') {
                local_f0 = (longlong *)&DAT_00000001;
                local_e8 = 0xbf800000;
                uStack_e0 = 0x3f80000000000001;
                FUN_146adfbd4(param_1);
              }
              else {
                FUN_146adb98e(param_1,2,1);
              }
              uVar7 = FUN_146adf084(param_1);
              goto LAB_146adf9cd;
            }
            uVar8 = *(ushort *)(param_3 + 8);
            if (lVar3 == DAT_14c9652f8) {
              if ((uVar8 & 0x30) == 0 && (uVar8 & 0xc) != 0) {
                FUN_146add50a(param_1,&local_f0);
                FUN_146adc6c6(param_1,&local_f0,1,
                              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(uVar8 & 3) != 0) &
                              0xffffffff);
                if (local_f0 != (longlong *)0x0) {
                  (**(code **)(*local_f0 + 0x10))();
                }
              }
              else {
                if ((uVar8 & 0x3c) != 0) goto LAB_146adf7c8;
                FUN_146ade3d0(param_1);
              }
            }
            else {
              if ((uVar8 & 0x3c) != 0) goto LAB_146adf7c8;
              lVar3 = *(longlong *)(param_3 + 0x20);
              plVar5 = *(longlong **)(param_3 + 0x30);
              if (plVar5 == (longlong *)0x0) {
                if ((lVar3 == DAT_14c964d70) || (*(int *)(param_3 + 0x38) == 0)) goto LAB_146adf7c8;
              }
              else {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                bVar13 = lVar3 == DAT_14c964d70;
                iVar10 = *(int *)(param_3 + 0x38);
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
                if (iVar10 == 0 || bVar13) goto LAB_146adf7c8;
              }
            }
          }
        }
        goto LAB_146adf776;
      }
      uVar7 = FUN_146ae0296(param_1);
      goto LAB_146adf72a;
    }
    uVar8 = *(ushort *)(param_3 + 8);
    cVar6 = ((uVar8 & 0xc) == 0) * '\x02';
LAB_146adf76e:
    bVar13 = (uVar8 & 3) != 0;
LAB_146adf771:
    FUN_146adb98e(param_1,cVar6,bVar13);
LAB_146adf776:
    local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  }
  local_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  memset(local_c8,0,0x88);
  local_40 = 0x20702;
  local_3c = 0;
  FUN_1403d4924(param_2,&local_f0);
  FUN_14493db24(&local_f0);
LAB_146adf7c8:
  if ((*param_2 == '\0') && (cVar6 = FUN_1469bb520(param_1[0x135]), cVar6 != '\0')) {
    local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
    local_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    memset(local_c8,0,0x88);
    local_40 = 0x20702;
    local_3c = 0;
    FUN_1403d4924(param_2,&local_f0);
    FUN_14493db24(&local_f0);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146adfbd4 FUN_146adfbd4 body=1465 status=ok
// SIG undefined FUN_146adfbd4(void)

ulonglong FUN_146adfbd4(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double *pdVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 unaff_RBX;
  ulonglong uVar16;
  char *pcVar17;
  undefined7 uVar18;
  double *pdVar19;
  bool bVar20;
  undefined1 auStack_a8 [32];
  double *local_88;
  undefined2 *local_80;
  char local_71;
  undefined8 local_70;
  double local_68;
  undefined4 local_60;
  int iStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar9 = FUN_1469ab042(DAT_14c98e618);
  uVar16 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar9 == '\0') goto LAB_146adfc28;
  bVar10 = (**(code **)(*(longlong *)param_1[0x107] + 8))();
  iVar13 = param_2[1];
  if ((bVar10 & iVar13 != 1) != 0) goto LAB_146adfc28;
  local_68 = 0.0;
  iVar6 = *(int *)(param_1 + 0x11a);
  iVar11 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  iVar15 = 0;
  if (0 < iVar11) {
    iVar15 = iVar11;
  }
  local_70 = (double)CONCAT44(iVar15,iVar6);
  if (iVar13 == 1 || param_2[4] != 0) {
LAB_146adfc9a:
    local_42 = local_42 & 0xff;
LAB_146adfc9f:
    if (iVar13 == 0) {
      if (*param_2 == 0) {
        fVar5 = (float)param_2[2];
        if ((fVar5 == 0.0) && (!NAN(fVar5))) {
          cVar9 = (**(code **)(*(longlong *)*param_1 + 0x10))();
          if (cVar9 == '\0') {
            uVar16 = 0;
            goto LAB_146adfc28;
          }
          local_80 = &local_42;
          local_88 = &local_68;
          FUN_146ae2cc8(param_1,&local_70,(int)(float)param_2[3],param_2[5]);
          goto LAB_146ae0105;
        }
        FUN_146ae2c0a(param_1,&local_58,&local_70,(int)fVar5);
      }
      else {
        FUN_146ae2dde(param_1,&local_58,&local_70,(int)(float)param_2[2]);
      }
      pcVar17 = (char *)&local_58;
      local_68 = local_58;
    }
    else {
      if (iVar13 != 1) {
LAB_146ae0105:
        bVar20 = false;
        uVar18 = 0;
        goto LAB_146adfe58;
      }
      pcVar17 = &local_71;
      local_71 = '\0';
      local_50 = (longlong *)((double)(float)param_2[3] * (double)(float)param_2[5]);
      local_58 = (double)(float)param_2[2] * (double)(float)param_2[5];
      FUN_146a509ca(param_1[9],&local_60,&local_58,pcVar17);
      local_68 = (double)CONCAT44(iStack_5c,local_60);
      if (local_71 == '\x02') {
        iVar13 = 1;
        if (1 < iStack_5c) {
          iVar13 = iStack_5c;
        }
        local_68 = (double)CONCAT44(iVar13 + -1,local_60);
        local_42 = 0x101;
      }
    }
    bVar20 = true;
    uVar18 = (int7)((ulonglong)pcVar17 >> 8);
  }
  else {
    local_58 = (double)CONCAT44(iVar15,iVar6);
    pdVar4 = (double *)(param_1 + 0x118);
    pdVar19 = (double *)&local_58;
    if (*(char *)(param_1 + 0x119) != '\0') {
      pdVar19 = pdVar4;
    }
    if ((iVar6 == SUB84(*pdVar19,0)) && (iVar15 == (int)((ulonglong)*pdVar19 >> 0x20)))
    goto LAB_146adfc9a;
    fVar5 = (float)param_2[2];
    if (iVar13 == 0) {
      if ((int)fVar5 < 0) {
        local_68 = *pdVar4;
        iVar11 = (int)((ulonglong)local_68 >> 0x20);
      }
      else {
        local_68 = *pdVar4;
        iVar11 = (int)((ulonglong)local_68 >> 0x20);
        if (-1 < (int)(float)param_2[3]) goto LAB_146adfd31;
      }
      iVar12 = SUB84(local_68,0);
      bVar20 = SBORROW4(iVar12,iVar6);
      iVar8 = iVar12 - iVar6;
      if (iVar12 == iVar6) {
        bVar20 = SBORROW4(iVar11,iVar15);
        iVar8 = iVar11 - iVar15;
      }
      bVar20 = bVar20 != iVar8 < 0;
    }
    else {
      local_68 = *pdVar4;
      iVar11 = (int)((ulonglong)local_68 >> 0x20);
LAB_146adfd31:
      iVar12 = SUB84(local_68,0);
      bVar20 = SBORROW4(iVar12,iVar6);
      iVar8 = iVar12 - iVar6;
      if (iVar12 == iVar6) {
        bVar20 = SBORROW4(iVar11,iVar15);
        iVar8 = iVar11 - iVar15;
      }
      bVar20 = (iVar12 != iVar6 || iVar11 != iVar15) && bVar20 == iVar8 < 0;
    }
    if (!bVar20) {
      local_68 = local_70;
    }
    local_70 = local_68;
    if (*param_2 != 1) {
      local_42 = local_42 & 0xff;
      if ((fVar5 == 0.0) && (!NAN(fVar5))) goto LAB_146adfc9f;
      goto LAB_146ae0105;
    }
    cVar9 = FUN_146ae2b68(param_1,&local_68);
    local_42 = local_42 & 0xff;
    bVar20 = false;
    uVar18 = 0;
    if ((cVar9 == '\0') && ((fVar5 == 0.0 && (uVar18 = 0, !NAN(fVar5))))) {
      iVar13 = param_2[1];
      goto LAB_146adfc9f;
    }
  }
LAB_146adfe58:
  if (param_2[4] == 1) {
    if ((&local_70 != param_1 + 0x118) && (*(char *)(param_1 + 0x119) == '\0')) {
      param_1[0x118] = local_70;
      *(undefined1 *)(param_1 + 0x119) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x119) == '\x01') {
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  if (local_42._1_1_ == '\x01') {
    FUN_146ae2ea4(param_1 + 0x11a,param_1[9],&local_68,(undefined1)local_42);
  }
  else {
    FUN_146adc8c2(param_1 + 0x11a,param_1[9],&local_68);
  }
  iVar13 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  local_58 = (double)CONCAT44(iVar13,*(undefined4 *)(param_1 + 0x11a));
  (**(code **)(*(longlong *)*param_1 + 0xb0))();
  if (bVar20) {
    local_60 = *(undefined4 *)(param_1 + 0x11a);
    iVar13 = *(int *)((longlong)param_1 + 0x8d4) + (uint)(*(char *)(param_1 + 0x11b) == '\x01');
    iStack_5c = 0;
    if (0 < iVar13) {
      iStack_5c = iVar13;
    }
    FUN_146a50afa(param_1[9],&local_58);
    *(float *)((longlong)param_1 + 0x8cc) = (float)local_58;
  }
  FUN_146adc948(param_1);
  cVar9 = (**(code **)(*(longlong *)param_1[0x107] + 8))();
  uVar16 = CONCAT71(uVar18,1);
  if (((cVar9 != '\0') &&
      (plVar14 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe8))(), plVar14 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 0x106) == '\x01')) {
    local_58 = (double)param_1[0x107];
    plVar7 = (longlong *)param_1[0x108];
    if (plVar7 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_50 = plVar7;
    }
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_58);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (plVar7 != (longlong *)0x0) {
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
    }
    local_58 = (double)param_1[0x107];
    plVar7 = (longlong *)param_1[0x108];
    if (plVar7 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_50 = plVar7;
    }
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_58);
    plVar14 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar7 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
LAB_146adfc28:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 146ae018e FUN_146ae018e body=248 status=ok
// SIG undefined FUN_146ae018e(void)

void FUN_146ae018e(undefined8 *param_1,char param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x10))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    if (param_2 == '\0') {
      FUN_146adef34(param_1);
      FUN_146adb77e(param_1,local_30);
      (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,local_30,1);
      FUN_146adebce(param_1);
      cVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))();
      if (cVar1 != '\0') {
        FUN_146adab6c(param_1);
      }
      cVar1 = (**(code **)(*(longlong *)*param_1 + 0x38))();
      if (cVar1 != '\0') {
        FUN_1457a0e2c(DAT_14c98e618,3);
      }
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae0296 FUN_146ae0296 body=251 status=ok
// SIG undefined FUN_146ae0296(void)

undefined8 FUN_146ae0296(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int *piVar7;
  int local_28;
  int iStack_24;
  
  plVar1 = param_1 + 0xda;
  cVar4 = FUN_144a7c5f6(plVar1);
  if (cVar4 == '\0') {
    plVar5 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar5;
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0xdb) = (int)plVar5[1];
  }
  else {
    local_28 = *(int *)(param_1 + 0x11a);
    iVar6 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    iStack_24 = 0;
    if (0 < iVar6) {
      iStack_24 = iVar6;
    }
    piVar7 = (int *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x119) == '\0') {
      piVar7 = &local_28;
    }
    if ((*(int *)(param_1 + 0x11a) == (int)*(undefined8 *)piVar7) &&
       (iStack_24 == (int)((ulonglong)*(undefined8 *)piVar7 >> 0x20))) {
      cVar4 = (*(code *)**(undefined8 **)*param_1)();
      if ((cVar4 == '\0') &&
         ((cVar4 = (**(code **)(*(longlong *)*param_1 + 0x30))(), cVar4 != '\0' &&
          (cVar4 = FUN_146ae1e76(param_1), cVar4 != '\0')))) {
        FUN_146ae1f2a(param_1);
        return 1;
      }
      return 0;
    }
    if (*(char *)(param_1 + 0x119) != '\0') {
      *(undefined1 *)(param_1 + 0x119) = 0;
    }
  }
  FUN_146adc948(param_1);
  return 1;
}



// FUNCTION 146ae0392 FUN_146ae0392 body=416 status=ok
// SIG undefined FUN_146ae0392(void)

uint FUN_146ae0392(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (*(code *)**(undefined8 **)*param_1)();
  if ((char)uVar3 == '\0') {
    local_48 = *(int *)(param_1 + 0x11a);
    iVar5 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    iStack_44 = 0;
    if (0 < iVar5) {
      iStack_44 = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x119) == '\0') {
      piVar6 = &local_48;
    }
    if ((local_48 == (int)*(undefined8 *)piVar6) &&
       (iStack_44 == (int)((ulonglong)*(undefined8 *)piVar6 >> 0x20))) {
      local_38 = CONCAT44(iStack_44,local_48);
      lVar2 = param_1[9];
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)local_48 * 0x70) + 8);
      local_30 = local_48;
      iStack_2c = iStack_44;
      if (uVar1 < 2) {
        if ((-2 < local_48) && (local_48 + 1 < *(int *)(lVar2 + 0x28))) {
          FUN_146a51726();
        }
      }
      else if (iStack_44 < (int)(uVar1 - 1)) {
        FUN_146a531a0(lVar2,&local_48,&local_30);
        piVar6 = &local_40;
        if (local_48 == local_40) {
          if (iStack_44 < local_3c) {
            piVar6 = &local_48;
          }
          iVar5 = -(iStack_44 - local_3c);
          if (iVar5 < 0) {
            iVar5 = iStack_44 - local_3c;
          }
        }
        else {
          iVar4 = local_3c;
          iVar5 = iStack_44;
          if (local_48 < local_40) {
            iVar4 = iStack_44;
            piVar6 = &local_48;
            iVar5 = local_3c;
          }
          iVar5 = iVar5 - iVar4;
        }
        FUN_146a52592(param_1[9],piVar6,iVar5);
      }
      else if ((-2 < local_48) && (local_48 + 1 < *(int *)(lVar2 + 0x28))) {
        FUN_146a51444();
      }
      FUN_146adc8c2(param_1 + 0x11a,param_1[9],&local_38);
      if (*(char *)(param_1 + 0x119) == '\x01') {
        *(undefined1 *)(param_1 + 0x119) = 0;
      }
      FUN_146adc948(param_1);
    }
    else {
      FUN_146ae1f82(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 ^ 1;
}



// FUNCTION 146ae0534 FUN_146ae0534 body=453 status=ok
// SIG undefined FUN_146ae0534(void)

void FUN_146ae0534(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (*(code *)**(undefined8 **)*param_1)();
  if ((cVar2 != '\0') || (*(int *)(param_1 + 0x11f) == -1)) goto LAB_146ae055b;
  cVar2 = (**(code **)(*(longlong *)param_1[0x107] + 8))();
  if (cVar2 != '\0') goto LAB_146ae055b;
  iVar1 = *(int *)(param_1 + 0x11f);
  lVar5 = (longlong)iVar1 + 1;
  iVar6 = (int)lVar5;
  if (*(int *)(param_1 + 0x11e) <= iVar6) goto LAB_146ae055b;
  lVar5 = lVar5 * 0x38 + param_1[0x11d];
  if ((*(int *)(param_1 + 200) == 0) || ((longlong *)param_1[199] == (longlong *)0x0)) {
LAB_146ae05d2:
    FUN_146a89fb8(param_1 + 0xc4,lVar5);
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[199] + 0x30))();
    if (cVar2 == '\0') goto LAB_146ae05d2;
  }
  cVar2 = FUN_146ad9f16(param_1,lVar5,0);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,lVar5);
  }
  param_1[0x11a] = *(undefined8 *)(lVar5 + 0x20);
  *(undefined1 *)(param_1 + 0x11b) = *(undefined1 *)(lVar5 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0x8d9) = *(undefined1 *)(lVar5 + 0x29);
  uVar7 = (**(code **)(*DAT_14c98e618 + 0x60))();
  param_1[0x11c] = uVar7;
  if ((undefined8 *)(lVar5 + 0x10) != param_1 + 0x118) {
    if (*(char *)(lVar5 + 0x18) == '\x01') {
      param_1[0x118] = *(undefined8 *)(lVar5 + 0x10);
      uVar3 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x119) != '\x01') goto LAB_146ae0648;
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x119) = uVar3;
  }
LAB_146ae0648:
  local_30 = *(undefined4 *)(param_1 + 0x11a);
  iVar4 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
  local_2c = 0;
  if (0 < iVar4) {
    local_2c = iVar4;
  }
  (**(code **)(*(longlong *)*param_1 + 0xb0))();
  FUN_146adc948(param_1);
  *(int *)(param_1 + 0x11f) = iVar6;
  if (*(int *)(param_1 + 0x11e) <= iVar1 + 2) {
    *(undefined4 *)(param_1 + 0x11f) = 0xffffffff;
    FUN_146af9fb8(param_1 + 0x11d,*(int *)(param_1 + 0x11e) + -1);
    FUN_146af9e82(param_1 + 0x11d);
  }
LAB_146ae055b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae06fa FUN_146ae06fa body=224 status=ok
// SIG undefined FUN_146ae06fa(void)

undefined1 * FUN_146ae06fa(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1469133c2();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*DAT_14c98e618 + 0xb0))();
    if (cVar2 == '\0') {
      cVar2 = (*(code *)**(undefined8 **)*param_1)();
      plVar1 = DAT_14c98e618;
      if (cVar2 == '\0') {
        local_30 = param_1[0x104];
        local_28 = param_1[0x105];
        if (local_28 != 0) {
          LOCK();
          *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
          UNLOCK();
        }
        uVar3 = 1;
        FUN_1428f5168(plVar1,1,*(undefined4 *)(param_3 + 0xc),&local_30);
        goto LAB_146ae073b;
      }
    }
  }
  uVar3 = 0;
LAB_146ae073b:
  *param_2 = uVar3;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae07dc FUN_146ae07dc body=1812 status=ok
// SIG undefined FUN_146ae07dc(void)

undefined1 *
FUN_146ae07dc(undefined8 *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [16];
  undefined1 local_170 [23];
  char local_159;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138;
  undefined1 local_130 [136];
  undefined4 local_a8;
  undefined1 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_158);
  cVar6 = FUN_140591fd6(local_158);
  plVar3 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_150 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (cVar6 != '\0') goto LAB_146ae08b5;
  lVar9 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  bVar11 = true;
  if (lVar9 != DAT_14c966e98) {
    lVar9 = *(longlong *)(param_4 + 0x40);
    plVar4 = *(longlong **)(param_4 + 0x50);
    if (plVar4 == (longlong *)0x0) {
      bVar11 = lVar9 == DAT_14c966fa0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      bVar11 = lVar9 == DAT_14c966fa0;
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
  }
  if (plVar3 != (longlong *)0x0) {
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
  }
  if (!bVar11) goto LAB_146ae08b5;
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_158);
  FUN_14287b7b4(local_158);
  cVar6 = local_159;
  if (local_159 == '\x01') {
    local_159 = '\0';
  }
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_150 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_150 + 0x10))(local_150);
      }
    }
  }
  if (cVar6 == '\0') {
    FUN_146adebce(param_1);
    *(undefined1 *)((longlong)param_1 + 0x981) = 1;
  }
  lVar9 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 == (longlong *)0x0) {
    if (lVar9 == DAT_14c966e98) goto LAB_146ae0bd7;
LAB_146ae0ac2:
    if (lVar9 == DAT_14c966fa0) {
LAB_146ae0acb:
      iVar8 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
      iVar7 = 0;
      if (0 < iVar8) {
        iVar7 = iVar8;
      }
      local_158 = CONCAT44(iVar7,*(int *)(param_1 + 0x11a));
      puVar10 = &local_158;
      if (*(char *)(param_1 + 0x119) != '\0') {
        puVar10 = param_1 + 0x118;
      }
      if ((*(int *)(param_1 + 0x11a) != (int)*puVar10) ||
         (iVar7 != (int)((ulonglong)*puVar10 >> 0x20))) {
        local_158 = *(undefined8 *)(param_4 + 0x20);
        cVar6 = FUN_146ae0ef2(param_1);
        if (cVar6 == '\0') {
          if (*(char *)(param_1 + 0x119) == '\x01') {
            *(undefined1 *)(param_1 + 0x119) = 0;
          }
          fVar15 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                         *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
          fVar16 = *(float *)(param_3 + 0x1c) * fVar15;
          fVar14 = -*(float *)(param_3 + 0x24) * fVar15;
          fVar13 = -*(float *)(param_3 + 0x20) * fVar15;
          fVar15 = fVar15 * *(float *)(param_3 + 0x28);
          local_158 = 0x100000000;
          local_150 = (longlong *)
                      CONCAT44(fVar13 * *(float *)(param_4 + 0x20) +
                               fVar16 * *(float *)(param_4 + 0x24) +
                               (-*(float *)(param_3 + 0x2c) * fVar13 -
                               fVar16 * *(float *)(param_3 + 0x30)),
                               fVar15 * *(float *)(param_4 + 0x20) +
                               fVar14 * *(float *)(param_4 + 0x24) +
                               (-*(float *)(param_3 + 0x2c) * fVar15 -
                               *(float *)(param_3 + 0x30) * fVar14));
          uStack_148 = (ulonglong)*(uint *)(param_3 + 8) << 0x20;
          FUN_146adfbd4(param_1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
    if (lVar9 == lVar5) {
LAB_146ae0bd7:
      if ((*(byte *)(param_4 + 8) & 3) == 0) {
        if (*(char *)(param_1 + 0x119) == '\x01') {
          *(undefined1 *)(param_1 + 0x119) = 0;
        }
        uVar12 = *(undefined4 *)(param_3 + 8);
        fVar15 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                       *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
        fVar16 = *(float *)(param_3 + 0x1c) * fVar15;
        fVar14 = -*(float *)(param_3 + 0x24) * fVar15;
        fVar13 = -*(float *)(param_3 + 0x20) * fVar15;
        fVar15 = fVar15 * *(float *)(param_3 + 0x28);
        local_150 = (longlong *)
                    CONCAT44(fVar13 * *(float *)(param_4 + 0x20) +
                             fVar16 * *(float *)(param_4 + 0x24) +
                             (-*(float *)(param_3 + 0x2c) * fVar13 -
                             fVar16 * *(float *)(param_3 + 0x30)),
                             fVar15 * *(float *)(param_4 + 0x20) +
                             fVar14 * *(float *)(param_4 + 0x24) +
                             (-*(float *)(param_3 + 0x2c) * fVar15 -
                             *(float *)(param_3 + 0x30) * fVar14));
        uStack_148._0_4_ = 0;
      }
      else {
        uVar12 = *(undefined4 *)(param_3 + 8);
        fVar15 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                       *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
        fVar16 = *(float *)(param_3 + 0x1c) * fVar15;
        fVar14 = -*(float *)(param_3 + 0x24) * fVar15;
        fVar13 = -*(float *)(param_3 + 0x20) * fVar15;
        fVar15 = fVar15 * *(float *)(param_3 + 0x28);
        local_150 = (longlong *)
                    CONCAT44(fVar13 * *(float *)(param_4 + 0x20) +
                             fVar16 * *(float *)(param_4 + 0x24) +
                             (-*(float *)(param_3 + 0x2c) * fVar13 -
                             fVar16 * *(float *)(param_3 + 0x30)),
                             fVar15 * *(float *)(param_4 + 0x20) +
                             fVar14 * *(float *)(param_4 + 0x24) +
                             (-*(float *)(param_3 + 0x2c) * fVar15 -
                             *(float *)(param_3 + 0x30) * fVar14));
        uStack_148._0_4_ = 1;
      }
      local_158 = 0x100000000;
      uStack_148 = CONCAT44(uVar12,(undefined4)uStack_148);
      FUN_146adfbd4(param_1);
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
    else {
      lVar9 = *(longlong *)(param_4 + 0x40);
      plVar3 = *(longlong **)(param_4 + 0x50);
      if (plVar3 == (longlong *)0x0) goto LAB_146ae0ac2;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      lVar5 = DAT_14c966fa0;
      UNLOCK();
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
      if (lVar9 == lVar5) goto LAB_146ae0acb;
    }
  }
  local_158 = CONCAT71(local_158._1_7_,1);
  local_138 = 0;
  local_150 = (longlong *)0x0;
  uStack_148 = 0;
  memset(local_130,0,0x88);
  local_a8 = 0x20702;
  local_a4 = 0;
  FUN_1403d4924(param_2,&local_158);
  FUN_14493db24(&local_158);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,local_170);
  FUN_140592a6e(param_2,local_170);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,local_180);
  FUN_140592b68(param_2,local_180,0,0);
LAB_146ae08b5:
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ae0ef2 FUN_146ae0ef2 body=300 status=ok
// SIG undefined FUN_146ae0ef2(void)

void FUN_146ae0ef2(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar3 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
  fVar4 = *(float *)(param_2 + 0x1c) * fVar3;
  fVar2 = -*(float *)(param_2 + 0x24) * fVar3;
  fVar1 = -*(float *)(param_2 + 0x20) * fVar3;
  fVar3 = fVar3 * *(float *)(param_2 + 0x28);
  local_54 = (fVar1 * *param_3 + fVar4 * param_3[1] +
             (-*(float *)(param_2 + 0x2c) * fVar1 - fVar4 * *(float *)(param_2 + 0x30))) *
             *(float *)(param_2 + 8);
  local_58 = (fVar3 * *param_3 + fVar2 * param_3[1] +
             (-*(float *)(param_2 + 0x2c) * fVar3 - *(float *)(param_2 + 0x30) * fVar2)) *
             *(float *)(param_2 + 8);
  FUN_146ae248e();
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1020 FUN_146ae1020 body=2121 status=ok
// SIG undefined FUN_146ae1020(void)

undefined1 * FUN_146ae1020(undefined8 *param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 *local_290;
  undefined4 *local_288;
  undefined1 local_280;
  undefined8 *local_278;
  undefined1 *local_270;
  undefined1 local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong *local_248;
  longlong local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e2;
  undefined1 local_1e1;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c0;
  undefined1 local_1b8 [136];
  undefined4 local_130;
  undefined1 local_12c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x88))();
  cVar5 = FUN_140591fd6(local_1e0);
  plVar8 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1d8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (cVar5 == '\0') goto LAB_146ae166e;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  bVar9 = true;
  if (lVar3 != DAT_14c966e98) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 == (longlong *)0x0) {
      bVar9 = lVar3 == DAT_14c966fa0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar9 = lVar3 == DAT_14c966fa0;
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
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
  if (((((bVar9) && (*(char *)((longlong)param_1 + 0x981) == '\0')) &&
       (cVar5 = FUN_1469133c2(), cVar5 != '\0')) &&
      (cVar5 = (*(code *)**(undefined8 **)*param_1)(), cVar5 == '\0')) &&
     ((cVar5 = (**(code **)(*(longlong *)*param_1 + 0x78))(), cVar5 == '\x01' ||
      (cVar5 = (**(code **)(*(longlong *)*param_1 + 0x78))(), cVar5 == '\0')))) {
    uVar6 = DAT_14c98e618;
    local_1f8 = param_1[0x104];
    plVar8 = (longlong *)param_1[0x105];
    if (plVar8 == (longlong *)0x0) {
      local_1f0 = (longlong *)0x0;
      FUN_1428f5168(DAT_14c98e618,1,*(undefined4 *)(param_4 + 0xc));
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_1f0 = plVar8;
      FUN_1428f5168(uVar6,1,*(undefined4 *)(param_4 + 0xc));
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
  }
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if (lVar3 == DAT_14c966e98) {
      if (*(char *)(param_1 + 0x130) != '\0') goto LAB_146ae11ad;
      goto LAB_146ae127d;
    }
    if (lVar3 != DAT_14c966fa0) goto LAB_146ae166e;
LAB_146ae12c2:
    fVar11 = param_3[8] * 0.0;
    fVar12 = param_3[7] * 0.0;
    fVar10 = param_3[10] * 0.0;
    fVar13 = param_3[9] * 0.0;
    local_1e0 = CONCAT44(fVar10 + fVar11 + param_3[0xc],fVar13 + fVar12 + param_3[0xb]);
    local_1d8 = (longlong *)CONCAT44(*param_3 * param_3[8] + fVar10,*param_3 * param_3[7] + fVar13);
    uStack_1d0 = CONCAT44(param_3[10] * param_3[1] + fVar11,param_3[1] * param_3[9] + fVar12);
    cVar5 = FUN_1402b2a42();
    if (cVar5 != '\0') {
      if (*(longlong *)(param_4 + 0x18) == 0) {
        FUN_144a8759e(&local_1e0);
      }
      else {
        FUN_1413f6ca8();
      }
      (**(code **)(*(longlong *)*param_1 + 0x98))();
      if (local_208 != 0) {
        *(undefined1 *)(param_1 + 0x137) = 1;
        plVar8 = (longlong *)param_1[0x139];
        param_1[0x138] = 0;
        param_1[0x139] = 0;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        uVar6 = DAT_14c98e618;
        local_1e1 = 0;
        local_220 = DAT_14c84635c;
        local_224 = 5;
        local_230 = *(undefined8 *)(param_4 + 0x20);
        local_240 = local_208;
        local_238 = local_200;
        if (local_200 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_200 + 1) = (int)local_200[1] + 1;
          UNLOCK();
        }
        FUN_14694781c(param_4,&local_260);
        local_250 = local_260;
        local_248 = local_258;
        if (local_258 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_258 + 1) = (int)local_258[1] + 1;
          UNLOCK();
        }
        local_268 = 1;
        local_270 = &local_1e2;
        local_278 = &local_220;
        local_280 = 1;
        local_288 = &local_224;
        local_290 = &local_230;
        local_298 = &local_240;
        FUN_1428f4aae(uVar6,&local_218,&local_250,&local_1e0);
        plVar8 = local_248;
        if (local_248 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_248 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_248)(local_248);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (local_258 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_258 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_258)(local_258);
            LOCK();
            piVar1 = (int *)((longlong)local_258 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_258 + 0x10))(local_258);
            }
          }
        }
        plVar8 = local_238;
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_238 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (local_218 == (longlong *)0x0) {
          *(undefined1 *)(param_1 + 0x137) = 0;
          plVar8 = (longlong *)param_1[0x139];
          param_1[0x138] = 0;
          param_1[0x139] = 0;
          if (plVar8 == (longlong *)0x0) goto LAB_146ae1590;
LAB_146ae1581:
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        else {
          uVar6 = (**(code **)(*local_218 + 0x28))();
          FUN_146ae186a(uVar6,&local_240,param_1);
          plVar8 = local_210;
          if (local_210 == (longlong *)0x0) {
            *(undefined1 *)(param_1 + 0x137) = 0;
            param_1[0x138] = local_218;
            plVar7 = (longlong *)param_1[0x139];
            if (plVar7 != (longlong *)0x0) {
LAB_146ae17f3:
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))();
              }
              param_1[0x139] = plVar8;
              if (plVar8 != (longlong *)0x0) goto LAB_146ae1853;
            }
          }
          else {
            LOCK();
            *(int *)(local_210 + 1) = (int)local_210[1] + 1;
            UNLOCK();
            *(undefined1 *)(param_1 + 0x137) = 0;
            param_1[0x138] = local_218;
            if ((longlong *)param_1[0x139] != local_210) {
              LOCK();
              *(int *)((longlong)local_210 + 0xc) = *(int *)((longlong)local_210 + 0xc) + 1;
              UNLOCK();
              plVar7 = (longlong *)param_1[0x139];
              if (plVar7 != (longlong *)0x0) goto LAB_146ae17f3;
              param_1[0x139] = local_210;
            }
LAB_146ae1853:
            LOCK();
            plVar7 = plVar8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar8)(plVar8);
              goto LAB_146ae1581;
            }
          }
        }
LAB_146ae1590:
        if (local_210 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_210 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_210)(local_210);
            LOCK();
            piVar1 = (int *)((longlong)local_210 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_210 + 0x10))(local_210);
            }
          }
        }
      }
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_200 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar1 = (int *)((longlong)local_200 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_200 + 0x10))(local_200);
          }
        }
      }
      FUN_1447fa21a(&local_1e0);
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (lVar3 != DAT_14c966e98) {
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
LAB_146ae127d:
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar8 = *(longlong **)(param_4 + 0x50);
      lVar4 = DAT_14c966fa0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        lVar4 = DAT_14c966fa0;
        UNLOCK();
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
      if (lVar3 != lVar4) goto LAB_146ae166e;
      goto LAB_146ae12c2;
    }
    cVar5 = *(char *)(param_1 + 0x130);
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
    if (cVar5 == '\0') goto LAB_146ae127d;
LAB_146ae11ad:
    *(undefined1 *)(param_1 + 0x130) = 0;
    if (*(char *)((longlong)param_1 + 0x981) == '\x01') {
      if (((*(char *)((longlong)param_1 + 0x982) != '\x01') || (*(char *)(param_1 + 0x119) == '\0'))
         && (cVar5 = (**(code **)(*(longlong *)*param_1 + 0x20))(), cVar5 != '\0')) {
        FUN_146adb98e(param_1,1,0);
        FUN_146adab6c(param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x981) = 0;
    }
  }
  local_1e0 = CONCAT71(local_1e0._1_7_,1);
  local_1c0 = 0;
  local_1d8 = (longlong *)0x0;
  uStack_1d0 = 0;
  memset(local_1b8,0,0x88);
  local_130 = 0x20702;
  local_12c = 0;
  FUN_1403d4924(param_2,&local_1e0);
  FUN_14493db24(&local_1e0);
  plVar8 = *(longlong **)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(uint *)(param_2 + 0xb4) = (*(uint *)(param_2 + 0xb4) & 0xffffffde) + 1;
LAB_146ae166e:
  if ((local_80 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ae186a FUN_146ae186a body=228 status=ok
// SIG undefined FUN_146ae186a(void)

undefined8 FUN_146ae186a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149efe120;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149f1e840;
  local_38[3] = param_3;
  local_38[4] = FUN_146ae1950;
  FUN_1469b1686(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1950 FUN_146ae1950 body=176 status=ok
// SIG undefined FUN_146ae1950(void)

void FUN_146ae1950(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)*param_1 + 0x90))((longlong *)*param_1,&local_28);
  if (local_28 != 0) {
    FUN_140d673ae(DAT_14c98e618,&local_28,4);
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
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1a02 FUN_146ae1a02 body=586 status=ok
// SIG undefined FUN_146ae1a02(void)

undefined1 *
FUN_146ae1a02(undefined8 *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x130) == '\x01') {
    (**(code **)(*(longlong *)*param_1 + 0x88))();
    cVar4 = FUN_140591fd6(local_a8);
    if (cVar4 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = (float)DAT_14c84635c != *(float *)(param_4 + 0x30) ||
              DAT_14c84635c._4_4_ != *(float *)(param_4 + 0x34);
    }
    plVar3 = (longlong *)CONCAT44(fStack_9c,local_a0);
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
    if (bVar6) {
      local_94 = *(undefined4 *)(param_3 + 8);
      fVar9 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                    *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
      fVar10 = *(float *)(param_3 + 0x1c) * fVar9;
      fVar8 = -*(float *)(param_3 + 0x24) * fVar9;
      fVar7 = -*(float *)(param_3 + 0x20) * fVar9;
      fVar9 = fVar9 * *(float *)(param_3 + 0x28);
      fStack_9c = fVar7 * *(float *)(param_4 + 0x20) + fVar10 * *(float *)(param_4 + 0x24) +
                  (-*(float *)(param_3 + 0x2c) * fVar7 - fVar10 * *(float *)(param_3 + 0x30));
      local_a0 = fVar9 * *(float *)(param_4 + 0x20) + fVar8 * *(float *)(param_4 + 0x24) +
                 (-*(float *)(param_3 + 0x2c) * fVar9 - *(float *)(param_3 + 0x30) * fVar8);
      local_a8 = 0x100000000;
      local_98 = 1;
      FUN_146adfbd4(param_1);
      *(undefined1 *)((longlong)param_1 + 0x982) = 1;
      uVar5 = 1;
      goto LAB_146ae1ad8;
    }
  }
  uVar5 = 0;
LAB_146ae1ad8:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1c4e FUN_146ae1c4e body=248 status=ok
// SIG undefined FUN_146ae1c4e(void)

undefined1 *
FUN_146ae1c4e(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = (**(code **)(*(longlong *)*param_1 + 0x48))();
  if (cVar6 != '\0') {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar4 = *(longlong **)(param_4 + 0x50);
    lVar5 = DAT_14c966e98;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c966e98;
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
      local_48 = *(undefined8 *)(param_4 + 0x20);
      FUN_146ae1d48(param_1);
      uVar7 = 1;
      goto LAB_146ae1cc8;
    }
  }
  uVar7 = 0;
LAB_146ae1cc8:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1d48 FUN_146ae1d48 body=300 status=ok
// SIG undefined FUN_146ae1d48(void)

void FUN_146ae1d48(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar3 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
  fVar4 = *(float *)(param_2 + 0x1c) * fVar3;
  fVar2 = -*(float *)(param_2 + 0x24) * fVar3;
  fVar1 = -*(float *)(param_2 + 0x20) * fVar3;
  fVar3 = fVar3 * *(float *)(param_2 + 0x28);
  local_54 = (fVar1 * *param_3 + fVar4 * param_3[1] +
             (-*(float *)(param_2 + 0x2c) * fVar1 - fVar4 * *(float *)(param_2 + 0x30))) *
             *(float *)(param_2 + 8);
  local_58 = (fVar3 * *param_3 + fVar2 * param_3[1] +
             (-*(float *)(param_2 + 0x2c) * fVar3 - *(float *)(param_2 + 0x30) * fVar2)) *
             *(float *)(param_2 + 8);
  FUN_146ae25fe();
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1e76 FUN_146ae1e76 body=179 status=ok
// SIG undefined FUN_146ae1e76(void)

ulonglong FUN_146ae1e76(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar1 != '\0') {
    uVar5 = 0;
    goto LAB_146ae1e9c;
  }
  FUN_146adb77e(param_1,local_28);
  puVar3 = (undefined8 *)FUN_1447a1f4a(local_28);
  param_1 = param_1 + 0x129;
  puVar4 = (undefined8 *)FUN_1447a1f4a(param_1);
  iVar2 = *(int *)(puVar3 + 1);
  if (iVar2 == *(int *)(puVar4 + 1)) {
    param_1 = (undefined8 *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)*puVar3,(wchar_t *)*puVar4);
      bVar6 = iVar2 == 0;
      goto LAB_146ae1f0d;
    }
  }
  else {
    bVar6 = *(int *)(puVar4 + 1) + iVar2 == 1;
LAB_146ae1f0d:
    param_1 = (undefined8 *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar6);
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  uVar5 = (ulonglong)param_1 ^ 1;
LAB_146ae1e9c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae1f2a FUN_146ae1f2a body=87 status=ok
// SIG undefined FUN_146ae1f2a(void)

void FUN_146ae1f2a(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_146ae1e76();
  if (cVar1 == '\0') {
    return;
  }
  FUN_146ad9f16(param_1,param_1 + 0x129,0);
  (**(code **)(*(longlong *)param_1[9] + 8))();
                    /* WARNING: Could not recover jumptable at 0x000146ae1f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,param_1 + 0x129,3);
  return;
}



// FUNCTION 146ae1f82 FUN_146ae1f82 body=1017 status=ok
// SIG undefined FUN_146ae1f82(void)

void FUN_146ae1f82(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  uint local_100;
  int iStack_fc;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
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
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar8 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar8 == '\0') {
    uVar3 = *(uint *)(param_1 + 0x11a);
    iVar11 = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4);
    iVar14 = 0;
    if (0 < iVar11) {
      iVar14 = iVar11;
    }
    local_a8 = CONCAT44(iVar14,uVar3);
    puVar17 = &local_a8;
    if (*(char *)(param_1 + 0x119) != '\0') {
      puVar17 = param_1 + 0x118;
    }
    if ((uVar3 != (uint)*puVar17) || (iVar14 != (int)(*puVar17 >> 0x20))) {
      local_100 = uVar3;
      iStack_fc = iVar14;
      piVar9 = (int *)((longlong)param_1 + 0x8c4);
      puVar17 = param_1 + 0x118;
      if (*(char *)(param_1 + 0x119) == '\0') {
        piVar9 = &iStack_fc;
        puVar17 = (ulonglong *)&local_100;
      }
      iVar11 = *piVar9;
      uVar19 = *puVar17;
      uVar4 = CONCAT44(iVar14,uVar3);
      uVar18 = (uint)uVar19;
      if (uVar18 == uVar3) {
        iVar12 = (int)(uVar19 >> 0x20);
        iVar16 = iVar14;
        if (iVar14 < iVar12) {
          iVar16 = iVar11;
        }
        iVar15 = iVar14;
        if (iVar12 < iVar14) {
          iVar15 = iVar11;
        }
        local_a8 = CONCAT44(iVar15,uVar18);
        FUN_146a52592(param_1[9],&local_a8,iVar16 - iVar15);
      }
      else {
        uVar7 = uVar18;
        if ((int)uVar3 <= (int)uVar18) {
          uVar4 = uVar19;
          uVar7 = uVar3;
        }
        uVar19 = uVar4 & 0xffffffff;
        iVar12 = (int)uVar4;
        iVar16 = iVar14;
        iVar15 = iVar11;
        if ((int)uVar3 <= (int)uVar18) {
          iVar16 = iVar11;
          iVar15 = iVar14;
        }
        lVar5 = param_1[9];
        iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar12 * 0x70) + 8);
        iVar11 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar11 = 0;
        }
        lVar13 = lVar5;
        if (iVar11 != iVar16) {
          local_a8 = uVar4 & 0xffffffff;
          FUN_146a52592(lVar5,&local_a8,iVar16);
          goto LAB_146ae20ff;
        }
        while( true ) {
          iVar12 = (int)uVar19;
          FUN_146a51726(lVar13,uVar19);
LAB_146ae20ff:
          uVar19 = (ulonglong)(iVar12 - 1U);
          if ((int)(iVar12 - 1U) <= (int)uVar7) break;
          lVar13 = param_1[9];
        }
        iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)(int)uVar7 * 0x70) +
                         8);
        iVar11 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar11 = 0;
        }
        local_a8 = CONCAT44(iVar15,uVar7);
        FUN_146a52592(param_1[9],&local_a8,iVar11 - iVar15);
        FUN_146a51444(param_1[9],uVar7);
        if (*(int *)(lVar5 + 0x28) == 0) {
          plVar10 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar10[1] = (longlong)&DAT_100000001;
          *plVar10 = (longlong)&PTR_FUN_149f1e8b0;
          plVar10[2] = 0;
          plVar10[3] = 0;
          local_b8 = (undefined8 *)0x0;
          uStack_b0 = 0;
          local_108 = param_1 + 0xc;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_78 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_70 = 0x8000000000;
          local_68 = 0xffffffff;
          local_d8 = plVar10 + 2;
          local_d0 = plVar10;
          FUN_146adc808(param_1,&local_c8,&local_a8,&local_d8);
          uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
          FUN_1410f05b0(&local_b8,0);
          *local_b8 = local_c8;
          local_b8[1] = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
            UNLOCK();
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_c0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar9 = (int *)((longlong)local_c0 + 0xc);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)(*local_c0 + 0x10))(local_c0);
                }
              }
            }
          }
          FUN_141720dbc(&local_a8);
          plVar1 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_d0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar9 = (int *)((longlong)plVar1 + 0xc);
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (*piVar9 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          uVar6 = param_1[9];
          local_e8 = local_b8;
          uStack_e0 = uStack_b0;
          local_b8 = (undefined8 *)0x0;
          uStack_b0 = 0;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_f8 = plVar10 + 2;
          local_f0 = plVar10;
          FUN_1410f0234(&local_a8,&local_f8,&local_e8);
          FUN_146a5292a(uVar6,&local_a8);
          FUN_1417233a6(&local_a8);
          FUN_1410f0078(local_b8,uStack_b0 & 0xffffffff);
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar9 = (int *)((longlong)plVar10 + 0xc);
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (*piVar9 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
        uVar19 = (ulonglong)uVar7;
      }
      if (*(char *)(param_1 + 0x119) == '\x01') {
        *(undefined1 *)(param_1 + 0x119) = 0;
      }
      local_a8 = CONCAT44(iVar15,(int)uVar19);
      FUN_146adc8c2(param_1 + 0x11a,param_1[9]);
      FUN_146adc948(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ae248e FUN_146ae248e body=366 status=ok
// SIG undefined FUN_146ae248e(void)

bool FUN_146ae248e(longlong param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  int local_40;
  int iStack_3c;
  double local_38;
  double local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(int *)(param_1 + 0x8d0);
  iStack_3c = (uint)(*(char *)(param_1 + 0x8d8) == '\x01') + *(int *)(param_1 + 0x8d4);
  bVar4 = false;
  if (iStack_3c < 1) {
    iStack_3c = 0;
  }
  piVar1 = (int *)(param_1 + 0x8c0);
  piVar5 = &local_40;
  if (*(char *)(param_1 + 0x8c8) != '\0') {
    piVar5 = piVar1;
  }
  if ((*(int *)(param_1 + 0x8d0) != (int)*(undefined8 *)piVar5) ||
     (iStack_3c != (int)((ulonglong)*(undefined8 *)piVar5 >> 0x20))) {
    local_30 = (double)param_2[1];
    local_38 = (double)*param_2;
    FUN_146a509ca(*(undefined8 *)(param_1 + 0x48),&local_28,&local_38,0);
    piVar5 = (int *)(param_1 + 0x8c4);
    if (*(char *)(param_1 + 0x8c8) == '\0') {
      piVar5 = &iStack_3c;
      piVar1 = &local_40;
    }
    iVar2 = *piVar5;
    iVar6 = (int)*(undefined8 *)piVar1;
    if (iVar6 == local_40) {
      if (local_28 == iVar6) {
        iVar7 = (int)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
        iVar6 = iStack_3c;
        if (iStack_3c < iVar7) {
          iVar6 = iVar2;
        }
        iVar3 = iStack_3c;
        if (iVar7 < iStack_3c) {
          iVar3 = iVar2;
        }
        bVar4 = local_24 <= iVar6 && iVar3 <= local_24;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      iVar8 = iStack_3c;
      iVar7 = local_40;
      iVar3 = iVar6;
      if (local_40 <= iVar6) {
        iVar8 = iVar2;
        iVar7 = iVar6;
        iVar3 = local_40;
      }
      if (iVar3 == local_28) {
        iVar7 = iStack_3c;
        if (iVar6 < local_40) {
          iVar7 = iVar2;
        }
        bVar4 = iVar7 <= local_24;
      }
      else if (iVar7 == local_28) {
        bVar4 = local_24 <= iVar8;
      }
      else {
        bVar4 = local_28 < iVar7 && iVar3 < local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 146ae25fe FUN_146ae25fe body=324 status=ok
// SIG undefined FUN_146ae25fe(void)

void FUN_146ae25fe(longlong param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (double)param_2[1];
  local_38 = (double)*param_2;
  FUN_146a509ca(*(undefined8 *)(param_1 + 0x48),local_28,&local_38,0);
  FUN_146a5326e(*(undefined8 *)(param_1 + 0x48),&local_38,local_28);
  bVar6 = SBORROW4((int)local_38,(int)local_30);
  bVar5 = (int)local_38 - (int)local_30 < 0;
  bVar4 = (int)local_38 == (int)local_30;
  dVar2 = local_30;
  if (bVar4) {
    if (local_38._4_4_ < local_30._4_4_) {
      dVar2 = local_38;
    }
    bVar6 = SBORROW4(local_38._4_4_,local_30._4_4_);
    bVar5 = local_38._4_4_ - local_30._4_4_ < 0;
    bVar4 = local_38._4_4_ == local_30._4_4_;
  }
  else if ((int)local_38 < (int)local_30) {
    dVar2 = local_38;
  }
  dVar1 = local_30;
  if (!bVar4 && bVar6 == bVar5) {
    dVar1 = local_38;
  }
  if ((ulonglong)dVar2 >> 0x20 != 0xffffffff && SUB84(dVar2,0) != -1) {
    iVar3 = (int)((ulonglong)dVar1 >> 0x20);
    if (iVar3 != -1 && SUB84(dVar1,0) != -1) {
      if (*(char *)(param_1 + 0x8c8) == '\x01') {
        *(undefined1 *)(param_1 + 0x8c8) = 0;
      }
      if ((SUB84(dVar2,0) != SUB84(dVar1,0)) || ((int)((ulonglong)dVar2 >> 0x20) != iVar3)) {
        *(double *)(param_1 + 0x8c0) = dVar2;
        *(undefined1 *)(param_1 + 0x8c8) = 1;
      }
      local_40 = dVar1;
      FUN_146adc8c2(param_1 + 0x8d0,*(undefined8 *)(param_1 + 0x48));
      FUN_146adc948(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae2744 FUN_146ae2744 body=1058 status=ok
// SIG undefined FUN_146ae2744(void)

void FUN_146ae2744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  int local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 uStack_60;
  ushort *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_1;
  cVar9 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar9 == '\0') {
    iVar11 = *(int *)(param_2 + 1);
    if (1 < (ulonglong)(longlong)iVar11) {
      local_58 = (ushort *)0x0;
      _Src = (void *)*param_2;
      local_50 = iVar11;
      FUN_1446dd670(&local_58,iVar11,0);
      memcpy(local_58,_Src,(longlong)iVar11 * 2);
      bVar10 = (**(code **)(*(longlong *)*local_90 + 0x10))();
      iVar11 = local_50;
      puVar7 = local_58;
      lVar20 = (longlong)local_50;
      iVar17 = local_50;
      if (lVar20 != 0) {
        uVar2 = *local_58;
        iVar17 = 0;
        if (uVar2 == 0) {
          bVar21 = false;
        }
        else {
          bVar21 = false;
          if ((uVar2 != 9) && (bVar21 = uVar2 < 0x20, (bVar10 & bVar21) == 1)) {
            bVar21 = uVar2 - 0xe < 0xfffffffc;
          }
        }
        iVar16 = 0;
        do {
          bVar5 = bVar21;
          if (iVar16 + 1 < iVar11) {
            do {
              lVar19 = (longlong)iVar16 + 2;
              bVar21 = true;
              lVar14 = -1;
              do {
                uVar2 = puVar7[lVar19 + -1];
                if ((uVar2 == 0) || (uVar2 == 9)) {
                  if (bVar5) {
                    if (!bVar21) goto LAB_146ae293b;
                    iVar18 = iVar16 - (int)lVar14;
                    goto LAB_146ae28c7;
                  }
                }
                else {
                  bVar22 = uVar2 < 0x20;
                  if ((bVar10 & bVar22) == 1) {
                    bVar22 = uVar2 - 0xe < 0xfffffffc;
                  }
                  if ((bool)(bVar22 ^ bVar5)) {
                    iVar18 = iVar16 - (int)lVar14;
                    break;
                  }
                }
                bVar21 = lVar19 < lVar20;
                lVar14 = lVar14 + -1;
                lVar19 = lVar19 + 1;
                iVar18 = iVar11;
              } while (iVar16 - lVar20 != lVar14);
              bVar22 = !bVar5;
              iVar8 = iVar18;
              iVar13 = iVar16;
              bVar5 = bVar21;
              if (bVar22) break;
              if (!bVar21) goto LAB_146ae293b;
LAB_146ae28c7:
              bVar5 = false;
              iVar8 = iVar18 + 1;
              iVar13 = iVar18;
              iVar16 = iVar18;
            } while (iVar18 + 1 < iVar11);
          }
          else {
            if (bVar5) break;
            iVar8 = iVar16 + 1;
            iVar13 = iVar16;
            bVar5 = false;
          }
          iVar16 = iVar8;
          if (iVar17 != iVar13) {
            memmove(puVar7 + iVar17,puVar7 + iVar13,(longlong)(iVar16 - iVar13) * 2);
          }
          iVar17 = iVar17 + (iVar16 - iVar13);
          bVar21 = true;
        } while (bVar5);
      }
LAB_146ae293b:
      local_50 = iVar17;
      local_68 = 0;
      uStack_60 = 0;
      FUN_1410f06be(&local_58);
      local_80 = *(int *)(local_90 + 0x11a);
      iVar11 = (uint)(*(char *)(local_90 + 0x11b) == '\x01') + *(int *)((longlong)local_90 + 0x8d4);
      iStack_7c = 0;
      if (0 < iVar11) {
        iStack_7c = iVar11;
      }
      piVar12 = (int *)(local_90 + 0x118);
      if (*(char *)(local_90 + 0x119) == '\0') {
        piVar12 = &local_80;
      }
      if ((*(int *)(local_90 + 0x11a) != (int)*(undefined8 *)piVar12) ||
         (iStack_7c != (int)((ulonglong)*(undefined8 *)piVar12 >> 0x20))) {
        FUN_146ae1f82(local_90);
      }
      lVar20 = local_68;
      puVar6 = local_90;
      lVar14 = (longlong)(int)uStack_60;
      if (lVar14 != 0) {
        puVar1 = local_90 + 0x11a;
        bVar21 = true;
        lVar19 = 0;
        do {
          if (!bVar21) {
            local_80 = *(int *)(local_90 + 0x11a);
            iStack_7c = (uint)(*(char *)(local_90 + 0x11b) == '\x01') +
                        *(int *)((longlong)local_90 + 0x8d4);
            if (iStack_7c < 1) {
              iStack_7c = 0;
            }
            cVar9 = FUN_146a519ac(local_90[9],&local_80);
            if (cVar9 != '\0') {
              local_70 = local_80 + 1;
              local_6c = 0;
              FUN_146adc8c2(puVar1,local_90[9],&local_70);
            }
          }
          iVar11 = *(int *)(lVar20 + lVar19);
          FUN_144a63a7c(&local_58,&local_80,iVar11,*(int *)(lVar20 + 4 + lVar19) - iVar11);
          local_70 = *(int *)(local_90 + 0x11a);
          lVar15 = (longlong)local_70;
          local_6c = (uint)(*(char *)(local_90 + 0x11b) == '\x01') +
                     *(int *)((longlong)local_90 + 0x8d4);
          if (local_6c < 1) {
            local_6c = 0;
          }
          lVar3 = puVar6[9];
          lVar4 = *(longlong *)(lVar3 + 0x20);
          FUN_146a51062(lVar3,&local_70,&local_80);
          if (*(char *)(puVar6 + 0x119) == '\x01') {
            *(undefined1 *)(local_90 + 0x119) = 0;
          }
          iVar11 = *(int *)(*(longlong *)(lVar15 * 0x70 + lVar4) + 8);
          iVar17 = 0;
          if (iVar11 != 0) {
            iVar17 = iVar11 + -1;
          }
          iVar11 = local_78 + -1;
          if (local_78 == 0) {
            iVar11 = 0;
          }
          local_84 = iVar11 + local_6c;
          if (iVar17 <= iVar11 + local_6c) {
            local_84 = iVar17;
          }
          local_88 = local_70;
          FUN_146adc8c2(puVar1,local_90[9],&local_88);
          if (CONCAT44(iStack_7c,local_80) != 0) {
            FUN_1400020a8();
          }
          lVar19 = lVar19 + 8;
          bVar21 = false;
        } while (lVar14 * 8 != lVar19);
      }
      FUN_146adc948(local_90);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (ushort *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ae2b68 FUN_146ae2b68 body=161 status=ok
// SIG undefined FUN_146ae2b68(void)

undefined4 FUN_146ae2b68(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined1 auStack_48 [32];
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a5326e(*(undefined8 *)(param_1 + 0x48),&local_28,param_2);
  bVar2 = local_28 < local_20;
  if (local_28 == local_20) {
    bVar2 = iStack_24 < local_1c;
  }
  puVar5 = (ulonglong *)&local_20;
  if (bVar2) {
    puVar5 = (ulonglong *)&local_28;
  }
  uVar1 = *puVar5;
  if (uVar1 >> 0x20 == 0xffffffff || (uint)uVar1 == 0xffffffff) {
    uVar4 = 0;
  }
  else {
    uVar3 = (uint)(uVar1 >> 0x20) ^ param_2[1] | *param_2 ^ (uint)uVar1;
    uVar4 = CONCAT31((int3)(uVar3 >> 8),uVar3 == 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae2c0a FUN_146ae2c0a body=189 status=ok
// SIG undefined FUN_146ae2c0a(void)

uint * FUN_146ae2c0a(longlong param_1,uint *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
            (*(longlong **)(param_1 + 8),
             *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)*param_3 * 0x70));
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80 + (ulonglong)('\0' < param_4) * 8))
                    (*(longlong **)(param_1 + 8),param_3[1]);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  uVar1 = *param_3;
  if (uVar4 == 0xffffffff) {
    if (param_4 < '\x01') {
      if (0 < (int)uVar1) {
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar1 - 1) * 0x70)
                        + 8);
        uVar4 = iVar2 - 1;
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        *param_2 = uVar1 - 1;
        param_2[1] = uVar4;
        return param_2;
      }
    }
    else if ((int)uVar1 < *(int *)(lVar3 + 0x28) + -1) {
      *param_2 = uVar1 + 1;
      param_2[1] = 0;
      return param_2;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
  }
  else {
    *param_2 = uVar1;
    param_2[1] = uVar4;
  }
  return param_2;
}



// FUNCTION 146ae2cc8 FUN_146ae2cc8 body=277 status=ok
// SIG undefined FUN_146ae2cc8(void)

void FUN_146ae2cc8(longlong param_1,undefined8 param_2,int param_3,float param_4,ulonglong *param_5,
                  undefined2 *param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  char *local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x48);
  iVar6 = *(int *)(lVar1 + 0x38);
  iVar3 = FUN_146a5093a(lVar1,lVar1 + 0x30,param_2,*(char *)(param_1 + 0x8d8) == '\x01');
  uVar5 = iVar6 - 1;
  uVar2 = iVar3 + param_3;
  if ((int)uVar5 <= iVar3 + param_3) {
    uVar2 = uVar5;
  }
  uVar4 = 0;
  if (0 < (int)uVar2) {
    uVar4 = (ulonglong)uVar2;
  }
  local_68 = &local_41;
  local_41 = '\0';
  local_58 = *(double *)(*(longlong *)(lVar1 + 0x30) + 0x38 + uVar4 * 0x68) * (double)param_4;
  local_60 = (double)*(float *)(param_1 + 0x8cc) * (double)param_4;
  FUN_146a506b8(*(undefined8 *)(param_1 + 0x48),&local_50,*(longlong *)(lVar1 + 0x30) + uVar4 * 0x68
               );
  *param_5 = local_50;
  if (local_41 == '\x02') {
    iVar3 = (int)(local_50 >> 0x20);
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    *param_5 = local_50 & 0xffffffff | (ulonglong)(iVar6 - 1) << 0x20;
    *param_6 = 0x101;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae2dde FUN_146ae2dde body=197 status=ok
// SIG undefined FUN_146ae2dde(void)

ulonglong * FUN_146ae2dde(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146ae2c0a();
  uVar4 = (ulonglong)*(uint *)((longlong)param_2 + 4);
  if (*(uint *)((longlong)param_2 + 4) != 0) {
    uVar5 = (ulonglong)(uint)*param_2;
    while( true ) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x28);
      if (iVar1 == 0) break;
      iVar2 = *(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20) +
                        (longlong)(int)uVar5 * 0x70) + 8);
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar6 = iVar2 + -1;
      }
      if ((iVar6 == (int)uVar4 && iVar1 + -1 == (int)uVar5) || (iVar6 == (int)uVar4)) break;
      cVar3 = FUN_146ae2b68(param_1,param_2);
      if (cVar3 != '\0') break;
      FUN_146ae2c0a(param_1,&local_30,param_2,param_4);
      *param_2 = local_30;
      uVar4 = local_30 >> 0x20;
      uVar5 = local_30;
      if (uVar4 == 0) break;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae2ea4 FUN_146ae2ea4 body=271 status=ok
// SIG undefined FUN_146ae2ea4(void)

void FUN_146ae2ea4(undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined1 local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = *param_3;
  *(char *)(param_1 + 1) = param_4;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  uVar5 = FUN_146a5093a(param_2,(longlong *)(param_2 + 0x30),param_3,param_4 == '\x01');
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_2 + 0x38))) {
    lVar3 = *(longlong *)(param_2 + 0x30);
    lVar6 = (longlong)*(int *)(lVar3 + 8 + (ulonglong)uVar5 * 0x68);
    if (lVar6 != 0) {
      iVar2 = *(int *)((longlong)param_3 + 4);
      lVar3 = *(longlong *)(lVar3 + (ulonglong)uVar5 * 0x68);
      lVar7 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar7);
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
        if ((local_40 <= iVar2) && (iVar2 < local_3c)) {
          plVar4 = *(longlong **)(lVar3 + lVar7);
          (**(code **)(*plVar4 + 0x20))(plVar4,local_60);
          *(undefined1 *)((longlong)param_1 + 9) = local_48;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)local_50 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_50 + 0x10))(local_50);
              }
            }
          }
          break;
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar6 * 0x10 != lVar7);
    }
  }
  uVar8 = (**(code **)(*DAT_14c98e618 + 0x60))();
  param_1[2] = uVar8;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae2fb4 FUN_146ae2fb4 body=153 status=ok
// SIG undefined FUN_146ae2fb4(void)

void FUN_146ae2fb4(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x898);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x8a0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar3 = (longlong)*(int *)(param_1 + 0x8a0) << 5;
    do {
      if ((-1 < *piVar4) && (*piVar4 < *(int *)(lVar1 + 0x28))) {
        FUN_146a5063a(*(undefined8 *)(param_1 + 0x48),piVar4);
      }
      piVar4 = piVar4 + 8;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x8a0);
    piVar4 = *(int **)(param_1 + 0x898);
  }
  FUN_1410f0dc1(piVar4,uVar2);
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  if (*(int *)(param_1 + 0x8a4) != 0) {
    FUN_146a7559c(param_1 + 0x898,0);
  }
  FUN_146af9c38(param_1 + 0x6e8);
  return;
}



// FUNCTION 146ae304e FUN_146ae304e body=204 status=ok
// SIG undefined FUN_146ae304e(void)

void FUN_146ae304e(undefined8 *param_1)

{
  longlong **pplVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x128);
  *(int *)(param_1 + 0x128) = iVar2 + 1;
  if (iVar2 < 1) {
    cVar3 = (*(code *)**(undefined8 **)*param_1)();
    if (cVar3 == '\0') {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      FUN_144a5dc74(&local_58);
      uStack_40 = uStack_40 & 0xffffffffffffff00;
      local_28 = 0;
      pplVar1 = (longlong **)(param_1 + 0x120);
      local_38 = 0;
      uStack_30 = uStack_30 & 0xffffffffffff0000;
      if (&local_58 != pplVar1) {
        FUN_146af9dc0(pplVar1,&local_58);
        if ((uStack_40 & 1) != 0) {
          uStack_40 = uStack_40 & 0xffffffffffffff00;
        }
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      FUN_146adec1a(param_1,pplVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae311c FUN_146ae311c body=480 status=ok
// SIG undefined FUN_146ae311c(void)

void FUN_146ae311c(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x128);
  *(int *)(param_1 + 0x128) = iVar3 + -1;
  if (1 < iVar3) goto LAB_146ae3149;
  FUN_146adb77e(param_1,local_48);
  puVar4 = (undefined8 *)FUN_1447a1f4a(local_48);
  plVar1 = param_1 + 0x120;
  puVar5 = (undefined8 *)FUN_1447a1f4a(plVar1);
  iVar3 = *(int *)(puVar4 + 1);
  if (iVar3 == *(int *)(puVar5 + 1)) {
    if ((1 < iVar3) && (iVar3 = wcscmp((wchar_t *)*puVar4,(wchar_t *)*puVar5), iVar3 != 0)) {
LAB_146ae3201:
      if ((*(int *)(param_1 + 200) == 0) ||
         (((longlong *)param_1[199] == (longlong *)0x0 ||
          (cVar2 = (**(code **)(*(longlong *)param_1[199] + 0x30))(), cVar2 == '\0')))) {
        FUN_146a89fb8(param_1 + 0xc4,local_48);
      }
      FUN_146ae32fe(param_1,plVar1);
      (**(code **)(*(longlong *)param_1[9] + 8))();
      (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,local_48);
      local_30 = *(undefined4 *)(param_1 + 0x11a);
      iStack_2c = (uint)(*(char *)(param_1 + 0x11b) == '\x01') + *(int *)((longlong)param_1 + 0x8d4)
      ;
      if (iStack_2c < 1) {
        iStack_2c = 0;
      }
      (**(code **)(*(longlong *)*param_1 + 0xb0))();
      local_38 = *(undefined4 *)(param_1 + 0x11a);
      local_34 = *(int *)((longlong)param_1 + 0x8d4) + (uint)(*(char *)(param_1 + 0x11b) == '\x01');
      if (local_34 < 1) {
        local_34 = 0;
      }
      FUN_146a50afa(param_1[9],&local_30);
      *(float *)((longlong)param_1 + 0x8cc) = (float)(double)CONCAT44(iStack_2c,local_30);
      cVar2 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
      if (cVar2 != '\0') {
        FUN_146ade2ee(param_1,local_48);
      }
    }
  }
  else if (*(int *)(puVar5 + 1) + iVar3 != 1) goto LAB_146ae3201;
  if (*(char *)(param_1 + 0x127) == '\x01') {
    if (*(char *)(param_1 + 0x123) == '\x01') {
      *(undefined1 *)(param_1 + 0x123) = 0;
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x127) = 0;
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_146ae3149:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ae32fe FUN_146ae32fe body=305 status=ok
// SIG undefined FUN_146ae32fe(void)

void FUN_146ae32fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x8f8) != -1) {
    if (*(int *)(param_1 + 0x8f0) != *(int *)(param_1 + 0x8f8)) {
      FUN_146af9e26(param_1 + 0x8e8);
      FUN_146af9e82(param_1 + 0x8e8);
    }
    *(undefined4 *)(param_1 + 0x8f8) = 0xffffffff;
  }
  plVar1 = (longlong *)(param_1 + 0x8e8);
  iVar7 = *(int *)(param_1 + 0x8f0);
  *(uint *)(param_1 + 0x8f0) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x8f4) < iVar7 + 1U) {
    FUN_146af9f28(plVar1,iVar7);
  }
  lVar2 = *plVar1 + (longlong)iVar7 * 0x38;
  plVar3 = (longlong *)*param_2;
  *(longlong **)(*plVar1 + (longlong)iVar7 * 0x38) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(lVar2 + 8) = (int)param_2[1];
  lVar6 = param_2[3];
  *(char *)(lVar2 + 0x18) = (char)lVar6;
  if ((char)lVar6 == '\x01') {
    *(longlong *)(lVar2 + 0x10) = param_2[2];
  }
  *(longlong *)(lVar2 + 0x30) = param_2[6];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar6 = param_2[5];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(lVar2 + 0x20) = (int)param_2[4];
  *(undefined4 *)(lVar2 + 0x24) = uVar4;
  *(int *)(lVar2 + 0x28) = (int)lVar6;
  *(undefined4 *)(lVar2 + 0x2c) = uVar5;
  if (*(int *)(param_1 + 0x8f0) < 100) {
    return;
  }
  plVar3 = (longlong *)*plVar1;
  if ((char)plVar3[3] == '\x01') {
    *(undefined1 *)(plVar3 + 3) = 0;
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x10))();
  }
  iVar7 = 0;
  iVar8 = *(int *)(param_1 + 0x8f0) + -1;
  if (iVar8 != 0) {
    memmove(plVar3,plVar3 + 7,(longlong)iVar8 * 0x38);
    iVar7 = *(int *)(param_1 + 0x8f0) + -1;
  }
  *(int *)(param_1 + 0x8f0) = iVar7;
  FUN_146af9e82(plVar1);
  return;
}



// FUNCTION 146ae3430 FUN_146ae3430 body=350 status=ok
// SIG undefined FUN_146ae3430(void)

undefined8 FUN_146ae3430(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x640) != 0) && (*(longlong **)(param_1 + 0x638) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x638) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x688) != 0) && (*(longlong **)(param_1 + 0x680) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x6b0) != 0) && (*(longlong **)(param_1 + 0x6a8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6a8) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x750) != 0) && (*(longlong **)(param_1 + 0x748) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x768) != 0) && (*(longlong **)(param_1 + 0x760) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x780) != 0) && (*(longlong **)(param_1 + 0x778) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x7a8) != 0) && (*(longlong **)(param_1 + 0x7a0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x7c0) != 0) && (*(longlong **)(param_1 + 0x7b8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x30))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x7d8) != 0) && (*(longlong **)(param_1 + 2000) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146ae3583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x30))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 146ae358e FUN_146ae358e body=1813 status=ok
// SIG undefined FUN_146ae358e(void)

void FUN_146ae358e(undefined8 *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_a8;
  double local_a0;
  undefined1 local_94;
  char local_93;
  undefined2 local_92;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)((longlong)param_1 + 0x983) == '\x01') {
    FUN_146ad9f16(param_1,param_1 + 0x131,0);
    plVar16 = (longlong *)*param_1;
    FUN_146adb77e(param_1,&local_c0);
    (**(code **)(*plVar16 + 0xa0))(plVar16,&local_c0);
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    *(undefined1 *)((longlong)param_1 + 0x983) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x984) == '\x01') {
    plVar16 = (longlong *)*param_1;
    uVar24 = *(undefined4 *)(param_1 + 0x133);
    FUN_146adb77e(param_1,&local_c0);
    (**(code **)(*plVar16 + 0xa8))(plVar16,&local_c0,uVar24);
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    *(undefined1 *)((longlong)param_1 + 0x984) = 0;
  }
  if ((param_1[0x109] != 0) && (param_1[0x107] != 0)) {
    lVar17 = param_1[0x107] + 0x20;
    cVar11 = FUN_146af7a0c(lVar17,param_2);
    if (cVar11 == '\0') {
      FUN_144b00ffc(lVar17,param_2);
      (**(code **)(*(longlong *)param_1[0x109] + 8))((longlong *)param_1[0x109],1);
    }
  }
  cVar11 = FUN_1469ab042(DAT_14c98e618);
  if (cVar11 == '\0') {
LAB_146ae3753:
    local_93 = *(char *)((longlong)param_1 + 0x99d);
    if (local_93 == '\x01') {
      local_94 = *(undefined1 *)((longlong)param_1 + 0x99c);
    }
    FUN_1428ff148(param_1[9],&local_94);
    FUN_146ade2b8(param_1);
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,&local_c0);
    FUN_14287b7b4(local_c0,&local_a8);
    plVar16 = local_b8;
    if (local_a8._1_1_ == '\0') {
      bVar8 = true;
      if (*(char *)(param_1 + 0x137) == '\0') {
        if ((param_1[0x138] == 0) || (param_1[0x139] == 0)) {
          bVar8 = false;
        }
        else {
          bVar8 = 0 < *(int *)(param_1[0x139] + 8);
        }
      }
    }
    else {
      local_a8._0_2_ = (ushort)(byte)local_a8;
      bVar8 = true;
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if (!bVar8) goto LAB_146ae3753;
    local_92 = 0x100;
    FUN_1428ff148(param_1[9]);
    FUN_146adb7f0(param_1,0,0);
  }
  if (*(char *)(param_1 + 0x13a) == '\x01') {
    *(undefined1 *)(param_1 + 0x13a) = 0;
    plVar16 = (longlong *)param_1[0x107];
    if (plVar16 != (longlong *)0x0) {
      iVar6 = *(int *)((longlong)param_1 + 0x9d4);
      iVar7 = *(int *)(param_1 + 0x13b);
      iVar19 = iVar6 - iVar7;
      bVar20 = iVar19 == 0;
      bVar8 = iVar6 < iVar7;
      if (bVar20 || bVar8) {
        iVar19 = iVar7 - iVar6;
        iVar7 = iVar6;
      }
      (**(code **)(*plVar16 + 0x28))(plVar16,iVar7,iVar19,!bVar20 && !bVar8);
    }
  }
  uVar14 = FUN_140e82300();
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    uVar14 = FUN_14142e2d2(param_1 + 0xd2);
  }
  puVar3 = param_1 + 0xd7;
  cVar11 = FUN_14010cac8(puVar3,uVar14);
  if (cVar11 == '\0') {
    cVar11 = FUN_1409d1136(puVar3,uVar14);
    if (cVar11 == '\0') {
      FUN_146adc6c6(param_1,uVar14,1,0);
    }
    FUN_1409d10d4(&local_c0,uVar14);
    FUN_14010d4a2(puVar3,&local_c0);
    if (local_b8 != (longlong *)0x0) {
      local_a8 = local_b8;
      FUN_1447a2442();
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  FUN_146a501b4(param_1 + 0xd);
  fVar21 = (float)FUN_146a5024e();
  if (((*(int *)(param_1 + 0xed) != 0) && ((longlong *)param_1[0xec] != (longlong *)0x0)) &&
     (cVar11 = (**(code **)(*(longlong *)param_1[0xec] + 0x30))(), cVar11 != '\0')) {
    if (*(int *)(param_1 + 0xed) == 0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = (longlong *)param_1[0xec];
    }
    uVar12 = (**(code **)(*plVar16 + 0x58))();
    *(undefined1 *)(param_1 + 0xeb) = uVar12;
  }
  if (((*(char *)(param_1 + 0xeb) != '\x01') || (*(float *)(param_1 + 0x134) != 0.0)) ||
     ((NAN(*(float *)(param_1 + 0x134)) ||
      ((*(float *)((longlong)param_1 + 0x9a4) != 0.0 || (NAN(*(float *)((longlong)param_1 + 0x9a4)))
       ))))) {
    cVar11 = (**(code **)(*(longlong *)*param_1 + 0x10))();
    puVar15 = &DAT_14c96b1e1;
    if (cVar11 != '\0') {
      puVar15 = &DAT_14c96b238;
    }
  }
  else {
    puVar15 = &DAT_14c96b1e1;
  }
  uVar18 = CONCAT71((int7)((ulonglong)uVar14 >> 8),*puVar15);
  if (*(char *)((longlong)param_1 + 0x8bc) != '\x01') goto LAB_146ae39ec;
  lVar17 = param_1[9];
  uVar13 = FUN_146a5093a(lVar17,(longlong *)(lVar17 + 0x30),param_1 + 0x116,
                         *(char *)(param_1 + 0x117) == '\x01');
  if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar17 + 0x38))) {
    lVar17 = *(longlong *)(lVar17 + 0x30);
    dVar4 = *(double *)(lVar17 + 0x38 + (ulonglong)uVar13 * 0x68);
    dVar5 = *(double *)(lVar17 + 0x48 + (ulonglong)uVar13 * 0x68);
    dVar9 = 1.0 / (double)*(float *)(param_1[9] + 0x94);
    fVar25 = (float)(dVar4 * dVar9);
    FUN_146a50afa(param_1[9],&local_c0,param_1 + 0x116,*(char *)(param_1 + 0x117) == '\x01');
    dVar10 = (1.0 / (double)*(float *)(param_1[9] + 0x94)) * (double)local_c0;
    fVar22 = (float)dVar10;
    if (0.0 <= fVar22) {
      fVar22 = (float)(dVar10 + (double)fVar21);
      if (*param_2 < fVar22) {
        fVar22 = fVar22 - *param_2;
        goto LAB_146ae39ad;
      }
    }
    else {
LAB_146ae39ad:
      *(float *)(param_1 + 0x115) = fVar22 + *(float *)(param_1 + 0x115);
    }
    if (0.0 <= fVar25) {
      fVar21 = (float)((dVar5 + dVar4) * dVar9);
      if (param_2[1] < fVar21) {
        *(float *)((longlong)param_1 + 0x8ac) =
             (fVar21 - param_2[1]) + *(float *)((longlong)param_1 + 0x8ac);
      }
    }
    else {
      *(float *)((longlong)param_1 + 0x8ac) = fVar25 + *(float *)((longlong)param_1 + 0x8ac);
    }
  }
  if (*(char *)((longlong)param_1 + 0x8bc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x8bc) = 0;
  }
LAB_146ae39ec:
  fVar23 = (1.0 / *(float *)(param_1[9] + 0x94)) * *(float *)(param_1[9] + 0xbc);
  fVar25 = 0.0;
  uVar13 = -(uint)(0.0 < *param_2);
  fVar21 = (float)(~uVar13 & 0x3f800000 |
                  (~-(uint)(0.0 < fVar23) & 0x3f800000 |
                  (uint)(*param_2 / fVar23) & -(uint)(0.0 < fVar23)) & uVar13);
  fVar22 = 0.0;
  if ((0.0 < fVar23) && (fVar21 < 1.0)) {
    fVar22 = *(float *)(param_1 + 0x115) / fVar23;
    if (1.0 - fVar21 <= *(float *)(param_1 + 0x115) / fVar23) {
      fVar22 = 1.0 - fVar21;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
  }
  *(float *)(param_1 + 0x115) = fVar23 * fVar22;
  uVar24 = (**(code **)(*(longlong *)*param_1 + 0xb8))
                     ((longlong *)*param_1,fVar22,fVar21,uVar18 & 0xffffffff);
  *(undefined4 *)(param_1 + 0x115) = uVar24;
  fVar22 = (1.0 / *(float *)(param_1[9] + 0x94)) * *(float *)(param_1[9] + 0xc4);
  uVar13 = -(uint)(0.0 < param_2[1]);
  fVar21 = (float)(~uVar13 & 0x3f800000 |
                  (~-(uint)(0.0 < fVar22) & 0x3f800000 |
                  (uint)(param_2[1] / fVar22) & -(uint)(0.0 < fVar22)) & uVar13);
  if ((0.0 < fVar22) && (fVar21 < 1.0)) {
    fVar25 = *(float *)((longlong)param_1 + 0x8ac) / fVar22;
    if (1.0 - fVar21 <= fVar25) {
      fVar25 = 1.0 - fVar21;
    }
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
  }
  *(float *)((longlong)param_1 + 0x8ac) = fVar22 * fVar25;
  fVar21 = (float)(**(code **)(*(longlong *)*param_1 + 0xc0))
                            ((longlong *)*param_1,fVar25,fVar21,uVar18 & 0xffffffff);
  *(float *)((longlong)param_1 + 0x8ac) = fVar21;
  local_b8 = (longlong *)((double)fVar21 * (double)*(float *)(param_1[9] + 0x94));
  local_c0 = (longlong *)
             ((double)*(float *)(param_1 + 0x115) * (double)*(float *)(param_1[9] + 0x94));
  local_a0 = (double)param_2[1];
  local_a8 = (longlong *)(double)*param_2;
  FUN_140a8f05a();
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ae3ca4 FUN_146ae3ca4 body=345 status=ok
// SIG undefined FUN_146ae3ca4(void)

void FUN_146ae3ca4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x9a0) = *param_3;
  cVar3 = FUN_146a52d0a(*(undefined8 *)(param_1 + 0x48));
  if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    puVar4 = (undefined8 *)(param_1 + 200);
    cVar3 = *(char *)(param_1 + 0xd8);
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        puVar4 = (undefined8 *)FUN_1400c06fe(puVar4);
      }
      else if (cVar3 == '\x03') {
        puVar4 = (undefined8 *)(param_7 + 0x20);
      }
      else {
        puVar4 = (undefined8 *)(param_7 + 0x10);
      }
    }
    uVar2 = *puVar4;
    uVar1 = *(undefined4 *)(puVar4 + 1);
    FUN_140a5e6b8(param_1 + 0x340,param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x3a8) = uVar2;
    *(undefined4 *)(param_1 + 0x3b0) = uVar1;
    *(undefined4 *)(param_1 + 0x3b4) = 0x3eb33333;
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    FUN_146ae3dfe(*(undefined8 *)(param_1 + 0x58),param_1 + 0x340);
    param_6 = FUN_140a8ee82(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4,param_5,param_6,
                            param_7,param_8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))
            (*(longlong **)(param_1 + 0x48),param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return;
}



// FUNCTION 146ae3dfe FUN_146ae3dfe body=191 status=ok
// SIG undefined FUN_146ae3dfe(void)

void FUN_146ae3dfe(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_338 [32];
  longlong local_318 [2];
  undefined1 local_308 [736];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar3 = FUN_1428fe7dc(*param_1);
  cVar2 = FUN_146ae6de8(uVar3,param_2);
  if (cVar2 == '\0') {
    lVar1 = *param_1;
    FUN_140e9ea3a(local_308,param_2);
    FUN_140a5e6b8(lVar1 + 0x160,local_308);
    FUN_140e9e952(local_308);
    local_318[0] = 0;
    local_318[1] = 0;
    (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],local_318,*param_1);
    FUN_1409d1288(param_1,local_318);
    if (local_318[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae3ebe FUN_146ae3ebe body=1160 status=ok
// SIG undefined FUN_146ae3ebe(void)

void FUN_146ae3ebe(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_146a501b4(param_1 + 0x68);
  fVar8 = (float)FUN_146a5024e();
  if (((*(int *)(param_1 + 0x750) == 0) || (*(longlong **)(param_1 + 0x748) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x30))(), cVar3 == '\0')) {
    fVar9 = *(float *)(param_1 + 0x740);
    uVar10 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x750) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x748);
    }
    uVar11 = (**(code **)(*plVar6 + 0x58))();
    fVar9 = (float)uVar11;
    uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
    *(float *)(param_1 + 0x740) = fVar9;
  }
  if (((*(int *)(param_1 + 0x768) != 0) && (*(longlong **)(param_1 + 0x760) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x30))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x768) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x760);
    }
    uVar4 = (**(code **)(*plVar6 + 0x58))();
    *(undefined1 *)(param_1 + 0x758) = uVar4;
  }
  if ((*(char *)(param_1 + 0x758) == '\x01') && (fVar1 = *(float *)(param_1 + 0x9a0), 1.0 <= fVar1))
  {
    if (1.0 <= fVar9) {
      if (fVar1 <= fVar9) {
        fVar9 = fVar1;
      }
    }
    else {
      uVar10 = 0;
      fVar9 = fVar1;
    }
  }
  pfVar5 = (float *)FUN_140133f88(param_1 + 0x788);
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[3];
  fVar12 = *pfVar5 + fVar8;
  fVar8 = fVar8 + pfVar5[2];
  FUN_1409d1068(*(undefined8 *)(param_1 + 0x48),param_2);
  FUN_1409d0fb6(*(undefined8 *)(param_1 + 0x48),CONCAT44(uVar10,fVar9));
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (((*(int *)(param_1 + 0x780) != 0) && (*(longlong **)(param_1 + 0x778) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x30))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x780) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x778);
    }
    uVar4 = (**(code **)(*plVar6 + 0x58))();
    *(undefined1 *)(param_1 + 0x770) = uVar4;
  }
  if (*(char *)(lVar7 + 0x9c) != *(char *)(param_1 + 0x770)) {
    *(char *)(lVar7 + 0x9c) = *(char *)(param_1 + 0x770);
    *(byte *)(lVar7 + 0x90) = *(byte *)(lVar7 + 0x90) | 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if ((*(float *)(lVar7 + 0xa0) == fVar12) && (!NAN(*(float *)(lVar7 + 0xa0)) && !NAN(fVar12))) {
    if ((*(float *)(lVar7 + 0xa8) == fVar8) && (!NAN(*(float *)(lVar7 + 0xa8)) && !NAN(fVar8))) {
      if ((*(float *)(lVar7 + 0xa4) == fVar1) && (!NAN(*(float *)(lVar7 + 0xa4)) && !NAN(fVar1))) {
        if ((*(float *)(lVar7 + 0xac) == fVar2) && (!NAN(*(float *)(lVar7 + 0xac)) && !NAN(fVar2)))
        goto LAB_146ae40bd;
      }
    }
  }
  *(float *)(lVar7 + 0xa0) = fVar12;
  *(float *)(lVar7 + 0xa4) = fVar1;
  *(float *)(lVar7 + 0xa8) = fVar8;
  *(float *)(lVar7 + 0xac) = fVar2;
  *(byte *)(lVar7 + 0x90) = *(byte *)(lVar7 + 0x90) | 1;
  lVar7 = *(longlong *)(param_1 + 0x48);
LAB_146ae40bd:
  if (((*(int *)(param_1 + 0x7d8) != 0) && (*(longlong **)(param_1 + 2000) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x30))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x7d8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 2000);
    }
    uVar10 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_1 + 0x7c8) = uVar10;
  }
  fVar8 = *(float *)(param_1 + 0x7c8);
  if ((*(float *)(lVar7 + 0xb4) != fVar8) || (NAN(*(float *)(lVar7 + 0xb4)) || NAN(fVar8))) {
    *(float *)(lVar7 + 0xb4) = fVar8;
    *(byte *)(lVar7 + 0x90) = *(byte *)(lVar7 + 0x90) | 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (((*(int *)(param_1 + 0x7f0) != 0) && (*(longlong **)(param_1 + 0x7e8) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x30))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x7f0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x7e8);
    }
    uVar4 = (**(code **)(*plVar6 + 0x58))();
    *(undefined1 *)(param_1 + 0x7e0) = uVar4;
  }
  if (*(char *)(lVar7 + 0xb8) != *(char *)(param_1 + 0x7e0)) {
    *(char *)(lVar7 + 0xb8) = *(char *)(param_1 + 0x7e0);
    *(byte *)(lVar7 + 0x90) = *(byte *)(lVar7 + 0x90) | 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (((*(int *)(param_1 + 0x7c0) != 0) && (*(longlong **)(param_1 + 0x7b8) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x30))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x7c0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x7b8);
    }
    uVar10 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_1 + 0x7b0) = uVar10;
  }
  if (*(int *)(lVar7 + 0xb0) != *(int *)(param_1 + 0x7b0)) {
    *(int *)(lVar7 + 0xb0) = *(int *)(param_1 + 0x7b0);
    *(byte *)(lVar7 + 0x90) = *(byte *)(lVar7 + 0x90) | 1;
  }
  local_90 = (double)*(float *)(*(longlong *)(param_1 + 0x48) + 0x94);
  local_88 = (double)*(float *)(param_1 + 0x8ac) * local_90;
  local_90 = (double)*(float *)(param_1 + 0x8a8) * local_90;
  local_98 = (double)*(float *)(param_1 + 0x9a4);
  local_a0 = (double)*(float *)(param_1 + 0x9a0);
  FUN_140a8f05a();
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_c8);
  }
                    /* WARNING: Could not recover jumptable at 0x000146ae4276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
  return;
}



// FUNCTION 146ae4348 FUN_146ae4348 body=1321 status=ok
// SIG undefined FUN_146ae4348(void)

double * FUN_146ae4348(longlong param_1,double *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  longlong *plVar18;
  double dVar19;
  undefined1 auStack_168 [35];
  undefined1 local_145;
  undefined4 local_144;
  undefined8 local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined1 local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  fVar14 = (float)FUN_146a501b4(param_1 + 0x68);
  fVar15 = (float)FUN_146a5024e();
  if ((*(int *)(param_1 + 0x750) != 0) && (*(longlong **)(param_1 + 0x748) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x30))();
    if (cVar7 != '\0') {
      if (*(int *)(param_1 + 0x750) == 0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        plVar18 = *(longlong **)(param_1 + 0x748);
      }
      fVar16 = (float)(**(code **)(*plVar18 + 0x58))();
      *(float *)(param_1 + 0x740) = fVar16;
      goto LAB_146ae442a;
    }
  }
  fVar16 = *(float *)(param_1 + 0x740);
LAB_146ae442a:
  cVar7 = FUN_146a52d0a(*(undefined8 *)(param_1 + 0x48));
  if ((cVar7 == '\0') || (*(longlong *)(param_1 + 0x58) == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    dVar19 = (double)(1.0 / *(float *)(lVar5 + 0x94));
    local_e8 = (double)*(float *)(lVar5 + 0xc4) * dVar19;
    plVar18 = (longlong *)((double)*(float *)(lVar5 + 0xbc) * dVar19);
    if ((0.0 < fVar16) && ((double)fVar16 < (double)plVar18)) {
      FUN_146a533c0(lVar5,&local_138);
      local_e8 = (double)CONCAT44(uStack_12c,local_130);
      plVar18 = local_138;
    }
    fVar15 = (float)(double)plVar18;
  }
  else {
    pfVar11 = (float *)FUN_140133f88(param_1 + 0x788);
    fVar1 = pfVar11[1];
    fVar2 = *pfVar11;
    fVar3 = pfVar11[2];
    fVar4 = pfVar11[3];
    local_140 = *(undefined8 *)(param_1 + 0x58);
    if ((*(int *)(param_1 + 0x7c0) != 0) && (*(longlong **)(param_1 + 0x7b8) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x30))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x7c0) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0x7b8);
        }
        uVar10 = (**(code **)(*plVar18 + 0x58))();
        *(undefined4 *)(param_1 + 0x7b0) = uVar10;
      }
    }
    local_144 = *(undefined4 *)(param_1 + 0x7b0);
    if ((*(int *)(param_1 + 0x7f0) != 0) && (*(longlong **)(param_1 + 0x7e8) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x30))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x7f0) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0x7e8);
        }
        uVar8 = (**(code **)(*plVar18 + 0x58))();
        *(undefined1 *)(param_1 + 0x7e0) = uVar8;
      }
    }
    local_145 = *(undefined1 *)(param_1 + 0x7e0);
    if ((*(int *)(param_1 + 0x7d8) != 0) && (*(longlong **)(param_1 + 2000) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x30))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x7d8) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 2000);
        }
        uVar10 = (**(code **)(*plVar18 + 0x58))();
        *(undefined4 *)(param_1 + 0x7c8) = uVar10;
      }
    }
    uVar10 = *(undefined4 *)(param_1 + 0x7c8);
    if ((*(int *)(param_1 + 0x780) != 0) && (*(longlong **)(param_1 + 0x778) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x30))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x780) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0x778);
        }
        uVar8 = (**(code **)(*plVar18 + 0x58))();
        *(undefined1 *)(param_1 + 0x770) = uVar8;
      }
    }
    uVar8 = *(undefined1 *)(param_1 + 0x770);
    if ((*(int *)(param_1 + 0x768) != 0) && (*(longlong **)(param_1 + 0x760) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x30))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x768) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0x760);
        }
        uVar9 = (**(code **)(*plVar18 + 0x58))();
        *(undefined1 *)(param_1 + 0x758) = uVar9;
      }
    }
    uVar9 = *(undefined1 *)(param_1 + 0x758);
    if ((*(int *)(param_1 + 0x750) != 0) && (*(longlong **)(param_1 + 0x748) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x30))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x750) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(param_1 + 0x748);
        }
        uVar17 = (**(code **)(*plVar18 + 0x58))();
        *(undefined4 *)(param_1 + 0x740) = uVar17;
      }
    }
    uVar17 = *(undefined4 *)(param_1 + 0x740);
    plVar12 = (longlong *)FUN_140e82300();
    plVar13 = (longlong *)FUN_14142e2d2(param_1 + 0x668);
    plVar18 = (longlong *)*plVar13;
    local_138 = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
    local_130 = (undefined4)plVar13[1];
    plVar13 = (longlong *)*plVar12;
    local_128 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
    uVar6 = local_140;
    local_120 = (undefined4)plVar12[1];
    local_100 = local_145;
    local_fe = 0;
    local_fc = local_144;
    local_118 = fVar2 + fVar15;
    local_114 = fVar1;
    local_110 = fVar15 + fVar3;
    local_10c = fVar4;
    local_108 = uVar17;
    local_104 = uVar10;
    local_ff = uVar8;
    local_f8 = uVar9;
    FUN_146ae6d14(local_140,param_1 + 0x340);
    FUN_1409d0734(uVar6,&local_f0,&local_138,param_3);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    fVar15 = (float)(~-(uint)(0.0 < fVar16) & (uint)(float)local_f0 |
                    (uint)fVar16 & -(uint)(0.0 < fVar16));
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  fVar16 = *(float *)(lVar5 + 0xa0) + *(float *)(lVar5 + 0xa8);
  if (fVar16 <= fVar15) {
    fVar16 = fVar15;
  }
  fVar15 = *(float *)(lVar5 + 0xa4) + *(float *)(lVar5 + 0xac);
  if (fVar15 <= (float)local_e8) {
    fVar15 = (float)local_e8;
  }
  if (fVar14 <= fVar15) {
    fVar14 = fVar15;
  }
  *param_2 = (double)fVar16;
  param_2[1] = (double)fVar14;
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae4872 FUN_146ae4872 body=67 status=ok
// SIG undefined FUN_146ae4872(void)

undefined8
FUN_146ae4872(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  FUN_146ae6d14(param_1,param_5);
  FUN_1409d0734(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 146ae48b6 FUN_146ae48b6 body=50 status=ok
// SIG undefined FUN_146ae48b6(void)

void FUN_146ae48b6(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_146a52d0a(*(undefined8 *)(param_1 + 0x48));
  if ((cVar1 == '\0') || (puVar2 = *(undefined8 **)(param_1 + 0x58), puVar2 == (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)(param_1 + 0x48);
  }
  FUN_146a4d894(*puVar2);
  return;
}



// FUNCTION 146ae48e8 FUN_146ae48e8 body=71 status=ok
// SIG undefined FUN_146ae48e8(void)

void FUN_146ae48e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_146a52d0a(*(undefined8 *)(param_1 + 0x48));
  if ((cVar1 == '\0') || (puVar2 = *(undefined8 **)(param_1 + 0x58), puVar2 == (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x000146ae492c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar2 + 0x38))((longlong *)*puVar2,param_2,param_3);
  return;
}



// FUNCTION 146ae4930 FUN_146ae4930 body=2158 status=ok
// SIG undefined FUN_146ae4930(void)

undefined8 FUN_146ae4930(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_228 [32];
  wchar_t **local_208;
  undefined1 *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  longlong *local_170 [2];
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined1 local_11c [4];
  wchar_t *local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined **local_d0 [13];
  longlong *local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_200 = (undefined1 *)FUN_140a2b044(&DAT_14c96b348);
  if (local_200 == (undefined1 *)0x0) {
    local_200 = (undefined1 *)DAT_14c96b350;
  }
  local_e0 = *param_3;
  local_d8 = param_3[1];
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = *(undefined8 *)(param_1 + 0x9a8);
  local_e8 = *(longlong *)(param_1 + 0x9b0);
  if (local_e8 != 0) {
    LOCK();
    *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
    UNLOCK();
  }
  local_1e8 = 1;
  local_1f8 = CONCAT71(local_1f8._1_7_,1);
  local_208 = (wchar_t **)CONCAT71(local_208._1_7_,1);
  local_1f0 = 0;
  FUN_1469d0642(local_d0,1,&local_f0,&local_e0);
  local_118 = L"Heading";
  local_110 = 7;
  FUN_1446e940c(local_148,&local_118);
  local_118 = L"EditableTextContextMenu";
  local_110 = 0x17;
  FUN_1446e940c(local_11c,&local_118);
  FUN_140208bae(local_170,local_11c,local_148,L"Modify Text");
  FUN_14023423e(&local_118,local_170);
  local_108 = 1;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_1446ddc76(&local_128,"EditText",1);
  FUN_146a0d4b6(local_d0,local_128,&local_118);
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_142877ef0(local_148);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_144a5dc74(local_170);
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar1 = FUN_146ada658();
  local_180 = *(undefined8 *)(lVar1 + 0xd0);
  local_178 = *(longlong *)(lVar1 + 0xd8);
  if (local_178 != 0) {
    LOCK();
    *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = 0;
  local_208 = &local_118;
  local_200 = local_148;
  FUN_146a0cfb2(local_d0,&local_180,0,local_170);
  FUN_1449db362(&local_158);
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_146a0d58a(local_d0);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_1446ddc76(&local_188,"EditableTextModify2",1);
  FUN_146a0d4b6(local_d0,local_188,&local_118);
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_142877ef0(local_148);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_144a5dc74(local_170);
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar1 = FUN_146ada658();
  local_198 = *(undefined8 *)(lVar1 + 0x90);
  local_190 = *(longlong *)(lVar1 + 0x98);
  if (local_190 != 0) {
    LOCK();
    *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = 0;
  local_208 = &local_118;
  local_200 = local_148;
  FUN_146a0cfb2(local_d0,&local_198,0,local_170);
  FUN_1449db362(&local_158);
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_142877ef0(local_148);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_144a5dc74(local_170);
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar1 = FUN_146ada658();
  local_1a8 = *(undefined8 *)(lVar1 + 0xa0);
  local_1a0 = *(longlong *)(lVar1 + 0xa8);
  if (local_1a0 != 0) {
    LOCK();
    *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = 0;
  local_208 = &local_118;
  local_200 = local_148;
  FUN_146a0cfb2(local_d0,&local_1a8,0,local_170);
  FUN_1449db362(&local_158);
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_142877ef0(local_148);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_144a5dc74(local_170);
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar1 = FUN_146ada658();
  local_1b8 = *(undefined8 *)(lVar1 + 0xb0);
  local_1b0 = *(longlong *)(lVar1 + 0xb8);
  if (local_1b0 != 0) {
    LOCK();
    *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = 0;
  local_208 = &local_118;
  local_200 = local_148;
  FUN_146a0cfb2(local_d0,&local_1b8,0,local_170);
  FUN_1449db362(&local_158);
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_142877ef0(local_148);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_144a5dc74(local_170);
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar1 = FUN_146ada658();
  local_1c8 = *(undefined8 *)(lVar1 + 0xf0);
  local_1c0 = *(longlong *)(lVar1 + 0xf8);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = 0;
  local_208 = &local_118;
  local_200 = local_148;
  FUN_146a0cfb2(local_d0,&local_1c8,0,local_170);
  FUN_1449db362(&local_158);
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_146a0d58a(local_d0);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_1446ddc76(&local_1d0,"EditableTextModify3",1);
  FUN_146a0d4b6(local_d0,local_1d0,&local_118);
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_142877ef0(local_148);
  FUN_144a5dc74(&local_118);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_144a5dc74(local_170);
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar1 = FUN_146ada658();
  local_1e0 = *(undefined8 *)(lVar1 + 0x110);
  local_1d8 = *(longlong *)(lVar1 + 0x118);
  if (local_1d8 != 0) {
    LOCK();
    *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = 0;
  local_208 = &local_118;
  local_200 = local_148;
  FUN_146a0cfb2(local_d0,&local_1e0,0,local_170);
  FUN_1449db362(&local_158);
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_1449db362(&local_100);
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  FUN_146a0d58a(local_d0);
  FUN_146a0a3c8(local_d0,param_2,0);
  local_d0[0] = &PTR_FUN_149f05160;
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  FUN_1469e534a(local_d0);
  if ((local_50 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae51a0 FUN_146ae51a0 body=276 status=ok
// SIG undefined FUN_146ae51a0(void)

void FUN_146ae51a0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar4 + 0x640) == 0) ||
     (plVar1 = *(longlong **)(lVar4 + 0x638), plVar1 == (longlong *)0x0)) {
LAB_146ae52a0:
    FUN_146a89fb8(lVar4 + 0x620,param_2);
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (cVar3 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x18);
      goto LAB_146ae52a0;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(lVar4 + 0x988);
  if (plVar2 != plVar1) {
    *(longlong **)(lVar4 + 0x988) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(lVar4 + 0x990) = (int)param_2[1];
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x983) = 1;
  if (param_3 == '\0') {
    cVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x80))();
    uVar5 = 0;
  }
  else {
    if (param_3 != '\x01') {
      return;
    }
    cVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x80))();
    uVar5 = 1;
    if (cVar3 == '\x01') goto LAB_146ae527b;
    cVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x80))();
    uVar5 = 1;
  }
  if (cVar3 != '\x02') {
    return;
  }
LAB_146ae527b:
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x998) = uVar5;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x984) = 1;
  return;
}



// FUNCTION 146ae52d6 FUN_146ae52d6 body=26 status=ok
// SIG undefined FUN_146ae52d6(void)

undefined8 FUN_146ae52d6(longlong param_1,undefined8 param_2)

{
  FUN_146adc2a4(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 146ae52f0 FUN_146ae52f0 body=198 status=ok
// SIG undefined FUN_146ae52f0(void)

undefined8 FUN_146ae52f0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_48 [40];
  int local_20;
  int iStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_20 = *(int *)(lVar2 + 0x8d0);
  iVar6 = (uint)(*(char *)(lVar2 + 0x8d8) == '\x01') + *(int *)(lVar2 + 0x8d4);
  iStack_1c = 0;
  if (0 < iVar6) {
    iStack_1c = iVar6;
  }
  piVar5 = (int *)(lVar2 + 0x8c0);
  if (*(char *)(lVar2 + 0x8c8) == '\0') {
    piVar5 = &local_20;
  }
  local_18 = *(undefined8 *)piVar5;
  local_10 = CONCAT44(iStack_1c,local_20);
  iVar4 = (int)local_18;
  bVar8 = SBORROW4(iVar4,local_20);
  iVar6 = iVar4 - local_20;
  bVar7 = iVar4 == local_20;
  if (bVar7) {
    iVar4 = (int)((ulonglong)local_18 >> 0x20);
    bVar8 = SBORROW4(iVar4,iStack_1c);
    iVar6 = iVar4 - iStack_1c;
    bVar7 = iVar4 == iStack_1c;
    bVar3 = iStack_1c <= iVar4;
  }
  else {
    bVar3 = local_20 <= iVar4;
  }
  *param_2 = *(undefined4 *)((longlong)&local_18 + (ulonglong)bVar3 * 8 + 4);
  uVar1 = *(undefined4 *)((longlong)&local_18 + (ulonglong)(bVar7 || bVar8 != iVar6 < 0) * 8 + 4);
  *param_3 = uVar1;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae53b8 FUN_146ae53b8 body=26 status=ok
// SIG undefined FUN_146ae53b8(void)

undefined8 FUN_146ae53b8(longlong param_1,undefined8 param_2)

{
  FUN_146adc578(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 146ae53d2 FUN_146ae53d2 body=55 status=ok
// SIG undefined FUN_146ae53d2(void)

undefined8 FUN_146ae53d2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 8))();
  if (cVar1 != '\0') {
    return 4;
  }
                    /* WARNING: Could not recover jumptable at 0x000146ae5405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x68))();
  return uVar2;
}



// FUNCTION 146ae540a FUN_146ae540a body=30 status=ok
// SIG undefined FUN_146ae540a(void)

undefined8 FUN_146ae540a(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x70))();
  return param_2;
}



// FUNCTION 146ae545a FUN_146ae545a body=111 status=ok
// SIG undefined FUN_146ae545a(void)

undefined4 FUN_146ae545a(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_146a52f14(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_28);
    uVar1 = FUN_146a53454(local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae54ca FUN_146ae54ca body=400 status=ok
// SIG undefined FUN_146ae54ca(void)

void FUN_146ae54ca(longlong param_1,int *param_2,int *param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [3];
  int local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x8d0);
    local_50 = iVar5;
    iVar7 = (uint)(*(char *)(lVar1 + 0x8d8) == '\x01') + *(int *)(lVar1 + 0x8d4);
    iVar6 = 0;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    iStack_4c = iVar6;
    piVar9 = (int *)(lVar1 + 0x8c0);
    if (*(char *)(lVar1 + 0x8c8) == '\0') {
      piVar9 = &local_50;
    }
    uVar2 = *(undefined8 *)piVar9;
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_146a52f14(*(undefined8 *)(lVar1 + 0x48));
    iVar11 = (int)uVar2;
    iVar7 = (int)((ulonglong)uVar2 >> 0x20);
    if ((iVar5 == iVar11) && (iVar6 == iVar7)) {
      iVar5 = FUN_146a533fa(local_68,&local_50);
      iVar6 = 0;
      uVar8 = 0;
    }
    else {
      local_70 = CONCAT44(iStack_4c,local_50);
      bVar3 = iVar7 <= iStack_4c;
      bVar4 = iVar7 < iStack_4c;
      if (iVar11 != local_50) {
        bVar3 = iVar11 <= local_50;
        bVar4 = iVar11 < local_50;
      }
      puVar10 = &local_70;
      if (bVar4) {
        puVar10 = &local_78;
      }
      local_78 = uVar2;
      iVar5 = FUN_146a533fa(local_68,puVar10);
      bVar4 = (int)local_70 < (int)local_78;
      if ((int)local_78 == (int)local_70) {
        bVar4 = local_70._4_4_ < local_78._4_4_;
      }
      puVar10 = &local_70;
      if (bVar4) {
        puVar10 = &local_78;
      }
      iVar6 = FUN_146a533fa(local_68,puVar10);
      iVar6 = iVar6 - iVar5;
      uVar8 = (uint)bVar3;
    }
    *param_2 = iVar5;
    *param_3 = iVar6;
    *param_4 = uVar8;
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ae565c FUN_146ae565c body=417 status=ok
// SIG undefined FUN_146ae565c(void)

void FUN_146ae565c(longlong *param_1,uint param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[1] != 0) {
    uVar3 = (**(code **)(*param_1 + 0x18))();
    if (uVar3 <= param_2) {
      param_2 = uVar3;
    }
    uVar2 = param_3 + param_2;
    if (uVar3 <= param_3 + param_2) {
      uVar2 = uVar3;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_146a52f14(*(undefined8 *)(param_1[1] + 0x48),local_58);
    FUN_146a53418(local_58,&local_60,param_2);
    FUN_146a53418(local_58,&local_68,uVar2);
    if (*(char *)(param_1[1] + 0x8c8) == '\x01') {
      *(undefined1 *)(param_1[1] + 0x8c8) = 0;
    }
    if (param_4 == 1) {
      lVar4 = param_1[1];
      if (&local_60 != (undefined8 *)(lVar4 + 0x8c0)) {
        *(undefined8 *)(lVar4 + 0x8c0) = local_60;
        *(undefined1 *)(lVar4 + 0x8c8) = 1;
        lVar4 = param_1[1];
      }
      FUN_146adc8c2(lVar4 + 0x8d0,*(undefined8 *)(lVar4 + 0x48),&local_68);
    }
    else if (param_4 == 0) {
      FUN_146adc8c2(param_1[1] + 0x8d0,*(undefined8 *)(param_1[1] + 0x48),&local_60);
      lVar4 = param_1[1];
      if (&local_68 != (undefined8 *)(lVar4 + 0x8c0)) {
        *(undefined8 *)(lVar4 + 0x8c0) = local_68;
        *(undefined1 *)(lVar4 + 0x8c8) = 1;
      }
    }
    puVar1 = (undefined8 *)param_1[1];
    local_70 = *(undefined4 *)(puVar1 + 0x11a);
    iVar5 = (uint)(*(char *)(puVar1 + 0x11b) == '\x01') + *(int *)((longlong)puVar1 + 0x8d4);
    local_6c = 0;
    if (0 < iVar5) {
      local_6c = iVar5;
    }
    (**(code **)(*(longlong *)*puVar1 + 0xb0))();
    FUN_146adc948(param_1[1]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae57fe FUN_146ae57fe body=243 status=ok
// SIG undefined FUN_146ae57fe(void)

void FUN_146ae57fe(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
      FUN_1446f8c06(param_4,0);
    }
    if ((undefined2 *)*param_4 != (undefined2 *)0x0) {
      *(undefined2 *)*param_4 = 0;
    }
  }
  else {
    FUN_146adb77e(*(longlong *)(param_1 + 8),local_38);
    uVar1 = FUN_1447a1f4a(local_38);
    FUN_144a63a7c(uVar1,&local_48,param_2,param_3);
    if (&local_48 == param_4) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = local_48;
      local_48 = 0;
      *(undefined4 *)(param_4 + 1) = local_40;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_3c;
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae58f2 FUN_146ae58f2 body=340 status=ok
// SIG undefined FUN_146ae58f2(void)

void FUN_146ae58f2(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[1] == 0) goto LAB_146ae5917;
  FUN_146adb77e(param_1[1],local_40);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,0);
  FUN_146ae1f82(param_1[1]);
  FUN_146ae2744(param_1[1],param_4);
  FUN_146adb77e(param_1[1],local_50);
  puVar4 = (undefined8 *)FUN_1447a1f4a(local_50);
  puVar5 = (undefined8 *)FUN_1447a1f4a(local_40);
  iVar3 = *(int *)(puVar4 + 1);
  if (iVar3 == *(int *)(puVar5 + 1)) {
    if ((1 < iVar3) && (iVar3 = wcscmp((wchar_t *)*puVar4,(wchar_t *)*puVar5), iVar3 != 0)) {
LAB_146ae59c2:
      lVar1 = param_1[1];
      if ((*(int *)(lVar1 + 0x640) == 0) ||
         ((*(longlong **)(lVar1 + 0x638) == (longlong *)0x0 ||
          (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x638) + 0x30))(), cVar2 == '\0')))) {
        FUN_146a89fb8(lVar1 + 0x620,local_50);
      }
      (**(code **)(**(longlong **)(param_1[1] + 0x48) + 8))();
      (**(code **)(**(longlong **)param_1[1] + 0xa0))(*(longlong **)param_1[1],local_50);
    }
  }
  else if (*(int *)(puVar5 + 1) + iVar3 != 1) goto LAB_146ae59c2;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
LAB_146ae5917:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ae5a48 FUN_146ae5a48 body=190 status=ok
// SIG undefined FUN_146ae5a48(void)

undefined4 FUN_146ae5a48(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    local_38 = (double)*(float *)(lVar1 + 0x94);
    dStack_30 = param_2[1] * local_38;
    local_38 = local_38 * *param_2;
    FUN_146a509ca(lVar1,local_28,&local_38,0);
    local_38 = 0.0;
    dStack_30 = 0.0;
    FUN_146a52f14(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),&local_38);
    uVar2 = FUN_146a533fa(&local_38,local_28);
    if (local_38 != 0.0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae5b08 FUN_146ae5b08 body=439 status=ok
// SIG undefined FUN_146ae5b08(void)

undefined8 FUN_146ae5b08(longlong param_1,int param_2,int param_3,double *param_4,double *param_5)

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [32];
  double local_c8 [2];
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 8) == 0) {
    dVar2 = (double)CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    *param_4 = (double)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    param_4[1] = dVar2;
    uVar5 = DAT_14c8463f8._4_4_;
    uVar4 = (undefined4)DAT_14c8463f8;
    uVar3 = DAT_14c8463f0._4_4_;
    *(undefined4 *)param_5 = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_5 + 4) = uVar3;
    *(undefined4 *)(param_5 + 1) = uVar4;
    *(undefined4 *)((longlong)param_5 + 0xc) = uVar5;
  }
  else {
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_146a52f14(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_88);
    FUN_146a53418(local_88,local_90,param_2);
    FUN_146a53418(local_88,local_98,param_3 + param_2);
    FUN_146a50afa(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),&local_a8,local_90,0);
    FUN_146a50afa(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),&local_b8,local_98,0);
    if ((dStack_a0 != local_b0) || (NAN(dStack_a0) || NAN(local_b0))) {
      *param_4 = 0.0;
      param_4[1] = dStack_a0;
      FUN_146a533a2(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),local_c8);
    }
    else {
      *param_4 = local_a8;
      param_4[1] = dStack_a0;
      local_c8[0] = local_b8 - local_a8;
    }
    *param_5 = local_c8[0];
    param_5[1] = local_b0 - dStack_a0;
    fVar1 = *(float *)(param_1 + 0x30);
    *param_4 = (double)*(float *)(param_1 + 0x2c) + *param_4;
    param_4[1] = (double)fVar1 + param_4[1];
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae5d18 FUN_146ae5d18 body=114 status=ok
// SIG undefined FUN_146ae5d18(void)

undefined8 * FUN_146ae5d18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) {
LAB_146ae5d72:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ae5d72;
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
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      FUN_14151e938(*(longlong *)(param_1 + 0x10),param_2);
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



// FUNCTION 146ae5d8a FUN_146ae5d8a body=52 status=ok
// SIG undefined FUN_146ae5d8a(void)

void FUN_146ae5d8a(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    FUN_146ae304e();
    FUN_146adc948(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 146ae5dde FUN_146ae5dde body=49 status=ok
// SIG undefined FUN_146ae5dde(void)

void FUN_146ae5dde(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x58) == '\x01')) {
    FUN_146ae311c();
    FUN_146adc948(*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 146ae5e10 FUN_146ae5e10 body=223 status=ok
// SIG undefined FUN_146ae5e10(void)

undefined8 * FUN_146ae5e10(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f1c8e8;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_68,"EditableText.SelectionBackground",1);
  local_60 = (**(code **)(*plVar1 + 0x50))(plVar1,local_68,0,0);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  param_1[2] = local_60;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_144a450dc(param_1 + 4,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae5ef0 FUN_146ae5ef0 body=1001 status=ok
// SIG undefined FUN_146ae5ef0(void)

undefined4
FUN_146ae5ef0(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
             longlong param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
             undefined4 param_10,float *param_11,byte param_12)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_168 [32];
  char local_148;
  float *local_140;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar3 = *(double *)(param_3 + 0x30);
  dVar4 = *(double *)(param_3 + 0x38);
  fVar1 = *(float *)(param_3 + 0x50);
  fVar2 = param_11[4];
  fVar16 = param_11[5];
  fVar18 = param_11[6];
  local_12c = param_4;
  FUN_146a501b4(param_6 + 8);
  fVar11 = (float)FUN_146a5024e();
  dVar13 = (double)(**(code **)(*DAT_14c98e618 + 0x60))();
  lVar8 = *(longlong *)(param_1 + 8);
  dVar13 = dVar13 - *(double *)(lVar8 + 0x10);
  fVar17 = *(float *)(param_7 + 8);
  if (0.10000000149011612 <= dVar13) {
    auVar15._0_4_ = sinf((float)dVar13 * 6.2831855 + 1.5707964);
    auVar15._4_4_ = extraout_XMM0_Db;
    auVar15._8_8_ = extraout_XMM0_Qb;
    auVar14._4_12_ = auVar15._4_12_;
    auVar14._0_4_ = auVar15._0_4_ * 0.5 + 0.5 + 0.5;
    auVar15 = roundps(auVar14,ZEXT416((uint)auVar14._0_4_),1);
    fVar12 = auVar15._0_4_;
    lVar8 = *(longlong *)(param_1 + 8);
  }
  else {
    fVar12 = 1.0;
  }
  dVar13 = DAT_14c8463f0;
  cVar5 = *(char *)(lVar8 + 8);
  cVar6 = *(char *)(lVar8 + 9);
  uVar19 = (undefined4)DAT_14c8463f8;
  uVar20 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
  local_11c = fVar12 * fVar12 * param_11[3];
  local_120 = fVar18 * param_11[2];
  local_124 = fVar16 * param_11[1];
  local_128 = fVar2 * *param_11;
  if (((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x28) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x20);
    }
    uVar9 = (**(code **)(*plVar10 + 0x58))();
    *(undefined8 *)(param_1 + 0x10) = uVar9;
  }
  local_148 = (param_12 ^ 1) << 5;
  if ((bool)cVar5 == (cVar6 != '\x01')) {
    dVar13 = (double)param_5;
    uVar19 = 0;
    uVar20 = 0;
  }
  local_110 = *(float *)(param_7 + 8);
  local_104 = fVar11 * local_110;
  if (fVar11 * local_110 <= 1.0) {
    local_104 = 1.0;
  }
  fVar17 = 1.0 / fVar17;
  fVar18 = (float)((dVar4 + (double)CONCAT44(uVar20,uVar19)) * (double)fVar17);
  fVar16 = (float)((dVar3 + (double)local_12c + dVar13) * (double)fVar17);
  local_fc = *(float *)(param_7 + 0x1c);
  local_100 = fVar1 * fVar17;
  local_104 = local_104 * fVar17;
  local_118 = CONCAT44(local_110 * fVar18 + *(float *)(param_7 + 0x10),
                       local_110 * fVar16 + *(float *)(param_7 + 0xc));
  local_f8 = *(float *)(param_7 + 0x20);
  fVar1 = *(float *)(param_7 + 0x28);
  fVar2 = *(float *)(param_7 + 0x24);
  local_e8 = fVar16 * local_f8 + fVar1 * fVar18 + *(float *)(param_7 + 0x30);
  local_ec = fVar16 * local_fc + fVar18 * fVar2 + *(float *)(param_7 + 0x2c);
  local_f0 = local_f8 * 0.0 + fVar1;
  local_f4 = local_fc * 0.0 + fVar2;
  local_f8 = fVar1 * 0.0 + local_f8;
  local_fc = fVar2 * 0.0 + local_fc;
  local_10c = 0;
  local_e4 = *(char *)(param_7 + 0x34) * '\x02' & 2;
  local_140 = &local_128;
  FUN_140239bd2(param_9,param_10,&local_118,*(undefined8 *)(param_1 + 0x10));
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae62da FUN_146ae62da body=219 status=ok
// SIG undefined FUN_146ae62da(void)

undefined8 * FUN_146ae62da(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f1c8f8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_68,"EditableText.CompositionBackground",1);
  local_60 = (**(code **)(*plVar1 + 0x50))(plVar1,local_68,0,0);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  param_1[1] = local_60;
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_144a450dc(param_1 + 3,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae63b6 FUN_146ae63b6 body=727 status=ok
// SIG undefined FUN_146ae63b6(void)

int FUN_146ae63b6(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                 undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
                 int param_10,float *param_11,byte param_12)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  char local_e8;
  float *local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    dVar2 = *(double *)(param_3 + 0x38);
    dVar3 = *(double *)(param_3 + 0x30);
    fVar1 = *(float *)(param_3 + 0x50);
    fVar9 = 1.0 / *(float *)(param_7 + 8);
    local_cc = param_11[7] * param_11[3];
    local_d0 = param_11[6] * param_11[2];
    local_d4 = param_11[5] * param_11[1];
    local_d8 = param_11[4] * *param_11;
    if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
      if (cVar4 != '\0') {
        if (*(int *)(param_1 + 0x20) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x18);
        }
        uVar5 = (**(code **)(*plVar6 + 0x58))();
        *(undefined8 *)(param_1 + 8) = uVar5;
      }
    }
    fVar8 = (float)(dVar2 * (double)fVar9);
    fVar7 = (float)(((double)param_4 + dVar3) * (double)fVar9);
    local_b0 = fVar1 * fVar9;
    local_b4 = param_5 * fVar9;
    local_c0 = *(float *)(param_7 + 8);
    local_ac = *(float *)(param_7 + 0x1c);
    local_c8 = CONCAT44(local_c0 * fVar8 + *(float *)(param_7 + 0x10),
                        local_c0 * fVar7 + *(float *)(param_7 + 0xc));
    local_a8 = *(float *)(param_7 + 0x20);
    fVar1 = *(float *)(param_7 + 0x28);
    fVar9 = *(float *)(param_7 + 0x24);
    local_98 = fVar7 * local_a8 + fVar1 * fVar8 + *(float *)(param_7 + 0x30);
    local_9c = fVar7 * local_ac + fVar8 * fVar9 + *(float *)(param_7 + 0x2c);
    local_a0 = local_a8 * 0.0 + fVar1;
    local_a4 = local_ac * 0.0 + fVar9;
    local_a8 = fVar1 * 0.0 + local_a8;
    local_ac = fVar9 * 0.0 + local_ac;
    local_bc = 0;
    local_94 = *(char *)(param_7 + 0x34) * '\x02' & 2;
    param_10 = param_10 + 1;
    local_e0 = &local_d8;
    local_e8 = (param_12 ^ 1) << 5;
    FUN_140239bd2(param_9,param_10,&local_c8,*(undefined8 *)(param_1 + 8));
  }
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae668e FUN_146ae668e body=916 status=ok
// SIG undefined FUN_146ae668e(void)

int FUN_146ae668e(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                 longlong param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
                 int param_10,float *param_11,char param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_118 [32];
  char local_f8;
  float *local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar4 = *(double *)(param_3 + 0x30);
  dVar5 = *(double *)(param_3 + 0x38);
  pfVar8 = (float *)(param_6 + 0x94);
  bVar6 = *(byte *)(param_6 + 0xa4);
  if (bVar6 < 2) {
    if (bVar6 == 1) {
      pfVar8 = (float *)FUN_1400c06fe(pfVar8);
      pfVar9 = pfVar8 + 1;
      pfVar10 = pfVar8 + 2;
      pfVar11 = pfVar8 + 3;
    }
    else {
      pfVar9 = (float *)(param_6 + 0x98);
      pfVar10 = (float *)(param_6 + 0x9c);
      pfVar11 = (float *)(param_6 + 0xa0);
    }
    local_dc = *pfVar11;
    local_e0 = *pfVar10;
    local_e4 = *pfVar9;
    local_e8 = *pfVar8;
  }
  else {
    uVar7 = (ulonglong)(bVar6 == 3);
    local_dc = (1.0 - param_11[uVar7 * 4 + 7]) * 0.5 + 1.0;
    local_e0 = (1.0 - param_11[uVar7 * 4 + 6]) * 0.5 + 0.15;
    local_e4 = (1.0 - param_11[uVar7 * 4 + 5]) * 0.5 + -0.05;
    local_e8 = (1.0 - param_11[uVar7 * 4 + 4]) * 0.5 + -0.2;
  }
  local_dc = local_dc * param_11[3];
  local_e0 = local_e0 * param_11[2];
  local_e4 = local_e4 * param_11[1];
  local_e8 = local_e8 * *param_11;
  fVar1 = *(float *)(param_7 + 8);
  fVar12 = 0.0;
  if (*(int *)(param_3 + 0x5c) <= *(int *)(param_3 + 0x58)) {
    fVar12 = fVar1 * 4.0;
  }
  if (param_5 <= fVar12) {
    param_5 = fVar12;
  }
  if (0.0 < param_5) {
    local_f8 = ' ';
    if (param_12 != '\0') {
      local_f8 = (*(byte *)(param_1 + 8) ^ 1) << 5;
    }
    dVar13 = (double)(1.0 / fVar1);
    fVar14 = (float)(dVar5 * dVar13);
    fVar12 = (float)(((double)param_4 + dVar4) * dVar13);
    dVar4 = *(double *)(param_3 + 0x48);
    if (*(double *)(param_3 + 0x48) <= (double)*(float *)(param_3 + 0x50)) {
      dVar4 = (double)*(float *)(param_3 + 0x50);
    }
    local_c0 = (float)(dVar4 * dVar13);
    local_c4 = param_5 * (1.0 / fVar1);
    local_d8 = CONCAT44(fVar1 * fVar14 + *(float *)(param_7 + 0x10),
                        fVar1 * fVar12 + *(float *)(param_7 + 0xc));
    local_bc = *(float *)(param_7 + 0x1c);
    local_b8 = *(float *)(param_7 + 0x20);
    fVar2 = *(float *)(param_7 + 0x28);
    fVar3 = *(float *)(param_7 + 0x24);
    local_a8 = fVar12 * local_b8 + fVar2 * fVar14 + *(float *)(param_7 + 0x30);
    local_ac = fVar12 * local_bc + fVar14 * fVar3 + *(float *)(param_7 + 0x2c);
    local_b0 = local_b8 * 0.0 + fVar2;
    local_b4 = local_bc * 0.0 + fVar3;
    local_b8 = fVar2 * 0.0 + local_b8;
    local_bc = fVar3 * 0.0 + local_bc;
    local_cc = 0;
    local_a4 = *(char *)(param_7 + 0x34) * '\x02' & 2;
    param_10 = param_10 + 1;
    local_f0 = &local_e8;
    local_d0 = fVar1;
    FUN_140239bd2(param_9,param_10,&local_d8,param_6 + 0xc0);
  }
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae6a24 FUN_146ae6a24 body=750 status=ok
// SIG undefined FUN_146ae6a24(void)

int FUN_146ae6a24(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                 longlong param_6,longlong param_7,undefined8 param_8,undefined8 param_9,
                 int param_10,float *param_11,char param_12)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  char local_e8;
  float *local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar3 = *(double *)(param_3 + 0x30);
  dVar4 = *(double *)(param_3 + 0x38);
  pfVar6 = (float *)(param_6 + 0xa8);
  cVar5 = *(char *)(param_6 + 0xb8);
  if (cVar5 != '\0') {
    if (cVar5 == '\x01') {
      pfVar6 = (float *)FUN_1400c06fe(pfVar6);
    }
    else if (cVar5 == '\x03') {
      pfVar6 = param_11 + 8;
    }
    else {
      pfVar6 = param_11 + 4;
    }
  }
  local_d0 = pfVar6[2] * param_11[2];
  local_d4 = pfVar6[1] * param_11[1];
  local_d8 = *pfVar6 * *param_11;
  local_cc = pfVar6[3] * param_11[3] * 0.2;
  if (0.0 < param_5) {
    local_c0 = *(float *)(param_7 + 8);
    local_e8 = ' ';
    if (param_12 != '\0') {
      local_e8 = (*(byte *)(param_1 + 8) ^ 1) << 5;
    }
    dVar8 = (double)(1.0 / local_c0);
    fVar9 = (float)(dVar4 * dVar8);
    fVar7 = (float)(((double)param_4 + dVar3) * dVar8);
    dVar3 = *(double *)(param_3 + 0x48);
    if (*(double *)(param_3 + 0x48) <= (double)*(float *)(param_3 + 0x50)) {
      dVar3 = (double)*(float *)(param_3 + 0x50);
    }
    local_b0 = (float)(dVar3 * dVar8);
    local_b4 = param_5 * (1.0 / local_c0);
    local_c8 = CONCAT44(local_c0 * fVar9 + *(float *)(param_7 + 0x10),
                        local_c0 * fVar7 + *(float *)(param_7 + 0xc));
    local_ac = *(float *)(param_7 + 0x1c);
    local_a8 = *(float *)(param_7 + 0x20);
    fVar1 = *(float *)(param_7 + 0x28);
    fVar2 = *(float *)(param_7 + 0x24);
    local_98 = fVar7 * local_a8 + fVar1 * fVar9 + *(float *)(param_7 + 0x30);
    local_9c = fVar7 * local_ac + fVar9 * fVar2 + *(float *)(param_7 + 0x2c);
    local_a0 = local_a8 * 0.0 + fVar1;
    local_a4 = local_ac * 0.0 + fVar2;
    local_a8 = fVar1 * 0.0 + local_a8;
    local_ac = fVar2 * 0.0 + local_ac;
    local_bc = 0;
    local_94 = *(char *)(param_7 + 0x34) * '\x02' & 2;
    param_10 = param_10 + 1;
    local_e0 = &local_d8;
    FUN_140239bd2(param_9,param_10,&local_c8,param_6 + 0xc0);
  }
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae6d14 FUN_146ae6d14 body=150 status=ok
// SIG undefined FUN_146ae6d14(void)

void FUN_146ae6d14(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_328 [32];
  undefined1 local_308 [736];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_328;
  uVar3 = FUN_1428fe7dc(*param_1);
  cVar2 = FUN_146ae6de8(uVar3,param_2);
  if (cVar2 == '\0') {
    lVar1 = *param_1;
    FUN_140e9ea3a(local_308,param_2);
    FUN_140a5e6b8(lVar1 + 0x160,local_308);
    FUN_140e9e952(local_308);
    (**(code **)(*(longlong *)param_1[2] + 0x20))();
  }
  if ((local_28 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae6dac FUN_146ae6dac body=60 status=ok
// SIG undefined FUN_146ae6dac(void)

double * FUN_146ae6dac(longlong *param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = *param_1;
  fVar1 = *(float *)(lVar2 + 0xc4);
  dVar3 = (double)(1.0 / *(float *)(lVar2 + 0x94));
  *param_2 = (double)*(float *)(lVar2 + 0xbc) * dVar3;
  param_2[1] = (double)fVar1 * dVar3;
  return param_2;
}



// FUNCTION 146ae6de8 FUN_146ae6de8 body=317 status=ok
// SIG undefined FUN_146ae6de8(void)

bool FUN_146ae6de8(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1408640d6(param_1 + 8,param_2 + 8);
  if ((cVar1 != '\0') && (cVar1 = FUN_140a5ca7a(param_1 + 0x68,param_2 + 0x68), cVar1 != '\0')) {
    if (*(float *)(param_1 + 0x7c) != *(float *)(param_2 + 0x7c)) {
      return false;
    }
    if (NAN(*(float *)(param_1 + 0x7c)) || NAN(*(float *)(param_2 + 0x7c))) {
      return false;
    }
    if (*(float *)(param_1 + 0x80) != *(float *)(param_2 + 0x80)) {
      return false;
    }
    if (NAN(*(float *)(param_1 + 0x80)) || NAN(*(float *)(param_2 + 0x80))) {
      return false;
    }
    if ((*(float *)(param_1 + 0x84) == *(float *)(param_2 + 0x84)) &&
       (!NAN(*(float *)(param_1 + 0x84)) && !NAN(*(float *)(param_2 + 0x84)))) {
      if ((*(float *)(param_1 + 0x88) == *(float *)(param_2 + 0x88)) &&
         (!NAN(*(float *)(param_1 + 0x88)) && !NAN(*(float *)(param_2 + 0x88)))) {
        if ((*(float *)(param_1 + 0x8c) == *(float *)(param_2 + 0x8c)) &&
           (!NAN(*(float *)(param_1 + 0x8c)) && !NAN(*(float *)(param_2 + 0x8c)))) {
          if (((*(float *)(param_1 + 0x90) == *(float *)(param_2 + 0x90)) &&
              (((!NAN(*(float *)(param_1 + 0x90)) && !NAN(*(float *)(param_2 + 0x90)) &&
                (cVar1 = FUN_140a5ca7a(param_1 + 0x94,param_2 + 0x94), cVar1 != '\0')) &&
               (cVar1 = FUN_140a5ca7a(param_1 + 0xa8,param_2 + 0xa8), cVar1 != '\0')))) &&
             (((cVar1 = FUN_1469688aa(param_1 + 0xc0,param_2 + 0xc0), cVar1 != '\0' &&
               (cVar1 = FUN_1469688aa(param_1 + 0x170,param_2 + 0x170), cVar1 != '\0')) &&
              ((cVar1 = FUN_1469688aa(param_1 + 0x220,param_2 + 0x220), cVar1 != '\0' &&
               (*(char *)(param_1 + 0x2d0) == *(char *)(param_2 + 0x2d0))))))) {
            return *(char *)(param_1 + 0x2d1) == *(char *)(param_2 + 0x2d1);
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 146ae6f26 FUN_146ae6f26 body=352 status=ok
// SIG undefined FUN_146ae6f26(void)

undefined8 * FUN_146ae6f26(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f1c930;
  param_1[0x3c] = &PTR_FUN_149f1cb70;
  param_1[0x3d] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0x100;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x299) = 1;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x365) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x77) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  return param_1;
}



// FUNCTION 146ae7086 FUN_146ae7086 body=452 status=ok
// SIG undefined FUN_146ae7086(void)

void FUN_146ae7086(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149f1c930;
  param_1[0x3c] = &PTR_FUN_149f1cb70;
  FUN_1449db362(param_1 + 0x78);
  FUN_1449db362(param_1 + 0x75);
  FUN_1449db362(param_1 + 0x71);
  FUN_1449db362(param_1 + 0x6f);
  plVar3 = (longlong *)param_1[0x6c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x69];
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
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  plVar3 = (longlong *)param_1[99];
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
  plVar3 = (longlong *)param_1[0x61];
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
  FUN_1449db362(param_1 + 0x5e);
  FUN_1449db362(param_1 + 0x5c);
  FUN_1449db362(param_1 + 0x5a);
  FUN_1449db362(param_1 + 0x58);
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x54);
  FUN_1449db362(param_1 + 0x51);
  FUN_1449db362(param_1 + 0x4e);
  FUN_1449db362(param_1 + 0x4b);
  FUN_1449db362(param_1 + 0x48);
  FUN_1449db362(param_1 + 0x45);
  FUN_1449db362(param_1 + 0x42);
  FUN_1449db362(param_1 + 0x3f);
  lVar4 = param_1[0x3d];
  if (lVar4 != 0) {
    FUN_146adac58(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146ae724a FUN_146ae724a body=2793 status=ok
// SIG undefined FUN_146ae724a(void)

void FUN_146ae724a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_6c8 [32];
  longlong **local_6a8;
  undefined1 *local_6a0;
  longlong local_698;
  longlong **local_690;
  longlong **local_688;
  undefined8 local_678;
  undefined1 local_670 [8];
  longlong *local_668;
  undefined1 local_660;
  undefined1 local_65f;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined1 local_648;
  undefined1 local_647;
  undefined8 local_640;
  undefined8 uStack_638;
  longlong *local_630;
  longlong *local_628;
  longlong *local_620;
  longlong *local_618;
  undefined1 local_60e;
  char local_60d;
  undefined1 local_60c;
  char local_60b;
  undefined1 local_60a;
  char local_609;
  undefined1 *local_608;
  undefined4 local_600 [182];
  longlong *local_328;
  longlong *plStack_320;
  undefined1 local_318;
  undefined8 local_310;
  undefined4 local_308;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  *(undefined2 *)(param_1 + 0x298) = *(undefined2 *)(param_2 + 0x368);
  FUN_14096c7c0(param_1 + 0x2a0,param_2 + 0x370);
  FUN_146a75c8e(param_1 + 0x2c0,param_2 + 0x3a0);
  FUN_14628081e(param_1 + 0x2d0,param_2 + 0x3b0);
  FUN_146a25078(param_1 + 0x2e0,param_2 + 0x3c0);
  FUN_146a74ff4(param_1 + 0x2f0,param_2 + 0x4a8);
  *(undefined2 *)(param_1 + 0x1f0) = *(undefined2 *)(param_2 + 0x3d0);
  FUN_14096c7c0(param_1 + 0x1f8,param_2 + 0x3d8);
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_2 + 1000);
  FUN_14096c7c0(param_1 + 0x210,param_2 + 0x3f0);
  *(undefined2 *)(param_1 + 0x220) = *(undefined2 *)(param_2 + 0x418);
  FUN_14096c7c0(param_1 + 0x228,param_2 + 0x420);
  *(undefined2 *)(param_1 + 0x268) = *(undefined2 *)(param_2 + 0x448);
  FUN_14096c7c0(param_1 + 0x270,param_2 + 0x450);
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)(param_2 + 0x460);
  FUN_14096c7c0(param_1 + 0x288,param_2 + 0x468);
  *(undefined2 *)(param_1 + 0x238) = *(undefined2 *)(param_2 + 0x400);
  FUN_14096c7c0(param_1 + 0x240,param_2 + 0x408);
  FUN_146a3c65e(param_1 + 0x2b0,param_2 + 0x478);
  *(undefined2 *)(param_1 + 0x250) = *(undefined2 *)(param_2 + 0x430);
  FUN_14096c7c0(param_1 + 600,param_2 + 0x438);
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x4f9);
  *(undefined2 *)(param_1 + 0x3a0) = *(undefined2 *)(param_2 + 0x500);
  FUN_146a74cdc(param_1 + 0x3a8,param_2 + 0x508);
  *(undefined2 *)(param_1 + 0x3b8) = *(undefined2 *)(param_2 + 0x518);
  FUN_146a74d60(param_1 + 0x3c0,param_2 + 0x520);
  FUN_140328a42(param_1 + 800,param_2 + 0x488);
  FUN_140328a42(param_1 + 0x330,param_2 + 0x498);
  FUN_146a75d12(param_1 + 0x378,param_2 + 0x4b8);
  FUN_14603678a(param_1 + 0x388,param_2 + 0x4c8);
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x4f8);
  lVar9 = *(longlong *)(param_2 + 0x380);
  lVar10 = *(longlong *)(param_2 + 0x388);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x308);
  *(longlong *)(param_1 + 0x300) = lVar9;
  *(longlong *)(param_1 + 0x308) = lVar10;
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
    lVar9 = *(longlong *)(param_1 + 0x300);
  }
  if (lVar9 != 0) {
    local_648 = DAT_14c96b1e1;
    local_647 = 1;
    local_640 = 0;
    uStack_638 = 0;
    *(undefined1 *)(lVar9 + 0x2a0) = DAT_14c96b1e1;
    *(undefined1 *)(lVar9 + 0x2a1) = 1;
    FUN_140fe25fc(lVar9 + 0x2a8,&local_640);
    FUN_1449db362(&local_640);
    lVar9 = *(longlong *)(param_1 + 0x300);
    local_608 = &LAB_146ae7eb6;
    local_600[0] = 0;
    FUN_146ae7d34(&local_328,param_1);
    FUN_140328a42(lVar9 + 0x310,&local_328);
    FUN_1449db362(&local_328);
  }
  lVar9 = *(longlong *)(param_2 + 0x390);
  lVar10 = *(longlong *)(param_2 + 0x398);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x318);
  *(longlong *)(param_1 + 0x310) = lVar9;
  *(longlong *)(param_1 + 0x318) = lVar10;
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
    lVar9 = *(longlong *)(param_1 + 0x310);
  }
  if (lVar9 != 0) {
    local_660 = DAT_14c96b1e1;
    local_65f = 1;
    local_658 = 0;
    uStack_650 = 0;
    *(undefined1 *)(lVar9 + 0x2a0) = DAT_14c96b1e1;
    *(undefined1 *)(lVar9 + 0x2a1) = 1;
    FUN_140fe25fc(lVar9 + 0x2a8,&local_658);
    FUN_1449db362(&local_658);
    lVar9 = *(longlong *)(param_1 + 0x310);
    local_608 = &LAB_146ae7f2c;
    local_600[0] = 0;
    FUN_146ae7d34(&local_328,param_1);
    FUN_140328a42(lVar9 + 0x310,&local_328);
    FUN_1449db362(&local_328);
  }
  FUN_140e9ea3a(&local_608,*(undefined8 *)(param_2 + 0x278));
  if ((*(char *)(param_2 + 0x2e0) != '\0') ||
     ((*(longlong **)(param_2 + 0x2e8) != (longlong *)0x0 && *(int *)(param_2 + 0x2f0) != 0 &&
      (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x2e8) + 0x30))(), cVar4 != '\0')))) {
    uVar5 = FUN_146a64b32(param_2 + 0x280);
    FUN_1412cc59c(local_600,uVar5);
  }
  plVar8 = *(longlong **)(param_2 + 0x220);
  plVar11 = *(longlong **)(param_2 + 0x228);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (plVar8 == (longlong *)0x0) {
    FUN_140a5c830(&local_328);
    plVar7 = plStack_320;
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x0;
    if (plStack_320 == plVar11) {
      plVar8 = plStack_320;
    }
    if (plStack_320 != plVar11 && plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000146ae7cd8:
        if (iVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar11 = plVar7;
        goto joined_r0x000146ae7cd8;
      }
    }
    plVar11 = plVar7;
    plVar8 = local_328;
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_320 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_320)(plStack_320);
        LOCK();
        piVar1 = (int *)((longlong)plStack_320 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_320 + 0x10))(plStack_320);
        }
      }
    }
  }
  if (plVar11 == (longlong *)0x0) {
    uVar5 = FUN_14001cc68(0x9e0,0x10);
    local_618 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    uVar5 = FUN_14001cc68(0x9e0,0x10);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_618 = plVar11;
  }
  local_609 = *(char *)(param_2 + 0x533);
  if (local_609 == '\x01') {
    local_60a = *(undefined1 *)(param_2 + 0x532);
  }
  local_60b = *(char *)(param_2 + 0x531);
  if (local_60b == '\x01') {
    local_60c = *(undefined1 *)(param_2 + 0x530);
  }
  local_630 = plVar8;
  local_628 = local_618;
  local_620 = plVar8;
  FUN_140e9ea3a(&local_328,&local_608);
  local_688 = &local_620;
  local_690 = &local_630;
  local_6a0 = &local_60a;
  local_6a8 = (longlong **)&local_60c;
  local_698 = param_2 + 0x4e8;
  FUN_146ad84f4(uVar5,param_1 + 0x1e0,param_2 + 0x1a8,&local_328);
  lVar9 = *(longlong *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = uVar5;
  if (lVar9 != 0) {
    FUN_146adac58(lVar9);
    FUN_1400020a8(lVar9);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_146adc2f4(*(undefined8 *)(param_1 + 0x1e8),param_2 + 0x1d0);
  FUN_146adc5c8(*(undefined8 *)(param_1 + 0x1e8),param_2 + 0x1f8);
  FUN_146add67e(*(undefined8 *)(param_1 + 0x1e8),param_2 + 0x230,param_2 + 0x248,param_2 + 0x260);
  FUN_146add91a(*(undefined8 *)(param_1 + 0x1e8),param_2 + 0x2f8);
  FUN_146add9b6(*(undefined8 *)(param_1 + 0x1e8),param_2 + 0x350);
  FUN_146addb54(*(undefined8 *)(param_1 + 0x1e8),param_2 + 800);
  uVar5 = *(undefined8 *)(param_1 + 0x1e8);
  local_620 = (longlong *)0x0;
  local_618 = (longlong *)((ulonglong)local_618 & 0xffffffff00000000);
  FUN_1446efa72(&local_620,0,2,0x10);
  local_618 = (longlong *)CONCAT44(local_618._4_4_,2);
  *local_620 = (longlong)&PTR_LAB_149f134c0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_620[2] = lVar10;
  *local_620 = (longlong)&PTR_FUN_149f1ea00;
  local_620[3] = param_1;
  local_328 = (longlong *)0x0;
  plStack_320 = (longlong *)0x0;
  local_318 = 1;
  local_310 = 0;
  local_308 = 0;
  FUN_140a5cea4(&local_310,&local_620);
  FUN_146adde3a(uVar5,&local_328);
  FUN_1449db362(&local_310);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_620);
  local_60d = *(char *)(param_2 + 0x535);
  if (local_60d == '\x01') {
    local_60e = *(undefined1 *)(param_2 + 0x534);
  }
  FUN_146addc80(*(undefined8 *)(param_1 + 0x1e8),&local_60e);
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f13530;
  plVar7[2] = (longlong)puVar6;
  *(undefined8 **)(param_1 + 0x340) = puVar6;
  plVar8 = *(longlong **)(param_1 + 0x348);
  if (plVar7 == plVar8) {
    if (plVar7 == (longlong *)0x0) goto LAB_146ae7b35;
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_146ae7b35;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x348) = plVar7;
    if (plVar8 == (longlong *)0x0) goto LAB_146ae7b35;
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_146ae7b35;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar7 = plVar8;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_146ae7b35:
  uVar5 = *(undefined8 *)(param_1 + 0x340);
  local_328 = (longlong *)0x0;
  plStack_320 = (longlong *)0x0;
  FUN_1446ddc76(&local_678,"EditText",1);
  local_6a8 = &local_328;
  local_6a0 = (undefined1 *)(param_2 + 0x4d8);
  FUN_146a0e9c0(uVar5,local_670,local_678,0);
  if (local_668 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_668 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_668)(local_668);
      LOCK();
      piVar1 = (int *)((longlong)local_668 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_668 + 0x10))(local_668);
      }
    }
  }
  plVar8 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_320 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_1446f470e(&local_620,L"EditableText",1);
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f13550;
  FUN_14697426c(plVar8 + 2,param_1,local_620);
  local_328 = plVar8 + 2;
  plStack_320 = plVar8;
  FUN_146a64a70(param_1,&local_328);
  plVar8 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_320 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_140e9e952(&local_608);
  if ((local_40 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae7d34 FUN_146ae7d34 body=386 status=ok
// SIG undefined FUN_146ae7d34(void)

longlong * FUN_146ae7d34(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146ae7e45:
    *puVar5 = &PTR_LAB_149e01f80;
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
    *puVar5 = &PTR_FUN_149f1e990;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146ae7e45;
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
    *puVar5 = &PTR_LAB_149e01f80;
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
    *puVar5 = &PTR_FUN_149f1e990;
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



// FUNCTION 146ae7fa2 FUN_146ae7fa2 body=12 status=ok
// SIG undefined FUN_146ae7fa2(void)

void FUN_146ae7fa2(longlong param_1)

{
  FUN_146adb44a(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae7fae FUN_146ae7fae body=29 status=ok
// SIG undefined FUN_146ae7fae(void)

undefined8 FUN_146ae7fae(longlong param_1,undefined8 param_2)

{
  FUN_146adc2a4(*(undefined8 *)(param_1 + 0x1e8));
  return param_2;
}



// FUNCTION 146ae7fcc FUN_146ae7fcc body=12 status=ok
// SIG undefined FUN_146ae7fcc(void)

void FUN_146ae7fcc(longlong param_1)

{
  FUN_146adc2f4(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae7fd8 FUN_146ae7fd8 body=29 status=ok
// SIG undefined FUN_146ae7fd8(void)

undefined8 FUN_146ae7fd8(longlong param_1,undefined8 param_2)

{
  FUN_146adc578(*(undefined8 *)(param_1 + 0x1e8));
  return param_2;
}



// FUNCTION 146ae7ff6 FUN_146ae7ff6 body=136 status=ok
// SIG undefined FUN_146ae7ff6(void)

void FUN_146ae7ff6(longlong param_1,longlong param_2)

{
  undefined1 auStack_578 [40];
  undefined1 local_550 [632];
  undefined8 local_2d8;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_578;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_578);
  }
  FUN_146a6f758(local_550);
  FUN_146adc734(*(undefined8 *)(param_1 + 0x1e8),local_2d8);
  FUN_146a701ca(local_550);
  if ((local_18 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ae8094 FUN_146ae8094 body=63 status=ok
// SIG undefined FUN_146ae8094(void)

void FUN_146ae8094(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 0x48);
  if (param_2[1] == 1) {
    uVar3 = (uint)*param_2;
  }
  else {
    uVar2 = (**(code **)(*DAT_14c968338 + 0xb0))();
    uVar3 = 0;
    if (uVar2 < 3) {
      uVar3 = uVar2;
    }
  }
  FUN_1428ff0d4(uVar1,uVar3);
  return;
}



// FUNCTION 146ae80d4 FUN_146ae80d4 body=63 status=ok
// SIG undefined FUN_146ae80d4(void)

void FUN_146ae80d4(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 0x48);
  if (param_2[1] == 1) {
    uVar3 = (uint)*param_2;
  }
  else {
    uVar2 = (**(code **)(*DAT_14c98eeb0 + 0xb0))();
    uVar3 = 0;
    if (uVar2 < 3) {
      uVar3 = uVar2;
    }
  }
  FUN_1428ff10e(uVar1,uVar3);
  return;
}



// FUNCTION 146ae8114 FUN_146ae8114 body=12 status=ok
// SIG undefined FUN_146ae8114(void)

void FUN_146ae8114(longlong param_1)

{
  FUN_146add75c(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae8120 FUN_146ae8120 body=12 status=ok
// SIG undefined FUN_146ae8120(void)

void FUN_146ae8120(longlong param_1)

{
  FUN_146add7f6(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae812c FUN_146ae812c body=12 status=ok
// SIG undefined FUN_146ae812c(void)

void FUN_146ae812c(longlong param_1)

{
  FUN_146add888(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae8138 FUN_146ae8138 body=12 status=ok
// SIG undefined FUN_146ae8138(void)

void FUN_146ae8138(longlong param_1)

{
  FUN_146addb54(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae8144 FUN_146ae8144 body=12 status=ok
// SIG undefined FUN_146ae8144(void)

void FUN_146ae8144(longlong param_1)

{
  FUN_146addbee(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae8150 FUN_146ae8150 body=12 status=ok
// SIG undefined FUN_146ae8150(void)

void FUN_146ae8150(longlong param_1)

{
  FUN_146add91a(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae815c FUN_146ae815c body=12 status=ok
// SIG undefined FUN_146ae815c(void)

void FUN_146ae815c(longlong param_1)

{
  FUN_146add9b6(*(undefined8 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146ae8168 FUN_146ae8168 body=26 status=ok
// SIG undefined FUN_146ae8168(void)

void FUN_146ae8168(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x280) = *param_2;
  FUN_14096c7c0(param_1 + 0x288,param_2 + 4);
  return;
}



// FUNCTION 146ae8182 FUN_146ae8182 body=47 status=ok
// SIG undefined FUN_146ae8182(void)

void FUN_146ae8182(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x3b8) = *param_2;
  FUN_146a74d60(param_1 + 0x3c0,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  return;
}



// FUNCTION 146ae81b2 FUN_146ae81b2 body=26 status=ok
// SIG undefined FUN_146ae81b2(void)

void FUN_146ae81b2(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x298) = *param_2;
  FUN_14096c7c0(param_1 + 0x2a0,param_2 + 4);
  return;
}



// FUNCTION 146ae81cc FUN_146ae81cc body=26 status=ok
// SIG undefined FUN_146ae81cc(void)

void FUN_146ae81cc(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x208) = *param_2;
  FUN_14096c7c0(param_1 + 0x210,param_2 + 4);
  return;
}



// FUNCTION 146ae81e6 FUN_146ae81e6 body=26 status=ok
// SIG undefined FUN_146ae81e6(void)

void FUN_146ae81e6(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x220) = *param_2;
  FUN_14096c7c0(param_1 + 0x228,param_2 + 4);
  return;
}


