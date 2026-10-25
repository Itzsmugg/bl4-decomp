// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14778077a FUN_14778077a body=171 status=ok
// SIG undefined FUN_14778077a(void)

void FUN_14778077a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a544010;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147780815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147780826 FUN_147780826 body=44 status=ok
// SIG undefined FUN_147780826(void)

void FUN_147780826(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014778084f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 147780852 FUN_147780852 body=43 status=ok
// SIG undefined FUN_147780852(void)

undefined8 FUN_147780852(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 1;
}



// FUNCTION 1477808a2 FUN_1477808a2 body=12 status=ok
// SIG undefined FUN_1477808a2(void)

void FUN_1477808a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001477808ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1477808ae FUN_1477808ae body=29 status=ok
// SIG undefined FUN_1477808ae(void)

undefined8 FUN_1477808ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477808cc FUN_1477808cc body=150 status=ok
// SIG undefined FUN_1477808cc(void)

void FUN_1477808cc(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(*param_1 + 0x3b);
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  plVar5 = DAT_14c96b350;
  if (cVar1 == '\x01') {
    pcVar3 = "Brushes.Hover";
    puVar4 = &local_28;
  }
  else {
    pcVar3 = "Brushes.Header";
    puVar4 = &local_30;
  }
  FUN_1446ddc76(puVar4,pcVar3,1);
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,*puVar4,0,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147780964 FUN_147780964 body=342 status=ok
// SIG undefined FUN_147780964(void)

longlong * FUN_147780964(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1477809e1:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1477809e1;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_149f21340;
  *(undefined4 *)(puVar5 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14a5440a0;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
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



// FUNCTION 147780aba FUN_147780aba body=64 status=ok
// SIG undefined FUN_147780aba(void)

undefined8 * FUN_147780aba(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5440a0;
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



// FUNCTION 147780afe FUN_147780afe body=81 status=ok
// SIG undefined FUN_147780afe(void)

undefined8 FUN_147780afe(longlong param_1)

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



// FUNCTION 147780b56 FUN_147780b56 body=89 status=ok
// SIG undefined FUN_147780b56(void)

bool FUN_147780b56(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147780ba1;
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
LAB_147780ba1:
  return lVar6 == param_2;
}



// FUNCTION 147780bcc FUN_147780bcc body=118 status=ok
// SIG undefined FUN_147780bcc(void)

void FUN_147780bcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21340;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a5440a0;
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



// FUNCTION 147780c42 FUN_147780c42 body=118 status=ok
// SIG undefined FUN_147780c42(void)

void FUN_147780c42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21340;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a5440a0;
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



// FUNCTION 147780cb8 FUN_147780cb8 body=156 status=ok
// SIG undefined FUN_147780cb8(void)

void FUN_147780cb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f21340;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5440a0;
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
                    /* WARNING: Could not recover jumptable at 0x000147780d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147780d54 FUN_147780d54 body=113 status=ok
// SIG undefined FUN_147780d54(void)

undefined8 FUN_147780d54(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147780dac:
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147780dac;
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



// FUNCTION 147780dc6 FUN_147780dc6 body=147 status=ok
// SIG undefined FUN_147780dc6(void)

ulonglong FUN_147780dc6(longlong param_1)

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
LAB_147780e38:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147780e38;
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
                (lVar4 + *(int *)(param_1 + 0x30),&local_19,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 147780e5a FUN_147780e5a body=125 status=ok
// SIG undefined FUN_147780e5a(void)

longlong * FUN_147780e5a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_14778104e(param_1[2],*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147780ed8 FUN_147780ed8 body=373 status=ok
// SIG undefined FUN_147780ed8(void)

longlong *
FUN_147780ed8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  plVar4 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a50c190;
  plVar1 = plVar4 + 2;
  FUN_147708f12(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_14771619e(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147780fdd;
    param_1[1] = 0;
LAB_147780fa0:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147780fdd;
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
      if (plVar4 == (longlong *)0x0) goto LAB_147780fdd;
      goto LAB_147780fa0;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147780fdd;
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
LAB_147780fdd:
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
  local_58 = 0x380;
  FUN_140a52e78(*param_1 + 8,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778104e FUN_14778104e body=182 status=ok
// SIG undefined FUN_14778104e(void)

void FUN_14778104e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(longlong *)*param_1;
  local_28 = (longlong *)((longlong *)*param_1)[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_14770d946(param_2,param_3,&local_30);
  (**(code **)(*param_2 + 0x80))
            (param_2,*(undefined4 *)(local_30 + 0x270),param_3 + 0x228,param_3 + 600);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147781106 FUN_147781106 body=167 status=ok
// SIG undefined FUN_147781106(void)

void FUN_147781106(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147781181;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147781181;
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
LAB_147781181:
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
                    /* WARNING: Could not recover jumptable at 0x0001477811a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1477811ae FUN_1477811ae body=2292 status=ok
// SIG undefined FUN_1477811ae(void)

void FUN_1477811ae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_5b8 [32];
  undefined1 *local_598;
  longlong local_590;
  undefined4 local_588;
  longlong local_580;
  undefined8 local_578;
  undefined1 local_570;
  undefined8 local_568;
  longlong *local_560;
  undefined8 uStack_558;
  undefined1 local_549;
  longlong local_548;
  longlong *plStack_540;
  undefined8 uStack_538;
  longlong *local_530 [2];
  undefined1 local_520 [16];
  undefined1 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  longlong local_4e8;
  undefined8 uStack_4e0;
  longlong local_4d8;
  longlong *plStack_4d0;
  undefined8 *local_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  undefined8 uStack_4a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  FUN_147717182(param_1 + 0xd4,param_2 + 0x1b0);
  FUN_147717182(param_1 + 0xd6,param_2 + 0x1c0);
  FUN_146a3ba92(param_1 + 0xdc,param_2 + 0x1d0);
  FUN_14771728a(param_1 + 0xde,param_2 + 0x1f0);
  FUN_147781cce(param_1 + 0x115,param_2 + 0x200);
  FUN_147781d52(param_1 + 0x117,param_2 + 0x210);
  plVar11 = (longlong *)param_1[2];
  if (plVar11 == (longlong *)0x0) {
LAB_147781267:
    local_4d8 = 0;
    plStack_4d0 = (longlong *)0x0;
    bVar13 = true;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_147781267;
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar13 = iVar9 == iVar6;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar5 = param_1[1];
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar13 = false;
    local_4d8 = lVar5;
    plStack_4d0 = plVar11;
  }
  plVar11 = plStack_4d0;
  FUN_147781aa4(param_2,&local_4c0,&local_4d8);
  ppuVar3 = (undefined8 **)(param_1 + 299);
  if (ppuVar3 != &local_4c0) {
    puVar4 = *ppuVar3;
    *ppuVar3 = local_4c0;
    local_4c0 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if (local_4c0 != (undefined8 *)0x0) {
    (**(code **)*local_4c0)(local_4c0,1);
  }
  if (!bVar13) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_14603678a(param_1 + 0x105,param_2 + 0x390);
  FUN_146a3c65e(param_1 + 0x6e,param_2 + 0x270);
  FUN_14009d848(param_1 + 0x70,param_2 + 0x280);
  FUN_146229de2(param_1 + 0x101,param_2 + 0x290);
  FUN_146229de2(param_1 + 0x103,param_2 + 0x2a0);
  FUN_147708582(param_1 + 0xfd,param_2 + 0x2b0);
  FUN_147781d52(param_1 + 0x128,param_2 + 0x2c0);
  FUN_1469b6af2(param_1 + 0xff,param_2 + 0x2d0);
  *(undefined1 *)((longlong)param_1 + 0x394) = *(undefined1 *)(param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_2 + 0x2e0);
  FUN_146a3c86e(param_1 + 0x73,param_2 + 0x2e8);
  *(undefined1 *)((longlong)param_1 + 0x854) = *(undefined1 *)(param_2 + 0x308);
  *(undefined1 *)((longlong)param_1 + 0x4c9) = *(undefined1 *)(param_2 + 0x339);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x33a);
  *(undefined4 *)((longlong)param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 800);
  if ((longlong *)(param_2 + 0x328) != param_1 + 0x59) {
    if (*(char *)(param_2 + 0x330) == '\x01') {
      param_1[0x59] = *(longlong *)(param_2 + 0x328);
      uVar8 = 1;
    }
    else {
      if ((char)param_1[0x5a] != '\x01') goto LAB_14778142b;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x5a) = uVar8;
  }
LAB_14778142b:
  if (*(longlong **)(param_2 + 0x350) != (longlong *)0x0 && *(int *)(param_2 + 0x358) != 0) {
    cVar7 = (**(code **)(**(longlong **)(param_2 + 0x350) + 0x30))();
    if (cVar7 != '\0') {
      local_4b8 = (longlong *)0x0;
      local_4b0 = (longlong *)((ulonglong)local_4b0 & 0xffffffff00000000);
      FUN_147717de0(&local_4b8,param_2 + 0x350);
      goto LAB_1477814eb;
    }
  }
  local_4b8 = (longlong *)0x0;
  local_4b0._0_4_ = 0;
  FUN_1446efa72(&local_4b8,0,2,0x10);
  local_4b0 = (longlong *)CONCAT44(local_4b0._4_4_,2);
  *local_4b8 = (longlong)&PTR_LAB_14a50c8c0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_4b8[2] = lVar12;
  *local_4b8 = (longlong)&PTR_FUN_14a50c850;
  local_4b8[3] = (longlong)FUN_147717e64;
LAB_1477814eb:
  FUN_147717de0(param_1 + 0xd8,&local_4b8);
  FUN_1449db362(&local_4b8);
  FUN_14009d848(param_1 + 0xda,param_2 + 0x360);
  *(undefined1 *)((longlong)param_1 + 0x855) = *(undefined1 *)(param_2 + 0x370);
  *(undefined1 *)((longlong)param_1 + 0x856) = *(undefined1 *)(param_2 + 0x371);
  *(undefined1 *)((longlong)param_1 + 0x961) = *(undefined1 *)(param_2 + 0x372);
  *(undefined1 *)((longlong)param_1 + 0x962) = *(undefined1 *)(param_2 + 0x373);
  *(undefined1 *)(param_1 + 0x10b) = *(undefined1 *)(param_2 + 0x374);
  *(undefined2 *)(param_1 + 0x12d) = *(undefined2 *)(param_2 + 0x378);
  FUN_14096c7c0(param_1 + 0x12e,param_2 + 0x380);
  FUN_147781c56(param_1,*(undefined8 *)(param_2 + 0x1a8));
  *(undefined1 *)((longlong)param_1 + 0x86c) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x10d) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x10e,param_2 + 0x260);
  *(undefined1 *)((longlong)param_1 + 0x884) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x111,param_2 + 0x260);
  local_4e8 = 0;
  uStack_4e0 = 0;
  if ((((int)param_1[0xd5] == 0) ||
      (plVar11 = (longlong *)param_1[0xd4], plVar11 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar11 + 0x30))(), cVar7 == '\0')) {
    FUN_1400020e8(&local_4e8,L"Please specify an OnGenerateRow. \n",0x22);
  }
  if (*ppuVar3 == (undefined8 *)0x0) {
    FUN_1400020e8(&local_4e8,L"Please specify a TreeItemsSource. \n",0x23);
  }
  if ((((int)param_1[0x116] == 0) ||
      (plVar11 = (longlong *)param_1[0x115], plVar11 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar11 + 0x30))(), cVar7 == '\0')) {
    FUN_1400020e8(&local_4e8,L"Please specify an OnGetChildren. \n",0x22);
  }
  if ((int)uStack_4e0 - 2U < 0x7fffffff) {
    param_1[0x45] = (longlong)&DAT_200000002;
    FUN_140a570d8(&local_4b8);
    FUN_140009b9a(local_530,&local_4e8);
    FUN_14023423e(local_520,local_530);
    local_510 = 1;
    local_508 = 0;
    uStack_500 = 0;
    uVar10 = FUN_140a54906(&local_4b8,local_520);
    local_598 = &local_549;
    FUN_140a54526(&local_548,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/STreeView.h",0x13e)
    ;
    FUN_140a52852(&local_548,&local_4f8,uVar10);
    local_568 = local_4f8;
    local_560 = local_4f0;
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x3c,&local_568);
    plVar11 = local_560;
    if (local_560 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_560 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_560)(local_560);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_4f0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_4f0)(local_4f0);
        LOCK();
        piVar2 = (int *)((longlong)local_4f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4f0 + 0x10))(local_4f0);
        }
      }
    }
    plVar11 = plStack_540;
    if (plStack_540 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_540 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_540)(plStack_540);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_530[0] != (longlong *)0x0) {
      (**(code **)(*local_530[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4b8);
  }
  else {
    local_570 = *(undefined1 *)(param_2 + 0x348);
    local_578 = *(undefined8 *)(param_2 + 0x340);
    local_580 = param_2 + 0x1e0;
    local_590 = param_2 + 0x310;
    local_598 = (undefined1 *)(param_2 + 0x2f8);
    local_4b8 = (longlong *)CONCAT62(local_4b8._2_6_,0x103);
    local_4b0 = (longlong *)0x0;
    uStack_4a8 = 0;
    local_548 = CONCAT35((int3)((ulonglong)local_548 >> 0x28),0x100000000);
    plStack_540 = (longlong *)0x0;
    uStack_538 = 0;
    local_568 = CONCAT35(local_568._5_3_,0x100000000);
    local_560 = (longlong *)0x0;
    uStack_558 = 0;
    local_588 = 1;
    FUN_1429092be(param_1,&local_568,&local_548,&local_4b8);
    FUN_1449db362(&local_560);
    FUN_1449db362(&plStack_540);
    FUN_1449db362(&local_4b0);
    if (param_1[0x53] != 0) {
      FUN_146a92d5a(param_1[0x53],*(undefined1 *)(param_2 + 0x338));
    }
    plVar11 = (longlong *)param_1[2];
    if (plVar11 == (longlong *)0x0) {
LAB_14778199b:
      local_548 = 0;
      plStack_540 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar11[1];
      do {
        if (iVar9 == 0) goto LAB_14778199b;
        LOCK();
        iVar6 = (int)plVar11[1];
        bVar13 = iVar9 == iVar6;
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar13);
      local_548 = param_1[1];
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_540 = plVar11;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar11 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_147781dd6(plVar11,&local_548);
    local_4b8 = plVar11 + 2;
    local_4b0 = plVar11;
    FUN_147717104(param_1,&local_4b8);
    plVar11 = local_4b0;
    if (local_4b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_4b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_4b0)(local_4b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar11 = plStack_540;
    if (plStack_540 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_540 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_540)(plStack_540);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (local_4e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147781aa4 FUN_147781aa4 body=432 status=ok
// SIG undefined FUN_147781aa4(void)

undefined8 * FUN_147781aa4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x228);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x230);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x238);
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_14001cc68(0x30,0x10);
          local_38 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_14001cc68(0x30,0x10);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = plVar4;
        }
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_1477178de(uVar6,&local_50,&local_40);
        *param_2 = uVar6;
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
    else {
      uVar6 = FUN_14001cc68(0x28,0x10);
      local_40 = *param_3;
      local_38 = (longlong *)param_3[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_147717348(uVar6,&local_40,lVar3);
      *param_2 = uVar6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = &PTR_FUN_14a50c6a0;
    puVar5[1] = lVar3;
    *param_2 = puVar5;
  }
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147781c56 FUN_147781c56 body=119 status=ok
// SIG undefined FUN_147781c56(void)

void FUN_147781c56(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x950) = param_2;
  if (param_2 == 0) {
    local_38 = FUN_141319416();
  }
  else {
    local_38 = param_2 + 0x10;
  }
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_146af67b6(param_1,&local_38);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147781cce FUN_147781cce body=130 status=ok
// SIG undefined FUN_147781cce(void)

void FUN_147781cce(longlong *param_1,longlong *param_2)

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



// FUNCTION 147781d52 FUN_147781d52 body=130 status=ok
// SIG undefined FUN_147781d52(void)

void FUN_147781d52(longlong *param_1,longlong *param_2)

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



// FUNCTION 147781dd6 FUN_147781dd6 body=150 status=ok
// SIG undefined FUN_147781dd6(void)

undefined8 * FUN_147781dd6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a50c950;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2 + 0x4e8;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = &PTR_FUN_14a50c970;
    param_1[3] = lVar4;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = &PTR_FUN_14a50c970;
    param_1[3] = lVar4;
    param_1[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
  return param_1;
}



// FUNCTION 147781e6c FUN_147781e6c body=29 status=ok
// SIG undefined FUN_147781e6c(void)

undefined8 FUN_147781e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147781ea4 FUN_147781ea4 body=29 status=ok
// SIG undefined FUN_147781ea4(void)

bool FUN_147781ea4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147781ec2 FUN_147781ec2 body=26 status=ok
// SIG undefined FUN_147781ec2(void)

bool FUN_147781ec2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147781edc FUN_147781edc body=24 status=ok
// SIG undefined FUN_147781edc(void)

bool FUN_147781edc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147781ef4 FUN_147781ef4 body=101 status=ok
// SIG undefined FUN_147781ef4(void)

void FUN_147781ef4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147781f5a FUN_147781f5a body=101 status=ok
// SIG undefined FUN_147781f5a(void)

void FUN_147781f5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147781fc0 FUN_147781fc0 body=134 status=ok
// SIG undefined FUN_147781fc0(void)

void FUN_147781fc0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541520;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a544200;
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
                    /* WARNING: Could not recover jumptable at 0x000147782037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147782046 FUN_147782046 body=52 status=ok
// SIG undefined FUN_147782046(void)

void FUN_147782046(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147782077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14778207a FUN_14778207a body=167 status=ok
// SIG undefined FUN_14778207a(void)

bool FUN_14778207a(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 147782122 FUN_147782122 body=67 status=ok
// SIG undefined FUN_147782122(void)

void FUN_147782122(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14777d568(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14777e02e(param_1);
    return;
  }
  FUN_147782166(param_1);
  FUN_14777d568(param_1,0);
  return;
}



// FUNCTION 147782166 FUN_147782166 body=322 status=ok
// SIG undefined FUN_147782166(void)

void FUN_147782166(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477822aa FUN_1477822aa body=300 status=ok
// SIG undefined FUN_1477822aa(void)

longlong * FUN_1477822aa(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x340,0x10);
  FUN_1477823d8(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1477825da(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147782369;
    param_1[1] = 0;
LAB_147782333:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147782369;
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
      if (plVar4 == (longlong *)0x0) goto LAB_147782369;
      goto LAB_147782333;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147782369;
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
LAB_147782369:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x330;
  FUN_140a52e78(*param_1,"SAutoRefreshViewport",".\\Runtime/UMG/Private/Components/Viewport.cpp",
                0x18a);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477823d8 FUN_1477823d8 body=191 status=ok
// SIG undefined FUN_1477823d8(void)

undefined8 * FUN_1477823d8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a544270;
  FUN_145aad9f4(param_1 + 2);
  param_1[2] = &PTR_FUN_14a544290;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  local_48 = 0xc044000000000000;
  local_40 = 0xc050e00000000000;
  local_38 = 0;
  local_30 = 0x40490fdb3f800000;
  local_28 = 0x2d;
  local_20 = 0;
  uStack_18 = 0;
  FUN_14572a658(param_1 + 0x5f);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477824a2 FUN_1477824a2 body=29 status=ok
// SIG undefined FUN_1477824a2(void)

undefined8 FUN_1477824a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477824c0 FUN_1477824c0 body=38 status=ok
// SIG undefined FUN_1477824c0(void)

undefined8 FUN_1477824c0(undefined8 param_1,int param_2)

{
  FUN_14778255a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477824e6 FUN_1477824e6 body=116 status=ok
// SIG undefined FUN_1477824e6(void)

void FUN_1477824e6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_147d77cf2(*(longlong *)(param_1 + 0x2d8) + 8);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 200) + 0x48))
            (*(longlong *)(param_1 + 0x2d8) + 200,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000147782557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1e0))(*(longlong **)(param_1 + 0x2c8),param_4);
  return;
}



// FUNCTION 14778255a FUN_14778255a body=127 status=ok
// SIG undefined FUN_14778255a(void)

void FUN_14778255a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a544290;
  FUN_1457b7dec(param_1 + 0x5d);
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
  FUN_145e09320(param_1);
  return;
}



// FUNCTION 1477825da FUN_1477825da body=167 status=ok
// SIG undefined FUN_1477825da(void)

void FUN_1477825da(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147782655;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147782655;
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
LAB_147782655:
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
                    /* WARNING: Could not recover jumptable at 0x000147782675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147782682 FUN_147782682 body=737 status=ok
// SIG undefined FUN_147782682(void)

void FUN_147782682(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong *plStack_250;
  undefined1 local_248 [467];
  undefined1 local_75;
  undefined1 local_72;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_145aad25c(local_248);
  local_72 = 0;
  local_75 = 0;
  FUN_145aacdbe(param_1,local_248);
  lVar7 = FUN_14001cc68(0xb70,0x10);
  FUN_147759812(lVar7,param_1 + 0x2e8);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a5444d0;
  plVar8[2] = lVar7;
  *(longlong *)(param_1 + 0x2c8) = lVar7;
  plVar2 = *(longlong **)(param_1 + 0x2d0);
  if (plVar8 == plVar2) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x00014778276a:
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x2d0) = plVar8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar8 = plVar2;
        goto joined_r0x00014778276a;
      }
    }
  }
  lVar7 = FUN_14001cc68(0x330,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_147782794:
    local_258 = 0;
    plStack_250 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_147782794;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    bVar9 = false;
    local_258 = uVar3;
    plStack_250 = plVar2;
  }
  plVar4 = plStack_250;
  FUN_145f95330(lVar7,*(undefined8 *)(param_1 + 0x2c8),&local_258);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a5449d0;
  plVar8[2] = lVar7;
  *(longlong *)(param_1 + 0x2d8) = lVar7;
  plVar2 = *(longlong **)(param_1 + 0x2e0);
  if (plVar8 == plVar2) {
    if (plVar8 == (longlong *)0x0) goto LAB_14778288c;
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_14778288c;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar6 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x2e0) = plVar8;
    if (plVar2 == (longlong *)0x0) goto LAB_14778288c;
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14778288c;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar6 = *piVar1;
    UNLOCK();
    plVar8 = plVar2;
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14778288c:
  if (!bVar9) {
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
  lVar7 = *(longlong *)(param_1 + 0x2d8);
  plVar2 = *(longlong **)(param_1 + 0x2e0);
  if (plVar2 == (longlong *)0x0) {
    local_268 = lVar7 + 200;
    if (lVar7 == 0) {
      local_268 = lVar7;
    }
    local_260 = (longlong *)0x0;
    FUN_1456f2bd8(param_1);
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    local_268 = lVar7 + 200;
    if (lVar7 == 0) {
      local_268 = lVar7;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    local_260 = plVar2;
    FUN_1456f2bd8(param_1);
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_145aad09e(local_248);
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147782964 FUN_147782964 body=24 status=ok
// SIG undefined FUN_147782964(void)

void FUN_147782964(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147782978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14778297c FUN_14778297c body=29 status=ok
// SIG undefined FUN_14778297c(void)

undefined8 FUN_14778297c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14778299a FUN_14778299a body=29 status=ok
// SIG undefined FUN_14778299a(void)

void FUN_14778299a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477829b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    return;
  }
  return;
}



// FUNCTION 1477829b8 FUN_1477829b8 body=29 status=ok
// SIG undefined FUN_1477829b8(void)

undefined8 FUN_1477829b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477829d6 FUN_1477829d6 body=154 status=ok
// SIG undefined FUN_1477829d6(void)

undefined8 * FUN_1477829d6(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &DAT_149efe500;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a5444f0;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 147782a70 FUN_147782a70 body=29 status=ok
// SIG undefined FUN_147782a70(void)

undefined8 FUN_147782a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147782aa6 FUN_147782aa6 body=29 status=ok
// SIG undefined FUN_147782aa6(void)

bool FUN_147782aa6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 147782ac4 FUN_147782ac4 body=26 status=ok
// SIG undefined FUN_147782ac4(void)

bool FUN_147782ac4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 147782ae8 FUN_147782ae8 body=101 status=ok
// SIG undefined FUN_147782ae8(void)

void FUN_147782ae8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a5444f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147782b4e FUN_147782b4e body=101 status=ok
// SIG undefined FUN_147782b4e(void)

void FUN_147782b4e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14a5444f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147782bb4 FUN_147782bb4 body=134 status=ok
// SIG undefined FUN_147782bb4(void)

void FUN_147782bb4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5444f0;
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
                    /* WARNING: Could not recover jumptable at 0x000147782c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147782c3a FUN_147782c3a body=94 status=ok
// SIG undefined FUN_147782c3a(void)

undefined1 FUN_147782c3a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0x100;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (undefined1)local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147782c9a FUN_147782c9a body=163 status=ok
// SIG undefined FUN_147782c9a(void)

bool FUN_147782c9a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined2 local_28;
  undefined6 uStack_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_28,0);
    lVar3 = CONCAT62(uStack_26,local_28);
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_28 = 0x100;
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147782d3e FUN_147782d3e body=154 status=ok
// SIG undefined FUN_147782d3e(void)

undefined8 * FUN_147782d3e(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14a5445d0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a544560;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 147782dd8 FUN_147782dd8 body=29 status=ok
// SIG undefined FUN_147782dd8(void)

undefined8 FUN_147782dd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147782e0e FUN_147782e0e body=29 status=ok
// SIG undefined FUN_147782e0e(void)

bool FUN_147782e0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 147782e2c FUN_147782e2c body=26 status=ok
// SIG undefined FUN_147782e2c(void)

bool FUN_147782e2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 147782e5c FUN_147782e5c body=101 status=ok
// SIG undefined FUN_147782e5c(void)

void FUN_147782e5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5445d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147782ec2 FUN_147782ec2 body=101 status=ok
// SIG undefined FUN_147782ec2(void)

void FUN_147782ec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5445d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147782f28 FUN_147782f28 body=134 status=ok
// SIG undefined FUN_147782f28(void)

void FUN_147782f28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5445d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a544560;
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
                    /* WARNING: Could not recover jumptable at 0x000147782f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147782fae FUN_147782fae body=94 status=ok
// SIG undefined FUN_147782fae(void)

undefined1 FUN_147782fae(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0x100;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (undefined1)local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778300e FUN_14778300e body=163 status=ok
// SIG undefined FUN_14778300e(void)

bool FUN_14778300e(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined2 local_28;
  undefined6 uStack_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_28,0);
    lVar3 = CONCAT62(uStack_26,local_28);
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_28 = 0x100;
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477830b4 FUN_1477830b4 body=52 status=ok
// SIG undefined FUN_1477830b4(void)

undefined8 * FUN_1477830b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5446b0;
  FUN_1449db362(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783102 FUN_147783102 body=29 status=ok
// SIG undefined FUN_147783102(void)

bool FUN_147783102(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 147783120 FUN_147783120 body=26 status=ok
// SIG undefined FUN_147783120(void)

bool FUN_147783120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 14778313a FUN_14778313a body=24 status=ok
// SIG undefined FUN_14778313a(void)

bool FUN_14778313a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 14778315e FUN_14778315e body=137 status=ok
// SIG undefined FUN_14778315e(void)

void FUN_14778315e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5446b0;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_147783486(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14a544640;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1477831e8 FUN_1477831e8 body=137 status=ok
// SIG undefined FUN_1477831e8(void)

void FUN_1477831e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5446b0;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_147783486(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14a544640;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 147783272 FUN_147783272 body=173 status=ok
// SIG undefined FUN_147783272(void)

void FUN_147783272(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5446b0;
  *(undefined2 *)&p_Var1->CriticalSection = *(undefined2 *)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = 0;
  FUN_147783486(&p_Var1->ProcessLocksList,param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14a544640;
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014778330f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147783320 FUN_147783320 body=138 status=ok
// SIG undefined FUN_147783320(void)

undefined8 FUN_147783320(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined2 local_40 [4];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  pcVar2 = *(code **)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x38);
  local_40[0] = *(undefined2 *)(param_1 + 8);
  local_38 = 0;
  local_30 = 0;
  FUN_147783486(&local_38,param_1 + 0x10);
  (*pcVar2)(iVar1 + lVar3,param_2,local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477833ac FUN_1477833ac body=215 status=ok
// SIG undefined FUN_1477833ac(void)

bool FUN_1477833ac(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined2 local_48;
  undefined6 uStack_46;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_48,0);
    lVar5 = CONCAT62(uStack_46,local_48);
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x38);
    local_48 = *(undefined2 *)(param_1 + 8);
    local_40 = 0;
    local_38 = 0;
    FUN_147783486(&local_40,param_1 + 0x10);
    (*pcVar2)(iVar1 + lVar4,&local_49,&local_48);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147783486 FUN_147783486 body=130 status=ok
// SIG undefined FUN_147783486(void)

void FUN_147783486(longlong *param_1,longlong *param_2)

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



// FUNCTION 14778350a FUN_14778350a body=25 status=ok
// SIG undefined FUN_14778350a(void)

void FUN_14778350a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014778351f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147783524 FUN_147783524 body=29 status=ok
// SIG undefined FUN_147783524(void)

undefined8 FUN_147783524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783542 FUN_147783542 body=80 status=ok
// SIG undefined FUN_147783542(void)

void FUN_147783542(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a544a70;
  param_1 = param_1 + 0xf8;
  lVar3 = -0xf0;
  do {
    FUN_1449db362(param_1);
    plVar2 = *(longlong **)(param_1 + -8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    param_1 = param_1 + -0x28;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 147783592 FUN_147783592 body=29 status=ok
// SIG undefined FUN_147783592(void)

undefined8 FUN_147783592(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477835b0 FUN_1477835b0 body=103 status=ok
// SIG undefined FUN_1477835b0(void)

void FUN_1477835b0(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14cab8dac) {
    DAT_14cab8dac = (int)uVar2;
    FUN_1446f8d3c(&DAT_14cab8da0,DAT_14cab8da8,uVar2,8,8);
  }
  return;
}



// FUNCTION 147783618 FUN_147783618 body=140 status=ok
// SIG undefined FUN_147783618(void)

void FUN_147783618(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cab8da8;
  if (param_1 <= (int)DAT_14cab8da8) {
    if (DAT_14cab8dac == 0) {
      uVar2 = 4;
      if (4 < DAT_14cab8da8) {
        uVar2 = DAT_14cab8da8;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cab8da8 + ((ulonglong)((longlong)(int)DAT_14cab8da8 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cab8dac = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cab8da0,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477836a6 FUN_1477836a6 body=62 status=ok
// SIG undefined FUN_1477836a6(void)

void FUN_1477836a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477836e4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1477836e4 FUN_1477836e4 body=93 status=ok
// SIG undefined FUN_1477836e4(void)

ulonglong FUN_1477836e4(uint param_1,uint param_2)

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



// FUNCTION 147783742 FUN_147783742 body=132 status=ok
// SIG undefined FUN_147783742(void)

void FUN_147783742(longlong param_1,int param_2)

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



// FUNCTION 1477837c8 FUN_1477837c8 body=175 status=ok
// SIG undefined FUN_1477837c8(void)

void FUN_1477837c8(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_147783851;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147783851:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147783878 FUN_147783878 body=73 status=ok
// SIG undefined FUN_147783878(void)

undefined8 * FUN_147783878(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477838c2 FUN_1477838c2 body=32 status=ok
// SIG undefined FUN_1477838c2(void)

undefined8 FUN_1477838c2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 1477838fc FUN_1477838fc body=101 status=ok
// SIG undefined FUN_1477838fc(void)

void FUN_1477838fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147783962 FUN_147783962 body=101 status=ok
// SIG undefined FUN_147783962(void)

void FUN_147783962(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a544760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477839c8 FUN_1477839c8 body=134 status=ok
// SIG undefined FUN_1477839c8(void)

void FUN_1477839c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a544760;
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
                    /* WARNING: Could not recover jumptable at 0x000147783a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147783a4e FUN_147783a4e body=52 status=ok
// SIG undefined FUN_147783a4e(void)

void FUN_147783a4e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147783a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147783a82 FUN_147783a82 body=24 status=ok
// SIG undefined FUN_147783a82(void)

void FUN_147783a82(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147783a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147783a9a FUN_147783a9a body=29 status=ok
// SIG undefined FUN_147783a9a(void)

undefined8 FUN_147783a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783ab8 FUN_147783ab8 body=31 status=ok
// SIG undefined FUN_147783ab8(void)

undefined8 FUN_147783ab8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783af2 FUN_147783af2 body=26 status=ok
// SIG undefined FUN_147783af2(void)

bool FUN_147783af2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147783b0c FUN_147783b0c body=101 status=ok
// SIG undefined FUN_147783b0c(void)

void FUN_147783b0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a544860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5447f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147783b72 FUN_147783b72 body=101 status=ok
// SIG undefined FUN_147783b72(void)

void FUN_147783b72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a544860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5447f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147783bd8 FUN_147783bd8 body=134 status=ok
// SIG undefined FUN_147783bd8(void)

void FUN_147783bd8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a544860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5447f0;
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
                    /* WARNING: Could not recover jumptable at 0x000147783c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147783c5e FUN_147783c5e body=42 status=ok
// SIG undefined FUN_147783c5e(void)

void FUN_147783c5e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147783c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147783c88 FUN_147783c88 body=154 status=ok
// SIG undefined FUN_147783c88(void)

bool FUN_147783c88(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147783d26 FUN_147783d26 body=25 status=ok
// SIG undefined FUN_147783d26(void)

void FUN_147783d26(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147783d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147783d40 FUN_147783d40 body=29 status=ok
// SIG undefined FUN_147783d40(void)

undefined8 FUN_147783d40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783d5e FUN_147783d5e body=143 status=ok
// SIG undefined FUN_147783d5e(void)

void FUN_147783d5e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_144aa17a4();
  if (DAT_14cab8fc0 == 0) {
    uVar3 = FUN_140eaaf27();
    DAT_14cab8fc0 = FUN_140002ddd(FUN_14635a3dd,uVar3,L"WidgetComponentInstanceData");
    if (DAT_14cab8fc0 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cab8fc0;
  FUN_14485c47a(param_1 + 8,DAT_14cab8fc0);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar4 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_147783e14(uVar3,*param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 147783dee FUN_147783dee body=38 status=ok
// SIG undefined FUN_147783dee(void)

undefined8 FUN_147783dee(undefined8 param_1,int param_2)

{
  FUN_1448eac94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783e14 FUN_147783e14 body=113 status=ok
// SIG undefined FUN_147783e14(void)

undefined8 * FUN_147783e14(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  FUN_147a04442();
  *param_1 = &PTR_FUN_14a5400a0;
  lVar1 = *(longlong *)(param_2 + 0x658);
  param_1[0x2c] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x708);
  param_1[0x2d] = lVar1;
  if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147783e86 FUN_147783e86 body=120 status=ok
// SIG undefined FUN_147783e86(void)

void FUN_147783e86(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab7910;
  local_20 = DAT_14cab7918;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147783f00 FUN_147783f00 body=29 status=ok
// SIG undefined FUN_147783f00(void)

undefined8 FUN_147783f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783f1e FUN_147783f1e body=120 status=ok
// SIG undefined FUN_147783f1e(void)

void FUN_147783f1e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab79c0;
  local_20 = DAT_14cab79c8;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147783f98 FUN_147783f98 body=29 status=ok
// SIG undefined FUN_147783f98(void)

undefined8 FUN_147783f98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147783fb6 FUN_147783fb6 body=120 status=ok
// SIG undefined FUN_147783fb6(void)

void FUN_147783fb6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab7a28;
  local_20 = DAT_14cab7a30;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784030 FUN_147784030 body=29 status=ok
// SIG undefined FUN_147784030(void)

undefined8 FUN_147784030(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14778404e FUN_14778404e body=120 status=ok
// SIG undefined FUN_14778404e(void)

void FUN_14778404e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab7bc0;
  local_20 = DAT_14cab7bc8;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477840c8 FUN_1477840c8 body=29 status=ok
// SIG undefined FUN_1477840c8(void)

undefined8 FUN_1477840c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477840e6 FUN_1477840e6 body=120 status=ok
// SIG undefined FUN_1477840e6(void)

void FUN_1477840e6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab7c38;
  local_20 = DAT_14cab7c40;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784160 FUN_147784160 body=29 status=ok
// SIG undefined FUN_147784160(void)

undefined8 FUN_147784160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14778417e FUN_14778417e body=120 status=ok
// SIG undefined FUN_14778417e(void)

void FUN_14778417e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab7f40;
  local_20 = DAT_14cab7f48;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477841f8 FUN_1477841f8 body=29 status=ok
// SIG undefined FUN_1477841f8(void)

undefined8 FUN_1477841f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147784216 FUN_147784216 body=120 status=ok
// SIG undefined FUN_147784216(void)

void FUN_147784216(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab7fd8;
  local_20 = DAT_14cab7fe0;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784290 FUN_147784290 body=29 status=ok
// SIG undefined FUN_147784290(void)

undefined8 FUN_147784290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477842ae FUN_1477842ae body=150 status=ok
// SIG undefined FUN_1477842ae(void)

void FUN_1477842ae(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = 0;
  do {
    local_40 = **(undefined8 **)((longlong)&PTR_DAT_14c761050 + lVar2);
    local_38 = *(undefined4 *)(*(undefined8 **)((longlong)&PTR_DAT_14c761050 + lVar2) + 1);
    cVar1 = (*(code *)*param_3)(param_3[1],&local_40);
    if (cVar1 == '\0') goto LAB_147784322;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  local_50 = *param_3;
  local_48 = param_3[1];
  FUN_14775e24c();
LAB_147784322:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784346 FUN_147784346 body=29 status=ok
// SIG undefined FUN_147784346(void)

undefined8 FUN_147784346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147784364 FUN_147784364 body=120 status=ok
// SIG undefined FUN_147784364(void)

void FUN_147784364(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab8690;
  local_20 = DAT_14cab8698;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477843de FUN_1477843de body=29 status=ok
// SIG undefined FUN_1477843de(void)

undefined8 FUN_1477843de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477843fc FUN_1477843fc body=120 status=ok
// SIG undefined FUN_1477843fc(void)

void FUN_1477843fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14cab87a8;
  local_20 = DAT_14cab87b0;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_14775e24c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784476 FUN_147784476 body=29 status=ok
// SIG undefined FUN_147784476(void)

undefined8 FUN_147784476(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147784554 FUN_147784554 body=250 status=ok
// SIG undefined FUN_147784554(void)

void FUN_147784554(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*param_1 + 0x5f8))(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778465c FUN_14778465c body=337 status=ok
// SIG undefined FUN_14778465c(void)

void FUN_14778465c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*param_1 + 0x5e8))(param_1,&local_58,local_3c != 0);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477847ae FUN_1477847ae body=243 status=ok
// SIG undefined FUN_1477847ae(void)

void FUN_1477847ae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x5d8))(param_1,&local_50);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477848a8 FUN_1477848a8 body=250 status=ok
// SIG undefined FUN_1477848a8(void)

void FUN_1477848a8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*param_1 + 0x5f0))(param_1,&local_50);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477849a4 FUN_1477849a4 body=243 status=ok
// SIG undefined FUN_1477849a4(void)

void FUN_1477849a4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x5e0))(param_1,&local_50);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784a98 FUN_147784a98 body=160 status=ok
// SIG undefined FUN_147784a98(void)

void FUN_147784a98(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x608))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784b46 FUN_147784b46 body=365 status=ok
// SIG undefined FUN_147784b46(void)

void FUN_147784b46(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  void *_Src;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  int local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  _Src = local_48;
  iVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar3 * 2);
  }
  uVar2 = (**(code **)(*param_1 + 0x600))(param_1,&local_60,iVar1 != 0);
  *param_3 = uVar2;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784cb4 FUN_147784cb4 body=230 status=ok
// SIG undefined FUN_147784cb4(void)

void FUN_147784cb4(longlong param_1,longlong param_2)

{
  undefined1 *_Src;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  _Src = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    _Src = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  memcpy((void *)(param_1 + 0x370),_Src,0x100);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784d9c FUN_147784d9c body=156 status=ok
// SIG undefined FUN_147784d9c(void)

void FUN_147784d9c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147784e3a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147784e3a FUN_147784e3a body=150 status=ok
// SIG undefined FUN_147784e3a(void)

void FUN_147784e3a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  uVar3 = DAT_14c98e618;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_140760c2c(param_2,local_30);
    FUN_1410a3d58(uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8),local_30,2);
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



// FUNCTION 147784f02 FUN_147784f02 body=328 status=ok
// SIG undefined FUN_147784f02(void)

void FUN_147784f02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408453d0();
  if (DAT_14c98e618 == 0) goto LAB_147784f54;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  cVar4 = FUN_1407579fa(lVar5);
  if ((cVar4 != '\0') || (*(longlong *)(param_1 + 0x2b8) != 0)) goto LAB_147784f54;
  FUN_1469abbd8(DAT_14c98e618,&local_30,*(undefined4 *)(param_1 + 0x2c8));
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2b8) = local_30;
    plVar6 = *(longlong **)(param_1 + 0x2c0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2c0) = 0;
LAB_147784fdd:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000147785008:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2b8) = local_30;
    plVar6 = *(longlong **)(param_1 + 0x2c0);
    if (local_28 == plVar6) {
      LOCK();
      plVar6 = local_28 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar1;
        goto joined_r0x000147785008;
      }
    }
    else {
      *(longlong **)(param_1 + 0x2c0) = local_28;
      if (plVar6 != (longlong *)0x0) goto LAB_147784fdd;
    }
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
LAB_147784f54:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778504c FUN_14778504c body=124 status=ok
// SIG undefined FUN_14778504c(void)

void FUN_14778504c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1402b6186();
  if ((DAT_14c98e618 != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) {
    FUN_1428f52e0(DAT_14c98e618,*(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8));
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    plVar3 = *(longlong **)(param_1 + 0x2c0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477850bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1477850c8 FUN_1477850c8 body=26 status=ok
// SIG undefined FUN_1477850c8(void)

void FUN_1477850c8(undefined8 param_1)

{
  FUN_144a7e84a();
  FUN_1477850e2(param_1);
  return;
}



// FUNCTION 1477850e2 FUN_1477850e2 body=720 status=ok
// SIG undefined FUN_1477850e2(void)

void FUN_1477850e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_528 [32];
  undefined1 local_508 [32];
  undefined **local_4e8;
  undefined2 local_4e0;
  undefined1 local_4de;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined8 local_4d0;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  longlong local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  longlong *local_498;
  undefined4 local_490;
  undefined8 local_48c;
  undefined2 local_484;
  undefined7 local_480;
  undefined4 uStack_479;
  undefined1 local_470 [296];
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 local_310 [296];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0 [352];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_528;
  if (((*(char *)(param_1 + 0x2d9) == '\x01') && (DAT_14c98e618 != 0)) &&
     (*(longlong *)(param_1 + 0x2b8) != 0)) {
    FUN_147785716(param_1,local_1b0);
    local_4bc = (float)*(double *)(param_1 + 0x488);
    local_4c0 = (float)*(double *)(param_1 + 0x480);
    local_4c4 = (float)*(double *)(param_1 + 0x478);
    local_4c8 = (float)*(double *)(param_1 + 0x470);
    local_4b0 = param_1 + 800;
    local_490 = *(undefined4 *)(param_1 + 0x2cc);
    local_4dc = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
    local_4e0 = *(undefined2 *)(param_1 + 0x318);
    local_4de = 0;
    local_4d0 = 0;
    local_4e8 = &PTR_FUN_149eda650;
    local_4b4 = local_4c4 - local_4bc;
    local_4b8 = local_4c8 - local_4c0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_498 = (longlong *)0x0;
    local_48c = 0x3f80000000000000;
    local_484 = 0;
    local_480 = 0;
    uStack_479 = 0;
    local_4d8 = local_4dc;
    cVar4 = FUN_144b010fc(local_1b0);
    if (cVar4 == '\0') {
      local_310[0] = DAT_14c96b238;
      local_1e8 = 0;
      local_1e0 = 0x400000000;
      local_1d8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      FUN_1403cd6b2(DAT_14c98e618,local_310,&local_4e8,0);
      local_470[0] = DAT_14c96b238;
      local_348 = 0;
      local_340 = 0x400000000;
      local_338 = 0;
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      FUN_1403d040a(local_508,local_470);
      FUN_1400e7f1c(param_1 + 0x2f8,local_508);
      FUN_1400cab68(local_508);
      FUN_1447fa21a(local_470);
      FUN_1447fa21a(local_310);
    }
    else {
      FUN_1403d040a(local_310,local_1b0);
      FUN_1400e7f1c(param_1 + 0x2f8,local_310);
      FUN_1400cab68(local_310);
      FUN_1403cd6b2(DAT_14c98e618,local_1b0,&local_4e8,0);
    }
    plVar3 = local_498;
    local_4e8 = &PTR_FUN_149eda650;
    if (local_498 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_498 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_498)(local_498);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1447fa21a(local_1b0);
  }
  if ((local_50 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477853b4 FUN_1477853b4 body=231 status=ok
// SIG undefined FUN_1477853b4(void)

undefined1 * FUN_1477853b4(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_3 + 0x110) != 0) {
    local_48 = *(undefined4 *)(param_3 + 0x100);
    uStack_44 = *(undefined4 *)(param_3 + 0x104);
    uStack_40 = *(undefined4 *)(param_3 + 0x108);
    uStack_3c = *(undefined4 *)(param_3 + 0x10c);
    local_58 = 0;
    FUN_147761a16(*(longlong *)(param_3 + 0x110),&local_38,&local_48,0);
    local_28 = local_38;
    local_20 = local_30;
    FUN_14493a2ae(param_2);
    FUN_14493a258(local_38,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14778549c FUN_14778549c body=335 status=ok
// SIG undefined FUN_14778549c(void)

void FUN_14778549c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8) != 0)) {
    uVar6 = FUN_147a0442c();
    FUN_1407329d4(uVar6,1,&local_48);
    uVar4 = uStack_40;
    lVar8 = (longlong)(int)uStack_40;
    uVar5 = (int)uStack_40 + 1;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
    if (uStack_40._4_4_ < uVar5) {
      FUN_140612240(&local_48,uVar4 & 0xffffffff);
    }
    lVar3 = local_48;
    *(undefined8 *)(local_48 + lVar8 * 8) = uVar6;
    lVar8 = (longlong)(int)uStack_40;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + lVar9);
        if (lVar2 != 0) {
          lVar7 = FUN_144a3a302();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            lVar7 = FUN_14587db9c();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_140c43e06(param_2,iVar1);
              }
              *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
            }
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar8 * 8 != lVar9);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477855ec FUN_1477855ec body=297 status=ok
// SIG undefined FUN_1477855ec(void)

void * FUN_1477855ec(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  memcpy(param_1,param_2,0xb8);
  FUN_144b23946((longlong)param_1 + 0xb8,(longlong)param_2 + 0xb8);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0xe0);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xe8);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xec);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xf0);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xd8) = *(undefined8 *)((longlong)param_2 + 0xd8);
  *(undefined8 *)((longlong)param_1 + 0xe0) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xe8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf0) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xf8) = *(undefined8 *)((longlong)param_2 + 0xf8);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x108);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)((longlong)param_1 + 0x100) = *(undefined4 *)((longlong)param_2 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x108) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x110) = *(undefined8 *)((longlong)param_2 + 0x110);
  FUN_1477a9448((longlong)param_1 + 0x118,(longlong)param_2 + 0x118);
  *(undefined8 *)((longlong)param_1 + 600) = *(undefined8 *)((longlong)param_2 + 600);
  *(undefined8 *)((longlong)param_1 + 0x260) = *(undefined8 *)((longlong)param_2 + 0x260);
  *(undefined8 *)((longlong)param_2 + 600) = 0;
  *(undefined8 *)((longlong)param_2 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = *(undefined8 *)((longlong)param_2 + 0x268);
  *(undefined8 *)((longlong)param_2 + 0x268) = 0;
  *(undefined4 *)((longlong)param_1 + 0x270) = *(undefined4 *)((longlong)param_2 + 0x270);
  *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)((longlong)param_2 + 0x274);
  *(undefined8 *)((longlong)param_2 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = *(undefined8 *)((longlong)param_2 + 0x2a8);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x278);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x280);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x288);
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x290);
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x2a0);
  *(undefined8 *)((longlong)param_1 + 0x298) = *(undefined8 *)((longlong)param_2 + 0x298);
  *(undefined8 *)((longlong)param_1 + 0x2a0) = uVar9;
  *(undefined8 *)((longlong)param_1 + 0x288) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x290) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x278) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x280) = uVar6;
  return param_1;
}



// FUNCTION 147785716 FUN_147785716 body=558 status=ok
// SIG undefined FUN_147785716(void)

undefined1 * FUN_147785716(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_328 [40];
  longlong *local_300;
  longlong *local_2f8;
  undefined1 local_2f0 [256];
  longlong local_1f0 [2];
  longlong local_1e0;
  undefined1 local_1d8 [352];
  char local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined2 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59a) = 0;
  plVar2 = (longlong *)param_1[0x92];
  param_1[0x92] = 0;
  (**(code **)(*param_1 + 0x618))(param_1,local_2f0);
  memcpy(param_1 + 0x93,local_2f0,0x100);
  if ((local_1e0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_1e0);
  }
  param_1[0x92] = local_1e0;
  param_1[0x90] = param_1[0x8e];
  param_1[0x91] = param_1[0x8f];
  plVar6 = param_1 + 0x90;
  if (local_78 != '\0') {
    plVar6 = local_1f0;
  }
  uVar3 = *(undefined4 *)((longlong)plVar6 + 4);
  lVar7 = plVar6[1];
  uVar4 = *(undefined4 *)((longlong)plVar6 + 0xc);
  *(int *)(param_1 + 0x8e) = (int)*plVar6;
  *(undefined4 *)((longlong)param_1 + 0x474) = uVar3;
  *(int *)(param_1 + 0x8f) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x47c) = uVar4;
  FUN_1401bb69a(param_2,local_1d8);
  if ((longlong *)param_1[0x92] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x92] + 0xab8))();
  }
  cVar5 = FUN_144b010fc(param_2);
  if (cVar5 != '\0') {
    puVar8 = param_2 + 8;
    if (*(undefined1 **)(param_2 + 0x128) != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_2 + 0x128);
    }
    iVar1 = *(int *)(param_2 + 0x130);
    if ((longlong)iVar1 != 0) {
      lVar7 = 0;
      do {
        if (*(char *)((longlong)*(longlong **)(puVar8 + lVar7 + 0x38) + 0x3a) == '\x01') {
          cVar5 = (**(code **)(**(longlong **)(puVar8 + lVar7 + 0x38) + 0x1a8))();
          if (cVar5 != '\0') {
            *(undefined1 *)(param_1 + 0xb3) = 1;
          }
          cVar5 = (**(code **)(**(longlong **)(puVar8 + lVar7 + 0x38) + 400))();
          if (cVar5 != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x599) = 1;
          }
        }
        if ((*(byte *)(*(longlong *)(puVar8 + lVar7 + 0x38) + 0x39) & 8) != 0) {
          *(undefined1 *)((longlong)param_1 + 0x59a) = 1;
        }
        lVar7 = lVar7 + 0x48;
      } while ((longlong)iVar1 * 0x48 != lVar7);
    }
  }
  plVar6 = (longlong *)param_1[0x92];
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xab8))(plVar2);
      plVar6 = (longlong *)param_1[0x92];
    }
    local_300 = plVar6;
    local_2f8 = plVar2;
    FUN_1447cd2ec(param_1 + 0x55);
  }
  FUN_1447fa21a(local_1d8);
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147785946 FUN_147785946 body=1698 status=ok
// SIG undefined FUN_147785946(void)

void FUN_147785946(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_3a8 [32];
  float *local_388;
  longlong *local_380;
  longlong *local_378;
  undefined4 local_370;
  longlong local_368;
  undefined4 *local_360;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  undefined **local_328;
  ushort local_320;
  undefined1 uStack_31e;
  undefined4 uStack_31c;
  int iStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined *puStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined2 uStack_2c4;
  uint uStack_2c1;
  undefined4 uStack_2bd;
  undefined4 uStack_2b9;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined **local_2a8;
  ushort local_2a0;
  undefined1 uStack_29e;
  undefined4 uStack_29c;
  int iStack_298;
  undefined8 local_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  undefined *puStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong *local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined2 uStack_244;
  uint uStack_241;
  undefined4 uStack_23d;
  undefined4 uStack_239;
  undefined1 local_1f0 [352];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((DAT_14c98e618 == 0) || (*(longlong *)(param_1 + 0x2b8) == 0)) goto LAB_147785f23;
  plVar10 = (longlong *)(param_1 + 800);
  if (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354)) {
    lVar4 = *param_2;
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar11 = (uint)lVar4 & 0xffff;
    lVar7 = param_1 + 0x358;
    if (*(longlong *)(param_1 + 0x360) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x360);
    }
    iVar12 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x368) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar11) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        if (*(longlong *)(*plVar10 + (longlong)iVar12 * 0x20) == lVar4) goto LAB_147785f23;
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + *plVar10 + 0x18);
      } while (iVar12 != -1);
    }
  }
  FUN_14113bfae(plVar10,local_1f0,param_2,0);
  if (*(int *)(param_1 + 0x300) < 1) {
    FUN_147785716(param_1,local_1f0);
    FUN_1403d040a(&local_2a8,local_1f0);
    FUN_1400e7f1c(param_1 + 0x2f8,&local_2a8);
    FUN_1400cab68(&local_2a8);
    FUN_1447fa21a(local_1f0);
  }
  local_388 = (float *)CONCAT71(local_388._1_7_,DAT_14c96b238);
  FUN_1404dd4fa(param_1 + 0x2f8,local_1f0,0,0);
  local_320 = local_320 & 0xfe00;
  uStack_31e = 0;
  uStack_31c = 0;
  iStack_318 = 0xffffffff;
  local_310 = 0;
  local_328 = &PTR_FUN_149eda650;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  puStack_2f0 = &DAT_14c96b1e8;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = (longlong *)0x0;
  uStack_2d0 = 0;
  local_2c8 = 0x3f800000;
  uStack_2c4 = 0;
  uStack_2c1 = (uint)(byte)uStack_2c1;
  uStack_2bd = 0;
  uStack_2b9 = 0;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x2b8) + 8);
  if (((longlong)iVar12 < 0) || (*(int *)(DAT_14c98e618 + 0x318) <= iVar12)) {
LAB_147785b3f:
    plVar9 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_2a8);
    iVar12 = (int)local_2a8;
  }
  else {
    lVar7 = (longlong)iVar12 * 0x10;
    lVar4 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x310) + lVar7);
    plVar9 = *(longlong **)(*(longlong *)(DAT_14c98e618 + 0x310) + 8 + lVar7);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      iVar12 = -1;
    }
    else {
      uVar2 = *(undefined4 *)(lVar4 + 0x1c);
      plVar8 = (longlong *)FUN_144a81a0a();
      (**(code **)(*plVar8 + 0x60))(plVar8,&local_2a8,uVar2);
      iVar12 = (int)local_2a8;
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
    if (iVar12 < 0) goto LAB_147785b3f;
  }
  cVar6 = FUN_140230860(param_2);
  if (cVar6 == '\0') {
    local_2b0 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
    local_2ac = 1;
    local_368 = param_1 + 0x318;
    local_340 = *param_2;
    local_338 = param_2[1];
    local_330 = param_2[2];
    if (local_330 != 0) {
      LOCK();
      *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
      UNLOCK();
    }
    local_344 = (float)*(double *)(param_1 + 0x488);
    local_348 = (float)*(double *)(param_1 + 0x480);
    local_388 = &local_348;
    local_34c = (float)*(double *)(param_1 + 0x478);
    local_350 = (float)*(double *)(param_1 + 0x470);
    local_360 = &local_2b0;
    local_378 = &local_340;
    local_370 = 0;
    local_380 = plVar10;
    FUN_140553814(&local_2a8,iVar12,*(undefined4 *)(param_1 + 0x2cc));
    local_310 = local_290;
    local_320 = local_2a0;
    uStack_31e = uStack_29e;
    uStack_31c = uStack_29c;
    iStack_318 = iStack_298;
    local_308 = CONCAT44(fStack_284,local_288);
    uStack_300 = CONCAT44(fStack_27c,fStack_280);
    local_2f8 = CONCAT44(fStack_274,local_278);
    puStack_2f0 = puStack_270;
    FUN_1413a4742(&local_2e8,&local_268);
    uStack_2d0 = CONCAT44(uStack_24c,local_250);
  }
  else {
    fVar15 = (float)*(double *)(param_1 + 0x488);
    fVar13 = (float)*(double *)(param_1 + 0x480);
    fVar14 = (float)*(double *)(param_1 + 0x478);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
    fVar16 = (float)*(double *)(param_1 + 0x470);
    uVar3 = *(undefined4 *)(param_1 + 0x2cc);
    local_2a8 = &PTR_FUN_149eda670;
    local_2a0 = 0;
    uStack_29e = 0;
    local_290 = 0;
    iStack_298 = iVar12;
    plVar10 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar10 + 0x58))(plVar10,&uStack_29c,iVar12);
    local_2a8 = &PTR_FUN_149eda650;
    fStack_274 = fVar14 - fVar15;
    local_278 = fVar16 - fVar13;
    puStack_270 = &DAT_14c96b1e8;
    local_268 = DAT_14c966e98;
    uStack_260 = DAT_14c966ea0;
    local_258 = DAT_14c966ea8;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    uStack_24c = 0;
    uStack_248 = 0x3f800000;
    uStack_244 = 1;
    uStack_241 = (uint)(byte)uStack_241;
    uStack_23d = 0;
    uStack_239 = 0;
    local_310 = local_290;
    local_320 = local_2a0;
    uStack_31e = uStack_29e;
    iStack_318 = iStack_298;
    local_2f8 = CONCAT44(fStack_274,local_278);
    puStack_2f0 = &DAT_14c96b1e8;
    local_308 = CONCAT44(fVar14,fVar16);
    uStack_300 = CONCAT44(fVar15,fVar13);
    uStack_31c = uVar2;
    uStack_29c = uVar2;
    local_288 = fVar16;
    fStack_284 = fVar14;
    fStack_280 = fVar13;
    fStack_27c = fVar15;
    local_250 = uVar3;
    FUN_1413a4742(&local_2e8);
    uStack_2d0 = CONCAT44(uStack_24c,local_250);
  }
  plVar10 = local_258;
  local_2a8 = &PTR_FUN_149eda650;
  local_2c8 = uStack_248;
  uStack_2c4 = uStack_244;
  uStack_2c1 = uStack_241;
  uStack_2bd = uStack_23d;
  uStack_2b9 = uStack_239;
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_258 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_1411d3bc2(DAT_14c98e618,&local_2a8,local_1f0,&local_328);
  FUN_14493db24(&local_2a8);
  plVar10 = local_2d8;
  local_328 = &PTR_FUN_149eda650;
  if (local_2d8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2d8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2d8)(local_2d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_1447fa21a(local_1f0);
LAB_147785f23:
  plVar10 = (longlong *)param_2[2];
  if (plVar10 != (longlong *)0x0) {
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
  if ((local_90 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147785fea FUN_147785fea body=1640 status=ok
// SIG undefined FUN_147785fea(void)

void FUN_147785fea(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_448 [32];
  float *local_428;
  longlong *local_420;
  longlong *local_418;
  undefined4 local_410;
  longlong local_408;
  undefined4 *local_400;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  undefined **local_3d0;
  ushort local_3c8;
  undefined1 uStack_3c6;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined *puStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  longlong *local_380;
  undefined8 uStack_378;
  undefined4 local_370;
  undefined2 uStack_36c;
  uint uStack_369;
  undefined4 uStack_365;
  undefined4 uStack_361;
  undefined4 local_358;
  undefined1 local_354;
  undefined **local_350;
  ushort local_348;
  undefined1 uStack_346;
  undefined4 uStack_344;
  int iStack_340;
  undefined8 local_338;
  float local_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_320;
  float fStack_31c;
  undefined *puStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  longlong *local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined2 uStack_2ec;
  uint uStack_2e9;
  undefined4 uStack_2e5;
  undefined4 uStack_2e1;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0 [352];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (((DAT_14c98e618 != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
     (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354))) {
    lVar4 = *param_2;
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar11 = (uint)lVar4 & 0xffff;
    lVar7 = param_1 + 0x358;
    if (*(longlong *)(param_1 + 0x360) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x360);
    }
    iVar12 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x368) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar11) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar12 != -1) {
      plVar10 = (longlong *)(param_1 + 800);
      do {
        if (*(longlong *)(*plVar10 + (longlong)iVar12 * 0x20) == lVar4) {
          FUN_140bedc94(plVar10,param_2);
          local_428 = (float *)CONCAT71(local_428._1_7_,DAT_14c96b238);
          FUN_1404dd4fa(param_1 + 0x2f8,local_1f0,0,0);
          local_350 = (undefined **)CONCAT71(local_350._1_7_,DAT_14c96b238);
          local_228 = 0;
          local_220 = 0x400000000;
          local_218 = 0;
          local_210 = 0;
          uStack_208 = 0;
          local_200 = 0;
          uStack_1f8 = 0;
          FUN_1403d040a(&local_3d0,&local_350);
          FUN_1400e7f1c(param_1 + 0x2f8,&local_3d0);
          FUN_1400cab68(&local_3d0);
          FUN_1447fa21a(&local_350);
          local_3c8 = local_3c8 & 0xfe00;
          uStack_3c6 = 0;
          uStack_3c4 = 0;
          iStack_3c0 = 0xffffffff;
          local_3b8 = 0;
          local_3d0 = &PTR_FUN_149eda650;
          local_3b0 = 0;
          uStack_3a8 = 0;
          local_3a0 = 0;
          puStack_398 = &DAT_14c96b1e8;
          local_390 = 0;
          uStack_388 = 0;
          local_380 = (longlong *)0x0;
          uStack_378 = 0;
          local_370 = 0x3f800000;
          uStack_36c = 0;
          uStack_369 = (uint)(byte)uStack_369;
          uStack_365 = 0;
          uStack_361 = 0;
          iVar12 = *(int *)(*(longlong *)(param_1 + 0x2b8) + 8);
          if (((longlong)iVar12 < 0) || (*(int *)(DAT_14c98e618 + 0x318) <= iVar12)) {
LAB_1477862ee:
            plVar9 = (longlong *)FUN_144a81a0a();
            (**(code **)(*plVar9 + 0x50))(plVar9,&local_350);
            iVar12 = (int)local_350;
          }
          else {
            lVar7 = (longlong)iVar12 * 0x10;
            lVar4 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x310) + lVar7);
            plVar9 = *(longlong **)(*(longlong *)(DAT_14c98e618 + 0x310) + 8 + lVar7);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            if (lVar4 == 0) {
              iVar12 = -1;
            }
            else {
              uVar2 = *(undefined4 *)(lVar4 + 0x1c);
              plVar8 = (longlong *)FUN_144a81a0a();
              (**(code **)(*plVar8 + 0x60))(plVar8,&local_350,uVar2);
              iVar12 = (int)local_350;
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
            if (iVar12 < 0) goto LAB_1477862ee;
          }
          cVar6 = FUN_140230860(param_2);
          if (cVar6 == '\0') {
            local_358 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
            local_354 = 1;
            local_408 = param_1 + 0x318;
            local_3e8 = *param_2;
            local_3e0 = param_2[1];
            local_3d8 = param_2[2];
            if (local_3d8 != 0) {
              LOCK();
              *(int *)(local_3d8 + 8) = *(int *)(local_3d8 + 8) + 1;
              UNLOCK();
            }
            local_3ec = (float)*(double *)(param_1 + 0x488);
            local_3f0 = (float)*(double *)(param_1 + 0x480);
            local_428 = &local_3f0;
            local_3f4 = (float)*(double *)(param_1 + 0x478);
            local_3f8 = (float)*(double *)(param_1 + 0x470);
            local_400 = &local_358;
            local_418 = &local_3e8;
            local_410 = 0;
            local_420 = plVar10;
            FUN_140553814(&local_350,iVar12,*(undefined4 *)(param_1 + 0x2cc));
            local_3b8 = local_338;
            local_3c8 = local_348;
            uStack_3c6 = uStack_346;
            uStack_3c4 = uStack_344;
            iStack_3c0 = iStack_340;
            local_3b0 = CONCAT44(fStack_32c,local_330);
            uStack_3a8 = CONCAT44(fStack_324,fStack_328);
            local_3a0 = CONCAT44(fStack_31c,local_320);
            puStack_398 = puStack_318;
            FUN_1413a4742(&local_390,&local_310);
            uStack_378 = CONCAT44(uStack_2f4,local_2f8);
          }
          else {
            fVar15 = (float)*(double *)(param_1 + 0x488);
            fVar13 = (float)*(double *)(param_1 + 0x480);
            fVar14 = (float)*(double *)(param_1 + 0x478);
            uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
            fVar16 = (float)*(double *)(param_1 + 0x470);
            uVar3 = *(undefined4 *)(param_1 + 0x2cc);
            local_350 = &PTR_FUN_149eda670;
            local_348 = 0;
            uStack_346 = 0;
            local_338 = 0;
            iStack_340 = iVar12;
            plVar10 = (longlong *)FUN_144a81a0a();
            (**(code **)(*plVar10 + 0x58))(plVar10,&uStack_344,iVar12);
            local_350 = &PTR_FUN_149eda650;
            fStack_31c = fVar14 - fVar15;
            local_320 = fVar16 - fVar13;
            puStack_318 = &DAT_14c96b1e8;
            local_310 = DAT_14c966e98;
            uStack_308 = DAT_14c966ea0;
            local_300 = DAT_14c966ea8;
            if (DAT_14c966ea8 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
              UNLOCK();
            }
            uStack_2f4 = 0;
            uStack_2f0 = 0;
            uStack_2ec = 1;
            uStack_2e9 = (uint)(byte)uStack_2e9;
            uStack_2e5 = 0;
            uStack_2e1 = 0;
            local_3b8 = local_338;
            local_3c8 = local_348;
            uStack_3c6 = uStack_346;
            iStack_3c0 = iStack_340;
            local_3a0 = CONCAT44(fStack_31c,local_320);
            puStack_398 = &DAT_14c96b1e8;
            local_3b0 = CONCAT44(fVar14,fVar16);
            uStack_3a8 = CONCAT44(fVar15,fVar13);
            uStack_3c4 = uVar2;
            uStack_344 = uVar2;
            local_330 = fVar16;
            fStack_32c = fVar14;
            fStack_328 = fVar13;
            fStack_324 = fVar15;
            local_2f8 = uVar3;
            FUN_1413a4742(&local_390);
            uStack_378 = CONCAT44(uStack_2f4,local_2f8);
          }
          plVar10 = local_300;
          local_350 = &PTR_FUN_149eda650;
          local_370 = uStack_2f0;
          uStack_36c = uStack_2ec;
          uStack_369 = uStack_2e9;
          uStack_365 = uStack_2e5;
          uStack_361 = uStack_2e1;
          if (local_300 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_300 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_300)(local_300);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          FUN_141229344(DAT_14c98e618,&local_350,local_1f0,&local_3d0);
          FUN_14493db24(&local_350);
          plVar10 = local_380;
          local_3d0 = &PTR_FUN_149eda650;
          if (local_380 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_380 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_380)(local_380);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          FUN_1447fa21a(local_1f0);
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + *plVar10 + 0x18);
      } while (iVar12 != -1);
    }
  }
  plVar10 = (longlong *)param_2[2];
  if (plVar10 != (longlong *)0x0) {
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
  if ((local_90 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147786654 FUN_147786654 body=564 status=ok
// SIG undefined FUN_147786654(void)

byte FUN_147786654(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  undefined **local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined **local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  undefined4 local_44;
  uint local_3c;
  undefined4 local_38;
  char local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((DAT_14c98e618 == 0) || (*(longlong *)(param_1 + 0x2b8) == 0)) {
    bVar4 = 0;
  }
  else {
    local_b8 = &local_3c;
    FUN_14778688a(param_2,&local_31,&local_38,&local_32);
    local_74 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
    local_60 = *param_2;
    local_58 = param_2[1];
    plVar3 = (longlong *)param_2[2];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_78 = *(undefined2 *)(param_1 + 0x318);
    local_68 = 0;
    local_80 = &PTR_FUN_149eda6d0;
    local_76 = param_3;
    local_70 = local_74;
    local_50 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      local_48 = local_3c;
      local_44 = local_38;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = local_3c;
      local_44 = local_38;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    bVar4 = FUN_1409eff00(DAT_14c98e618,&local_80);
    if ((local_32 == '\x01') && (local_3c < 0xd800 || (local_3c & 0xffffe000) == 0xe000)) {
      local_9c = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
      local_a0 = *(undefined2 *)(param_1 + 0x318);
      local_90 = 0;
      local_a8 = &PTR_FUN_149eda6b0;
      local_88 = (undefined2)local_3c;
      local_9e = param_3;
      local_98 = local_9c;
      bVar5 = FUN_140bf0dd6(DAT_14c98e618);
    }
    else {
      bVar5 = 0;
    }
    plVar3 = local_50;
    local_80 = &PTR_FUN_149eda6d0;
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
    bVar4 = bVar4 | bVar5;
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778688a FUN_14778688a body=258 status=ok
// SIG undefined FUN_14778688a(void)

void FUN_14778688a(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_1409efacc();
  local_60 = *param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1459abdd0(uVar2,&local_60,&local_40,&local_48);
  *(bool *)param_2 = local_40 != (undefined4 *)0x0;
  *param_4 = local_48 != (undefined4 *)0x0;
  if (local_40 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *local_40;
  }
  *param_3 = uVar3;
  if (local_48 == (undefined4 *)0x0) {
    *param_5 = 0;
    lVar1 = *param_1;
    if (lVar1 == DAT_14c964d70) {
      *param_5 = 9;
    }
    else if (lVar1 == DAT_14c966f40) {
      *param_5 = 8;
    }
    else {
      if (lVar1 != DAT_14c964d88) goto LAB_147786925;
      *param_5 = 10;
    }
    *param_4 = 1;
  }
  else {
    *param_5 = *local_48;
  }
LAB_147786925:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778698e FUN_14778698e body=409 status=ok
// SIG undefined FUN_14778698e(void)

undefined4 FUN_14778698e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined **local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14c98e618 == 0) || (*(longlong *)(param_1 + 0x2b8) == 0)) {
    uVar4 = 0;
  }
  else {
    local_88 = &local_34;
    FUN_14778688a(param_2,&local_29,&local_30,&local_2a);
    local_6c = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
    local_58 = *param_2;
    local_50 = param_2[1];
    plVar3 = (longlong *)param_2[2];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_70 = *(undefined2 *)(param_1 + 0x318);
    local_6e = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_149eda6d0;
    local_68 = local_6c;
    local_48 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      local_40 = local_34;
      local_3c = local_30;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_40 = local_34;
      local_3c = local_30;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    uVar4 = FUN_140dcb8ee(DAT_14c98e618,&local_78);
    plVar3 = local_48;
    local_78 = &PTR_FUN_149eda6d0;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  plVar3 = (longlong *)param_2[2];
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
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147786b28 FUN_147786b28 body=212 status=ok
// SIG undefined FUN_147786b28(void)

byte FUN_147786b28(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_2[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  bVar4 = (**(code **)(*param_1 + 0x5e8))(param_1,&local_38,0);
  local_50 = *param_2;
  local_48 = param_2[1];
  local_40 = param_2[2];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  bVar5 = (**(code **)(*param_1 + 0x5f0))(param_1,&local_50);
  plVar3 = (longlong *)param_2[2];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar4 | bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147786bfe FUN_147786bfe body=266 status=ok
// SIG undefined FUN_147786bfe(void)

byte FUN_147786bfe(longlong param_1,longlong *param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c98e618 == 0) || (*(longlong *)(param_1 + 0x2b8) == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    if ((int)param_2[1] - 2U < 0x7fffffff) {
      lVar3 = 0;
      bVar4 = 0;
      do {
        local_50 = *(undefined2 *)(*param_2 + lVar3 * 2);
        local_64 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
        local_68 = *(undefined2 *)(param_1 + 0x318);
        local_58 = 0;
        local_70 = &PTR_FUN_149eda6b0;
        local_66 = param_3;
        local_60 = local_64;
        bVar1 = FUN_140bf0dd6(DAT_14c98e618,&local_70);
        bVar4 = bVar4 | bVar1;
        lVar3 = lVar3 + 1;
        iVar2 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          iVar2 = 0;
        }
      } while (lVar3 < iVar2);
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4 & 1;
}



// FUNCTION 147786d0a FUN_147786d0a body=577 status=ok
// SIG undefined FUN_147786d0a(void)

void FUN_147786d0a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined2 local_2b8;
  undefined1 local_2b6;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  longlong local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong *local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined2 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_248 [184];
  undefined1 local_190 [352];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((DAT_14c98e618 != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) {
    local_2c8 = CONCAT71(local_2c8._1_7_,DAT_14c96b238);
    FUN_1404dd4fa(param_1 + 0x2f8,local_190,0,0);
    plVar3 = DAT_14c964d38;
    local_278 = DAT_14c964d30;
    local_280 = DAT_14c964d28;
    if (DAT_14c964d38 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
      UNLOCK();
    }
    local_294 = (float)*(double *)(param_1 + 0x488);
    local_298 = (float)*(double *)(param_1 + 0x480);
    local_29c = (float)*(double *)(param_1 + 0x478);
    local_288 = param_1 + 800;
    local_2a0 = (float)*(double *)(param_1 + 0x470);
    local_268 = *(undefined4 *)(param_1 + 0x2cc);
    local_2b4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 8);
    local_2b8 = *(undefined2 *)(param_1 + 0x318);
    local_2b6 = 0;
    local_2a8 = 0;
    local_2c0 = &PTR_FUN_149eda650;
    local_28c = local_29c - local_294;
    local_290 = local_2a0 - local_298;
    local_270 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_264 = 0x3f80000000000000;
    local_25c = 0;
    local_258 = 0;
    local_250 = 0;
    local_24e = 0;
    local_2b0 = local_2b4;
    local_254 = param_2;
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
    local_2c8 = 0;
    FUN_1456cda32(DAT_14c98e618,local_248,local_190,&local_2c0);
    FUN_14493db24(local_248);
    plVar3 = local_270;
    local_2c0 = &PTR_FUN_149eda650;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_270 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1447fa21a(local_190);
  }
  if ((local_30 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147786f4c FUN_147786f4c body=76 status=ok
// SIG undefined FUN_147786f4c(void)

void FUN_147786f4c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147786ff2();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x170) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x168) + (ulonglong)uVar1 * 8) + 0x30);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 147786f98 FUN_147786f98 body=52 status=ok
// SIG undefined FUN_147786f98(void)

undefined8 FUN_147786f98(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_147786ff2();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x170) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x168) + (ulonglong)uVar1 * 8) + 0x30);
  }
  return uVar2;
}



// FUNCTION 147786fcc FUN_147786fcc body=37 status=ok
// SIG undefined FUN_147786fcc(void)

void FUN_147786fcc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147786ff2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147786ff2 FUN_147786ff2 body=105 status=ok
// SIG undefined FUN_147786ff2(void)

undefined4 FUN_147786ff2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 == 0) {
    puVar5 = (undefined4 *)(param_1 + 0x180);
  }
  else {
    puVar5 = (undefined4 *)(lVar1 + 0x1e0);
    if ((*(int *)(lVar1 + 0x1f0) != 0) && (*(longlong **)(lVar1 + 0x1e8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1e8) + 0x30))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x1f0) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x1e8);
        }
        uVar3 = (**(code **)(*plVar4 + 0x58))();
        *puVar5 = uVar3;
      }
    }
  }
  return *puVar5;
}



// FUNCTION 14778708e FUN_14778708e body=187 status=ok
// SIG undefined FUN_14778708e(void)

void FUN_14778708e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x170) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)local_24 * 8) + 0x30);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778714a FUN_14778714a body=33 status=ok
// SIG undefined FUN_14778714a(void)

undefined8 FUN_14778714a(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x170))) {
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x168) + (ulonglong)param_2 * 8) + 0x30);
  }
  return 0;
}



// FUNCTION 14778716c FUN_14778716c body=160 status=ok
// SIG undefined FUN_14778716c(void)

void FUN_14778716c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x328))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778720e FUN_14778720e body=158 status=ok
// SIG undefined FUN_14778720e(void)

void FUN_14778720e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 800))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477872ae FUN_1477872ae body=21 status=ok
// SIG undefined FUN_1477872ae(void)

void FUN_1477872ae(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147786ff2();
  *param_2 = uVar1;
  return;
}



// FUNCTION 1477872d6 FUN_1477872d6 body=162 status=ok
// SIG undefined FUN_1477872d6(void)

void FUN_1477872d6(longlong param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x180) != param_2) {
    *(int *)(param_1 + 0x180) = param_2;
    local_20 = DAT_14cab9280;
    local_28 = DAT_14cab9278;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x188) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778738a FUN_14778738a body=167 status=ok
// SIG undefined FUN_14778738a(void)

void FUN_14778738a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_14774360c();
  if (*(int *)(param_1 + 0x180) != iVar1) {
    *(int *)(param_1 + 0x180) = iVar1;
    local_20 = DAT_14cab9280;
    local_28 = DAT_14cab9278;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x188) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787448 FUN_147787448 body=102 status=ok
// SIG undefined FUN_147787448(void)

void FUN_147787448(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 400);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1477874b0(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477874b0 FUN_1477874b0 body=372 status=ok
// SIG undefined FUN_1477874b0(void)

void FUN_1477874b0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e9;
  code *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8 [3];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  uint local_98;
  undefined1 local_94;
  uint local_90;
  undefined1 local_8c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_146aa0f24(*param_2,local_d8,0xffffffff);
  *(undefined8 *)(param_1 + 0x38) = local_d8[0];
  local_118 = *(undefined4 *)(param_1 + 0x40);
  uStack_114 = *(undefined4 *)(param_1 + 0x44);
  uStack_110 = *(undefined4 *)(param_1 + 0x48);
  uStack_10c = *(undefined4 *)(param_1 + 0x4c);
  local_108 = 1;
  local_100 = 0;
  uStack_f8 = 0;
  local_b0 = 1;
  local_c0 = local_118;
  uStack_bc = uStack_114;
  uStack_b8 = uStack_110;
  uStack_b4 = uStack_10c;
  FUN_144a450dc(local_a8,&local_100);
  FUN_1449db362(&local_100);
  local_98 = (uint)*(byte *)(param_1 + 0x50);
  local_94 = 1;
  local_90 = (uint)*(byte *)(param_1 + 0x51);
  local_8c = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_128 = DAT_14c98dec8;
    local_120 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_e0 = &local_e9;
    local_e8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_128);
  }
  FUN_147787cc2(local_d8,&local_128);
  plVar3 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_146b0f73a(local_d8);
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
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787626 FUN_147787626 body=173 status=ok
// SIG undefined FUN_147787626(void)

void FUN_147787626(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x188);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146aa14e8(uVar3,&local_38);
    }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477876d4 FUN_1477876d4 body=674 status=ok
// SIG undefined FUN_1477876d4(void)

undefined8 * FUN_1477876d4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined8 local_258;
  longlong local_250;
  undefined1 local_241;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined8 local_228;
  longlong *local_220;
  undefined1 local_218 [464];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_146b0f50a(local_218);
  local_268 = &local_241;
  FUN_146b0f9a2(local_240,"SWidgetSwitcher",".\\Runtime/UMG/Private/Components/WidgetSwitcher.cpp",
                0x7f);
  FUN_146b0f59c(local_240,&local_228,local_218);
  plVar6 = local_220;
  if (local_220 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_228;
    plVar9 = *(longlong **)(param_1 + 400);
    if (plVar9 == (longlong *)0x0) goto LAB_14778777f;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_14778793e:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14778777f;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_220 + 1) = (int)local_220[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_228;
    plVar9 = *(longlong **)(param_1 + 400);
    if (local_220 != plVar9) {
      *(longlong **)(param_1 + 400) = local_220;
      if (plVar9 == (longlong *)0x0) goto LAB_14778777f;
      goto LAB_14778793e;
    }
    LOCK();
    plVar9 = local_220 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14778777f;
    (**(code **)*local_220)(local_220);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_14778777f:
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_220 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  if (local_238 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_238 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar1 = (int *)((longlong)local_238 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_238 + 0x10))(local_238);
      }
    }
  }
  FUN_146b0f610(local_218);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_1459913e6();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_258 = *(undefined8 *)(param_1 + 0x188);
          local_250 = *(longlong *)(param_1 + 400);
          if (local_250 != 0) {
            LOCK();
            *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
            UNLOCK();
          }
          FUN_1477874b0(lVar4,&local_258);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x188);
  plVar6 = *(longlong **)(param_1 + 400);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787978 FUN_147787978 body=86 status=ok
// SIG undefined FUN_147787978(void)

void FUN_147787978(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    iVar2 = 1;
    if (1 < *(int *)(param_1 + 0x170)) {
      iVar2 = *(int *)(param_1 + 0x170);
    }
    iVar1 = iVar2 + -1;
    if (*(int *)(param_1 + 0x180) < iVar2 + -1) {
      iVar1 = *(int *)(param_1 + 0x180);
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_146aa1730(*(longlong *)(param_1 + 0x188),iVar2);
    return;
  }
  return;
}



// FUNCTION 1477879ce FUN_1477879ce body=171 status=ok
// SIG undefined FUN_1477879ce(void)

void FUN_1477879ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x50) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787a7a FUN_147787a7a body=163 status=ok
// SIG undefined FUN_147787a7a(void)

void FUN_147787a7a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_147787b1e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787b1e FUN_147787b1e body=117 status=ok
// SIG undefined FUN_147787b1e(void)

void FUN_147787b1e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787b94 FUN_147787b94 body=171 status=ok
// SIG undefined FUN_147787b94(void)

void FUN_147787b94(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x51) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787c40 FUN_147787c40 body=62 status=ok
// SIG undefined FUN_147787c40(void)

void FUN_147787c40(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147787b1e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787cc2 FUN_147787cc2 body=136 status=ok
// SIG undefined FUN_147787cc2(void)

longlong FUN_147787cc2(longlong param_1,undefined8 *param_2)

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
      goto joined_r0x000147787d1b;
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
joined_r0x000147787d1b:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 147787d4a FUN_147787d4a body=135 status=ok
// SIG undefined FUN_147787d4a(void)

void FUN_147787d4a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x40);
  uStack_24 = *(undefined4 *)(param_1 + 0x44);
  uStack_20 = *(undefined4 *)(param_1 + 0x48);
  uStack_1c = *(undefined4 *)(param_1 + 0x4c);
  FUN_147787b1e();
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x38) != (uint)*(byte *)(param_1 + 0x50)) {
      *(uint *)(lVar1 + 0x38) = (uint)*(byte *)(param_1 + 0x50);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (lVar1 == 0) goto LAB_147787da4;
    }
    if (*(uint *)(lVar1 + 0x3c) != (uint)*(byte *)(param_1 + 0x51)) {
      *(uint *)(lVar1 + 0x3c) = (uint)*(byte *)(param_1 + 0x51);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
LAB_147787da4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787de2 FUN_147787de2 body=161 status=ok
// SIG undefined FUN_147787de2(void)

void FUN_147787de2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_146aa298a(*(longlong *)(param_1 + 0x188),local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787e84 FUN_147787e84 body=183 status=ok
// SIG undefined FUN_147787e84(void)

void FUN_147787e84(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146aa29c6();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787f3c FUN_147787f3c body=161 status=ok
// SIG undefined FUN_147787f3c(void)

void FUN_147787f3c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_146aa29a8(*(longlong *)(param_1 + 0x188),local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147787fe8 FUN_147787fe8 body=123 status=ok
// SIG undefined FUN_147787fe8(void)

void FUN_147787fe8(longlong param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *param_2;
  *(char *)(param_1 + 0x180) = cVar1;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    puVar2 = &DAT_14c96b1e1;
    if (cVar1 != '\0') {
      puVar2 = &DAT_14c96b238;
    }
    local_20 = *puVar2;
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x188) + 0x288) + 0x1c0))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788076 FUN_147788076 body=320 status=ok
// SIG undefined FUN_147788076(void)

void FUN_147788076(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(char *)(param_1 + 0x181) = param_2;
  uVar1 = DAT_14c98e618;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_1469aa6fe(DAT_14c98e618);
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  else {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14a55e550;
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
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14a55e4e0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar2[4] = FUN_147788786;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1469aa654(uVar1,&local_30,&local_40);
    *(undefined8 *)(param_1 + 0x198) = local_30;
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477881ca FUN_1477881ca body=1467 status=ok
// SIG undefined FUN_1477881ca(void)

longlong * FUN_1477881ca(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined8 local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined1 local_261;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  ulonglong local_230;
  undefined8 uStack_228;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_145aafd54(&local_238);
  local_2a8 = &local_261;
  FUN_145ab0738(&local_260,"SWindowTitleBarArea",
                ".\\Runtime/UMG/Private/Components/WindowTitleBarArea.cpp",0x36);
  FUN_145aafe02(&local_260,&local_248,&local_238);
  plVar15 = local_240;
  if (local_240 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_248;
    plVar14 = *(longlong **)(param_1 + 400);
    if (plVar14 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0;
LAB_147788656:
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x000147788548:
        if (iVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_240 + 1) = (int)local_240[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_248;
    plVar14 = *(longlong **)(param_1 + 400);
    if (local_240 == plVar14) {
      LOCK();
      plVar14 = local_240 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar14 = plVar15;
        goto joined_r0x000147788548;
      }
    }
    else {
      *(longlong **)(param_1 + 400) = local_240;
      if (plVar14 != (longlong *)0x0) goto LAB_147788656;
    }
  }
  plVar15 = (longlong *)(param_1 + 0x188);
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_240 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_240 + 0x10))(local_240);
      }
    }
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_258 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_145aafcfa(&local_238);
  uVar4 = DAT_14c98e618;
  if (*(char *)(param_1 + 0x181) == '\x01') {
    local_238 = (undefined8 *)0x0;
    local_230 = local_230 & 0xffffffff00000000;
    FUN_1446efa72(&local_238,0,3,0x10);
    puVar5 = local_238;
    local_230 = CONCAT44(local_230._4_4_,3);
    *local_238 = &PTR_LAB_14a55e550;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_238[2] = lVar11;
    *local_238 = &PTR_FUN_14a55e4e0;
    local_238[3] = 0;
    FUN_14485c47a(local_238 + 3,param_1);
    puVar5[4] = FUN_147788786;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_1469aa654(uVar4,&local_260,&local_238);
    *(undefined8 *)(param_1 + 0x198) = local_260;
    FUN_1449db362(&local_238);
  }
  else if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1469aa6fe(DAT_14c98e618);
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  lVar10 = *plVar15;
  local_278 = (undefined8 *)0x0;
  local_270 = 0;
  FUN_1446efa72(&local_278,0,3,0x10);
  puVar5 = local_278;
  local_270 = 3;
  *local_278 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_278[2] = lVar12;
  *local_278 = &PTR_FUN_14a55e5c0;
  local_278[3] = 0;
  FUN_14485c47a(local_278 + 3,param_1);
  puVar5[4] = FUN_14778885c;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_14009d848(lVar10 + 0x240,&local_278);
  FUN_1449db362(&local_278);
  if (*(int *)(param_1 + 0x170) < 1) goto LAB_14778846c;
  lVar10 = FUN_1433335b4(param_1);
  if (lVar10 == 0) {
LAB_1477886bf:
    lVar10 = 0;
  }
  else {
    lVar11 = FUN_145a69c94();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) != lVar11 + 0x30)) goto LAB_1477886bf;
  }
  local_288 = *plVar15;
  local_280 = *(longlong *)(param_1 + 400);
  if (local_280 != 0) {
    LOCK();
    *(int *)(local_280 + 8) = *(int *)(local_280 + 8) + 1;
    UNLOCK();
  }
  FUN_147788916(lVar10,&local_288);
LAB_14778846c:
  if (((DAT_14cb0d2b0 != 0) && (lVar10 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar10 != 0)) &&
     (plVar14 = *(longlong **)(lVar10 + 0x118), plVar14 != (longlong *)0x0)) {
    iVar8 = (int)plVar14[1];
    do {
      if (iVar8 == 0) goto LAB_1477884ce;
      LOCK();
      iVar3 = (int)plVar14[1];
      bVar16 = iVar8 == iVar3;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar8 + 1;
        iVar3 = iVar8;
      }
      iVar8 = iVar3;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(lVar10 + 0x110);
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (lVar10 != 0) {
      lVar10 = *plVar15;
      lVar11 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
      local_298 = 0;
      local_290 = *(longlong *)(lVar11 + 0x118);
      if (local_290 != 0) {
        iVar8 = *(int *)(local_290 + 8);
        do {
          if (iVar8 == 0) {
            local_290 = 0;
            goto LAB_14778871a;
          }
          LOCK();
          iVar3 = *(int *)(local_290 + 8);
          bVar16 = iVar8 == iVar3;
          if (bVar16) {
            *(int *)(local_290 + 8) = iVar8 + 1;
            iVar3 = iVar8;
          }
          iVar8 = iVar3;
          UNLOCK();
        } while (!bVar16);
        if (local_290 != 0) {
          local_298 = *(undefined8 *)(lVar11 + 0x110);
        }
      }
LAB_14778871a:
      FUN_145aafe78(lVar10,&local_298);
    }
  }
LAB_1477884ce:
  lVar11 = DAT_14cab92f8;
  lVar10 = *plVar15;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar6 ^ 1);
  }
  uVar7 = DAT_14c96b1e1;
  if (*(char *)(lVar11 + uVar9) != '\x01') {
    puVar13 = &DAT_14c96b1e1;
    if (*(char *)(param_1 + 0x180) != '\0') {
      puVar13 = &DAT_14c96b238;
    }
    uVar7 = *puVar13;
  }
  local_238._0_2_ = CONCAT11(1,uVar7);
  local_230 = 0;
  uStack_228 = 0;
  (**(code **)(**(longlong **)(lVar10 + 0x288) + 0x1c0))();
  lVar10 = *plVar15;
  plVar15 = *(longlong **)(param_1 + 400);
  if (plVar15 == (longlong *)0x0) {
    *param_2 = lVar10;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    *param_2 = lVar10;
    param_2[1] = (longlong)plVar15;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788786 FUN_147788786 body=212 status=ok
// SIG undefined FUN_147788786(void)

/* WARNING: Removing unreachable block (ram,0x000147788833) */

ulonglong FUN_147788786(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  lVar3 = DAT_14cb0d2b0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar5 = DAT_14cb0d2b0 != 0;
  bVar6 = (param_3 & 0xfffffffe) == 2;
  if (bVar6 && bVar5) {
    plVar1 = (longlong *)(DAT_14cb0d2b0 + 0xc28);
    FUN_140056680(&local_38,L"TOGGLE_FULLSCREEN");
    iVar2 = *(int *)(lVar3 + 0xc30);
    *(uint *)(lVar3 + 0xc30) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xc34) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar4 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = 0;
    *(undefined8 *)(lVar3 + lVar4) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_30;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_30._4_4_;
    local_30 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6 && bVar5) & 0xffffffff;
}



// FUNCTION 14778885c FUN_14778885c body=185 status=ok
// SIG undefined FUN_14778885c(void)

/* WARNING: Removing unreachable block (ram,0x0001477888f2) */

void FUN_14778885c(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar3 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    plVar1 = (longlong *)(DAT_14cb0d2b0 + 0xc28);
    FUN_140056680(&local_30,L"TOGGLE_FULLSCREEN");
    iVar2 = *(int *)(lVar3 + 0xc30);
    *(uint *)(lVar3 + 0xc30) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xc34) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar4 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = 0;
    *(undefined8 *)(lVar3 + lVar4) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
    local_28 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147788916 FUN_147788916 body=423 status=ok
// SIG undefined FUN_147788916(void)

void FUN_147788916(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar5 == (longlong *)0x0) goto LAB_1477889aa;
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_147788972:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477889aa;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x58) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1477889aa;
      goto LAB_147788972;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1477889aa;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1477889aa:
  local_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146aa29c6(*(undefined8 *)(param_1 + 0x50));
  FUN_146aa298a(*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x48));
  FUN_146aa29a8(*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x49));
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_78 = DAT_14c98dec8;
    local_70 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_30 = &local_39;
    local_38 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_78);
  }
  FUN_146aa297e(uVar3,&local_78);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788ac4 FUN_147788ac4 body=102 status=ok
// SIG undefined FUN_147788ac4(void)

void FUN_147788ac4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 400);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_147788916(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788b46 FUN_147788b46 body=222 status=ok
// SIG undefined FUN_147788b46(void)

void FUN_147788b46(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14119010c();
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar3 = FUN_1433335b4(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_145a69c94();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) {
        lVar4 = FUN_147788c24(param_1);
        lVar5 = FUN_1433335b4(param_1);
        lVar3 = *(longlong *)(lVar5 + 0x30);
        if (DAT_14c950c29 == 1) {
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1456cec3c(lVar3);
            lVar3 = *(longlong *)(lVar5 + 0x30);
          }
        }
        bVar2 = DAT_14c950c29;
        *(longlong *)(lVar4 + 0x30) = lVar3;
        if (lVar4 != 0 && (~bVar2 & 1) == 0) {
          FUN_1456cec3c(lVar4);
          bVar2 = DAT_14c950c29;
        }
        *(longlong *)(lVar3 + 0x30) = lVar4;
        plVar1 = *(longlong **)(param_1 + 0x168);
        if ((lVar4 != 0) && ((bVar2 & 1) != 0)) {
          FUN_1456cec3c(lVar4);
        }
        *plVar1 = lVar4;
      }
    }
  }
  return;
}



// FUNCTION 147788c24 FUN_147788c24 body=175 status=ok
// SIG undefined FUN_147788c24(void)

undefined8 FUN_147788c24(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145a69c94();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788cd4 FUN_147788cd4 body=168 status=ok
// SIG undefined FUN_147788cd4(void)

void FUN_147788cd4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x48) = local_19;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188) != 0) {
    FUN_146aa298a();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788d7e FUN_147788d7e body=199 status=ok
// SIG undefined FUN_147788d7e(void)

void FUN_147788d7e(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x3c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x44) = uStack_50._4_4_;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146aa29c6();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788e46 FUN_147788e46 body=168 status=ok
// SIG undefined FUN_147788e46(void)

void FUN_147788e46(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x49) = local_19;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188) != 0) {
    FUN_146aa29a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788ef0 FUN_147788ef0 body=106 status=ok
// SIG undefined FUN_147788ef0(void)

void FUN_147788ef0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_146aa29c6();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147788f96 FUN_147788f96 body=152 status=ok
// SIG undefined FUN_147788f96(void)

void FUN_147788f96(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188) != 0)) {
    local_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x40);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146aa29c6();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188);
    if (lVar1 != 0) {
      FUN_146aa298a(lVar1,*(undefined1 *)(param_1 + 0x48));
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x188);
      if (lVar1 != 0) {
        FUN_146aa29a8(lVar1,*(undefined1 *)(param_1 + 0x49));
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789030 FUN_147789030 body=164 status=ok
// SIG undefined FUN_147789030(void)

void FUN_147789030(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477890d6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477890d6 FUN_1477890d6 body=63 status=ok
// SIG undefined FUN_1477890d6(void)

longlong FUN_1477890d6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14772c428();
  if (lVar1 != 0) {
    lVar2 = FUN_14592120c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147789116 FUN_147789116 body=185 status=ok
// SIG undefined FUN_147789116(void)

void FUN_147789116(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [39];
  byte local_31;
  uint local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x195) = local_31;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_30 = (uint)local_31;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_146aa40d6();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477891d0 FUN_1477891d0 body=176 status=ok
// SIG undefined FUN_1477891d0(void)

void FUN_1477891d0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x180) = local_38;
  *(undefined4 *)(param_1 + 0x184) = uStack_34;
  *(undefined4 *)(param_1 + 0x188) = uStack_30;
  *(undefined4 *)(param_1 + 0x18c) = uStack_2c;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_146aa400e();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778928e FUN_14778928e body=94 status=ok
// SIG undefined FUN_14778928e(void)

void FUN_14778928e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x184) = uVar1;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_18 = (undefined4)local_28;
    uStack_14 = local_28._4_4_;
    uStack_10 = (undefined4)uStack_20;
    uStack_c = uStack_20._4_4_;
    FUN_146aa400e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477892fc FUN_1477892fc body=95 status=ok
// SIG undefined FUN_1477892fc(void)

void FUN_1477892fc(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 400) = uVar1;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146aa4044();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778938e FUN_14778938e body=90 status=ok
// SIG undefined FUN_14778938e(void)

void FUN_14778938e(longlong param_1,byte *param_2)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  uint local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x195) = bVar1;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_20 = (uint)bVar1;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_146aa40d6();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789420 FUN_147789420 body=102 status=ok
// SIG undefined FUN_147789420(void)

void FUN_147789420(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x1a0);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_147789488(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789488 FUN_147789488 body=448 status=ok
// SIG undefined FUN_147789488(void)

void FUN_147789488(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f9;
  code *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8 [3];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined1 local_b8 [16];
  uint local_a8;
  undefined1 local_a4;
  uint local_a0;
  undefined1 local_9c;
  float local_98;
  char local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_146aa33a8(*param_2,local_e8);
  local_128 = *(undefined4 *)(param_1 + 0x38);
  uStack_124 = *(undefined4 *)(param_1 + 0x3c);
  uStack_120 = *(undefined4 *)(param_1 + 0x40);
  uStack_11c = *(undefined4 *)(param_1 + 0x44);
  local_118 = 1;
  local_110 = 0;
  uStack_108 = 0;
  local_c0 = 1;
  local_d0 = local_128;
  uStack_cc = uStack_124;
  uStack_c8 = uStack_120;
  uStack_c4 = uStack_11c;
  FUN_144a450dc(local_b8,&local_110);
  FUN_1449db362(&local_110);
  local_a8 = (uint)*(byte *)(param_1 + 0x4c);
  local_a4 = 1;
  local_a0 = (uint)*(byte *)(param_1 + 0x4d);
  local_9c = 1;
  local_90 = *(undefined1 *)(param_1 + 0x4e);
  local_8f = 1;
  fVar3 = *(float *)(param_1 + 0x48);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    local_94 = '\x01';
    local_98 = fVar3;
  }
  else if (local_94 == '\x01') {
    local_94 = '\0';
  }
  local_8e = *(undefined1 *)(param_1 + 0x4f);
  local_8d = 1;
  *(undefined8 *)(param_1 + 0x50) = local_e8[0];
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_138 = DAT_14c98dec8;
    local_130 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_f0 = &local_f9;
    local_f8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_138);
  }
  FUN_14772e7bc(local_e8,&local_138);
  plVar4 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_130 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_14772e844(local_e8);
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
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778964a FUN_14778964a body=222 status=ok
// SIG undefined FUN_14778964a(void)

void FUN_14778964a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x198);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146aa34d4(uVar4,&local_38);
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
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778972a FUN_14778972a body=864 status=ok
// SIG undefined FUN_14778972a(void)

undefined8 * FUN_14778972a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_2f8 [32];
  undefined1 *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined1 local_2b9;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  uint local_2a0;
  undefined1 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined1 local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  longlong *local_268;
  undefined1 local_260 [440];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [16];
  uint local_90;
  undefined1 local_8c;
  undefined1 local_88 [32];
  byte local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_14772d9a6(local_260);
  local_68 = *(byte *)(param_1 + 0x194) ^ 1;
  local_288 = *(undefined4 *)(param_1 + 400);
  local_284 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_a4 = 1;
  local_a8 = local_288;
  FUN_144a450dc(local_a0,&local_280);
  FUN_1449db362(&local_280);
  local_2a0 = (uint)*(byte *)(param_1 + 0x195);
  local_29c = 1;
  local_298 = 0;
  uStack_290 = 0;
  local_8c = 1;
  local_90 = local_2a0;
  FUN_144a450dc(local_88,&local_298);
  FUN_1449db362(&local_298);
  local_64 = (uint)*(byte *)(param_1 + 0x196);
  local_2d8 = &local_2b9;
  FUN_147766ada(local_2b8,"SWrapBox",".\\Runtime/UMG/Private/Components/WrapBox.cpp",0x44);
  FUN_14772daf4(local_2b8,&local_270,local_260);
  plVar6 = local_268;
  if (local_268 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = local_270;
    plVar9 = *(longlong **)(param_1 + 0x1a0);
    if (plVar9 == (longlong *)0x0) goto LAB_147789885;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
LAB_147789a52:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147789885;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x198) = local_270;
    plVar9 = *(longlong **)(param_1 + 0x1a0);
    if (local_268 != plVar9) {
      *(longlong **)(param_1 + 0x1a0) = local_268;
      if (plVar9 == (longlong *)0x0) goto LAB_147789885;
      goto LAB_147789a52;
    }
    LOCK();
    plVar9 = local_268 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147789885;
    (**(code **)*local_268)(local_268);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_147789885:
  if (local_268 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_268 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)local_268 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_268 + 0x10))(local_268);
      }
    }
  }
  if (local_2b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2b0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar1 = (int *)((longlong)local_2b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2b0 + 0x10))(local_2b0);
      }
    }
  }
  FUN_14772db68(local_260);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_14592120c();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_2d0 = *(undefined8 *)(param_1 + 0x198);
          local_2c8 = *(longlong *)(param_1 + 0x1a0);
          if (local_2c8 != 0) {
            LOCK();
            *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
            UNLOCK();
          }
          FUN_147789488(lVar4,&local_2d0);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x198);
  plVar6 = *(longlong **)(param_1 + 0x1a0);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789a8c FUN_147789a8c body=223 status=ok
// SIG undefined FUN_147789a8c(void)

void FUN_147789a8c(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_48 = *(undefined4 *)(param_1 + 0x180);
    uStack_44 = *(undefined4 *)(param_1 + 0x184);
    uStack_40 = *(undefined4 *)(param_1 + 0x188);
    uStack_3c = *(undefined4 *)(param_1 + 0x18c);
    puVar1 = &local_48;
    FUN_146aa400e();
    FUN_146aa4070(*(undefined8 *)(param_1 + 0x198),
                  CONCAT71((int7)((ulonglong)puVar1 >> 8),*(undefined1 *)(param_1 + 0x194)) ^ 1);
    local_60 = *(undefined4 *)(param_1 + 400);
    local_5c = 1;
    local_58 = 0;
    uStack_50 = 0;
    FUN_146aa4044(*(undefined8 *)(param_1 + 0x198));
    local_78 = (uint)*(byte *)(param_1 + 0x195);
    local_74 = 1;
    local_70 = 0;
    uStack_68 = 0;
    FUN_146aa40d6(*(undefined8 *)(param_1 + 0x198));
    FUN_146aa40c0(*(undefined8 *)(param_1 + 0x198),*(undefined1 *)(param_1 + 0x196));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789b70 FUN_147789b70 body=178 status=ok
// SIG undefined FUN_147789b70(void)

void FUN_147789b70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  bVar2 = local_1c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x4e) = bVar2;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && ((bool)*(char *)(lVar1 + 0x48) != bVar2)) {
    *(bool *)(lVar1 + 0x48) = bVar2;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789c24 FUN_147789c24 body=199 status=ok
// SIG undefined FUN_147789c24(void)

void FUN_147789c24(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(float *)(param_1 + 0x48) = local_24;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if ((local_24 != 0.0) || (NAN(local_24))) {
      local_20 = local_24;
      local_1c = 1;
    }
    else {
      local_1c = 0;
    }
    FUN_14778a148();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789cec FUN_147789cec body=171 status=ok
// SIG undefined FUN_147789cec(void)

void FUN_147789cec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x4c) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789d9c FUN_147789d9c body=178 status=ok
// SIG undefined FUN_147789d9c(void)

void FUN_147789d9c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  bVar2 = local_1c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x4f) = bVar2;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && ((bool)*(char *)(lVar1 + 0x49) != bVar2)) {
    *(bool *)(lVar1 + 0x49) = bVar2;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789e50 FUN_147789e50 body=163 status=ok
// SIG undefined FUN_147789e50(void)

void FUN_147789e50(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_147789ef4(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789ef4 FUN_147789ef4 body=117 status=ok
// SIG undefined FUN_147789ef4(void)

void FUN_147789ef4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147789f6a FUN_147789f6a body=171 status=ok
// SIG undefined FUN_147789f6a(void)

void FUN_147789f6a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x4d) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778a016 FUN_14778a016 body=62 status=ok
// SIG undefined FUN_14778a016(void)

void FUN_14778a016(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147789ef4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778a056 FUN_14778a056 body=101 status=ok
// SIG undefined FUN_14778a056(void)

void FUN_14778a056(longlong param_1,float *param_2)

{
  float fVar1;
  undefined1 auStack_38 [40];
  float local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar1 = *param_2;
  *(float *)(param_1 + 0x48) = fVar1;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      local_c = 1;
      local_10 = fVar1;
    }
    else {
      local_c = 0;
    }
    FUN_14778a148();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778a148 FUN_14778a148 body=114 status=ok
// SIG undefined FUN_14778a148(void)

void FUN_14778a148(longlong param_1,float *param_2)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  
  bVar2 = *(byte *)(param_1 + 0x44);
  bVar4 = *(byte *)(param_2 + 1);
  fVar1 = *param_2;
  bVar3 = *(float *)(param_1 + 0x40) == fVar1;
  if ((bVar2 & 1) == 0) {
    bVar3 = bVar2 == bVar4;
  }
  if ((bool)(bVar2 == bVar4 & bVar3)) goto LAB_14778a1a3;
  if ((float *)(param_1 + 0x40) != param_2) {
    if (bVar4 == 0) {
      if ((bVar2 & 1) == 0) goto LAB_14778a199;
      uVar5 = 0;
    }
    else {
      *(float *)(param_1 + 0x40) = fVar1;
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x44) = uVar5;
  }
LAB_14778a199:
  FUN_14156c56c(fVar1,1);
  bVar4 = *(byte *)(param_2 + 1);
LAB_14778a1a3:
  if ((bVar4 & 1) != 0) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14778a1ba FUN_14778a1ba body=240 status=ok
// SIG undefined FUN_14778a1ba(void)

void FUN_14778a1ba(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  uStack_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  FUN_147789ef4();
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x48) != *(char *)(param_1 + 0x4e)) {
      *(char *)(lVar2 + 0x48) = *(char *)(param_1 + 0x4e);
      FUN_14156c56c(lVar2,1);
      if (*(longlong *)(param_1 + 0x50) == 0) goto LAB_14778a206;
    }
    fVar1 = *(float *)(param_1 + 0x48);
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      local_14 = 1;
      local_18 = fVar1;
    }
    else {
      local_14 = 0;
    }
    FUN_14778a148();
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x38) != (uint)*(byte *)(param_1 + 0x4c)) {
        *(uint *)(lVar2 + 0x38) = (uint)*(byte *)(param_1 + 0x4c);
        FUN_14156c56c(lVar2,1);
        lVar2 = *(longlong *)(param_1 + 0x50);
        if (lVar2 == 0) goto LAB_14778a206;
      }
      if (*(uint *)(lVar2 + 0x3c) != (uint)*(byte *)(param_1 + 0x4d)) {
        *(uint *)(lVar2 + 0x3c) = (uint)*(byte *)(param_1 + 0x4d);
        FUN_14156c56c(lVar2,1);
        lVar2 = *(longlong *)(param_1 + 0x50);
        if (lVar2 == 0) goto LAB_14778a206;
      }
      if (*(char *)(lVar2 + 0x49) != *(char *)(param_1 + 0x4f)) {
        *(char *)(lVar2 + 0x49) = *(char *)(param_1 + 0x4f);
        FUN_14156c56c(lVar2,1);
      }
    }
  }
LAB_14778a206:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778a2ac FUN_14778a2ac body=433 status=ok
// SIG undefined FUN_14778a2ac(void)

/* WARNING: Removing unreachable block (ram,0x00014778a38f) */
/* WARNING: Removing unreachable block (ram,0x00014778a396) */
/* WARNING: Removing unreachable block (ram,0x00014778a3a5) */

void FUN_14778a2ac(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined3 uStack_48;
  undefined4 uStack_45;
  undefined4 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14477b072(param_1,DAT_14cab93c8);
  lVar6 = FUN_14570ab3e(uVar5);
  if ((*(byte *)(lVar6 + 0xd4) & 0x80) == 0) {
    local_b0 = &PTR_FUN_149eda650;
    local_98 = *(undefined8 *)(param_2 + 0x18);
    local_a8 = *(undefined8 *)(param_2 + 8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x10);
    local_90 = *(undefined4 *)(param_2 + 0x20);
    uStack_8c = *(undefined4 *)(param_2 + 0x24);
    uStack_88 = *(undefined4 *)(param_2 + 0x28);
    uStack_84 = *(undefined4 *)(param_2 + 0x2c);
    local_80 = *(undefined4 *)(param_2 + 0x30);
    uStack_7c = *(undefined4 *)(param_2 + 0x34);
    uStack_78 = *(undefined4 *)(param_2 + 0x38);
    uStack_74 = *(undefined4 *)(param_2 + 0x3c);
    local_70 = *(undefined8 *)(param_2 + 0x40);
    local_68 = *(undefined8 *)(param_2 + 0x48);
    plStack_60 = *(longlong **)(param_2 + 0x50);
    if (plStack_60 == (longlong *)0x0) {
      plStack_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_2 + 0x58);
    uStack_50 = *(undefined4 *)(param_2 + 0x60);
    uVar3 = *(undefined4 *)(param_2 + 100);
    uStack_45 = *(undefined4 *)(param_2 + 0x6b);
    uStack_41 = *(undefined4 *)(param_2 + 0x6f);
    uStack_4c = (undefined2)uVar3;
    uStack_4a = (undefined1)((uint)uVar3 >> 0x10);
    uStack_48 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
    uStack_49 = (undefined1)((uint)uVar3 >> 0x18);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_b0);
    plVar4 = plStack_60;
    local_b0 = &PTR_FUN_149eda650;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014778a3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
  return;
}



// FUNCTION 14778a470 FUN_14778a470 body=343 status=ok
// SIG undefined FUN_14778a470(void)

void FUN_14778a470(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined7 local_38;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_96 = 0;
  local_94 = 0xffffffff00000000;
  local_88 = 0;
  local_a0 = &PTR_FUN_149eda650;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = &DAT_14c96b1e8;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (longlong *)0x0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  uStack_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_a0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,pppuVar4);
  plVar3 = local_50;
  local_a0 = &PTR_FUN_149eda650;
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
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778a5c8 FUN_14778a5c8 body=433 status=ok
// SIG undefined FUN_14778a5c8(void)

/* WARNING: Removing unreachable block (ram,0x00014778a6ab) */
/* WARNING: Removing unreachable block (ram,0x00014778a6b2) */
/* WARNING: Removing unreachable block (ram,0x00014778a6c1) */

void FUN_14778a5c8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined3 uStack_48;
  undefined4 uStack_45;
  undefined4 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14477b072(param_1,DAT_14cab93d8);
  lVar6 = FUN_14570ab3e(uVar5);
  if ((*(byte *)(lVar6 + 0xd4) & 0x80) == 0) {
    local_b0 = &PTR_FUN_149eda650;
    local_98 = *(undefined8 *)(param_2 + 0x18);
    local_a8 = *(undefined8 *)(param_2 + 8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x10);
    local_90 = *(undefined4 *)(param_2 + 0x20);
    uStack_8c = *(undefined4 *)(param_2 + 0x24);
    uStack_88 = *(undefined4 *)(param_2 + 0x28);
    uStack_84 = *(undefined4 *)(param_2 + 0x2c);
    local_80 = *(undefined4 *)(param_2 + 0x30);
    uStack_7c = *(undefined4 *)(param_2 + 0x34);
    uStack_78 = *(undefined4 *)(param_2 + 0x38);
    uStack_74 = *(undefined4 *)(param_2 + 0x3c);
    local_70 = *(undefined8 *)(param_2 + 0x40);
    local_68 = *(undefined8 *)(param_2 + 0x48);
    plStack_60 = *(longlong **)(param_2 + 0x50);
    if (plStack_60 == (longlong *)0x0) {
      plStack_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_2 + 0x58);
    uStack_50 = *(undefined4 *)(param_2 + 0x60);
    uVar3 = *(undefined4 *)(param_2 + 100);
    uStack_45 = *(undefined4 *)(param_2 + 0x6b);
    uStack_41 = *(undefined4 *)(param_2 + 0x6f);
    uStack_4c = (undefined2)uVar3;
    uStack_4a = (undefined1)((uint)uVar3 >> 0x10);
    uStack_48 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
    uStack_49 = (undefined1)((uint)uVar3 >> 0x18);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_b0);
    plVar4 = plStack_60;
    local_b0 = &PTR_FUN_149eda650;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014778a700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2);
  return;
}



// FUNCTION 14778a78c FUN_14778a78c body=343 status=ok
// SIG undefined FUN_14778a78c(void)

void FUN_14778a78c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined7 local_38;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_96 = 0;
  local_94 = 0xffffffff00000000;
  local_88 = 0;
  local_a0 = &PTR_FUN_149eda650;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = &DAT_14c96b1e8;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (longlong *)0x0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  uStack_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_a0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,pppuVar4);
  plVar3 = local_50;
  local_a0 = &PTR_FUN_149eda650;
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
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778a8e4 FUN_14778a8e4 body=433 status=ok
// SIG undefined FUN_14778a8e4(void)

/* WARNING: Removing unreachable block (ram,0x00014778a9c7) */
/* WARNING: Removing unreachable block (ram,0x00014778a9ce) */
/* WARNING: Removing unreachable block (ram,0x00014778a9dd) */

void FUN_14778a8e4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined3 uStack_48;
  undefined4 uStack_45;
  undefined4 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14477b072(param_1,DAT_14cab93e8);
  lVar6 = FUN_14570ab3e(uVar5);
  if ((*(byte *)(lVar6 + 0xd4) & 0x80) == 0) {
    local_b0 = &PTR_FUN_149eda650;
    local_98 = *(undefined8 *)(param_2 + 0x18);
    local_a8 = *(undefined8 *)(param_2 + 8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x10);
    local_90 = *(undefined4 *)(param_2 + 0x20);
    uStack_8c = *(undefined4 *)(param_2 + 0x24);
    uStack_88 = *(undefined4 *)(param_2 + 0x28);
    uStack_84 = *(undefined4 *)(param_2 + 0x2c);
    local_80 = *(undefined4 *)(param_2 + 0x30);
    uStack_7c = *(undefined4 *)(param_2 + 0x34);
    uStack_78 = *(undefined4 *)(param_2 + 0x38);
    uStack_74 = *(undefined4 *)(param_2 + 0x3c);
    local_70 = *(undefined8 *)(param_2 + 0x40);
    local_68 = *(undefined8 *)(param_2 + 0x48);
    plStack_60 = *(longlong **)(param_2 + 0x50);
    if (plStack_60 == (longlong *)0x0) {
      plStack_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_2 + 0x58);
    uStack_50 = *(undefined4 *)(param_2 + 0x60);
    uVar3 = *(undefined4 *)(param_2 + 100);
    uStack_45 = *(undefined4 *)(param_2 + 0x6b);
    uStack_41 = *(undefined4 *)(param_2 + 0x6f);
    uStack_4c = (undefined2)uVar3;
    uStack_4a = (undefined1)((uint)uVar3 >> 0x10);
    uStack_48 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
    uStack_49 = (undefined1)((uint)uVar3 >> 0x18);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_b0);
    plVar4 = plStack_60;
    local_b0 = &PTR_FUN_149eda650;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014778aa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
  return;
}



// FUNCTION 14778aaa8 FUN_14778aaa8 body=343 status=ok
// SIG undefined FUN_14778aaa8(void)

void FUN_14778aaa8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined7 local_38;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_96 = 0;
  local_94 = 0xffffffff00000000;
  local_88 = 0;
  local_a0 = &PTR_FUN_149eda650;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = &DAT_14c96b1e8;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (longlong *)0x0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  uStack_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_a0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,pppuVar4);
  plVar3 = local_50;
  local_a0 = &PTR_FUN_149eda650;
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
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778ac04 FUN_14778ac04 body=63 status=ok
// SIG undefined FUN_14778ac04(void)

void FUN_14778ac04(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_1447cd2ec(param_1 + 0x60);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778ac44 FUN_14778ac44 body=63 status=ok
// SIG undefined FUN_14778ac44(void)

void FUN_14778ac44(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_1447cd2ec(param_1 + 0x70);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778ac84 FUN_14778ac84 body=63 status=ok
// SIG undefined FUN_14778ac84(void)

void FUN_14778ac84(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_1447cd2ec(param_1 + 0x80);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778acd6 FUN_14778acd6 body=118 status=ok
// SIG undefined FUN_14778acd6(void)

undefined8 FUN_14778acd6(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  longlong **local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if ((param_2 != 0) && (*param_1 != 0)) {
    local_30 = &local_18;
    local_18 = 0;
    local_20 = &local_38;
    local_28 = &LAB_14333e22e;
    local_38 = param_1;
    FUN_140ec5510(param_2,&local_28);
    uVar1 = local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778ad4e FUN_14778ad4e body=99 status=ok
// SIG undefined FUN_14778ad4e(void)

undefined8 FUN_14778ad4e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_18 = 0;
  local_20 = &local_38;
  local_28 = &LAB_14333e22e;
  local_38 = param_2;
  FUN_140ec5510();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778adb2 FUN_14778adb2 body=133 status=ok
// SIG undefined FUN_14778adb2(void)

void FUN_14778adb2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)
      ) && ((longlong)*(int *)(param_1 + 0x30) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar6 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      lVar4 = FUN_14778acd6(lVar5,*(undefined8 *)(lVar1 + 0x268));
      if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar5 + 8), plVar2 != (longlong *)0x0)) {
        FUN_14485c47a(plVar2 + 5,lVar4);
        cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
        if (cVar3 == '\0') {
          plVar2[5] = 0;
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14778ae38 FUN_14778ae38 body=167 status=ok
// SIG undefined FUN_14778ae38(void)

void FUN_14778ae38(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        local_50 = plVar3[5];
        FUN_1400841de(&local_50,&local_48);
        lVar4 = local_48;
        if (local_48 != 0) {
          (**(code **)(*plVar3 + 0x2a8))(plVar3);
          FUN_140113f3a(lVar4);
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778aee0 FUN_14778aee0 body=167 status=ok
// SIG undefined FUN_14778aee0(void)

void FUN_14778aee0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        local_50 = plVar3[5];
        FUN_1400841de(&local_50,&local_48);
        lVar4 = local_48;
        if (local_48 != 0) {
          (**(code **)(*plVar3 + 0x2b0))(plVar3);
          FUN_140113f3a(lVar4);
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778af88 FUN_14778af88 body=561 status=ok
// SIG undefined FUN_14778af88(void)

void FUN_14778af88(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_90 = 0x3f800000;
  local_88 = 0;
  local_84 = DAT_14c84635c;
  local_7c = 0x3f800000;
  uStack_74 = 0x3f80000000000000;
  local_6c = 0;
  local_64 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_98;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  fVar8 = 1.0 / (*(float *)((longlong)puVar4 + 0x1c) * *(float *)(puVar4 + 5) -
                *(float *)((longlong)puVar4 + 0x24) * *(float *)(puVar4 + 4));
  fVar7 = *(float *)((longlong)puVar4 + 0x1c) * fVar8;
  fVar6 = -*(float *)((longlong)puVar4 + 0x24) * fVar8;
  fVar5 = -*(float *)(puVar4 + 4) * fVar8;
  fVar8 = fVar8 * *(float *)(puVar4 + 5);
  fVar1 = *(float *)(puVar4 + 6);
  fVar2 = *(float *)((longlong)puVar4 + 0x2c);
  *param_3 = (double)(fVar8 * (float)local_a8 + fVar6 * (float)local_a0 +
                     (-fVar2 * fVar8 - fVar1 * fVar6));
  param_3[1] = (double)(fVar5 * (float)local_a8 + fVar7 * (float)local_a0 +
                       (-fVar2 * fVar5 - fVar7 * fVar1));
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778b1ba FUN_14778b1ba body=390 status=ok
// SIG undefined FUN_14778b1ba(void)

void FUN_14778b1ba(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  FUN_14778b342(local_28,&local_68,puVar1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778b342 FUN_14778b342 body=669 status=ok
// SIG undefined FUN_14778b342(void)

void FUN_14778b342(undefined8 param_1,double *param_2,double *param_3,double *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  float local_b8;
  float local_b4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (((lVar7 != 0) &&
      (((bVar2 = *(byte *)(lVar7 + 0x152), bVar2 == 1 ||
        ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
       (lVar7 = FUN_1449baec6(lVar7), lVar7 != 0)))) &&
     (plVar3 = *(longlong **)(lVar7 + 0x138), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14778b583;
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
    plVar4 = *(longlong **)(lVar7 + 0x130);
    if (plVar4 != (longlong *)0x0) {
      FUN_14039c14e(lVar7,&local_c8);
      (**(code **)(*plVar4 + 8))(plVar4,&local_b8);
      fVar10 = 1.0 / (local_9c * local_90 - local_94 * local_98);
      fVar9 = -local_98 * fVar10 * (float)*param_2 + local_9c * fVar10 * (float)param_2[1] +
              (-local_8c * -local_98 * fVar10 - local_9c * fVar10 * local_88);
      fVar10 = fVar10 * local_90 * (float)*param_2 + -local_94 * fVar10 * (float)param_2[1] +
               (-local_8c * fVar10 * local_90 - local_88 * -local_94 * fVar10);
      *param_4 = (double)fVar10;
      param_4[1] = (double)fVar9;
      *param_3 = (double)((float)local_c8 * (fVar10 / local_b8));
      param_3[1] = (double)((float)local_c0 * (fVar9 / local_b4));
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
      if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
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
LAB_14778b583:
  *param_3 = 0.0;
  param_3[1] = 0.0;
  *param_4 = 0.0;
  param_4[1] = 0.0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14778b5e8 FUN_14778b5e8 body=715 status=ok
// SIG undefined FUN_14778b5e8(void)

void FUN_14778b5e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined4 local_144;
  undefined2 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_124;
  undefined8 local_120;
  longlong *plStack_118;
  undefined8 local_110;
  undefined **local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined4 local_94;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_74;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_108 = &PTR_FUN_149ed05f0;
  local_100 = &DAT_3f8000003f800000;
  puStack_f8 = &DAT_3f8000003f800000;
  local_f0 = 0;
  local_ec = 3;
  local_e8 = 0x4200000042000000;
  local_94 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  local_90 = 1;
  local_80 = DAT_14c84635c;
  local_88 = DAT_14c84635c;
  local_78 = 0;
  local_74 = 4;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  pppuVar6 = &local_108;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  local_1b8 = &PTR_FUN_149ed05f0;
  local_1b0 = &DAT_3f8000003f800000;
  puStack_1a8 = &DAT_3f8000003f800000;
  local_1a0 = 0;
  local_19c = 3;
  local_198 = 0x4200000042000000;
  local_144 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_157 = 0;
  uStack_150 = 0;
  uStack_14f = 0;
  local_140 = 1;
  local_130 = DAT_14c84635c;
  local_138 = DAT_14c84635c;
  local_128 = 0;
  local_124 = 4;
  local_120 = 0;
  plStack_118 = (longlong *)0x0;
  local_110 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_1b8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1469688aa(pppuVar6,pppuVar5);
  plVar3 = plStack_118;
  *param_3 = uVar4;
  local_1b8 = &PTR_FUN_149ed05f0;
  if (plStack_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_118)(plStack_118);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_68;
  local_108 = &PTR_FUN_149ed05f0;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778b8b4 FUN_14778b8b4 body=282 status=ok
// SIG undefined FUN_14778b8b4(void)

void FUN_14778b8b4(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 auStack_78 [40];
  float local_50 [5];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  local_50[2] = 1.0;
  local_50[3] = 0.0;
  local_50[4] = 0.0;
  local_3c = DAT_14c84635c;
  local_34 = 0x3f800000;
  uStack_2c = 0x3f80000000000000;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pfVar5 = local_50;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar5 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[10];
  fVar4 = pfVar5[8];
  *param_3 = (double)(fVar1 * pfVar5[7] + fVar2 * pfVar5[9]);
  param_3[1] = (double)(fVar4 * fVar1 + fVar3 * fVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778b9d0 FUN_14778b9d0 body=231 status=ok
// SIG undefined FUN_14778b9d0(void)

void FUN_14778b9d0(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_78 [40];
  float local_50 [5];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  local_50[2] = 1.0;
  local_50[3] = 0.0;
  local_50[4] = 0.0;
  local_3c = DAT_14c84635c;
  local_34 = 0x3f800000;
  uStack_2c = 0x3f80000000000000;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pfVar2 = local_50;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar2 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar2[1];
  *param_3 = (double)*pfVar2;
  param_3[1] = (double)fVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778bab8 FUN_14778bab8 body=256 status=ok
// SIG undefined FUN_14778bab8(void)

void FUN_14778bab8(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined1 auStack_78 [40];
  float local_50 [5];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  local_50[2] = 1.0;
  local_50[3] = 0.0;
  local_50[4] = 0.0;
  local_3c = DAT_14c84635c;
  local_34 = 0x3f800000;
  uStack_2c = 0x3f80000000000000;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pfVar3 = local_50;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar3 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[6];
  *param_3 = (double)(*pfVar3 * 0.0 + pfVar3[5]);
  param_3[1] = (double)(fVar1 * 0.0 + fVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778bbc0 FUN_14778bbc0 body=306 status=ok
// SIG undefined FUN_14778bbc0(void)

void FUN_14778bbc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0;
  uStack_58 = 0x3f800000;
  local_50 = 0;
  local_4c = DAT_14c84635c;
  local_44 = 0x3f800000;
  uStack_3c = 0x3f80000000000000;
  local_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = &local_60;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14778bcf4(puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778bcf4 FUN_14778bcf4 body=324 status=ok
// SIG undefined FUN_14778bcf4(void)

void FUN_14778bcf4(float *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar2 = param_1[8] * 0.0;
  fVar3 = param_1[7] * 0.0;
  fVar1 = param_1[10] * 0.0;
  fVar4 = param_1[9] * 0.0;
  local_78 = CONCAT44(fVar1 + fVar2 + param_1[0xc],fVar4 + fVar3 + param_1[0xb]);
  local_70 = CONCAT44(*param_1 * param_1[8] + fVar1,*param_1 * param_1[7] + fVar4);
  local_68 = CONCAT44(param_1[10] * param_1[1] + fVar2,param_1[1] * param_1[9] + fVar3);
  FUN_1402b2a42(&local_78,CONCAT44((float)param_2[1],(float)*param_2));
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778be3a FUN_14778be3a body=369 status=ok
// SIG undefined FUN_14778be3a(void)

void FUN_14778be3a(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_48 = 0;
  local_44 = DAT_14c84635c;
  local_3c = 0x3f800000;
  uStack_34 = 0x3f80000000000000;
  local_2c = 0;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_58;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  fVar1 = *(float *)(puVar5 + 5);
  fVar2 = *(float *)(puVar5 + 4);
  fVar3 = *(float *)(puVar5 + 6);
  *param_3 = (double)((float)local_68 * *(float *)((longlong)puVar5 + 0x1c) +
                      (float)local_60 * *(float *)((longlong)puVar5 + 0x24) +
                     *(float *)((longlong)puVar5 + 0x2c));
  param_3[1] = (double)(fVar2 * (float)local_68 + fVar1 * (float)local_60 + fVar3);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778bfac FUN_14778bfac body=625 status=ok
// SIG undefined FUN_14778bfac(void)

void FUN_14778bfac(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_60 = 0;
  uStack_58 = 0x3f800000;
  local_50 = 0;
  local_4c = DAT_14c84635c;
  local_44 = 0x3f800000;
  uStack_3c = 0x3f80000000000000;
  local_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = local_98;
  if (puVar4 != (undefined1 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_60;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  local_68 = (double)(*(float *)(puVar2 + 4) * (float)local_88 +
                      *(float *)(puVar2 + 5) * (float)local_80 + *(float *)(puVar2 + 6));
  local_70 = (double)((float)local_88 * *(float *)((longlong)puVar2 + 0x1c) +
                      (float)local_80 * *(float *)((longlong)puVar2 + 0x24) +
                     *(float *)((longlong)puVar2 + 0x2c));
  FUN_14778b342(local_78,&local_70,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778c21e FUN_14778c21e body=352 status=ok
// SIG undefined FUN_14778c21e(void)

void FUN_14778c21e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  uVar1 = local_60;
  puVar2 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  FUN_14778c508(local_60,&local_38,local_58,0);
  FUN_14778b342(uVar1,local_58,local_48,puVar2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778c386 FUN_14778c386 body=384 status=ok
// SIG undefined FUN_14778c386(void)

void FUN_14778c386(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  FUN_14778c508(local_20,&local_58,puVar2,local_44 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778c508 FUN_14778c508 body=582 status=ok
// SIG undefined FUN_14778c508(void)

void FUN_14778c508(undefined8 param_1,double *param_2,double *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  double local_90;
  double local_88;
  float local_80;
  float local_7c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (((lVar8 != 0) &&
      (((bVar3 = *(byte *)(lVar8 + 0x152), bVar3 == 1 ||
        ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) &&
       (lVar8 = FUN_1449baec6(lVar8), lVar8 != 0)))) &&
     (plVar4 = *(longlong **)(lVar8 + 0x138), plVar4 != (longlong *)0x0)) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14778c715;
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
    plVar5 = *(longlong **)(lVar8 + 0x130);
    if (plVar5 != (longlong *)0x0) {
      FUN_14039c14e(lVar8,&local_90);
      (**(code **)(*plVar5 + 8))(plVar5,&local_80);
      local_7c = (float)(param_2[1] / local_88) * local_7c;
      local_80 = (float)(*param_2 / local_90) * local_80;
      *param_3 = (double)(local_80 * local_64 + local_7c * local_5c + local_54);
      param_3[1] = (double)(local_60 * local_80 + local_58 * local_7c + local_50);
      if ((param_4 != '\0') && (plVar5 = *(longlong **)(lVar8 + 0x118), plVar5 != (longlong *)0x0))
      {
        iVar7 = (int)plVar5[1];
        do {
          if (iVar7 == 0) goto LAB_14778c6c4;
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
        lVar8 = *(longlong *)(lVar8 + 0x110);
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
        if (lVar8 != 0) {
          FUN_144b016b8(lVar8,&local_98);
          *param_3 = (double)((float)*param_3 - local_98);
          param_3[1] = (double)((float)param_3[1] - local_94);
        }
      }
LAB_14778c6c4:
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
      if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
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
LAB_14778c715:
  *param_3 = 0.0;
  param_3[1] = 0.0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14778c756 FUN_14778c756 body=557 status=ok
// SIG undefined FUN_14778c756(void)

void FUN_14778c756(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_84;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_48 = 0;
  local_44 = DAT_14c84635c;
  local_3c = 0x3f800000;
  uStack_34 = 0x3f80000000000000;
  local_2c = 0;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_70;
  uStack_94 = uStack_6c;
  uStack_90 = uStack_68;
  uStack_8c = uStack_64;
  local_a8 = local_84 != 0;
  puVar4 = local_80;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_14778c984(local_60,puVar3,&local_98,puVar4);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778c984 FUN_14778c984 body=343 status=ok
// SIG undefined FUN_14778c984(void)

void FUN_14778c984(undefined8 param_1,longlong param_2,undefined4 *param_3,double *param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_14778c508(local_88,&local_88,&local_70,param_5);
  fVar6 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
  fVar5 = *(float *)(param_2 + 0x1c) * fVar6;
  fVar4 = -*(float *)(param_2 + 0x24) * fVar6;
  fVar3 = -*(float *)(param_2 + 0x20) * fVar6;
  fVar6 = fVar6 * *(float *)(param_2 + 0x28);
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = *(float *)(param_2 + 0x2c);
  *param_4 = (double)(fVar6 * (float)local_70 + fVar4 * (float)local_68 +
                     (-fVar2 * fVar6 - fVar1 * fVar4));
  param_4[1] = (double)(fVar3 * (float)local_70 + fVar5 * (float)local_68 +
                       (-fVar2 * fVar3 - fVar5 * fVar1));
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778cadc FUN_14778cadc body=361 status=ok
// SIG undefined FUN_14778cadc(void)

void FUN_14778cadc(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [44];
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_48 = 0;
  local_44 = DAT_14c84635c;
  local_3c = 0x3f800000;
  uStack_34 = 0x3f80000000000000;
  local_2c = 0;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_5c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  fVar4 = *(float *)(puVar2 + 4) * local_5c + *(float *)(puVar2 + 5) * 0.0;
  fVar3 = local_5c * *(float *)((longlong)puVar2 + 0x1c) + *(float *)((longlong)puVar2 + 0x24) * 0.0
  ;
  *param_3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778cc46 FUN_14778cc46 body=434 status=ok
// SIG undefined FUN_14778cc46(void)

void FUN_14778cc46(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  local_58 = 0;
  local_54 = DAT_14c84635c;
  local_4c = 0x3f800000;
  uStack_44 = 0x3f80000000000000;
  local_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_6c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_68;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  fVar4 = 1.0 / (*(float *)((longlong)puVar2 + 0x1c) * *(float *)(puVar2 + 5) -
                *(float *)((longlong)puVar2 + 0x24) * *(float *)(puVar2 + 4));
  fVar3 = *(float *)((longlong)puVar2 + 0x1c) * fVar4 * 0.0 -
          *(float *)(puVar2 + 4) * fVar4 * local_6c;
  fVar4 = fVar4 * *(float *)(puVar2 + 5) * local_6c -
          *(float *)((longlong)puVar2 + 0x24) * fVar4 * 0.0;
  *param_3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778cdfa FUN_14778cdfa body=359 status=ok
// SIG undefined FUN_14778cdfa(void)

void FUN_14778cdfa(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_48 = 0;
  local_44 = DAT_14c84635c;
  local_3c = 0x3f800000;
  uStack_34 = 0x3f80000000000000;
  local_2c = 0;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_58;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  fVar1 = *(float *)(puVar4 + 5);
  fVar2 = *(float *)(puVar4 + 4);
  *param_3 = (double)((float)local_68 * *(float *)((longlong)puVar4 + 0x1c) +
                     (float)local_60 * *(float *)((longlong)puVar4 + 0x24));
  param_3[1] = (double)(fVar2 * (float)local_68 + fVar1 * (float)local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778cf62 FUN_14778cf62 body=432 status=ok
// SIG undefined FUN_14778cf62(void)

void FUN_14778cf62(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  local_58 = 0;
  local_54 = DAT_14c84635c;
  local_4c = 0x3f800000;
  uStack_44 = 0x3f80000000000000;
  local_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar4 = &local_68;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = *(float *)((longlong)puVar4 + 0x1c);
  fVar2 = *(float *)(puVar4 + 4);
  fVar5 = 1.0 / (fVar1 * *(float *)(puVar4 + 5) - *(float *)((longlong)puVar4 + 0x24) * fVar2);
  *param_3 = (double)(fVar5 * *(float *)(puVar4 + 5) * (float)local_78 -
                     *(float *)((longlong)puVar4 + 0x24) * fVar5 * (float)local_70);
  param_3[1] = (double)(fVar1 * fVar5 * (float)local_70 - fVar2 * fVar5 * (float)local_78);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d11a FUN_14778d11a body=68 status=ok
// SIG undefined FUN_14778d11a(void)

void FUN_14778d11a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


