// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b000a4 FUN_148b000a4 body=167 status=ok
// SIG undefined FUN_148b000a4(void)

bool FUN_148b000a4(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148b0014c FUN_148b0014c body=48 status=ok
// SIG undefined FUN_148b0014c(void)

void FUN_148b0014c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x3a0,8);
  }
  return;
}



// FUNCTION 148b0017c FUN_148b0017c body=62 status=ok
// SIG undefined FUN_148b0017c(void)

void FUN_148b0017c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b001ba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x3a0,8);
  }
  return;
}



// FUNCTION 148b001ba FUN_148b001ba body=110 status=ok
// SIG undefined FUN_148b001ba(void)

ulonglong FUN_148b001ba(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x3a0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148b001f3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x3a0,8);
      param_2 = param_2 / 0x3a0;
    }
  }
LAB_148b001f3:
  return param_2 & 0xffffffff;
}



// FUNCTION 148b00228 FUN_148b00228 body=146 status=ok
// SIG undefined FUN_148b00228(void)

void FUN_148b00228(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x3a0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x3a0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148b002bc FUN_148b002bc body=333 status=ok
// SIG undefined FUN_148b002bc(void)

void FUN_148b002bc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14773aed6();
  iVar6 = (int)param_2[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = param_1 + 0x153;
  if (*(int *)((longlong)param_1 + 0xaa4) < iVar6) {
    FUN_140c6998c(plVar1);
    iVar6 = (int)param_2[1];
  }
  if (iVar6 != 0) {
    lVar3 = *param_2;
    lVar7 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if ((lVar4 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar4);
        bVar5 = DAT_14c950c29;
LAB_148b0033b:
        if ((bVar5 & 1) != 0) {
          FUN_1456cec3c(lVar4);
        }
        iVar2 = (int)param_1[0x154];
        *(uint *)(param_1 + 0x154) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xaa4) < iVar2 + 1U) {
          FUN_140845902(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
        bVar5 = DAT_14c950c29;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar4);
          bVar5 = DAT_14c950c29;
        }
      }
      else if (lVar4 != 0) goto LAB_148b0033b;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar6 * 8 != lVar7);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  (**(code **)(*param_1 + 0x340))(param_1,plVar1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14773bc2e(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0040c FUN_148b0040c body=29 status=ok
// SIG undefined FUN_148b0040c(void)

undefined8 FUN_148b0040c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b00444 FUN_148b00444 body=29 status=ok
// SIG undefined FUN_148b00444(void)

bool FUN_148b00444(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b00462 FUN_148b00462 body=26 status=ok
// SIG undefined FUN_148b00462(void)

bool FUN_148b00462(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b0047c FUN_148b0047c body=24 status=ok
// SIG undefined FUN_148b0047c(void)

bool FUN_148b0047c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b00494 FUN_148b00494 body=101 status=ok
// SIG undefined FUN_148b00494(void)

void FUN_148b00494(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b004fa FUN_148b004fa body=101 status=ok
// SIG undefined FUN_148b004fa(void)

void FUN_148b004fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b00560 FUN_148b00560 body=134 status=ok
// SIG undefined FUN_148b00560(void)

void FUN_148b00560(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539760;
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
                    /* WARNING: Could not recover jumptable at 0x000148b005d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b005e6 FUN_148b005e6 body=52 status=ok
// SIG undefined FUN_148b005e6(void)

void FUN_148b005e6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b00617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b0061a FUN_148b0061a body=167 status=ok
// SIG undefined FUN_148b0061a(void)

bool FUN_148b0061a(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 148b006c2 FUN_148b006c2 body=271 status=ok
// SIG undefined FUN_148b006c2(void)

int FUN_148b006c2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_148b00746;
LAB_148b00768:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_148b00746:
        lVar3 = FUN_1410ec244();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_148b00768;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1410ec244(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 148b007d2 FUN_148b007d2 body=147 status=ok
// SIG undefined FUN_148b007d2(void)

void FUN_148b007d2(longlong param_1,int param_2)

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



// FUNCTION 148b00866 FUN_148b00866 body=271 status=ok
// SIG undefined FUN_148b00866(void)

int FUN_148b00866(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_148b008ea;
LAB_148b0090c:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_148b008ea:
        lVar3 = FUN_1410ec244();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_148b0090c;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1410ec244(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 148b00976 FUN_148b00976 body=9 status=ok
// SIG undefined FUN_148b00976(void)

void FUN_148b00976(longlong param_1)

{
  FUN_148b00c8c(param_1 + 0x10);
  return;
}



// FUNCTION 148b00980 FUN_148b00980 body=29 status=ok
// SIG undefined FUN_148b00980(void)

undefined8 FUN_148b00980(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b0099e FUN_148b0099e body=38 status=ok
// SIG undefined FUN_148b0099e(void)

undefined8 FUN_148b0099e(undefined8 param_1,int param_2)

{
  FUN_148b00c8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b009c4 FUN_148b009c4 body=56 status=ok
// SIG undefined FUN_148b009c4(void)

void FUN_148b009c4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148b009f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b00a00 FUN_148b00a00 body=137 status=ok
// SIG undefined FUN_148b00a00(void)

undefined8 FUN_148b00a00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x20);
  local_20 = *(undefined8 *)(param_3 + 0x28);
  local_18 = *(longlong **)(param_3 + 0x30);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_148b00cde(param_1,&local_28);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00a96 FUN_148b00a96 body=137 status=ok
// SIG undefined FUN_148b00a96(void)

undefined8 FUN_148b00a96(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x40);
  local_20 = *(undefined8 *)(param_3 + 0x48);
  local_18 = *(longlong **)(param_3 + 0x50);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_148b00cde(param_1,&local_28);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00b20 FUN_148b00b20 body=137 status=ok
// SIG undefined FUN_148b00b20(void)

undefined8 FUN_148b00b20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_3 + 0x40);
  local_20 = *(undefined8 *)(param_3 + 0x48);
  local_18 = *(longlong **)(param_3 + 0x50);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_148b00cde(param_1,&local_28);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00baa FUN_148b00baa body=224 status=ok
// SIG undefined FUN_148b00baa(void)

undefined8 FUN_148b00baa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar3 = *(float *)(param_3 + 0x6c);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    puVar5 = &DAT_14c964cf8;
    if (fVar3 < 0.0) {
      puVar5 = &DAT_14c964d10;
    }
    puVar6 = &DAT_14c964d00;
    if (fVar3 < 0.0) {
      puVar6 = &DAT_14c964d18;
    }
    local_28 = *puVar5;
    local_18 = &DAT_14c964d08;
    if (fVar3 < 0.0) {
      local_18 = &DAT_14c964d20;
    }
    local_20 = *puVar6;
    local_18 = (longlong *)*local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    FUN_148b00cde(fVar3,&local_28);
    plVar4 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00c8c FUN_148b00c8c body=82 status=ok
// SIG undefined FUN_148b00c8c(void)

void FUN_148b00c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5397f0;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b00cde FUN_148b00cde body=183 status=ok
// SIG undefined FUN_148b00cde(void)

void FUN_148b00cde(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if ((lVar1 != DAT_14c9654a8) && (lVar1 != DAT_14c9654c0)) {
    if (lVar1 != DAT_14c964dd0) {
      cVar2 = FUN_140230860(param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_140230656(param_2);
        if (cVar2 == '\0') {
          local_30 = *param_2;
          local_28 = param_2[1];
          local_20 = param_2[2];
          if (local_20 != 0) {
            LOCK();
            *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
            UNLOCK();
          }
          FUN_148b00da4(param_1 + 0x20,&local_30);
          goto LAB_148b00d86;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
LAB_148b00d86:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00da4 FUN_148b00da4 body=134 status=ok
// SIG undefined FUN_148b00da4(void)

void FUN_148b00da4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_148b00e2c(param_1,&local_28);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00e2c FUN_148b00e2c body=278 status=ok
// SIG undefined FUN_148b00e2c(void)

void FUN_148b00e2c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_50 = *param_2;
        local_48 = param_2[1];
        local_40 = param_2[2];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_50);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_148b00eea;
          goto LAB_148b00ef9;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148b00eea:
    FUN_14474d06a(param_1,0);
  }
LAB_148b00ef9:
  plVar4 = (longlong *)param_2[2];
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b00f44 FUN_148b00f44 body=230 status=ok
// SIG undefined FUN_148b00f44(void)

undefined8 * FUN_148b00f44(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0102c FUN_148b0102c body=29 status=ok
// SIG undefined FUN_148b0102c(void)

undefined8 FUN_148b0102c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b01064 FUN_148b01064 body=29 status=ok
// SIG undefined FUN_148b01064(void)

bool FUN_148b01064(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b01082 FUN_148b01082 body=26 status=ok
// SIG undefined FUN_148b01082(void)

bool FUN_148b01082(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b0109c FUN_148b0109c body=24 status=ok
// SIG undefined FUN_148b0109c(void)

bool FUN_148b0109c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b010c0 FUN_148b010c0 body=101 status=ok
// SIG undefined FUN_148b010c0(void)

void FUN_148b010c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b539a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b01126 FUN_148b01126 body=101 status=ok
// SIG undefined FUN_148b01126(void)

void FUN_148b01126(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b539a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b0118c FUN_148b0118c body=134 status=ok
// SIG undefined FUN_148b0118c(void)

void FUN_148b0118c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b539a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539850;
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
                    /* WARNING: Could not recover jumptable at 0x000148b01203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b01212 FUN_148b01212 body=151 status=ok
// SIG undefined FUN_148b01212(void)

void FUN_148b01212(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  (*pcVar4)(iVar3 + lVar6);
  plVar5 = (longlong *)param_2[2];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b012aa FUN_148b012aa body=228 status=ok
// SIG undefined FUN_148b012aa(void)

bool FUN_148b012aa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar8 = local_40;
  }
  else {
    lVar8 = 0;
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar7 != 0) {
    pcVar4 = *(code **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    local_40 = *param_2;
    local_38 = param_2[1];
    local_30 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    (*pcVar4)(iVar3 + lVar7);
  }
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  plVar5 = (longlong *)param_2[2];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b01392 FUN_148b01392 body=29 status=ok
// SIG undefined FUN_148b01392(void)

undefined8 FUN_148b01392(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b013ca FUN_148b013ca body=29 status=ok
// SIG undefined FUN_148b013ca(void)

bool FUN_148b013ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b013e8 FUN_148b013e8 body=26 status=ok
// SIG undefined FUN_148b013e8(void)

bool FUN_148b013e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b01402 FUN_148b01402 body=24 status=ok
// SIG undefined FUN_148b01402(void)

bool FUN_148b01402(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b0141a FUN_148b0141a body=101 status=ok
// SIG undefined FUN_148b0141a(void)

void FUN_148b0141a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5398c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b01480 FUN_148b01480 body=101 status=ok
// SIG undefined FUN_148b01480(void)

void FUN_148b01480(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5398c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b014e6 FUN_148b014e6 body=134 status=ok
// SIG undefined FUN_148b014e6(void)

void FUN_148b014e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5398c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b0155d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b0156c FUN_148b0156c body=39 status=ok
// SIG undefined FUN_148b0156c(void)

void FUN_148b0156c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b0158f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b01594 FUN_148b01594 body=146 status=ok
// SIG undefined FUN_148b01594(void)

bool FUN_148b01594(longlong param_1)

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



// FUNCTION 148b01628 FUN_148b01628 body=324 status=ok
// SIG undefined FUN_148b01628(void)

longlong * FUN_148b01628(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x2b0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5399e0;
  plVar4 = plVar3 + 2;
  FUN_148afc7ee(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b01808(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b016ff;
    param_1[1] = 0;
LAB_148b016c9:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b016ff;
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
      if (plVar4 == (longlong *)0x0) goto LAB_148b016ff;
      goto LAB_148b016c9;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b016ff;
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
LAB_148b016ff:
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
  local_38 = 0x2a0;
  FUN_140a52e78(*param_1,"SGameResponsivePanel",
                ".\\../Plugins/GameSettings/Source/Private/Widgets/Responsive/GameResponsivePanel.cpp"
                ,0x3e);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0176e FUN_148b0176e body=9 status=ok
// SIG undefined FUN_148b0176e(void)

void FUN_148b0176e(longlong param_1)

{
  FUN_148b01796(param_1 + 0x10);
  return;
}



// FUNCTION 148b01778 FUN_148b01778 body=29 status=ok
// SIG undefined FUN_148b01778(void)

undefined8 FUN_148b01778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b01796 FUN_148b01796 body=113 status=ok
// SIG undefined FUN_148b01796(void)

void FUN_148b01796(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b538e20;
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4e];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 148b01808 FUN_148b01808 body=167 status=ok
// SIG undefined FUN_148b01808(void)

void FUN_148b01808(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b01883;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b01883;
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
LAB_148b01883:
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
                    /* WARNING: Could not recover jumptable at 0x000148b018a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b018b0 FUN_148b018b0 body=132 status=ok
// SIG undefined FUN_148b018b0(void)

void FUN_148b018b0(longlong param_1,int param_2)

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



// FUNCTION 148b01936 FUN_148b01936 body=62 status=ok
// SIG undefined FUN_148b01936(void)

void FUN_148b01936(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b01974(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148b01974 FUN_148b01974 body=93 status=ok
// SIG undefined FUN_148b01974(void)

ulonglong FUN_148b01974(uint param_1,uint param_2)

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



// FUNCTION 148b01a10 FUN_148b01a10 body=231 status=ok
// SIG undefined FUN_148b01a10(void)

undefined8 FUN_148b01a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147029ed8(param_1 + 0x20,local_28);
  if (DAT_14cb9a550 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a550 = FUN_14171c317(FUN_14659324a,uVar1,L"EGbxGameSettingDataSourceType");
  }
  FUN_1406f1d90(DAT_14cb9a550,local_48,*(undefined1 *)(param_1 + 0x18));
  uVar1 = FUN_1447a1f4a(local_48);
  FUN_1449b8608(local_38,uVar1,&DAT_149e00c10);
  FUN_1401c7f3e(param_2,local_38,local_28);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b01af8 FUN_148b01af8 body=929 status=ok
// SIG undefined FUN_148b01af8(void)

longlong * FUN_148b01af8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  wchar_t *_Str;
  undefined **ppuVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  if (*(int *)(param_1 + 0x20) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x18);
  }
  dVar6 = wcstod(_Str,(wchar_t **)0x0);
  uVar1 = local_38;
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540920;
    break;
  case 1:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540990;
    break;
  case 2:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540a00;
    break;
  case 3:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540a70;
    break;
  case 4:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540ae0;
    break;
  case 5:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540b50;
    break;
  default:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  *puVar3 = ppuVar4;
  puVar3[3] = uVar1;
  puVar3[4] = dVar6;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b01e9c FUN_148b01e9c body=918 status=ok
// SIG undefined FUN_148b01e9c(void)

longlong * FUN_148b01e9c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  wchar_t *_Str;
  undefined **ppuVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28,param_3);
  if (*(int *)(param_1 + 0x20) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x18);
  }
  lVar3 = _wtoi64(_Str);
  uVar1 = local_28;
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar6;
    ppuVar5 = &PTR_FUN_14b540c30;
    break;
  case 1:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar6;
    ppuVar5 = &PTR_FUN_14b540ca0;
    break;
  case 2:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar6;
    ppuVar5 = &PTR_FUN_14b540d10;
    break;
  case 3:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar6;
    ppuVar5 = &PTR_FUN_14b540d80;
    break;
  case 4:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar6;
    ppuVar5 = &PTR_FUN_14b540df0;
    break;
  case 5:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar6;
    ppuVar5 = &PTR_FUN_14b540e60;
    break;
  default:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  *puVar4 = ppuVar5;
  puVar4[3] = uVar1;
  puVar4[4] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b02236 FUN_148b02236 body=377 status=ok
// SIG undefined FUN_148b02236(void)

longlong * FUN_148b02236(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_14485c47a(&local_20,param_3);
  FUN_1467ee0d0(&local_30,param_1 + 0x18);
  uVar1 = local_20;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b540fb0;
  }
  else {
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b541020;
  }
  *puVar3 = ppuVar4;
  puVar3[3] = uVar1;
  *(undefined4 *)(puVar3 + 4) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_44;
  *(undefined4 *)(puVar3 + 5) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b023b0 FUN_148b023b0 body=377 status=ok
// SIG undefined FUN_148b023b0(void)

longlong * FUN_148b023b0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_14485c47a(&local_20,param_3);
  FUN_146805230(&local_30,param_1 + 0x18);
  uVar1 = local_20;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b541090;
  }
  else {
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar3[2] = lVar5;
    ppuVar4 = &PTR_FUN_14b541100;
  }
  *puVar3 = ppuVar4;
  puVar3[3] = uVar1;
  *(undefined4 *)(puVar3 + 4) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_44;
  *(undefined4 *)(puVar3 + 5) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0252a FUN_148b0252a body=220 status=ok
// SIG undefined FUN_148b0252a(void)

longlong FUN_148b0252a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    uVar3 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x150;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x158);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x160) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar2 * 0x18),
            *plVar1 != param_2) {
        iVar2 = (int)plVar1[2];
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        lVar4 = plVar1[1];
        if (DAT_14c950c29 != '\x01') {
          return lVar4;
        }
        if (lVar4 == 0) {
          return 0;
        }
        FUN_1456cec3c(lVar4);
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 148b02606 FUN_148b02606 body=215 status=ok
// SIG undefined FUN_148b02606(void)

void FUN_148b02606(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_148b026c5;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_148b026c5:
      FUN_148b05e48(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148b026e6 FUN_148b026e6 body=118 status=ok
// SIG undefined FUN_148b026e6(void)

void FUN_148b026e6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14101eafe();
  FUN_140002266(local_28,L"X=%3.3f Y=%3.3f",*(undefined8 *)(param_1 + 0x90),
                *(undefined8 *)(param_1 + 0x98));
  FUN_1458433a4(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b02760 FUN_148b02760 body=38 status=ok
// SIG undefined FUN_148b02760(void)

undefined8 FUN_148b02760(undefined8 param_1,int param_2)

{
  FUN_141118b20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b02786 FUN_148b02786 body=55 status=ok
// SIG undefined FUN_148b02786(void)

void FUN_148b02786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a538 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a538 = FUN_140002ddd(FUN_146592ef4,uVar1,L"GbxGameSettingData");
  }
  return;
}



// FUNCTION 148b027be FUN_148b027be body=42 status=ok
// SIG undefined FUN_148b027be(void)

undefined8 FUN_148b027be(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGameSettings\\Source\\GbxGameSettings/Public\\GbxGameSettingData.h"
                ,0x5e,L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0;
}



// FUNCTION 148b027e8 FUN_148b027e8 body=78 status=ok
// SIG undefined FUN_148b027e8(void)

undefined8 * FUN_148b027e8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b53d760;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 148b02836 FUN_148b02836 body=38 status=ok
// SIG undefined FUN_148b02836(void)

undefined8 FUN_148b02836(undefined8 param_1,int param_2)

{
  FUN_140d4e91c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b0285c FUN_148b0285c body=55 status=ok
// SIG undefined FUN_148b0285c(void)

void FUN_148b0285c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a6b8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a6b8 = FUN_140002ddd(FUN_14659388b,uVar1,L"GbxGameSettingData_Value");
  }
  return;
}



// FUNCTION 148b02894 FUN_148b02894 body=38 status=ok
// SIG undefined FUN_148b02894(void)

undefined8 FUN_148b02894(undefined8 param_1,int param_2)

{
  FUN_140d4e91c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b028ba FUN_148b028ba body=55 status=ok
// SIG undefined FUN_148b028ba(void)

void FUN_148b028ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a7a8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a7a8 = FUN_140002ddd(FUN_146593e03,uVar1,L"GbxGameSettingData_Vector2D");
  }
  return;
}



// FUNCTION 148b0291e FUN_148b0291e body=54 status=ok
// SIG undefined FUN_148b0291e(void)

undefined1 FUN_148b0291e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b02aae(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148b0297c FUN_148b0297c body=59 status=ok
// SIG undefined FUN_148b0297c(void)

undefined8 FUN_148b0297c(longlong *param_1)

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



// FUNCTION 148b029c2 FUN_148b029c2 body=57 status=ok
// SIG undefined FUN_148b029c2(void)

void FUN_148b029c2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b53dcf0;
    if ((longlong *)param_2[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0xc] + 0x10))();
    }
    FUN_141118b20(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 148b02a4a FUN_148b02a4a body=100 status=ok
// SIG undefined FUN_148b02a4a(void)

void FUN_148b02a4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148b02aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b02aae FUN_148b02aae body=85 status=ok
// SIG undefined FUN_148b02aae(void)

longlong FUN_148b02aae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_148b02b04();
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 148b02b04 FUN_148b02b04 body=174 status=ok
// SIG undefined FUN_148b02b04(void)

longlong FUN_148b02b04(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_148b02bb2(param_1 + 0x30,param_2 + 0x30);
  FUN_148b02c10(param_1 + 0x40,param_2 + 0x40);
  FUN_140c19cf6(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148b02bb2 FUN_148b02bb2 body=93 status=ok
// SIG undefined FUN_148b02bb2(void)

undefined8 * FUN_148b02bb2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d4e9b8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b02c68(param_1,iVar1);
      FUN_148b02cdb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b02c10 FUN_148b02c10 body=88 status=ok
// SIG undefined FUN_148b02c10(void)

undefined8 * FUN_148b02c10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b02d1c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b02c68 FUN_148b02c68 body=115 status=ok
// SIG undefined FUN_148b02c68(void)

void FUN_148b02c68(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b02cdb FUN_148b02cdb body=65 status=ok
// SIG undefined FUN_148b02cdb(void)

void FUN_148b02cdb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    FUN_1401f3da4(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148b02d1c FUN_148b02d1c body=98 status=ok
// SIG undefined FUN_148b02d1c(void)

void FUN_148b02d1c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b02dac FUN_148b02dac body=54 status=ok
// SIG undefined FUN_148b02dac(void)

undefined1 FUN_148b02dac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b02ebe(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148b02e0a FUN_148b02e0a body=59 status=ok
// SIG undefined FUN_148b02e0a(void)

undefined8 FUN_148b02e0a(longlong *param_1)

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



// FUNCTION 148b02e50 FUN_148b02e50 body=32 status=ok
// SIG undefined FUN_148b02e50(void)

void FUN_148b02e50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1458098a2(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148b02ebe FUN_148b02ebe body=78 status=ok
// SIG undefined FUN_148b02ebe(void)

longlong FUN_148b02ebe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_148b02b04();
  lVar1 = *(longlong *)(param_2 + 0x60);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x60);
    }
  }
  *(longlong *)(param_1 + 0x60) = lVar1;
  FUN_148b02f0c(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148b02f0c FUN_148b02f0c body=93 status=ok
// SIG undefined FUN_148b02f0c(void)

undefined8 * FUN_148b02f0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410aba21(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b02f6a(param_1,iVar1);
      FUN_148b02fdd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b02f6a FUN_148b02f6a body=115 status=ok
// SIG undefined FUN_148b02f6a(void)

void FUN_148b02f6a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b02fdd FUN_148b02fdd body=52 status=ok
// SIG undefined FUN_148b02fdd(void)

void FUN_148b02fdd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b03040 FUN_148b03040 body=67 status=ok
// SIG undefined FUN_148b03040(void)

undefined1 FUN_148b03040(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    FUN_1401f3db8(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148b030ac FUN_148b030ac body=59 status=ok
// SIG undefined FUN_148b030ac(void)

undefined8 FUN_148b030ac(longlong *param_1)

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



// FUNCTION 148b030f2 FUN_148b030f2 body=32 status=ok
// SIG undefined FUN_148b030f2(void)

void FUN_148b030f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148b02a4a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b031ce FUN_148b031ce body=59 status=ok
// SIG undefined FUN_148b031ce(void)

undefined8 FUN_148b031ce(longlong *param_1)

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



// FUNCTION 148b03270 FUN_148b03270 body=65 status=ok
// SIG undefined FUN_148b03270(void)

void FUN_148b03270(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b53d730;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 2);
  FUN_144a5dc74(param_2 + 4);
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 148b032b2 FUN_148b032b2 body=65 status=ok
// SIG undefined FUN_148b032b2(void)

void FUN_148b032b2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b53d730;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 2);
  FUN_144a5dc74(param_2 + 4);
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 148b03318 FUN_148b03318 body=54 status=ok
// SIG undefined FUN_148b03318(void)

undefined1 FUN_148b03318(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b02b04(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148b03376 FUN_148b03376 body=59 status=ok
// SIG undefined FUN_148b03376(void)

undefined8 FUN_148b03376(longlong *param_1)

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



// FUNCTION 148b033bc FUN_148b033bc body=32 status=ok
// SIG undefined FUN_148b033bc(void)

void FUN_148b033bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_141118b20(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148b03494 FUN_148b03494 body=59 status=ok
// SIG undefined FUN_148b03494(void)

undefined8 FUN_148b03494(longlong *param_1)

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



// FUNCTION 148b03534 FUN_148b03534 body=29 status=ok
// SIG undefined FUN_148b03534(void)

undefined8 FUN_148b03534(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b03552 FUN_148b03552 body=55 status=ok
// SIG undefined FUN_148b03552(void)

void FUN_148b03552(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a568 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a568 = FUN_140002ddd(FUN_1465930ba,uVar1,L"GbxGameSettingEditCondition");
  }
  return;
}



// FUNCTION 148b0358a FUN_148b0358a body=54 status=ok
// SIG undefined FUN_148b0358a(void)

undefined8 * FUN_148b0358a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGameSettings\\Source\\GbxGameSettings/Public/GbxGameSettingEditCondition.h"
                ,0x29,L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148b0368a FUN_148b0368a body=59 status=ok
// SIG undefined FUN_148b0368a(void)

undefined8 FUN_148b0368a(longlong *param_1)

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



// FUNCTION 148b0372a FUN_148b0372a body=31 status=ok
// SIG undefined FUN_148b0372a(void)

undefined8 FUN_148b0372a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b037d6 FUN_148b037d6 body=59 status=ok
// SIG undefined FUN_148b037d6(void)

undefined8 FUN_148b037d6(longlong *param_1)

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



// FUNCTION 148b038f2 FUN_148b038f2 body=59 status=ok
// SIG undefined FUN_148b038f2(void)

undefined8 FUN_148b038f2(longlong *param_1)

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



// FUNCTION 148b039f0 FUN_148b039f0 body=76 status=ok
// SIG undefined FUN_148b039f0(void)

undefined8 FUN_148b039f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b03a64 FUN_148b03a64 body=59 status=ok
// SIG undefined FUN_148b03a64(void)

undefined8 FUN_148b03a64(longlong *param_1)

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



// FUNCTION 148b03aaa FUN_148b03aaa body=48 status=ok
// SIG undefined FUN_148b03aaa(void)

void FUN_148b03aaa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b53ed70;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148b03b92 FUN_148b03b92 body=59 status=ok
// SIG undefined FUN_148b03b92(void)

undefined8 FUN_148b03b92(longlong *param_1)

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



// FUNCTION 148b03c32 FUN_148b03c32 body=29 status=ok
// SIG undefined FUN_148b03c32(void)

undefined8 FUN_148b03c32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b03c50 FUN_148b03c50 body=55 status=ok
// SIG undefined FUN_148b03c50(void)

void FUN_148b03c50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5f8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5f8 = FUN_140002ddd(FUN_1465930eb,uVar1,L"GbxGameSettingEditConditionResponse");
  }
  return;
}



// FUNCTION 148b03c88 FUN_148b03c88 body=54 status=ok
// SIG undefined FUN_148b03c88(void)

undefined8 * FUN_148b03c88(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGameSettings\\Source\\GbxGameSettings/Public/GbxGameSettingEditConditionResponse.h"
                ,0x1e,L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148b03cfe FUN_148b03cfe body=62 status=ok
// SIG undefined FUN_148b03cfe(void)

undefined1 FUN_148b03cfe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b03d64 FUN_148b03d64 body=59 status=ok
// SIG undefined FUN_148b03d64(void)

undefined8 FUN_148b03d64(longlong *param_1)

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



// FUNCTION 148b03daa FUN_148b03daa body=48 status=ok
// SIG undefined FUN_148b03daa(void)

void FUN_148b03daa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b53f0d0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148b03e62 FUN_148b03e62 body=105 status=ok
// SIG undefined FUN_148b03e62(void)

undefined8 FUN_148b03e62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b03ef4 FUN_148b03ef4 body=59 status=ok
// SIG undefined FUN_148b03ef4(void)

undefined8 FUN_148b03ef4(longlong *param_1)

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



// FUNCTION 148b03f3a FUN_148b03f3a body=49 status=ok
// SIG undefined FUN_148b03f3a(void)

void FUN_148b03f3a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b53f250;
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148b04004 FUN_148b04004 body=62 status=ok
// SIG undefined FUN_148b04004(void)

undefined1 FUN_148b04004(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b0406a FUN_148b0406a body=59 status=ok
// SIG undefined FUN_148b0406a(void)

undefined8 FUN_148b0406a(longlong *param_1)

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



// FUNCTION 148b040b0 FUN_148b040b0 body=48 status=ok
// SIG undefined FUN_148b040b0(void)

void FUN_148b040b0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b53f3d0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148b0412e FUN_148b0412e body=61 status=ok
// SIG undefined FUN_148b0412e(void)

undefined8 * FUN_148b0412e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b53f3d0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b041a0 FUN_148b041a0 body=132 status=ok
// SIG undefined FUN_148b041a0(void)

undefined1 FUN_148b041a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_148b02b04(param_2 + lVar1,param_3 + lVar1);
      *(undefined1 *)(param_2 + lVar1 + 0x60) = *(undefined1 *)(param_3 + lVar1 + 0x60);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x78,param_3 + lVar1 + 0x78);
      *(undefined1 *)(param_2 + lVar1 + 0x88) = *(undefined1 *)(param_3 + lVar1 + 0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b0424c FUN_148b0424c body=59 status=ok
// SIG undefined FUN_148b0424c(void)

undefined8 FUN_148b0424c(longlong *param_1)

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



// FUNCTION 148b04298 FUN_148b04298 body=38 status=ok
// SIG undefined FUN_148b04298(void)

void FUN_148b04298(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140d4e91c(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148b04396 FUN_148b04396 body=59 status=ok
// SIG undefined FUN_148b04396(void)

undefined8 FUN_148b04396(longlong *param_1)

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



// FUNCTION 148b04438 FUN_148b04438 body=124 status=ok
// SIG undefined FUN_148b04438(void)

void FUN_148b04438(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53da40;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x1a] = 0;
  param_2[0x12] = 0;
  param_2[0x14] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x15] = 0x3ff0000000000000;
  param_2[0x16] = 0x3f847ae147ae147b;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 148b044d8 FUN_148b044d8 body=176 status=ok
// SIG undefined FUN_148b044d8(void)

undefined8 FUN_148b044d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      FUN_148b02b04(param_2 + lVar4,param_3 + lVar4);
      *(undefined1 *)(param_2 + lVar4 + 0x60) = *(undefined1 *)(param_3 + lVar4 + 0x60);
      FUN_144a787a6();
      lVar1 = param_2 + lVar4;
      lVar2 = param_3 + lVar4;
      FUN_144a787a6(lVar1 + 0x78,lVar2 + 0x78);
      *(undefined1 *)(lVar1 + 0x88) = *(undefined1 *)(lVar2 + 0x88);
      puVar5 = (undefined8 *)(param_3 + lVar4 + 0x90);
      puVar6 = (undefined8 *)(param_2 + lVar4 + 0x90);
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)(lVar1 + 0xd8) = *(undefined4 *)(lVar2 + 0xd8);
      lVar4 = lVar4 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b045b0 FUN_148b045b0 body=59 status=ok
// SIG undefined FUN_148b045b0(void)

undefined8 FUN_148b045b0(longlong *param_1)

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



// FUNCTION 148b045fc FUN_148b045fc body=38 status=ok
// SIG undefined FUN_148b045fc(void)

void FUN_148b045fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_140d4e91c(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148b0469e FUN_148b0469e body=63 status=ok
// SIG undefined FUN_148b0469e(void)

undefined1 FUN_148b0469e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b047c6(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148b04706 FUN_148b04706 body=59 status=ok
// SIG undefined FUN_148b04706(void)

undefined8 FUN_148b04706(longlong *param_1)

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



// FUNCTION 148b04752 FUN_148b04752 body=38 status=ok
// SIG undefined FUN_148b04752(void)

void FUN_148b04752(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148b048a6(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148b047c6 FUN_148b047c6 body=223 status=ok
// SIG undefined FUN_148b047c6(void)

longlong FUN_148b047c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_148b02b04();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  plVar1 = *(longlong **)(param_2 + 0x98);
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x98) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  plVar1 = *(longlong **)(param_2 + 0xa8);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xa8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148b048a6 FUN_148b048a6 body=67 status=ok
// SIG undefined FUN_148b048a6(void)

void FUN_148b048a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53da70;
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  FUN_140d4e91c(param_1);
  return;
}



// FUNCTION 148b048ea FUN_148b048ea body=100 status=ok
// SIG undefined FUN_148b048ea(void)

void FUN_148b048ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53daa0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148b04972 FUN_148b04972 body=63 status=ok
// SIG undefined FUN_148b04972(void)

undefined1 FUN_148b04972(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b04a9c(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148b049da FUN_148b049da body=59 status=ok
// SIG undefined FUN_148b049da(void)

undefined8 FUN_148b049da(longlong *param_1)

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



// FUNCTION 148b04a26 FUN_148b04a26 body=40 status=ok
// SIG undefined FUN_148b04a26(void)

void FUN_148b04a26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14590309a(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148b04a9c FUN_148b04a9c body=102 status=ok
// SIG undefined FUN_148b04a9c(void)

longlong FUN_148b04a9c(longlong param_1,longlong param_2)

{
  FUN_148b02b04();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_148b04b02(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148b04b02 FUN_148b04b02 body=122 status=ok
// SIG undefined FUN_148b04b02(void)

longlong FUN_148b04b02(longlong param_1,longlong param_2)

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
    FUN_148b04b7c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148b04b7c FUN_148b04b7c body=240 status=ok
// SIG undefined FUN_148b04b7c(void)

longlong * FUN_148b04b7c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14133ee18(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          plVar4 = *(longlong **)(lVar2 + 8 + lVar6);
          *(longlong **)(lVar3 + 8 + lVar6) = plVar4;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          *(undefined4 *)(lVar3 + 0x10 + lVar6) = *(undefined4 *)(lVar2 + 0x10 + lVar6);
          *(undefined8 *)(lVar3 + 0x18 + lVar6) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148b04ca6 FUN_148b04ca6 body=113 status=ok
// SIG undefined FUN_148b04ca6(void)

undefined8 FUN_148b04ca6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      plVar1 = *(longlong **)(param_3 + 8 + lVar3);
      plVar2 = *(longlong **)(param_2 + 8 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + 8 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b04d40 FUN_148b04d40 body=59 status=ok
// SIG undefined FUN_148b04d40(void)

undefined8 FUN_148b04d40(longlong *param_1)

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



// FUNCTION 148b04d86 FUN_148b04d86 body=39 status=ok
// SIG undefined FUN_148b04d86(void)

void FUN_148b04d86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148b04dfe FUN_148b04dfe body=49 status=ok
// SIG undefined FUN_148b04dfe(void)

void FUN_148b04dfe(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53dad0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 148b04e54 FUN_148b04e54 body=63 status=ok
// SIG undefined FUN_148b04e54(void)

undefined1 FUN_148b04e54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b04f7e(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148b04ebc FUN_148b04ebc body=59 status=ok
// SIG undefined FUN_148b04ebc(void)

undefined8 FUN_148b04ebc(longlong *param_1)

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



// FUNCTION 148b04f08 FUN_148b04f08 body=40 status=ok
// SIG undefined FUN_148b04f08(void)

void FUN_148b04f08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_145812c30(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148b04f7e FUN_148b04f7e body=149 status=ok
// SIG undefined FUN_148b04f7e(void)

longlong FUN_148b04f7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_148b02b04();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  lVar1 = *(longlong *)(param_2 + 0x90);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x90);
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  FUN_148b05014(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148b05014 FUN_148b05014 body=93 status=ok
// SIG undefined FUN_148b05014(void)

undefined8 * FUN_148b05014(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14114f721(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b05072(param_1,iVar1);
      FUN_148b050e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b05072 FUN_148b05072 body=115 status=ok
// SIG undefined FUN_148b05072(void)

void FUN_148b05072(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b050e5 FUN_148b050e5 body=83 status=ok
// SIG undefined FUN_148b050e5(void)

void FUN_148b050e5(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      plVar1 = *(longlong **)(param_2 + 8 + lVar2);
      *(longlong **)(param_1 + 8 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148b0513a FUN_148b0513a body=58 status=ok
// SIG undefined FUN_148b0513a(void)

void FUN_148b0513a(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_2 + 4) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_2[6] = (int)plVar2[1];
  return;
}



// FUNCTION 148b0519c FUN_148b0519c body=121 status=ok
// SIG undefined FUN_148b0519c(void)

undefined8 FUN_148b0519c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      plVar3 = *(longlong **)(param_3 + 0x10 + lVar8);
      plVar4 = *(longlong **)(param_2 + 0x10 + lVar8);
      if (plVar4 != plVar3) {
        *(longlong **)(param_2 + 0x10 + lVar8) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(param_2 + 0x18 + lVar8) = *(undefined4 *)(param_3 + lVar8 + 0x18);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b0523e FUN_148b0523e body=59 status=ok
// SIG undefined FUN_148b0523e(void)

undefined8 FUN_148b0523e(longlong *param_1)

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



// FUNCTION 148b05284 FUN_148b05284 body=39 status=ok
// SIG undefined FUN_148b05284(void)

void FUN_148b05284(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148b052fc FUN_148b052fc body=56 status=ok
// SIG undefined FUN_148b052fc(void)

void FUN_148b052fc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53db00;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0x3f80000000000000;
  return;
}



// FUNCTION 148b05358 FUN_148b05358 body=63 status=ok
// SIG undefined FUN_148b05358(void)

undefined1 FUN_148b05358(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b05482(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148b053c0 FUN_148b053c0 body=59 status=ok
// SIG undefined FUN_148b053c0(void)

undefined8 FUN_148b053c0(longlong *param_1)

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



// FUNCTION 148b0540c FUN_148b0540c body=40 status=ok
// SIG undefined FUN_148b0540c(void)

void FUN_148b0540c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14586734e(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148b05482 FUN_148b05482 body=102 status=ok
// SIG undefined FUN_148b05482(void)

longlong FUN_148b05482(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148b02b04();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_148b054e8(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148b054e8 FUN_148b054e8 body=93 status=ok
// SIG undefined FUN_148b054e8(void)

undefined8 * FUN_148b054e8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14126e4af(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b05546(param_1,iVar1);
      FUN_148b055a8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b05546 FUN_148b05546 body=98 status=ok
// SIG undefined FUN_148b05546(void)

void FUN_148b05546(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b055a8 FUN_148b055a8 body=89 status=ok
// SIG undefined FUN_148b055a8(void)

void FUN_148b055a8(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      plVar3 = *(longlong **)(param_2 + 0x10 + lVar7);
      *(longlong **)(param_1 + 0x10 + lVar7) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      *(undefined4 *)(param_1 + lVar7 + 0x18) = *(undefined4 *)(param_2 + lVar7 + 0x18);
      lVar7 = lVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148b05602 FUN_148b05602 body=46 status=ok
// SIG undefined FUN_148b05602(void)

void FUN_148b05602(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53db30;
  uVar1 = DAT_14c8463f8;
  param_2[0x12] = DAT_14c8463f0;
  param_2[0x13] = uVar1;
  return;
}



// FUNCTION 148b05630 FUN_148b05630 body=46 status=ok
// SIG undefined FUN_148b05630(void)

void FUN_148b05630(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53db30;
  uVar1 = DAT_14c8463f8;
  param_2[0x12] = DAT_14c8463f0;
  param_2[0x13] = uVar1;
  return;
}



// FUNCTION 148b05682 FUN_148b05682 body=142 status=ok
// SIG undefined FUN_148b05682(void)

undefined1 FUN_148b05682(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_148b02b04(param_2 + lVar6,param_3 + lVar6);
      *(undefined1 *)(param_2 + lVar6 + 0x60) = *(undefined1 *)(param_3 + lVar6 + 0x60);
      FUN_144a787a6();
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 0x78,lVar2 + 0x78);
      *(undefined1 *)(lVar1 + 0x88) = *(undefined1 *)(lVar2 + 0x88);
      uVar3 = *(undefined4 *)(lVar2 + 0x94);
      uVar4 = *(undefined4 *)(lVar2 + 0x98);
      uVar5 = *(undefined4 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(lVar2 + 0x90);
      *(undefined4 *)(lVar1 + 0x94) = uVar3;
      *(undefined4 *)(lVar1 + 0x98) = uVar4;
      *(undefined4 *)(lVar1 + 0x9c) = uVar5;
      lVar6 = lVar6 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b05738 FUN_148b05738 body=59 status=ok
// SIG undefined FUN_148b05738(void)

undefined8 FUN_148b05738(longlong *param_1)

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



// FUNCTION 148b05784 FUN_148b05784 body=38 status=ok
// SIG undefined FUN_148b05784(void)

void FUN_148b05784(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_140d4e91c(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148b057fa FUN_148b057fa body=43 status=ok
// SIG undefined FUN_148b057fa(void)

void FUN_148b057fa(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53db60;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148b0584a FUN_148b0584a body=63 status=ok
// SIG undefined FUN_148b0584a(void)

undefined1 FUN_148b0584a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b05972(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148b058b2 FUN_148b058b2 body=59 status=ok
// SIG undefined FUN_148b058b2(void)

undefined8 FUN_148b058b2(longlong *param_1)

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



// FUNCTION 148b058fe FUN_148b058fe body=38 status=ok
// SIG undefined FUN_148b058fe(void)

void FUN_148b058fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140d4e91c(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148b05972 FUN_148b05972 body=115 status=ok
// SIG undefined FUN_148b05972(void)

longlong FUN_148b05972(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_148b02b04();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  lVar1 = *(longlong *)(param_2 + 0x90);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x90);
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar1;
  return param_1;
}



// FUNCTION 148b059e6 FUN_148b059e6 body=79 status=ok
// SIG undefined FUN_148b059e6(void)

undefined8 * FUN_148b059e6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b5414d0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140e8fe04(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b05a36 FUN_148b05a36 body=32 status=ok
// SIG undefined FUN_148b05a36(void)

undefined8 FUN_148b05a36(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Inline Edit Condition");
  return param_2;
}



// FUNCTION 148b05a64 FUN_148b05a64 body=120 status=ok
// SIG undefined FUN_148b05a64(void)

longlong FUN_148b05a64(longlong param_1)

{
  longlong lVar1;
  wchar_t *_Str;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
            (*(longlong **)(param_1 + 0x138),&local_20,*(undefined8 *)(param_1 + 0x58));
  _Str = local_20;
  if (local_18 == 0) {
    _Str = L"";
  }
  lVar1 = _wtoi64(_Str);
  if (local_20 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 148b05ade FUN_148b05ade body=105 status=ok
// SIG undefined FUN_148b05ade(void)

undefined8 FUN_148b05ade(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
            (*(longlong **)(param_1 + 0x138),local_28,*(undefined8 *)(param_1 + 0x58));
  FUN_1467ee0d0(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b05b48 FUN_148b05b48 body=105 status=ok
// SIG undefined FUN_148b05b48(void)

undefined8 FUN_148b05b48(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
            (*(longlong **)(param_1 + 0x138),local_28,*(undefined8 *)(param_1 + 0x58));
  FUN_146805230(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b05bc0 FUN_148b05bc0 body=31 status=ok
// SIG undefined FUN_148b05bc0(void)

undefined8 FUN_148b05bc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b05bfa FUN_148b05bfa body=93 status=ok
// SIG undefined FUN_148b05bfa(void)

void FUN_148b05bfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b05c58 FUN_148b05c58 body=93 status=ok
// SIG undefined FUN_148b05c58(void)

void FUN_148b05c58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b05cb6 FUN_148b05cb6 body=126 status=ok
// SIG undefined FUN_148b05cb6(void)

void FUN_148b05cb6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b541330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b05d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b05d34 FUN_148b05d34 body=48 status=ok
// SIG undefined FUN_148b05d34(void)

void FUN_148b05d34(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b05d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b05d64 FUN_148b05d64 body=114 status=ok
// SIG undefined FUN_148b05d64(void)

void FUN_148b05d64(longlong *param_1,int param_2)

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



// FUNCTION 148b05dd6 FUN_148b05dd6 body=114 status=ok
// SIG undefined FUN_148b05dd6(void)

void FUN_148b05dd6(longlong *param_1,int param_2)

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



// FUNCTION 148b05e48 FUN_148b05e48 body=62 status=ok
// SIG undefined FUN_148b05e48(void)

void FUN_148b05e48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b05e86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148b05e86 FUN_148b05e86 body=93 status=ok
// SIG undefined FUN_148b05e86(void)

ulonglong FUN_148b05e86(uint param_1,uint param_2)

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



// FUNCTION 148b05ee4 FUN_148b05ee4 body=102 status=ok
// SIG undefined FUN_148b05ee4(void)

void FUN_148b05ee4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar4 = 5;
    if (5 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x14)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14) = iVar4;
    FUN_148b05f4c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148b05f4c FUN_148b05f4c body=124 status=ok
// SIG undefined FUN_148b05f4c(void)

void FUN_148b05f4c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,1);
  return;
}



// FUNCTION 148b05fc8 FUN_148b05fc8 body=31 status=ok
// SIG undefined FUN_148b05fc8(void)

undefined8 FUN_148b05fc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b06004 FUN_148b06004 body=93 status=ok
// SIG undefined FUN_148b06004(void)

void FUN_148b06004(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5413a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b06062 FUN_148b06062 body=126 status=ok
// SIG undefined FUN_148b06062(void)

void FUN_148b06062(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5413a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b060d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b060e0 FUN_148b060e0 body=21 status=ok
// SIG undefined FUN_148b060e0(void)

undefined8 FUN_148b060e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b060f6 FUN_148b060f6 body=37 status=ok
// SIG undefined FUN_148b060f6(void)

void FUN_148b060f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b0a2b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b0611c FUN_148b0611c body=37 status=ok
// SIG undefined FUN_148b0611c(void)

void FUN_148b0611c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b0a2fa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b06142 FUN_148b06142 body=37 status=ok
// SIG undefined FUN_148b06142(void)

void FUN_148b06142(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b0a2f2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b061e0 FUN_148b061e0 body=156 status=ok
// SIG undefined FUN_148b061e0(void)

void FUN_148b061e0(undefined8 param_1,longlong param_2)

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
  FUN_148b0a302(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0627e FUN_148b0627e body=156 status=ok
// SIG undefined FUN_148b0627e(void)

void FUN_148b0627e(undefined8 param_1,longlong param_2)

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
  FUN_148b0a310(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0631c FUN_148b0631c body=156 status=ok
// SIG undefined FUN_148b0631c(void)

void FUN_148b0631c(undefined8 param_1,longlong param_2)

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
  FUN_148b0a2de(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b063c4 FUN_148b063c4 body=139 status=ok
// SIG undefined FUN_148b063c4(void)

void FUN_148b063c4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b0a394(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06450 FUN_148b06450 body=139 status=ok
// SIG undefined FUN_148b06450(void)

void FUN_148b06450(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b0a38a(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b064e0 FUN_148b064e0 body=37 status=ok
// SIG undefined FUN_148b064e0(void)

void FUN_148b064e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b0ac76();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b06506 FUN_148b06506 body=37 status=ok
// SIG undefined FUN_148b06506(void)

void FUN_148b06506(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b0ac32();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b065b8 FUN_148b065b8 body=214 status=ok
// SIG undefined FUN_148b065b8(void)

void FUN_148b065b8(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0xa8);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0xa0);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0682a FUN_148b0682a body=151 status=ok
// SIG undefined FUN_148b0682a(void)

void FUN_148b0682a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b0ac3a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b068c2 FUN_148b068c2 body=154 status=ok
// SIG undefined FUN_148b068c2(void)

void FUN_148b068c2(undefined8 param_1,longlong param_2)

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
  FUN_148b0abe0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0695e FUN_148b0695e body=175 status=ok
// SIG undefined FUN_148b0695e(void)

void FUN_148b0695e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b098cc(param_1,param_1 + 0x40,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06a0e FUN_148b06a0e body=177 status=ok
// SIG undefined FUN_148b06a0e(void)

void FUN_148b06a0e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)((longlong)param_1 + 0x3c) != local_1c) ||
     (NAN(*(float *)((longlong)param_1 + 0x3c)) || NAN(local_1c))) {
    *(float *)((longlong)param_1 + 0x3c) = local_1c;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06ac0 FUN_148b06ac0 body=177 status=ok
// SIG undefined FUN_148b06ac0(void)

void FUN_148b06ac0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 10) != local_1c) || (NAN(*(float *)(param_1 + 10)) || NAN(local_1c))) {
    *(float *)(param_1 + 10) = local_1c;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06b72 FUN_148b06b72 body=177 status=ok
// SIG undefined FUN_148b06b72(void)

void FUN_148b06b72(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)((longlong)param_1 + 0x34) != local_1c) ||
     (NAN(*(float *)((longlong)param_1 + 0x34)) || NAN(local_1c))) {
    *(float *)((longlong)param_1 + 0x34) = local_1c;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06c24 FUN_148b06c24 body=179 status=ok
// SIG undefined FUN_148b06c24(void)

void FUN_148b06c24(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((double)param_1[0xf] != local_20) || (NAN((double)param_1[0xf]) || NAN(local_20))) {
    param_1[0xf] = (longlong)local_20;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06cd8 FUN_148b06cd8 body=260 status=ok
// SIG undefined FUN_148b06cd8(void)

void FUN_148b06cd8(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  ppvVar1 = (void **)(param_1 + 0xa0);
  if (ppvVar1 != &local_38) {
    iVar2 = (int)uStack_30;
    lVar3 = (longlong)(int)uStack_30;
    *(int *)(param_1 + 0xa8) = (int)uStack_30;
    if ((int)uStack_30 == 0 && *(int *)(param_1 + 0xac) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_30 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06dde FUN_148b06dde body=185 status=ok
// SIG undefined FUN_148b06dde(void)

void FUN_148b06dde(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((double)param_1[0x13] != local_20) || (NAN((double)param_1[0x13]) || NAN(local_20))) {
    param_1[0x13] = (longlong)local_20;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06e9c FUN_148b06e9c body=170 status=ok
// SIG undefined FUN_148b06e9c(void)

void FUN_148b06e9c(longlong *param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)((longlong)param_1 + 0x72) != (local_1c != 0)) {
    *(bool *)((longlong)param_1 + 0x72) = local_1c != 0;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06f4c FUN_148b06f4c body=170 status=ok
// SIG undefined FUN_148b06f4c(void)

void FUN_148b06f4c(longlong *param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)((longlong)param_1 + 0x71) != (local_1c != 0)) {
    *(bool *)((longlong)param_1 + 0x71) = local_1c != 0;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b06ff8 FUN_148b06ff8 body=177 status=ok
// SIG undefined FUN_148b06ff8(void)

void FUN_148b06ff8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)((longlong)param_1 + 0x2c) != local_1c) ||
     (NAN(*(float *)((longlong)param_1 + 0x2c)) || NAN(local_1c))) {
    *(float *)((longlong)param_1 + 0x2c) = local_1c;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b070ae FUN_148b070ae body=170 status=ok
// SIG undefined FUN_148b070ae(void)

void FUN_148b070ae(longlong *param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)((longlong)param_1 + 0x54) != (local_1c != 0)) {
    *(bool *)((longlong)param_1 + 0x54) = local_1c != 0;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0715a FUN_148b0715a body=185 status=ok
// SIG undefined FUN_148b0715a(void)

void FUN_148b0715a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((double)param_1[0x16] != local_20) || (NAN((double)param_1[0x16]) || NAN(local_20))) {
    param_1[0x16] = (longlong)local_20;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b07214 FUN_148b07214 body=177 status=ok
// SIG undefined FUN_148b07214(void)

void FUN_148b07214(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 6) != local_1c) || (NAN(*(float *)(param_1 + 6)) || NAN(local_1c))) {
    *(float *)(param_1 + 6) = local_1c;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b072ca FUN_148b072ca body=170 status=ok
// SIG undefined FUN_148b072ca(void)

void FUN_148b072ca(longlong *param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)((longlong)param_1 + 0x5a) != (local_1c != 0)) {
    *(bool *)((longlong)param_1 + 0x5a) = local_1c != 0;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0737a FUN_148b0737a body=170 status=ok
// SIG undefined FUN_148b0737a(void)

void FUN_148b0737a(longlong *param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)((longlong)param_1 + 0x59) != (local_1c != 0)) {
    *(bool *)((longlong)param_1 + 0x59) = local_1c != 0;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b07426 FUN_148b07426 body=163 status=ok
// SIG undefined FUN_148b07426(void)

void FUN_148b07426(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)((longlong)param_1 + 0x55) != local_19) {
    *(char *)((longlong)param_1 + 0x55) = local_19;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b074ca FUN_148b074ca body=163 status=ok
// SIG undefined FUN_148b074ca(void)

void FUN_148b074ca(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((char)param_1[0xb] != local_19) {
    *(char *)(param_1 + 0xb) = local_19;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0756e FUN_148b0756e body=163 status=ok
// SIG undefined FUN_148b0756e(void)

void FUN_148b0756e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)((longlong)param_1 + 0x57) != local_19) {
    *(char *)((longlong)param_1 + 0x57) = local_19;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b07612 FUN_148b07612 body=163 status=ok
// SIG undefined FUN_148b07612(void)

void FUN_148b07612(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)((longlong)param_1 + 0x56) != local_19) {
    *(char *)((longlong)param_1 + 0x56) = local_19;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b076b6 FUN_148b076b6 body=177 status=ok
// SIG undefined FUN_148b076b6(void)

void FUN_148b076b6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 7) != local_1c) || (NAN(*(float *)(param_1 + 7)) || NAN(local_1c))) {
    *(float *)(param_1 + 7) = local_1c;
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b077c0 FUN_148b077c0 body=139 status=ok
// SIG undefined FUN_148b077c0(void)

void FUN_148b077c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b0ad68(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b07850 FUN_148b07850 body=117 status=ok
// SIG undefined FUN_148b07850(void)

undefined8 FUN_148b07850(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong *)(param_1 + 0x180);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_148b078c6(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b078c6 FUN_148b078c6 body=85 status=ok
// SIG undefined FUN_148b078c6(void)

undefined8 * FUN_148b078c6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 3;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14101deec(param_1,uVar2 & 0xffffffff,0);
    FUN_14101de9c(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 148b0791c FUN_148b0791c body=97 status=ok
// SIG undefined FUN_148b0791c(void)

void FUN_148b0791c(longlong param_1)

{
  undefined1 auStack_38 [32];
  float local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148af4c60();
  local_18 = 0.0;
  if (*(char *)(param_1 + 0x160) == '\x01') {
    local_18 = (float)*(double *)(param_1 + 0x158);
  }
  local_14 = 1;
  FUN_145bcdc2c();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0797e FUN_148b0797e body=82 status=ok
// SIG undefined FUN_148b0797e(void)

void FUN_148b0797e(longlong param_1)

{
  undefined1 auStack_38 [32];
  float local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148af4c82();
  local_18 = (float)*(double *)(param_1 + 0x168);
  local_14 = 1;
  FUN_145bcdc2c();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b079d2 FUN_148b079d2 body=49 status=ok
// SIG undefined FUN_148b079d2(void)

undefined8 FUN_148b079d2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = FUN_1400b6e86();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148b079f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x18))(lVar1 + 0x30);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148b07a04 FUN_148b07a04 body=59 status=ok
// SIG undefined FUN_148b07a04(void)

longlong FUN_148b07a04(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar3) == *param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 + -8 != lVar3;
      lVar3 = lVar3 + 8;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 148b07a40 FUN_148b07a40 body=16 status=ok
// SIG undefined FUN_148b07a40(void)

byte FUN_148b07a40(void)

{
  byte bVar1;
  
  bVar1 = FUN_148b07a50();
  return bVar1 ^ 1;
}



// FUNCTION 148b07a50 FUN_148b07a50 body=531 status=ok
// SIG undefined FUN_148b07a50(void)

byte FUN_148b07a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  byte bVar11;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)FUN_14107a740();
  if (plVar7 == (longlong *)0x0) {
    bVar11 = 0;
    goto LAB_148b07bb7;
  }
  local_90 = *(undefined8 *)(param_1 + 0x140);
  local_88 = *(undefined8 *)(param_1 + 0x148);
  local_80 = *(undefined8 *)(param_1 + 0x150);
  local_78 = *(longlong **)(param_1 + 0x158);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_70 = *(undefined8 *)(param_1 + 0x160);
  lVar8 = FUN_14107a740(param_1);
  uVar3 = local_a0;
  if (lVar8 == 0) {
LAB_148b07b8a:
    local_a0 = uVar3;
    bVar11 = 0;
  }
  else {
    plVar9 = (longlong *)FUN_14107a796(lVar8,*(undefined8 *)(param_1 + 0x138));
    iVar10 = 0;
    uVar3 = local_a0;
    if (plVar9 == (longlong *)0x0) goto LAB_148b07b8a;
    plVar1 = plVar9 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)plVar9[5] != 0) {
      FUN_1449c0562(&local_68);
      iVar10 = (int)plVar9[5];
    }
    local_a0 = local_58;
    uVar3 = local_a0;
    local_98 = local_50;
    local_94 = local_4c;
    local_b0 = local_68;
    local_a8 = local_60;
    local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_b8 = plVar9;
    if ((local_a0._4_4_ == iVar10) && (local_60 == plVar1)) goto LAB_148b07b8a;
    bVar11 = 0;
    iVar6 = local_a0._4_4_;
    local_a0 = uVar3;
    do {
      lVar8 = (longlong)iVar6 * 0x90 + *local_b8;
      cVar4 = (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar8,&local_90);
      if (cVar4 != '\0') {
        bVar5 = FUN_1438c05e2(lVar8);
        bVar11 = bVar11 | bVar5;
      }
      local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
      FUN_1449c0562(&local_b0);
      iVar6 = local_a0._4_4_;
    } while (local_b8 != plVar9 || (local_a8 != plVar1 || local_a0._4_4_ != iVar10));
  }
  plVar7 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_78 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_148b07bb7:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar11 & 1;
}



// FUNCTION 148b07c64 FUN_148b07c64 body=342 status=ok
// SIG undefined FUN_148b07c64(void)

void FUN_148b07c64(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8 [5];
  undefined8 local_80 [4];
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = FUN_1400b6e86();
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x30) + 0x18))(lVar3 + 0x30);
      if (plVar4 != (longlong *)0x0) {
        FUN_147fa0330(local_80);
        local_80[0] = *(undefined8 *)(param_1 + 0x138);
        local_a8[2] = 0;
        local_a8[3] = 0;
        local_a8[0] = 0;
        local_a8[1] = 0;
        (**(code **)(*plVar4 + 0x2e8))(plVar4,local_80);
        iVar2 = *(int *)(param_1 + 0x1c8);
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x1c0);
          lVar5 = 0;
          do {
            local_80[0] = *(undefined8 *)(lVar3 + lVar5);
            (**(code **)(*plVar4 + 0x2e8))(plVar4,local_80,local_a8);
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar2 * 8 != lVar5);
        }
        FUN_1459ca14e(param_1,0);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_60 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b07dbc FUN_148b07dbc body=277 status=ok
// SIG undefined FUN_148b07dbc(void)

void FUN_148b07dbc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x170);
  lVar2 = param_1 + 0x180;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x198) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x198);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      FUN_148b07ed2(param_1,*(undefined1 *)(*local_78 + (longlong)iStack_5c * 0x28));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b07ed2 FUN_148b07ed2 body=458 status=ok
// SIG undefined FUN_148b07ed2(void)

undefined8 FUN_148b07ed2(longlong param_1,undefined1 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8 [5];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar7 = FUN_140230656(param_3);
  if ((cVar7 == '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
    lVar8 = FUN_1400b6e86();
    if (lVar8 != 0) {
      plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x30) + 0x18))(lVar8 + 0x30);
      if (plVar9 != (longlong *)0x0) {
        FUN_147fa0330(local_a8 + 4);
        plVar6 = local_68;
        local_a8[4] = *(undefined8 *)(param_1 + 0x138);
        local_78 = *param_3;
        local_70 = param_3[1];
        plVar4 = (longlong *)param_3[2];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_80 = param_2;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            puVar5 = (undefined8 *)*local_68;
            local_68 = plVar4;
            (*(code *)*puVar5)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar4 = local_68;
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              plVar4 = local_68;
            }
          }
        }
        local_68 = plVar4;
        if (*(longlong *)(param_1 + 0x1d0) != 0) {
          local_60 = *(longlong *)(param_1 + 0x1d0);
        }
        local_a8[2] = 0;
        local_a8[3] = 0;
        local_a8[0] = 0;
        local_a8[1] = 0;
        (**(code **)(*plVar9 + 0x2d8))(plVar9,local_a8 + 4);
        iVar3 = *(int *)(param_1 + 0x1c8);
        if ((longlong)iVar3 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x1c0);
          lVar11 = 0;
          do {
            local_a8[4] = *(undefined8 *)(lVar8 + lVar11);
            (**(code **)(*plVar9 + 0x2d8))(plVar9,local_a8 + 4,local_a8);
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar3 * 8 != lVar11);
        }
        FUN_1459ca14e(param_1,0);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        plVar9 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_68 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        uVar10 = 1;
        goto LAB_148b07f0d;
      }
    }
  }
  uVar10 = 0;
LAB_148b07f0d:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0809e FUN_148b0809e body=659 status=ok
// SIG undefined FUN_148b0809e(void)

void FUN_148b0809e(longlong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [40];
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  undefined4 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80 [2];
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1410fa8b6();
  (**(code **)(*param_1 + 0x2f0))(param_1);
  FUN_140056680(&local_50,L"Default");
  pvVar1 = local_50;
  local_60 = (void *)0x0;
  lVar4 = (longlong)local_48;
  local_58 = local_48;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_48,0);
    memcpy(local_60,pvVar1,lVar4 * 2);
  }
  FUN_1458433a4(param_1,&local_60);
  FUN_1400b22c2(local_80,"GamepadPreset_Default");
  FUN_1412459d2(local_70,local_80);
  pvVar1 = local_50;
  local_90 = (void *)0x0;
  local_88 = local_48;
  if ((longlong)local_48 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_48,0);
    memcpy(local_90,pvVar1,(longlong)local_48 * 2);
  }
  FUN_14100d696(param_1,&local_90,local_70);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = DAT_14cb0d2b0;
  lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar4 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar4 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar4 == 0) goto LAB_148b0820e;
  }
  lVar2 = FUN_1459f1f8c();
  if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       == lVar2 + 0x30)) && ((longlong)*(int *)(lVar4 + 0x2a0) != 0)) {
    lVar2 = *(longlong *)(lVar4 + 0x298);
    lVar4 = (longlong)*(int *)(lVar4 + 0x2a0) * 0x28;
    do {
      lVar3 = FUN_1412bf9f0(lVar2);
      if (lVar3 != 0) {
        lVar3 = FUN_1412bf9f0(lVar2);
        local_a0 = *(longlong **)(lVar3 + 0x40);
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 8))();
        }
        local_98 = *(undefined4 *)(lVar3 + 0x48);
        lVar3 = FUN_1412bf9f0(lVar2);
        local_b0 = (void *)0x0;
        local_a8 = *(int *)(lVar3 + 0x38);
        lVar5 = (longlong)local_a8;
        pvVar1 = *(void **)(lVar3 + 0x30);
        if (lVar5 == 0) {
          local_a4 = 0;
        }
        else {
          FUN_1446dd670(&local_b0,local_a8,0);
          memcpy(local_b0,pvVar1,lVar5 * 2);
        }
        FUN_14100d696(param_1,&local_b0);
      }
      lVar2 = lVar2 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
LAB_148b0820e:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b08332 FUN_148b08332 body=463 status=ok
// SIG undefined FUN_148b08332(void)

void FUN_148b08332(longlong param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    uVar2 = FUN_145b84bf4();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
    lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (lVar4 != 0) {
      local_40 = (void *)0x0;
      local_38 = *(int *)(lVar4 + 0xa8);
      lVar5 = (longlong)local_38;
      pvVar1 = *(void **)(lVar4 + 0xa0);
      if (lVar5 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,pvVar1,lVar5 * 2);
      }
      if ((void **)(param_1 + 0x198) == &local_40) {
        if (local_40 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x198) != 0) {
          FUN_1400020a8();
        }
        *(void **)(param_1 + 0x198) = local_40;
        *(int *)(param_1 + 0x1a0) = local_38;
        *(undefined4 *)(param_1 + 0x1a4) = local_34;
      }
      local_40 = (void *)0x0;
      local_38 = *(int *)(lVar4 + 0xa8);
      lVar5 = (longlong)local_38;
      pvVar1 = *(void **)(lVar4 + 0xa0);
      if (lVar5 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,pvVar1,lVar5 * 2);
      }
      if ((void **)(param_1 + 0x1a8) == &local_40) {
        if (local_40 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1a8) != 0) {
          FUN_1400020a8();
        }
        *(void **)(param_1 + 0x1a8) = local_40;
        *(int *)(param_1 + 0x1b0) = local_38;
        *(undefined4 *)(param_1 + 0x1b4) = local_34;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b08502 FUN_148b08502 body=320 status=ok
// SIG undefined FUN_148b08502(void)

void FUN_148b08502(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  FUN_148b08642();
  lVar2 = DAT_14cb0d2b0;
  lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar7 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar7 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar7 == 0) {
      return;
    }
  }
  lVar2 = FUN_1459f1f8c();
  if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       != lVar2 + 0x30)) || ((longlong)*(int *)(lVar7 + 0x2a0) == 0)) {
    return;
  }
  lVar2 = *(longlong *)(lVar7 + 0x298);
  lVar7 = lVar2 + (longlong)*(int *)(lVar7 + 0x2a0) * 0x28;
LAB_148b08576:
  lVar3 = FUN_1412bf9f0(lVar2);
  if (lVar3 != 0) {
    lVar3 = FUN_1412bf9f0(lVar2);
    iVar1 = *(int *)(lVar3 + 0x38);
    if (iVar1 == *(int *)(param_1 + 0x1a0)) {
      if (1 < iVar1) {
        lVar8 = 0;
        do {
          uVar5 = *(ushort *)(*(longlong *)(lVar3 + 0x30) + lVar8);
          uVar6 = (ulonglong)uVar5;
          uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x198) + lVar8);
          if (uVar5 == uVar9) {
            if (uVar5 == 0) break;
          }
          else {
            if (0x7f < (uVar9 | uVar5)) goto LAB_148b0861f;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar10 = (ulonglong)uVar9;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar10]) goto LAB_148b0861f;
          }
          lVar8 = lVar8 + 2;
        } while( true );
      }
      goto LAB_148b08626;
    }
    if (*(int *)(param_1 + 0x1a0) + iVar1 == 1) goto LAB_148b08626;
  }
  goto LAB_148b085f0;
LAB_148b0861f:
  if (uVar5 == uVar9) {
LAB_148b08626:
    uVar4 = FUN_1412bf9f0(lVar2);
    FUN_148b088b4(param_1,uVar4);
    return;
  }
LAB_148b085f0:
  lVar2 = lVar2 + 0x28;
  if (lVar2 == lVar7) {
    return;
  }
  goto LAB_148b08576;
}



// FUNCTION 148b08642 FUN_148b08642 body=624 status=ok
// SIG undefined FUN_148b08642(void)

void FUN_148b08642(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0 [4];
  longlong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*(longlong *)(param_1 + 0x58) != 0) && (lVar5 = FUN_1400b6e86(), lVar5 != 0)) &&
      ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
     ((plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar5 + 0x30) + 0x18))(lVar5 + 0x30),
      lVar5 = DAT_14cb0d2b0, plVar6 != (longlong *)0x0 && ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0)
      ))) {
    lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar7 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar7 = *(longlong *)(lVar5 + 0x2c8);
      if (lVar7 == 0) goto LAB_148b086ad;
    }
    lVar5 = FUN_1459f1f8c();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && ((longlong)*(int *)(lVar7 + 0x2a0) != 0)) {
      lVar5 = *(longlong *)(lVar7 + 0x298);
      local_d0 = lVar5 + (longlong)*(int *)(lVar7 + 0x2a0) * 0x28;
      do {
        lVar7 = FUN_1412bf9f0(lVar5);
        if (lVar7 != 0) {
          lVar7 = FUN_1412bf9f0(lVar5);
          iVar3 = *(int *)(lVar7 + 0x38);
          if (iVar3 == *(int *)(param_1 + 0x1b0)) {
            if (1 < iVar3) {
              lVar10 = 0;
              while( true ) {
                uVar8 = *(ushort *)(*(longlong *)(lVar7 + 0x30) + lVar10);
                uVar9 = (ulonglong)uVar8;
                uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x1a8) + lVar10);
                if (uVar8 != uVar11) break;
                if (uVar8 == 0) goto LAB_148b087d2;
LAB_148b0878f:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar8) < 0x80) {
                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_148b0878f;
              }
              if (uVar8 != uVar11) goto LAB_148b08882;
            }
          }
          else if (*(int *)(param_1 + 0x1b0) + iVar3 != 1) goto LAB_148b08882;
LAB_148b087d2:
          lVar7 = FUN_1412bf9f0(lVar5);
          iVar3 = *(int *)(lVar7 + 0x58);
          if ((longlong)iVar3 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x50);
            lVar10 = 0;
            do {
              if (*(longlong *)(lVar7 + lVar10) != 0) {
                FUN_147fa0330(local_a0);
                local_a0[0] = *(undefined8 *)(lVar7 + lVar10);
                local_b8 = 0;
                uStack_b0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                (**(code **)(*plVar6 + 0x2e8))(plVar6,local_a0);
                if (local_b8 != 0) {
                  FUN_1400020a8();
                }
                if (local_c8 != 0) {
                  FUN_1400020a8();
                }
                plVar4 = local_80;
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_80 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_80)(local_80);
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
              lVar10 = lVar10 + 0x20;
            } while ((longlong)iVar3 * 0x20 != lVar10);
          }
        }
LAB_148b08882:
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != local_d0);
    }
  }
LAB_148b086ad:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b088b4 FUN_148b088b4 body=461 status=ok
// SIG undefined FUN_148b088b4(void)

void FUN_148b088b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8 [5];
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((param_2 != 0 && *(longlong *)(param_1 + 0x58) != 0) &&
        (lVar8 = FUN_1400b6e86(), lVar8 != 0)) && ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) &&
      ((plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x30) + 0x18))(lVar8 + 0x30),
       plVar9 != (longlong *)0x0 && ((*(uint *)(plVar9 + 1) >> 0x1e & 1) == 0)))) &&
     (iVar4 = *(int *)(param_2 + 0x58), (longlong)iVar4 != 0)) {
    lVar8 = *(longlong *)(param_2 + 0x50);
    lVar10 = 0;
    do {
      if ((*(longlong *)(lVar8 + lVar10) != 0) &&
         (cVar7 = FUN_1403e7f2a(lVar8 + 8 + lVar10), cVar7 != '\0')) {
        FUN_147fa0330(&local_a0);
        plVar3 = local_80;
        local_a0 = *(undefined8 *)(lVar8 + lVar10);
        local_90 = *(undefined8 *)(lVar8 + 8 + lVar10);
        local_88 = *(undefined8 *)(lVar8 + 0x10 + lVar10);
        plVar5 = *(longlong **)(lVar8 + 0x18 + lVar10);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            puVar6 = (undefined8 *)*local_80;
            local_80 = plVar5;
            (*(code *)*puVar6)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar5 = local_80;
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              plVar5 = local_80;
            }
          }
        }
        local_80 = plVar5;
        local_98 = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        (**(code **)(*plVar9 + 0x2d8))(plVar9,&local_a0,local_c8);
        if (local_c8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_80 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_80)(local_80);
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
      lVar10 = lVar10 + 0x20;
    } while ((longlong)iVar4 * 0x20 != lVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b08a82 FUN_148b08a82 body=456 status=ok
// SIG undefined FUN_148b08a82(void)

void FUN_148b08a82(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459ca1d6();
  FUN_148b08642(param_1);
  FUN_140e5f3c8(param_1,&local_40);
  if ((longlong *)(param_1 + 0x1a8) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x1a8) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x1b0) = local_38;
    *(undefined4 *)(param_1 + 0x1b4) = local_34;
  }
  lVar2 = DAT_14cb0d2b0;
  lVar10 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar10 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar10 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar10 == 0) goto LAB_148b08b4a;
  }
  lVar2 = FUN_1459f1f8c();
  if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       == lVar2 + 0x30)) && ((longlong)*(int *)(lVar10 + 0x2a0) != 0)) {
    lVar2 = *(longlong *)(lVar10 + 0x298);
    lVar10 = lVar2 + (longlong)*(int *)(lVar10 + 0x2a0) * 0x28;
LAB_148b08b8f:
    lVar3 = FUN_1412bf9f0(lVar2);
    if (lVar3 == 0) goto LAB_148b08c01;
    lVar3 = FUN_1412bf9f0(lVar2);
    iVar1 = *(int *)(lVar3 + 0x38);
    if (iVar1 == *(int *)(param_1 + 0x1b0)) {
      if (1 < iVar1) {
        lVar7 = 0;
        do {
          uVar5 = *(ushort *)(*(longlong *)(lVar3 + 0x30) + lVar7);
          uVar6 = (ulonglong)uVar5;
          uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x1a8) + lVar7);
          if (uVar5 == uVar8) {
            if (uVar5 == 0) break;
          }
          else {
            if (0x7f < (uVar8 | uVar5)) goto LAB_148b08c2c;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_148b08c2c;
          }
          lVar7 = lVar7 + 2;
        } while( true );
      }
    }
    else if (*(int *)(param_1 + 0x1b0) + iVar1 != 1) goto LAB_148b08c01;
    goto LAB_148b08c33;
  }
LAB_148b08b4a:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148b08c2c:
  if (uVar5 == uVar8) {
LAB_148b08c33:
    uVar4 = FUN_1412bf9f0(lVar2);
    FUN_148b088b4(param_1,uVar4);
    goto LAB_148b08b4a;
  }
LAB_148b08c01:
  lVar2 = lVar2 + 0x28;
  if (lVar2 == lVar10) goto LAB_148b08b4a;
  goto LAB_148b08b8f;
}



// FUNCTION 148b08c4c FUN_148b08c4c body=412 status=ok
// SIG undefined FUN_148b08c4c(void)

/* WARNING: Removing unreachable block (ram,0x000148b08d5d) */

void FUN_148b08c4c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1410fa8b6();
  (**(code **)(*param_1 + 0x2f0))(param_1);
  uVar7 = FUN_140008f10();
  FUN_140e825f0(uVar7,&local_58,4);
  if ((longlong)local_50 == 0) {
    local_50 = 0;
  }
  else {
    lVar10 = (longlong)local_50 << 4;
    lVar8 = local_58;
    do {
      uVar7 = FUN_140d5712e();
      cVar6 = FUN_140e8284a(uVar7,lVar8);
      if (cVar6 != '\0') {
        uVar7 = FUN_140d5712e();
        FUN_14588f6b4(uVar7,&local_78,lVar8);
        uVar7 = FUN_14142d800(local_78);
        FUN_144a2b0a4(uVar7,&local_68);
        iVar3 = (int)param_1[0x28];
        *(uint *)(param_1 + 0x28) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x144) < iVar3 + 1U) {
          FUN_1447a1bd6(param_1 + 0x27,iVar3);
        }
        plVar5 = local_70;
        lVar4 = param_1[0x27];
        lVar9 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar4 + lVar9) = 0;
        *(undefined8 *)(lVar4 + lVar9) = local_68;
        *(undefined4 *)(lVar4 + 8 + lVar9) = (undefined4)local_60;
        *(undefined4 *)(lVar4 + 0xc + lVar9) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
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
      }
      lVar8 = lVar8 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  FUN_1447a1747(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


