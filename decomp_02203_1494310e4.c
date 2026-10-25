// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1494310e4 FUN_1494310e4 body=147 status=ok
// SIG undefined FUN_1494310e4(void)

ulonglong FUN_1494310e4(longlong param_1)

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
LAB_149431156:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149431156;
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



// FUNCTION 14943117a FUN_14943117a body=313 status=ok
// SIG undefined FUN_14943117a(void)

longlong * FUN_14943117a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_149431276:
    *puVar5 = &PTR_LAB_149f18020;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14bcc51b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149431276;
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
    *puVar5 = &PTR_LAB_149f18020;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc51b0;
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



// FUNCTION 1494312b4 FUN_1494312b4 body=64 status=ok
// SIG undefined FUN_1494312b4(void)

undefined8 * FUN_1494312b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc51b0;
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



// FUNCTION 1494312f8 FUN_1494312f8 body=81 status=ok
// SIG undefined FUN_1494312f8(void)

undefined8 FUN_1494312f8(longlong param_1)

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



// FUNCTION 149431350 FUN_149431350 body=89 status=ok
// SIG undefined FUN_149431350(void)

bool FUN_149431350(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14943139b;
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
LAB_14943139b:
  return lVar6 == param_2;
}



// FUNCTION 1494313c6 FUN_1494313c6 body=118 status=ok
// SIG undefined FUN_1494313c6(void)

void FUN_1494313c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f18020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc51b0;
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



// FUNCTION 14943143c FUN_14943143c body=118 status=ok
// SIG undefined FUN_14943143c(void)

void FUN_14943143c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f18020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc51b0;
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



// FUNCTION 1494314b2 FUN_1494314b2 body=156 status=ok
// SIG undefined FUN_1494314b2(void)

void FUN_1494314b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f18020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc51b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014943153e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14943154e FUN_14943154e body=232 status=ok
// SIG undefined FUN_14943154e(void)

undefined8 FUN_14943154e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14943159c;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_14943159c:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar3)(iVar6 + lVar7,param_2);
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
  plVar8 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149431638 FUN_149431638 body=293 status=ok
// SIG undefined FUN_149431638(void)

ulonglong FUN_149431638(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_149431715;
      iVar1 = iVar8 + 1;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 != 0) {
      pcVar6 = *(code **)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar6)(lVar5 + iVar8,local_40);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_38 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar3 = (int *)((longlong)local_38 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar9 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
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
      goto LAB_149431717;
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4,iVar1,param_3,param_3);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_149431715:
  uVar9 = 0;
LAB_149431717:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14943175e FUN_14943175e body=383 status=ok
// SIG undefined FUN_14943175e(void)

longlong * FUN_14943175e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x3a0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bcc5220;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x390);
  FUN_1494226f8(plVar4);
  plVar3[2] = (longlong)&PTR_LAB_14bcc5240;
  plVar3[3] = (longlong)&PTR_FUN_14bcc52e0;
  plVar3[0x72] = 0;
  plVar3[0x73] = 0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14943198a(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_149431867;
    param_1[1] = 0;
LAB_149431831:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149431867;
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
      if (plVar4 == (longlong *)0x0) goto LAB_149431867;
      goto LAB_149431831;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149431867;
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
LAB_149431867:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x390;
  FUN_140a52e78(*param_1 + 8,"SInterchangeCompareSkeletonTreeViewItem",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x8a5);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494318de FUN_1494318de body=9 status=ok
// SIG undefined FUN_1494318de(void)

void FUN_1494318de(longlong param_1)

{
  FUN_149431934(param_1 + 0x10);
  return;
}



// FUNCTION 1494318e8 FUN_1494318e8 body=29 status=ok
// SIG undefined FUN_1494318e8(void)

undefined8 FUN_1494318e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149431906 FUN_149431906 body=45 status=ok
// SIG undefined FUN_149431906(void)

longlong FUN_149431906(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_149431934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149431934 FUN_149431934 body=85 status=ok
// SIG undefined FUN_149431934(void)

void FUN_149431934(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bcc5240;
  param_1[1] = &PTR_FUN_14bcc52e0;
  plVar3 = (longlong *)param_1[0x71];
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
  FUN_149425d64(param_1);
  return;
}



// FUNCTION 14943198a FUN_14943198a body=171 status=ok
// SIG undefined FUN_14943198a(void)

void FUN_14943198a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_149431a09;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_149431a09;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_149431a09:
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
                    /* WARNING: Could not recover jumptable at 0x000149431a29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 149431a36 FUN_149431a36 body=3289 status=ok
// SIG undefined FUN_149431a36(void)

void FUN_149431a36(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_f88 [32];
  undefined1 *local_f68;
  undefined4 local_f60;
  uint local_f5c;
  undefined8 local_f58;
  undefined1 local_f49;
  undefined1 local_f48 [8];
  longlong *local_f40;
  undefined1 local_f29;
  undefined1 local_f28 [8];
  longlong *local_f20;
  undefined4 local_f10;
  undefined4 uStack_f0c;
  undefined4 uStack_f08;
  undefined4 uStack_f04;
  undefined4 local_f00;
  undefined1 local_efc;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  longlong *local_ee8 [2];
  undefined1 local_ed8 [16];
  undefined1 local_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  longlong *local_eb0 [2];
  undefined1 local_ea0 [16];
  undefined1 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  longlong *local_e70;
  undefined8 local_e68;
  longlong *local_e60;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined1 local_e39;
  undefined1 local_e38 [8];
  longlong *local_e30;
  undefined2 local_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  longlong local_e08;
  undefined1 local_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  longlong *local_de0;
  undefined8 local_dd8;
  longlong *local_dd0;
  longlong local_dc8;
  longlong *plStack_dc0;
  longlong *local_db8;
  undefined1 local_db0 [8];
  longlong *local_da8;
  undefined8 local_d98;
  longlong *local_d90;
  undefined8 local_d88;
  longlong *local_d80;
  undefined8 local_d78;
  longlong *local_d70;
  undefined8 local_d68;
  longlong *local_d60;
  undefined8 local_d58;
  undefined8 local_d50;
  void *local_d48;
  int local_d40;
  undefined4 local_d3c;
  wchar_t *local_d38;
  undefined8 uStack_d30;
  undefined1 local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined1 local_ae8;
  undefined1 local_8c8 [192];
  undefined1 local_808 [112];
  undefined2 local_798;
  undefined1 local_790 [304];
  longlong local_660;
  undefined1 local_658;
  undefined1 local_650 [128];
  undefined1 local_5d0 [192];
  undefined1 local_510 [440];
  undefined1 local_358 [24];
  undefined1 local_340 [24];
  undefined1 local_328 [16];
  undefined1 local_318 [192];
  undefined1 local_258 [440];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f88;
  uVar8 = *(undefined8 *)(param_2 + 0x1a8);
  lVar6 = *(longlong *)(param_2 + 0x1b0);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x380) = uVar8;
  *(longlong *)(param_1 + 0x388) = lVar6;
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
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  lVar6 = (**(code **)(*plVar5 + 0x78))(plVar5);
  local_d38 = L"Construct_Joint_tooltip";
  uStack_d30._0_4_ = 0x17;
  FUN_1446e940c(local_808,&local_d38);
  local_d38 = L"SInterchangeCompareSkeletonTreeViewItem";
  uStack_d30 = CONCAT44(uStack_d30._4_4_,0x27);
  FUN_1446e940c(local_510,&local_d38);
  FUN_140208bae(&local_d38,local_510,local_808,
                L"Re-import joint match skeletal mesh skeleton joint.");
  puVar7 = (undefined8 *)FUN_1447a1f4a(&local_d38);
  local_d48 = (void *)0x0;
  local_d40 = *(int *)(puVar7 + 1);
  lVar14 = (longlong)local_d40;
  _Src = (void *)*puVar7;
  if (lVar14 == 0) {
    local_d3c = 0;
  }
  else {
    FUN_1446dd670(&local_d48,local_d40,0);
    memcpy(local_d48,_Src,lVar14 * 2);
  }
  if (local_d38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d38 + 0x10))();
  }
  if (*(char *)(*(longlong *)(param_1 + 0x380) + 0x20) == '\x01') {
    FUN_1446ddc76(&local_d50,"FBXIcon.ReimportCompareAdd",1);
    plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = DAT_14c96b350;
    }
    lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,local_d50,0,0);
    local_d38 = L"Construct_AddJoint_tooltip";
    uStack_d30._0_4_ = 0x1a;
    FUN_1446e940c(local_808,&local_d38);
    local_d38 = L"SInterchangeCompareSkeletonTreeViewItem";
    uStack_d30 = CONCAT44(uStack_d30._4_4_,0x27);
    FUN_1446e940c(local_510,&local_d38);
    pwVar13 = L"Re-import add this joint.";
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x380) + 0x21) != '\x01') goto LAB_149431cd5;
    FUN_1446ddc76(&local_d58,"FBXIcon.ReimportCompareRemoved",1);
    plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = DAT_14c96b350;
    }
    lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,local_d58,0,0);
    local_d38 = L"Construct_RemoveJoint_tooltip";
    uStack_d30._0_4_ = 0x1d;
    FUN_1446e940c(local_808,&local_d38);
    local_d38 = L"SInterchangeCompareSkeletonTreeViewItem";
    uStack_d30 = CONCAT44(uStack_d30._4_4_,0x27);
    FUN_1446e940c(local_510,&local_d38);
    pwVar13 = L"Re-import remove this joint.";
  }
  FUN_140208bae(&local_d38,local_510,local_808,pwVar13);
  uVar8 = FUN_1447a1f4a(&local_d38);
  FUN_144a787a6(&local_d48,uVar8);
  if (local_d38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d38 + 0x10))();
  }
LAB_149431cd5:
  lVar14 = *(longlong *)(param_1 + 0x380);
  if (*(char *)(lVar14 + 0x22) == '\x01') {
    if (*(char *)(lVar14 + 0x24) == '\x01') {
      local_f5c = 0;
      local_f60 = 0;
      uVar16 = DAT_14cc154a0;
      uVar17 = DAT_14cc154a8;
      uVar18 = DAT_14cc154a4;
      uVar19 = DAT_14cc1549c;
      uVar12 = 0;
    }
    else {
      uVar16 = 0;
      uVar17 = 0x3f800000;
      local_f60 = 0;
      local_f5c = (uint)lVar14;
      uVar18 = uVar17;
      uVar19 = uVar17;
      uVar12 = 2;
    }
  }
  else {
    local_f60 = (undefined4)CONCAT71((int7)((ulonglong)lVar14 >> 8),DAT_14cc15499);
    local_f5c = (uint)DAT_14cc1549a;
    uVar16 = DAT_14cc1548c;
    uVar17 = DAT_14cc15494;
    uVar18 = DAT_14cc15490;
    uVar19 = DAT_14cc15488;
    uVar12 = DAT_14cc15498;
  }
  local_f58 = param_3;
  FUN_140a5296a(local_258);
  FUN_140a50426(local_318);
  uVar8 = FUN_140a52578(local_318);
  FUN_146a2b81a(local_510);
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == (longlong *)0x0) {
LAB_149431e5e:
    local_dc8 = 0;
    plStack_dc0 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_149431e5e;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar15 = iVar4 == iVar3;
      if (bVar15) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar15);
    local_dc8 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      local_dc8 = 0;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_dc0 = plVar5;
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
  local_db8 = &local_dc8;
  FUN_149432788(local_db0);
  FUN_149432710(local_db0,&local_d98,local_510);
  local_d88 = local_d98;
  local_d80 = local_d90;
  if (local_d90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d90 + 1) = (int)local_d90[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_140a4fe8e(uVar8,&local_d88);
  uVar8 = FUN_140a52392(local_258,uVar8);
  FUN_140a50426(local_5d0);
  lVar14 = FUN_140a52578(local_5d0);
  local_d38 = (wchar_t *)0x4000000000000000;
  uStack_d30 = 0x4000000040c00000;
  local_d28 = 1;
  local_d20 = 0;
  uStack_d18 = 0;
  *(undefined1 *)(lVar14 + 0x28) = 1;
  *(undefined4 *)(lVar14 + 0x18) = 0;
  *(undefined4 *)(lVar14 + 0x1c) = 0x40000000;
  *(undefined4 *)(lVar14 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar14 + 0x24) = 0x40000000;
  FUN_144a450dc(lVar14 + 0x30,&local_d20);
  FUN_1449db362(&local_d20);
  FUN_140a53334(local_808);
  local_e00 = 1;
  local_df8 = 0;
  uStack_df0 = 0;
  local_658 = 1;
  local_e08 = lVar6;
  local_660 = lVar6;
  FUN_144a450dc(local_650,&local_df8);
  FUN_1449db362(&local_df8);
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  lVar9 = (**(code **)(*plVar5 + 0x78))(plVar5);
  puVar11 = &DAT_14c96b238;
  if (lVar6 == lVar9) {
    puVar11 = &DAT_14c96b1e1;
  }
  local_e20 = CONCAT11(1,*puVar11);
  local_e18 = 0;
  uStack_e10 = 0;
  local_798 = local_e20;
  FUN_144a450dc(local_790,&local_e18);
  FUN_1449db362(&local_e18);
  local_f68 = &local_e39;
  FUN_140a554b8(local_e38,"SImage",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x886);
  FUN_140a52c70(local_e38,&local_de8,local_808);
  local_dd8 = local_de8;
  local_dd0 = local_de0;
  if (local_de0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_de0 + 1) = (int)local_de0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar14,&local_dd8);
  uVar8 = FUN_140a52392(uVar8,uVar10);
  FUN_140a50426(local_8c8);
  local_e58 = 0x3f800000;
  local_e54 = 1;
  local_e50 = 0;
  uStack_e48 = 0;
  lVar6 = FUN_140a5475a(local_8c8);
  local_d38 = (wchar_t *)0x4040000000000000;
  uStack_d30 = 0x4040000040c00000;
  local_d28 = 1;
  local_d20 = 0;
  uStack_d18 = 0;
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x1c) = 0x40400000;
  *(undefined4 *)(lVar6 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar6 + 0x24) = 0x40400000;
  FUN_144a450dc(lVar6 + 0x30,&local_d20);
  FUN_1449db362(&local_d20);
  *(undefined4 *)(lVar6 + 0x48) = 2;
  *(undefined1 *)(lVar6 + 0x4c) = 1;
  FUN_140a570d8(&local_d38);
  FUN_140009b9a(local_eb0,*(longlong *)(param_1 + 0x380) + 0x10);
  FUN_14023423e(local_ea0,local_eb0);
  local_e90 = 1;
  local_e88 = 0;
  uStack_e80 = 0;
  uVar10 = FUN_140a54906(&local_d38,local_ea0);
  FUN_140009b9a(local_ee8,&local_d48);
  FUN_14023423e(local_ed8,local_ee8);
  local_ec8 = 1;
  local_ec0 = 0;
  uStack_eb8 = 0;
  lVar14 = FUN_146a10d9c(uVar10,local_ed8);
  local_f00 = CONCAT22((short)local_f5c,CONCAT11((char)local_f60,uVar12));
  local_efc = 1;
  local_ef8 = 0;
  uStack_ef0 = 0;
  *(undefined4 *)(lVar14 + 0x270) = uVar19;
  *(undefined4 *)(lVar14 + 0x274) = uVar16;
  *(undefined4 *)(lVar14 + 0x278) = uVar18;
  *(undefined4 *)(lVar14 + 0x27c) = uVar17;
  *(undefined4 *)(lVar14 + 0x280) = local_f00;
  *(undefined1 *)(lVar14 + 0x284) = 1;
  local_f10 = uVar19;
  uStack_f0c = uVar16;
  uStack_f08 = uVar18;
  uStack_f04 = uVar17;
  FUN_144a450dc(lVar14 + 0x288,&local_ef8);
  FUN_1449db362(&local_ef8);
  local_f68 = &local_f29;
  FUN_140a54526(local_f28,"STextBlock",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x88f);
  FUN_140a52852(local_f28,&local_e78,lVar14);
  local_e68 = local_e78;
  local_e60 = local_e70;
  if (local_e70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e70 + 1) = (int)local_e70[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar6,&local_e68);
  uVar8 = FUN_140a52392(uVar8,uVar10);
  local_f68 = &local_f49;
  FUN_140a541dc(local_f48,"SHorizontalBox",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x87b);
  FUN_140a50ec6(local_f48,&local_d78,uVar8);
  uVar8 = local_f58;
  local_d68 = local_d78;
  local_d60 = local_d70;
  if (local_d70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d70 + 1) = (int)local_d70[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e8,&local_d68);
  plVar5 = local_d60;
  if (local_d60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d60)(local_d60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_d70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_d70)(local_d70);
      LOCK();
      piVar2 = (int *)((longlong)local_d70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d70 + 0x10))(local_d70);
      }
    }
  }
  if (local_f40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_f40)(local_f40);
      LOCK();
      piVar2 = (int *)((longlong)local_f40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_f40 + 0x10))(local_f40);
      }
    }
  }
  plVar5 = local_e60;
  if (local_e60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e60)(local_e60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_e70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_e70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_e70)(local_e70);
      LOCK();
      piVar2 = (int *)((longlong)local_e70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e70 + 0x10))(local_e70);
      }
    }
  }
  if (local_f20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f20 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_f20)(local_f20);
      LOCK();
      piVar2 = (int *)((longlong)local_f20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_f20 + 0x10))(local_f20);
      }
    }
  }
  if (local_ee8[0] != (longlong *)0x0) {
    (**(code **)(*local_ee8[0] + 0x10))();
  }
  if (local_eb0[0] != (longlong *)0x0) {
    (**(code **)(*local_eb0[0] + 0x10))();
  }
  FUN_140a59ae6(&local_d38);
  FUN_140a509a6(local_8c8);
  plVar5 = local_dd0;
  if (local_dd0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_dd0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_dd0)(local_dd0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_de0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_de0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_de0)(local_de0);
      LOCK();
      piVar2 = (int *)((longlong)local_de0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_de0 + 0x10))(local_de0);
      }
    }
  }
  if (local_e30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_e30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_e30)(local_e30);
      LOCK();
      piVar2 = (int *)((longlong)local_e30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e30 + 0x10))(local_e30);
      }
    }
  }
  FUN_140a55a86(local_808);
  FUN_140a509a6(local_5d0);
  plVar5 = local_d80;
  if (local_d80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d80)(local_d80);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_d90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d90 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_d90)(local_d90);
      LOCK();
      piVar2 = (int *)((longlong)local_d90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d90 + 0x10))(local_d90);
      }
    }
  }
  if (local_da8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_da8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_da8)(local_da8);
      LOCK();
      piVar2 = (int *)((longlong)local_da8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_da8 + 0x10))(local_da8);
      }
    }
  }
  plVar5 = plStack_dc0;
  if (plStack_dc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_dc0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_dc0)(plStack_dc0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1449db362(local_328);
  FUN_1449db362(local_340);
  FUN_1449db362(local_358);
  FUN_140a4ff8c(local_510);
  FUN_140a509a6(local_318);
  FUN_145ab33da(local_258);
  FUN_149422324(&local_d38);
  local_ae8 = 1;
  FUN_149426e30(param_1,&local_d38,uVar8);
  FUN_14942250a(&local_d38);
  if (local_d48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_f88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149432710 FUN_149432710 body=119 status=ok
// SIG undefined FUN_149432710(void)

longlong * FUN_149432710(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1494328dc(param_1[2],*param_1,param_3);
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



// FUNCTION 149432788 FUN_149432788 body=338 status=ok
// SIG undefined FUN_149432788(void)

longlong * FUN_149432788(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_146a2ba86(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14943286b;
    param_1[1] = 0;
LAB_149432835:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14943286b;
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
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (local_30 != plVar4) {
      param_1[1] = (longlong)local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_14943286b;
      goto LAB_149432835;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14943286b;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14943286b:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = 0x2c8;
  FUN_140a52e78(*param_1,"SExpanderArrow",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x87f);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494328dc FUN_1494328dc body=134 status=ok
// SIG undefined FUN_1494328dc(void)

void FUN_1494328dc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149432964 FUN_149432964 body=52 status=ok
// SIG undefined FUN_149432964(void)

void FUN_149432964(longlong *param_1)

{
  FUN_149432998();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149432998 FUN_149432998 body=89 status=ok
// SIG undefined FUN_149432998(void)

void FUN_149432998(longlong param_1)

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



// FUNCTION 1494329f2 FUN_1494329f2 body=48 status=ok
// SIG undefined FUN_1494329f2(void)

void FUN_1494329f2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 149432a22 FUN_149432a22 body=48 status=ok
// SIG undefined FUN_149432a22(void)

void FUN_149432a22(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 149432a52 FUN_149432a52 body=132 status=ok
// SIG undefined FUN_149432a52(void)

void FUN_149432a52(longlong param_1,int param_2)

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



// FUNCTION 149432ad8 FUN_149432ad8 body=132 status=ok
// SIG undefined FUN_149432ad8(void)

void FUN_149432ad8(longlong param_1,int param_2)

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



// FUNCTION 149432b5e FUN_149432b5e body=132 status=ok
// SIG undefined FUN_149432b5e(void)

void FUN_149432b5e(longlong param_1,int param_2)

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



// FUNCTION 149432be4 FUN_149432be4 body=485 status=ok
// SIG undefined FUN_149432be4(void)

longlong * FUN_149432be4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x15) goto LAB_149432d77;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_149432d77:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149432dca FUN_149432dca body=198 status=ok
// SIG undefined FUN_149432dca(void)

undefined8 FUN_149432dca(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x15)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 149432e90 FUN_149432e90 body=250 status=ok
// SIG undefined FUN_149432e90(void)

undefined8 *
FUN_149432e90(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_149432f8e(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_149432be4(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149432f8e FUN_149432f8e body=378 status=ok
// SIG undefined FUN_149432f8e(void)

ulonglong FUN_149432f8e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_149433065:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x15;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149433065;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_149433032;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149433032;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_14943310a(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149433032:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943310a FUN_14943310a body=202 status=ok
// SIG undefined FUN_14943310a(void)

undefined8 FUN_14943310a(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x15) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494331d6 FUN_1494331d6 body=135 status=ok
// SIG undefined FUN_1494331d6(void)

undefined8 * FUN_1494331d6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bcc5750;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14943325e FUN_14943325e body=57 status=ok
// SIG undefined FUN_14943325e(void)

undefined8 * FUN_14943325e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcc5750;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494332ac FUN_1494332ac body=64 status=ok
// SIG undefined FUN_1494332ac(void)

void FUN_1494332ac(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1494333c2(*param_2,param_1);
  return;
}



// FUNCTION 1494332ec FUN_1494332ec body=64 status=ok
// SIG undefined FUN_1494332ec(void)

void FUN_1494332ec(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1494333c2(*param_2,param_1);
  return;
}



// FUNCTION 14943332c FUN_14943332c body=98 status=ok
// SIG undefined FUN_14943332c(void)

void FUN_14943332c(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1494333c2(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014943337f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494333a2 FUN_1494333a2 body=31 status=ok
// SIG undefined FUN_1494333a2(void)

undefined1 FUN_1494333a2(longlong param_1,undefined8 param_2)

{
  FUN_14943344a(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1494333c2 FUN_1494333c2 body=135 status=ok
// SIG undefined FUN_1494333c2(void)

undefined8 * FUN_1494333c2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bcc5750;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 14943344a FUN_14943344a body=206 status=ok
// SIG undefined FUN_14943344a(void)

undefined4 FUN_14943344a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14943351a(param_1,param_2,&local_50);
    if ((char)uVar2 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_70);
      local_60 = local_70;
      local_58 = local_68 + -1;
      if (local_68 == 0) {
        local_58 = 0;
      }
      lVar3 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        puVar1 = (undefined4 *)(local_38 + *(int *)(lVar3 + 0x44));
        *puVar1 = local_50;
        puVar1[1] = uStack_4c;
        puVar1[2] = uStack_48;
        puVar1[3] = uStack_44;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943351a FUN_14943351a body=295 status=ok
// SIG undefined FUN_14943351a(void)

ulonglong FUN_14943351a(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bdc8e(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_14943360f:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 0xf))
      goto LAB_14943360f;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149303428(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149433575;
  }
  param_3 = 0;
LAB_149433575:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 149433642 FUN_149433642 body=135 status=ok
// SIG undefined FUN_149433642(void)

undefined8 * FUN_149433642(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bcc57c0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1494336ca FUN_1494336ca body=57 status=ok
// SIG undefined FUN_1494336ca(void)

undefined8 * FUN_1494336ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcc57c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149433718 FUN_149433718 body=64 status=ok
// SIG undefined FUN_149433718(void)

void FUN_149433718(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14943382e(*param_2,param_1);
  return;
}



// FUNCTION 149433758 FUN_149433758 body=64 status=ok
// SIG undefined FUN_149433758(void)

void FUN_149433758(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_14943382e(*param_2,param_1);
  return;
}



// FUNCTION 149433798 FUN_149433798 body=98 status=ok
// SIG undefined FUN_149433798(void)

void FUN_149433798(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_14943382e(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494337eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14943380e FUN_14943380e body=31 status=ok
// SIG undefined FUN_14943380e(void)

undefined1 FUN_14943380e(longlong param_1,undefined8 param_2)

{
  FUN_1494338b6(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 14943382e FUN_14943382e body=135 status=ok
// SIG undefined FUN_14943382e(void)

undefined8 * FUN_14943382e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bcc57c0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1494338b6 FUN_1494338b6 body=306 status=ok
// SIG undefined FUN_1494338b6(void)

ulonglong FUN_1494338b6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_149433937;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1494339c5:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_149433937;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1494339c5;
  bVar1 = FUN_1494339ea(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_149433937:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494339ea FUN_1494339ea body=177 status=ok
// SIG undefined FUN_1494339ea(void)

ulonglong FUN_1494339ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bae74(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0xf);
      goto LAB_149433a6c;
    }
  }
  uVar3 = 0;
LAB_149433a6c:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149433a9c FUN_149433a9c body=7 status=ok
// SIG undefined FUN_149433a9c(void)

void FUN_149433a9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 149433aa4 FUN_149433aa4 body=132 status=ok
// SIG undefined FUN_149433aa4(void)

void FUN_149433aa4(longlong param_1,int param_2)

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



// FUNCTION 149433b2a FUN_149433b2a body=87 status=ok
// SIG undefined FUN_149433b2a(void)

void FUN_149433b2a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar2) << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 149433b82 FUN_149433b82 body=62 status=ok
// SIG undefined FUN_149433b82(void)

void FUN_149433b82(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149433bc0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149433bc0 FUN_149433bc0 body=93 status=ok
// SIG undefined FUN_149433bc0(void)

ulonglong FUN_149433bc0(uint param_1,uint param_2)

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



// FUNCTION 149433c1e FUN_149433c1e body=229 status=ok
// SIG undefined FUN_149433c1e(void)

int * FUN_149433c1e(longlong *param_1,int *param_2)

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



// FUNCTION 149433d04 FUN_149433d04 body=124 status=ok
// SIG undefined FUN_149433d04(void)

undefined8 FUN_149433d04(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_149433d80(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 149433d80 FUN_149433d80 body=114 status=ok
// SIG undefined FUN_149433d80(void)

void FUN_149433d80(longlong *param_1,int param_2)

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



// FUNCTION 149433df2 FUN_149433df2 body=477 status=ok
// SIG undefined FUN_149433df2(void)

void FUN_149433df2(longlong *param_1)

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



// FUNCTION 149433fd0 FUN_149433fd0 body=322 status=ok
// SIG undefined FUN_149433fd0(void)

void FUN_149433fd0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 149434114 FUN_149434114 body=287 status=ok
// SIG undefined FUN_149434114(void)

undefined4 * FUN_149434114(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149434234(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_14943431a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14943440c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149434234 FUN_149434234 body=230 status=ok
// SIG undefined FUN_149434234(void)

int * FUN_149434234(longlong *param_1,int *param_2)

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



// FUNCTION 14943431a FUN_14943431a body=128 status=ok
// SIG undefined FUN_14943431a(void)

undefined8 FUN_14943431a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14943439a(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14943439a FUN_14943439a body=114 status=ok
// SIG undefined FUN_14943439a(void)

void FUN_14943439a(longlong *param_1,int param_2)

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



// FUNCTION 14943440c FUN_14943440c body=419 status=ok
// SIG undefined FUN_14943440c(void)

void FUN_14943440c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1494345d2 FUN_1494345d2 body=137 status=ok
// SIG undefined FUN_1494345d2(void)

void FUN_1494345d2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149434706 FUN_149434706 body=91 status=ok
// SIG undefined FUN_149434706(void)

void FUN_149434706(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x6b) == '\0') {
    local_20 = 0;
    FUN_14485c47a(&local_20,0);
    *(undefined8 *)(param_1 + 0x1c4) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149434762 FUN_149434762 body=488 status=ok
// SIG undefined FUN_149434762(void)

void FUN_149434762(longlong param_1,longlong param_2,undefined1 *param_3,char *param_4,char *param_5
                  ,undefined1 *param_6,undefined1 *param_7)

{
  longlong lVar1;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined1 *local_110;
  longlong *local_108;
  char **local_100;
  code *local_f8;
  undefined8 **local_f0;
  code *local_e8;
  char **local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c0;
  char *local_b8;
  longlong *plStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c0 = param_2;
  if (param_2 != 0) {
    *param_3 = 0;
    *param_4 = '\0';
    *param_5 = '\0';
    *param_6 = 0;
    *param_7 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = param_5;
    local_e8 = FUN_144516f78;
    local_e0 = &local_b8;
    plStack_b0 = &local_d8;
    FUN_14943494c(param_2);
    *param_4 = (int)uStack_d0 != 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = (char *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_118 = &local_c0;
    local_f0 = &local_118;
    local_110 = param_6;
    local_f8 = FUN_144517028;
    local_108 = &local_d8;
    local_100 = &local_b8;
    FUN_149434a9e(param_2);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_149440984(&local_b8);
    FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    lVar1 = FUN_14479d2ce(param_1 + 0x148);
    if (*(char *)(lVar1 + 0x149) == '\x01') {
      lVar1 = FUN_14479d2ce(param_1 + 0x148);
      if (*(char *)(lVar1 + 0x148) == '\0') {
        if (*param_5 == '\0') {
          if (*param_4 == '\x01') {
            *param_3 = *param_6;
          }
        }
        else {
          *param_7 = 1;
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943494c FUN_14943494c body=336 status=ok
// SIG undefined FUN_14943494c(void)

void FUN_14943494c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar4 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar4 + lVar8 + 0x10);
        uVar6 = FUN_14599b312();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar3 = *plVar9;
        if ((lVar3 != 0 & bVar5) == 1) {
          local_68 = lVar3;
          (*(code *)*param_2)(param_2[1],lVar4 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149434a9e FUN_149434a9e body=356 status=ok
// SIG undefined FUN_149434a9e(void)

void FUN_149434a9e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
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
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar10 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar7 = FUN_145a931ec();
        bVar5 = FUN_144a7ca96(plVar10,uVar7);
        lVar4 = *plVar10;
        if (((lVar4 != 0 & bVar5) == 1) &&
           (local_68 = lVar4, cVar6 = (*(code *)*param_2)(param_2[1],lVar3 + lVar8,&local_68),
           cVar6 != '\0')) break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149434c04 FUN_149434c04 body=35 status=ok
// SIG undefined FUN_149434c04(void)

void FUN_149434c04(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(char *)(param_1 + 0x178) == '\0') {
    *(undefined1 *)(param_1 + 0x179) = 0;
  }
  return;
}



// FUNCTION 149434c28 FUN_149434c28 body=325 status=ok
// SIG undefined FUN_149434c28(void)

longlong FUN_149434c28(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 local_3d;
  undefined1 local_3c;
  char local_3b [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_149434d6e();
  bVar8 = false;
  local_3b[2] = '\0';
  local_3b[1] = 0;
  local_58 = local_3b;
  local_3b[0] = '\0';
  local_50 = &local_3c;
  local_3c = 0;
  local_48 = &local_3d;
  local_3d = 0;
  FUN_149434762(param_2,param_1);
  if ((local_3b[0] == '\0') && (bVar8 = true, local_3b[2] == '\0')) {
    lVar5 = FUN_14479d2ce(param_2 + 0x148);
    bVar8 = *(char *)(lVar5 + 0x148) == '\x02';
  }
  lVar5 = param_2 + 0x148;
  lVar6 = FUN_14479d2ce(lVar5);
  cVar1 = *(char *)(lVar6 + 0x148);
  lVar6 = FUN_14479d2ce(param_2 + 0x150);
  uVar2 = *(undefined1 *)(lVar6 + 0x156);
  lVar6 = FUN_14479d2ce(param_2 + 0x150);
  uVar3 = *(undefined1 *)(lVar6 + 0x154);
  lVar6 = FUN_14479d2ce(lVar5);
  uVar7 = 1;
  if (*(char *)(lVar6 + 0x14b) == '\0') {
    lVar5 = FUN_14479d2ce(lVar5);
    uVar7 = *(undefined1 *)(lVar5 + 0x14c);
  }
  *(bool *)(lVar4 + 0x120) = bVar8;
  *(bool *)(lVar4 + 0x121) = cVar1 == '\x01';
  *(undefined1 *)(lVar4 + 0x122) = uVar2;
  *(undefined1 *)(lVar4 + 0x123) = uVar3;
  *(undefined1 *)(lVar4 + 0x124) = uVar7;
  *(undefined1 *)(lVar4 + 0x125) = local_3d;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149434d6e FUN_149434d6e body=1722 status=ok
// SIG undefined FUN_149434d6e(void)

longlong FUN_149434d6e(undefined8 param_1)

{
  longlong *plVar1;
  wchar_t **ppwVar2;
  longlong lVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  ushort uVar17;
  ulonglong uVar18;
  ushort uVar19;
  int iVar20;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  wchar_t **ppwStack_180;
  code *local_178;
  longlong **local_170;
  code *local_168;
  longlong **local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  code *local_130;
  longlong **local_128;
  char local_119;
  code *local_118;
  longlong **local_110;
  longlong *local_108;
  ulonglong uStack_100;
  longlong local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  wchar_t **ppwStack_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f0 = param_1;
  uVar10 = FUN_1409ffe1d();
  local_f8 = FUN_14944007b(uVar10);
  *(undefined8 *)(local_f8 + 0x118) = param_1;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_118 = FUN_1445180d0;
  local_110 = &local_b8;
  local_b8 = &local_f8;
  puStack_b0 = &local_f0;
  FUN_1492f3f94(param_1);
  local_98 = 0;
  iVar20 = 0;
  local_90 = 0;
  local_b8 = (longlong *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14943f936(local_f0,&local_b8);
  local_138 = &local_119;
  local_119 = '\0';
  local_130 = FUN_144518218;
  local_158 = &local_f8;
  local_150 = (wchar_t *)&local_f0;
  local_148 = (wchar_t **)&local_b8;
  local_140 = &local_108;
  local_128 = &local_158;
  FUN_1492f3f94(local_f0);
  if (local_119 == '\x01') {
    if (*(int *)(local_f8 + 0x30) - *(int *)(local_f8 + 0x5c) == 1) {
      local_148 = &local_e8;
      local_e8 = (wchar_t *)0x0;
      ppwStack_e0 = (wchar_t **)0x0;
      local_168 = FUN_144518d6e;
      local_160 = &local_158;
      local_158 = &local_f8;
      local_150 = (wchar_t *)&local_f0;
      FUN_1492f3f94(local_f0);
      lVar14 = local_f8;
      local_150 = (wchar_t *)(local_f8 + 0x38);
      local_158 = (longlong *)&DAT_100000000;
      local_148 = (wchar_t **)&DAT_ffffffff;
      local_140 = (longlong **)((ulonglong)local_140 & 0xffffffff00000000);
      if (*(int *)(local_f8 + 0x50) == 0) {
        lVar13 = 0;
      }
      else {
        FUN_1449c0562(&local_158);
        lVar13 = (longlong)local_148._4_4_;
      }
      FUN_140bee9ec(*(longlong *)(lVar14 + 0x28) + lVar13 * 0x50 + 0x38,&local_e8);
      FUN_1447a1747(local_e8,(ulonglong)ppwStack_e0 & 0xffffffff);
      if (local_e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_178 = FUN_144518e4c;
      local_170 = &local_158;
      local_158 = &local_f8;
      local_150 = (wchar_t *)&local_f0;
      FUN_1492f3f94(local_f0);
    }
  }
  lVar14 = local_f8;
  plVar1 = (longlong *)(local_f8 + 0x28);
  ppwVar2 = (wchar_t **)(local_f8 + 0x38);
  local_e8 = (wchar_t *)&DAT_100000000;
  local_d8 = 0xffffffff;
  iStack_d4 = 0;
  local_d0 = 0;
  ppwStack_e0 = ppwVar2;
  if (*(int *)(local_f8 + 0x50) != 0) {
    FUN_1449c0562(&local_e8);
    iVar20 = *(int *)(lVar14 + 0x50);
  }
  local_140._0_4_ = local_d8;
  local_140._4_4_ = iStack_d4;
  local_138 = (char *)CONCAT44(local_cc,local_d0);
  local_150 = local_e8;
  local_148 = ppwStack_e0;
  local_158 = plVar1;
  if ((iStack_d4 != iVar20) || (ppwStack_e0 != ppwVar2)) {
    do {
      lVar14 = *local_158;
      lVar13 = (longlong)local_140._4_4_ * 0x50;
      if ((*(longlong *)(lVar14 + 0x20 + lVar13) != 0) && (cVar6 = FUN_14933d60e(), cVar6 != '\0'))
      {
        lVar3 = lVar14 + lVar13;
        iVar8 = *(int *)(lVar3 + 0x18);
        if (iVar8 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        else {
          puVar12 = *(undefined2 **)(lVar3 + 0x10);
        }
        pwVar16 = (wchar_t *)(lVar14 + lVar13 + 0x10);
        lVar14 = local_f8 + 200;
        iVar9 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar9 = 0;
        }
        uVar7 = FUN_144a49b4a(iVar9,puVar12);
        iVar8 = FUN_1457511aa(lVar14,uVar7,pwVar16);
        if (((iVar8 == -1) && (lVar14 = *(longlong *)(lVar3 + 0x20), lVar14 != 0)) &&
           (iVar8 = FUN_14933d038(lVar14), iVar8 != 0)) {
          local_188 = (wchar_t *)0x0;
          ppwStack_180 = (wchar_t **)0x0;
          FUN_14933d212(lVar14,0);
          while( true ) {
            FUN_1492f0c12(&local_e8);
            pwVar5 = local_e8;
            iVar8 = (int)ppwStack_180;
            if ((int)ppwStack_180 != (int)ppwStack_e0) break;
            if (((int)ppwStack_180 < 2) || (iVar9 = wcscmp(local_188,local_e8), iVar9 == 0))
            goto LAB_14943538b;
LAB_1494351f4:
            bVar4 = true;
            if ((longlong)(int)uStack_100 != 0) {
              plVar11 = local_108;
LAB_149435217:
              if ((int)plVar11[1] != iVar8) {
                if ((int)plVar11[1] + iVar8 == 1) goto LAB_149435289;
                goto LAB_14943527e;
              }
              if (1 < iVar8) {
                lVar14 = 0;
                do {
                  uVar17 = *(ushort *)(*plVar11 + lVar14);
                  uVar18 = (ulonglong)uVar17;
                  uVar19 = *(ushort *)((longlong)local_188 + lVar14);
                  if (uVar17 == uVar19) {
                    if (uVar17 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar19 | uVar17)) goto LAB_1494353c3;
                    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                    uVar15 = (ulonglong)uVar19;
                    uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                    if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[uVar15]) goto LAB_1494353c3;
                  }
                  lVar14 = lVar14 + 2;
                } while( true );
              }
              goto LAB_149435289;
            }
LAB_14943528b:
            if (local_e8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (!bVar4) goto LAB_149435398;
            uVar10 = FUN_1492f2ba8(local_f0,&local_188);
            FUN_1492ef4c6(uVar10,&local_e8);
            if (local_188 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_188 = local_e8;
            ppwStack_180 = ppwStack_e0;
          }
          if ((int)ppwStack_e0 + (int)ppwStack_180 != 1) goto LAB_1494351f4;
LAB_14943538b:
          if (pwVar5 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar5);
          }
LAB_149435398:
          if ((longlong)(int)uStack_100 != 0) {
            plVar11 = local_108;
LAB_1494352ea:
            if ((int)plVar11[1] != (int)ppwStack_180) {
              if ((int)plVar11[1] + (int)ppwStack_180 == 1) goto LAB_1494353e0;
              goto LAB_14943535a;
            }
            if (1 < (int)ppwStack_180) {
              lVar14 = 0;
              do {
                uVar17 = *(ushort *)(*plVar11 + lVar14);
                uVar18 = (ulonglong)uVar17;
                uVar19 = *(ushort *)((longlong)local_188 + lVar14);
                if (uVar17 == uVar19) {
                  if (uVar17 == 0) break;
                }
                else {
                  if (0x7f < (uVar19 | uVar17)) goto LAB_1494353d4;
                  uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                  uVar15 = (ulonglong)uVar19;
                  uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[uVar15]) goto LAB_1494353d4;
                }
                lVar14 = lVar14 + 2;
              } while( true );
            }
            goto LAB_1494353e0;
          }
LAB_149435416:
          if (local_188 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      local_140._0_4_ = (uint)local_140 & ~local_150._4_4_;
      FUN_1449c0562(&local_150);
    } while (local_158 != plVar1 || (local_148 != ppwVar2 || local_140._4_4_ != iVar20));
  }
  lVar14 = local_f8;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(&local_b8);
  FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar14;
LAB_1494353c3:
  if (uVar17 == uVar19) {
LAB_149435289:
    bVar4 = false;
    goto LAB_14943528b;
  }
LAB_14943527e:
  plVar11 = plVar11 + 2;
  if (plVar11 == local_108 + (longlong)(int)uStack_100 * 2) goto LAB_14943528b;
  goto LAB_149435217;
LAB_1494353d4:
  if (uVar17 == uVar19) {
LAB_1494353e0:
    ppwStack_e0 = &local_188;
    local_e8 = pwVar16;
    FUN_140ac5c08(local_f8 + 200,local_bc);
    goto LAB_149435416;
  }
LAB_14943535a:
  plVar11 = plVar11 + 2;
  if (plVar11 == local_108 + (longlong)(int)uStack_100 * 2) goto LAB_149435416;
  goto LAB_1494352ea;
}



// FUNCTION 149435b3c FUN_149435b3c body=89 status=ok
// SIG undefined FUN_149435b3c(void)

void FUN_149435b3c(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (param_4 != 0 && *(longlong *)(param_1 + 0x220) == param_2)) {
    lVar1 = FUN_1492f2702(*(longlong *)(param_1 + 0x220),param_3);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x1ba) = *(undefined1 *)(param_1 + 0x1b9);
      FUN_149435b96(param_1,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 149435b96 FUN_149435b96 body=182 status=ok
// SIG undefined FUN_149435b96(void)

void FUN_149435b96(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x220) != 0) {
    lVar2 = FUN_144a85a6c();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && (*(char *)(param_1 + 0x1b9) != '\x01')) &&
       (*(char *)(param_1 + 0x1bf) == '\x01')) {
      lVar2 = FUN_14479d2ce(param_1 + 0x150);
      cVar1 = FUN_144729dda(lVar2 + 0x14c);
      if (cVar1 != '\0') {
        lVar2 = (**(code **)(*param_2 + 0x3f8))(param_2);
        lVar3 = FUN_14479d2ce(param_1 + 0x150);
        lVar3 = FUN_14479d2ce(lVar3 + 0x14c);
        if (lVar2 == lVar3) {
          uVar4 = (**(code **)(*param_2 + 0x3f8))(param_2);
          FUN_14793ca50(uVar4,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 149435c4c FUN_149435c4c body=55 status=ok
// SIG undefined FUN_149435c4c(void)

void FUN_149435c4c(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144a85a6c();
  if (lVar1 == param_2) {
    if (2 < param_3) {
      param_3 = (uint)*(byte *)(param_1 + 0x1ba);
    }
    *(char *)(param_1 + 0x1b9) = (char)param_3;
  }
  return;
}



// FUNCTION 149435c84 FUN_149435c84 body=424 status=ok
// SIG undefined FUN_149435c84(void)

ulonglong FUN_149435c84(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  ulonglong local_58 [3];
  ulonglong local_40;
  undefined7 uVar7;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[0] = local_58[0] & 0xffffffffffffff00;
  uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_58[2] = param_1;
  pcVar3 = (char *)FUN_14944196e(param_4,uVar2 >> 0x10 ^ uVar2);
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (*pcVar3 == '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    cVar1 = FUN_14933ff3c(local_58[2]);
    if ((cVar1 == '\0') || (cVar1 = FUN_144a23846(param_3,local_58), cVar1 == '\0')) {
      FUN_1492ef9be(local_58[2],local_78);
      FUN_1492f2f34(param_2,&local_68,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if ((longlong)local_60 == 0) {
        local_60 = 0;
        uVar6 = 0;
      }
      else {
        lVar8 = (longlong)local_60 << 4;
        lVar9 = local_68;
        do {
          lVar4 = FUN_1492f2ba8(param_2,lVar9);
          if (lVar4 != 0) {
            lVar5 = FUN_1459238a6();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (cVar1 = FUN_149435c84(lVar4,param_2,param_3,param_4), cVar1 != '\0')) {
              uVar6 = CONCAT71(uVar7,1);
              goto LAB_149435e07;
            }
          }
          lVar9 = lVar9 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
        uVar6 = 0;
      }
LAB_149435e07:
      FUN_1447a1747(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *pcVar3 = '\x01';
      uVar6 = CONCAT71(uVar7,1);
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 149435e5a FUN_149435e5a body=446 status=ok
// SIG undefined FUN_149435e5a(void)

longlong * FUN_149435e5a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492ef4c6(param_4,&local_40);
  lVar2 = FUN_1492f2ba8(param_2,&local_40);
  if (lVar2 != 0) {
    lVar3 = FUN_1459238a6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_144a23846(param_3,&local_40);
      if (cVar1 != '\0') {
        uVar4 = FUN_149343132();
        cVar1 = FUN_149341ac2(lVar2,uVar4);
        if (cVar1 == '\0') {
          uVar4 = FUN_1493431a6();
          cVar1 = FUN_149341ac2(lVar2,uVar4);
          if (cVar1 != '\0') {
            FUN_1492ef4c6(lVar2,local_50);
            lVar3 = FUN_1492f2ba8(param_2,local_50);
            if (lVar3 != 0) {
              lVar5 = FUN_1459238a6();
              if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                uVar4 = FUN_1493431a6();
                cVar1 = FUN_149341ac2(lVar2,uVar4);
                if (cVar1 == '\0') {
                  *param_1 = local_40;
                  local_40 = 0;
                  *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
                  *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
                  local_38 = 0;
                }
                else {
                  FUN_149435e5a(param_1,param_2,param_3,lVar2);
                }
                if (local_50[0] != 0) {
                  FUN_1400020a8();
                }
                goto LAB_149435ea5;
              }
            }
            if (local_50[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_149435e9d;
          }
        }
      }
      *param_1 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
      local_38 = 0;
      goto LAB_149435ea5;
    }
  }
LAB_149435e9d:
  FUN_1492f0c12(param_1);
LAB_149435ea5:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149436019 FUN_149436019 body=194 status=ok
// SIG undefined FUN_149436019(void)

void FUN_149436019(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = param_3;
  FUN_1492f5692(param_2);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1492f4df8(param_2,&local_38);
  if ((longlong)(int)uStack_30 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)(int)uStack_30 << 4;
    lVar4 = local_38;
    do {
      lVar1 = FUN_1492f2702(param_1,lVar4);
      if (lVar1 != 0) {
        FUN_149436019(param_1,lVar1,local_21);
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar2 = uStack_30 & 0xffffffff;
  }
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494360dc FUN_1494360dc body=33 status=ok
// SIG undefined FUN_1494360dc(void)

void FUN_1494360dc(longlong param_1,longlong param_2)

{
  FUN_1492ebe2c();
  *(bool *)(param_1 + 0x69) = *(longlong *)(param_2 + 0x10) != 0;
  return;
}



// FUNCTION 1494360fe FUN_1494360fe body=153 status=ok
// SIG undefined FUN_1494360fe(void)

void FUN_1494360fe(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x174);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
  *(undefined4 *)(param_1 + 0x170) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
    FUN_1408be2c4(param_1 + 0x168,0);
  }
  local_20 = &local_30;
  local_28 = FUN_1445176ba;
  local_30 = param_1;
  FUN_149439322(*(undefined8 *)(param_1 + 0x160));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149436198 FUN_149436198 body=336 status=ok
// SIG undefined FUN_149436198(void)

void FUN_149436198(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a9394c();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494362ea FUN_1494362ea body=4379 status=ok
// SIG undefined FUN_1494362ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494362ea(longlong *param_1,double *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ushort uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  wchar_t *pwVar26;
  double *pdVar27;
  undefined8 *puVar28;
  double *pdVar29;
  longlong **pplVar30;
  uint uVar31;
  bool bVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8;
  double local_398 [2];
  undefined1 local_388 [12];
  undefined4 uStack_37c;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  longlong local_338 [2];
  longlong local_328 [2];
  longlong local_318 [2];
  longlong local_308;
  ulonglong uStack_300;
  longlong local_2f8;
  ulonglong uStack_2f0;
  code *local_2e0;
  longlong **local_2d8;
  longlong *local_2d0;
  code *local_2c8;
  longlong **local_2c0;
  longlong local_2b8 [2];
  longlong local_2a8 [3];
  longlong *local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  longlong *local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  longlong *local_168;
  longlong **pplStack_160;
  longlong **local_158;
  longlong *plStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_290 = param_3;
  if ((param_3 == (longlong *)0x0) || (param_1[0x2c] == 0)) goto LAB_14943638b;
  local_2a8[2] = 0;
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  FUN_1492ef9be(param_3,&local_168);
  FUN_140b1283a(local_2b8,L"Factory_",&local_168);
  if (local_168 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar19 = FUN_1492f2702(param_1[0x2c],local_2b8);
  if (lVar19 == 0) {
LAB_1494364cd:
    local_1e8 = ZEXT816(0);
    cVar16 = FUN_14933ff3c(local_290);
    if (cVar16 != '\0') {
      local_2a8[2] = FUN_1492f2ba8(param_1[0x2c],local_1e8);
    }
    lVar19 = local_2a8[2];
    if (local_2a8[2] == 0) {
LAB_149436644:
      if (local_1e8._0_8_ != 0) {
        FUN_1400020a8();
      }
      bVar15 = false;
      goto LAB_149436658;
    }
    lVar21 = FUN_14599b312();
    lVar20 = *(longlong *)(lVar19 + 0x10);
    if ((*(int *)(lVar20 + 0x38) < *(int *)(lVar21 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8) !=
        lVar21 + 0x30)) goto LAB_149436644;
    cVar16 = FUN_14933d60e(lVar19);
    local_268 = (longlong *)CONCAT71(local_268._1_7_,cVar16);
    if (cVar16 == '\0') {
      pplStack_160 = &local_290;
      local_158 = &local_268;
      local_2c8 = FUN_144517216;
      local_2c0 = &local_168;
      local_168 = param_1;
      FUN_149437406(param_1[0x2c]);
      if (((ulonglong)local_268 & 1) == 0) goto LAB_149436644;
    }
    lVar19 = local_1e8._0_8_;
LAB_149436567:
    if (lVar19 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar20 = FUN_145a94ad0();
    if ((((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar20 + 0x38) * 8) != lVar20 + 0x30)) ||
        (cVar16 = FUN_149377e50(lVar19,local_2a8), cVar16 == '\0')) ||
       (lVar19 = FUN_1492f2702(param_1[0x2c],local_2a8), lVar19 == 0)) goto LAB_1494364cd;
    local_168 = (longlong *)0x0;
    pplStack_160 = (longlong **)0x0;
    FUN_1492f1448(lVar19 + 0x40,&local_168);
    iVar18 = (int)pplStack_160;
    if (0 < (int)pplStack_160) {
      local_2a8[2] = FUN_1492f2ba8(param_1[0x2c],local_168);
    }
    FUN_1447a1747(local_168,(int)pplStack_160);
    if (local_168 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    bVar15 = true;
    if (iVar18 < 1) goto LAB_1494364cd;
LAB_149436658:
    local_168 = (longlong *)0x0;
    pplStack_160 = (longlong **)0x0;
    FUN_1492f1448(local_290 + 0x1a,&local_168);
    uVar22 = FUN_14934321a();
    cVar16 = FUN_144a23846(&local_168,uVar22);
    FUN_1447a1747(local_168,(ulonglong)pplStack_160 & 0xffffffff);
    if (local_168 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_2d0 = (longlong *)0x0;
    if (cVar16 == '\0') {
LAB_1494366c0:
      plVar23 = (longlong *)(**(code **)(*param_1 + 0x330))(param_1,local_290,local_2a8[2]);
      if (plVar23 != (longlong *)0x0) {
        FUN_1492f9378(local_290,plVar23,0);
        local_2f8 = 0;
        uStack_2f0 = 0;
        FUN_149344826(local_290,&local_2f8);
        FUN_14937b71c(plVar23,&local_2f8);
        local_308 = 0;
        uStack_300 = 0;
        FUN_149344832(local_290,&local_308);
        FUN_14937b774(plVar23,&local_308);
        pwVar26 = L"";
        if (bVar15) {
          pwVar26 = L"_SkeletonNode";
        }
        FUN_1492ef9be(local_290,&local_168);
        FUN_144a882a8(local_318,&local_168,pwVar26);
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_140b1283a(local_328,L"Factory_",local_318);
        FUN_1492ee7cc(local_290,&local_168);
        FUN_1444ba64e(plVar23,local_328,&local_168,3);
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_1492f22b0(param_1[0x2c],local_338,plVar23);
        (**(code **)(*local_290 + 0x2c8))(local_290,&local_168);
        (**(code **)(*plVar23 + 0x2d0))(plVar23,&local_168);
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_1492ef4c6(local_290,&local_168);
        iVar18 = (int)pplStack_160;
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (1 < iVar18) {
          FUN_149435e5a(&local_168,param_1[0x2c],param_1 + 0x2d,local_290);
          FUN_1492f0c12(local_1e8);
          if ((int)pplStack_160 == local_1e8._8_4_) {
            bVar32 = true;
            if (1 < (int)pplStack_160) {
              lVar19 = 0;
              while( true ) {
                uVar2 = *(ushort *)((longlong)local_168 + lVar19);
                uVar24 = (uint)uVar2;
                uVar3 = *(ushort *)(local_1e8._0_8_ + lVar19);
                uVar31 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar31 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_149436c5f;
                  }
                  iVar18 = uVar24 - uVar31;
                  goto LAB_14943735b;
                }
                if (uVar2 == 0) break;
LAB_149436c5f:
                lVar19 = lVar19 + 2;
              }
              iVar18 = 0;
LAB_14943735b:
              bVar32 = iVar18 == 0;
            }
          }
          else {
            bVar32 = local_1e8._8_4_ + (int)pplStack_160 == 1;
          }
          if (local_1e8._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (!bVar32) {
            FUN_140b1283a(local_1e8,L"Factory_",&local_168);
            cVar16 = FUN_1492f3e1a(param_1[0x2c],local_338,local_1e8);
            if (cVar16 != '\0') {
              FUN_1444bb06c(plVar23 + 0xc,local_1e8);
            }
            if (local_1e8._0_8_ != 0) {
              FUN_1400020a8();
            }
          }
          if (local_168 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        if (bVar15) {
          FUN_1492ee2b2(plVar23,local_2a8);
        }
        else {
          if (local_2d0 == (longlong *)0x0) {
            FUN_1492ef9be(local_290,&local_168);
            FUN_1492ee2b2(plVar23,&local_168);
            if (local_168 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar25 = local_290;
            FUN_1492ef9be(plVar23,&local_168);
            FUN_1492ee2b2(plVar25,&local_168);
          }
          else {
            FUN_1492ef9be(local_2d0,&local_168);
            FUN_1492ee2b2(plVar23,&local_168);
          }
          if (local_168 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        auVar49 = _DAT_149934d80;
        local_398[0] = 0.0;
        local_398[1] = 0.0;
        local_388 = ZEXT812(0);
        uStack_37c = 0x3ff00000;
        local_378 = 0.0;
        dStack_370 = 0.0;
        local_368 = 0.0;
        dStack_360 = 0.0;
        dVar35 = (double)DAT_149934d80;
        dVar37 = DAT_149934d80._8_8_;
        local_358 = _DAT_149934d80;
        local_348 = ZEXT816(0x3ff0000000000000);
        cVar16 = FUN_149340bac(local_290);
        if (cVar16 == '\0') {
          local_168 = (longlong *)0x0;
          pplStack_160 = (longlong **)0x0;
          local_158 = (longlong **)0x0;
          plStack_150 = (longlong *)&DAT_3ff0000000000000;
          local_148 = 0.0;
          dStack_140 = 0.0;
          local_138 = 0.0;
          uStack_130 = 0;
          local_128 = auVar49;
          local_118 = 1.0;
          uStack_110 = 0;
          local_3a8 = 0;
          cVar16 = FUN_149340896(local_290,param_1[0x2c],param_2);
          if (cVar16 != '\0') {
            if (bVar15) {
              puVar28 = &DAT_14c846480;
              pplVar30 = &local_168;
              for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
                *pplVar30 = (longlong *)*puVar28;
                puVar28 = puVar28 + 1;
                pplVar30 = pplVar30 + 1;
              }
              FUN_1492ef4c6(local_290,local_1e8);
              uVar17 = local_1e8._8_4_;
              if (local_1e8._0_8_ != 0) {
                FUN_1400020a8();
              }
              if (1 < (int)uVar17) {
                lVar19 = param_1[0x2c];
                FUN_1492ef4c6(local_290,local_1e8);
                lVar19 = FUN_1492f2ba8(lVar19,local_1e8);
                if (lVar19 == 0) {
LAB_1494373b8:
                  lVar19 = 0;
                }
                else {
                  lVar20 = FUN_1459238a6();
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar20 + 0x38) * 8) != lVar20 + 0x30)) goto LAB_1494373b8;
                }
                if (local_1e8._0_8_ != 0) {
                  FUN_1400020a8();
                }
                if (lVar19 != 0) {
                  local_3a8 = 0;
                  FUN_149340896(lVar19,param_1[0x2c],param_2,&local_168);
                }
              }
            }
            FUN_14937a8ac(plVar23,&local_168,1);
          }
        }
        else {
          if (bVar15) {
            pdVar27 = (double *)&DAT_14c846480;
            pdVar29 = local_398;
            for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
              *pdVar29 = *pdVar27;
              pdVar27 = pdVar27 + 1;
              pdVar29 = pdVar29 + 1;
            }
          }
          uVar17 = FUN_1492ef4c6(local_290,&local_168);
          iVar18 = (int)pplStack_160;
          plVar25 = local_168;
          if (local_168 != (longlong *)0x0) {
            uVar17 = FUN_1400020a8();
          }
          if (iVar18 < 2) {
            auVar38 = *(undefined1 (*) [16])(param_2 + 8);
            dVar4 = auVar38._0_8_;
            dVar8 = auVar38._8_8_;
            auVar1 = *(undefined1 (*) [16])(param_2 + 10);
            dVar5 = auVar1._0_8_;
            dVar6 = local_358._0_8_;
            dVar9 = local_358._8_8_;
            dVar7 = local_348._0_8_;
            dVar12 = local_348._8_8_;
            auVar38 = minpd(local_358,auVar38);
            auVar42 = minpd(local_348,auVar1);
            auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
            auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
            iVar18 = movmskpd(uVar17,auVar39);
            auVar38._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
            auVar38._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
            uVar24 = movmskpd((int)plVar25,auVar38);
            if ((uVar24 & 0x3fffffff) == 0 && iVar18 == 0) {
              dVar45 = *param_2;
              dVar46 = param_2[1];
              dVar13 = param_2[2];
              dVar14 = param_2[3];
              dVar37 = param_2[3];
              dVar35 = param_2[3];
              dVar10 = *param_2 * local_398[1];
              dVar11 = *param_2 * local_398[0];
              dVar51 = param_2[1];
              dVar43 = param_2[1];
              dVar41 = local_398[0] * dVar51;
              dVar44 = local_398[1] * dVar43;
              dVar48 = param_2[2];
              dVar47 = param_2[2];
              dVar40 = local_398[0] * dVar47;
              dVar47 = (double)local_388._0_8_ * dVar47;
              local_398[0] = local_398[1] * dVar48 * -1.0 +
                             (double)local_388._0_8_ * dVar51 +
                             stack0xfffffffffffffc80 * *param_2 * 1.0 + local_398[0] * dVar37;
              local_398[1] = dVar40 * 1.0 +
                             stack0xfffffffffffffc80 * dVar43 +
                             (double)local_388._0_8_ * *param_2 * -1.0 + local_398[1] * dVar35;
              local_388._0_8_ =
                   stack0xfffffffffffffc80 * dVar48 * 1.0 +
                   ((dVar10 * 1.0 + (double)local_388._0_8_ * dVar37) - dVar41);
              register0x00001388 =
                   dVar47 * -1.0 + ((dVar11 * -1.0 + stack0xfffffffffffffc80 * dVar35) - dVar44);
              local_378 = local_378 * dVar4;
              dStack_370 = dStack_370 * dVar8;
              local_368 = local_368 * dVar5;
              dStack_360 = dStack_360 * auVar1._8_8_;
              dVar48 = dStack_370 * dVar45 - dVar46 * local_378;
              dVar47 = local_368 * dVar46 - dVar13 * dStack_370;
              dVar51 = local_378 * dVar13 - dVar45 * local_368;
              dVar43 = dStack_360 * dVar14 - dVar14 * dStack_360;
              dVar47 = dVar47 + dVar47;
              dVar51 = dVar51 + dVar51;
              dVar48 = dVar48 + dVar48;
              dVar43 = dVar43 + dVar43;
              local_108 = (dVar48 * dVar46 - dVar13 * dVar51) + dVar37 * dVar47 + local_378 +
                          param_2[4];
              dStack_100 = (dVar47 * dVar13 - dVar48 * dVar45) + dVar35 * dVar51 + dStack_370 +
                           param_2[5];
              local_f8 = (dVar51 * dVar45 - dVar46 * dVar47) + dVar37 * dVar48 + local_368 +
                         param_2[6];
              dStack_360 = (dVar43 * dVar14 - dVar43 * dVar14) + dVar35 * dVar43 + dStack_360 +
                           param_2[7];
            }
            else {
              dVar47 = *param_2;
              dVar10 = param_2[1];
              dVar11 = param_2[2];
              dVar41 = dVar10 + dVar10;
              dVar44 = dVar11 + dVar11;
              dVar43 = dVar47 * (dVar47 + dVar47);
              local_198 = (1.0 - (dVar43 + dVar10 * dVar41)) * dVar5;
              dVar51 = param_2[3];
              dVar45 = dVar44 * dVar51;
              dVar46 = (dVar47 + dVar47) * param_2[3];
              dVar51 = dVar41 * dVar51;
              local_1a8 = (dVar51 + *param_2 * dVar44) * dVar5;
              dVar43 = (dVar37 - (dVar11 * dVar44 + dVar43)) * dVar8;
              dVar48 = (dVar41 * dVar47 + dVar45) * dVar4;
              local_1b8 = (dVar44 * dVar10 + dVar46) * dVar8;
              dStack_1a0 = (dVar44 * dVar10 - dVar46) * dVar5;
              local_1d8 = (*param_2 * dVar44 - dVar51) * dVar4;
              local_1e8._8_4_ = SUB84(dVar48,0);
              local_1e8._0_8_ = (dVar35 - (dVar11 * dVar44 + dVar10 * dVar41)) * dVar4;
              local_1e8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
              uStack_1d0 = 0;
              local_1c8._8_4_ = SUB84(dVar43,0);
              local_1c8._0_8_ = (dVar41 * dVar47 - dVar45) * dVar8;
              local_1c8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
              uStack_1b0 = 0;
              uStack_190 = 0;
              local_188 = param_2[4];
              dStack_180 = param_2[5];
              local_178 = param_2[6];
              uStack_170 = 0x3ff0000000000000;
              dVar43 = local_398[1] + local_398[1];
              dVar48 = (double)local_388._0_8_ + (double)local_388._0_8_;
              dVar51 = local_398[0] * (local_398[0] + local_398[0]);
              local_218 = (1.0 - (dVar51 + local_398[1] * dVar43)) * dVar7;
              dVar47 = (local_398[0] + local_398[0]) * stack0xfffffffffffffc80;
              local_228 = (dVar43 * stack0xfffffffffffffc80 + local_398[0] * dVar48) * dVar7;
              dStack_220 = (dVar48 * local_398[1] - dVar47) * dVar7;
              local_268 = (longlong *)
                          ((dVar35 - ((double)local_388._0_8_ * dVar48 + local_398[1] * dVar43)) *
                          dVar6);
              dVar35 = (dVar37 - ((double)local_388._0_8_ * dVar48 + dVar51)) * dVar9;
              dStack_260 = (dVar43 * local_398[0] + dVar48 * stack0xfffffffffffffc80) * dVar6;
              local_238 = (dVar48 * local_398[1] + dVar47) * dVar9;
              local_258 = (local_398[0] * dVar48 - dVar43 * stack0xfffffffffffffc80) * dVar6;
              uStack_250 = 0;
              local_248._8_4_ = SUB84(dVar35,0);
              local_248._0_8_ = (dVar43 * local_398[0] - dVar48 * stack0xfffffffffffffc80) * dVar9;
              local_248._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
              uStack_230 = 0;
              uStack_210 = 0;
              local_208 = local_378;
              dStack_200 = dStack_370;
              local_1f8 = local_368;
              uStack_1f0 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_168);
              FUN_144a1c686(&local_168,0x3e45798ee0000000);
              auVar42._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
              auVar42._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
              auVar38 = blendvpd(_DAT_149936790,auVar49,auVar42);
              uVar33 = -(ulonglong)(0.0 <= dVar5 * dVar7);
              dVar35 = (double)(~uVar33 & 0xbff0000000000000 | uVar33 & 0x3ff0000000000000);
              dVar37 = auVar38._0_8_;
              local_158 = (longlong **)((double)local_158 * dVar37);
              pplStack_160 = (longlong **)((double)pplStack_160 * dVar37);
              local_168 = (longlong *)((double)local_168 * dVar37);
              dVar37 = auVar38._8_8_;
              local_138 = local_138 * dVar37;
              dStack_140 = dStack_140 * dVar37;
              local_148 = dVar37 * local_148;
              local_118 = local_118 * dVar35;
              local_128._8_8_ = (double)local_128._8_8_ * dVar35;
              local_128._0_8_ = dVar35 * (double)local_128._0_8_;
              FUN_14481fd10(&local_288,&local_168);
              dVar35 = local_278 * local_278 + local_288 * local_288;
              dVar37 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
              auVar36._0_8_ = dVar35 + dVar37;
              auVar36._8_8_ = dVar35 + dVar37;
              auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
              auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
              auVar38 = sqrtpd(auVar36,auVar36);
              auVar49 = divpd(auVar49,auVar38);
              auVar50._0_8_ = auVar49._0_8_ * local_278;
              auVar50._8_8_ = auVar49._8_8_ * dStack_270;
              local_398[0] = (double)((ulonglong)(local_288 * auVar49._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
              local_398[1] = (double)((ulonglong)(dStack_280 * auVar49._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
              _local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar34);
              dStack_360 = 0.0;
            }
            dVar12 = dVar12 * auVar1._8_8_;
            local_358._8_4_ = SUB84(dVar9 * dVar8,0);
            local_358._0_8_ = dVar6 * dVar4;
            local_358._12_4_ = (int)((ulonglong)(dVar9 * dVar8) >> 0x20);
            local_348._8_4_ = SUB84(dVar12,0);
            local_348._0_8_ = dVar7 * dVar5;
            local_348._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_378 = local_108;
            dStack_370 = dStack_100;
            local_368 = local_f8;
          }
          FUN_14937ac96(plVar23,local_398,1);
        }
        local_168 = (longlong *)((ulonglong)local_168 & 0xffffffffffffff00);
        FUN_14937b03e(plVar23,&local_168,1);
        if (local_2a8[2] != 0) {
          (**(code **)(*param_1 + 0x338))(param_1,plVar23,local_290);
        }
        FUN_149436019(param_1[0x2c],plVar23,(char)param_1[0x2b]);
        if (*(char *)((longlong)param_1 + 0x15b) == '\x01') {
          FUN_1492f550e(plVar23);
        }
        if (local_338[0] != 0) {
          FUN_1400020a8();
        }
        if (local_328[0] != 0) {
          FUN_1400020a8();
        }
        if (local_318[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_308,uStack_300 & 0xffffffff);
        if (local_308 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_2f8,uStack_2f0 & 0xffffffff);
        lVar19 = local_2f8;
        goto LAB_149436567;
      }
    }
    else {
      pplStack_160 = &local_2d0;
      local_158 = &local_290;
      plStack_150 = local_2a8 + 2;
      local_2e0 = FUN_1445174a6;
      local_2d8 = &local_168;
      local_168 = param_1;
      FUN_14943756c(param_1[0x2c]);
      if (local_2a8[2] != 0 && local_2d0 != (longlong *)0x0) goto LAB_1494366c0;
    }
  }
  if (local_2b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2a8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14943638b:
  if ((local_e0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149437406 FUN_149437406 body=356 status=ok
// SIG undefined FUN_149437406(void)

void FUN_149437406(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
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
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar10 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar7 = FUN_145a95408();
        bVar5 = FUN_144a7ca96(plVar10,uVar7);
        lVar4 = *plVar10;
        if (((lVar4 != 0 & bVar5) == 1) &&
           (local_68 = lVar4, cVar6 = (*(code *)*param_2)(param_2[1],lVar3 + lVar8,&local_68),
           cVar6 != '\0')) break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943756c FUN_14943756c body=356 status=ok
// SIG undefined FUN_14943756c(void)

void FUN_14943756c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
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
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar10 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar7 = FUN_145a955e0();
        bVar5 = FUN_144a7ca96(plVar10,uVar7);
        lVar4 = *plVar10;
        if (((lVar4 != 0 & bVar5) == 1) &&
           (local_68 = lVar4, cVar6 = (*(code *)*param_2)(param_2[1],lVar3 + lVar8,&local_68),
           cVar6 != '\0')) break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494376d2 FUN_1494376d2 body=702 status=ok
// SIG undefined FUN_1494376d2(void)

undefined8 FUN_1494376d2(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    uVar3 = 0;
LAB_1494376f6:
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar3;
  }
  if (param_3 != 0) {
    lVar2 = FUN_145a933c4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_30 = 0;
      local_38 = 0;
      FUN_1493e3985(*(undefined8 *)(param_1 + 0x160),0,0,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_145a934b0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (*(char *)(param_1 + 0x15e) == '\x01') {
        lVar2 = FUN_145a934b0();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          local_21 = '\0';
          cVar1 = FUN_1493300a2(param_3);
          if ((cVar1 != '\0') && (local_21 == '\0')) {
            local_30 = 0;
            local_38 = 0;
            uVar3 = FUN_1493e3985(*(undefined8 *)(param_1 + 0x160),0,0,0);
            goto LAB_1494376f6;
          }
        }
      }
      local_30 = 0;
      local_38 = 0;
      uVar3 = FUN_1493e3b3b(*(undefined8 *)(param_1 + 0x160),0,0,0);
      goto LAB_1494376f6;
    }
    lVar2 = FUN_14599b312();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_145a93688();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_1459f63d6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_145a93774();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_145b9fd38();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_145a9359c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 149437ecc FUN_149437ecc body=3456 status=ok
// SIG undefined FUN_149437ecc(void)

void FUN_149437ecc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  int local_138;
  float local_130;
  char local_129;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined4 uStack_c4;
  longlong local_b8 [2];
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((param_4 == 0) || (param_3 == 0)) || (param_2 == 0)) ||
     (*(longlong *)(param_1 + 0x160) == 0)) goto LAB_149437f16;
  lVar3 = FUN_14599b312();
  if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) {
    lVar3 = FUN_14599b13a();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) {
      lVar3 = FUN_145a933c4();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
        lVar3 = FUN_145a934b0();
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
          lVar3 = FUN_145a9359c();
          if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_149437f16;
          lVar3 = FUN_145a94284();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
            param_2 = 0;
          }
          cVar2 = FUN_149332832(param_4,&local_128);
          if (cVar2 != '\0') {
            FUN_149380be4(param_2,&local_128,1);
          }
          cVar2 = FUN_149332986(param_4,&local_128);
          if (cVar2 != '\0') {
            FUN_1493807d4(param_2,&local_128,1);
          }
          local_128 = 0;
          uStack_120 = 0;
          cVar2 = FUN_1493326e6(param_4);
          uVar6 = local_128;
          if (cVar2 != '\0') {
            FUN_149380ff4(param_2);
            local_140 = local_128;
            local_138 = (int)uStack_120 + -1;
            if ((int)uStack_120 == 0) {
              local_138 = 0;
            }
            cVar2 = FUN_1468716aa(&local_140,0);
            uVar6 = local_128;
            if (cVar2 == '\0') {
              FUN_140b1283a(local_98,L"Factory_",&local_128);
              FUN_149380ff4(param_2,local_98);
              FUN_1444bb06c(param_2 + 0x60,local_98);
              uVar6 = local_128;
              if (local_98[0] != 0) {
                FUN_1400020a8();
                uVar6 = local_128;
              }
            }
          }
          goto LAB_149438a2d;
        }
        local_129 = '\0';
        cVar2 = FUN_1493300a2(param_4);
        if (((cVar2 == '\0') || (*(char *)(param_1 + 0x15e) != '\x01')) || (local_129 != '\0')) {
          uVar5 = FUN_140995914();
          local_128 = 0;
          uStack_120 = 0;
          FUN_1401031ac(uVar5,0,&local_128);
          FUN_14937a6be(param_2,&local_128);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          local_128 = CONCAT71(local_128._1_7_,2);
          FUN_14937b03e(param_2,&local_128,1);
          lVar3 = FUN_145a94198();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            cVar2 = FUN_1493300a2(param_4,&local_129);
            if (cVar2 != '\0') {
              local_128 = CONCAT71(local_128._1_7_,local_129);
              FUN_14936f752(param_2,&local_128,1);
            }
            cVar2 = FUN_1493301f6(param_4,&local_128);
            if (cVar2 != '\0') {
              FUN_14936fad4(param_2,&local_128,1);
            }
            cVar2 = FUN_14932ff50(param_4,local_98);
            if (cVar2 != '\0') {
              FUN_14936f3d4(param_2,local_98,1);
            }
            cVar2 = FUN_14932fca4(param_4,&local_a8);
            if (cVar2 != '\0') {
              FUN_14936ecd0(param_2,&local_a8,1);
            }
            cVar2 = FUN_14932fb4e(param_4,local_b8);
            if (cVar2 != '\0') {
              FUN_14936e94e(param_2,local_b8,1);
            }
            cVar2 = FUN_14932fdfa(param_4,&local_c8);
            if (cVar2 != '\0') {
              FUN_14936f052(param_2,&local_c8,1);
            }
          }
          goto LAB_149437f16;
        }
        local_98[0] = CONCAT44(local_98[0]._4_4_,0x3f800000);
        FUN_14932fb4e(param_4,local_98);
        fVar8 = 36.0 / (float)local_98[0];
        local_a8 = CONCAT44(local_a8._4_4_,0x42100000);
        local_b8[0] = CONCAT44(local_b8[0]._4_4_,fVar8);
        local_c8 = 90.0;
        FUN_14932fdfa(param_4,&local_c8);
        dVar1 = tan((double)(local_c8 * 0.017453292) * 0.5);
        local_130 = (float)((double)fVar8 / (dVar1 + dVar1));
        uVar5 = FUN_1459914d2();
        local_128 = 0;
        uStack_120 = 0;
        FUN_1401031ac(uVar5,0,&local_128);
        FUN_14937a6be(param_2,&local_128);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        local_128 = CONCAT71(local_128._1_7_,2);
        FUN_14937b03e(param_2,&local_128,1);
        lVar3 = FUN_145a940ac();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_149437f16;
        FUN_14936d344(param_2,&local_130,1);
        FUN_14936da44(param_2,local_b8,1);
        FUN_14936ddc6(param_2,&local_a8,1);
        pfVar7 = (float *)&local_128;
        local_128 = local_128 & 0xffffffffffffff00;
      }
      else {
        uVar5 = FUN_1459914d2();
        local_128 = 0;
        uStack_120 = 0;
        FUN_1401031ac(uVar5,0,&local_128);
        FUN_14937a6be(param_2,&local_128);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        local_128 = CONCAT71(local_128._1_7_,2);
        FUN_14937b03e(param_2,&local_128,1);
        lVar3 = FUN_145a940ac();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_149437f16;
        cVar2 = FUN_14932f1fc(param_4,&local_128);
        if (cVar2 != '\0') {
          FUN_14936d344(param_2,&local_128,1);
        }
        cVar2 = FUN_14932f350(param_4,local_98);
        if (cVar2 != '\0') {
          FUN_14936da44(param_2,local_98,1);
        }
        cVar2 = FUN_14932f4a4(param_4,&local_a8);
        if (cVar2 != '\0') {
          FUN_14936ddc6(param_2,&local_a8,1);
        }
        cVar2 = FUN_14932f0a6(param_4,local_b8);
        if (cVar2 == '\0') goto LAB_149437f16;
        pfVar7 = &local_c8;
        local_c8 = (float)CONCAT31(local_c8._1_3_,(undefined1)local_b8[0]);
      }
      FUN_14936d6c2(param_2,pfVar7,1);
      goto LAB_149437f16;
    }
    lVar3 = FUN_14599b3fe();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      cVar2 = FUN_1493391f8(param_4,&local_128);
      if (cVar2 != '\0') {
        FUN_1411ab38a(&local_128,local_98);
        FUN_149381c12(param_2,local_98,1);
      }
      cVar2 = FUN_1493395cc(param_4,&local_128);
      if (cVar2 != '\0') {
        FUN_14938214e(param_2,(float)local_128,1);
      }
      cVar2 = FUN_149339844(param_4,local_98);
      if (cVar2 != '\0') {
        FUN_149382456(param_2,local_98[0] & 0xff,1);
        cVar2 = FUN_149339708(param_4,&local_128);
        if (cVar2 != '\0') {
          FUN_1493822d2(param_2,(float)local_128,1);
        }
      }
      lVar3 = FUN_14599b226();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        lVar3 = FUN_14599b4ea();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_98[0] = 0;
          local_98[1] = 0;
          cVar2 = FUN_149339ebc(param_4);
          if ((cVar2 != '\0') &&
             (lVar3 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x160),local_98), lVar3 != 0)) {
            FUN_1493830fe(param_2,local_98);
            FUN_140b1283a(&local_128,L"Factory_",local_98);
            FUN_1444bb06c(param_2 + 0x60,&local_128);
            if (local_128 != 0) {
              FUN_1400020a8();
            }
            cVar2 = FUN_149339ffc(param_4,&local_128);
            if (cVar2 != '\0') {
              FUN_14938323e(param_2,&local_128,1);
            }
            cVar2 = FUN_14933a13c(param_4,&local_128);
            if (cVar2 != '\0') {
              FUN_14938337e(param_2,&local_128,1);
            }
            cVar2 = FUN_14933a27c(param_4,&local_128);
            if (cVar2 != '\0') {
              FUN_1493834be(param_2,&local_128,1);
            }
          }
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          cVar2 = FUN_1493399a4(param_4,&local_128);
          if (cVar2 != '\0') {
            FUN_149382a3e(param_2,(undefined1)local_128,1);
          }
          cVar2 = FUN_149339d7a(param_4,&local_128);
          if (cVar2 != '\0') {
            FUN_149382f7a(param_2,(float)local_128,1);
          }
          lVar3 = FUN_145a93774();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            lVar3 = FUN_145a94720();
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
              cVar2 = FUN_14933abba(param_4,&local_128);
              if (cVar2 != '\0') {
                FUN_1493840fa(param_2,(float)local_128,1);
              }
              cVar2 = FUN_14933acfc(param_4,&local_128);
              if (cVar2 != '\0') {
                FUN_14938427e(param_2,(float)local_128,1);
              }
            }
          }
          lVar3 = FUN_1459f63d6();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            lVar3 = FUN_1459f669a();
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
              cVar2 = FUN_14933a674(param_4,local_98);
              if (cVar2 != '\0') {
                FUN_1493837a2(param_2,local_98[0] & 0xff,1);
                cVar2 = FUN_14933a7b4(param_4,&local_128);
                if (cVar2 != '\0') {
                  FUN_149383926(param_2,(float)local_128,1);
                }
              }
              lVar3 = FUN_145a93688();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                lVar3 = FUN_145a9480c();
                if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                  cVar2 = FUN_14933a916(param_4,&local_128);
                  if (cVar2 != '\0') {
                    FUN_149383c4e(param_2,(float)local_128,1);
                  }
                  cVar2 = FUN_14933aa58(param_4,&local_128);
                  if (cVar2 != '\0') {
                    FUN_149383dd2(param_2,(float)local_128,1);
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = FUN_145a93688();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) {
      lVar3 = FUN_1459f63d6();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
        lVar3 = FUN_145a93774();
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
          lVar3 = FUN_145b9fd38();
          if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_149438a02;
          uVar5 = FUN_145b3bd9c();
        }
        else {
          uVar5 = FUN_145a72fb2();
        }
      }
      else {
LAB_149438a02:
        uVar5 = FUN_1459e8cb6();
      }
    }
    else {
      uVar5 = FUN_145991a5c();
    }
    local_128 = 0;
    uStack_120 = 0;
    FUN_1401031ac(uVar5,0,&local_128);
    FUN_14937a6be(param_2,&local_128);
    uVar6 = local_128;
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1492f1448(param_2 + 0x40,&local_a8);
    if (((int)uStack_a0 < 1) ||
       (lVar3 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x160),local_a8), lVar3 == 0)) {
LAB_14943863a:
      uVar5 = FUN_1403126c0();
      local_128 = 0;
      uStack_120 = 0;
      FUN_1401031ac(uVar5,0,&local_128);
      FUN_14937a6be(param_2,&local_128);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar4 = FUN_145a95408();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_14943863a;
      uVar5 = FUN_1414199c4();
      local_128 = 0;
      uStack_120 = 0;
      FUN_1401031ac(uVar5,0,&local_128);
      FUN_14937a6be(param_2,&local_128);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      local_128 = CONCAT71(local_128._1_7_,2);
      FUN_14937b03e(param_2,&local_128,1);
    }
    lVar3 = FUN_145a9531c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_14934164a(param_3,local_98);
      FUN_149438c4d(param_2,local_98,*(undefined8 *)(param_1 + 0x160));
      local_b8[0] = 0;
      local_b8[1] = 0;
      cVar2 = FUN_14933fdd8(param_3);
      if (cVar2 != '\0') {
        FUN_14938e0b4(param_2,local_b8);
      }
      FUN_1492ef9be(param_4,&local_c8);
      FUN_140b1283a(&local_128,L"Factory_",&local_c8);
      FUN_1444bb06c(param_2 + 0x60,&local_128);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        FUN_1400020a8();
      }
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0x3ff00000;
      uStack_e0 = 0;
      uStack_dc = 0x3ff00000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      cVar2 = FUN_149340590(param_3);
      if (cVar2 != '\0') {
        FUN_14938e246(param_2,&local_128);
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1407a3a68(local_98);
    }
    FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
    uVar6 = local_a8;
  }
LAB_149438a2d:
  if (uVar6 != 0) {
    FUN_1400020a8();
  }
LAB_149437f16:
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149438c4d FUN_149438c4d body=791 status=ok
// SIG undefined FUN_149438c4d(void)

void FUN_149438c4d(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [44];
  int local_bc;
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined1 local_a1;
  longlong local_a0;
  int local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_2 + 2;
  local_68 = &DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    local_bc = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_bc = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != local_bc) || (uStack_60 != plVar1)) {
    do {
      lVar4 = *local_90;
      lVar3 = (longlong)iStack_74;
      local_68 = (undefined1 *)0x0;
      uVar2 = *(uint *)(lVar4 + 8 + lVar3 * 0x28);
      _Src = *(void **)(lVar4 + lVar3 * 0x28);
      uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar2);
      if ((longlong)(int)uVar2 == 0) {
        uStack_60 = (longlong *)(ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_68,uVar2,0);
        memcpy(local_68,_Src,(longlong)(int)uVar2 * 2);
      }
      FUN_14938c2d6(&local_a0,lVar4 + lVar3 * 0x28 + 0x10);
      FUN_14938e426(param_1,&local_68,&local_a0);
      lVar4 = FUN_1492f2702(param_3,&local_a0);
      if (lVar4 != 0) {
        lVar3 = FUN_145923a7c();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_a1 = 1;
          FUN_1493845be(lVar4,&local_a1);
          FUN_1492f03f8(lVar4,local_a1);
          local_b8 = (longlong *)0x0;
          uStack_b0 = 0;
          FUN_1492f4df8(param_1,&local_b8);
          uVar5 = (ulonglong)(int)uStack_b0;
          if (uVar5 != 0) {
            plVar8 = local_b8;
LAB_149438eb6:
            if ((int)plVar8[1] == local_98) {
              if (1 < local_98) {
                lVar4 = 0;
                do {
                  uVar9 = *(ushort *)(*plVar8 + lVar4);
                  uVar10 = (ulonglong)uVar9;
                  uVar6 = *(ushort *)(local_a0 + lVar4);
                  if (uVar9 == uVar6) {
                    if (uVar9 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar6 | uVar9)) goto LAB_149438f5b;
                    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    uVar7 = (ulonglong)uVar6;
                    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                    if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar7]) goto LAB_149438f5b;
                  }
                  lVar4 = lVar4 + 2;
                } while( true );
              }
            }
            else if ((int)plVar8[1] + local_98 != 1) goto LAB_149438f1a;
            goto LAB_149438f25;
          }
LAB_149438f42:
          FUN_1444bb06c(param_1 + 0x60,&local_a0);
          uVar5 = uStack_b0 & 0xffffffff;
LAB_149438f25:
          FUN_1447a1747(local_b8,uVar5);
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != local_bc));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_149438f5b:
  if (uVar9 == uVar6) goto LAB_149438f25;
LAB_149438f1a:
  plVar8 = plVar8 + 2;
  if (plVar8 == local_b8 + uVar5 * 2) goto LAB_149438f42;
  goto LAB_149438eb6;
}



// FUNCTION 149438f66 FUN_149438f66 body=768 status=ok
// SIG undefined FUN_149438f66(void)

void FUN_149438f66(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1492ef9be(param_2,&local_88);
    FUN_140b1283a(local_70,L"Factory_",&local_88);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    lVar3 = FUN_149439267(*(undefined8 *)(param_1 + 0x160));
    FUN_1492ee7cc(param_2,&local_88);
    FUN_1444ba64e(lVar3,local_70,&local_88,3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1492f03f8(lVar3,1);
    local_88 = 0;
    uStack_80 = 0;
    local_c8 = param_2;
    FUN_149348e4e(param_2,&local_88);
    if ((longlong)(int)uStack_80 != 0) {
      lVar7 = (longlong)(int)uStack_80 * 0x10 + local_88;
      lVar9 = lVar3 + 0x60;
      lVar8 = local_88;
      local_c0 = lVar3;
      do {
        FUN_149377934(lVar3,lVar8);
        lVar4 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x160),lVar8);
        if (lVar4 != 0) {
          lVar5 = FUN_145a93860();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            local_98 = 0;
            uStack_90 = 0;
            FUN_1493490f8(lVar4,&local_98);
            uVar6 = 0;
            if ((longlong)(int)uStack_90 != 0) {
              lVar4 = (longlong)(int)uStack_90 << 4;
              lVar3 = local_98;
              do {
                FUN_140b1283a(local_a8,L"Factory_",lVar3);
                FUN_1444bb06c(lVar9,local_a8);
                lVar5 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x160),local_a8);
                if (lVar5 != 0) {
                  cVar2 = FUN_1492efe02(lVar5);
                  if (cVar2 == '\0') {
                    FUN_1492f03f8(lVar5,1);
                  }
                }
                if (local_a8[0] != 0) {
                  FUN_1400020a8();
                }
                lVar3 = lVar3 + 0x10;
                lVar4 = lVar4 + -0x10;
              } while (lVar4 != 0);
              uVar6 = uStack_90 & 0xffffffff;
            }
            FUN_1447a1747(local_98,uVar6);
            lVar3 = local_c0;
            if (local_98 != 0) {
              FUN_1400020a8();
            }
          }
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != lVar7);
    }
    uVar1 = local_c8;
    FUN_1492f9378(local_c8,lVar3,0);
    FUN_1492ef9be(uVar1,&local_98);
    FUN_1492ee2b2(lVar3,&local_98);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar3,&local_98);
    FUN_1492ee2b2(uVar1,&local_98);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492f22b0(*(undefined8 *)(param_1 + 0x160),local_b8,lVar3);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149439267 FUN_149439267 body=174 status=ok
// SIG undefined FUN_149439267(void)

undefined8 FUN_149439267(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a949e4();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149439322 FUN_149439322 body=336 status=ok
// SIG undefined FUN_149439322(void)

void FUN_149439322(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a94ad0();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149439474 FUN_149439474 body=1576 status=ok
// SIG undefined FUN_149439474(void)

void FUN_149439474(longlong param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  char cVar17;
  undefined1 auStack_148 [47];
  byte local_119;
  wchar_t *local_118;
  int local_10c;
  ulonglong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  wchar_t *local_e8;
  uint uStack_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  ulonglong uStack_c0;
  byte local_b1;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar16 = (longlong *)(param_1 + 0x78);
  uVar15 = param_1 + 0x88;
  local_88 = (wchar_t *)&DAT_100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  local_f8 = param_2;
  uStack_80 = uVar15;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar5 = *(int *)(param_1 + 0xa0);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (int)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_b0 = plVar16;
  if ((iStack_74 != iVar5) || (uStack_80 != uVar15)) {
    local_f0 = param_1 + 0x120;
    local_10c = iVar5;
    local_108 = uVar15;
    local_100 = plVar16;
    do {
      lVar7 = *local_b0;
      lVar6 = (longlong)iStack_94;
      puVar12 = (undefined8 *)(lVar7 + lVar6 * 0x98 + 0x10);
      local_b1 = 0;
      cVar3 = FUN_14943fedc(local_f0,puVar12,*(undefined8 *)(param_1 + 0x118),&local_b1);
      if (cVar3 != '\0') {
        puVar13 = (undefined8 *)(lVar7 + lVar6 * 0x98);
        cVar3 = *(char *)(puVar13 + 5);
        local_88 = (wchar_t *)0x0;
        uStack_80 = 0;
        if ((longlong)*(int *)(puVar13 + 0x11) != 0) {
          puVar11 = (undefined8 *)puVar13[0x10];
          puVar14 = puVar11 + (longlong)*(int *)(puVar13 + 0x11) * 2;
          local_119 = local_b1;
          do {
            iVar5 = *(int *)(puVar11 + 1);
            puVar10 = &DAT_149dfb77a;
            if (iVar5 != 0) {
              puVar10 = (undefined2 *)*puVar11;
            }
            iVar1 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar1 = 0;
            }
            uVar4 = FUN_144a49b4a(iVar1,puVar10);
            iVar5 = FUN_1457511aa((longlong *)(param_1 + 200),uVar4,puVar11);
            if (iVar5 == -1) {
LAB_149439670:
              if ((cVar3 == '\0') &&
                 (((FUN_144a787a6(&local_88,puVar12), (local_119 & 1) != 0 ||
                   (*(char *)((longlong)puVar13 + 0x2a) == '\0')) &&
                  (lVar7 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x118),puVar12), lVar7 != 0)))) {
                lVar6 = FUN_1459238a6();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  FUN_1492ef4c6(lVar7,&local_c8);
                  local_d8 = (void *)0x0;
                  lVar7 = (longlong)(int)uStack_80;
                  local_d0 = (int)uStack_80;
                  if (lVar7 == 0) {
                    local_cc = 0;
                  }
                  else {
                    local_118 = local_88;
                    FUN_1446dd670(&local_d8,uStack_80 & 0xffffffff,0);
                    memcpy(local_d8,local_118,lVar7 * 2);
                  }
                  while( true ) {
                    FUN_1492f0c12(&local_e8);
                    pwVar2 = local_e8;
                    if ((uint)uStack_c0 == uStack_e0) {
                      cVar17 = true;
                      if (1 < (int)(uint)uStack_c0) {
                        iVar5 = wcscmp(local_c8,local_e8);
                        cVar17 = iVar5 == 0;
                      }
                    }
                    else {
                      cVar17 = uStack_e0 + (uint)uStack_c0 == 1;
                    }
                    if (pwVar2 != (wchar_t *)0x0) {
                      local_118 = (wchar_t *)CONCAT71(local_118._1_7_,cVar17);
                      FUN_1400020a8(pwVar2);
                      cVar17 = (char)local_118;
                    }
                    if (cVar17 != '\0') break;
                    lVar7 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x118),&local_c8);
                    if (lVar7 != 0) {
                      lVar6 = FUN_1459238a6();
                      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                        uVar9 = FUN_1493431a6();
                        cVar17 = FUN_149341ac2(lVar7,uVar9);
                        if (cVar17 != '\0') {
                          iVar5 = (uint)uStack_c0 + -1;
                          if ((uint)uStack_c0 == 0) {
                            iVar5 = 0;
                          }
                          FUN_1402980a2(&local_88,local_c8,iVar5);
                        }
                        iVar5 = (uint)uStack_c0 + -1;
                        if ((uint)uStack_c0 == 0) {
                          iVar5 = 0;
                        }
                        FUN_1402980a2(&local_d8,local_c8,iVar5);
                        FUN_1492ef4c6(lVar7,&local_e8);
                        if (local_c8 != (wchar_t *)0x0) {
                          FUN_1400020a8();
                        }
                        local_c8 = local_e8;
                        uStack_c0 = (ulonglong)uStack_e0;
                      }
                    }
                  }
                  if ((local_119 & 1) == 0) {
                    if ((int)uStack_80 == *(int *)(puVar13 + 3)) {
                      if (((int)uStack_80 < 2) ||
                         (iVar5 = wcscmp(local_88,(wchar_t *)*puVar12), iVar5 == 0)) {
LAB_149439a77:
                        iVar5 = local_d0 + -1;
                        if (local_d0 == 0) {
                          iVar5 = 0;
                        }
                        FUN_1402980a2(&local_88,local_d8,iVar5);
                      }
                    }
                    else if (*(int *)(puVar13 + 3) + (int)uStack_80 == 1) goto LAB_149439a77;
                  }
                  if (local_d8 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_c8 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
            }
            else {
              lVar7 = *(longlong *)(param_1 + 200) + (longlong)iVar5 * 0x28;
              if ((undefined8 *)(lVar7 + 0x10) == (undefined8 *)0x0 || lVar7 == 0)
              goto LAB_149439670;
              if ((int)uStack_80 < 2) {
                FUN_144a787a6(&local_88);
              }
              else if ((int)uStack_80 == *(int *)(lVar7 + 0x18)) {
                iVar5 = wcscmp(local_88,*(wchar_t **)(lVar7 + 0x10));
                if (iVar5 != 0) {
LAB_14943982b:
                  FUN_144a7e010(&local_88);
                  break;
                }
              }
              else if (*(int *)(lVar7 + 0x18) + (int)uStack_80 != 1) goto LAB_14943982b;
            }
            puVar11 = puVar11 + 2;
          } while (puVar11 != puVar14);
        }
        plVar16 = local_100;
        uVar15 = local_108;
        if (1 < (int)uStack_80) {
          uVar4 = FUN_144a49b4a((int)uStack_80 + -1,local_88);
          plVar8 = (longlong *)FUN_140e10654(local_f8,uVar4,&local_88);
          iVar5 = (int)plVar8[1];
          *(uint *)(plVar8 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar8 + 0xc) < iVar5 + 1U) {
            FUN_1447a1bd6(plVar8,iVar5);
          }
          lVar7 = *plVar8;
          lVar6 = (longlong)iVar5 * 0x10;
          puVar12 = (undefined8 *)(lVar7 + lVar6);
          *(undefined8 *)(lVar7 + lVar6) = 0;
          iVar5 = *(int *)(puVar13 + 1);
          _Src = (void *)*puVar13;
          *(int *)(lVar7 + 8 + lVar6) = iVar5;
          if ((longlong)iVar5 == 0) {
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar12,iVar5,0);
            memcpy((void *)*puVar12,_Src,(longlong)iVar5 * 2);
          }
        }
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar16 ||
             (CONCAT44(uStack_9c,uStack_a0) != uVar15 || iStack_94 != local_10c));
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149439a9e FUN_149439a9e body=495 status=ok
// SIG undefined FUN_149439a9e(void)

void FUN_149439a9e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)(param_1 + 0x78);
  FUN_1408be27e(param_2,*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac));
  lVar1 = param_1 + 0x88;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0xa0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar7;
  if ((iStack_54 != iVar9) || (uStack_60 != lVar1)) {
    local_98 = param_1 + 0x120;
    local_a4 = iVar9;
    local_a0 = plVar7;
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74;
      puVar8 = (undefined8 *)(lVar6 * 0x98 + lVar3 + 0x10);
      cVar5 = FUN_14943fedc(local_98,puVar8,*(undefined8 *)(param_1 + 0x118),&local_68);
      if (cVar5 != '\0') {
        iVar9 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
          FUN_1447a1bd6(param_2,iVar9);
        }
        lVar4 = *param_2;
        lVar10 = (longlong)iVar9 * 0x10;
        puVar2 = (undefined8 *)(lVar4 + lVar10);
        *(undefined8 *)(lVar4 + lVar10) = 0;
        iVar9 = *(int *)(lVar3 + 0x18 + lVar6 * 0x98);
        _Src = (void *)*puVar8;
        *(int *)(lVar4 + 8 + lVar10) = iVar9;
        if ((longlong)iVar9 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          plVar7 = local_a0;
          iVar9 = local_a4;
        }
        else {
          FUN_1446dd670(puVar2,iVar9,0);
          memcpy((void *)*puVar2,_Src,(longlong)iVar9 * 2);
          plVar7 = local_a0;
          iVar9 = local_a4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar7 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149439c8e FUN_149439c8e body=1326 status=ok
// SIG undefined FUN_149439c8e(void)

void FUN_149439c8e(longlong param_1,int param_2,byte param_3,undefined8 *param_4)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98 [2];
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = FUN_145a95408();
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_1492f3382(*(undefined8 *)(param_1 + 0x220),uVar5,&local_78);
  uVar9 = 0;
  if ((int)uStack_70 != 0) {
    iVar4 = *(int *)(param_4 + 1);
    local_88 = (wchar_t *)0x0;
    local_80 = *(int *)(local_78 + 1);
    lVar10 = (longlong)local_80;
    pvVar2 = (void *)*local_78;
    if (lVar10 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar2,lVar10 * 2);
    }
    lVar10 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x220),&local_88);
    if (lVar10 != 0) {
      lVar6 = FUN_145a95408();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        FUN_1492ee7cc(lVar10,local_98);
        if ((param_2 == 1 & (param_3 | 1 < iVar4)) != 0) {
          uVar1 = *(uint *)(param_4 + 1);
          if ((int)uVar1 < 2) {
            local_b8 = (void *)0x0;
            local_b0 = *(int *)(**(longlong **)(param_1 + 0x228) + 0x30);
            lVar6 = (longlong)local_b0;
            pvVar2 = *(void **)(**(longlong **)(param_1 + 0x228) + 0x28);
            if (lVar6 == 0) {
              local_ac = 0;
            }
            else {
              FUN_1446dd670(&local_b8,local_b0,0);
              memcpy(local_b8,pvVar2,lVar6 * 2);
            }
            FUN_1405f3246(&local_a8,&local_b8,1);
          }
          else {
            local_a8 = (void *)0x0;
            pvVar2 = (void *)*param_4;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
            FUN_1446dd670(&local_a8,uVar1,0);
            memcpy(local_a8,pvVar2,(ulonglong)uVar1 * 2);
          }
          iVar4 = (int)uStack_a0 + -1;
          if ((int)uStack_a0 == 0) {
            iVar4 = 0;
          }
          FUN_1402980a2(local_98,local_a8,iVar4);
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (((int)uVar1 < 2) && (local_b8 != (void *)0x0)) {
            FUN_1400020a8();
          }
          FUN_1492f027e(lVar10,local_98);
        }
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        FUN_1492f1448(lVar10 + 0x220,&local_a8);
        if ((0 < (int)uStack_a0) &&
           (lVar10 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x220),local_a8), lVar10 != 0)) {
          lVar6 = FUN_145a954f4();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            lVar6 = FUN_14479d2ce(param_1 + 0x150);
            cVar3 = FUN_144729dda(lVar6 + 0x14c);
            if (cVar3 == '\0') {
              local_c8 = 0;
              uStack_c0 = 0;
              FUN_1493985b4(lVar10,&local_c8);
              lVar10 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x220),&local_c8);
              if (lVar10 != 0) {
                lVar6 = FUN_145a94ad0();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  FUN_1449b8608(&local_d8,local_98,L"_Skeleton");
                  FUN_1492f027e(lVar10,&local_d8);
                  if (local_d8 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        uVar5 = FUN_145a948f8();
        local_c8 = 0;
        uStack_c0 = 0;
        FUN_1492f3382(*(undefined8 *)(param_1 + 0x220),uVar5,&local_c8);
        if ((longlong)(int)uStack_c0 == 0) {
          uVar9 = 0;
        }
        else {
          lVar6 = (longlong)(int)uStack_c0 << 4;
          lVar10 = local_c8;
          do {
            lVar7 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x220),lVar10);
            if (lVar7 != 0) {
              lVar8 = FUN_145a948f8();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                local_d8 = (wchar_t *)0x0;
                uStack_d0 = 0;
                cVar3 = FUN_14937739c(lVar7,&local_d8);
                pwVar11 = local_d8;
                if (cVar3 != '\0') {
                  if ((int)uStack_d0 == local_80) {
                    if (((int)uStack_d0 < 2) || (iVar4 = wcscmp(local_d8,local_88), iVar4 == 0)) {
LAB_14943a150:
                      FUN_1449b8608(local_e8,local_98,L"_PhysicsAsset");
                      FUN_1492f027e(lVar7,local_e8);
                      pwVar11 = local_d8;
                      if (local_e8[0] != 0) {
                        FUN_1400020a8();
                        pwVar11 = local_d8;
                      }
                    }
                  }
                  else if (local_80 + (int)uStack_d0 == 1) goto LAB_14943a150;
                }
                if (pwVar11 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar11);
                }
              }
            }
            lVar10 = lVar10 + 0x10;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
          uVar9 = uStack_c0 & 0xffffffff;
        }
        FUN_1447a1747(local_c8,uVar9);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar9 = uStack_70 & 0xffffffff;
  }
  FUN_1447a1747(local_78,uVar9);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943a1bd FUN_14943a1bd body=498 status=ok
// SIG undefined FUN_14943a1bd(void)

longlong * FUN_14943a1bd(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60 [2];
  longlong local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1492f2ba8(param_3,param_4);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1492ee7cc(lVar3,&local_40);
  lVar4 = FUN_1459238a6();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    lVar4 = FUN_14599b312();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar3 = FUN_14943a3b6(*param_2,param_4);
      if (*(int *)(lVar3 + 0x20) == 1) {
        iVar2 = FUN_1492f2dde(param_3,*(undefined8 *)(lVar3 + 0x18));
        if (iVar2 == 0) {
          lVar3 = FUN_1492f2ba8(param_3,*(undefined8 *)(lVar3 + 0x18));
          if (lVar3 != 0) {
            FUN_1492ee7cc(lVar3,param_1);
            goto LAB_14943a2fc;
          }
        }
      }
    }
  }
  else {
    uVar5 = FUN_14934321a();
    cVar1 = FUN_149341ac2(lVar3,uVar5);
    if (cVar1 != '\0') {
      FUN_1492ef9be(lVar3,local_60);
      FUN_1492f2f34(param_3,&local_50,local_60);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      lVar3 = local_50;
      if (0 < local_48) {
        local_68 = *param_2;
        if ((local_68 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14943a1bd(param_1,&local_68,param_3,lVar3);
        FUN_1447a1747(local_50,local_48);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14943a2fc;
      }
      FUN_1447a1747(local_50);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *param_1 = local_40;
  local_40 = 0;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
  local_38 = 0;
LAB_14943a2fc:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 14943a3b6 FUN_14943a3b6 body=95 status=ok
// SIG undefined FUN_14943a3b6(void)

longlong FUN_14943a3b6(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_149443632((longlong *)(param_1 + 0x28),uVar1,param_2);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x28);
  }
  return uVar5 + 0x10;
}



// FUNCTION 14943a416 FUN_14943a416 body=519 status=ok
// SIG undefined FUN_14943a416(void)

void FUN_14943a416(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_a8 = param_2;
  FUN_1408be27e(param_2,*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac));
  lVar2 = param_1 + 0x88;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0xa0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar2)) {
    lVar8 = param_1 + 0x120;
    do {
      if (*(char *)(param_1 + 0x125) == '\0') {
        local_98 = *local_90;
        lVar6 = (longlong)iStack_74;
        puVar7 = (undefined8 *)(local_98 + lVar6 * 0x98 + 0x10);
        cVar5 = FUN_14943fedc(lVar8,puVar7,*(undefined8 *)(param_1 + 0x118),&local_68);
        if (cVar5 == '\0') {
          iVar4 = (int)local_a8[1];
          *(uint *)(local_a8 + 1) = iVar4 + 1U;
          local_a0 = lVar8;
          if (*(uint *)((longlong)local_a8 + 0xc) < iVar4 + 1U) {
            FUN_1447a1bd6(local_a8,iVar4);
          }
          lVar8 = *local_a8;
          lVar9 = (longlong)iVar4 * 0x10;
          puVar3 = (undefined8 *)(lVar8 + lVar9);
          *(undefined8 *)(lVar8 + lVar9) = 0;
          iVar4 = *(int *)(local_98 + 0x18 + lVar6 * 0x98);
          _Src = (void *)*puVar7;
          *(int *)(lVar8 + 8 + lVar9) = iVar4;
          if ((longlong)iVar4 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            lVar8 = local_a0;
          }
          else {
            FUN_1446dd670(puVar3,iVar4,0);
            memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
            lVar8 = local_a0;
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943a61e FUN_14943a61e body=94 status=ok
// SIG undefined FUN_14943a61e(void)

longlong FUN_14943a61e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_149443da2((longlong *)(param_1 + 0x78),uVar1,param_2);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x98 + *(longlong *)(param_1 + 0x78);
  }
  return uVar5 + 0x10;
}



// FUNCTION 14943a67c FUN_14943a67c body=1085 status=ok
// SIG undefined FUN_14943a67c(void)

longlong FUN_14943a67c(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_88;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_2 + 8) == *(int *)(param_2 + 0x34)) {
    lVar2 = 0;
  }
  else {
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    cVar1 = FUN_14943ac8c();
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
    else {
      FUN_140b1283a(local_68,L"Factory_",local_58 + 2);
      lVar2 = FUN_14943afdd(*(undefined8 *)(param_1 + 0x220));
      if (lVar2 != 0) {
        lVar3 = FUN_1406d0862();
        local_58[4] = *(undefined8 *)(lVar3 + 0x18);
        FUN_1400021e4(local_58 + 4,&local_98);
        FUN_14939a31c(lVar2,local_68,local_58,&local_98);
        if (CONCAT71(uStack_97,local_98) != 0) {
          FUN_1400020a8();
        }
        FUN_1492f22b0(*(undefined8 *)(param_1 + 0x220),local_78,lVar2);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        lVar3 = param_1 + 0x148;
        lVar4 = FUN_14479d2ce(lVar3);
        if (*(char *)(lVar4 + 0x14d) == '\x01') {
          lVar4 = FUN_14479d2ce(lVar3);
          FUN_149390432(lVar2,lVar4 + 0x14d);
        }
        FUN_14943b08c(param_1,lVar2,param_2);
        lVar4 = FUN_14479d2ce(lVar3);
        cVar1 = *(char *)(lVar4 + 0x14e);
        if (cVar1 == '\x02') {
          lVar4 = FUN_14479d2ce(lVar3);
          FUN_149392308(lVar2,lVar4 + 0x150);
        }
        else if (cVar1 == '\x01') {
          local_98 = 1;
          FUN_1493921ba(lVar2);
        }
        else if (cVar1 == '\0') {
          local_98 = 1;
          FUN_149392460(lVar2);
        }
        FUN_1493905dc(lVar2,param_1 + 0x15c,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_14939078c(lVar2,lVar4 + 0x154,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_149390b56(lVar2,lVar4 + 0x155,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_149391e48(lVar2,lVar4 + 0x156,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_1493900c0(lVar2,lVar4 + 0x157,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_149391a7e(lVar2,lVar4 + 0x158,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_1493916b4(lVar2,lVar4 + 0x159,1);
        lVar4 = FUN_14479d2ce(lVar3);
        FUN_1493912ea(lVar2,lVar4 + 0x15a,1);
        lVar3 = FUN_14479d2ce(lVar3);
        FUN_149390f20(lVar2,lVar3 + 0x15b,1);
        FUN_14939a7e4(lVar2,param_1 + 0x17e,1);
        FUN_14939beac(lVar2,param_1 + 0x17f,1);
        FUN_14939bae2(lVar2,param_1 + 0x180,1);
        FUN_14939cdd4(lVar2,param_1 + 0x181,1);
        FUN_14939c640(lVar2,param_1 + 0x184,1);
        FUN_14939ca0a(lVar2,param_1 + 0x188,1);
        FUN_14939b718(lVar2,param_1 + 0x18c,1);
        FUN_14939aba6(lVar2,param_1 + 400,1);
        FUN_14939b34e(lVar2,param_1 + 0x1a8,1);
        uVar5 = FUN_14479d2ce(param_1 + 0x1ac);
        FUN_1400bbfc4(&local_98,uVar5);
        FUN_14939af84(lVar2,&local_98,1);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_14939c276(lVar2,param_1 + 0x1b4,1);
        FUN_14939a6d0(lVar2,param_1 + 0x17d,1);
        FUN_14939a548(lVar2,param_1 + 0x164);
        FUN_14939d186(lVar2,param_1 + 0x168);
        if (0 < (longlong)(int)param_3[1]) {
          lVar3 = *param_3;
          lVar4 = (longlong)(int)param_3[1] << 4;
          do {
            lVar6 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x220),lVar3);
            if (lVar6 != 0) {
              lVar7 = FUN_1459238a6();
              if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                FUN_1492f9378(lVar6,lVar2,1);
              }
            }
            lVar3 = lVar3 + 0x10;
            lVar4 = lVar4 + -0x10;
          } while (lVar4 != 0);
        }
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14943aaba FUN_14943aaba body=464 status=ok
// SIG undefined FUN_14943aaba(void)

void FUN_14943aaba(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = (longlong *)(param_1 + 0x28);
  FUN_1408be27e(param_2,*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c));
  lVar1 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar10;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar1)) {
    local_9c = iVar7;
    local_98 = plVar10;
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74;
      puVar8 = (undefined8 *)(lVar3 + lVar6 * 0x50 + 0x10);
      cVar5 = FUN_14943ffd0(param_1 + 0x120,puVar8);
      if (cVar5 != '\0') {
        iVar7 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
          FUN_1447a1bd6(param_2,iVar7);
        }
        lVar4 = *param_2;
        lVar9 = (longlong)iVar7 * 0x10;
        puVar2 = (undefined8 *)(lVar4 + lVar9);
        *(undefined8 *)(lVar4 + lVar9) = 0;
        iVar7 = *(int *)(lVar3 + 0x18 + lVar6 * 0x50);
        _Src = (void *)*puVar8;
        *(int *)(lVar4 + 8 + lVar9) = iVar7;
        if ((longlong)iVar7 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          plVar10 = local_98;
          iVar7 = local_9c;
        }
        else {
          FUN_1446dd670(puVar2,iVar7,0);
          memcpy((void *)*puVar2,_Src,(longlong)iVar7 * 2);
          plVar10 = local_98;
          iVar7 = local_9c;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar10 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943ac8c FUN_14943ac8c body=848 status=ok
// SIG undefined FUN_14943ac8c(void)

ulonglong FUN_14943ac8c(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = 0;
  if (*(int *)((longlong)param_2 + 0x34) < (int)param_2[1]) {
    plVar1 = param_2 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_68);
      uVar8 = (ulonglong)*(uint *)(param_2 + 5);
    }
    local_78 = local_58;
    uVar3 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = uStack_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_2;
    if ((local_78._4_4_ != (int)uVar8) || (uStack_60 != plVar1)) {
      iVar5 = local_78._4_4_;
      local_78 = uVar3;
      do {
        if (*(int *)(*local_90 + (longlong)iVar5 * 0x20) == 0) {
          lVar9 = *local_90 + (longlong)iVar5 * 0x20;
          uVar3 = local_78;
          if (*(int *)(lVar9 + 0x10) < 1) break;
          uVar2 = *(undefined8 *)(lVar9 + 8);
          lVar6 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x220),uVar2);
          uVar3 = local_78;
          if (lVar6 == 0) break;
          lVar7 = FUN_14599b312();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
            lVar7 = FUN_1459238a6();
            uVar3 = local_78;
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) break;
            local_68 = 0;
            uStack_60 = (longlong *)0x0;
            cVar4 = FUN_14933ff3c(lVar6);
            if ((cVar4 == '\0') ||
               (lVar7 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x220),&local_68), lVar7 == 0)) {
              uVar3 = local_78;
              if (local_68 != 0) {
                FUN_1400020a8();
                uVar3 = local_78;
              }
              break;
            }
            FUN_1492ee7cc(lVar7,&local_a0);
            if (&local_a0 == param_4) {
              if (local_a0 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_4 != 0) {
                FUN_1400020a8();
              }
              *param_4 = local_a0;
              local_a0 = 0;
              *(undefined4 *)(param_4 + 1) = local_98;
              *(undefined4 *)((longlong)param_4 + 0xc) = local_94;
            }
            if (*(int *)(lVar9 + 0x10) == 1) {
              FUN_1492ee7cc(lVar6,&local_a0);
              if (&local_a0 == param_4) {
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*param_4 != 0) {
                  FUN_1400020a8();
                }
                *param_4 = local_a0;
                local_a0 = 0;
                *(undefined4 *)(param_4 + 1) = local_98;
                *(undefined4 *)((longlong)param_4 + 0xc) = local_94;
              }
            }
            iVar5 = (int)uStack_60 + -1;
            if ((int)uStack_60 == 0) {
              iVar5 = 0;
            }
            FUN_1402980a2(param_3,local_68,iVar5);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            FUN_1492ee7cc(lVar6,&local_68);
            if (&local_68 == param_4) {
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_4 != 0) {
                FUN_1400020a8();
              }
              *param_4 = local_68;
              local_68 = 0;
              *(int *)(param_4 + 1) = (int)uStack_60;
              *(undefined4 *)((longlong)param_4 + 0xc) = uStack_60._4_4_;
            }
            FUN_144a787a6(param_3,uVar2);
          }
          uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          goto LAB_14943ad4d;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != param_2 || (local_80 != plVar1 || local_78._4_4_ != (int)uVar8));
    }
    local_78 = uVar3;
    uVar8 = 0;
  }
LAB_14943ad4d:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14943afdd FUN_14943afdd body=174 status=ok
// SIG undefined FUN_14943afdd(void)

undefined8 FUN_14943afdd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a955e0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943b08c FUN_14943b08c body=2135 status=ok
// SIG undefined FUN_14943b08c(void)

void FUN_14943b08c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  longlong lStack_180;
  longlong local_168 [2];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  uint local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b0 = param_2;
  FUN_1492ef9be(param_2,local_118);
  plVar14 = param_3 + 2;
  local_108 = 0x100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  local_f0 = 0;
  uVar13 = 0;
  iVar10 = 0;
  plStack_100 = plVar14;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_108);
    iVar10 = (int)param_3[5];
  }
  local_a0 = local_f8;
  iStack_9c = iStack_f4;
  local_98 = CONCAT44(local_ec,local_f0);
  uStack_b0 = local_108;
  local_a8 = plStack_100;
  local_b8 = param_3;
  if ((iStack_f4 != iVar10) || (plStack_100 != plVar14)) {
    uVar13 = 0;
    do {
      uVar11 = *(uint *)(*local_b8 + (longlong)iStack_9c * 0x20);
      if ((int)uVar13 < (int)uVar11) {
        uVar13 = uVar11;
      }
      local_a0 = local_a0 & ~uStack_b0._4_4_;
      FUN_1449c0562(&uStack_b0);
    } while (local_b8 != param_3 || (local_a8 != plVar14 || iStack_9c != iVar10));
  }
  lVar5 = param_1 + 0x148;
  local_128 = 0;
  uStack_120 = 0;
  uVar11 = 0;
  local_1a8 = lVar5;
  local_1a0 = param_3;
LAB_14943b226:
  plVar14 = &local_128;
  lVar3 = FUN_14479d2ce(lVar5);
  if ((uVar11 == 0) || (*(char *)(lVar3 + 0x14a) != '\0')) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      plVar4 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_3[8];
      }
      iVar10 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_3[9] + 0x7fffffffU & uVar11) * 4);
      if (iVar10 != -1) {
        lVar5 = *param_3;
        iVar9 = iVar10;
        do {
          if (*(uint *)(lVar5 + (longlong)iVar9 * 0x20) == uVar11) goto LAB_14943b84f;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar5 + 0x18);
        } while (iVar9 != -1);
      }
    }
    goto LAB_14943b282;
  }
  goto LAB_14943b23b;
  while (iVar10 = *(int *)(lVar3 + 0x18), iVar10 != -1) {
LAB_14943b84f:
    lVar3 = lVar5 + (longlong)iVar10 * 0x20;
    if (*(uint *)(lVar5 + (longlong)iVar10 * 0x20) == uVar11) goto LAB_14943b86a;
  }
  lVar3 = 0;
LAB_14943b86a:
  plVar14 = (longlong *)(lVar3 + 8);
LAB_14943b282:
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,uVar11);
  FUN_140ba7826(local_138,L"LodData",&local_b8);
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (uVar11 == 0) {
    FUN_140056680(&local_b8,&DAT_149dfb77a);
  }
  else {
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    FUN_144a83b10(&local_b8,uVar11);
  }
  FUN_140ba7826(local_148,L"\\LodData",&local_b8);
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140474144(local_158,local_148,local_118);
  local_1b8 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x220),local_158);
  uVar1 = local_1b0;
  if (local_1b8 != 0) {
    lVar5 = FUN_145a956cc();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(local_1b8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_1b8 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) goto LAB_14943b3b2;
  }
  local_1b8 = FUN_14943b8e4(param_1,local_138,local_158);
  FUN_1492f3e1a(*(undefined8 *)(param_1 + 0x220),local_158,local_118);
  FUN_14938e5de(uVar1,local_158);
LAB_14943b3b2:
  local_98 = 0;
  local_90 = 0;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((longlong)(int)plVar14[1] != 0) {
    lVar5 = *plVar14;
    lVar3 = (longlong)(int)plVar14[1] << 4;
    do {
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      lVar6 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x220),lVar5);
      if (lVar6 == 0) {
LAB_14943b613:
        lVar6 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x220),lVar5);
        if (lVar6 != 0) {
          lVar7 = FUN_14599b312();
          uVar1 = local_1b0;
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            FUN_1492f9378(lVar6,local_1b0,1);
            FUN_1492ee2b2(uVar1,lVar5);
            lVar7 = FUN_14943a3b6(*(undefined8 *)(param_1 + 0x1e8),lVar5);
            FUN_149398de4(uVar1,lVar7 + 0x28);
            FUN_1492ef9be(uVar1,&local_188);
            FUN_1492ee2b2(lVar6,&local_188);
            if (local_188 != 0) {
              FUN_1400020a8();
            }
            FUN_14933d312(lVar6,&local_108);
          }
        }
      }
      else {
        lVar7 = FUN_1459238a6();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_14943b613;
        local_188 = 0;
        lStack_180 = 0;
        FUN_14933ff3c(lVar6,&local_188);
        cVar2 = FUN_1492f3730(*(undefined8 *)(param_1 + 0x220),&local_188);
        if (cVar2 == '\0') {
          FUN_14934164a(lVar6,&local_108);
        }
        else {
          lVar7 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x220),&local_188);
          if (lVar7 == 0) {
LAB_14943b57f:
            lVar7 = 0;
          }
          else {
            lVar8 = FUN_14599b312();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_14943b57f;
          }
          uVar1 = local_1b0;
          local_198 = lVar7;
          FUN_1492f9378(lVar7,local_1b0,1);
          FUN_1492ee2b2(uVar1,&local_188);
          lVar7 = FUN_14943a3b6(*(undefined8 *)(param_1 + 0x1e8),&local_188);
          FUN_149398de4(uVar1,lVar7 + 0x28);
          FUN_1492ef9be(uVar1,local_168);
          lVar7 = local_198;
          FUN_1492ee2b2(local_198,local_168);
          if (local_168[0] != 0) {
            FUN_1400020a8();
          }
          FUN_14933d312(lVar7,&local_108);
        }
        FUN_1492f9378(lVar6,local_1b0,1);
        if (local_188 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14943bafa(local_1b0,&local_108,*(undefined8 *)(param_1 + 0x220),&local_b8);
      if (*(char *)(param_1 + 0x17a) == '\x01') {
        local_190 = *(longlong *)(param_1 + 0x1e8);
        uVar1 = *(undefined8 *)(param_1 + 0x220);
        if ((local_190 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_1c8 = plVar14;
        FUN_144513e97(&local_188,&local_190,uVar1,lVar5);
        cVar2 = (char)local_188;
        uVar12 = local_188 & 0xff;
        if (lStack_180 != 0) {
          FUN_1400020a8();
        }
        switch(uVar12) {
        case 0:
          FUN_14939e01a(local_1b8,lVar5);
          break;
        case 1:
          FUN_14939e34a(local_1b8,lVar5);
          break;
        case 2:
          FUN_14939e0e6(local_1b8,lVar5);
          break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          FUN_14939e1b2(local_1b8,lVar5);
          break;
        default:
          if (cVar2 == -1) goto LAB_14943b775;
        }
      }
      else {
LAB_14943b775:
        FUN_14939e27e(local_1b8,lVar5);
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1407a3a68(&local_108);
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  FUN_14943bf75(local_1b0);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_b8);
  param_3 = local_1a0;
  lVar5 = local_1a8;
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
LAB_14943b23b:
  lVar3 = local_128;
  bVar15 = uVar11 == uVar13;
  uVar11 = uVar11 + 1;
  if (bVar15) {
    FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_14943b226;
}



// FUNCTION 14943b8e4 FUN_14943b8e4 body=358 status=ok
// SIG undefined FUN_14943b8e4(void)

longlong FUN_14943b8e4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_38;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar2 * 2);
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_48;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar1,lVar2 * 2);
  }
  lVar2 = FUN_14943ba4b(*(undefined8 *)(param_1 + 0x220));
  if (lVar2 != 0) {
    FUN_1444ba64e(lVar2,&local_50,&local_40,3);
    FUN_14939f414(lVar2,*(undefined1 *)(param_1 + 0x17b));
    FUN_14939f17e(lVar2,*(undefined1 *)(param_1 + 0x179));
    FUN_14939f2c4(lVar2,*(undefined1 *)(param_1 + 0x17c));
    FUN_1492f22b0(*(undefined8 *)(param_1 + 0x220),local_60,lVar2);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943ba4b FUN_14943ba4b body=174 status=ok
// SIG undefined FUN_14943ba4b(void)

undefined8 FUN_14943ba4b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a956cc();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943bafa FUN_14943bafa body=1146 status=ok
// SIG undefined FUN_14943bafa(void)

void FUN_14943bafa(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  void *_Src;
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [36];
  int local_e4;
  longlong local_e0;
  int local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_69;
  undefined2 **local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_69 = '\0';
  iVar2 = 0;
  local_e4 = 0;
  local_c8 = param_3;
  if (param_4 != 0) {
    FUN_14938e7fa(param_1,&local_69);
    local_e4 = *(int *)(param_4 + 8) - *(int *)(param_4 + 0x34);
  }
  plVar8 = param_2 + 2;
  local_68 = (undefined2 **)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar8;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar2 = (int)param_2[5];
  }
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_78 = local_50;
  local_74 = local_4c;
  local_90 = local_68;
  local_88 = local_60;
  local_e0 = param_1;
  local_d4 = iVar2;
  local_d0 = plVar8;
  local_98 = param_2;
  if ((iStack_54 != iVar2) || (local_60 != plVar8)) {
    do {
      lVar4 = *local_98;
      lVar3 = (longlong)iStack_7c;
      local_a8 = (undefined2 *)0x0;
      local_a0 = *(int *)(lVar4 + 8 + lVar3 * 0x28);
      lVar9 = (longlong)local_a0;
      _Src = *(void **)(lVar4 + lVar3 * 0x28);
      if (lVar9 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,_Src,lVar9 * 2);
      }
      lVar9 = local_e0;
      lVar4 = lVar4 + lVar3 * 0x28;
      if ((param_4 != 0) && (local_69 != '\0')) {
        puVar5 = local_a8;
        if (local_a0 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        iVar2 = local_a0 + -1;
        if (local_a0 == 0) {
          iVar2 = 0;
        }
        uVar1 = FUN_144a49b4a(iVar2,puVar5);
        iVar2 = FUN_1457511aa(param_4,uVar1,&local_a8);
        if (iVar2 != -1) {
          local_b8 = (longlong *)0x0;
          uStack_b0 = 0;
          FUN_144a83b10(&local_b8,local_e4);
          FUN_140ba7826(&local_68,L"_Section",&local_b8);
          iVar2 = (int)local_60 + -1;
          if ((int)local_60 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(&local_a8,local_68,iVar2);
          if (local_68 != (undefined2 **)0x0) {
            FUN_1400020a8();
          }
          lVar9 = local_e0;
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
            lVar9 = local_e0;
          }
        }
        local_60 = (longlong *)(lVar4 + 0x10);
        local_68 = &local_a8;
        FUN_140ac5c08(param_4,&local_b8,&local_68,0);
        local_e4 = local_e4 + 1;
      }
      FUN_14938c2d6(&local_68,lVar4 + 0x10);
      FUN_149392640(lVar9,&local_a8,&local_68);
      lVar4 = FUN_1492f2702(local_c8,&local_68);
      if (lVar4 != 0) {
        lVar3 = FUN_145923a7c();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_b9 = 1;
          FUN_1493845be(lVar4,&local_b9);
          FUN_1492f03f8(lVar4,local_b9);
          local_b8 = (longlong *)0x0;
          uStack_b0 = 0;
          FUN_1492f4df8(lVar9,&local_b8);
          uVar6 = (ulonglong)(int)uStack_b0;
          if (uVar6 != 0) {
            plVar8 = local_b8;
LAB_14943beba:
            if ((int)plVar8[1] == (int)local_60) {
              if (1 < (int)local_60) {
                lVar4 = 0;
                do {
                  uVar11 = *(ushort *)(*plVar8 + lVar4);
                  uVar12 = (ulonglong)uVar11;
                  uVar7 = *(ushort *)((longlong)local_68 + lVar4);
                  if (uVar11 == uVar7) {
                    if (uVar11 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar7 | uVar11)) goto LAB_14943bf66;
                    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                    uVar10 = (ulonglong)uVar7;
                    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[uVar10]) goto LAB_14943bf66;
                  }
                  lVar4 = lVar4 + 2;
                } while( true );
              }
            }
            else if ((int)plVar8[1] + (int)local_60 != 1) goto LAB_14943bf22;
            goto LAB_14943bf2d;
          }
LAB_14943bf4a:
          FUN_1444bb06c(lVar9 + 0x60,&local_68);
          uVar6 = uStack_b0 & 0xffffffff;
LAB_14943bf2d:
          FUN_1447a1747(local_b8,uVar6);
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      iVar2 = local_d4;
      if (local_68 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
      plVar8 = local_d0;
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != param_2 || (local_88 != plVar8 || iStack_7c != iVar2));
  }
  if (param_4 != 0) {
    FUN_146273996(param_4,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14943bf66:
  lVar9 = local_e0;
  if (uVar11 == uVar7) goto LAB_14943bf2d;
LAB_14943bf22:
  plVar8 = plVar8 + 2;
  if (plVar8 == local_b8 + uVar6 * 2) goto LAB_14943bf4a;
  goto LAB_14943beba;
}



// FUNCTION 14943bf75 FUN_14943bf75 body=1910 status=ok
// SIG undefined FUN_14943bf75(void)

void FUN_14943bf75(undefined8 param_1)

{
  undefined8 *puVar1;
  void *_Src;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong **_Str;
  int iVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong **pplVar17;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined8 local_178;
  longlong **local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong **local_148;
  undefined8 uStack_140;
  longlong **local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  int iStack_ec;
  longlong lStack_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14938f940(param_1,&local_b8);
  FUN_14938ff88(param_1);
  local_138 = (longlong **)0x0;
  uStack_130 = 0;
  iVar5 = (int)uStack_b0 - local_84;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  iVar12 = (int)uStack_b0;
  if (iVar5 != 0) {
    FUN_1408be2c4(&local_138,iVar5);
    iVar12 = local_84;
  }
  iVar12 = (int)uStack_b0 - iVar12;
  local_148 = (longlong **)0x0;
  uStack_140 = 0;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iVar12 != 0) {
    FUN_1408be2c4(&local_148);
  }
  local_170 = (longlong **)&DAT_100000000;
  local_160._0_4_ = 0xffffffff;
  local_160._4_4_ = 0;
  uStack_158 = (ulonglong)uStack_158._4_4_ << 0x20;
  local_178 = param_1;
  uStack_168 = local_a8;
  if (local_90 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_170);
    iVar5 = local_90;
  }
  local_f0 = (uint)local_160;
  iStack_ec = local_160._4_4_;
  lStack_e8 = uStack_158;
  uStack_100 = local_170;
  uStack_f8 = (undefined4)uStack_168;
  uStack_f4 = uStack_168._4_4_;
  local_108 = &local_b8;
  if ((local_160._4_4_ != iVar5) || (uStack_168 != local_a8)) {
    uVar16 = 0;
    do {
      puVar1 = (undefined8 *)(*local_108 + (longlong)iStack_ec * 0x28);
      if (*(int *)(puVar1 + 1) - 8U < 0x7ffffff9) {
        local_180 = 0xffffffff;
        local_188 = 1;
        uVar7 = FUN_1447ee042(puVar1,L"_SKIN",5,1);
        if (uVar7 == 0xffffffff) goto LAB_14943c5b1;
        iVar12 = *(int *)(puVar1 + 1);
        uVar9 = iVar12 - 1;
        if (iVar12 == 0) {
          uVar9 = uVar16;
        }
        puVar14 = &DAT_149dfb77a;
        if (iVar12 != 0) {
          puVar14 = (undefined2 *)*puVar1;
        }
        uVar8 = ~uVar7 + uVar9;
        if ((int)uVar9 <= (int)(~uVar7 + uVar9)) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 1) {
          uVar8 = uVar16;
        }
        FUN_140056680(&local_128,
                      (longlong)puVar14 + ((longlong)(int)uVar9 * 2 - (ulonglong)(uVar8 * 2)));
        uVar7 = (int)uStack_120 - 1;
        if ((int)uStack_120 == 0) {
          uVar7 = 0;
        }
        uVar9 = 4;
        if ((int)uVar7 < 4) {
          uVar9 = uVar7;
        }
        if ((int)uVar9 < 1) {
          uVar9 = uVar16;
        }
        iVar12 = (int)uStack_120;
        if (0 < (int)uVar7) {
          if ((int)uStack_120 - uVar9 != 0) {
            memmove(local_128,(wchar_t *)((longlong)local_128 + (ulonglong)uVar9 * 2),
                    (longlong)(int)((int)uStack_120 - uVar9) * 2);
          }
          iVar12 = (int)uStack_120 - uVar9;
          uStack_120 = (undefined4 *)CONCAT44(uStack_120._4_4_,iVar12);
        }
        pplVar17 = local_128;
        local_170 = local_128;
        uStack_168 = (undefined1 *)CONCAT44(uStack_120._4_4_,iVar12);
        cVar4 = FUN_1405b43cc(&local_170);
        if (cVar4 == '\0') {
LAB_14943c59d:
          bVar2 = false;
        }
        else {
          _Str = pplVar17;
          if (iVar12 == 0) {
            _Str = (longlong **)&DAT_149dfb77a;
          }
          uVar7 = _wtoi((wchar_t *)_Str);
          if ((int)uVar7 < 0) goto LAB_14943c59d;
          while (uVar11 = uStack_130, iVar12 = (int)uStack_130, (int)uStack_130 <= (int)uVar7) {
            uVar9 = (int)uStack_130 + 1;
            uStack_130 = CONCAT44(uStack_130._4_4_,uVar9);
            if (uStack_130._4_4_ < uVar9) {
              FUN_1447a1bd6(&local_138,uVar11 & 0xffffffff);
            }
            local_138[(longlong)iVar12 * 2] = (longlong *)0x0;
            (local_138 + (longlong)iVar12 * 2)[1] = (longlong *)0x0;
          }
          if (1 < *(int *)(local_138 + (ulonglong)uVar7 * 2 + 1)) goto LAB_14943c59d;
          FUN_144a787a6(local_138 + (ulonglong)uVar7 * 2,puVar1);
          bVar2 = true;
        }
        if (pplVar17 != (longlong **)0x0) {
          FUN_1400020a8(pplVar17);
        }
        if (!bVar2) goto LAB_14943c5b1;
      }
      else {
LAB_14943c5b1:
        uVar11 = uStack_140;
        lVar15 = (longlong)(int)uStack_140;
        uVar7 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar7);
        if (uStack_140._4_4_ < uVar7) {
          FUN_1447a1bd6(&local_148,uVar11 & 0xffffffff);
        }
        pplVar17 = local_148 + lVar15 * 2;
        local_148[lVar15 * 2] = (longlong *)0x0;
        iVar12 = *(int *)(puVar1 + 1);
        _Src = (void *)*puVar1;
        *(int *)(local_148 + lVar15 * 2 + 1) = iVar12;
        if ((longlong)iVar12 == 0) {
          ((wchar_t *)((longlong)pplVar17 + 0xc))[0] = L'\0';
          ((wchar_t *)((longlong)pplVar17 + 0xc))[1] = L'\0';
        }
        else {
          FUN_1446dd670(pplVar17,iVar12,0);
          memcpy(*pplVar17,_Src,(longlong)iVar12 * 2);
        }
      }
      local_f0 = local_f0 & ~uStack_100._4_4_;
      FUN_1449c0562(&uStack_100);
    } while (local_108 != &local_b8 ||
             ((undefined1 *)CONCAT44(uStack_f4,uStack_f8) != local_a8 || iStack_ec != iVar5));
  }
  lStack_e8 = 0;
  local_e0 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = (longlong **)0x0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uVar16 = (int)uStack_b0 - local_84;
  if (uVar16 != 0) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar16);
    }
    FUN_140b80270(&local_108,uVar16);
    iVar5 = 1;
    if (3 < uVar16) {
      uVar16 = (uVar16 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_c0 == 0) || (local_c0 < iVar5)) {
      local_c0 = iVar5;
      FUN_140b7fdd8();
    }
  }
  if ((longlong)(int)uStack_130 != 0) {
    lVar15 = (longlong)(int)uStack_130 << 4;
    pplVar17 = local_138;
    do {
      if (1 < *(int *)(pplVar17 + 1)) {
        uVar6 = FUN_144a49b4a(*(int *)(pplVar17 + 1) + -1,*pplVar17);
        iVar5 = FUN_1457511aa(&local_b8,uVar6,pplVar17);
        lVar10 = (longlong)iVar5 * 0x28 + local_b8;
        if (iVar5 == -1) {
          lVar10 = 0;
        }
        uStack_168 = (undefined1 *)(lVar10 + 0x10);
        local_170 = pplVar17;
        FUN_140ac5c08(&local_108,&local_128,&local_170,0);
      }
      pplVar17 = pplVar17 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  if ((longlong)(int)uStack_140 != 0) {
    lVar15 = (longlong)(int)uStack_140 << 4;
    pplVar17 = local_148;
    do {
      iVar5 = *(int *)(pplVar17 + 1);
      plVar13 = (longlong *)&DAT_149dfb77a;
      if (iVar5 != 0) {
        plVar13 = *pplVar17;
      }
      uVar11 = (ulonglong)(iVar5 - 1);
      if (iVar5 == 0) {
        uVar11 = 0;
      }
      uVar6 = FUN_144a49b4a(uVar11,plVar13);
      iVar5 = FUN_1457511aa(&local_b8,uVar6,pplVar17);
      uVar11 = (longlong)iVar5 * 0x28 + local_b8;
      if (iVar5 == -1) {
        uVar11 = 0;
      }
      uStack_168 = (undefined1 *)(uVar11 + 0x10);
      local_170 = pplVar17;
      FUN_140ac5c08(&local_108,&local_128,&local_170,0);
      pplVar17 = pplVar17 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  local_128 = (longlong **)0x100000000;
  local_118 = 0xffffffff;
  iStack_114 = 0;
  uStack_110 = 0;
  uStack_120 = &uStack_f8;
  if (local_e0 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_128);
    iVar5 = local_e0;
  }
  uVar3 = local_178;
  uStack_150 = CONCAT44(uStack_10c,uStack_110);
  uStack_158._0_4_ = local_118;
  uStack_158._4_4_ = iStack_114;
  uStack_168._0_4_ = SUB84(local_128,0);
  uStack_168._4_4_ = local_128._4_4_;
  local_160 = uStack_120;
  local_170 = &local_108;
  if ((iStack_114 != iVar5) || (uStack_120 != &uStack_f8)) {
    do {
      FUN_149392640(uVar3,*local_170 + (longlong)(int)uStack_158._4_4_ * 5,
                    *local_170 + (longlong)(int)uStack_158._4_4_ * 5 + 2);
      uStack_158._0_4_ = (uint)uStack_158 & ~uStack_168._4_4_;
      FUN_1449c0562(&uStack_168);
    } while (local_170 != &local_108 || (local_160 != &uStack_f8 || uStack_158._4_4_ != iVar5));
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_108);
  FUN_1447a1747(local_148,uStack_140 & 0xffffffff);
  if (local_148 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
  if (local_138 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943c702 FUN_14943c702 body=151 status=ok
// SIG undefined FUN_14943c702(void)

undefined8 FUN_14943c702(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1459f64c2();
  if (lVar1 != param_1) {
    lVar1 = FUN_145b9fff6();
    if (lVar1 == param_1) {
      uVar2 = FUN_145ba0bd8();
      return uVar2;
    }
    lVar1 = FUN_145b9ff0c();
    if (lVar1 == param_1) {
      uVar2 = FUN_145ba0aee();
      return uVar2;
    }
    lVar1 = FUN_145b9fe22();
    if (lVar1 == param_1) {
      uVar2 = FUN_145a94bbc();
      return uVar2;
    }
    lVar1 = FUN_145ba00e0();
    if (lVar1 == param_1) {
      uVar2 = FUN_145a94ca8();
      return uVar2;
    }
    lVar1 = FUN_145ba01ca();
    if (lVar1 == param_1) {
      uVar2 = FUN_145ba0cc2();
      return uVar2;
    }
    lVar1 = FUN_145ba02b4();
    if (lVar1 != param_1) {
      return 0;
    }
  }
  uVar2 = FUN_1459f6786();
  return uVar2;
}



// FUNCTION 14943c7a0 FUN_14943c7a0 body=579 status=ok
// SIG undefined FUN_14943c7a0(void)

longlong FUN_14943c7a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_108 [47];
  char local_d9;
  char local_d8 [64];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = FUN_14943c702(param_2[2]);
  (**(code **)(*param_2 + 0x2e8))(param_2,&local_30);
  local_88 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  lVar3 = FUN_14943ca0a(param_1,param_2,&local_88);
  lVar4 = FUN_1459f6786();
  if (lVar3 != 0 && lVar2 == lVar4) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    if (param_2 != (longlong *)0x0) {
      lVar2 = FUN_1459f64c2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        FUN_149349d10(param_2 + 0x14,local_d8);
        FUN_14934a0dc(&local_88,local_d8);
        local_90 = 0;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        FUN_140926446(local_d8);
        cVar1 = FUN_14934862e(param_2,local_d8);
        if (cVar1 != '\0') {
          uVar5 = 2;
          if (local_d8[0] != '\x02') {
            uVar5 = local_d8[0] == '\x01';
          }
          FUN_14937937c(lVar3,uVar5,1);
        }
        cVar1 = FUN_149348782(param_2,&local_d9);
        if (cVar1 != '\0') {
          uVar5 = 2;
          if (local_d9 != '\x02') {
            uVar5 = local_d9 == '\x01';
          }
          FUN_14937955a(lVar3,uVar5,1);
        }
      }
    }
    if ((int)uStack_80 != local_54) {
      FUN_1493a1e84(lVar3 + 0x410,&local_88);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140926446(&local_88);
  }
  if ((local_24 != -1) && (local_30 != 0)) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943ca0a FUN_14943ca0a body=797 status=ok
// SIG undefined FUN_14943ca0a(void)

longlong FUN_14943ca0a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [38];
  char local_72;
  char local_71;
  longlong local_70 [2];
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1492ee7cc(param_2,local_40);
  FUN_1492ef9be(param_2,&local_60);
  FUN_140b1283a(local_50,L"Factory_",&local_60);
  if (CONCAT71(uStack_5f,local_60) != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_1492f3730(*(undefined8 *)(param_1 + 0x178),local_50);
  if (cVar2 == '\0') {
    lVar5 = *param_3;
    if (lVar5 != 0) {
      lVar4 = FUN_1458f3582();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*param_3 != 0 &&
          *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = FUN_14943cd28(*(undefined8 *)(param_1 + 0x178));
        if (lVar5 != 0) {
          FUN_1492ee7cc(param_2,&local_60);
          FUN_1493aeb8c(lVar5,local_50,local_40,&local_60);
          if (CONCAT71(uStack_5f,local_60) != 0) {
            FUN_1400020a8();
          }
          FUN_1492ef9be(param_2,&local_60);
          FUN_1493b2aa8(lVar5,&local_60);
          if (CONCAT71(uStack_5f,local_60) != 0) {
            FUN_1400020a8();
          }
          FUN_1492f22b0(*(undefined8 *)(param_1 + 0x178),local_70,lVar5);
          if (local_70[0] != 0) {
            FUN_1400020a8();
          }
          iVar1 = *(int *)(param_1 + 0x1a8);
          *(uint *)(param_1 + 0x1a8) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x1ac) < iVar1 + 1U) {
            FUN_1494426b2((longlong *)(param_1 + 0x1a0),iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 8) = lVar5;
          FUN_1492ef9be(param_2,&local_60);
          FUN_1492ee2b2(lVar5,&local_60);
          if (CONCAT71(uStack_5f,local_60) != 0) {
            FUN_1400020a8();
          }
          FUN_1492ef9be(lVar5,&local_60);
          FUN_1492ee2b2(param_2,&local_60);
          if (CONCAT71(uStack_5f,local_60) != 0) {
            FUN_1400020a8();
          }
          if (*(char *)(param_1 + 0x170) == '\x01') {
            FUN_1493afa18(lVar5,param_1 + 0x170);
          }
          goto LAB_14943cb3f;
        }
      }
    }
  }
  else {
    lVar5 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x178),local_50);
    if (lVar5 != 0) {
      lVar4 = FUN_1458f3582();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
LAB_14943cb3f:
        cVar2 = FUN_1493347d0(param_2,&local_60);
        if (cVar2 != '\0') {
          FUN_1493b08fc(lVar5,local_60,1);
        }
        cVar3 = FUN_149334a7a(param_2,&local_71);
        if (cVar3 != '\0') {
          FUN_1493b290e(lVar5,&local_71,1);
          if (cVar2 == '\0' && local_71 == '\x01') {
            FUN_1493b08fc(lVar5,1,1);
          }
        }
        cVar2 = FUN_14933467e(param_2,&local_71);
        if (cVar2 != '\0') {
          FUN_1493b00d4(lVar5,&local_71,1);
        }
        cVar2 = FUN_149334924(param_2,&local_71);
        if (cVar2 != '\0') {
          local_72 = local_71;
          FUN_1493b17ce(lVar5,&local_72,1);
        }
        goto LAB_14943cac2;
      }
    }
  }
  lVar5 = 0;
LAB_14943cac2:
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943cd28 FUN_14943cd28 body=175 status=ok
// SIG undefined FUN_14943cd28(void)

undefined8 FUN_14943cd28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943cdd8 FUN_14943cdd8 body=1915 status=ok
// SIG undefined FUN_14943cdd8(void)

/* WARNING: Removing unreachable block (ram,0x00014943cf85) */
/* WARNING: Removing unreachable block (ram,0x00014943d2b3) */

longlong * FUN_14943cdd8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong local_1a0;
  int local_194;
  longlong local_190;
  longlong *local_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong *local_120;
  undefined4 local_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  int iStack_104;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_88;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = DAT_14cc16b50;
  uVar2 = DAT_14cc16b48;
  local_e8 = 0;
  local_e0 = DAT_14cc16b50;
  if (DAT_14cc16b50 == 0) {
    local_dc = 0;
  }
  else {
    FUN_140b856de(&local_e8,DAT_14cc16b50,0);
    FUN_140b8566a(local_e8,uVar2,iVar6);
  }
  local_1a8 = (longlong *)(param_1 + 0x38);
  local_f8 = 0;
  uStack_f0 = 0;
  local_1a0 = param_1;
  FUN_14943d554(local_1a8,&local_f8);
  if ((longlong)(int)uStack_f0 != 0) {
    lVar5 = (longlong)(int)uStack_f0 << 4;
    lVar7 = local_f8;
    do {
      local_b0 = lVar7;
      FUN_140c8411c(&local_e8,&local_b0);
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((longlong)local_e0 != 0) {
    lVar5 = (longlong)local_e0 << 4;
    lVar7 = local_e8;
    do {
      FUN_140b1283a(&local_120,&DAT_149e2b508,lVar7);
      FUN_144a882a8(&local_b0,&local_120,L"]: MaterialInstance not found for Identifier.");
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_1447a1bd6(param_2,iVar6);
      }
      lVar1 = *param_2;
      lVar4 = (longlong)iVar6 * 0x10;
      *(undefined8 *)(lVar1 + lVar4) = 0;
      *(longlong *)(lVar1 + lVar4) = local_b0;
      *(undefined4 *)(lVar1 + 8 + lVar4) = (undefined4)uStack_a8;
      *(undefined4 *)(lVar1 + 0xc + lVar4) = uStack_a8._4_4_;
      uStack_a8 = 0;
      local_b0 = 0;
      if (local_120 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar5 = local_1a0;
  lVar7 = local_1a0 + 0x48;
  local_b0 = 0x100000000;
  local_a0 = 0xffffffff;
  iStack_9c = 0;
  uStack_98 = 0;
  uStack_a8 = lVar7;
  if (*(int *)(local_1a0 + 0x60) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_b0);
    iVar6 = *(int *)(lVar5 + 0x60);
  }
  uStack_100 = CONCAT44(uStack_94,uStack_98);
  local_108 = local_a0;
  iStack_104 = iStack_9c;
  local_118 = (undefined4)local_b0;
  uStack_114 = local_b0._4_4_;
  uStack_110 = (undefined4)uStack_a8;
  uStack_10c = uStack_a8._4_4_;
  local_120 = local_1a8;
  if ((iStack_9c != iVar6) || (uStack_a8 != lVar7)) {
    local_194 = iVar6;
    local_190 = lVar7;
    do {
      lVar7 = *local_120;
      lVar5 = (longlong)iStack_104;
      local_1a0 = lVar7 + lVar5 * 0x38;
      FUN_14943d85a();
      lVar7 = FUN_140081d40(lVar7 + lVar5 * 0x38 + 0x10,0);
      if (lVar7 != 0) {
        lVar5 = FUN_1411eefea();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          local_188 = (longlong *)0x0;
          uStack_180 = 0;
          local_d8 = 0;
          uStack_d0 = (uint *)0x0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          FUN_1417e1304(lVar7,&local_d8,&local_188);
          FUN_14050458e(lVar7,&local_138,&local_188);
          FUN_147bbe748(lVar7,&local_148,&local_188);
          if ((longlong)(int)uStack_d0 != 0) {
            lVar5 = (longlong)(int)uStack_d0 << 4;
            lVar7 = local_d8;
            do {
              FUN_1400021e4(lVar7,local_158);
              FUN_1411a58b4(&local_b0,local_158);
              if (local_158[0] != 0) {
                FUN_1400020a8();
              }
              lVar7 = lVar7 + 0x10;
              lVar5 = lVar5 + -0x10;
            } while (lVar5 != 0);
          }
          if ((longlong)(int)uStack_130 != 0) {
            lVar5 = (longlong)(int)uStack_130 << 4;
            lVar7 = local_138;
            do {
              FUN_1400021e4(lVar7,local_158);
              FUN_1411a58b4(&local_b0,local_158);
              if (local_158[0] != 0) {
                FUN_1400020a8();
              }
              lVar7 = lVar7 + 0x10;
              lVar5 = lVar5 + -0x10;
            } while (lVar5 != 0);
          }
          if ((longlong)(int)uStack_140 != 0) {
            lVar5 = (longlong)(int)uStack_140 << 4;
            lVar7 = local_148;
            do {
              FUN_1400021e4(lVar7,local_158);
              FUN_1411a58b4(&local_b0,local_158);
              if (local_158[0] != 0) {
                FUN_1400020a8();
              }
              lVar7 = lVar7 + 0x10;
              lVar5 = lVar5 + -0x10;
            } while (lVar5 != 0);
          }
          if (local_148 != 0) {
            FUN_1400020a8(local_148);
          }
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          if (local_188 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      local_d8 = 0x100000000;
      uStack_d0 = &local_a0;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      if (local_88 == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar6 = local_88;
      }
      uStack_168 = CONCAT44(uStack_bc,uStack_c0);
      local_170 = local_c8;
      uVar2 = local_170;
      uStack_180 = local_d8;
      uStack_178 = (int)uStack_d0;
      uStack_174 = uStack_d0._4_4_;
      local_170._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      iVar3 = local_170._4_4_;
      local_188 = &local_b0;
      if ((local_170._4_4_ != iVar6) || (local_170 = uVar2, uStack_d0 != &local_a0)) {
        do {
          local_170 = uVar2;
          lVar7 = *local_188;
          FUN_140b1283a(local_158,&DAT_149e2b508,local_1a0);
          FUN_144a882a8(&local_148,local_158,L"]: Does not cover expected parameter: ");
          FUN_144a7dea0(&local_138,&local_148,(longlong)iVar3 * 0x18 + lVar7);
          FUN_144a882a8(&local_d8,&local_138,&DAT_149e0635c);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1447a1bd6(param_2,iVar3);
          }
          lVar7 = *param_2;
          lVar5 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar7 + lVar5) = 0;
          *(longlong *)(lVar7 + lVar5) = local_d8;
          *(int *)(lVar7 + 8 + lVar5) = (int)uStack_d0;
          *(undefined4 *)(lVar7 + 0xc + lVar5) = uStack_d0._4_4_;
          uStack_d0 = (uint *)0x0;
          local_d8 = 0;
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_158[0] != 0) {
            FUN_1400020a8();
          }
          local_170 = CONCAT44(local_170._4_4_,(uint)local_170 & ~uStack_180._4_4_);
          FUN_1449c0562(&uStack_180);
          iVar3 = local_170._4_4_;
          uVar2 = local_170;
        } while (local_188 != &local_b0 ||
                 ((uint *)CONCAT44(uStack_174,uStack_178) != &local_a0 || local_170._4_4_ != iVar6))
        ;
      }
      local_68 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_b0);
      local_108 = local_108 & ~uStack_114;
      FUN_1449c0562(&local_118);
    } while (local_120 != local_1a8 ||
             (CONCAT44(uStack_10c,uStack_110) != local_190 || iStack_104 != local_194));
  }
  FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_e8,local_e0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943d554 FUN_14943d554 body=771 status=ok
// SIG undefined FUN_14943d554(void)

void FUN_14943d554(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4 * 0x38;
      iVar6 = *(int *)(lVar2 + 8 + lVar4);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x38 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x38 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943d85a FUN_14943d85a body=1126 status=ok
// SIG undefined FUN_14943d85a(void)

undefined8 * FUN_14943d85a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_24 [4];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_38 = 0;
  local_30 = 0xffffffff;
  local_20 = param_1;
  iVar1 = FUN_1447ee042(param_2,L"_Unlit",6,1);
  if (iVar1 == -1) {
    FUN_144515828(&local_20,&DAT_14cc16248);
    FUN_14482b35e(param_1,local_24,&DAT_14cc162d8,0);
    local_30 = 0xffffffff;
    local_38 = 0;
    iVar1 = FUN_1447ee042(param_2,L"Transmission",0xc,1);
    if (iVar1 == -1) {
      FUN_144515828(&local_20,&DAT_14cc162e8);
      FUN_14482b35e(param_1,local_24,&DAT_14cc16378,0);
      FUN_14482b35e(param_1,local_24,&DAT_14cc16388,0);
    }
    FUN_144515828(&local_20,&DAT_14cc16398);
    FUN_14482b35e(param_1,local_24,&DAT_14cc16428,0);
    local_30 = 0xffffffff;
    local_38 = 0;
    iVar1 = FUN_1447ee042(param_2,L"SpecularGlossiness",0x12,1);
    if (iVar1 == -1) {
      FUN_14482b35e(param_1,local_24,&DAT_14cc16438,0);
      FUN_144515828(&local_20,&DAT_14cc16038);
      FUN_14482b35e(param_1,local_24,&DAT_14cc160c8,0);
    }
    local_30 = 0xffffffff;
    local_38 = 0;
    iVar1 = FUN_1447ee042(param_2,L"Default",7,1);
    if (iVar1 == -1) {
      local_30 = 0xffffffff;
      local_38 = 0;
      iVar1 = FUN_1447ee042(param_2,L"ClearCoat",9,1);
      if (iVar1 == -1) {
        local_30 = 0xffffffff;
        local_38 = 0;
        iVar1 = FUN_1447ee042(param_2,L"Sheen",5,1);
        if (iVar1 == -1) {
          local_30 = 0xffffffff;
          local_38 = 0;
          iVar1 = FUN_1447ee042(param_2,L"Transmission",0xc,1);
          if (iVar1 == -1) {
            local_30 = 0xffffffff;
            local_38 = 0;
            iVar1 = FUN_1447ee042(param_2,L"SpecularGlossiness",0x12,1);
            if (iVar1 == -1) goto LAB_14943d8f5;
            FUN_144515828(&local_20,&DAT_14cc160d8);
            FUN_14482b35e(param_1,local_24,&DAT_14cc16168,0);
            FUN_144515828(&local_20,&DAT_14cc16198);
            FUN_14482b35e(param_1,local_24,&DAT_14cc16228,0);
            puVar2 = &DAT_14cc16238;
          }
          else {
            FUN_144515828(&local_20,&DAT_14cc16788);
            puVar2 = &DAT_14cc16818;
          }
        }
        else {
          FUN_144515828(&local_20,&DAT_14cc16648);
          FUN_14482b35e(param_1,local_24,&DAT_14cc166d8,0);
          FUN_144515828(&local_20,&DAT_14cc166e8);
          puVar2 = &DAT_14cc16778;
        }
      }
      else {
        FUN_144515828(&local_20,&DAT_14cc16468);
        FUN_14482b35e(param_1,local_24,&DAT_14cc164f8,0);
        FUN_144515828(&local_20,&DAT_14cc16508);
        FUN_14482b35e(param_1,local_24,&DAT_14cc16598,0);
        FUN_144515828(&local_20,&DAT_14cc165a8);
        puVar2 = &DAT_14cc16638;
      }
    }
    else {
      FUN_144515828(&local_20,&DAT_14cc15ec8);
      FUN_14482b35e(param_1,local_24,&DAT_14cc15f58,0);
      FUN_144515828(&local_20,&DAT_14cc15f88);
      FUN_14482b35e(param_1,local_24,&DAT_14cc16018,0);
      puVar2 = &DAT_14cc16028;
    }
  }
  else {
    FUN_144515828(&local_20,&DAT_14cc15ec8);
    puVar2 = &DAT_14cc15f58;
  }
  FUN_14482b35e(param_1,local_24,puVar2,0);
LAB_14943d8f5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943dcc2 FUN_14943dcc2 body=610 status=ok
// SIG undefined FUN_14943dcc2(void)

void FUN_14943dcc2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 local_110;
  longlong **local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  longlong **local_e8;
  undefined1 *local_e0;
  longlong **local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c0 = param_2;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_e0 = &LAB_144517a14;
    local_118 = local_98;
    local_110 = &local_c0;
    local_108 = &local_d0;
    local_d8 = &local_118;
    local_d0 = local_98;
    local_c8 = &local_c0;
    FUN_14943df26(param_2,&local_e0);
    local_f0 = &LAB_144517c2c;
    local_118 = local_98;
    local_110 = &local_c0;
    local_108 = &local_d0;
    local_e8 = &local_118;
    FUN_14943e078(local_c0);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar4 = 0;
    local_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar4 = local_70;
    }
    local_100 = local_a8;
    uVar3 = local_100;
    local_f8 = local_a0;
    local_f4 = local_9c;
    local_110 = (undefined8 *)local_b8;
    local_108 = (longlong **)local_b0;
    local_100._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    iVar2 = local_100._4_4_;
    local_118 = local_98;
    if ((local_100._4_4_ != iVar4) || (local_100 = uVar3, local_b0 != local_88)) {
      do {
        local_100 = uVar3;
        lVar1 = *local_118;
        uVar3 = FUN_1493f7161(local_c0);
        FUN_144515962(*(undefined8 *)(param_1 + 0x158),
                      *(undefined8 *)(lVar1 + 0x10 + (longlong)iVar2 * 0x20),uVar3);
        FUN_1492f3a0c(local_c0,lVar1 + (longlong)iVar2 * 0x20,uVar3);
        local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
        FUN_1449c0562(&local_110);
        iVar2 = local_100._4_4_;
        uVar3 = local_100;
      } while (local_118 != local_98 ||
               (local_108 != (longlong **)local_88 || local_100._4_4_ != iVar4));
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_149440d62(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943df26 FUN_14943df26 body=336 status=ok
// SIG undefined FUN_14943df26(void)

void FUN_14943df26(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a94f6c();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943e078 FUN_14943e078 body=336 status=ok
// SIG undefined FUN_14943e078(void)

void FUN_14943e078(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
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
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
        plVar9 = (longlong *)(lVar3 + lVar8 + 0x10);
        uVar6 = FUN_145a95058();
        bVar5 = FUN_144a7ca96(plVar9,uVar6);
        lVar4 = *plVar9;
        if ((lVar4 != 0 & bVar5) == 1) {
          local_68 = lVar4;
          (*(code *)*param_2)(param_2[1],lVar3 + lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943e1cb FUN_14943e1cb body=1035 status=ok
// SIG undefined FUN_14943e1cb(void)

void FUN_14943e1cb(undefined8 *param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_3f8 [32];
  undefined1 *local_3d8;
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined1 local_389;
  undefined1 local_388 [8];
  longlong *local_380;
  longlong *local_370;
  undefined4 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong *local_340;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined8 local_328;
  longlong *local_320;
  undefined1 local_318 [664];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  puVar6 = (undefined8 *)FUN_14162fdc4();
  FUN_1469bf2d8(*puVar6,&local_328);
  dVar11 = *param_3;
  dVar12 = param_3[1];
  uVar8 = -(ulonglong)(150.0 < dVar11);
  uVar9 = -(ulonglong)(50.0 < dVar12);
  (**(code **)(*DAT_14c968098 + 0xe8))(DAT_14c968098,&local_338);
  fVar10 = (float)FUN_145788320();
  dVar4 = (double)fVar10;
  dVar11 = (double)(uVar8 & (ulonglong)(double)(float)dVar11 |
                   (ulonglong)(~(uint)(uVar8 >> 0x20) & 0x4062c000) << 0x20) * dVar4;
  dVar12 = (double)(uVar9 & (ulonglong)(double)(float)dVar12 |
                   (ulonglong)(~(uint)(uVar9 >> 0x20) & 0x40490000) << 0x20) * dVar4;
  FUN_14627df0c(local_318);
  local_370 = (longlong *)*param_2;
  if (local_370 != (longlong *)0x0) {
    (**(code **)(*local_370 + 8))();
  }
  local_368 = (undefined4)param_2[1];
  local_360 = 1;
  local_358 = 0;
  uStack_350 = 0;
  lVar7 = FUN_14627f7ee(local_318);
  *(undefined1 *)(lVar7 + 0x202) = 2;
  *(undefined1 *)(lVar7 + 0x1e1) = 0;
  *(float *)(lVar7 + 0x1ec) = (float)dVar11;
  *(float *)(lVar7 + 0x1f0) = (float)dVar12;
  *(float *)(lVar7 + 0x1e4) =
       (float)((1.0 / dVar4) *
              (((double)(local_330 - local_338) - dVar11) * 0.5 + (double)local_338));
  *(float *)(lVar7 + 0x1e8) =
       (float)((((double)(local_32c - local_334) - dVar12) * 0.5 + (double)local_334) *
              (1.0 / dVar4));
  local_3d8 = &local_389;
  FUN_1461c0e96(local_388,"SWindow",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangePipelineHelper.cpp"
                ,0x20);
  FUN_1462139ea(local_388,&local_348,lVar7);
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_380 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)local_380 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_380 + 0x10))(local_380);
      }
    }
  }
  FUN_14627e134(local_318);
  plVar3 = (longlong *)*param_1;
  local_3a0 = local_348;
  local_398 = local_340;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_340 + 1) = (int)local_340[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x240))(plVar3,&local_3a0);
  local_3b0 = *param_1;
  local_3a8 = param_1[1];
  if (local_3a8 != 0) {
    LOCK();
    *(int *)(local_3a8 + 8) = *(int *)(local_3a8 + 8) + 1;
    UNLOCK();
  }
  FUN_140763be6(local_348,&local_3b0);
  uVar5 = DAT_14c98e618;
  local_3c0 = local_328;
  local_3b8 = local_320;
  if (local_320 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_320 + 1) = (int)local_320[1] + 1;
    UNLOCK();
  }
  local_3d0 = local_348;
  local_3c8 = local_340;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_340 + 1) = (int)local_340[1] + 1;
    UNLOCK();
  }
  FUN_1428f4316(uVar5,&local_3d0,&local_3c0,0);
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_340 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar1 = (int *)((longlong)local_340 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_340 + 0x10))(local_340);
      }
    }
  }
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_320 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar1 = (int *)((longlong)local_320 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_320 + 0x10))(local_320);
      }
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_80 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943e60c FUN_14943e60c body=156 status=ok
// SIG undefined FUN_14943e60c(void)

void FUN_14943e60c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_149434d6e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943e6aa FUN_14943e6aa body=195 status=ok
// SIG undefined FUN_14943e6aa(void)

void FUN_14943e6aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149440438(param_1 + 0x28,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943e76e FUN_14943e76e body=191 status=ok
// SIG undefined FUN_14943e76e(void)

void FUN_14943e76e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943e82e(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943e82e FUN_14943e82e body=429 status=ok
// SIG undefined FUN_14943e82e(void)

void FUN_14943e82e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [36];
  int local_94;
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
  FUN_1408be27e(param_2,*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c));
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
  local_94 = iVar6;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      lVar7 = *local_90;
      lVar4 = (longlong)iStack_74;
      if (*(int *)(lVar7 + 0x30 + lVar4 * 0x50) == 0) {
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar7 = lVar7 + lVar4 * 0x50;
        lVar4 = *param_2;
        lVar5 = (longlong)iVar6 * 0x10;
        puVar3 = (undefined8 *)(lVar4 + lVar5);
        *(undefined8 *)(lVar4 + lVar5) = 0;
        iVar6 = *(int *)(lVar7 + 0x18);
        _Src = *(void **)(lVar7 + 0x10);
        *(int *)(lVar4 + 8 + lVar5) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          iVar6 = local_94;
        }
        else {
          FUN_1446dd670(puVar3,iVar6,0);
          memcpy((void *)*puVar3,_Src,(longlong)iVar6 * 2);
          iVar6 = local_94;
        }
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



// FUNCTION 14943e9dc FUN_14943e9dc body=195 status=ok
// SIG undefined FUN_14943e9dc(void)

void FUN_14943e9dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14944012a(param_1 + 0x78,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943eaa0 FUN_14943eaa0 body=281 status=ok
// SIG undefined FUN_14943eaa0(void)

void FUN_14943eaa0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943ebba(param_1,local_38,plVar1);
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943ebba FUN_14943ebba body=109 status=ok
// SIG undefined FUN_14943ebba(void)

void FUN_14943ebba(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_149443632((longlong *)(param_1 + 0x28),uVar1,param_2);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x28);
  }
  FUN_140bee9ec(param_3,uVar5 + 0x28);
  return;
}



// FUNCTION 14943ec28 FUN_14943ec28 body=191 status=ok
// SIG undefined FUN_14943ec28(void)

void FUN_14943ec28(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943ece8(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943ece8 FUN_14943ece8 body=464 status=ok
// SIG undefined FUN_14943ece8(void)

void FUN_14943ece8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = (longlong *)(param_1 + 0x28);
  FUN_1408be27e(param_2,*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c));
  lVar1 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar10;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar1)) {
    local_9c = iVar7;
    local_98 = plVar10;
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74;
      puVar8 = (undefined8 *)(lVar3 + lVar6 * 0x50 + 0x10);
      cVar5 = FUN_149440014(param_1 + 0x120,puVar8);
      if (cVar5 != '\0') {
        iVar7 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
          FUN_1447a1bd6(param_2,iVar7);
        }
        lVar4 = *param_2;
        lVar9 = (longlong)iVar7 * 0x10;
        puVar2 = (undefined8 *)(lVar4 + lVar9);
        *(undefined8 *)(lVar4 + lVar9) = 0;
        iVar7 = *(int *)(lVar3 + 0x18 + lVar6 * 0x50);
        _Src = (void *)*puVar8;
        *(int *)(lVar4 + 8 + lVar9) = iVar7;
        if ((longlong)iVar7 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          plVar10 = local_98;
          iVar7 = local_9c;
        }
        else {
          FUN_1446dd670(puVar2,iVar7,0);
          memcpy((void *)*puVar2,_Src,(longlong)iVar7 * 2);
          plVar10 = local_98;
          iVar7 = local_9c;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar10 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943eeba FUN_14943eeba body=191 status=ok
// SIG undefined FUN_14943eeba(void)

void FUN_14943eeba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149439a9e(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943ef7a FUN_14943ef7a body=191 status=ok
// SIG undefined FUN_14943ef7a(void)

void FUN_14943ef7a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943aaba(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f03a FUN_14943f03a body=191 status=ok
// SIG undefined FUN_14943f03a(void)

void FUN_14943f03a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943a416(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f0fa FUN_14943f0fa body=187 status=ok
// SIG undefined FUN_14943f0fa(void)

void FUN_14943f0fa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14943a3b6(param_1,local_38);
  FUN_14943f1b6(param_3,uVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f1b6 FUN_14943f1b6 body=91 status=ok
// SIG undefined FUN_14943f1b6(void)

longlong FUN_14943f1b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144a787a6();
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar1;
  FUN_140bee9ec(param_1 + 0x18,param_2 + 0x18);
  FUN_140bee9ec(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 14943f212 FUN_14943f212 body=249 status=ok
// SIG undefined FUN_14943f212(void)

void FUN_14943f212(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943f30c(param_1,&local_48,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f30c FUN_14943f30c body=191 status=ok
// SIG undefined FUN_14943f30c(void)

undefined8 * FUN_14943f30c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_149443632(param_1 + 0x28,uVar2,param_3);
  if (iVar3 != -1) {
    uVar4 = FUN_14943a3b6(param_1,param_3);
    FUN_1494408cc(param_1,&local_38,uVar4);
    if ((undefined8 *)&local_38 == param_2) {
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_2 = local_38;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
      *(undefined4 *)(param_2 + 1) = uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f3cc FUN_14943f3cc body=187 status=ok
// SIG undefined FUN_14943f3cc(void)

void FUN_14943f3cc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14943a61e(param_1,local_38);
  FUN_14943f488(param_3,uVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f488 FUN_14943f488 body=105 status=ok
// SIG undefined FUN_14943f488(void)

longlong FUN_14943f488(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144a787a6();
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar1;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  FUN_1494417b4(param_1 + 0x20,param_2 + 0x20);
  FUN_140bee9ec(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 14943f4f2 FUN_14943f4f2 body=249 status=ok
// SIG undefined FUN_14943f4f2(void)

void FUN_14943f4f2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14943f5ec(param_1,&local_48,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f5ec FUN_14943f5ec body=191 status=ok
// SIG undefined FUN_14943f5ec(void)

undefined8 * FUN_14943f5ec(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_149443da2(param_1 + 0x78,uVar2,param_3);
  if (iVar3 != -1) {
    uVar4 = FUN_14943a61e(param_1,param_3);
    FUN_14944074a(param_1,&local_38,uVar4);
    if ((undefined8 *)&local_38 == param_2) {
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_2 = local_38;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
      *(undefined4 *)(param_2 + 1) = uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f6b2 FUN_14943f6b2 body=223 status=ok
// SIG undefined FUN_14943f6b2(void)

void FUN_14943f6b2(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_38;
  if ((int)uStack_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_149443632(param_1 + 0x28,uVar1,&local_38);
  *(bool *)param_3 = iVar2 != -1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943f798 FUN_14943f798 body=223 status=ok
// SIG undefined FUN_14943f798(void)

void FUN_14943f798(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_38;
  if ((int)uStack_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_149443da2(param_1 + 0x78,uVar1,&local_38);
  *(bool *)param_3 = iVar2 != -1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943f878 FUN_14943f878 body=186 status=ok
// SIG undefined FUN_14943f878(void)

void FUN_14943f878(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [42];
  undefined4 local_1e;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1e = 0x1000000;
  local_1a = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e);
  }
  puVar1 = &local_1e;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined2 *)(param_1 + 0x124) = *(undefined2 *)(puVar1 + 1);
  *(undefined4 *)(param_1 + 0x120) = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14943f936 FUN_14943f936 body=646 status=ok
// SIG undefined FUN_14943f936(void)

void FUN_14943f936(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  longlong **local_e0;
  longlong local_d8 [2];
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_118 = param_2;
  local_c8 = param_1;
  FUN_140056680(local_d8,&DAT_14a2229aa);
  local_e0 = &local_110;
  local_e8 = FUN_144517c38;
  local_110 = &local_c8;
  local_108 = local_98;
  local_100 = local_d8;
  FUN_1492f3f94(param_1);
  plVar2 = local_98 + 2;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  iVar4 = 0;
  local_b8 = plVar2;
  if (local_70 != 0) {
    FUN_1449c0562(&local_c0);
    iVar4 = local_70;
  }
  local_f8 = local_b0;
  iStack_f4 = iStack_ac;
  local_f0 = local_a8;
  local_ec = local_a4;
  local_108 = (longlong *)local_c0;
  local_100 = local_b8;
  local_110 = local_98;
  if ((iStack_ac != iVar4) || (local_b8 != plVar2)) {
    do {
      lVar1 = *local_110 + (longlong)iStack_f4 * 0x28;
      lVar7 = *local_110 + (longlong)iStack_f4 * 0x28;
      plVar8 = (longlong *)(lVar7 + 0x10);
      uVar6 = (ulonglong)*(int *)(lVar7 + 0x18);
      if (0 < (longlong)uVar6) {
        lVar7 = uVar6 * 0x10 + -8;
        do {
          if (*(int *)(*plVar8 + lVar7) < 2) {
            FUN_14101da94(plVar8,(int)uVar6 + -1);
          }
          lVar7 = lVar7 + -0x10;
          bVar3 = 1 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar3);
        uVar6 = (ulonglong)*(uint *)(lVar1 + 0x18);
      }
      iVar5 = (int)uVar6;
      if (*(int *)(lVar1 + 0x1c) != iVar5) {
        FUN_1408be2c4(plVar8,uVar6 & 0xffffffff);
        iVar5 = *(int *)(lVar1 + 0x18);
      }
      if (1 < iVar5) {
        local_c0 = lVar1;
        local_b8 = plVar8;
        FUN_145b061ee(local_118,local_9c,&local_c0,0);
      }
      local_f8 = local_f8 & ~local_108._4_4_;
      FUN_1449c0562(&local_108);
    } while (local_110 != local_98 || (local_100 != plVar2 || iStack_f4 != iVar4));
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(local_98);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943fbbd FUN_14943fbbd body=390 status=ok
// SIG undefined FUN_14943fbbd(void)

void FUN_14943fbbd(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  local_70 = param_1;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_3,iVar2);
  }
  lVar3 = *param_3;
  lVar6 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar6);
  *(undefined8 *)(lVar3 + lVar6) = 0;
  iVar2 = (int)param_2[1];
  pvVar4 = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar6) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,pvVar4,(longlong)iVar2 * 2);
  }
  FUN_1492f2f34(local_70,&local_58,param_2);
  lVar3 = local_58;
  lVar6 = (longlong)local_50;
  if (lVar6 == 0) {
    local_50 = 0;
  }
  else {
    lVar7 = 0;
    do {
      local_68 = (void *)0x0;
      local_60 = *(int *)(lVar3 + 8 + lVar7);
      lVar5 = (longlong)local_60;
      pvVar4 = *(void **)(lVar3 + lVar7);
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar4,lVar5 * 2);
      }
      FUN_14943fbbd(local_70,&local_68);
      lVar7 = lVar7 + 0x10;
    } while (lVar6 * 0x10 != lVar7);
  }
  FUN_1447a1747(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14943fd44 FUN_14943fd44 body=406 status=ok
// SIG undefined FUN_14943fd44(void)

ulonglong FUN_14943fd44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = &local_40;
  local_40 = param_1;
  uVar2 = FUN_1493431a6();
  cVar1 = FUN_149341ac2(param_2,uVar2);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_2,local_58);
    cVar1 = FUN_144516ca4(&local_48,local_58);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar1 != '\0') goto LAB_14943fda7;
  }
  FUN_1492ef4c6(param_2,&local_68);
  lVar3 = FUN_1492f2ba8(local_40,&local_68);
  if (lVar3 == 0) {
LAB_14943fde9:
    uVar5 = 0;
  }
  else {
    lVar4 = FUN_1459238a6();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_14943fde9;
    uVar5 = 0;
    do {
      uVar2 = FUN_1493431a6();
      cVar1 = FUN_149341ac2(lVar3,uVar2);
      if (cVar1 != '\0') {
        FUN_1492ef9be(lVar3,local_78);
        cVar1 = FUN_144516ca4(&local_48,local_78);
        if (cVar1 != '\0') {
          uVar5 = 1;
          break;
        }
      }
      FUN_1492ef4c6(lVar3,&local_88);
      if (CONCAT44(uStack_64,local_68) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      lVar3 = FUN_1492f2ba8(local_40,&local_68);
      if (lVar3 == 0) goto LAB_14943fde9;
      lVar4 = FUN_1459238a6();
      if (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_14943fde9;
    } while (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30);
  }
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
LAB_14943fda7:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14943fedc FUN_14943fedc body=244 status=ok
// SIG undefined FUN_14943fedc(void)

undefined8 FUN_14943fedc(char *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  *param_4 = 0;
  if (param_1[1] == '\0') {
    if ((((*param_1 != '\0') || (*(char *)(param_2 + 0x18) != '\0')) ||
        ((param_1[2] == '\x01' && (*(char *)(param_2 + 0x1a) == '\x01')))) &&
       (*(char *)(param_2 + 0x19) != '\x01')) {
      return 1;
    }
    if ((param_1[3] == '\x01') && (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x54))) {
      piVar3 = (int *)(param_2 + 0x58);
      if (*(int **)(param_2 + 0x60) != (int *)0x0) {
        piVar3 = *(int **)(param_2 + 0x60);
      }
      iVar5 = *piVar3;
      if (iVar5 != -1) {
        lVar1 = *(longlong *)(param_2 + 0x20);
        iVar4 = iVar5;
        while (*(int *)(lVar1 + (longlong)iVar4 * 0x20) != 0) {
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar1 + 0x18);
          if (iVar4 == -1) {
            return 0;
          }
        }
        do {
          lVar6 = lVar1 + (longlong)iVar5 * 0x20;
          if (*(int *)(lVar1 + (longlong)iVar5 * 0x20) == 0) goto LAB_14943ff8e;
          iVar5 = *(int *)(lVar6 + 0x18);
        } while (iVar5 != -1);
        lVar6 = 0;
LAB_14943ff8e:
        iVar5 = *(int *)(lVar6 + 0x10);
        if ((longlong)iVar5 != 0) {
          lVar1 = *(longlong *)(lVar6 + 8);
          lVar6 = 0;
          do {
            cVar2 = FUN_14943fd44(param_3,*(undefined8 *)(lVar1 + lVar6));
            if (cVar2 != '\0') {
              *param_4 = 1;
              return 1;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar5 * 8 != lVar6);
          return 0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14943ffd0 FUN_14943ffd0 body=67 status=ok
// SIG undefined FUN_14943ffd0(void)

ulonglong FUN_14943ffd0(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 5) == '\0') &&
     (((*(char *)(param_1 + 4) != '\x01' || (*(int *)(param_2 + 0x20) < 1)) &&
      (cVar1 = FUN_14933d500(*(undefined8 *)(param_2 + 0x10)), cVar1 == '\0')))) {
    uVar2 = FUN_149440014(param_1,param_2);
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 149440014 FUN_149440014 body=103 status=ok
// SIG undefined FUN_149440014(void)

ulonglong FUN_149440014(char *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (((param_1[1] != '\0') ||
      (((param_1[4] == '\x01' && (0 < *(int *)(param_2 + 0x20))) ||
       (cVar1 = FUN_14933d500(*(undefined8 *)(param_2 + 0x10)), cVar1 != '\0')))) ||
     (((uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1), *param_1 == '\0' &&
       (cVar1 = FUN_14933d60e(*(undefined8 *)(param_2 + 0x10)), cVar1 == '\0')) &&
      ((param_1[2] != '\x01' ||
       (iVar2 = FUN_1492f125c(*(longlong *)(param_2 + 0x10) + 0x130), iVar2 < 1)))))) {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14944007b FUN_14944007b body=174 status=ok
// SIG undefined FUN_14944007b(void)

undefined8 FUN_14944007b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145988b70();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944012a FUN_14944012a body=780 status=ok
// SIG undefined FUN_14944012a(void)

void FUN_14944012a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4 * 0x98;
      iVar6 = *(int *)(lVar2 + 8 + lVar4);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x98 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x98 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149440438 FUN_149440438 body=783 status=ok
// SIG undefined FUN_149440438(void)

void FUN_149440438(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4 * 0x50;
      iVar6 = *(int *)(lVar2 + 8 + lVar4);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x50 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x50 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14944074a FUN_14944074a body=384 status=ok
// SIG undefined FUN_14944074a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14944074a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_3 + 0x28) != *(int *)(param_3 + 0x54)) {
    piVar5 = (int *)(param_3 + 0x58);
    if (*(int **)(param_3 + 0x60) != (int *)0x0) {
      piVar5 = *(int **)(param_3 + 0x60);
    }
    iVar4 = *piVar5;
    if (iVar4 == -1) {
      if (_DAT_00000010 < 1) goto LAB_149440773;
    }
    else {
      lVar1 = *(longlong *)(param_3 + 0x20);
      iVar8 = iVar4;
      do {
        lVar6 = lVar1 + (longlong)iVar8 * 0x20;
        if (*(int *)(lVar1 + (longlong)iVar8 * 0x20) == 0) goto LAB_1494407ca;
        iVar8 = *(int *)(lVar6 + 0x18);
      } while (iVar8 != -1);
      lVar6 = 0;
LAB_1494407ca:
      if (*(int *)(lVar6 + 0x10) < 1) goto LAB_149440773;
      do {
        lVar6 = lVar1 + (longlong)iVar4 * 0x20;
        if (*(int *)(lVar1 + (longlong)iVar4 * 0x20) == 0) goto LAB_149440803;
        iVar4 = *(int *)(lVar6 + 0x18);
      } while (iVar4 != -1);
    }
    lVar6 = 0;
LAB_149440803:
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    cVar2 = FUN_14933ff3c(**(undefined8 **)(lVar6 + 8));
    if (cVar2 != '\0') {
      plVar11 = (longlong *)(param_1 + 200);
      puVar9 = local_38;
      if ((int)uStack_30 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      iVar4 = (int)uStack_30 + -1;
      if ((int)uStack_30 == 0) {
        iVar4 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar4,puVar9);
      iVar4 = FUN_1457511aa(plVar11,uVar3,&local_38);
      if (iVar4 != -1) {
        puVar9 = local_38;
        if ((int)uStack_30 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        uVar10 = 0;
        uVar7 = (ulonglong)((int)uStack_30 - 1);
        if ((int)uStack_30 == 0) {
          uVar7 = uVar10;
        }
        uVar3 = FUN_144a49b4a(uVar7,puVar9);
        iVar4 = FUN_1457511aa(plVar11,uVar3,&local_38);
        if (iVar4 != -1) {
          uVar10 = (longlong)iVar4 * 0x28 + *plVar11;
        }
        FUN_144a787a6(param_2,uVar10 + 0x10);
      }
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_149440773:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494408cc FUN_1494408cc body=175 status=ok
// SIG undefined FUN_1494408cc(void)

undefined8 * FUN_1494408cc(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar6 = (longlong *)(param_1 + 200);
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_1457511aa(plVar6,uVar2,param_3);
  if (iVar3 != -1) {
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    uVar7 = 0;
    uVar4 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar4 = uVar7;
    }
    uVar2 = FUN_144a49b4a(uVar4,puVar5);
    iVar3 = FUN_1457511aa(plVar6,uVar2,param_3);
    if (iVar3 != -1) {
      uVar7 = (longlong)iVar3 * 0x28 + *plVar6;
    }
    FUN_144a787a6(param_2,uVar7 + 0x10);
  }
  return param_2;
}



// FUNCTION 149440984 FUN_149440984 body=52 status=ok
// SIG undefined FUN_149440984(void)

void FUN_149440984(longlong *param_1)

{
  FUN_1494409b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494409b8 FUN_1494409b8 body=89 status=ok
// SIG undefined FUN_1494409b8(void)

void FUN_1494409b8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 149440a12 FUN_149440a12 body=89 status=ok
// SIG undefined FUN_149440a12(void)

void FUN_149440a12(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 149440a6c FUN_149440a6c body=52 status=ok
// SIG undefined FUN_149440a6c(void)

void FUN_149440a6c(longlong *param_1)

{
  FUN_149440aa0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149440aa0 FUN_149440aa0 body=313 status=ok
// SIG undefined FUN_149440aa0(void)

void FUN_149440aa0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149440bda FUN_149440bda body=52 status=ok
// SIG undefined FUN_149440bda(void)

void FUN_149440bda(longlong *param_1)

{
  FUN_149440c0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149440c0e FUN_149440c0e body=338 status=ok
// SIG undefined FUN_149440c0e(void)

void FUN_149440c0e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149440d62 FUN_149440d62 body=52 status=ok
// SIG undefined FUN_149440d62(void)

void FUN_149440d62(longlong *param_1)

{
  FUN_149440d96();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149440d96 FUN_149440d96 body=312 status=ok
// SIG undefined FUN_149440d96(void)

void FUN_149440d96(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149440f04 FUN_149440f04 body=54 status=ok
// SIG undefined FUN_149440f04(void)

undefined1 FUN_149440f04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14944101c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149440f62 FUN_149440f62 body=59 status=ok
// SIG undefined FUN_149440f62(void)

undefined8 FUN_149440f62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149440fa8 FUN_149440fa8 body=37 status=ok
// SIG undefined FUN_149440fa8(void)

void FUN_149440fa8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14944101c FUN_14944101c body=79 status=ok
// SIG undefined FUN_14944101c(void)

undefined8 * FUN_14944101c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14944106c(param_1,iVar1);
      FUN_1494410ce(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14944106c FUN_14944106c body=98 status=ok
// SIG undefined FUN_14944106c(void)

void FUN_14944106c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1494410ce FUN_1494410ce body=82 status=ok
// SIG undefined FUN_1494410ce(void)

void FUN_1494410ce(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1494411b0 FUN_1494411b0 body=63 status=ok
// SIG undefined FUN_1494411b0(void)

undefined1 FUN_1494411b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14943f488(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 149441218 FUN_149441218 body=59 status=ok
// SIG undefined FUN_149441218(void)

undefined8 FUN_149441218(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149441264 FUN_149441264 body=40 status=ok
// SIG undefined FUN_149441264(void)

void FUN_149441264(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1494412da(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1494412da FUN_1494412da body=95 status=ok
// SIG undefined FUN_1494412da(void)

void FUN_1494412da(longlong *param_1)

{
  FUN_1447a1747(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14944133a(param_1 + 4);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14944133a FUN_14944133a body=54 status=ok
// SIG undefined FUN_14944133a(void)

void FUN_14944133a(longlong *param_1)

{
  FUN_149441370(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149441370 FUN_149441370 body=356 status=ok
// SIG undefined FUN_149441370(void)

void FUN_149441370(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 149441526 FUN_149441526 body=54 status=ok
// SIG undefined FUN_149441526(void)

undefined1 FUN_149441526(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14943f1b6(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 149441584 FUN_149441584 body=59 status=ok
// SIG undefined FUN_149441584(void)

undefined8 FUN_149441584(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494415ca FUN_1494415ca body=34 status=ok
// SIG undefined FUN_1494415ca(void)

void FUN_1494415ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14944163a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14944163a FUN_14944163a body=85 status=ok
// SIG undefined FUN_14944163a(void)

void FUN_14944163a(longlong *param_1)

{
  FUN_1447a1747(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149441712 FUN_149441712 body=59 status=ok
// SIG undefined FUN_149441712(void)

undefined8 FUN_149441712(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494417b4 FUN_1494417b4 body=122 status=ok
// SIG undefined FUN_1494417b4(void)

longlong FUN_1494417b4(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14944182e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14944182e FUN_14944182e body=242 status=ok
// SIG undefined FUN_14944182e(void)

longlong * FUN_14944182e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_149441370(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
        if ((uVar2 >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          FUN_149441920(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = *(undefined8 *)(lVar3 + 0x18 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 149441920 FUN_149441920 body=77 status=ok
// SIG undefined FUN_149441920(void)

undefined8 * FUN_149441920(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14944106c(param_1,iVar1,0);
    FUN_1494410ce(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14944196e FUN_14944196e body=187 status=ok
// SIG undefined FUN_14944196e(void)

longlong * FUN_14944196e(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_149441a0c;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_149441a2a(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_149441a0c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 149441a2a FUN_149441a2a body=279 status=ok
// SIG undefined FUN_149441a2a(void)

undefined4 * FUN_149441a2a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149441b42(param_1,local_48);
  puVar1 = (undefined1 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_149441c28(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_149441d1a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149441b42 FUN_149441b42 body=230 status=ok
// SIG undefined FUN_149441b42(void)

int * FUN_149441b42(longlong *param_1,int *param_2)

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



// FUNCTION 149441c28 FUN_149441c28 body=128 status=ok
// SIG undefined FUN_149441c28(void)

undefined8 FUN_149441c28(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_149441ca8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 149441ca8 FUN_149441ca8 body=114 status=ok
// SIG undefined FUN_149441ca8(void)

void FUN_149441ca8(longlong *param_1,int param_2)

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



// FUNCTION 149441d1a FUN_149441d1a body=474 status=ok
// SIG undefined FUN_149441d1a(void)

void FUN_149441d1a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 149441ef6 FUN_149441ef6 body=181 status=ok
// SIG undefined FUN_149441ef6(void)

longlong FUN_149441ef6(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_149441f8e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_149441fac(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_149441f8e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 149441fac FUN_149441fac body=277 status=ok
// SIG undefined FUN_149441fac(void)

undefined4 * FUN_149441fac(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1494420c2(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1494421a8(param_1,param_3,local_40,local_48);
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
      FUN_1494422bc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494420c2 FUN_1494420c2 body=229 status=ok
// SIG undefined FUN_1494420c2(void)

int * FUN_1494420c2(longlong *param_1,int *param_2)

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



// FUNCTION 1494421a8 FUN_1494421a8 body=161 status=ok
// SIG undefined FUN_1494421a8(void)

undefined8 FUN_1494421a8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14944224a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14944224a FUN_14944224a body=114 status=ok
// SIG undefined FUN_14944224a(void)

void FUN_14944224a(longlong *param_1,int param_2)

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



// FUNCTION 1494422bc FUN_1494422bc body=477 status=ok
// SIG undefined FUN_1494422bc(void)

void FUN_1494422bc(longlong *param_1)

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



// FUNCTION 14944249a FUN_14944249a body=132 status=ok
// SIG undefined FUN_14944249a(void)

void FUN_14944249a(longlong param_1,int param_2)

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



// FUNCTION 149442520 FUN_149442520 body=132 status=ok
// SIG undefined FUN_149442520(void)

void FUN_149442520(longlong param_1,int param_2)

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



// FUNCTION 1494425a6 FUN_1494425a6 body=132 status=ok
// SIG undefined FUN_1494425a6(void)

void FUN_1494425a6(longlong param_1,int param_2)

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



// FUNCTION 14944262c FUN_14944262c body=132 status=ok
// SIG undefined FUN_14944262c(void)

void FUN_14944262c(longlong param_1,int param_2)

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



// FUNCTION 1494426b2 FUN_1494426b2 body=132 status=ok
// SIG undefined FUN_1494426b2(void)

void FUN_1494426b2(longlong param_1,int param_2)

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



// FUNCTION 149442738 FUN_149442738 body=319 status=ok
// SIG undefined FUN_149442738(void)

undefined4 * FUN_149442738(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149442878(param_1,local_48);
  FUN_1494429de(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14944295e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149442b92(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149442878 FUN_149442878 body=230 status=ok
// SIG undefined FUN_149442878(void)

int * FUN_149442878(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14944295e FUN_14944295e body=128 status=ok
// SIG undefined FUN_14944295e(void)

undefined8 FUN_14944295e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_149442a54(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if (plVar1[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_149442b20(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1494429de FUN_1494429de body=117 status=ok
// SIG undefined FUN_1494429de(void)

undefined8 * FUN_1494429de(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 149442a54 FUN_149442a54 body=203 status=ok
// SIG undefined FUN_149442a54(void)

int FUN_149442a54(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_149442a9e:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_149442b14;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149442b14;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149442b05;
    }
  }
  return -1;
LAB_149442b14:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149442b05:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_149442a9e;
}



// FUNCTION 149442b20 FUN_149442b20 body=114 status=ok
// SIG undefined FUN_149442b20(void)

void FUN_149442b20(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 149442b92 FUN_149442b92 body=476 status=ok
// SIG undefined FUN_149442b92(void)

void FUN_149442b92(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
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
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 149442d70 FUN_149442d70 body=252 status=ok
// SIG undefined FUN_149442d70(void)

void FUN_149442d70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_149442de6:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
      if ((int)plVar3[1] == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_149442e54;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_149442e54;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_149442e5a;
      }
      if ((int)plVar3[1] + iVar1 == 1) goto LAB_149442e5a;
      goto LAB_149442e46;
    }
  }
  return;
LAB_149442e54:
  if (uVar7 == uVar6) {
LAB_149442e5a:
    FUN_149442e6c(param_1);
    return;
  }
LAB_149442e46:
  iVar2 = (int)plVar3[4];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_149442de6;
}



// FUNCTION 149442e6c FUN_149442e6c body=87 status=ok
// SIG undefined FUN_149442e6c(void)

void FUN_149442e6c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_149442ec4();
  return;
}



// FUNCTION 149442ec4 FUN_149442ec4 body=70 status=ok
// SIG undefined FUN_149442ec4(void)

void FUN_149442ec4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x28);
  if (plVar1[2] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_149442b20(param_1,param_2);
  return;
}



// FUNCTION 149442f0a FUN_149442f0a body=315 status=ok
// SIG undefined FUN_149442f0a(void)

undefined4 * FUN_149442f0a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149443046(param_1,local_48);
  FUN_14944319e(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14944312c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149443340(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149443046 FUN_149443046 body=229 status=ok
// SIG undefined FUN_149443046(void)

int * FUN_149443046(longlong *param_1,int *param_2)

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



// FUNCTION 14944312c FUN_14944312c body=114 status=ok
// SIG undefined FUN_14944312c(void)

undefined8 FUN_14944312c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_149443202(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
    FUN_1494432ce(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14944319e FUN_14944319e body=100 status=ok
// SIG undefined FUN_14944319e(void)

undefined8 * FUN_14944319e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
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
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 149443202 FUN_149443202 body=203 status=ok
// SIG undefined FUN_149443202(void)

int FUN_149443202(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14944324c:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1494432c2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1494432c2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1494432b3;
    }
  }
  return -1;
LAB_1494432c2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1494432b3:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14944324c;
}



// FUNCTION 1494432ce FUN_1494432ce body=114 status=ok
// SIG undefined FUN_1494432ce(void)

void FUN_1494432ce(longlong *param_1,int param_2)

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



// FUNCTION 149443340 FUN_149443340 body=476 status=ok
// SIG undefined FUN_149443340(void)

void FUN_149443340(longlong *param_1)

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



// FUNCTION 149443524 FUN_149443524 body=128 status=ok
// SIG undefined FUN_149443524(void)

void FUN_149443524(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc16bb0;
  if (DAT_14cc16be4 != 0) {
    *(int *)(DAT_14cc16bb0 + (longlong)DAT_14cc16be0 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc16be4) {
    iVar4 = DAT_14cc16be0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cc16be4 = DAT_14cc16be4 + 1;
  puVar3 = &DAT_14cc16bc0;
  if (DAT_14cc16bd0 != (undefined *)0x0) {
    puVar3 = DAT_14cc16bd0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc16be0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1494435a4 FUN_1494435a4 body=141 status=ok
// SIG undefined FUN_1494435a4(void)

longlong FUN_1494435a4(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_149443632();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_1494435e1;
  }
  local_30 = param_3;
  FUN_149443702(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_1494435e1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149443632 FUN_149443632 body=207 status=ok
// SIG undefined FUN_149443632(void)

int FUN_149443632(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14944367c:
      lVar10 = (longlong)iVar1 * 0x50;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1494436f6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1494436f6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1494436e7;
    }
  }
  return -1;
LAB_1494436f6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1494436e7:
  iVar1 = *(int *)(lVar4 + 0x48 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14944367c;
}



// FUNCTION 149443702 FUN_149443702 body=321 status=ok
// SIG undefined FUN_149443702(void)

undefined4 * FUN_149443702(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_149443844(param_1,local_88);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  FUN_1494439be(local_80,*param_4,&local_78);
  FUN_14944163a(&local_78);
  *(undefined4 *)(local_80 + 0x48) = 0xffffffff;
  cVar1 = FUN_149443932(param_1,param_3,local_80,local_88);
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
      *(uint *)(local_80 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_80 + 0x48) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_88[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_149443b34(param_1);
    }
  }
  *param_2 = local_88[0];
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149443844 FUN_149443844 body=238 status=ok
// SIG undefined FUN_149443844(void)

int * FUN_149443844(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 149443932 FUN_149443932 body=140 status=ok
// SIG undefined FUN_149443932(void)

undefined8 FUN_149443932(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_149443632(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x50);
    FUN_14944163a(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x50),param_3,0x48);
    FUN_149443aba(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1494439be FUN_1494439be body=101 status=ok
// SIG undefined FUN_1494439be(void)

undefined8 * FUN_1494439be(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
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
  FUN_149443a24(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 149443a24 FUN_149443a24 body=149 status=ok
// SIG undefined FUN_149443a24(void)

undefined8 * FUN_149443a24(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  return param_1;
}



// FUNCTION 149443aba FUN_149443aba body=122 status=ok
// SIG undefined FUN_149443aba(void)

void FUN_149443aba(longlong *param_1,int param_2)

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



// FUNCTION 149443b34 FUN_149443b34 body=480 status=ok
// SIG undefined FUN_149443b34(void)

void FUN_149443b34(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x50;
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
        *(int *)(lVar3 + 0x4c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar11) =
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



// FUNCTION 149443d16 FUN_149443d16 body=139 status=ok
// SIG undefined FUN_149443d16(void)

longlong FUN_149443d16(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_149443da2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x98;
    if (lVar3 + lVar2 != 0) goto LAB_149443d52;
  }
  local_30 = param_3;
  FUN_149443e74(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x98;
LAB_149443d52:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149443da2 FUN_149443da2 body=209 status=ok
// SIG undefined FUN_149443da2(void)

int FUN_149443da2(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_149443dec:
      lVar10 = (longlong)iVar1 * 0x98;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_149443e68;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149443e68;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149443e56;
    }
  }
  return -1;
LAB_149443e68:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149443e56:
  iVar1 = *(int *)(lVar4 + 0x90 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_149443dec;
}



// FUNCTION 149443e74 FUN_149443e74 body=281 status=ok
// SIG undefined FUN_149443e74(void)

undefined4 * FUN_149443e74(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149443f8e(param_1,local_48);
  FUN_149444106(param_4,local_40);
  *(undefined4 *)(local_40 + 0x90) = 0xffffffff;
  cVar1 = FUN_14944407a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x94) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x90) =
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
      FUN_1494444c0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149443f8e FUN_149443f8e body=235 status=ok
// SIG undefined FUN_149443f8e(void)

int * FUN_149443f8e(longlong *param_1,int *param_2)

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
      FUN_14125fb0c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x98);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x98) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x98 + *param_1;
  return param_2;
}



// FUNCTION 14944407a FUN_14944407a body=139 status=ok
// SIG undefined FUN_14944407a(void)

undefined8 FUN_14944407a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_149443da2(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x98);
    FUN_1494412da(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x98),param_3,0x90);
    FUN_149444446(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 149444106 FUN_149444106 body=175 status=ok
// SIG undefined FUN_149444106(void)

undefined8 * FUN_149444106(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined7 local_88;
  undefined4 uStack_81;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 0;
  uStack_81 = 0;
  local_28 = 0;
  uStack_20 = 0;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_1494441b6(param_2 + 2,&local_98);
  FUN_1494412da(&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494441b6 FUN_1494441b6 body=142 status=ok
// SIG undefined FUN_1494441b6(void)

undefined8 * FUN_1494441b6(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  FUN_149444244(param_1 + 4,param_2 + 4);
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  return param_1;
}



// FUNCTION 149444244 FUN_149444244 body=123 status=ok
// SIG undefined FUN_149444244(void)

undefined8 * FUN_149444244(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1494442c0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1494442c0 FUN_1494442c0 body=389 status=ok
// SIG undefined FUN_1494442c0(void)

longlong * FUN_1494442c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149444446 FUN_149444446 body=122 status=ok
// SIG undefined FUN_149444446(void)

void FUN_149444446(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98 + 4) = uVar5;
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



// FUNCTION 1494444c0 FUN_1494444c0 body=485 status=ok
// SIG undefined FUN_1494444c0(void)

void FUN_1494444c0(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x98;
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
        *(int *)(lVar3 + 0x94 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar11) =
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



// FUNCTION 1494446a6 FUN_1494446a6 body=181 status=ok
// SIG undefined FUN_1494446a6(void)

longlong FUN_1494446a6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14944473e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14944475c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14944473e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14944475c FUN_14944475c body=275 status=ok
// SIG undefined FUN_14944475c(void)

undefined4 * FUN_14944475c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149444870(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_149444956(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_149444a68(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149444870 FUN_149444870 body=229 status=ok
// SIG undefined FUN_149444870(void)

int * FUN_149444870(longlong *param_1,int *param_2)

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



// FUNCTION 149444956 FUN_149444956 body=159 status=ok
// SIG undefined FUN_149444956(void)

undefined8 FUN_149444956(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1494449f6(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1494449f6 FUN_1494449f6 body=114 status=ok
// SIG undefined FUN_1494449f6(void)

void FUN_1494449f6(longlong *param_1,int param_2)

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



// FUNCTION 149444a68 FUN_149444a68 body=422 status=ok
// SIG undefined FUN_149444a68(void)

void FUN_149444a68(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 149444c10 FUN_149444c10 body=190 status=ok
// SIG undefined FUN_149444c10(void)

void FUN_149444c10(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149444cce(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 149444cce FUN_149444cce body=132 status=ok
// SIG undefined FUN_149444cce(void)

void FUN_149444cce(longlong param_1,int param_2)

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



// FUNCTION 149444d54 FUN_149444d54 body=139 status=ok
// SIG undefined FUN_149444d54(void)

longlong FUN_149444d54(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_149443da2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x98;
    if (lVar3 + lVar2 != 0) goto LAB_149444d90;
  }
  local_30 = param_3;
  FUN_149444de0(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x98;
LAB_149444d90:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149444de0 FUN_149444de0 body=281 status=ok
// SIG undefined FUN_149444de0(void)

undefined4 * FUN_149444de0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149443f8e(param_1,local_48);
  FUN_149444efa(param_4,local_40);
  *(undefined4 *)(local_40 + 0x90) = 0xffffffff;
  cVar1 = FUN_14944407a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x94) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x90) =
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
      FUN_1494444c0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149444efa FUN_149444efa body=149 status=ok
// SIG undefined FUN_149444efa(void)

undefined8 FUN_149444efa(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined7 local_88;
  undefined4 uStack_81;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 0;
  uStack_81 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_149444f90(param_2,*param_1,&local_98);
  FUN_1494412da(&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149444f90 FUN_149444f90 body=101 status=ok
// SIG undefined FUN_149444f90(void)

undefined8 * FUN_149444f90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
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
  FUN_1494441b6(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 149444ff6 FUN_149444ff6 body=36 status=ok
// SIG undefined FUN_149444ff6(void)

undefined8 FUN_149444ff6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149445036 FUN_149445036 body=93 status=ok
// SIG undefined FUN_149445036(void)

void FUN_149445036(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcca890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


