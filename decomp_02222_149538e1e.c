// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149538e1e FUN_149538e1e body=64 status=ok
// SIG undefined FUN_149538e1e(void)

undefined8 * FUN_149538e1e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd37c80;
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



// FUNCTION 149538e62 FUN_149538e62 body=81 status=ok
// SIG undefined FUN_149538e62(void)

undefined8 FUN_149538e62(longlong param_1)

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



// FUNCTION 149538eba FUN_149538eba body=89 status=ok
// SIG undefined FUN_149538eba(void)

bool FUN_149538eba(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_149538f05;
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
LAB_149538f05:
  return lVar6 == param_2;
}



// FUNCTION 149538f30 FUN_149538f30 body=118 status=ok
// SIG undefined FUN_149538f30(void)

void FUN_149538f30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaf94e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37c80;
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



// FUNCTION 149538fa6 FUN_149538fa6 body=118 status=ok
// SIG undefined FUN_149538fa6(void)

void FUN_149538fa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaf94e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37c80;
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



// FUNCTION 14953901c FUN_14953901c body=156 status=ok
// SIG undefined FUN_14953901c(void)

void FUN_14953901c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aaf94e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd37c80;
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
                    /* WARNING: Could not recover jumptable at 0x0001495390a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495390b8 FUN_1495390b8 body=104 status=ok
// SIG undefined FUN_1495390b8(void)

void FUN_1495390b8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000149539105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149539116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 149539120 FUN_149539120 body=101 status=ok
// SIG undefined FUN_149539120(void)

ulonglong FUN_149539120(longlong param_1)

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
LAB_14953917a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14953917a;
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



// FUNCTION 149539186 FUN_149539186 body=29 status=ok
// SIG undefined FUN_149539186(void)

undefined8 FUN_149539186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495391b8 FUN_1495391b8 body=93 status=ok
// SIG undefined FUN_1495391b8(void)

void FUN_1495391b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149539216 FUN_149539216 body=93 status=ok
// SIG undefined FUN_149539216(void)

void FUN_149539216(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd37cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149539274 FUN_149539274 body=126 status=ok
// SIG undefined FUN_149539274(void)

void FUN_149539274(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd37cf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495392e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495392f2 FUN_1495392f2 body=26 status=ok
// SIG undefined FUN_1495392f2(void)

undefined8 FUN_1495392f2(longlong param_1,undefined8 param_2)

{
  FUN_14953935e(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14953930c FUN_14953930c body=82 status=ok
// SIG undefined FUN_14953930c(void)

undefined8 FUN_14953930c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  return 1;
}



// FUNCTION 14953935e FUN_14953935e body=99 status=ok
// SIG undefined FUN_14953935e(void)

undefined4 * FUN_14953935e(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  *param_2 = *(undefined4 *)(lVar1 + 0x80);
  return param_2;
}



// FUNCTION 1495393c2 FUN_1495393c2 body=1 status=ok
// SIG undefined FUN_1495393c2(void)

void FUN_1495393c2(void)

{
  return;
}



// FUNCTION 1495393c4 FUN_1495393c4 body=29 status=ok
// SIG undefined FUN_1495393c4(void)

undefined8 FUN_1495393c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495393e2 FUN_1495393e2 body=1 status=ok
// SIG undefined FUN_1495393e2(void)

void FUN_1495393e2(void)

{
  return;
}



// FUNCTION 1495393e4 FUN_1495393e4 body=29 status=ok
// SIG undefined FUN_1495393e4(void)

undefined8 FUN_1495393e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149539402 FUN_149539402 body=69 status=ok
// SIG undefined FUN_149539402(void)

void FUN_149539402(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_1495395c8(*(longlong *)(param_1 + 8) + 0x48,param_3);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_149539642(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 149539448 FUN_149539448 body=383 status=ok
// SIG undefined FUN_149539448(void)

longlong FUN_149539448(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  longlong local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = *(ulonglong *)(param_2 + 0x18);
  iVar4 = FUN_144a788f7(uVar2 & 0xffffffff);
  iVar5 = FUN_144a788f7(uVar3 & 0xffffffff);
  uVar6 = FUN_144a78877((int)(uVar3 >> 0x20) + iVar5,(int)(uVar2 >> 0x20) + iVar4);
  if (DAT_14cc1e720 != DAT_14cc1e74c) {
    puVar8 = &DAT_14cc1e750;
    if (DAT_14cc1e758 != (undefined *)0x0) {
      puVar8 = DAT_14cc1e758;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14cc1e760 - 1U & uVar6) * 4);
    while (iVar4 != -1) {
      puVar1 = (ulonglong *)(DAT_14cc1e718 + (longlong)iVar4 * 0x48);
      if ((*puVar1 == uVar3) &&
         (*(ulonglong *)(DAT_14cc1e718 + 8 + (longlong)iVar4 * 0x48) == uVar2)) {
        if (puVar1 != (ulonglong *)0x0) {
          FUN_1406fa146(&local_68,puVar1 + 2);
          uStack_40 = puVar1[7];
          goto LAB_1495394ed;
        }
        break;
      }
      iVar4 = (int)puVar1[8];
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
LAB_1495394ed:
  lVar7 = FUN_14953e8de(&local_68);
  if (lVar7 == 0) {
    FUN_14953e820(local_98,param_2,param_1);
    lVar7 = FUN_14953e8de(local_98);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495395c8 FUN_1495395c8 body=121 status=ok
// SIG undefined FUN_1495395c8(void)

void FUN_1495395c8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149543410(param_1,iVar1);
    }
    FUN_1495433e6((longlong)iVar1 * 0x110 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1495434a4(param_1,param_2,iVar1 - param_2);
    FUN_149543506(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149539642 FUN_149539642 body=130 status=ok
// SIG undefined FUN_149539642(void)

void FUN_149539642(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1495435b2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149543638(param_1,param_2,iVar1 - param_2);
    FUN_149543692(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1495396c6 FUN_1495396c6 body=173 status=ok
// SIG undefined FUN_1495396c6(void)

void FUN_1495396c6(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar4 = FUN_1445400e4(param_1 + 0x10,uVar6 & 0xffffffff,param_3,param_4);
      uVar1 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      *(uint *)(lVar3 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_14954375a((longlong *)(lVar3 + lVar5),iVar2);
      }
      lVar3 = *(longlong *)(lVar3 + lVar5);
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = uVar4;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = uVar1;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 149539774 FUN_149539774 body=218 status=ok
// SIG undefined FUN_149539774(void)

void FUN_149539774(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar3 * 0x10);
      if (lVar4 != 0) {
        puVar6 = *(undefined1 **)(*(longlong *)(param_1 + 0x30) + lVar3 * 0x10);
        puVar5 = puVar6 + lVar4 * 0x10;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar2 = lVar3 * 0x110;
          FUN_140861d3c(local_58,lVar4 + lVar2,lVar4 + lVar2 + 0x58,lVar4 + lVar2 + 0x88);
          local_40 = lVar4 + lVar2 + 0x70;
          FUN_14753ea0c(local_58,*(undefined4 *)(puVar6 + 8),*puVar6);
          puVar6 = puVar6 + 0x10;
        } while (puVar6 != puVar5);
        iVar1 = *(int *)(param_1 + 0x38);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149539850 FUN_149539850 body=43 status=ok
// SIG undefined FUN_149539850(void)

void FUN_149539850(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50);
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953987c FUN_14953987c body=211 status=ok
// SIG undefined FUN_14953987c(void)

void FUN_14953987c(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      FUN_140861d3c(local_68,lVar1 + lVar2,lVar1 + lVar2 + 0x58,lVar1 + 0x88 + lVar2);
      local_78 = (ulonglong)*(byte *)(*(longlong *)(lVar1 + lVar2 + 0x70) + (longlong)param_2);
      local_50 = lVar1 + lVar2 + 0x70;
      FUN_14454072e(param_1 + 0x10,uVar3 & 0xffffffff,param_5,param_6);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x110;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149539950 FUN_149539950 body=180 status=ok
// SIG undefined FUN_149539950(void)

void FUN_149539950(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_1410676cc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + lVar1,*param_2,&local_49);
      local_58 = (ulonglong)local_49;
      FUN_14454072e(param_1 + 0x10,uVar2 & 0xffffffff,param_5,param_6);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x110;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149539a05 FUN_149539a05 body=203 status=ok
// SIG undefined FUN_149539a05(void)

void FUN_149539a05(undefined8 *param_1,int *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_1410676cc((longlong)iVar1 * 0x110 + *param_3,*param_1,(longlong)&local_2c + 2);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_1410676cc((longlong)iVar1 * 0x110 + *param_3,*param_1,(longlong)&local_2c + 1);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_1410676cc((longlong)iVar1 * 0x110 + *param_3,*param_1,&local_2c);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_1410676cc((longlong)iVar1 * 0x110 + *param_3,*param_1,(longlong)&local_2c + 3);
  *param_4 = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149539ad2 FUN_149539ad2 body=69 status=ok
// SIG undefined FUN_149539ad2(void)

void FUN_149539ad2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_149539b18(*(longlong *)(param_1 + 8) + 8,param_3);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_149539b92(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 149539b18 FUN_149539b18 body=121 status=ok
// SIG undefined FUN_149539b18(void)

void FUN_149539b18(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1480e1a8e(param_1,iVar1);
    }
    FUN_1495437df((longlong)iVar1 * 0x110 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149543808(param_1,param_2,iVar1 - param_2);
    FUN_14954386a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149539b92 FUN_149539b92 body=130 status=ok
// SIG undefined FUN_149539b92(void)

void FUN_149539b92(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149543916(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14954399c(param_1,param_2,iVar1 - param_2);
    FUN_1495439f6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149539c16 FUN_149539c16 body=43 status=ok
// SIG undefined FUN_149539c16(void)

void FUN_149539c16(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 149539c42 FUN_149539c42 body=592 status=ok
// SIG undefined FUN_149539c42(void)

void FUN_149539c42(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x30);
      lVar8 = lVar7 * 0x10;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      FUN_1491ff60e(&local_78,*(undefined4 *)(lVar5 + 8 + lVar8));
      local_88 = (void *)0x0;
      uStack_80 = 0;
      FUN_149539e94(&local_88,*(undefined4 *)(lVar5 + 8 + lVar8));
      pvVar3 = local_88;
      lVar4 = (longlong)*(int *)(lVar5 + 8 + lVar8);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar5 + lVar8);
        lVar4 = lVar4 << 3;
        lVar8 = 0x1b;
        lVar6 = 0;
        do {
          *(undefined4 *)((longlong)local_78 + lVar6) = *(undefined4 *)(lVar5 + 4 + lVar6 * 2);
          *(undefined4 *)((longlong)local_88 + lVar8 + -0x1b) = *(undefined4 *)(lVar5 + lVar6 * 2);
          puVar1 = (undefined8 *)((longlong)local_88 + lVar8 + -0x17);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((longlong)local_88 + lVar8 + -7) = 0x200000000;
          lVar8 = lVar8 + 0x1c;
          lVar6 = lVar6 + 4;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      local_98 = (void *)0x0;
      lVar4 = (longlong)(int)uStack_80;
      local_90 = (int)uStack_80;
      if (lVar4 == 0) {
        local_8c = 0;
      }
      else {
        FUN_14753bf48(&local_98,uStack_80 & 0xffffffff,0);
        memcpy(local_98,pvVar3,lVar4 * 0x1c);
      }
      pvVar3 = local_78;
      local_a8 = (void *)0x0;
      lVar4 = (longlong)(int)uStack_70;
      local_a0 = (int)uStack_70;
      if (lVar4 == 0) {
        local_9c = 0;
      }
      else {
        FUN_147539e5c(&local_a8,uStack_70 & 0xffffffff,0);
        memcpy(local_a8,pvVar3,lVar4 << 2);
      }
      FUN_14752dc64(lVar7 * 0x110 + lVar5,&local_a8,&local_98);
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x38));
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  if (param_2 == '\0') {
    if (iVar2 != 0) {
      lVar5 = (longlong)iVar2 * 0x110;
      do {
        thunk_FUN_147526dac(lVar7,0);
        lVar7 = lVar7 + 0x110;
        lVar5 = lVar5 + -0x110;
      } while (lVar5 != 0);
    }
  }
  else if (iVar2 != 0) {
    lVar5 = (longlong)iVar2 * 0x110;
    do {
      FUN_149539f06(lVar7,param_3);
      lVar7 = lVar7 + 0x110;
      lVar5 = lVar5 + -0x110;
    } while (lVar5 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149539e94 FUN_149539e94 body=113 status=ok
// SIG undefined FUN_149539e94(void)

void FUN_149539e94(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14753f2b0(param_1,iVar1);
    }
    FUN_14753f287((longlong)iVar1 * 0x1c + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_149543abe(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149539f06 FUN_149539f06 body=359 status=ok
// SIG undefined FUN_149539f06(void)

void FUN_149539f06(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  longlong *local_78 [3];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x68);
  FUN_140861d3c(local_78,param_1,param_1 + 0x58,param_1 + 0x80);
  uVar9 = *(uint *)(local_78[0] + 1);
  local_60 = plVar1;
  if (1 < (int)uVar9) {
    uVar10 = 0;
    if ((char)*(undefined8 *)(param_2 + 8) != '\x02') {
      uVar10 = 0;
      uVar8 = uVar9;
      do {
        uVar7 = (uVar8 >> 1) + uVar10;
        if (*(int *)(*local_78[0] + (ulonglong)uVar7 * 4) <
            (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) {
          uVar10 = uVar7 + (uVar8 & 1);
        }
        bVar4 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar4);
    }
    if ((char)*(undefined8 *)(param_2 + 0x10) != '\x02') {
      uVar8 = 0;
      uVar7 = uVar9;
      do {
        uVar9 = uVar8;
        uVar8 = (uVar7 >> 1) + uVar9;
        if (*(int *)(*local_78[0] + (ulonglong)uVar8 * 4) <=
            (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
          uVar9 = uVar8 + (uVar7 & 1);
        }
        bVar4 = 1 < uVar7;
        uVar8 = uVar9;
        uVar7 = uVar7 >> 1;
      } while (bVar4);
    }
    if ((int)uVar10 < (int)uVar9) {
      do {
        if ((int)local_78[0][1] <= (int)uVar10) break;
        uVar3 = *(undefined4 *)(*local_78[0] + (ulonglong)uVar10 * 4);
        lVar5 = (ulonglong)uVar10 * 0x1c;
        puVar2 = (undefined4 *)(*local_60 + lVar5);
        local_58 = *puVar2;
        uStack_54 = puVar2[1];
        uStack_50 = puVar2[2];
        puVar2 = (undefined4 *)(*local_60 + 0xc + lVar5);
        uStack_4c = *puVar2;
        uStack_48 = puVar2[1];
        uStack_44 = puVar2[2];
        uStack_40 = puVar2[3];
        FUN_14753eda8(local_78,uVar10);
        cVar6 = FUN_14752e26d(param_1,uVar3,&local_58);
        if (cVar6 == '\0') {
          FUN_14753fcec(local_78,uVar3,&local_58);
        }
        else {
          uVar10 = uVar10 - 1;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar9);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953a06e FUN_14953a06e body=69 status=ok
// SIG undefined FUN_14953a06e(void)

void FUN_14953a06e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_14953a0b4(*(longlong *)(param_1 + 8) + 0x28,param_3);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_14953a132(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 14953a0b4 FUN_14953a0b4 body=125 status=ok
// SIG undefined FUN_14953a0b4(void)

void FUN_14953a0b4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149543b9e(param_1,iVar1);
    }
    FUN_149543b75((longlong)iVar1 * 0x108 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149543c36(param_1,param_2,iVar1 - param_2);
    FUN_149543ca4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a132 FUN_14953a132 body=130 status=ok
// SIG undefined FUN_14953a132(void)

void FUN_14953a132(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149543d58(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149543dde(param_1,param_2,iVar1 - param_2);
    FUN_149543e38(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a1b6 FUN_14953a1b6 body=43 status=ok
// SIG undefined FUN_14953a1b6(void)

void FUN_14953a1b6(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x30);
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953a1e2 FUN_14953a1e2 body=219 status=ok
// SIG undefined FUN_14953a1e2(void)

void FUN_14953a1e2(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar4 * 0x10);
      if (lVar5 != 0) {
        puVar6 = *(undefined4 **)(*(longlong *)(param_1 + 0x30) + lVar4 * 0x10);
        puVar1 = puVar6 + lVar5 * 2;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
          lVar2 = lVar4 * 0x108;
          FUN_140861d3c(local_58,lVar5 + lVar2,lVar5 + lVar2 + 0x58,lVar5 + lVar2 + 0x80);
          local_40 = lVar5 + lVar2 + 0x70;
          FUN_14753fed8(local_58,puVar6[1],*puVar6);
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar1);
        iVar3 = *(int *)(param_1 + 0x38);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953a2be FUN_14953a2be body=69 status=ok
// SIG undefined FUN_14953a2be(void)

void FUN_14953a2be(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_14953a304(*(longlong *)(param_1 + 8) + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_14953a37e(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 14953a304 FUN_14953a304 body=121 status=ok
// SIG undefined FUN_14953a304(void)

void FUN_14953a304(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149543f28(param_1,iVar1);
    }
    FUN_149543eff((longlong)iVar1 * 0x110 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149543fbc(param_1,param_2,iVar1 - param_2);
    FUN_14954401e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a37e FUN_14953a37e body=130 status=ok
// SIG undefined FUN_14953a37e(void)

void FUN_14953a37e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1495440ca(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149544150(param_1,param_2,iVar1 - param_2);
    FUN_1495441aa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a402 FUN_14953a402 body=43 status=ok
// SIG undefined FUN_14953a402(void)

void FUN_14953a402(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20);
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953a42e FUN_14953a42e body=224 status=ok
// SIG undefined FUN_14953a42e(void)

void FUN_14953a42e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar6 * 0x10);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar6 * 0x10);
        lVar3 = lVar3 * 0x18;
        lVar5 = lVar6 * 0x110;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
          FUN_140861d3c(local_60,lVar1 + lVar5,lVar1 + lVar5 + 0x50,lVar1 + lVar5 + 0x88);
          local_48 = lVar1 + lVar5 + 0x60;
          FUN_1475b28c4(local_60,*(undefined4 *)(lVar4 + 0x10),lVar4);
          lVar4 = lVar4 + 0x18;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
        iVar2 = *(int *)(param_1 + 0x38);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953a510 FUN_14953a510 body=206 status=ok
// SIG undefined FUN_14953a510(void)

undefined8 * FUN_14953a510(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar5 = (longlong)param_4 * 0x110;
  lVar1 = lVar4 + 0x60 + lVar5;
  lVar2 = lVar4 + 0x50 + lVar5;
  FUN_140861d3c(local_50,lVar4 + lVar5,lVar2,lVar4 + lVar5 + 0x88);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *param_2 = 0;
  iVar3 = *(int *)(lVar2 + 8 + (longlong)param_3 * 0x10);
  _Src = *(void **)(lVar2 + (longlong)param_3 * 0x10);
  *(int *)(param_2 + 1) = iVar3;
  local_38 = lVar1;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953a5e0 FUN_14953a5e0 body=121 status=ok
// SIG undefined FUN_14953a5e0(void)

undefined8 * FUN_14953a5e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           FUN_1475a47bc((longlong)param_4 * 0x110 +
                         *(longlong *)(*(longlong *)(param_1 + 8) + 0x18),*param_3);
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
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
  }
  return param_2;
}



// FUNCTION 14953a65a FUN_14953a65a body=69 status=ok
// SIG undefined FUN_14953a65a(void)

void FUN_14953a65a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_1495395c8(*(longlong *)(param_1 + 8) + 0x48,param_3);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_14953a6a0(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 14953a6a0 FUN_14953a6a0 body=130 status=ok
// SIG undefined FUN_14953a6a0(void)

void FUN_14953a6a0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1495442a8(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14954432e(param_1,param_2,iVar1 - param_2);
    FUN_149544388(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a724 FUN_14953a724 body=43 status=ok
// SIG undefined FUN_14953a724(void)

void FUN_14953a724(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50);
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953a750 FUN_14953a750 body=211 status=ok
// SIG undefined FUN_14953a750(void)

void FUN_14953a750(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar4 * 0x10);
      if (lVar5 != 0) {
        puVar6 = *(undefined1 **)(*(longlong *)(param_1 + 0x30) + lVar4 * 0x10);
        puVar1 = puVar6 + lVar5 * 8;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar3 = lVar4 * 0x110;
          FUN_140861d3c(local_58,lVar5 + lVar3,lVar5 + lVar3 + 0x58,lVar5 + lVar3 + 0x88);
          local_40 = lVar5 + lVar3 + 0x70;
          FUN_14753ea0c(local_58,*(undefined4 *)(puVar6 + 4),*puVar6);
          puVar6 = puVar6 + 8;
        } while (puVar6 != puVar1);
        iVar2 = *(int *)(param_1 + 0x38);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953a824 FUN_14953a824 body=69 status=ok
// SIG undefined FUN_14953a824(void)

void FUN_14953a824(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_14953a86a(*(longlong *)(param_1 + 8) + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_14953a8e8(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 14953a86a FUN_14953a86a body=125 status=ok
// SIG undefined FUN_14953a86a(void)

void FUN_14953a86a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149544478(param_1,iVar1);
    }
    FUN_14954444f((longlong)iVar1 * 0x108 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149544510(param_1,param_2,iVar1 - param_2);
    FUN_14954457e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a8e8 FUN_14953a8e8 body=130 status=ok
// SIG undefined FUN_14953a8e8(void)

void FUN_14953a8e8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149544632(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1495446b8(param_1,param_2,iVar1 - param_2);
    FUN_149544712(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953a96c FUN_14953a96c body=43 status=ok
// SIG undefined FUN_14953a96c(void)

void FUN_14953a96c(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x40);
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953a998 FUN_14953a998 body=180 status=ok
// SIG undefined FUN_14953a998(void)

void FUN_14953a998(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar3 * 0x10);
      if (lVar4 != 0) {
        puVar5 = *(undefined1 **)(*(longlong *)(param_1 + 0x30) + lVar3 * 0x10);
        puVar1 = puVar5 + lVar4 * 8;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
          (**(code **)(*(longlong *)(lVar4 + lVar3 * 0x108) + 0x90))(lVar4 + lVar3 * 0x108,local_50)
          ;
          FUN_14753e556(local_50,*(undefined4 *)(puVar5 + 4),*puVar5);
          puVar5 = puVar5 + 8;
        } while (puVar5 != puVar1);
        iVar2 = *(int *)(param_1 + 0x38);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953aa4e FUN_14953aa4e body=70 status=ok
// SIG undefined FUN_14953aa4e(void)

void FUN_14953aa4e(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_149539b18(*(longlong *)(param_1 + 8) + 8,param_3 * 3);
  *(int *)(param_1 + 0x28) = param_3;
  FUN_14953aa94(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 14953aa94 FUN_14953aa94 body=130 status=ok
// SIG undefined FUN_14953aa94(void)

void FUN_14953aa94(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1495447da(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149544860(param_1,param_2,iVar1 - param_2);
    FUN_1495448ba(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953ab18 FUN_14953ab18 body=65 status=ok
// SIG undefined FUN_14953ab18(void)

void FUN_14953ab18(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = *(int *)(*(longlong *)(param_1 + 8) + 0x10) / 3;
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953ab5a FUN_14953ab5a body=1296 status=ok
// SIG undefined FUN_14953ab5a(void)

void FUN_14953ab5a(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_3;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x30);
      lVar9 = lVar8 * 0x10;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      FUN_1491ff60e(&local_78,*(undefined4 *)(lVar6 + 8 + lVar9));
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_98 = (void *)0x0;
      uStack_90 = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      FUN_149539e94(&local_88,*(undefined4 *)(lVar6 + 8 + lVar9));
      FUN_149539e94(&local_98,*(undefined4 *)(lVar6 + 8 + lVar9));
      FUN_149539e94(&local_a8,*(undefined4 *)(lVar6 + 8 + lVar9));
      pvVar4 = local_88;
      lVar5 = (longlong)*(int *)(lVar6 + 8 + lVar9);
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + lVar9);
        lVar5 = lVar5 << 5;
        lVar9 = 0x1b;
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_78 + lVar7) = *(undefined4 *)(lVar6 + 0x18 + lVar7 * 8);
          *(float *)((longlong)local_88 + lVar9 + -0x1b) = (float)*(double *)(lVar6 + lVar7 * 8);
          puVar1 = (undefined8 *)((longlong)local_88 + lVar9 + -0x17);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((longlong)local_88 + lVar9 + -7) = 0x200000000;
          *(float *)((longlong)local_98 + lVar9 + -0x1b) = (float)*(double *)(lVar6 + 8 + lVar7 * 8)
          ;
          puVar1 = (undefined8 *)((longlong)local_98 + lVar9 + -0x17);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((longlong)local_98 + lVar9 + -7) = 0x200000000;
          *(float *)((longlong)local_a8 + lVar9 + -0x1b) =
               (float)*(double *)(lVar6 + 0x10 + lVar7 * 8);
          puVar1 = (undefined8 *)((longlong)local_a8 + lVar9 + -0x17);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((longlong)local_a8 + lVar9 + -7) = 0x200000000;
          lVar9 = lVar9 + 0x1c;
          lVar7 = lVar7 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
      }
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      local_b8 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_80;
      local_b0 = (int)uStack_80;
      if (lVar5 == 0) {
        local_ac = 0;
      }
      else {
        FUN_14753bf48(&local_b8,uStack_80 & 0xffffffff,0);
        memcpy(local_b8,pvVar4,lVar5 * 0x1c);
      }
      pvVar4 = local_78;
      local_c8 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_70;
      local_c0 = (int)uStack_70;
      if (lVar5 == 0) {
        local_bc = 0;
      }
      else {
        FUN_147539e5c(&local_c8,uStack_70 & 0xffffffff,0);
        memcpy(local_c8,pvVar4,lVar5 << 2);
      }
      FUN_14752dc64(lVar8 * 0x330 + lVar6,&local_c8,&local_b8);
      pvVar4 = local_98;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      local_d8 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_90;
      local_d0 = (int)uStack_90;
      if (lVar5 == 0) {
        local_cc = 0;
      }
      else {
        FUN_14753bf48(&local_d8,uStack_90 & 0xffffffff,0);
        memcpy(local_d8,pvVar4,lVar5 * 0x1c);
      }
      pvVar4 = local_78;
      local_e8 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_70;
      local_e0 = (int)uStack_70;
      if (lVar5 == 0) {
        local_dc = 0;
      }
      else {
        FUN_147539e5c(&local_e8,uStack_70 & 0xffffffff,0);
        memcpy(local_e8,pvVar4,lVar5 << 2);
      }
      FUN_14752dc64(lVar6 + lVar8 * 0x330 + 0x110,&local_e8,&local_d8);
      pvVar4 = local_a8;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      local_f8 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_a0;
      local_f0 = (int)uStack_a0;
      if (lVar5 == 0) {
        local_ec = 0;
      }
      else {
        FUN_14753bf48(&local_f8,uStack_a0 & 0xffffffff,0);
        memcpy(local_f8,pvVar4,lVar5 * 0x1c);
      }
      pvVar4 = local_78;
      local_108 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_70;
      local_100 = (int)uStack_70;
      if (lVar5 == 0) {
        local_fc = 0;
      }
      else {
        FUN_147539e5c(&local_108,uStack_70 & 0xffffffff,0);
        memcpy(local_108,pvVar4,lVar5 << 2);
      }
      FUN_14752dc64(lVar6 + lVar8 * 0x330 + 0x220,&local_108,&local_f8);
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x38));
  }
  uVar3 = local_110;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  if (param_2 == '\0') {
    if (iVar2 != 0) {
      lVar6 = (longlong)iVar2 * 0x110;
      do {
        thunk_FUN_147526dac(lVar8,0);
        lVar8 = lVar8 + 0x110;
        lVar6 = lVar6 + -0x110;
      } while (lVar6 != 0);
    }
  }
  else if (iVar2 != 0) {
    lVar6 = (longlong)iVar2 * 0x110;
    do {
      FUN_149539f06(lVar8,uVar3);
      lVar8 = lVar8 + 0x110;
      lVar6 = lVar6 + -0x110;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953b06c FUN_14953b06c body=74 status=ok
// SIG undefined FUN_14953b06c(void)

void FUN_14953b06c(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  FUN_1495395c8(*(longlong *)(param_1 + 8) + 0x48,param_3 * 4);
  *(int *)(param_1 + 0x28) = param_3;
  FUN_14953b0b6(param_1 + 0x30,param_3);
  return;
}



// FUNCTION 14953b0b6 FUN_14953b0b6 body=130 status=ok
// SIG undefined FUN_14953b0b6(void)

void FUN_14953b0b6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149544982(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149544a08(param_1,param_2,iVar1 - param_2);
    FUN_149544a62(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14953b13a FUN_14953b13a body=65 status=ok
// SIG undefined FUN_14953b13a(void)

void FUN_14953b13a(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = *(int *)(*(longlong *)(param_1 + 8) + 0x50) / 3;
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 14953b17c FUN_14953b17c body=586 status=ok
// SIG undefined FUN_14953b17c(void)

void FUN_14953b17c(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [39];
  char local_91;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = *(int *)(param_1 + 0x38);
  local_91 = param_2;
  local_90 = param_3;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar7 * 0x10);
      if (lVar5 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar7 * 0x10);
        local_70 = lVar5 << 3;
        local_78 = lVar7 * 0x440;
        local_80 = (lVar7 * 4 + 1) * 0x110;
        local_88 = (lVar7 * 4 + 2) * 0x110;
        lVar5 = (lVar7 * 4 + 3) * 0x110;
        lVar6 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar1 = lVar3 + local_78;
          FUN_140861d3c(local_68,lVar3 + local_78,lVar3 + local_78 + 0x58,lVar3 + local_78 + 0x88);
          local_50 = lVar1 + 0x70;
          FUN_14753ea0c(local_68,*(undefined4 *)(lVar2 + 4 + lVar6),
                        *(undefined1 *)(lVar2 + 2 + lVar6));
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar1 = lVar3 + local_80;
          FUN_140861d3c(local_68,lVar3 + local_80,lVar3 + local_80 + 0x58,lVar3 + local_80 + 0x88);
          local_50 = lVar1 + 0x70;
          FUN_14753ea0c(local_68,*(undefined4 *)(lVar2 + 4 + lVar6),
                        *(undefined1 *)(lVar2 + 1 + lVar6));
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar1 = lVar3 + local_88;
          FUN_140861d3c(local_68,lVar3 + local_88,lVar3 + local_88 + 0x58,lVar3 + local_88 + 0x88);
          local_50 = lVar1 + 0x70;
          FUN_14753ea0c(local_68,*(undefined4 *)(lVar2 + 4 + lVar6),*(undefined1 *)(lVar2 + lVar6));
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          FUN_140861d3c(local_68,lVar1 + lVar5,lVar1 + lVar5 + 0x58,lVar1 + lVar5 + 0x88);
          local_50 = lVar1 + lVar5 + 0x70;
          FUN_14753ea0c(local_68,*(undefined4 *)(lVar2 + 4 + lVar6),
                        *(undefined1 *)(lVar2 + 3 + lVar6));
          lVar6 = lVar6 + 8;
        } while (local_70 != lVar6);
        iVar4 = *(int *)(param_1 + 0x38);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  if (local_91 != '\0') {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
    if (lVar7 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      lVar7 = lVar7 * 0x110;
      do {
        FUN_147525b53(lVar5,local_90);
        lVar5 = lVar5 + 0x110;
        lVar7 = lVar7 + -0x110;
      } while (lVar7 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953b3d8 FUN_14953b3d8 body=629 status=ok
// SIG undefined FUN_14953b3d8(void)

void FUN_14953b3d8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141001072();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bc13528);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_14953b5a4;
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_34 = (uint)(*(longlong *)(param_1 + 0x150) != 0);
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      uVar6 = local_34;
      if (1 < local_34) {
        FUN_14572541c(param_2);
        uVar6 = local_34;
      }
    }
    else {
      uVar6 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar6 == 0) goto LAB_14953b5a4;
    uVar8 = *(undefined8 *)(param_1 + 0x150);
  }
  else {
    plVar7 = (longlong *)FUN_14001cc68(0x38,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14bd3ac60;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    FUN_144a7c084(plVar7 + 2);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0x10;
      plVar9 = *(longlong **)(param_1 + 0x158);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x158) = 0;
LAB_14953b4f9:
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_14953b51d;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x150) = plVar7 + 2;
      plVar9 = *(longlong **)(param_1 + 0x158);
      if (plVar7 == plVar9) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x158) = plVar7;
        if (plVar9 != (longlong *)0x0) goto LAB_14953b4f9;
      }
LAB_14953b51d:
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    iVar5 = FUN_1448332aa(param_2,&DAT_14bc13528);
    if (iVar5 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_34 = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      uVar6 = local_34;
      if (1 < local_34) {
        FUN_14572541c(param_2);
        uVar6 = local_34;
      }
    }
    else {
      uVar6 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar6 == 0) goto LAB_14953b5a4;
    uVar8 = *(undefined8 *)(param_1 + 0x150);
  }
  FUN_14953c0c4(param_2,uVar8);
LAB_14953b5a4:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953b661 FUN_14953b661 body=714 status=ok
// SIG undefined FUN_14953b661(void)

void FUN_14953b661(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  int local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    local_80 = (longlong)*(int *)(param_1 + 0x30) * 0x58 + lVar8;
    do {
      if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
        plVar5 = *(longlong **)(lVar8 + 8);
        lVar6 = (longlong)*(int *)(lVar8 + 0x10) * 0x110;
        do {
          iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if ((0 < iVar3) && (*(char *)((longlong)plVar5 + 0x7c) == '\0')) {
            uVar1 = *(undefined4 *)plVar5[0xd];
            *(undefined1 *)((longlong)plVar5 + 0x7c) = 1;
            *(undefined4 *)(plVar5 + 0xf) = uVar1;
          }
          plVar5 = plVar5 + 0x22;
          lVar6 = lVar6 + -0x110;
        } while (lVar6 != 0);
      }
      if ((longlong)*(int *)(lVar8 + 0x20) != 0) {
        lVar7 = (longlong)*(int *)(lVar8 + 0x20) * 0x110;
        lVar6 = *(longlong *)(lVar8 + 0x18) + 0x88;
        do {
          iVar3 = (**(code **)(*(longlong *)(lVar6 + -0x88) + 0x48))(lVar6 + -0x88);
          if (0 < iVar3) {
            if (*(char *)(lVar6 + -8) == '\x01') {
              local_68 = (void *)0x0;
              local_60 = *(int *)(lVar6 + -0x10);
              lVar9 = (longlong)local_60;
              pvVar4 = *(void **)(lVar6 + -0x18);
              if (lVar9 == 0) goto LAB_14953b7fc;
              FUN_1446dd670(&local_68,local_60,0);
              memcpy(local_68,pvVar4,lVar9 * 2);
              pvVar4 = local_68;
              if (local_5c == -1) goto LAB_14953b77b;
            }
            else {
LAB_14953b77b:
              FUN_140861d3c(&local_68,lVar6 + -0x88,lVar6 + -0x38,lVar6);
              local_78 = (void *)0x0;
              local_70 = *(int *)(*(undefined8 **)(lVar6 + -0x28) + 1);
              lVar9 = (longlong)local_70;
              pvVar4 = (void *)**(undefined8 **)(lVar6 + -0x28);
              if (lVar9 == 0) {
                local_6c = 0;
              }
              else {
                FUN_1446dd670(&local_78,local_70,0);
                memcpy(local_78,pvVar4,lVar9 * 2);
              }
              *(undefined1 *)(lVar6 + -8) = 1;
              FUN_1402980a2(lVar6 + -0x18,local_78);
              pvVar4 = local_78;
            }
            if (pvVar4 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_14953b7fc:
          lVar6 = lVar6 + 0x110;
          lVar7 = lVar7 + -0x110;
        } while (lVar7 != 0);
      }
      if ((longlong)*(int *)(lVar8 + 0x30) != 0) {
        plVar5 = *(longlong **)(lVar8 + 0x28);
        lVar6 = (longlong)*(int *)(lVar8 + 0x30) * 0x108;
        do {
          iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if ((0 < iVar3) && (*(char *)((longlong)plVar5 + 0x6c) == '\0')) {
            uVar1 = *(undefined4 *)plVar5[0xe];
            *(undefined1 *)((longlong)plVar5 + 0x6c) = 1;
            *(undefined4 *)(plVar5 + 0xd) = uVar1;
          }
          plVar5 = plVar5 + 0x21;
          lVar6 = lVar6 + -0x108;
        } while (lVar6 != 0);
      }
      if ((longlong)*(int *)(lVar8 + 0x40) != 0) {
        plVar5 = *(longlong **)(lVar8 + 0x38);
        lVar6 = (longlong)*(int *)(lVar8 + 0x40) * 0x108;
        do {
          iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if ((0 < iVar3) && (*(char *)((longlong)plVar5 + 0x69) == '\0')) {
            uVar2 = *(undefined1 *)plVar5[0xe];
            *(undefined1 *)((longlong)plVar5 + 0x69) = 1;
            *(undefined1 *)(plVar5 + 0xd) = uVar2;
          }
          plVar5 = plVar5 + 0x21;
          lVar6 = lVar6 + -0x108;
        } while (lVar6 != 0);
      }
      if ((longlong)*(int *)(lVar8 + 0x50) != 0) {
        plVar5 = *(longlong **)(lVar8 + 0x48);
        lVar6 = (longlong)*(int *)(lVar8 + 0x50) * 0x110;
        do {
          iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if ((0 < iVar3) && (*(char *)((longlong)plVar5 + 0x69) == '\0')) {
            uVar2 = *(undefined1 *)plVar5[0xe];
            *(undefined1 *)((longlong)plVar5 + 0x69) = 1;
            *(undefined1 *)(plVar5 + 0xd) = uVar2;
          }
          plVar5 = plVar5 + 0x22;
          lVar6 = lVar6 + -0x110;
        } while (lVar6 != 0);
      }
      lVar8 = lVar8 + 0x58;
    } while (lVar8 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953b92c FUN_14953b92c body=523 status=ok
// SIG undefined FUN_14953b92c(void)

void FUN_14953b92c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0x100000000;
  iVar2 = *(int *)(param_1 + 0x148);
  iVar6 = 0;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x140);
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      FUN_14953bb38(plVar4,param_1 + 0x150);
      iVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,iVar6,param_1 + 0x130,&local_70);
      iVar6 = iVar6 + iVar5;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  lVar3 = local_58;
  local_78 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_78[1] = (longlong)&DAT_100000001;
  *local_78 = (longlong)&PTR_FUN_14a492060;
  local_80 = local_78 + 2;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 2;
  if (lVar3 == 0) {
    local_78[9] = local_60;
    *(undefined4 *)(local_78 + 7) = local_70;
    *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_6c;
    *(undefined4 *)(local_78 + 8) = uStack_68;
    *(undefined4 *)((longlong)local_78 + 0x44) = uStack_64;
  }
  local_78[10] = lVar3;
  local_58 = 0;
  *(undefined4 *)(local_78 + 0xb) = (undefined4)local_50;
  *(undefined4 *)((longlong)local_78 + 0x5c) = local_50._4_4_;
  local_50 = 0x100000000;
  FUN_140aec6f8(&local_80);
  plVar4 = local_78;
  if (local_78 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_80;
    plVar7 = *(longlong **)(param_1 + 0xe8);
    if (plVar7 == (longlong *)0x0) goto LAB_14953badf;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_14953baa9:
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14953badf;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar7;
  }
  else {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_80;
    plVar7 = *(longlong **)(param_1 + 0xe8);
    if (local_78 != plVar7) {
      *(longlong **)(param_1 + 0xe8) = local_78;
      if (plVar7 == (longlong *)0x0) goto LAB_14953badf;
      goto LAB_14953baa9;
    }
    LOCK();
    plVar7 = local_78 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14953badf;
    (**(code **)*local_78)(local_78);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14953badf:
  plVar4 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_78 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1404dbc0c(&local_70);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953bb38 FUN_14953bb38 body=80 status=ok
// SIG undefined FUN_14953bb38(void)

void FUN_14953bb38(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014953bb7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14953bb88 FUN_14953bb88 body=77 status=ok
// SIG undefined FUN_14953bb88(void)

int FUN_14953bb88(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x2c0))();
      iVar4 = iVar4 + iVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return iVar4;
}



// FUNCTION 14953c0c4 FUN_14953c0c4 body=364 status=ok
// SIG undefined FUN_14953c0c4(void)

longlong FUN_14953c0c4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    local_38 = 0;
    uStack_30 = 0;
    lVar2 = FUN_1492dc406(param_2);
    if (lVar2 == 0) {
      FUN_14021219d(param_1,&local_38);
      goto LAB_14953c108;
    }
    FUN_14010318a(lVar2,&local_50,0);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_38 = CONCAT44(uStack_4c,local_50);
    uStack_30 = CONCAT44(uStack_44,uStack_48);
    FUN_14021219d(param_1);
LAB_14953c1ad:
    FUN_14047320e(lVar2,param_1,param_2[2],0);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    FUN_14021219d(param_1,&local_38);
    lVar2 = local_38;
    if ((int)uStack_30 < 2) goto LAB_14953c108;
    uVar1 = FUN_1446f4bba();
    lVar2 = FUN_140277b32(uVar1,0,lVar2,0);
    if (lVar2 != 0) {
      lVar3 = FUN_14671abdc();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        local_40 = 0;
        FUN_14485c47a(&local_40,lVar2);
        lVar3 = local_40;
        (**(code **)(*param_2 + 0x40))(param_2);
        param_2[1] = lVar3;
        (**(code **)*param_2)(param_2);
        goto LAB_14953c1ad;
      }
    }
    FUN_14572541c(param_1);
  }
LAB_14953c108:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953c232 FUN_14953c232 body=26 status=ok
// SIG undefined FUN_14953c232(void)

void FUN_14953c232(undefined8 param_1)

{
  FUN_147574e9a();
  FUN_14953b92c(param_1);
  return;
}



// FUNCTION 14953c24c FUN_14953c24c body=122 status=ok
// SIG undefined FUN_14953c24c(void)

void FUN_14953c24c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140836bcc();
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_14953b92c(param_1);
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar3 = 0;
    do {
      FUN_14953b661(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14953c2c6 FUN_14953c2c6 body=110 status=ok
// SIG undefined FUN_14953c2c6(void)

longlong FUN_14953c2c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144540be0(local_d0,param_1);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_149544bd8(param_2,local_d0);
  FUN_14953c336(local_d0);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953c336 FUN_14953c336 body=158 status=ok
// SIG undefined FUN_14953c336(void)

void FUN_14953c336(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd38a60;
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
  FUN_145c08e63(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_149541c0c(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14179e8b8(param_1);
  return;
}



// FUNCTION 14953c3d4 FUN_14953c3d4 body=175 status=ok
// SIG undefined FUN_14953c3d4(void)

undefined8 FUN_14953c3d4(undefined8 param_1,undefined8 param_2)

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
  local_a0 = 8;
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



// FUNCTION 14953c484 FUN_14953c484 body=80 status=ok
// SIG undefined FUN_14953c484(void)

longlong * FUN_14953c484(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145cd38e0(*param_1,(int)param_1[1]);
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



// FUNCTION 14953c4d4 FUN_14953c4d4 body=175 status=ok
// SIG undefined FUN_14953c4d4(void)

undefined8 FUN_14953c4d4(undefined8 param_1,undefined8 param_2)

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
  local_a0 = 8;
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



// FUNCTION 14953c584 FUN_14953c584 body=175 status=ok
// SIG undefined FUN_14953c584(void)

undefined8 FUN_14953c584(undefined8 param_1,undefined8 param_2)

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
  local_a0 = 8;
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



// FUNCTION 14953c634 FUN_14953c634 body=106 status=ok
// SIG undefined FUN_14953c634(void)

undefined8 * FUN_14953c634(undefined8 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  FUN_1432db5b8();
  *param_1 = &PTR_FUN_14bd38a60;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  bVar1 = FUN_14953c69e(param_1);
  *(byte *)(param_1 + 0x12) = bVar1 ^ 1;
  uVar2 = FUN_14953c832(param_1);
  *(undefined1 *)((longlong)param_1 + 0x91) = uVar2;
  return param_1;
}



// FUNCTION 14953c69e FUN_14953c69e body=403 status=ok
// SIG undefined FUN_14953c69e(void)

undefined8 FUN_14953c69e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x80);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x88) * 2;
    iVar6 = -1;
    do {
      if ((longlong)(int)plVar3[1] != 0) {
        lVar7 = *plVar3;
        lVar8 = (longlong)(int)plVar3[1] * 0x58 + lVar7;
        do {
          if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
            lVar5 = 0;
            do {
              iVar1 = *(int *)(*(longlong *)(lVar7 + 8) + 0x60 + lVar5);
              iVar2 = iVar1;
              if ((iVar6 != -1) && (iVar2 = iVar6, iVar1 != iVar6)) {
                return 0;
              }
              iVar6 = iVar2;
              lVar5 = lVar5 + 0x110;
            } while ((longlong)*(int *)(lVar7 + 0x10) * 0x110 - lVar5 != 0);
          }
          if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
            lVar5 = 0;
            do {
              iVar1 = *(int *)(*(longlong *)(lVar7 + 0x38) + 0x60 + lVar5);
              iVar2 = iVar1;
              if ((iVar6 != -1) && (iVar2 = iVar6, iVar1 != iVar6)) {
                return 0;
              }
              iVar6 = iVar2;
              lVar5 = lVar5 + 0x108;
            } while ((longlong)*(int *)(lVar7 + 0x40) * 0x108 != lVar5);
          }
          if ((longlong)*(int *)(lVar7 + 0x30) != 0) {
            lVar5 = 0;
            do {
              iVar1 = *(int *)(*(longlong *)(lVar7 + 0x28) + 0x60 + lVar5);
              iVar2 = iVar1;
              if ((iVar6 != -1) && (iVar2 = iVar6, iVar1 != iVar6)) {
                return 0;
              }
              iVar6 = iVar2;
              lVar5 = lVar5 + 0x108;
            } while ((longlong)*(int *)(lVar7 + 0x30) * 0x108 != lVar5);
          }
          if ((longlong)*(int *)(lVar7 + 0x50) != 0) {
            lVar5 = 0;
            do {
              iVar1 = *(int *)(*(longlong *)(lVar7 + 0x48) + 0x60 + lVar5);
              iVar2 = iVar1;
              if ((iVar6 != -1) && (iVar2 = iVar6, iVar1 != iVar6)) {
                return 0;
              }
              iVar6 = iVar2;
              lVar5 = lVar5 + 0x110;
            } while ((longlong)*(int *)(lVar7 + 0x50) * 0x110 - lVar5 != 0);
          }
          if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
            lVar5 = 0;
            do {
              iVar1 = *(int *)(*(longlong *)(lVar7 + 0x18) + 0x58 + lVar5);
              iVar2 = iVar1;
              if ((iVar6 != -1) && (iVar2 = iVar6, iVar1 != iVar6)) {
                return 0;
              }
              iVar6 = iVar2;
              lVar5 = lVar5 + 0x110;
            } while ((longlong)*(int *)(lVar7 + 0x20) * 0x110 - lVar5 != 0);
          }
          lVar7 = lVar7 + 0x58;
        } while (lVar7 != lVar8);
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
  }
  return 1;
}



// FUNCTION 14953c832 FUN_14953c832 body=398 status=ok
// SIG undefined FUN_14953c832(void)

undefined8 FUN_14953c832(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      if ((longlong)(int)plVar5[1] != 0) {
        lVar3 = *plVar5;
        lVar6 = (longlong)(int)plVar5[1] * 0x58 + lVar3;
        do {
          if (0 < (longlong)*(int *)(lVar3 + 0x10)) {
            lVar2 = 0;
            while ((*(int *)(*(longlong *)(lVar3 + 8) + 0x60 + lVar2) < 1 &&
                   (*(char *)(*(longlong *)(lVar3 + 8) + 0x7c + lVar2) != '\x01'))) {
              lVar2 = lVar2 + 0x110;
              if ((longlong)*(int *)(lVar3 + 0x10) * 0x110 - lVar2 == 0) {
                return 0;
              }
            }
          }
          cVar1 = FUN_14953dc83(lVar3 + 0x18);
          if (cVar1 == '\0') {
            return 0;
          }
          if (0 < (longlong)*(int *)(lVar3 + 0x30)) {
            lVar2 = 0;
            while ((*(int *)(*(longlong *)(lVar3 + 0x28) + 0x60 + lVar2) < 1 &&
                   (*(char *)(*(longlong *)(lVar3 + 0x28) + 0x6c + lVar2) != '\x01'))) {
              lVar2 = lVar2 + 0x108;
              if ((longlong)*(int *)(lVar3 + 0x30) * 0x108 == lVar2) {
                return 0;
              }
            }
          }
          if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
            lVar2 = 0;
            while ((*(int *)(*(longlong *)(lVar3 + 0x38) + 0x60 + lVar2) < 1 &&
                   (*(char *)(*(longlong *)(lVar3 + 0x38) + 0x69 + lVar2) != '\x01'))) {
              lVar2 = lVar2 + 0x108;
              if ((longlong)*(int *)(lVar3 + 0x40) * 0x108 == lVar2) {
                return 0;
              }
            }
          }
          if (0 < (longlong)*(int *)(lVar3 + 0x50)) {
            lVar2 = 0;
            while ((*(int *)(*(longlong *)(lVar3 + 0x48) + 0x60 + lVar2) < 1 &&
                   (*(char *)(*(longlong *)(lVar3 + 0x48) + 0x69 + lVar2) != '\x01'))) {
              lVar2 = lVar2 + 0x110;
              if ((longlong)*(int *)(lVar3 + 0x50) * 0x110 - lVar2 == 0) {
                return 0;
              }
            }
          }
          lVar3 = lVar3 + 0x58;
        } while (lVar3 != lVar6);
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  return 1;
}



// FUNCTION 14953c9c0 FUN_14953c9c0 body=144 status=ok
// SIG undefined FUN_14953c9c0(void)

undefined4 * FUN_14953c9c0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
    bVar5 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 10);
  *(longlong *)(param_1 + 10) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 14953ca50 FUN_14953ca50 body=414 status=ok
// SIG undefined FUN_14953ca50(void)

void FUN_14953ca50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = *(longlong *)(param_1 + 0x50);
  if ((((lVar9 != 0) && (lVar5 = FUN_1411f0380(), lVar5 != 0)) &&
      (*(int *)(lVar5 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
       lVar5 + 0x30 && (plVar8 = *(longlong **)(param_1 + 0x50), plVar8 != (longlong *)0x0)))) {
    plVar7 = (longlong *)plVar8[0x22];
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      plVar7 = (longlong *)plVar8[0x22];
    }
    uVar6 = (**(code **)(*plVar7 + 0x2a8))();
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x80);
      local_60 = plVar8 + (longlong)*(int *)(param_1 + 0x88) * 2;
      do {
        if ((longlong)(int)plVar8[1] != 0) {
          lVar9 = *plVar8;
          lVar5 = (longlong)(int)plVar8[1] * 0x58;
          do {
            FUN_14953db29(&local_58,uVar6,lVar9);
            plVar7 = local_58;
            if (local_58 == (longlong *)0x0) {
LAB_14953cb93:
              plVar7 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_50)(local_50);
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
            else {
              (**(code **)(*local_58 + 0x20))(local_58,uVar6);
              iVar3 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
                FUN_149544d00((longlong *)(param_1 + 0x98),iVar3);
              }
              lVar4 = *(longlong *)(param_1 + 0x98);
              *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar7;
              *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
                goto LAB_14953cb93;
              }
            }
            lVar9 = lVar9 + 0x58;
            lVar5 = lVar5 + -0x58;
          } while (lVar5 != 0);
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != local_60);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953cbf0 FUN_14953cbf0 body=283 status=ok
// SIG undefined FUN_14953cbf0(void)

undefined8 * FUN_14953cbf0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_147557926();
  *param_1 = &PTR_FUN_14bd38a60;
  FUN_14953c9c0(param_1 + 7,param_2 + 0x38);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  _Src = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar1);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_149541f48(param_1 + 0x10,iVar1,0);
    FUN_149541faa(param_1[0x10],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  lVar3 = *(longlong *)(param_2 + 0xb0);
  param_1[0x16] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_14953ca50(param_1);
  return param_1;
}



// FUNCTION 14953cd0c FUN_14953cd0c body=622 status=ok
// SIG undefined FUN_14953cd0c(void)

void FUN_14953cd0c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bc13528);
  uVar7 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_14496b17c(uVar7,param_2,param_1,uVar7);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_34 = (uint)(param_1[0x15] != 0);
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
        uVar6 = local_34;
        if (1 < local_34) {
          FUN_14572541c(param_2);
          uVar6 = local_34;
        }
      }
      else {
        uVar6 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      if (uVar6 != 0) {
        FUN_14953c0c4(param_2,param_1[0x15]);
      }
    }
    goto LAB_14953cdd4;
  }
  iVar5 = FUN_1448332aa(param_2,&DAT_14bc13528);
  if (iVar5 < 1) goto LAB_14953cdd4;
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14bd3ac60;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  FUN_144a7c084(plVar8 + 2);
  if (plVar8 == (longlong *)0x0) {
    param_1[0x15] = 0x10;
    plVar9 = (longlong *)param_1[0x16];
    if (plVar9 != (longlong *)0x0) {
      param_1[0x16] = 0;
LAB_14953ce88:
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (plVar8 != (longlong *)0x0) goto LAB_14953cef7;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x15] = (longlong)(plVar8 + 2);
    plVar9 = (longlong *)param_1[0x16];
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[0x16] = (longlong)plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_14953ce88;
    }
LAB_14953cef7:
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_34 = 0;
    (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    uVar6 = local_34;
    if (1 < local_34) {
      FUN_14572541c(param_2);
      uVar6 = local_34;
    }
  }
  else {
    uVar6 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar6 != 0) {
    FUN_14953c0c4(param_2,param_1[0x15]);
  }
  FUN_14953ca50(param_1);
LAB_14953cdd4:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953cf7c FUN_14953cf7c body=344 status=ok
// SIG undefined FUN_14953cf7c(void)

void FUN_14953cf7c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      if ((longlong)(int)plVar5[1] != 0) {
        lVar7 = *plVar5;
        lVar8 = (longlong)(int)plVar5[1] * 0x58 + lVar7;
        do {
          iVar1 = *(int *)(lVar7 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(lVar7 + 8);
            lVar6 = 0;
            do {
              uVar2 = *(undefined4 *)(lVar3 + 0x60 + lVar6);
              *param_2 = *(undefined8 *)(lVar3 + 0x58 + lVar6);
              *(undefined4 *)(param_2 + 1) = uVar2;
              lVar6 = lVar6 + 0x110;
            } while ((longlong)iVar1 * 0x110 - lVar6 != 0);
          }
          iVar1 = *(int *)(lVar7 + 0x40);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(lVar7 + 0x38);
            lVar6 = 0;
            do {
              uVar2 = *(undefined4 *)(lVar3 + 0x60 + lVar6);
              *param_2 = *(undefined8 *)(lVar3 + 0x58 + lVar6);
              *(undefined4 *)(param_2 + 1) = uVar2;
              lVar6 = lVar6 + 0x108;
            } while ((longlong)iVar1 * 0x108 != lVar6);
          }
          iVar1 = *(int *)(lVar7 + 0x30);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(lVar7 + 0x28);
            lVar6 = 0;
            do {
              uVar2 = *(undefined4 *)(lVar3 + 0x60 + lVar6);
              *param_2 = *(undefined8 *)(lVar3 + 0x58 + lVar6);
              *(undefined4 *)(param_2 + 1) = uVar2;
              lVar6 = lVar6 + 0x108;
            } while ((longlong)iVar1 * 0x108 != lVar6);
          }
          iVar1 = *(int *)(lVar7 + 0x50);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(lVar7 + 0x48);
            lVar6 = 0;
            do {
              uVar2 = *(undefined4 *)(lVar3 + 0x60 + lVar6);
              *param_2 = *(undefined8 *)(lVar3 + 0x58 + lVar6);
              *(undefined4 *)(param_2 + 1) = uVar2;
              lVar6 = lVar6 + 0x110;
            } while ((longlong)iVar1 * 0x110 - lVar6 != 0);
          }
          iVar1 = *(int *)(lVar7 + 0x20);
          if ((longlong)iVar1 != 0) {
            lVar3 = *(longlong *)(lVar7 + 0x18);
            lVar6 = 0;
            do {
              uVar2 = *(undefined4 *)(lVar3 + 0x58 + lVar6);
              *param_2 = *(undefined8 *)(lVar3 + 0x50 + lVar6);
              *(undefined4 *)(param_2 + 1) = uVar2;
              lVar6 = lVar6 + 0x110;
            } while ((longlong)iVar1 * 0x110 - lVar6 != 0);
          }
          lVar7 = lVar7 + 0x58;
        } while (lVar7 != lVar8);
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  return;
}



// FUNCTION 14953d0d4 FUN_14953d0d4 body=283 status=ok
// SIG undefined FUN_14953d0d4(void)

void FUN_14953d0d4(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar2 = *(undefined4 **)(param_5 + 0x10);
  if (*(char *)(param_4 + 2) == '\x01') {
    uVar7 = param_4[1];
    *(undefined8 *)(puVar2 + 0x18) = *param_4;
    *(undefined8 *)(puVar2 + 0x1a) = uVar7;
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)plVar3[0x22];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar8 = (longlong *)plVar3[0x22];
    }
  }
  uVar7 = (**(code **)(*plVar8 + 0x2a8))();
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x98);
    puVar10 = puVar9 + (longlong)*(int *)(param_1 + 0xa0) * 2;
    do {
      plVar3 = (longlong *)*puVar9;
      plVar8 = (longlong *)puVar9[1];
      if (plVar8 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))
                  (plVar3,param_2,param_3,param_4,uVar7,*(undefined8 *)(param_5 + 0x10));
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x28))
                  (plVar3,param_2,param_3,param_4,uVar7,*(undefined8 *)(param_5 + 0x10));
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
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar10);
  }
  return;
}



// FUNCTION 14953d1f0 FUN_14953d1f0 body=286 status=ok
// SIG undefined FUN_14953d1f0(void)

void FUN_14953d1f0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar2 = *(undefined4 **)(param_5 + 0x10);
  if (*(char *)(param_4 + 2) == '\x01') {
    uVar7 = param_4[1];
    *(undefined8 *)(puVar2 + 0x18) = *param_4;
    *(undefined8 *)(puVar2 + 0x1a) = uVar7;
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)plVar3[0x22];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar8 = (longlong *)plVar3[0x22];
    }
  }
  uVar7 = (**(code **)(*plVar8 + 0x2a8))();
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x98);
    puVar10 = puVar9 + (longlong)*(int *)(param_1 + 0xa0) * 2;
    do {
      plVar3 = (longlong *)*puVar9;
      plVar8 = (longlong *)puVar9[1];
      if (plVar8 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))
                  (plVar3,param_2,param_3,param_4,uVar7,*(undefined8 *)(param_5 + 0x10));
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x30))
                  (plVar3,param_2,param_3,param_4,uVar7,*(undefined8 *)(param_5 + 0x10));
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
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar10);
  }
  return;
}



// FUNCTION 14953d30e FUN_14953d30e body=405 status=ok
// SIG undefined FUN_14953d30e(void)

void FUN_14953d30e(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_144542f5a(param_5,param_5 + 0x24);
  if (((lVar3 != 0) && (*(char *)(param_1 + 0x91) != '\0')) &&
     (*(longlong **)(lVar3 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x28))();
    if ((cVar2 != '\0') && (lVar7 = *(longlong *)(param_1 + 0x50), lVar7 != 0)) {
      lVar4 = FUN_1411f0380();
      if (((lVar4 != 0) &&
          ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar7 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) && (*(longlong *)(param_1 + 0x50) != 0)) {
        local_48 = 0;
        uStack_40 = 0;
        local_50 = *(undefined8 *)(param_3 + 0x18);
        local_58 = *(undefined4 *)(param_4 + 0xc);
        local_54 = 0;
        local_60 = *(undefined4 *)(param_4 + 4);
        local_5c = 0;
        if (SBORROW4(0,*(uint *)(param_3 + 0x24))) {
          puVar5 = (ulonglong *)(param_3 + 4);
          if (*(int *)(param_3 + 0x20) == 0) {
            puVar5 = (ulonglong *)(param_3 + 0x10);
          }
          local_68 = *puVar5;
        }
        else {
          local_68 = (ulonglong)*(uint *)(param_3 + 0x24);
        }
        local_70 = &local_50;
        local_78 = &local_48;
        FUN_144540dd6(param_1,&local_68,&local_60,&local_58);
        uVar6 = 0;
        if ((longlong)(int)uStack_40 != 0) {
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar7 = (longlong)(int)uStack_40 * 0x28;
          lVar4 = local_48;
          do {
            plVar1 = *(longlong **)(lVar3 + 0x18);
            (**(code **)(*plVar1 + 0x138))(plVar1,lVar3 + 0x30,lVar4);
            lVar4 = lVar4 + 0x28;
            lVar7 = lVar7 + -0x28;
          } while (lVar7 != 0);
          uVar6 = uStack_40 & 0xffffffff;
        }
        FUN_14951ef43(local_48,uVar6);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953d4a4 FUN_14953d4a4 body=361 status=ok
// SIG undefined FUN_14953d4a4(void)

void FUN_14953d4a4(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_144542f5a(param_4,param_4 + 0x24);
  if (((lVar3 != 0) && (*(char *)(param_1 + 0x91) != '\0')) &&
     (*(longlong **)(lVar3 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x28))();
    if ((cVar2 != '\0') && (lVar7 = *(longlong *)(param_1 + 0x50), lVar7 != 0)) {
      lVar4 = FUN_1411f0380();
      if (((lVar4 != 0) &&
          ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar7 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) && (*(longlong *)(param_1 + 0x50) != 0)) {
        local_38 = 0;
        uStack_30 = 0;
        if (SBORROW4(0,*(uint *)(param_3 + 0x24))) {
          puVar5 = (ulonglong *)(param_3 + 4);
          if (*(int *)(param_3 + 0x20) == 0) {
            puVar5 = (ulonglong *)(param_3 + 0x10);
          }
          local_40 = *puVar5;
        }
        else {
          local_40 = (ulonglong)*(uint *)(param_3 + 0x24);
        }
        local_48 = *(undefined8 *)(param_3 + 0x18);
        local_50 = &local_48;
        local_58 = &local_38;
        FUN_144540dd6(param_1,&local_40,&local_40,&local_40);
        uVar6 = 0;
        if ((longlong)(int)uStack_30 != 0) {
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar7 = (longlong)(int)uStack_30 * 0x28;
          lVar4 = local_38;
          do {
            plVar1 = *(longlong **)(lVar3 + 0x18);
            (**(code **)(*plVar1 + 0x138))(plVar1,lVar3 + 0x30,lVar4);
            lVar4 = lVar4 + 0x28;
            lVar7 = lVar7 + -0x28;
          } while (lVar7 != 0);
          uVar6 = uStack_30 & 0xffffffff;
        }
        FUN_14951ef43(local_38,uVar6);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953d60e FUN_14953d60e body=250 status=ok
// SIG undefined FUN_14953d60e(void)

void FUN_14953d60e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar4 = FUN_144542fa4(param_2,param_2 + 0x24);
  FUN_14953d71e(&local_38,param_1 + 0x38);
  plVar1 = local_30;
  *(undefined8 *)(lVar4 + 8) = local_38;
  local_38 = 0;
  plVar3 = *(longlong **)(lVar4 + 0x10);
  if (local_30 != plVar3) {
    local_30 = (longlong *)0x0;
    *(longlong **)(lVar4 + 0x10) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_14953d6c8;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
LAB_14953d6c8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14953d71e FUN_14953d71e body=399 status=ok
// SIG undefined FUN_14953d71e(void)

longlong * FUN_14953d71e(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_1448c2e86();
  iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,DAT_14cc0b540);
  if (0 < iVar3) {
    plVar4 = (longlong *)FUN_1448c2e86();
    lVar7 = 0;
    lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,DAT_14cc0b540,0);
    plVar6 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14bd3ac80;
    plVar4 = plVar6 + 2;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[2] = (longlong)&PTR_FUN_14bd38ab0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    *(undefined8 *)((longlong)plVar6 + 0x61) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x69) = 0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    local_48 = plVar4;
    local_40 = plVar6;
    FUN_149544dbc(&local_48,plVar4);
    plVar2 = local_40;
    *param_1 = (longlong)plVar4;
    param_1[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar4 = (longlong *)*param_1;
      lVar7 = param_1[1];
    }
    FUN_1492e188e(plVar4 + 6,param_2);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    local_58 = plVar4;
    local_50 = lVar7;
    (**(code **)(*(longlong *)(lVar5 + -8) + 200))((longlong *)(lVar5 + -8),&local_48,&local_58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953d954 FUN_14953d954 body=192 status=ok
// SIG undefined FUN_14953d954(void)

void FUN_14953d954(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = FUN_144542f5a(param_2,param_2 + 0x24);
  if ((lVar4 != 0) && (*(longlong **)(lVar4 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x28))();
    if (cVar3 != '\0') {
      local_28 = *(undefined8 *)(lVar4 + 8);
      local_20 = *(longlong *)(lVar4 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_14953da26(&local_28);
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953da26 FUN_14953da26 body=258 status=ok
// SIG undefined FUN_14953da26(void)

void FUN_14953da26(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar5 = (longlong *)FUN_1448c2e86();
  iVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,DAT_14cc0b540);
  if (0 < iVar4) {
    plVar5 = (longlong *)FUN_1448c2e86();
    lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,DAT_14cc0b540,0);
    plVar5 = (longlong *)(lVar6 + -8);
    local_28 = *param_1;
    if (((*(int *)(local_28 + 0x6c) != 0 || *(int *)(local_28 + 0x68) != 0) ||
        *(int *)(local_28 + 0x70) != 0) || *(int *)(local_28 + 0x74) != 0) {
      cVar3 = (**(code **)(*plVar5 + 0x1c0))(plVar5,local_28 + 0x30,0);
      local_28 = *param_1;
      if (cVar3 != '\0') {
        (**(code **)(*plVar5 + 0x1c8))(plVar5,local_28 + 0x68,1);
        local_28 = *param_1;
      }
    }
    local_20 = param_1[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0xe8))(plVar5,&local_28);
  }
  plVar5 = (longlong *)param_1[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953db29 FUN_14953db29 body=345 status=ok
// SIG undefined FUN_14953db29(void)

undefined8 * FUN_14953db29(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_3,&local_68);
  _Src = local_68;
  local_48 = *param_3;
  local_58 = (void *)0x0;
  local_50 = local_60;
  if ((longlong)local_60 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_60,0);
    memcpy(local_58,_Src,(longlong)local_60 * 2);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  lVar1 = FUN_149539448(&local_58,param_2);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_14953dbdb;
  }
  lVar2 = FUN_1446e6bbc();
  lVar3 = *(longlong *)(lVar1 + 8);
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar4) {
LAB_14953dc6a:
      lVar1 = *(longlong *)(lVar1 + 0x78);
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_14953dc6a;
  FUN_14953e1e6(param_1,lVar1,&local_58,param_3);
LAB_14953dbdb:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14953dc83 FUN_14953dc83 body=223 status=ok
// SIG undefined FUN_14953dc83(void)

ulonglong FUN_14953dc83(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[1];
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (0 < (longlong)(int)lVar3) {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 0x58 + lVar7);
      uVar5 = (undefined7)(uVar4 >> 8);
      uVar4 = CONCAT71(uVar5,0 < iVar1);
      if (0 < iVar1) break;
      if (*(char *)(lVar2 + 0x80 + lVar7) == '\x01') {
        local_50 = (void *)0x0;
        local_48 = *(int *)(lVar2 + 0x78 + lVar7);
        lVar6 = (longlong)local_48;
        _Src = *(void **)(lVar2 + 0x70 + lVar7);
        if (lVar6 != 0) {
          FUN_1446dd670(&local_50,local_48,0);
          memcpy(local_50,_Src,lVar6 * 2);
          if (local_44 == -1) goto LAB_14953dd1b;
          if (local_50 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar4 = CONCAT71(uVar5,1);
        break;
      }
LAB_14953dd1b:
      lVar7 = lVar7 + 0x110;
    } while ((longlong)(int)lVar3 * 0x110 - lVar7 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14953dd64 FUN_14953dd64 body=238 status=ok
// SIG undefined FUN_14953dd64(void)

void FUN_14953dd64(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_58 [40];
  int *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong **)(param_1 + 0x18) = param_2;
  uVar4 = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = *param_3;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined1 *)(param_1 + 0x60) = 1;
  (**(code **)(*param_2 + 0x1a0))(param_2,&local_30,0,0);
  if ((longlong)local_28 != 0) {
    lVar6 = (longlong)local_28 * 0x18;
    piVar5 = local_30;
    do {
      if (*(longlong *)(param_1 + 0x40) == *(longlong *)(piVar5 + 4)) {
        if ((piVar5 != (int *)0x0) &&
           ((((*piVar5 != *(int *)(param_1 + 0x20) || (piVar5[1] != *(int *)(param_1 + 0x24))) ||
             (piVar5[2] != *(int *)(param_1 + 0x28))) || (piVar5[3] != *(int *)(param_1 + 0x2c)))))
        {
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(piVar5 + 4);
          iVar7 = *piVar5;
          iVar8 = piVar5[1];
          iVar9 = piVar5[2];
          iVar10 = piVar5[3];
          goto LAB_14953dde0;
        }
        break;
      }
      piVar5 = piVar5 + 6;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  iVar7 = 0;
  iVar8 = 0;
  iVar9 = 0;
  iVar10 = 0;
LAB_14953dde0:
  *(int *)(param_1 + 0x68) = iVar7;
  *(int *)(param_1 + 0x6c) = iVar8;
  *(int *)(param_1 + 0x70) = iVar9;
  *(int *)(param_1 + 0x74) = iVar10;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))
            (*(longlong **)(param_1 + 0x18),param_1 + 0x30);
  if (local_30 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953de76 FUN_14953de76 body=127 status=ok
// SIG undefined FUN_14953de76(void)

undefined8 FUN_14953de76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_28);
  uVar1 = FUN_1468306ee();
  FUN_140056680(local_38,uVar1);
  FUN_140233b1a(param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953def6 FUN_14953def6 body=152 status=ok
// SIG undefined FUN_14953def6(void)

undefined8 FUN_14953def6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MovieSceneLiveLinkSourceStatus";
  local_28 = 0x1e;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MovieSceneLiveLinkSource";
  local_28 = 0x18;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Active");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953df90 FUN_14953df90 body=446 status=ok
// SIG undefined FUN_14953df90(void)

undefined8 FUN_14953df90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145715fae(local_98,param_1 + 0x40);
  local_58 = L"MovieSceneLiveLinkSourceType";
  local_50 = 0x1c;
  FUN_1446e940c(local_bc,&local_58);
  local_58 = L"FMovieSceneLiveLinkSource";
  local_50 = 0x19;
  FUN_1446e940c(local_c0,&local_58);
  FUN_140208bae(local_b8,local_c0,local_bc,L"Sequencer Live Link ({0})");
  FUN_14023409e(&local_a8,local_b8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,local_98);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_a8;
  local_80 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953e150 FUN_14953e150 body=150 status=ok
// SIG undefined FUN_14953e150(void)

void FUN_14953e150(longlong param_1)

{
  FUN_149542bee(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_149542bc5(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_149542b9c(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_149542b73(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145cd38e0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14953e1e6 FUN_14953e1e6 body=1456 status=ok
// SIG undefined FUN_14953e1e6(void)

longlong * FUN_14953e1e6(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = FUN_144a64e42();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) goto LAB_14953e396;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14953e396:
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14bd3aca0;
    plVar7 = plVar4 + 2;
    FUN_149544e64(plVar7,param_3,param_4);
    goto LAB_14953e3d2;
  }
  lVar3 = FUN_144a7452c();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) goto LAB_14953e445;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14953e445:
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14bd3ad00;
    plVar7 = plVar4 + 2;
    FUN_14954556e(plVar7,param_3,param_4);
    goto LAB_14953e3d2;
  }
  lVar3 = FUN_144a5ab96();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) goto LAB_14953e4b8;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14953e4b8:
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14bd3ad60;
    plVar7 = plVar4 + 2;
    FUN_149545c80(plVar7,param_3,param_4);
    goto LAB_14953e3d2;
  }
  lVar3 = FUN_144a49f24();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) goto LAB_14953e52b;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14953e52b:
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14bd3adc0;
    plVar7 = plVar4 + 2;
    FUN_14954604e(plVar7,param_3,param_4);
    goto LAB_14953e3d2;
  }
  lVar3 = FUN_14475a8dc();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) goto LAB_14953e59e;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14953e59e:
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14bd3ae20;
    plVar7 = plVar4 + 2;
    FUN_149546874(plVar7,param_3,param_4);
    goto LAB_14953e3d2;
  }
  lVar3 = FUN_144a7add4();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) goto LAB_14953e611;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14953e611:
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14bd3ae80;
    plVar7 = plVar4 + 2;
    FUN_149546f8e(plVar7,param_3,param_4);
    goto LAB_14953e3d2;
  }
  lVar3 = FUN_1446dcc8c();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    lVar6 = lVar5;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if ((bool)(bVar8 ^ 1) || param_2 == 0) goto LAB_14953e34f;
  }
  else if ((param_2 == 0) || ((*(ulonglong *)(lVar3 + 8) & *(ulonglong *)(lVar5 + 0x18)) == 0))
  goto LAB_14953e34f;
  lVar3 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if ((bool)(bVar8 ^ 1U | param_2 == 0)) goto LAB_14953e34f;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14953e34f;
  uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar2 == DAT_14c892c5c) {
    plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14bd3aee0;
    plVar7 = plVar4 + 2;
    FUN_1495470a8(plVar7,param_3,param_4);
  }
  else {
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18);
    if (uVar2 == DAT_14c892c2c) {
      plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_LAB_14bd3af40;
      plVar7 = plVar4 + 2;
      FUN_149547292(plVar7,param_3,param_4);
    }
    else {
      if (uVar2 != DAT_14c892c38) {
LAB_14953e34f:
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_14bd3afa0;
      plVar7 = plVar4 + 2;
      FUN_149547a90(plVar7,param_3,param_4);
    }
  }
LAB_14953e3d2:
  *param_1 = (longlong)plVar7;
  param_1[1] = (longlong)plVar4;
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  LOCK();
  plVar7 = plVar4 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 != 0) {
    return param_1;
  }
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return param_1;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  return param_1;
}



// FUNCTION 14953e796 FUN_14953e796 body=136 status=ok
// SIG undefined FUN_14953e796(void)

void FUN_14953e796(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14953e820(local_68,param_2,param_1);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  local_78 = *(undefined8 *)(param_2 + 0x18);
  local_38 = &local_78;
  local_30 = local_68;
  FUN_1495481ce(local_24);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953e820 FUN_14953e820 body=189 status=ok
// SIG undefined FUN_14953e820(void)

undefined8 * FUN_14953e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1403de9f2(param_3,&local_48,&DAT_149e0635c,1);
  if ((int)uStack_40 < 1) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_50 = 0;
    local_58 = param_2;
    FUN_14953eddc(param_1,param_2,&local_48,0);
  }
  FUN_1447a1747(local_48,(int)uStack_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953e8de FUN_14953e8de body=198 status=ok
// SIG undefined FUN_14953e8de(void)

longlong FUN_14953e8de(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = FUN_14479d2ce();
  plVar1 = (longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    *plVar1 = 0;
    return 0;
  }
  lVar3 = FUN_1446ddbd2();
  if (((*plVar1 == 0) || (cVar2 = FUN_144729dda(param_1 + 0x10), cVar2 == '\0')) &&
     (*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 == 0) {
LAB_14953e996:
      if (*plVar1 == 0) {
        return 0;
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      return 0;
    }
    lVar5 = *(longlong *)(lVar4 + 8);
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_14953e996;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14953e996;
    *plVar1 = lVar4;
  }
  else {
    lVar4 = *plVar1;
  }
  if ((lVar4 != 0) && ((*(ushort *)(lVar4 + 0x29) & 0x180) == 0)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 14953e9a4 FUN_14953e9a4 body=403 status=ok
// SIG undefined FUN_14953e9a4(void)

undefined8 * FUN_14953e9a4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = *(ulonglong *)(param_3 + 0x18);
  iVar5 = FUN_144a788f7(uVar8 & 0xffffffff);
  iVar2 = (int)(uVar8 >> 0x20);
  iVar6 = FUN_144a788f7(uVar3 & 0xffffffff);
  iVar4 = (int)(uVar3 >> 0x20);
  uVar7 = FUN_144a78877(iVar6 + iVar4,iVar5 + iVar2);
  if (DAT_14cc1e720 != DAT_14cc1e74c) {
    puVar9 = &DAT_14cc1e750;
    if (DAT_14cc1e758 != (undefined *)0x0) {
      puVar9 = DAT_14cc1e758;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(DAT_14cc1e760 - 1U & uVar7) * 4);
    while (iVar5 != -1) {
      puVar1 = (ulonglong *)(DAT_14cc1e718 + (longlong)iVar5 * 0x48);
      if ((*puVar1 == uVar3) &&
         (*(ulonglong *)(DAT_14cc1e718 + 8 + (longlong)iVar5 * 0x48) == uVar8)) {
        if ((puVar1 != (ulonglong *)0x0) && (puVar1 != (ulonglong *)&DAT_fffffffffffffff0)) {
          FUN_1406fa146(param_2);
          uVar8 = puVar1[7];
          goto LAB_14953eaae;
        }
        break;
      }
      iVar5 = (int)puVar1[8];
    }
  }
  FUN_14953e796(param_1,param_3);
  iVar5 = FUN_144a788f7(uVar8 & 0xffffffff);
  iVar6 = FUN_144a788f7(uVar3 & 0xffffffff);
  uVar7 = FUN_144a78877(iVar4 + iVar6,iVar2 + iVar5);
  if (DAT_14cc1e720 != DAT_14cc1e74c) {
    puVar9 = &DAT_14cc1e750;
    if (DAT_14cc1e758 != (undefined *)0x0) {
      puVar9 = DAT_14cc1e758;
    }
    iVar2 = *(int *)(puVar9 + (ulonglong)(DAT_14cc1e760 - 1U & uVar7) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cc1e718 + (longlong)iVar2 * 0x48);
      if ((*puVar1 == uVar3) &&
         (*(ulonglong *)(DAT_14cc1e718 + 8 + (longlong)iVar2 * 0x48) == uVar8)) {
        if (puVar1 != (ulonglong *)0x0) {
          FUN_1406fa146(param_2,puVar1 + 2);
          uVar8 = puVar1[7];
LAB_14953eaae:
          param_2[5] = uVar8;
          return param_2;
        }
        break;
      }
      iVar2 = (int)puVar1[8];
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14953eb38 FUN_14953eb38 body=675 status=ok
// SIG undefined FUN_14953eb38(void)

void FUN_14953eb38(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar1 = FUN_14953e8de(local_68);
  if (lVar1 == 0) goto LAB_14953ecb7;
  lVar4 = *(longlong *)(lVar1 + 8);
  lVar2 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar8 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar8) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar8 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    if (!bVar8) goto LAB_14953ec9f;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
LAB_14953ec9f:
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar8 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar8) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar8 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar8) goto LAB_14953ecb7;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_14953ecb7;
    lVar4 = FUN_14953e8de(local_68);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)param_2 * (longlong)*(int *)(lVar4 + 0x34) +
              (longlong)*(int *)(lVar4 + 0x44) + param_4 + local_40;
    }
    if (param_5 == '\0') {
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)(lVar1 + 0x72);
    }
    *(byte *)(lVar4 + (ulonglong)*(byte *)(lVar1 + 0x71)) =
         *(byte *)(lVar4 + (ulonglong)*(byte *)(lVar1 + 0x71)) & ~*(byte *)(lVar1 + 0x73) | bVar6;
    goto LAB_14953ecb7;
  }
  lVar4 = *(longlong *)(lVar1 + 0x78);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(lVar4 + 8);
    lVar3 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar2 != 0;
      if (lVar2 != lVar3 && bVar8) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar8 = lVar2 != 0;
          if (lVar2 == lVar3) break;
        } while (lVar2 != 0);
      }
      if (!bVar8) goto LAB_14953ecb7;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14953ecb7;
    lVar2 = FUN_14953e8de(local_68);
    if (lVar2 == 0) {
      puVar7 = (ulonglong *)0x0;
    }
    else {
      puVar7 = (ulonglong *)((longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40);
    }
    bVar6 = *(byte *)(lVar1 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar1 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar7;
    local_70 = bVar6;
    FUN_140d50566(&local_88,param_2);
    if ((int)local_80[1] != 0) {
      if ((local_70 & 1) == 0) {
        uVar5 = *local_80;
      }
      else {
        uVar5 = *local_80;
        if ((uVar5 & 1) != 0) {
          uVar5 = (longlong)local_80 + ((longlong)uVar5 >> 0x18);
        }
      }
      lVar1 = (longlong)local_78 * (longlong)param_2 + uVar5;
      if (lVar1 != 0) {
        if (param_5 == '\0') {
          bVar6 = 0;
        }
        else {
          bVar6 = *(byte *)(lVar4 + 0x72);
        }
        *(byte *)(lVar1 + (ulonglong)*(byte *)(lVar4 + 0x71)) =
             *(byte *)(lVar1 + (ulonglong)*(byte *)(lVar4 + 0x71)) & ~*(byte *)(lVar4 + 0x73) |
             bVar6;
      }
    }
  }
LAB_14953ecb7:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953eddc FUN_14953eddc body=707 status=ok
// SIG undefined FUN_14953eddc(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_14953eddc(longlong param_1,undefined8 param_2,longlong *param_3,int param_4,
                      longlong param_5,int param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong alStack_80 [3];
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  lStack_60 = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  local_88 = 0;
  alStack_80[0] = 0;
  if (*(int *)(*param_3 + 8 + (longlong)param_4 * 0x10) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(*param_3 + (longlong)param_4 * 0x10);
  }
  uVar7 = 0;
  FUN_1446f470e(&local_50,puVar6,0);
  lVar3 = FUN_144a8e29b(param_2,local_50,3);
  if (lVar3 != 0) {
    for (uVar7 = *(ulonglong *)(lVar3 + 0x10); (uVar7 & 1) == 0;
        uVar7 = *(ulonglong *)(uVar7 + 0x10)) {
      if (uVar7 < 2) {
        uVar7 = 0;
        goto LAB_14953eeb8;
      }
    }
    if ((uVar7 & 0xfffffffffffffffe) == 0) {
      uVar7 = 0;
    }
    else if (DAT_14c950c29 != '\0') {
      FUN_1456cec3c();
    }
    uVar7 = uVar7 & 0xfffffffffffffffe;
  }
LAB_14953eeb8:
  FUN_14485c47a(&local_88,uVar7);
  alStack_80[0] = lVar3;
  FUN_1449651a4(alStack_80,lVar3);
  lStack_60 = (longlong)param_6;
  lVar3 = FUN_14479d2ce(&local_88);
  if (lVar3 == 0) {
    alStack_80[0] = 0;
  }
  else {
    lVar3 = FUN_1446ddbd2();
    if (alStack_80[0] == 0) {
      if ((int)local_68 != 0) goto LAB_14953ef1c;
    }
    else {
      cVar2 = FUN_144729dda(alStack_80 + 1);
      lVar4 = alStack_80[0];
      if ((cVar2 != '\0') || ((int)local_68 == 0)) goto LAB_14953efc5;
LAB_14953ef1c:
      lVar4 = FUN_14007daa4(alStack_80,0,0);
      if (lVar4 == 0) {
LAB_14953f018:
        if (alStack_80[0] != 0) {
          alStack_80[0] = 0;
          alStack_80[1] = 0;
        }
      }
      else {
        lVar5 = *(longlong *)(lVar4 + 8);
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar8 = lVar5 != 0;
          if (lVar5 != lVar3 && bVar8) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar8 = lVar5 != 0;
              if (lVar5 == lVar3) break;
            } while (lVar5 != 0);
          }
          if (!bVar8) goto LAB_14953f018;
        }
        else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
        goto LAB_14953f018;
LAB_14953efc5:
        alStack_80[0] = lVar4;
        lVar3 = alStack_80[0];
        if (alStack_80[0] != 0) {
          lVar4 = *(longlong *)(alStack_80[0] + 8);
          lVar5 = FUN_1446dcc8c();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar8 = lVar4 != 0;
            if (lVar4 != lVar5 && bVar8) {
              do {
                lVar4 = *(longlong *)(lVar4 + 0x30);
                bVar8 = lVar4 != 0;
                if (lVar4 == lVar5) break;
              } while (lVar4 != 0);
            }
            if (bVar8) goto LAB_14953f061;
          }
          else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_14953f061:
            param_4 = param_4 + 1;
            if ((-1 < param_4) && (param_4 < (int)param_3[1])) {
              iVar1 = *(int *)(lVar3 + 0x44);
              local_90 = param_6 + iVar1;
              local_98 = iVar1 + param_5;
              FUN_14953eddc(param_1,*(undefined8 *)(lVar3 + 0x70),param_3,param_4);
              goto LAB_14953ef79;
            }
          }
        }
      }
    }
  }
  FUN_1406fa146(param_1,&local_88);
  *(longlong *)(param_1 + 0x28) = lStack_60;
LAB_14953ef79:
  if (alStack_80[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14953f0a4 FUN_14953f0a4 body=67 status=ok
// SIG undefined FUN_14953f0a4(void)

void FUN_14953f0a4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_14953bb38(param_1,param_3);
  return;
}



// FUNCTION 14953f130 FUN_14953f130 body=100 status=ok
// SIG undefined FUN_14953f130(void)

void FUN_14953f130(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_14953bb38(param_1,param_3);
  FUN_14953f194(param_1);
  return;
}



// FUNCTION 14953f194 FUN_14953f194 body=537 status=ok
// SIG undefined FUN_14953f194(void)

void FUN_14953f194(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_1494f81e6(*(undefined8 *)(param_1 + 0x40));
  FUN_1446f470e(&local_48,L"Transforms",1);
  iVar3 = *(int *)(lVar4 + 0x18);
  if (iVar3 < 1) goto LAB_14953f1df;
  FUN_14953f75e(param_1 + 0x28);
  **(undefined8 **)(param_1 + 0x28) = local_48;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  FUN_1400021e4(&local_48,&local_70);
  _Src = local_70;
  local_60 = (void *)0x0;
  local_58 = local_68;
  if ((longlong)local_68 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_68,0);
    memcpy(local_60,_Src,(longlong)local_68 * 2);
  }
  local_50 = local_48;
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bd3aee0;
  FUN_1495470a8(plVar5 + 2,&local_60,uVar6);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x58);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
LAB_14953f2ed:
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
      if (plVar5 != (longlong *)0x0) goto LAB_14953f311;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x50) = plVar5 + 2;
    plVar7 = *(longlong **)(param_1 + 0x58);
    if (plVar5 == plVar7) {
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
    else {
      *(longlong **)(param_1 + 0x58) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_14953f2ed;
    }
LAB_14953f311:
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
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  uVar6 = FUN_146719588();
  (**(code **)(*plVar5 + 8))(plVar5,uVar6,iVar3);
LAB_14953f1df:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953f3ae FUN_14953f3ae body=942 status=ok
// SIG undefined FUN_14953f3ae(void)

ulonglong FUN_14953f3ae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = param_1;
  local_138 = param_4;
  lVar4 = FUN_1494f81e6(*(undefined8 *)(param_1 + 0x40));
  iVar7 = *(int *)(lVar4 + 0x18);
  if (iVar7 < 1) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    local_150 = lVar4;
    do {
      local_c0 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if ((longlong)DAT_14cc1e7a0 != 0) {
        local_130 = DAT_14cc1e798 + (longlong)DAT_14cc1e7a0 * 2;
        uVar5 = (ulonglong)(int)uVar5;
        puVar8 = DAT_14cc1e798;
        local_148 = lVar6;
        do {
          local_d0 = (void *)0x0;
          local_c8 = *(int *)(puVar8 + 1);
          lVar4 = (longlong)local_c8;
          _Src = (void *)*puVar8;
          if (lVar4 == 0) {
            local_c4 = 0;
          }
          else {
            FUN_1446dd670(&local_d0,local_c8,0);
            memcpy(local_d0,_Src,lVar4 * 2);
          }
          FUN_140009b9a(local_f0,&local_d0);
          FUN_145715fae(local_100,&local_c0);
          local_88 = L"LinkLinkFormat";
          local_80[0] = 0xe;
          FUN_1446e940c(local_124,&local_88);
          local_88 = L"MovieSceneLiveLinkSubSectionAnimation";
          local_80[0] = 0x25;
          FUN_1446e940c(local_128,&local_88);
          FUN_140208bae(local_120,local_128,local_124,L"{0} : {1}");
          FUN_14023409e(&local_110,local_120,1);
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          FUN_14023423e(local_78,local_100);
          local_68 = 4;
          FUN_14023423e(local_58,local_f0);
          local_a0 = &local_48;
          local_a8 = &local_88;
          FUN_14010d304(&local_98,&local_a8);
          local_b8 = local_110;
          local_b0 = local_108;
          if (local_108 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_108 + 1) = (int)local_108[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_e0,&local_b8);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          lVar4 = 0x30;
          do {
            plVar3 = *(longlong **)((longlong)local_80 + lVar4 + -8);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))();
              *(undefined8 *)((longlong)local_80 + lVar4 + -8) = 0;
              *(undefined4 *)((longlong)local_80 + lVar4) = 0;
            }
            plVar3 = local_108;
            lVar4 = lVar4 + -0x20;
          } while (lVar4 != -0x10);
          if (local_108 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_108 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (local_100[0] != (longlong *)0x0) {
            (**(code **)(*local_100[0] + 0x10))();
          }
          if (local_f0[0] != (longlong *)0x0) {
            (**(code **)(*local_f0[0] + 0x10))();
          }
          if (local_120[0] != (longlong *)0x0) {
            (**(code **)(*local_120[0] + 0x10))();
          }
          FUN_140f937a0(local_138,uVar5 * 0x110 + *(longlong *)(*(longlong *)(local_140 + 0x28) + 8)
                       );
          if (local_e0[0] != (longlong *)0x0) {
            (**(code **)(*local_e0[0] + 0x10))();
          }
          if (local_d0 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar5 = uVar5 + 1;
          puVar8 = puVar8 + 2;
        } while (puVar8 != local_130);
        iVar7 = *(int *)(local_150 + 0x18);
        lVar4 = local_150;
        lVar6 = local_148;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953f75e FUN_14953f75e body=109 status=ok
// SIG undefined FUN_14953f75e(void)

void FUN_14953f75e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 1U - iVar1) {
      FUN_1495487ae(param_1,iVar1);
    }
    FUN_1495487a0((longlong)iVar1 * 0x58 + *param_1,1U - iVar1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_14954883e(param_1,iVar1 + -1);
  FUN_14954888e(param_1);
  return;
}



// FUNCTION 14953f7cc FUN_14953f7cc body=107 status=ok
// SIG undefined FUN_14953f7cc(void)

void FUN_14953f7cc(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  FUN_149445212(param_3);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar3 = FUN_146719588();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_1c,uVar3,uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953f84c FUN_14953f84c body=102 status=ok
// SIG undefined FUN_14953f84c(void)

undefined8 FUN_14953f84c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_1411f0380();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14953f885;
    }
  }
  lVar3 = 0;
LAB_14953f885:
  lVar1 = FUN_145a92b78();
  if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 14953f8b6 FUN_14953f8b6 body=100 status=ok
// SIG undefined FUN_14953f8b6(void)

void FUN_14953f8b6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_14953bb38(param_1,param_3);
  FUN_14953f91a(param_1);
  return;
}



// FUNCTION 14953f91a FUN_14953f91a body=297 status=ok
// SIG undefined FUN_14953f91a(void)

void FUN_14953f91a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  FUN_1492dc406();
  iVar3 = *(int *)(lVar4 + 8);
  if (iVar3 < 1) goto LAB_14953f949;
  FUN_1446f470e(&local_30,L"PropertyValues",1);
  FUN_14953f75e(param_1 + 0x28);
  **(undefined8 **)(param_1 + 0x28) = local_30;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = FUN_14671ab78();
  FUN_14953db29(&local_40,uVar6,uVar7);
  plVar1 = local_38;
  *(undefined8 *)(param_1 + 0x50) = local_40;
  local_40 = 0;
  plVar5 = *(longlong **)(param_1 + 0x58);
  if (local_38 == plVar5) {
LAB_14953fa04:
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
  }
  else {
    local_38 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x58) = plVar1;
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
      goto LAB_14953fa04;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  uVar7 = FUN_14671ab78();
  (**(code **)(*plVar5 + 8))(plVar5,uVar7,iVar3);
LAB_14953f949:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14953fa44 FUN_14953fa44 body=633 status=ok
// SIG undefined FUN_14953fa44(void)

ulonglong FUN_14953fa44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x10);
  local_f8 = param_1;
  local_f0 = param_4;
  FUN_1492dc406();
  if ((int)plVar3[1] < 1) {
    uVar5 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    local_100 = plVar3;
    do {
      local_a0 = *(undefined8 *)(*plVar3 + uVar5 * 8);
      FUN_145715fae(local_c0,&local_a0);
      local_68 = L"LinkLinkFormat";
      local_60 = 0xe;
      FUN_1446e940c(local_e4,&local_68);
      local_68 = L"MovieSceneLiveLinkSubSectionBasicRole";
      local_60 = 0x25;
      FUN_1446e940c(local_e8,&local_68);
      FUN_140208bae(local_e0,local_e8,local_e4,&DAT_149e19f2c);
      FUN_14023409e(&local_d0,local_e0,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_c0);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78,&local_88);
      local_98 = local_d0;
      local_90 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_b0,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      plVar3 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_c0[0] != (longlong *)0x0) {
        (**(code **)(*local_c0[0] + 0x10))();
      }
      plVar3 = local_100;
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      FUN_140f937a0(local_f0,*(longlong *)(*(longlong *)(local_f8 + 0x28) + 8) + lVar4);
      if (local_b0[0] != (longlong *)0x0) {
        (**(code **)(*local_b0[0] + 0x10))();
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x110;
    } while ((longlong)uVar5 < (longlong)(int)plVar3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953fcbe FUN_14953fcbe body=93 status=ok
// SIG undefined FUN_14953fcbe(void)

void FUN_14953fcbe(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x50);
  local_1c = param_2;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar3 = FUN_14671ab78();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_1c,uVar3,uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953fd42 FUN_14953fd42 body=156 status=ok
// SIG undefined FUN_14953fd42(void)

void FUN_14953fd42(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_14953bb38(param_1,param_3);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)plVar2[0x22];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      plVar4 = (longlong *)plVar2[0x22];
    }
  }
  uVar3 = (**(code **)(*plVar4 + 0x2a8))();
  FUN_14953fdde(param_1,uVar3);
  return;
}



// FUNCTION 14953fdde FUN_14953fdde body=504 status=ok
// SIG undefined FUN_14953fdde(void)

void FUN_14953fdde(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  int local_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14954040e(0,param_2,1);
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)plVar3[0x22];
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar7 = (longlong *)plVar3[0x22];
    }
  }
  uVar6 = (**(code **)(*plVar7 + 0x2a8))();
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    local_88 = (longlong *)(param_1 + 0x50);
    lVar10 = (longlong)*(int *)(param_1 + 0x30) * 0x58;
    do {
      FUN_1400021e4(puVar8,&local_80);
      plVar3 = local_80;
      uVar4 = *puVar8;
      local_70 = (void *)0x0;
      lVar9 = (longlong)local_78;
      local_68 = local_78;
      if (lVar9 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_78,0);
        memcpy(local_70,plVar3,lVar9 * 2);
      }
      local_60 = uVar4;
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8(local_80);
      }
      FUN_149539448(&local_70,uVar6);
      FUN_14953db29(&local_80,uVar6,puVar8);
      plVar3 = local_80;
      (**(code **)(*local_80 + 8))(local_80,uVar6);
      iVar2 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_149544d00(local_88,iVar2);
      }
      lVar9 = *local_88;
      *(longlong **)(lVar9 + (longlong)iVar2 * 0x10) = plVar3;
      lVar5 = CONCAT44(uStack_74,local_78);
      *(longlong *)(lVar9 + 8 + (longlong)iVar2 * 0x10) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        plVar3 = (longlong *)CONCAT44(uStack_74,local_78);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar3 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar8 = puVar8 + 0xb;
      lVar10 = lVar10 + -0x58;
    } while (lVar10 != 0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14953ffd8 FUN_14953ffd8 body=1077 status=ok
// SIG undefined FUN_14953ffd8(void)

int FUN_14953ffd8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  wchar_t *_Src;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_178 [32];
  wchar_t **local_158;
  int local_144;
  undefined8 local_140;
  undefined8 *local_138;
  longlong local_130;
  longlong local_128;
  undefined8 *local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0 [2];
  wchar_t *local_e0 [2];
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  int local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = param_4;
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
    iVar8 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    local_138 = puVar7 + (longlong)*(int *)(param_1 + 0x30) * 0xb;
    iVar8 = 0;
    local_130 = param_1;
    do {
      plVar2 = *(longlong **)(local_130 + 0x38);
      if (plVar2 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)plVar2[0x22];
        if (plVar6 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 1000))(plVar2);
          plVar6 = (longlong *)plVar2[0x22];
        }
      }
      uVar5 = (**(code **)(*plVar6 + 0x2a8))();
      FUN_1400021e4(puVar7,&local_88);
      _Src = local_88;
      uVar3 = *puVar7;
      local_d0 = (void *)0x0;
      lVar10 = (longlong)local_80[0];
      local_c8 = local_80[0];
      if (lVar10 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_1446dd670(&local_d0,local_80[0],0);
        memcpy(local_d0,_Src,lVar10 * 2);
      }
      local_c0 = uVar3;
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8(local_88);
      }
      lVar10 = FUN_149539448(&local_d0,uVar5);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x30) < 2) {
          FUN_145715fae(&local_88,puVar7);
          local_158 = &local_88;
          iVar4 = FUN_144541c30(lVar10,puVar7,0,local_140);
          if (local_88 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_88 + 0x10))();
          }
          iVar8 = iVar8 + iVar4;
        }
        else {
          uVar11 = 0;
          local_128 = lVar10;
          local_120 = puVar7;
          do {
            local_144 = iVar8;
            FUN_145715fae(local_f0,puVar7);
            local_88 = L"LiveLinkRecordedPropertyName";
            local_80[0] = 0x1c;
            FUN_1446e940c(local_114,&local_88);
            local_88 = L"MovieSceneLiveLinkSubSectionProperties";
            local_80[0] = 0x26;
            FUN_1446e940c(local_118,&local_88);
            FUN_140208bae(local_110,local_118,local_114,L"{0}[{1}]");
            FUN_14023409e(&local_100,local_110,1);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(local_78,local_f0);
            local_68 = 0;
            local_58 = 0;
            local_50 = 0;
            local_a0 = &local_48;
            local_a8 = &local_88;
            local_60 = uVar11;
            FUN_14010d304(&local_98,&local_a8);
            local_b8 = local_100;
            local_b0 = local_f8;
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_e0,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            puVar7 = local_120;
            lVar10 = local_128;
            iVar8 = local_144;
            lVar9 = 0x30;
            do {
              plVar2 = *(longlong **)((longlong)local_80 + lVar9 + -8);
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x10))();
                *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
                *(undefined4 *)((longlong)local_80 + lVar9) = 0;
              }
              plVar2 = local_f8;
              lVar9 = lVar9 + -0x20;
            } while (lVar9 != -0x10);
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_f8 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            if (local_f0[0] != (longlong *)0x0) {
              (**(code **)(*local_f0[0] + 0x10))();
            }
            if (local_110[0] != (longlong *)0x0) {
              (**(code **)(*local_110[0] + 0x10))();
            }
            local_158 = local_e0;
            iVar4 = FUN_144541c30(lVar10,puVar7,uVar11 & 0xffffffff,local_140);
            if (local_e0[0] != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_e0[0] + 0x10))();
            }
            iVar8 = iVar8 + iVar4;
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar11 < (longlong)*(int *)(lVar10 + 0x30));
        }
      }
      if (local_d0 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar7 = puVar7 + 0xb;
    } while (puVar7 != local_138);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 14954040e FUN_14954040e body=620 status=ok
// SIG undefined FUN_14954040e(void)

void FUN_14954040e(longlong param_1,longlong param_2,char param_3,undefined8 *param_4)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *_Str;
  bool bVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  wchar_t *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_2 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 1;
  local_4a = 0;
  local_98 = param_1;
  local_60 = param_2;
  FUN_144a2daf0(&local_60);
  if (local_58 != 0) {
    local_90 = local_98 + 0x28;
    do {
      if ((param_3 == '\0') || ((*(byte *)(local_58 + 0x3c) & 2) != 0)) {
        local_70 = (undefined2 *)0x0;
        local_68 = *(int *)(param_4 + 1);
        lVar5 = (longlong)local_68;
        _Src = (void *)*param_4;
        if (lVar5 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,_Src,lVar5 * 2);
          if (1 < local_68) {
            thunk_FUN_14047a987(&local_70,L".Preview",1);
          }
        }
        if (local_58 == 0) {
          local_88 = 0;
        }
        else {
          local_88 = *(undefined8 *)(local_58 + 0x20);
        }
        FUN_1400021e4(&local_88,&local_80);
        _Str = L"";
        if (local_78 != 0) {
          _Str = local_80;
        }
        wcslen(_Str);
        FUN_1400020e8(&local_70,_Str);
        if (local_80 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        cVar1 = FUN_14954067c(local_58);
        lVar5 = local_58;
        if (cVar1 == '\0') {
          if (local_58 != 0) {
            lVar6 = *(longlong *)(local_58 + 8);
            lVar2 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar2 + 8) == 0) {
              bVar7 = lVar6 != 0;
              if (lVar6 != lVar2 && bVar7) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar7 = lVar6 != 0;
                  if (lVar6 == lVar2) break;
                } while (lVar6 != 0);
              }
              if (bVar7) goto LAB_14954065b;
            }
            else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_14954065b:
              FUN_14954040e(local_98,*(undefined8 *)(lVar5 + 0x70),0,&local_70);
            }
          }
        }
        else {
          puVar3 = (undefined8 *)FUN_14954095e(local_90);
          puVar4 = &DAT_149dfb77a;
          if (local_68 != 0) {
            puVar4 = local_70;
          }
          FUN_1446f470e(&local_80,puVar4);
          *puVar3 = local_80;
        }
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_58 = *(longlong *)(local_58 + 0x18);
      FUN_144a2daf0(&local_60);
    } while (local_58 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14954067c FUN_14954067c body=738 status=ok
// SIG undefined FUN_14954067c(void)

undefined8 FUN_14954067c(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a64e42();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a7452c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a49f24();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a7add4();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return 0;
    }
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar1 == DAT_14c892c5c) {
      return 1;
    }
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    if (uVar1 == DAT_14c892c2c) {
      return 1;
    }
    if (uVar1 == DAT_14c892c38) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14954095e FUN_14954095e body=64 status=ok
// SIG undefined FUN_14954095e(void)

longlong FUN_14954095e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1495487ae(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_1495487a0(lVar2,1);
  return lVar2;
}



// FUNCTION 14954099e FUN_14954099e body=194 status=ok
// SIG undefined FUN_14954099e(void)

void FUN_14954099e(longlong param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x58);
  local_4c = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar8);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      plVar5 = *(longlong **)(param_1 + 0x38);
      if (plVar5 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)plVar5[0x22];
        if (plVar7 == (longlong *)0x0) {
          (**(code **)(*plVar5 + 1000))(plVar5);
          plVar7 = (longlong *)plVar5[0x22];
        }
      }
      uVar6 = (**(code **)(*plVar7 + 0x2a8))();
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_4c,uVar6,uVar4);
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149540a62 FUN_149540a62 body=72 status=ok
// SIG undefined FUN_149540a62(void)

void FUN_149540a62(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 149540ab2 FUN_149540ab2 body=75 status=ok
// SIG undefined FUN_149540ab2(void)

bool FUN_149540ab2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_149540aeb;
    }
  }
  lVar2 = 0;
LAB_149540aeb:
  lVar1 = FUN_145ba8912();
  return lVar2 == lVar1;
}



// FUNCTION 149540afe FUN_149540afe body=62 status=ok
// SIG undefined FUN_149540afe(void)

void FUN_149540afe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145ba8912();
  FUN_147f81e20(param_1,uVar1,0,8,0,0,0,0);
  return;
}



// FUNCTION 149540b3c FUN_149540b3c body=120 status=ok
// SIG undefined FUN_149540b3c(void)

longlong FUN_149540b3c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144540be0(local_d0,param_3,param_1 + -0x128);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_149544bd8(param_2,local_d0);
  FUN_14953c336(local_d0);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149540bbb FUN_149540bbb body=365 status=ok
// SIG undefined FUN_149540bbb(void)

void FUN_149540bbb(undefined8 *param_1,int *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double local_50;
  double local_48;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_98;
  lVar4 = 0;
  do {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    FUN_1400f01f6((longlong)iVar1 * 0x110 + *param_3,*param_1,(longlong)&local_3c + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  auVar2._8_4_ = SUB84((double)local_38,0);
  auVar2._0_8_ = (double)local_3c;
  auVar2._12_4_ = (int)((ulonglong)(double)local_38 >> 0x20);
  *(undefined1 (*) [16])(param_4 + 4) = auVar2;
  param_4[6] = (double)local_34;
  param_4[7] = 0;
  lVar4 = 0;
  do {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    FUN_1400f01f6((longlong)iVar1 * 0x110 + *param_3,*param_1,(longlong)&local_3c + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  local_48 = (double)local_3c;
  local_50 = (double)local_34;
  local_58 = (double)local_38;
  FUN_144a7484c(&local_58,&local_78);
  *param_4 = local_78;
  param_4[1] = uStack_70;
  param_4[2] = local_68;
  param_4[3] = uStack_60;
  lVar4 = 0;
  do {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    FUN_1400f01f6((longlong)iVar1 * 0x110 + *param_3,*param_1,(longlong)&local_3c + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  auVar3._8_4_ = SUB84((double)local_38,0);
  auVar3._0_8_ = (double)local_3c;
  auVar3._12_4_ = (int)((ulonglong)(double)local_38 >> 0x20);
  *(undefined1 (*) [16])(param_4 + 8) = auVar3;
  param_4[10] = (double)local_34;
  param_4[0xb] = 0;
  if ((local_30 ^ (ulonglong)local_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149540d29 FUN_149540d29 body=357 status=ok
// SIG undefined FUN_149540d29(void)

void FUN_149540d29(int param_1,int *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *param_2;
  lVar3 = (longlong)iVar1 * 0x110;
  lVar4 = 0;
  lVar2 = (longlong)param_1 * 0x1c;
  do {
    (&local_48)[lVar4] = (double)*(float *)(*(longlong *)(*param_3 + 0x68 + lVar3) + lVar2);
    *param_2 = iVar1 + 1 + (int)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x110;
  } while (lVar4 != 3);
  param_4[4] = CONCAT44(local_48._4_4_,(undefined4)local_48);
  param_4[5] = CONCAT44(uStack_3c,uStack_40);
  param_4[6] = CONCAT44(uStack_34,local_38);
  param_4[7] = 0;
  iVar1 = *param_2;
  lVar3 = (longlong)iVar1 * 0x110;
  lVar4 = 0;
  do {
    (&local_48)[lVar4] = (double)*(float *)(*(longlong *)(*param_3 + 0x68 + lVar3) + lVar2);
    *param_2 = iVar1 + 1 + (int)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x110;
  } while (lVar4 != 3);
  local_60 = uStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = local_38;
  uStack_54 = uStack_34;
  FUN_144a7484c();
  *param_4 = local_88;
  param_4[1] = uStack_80;
  param_4[2] = local_78;
  param_4[3] = uStack_70;
  iVar1 = *param_2;
  lVar3 = (longlong)iVar1 * 0x110;
  lVar4 = 0;
  do {
    (&local_48)[lVar4] = (double)*(float *)(*(longlong *)(*param_3 + 0x68 + lVar3) + lVar2);
    *param_2 = iVar1 + 1 + (int)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x110;
  } while (lVar4 != 3);
  *(undefined4 *)(param_4 + 8) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_4 + 0x44) = local_48._4_4_;
  *(undefined4 *)(param_4 + 9) = uStack_40;
  *(undefined4 *)((longlong)param_4 + 0x4c) = uStack_3c;
  param_4[10] = CONCAT44(uStack_34,local_38);
  param_4[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149540e90 FUN_149540e90 body=65 status=ok
// SIG undefined FUN_149540e90(void)

void FUN_149540e90(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = *(int *)(*(longlong *)(param_1 + 8) + 0x10) / 9;
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
    return;
  }
  return;
}



// FUNCTION 149540ed2 FUN_149540ed2 body=324 status=ok
// SIG undefined FUN_149540ed2(void)

void FUN_149540ed2(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_94 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0x3ff00000;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8 = 0x3ff0000000000000;
      uStack_b0 = 0x3ff0000000000000;
      local_a8 = 0x3ff0000000000000;
      uStack_a0 = 0;
      FUN_149540d29(param_2,&local_94,*(longlong *)(param_1 + 8) + 8,&local_f8);
      local_108 = &local_f8;
      FUN_149541018(param_1 + 0x10,iVar1,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149541018 FUN_149541018 body=412 status=ok
// SIG undefined FUN_149541018(void)

void FUN_149541018(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 == 0) goto LAB_149541052;
  lVar4 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar8) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar8 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (!bVar8) goto LAB_1495410cf;
LAB_14954110d:
    lVar4 = FUN_14953e8de(local_68);
    if (lVar4 == 0) {
      puVar7 = (ulonglong *)0x0;
    }
    else {
      puVar7 = (ulonglong *)((longlong)*(int *)(lVar4 + 0x44) + param_4 + local_40);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar2 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar7;
    local_70 = bVar1;
    FUN_140d50566(&local_88,param_2);
    if ((int)local_80[1] == 0) goto LAB_149541052;
    if ((local_70 & 1) == 0) {
      uVar5 = *local_80;
    }
    else {
      uVar5 = *local_80;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)local_80 + ((longlong)uVar5 >> 0x18);
      }
    }
    puVar6 = (undefined8 *)((longlong)local_78 * (longlong)param_2 + uVar5);
  }
  else {
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_14954110d;
LAB_1495410cf:
    lVar2 = FUN_14953e8de(local_68);
    if (lVar2 == 0) goto LAB_149541052;
    puVar6 = (undefined8 *)
             ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
             (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40);
  }
  if (puVar6 != (undefined8 *)0x0) {
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar6 = *param_5;
      param_5 = param_5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
LAB_149541052:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495411b6 FUN_1495411b6 body=326 status=ok
// SIG undefined FUN_1495411b6(void)

void FUN_1495411b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_94 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0x3ff00000;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8 = 0x3ff0000000000000;
      uStack_b0 = 0x3ff0000000000000;
      local_a8 = 0x3ff0000000000000;
      uStack_a0 = 0;
      FUN_149540bbb(param_2,&local_94,*(longlong *)(param_1 + 8) + 8,&local_f8);
      local_108 = &local_f8;
      FUN_149541018(param_1 + 0x10,iVar1,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495412fe FUN_1495412fe body=71 status=ok
// SIG undefined FUN_1495412fe(void)

void FUN_1495412fe(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_149539448(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1446e6bbc();
  }
  *(int *)(param_1 + 0x28) = param_3;
  FUN_149539b18(*(longlong *)(param_1 + 8) + 8,param_3 * 9);
  FUN_149541346(param_1 + 0x30,*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 149541346 FUN_149541346 body=122 status=ok
// SIG undefined FUN_149541346(void)

void FUN_149541346(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14954894a(param_1,iVar1);
    }
    FUN_149548934((longlong)iVar1 * 0xa0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1495489de(param_1,param_2,iVar1 - param_2);
    FUN_149548a44(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1495413c2 FUN_1495413c2 body=178 status=ok
// SIG undefined FUN_1495413c2(void)

void FUN_1495413c2(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_b8 = param_4;
      FUN_149541476(param_1 + 0x10,local_a8,uVar2 & 0xffffffff,param_3);
      FUN_149541654(*(longlong *)(param_1 + 0x30) + lVar1,local_a8,*param_2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0xa0;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149541476 FUN_149541476 body=477 status=ok
// SIG undefined FUN_149541476(void)

undefined8 *
FUN_149541476(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,longlong param_5
             )

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68,param_4);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(lVar2 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar9 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar9) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar9 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (bVar9) goto LAB_1495415a5;
LAB_149541567:
      lVar2 = FUN_14953e8de(local_68);
      if ((lVar2 == 0) ||
         (puVar6 = (undefined8 *)
                   ((longlong)param_3 * (longlong)*(int *)(lVar2 + 0x34) +
                   (longlong)*(int *)(lVar2 + 0x44) + param_5 + local_40),
         puVar6 == (undefined8 *)0x0)) goto LAB_1495414b4;
LAB_149541629:
      puVar7 = param_2;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_1495414e7;
    }
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_149541567;
LAB_1495415a5:
    lVar4 = FUN_14953e8de(local_68);
    if (lVar4 == 0) {
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)((longlong)*(int *)(lVar4 + 0x44) + param_5 + local_40);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar2 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar8;
    local_70 = bVar1;
    FUN_140d50566(&local_88,param_3);
    if ((int)local_80[1] != 0) {
      if ((local_70 & 1) == 0) {
        uVar5 = *local_80;
      }
      else {
        uVar5 = *local_80;
        if ((uVar5 & 1) != 0) {
          uVar5 = (longlong)local_80 + ((longlong)uVar5 >> 0x18);
        }
      }
      puVar6 = (undefined8 *)((longlong)local_78 * (longlong)param_3 + uVar5);
      if (puVar6 != (undefined8 *)0x0) goto LAB_149541629;
    }
  }
LAB_1495414b4:
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
LAB_1495414e7:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149541654 FUN_149541654 body=72 status=ok
// SIG undefined FUN_149541654(void)

void FUN_149541654(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14753e8f2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_3;
  FUN_149542df6(param_1,param_2);
  return;
}



// FUNCTION 14954169c FUN_14954169c body=589 status=ok
// SIG undefined FUN_14954169c(void)

void FUN_14954169c(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  wchar_t *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  char local_84;
  ulonglong local_60;
  
  uVar1 = DAT_14c872be8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = L"ProcessingTransforms";
  local_b8 = 0x14;
  FUN_1446e940c(local_d4,&local_c0);
  local_c0 = L"TakeRecorderLiveLink";
  local_b8 = 0x14;
  FUN_1446e940c(local_d8,&local_c0);
  FUN_140208bae(local_d0,local_d8,local_d4,L"Processing Transforms");
  local_e8 = uVar1;
  FUN_140997f46(&local_c0,(float)*(int *)(param_1 + 0x28) + 1.0,local_d0,1);
  FUN_140997a0e(&local_c0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar4 = (longlong)*(int *)(param_1 + 0x38) * 0xa0;
    iVar2 = 0;
    do {
      FUN_144a5dc74(local_d0);
      FUN_140997b30(&local_c0,0x3f800000,local_d0);
      if (local_d0[0] != (longlong *)0x0) {
        (**(code **)(*local_d0[0] + 0x10))();
      }
      FUN_1495418ea(lVar5,iVar2,*(longlong *)(param_1 + 8) + 8);
      iVar2 = iVar2 + 9;
      lVar5 = lVar5 + 0xa0;
      lVar4 = lVar4 + -0xa0;
    } while (lVar4 != 0);
  }
  FUN_144a5dc74(local_d0);
  FUN_140997b30(&local_c0,0x3f800000,local_d0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  if (param_2 == '\0') {
    if (iVar2 != 0) {
      lVar5 = (longlong)iVar2 * 0x110;
      do {
        thunk_FUN_147526dac(plVar3,0);
        plVar3 = plVar3 + 0x22;
        lVar5 = lVar5 + -0x110;
      } while (lVar5 != 0);
    }
  }
  else if (iVar2 != 0) {
    lVar5 = (longlong)iVar2 * 0x110;
    do {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_3);
      plVar3 = plVar3 + 0x22;
      lVar5 = lVar5 + -0x110;
    } while (lVar5 != 0);
  }
  FUN_140997a5c(&local_c0);
  if (local_84 == '\x01') {
    local_84 = '\0';
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_c0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c0 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495418ea FUN_1495418ea body=577 status=ok
// SIG undefined FUN_1495418ea(void)

void FUN_1495418ea(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar1 = (longlong)param_2 * 0x110;
    FUN_14752e32e(*param_3 + lVar1,param_1,param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) < 0) {
      FUN_140eb5d8c(param_1 + 0x10,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x110,param_1,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_140eb5d8c(param_1 + 0x20,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x220,param_1,param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) < 0) {
      FUN_140eb5d8c(param_1 + 0x30,0);
    }
    FUN_14954313e(param_1,param_2 + 3,param_3);
    FUN_14752e32e((longlong)(param_2 + 3) * 0x110 + *param_3,param_1,param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) < 0) {
      FUN_140eb5d8c(param_1 + 0x40,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x440,param_1,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_140eb5d8c(param_1 + 0x50,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x550,param_1,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) < 0) {
      FUN_140eb5d8c(param_1 + 0x60,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x660,param_1,param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) < 0) {
      FUN_140eb5d8c(param_1 + 0x70,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x770,param_1,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) < 0) {
      FUN_140eb5d8c(param_1 + 0x80,0);
    }
    FUN_14752e32e(*param_3 + lVar1 + 0x880,param_1,param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) < 0) {
      FUN_140eb5d8c(param_1 + 0x90,0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140aba11c(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 149541b2c FUN_149541b2c body=38 status=ok
// SIG undefined FUN_149541b2c(void)

undefined8 FUN_149541b2c(undefined8 param_1,int param_2)

{
  FUN_14953c336();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149541b58 FUN_149541b58 body=57 status=ok
// SIG undefined FUN_149541b58(void)

void FUN_149541b58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e6c0 == 0) {
    uVar1 = FUN_14596edd1();
    DAT_14cc1e6c0 = FUN_140002ddd(FUN_14673f3fb,uVar1,L"MovieSceneLiveLinkSectionTemplate");
  }
  return;
}



// FUNCTION 149541b92 FUN_149541b92 body=54 status=ok
// SIG undefined FUN_149541b92(void)

longlong FUN_149541b92(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149541bd4 FUN_149541bd4 body=48 status=ok
// SIG undefined FUN_149541bd4(void)

longlong FUN_149541bd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140885ffc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149541c0c FUN_149541c0c body=54 status=ok
// SIG undefined FUN_149541c0c(void)

void FUN_149541c0c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459072a9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149541c64 FUN_149541c64 body=19 status=ok
// SIG undefined FUN_149541c64(void)

undefined1 FUN_149541c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14953cd0c(param_3);
  return 1;
}



// FUNCTION 149541c86 FUN_149541c86 body=63 status=ok
// SIG undefined FUN_149541c86(void)

undefined1 FUN_149541c86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149541db0(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 149541cee FUN_149541cee body=59 status=ok
// SIG undefined FUN_149541cee(void)

undefined8 FUN_149541cee(longlong *param_1)

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



// FUNCTION 149541d3a FUN_149541d3a body=40 status=ok
// SIG undefined FUN_149541d3a(void)

void FUN_149541d3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14953c336(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 149541db0 FUN_149541db0 body=215 status=ok
// SIG undefined FUN_149541db0(void)

longlong FUN_149541db0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_1492e188e(param_1 + 0x38,param_2 + 0x38);
  FUN_1447cd5a6(param_1 + 0x70,param_2 + 0x70);
  FUN_149541e88(param_1 + 0x80,param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  FUN_149541ee8(param_1 + 0x98,param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar4 = *(longlong *)(param_2 + 0xb0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar4;
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



// FUNCTION 149541e88 FUN_149541e88 body=95 status=ok
// SIG undefined FUN_149541e88(void)

undefined8 * FUN_149541e88(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149541c0c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149541f48(param_1,iVar1);
      FUN_149541faa(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149541ee8 FUN_149541ee8 body=95 status=ok
// SIG undefined FUN_149541ee8(void)

undefined8 * FUN_149541ee8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c08e63(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149542732(param_1,iVar1);
      FUN_149542794(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149541f48 FUN_149541f48 body=98 status=ok
// SIG undefined FUN_149541f48(void)

void FUN_149541f48(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149541faa FUN_149541faa body=52 status=ok
// SIG undefined FUN_149541faa(void)

void FUN_149541faa(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149541fde(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 149541fde FUN_149541fde body=77 status=ok
// SIG undefined FUN_149541fde(void)

undefined8 * FUN_149541fde(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14954202c(param_1,iVar1,0);
    FUN_14954209b(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14954202c FUN_14954202c body=111 status=ok
// SIG undefined FUN_14954202c(void)

void FUN_14954202c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14954209b FUN_14954209b body=52 status=ok
// SIG undefined FUN_14954209b(void)

void FUN_14954209b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1495420d0(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1495420d0 FUN_1495420d0 body=383 status=ok
// SIG undefined FUN_1495420d0(void)

undefined8 * FUN_1495420d0(undefined8 *param_1,undefined8 *param_2)

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
    FUN_149542250(param_1 + 1,iVar1,0);
    FUN_1495422c2(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1495422fe(param_1 + 3,iVar1,0);
    FUN_149542370(param_1[3],uVar2,iVar1);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_149542520(param_1 + 5,iVar1,0);
    FUN_149542596(param_1[5],uVar2,iVar1);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1495425d2(param_1 + 7,iVar1,0);
    FUN_149542648(param_1[7],uVar2,iVar1);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar2 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_149542684(param_1 + 9,iVar1,0);
    FUN_1495426f6(param_1[9],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149542250 FUN_149542250 body=114 status=ok
// SIG undefined FUN_149542250(void)

void FUN_149542250(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1495422c2 FUN_1495422c2 body=60 status=ok
// SIG undefined FUN_1495422c2(void)

void FUN_1495422c2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140737604(param_1,param_2);
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 1495422fe FUN_1495422fe body=114 status=ok
// SIG undefined FUN_1495422fe(void)

void FUN_1495422fe(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149542370 FUN_149542370 body=60 status=ok
// SIG undefined FUN_149542370(void)

void FUN_149542370(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1495423ac(param_1,param_2);
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 1495423ac FUN_1495423ac body=371 status=ok
// SIG undefined FUN_1495423ac(void)

undefined8 * FUN_1495423ac(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a4ab3d0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar2 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xc,iVar1,0);
    FUN_140b8566a(param_1[0xc],uVar3,iVar1);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 149542520 FUN_149542520 body=118 status=ok
// SIG undefined FUN_149542520(void)

void FUN_149542520(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x108,8);
    iVar2 = (int)(uVar1 / 0x108);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x108,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149542596 FUN_149542596 body=60 status=ok
// SIG undefined FUN_149542596(void)

void FUN_149542596(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1480d2cb8(param_1,param_2);
    param_1 = param_1 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return;
}



// FUNCTION 1495425d2 FUN_1495425d2 body=118 status=ok
// SIG undefined FUN_1495425d2(void)

void FUN_1495425d2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x108,8);
    iVar2 = (int)(uVar1 / 0x108);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x108,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149542648 FUN_149542648 body=60 status=ok
// SIG undefined FUN_149542648(void)

void FUN_149542648(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1475b14f8(param_1,param_2);
    param_1 = param_1 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return;
}



// FUNCTION 149542684 FUN_149542684 body=114 status=ok
// SIG undefined FUN_149542684(void)

void FUN_149542684(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1495426f6 FUN_1495426f6 body=60 status=ok
// SIG undefined FUN_1495426f6(void)

void FUN_1495426f6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1475d3b00(param_1,param_2);
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 149542732 FUN_149542732 body=98 status=ok
// SIG undefined FUN_149542732(void)

void FUN_149542732(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149542794 FUN_149542794 body=45 status=ok
// SIG undefined FUN_149542794(void)

void FUN_149542794(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
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
  }
  return;
}



// FUNCTION 149542820 FUN_149542820 body=54 status=ok
// SIG undefined FUN_149542820(void)

undefined1 FUN_149542820(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149542934(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14954287e FUN_14954287e body=59 status=ok
// SIG undefined FUN_14954287e(void)

undefined8 FUN_14954287e(longlong *param_1)

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



// FUNCTION 1495428c4 FUN_1495428c4 body=34 status=ok
// SIG undefined FUN_1495428c4(void)

void FUN_1495428c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14953e150(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 149542934 FUN_149542934 body=96 status=ok
// SIG undefined FUN_149542934(void)

undefined8 * FUN_149542934(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_149542994(param_1 + 1,param_2 + 1);
  FUN_1495429f4(param_1 + 3,param_2 + 3);
  FUN_149542a54(param_1 + 5,param_2 + 5);
  FUN_149542ab4(param_1 + 7,param_2 + 7);
  FUN_149542b14(param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 149542994 FUN_149542994 body=95 status=ok
// SIG undefined FUN_149542994(void)

undefined8 * FUN_149542994(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145cd38e0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149542250(param_1,iVar1);
      FUN_1495422c2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1495429f4 FUN_1495429f4 body=95 status=ok
// SIG undefined FUN_1495429f4(void)

undefined8 * FUN_1495429f4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149542b73(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1495422fe(param_1,iVar1);
      FUN_149542370(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149542a54 FUN_149542a54 body=95 status=ok
// SIG undefined FUN_149542a54(void)

undefined8 * FUN_149542a54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149542b9c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149542520(param_1,iVar1);
      FUN_149542596(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149542ab4 FUN_149542ab4 body=95 status=ok
// SIG undefined FUN_149542ab4(void)

undefined8 * FUN_149542ab4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149542bc5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1495425d2(param_1,iVar1);
      FUN_149542648(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149542b14 FUN_149542b14 body=95 status=ok
// SIG undefined FUN_149542b14(void)

undefined8 * FUN_149542b14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149542bee(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149542684(param_1,iVar1);
      FUN_1495426f6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149542b73 FUN_149542b73 body=41 status=ok
// SIG undefined FUN_149542b73(void)

void FUN_149542b73(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14156b236(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 149542b9c FUN_149542b9c body=41 status=ok
// SIG undefined FUN_149542b9c(void)

void FUN_149542b9c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14581ef76(param_1);
    param_1 = param_1 + 0x108;
  }
  return;
}



// FUNCTION 149542bc5 FUN_149542bc5 body=41 status=ok
// SIG undefined FUN_149542bc5(void)

void FUN_149542bc5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140bb7e7c(param_1);
    param_1 = param_1 + 0x108;
  }
  return;
}



// FUNCTION 149542bee FUN_149542bee body=41 status=ok
// SIG undefined FUN_149542bee(void)

void FUN_149542bee(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e127fe(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 149542c28 FUN_149542c28 body=44 status=ok
// SIG undefined FUN_149542c28(void)

void FUN_149542c28(undefined8 param_1,longlong *param_2)

{
  FUN_1459072a9(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149542c6a FUN_149542c6a body=54 status=ok
// SIG undefined FUN_149542c6a(void)

undefined1 FUN_149542c6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149542d64(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149542cc8 FUN_149542cc8 body=59 status=ok
// SIG undefined FUN_149542cc8(void)

undefined8 FUN_149542cc8(longlong *param_1)

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



// FUNCTION 149542d64 FUN_149542d64 body=95 status=ok
// SIG undefined FUN_149542d64(void)

undefined8 * FUN_149542d64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459072a9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14954202c(param_1,iVar1);
      FUN_14954209b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149542dc4 FUN_149542dc4 body=50 status=ok
// SIG undefined FUN_149542dc4(void)

void FUN_149542dc4(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1459072a9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149542df6 FUN_149542df6 body=839 status=ok
// SIG undefined FUN_149542df6(void)

void FUN_149542df6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar2 = (double)param_2[4];
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x10,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)dVar2;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  dVar2 = (double)param_2[5];
  iVar3 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x20,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)dVar2;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  dVar2 = (double)param_2[6];
  iVar3 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x30,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)dVar2;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1448052ee(&local_78,&local_90);
  iVar3 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x40,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)local_80;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  iVar3 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x50,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)local_90;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  iVar3 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x60,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)local_88;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  dVar2 = (double)param_2[8];
  iVar3 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x70,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)dVar2;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  dVar2 = (double)param_2[9];
  iVar3 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x80,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)dVar2;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  dVar2 = (double)param_2[10];
  iVar3 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
    FUN_14753f2b0((longlong *)(param_1 + 0x90),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x90);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(float *)(lVar4 + lVar5) = (float)dVar2;
  puVar1 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x14 + lVar5) = 0x200000000;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954313e FUN_14954313e body=679 status=ok
// SIG undefined FUN_14954313e(void)

void FUN_14954313e(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = (longlong)*(int *)(*param_3 + 0x70 + (longlong)param_2 * 0x110);
  if (lVar2 < 1) {
    local_68 = (double)**(float **)(param_1 + 0x40);
    uStack_70 = (double)**(float **)(param_1 + 0x60);
    local_78 = (double)**(float **)(param_1 + 0x50);
    FUN_144a7484c(&local_78,&local_58);
    FUN_1449413b4(&local_58,&local_78);
    **(float **)(param_1 + 0x40) = (float)local_78;
    **(float **)(param_1 + 0x50) = (float)uStack_70;
    **(float **)(param_1 + 0x60) = (float)local_68;
  }
  else {
    lVar1 = *(longlong *)(*param_3 + (longlong)param_2 * 0x110 + 0x68);
    local_68 = (double)**(float **)(param_1 + 0x40);
    uStack_70 = (double)**(float **)(param_1 + 0x60);
    local_78 = (double)**(float **)(param_1 + 0x50);
    FUN_144a7484c(&local_78,&local_58);
    FUN_1449413b4(&local_58,&local_78);
    **(float **)(param_1 + 0x40) = (float)local_78;
    **(float **)(param_1 + 0x50) = (float)uStack_70;
    **(float **)(param_1 + 0x60) = (float)local_68;
    lVar2 = lVar2 * 0x1c;
    FUN_1467f95e0(*(undefined4 *)(lVar1 + -0x1c + lVar2),*(undefined8 *)(param_1 + 0x40));
    FUN_1467f95e0(*(undefined4 *)(lVar1 + -0x1c + lVar2),*(undefined8 *)(param_1 + 0x50));
    FUN_1467f95e0(*(undefined4 *)(lVar1 + -0x1c + lVar2),*(undefined8 *)(param_1 + 0x60));
  }
  if (1 < *(int *)(param_1 + 8)) {
    uVar3 = (ulonglong)(*(int *)(param_1 + 8) - 1);
    lVar2 = 0x1c;
    do {
      local_80 = (double)*(float *)(*(longlong *)(param_1 + 0x40) + lVar2);
      local_88 = (double)*(float *)(*(longlong *)(param_1 + 0x60) + lVar2);
      local_90 = (double)*(float *)(*(longlong *)(param_1 + 0x50) + lVar2);
      FUN_144a7484c(&local_90,&local_58);
      local_68 = (double)CONCAT44(uStack_44,local_48);
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      local_78 = (double)CONCAT44(uStack_54,local_58);
      uStack_70 = (double)CONCAT44(uStack_4c,uStack_50);
      FUN_1449413b4(&local_78,&local_58);
      *(float *)(*(longlong *)(param_1 + 0x40) + lVar2) =
           (float)(double)CONCAT44(uStack_54,local_58);
      *(float *)(*(longlong *)(param_1 + 0x50) + lVar2) =
           (float)(double)CONCAT44(uStack_4c,uStack_50);
      *(float *)(*(longlong *)(param_1 + 0x60) + lVar2) =
           (float)(double)CONCAT44(uStack_44,local_48);
      FUN_1467f95e0(*(undefined4 *)(*(longlong *)(param_1 + 0x40) + -0x1c + lVar2),
                    *(longlong *)(param_1 + 0x40) + lVar2);
      FUN_1467f95e0(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -0x1c + lVar2),
                    *(longlong *)(param_1 + 0x50) + lVar2);
      FUN_1467f95e0(*(undefined4 *)(*(longlong *)(param_1 + 0x60) + -0x1c + lVar2),
                    *(longlong *)(param_1 + 0x60) + lVar2);
      lVar2 = lVar2 + 0x1c;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495433e6 FUN_1495433e6 body=41 status=ok
// SIG undefined FUN_1495433e6(void)

void FUN_1495433e6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1415d79e2(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 149543410 FUN_149543410 body=146 status=ok
// SIG undefined FUN_149543410(void)

void FUN_149543410(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1495434a4 FUN_1495434a4 body=98 status=ok
// SIG undefined FUN_1495434a4(void)

void FUN_1495434a4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x110 + *param_1);
  FUN_149542bee(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x110 + (longlong)_Dst),(longlong)iVar2 * 0x110);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149543506 FUN_149543506 body=62 status=ok
// SIG undefined FUN_149543506(void)

void FUN_149543506(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149543544(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,8);
  }
  return;
}



// FUNCTION 149543544 FUN_149543544 body=110 status=ok
// SIG undefined FUN_149543544(void)

ulonglong FUN_149543544(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x110) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14954357d;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x110,8);
      param_2 = param_2 / 0x110;
    }
  }
LAB_14954357d:
  return param_2 & 0xffffffff;
}



// FUNCTION 1495435b2 FUN_1495435b2 body=132 status=ok
// SIG undefined FUN_1495435b2(void)

void FUN_1495435b2(longlong param_1,int param_2)

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



// FUNCTION 149543638 FUN_149543638 body=89 status=ok
// SIG undefined FUN_149543638(void)

void FUN_149543638(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1495436d0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149543692 FUN_149543692 body=62 status=ok
// SIG undefined FUN_149543692(void)

void FUN_149543692(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1495436fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1495436d0 FUN_1495436d0 body=43 status=ok
// SIG undefined FUN_1495436d0(void)

void FUN_1495436d0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1495436fc FUN_1495436fc body=93 status=ok
// SIG undefined FUN_1495436fc(void)

ulonglong FUN_1495436fc(uint param_1,uint param_2)

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



// FUNCTION 14954375a FUN_14954375a body=132 status=ok
// SIG undefined FUN_14954375a(void)

void FUN_14954375a(longlong param_1,int param_2)

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



// FUNCTION 1495437df FUN_1495437df body=41 status=ok
// SIG undefined FUN_1495437df(void)

void FUN_1495437df(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1406ed278(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 149543808 FUN_149543808 body=98 status=ok
// SIG undefined FUN_149543808(void)

void FUN_149543808(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x110 + *param_1);
  FUN_145cd38e0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x110 + (longlong)_Dst),(longlong)iVar2 * 0x110);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14954386a FUN_14954386a body=62 status=ok
// SIG undefined FUN_14954386a(void)

void FUN_14954386a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1495438a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,8);
  }
  return;
}



// FUNCTION 1495438a8 FUN_1495438a8 body=110 status=ok
// SIG undefined FUN_1495438a8(void)

ulonglong FUN_1495438a8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x110) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1495438e1;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x110,8);
      param_2 = param_2 / 0x110;
    }
  }
LAB_1495438e1:
  return param_2 & 0xffffffff;
}



// FUNCTION 149543916 FUN_149543916 body=132 status=ok
// SIG undefined FUN_149543916(void)

void FUN_149543916(longlong param_1,int param_2)

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



// FUNCTION 14954399c FUN_14954399c body=89 status=ok
// SIG undefined FUN_14954399c(void)

void FUN_14954399c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_149543a34(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1495439f6 FUN_1495439f6 body=62 status=ok
// SIG undefined FUN_1495439f6(void)

void FUN_1495439f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149543a60(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149543a34 FUN_149543a34 body=43 status=ok
// SIG undefined FUN_149543a34(void)

void FUN_149543a34(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149543a60 FUN_149543a60 body=93 status=ok
// SIG undefined FUN_149543a60(void)

ulonglong FUN_149543a60(uint param_1,uint param_2)

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



// FUNCTION 149543abe FUN_149543abe body=62 status=ok
// SIG undefined FUN_149543abe(void)

void FUN_149543abe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149543afc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 149543afc FUN_149543afc body=121 status=ok
// SIG undefined FUN_149543afc(void)

ulonglong FUN_149543afc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149543b39;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c,4);
      param_2 = param_2 / 0x1c;
    }
  }
LAB_149543b39:
  return param_2 & 0xffffffff;
}



// FUNCTION 149543b75 FUN_149543b75 body=41 status=ok
// SIG undefined FUN_149543b75(void)

void FUN_149543b75(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458f5906(param_1);
    param_1 = param_1 + 0x108;
  }
  return;
}



// FUNCTION 149543b9e FUN_149543b9e body=150 status=ok
// SIG undefined FUN_149543b9e(void)

void FUN_149543b9e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x108,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x108)) {
      uVar5 = uVar4 / 0x108 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x108,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149543c36 FUN_149543c36 body=110 status=ok
// SIG undefined FUN_149543c36(void)

void FUN_149543c36(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x108 + *param_1);
  FUN_149542b9c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x108 + (longlong)_Dst),(longlong)iVar2 * 0x108);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149543ca4 FUN_149543ca4 body=62 status=ok
// SIG undefined FUN_149543ca4(void)

void FUN_149543ca4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149543ce2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x108,8);
  }
  return;
}



// FUNCTION 149543ce2 FUN_149543ce2 body=118 status=ok
// SIG undefined FUN_149543ce2(void)

ulonglong FUN_149543ce2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x108) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149543d1f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x108,8);
      param_2 = param_2 / 0x108;
    }
  }
LAB_149543d1f:
  return param_2 & 0xffffffff;
}



// FUNCTION 149543d58 FUN_149543d58 body=132 status=ok
// SIG undefined FUN_149543d58(void)

void FUN_149543d58(longlong param_1,int param_2)

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



// FUNCTION 149543dde FUN_149543dde body=89 status=ok
// SIG undefined FUN_149543dde(void)

void FUN_149543dde(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_149543e76(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149543e38 FUN_149543e38 body=62 status=ok
// SIG undefined FUN_149543e38(void)

void FUN_149543e38(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149543ea2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149543e76 FUN_149543e76 body=43 status=ok
// SIG undefined FUN_149543e76(void)

void FUN_149543e76(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149543ea2 FUN_149543ea2 body=93 status=ok
// SIG undefined FUN_149543ea2(void)

ulonglong FUN_149543ea2(uint param_1,uint param_2)

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



// FUNCTION 149543eff FUN_149543eff body=41 status=ok
// SIG undefined FUN_149543eff(void)

void FUN_149543eff(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e6b310(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 149543f28 FUN_149543f28 body=146 status=ok
// SIG undefined FUN_149543f28(void)

void FUN_149543f28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149543fbc FUN_149543fbc body=98 status=ok
// SIG undefined FUN_149543fbc(void)

void FUN_149543fbc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x110 + *param_1);
  FUN_149542b73(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x110 + (longlong)_Dst),(longlong)iVar2 * 0x110);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14954401e FUN_14954401e body=62 status=ok
// SIG undefined FUN_14954401e(void)

void FUN_14954401e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14954405c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,8);
  }
  return;
}



// FUNCTION 14954405c FUN_14954405c body=110 status=ok
// SIG undefined FUN_14954405c(void)

ulonglong FUN_14954405c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x110) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149544095;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x110,8);
      param_2 = param_2 / 0x110;
    }
  }
LAB_149544095:
  return param_2 & 0xffffffff;
}



// FUNCTION 1495440ca FUN_1495440ca body=132 status=ok
// SIG undefined FUN_1495440ca(void)

void FUN_1495440ca(longlong param_1,int param_2)

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



// FUNCTION 149544150 FUN_149544150 body=89 status=ok
// SIG undefined FUN_149544150(void)

void FUN_149544150(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1495441e8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1495441aa FUN_1495441aa body=62 status=ok
// SIG undefined FUN_1495441aa(void)

void FUN_1495441aa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14954424a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1495441e8 FUN_1495441e8 body=54 status=ok
// SIG undefined FUN_1495441e8(void)

void FUN_1495441e8(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14954421e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14954421e FUN_14954421e body=43 status=ok
// SIG undefined FUN_14954421e(void)

void FUN_14954421e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14954424a FUN_14954424a body=93 status=ok
// SIG undefined FUN_14954424a(void)

ulonglong FUN_14954424a(uint param_1,uint param_2)

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



// FUNCTION 1495442a8 FUN_1495442a8 body=132 status=ok
// SIG undefined FUN_1495442a8(void)

void FUN_1495442a8(longlong param_1,int param_2)

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



// FUNCTION 14954432e FUN_14954432e body=89 status=ok
// SIG undefined FUN_14954432e(void)

void FUN_14954432e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1495443c6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149544388 FUN_149544388 body=62 status=ok
// SIG undefined FUN_149544388(void)

void FUN_149544388(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1495443f2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1495443c6 FUN_1495443c6 body=43 status=ok
// SIG undefined FUN_1495443c6(void)

void FUN_1495443c6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1495443f2 FUN_1495443f2 body=93 status=ok
// SIG undefined FUN_1495443f2(void)

ulonglong FUN_1495443f2(uint param_1,uint param_2)

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



// FUNCTION 14954444f FUN_14954444f body=41 status=ok
// SIG undefined FUN_14954444f(void)

void FUN_14954444f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140aec500(param_1);
    param_1 = param_1 + 0x108;
  }
  return;
}



// FUNCTION 149544478 FUN_149544478 body=150 status=ok
// SIG undefined FUN_149544478(void)

void FUN_149544478(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x108,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x108)) {
      uVar5 = uVar4 / 0x108 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x108,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149544510 FUN_149544510 body=110 status=ok
// SIG undefined FUN_149544510(void)

void FUN_149544510(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x108 + *param_1);
  FUN_149542bc5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x108 + (longlong)_Dst),(longlong)iVar2 * 0x108);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14954457e FUN_14954457e body=62 status=ok
// SIG undefined FUN_14954457e(void)

void FUN_14954457e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1495445bc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x108,8);
  }
  return;
}



// FUNCTION 1495445bc FUN_1495445bc body=118 status=ok
// SIG undefined FUN_1495445bc(void)

ulonglong FUN_1495445bc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x108) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1495445f9;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x108,8);
      param_2 = param_2 / 0x108;
    }
  }
LAB_1495445f9:
  return param_2 & 0xffffffff;
}



// FUNCTION 149544632 FUN_149544632 body=132 status=ok
// SIG undefined FUN_149544632(void)

void FUN_149544632(longlong param_1,int param_2)

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



// FUNCTION 1495446b8 FUN_1495446b8 body=89 status=ok
// SIG undefined FUN_1495446b8(void)

void FUN_1495446b8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_149544750(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}


