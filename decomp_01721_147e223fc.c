// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e223fc FUN_147e223fc body=108 status=ok
// SIG undefined FUN_147e223fc(void)

void FUN_147e223fc(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 147e2246c FUN_147e2246c body=81 status=ok
// SIG undefined FUN_147e2246c(void)

undefined8 FUN_147e2246c(longlong param_1)

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



// FUNCTION 147e224c4 FUN_147e224c4 body=89 status=ok
// SIG undefined FUN_147e224c4(void)

bool FUN_147e224c4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147e2250f;
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
LAB_147e2250f:
  return lVar6 == param_2;
}



// FUNCTION 147e2251e FUN_147e2251e body=118 status=ok
// SIG undefined FUN_147e2251e(void)

void FUN_147e2251e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab634a0;
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



// FUNCTION 147e22594 FUN_147e22594 body=156 status=ok
// SIG undefined FUN_147e22594(void)

void FUN_147e22594(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab634a0;
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
                    /* WARNING: Could not recover jumptable at 0x000147e22620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e22630 FUN_147e22630 body=94 status=ok
// SIG undefined FUN_147e22630(void)

void FUN_147e22630(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147e22678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e22683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 147e2268e FUN_147e2268e body=183 status=ok
// SIG undefined FUN_147e2268e(void)

undefined8 *
FUN_147e2268e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  *param_1 = &PTR_FUN_14ab65df0;
  param_1[1] = *(undefined8 *)(param_5 + 2);
  *(undefined4 *)(param_1 + 2) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  FUN_14485c47a((longlong)param_1 + 0x14,*(undefined8 *)(param_5 + 4));
  param_1[4] = param_4;
  param_1[5] = *param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 1);
  param_1[7] = 0;
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 9) = 0;
  cVar1 = FUN_1437ea2c4(param_1);
  uVar5 = 2;
  if (cVar1 != '\0') {
    uVar2 = FUN_14050fd64();
    uVar3 = FUN_1400d690e(param_1 + 5);
    uVar4 = FUN_144a79cc8(param_4);
    FUN_1470e55f8(uVar2,uVar4,uVar3,0);
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 9) = uVar5;
  return param_1;
}



// FUNCTION 147e22746 FUN_147e22746 body=88 status=ok
// SIG undefined FUN_147e22746(void)

bool FUN_147e22746(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x410);
  if (plVar1 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*plVar1 + 0xab8))(plVar1,&local_18);
    bVar2 = local_18 == 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e227a0 FUN_147e227a0 body=19 status=ok
// SIG undefined FUN_147e227a0(void)

ulonglong FUN_147e227a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong lStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  if (*(longlong *)(param_1 + 0x410) == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(*(longlong *)(param_1 + 0x410),&lStack_28);
  if (lStack_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&lStack_28 >> 8),3 < *(int *)(lStack_28 + 500));
  }
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plStack_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_20 + 0x10))(plStack_20);
      }
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e227b4 FUN_147e227b4 body=178 status=ok
// SIG undefined FUN_147e227b4(void)

void FUN_147e227b4(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 == '\x02') {
    **(undefined1 **)(param_1 + 0x40) = 2;
    uVar4 = *(undefined8 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\x01') {
        return;
      }
      cVar2 = FUN_147e22866(param_1 + 0x28);
      if (cVar2 == '\0') {
        return;
      }
      FUN_1437ea344(param_1);
      return;
    }
    **(undefined1 **)(param_1 + 0x40) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar1;
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = uVar7;
  *(undefined4 *)(lVar3 + 8 + lVar6 * 0x14) = uVar5;
  *(undefined8 *)(lVar3 + 0xc + lVar6 * 0x14) = uVar4;
  return;
}



// FUNCTION 147e22866 FUN_147e22866 body=69 status=ok
// SIG undefined FUN_147e22866(void)

undefined8 FUN_147e22866(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14cb1aeb8;
  if ((*param_1 != 0) && ((int)param_1[1] - 1U < 0xfffffffe)) {
    uVar1 = FUN_14050fd64();
    uVar2 = FUN_1470e575c(uVar1,*param_1,uVar2,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e228d4 FUN_147e228d4 body=277 status=ok
// SIG undefined FUN_147e228d4(void)

void FUN_147e228d4(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 *param_9)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x3b8);
  }
  local_68 = *param_9;
  uStack_64 = param_9[1];
  uStack_60 = param_9[2];
  uStack_5c = param_9[3];
  local_58 = *(longlong *)(param_9 + 4);
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_70 = *(undefined4 *)(param_6 + 1);
  local_b0 = &local_78;
  local_78 = *param_6;
  local_90 = *param_2;
  local_88 = *(undefined4 *)(param_2 + 1);
  local_80 = 0;
  local_98 = &local_68;
  local_a0 = param_8;
  local_a8 = param_7;
  local_b8 = param_5;
  FUN_145828bae(param_1,&local_90,uVar1,param_4);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e229ea FUN_147e229ea body=22 status=ok
// SIG undefined FUN_147e229ea(void)

undefined8 FUN_147e229ea(undefined8 param_1)

{
  FUN_145828d8c();
  return param_1;
}



// FUNCTION 147e22a00 FUN_147e22a00 body=23 status=ok
// SIG undefined FUN_147e22a00(void)

longlong FUN_147e22a00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 0x10) = *param_2;
  return param_1;
}



// FUNCTION 147e22a18 FUN_147e22a18 body=57 status=ok
// SIG undefined FUN_147e22a18(void)

void FUN_147e22a18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14ab66bd0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  uVar2 = param_3[1];
  param_1[3] = *param_3;
  param_1[4] = uVar2;
  param_1[6] = param_4;
  return;
}



// FUNCTION 147e22a52 FUN_147e22a52 body=193 status=ok
// SIG undefined FUN_147e22a52(void)

void FUN_147e22a52(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar5 != 0) && (FUN_1403679b6(&local_20,lVar5), local_18 != (longlong *)0x0)) {
    iVar4 = (int)local_18[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_18[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_18 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_18;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_20 != 0) {
        FUN_147e2582a(local_20,2);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e22b14 FUN_147e22b14 body=193 status=ok
// SIG undefined FUN_147e22b14(void)

void FUN_147e22b14(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar5 != 0) && (FUN_1403679b6(&local_20,lVar5), local_18 != (longlong *)0x0)) {
    iVar4 = (int)local_18[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_18[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_18 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_18;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_20 != 0) {
        FUN_147e2582a(local_20,1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e22bd6 FUN_147e22bd6 body=135 status=ok
// SIG undefined FUN_147e22bd6(void)

longlong * FUN_147e22bd6(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x000147e22c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar2 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
        return plVar2;
      }
    }
    lVar4 = FUN_140929c72();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      return param_1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147e22c5e FUN_147e22c5e body=30 status=ok
// SIG undefined FUN_147e22c5e(void)

undefined8 FUN_147e22c5e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145758774();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xbc8);
  }
  return uVar2;
}



// FUNCTION 147e22c7c FUN_147e22c7c body=349 status=ok
// SIG undefined FUN_147e22c7c(void)

undefined8 * FUN_147e22c7c(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
LAB_147e22d04:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x4000;
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_1401b0f18();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 == (longlong *)0x0) {
LAB_147e22cda:
      lVar5 = FUN_140fb058a(param_2);
      if (lVar5 == 0) goto LAB_147e22d04;
      *param_1 = *(undefined8 *)(lVar5 + 0x9d8);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar5 + 0x9e0);
    }
    else {
      uVar2 = FUN_1401b0f18();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) goto LAB_147e22cda;
      uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
      FUN_1406c9d00(uVar2,&local_38);
      if (local_30 == 0) {
        uVar2 = FUN_140927942();
        local_30 = FUN_14477b664(uVar2);
      }
      if (((local_28 == 0) && (local_30 != 0)) && (local_38 != 0)) {
        plVar3 = *(longlong **)(local_30 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
          local_28 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
          local_28 = FUN_144aff482(uVar2,&local_38);
        }
      }
      FUN_144a79b68(param_1);
      *(undefined4 *)(param_1 + 1) = 0x4000;
    }
    param_1[2] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e22dda FUN_147e22dda body=23 status=ok
// SIG undefined FUN_147e22dda(void)

undefined4 FUN_147e22dda(longlong *param_1,longlong *param_2)

{
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),
                  (int)param_1[1] == (int)param_2[1] && *param_1 == *param_2);
}



// FUNCTION 147e22df2 FUN_147e22df2 body=89 status=ok
// SIG undefined FUN_147e22df2(void)

undefined4 FUN_147e22df2(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147e22c7c(&local_30,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT31((int3)((uint)(int)param_2[1] >> 8),
                    local_28 == (int)param_2[1] && local_30 == *param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e22e4c FUN_147e22e4c body=399 status=ok
// SIG undefined FUN_147e22e4c(void)

void FUN_147e22e4c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar2 = *param_3;
    lVar3 = param_3[1];
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    uVar7 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    uVar6 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4);
    uVar7 = uVar6 >> 0xd ^
            ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar4 >> 4)) - uVar6;
    uVar10 = uVar7 << 8 ^ (-0x61c88647 - uVar6) - uVar7;
    uVar5 = uVar10 >> 0xd ^ (uVar6 - uVar7) - uVar10;
    uVar4 = uVar5 >> 0xc ^ (uVar7 - uVar10) - uVar5;
    uVar7 = uVar4 << 0x10 ^ (uVar10 - uVar5) - uVar4;
    uVar6 = uVar7 >> 5 ^ (uVar5 - uVar4) - uVar7;
    uVar5 = uVar6 >> 3 ^ (uVar4 - uVar7) - uVar6;
    uVar7 = uVar5 << 10 ^ (uVar7 - uVar6) - uVar5;
    lVar9 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x178);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x180) - 1U &
                             (uVar7 >> 0xf ^ uVar6 - (uVar5 + uVar7))) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar8 * 0x28);
        if ((*plVar1 == lVar2) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x138) + 8 + (longlong)iVar8 * 0x28) == lVar3)) {
          if (plVar1 != (longlong *)0x0) {
            *param_2 = plVar1[2];
            lVar2 = plVar1[3];
            param_2[1] = lVar2;
            if (lVar2 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar8 = (int)plVar1[4];
      } while (iVar8 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 147e22fdc FUN_147e22fdc body=122 status=ok
// SIG undefined FUN_147e22fdc(void)

undefined4 FUN_147e22fdc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447e6dee(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(local_28 + 0x58);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23058 FUN_147e23058 body=309 status=ok
// SIG undefined FUN_147e23058(void)

void FUN_147e23058(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  if (((((param_2 != 0) && (*(longlong *)(param_2 + 0xa8) != 0)) &&
       (cVar3 = FUN_1449e2a3e(), cVar3 == '\0')) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) &&
     ((bVar1 = *(byte *)(lVar4 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar2 = *(int *)(param_1 + 0x498);
    *(uint *)(param_1 + 0x498) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x49c) < iVar2 + 1U) {
      FUN_147e27b9e((longlong *)(param_1 + 0x490),iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar2 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    cVar3 = FUN_147e2318e(param_2);
    if (cVar3 == '\0') {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar2 = *(int *)(param_1 + 0x458);
      *(uint *)(param_1 + 0x458) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x45c) < iVar2 + 1U) {
        FUN_147e27b9e((longlong *)(param_1 + 0x450),iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar2 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e2318e FUN_147e2318e body=130 status=ok
// SIG undefined FUN_147e2318e(void)

ulonglong FUN_147e2318e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),(*(uint *)(local_28 + 500) & 0xfffffffd) != 0
                    );
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23212 FUN_147e23212 body=581 status=ok
// SIG undefined FUN_147e23212(void)

void FUN_147e23212(longlong param_1,undefined8 ******param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *****pppppuVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 ******local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 ******local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((param_2 == (undefined8 ******)0x0) || (param_2[0x15] == (undefined8 *****)0x0)) ||
       (cVar7 = FUN_1449e2a3e(), cVar7 != '\0')) || (lVar8 = FUN_1447210f0(param_1), lVar8 == 0)) ||
     ((bVar2 = *(byte *)(lVar8 + 0x152), bVar2 != 1 &&
      ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))))) goto LAB_147e2324e;
  pppppuVar4 = param_2[0x15];
  if (pppppuVar4 != (undefined8 *****)0x0) {
    lVar8 = FUN_140929c72();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(pppppuVar4[2] + 7)) &&
       (pppppuVar4[2][6][*(int *)(lVar8 + 0x38)] == (undefined8 **)(lVar8 + 0x30))) {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (undefined8 *******)0x0;
      uStack_80 = 0;
      local_68 = 0;
      FUN_1400bbfae(local_58,pppppuVar4);
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
      uStack_70 = CONCAT44(uStack_44,local_48);
      cVar7 = (*(code *)PTR_FUN_14c758760)();
      if (cVar7 == '\0') {
LAB_147e23414:
        FUN_14485c47a(&local_88,pppppuVar4);
      }
      else {
        uVar3 = *(uint *)((longlong)pppppuVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_147e23414;
        local_88 = (undefined8 *******)0x0;
      }
      local_58[0] = &local_88;
      FUN_147e27c24(param_1 + 0x468);
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_58[0] = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  local_88 = local_58;
  FUN_140515ca2(param_1 + 0x490);
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x440);
    plVar1 = plVar9 + (longlong)*(int *)(param_1 + 0x448) * 5;
    do {
      lVar8 = plVar9[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar5 = *plVar9;
        lVar10 = 0;
        do {
          plVar6 = *(longlong **)(lVar5 + lVar10);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x2a8))(plVar6,param_2);
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)(int)lVar8 * 8 != lVar10);
      }
      plVar6 = (longlong *)plVar9[2];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x2a8))(plVar6,param_2);
      }
      plVar9 = plVar9 + 5;
    } while (plVar9 != plVar1);
  }
LAB_147e2324e:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e23458 FUN_147e23458 body=72 status=ok
// SIG undefined FUN_147e23458(void)

void FUN_147e23458(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e234a0 FUN_147e234a0 body=72 status=ok
// SIG undefined FUN_147e234a0(void)

void FUN_147e234a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e234e8 FUN_147e234e8 body=107 status=ok
// SIG undefined FUN_147e234e8(void)

void FUN_147e234e8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + lVar4) == '\x01') {
        lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) goto LAB_147e23532;
        (*(code *)*param_2)(param_2[1],lVar3);
      }
LAB_147e23532:
      lVar4 = lVar4 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar4 != 0);
  }
  return;
}



// FUNCTION 147e23554 FUN_147e23554 body=375 status=ok
// SIG undefined FUN_147e23554(void)

void FUN_147e23554(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x30);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    pcVar2 = *(char **)(param_1 + 0x28);
    if (*pcVar2 == '\x01') {
      lVar5 = *(longlong *)(pcVar2 + 8);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
    }
    else {
      lVar5 = 0;
    }
    iVar7 = 0;
    iVar9 = 0;
    bVar4 = lVar5 == param_2;
    do {
      lVar5 = (longlong)iVar9;
      iVar3 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar6 = lVar5 * 0x38;
      plVar8 = (longlong *)(pcVar2 + lVar6 + 0x40);
      iVar10 = iVar9;
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar3;
        if (lVar13 <= lVar5) break;
        if ((char)plVar8[-1] == '\x01') {
          lVar12 = *plVar8;
          if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
            FUN_1456cec3c(lVar12);
          }
        }
        else {
          lVar12 = 0;
        }
        iVar10 = iVar10 + 1;
        plVar8 = plVar8 + 7;
        iVar11 = iVar10;
      } while (bVar4 == (lVar12 == param_2));
      if (!bVar4) {
        if (iVar7 != iVar9) {
          memmove(pcVar2 + (longlong)iVar7 * 0x38,pcVar2 + lVar6,(longlong)(iVar11 - iVar9) * 0x38);
        }
        iVar7 = iVar7 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar5 < lVar13);
    *(int *)(param_1 + 0x30) = iVar7;
  }
  return;
}



// FUNCTION 147e236cc FUN_147e236cc body=107 status=ok
// SIG undefined FUN_147e236cc(void)

void FUN_147e236cc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + lVar4) == '\x01') {
        lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) goto LAB_147e23716;
        (*(code *)*param_2)(param_2[1],lVar3);
      }
LAB_147e23716:
      lVar4 = lVar4 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar4 != 0);
  }
  return;
}



// FUNCTION 147e23738 FUN_147e23738 body=375 status=ok
// SIG undefined FUN_147e23738(void)

void FUN_147e23738(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    pcVar2 = *(char **)(param_1 + 0x30);
    if (*pcVar2 == '\x01') {
      lVar5 = *(longlong *)(pcVar2 + 8);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
    }
    else {
      lVar5 = 0;
    }
    iVar7 = 0;
    iVar9 = 0;
    bVar4 = lVar5 == param_2;
    do {
      lVar5 = (longlong)iVar9;
      iVar3 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar6 = lVar5 * 0x38;
      plVar8 = (longlong *)(pcVar2 + lVar6 + 0x40);
      iVar10 = iVar9;
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar3;
        if (lVar13 <= lVar5) break;
        if ((char)plVar8[-1] == '\x01') {
          lVar12 = *plVar8;
          if ((DAT_14c950c29 == 1) && (lVar12 != 0)) {
            FUN_1456cec3c(lVar12);
          }
        }
        else {
          lVar12 = 0;
        }
        iVar10 = iVar10 + 1;
        plVar8 = plVar8 + 7;
        iVar11 = iVar10;
      } while (bVar4 == (lVar12 == param_2));
      if (!bVar4) {
        if (iVar7 != iVar9) {
          memmove(pcVar2 + (longlong)iVar7 * 0x38,pcVar2 + lVar6,(longlong)(iVar11 - iVar9) * 0x38);
        }
        iVar7 = iVar7 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar5 < lVar13);
    *(int *)(param_1 + 0x38) = iVar7;
  }
  return;
}



// FUNCTION 147e238b0 FUN_147e238b0 body=112 status=ok
// SIG undefined FUN_147e238b0(void)

bool FUN_147e238b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,5);
  if (uVar1 == local_2c) {
    (**(code **)(*param_3 + 0x138))(param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23922 FUN_147e23922 body=73 status=ok
// SIG undefined FUN_147e23922(void)

void FUN_147e23922(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147e2396c FUN_147e2396c body=73 status=ok
// SIG undefined FUN_147e2396c(void)

void FUN_147e2396c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147e239b6 FUN_147e239b6 body=73 status=ok
// SIG undefined FUN_147e239b6(void)

void FUN_147e239b6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0x38 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar4);
  }
  return;
}



// FUNCTION 147e23a00 FUN_147e23a00 body=73 status=ok
// SIG undefined FUN_147e23a00(void)

void FUN_147e23a00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0x38 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar4);
  }
  return;
}



// FUNCTION 147e23a4a FUN_147e23a4a body=71 status=ok
// SIG undefined FUN_147e23a4a(void)

void FUN_147e23a4a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0x38 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar4);
  }
  return;
}



// FUNCTION 147e23a92 FUN_147e23a92 body=283 status=ok
// SIG undefined FUN_147e23a92(void)

void FUN_147e23a92(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 **local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78,param_1);
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar6 = (longlong)*(int *)(param_1 + 0x38) << 6;
    do {
      plVar1 = *(longlong **)(lVar5 + 0x38);
      if (plVar1 != (longlong *)0x0) {
        FUN_1447c3578(lVar5,local_a0,local_78);
        cVar3 = FUN_144a7fca4(local_a0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppuVar4 = local_a0;
          if (0x18 < local_88) {
            pppuVar4 = (undefined8 ***)local_a0[0];
          }
          (*pcVar2)(pppuVar4);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(local_a0[0]);
        }
        if (cVar3 != '\0') {
          (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2);
        }
      }
      lVar5 = lVar5 + 0x40;
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  FUN_144a5ac3a(local_78);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23bc0 FUN_147e23bc0 body=127 status=ok
// SIG undefined FUN_147e23bc0(void)

ulonglong FUN_147e23bc0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),3 < *(int *)(local_28 + 500));
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23c40 FUN_147e23c40 body=19 status=ok
// SIG undefined FUN_147e23c40(void)

bool FUN_147e23c40(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  longlong *plStack_28;
  ulonglong uStack_20;
  
  if (*(longlong *)(param_1 + 0x410) == 0) {
    return false;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(*(longlong *)(param_1 + 0x410),&lStack_30);
  if (lStack_30 == 0) {
    bVar5 = false;
    goto LAB_1401c0133;
  }
  if (param_2 == '\x02') {
    bVar5 = false;
    if (*(int *)(lStack_30 + 500) != 5) goto LAB_1401c0133;
LAB_1401c0190:
    iVar4 = 0;
    lVar3 = 0x18c;
  }
  else {
    if (param_2 == '\x01') goto LAB_1401c0190;
    iVar4 = 5;
    lVar3 = 500;
  }
  bVar5 = *(int *)(lStack_30 + lVar3) == iVar4;
LAB_1401c0133:
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plStack_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 147e23c54 FUN_147e23c54 body=19 status=ok
// SIG undefined FUN_147e23c54(void)

undefined4 FUN_147e23c54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong lStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  if (*(longlong *)(param_1 + 0x410) == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(*(longlong *)(param_1 + 0x410),&lStack_28);
  uVar3 = 0;
  if ((lStack_28 != 0) && (*(longlong **)(lStack_28 + 0x150) != (longlong *)0x0)) {
    uVar3 = (**(code **)(**(longlong **)(lStack_28 + 0x150) + 0x38))();
  }
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plStack_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_20 + 0x10))(plStack_20);
      }
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23c68 FUN_147e23c68 body=134 status=ok
// SIG undefined FUN_147e23c68(void)

undefined4 FUN_147e23c68(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(param_1,&local_28);
  uVar3 = 0;
  if ((local_28 != 0) && (*(longlong **)(local_28 + 0x150) != (longlong *)0x0)) {
    uVar3 = (**(code **)(**(longlong **)(local_28 + 0x150) + 0x38))();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23cf0 FUN_147e23cf0 body=19 status=ok
// SIG undefined FUN_147e23cf0(void)

int FUN_147e23cf0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  longlong *plStack_28;
  ulonglong uStack_20;
  
  if (*(longlong *)(param_1 + 0x410) == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(*(longlong *)(param_1 + 0x410),&lStack_30);
  if (lStack_30 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == '\x01') {
    iVar3 = *(int *)(lStack_30 + 0x184);
  }
  else if (param_2 == '\x02') {
    iVar3 = *(int *)(lStack_30 + 0x184) + *(int *)(lStack_30 + 0x180);
  }
  else {
    iVar3 = *(int *)(lStack_30 + 0x180);
  }
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plStack_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23d04 FUN_147e23d04 body=161 status=ok
// SIG undefined FUN_147e23d04(void)

int FUN_147e23d04(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(param_1,&local_30);
  if (local_30 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == '\x01') {
    iVar3 = *(int *)(local_30 + 0x184);
  }
  else if (param_2 == '\x02') {
    iVar3 = *(int *)(local_30 + 0x184) + *(int *)(local_30 + 0x180);
  }
  else {
    iVar3 = *(int *)(local_30 + 0x180);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23da6 FUN_147e23da6 body=19 status=ok
// SIG undefined FUN_147e23da6(void)

int FUN_147e23da6(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  longlong *plStack_28;
  ulonglong uStack_20;
  
  if (*(longlong *)(param_1 + 0x410) == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(*(longlong *)(param_1 + 0x410),&lStack_30);
  if (lStack_30 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == '\x01') {
    iVar3 = *(int *)(lStack_30 + 0x184) - *(int *)(lStack_30 + 0x18c);
  }
  else if (param_2 == '\x02') {
    iVar3 = (*(int *)(lStack_30 + 0x184) + *(int *)(lStack_30 + 0x180)) -
            (*(int *)(lStack_30 + 0x188) + *(int *)(lStack_30 + 0x18c));
  }
  else {
    iVar3 = *(int *)(lStack_30 + 0x180) - *(int *)(lStack_30 + 0x188);
  }
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plStack_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23dba FUN_147e23dba body=187 status=ok
// SIG undefined FUN_147e23dba(void)

int FUN_147e23dba(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(param_1,&local_30);
  if (local_30 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == '\x01') {
    iVar3 = *(int *)(local_30 + 0x184) - *(int *)(local_30 + 0x18c);
  }
  else if (param_2 == '\x02') {
    iVar3 = (*(int *)(local_30 + 0x184) + *(int *)(local_30 + 0x180)) -
            (*(int *)(local_30 + 0x188) + *(int *)(local_30 + 0x18c));
  }
  else {
    iVar3 = *(int *)(local_30 + 0x180) - *(int *)(local_30 + 0x188);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23e76 FUN_147e23e76 body=17 status=ok
// SIG undefined FUN_147e23e76(void)

void FUN_147e23e76(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  
  lVar1 = *(longlong *)(param_1 + 0x410);
  if (lVar1 == 0) {
    return;
  }
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1400d690e(param_2);
  lStack_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_140927942();
  lVar4 = FUN_14477b664(uVar3);
  lVar5 = FUN_140927942();
  uVar3 = FUN_140927942();
  FUN_1402d1bfa(&lStack_40,uVar3,uVar2);
  if (lStack_40 != 0) {
    uStack_48 = 0;
  }
  lStack_58 = lStack_40;
  lVar6 = FUN_140927942();
  if (lVar5 != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_147e23f35;
    }
    if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_147e23f35;
  }
  lVar6 = lVar5;
LAB_147e23f35:
  if (lVar4 != lVar6) {
    uStack_48 = 0;
  }
  uVar3 = FUN_14477b664(lVar6);
  lStack_50 = FUN_14477b664(uVar3);
  if (lStack_50 != 0 && lStack_40 != 0) {
    uStack_48 = uVar2;
  }
  FUN_14052f9ee(lVar1,&lStack_58,param_3);
  if ((uStack_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23e88 FUN_147e23e88 body=285 status=ok
// SIG undefined FUN_147e23e88(void)

void FUN_147e23e88(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1400d690e(param_2);
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_140927942();
  lVar3 = FUN_14477b664(uVar2);
  lVar4 = FUN_140927942();
  uVar2 = FUN_140927942();
  FUN_1402d1bfa(&local_40,uVar2,uVar1);
  if (local_40 != 0) {
    uStack_48 = 0;
  }
  local_58 = local_40;
  lVar5 = FUN_140927942();
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_147e23f35;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_147e23f35;
  }
  lVar5 = lVar4;
LAB_147e23f35:
  if (lVar3 != lVar5) {
    uStack_48 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_50 = FUN_14477b664(uVar2);
  if (local_50 != 0 && local_40 != 0) {
    uStack_48 = uVar1;
  }
  FUN_14052f9ee(param_1,&local_58,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e23fa6 FUN_147e23fa6 body=153 status=ok
// SIG undefined FUN_147e23fa6(void)

void FUN_147e23fa6(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    uVar2 = FUN_14119d0a4(lVar1);
    lVar1 = FUN_147e27e30(uVar2,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4));
    if (lVar1 == 0) {
      uVar3 = FUN_14001cc68(0x50,0x10);
      FUN_147e2268e(uVar3,param_2,param_3,param_1,param_4);
      FUN_140b1330e(uVar2,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 147e24058 FUN_147e24058 body=45 status=ok
// SIG undefined FUN_147e24058(void)

undefined8 * FUN_147e24058(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x410) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1412b3ab6(*(longlong *)(param_1 + 0x410),param_2);
  }
  return param_2;
}



// FUNCTION 147e24086 FUN_147e24086 body=15 status=ok
// SIG undefined FUN_147e24086(void)

void FUN_147e24086(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147e24092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5c8))(param_1,0);
  return;
}



// FUNCTION 147e24096 FUN_147e24096 body=195 status=ok
// SIG undefined FUN_147e24096(void)

void FUN_147e24096(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_147e249fe(local_38,local_48);
  FUN_14029d0b6(param_2 + 8,local_38);
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
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2415a FUN_147e2415a body=401 status=ok
// SIG undefined FUN_147e2415a(void)

void FUN_147e2415a(char *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == '\x02') {
    lVar6 = *(longlong *)(param_1 + 0x28);
    if (lVar6 == 0) {
      uVar5 = FUN_145ef056c();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x28) = lVar6;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
LAB_147e242c9:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    if (((lVar6 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
       (plVar3 = *(longlong **)(lVar6 + 0xb8), plVar3 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,param_1 + 0x20);
        *(longlong *)(param_1 + 0x30) = lVar6;
        if (lVar6 != 0) goto LAB_147e242c9;
      }
    }
  }
  *param_1 = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  local_50 = (longlong *)FUN_14001cc68(0x28,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14ab66d00;
  local_58 = local_50 + 2;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[2] = (longlong)&PTR_FUN_14ab5d330;
  FUN_140901bb4(local_48);
  FUN_14029d0b6(param_1 + 8,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e24300 FUN_147e24300 body=78 status=ok
// SIG undefined FUN_147e24300(void)

undefined8 * FUN_147e24300(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0xbc8) == 0) ||
      (cVar1 = FUN_1447e6c72(*(longlong *)(param_1 + 0xbc8),param_1), uVar2 = DAT_14cb1aff0,
      cVar1 != '\0')) && (uVar2 = DAT_14cb1aff8, *(char *)(param_1 + 0x848) != '\0')) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 147e2434e FUN_147e2434e body=40 status=ok
// SIG undefined FUN_147e2434e(void)

int FUN_147e2434e(longlong param_1,char param_2)

{
  if (param_2 == '\x01') {
    return *(int *)(param_1 + 0x18c);
  }
  if (param_2 == '\x02') {
    return *(int *)(param_1 + 0x18c) + *(int *)(param_1 + 0x188);
  }
  return *(int *)(param_1 + 0x188);
}



// FUNCTION 147e24384 FUN_147e24384 body=45 status=ok
// SIG undefined FUN_147e24384(void)

undefined8 FUN_147e24384(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1400d690e(param_1 + 0x1e0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e243a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e243b2 FUN_147e243b2 body=455 status=ok
// SIG undefined FUN_147e243b2(void)

void FUN_147e243b2(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    FUN_140136f76(param_1 + 0xb70,&local_30);
  }
  else {
    local_28 = (longlong *)param_2[1];
    local_30 = lVar3;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xba8);
  local_40 = local_30;
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  cVar6 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_40);
  if (cVar6 == '\0') {
    if (param_3 != '\0') {
      FUN_140af9c32(param_1);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0xbb0);
    *(longlong *)(param_1 + 0xba8) = local_30;
    *(longlong **)(param_1 + 0xbb0) = local_28;
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
    FUN_1401364da(param_1);
    plVar4 = *(longlong **)(param_1 + 0x828);
    if (plVar4 == (longlong *)0x0) {
LAB_147e24563:
      FUN_14092811c(param_1);
    }
    else {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_147e24563;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar8 = iVar7 == iVar5;
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar8);
      if (*(longlong *)(param_1 + 0x820) == 0) {
        FUN_14092811c(param_1);
      }
      else {
        FUN_140929af0();
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
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e2457a FUN_147e2457a body=226 status=ok
// SIG undefined FUN_147e2457a(void)

void FUN_147e2457a(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  puVar1 = (undefined4 *)(param_1 + 0x20);
  puVar6 = *(undefined4 **)(param_1 + 0xc0);
  puVar7 = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar7 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 200);
  lVar9 = (longlong)iVar2;
  if (lVar9 != 0) {
    lVar8 = lVar9 * 0x28;
    do {
      if (*(longlong *)(puVar7 + 8) == *param_2) {
        if (puVar7 != (undefined4 *)0x0) goto LAB_147e24620;
        break;
      }
      puVar7 = puVar7 + 10;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  *(uint *)(param_1 + 200) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar2 + 1U) {
    FUN_147e28078(puVar1,iVar2);
    puVar6 = *(undefined4 **)(param_1 + 0xc0);
  }
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = puVar1;
  }
  *(undefined8 *)(puVar6 + lVar9 * 10 + 4) = 0;
  *(undefined8 *)((longlong)(puVar6 + lVar9 * 10 + 4) + 8) = 0;
  *(undefined8 *)(puVar6 + lVar9 * 10) = 0;
  *(undefined8 *)((longlong)(puVar6 + lVar9 * 10) + 8) = 0;
  *(undefined8 *)(puVar6 + lVar9 * 10 + 8) = 0;
  puVar6 = *(undefined4 **)(param_1 + 0xc0);
  if (*(undefined4 **)(param_1 + 0xc0) == (undefined4 *)0x0) {
    puVar6 = puVar1;
  }
  puVar7 = puVar6 + lVar9 * 10;
  *(longlong *)(puVar6 + lVar9 * 10 + 8) = *param_2;
LAB_147e24620:
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar7 = *param_3;
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  FUN_14053cb00(puVar7 + 4,param_3 + 4);
  return;
}



// FUNCTION 147e2465c FUN_147e2465c body=80 status=ok
// SIG undefined FUN_147e2465c(void)

void FUN_147e2465c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(param_1 + 0x938)) {
    local_10 = param_2;
    FUN_147e28198(param_1 + 0x890,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e246ae FUN_147e246ae body=24 status=ok
// SIG undefined FUN_147e246ae(void)

void FUN_147e246ae(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e246c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x5c8))(param_2,0);
    return;
  }
  return;
}



// FUNCTION 147e246c6 FUN_147e246c6 body=58 status=ok
// SIG undefined FUN_147e246c6(void)

undefined8 * FUN_147e246c6(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14092c0b8();
  lVar1 = FUN_1409448ee(lVar1 + 0x98);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_14001e62a(lVar1,param_1);
  }
  return param_1;
}



// FUNCTION 147e24700 FUN_147e24700 body=219 status=ok
// SIG undefined FUN_147e24700(void)

void FUN_147e24700(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar7 = FUN_144a34e94(param_1 + 0x10c,1);
  if ((lVar7 != 0) && (plVar3 = *(longlong **)(param_1 + 0x120), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    if (*(longlong *)(param_1 + 0x118) != 0) {
      for (puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x118) + 0x4a8);
          puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
        lVar7 = puVar9[2];
        if (((lVar7 != param_1) && (lVar8 = FUN_14479d2ce(lVar7 + 0x10c), lVar8 != 0)) &&
           ((*(longlong *)(lVar8 + 0xa8) == 0 || (cVar5 = FUN_1449e2a3e(), cVar5 != '\0')))) {
          FUN_14092ac80(param_1,lVar7);
          goto LAB_147e2479f;
        }
      }
      FUN_14641adae(param_1);
    }
LAB_147e2479f:
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e247c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e247dc FUN_147e247dc body=100 status=ok
// SIG undefined FUN_147e247dc(void)

void FUN_147e247dc(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0xff;
  FUN_140513334(local_30);
  local_30[0] = 0;
  local_20 = 0;
  FUN_140513298(param_1,local_30);
  FUN_140513334(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e249b0 FUN_147e249b0 body=78 status=ok
// SIG undefined FUN_147e249b0(void)

void FUN_147e249b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == 0) || (lVar1 = FUN_145ef056c(), lVar1 == 0)) ||
     (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = param_2;
    }
  }
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 147e249fe FUN_147e249fe body=131 status=ok
// SIG undefined FUN_147e249fe(void)

undefined8 * FUN_147e249fe(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_1;
}



// FUNCTION 147e24a82 FUN_147e24a82 body=85 status=ok
// SIG undefined FUN_147e24a82(void)

longlong * FUN_147e24a82(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab66ce0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &PTR_FUN_14ab5d2e0;
  *param_2 = (longlong)(puVar1 + 2);
  param_2[1] = (longlong)puVar1;
  return param_2;
}



// FUNCTION 147e24ad8 FUN_147e24ad8 body=5 status=ok
// SIG undefined FUN_147e24ad8(void)

longlong FUN_147e24ad8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 147e24b06 FUN_147e24b06 body=38 status=ok
// SIG undefined FUN_147e24b06(void)

void FUN_147e24b06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb1b100);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14ab5d2e0;
  return;
}



// FUNCTION 147e24b2c FUN_147e24b2c body=44 status=ok
// SIG undefined FUN_147e24b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e24b2c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb1b10c = _DAT_14cb1b10c + -1;
  *param_1 = DAT_14cb1b100;
  DAT_14cb1b100 = param_1;
  return;
}



// FUNCTION 147e24b58 FUN_147e24b58 body=38 status=ok
// SIG undefined FUN_147e24b58(void)

void FUN_147e24b58(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab5d2e0;
  return;
}



// FUNCTION 147e24b7e FUN_147e24b7e body=22 status=ok
// SIG undefined FUN_147e24b7e(void)

undefined8 FUN_147e24b7e(int *param_1)

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
  
  plVar4 = DAT_14cb1b098;
  if (DAT_14cb1b098 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb1b098 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb1b098 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb1b098[0x3a] <= *(int *)((longlong)DAT_14cb1b098 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb1b098 + 0x300))(DAT_14cb1b098);
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



// FUNCTION 147e24b94 FUN_147e24b94 body=114 status=ok
// SIG undefined FUN_147e24b94(void)

longlong * FUN_147e24b94(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14ab66d40;
  puVar2[2] = &PTR_FUN_14ab67360;
  puVar2[3] = *param_3;
  lVar1 = param_3[1];
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  puVar2[6] = 0;
  *param_2 = (longlong)(puVar2 + 2);
  param_2[1] = (longlong)puVar2;
  return param_2;
}



// FUNCTION 147e24c06 FUN_147e24c06 body=313 status=ok
// SIG undefined FUN_147e24c06(void)

ulonglong FUN_147e24c06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar5 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar6 = FUN_140b5fd74();
  if (lVar5 == lVar6) {
    lVar5 = *param_2;
    cVar4 = FUN_144a43716(param_1 + 0x20,lVar5 + 0x20);
    if (cVar4 != '\0') {
      cVar4 = FUN_144a43716(param_1 + 0x58,lVar5 + 0x58);
      if ((cVar4 != '\0') && (*(char *)(param_1 + 0x88) == *(char *)(lVar5 + 0x88))) {
        cVar4 = FUN_144a43716(param_1 + 0x98,lVar5 + 0x98);
        if ((cVar4 != '\0') && (*(char *)(param_1 + 200) == *(char *)(lVar5 + 200))) {
          cVar4 = FUN_144a43716(param_1 + 0xd8,lVar5 + 0xd8);
          if ((cVar4 != '\0') && (*(int *)(param_1 + 0x110) == *(int *)(lVar5 + 0x110))) {
            cVar4 = FUN_147e289c9(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(lVar5 + 0x108));
            if (cVar4 != '\0') {
              cVar4 = FUN_144a43716(param_1 + 0x120,lVar5 + 0x120);
              if ((cVar4 != '\0') && (*(char *)(param_1 + 0x150) == *(char *)(lVar5 + 0x150))) {
                uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                                 *(longlong *)(param_1 + 0x154) == *(longlong *)(lVar5 + 0x154));
                goto LAB_147e24c2b;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_147e24c2b:
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 147e24d40 FUN_147e24d40 body=174 status=ok
// SIG undefined FUN_147e24d40(void)

undefined4 * FUN_147e24d40(longlong param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 200) == '\0') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    FUN_1447c3578(param_1 + 0xd0,local_40);
    uVar3 = FUN_144a7ecd0(local_40);
    *param_2 = uVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_40;
      if (0x18 < local_28) {
        pppuVar2 = (undefined8 ***)local_40[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e24df0 FUN_147e24df0 body=149 status=ok
// SIG undefined FUN_147e24df0(void)

undefined4 FUN_147e24df0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447c3578(param_1 + 0x18,local_40,param_2);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e24e86 FUN_147e24e86 body=223 status=ok
// SIG undefined FUN_147e24e86(void)

undefined8 * FUN_147e24e86(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x170);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab66d80;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x160);
  FUN_147e1ce62(plVar1);
  FUN_144983130(plVar3 + 5,param_1 + 0x28);
  *(undefined1 *)(plVar3 + 0x13) = *(undefined1 *)(param_1 + 0x60);
  FUN_144983130(plVar3 + 0xc,param_1 + 0x68);
  FUN_144983130(plVar3 + 0x25,param_1 + 0xa0);
  *(undefined1 *)(plVar3 + 0x2c) = *(undefined1 *)(param_1 + 0xd8);
  *(undefined8 *)((longlong)plVar3 + 0x164) = *(undefined8 *)(param_1 + 0xdc);
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 147e24f74 FUN_147e24f74 body=82 status=ok
// SIG undefined FUN_147e24f74(void)

bool FUN_147e24f74(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar5 = FUN_140cd38ec();
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
  return lVar4 == lVar5;
}



// FUNCTION 147e24fc6 FUN_147e24fc6 body=128 status=ok
// SIG undefined FUN_147e24fc6(void)

longlong * FUN_147e24fc6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab66d00;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14ab5d330;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 147e25064 FUN_147e25064 body=400 status=ok
// SIG undefined FUN_147e25064(void)

ulonglong FUN_147e25064(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar5 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar6 = FUN_140b8751a();
  if ((lVar5 == lVar6) && (lVar5 = *param_2, *(char *)(param_1 + 0x18) == *(char *)(lVar5 + 0x18)))
  {
    cVar4 = FUN_144a43716(param_1 + 0x28,lVar5 + 0x28);
    if (cVar4 != '\0') {
      cVar4 = FUN_144a43716(param_1 + 0x60,lVar5 + 0x60);
      if (cVar4 != '\0') {
        cVar4 = FUN_144a43716(param_1 + 0x98,lVar5 + 0x98);
        if ((cVar4 != '\0') && (*(char *)(param_1 + 200) == *(char *)(lVar5 + 200))) {
          cVar4 = FUN_144a43716(param_1 + 0xd8,lVar5 + 0xd8);
          if ((cVar4 != '\0') && (*(char *)(param_1 + 0x108) == *(char *)(lVar5 + 0x108))) {
            cVar4 = FUN_144a43716(param_1 + 0x118,lVar5 + 0x118);
            if ((cVar4 != '\0') && (*(int *)(param_1 + 0x150) == *(int *)(lVar5 + 0x150))) {
              cVar4 = FUN_147e289c9(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(lVar5 + 0x148))
              ;
              if (cVar4 != '\0') {
                cVar4 = FUN_144a43716(param_1 + 0x160,lVar5 + 0x160);
                if (cVar4 != '\0') {
                  cVar4 = FUN_144a43716(param_1 + 0x198,lVar5 + 0x198);
                  if (cVar4 != '\0') {
                    cVar4 = FUN_144a43716(param_1 + 0x1d0,lVar5 + 0x1d0);
                    if ((cVar4 != '\0') && (*(char *)(param_1 + 0x200) == *(char *)(lVar5 + 0x200)))
                    {
                      uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                                       *(longlong *)(param_1 + 0x204) ==
                                       *(longlong *)(lVar5 + 0x204));
                      goto LAB_147e25089;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_147e25089:
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 147e251f4 FUN_147e251f4 body=174 status=ok
// SIG undefined FUN_147e251f4(void)

undefined4 * FUN_147e251f4(longlong param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x108) == '\0') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    FUN_1447c3578(param_1 + 0x110,local_40);
    uVar3 = FUN_144a7ecd0(local_40);
    *param_2 = uVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_40;
      if (0x18 < local_28) {
        pppuVar2 = (undefined8 ***)local_40[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e252a4 FUN_147e252a4 body=149 status=ok
// SIG undefined FUN_147e252a4(void)

undefined4 FUN_147e252a4(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447c3578(param_1 + 0x58,local_40,param_2);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2533a FUN_147e2533a body=289 status=ok
// SIG undefined FUN_147e2533a(void)

undefined8 * FUN_147e2533a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x220);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab66de0;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x210);
  FUN_147e1d33c(plVar1);
  *(undefined1 *)(plVar3 + 5) = *(undefined1 *)(param_1 + 0x28);
  FUN_144983130(plVar3 + 6,param_1 + 0x30);
  FUN_144983130(plVar3 + 0xd,param_1 + 0x68);
  *(undefined1 *)(plVar3 + 0x1b) = *(undefined1 *)(param_1 + 0xa0);
  FUN_144983130(plVar3 + 0x14,param_1 + 0xa8);
  FUN_144983130(plVar3 + 0x2d,param_1 + 0xe0);
  FUN_144983130(plVar3 + 0x34,param_1 + 0x118);
  FUN_144983130(plVar3 + 0x3b,param_1 + 0x150);
  *(undefined1 *)(plVar3 + 0x42) = *(undefined1 *)(param_1 + 0x188);
  *(undefined8 *)((longlong)plVar3 + 0x214) = *(undefined8 *)(param_1 + 0x18c);
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 147e25470 FUN_147e25470 body=90 status=ok
// SIG undefined FUN_147e25470(void)

undefined8 FUN_147e25470(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      plVar2 = (longlong *)FUN_1400d690e(lVar3);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2), cVar1 != '\0')) {
        return 1;
      }
      lVar3 = lVar3 + 0xf8;
      lVar4 = lVar4 + -0xf8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147e254ca FUN_147e254ca body=87 status=ok
// SIG undefined FUN_147e254ca(void)

undefined8 FUN_147e254ca(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      plVar2 = (longlong *)FUN_1400d690e(lVar3);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x68))(plVar2), cVar1 != '\0')) {
        return 1;
      }
      lVar3 = lVar3 + 0xf8;
      lVar4 = lVar4 + -0xf8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147e25522 FUN_147e25522 body=38 status=ok
// SIG undefined FUN_147e25522(void)

undefined8 FUN_147e25522(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147e25548();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e2553a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e25548 FUN_147e25548 body=590 status=ok
// SIG undefined FUN_147e25548(void)

longlong FUN_147e25548(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [7];
  char local_2e1;
  longlong local_2e0;
  longlong local_2d8;
  byte local_2d0;
  longlong local_2c8 [64];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2c8[0] = param_1;
  FUN_1437eb802(&local_2d8);
  lVar7 = 0;
  if (local_2d0 == 0) {
    local_c8 = 0;
    local_c0 = 0x2000000000;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0x20;
    uStack_a0 = 0xffffffff;
    uStack_9c = 0;
    local_58 = 0;
    local_50 = 0;
    uVar2 = *(uint *)(param_1 + 0x98);
    if ((longlong)(int)uVar2 != 0) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar2);
      }
      FUN_147e28d5e(local_2c8,uVar2);
      uVar1 = (ulonglong)(((uVar2 >> 1) - 1) + (uint)(uVar2 >> 1 == 0)) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar7 & 0x1f);
      if ((uint)lVar7 < 4) {
        iVar4 = 0x10;
      }
      if (uVar2 < 4) {
        iVar4 = 0x10;
      }
      if (local_50 < iVar4) {
        local_50 = iVar4;
        FUN_147e28f50();
      }
      if ((longlong)*(int *)(param_1 + 0x98) == 0) {
LAB_147e256b4:
        lVar7 = 0;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x90);
        lVar8 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
        lVar9 = 0;
        do {
          lVar5 = FUN_1400d690e(lVar10);
          lVar7 = lVar9;
          local_2e0 = lVar5;
          if (lVar5 != 0) {
            local_2e1 = '\0';
            FUN_147e291de(local_2c8,local_2e8,&local_2e0,&local_2e1);
            if (local_2e1 == '\0') {
              uVar6 = FUN_1417fec38();
              cVar3 = FUN_1448093f4(lVar5,uVar6);
              if ((((cVar3 == '\0') ||
                   ((lVar5 = FUN_147e25548(lVar5), local_2e0 = lVar5, lVar5 != 0 &&
                    (FUN_147e291de(local_2c8,local_2e8,&local_2e0,&local_2e1), local_2e1 == '\0'))))
                  && (lVar7 = lVar5, lVar9 != 0)) &&
                 (lVar7 = FUN_147e1da0a(lVar9,lVar7), lVar7 == 0)) goto LAB_147e256b4;
            }
          }
          lVar10 = lVar10 + 0xf8;
          lVar8 = lVar8 + -0xf8;
          lVar9 = lVar7;
        } while (lVar8 != 0);
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147e28cb6(local_2c8);
  }
  if ((local_2d0 & 1) == 0) {
    *(int *)(local_2d8 + 0x28) = *(int *)(local_2d8 + 0x28) + -1;
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 147e25798 FUN_147e25798 body=35 status=ok
// SIG undefined FUN_147e25798(void)

undefined8 FUN_147e25798(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147e25548();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e257b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e257bc FUN_147e257bc body=59 status=ok
// SIG undefined FUN_147e257bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e257bc(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 == '\0') {
    fVar2 = *(float *)(param_1[6] + 0x30) * _DAT_14c761fec;
  }
  else {
    fVar2 = 3.4028235e+38;
  }
  *(float *)(param_1 + 0xcc) = fVar2;
  return;
}



// FUNCTION 147e257f8 FUN_147e257f8 body=37 status=ok
// SIG undefined FUN_147e257f8(void)

undefined8 FUN_147e257f8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_144b2c470(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e2582a FUN_147e2582a body=4402 status=ok
// SIG undefined FUN_147e2582a(void)

void FUN_147e2582a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  undefined8 *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 *local_148;
  longlong *plStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar7 = (undefined8 *)FUN_14479d2ce(param_1 + 8);
  if ((puVar7 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar7 + 0x155) & 0x20) == 0)) {
    cVar5 = FUN_140510976(param_1 + 0x1f0);
    if (cVar5 != '\0') {
      FUN_145758894(param_1 + 0x1f0);
    }
    local_178 = param_1;
    if (param_2 == 1) {
      plVar13 = (longlong *)(param_1 + 0x98);
      plVar15 = (longlong *)(param_1 + 0xa8);
      local_88 = (undefined8 *)&DAT_100000000;
      local_78 = (longlong *)&DAT_ffffffff;
      local_70 = 0;
      iVar12 = 0;
      plStack_80 = plVar15;
      if (*(int *)(param_1 + 0xc0) != 0) {
        FUN_1449c0562(&local_88);
        iVar12 = *(int *)(local_178 + 0xc0);
      }
      uStack_120 = local_78;
      plVar14 = uStack_120;
      local_118 = (undefined8 *)CONCAT44(local_6c,local_70);
      uStack_130 = local_88;
      local_128 = plStack_80;
      uStack_120._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar6 = uStack_120._4_4_;
      local_138 = plVar13;
      if ((uStack_120._4_4_ != iVar12) || (uStack_120 = plVar14, plStack_80 != plVar15)) {
        do {
          uStack_120 = plVar14;
          lVar10 = *(longlong *)(*local_138 + 0x10 + (longlong)iVar6 * 0x28);
          if ((*(char *)(lVar10 + 0xf8) == '\x01') &&
             ((*(int *)(lVar10 + 500) != 5 || (*(int *)(lVar10 + 0x18c) != 0)))) {
            FUN_1437eaf38();
          }
          uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
          FUN_1449c0562(&uStack_130);
          iVar6 = uStack_120._4_4_;
          plVar14 = uStack_120;
        } while (local_138 != plVar13 || (local_128 != plVar15 || uStack_120._4_4_ != iVar12));
      }
    }
    local_88 = puVar7;
    FUN_147e2989e(&local_138);
    lVar10 = lStack_110;
    puVar4 = local_118;
    plVar15 = uStack_120;
    plVar13 = local_128;
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + 1;
    UNLOCK();
    puVar8 = uStack_130;
LAB_147e25a2b:
    if (puVar8 != puVar4) {
      uVar3 = puVar8[2];
      FUN_14152b6d4(uVar3,1);
      FUN_140af96da(uVar3);
      for (puVar8 = (undefined8 *)FUN_147e29928(*puVar8); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)FUN_147e29928(*puVar8)) {
        lVar9 = FUN_1447210f0(puVar8[2]);
        if (lVar9 == *plVar15) goto LAB_147e25a2b;
      }
      puVar8 = (undefined8 *)0x0;
      goto LAB_147e25a2b;
    }
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + -1;
    UNLOCK();
    local_160 = puVar7;
    local_88 = puVar7;
    FUN_147e299e8(&local_138,&local_88);
    lVar10 = lStack_110;
    puVar7 = local_118;
    local_88 = uStack_130;
    plStack_80 = local_128;
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
    local_78 = uStack_120;
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + 1;
    UNLOCK();
    if (uStack_130 != local_118) {
      do {
        puVar8 = local_88;
        uVar3 = local_88[2];
        FUN_140af9c32(uVar3);
        FUN_140a6b612(uVar3);
        local_88 = (undefined8 *)FUN_140dba96c(*puVar8);
        FUN_147e29a72(&local_88);
      } while (local_88 != puVar7);
    }
    lVar9 = local_178;
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + -1;
    UNLOCK();
    *(undefined8 *)(local_178 + 0x618) = 0;
    plVar13 = *(longlong **)(local_178 + 0x620);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(local_178 + 0x620) = 0;
      LOCK();
      plVar15 = plVar13 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    iVar12 = *(int *)(lVar9 + 0x634);
    FUN_14641b3b7(*(undefined8 *)(lVar9 + 0x628),*(undefined4 *)(lVar9 + 0x630));
    *(undefined4 *)(lVar9 + 0x630) = 0;
    if ((iVar12 < 0) && (*(int *)(lVar9 + 0x634) != 0)) {
      FUN_147e29abc(lVar9 + 0x628);
    }
    if (*(int *)(lVar9 + 0x1bc) < 0) {
      *(undefined4 *)(lVar9 + 0x1b8) = 0;
      FUN_1447a8aa0(lVar9 + 0x1b0,0);
    }
    else {
      *(undefined4 *)(lVar9 + 0x1b8) = 0;
    }
    if (*(int *)(lVar9 + 0x1cc) < 0) {
      *(undefined4 *)(lVar9 + 0x1c8) = 0;
      FUN_1447a8aa0(lVar9 + 0x1c0,0);
    }
    else {
      *(undefined4 *)(lVar9 + 0x1c8) = 0;
    }
    lVar10 = FUN_14479d2ce((undefined8 *)(lVar9 + 0x638));
    if (lVar10 != 0) {
      if (((*(longlong *)(lVar10 + 0x820) != 0) && (*(longlong *)(lVar10 + 0x828) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar10 + 0x828) + 8))) {
        FUN_140a6b612(lVar10);
      }
      plVar13 = *(longlong **)(lVar10 + 0xa8);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x5c8))(plVar13,0);
      }
    }
    lVar10 = local_178;
    *(undefined8 *)(lVar9 + 0x638) = 0;
    *(undefined8 *)(lVar9 + 0x640) = 0;
    plVar13 = *(longlong **)(local_178 + 0x648);
    *(undefined8 *)(local_178 + 0x648) = 0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *(undefined8 *)(lVar10 + 0x650) = 0;
    *(undefined8 *)(lVar10 + 0x658) = 0;
    if (param_2 == 1) {
      lVar9 = lVar10 + 0x98;
      plVar13 = (longlong *)(lVar10 + 0x578);
      FUN_147e2719a(plVar13,lVar9);
      lVar17 = lVar10 + 0x138;
      plVar15 = (longlong *)(lVar10 + 0x5c8);
      FUN_147e27308(plVar15,lVar17);
      *(undefined4 *)(lVar10 + 0x570) = *(undefined4 *)(lVar10 + 0x1d0);
      *(undefined4 *)(lVar10 + 0x574) = *(undefined4 *)(lVar10 + 0x664);
      if (*(int *)(lVar10 + 0xa0) != *(int *)(lVar10 + 0xcc)) {
        FUN_147e29aec(lVar9);
        FUN_147e29c30(lVar9);
      }
      if (*(int *)(local_178 + 0x140) != *(int *)(local_178 + 0x16c)) {
        FUN_147e29d68(lVar17);
        FUN_147e29eac(lVar17);
      }
      lVar9 = local_178;
      iVar12 = 0;
      *(undefined4 *)(local_178 + 0x1d0) = 0;
      *(undefined4 *)(local_178 + 0x664) = 0;
      lVar10 = local_178 + 0x5d8;
      local_88 = (undefined8 *)0x100000000;
      local_78._0_4_ = 0xffffffff;
      local_78._4_4_ = 0;
      local_70 = 0;
      plStack_80 = (longlong *)lVar10;
      if (*(int *)(local_178 + 0x5f0) != 0) {
        FUN_1449c0562(&local_88);
        iVar12 = *(int *)(lVar9 + 0x5f0);
      }
      uStack_120._0_4_ = (uint)local_78;
      uStack_120._4_4_ = local_78._4_4_;
      local_118 = (undefined8 *)CONCAT44(local_6c,local_70);
      uStack_130 = local_88;
      local_128 = plStack_80;
      local_170 = plVar13;
      local_138 = plVar15;
      if ((local_78._4_4_ != iVar12) || (plStack_80 != (longlong *)lVar10)) {
        do {
          lVar9 = *local_138;
          lVar11 = (longlong)uStack_120._4_4_;
          lVar17 = *(longlong *)(lVar9 + 0x10 + lVar11 * 0x28);
          if (lVar17 != 0) {
            local_168 = (longlong *)(lVar9 + lVar11 * 0x28 + 0x10);
            if (*(char *)(lVar17 + 0x20) == '\x01') {
              *(undefined1 *)(lVar17 + 0x20) = 0;
              *(undefined8 *)(lVar17 + 0x18) = 0;
              lVar17 = *local_168;
            }
            plVar14 = (longlong *)FUN_14001cc68(0x70,0x10);
            plVar14[1] = (longlong)&DAT_100000001;
            *plVar14 = (longlong)&PTR_FUN_14ab66ee0;
            FUN_147e29fe4(plVar14 + 2,lVar17);
            plVar13 = local_170;
            if (plVar14 == (longlong *)0x0) {
              *local_168 = 0x10;
              plVar16 = *(longlong **)(lVar9 + 0x18 + lVar11 * 0x28);
              if (plVar16 != (longlong *)0x0) {
                *(undefined8 *)(lVar9 + lVar11 * 0x28 + 0x18) = 0;
LAB_147e25e78:
                LOCK();
                plVar2 = plVar16 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
                if (plVar14 != (longlong *)0x0) goto LAB_147e25ea2;
              }
            }
            else {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              *local_168 = (longlong)(plVar14 + 2);
              plVar16 = *(longlong **)(lVar9 + 0x18 + lVar11 * 0x28);
              if (plVar14 == plVar16) {
                LOCK();
                plVar16 = plVar14 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)*plVar16 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              else {
                *(longlong **)(lVar9 + lVar11 * 0x28 + 0x18) = plVar14;
                if (plVar16 != (longlong *)0x0) goto LAB_147e25e78;
              }
LAB_147e25ea2:
              LOCK();
              plVar16 = plVar14 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
          }
          uStack_120._0_4_ = (uint)uStack_120 & ~uStack_130._4_4_;
          FUN_1449c0562(&uStack_130);
        } while (local_138 != plVar15 ||
                 (local_128 != (longlong *)lVar10 || uStack_120._4_4_ != iVar12));
      }
      lVar10 = local_178;
      plVar15 = (longlong *)(local_178 + 0x588);
      local_88 = (undefined8 *)&DAT_100000000;
      local_78 = (longlong *)&DAT_ffffffff;
      local_70 = 0;
      iVar12 = 0;
      plStack_80 = plVar15;
      if (*(int *)(local_178 + 0x5a0) != 0) {
        FUN_1449c0562(&local_88);
        iVar12 = *(int *)(lVar10 + 0x5a0);
      }
      uStack_120 = local_78;
      plVar14 = uStack_120;
      local_118 = (undefined8 *)CONCAT44(local_6c,local_70);
      uStack_130 = local_88;
      local_128 = plStack_80;
      uStack_120._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar6 = uStack_120._4_4_;
      local_138 = plVar13;
      if ((uStack_120._4_4_ != iVar12) ||
         (lVar10 = local_178, uStack_120 = plVar14, plStack_80 != plVar15)) {
        do {
          uStack_120 = plVar14;
          lVar10 = *local_138 + (longlong)iVar6 * 0x28;
          plVar14 = (longlong *)(lVar10 + 0x10);
          lVar9 = *plVar14;
          if (*(char *)(lVar9 + 0xf8) == '\x01') {
            FUN_1437ead6c(lVar9);
            lVar9 = *plVar14;
          }
          puVar8 = (undefined8 *)FUN_14001cc68(0x240,0x10);
          puVar8[1] = &DAT_100000001;
          *puVar8 = &PTR_FUN_14ab66f00;
          puVar7 = puVar8 + 2;
          FUN_147e2a1ca(puVar7,lVar9);
          local_148 = puVar7;
          plStack_140 = puVar8;
          FUN_140929b2e(&local_148,puVar7);
          local_88 = (undefined8 *)*plVar14;
          plVar16 = *(longlong **)(lVar10 + 0x18);
          *plVar14 = (longlong)local_148;
          *(longlong **)(lVar10 + 0x18) = plStack_140;
          local_148 = local_88;
          plStack_140 = plVar16;
          plStack_80 = plVar16;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar16 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
          FUN_1449c0562(&uStack_130);
          lVar10 = local_178;
          iVar6 = uStack_120._4_4_;
          plVar14 = uStack_120;
        } while (local_138 != plVar13 || (local_128 != plVar15 || uStack_120._4_4_ != iVar12));
      }
    }
    else {
      if (param_2 == 2) {
        local_150 = lVar10 + 0x578;
        local_170 = (longlong *)(lVar10 + 0x98);
        FUN_147e2719a();
        local_158 = lVar10 + 0x5c8;
        plVar13 = (longlong *)(lVar10 + 0x138);
        FUN_147e27308(plVar13);
        *(undefined4 *)(lVar10 + 0x1d0) = *(undefined4 *)(lVar10 + 0x570);
        *(undefined4 *)(lVar10 + 0x664) = *(undefined4 *)(lVar10 + 0x574);
        lVar9 = lVar10 + 0x148;
        local_88 = (undefined8 *)0x100000000;
        local_78._0_4_ = 0xffffffff;
        local_78._4_4_ = 0;
        local_70 = 0;
        iVar12 = 0;
        plStack_80 = (longlong *)lVar9;
        if (*(int *)(lVar10 + 0x160) != 0) {
          FUN_1449c0562(&local_88);
          iVar12 = *(int *)(local_178 + 0x160);
        }
        uStack_120._0_4_ = (uint)local_78;
        uStack_120._4_4_ = local_78._4_4_;
        local_118 = (undefined8 *)CONCAT44(local_6c,local_70);
        uStack_130 = local_88;
        local_128 = plStack_80;
        local_138 = plVar13;
        if ((local_78._4_4_ != iVar12) || (plStack_80 != (longlong *)lVar9)) {
          do {
            lVar10 = *local_138;
            lVar11 = (longlong)uStack_120._4_4_;
            lVar17 = *(longlong *)(lVar10 + 0x10 + lVar11 * 0x28);
            if (lVar17 != 0) {
              local_168 = (longlong *)(lVar10 + lVar11 * 0x28 + 0x10);
              if (*(char *)(lVar17 + 0x20) == '\x01') {
                *(undefined1 *)(lVar17 + 0x20) = 0;
                *(undefined8 *)(lVar17 + 0x18) = 0;
                lVar17 = *local_168;
              }
              plVar15 = (longlong *)FUN_14001cc68(0x70,0x10);
              plVar15[1] = (longlong)&DAT_100000001;
              *plVar15 = (longlong)&PTR_FUN_14ab66ee0;
              FUN_147e29fe4(plVar15 + 2,lVar17);
              if (plVar15 == (longlong *)0x0) {
                *local_168 = 0x10;
                plVar14 = *(longlong **)(lVar10 + 0x18 + lVar11 * 0x28);
                if (plVar14 != (longlong *)0x0) {
                  *(undefined8 *)(lVar10 + lVar11 * 0x28 + 0x18) = 0;
LAB_147e2632e:
                  LOCK();
                  plVar16 = plVar14 + 1;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)*plVar16 == 0) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                    }
                  }
                  if (plVar15 != (longlong *)0x0) goto LAB_147e26354;
                }
              }
              else {
                LOCK();
                *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                UNLOCK();
                *local_168 = (longlong)(plVar15 + 2);
                plVar14 = *(longlong **)(lVar10 + 0x18 + lVar11 * 0x28);
                if (plVar15 == plVar14) {
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
                else {
                  *(longlong **)(lVar10 + lVar11 * 0x28 + 0x18) = plVar15;
                  if (plVar14 != (longlong *)0x0) goto LAB_147e2632e;
                }
LAB_147e26354:
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
            }
            uStack_120._0_4_ = (uint)uStack_120 & ~uStack_130._4_4_;
            FUN_1449c0562(&uStack_130);
          } while (local_138 != plVar13 ||
                   (local_128 != (longlong *)lVar9 || uStack_120._4_4_ != iVar12));
        }
        lVar10 = local_178;
        plVar13 = (longlong *)(local_178 + 0xa8);
        local_88 = (undefined8 *)&DAT_100000000;
        local_78 = (longlong *)&DAT_ffffffff;
        local_70 = 0;
        iVar12 = 0;
        plStack_80 = plVar13;
        if (*(int *)(local_178 + 0xc0) != 0) {
          FUN_1449c0562(&local_88);
          iVar12 = *(int *)(lVar10 + 0xc0);
        }
        uStack_120 = local_78;
        plVar15 = uStack_120;
        local_118 = (undefined8 *)CONCAT44(local_6c,local_70);
        uStack_130 = local_88;
        local_128 = plStack_80;
        local_138 = local_170;
        uStack_120._4_4_ = (int)((ulonglong)local_78 >> 0x20);
        iVar6 = uStack_120._4_4_;
        if ((uStack_120._4_4_ != iVar12) || (plStack_80 != plVar13)) {
          do {
            uStack_120 = plVar15;
            lVar9 = *local_138 + (longlong)iVar6 * 0x28;
            plVar15 = (longlong *)(lVar9 + 0x10);
            lVar17 = *plVar15;
            if (*(char *)(lVar17 + 0xf8) == '\x01') {
              FUN_1437ead6c(lVar17);
              lVar17 = *plVar15;
            }
            puVar8 = (undefined8 *)FUN_14001cc68(0x240,0x10);
            puVar8[1] = &DAT_100000001;
            *puVar8 = &PTR_FUN_14ab66f00;
            puVar7 = puVar8 + 2;
            FUN_147e2a1ca(puVar7,lVar17);
            local_148 = puVar7;
            plStack_140 = puVar8;
            FUN_140929b2e(&local_148,puVar7);
            local_88 = (undefined8 *)*plVar15;
            plVar14 = *(longlong **)(lVar9 + 0x18);
            *plVar15 = (longlong)local_148;
            *(longlong **)(lVar9 + 0x18) = plStack_140;
            local_148 = local_88;
            plStack_140 = plVar14;
            plStack_80 = plVar14;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar14 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
            uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_)
            ;
            FUN_1449c0562(&uStack_130);
            iVar6 = uStack_120._4_4_;
            plVar15 = uStack_120;
          } while (local_138 != local_170 || (local_128 != plVar13 || uStack_120._4_4_ != iVar12));
        }
        local_108 = 0;
        uStack_fc = 0;
        local_e8 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_118 = (undefined8 *)0x0;
        lStack_110 = 0;
        local_128 = (longlong *)0x0;
        uStack_120 = (longlong *)0x0;
        local_138 = (longlong *)0x0;
        uStack_130 = (undefined8 *)0x0;
        uStack_104 = 0x80;
        uStack_100 = 0xffffffff;
        local_c0 = 0;
        uStack_a8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        uStack_b8 = 0x8000000000;
        local_b0 = 0xffffffff;
        *(undefined8 *)(lVar10 + 0x570) = 0;
        FUN_147e27476(local_150);
        lVar9 = local_158;
      }
      else {
        if (*(int *)(lVar10 + 0xa0) != *(int *)(lVar10 + 0xcc)) {
          FUN_147e29aec(lVar10 + 0x98);
          FUN_147e29c30(lVar10 + 0x98);
        }
        if (*(int *)(lVar10 + 0x140) != *(int *)(lVar10 + 0x16c)) {
          FUN_147e29d68(lVar10 + 0x138);
          FUN_147e29eac(lVar10 + 0x138);
        }
        *(undefined4 *)(lVar10 + 0x1d0) = 0;
        *(undefined4 *)(lVar10 + 0x664) = 0;
        local_108 = 0;
        uStack_fc = 0;
        local_e8 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_118 = (undefined8 *)0x0;
        lStack_110 = 0;
        local_128 = (longlong *)0x0;
        uStack_120 = (longlong *)0x0;
        local_138 = (longlong *)0x0;
        uStack_130 = (undefined8 *)0x0;
        uStack_104 = 0x80;
        uStack_100 = 0xffffffff;
        local_c0 = 0;
        uStack_a8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        uStack_b8 = 0x8000000000;
        local_b0 = 0xffffffff;
        *(undefined8 *)(lVar10 + 0x570) = 0;
        FUN_147e27476(lVar10 + 0x578);
        lVar9 = lVar10 + 0x5c8;
      }
      FUN_147e27678(lVar9,&local_e0);
      FUN_1457dfa18(&local_138);
    }
    puVar7 = *(undefined8 **)(lVar10 + 0x38);
    while (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar7;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar8;
    }
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined4 *)(lVar10 + 0x48) = 0;
    FUN_147e2695e(lVar10 + 0xe8);
    puVar7 = *(undefined8 **)(lVar10 + 0x50);
    while (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar7;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar8;
    }
    *(undefined8 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x58) = 0;
    *(undefined4 *)(lVar10 + 0x60) = 0;
    puVar7 = *(undefined8 **)(lVar10 + 0x68);
    while (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar7;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar8;
    }
    *(undefined8 *)(lVar10 + 0x68) = 0;
    *(undefined8 *)(lVar10 + 0x70) = 0;
    *(undefined4 *)(lVar10 + 0x78) = 0;
    puVar7 = *(undefined8 **)(lVar10 + 0x80);
    while (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar7;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar8;
    }
    *(undefined8 *)(lVar10 + 0x80) = 0;
    *(undefined8 *)(lVar10 + 0x88) = 0;
    *(undefined4 *)(lVar10 + 0x90) = 0;
    puVar7 = *(undefined8 **)(lVar10 + 0x508);
    while (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar7;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar8;
    }
    *(undefined8 *)(lVar10 + 0x508) = 0;
    *(undefined8 *)(lVar10 + 0x510) = 0;
    *(undefined4 *)(lVar10 + 0x518) = 0;
    local_88 = local_160;
    FUN_147e299e8(&local_138,&local_88);
    lVar10 = lStack_110;
    puVar7 = local_118;
    local_88 = uStack_130;
    plStack_80 = local_128;
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
    local_78 = uStack_120;
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + 1;
    UNLOCK();
    if (uStack_130 != local_118) {
      do {
        puVar8 = local_88;
        if ((*(byte *)(local_88[2] + 0x9f) & 0x20) != 0) {
          FUN_14092811c();
        }
        local_88 = (undefined8 *)FUN_140dba96c(*puVar8);
        FUN_147e29a72(&local_88);
      } while (local_88 != puVar7);
    }
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + -1;
    UNLOCK();
    local_88 = local_160;
    FUN_147e2989e(&local_138);
    lVar10 = lStack_110;
    puVar8 = local_118;
    plVar15 = uStack_120;
    plVar13 = local_128;
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + 1;
    UNLOCK();
    puVar7 = uStack_130;
LAB_147e268f2:
    if (puVar7 != puVar8) {
      if ((*(byte *)(puVar7[2] + 0x65) & 0x18) == 0x10) {
        FUN_140e04a4a();
      }
      for (puVar7 = (undefined8 *)FUN_147e29928(*puVar7); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)FUN_147e29928(*puVar7)) {
        lVar9 = FUN_1447210f0(puVar7[2]);
        if (lVar9 == *plVar15) goto LAB_147e268f2;
      }
      puVar7 = (undefined8 *)0x0;
      goto LAB_147e268f2;
    }
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(lStack_110 + 8) = *(int *)(lStack_110 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + -1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e2695e FUN_147e2695e body=68 status=ok
// SIG undefined FUN_147e2695e(void)

void FUN_147e2695e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147e2a722();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147e269aa FUN_147e269aa body=81 status=ok
// SIG undefined FUN_147e269aa(void)

void FUN_147e269aa(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  lVar1 = *(longlong *)(param_3 + 0x1c8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x268);
    *param_2 = *(undefined8 *)(lVar1 + 0x260);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(lVar1 + 0x270);
    return;
  }
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 147e269fc FUN_147e269fc body=97 status=ok
// SIG undefined FUN_147e269fc(void)

longlong * FUN_147e269fc(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ab67090;
  puVar1[2] = &PTR_FUN_14ab64e90;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *param_2 = (longlong)(puVar1 + 2);
  param_2[1] = (longlong)puVar1;
  return param_2;
}



// FUNCTION 147e26a5e FUN_147e26a5e body=22 status=ok
// SIG undefined FUN_147e26a5e(void)

undefined8 FUN_147e26a5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3b8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x668));
  }
  return 0;
}



// FUNCTION 147e26a74 FUN_147e26a74 body=19 status=ok
// SIG undefined FUN_147e26a74(void)

void FUN_147e26a74(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x3b8) + 0x668) = param_2;
  }
  return;
}



// FUNCTION 147e26a8a FUN_147e26a8a body=33 status=ok
// SIG undefined FUN_147e26a8a(void)

undefined1 FUN_147e26a8a(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1479ed816();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0x1d0);
  }
  return uVar2;
}



// FUNCTION 147e26aac FUN_147e26aac body=209 status=ok
// SIG undefined FUN_147e26aac(void)

longlong FUN_147e26aac(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  cVar2 = *param_1;
  lVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  if (((byte)(cVar2 - 1U) < 2) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    plVar6 = *(longlong **)(param_1 + 8);
    plVar1 = plVar6 + *(int *)(param_1 + 0x10);
    iVar3 = (int)param_2[1];
    iVar4 = (int)param_2[3];
    if (cVar2 == '\x01') {
      do {
        if (iVar3 != 0) {
          lVar7 = 0;
          do {
            lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
            if (*(longlong *)(*param_2 + lVar7) == *plVar6) {
              return lVar5;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar3 * 8 - lVar7 != 0);
        }
        if (iVar4 != 0) {
          lVar5 = *plVar6;
          lVar7 = 0;
          do {
            if (*(longlong *)(param_2[2] + lVar7) == lVar5) {
              return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar4 * 8 - lVar7 != 0);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    else {
      while( true ) {
        if (iVar3 != 0) {
          lVar5 = *plVar6;
          lVar7 = 0;
          do {
            if (*(longlong *)(*param_2 + lVar7) == lVar5) goto LAB_147e26b4f;
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar3 * 8 - lVar7 != 0);
        }
        if (iVar4 == 0) break;
        lVar7 = 0;
        while (*(longlong *)(param_2[2] + lVar7) != *plVar6) {
          lVar7 = lVar7 + 8;
          lVar5 = 0;
          if ((longlong)iVar4 * 8 - lVar7 == 0) {
            return 0;
          }
        }
LAB_147e26b4f:
        plVar6 = plVar6 + 1;
        lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        if (plVar6 == plVar1) {
          return lVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147e26b7e FUN_147e26b7e body=273 status=ok
// SIG undefined FUN_147e26b7e(void)

undefined8 FUN_147e26b7e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xd2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  local_50 = param_1;
  FUN_1407c0a58(&local_38,&DAT_14cb1b2a8);
  if (local_30 == 0) {
    local_50 = &local_40;
    local_48 = param_2;
    local_40 = param_2;
    if (*(int *)(param_1 + 0xd2) == 2) {
      cVar3 = FUN_1437ed3ac(&local_50,param_1[0x15]);
      uVar4 = 1;
      if (cVar3 != '\0') goto LAB_147e26c73;
    }
    else if ((*(int *)(param_1 + 0xd2) == 1) &&
            (iVar1 = *(int *)(param_1 + 0xd1), (longlong)iVar1 != 0)) {
      lVar2 = param_1[0xd0];
      lVar5 = 0;
      do {
        cVar3 = FUN_1437ed3ac(&local_50,*(undefined8 *)(lVar2 + lVar5));
        if (cVar3 != '\0') {
          uVar4 = 1;
          goto LAB_147e26c73;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
  }
LAB_147e26c73:
  if ((local_30 & 1) == 0) {
    *(int *)(local_38 + 0x28) = *(int *)(local_38 + 0x28) + -1;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147e26ca6 FUN_147e26ca6 body=274 status=ok
// SIG undefined FUN_147e26ca6(void)

undefined8
FUN_147e26ca6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ab672c0;
  local_50[1] = *param_5;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ab67190;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e26dc8 FUN_147e26dc8 body=8 status=ok
// SIG undefined FUN_147e26dc8(void)

void FUN_147e26dc8(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x6f4) = param_2;
  return;
}



// FUNCTION 147e26dd0 FUN_147e26dd0 body=93 status=ok
// SIG undefined FUN_147e26dd0(void)

undefined8 * FUN_147e26dd0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147e2bbf4(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e26e34 FUN_147e26e34 body=31 status=ok
// SIG undefined FUN_147e26e34(void)

bool FUN_147e26e34(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(char *)(param_1 + 0x668) == '\x01') && (*(int *)(param_1 + 0x700) != 2)) {
    bVar1 = *(int *)(param_1 + 0x6fc) == 0;
  }
  return bVar1;
}



// FUNCTION 147e26e54 FUN_147e26e54 body=9 status=ok
// SIG undefined FUN_147e26e54(void)

void FUN_147e26e54(longlong param_1)

{
  FUN_14479d2ce(param_1 + 4);
  return;
}



// FUNCTION 147e26e5e FUN_147e26e5e body=29 status=ok
// SIG undefined FUN_147e26e5e(void)

undefined8 FUN_147e26e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e26e7c FUN_147e26e7c body=38 status=ok
// SIG undefined FUN_147e26e7c(void)

undefined8 FUN_147e26e7c(undefined8 param_1,int param_2)

{
  FUN_14092a4c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e26ebe FUN_147e26ebe body=51 status=ok
// SIG undefined FUN_147e26ebe(void)

undefined8 FUN_147e26ebe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  return 0;
}



// FUNCTION 147e26ef2 FUN_147e26ef2 body=72 status=ok
// SIG undefined FUN_147e26ef2(void)

undefined8 * FUN_147e26ef2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab66490;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14092a4c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e26f3a FUN_147e26f3a body=72 status=ok
// SIG undefined FUN_147e26f3a(void)

undefined8 * FUN_147e26f3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab66520;
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14092a4c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e26f8a FUN_147e26f8a body=72 status=ok
// SIG undefined FUN_147e26f8a(void)

undefined8 * FUN_147e26f8a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab665b0;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14092a4c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e26fd2 FUN_147e26fd2 body=38 status=ok
// SIG undefined FUN_147e26fd2(void)

undefined8 FUN_147e26fd2(undefined8 param_1,int param_2)

{
  FUN_141554f62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e26ffc FUN_147e26ffc body=45 status=ok
// SIG undefined FUN_147e26ffc(void)

longlong FUN_147e26ffc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_141554f62(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e27030 FUN_147e27030 body=109 status=ok
// SIG undefined FUN_147e27030(void)

undefined8 * FUN_147e27030(undefined8 *param_1)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(200);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ab672a0;
  _Dst = puVar1 + 2;
  memset(_Dst,0,0xb8);
  FUN_145e4783c(_Dst);
  *param_1 = _Dst;
  param_1[1] = puVar1;
  FUN_147e270c6(param_1,_Dst);
  return param_1;
}



// FUNCTION 147e270a8 FUN_147e270a8 body=29 status=ok
// SIG undefined FUN_147e270a8(void)

undefined8 FUN_147e270a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e270c6 FUN_147e270c6 body=158 status=ok
// SIG undefined FUN_147e270c6(void)

void FUN_147e270c6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147e27138;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147e27138;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147e27138:
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
                    /* WARNING: Could not recover jumptable at 0x000147e27158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147e27164 FUN_147e27164 body=54 status=ok
// SIG undefined FUN_147e27164(void)

longlong FUN_147e27164(longlong param_1,int param_2)

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



// FUNCTION 147e2719a FUN_147e2719a body=122 status=ok
// SIG undefined FUN_147e2719a(void)

longlong FUN_147e2719a(longlong param_1,longlong param_2)

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
    FUN_147e27214(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147e27214 FUN_147e27214 body=243 status=ok
// SIG undefined FUN_147e27214(void)

longlong * FUN_147e27214(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140ff3f10(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar5);
          *(longlong *)(lVar4 + 0x18 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147e27308 FUN_147e27308 body=122 status=ok
// SIG undefined FUN_147e27308(void)

longlong FUN_147e27308(longlong param_1,longlong param_2)

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
    FUN_147e27382(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147e27382 FUN_147e27382 body=243 status=ok
// SIG undefined FUN_147e27382(void)

longlong * FUN_147e27382(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140ff3cca(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar5);
          *(longlong *)(lVar4 + 0x18 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147e27476 FUN_147e27476 body=93 status=ok
// SIG undefined FUN_147e27476(void)

longlong FUN_147e27476(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147e274d4(param_1);
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



// FUNCTION 147e274d4 FUN_147e274d4 body=419 status=ok
// SIG undefined FUN_147e274d4(void)

longlong * FUN_147e274d4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x18 + (longlong)iVar9 * 0x28);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e27678 FUN_147e27678 body=93 status=ok
// SIG undefined FUN_147e27678(void)

longlong FUN_147e27678(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147e276d6(param_1);
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



// FUNCTION 147e276d6 FUN_147e276d6 body=419 status=ok
// SIG undefined FUN_147e276d6(void)

longlong * FUN_147e276d6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x18 + (longlong)iVar9 * 0x28);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2787a FUN_147e2787a body=141 status=ok
// SIG undefined FUN_147e2787a(void)

void FUN_147e2787a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c0,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x1c0),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c0,param_2,param_3,0x38);
  return;
}



// FUNCTION 147e27908 FUN_147e27908 body=31 status=ok
// SIG undefined FUN_147e27908(void)

undefined8 FUN_147e27908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e27944 FUN_147e27944 body=93 status=ok
// SIG undefined FUN_147e27944(void)

void FUN_147e27944(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab66c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e279a2 FUN_147e279a2 body=126 status=ok
// SIG undefined FUN_147e279a2(void)

void FUN_147e279a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab66c10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e27a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e27a20 FUN_147e27a20 body=21 status=ok
// SIG undefined FUN_147e27a20(void)

undefined8 FUN_147e27a20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e27a44 FUN_147e27a44 body=48 status=ok
// SIG undefined FUN_147e27a44(void)

void FUN_147e27a44(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147e27a74 FUN_147e27a74 body=114 status=ok
// SIG undefined FUN_147e27a74(void)

void FUN_147e27a74(longlong *param_1,int param_2)

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



// FUNCTION 147e27ae6 FUN_147e27ae6 body=76 status=ok
// SIG undefined FUN_147e27ae6(void)

void FUN_147e27ae6(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_141801368(param_1);
  return;
}



// FUNCTION 147e27b32 FUN_147e27b32 body=107 status=ok
// SIG undefined FUN_147e27b32(void)

/* WARNING: Removing unreachable block (ram,0x000147e27b64) */
/* WARNING: Removing unreachable block (ram,0x000147e27b40) */
/* WARNING: Removing unreachable block (ram,0x000147e27b56) */
/* WARNING: Removing unreachable block (ram,0x000147e27b6f) */
/* WARNING: Removing unreachable block (ram,0x000147e27b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e27b32(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1af88;
  LOCK();
  UNLOCK();
  DAT_14cb1af88 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1af90 = _DAT_14cb1af90 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1af90 = _DAT_14cb1af90 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e27b9e FUN_147e27b9e body=132 status=ok
// SIG undefined FUN_147e27b9e(void)

void FUN_147e27b9e(longlong param_1,int param_2)

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



// FUNCTION 147e27c24 FUN_147e27c24 body=310 status=ok
// SIG undefined FUN_147e27c24(void)

void FUN_147e27c24(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_144a7afa6(lVar2 + 8,*param_2 + 8);
    iVar10 = 0;
    iVar7 = 0;
    do {
      lVar5 = (longlong)iVar7;
      iVar11 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar12 = lVar2 + 0x30 + lVar5 * 0x28;
      iVar8 = iVar7;
      lVar6 = lVar5;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar11;
        if (lVar13 <= lVar6) break;
        bVar4 = FUN_144a7afa6(lVar12,*param_2 + 8);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x28;
        iVar9 = iVar8;
      } while ((bVar3 & 1) == bVar4);
      iVar11 = iVar9 - iVar7;
      if ((bVar3 & 1) == 0) {
        if (iVar10 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar10 * 0x28),(void *)(lVar2 + lVar5 * 0x28),
                  (longlong)iVar11 * 0x28);
        }
        iVar10 = iVar10 + iVar11;
      }
      else {
        FUN_1408105a2(lVar2 + lVar5 * 0x28,iVar11);
      }
      iVar7 = iVar9;
      bVar3 = bVar3 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar10;
  }
  return;
}



// FUNCTION 147e27d5a FUN_147e27d5a body=59 status=ok
// SIG undefined FUN_147e27d5a(void)

void FUN_147e27d5a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e27d96(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_1478dddba(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,4);
  return;
}



// FUNCTION 147e27d96 FUN_147e27d96 body=105 status=ok
// SIG undefined FUN_147e27d96(void)

ulonglong FUN_147e27d96(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147e27e00 FUN_147e27e00 body=48 status=ok
// SIG undefined FUN_147e27e00(void)

void FUN_147e27e00(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147e27e30 FUN_147e27e30 body=186 status=ok
// SIG undefined FUN_147e27e30(void)

undefined8 FUN_147e27e30(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_147e27ecc;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_147e27ecc;
    }
  }
  uVar4 = 0;
LAB_147e27ecc:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e27eec FUN_147e27eec body=107 status=ok
// SIG undefined FUN_147e27eec(void)

/* WARNING: Removing unreachable block (ram,0x000147e27f1e) */
/* WARNING: Removing unreachable block (ram,0x000147e27efa) */
/* WARNING: Removing unreachable block (ram,0x000147e27f10) */
/* WARNING: Removing unreachable block (ram,0x000147e27f29) */
/* WARNING: Removing unreachable block (ram,0x000147e27f12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e27eec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1afb8;
  LOCK();
  UNLOCK();
  DAT_14cb1afb8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1afc0 = _DAT_14cb1afc0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e27f58 FUN_147e27f58 body=136 status=ok
// SIG undefined FUN_147e27f58(void)

void FUN_147e27f58(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_147e27fe2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e27fe2 FUN_147e27fe2 body=149 status=ok
// SIG undefined FUN_147e27fe2(void)

void FUN_147e27fe2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 147e28078 FUN_147e28078 body=136 status=ok
// SIG undefined FUN_147e28078(void)

void FUN_147e28078(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0xac)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_147e28102(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e28102 FUN_147e28102 body=149 status=ok
// SIG undefined FUN_147e28102(void)

void FUN_147e28102(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x28);
  return;
}



// FUNCTION 147e28198 FUN_147e28198 body=285 status=ok
// SIG undefined FUN_147e28198(void)

void FUN_147e28198(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar10 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar10 = param_1;
    }
    iVar12 = 0;
    bVar6 = *(longlong *)(lVar10 + 0x20) == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar8 = (longlong)iVar3;
      iVar7 = iVar3 + 1;
      if (iVar3 + 1 < iVar1) {
        iVar7 = iVar1;
      }
      plVar11 = (longlong *)(lVar10 + 0x48 + lVar8 * 0x28);
      iVar4 = iVar3;
      lVar9 = lVar8;
      do {
        lVar9 = lVar9 + 1;
        iVar5 = iVar7;
        if (lVar13 <= lVar9) break;
        lVar2 = *plVar11;
        iVar4 = iVar4 + 1;
        plVar11 = plVar11 + 5;
        iVar5 = iVar4;
      } while (bVar6 == (lVar2 == *(longlong *)*param_2));
      iVar7 = iVar5 - iVar3;
      if (bVar6 == false) {
        if (iVar12 != iVar3) {
          memmove((void *)(lVar10 + (longlong)iVar12 * 0x28),(void *)(lVar10 + lVar8 * 0x28),
                  (longlong)iVar7 * 0x28);
        }
        iVar12 = iVar12 + iVar7;
      }
      else {
        FUN_140810652(lVar10 + lVar8 * 0x28,iVar7);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar3 = iVar5;
    } while (lVar9 < lVar13);
    *(int *)(param_1 + 0xa8) = iVar12;
  }
  return;
}



// FUNCTION 147e282b6 FUN_147e282b6 body=136 status=ok
// SIG undefined FUN_147e282b6(void)

void FUN_147e282b6(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0xac)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_147e28340(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e28340 FUN_147e28340 body=149 status=ok
// SIG undefined FUN_147e28340(void)

void FUN_147e28340(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x28);
  return;
}



// FUNCTION 147e283d6 FUN_147e283d6 body=119 status=ok
// SIG undefined FUN_147e283d6(void)

void FUN_147e283d6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147e2844e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e2844e FUN_147e2844e body=141 status=ok
// SIG undefined FUN_147e2844e(void)

void FUN_147e2844e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x20);
  return;
}



// FUNCTION 147e284dc FUN_147e284dc body=115 status=ok
// SIG undefined FUN_147e284dc(void)

void FUN_147e284dc(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x58);
  if (*(longlong *)(lVar1 + 0x40 + (longlong)(int)param_2 * 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x58),(longlong)iVar3 * 0x58);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147e28550 FUN_147e28550 body=65 status=ok
// SIG undefined FUN_147e28550(void)

void FUN_147e28550(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14092a11b(lVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == param_2) {
    return;
  }
  FUN_147e28592(param_1,param_2);
  return;
}



// FUNCTION 147e28592 FUN_147e28592 body=78 status=ok
// SIG undefined FUN_147e28592(void)

void FUN_147e28592(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  FUN_147e285e0(param_1,*(undefined4 *)(param_1 + 0x18),uVar3);
  return;
}



// FUNCTION 147e285e0 FUN_147e285e0 body=132 status=ok
// SIG undefined FUN_147e285e0(void)

void FUN_147e285e0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 147e28664 FUN_147e28664 body=124 status=ok
// SIG undefined FUN_147e28664(void)

void FUN_147e28664(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147e285e0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e286fa FUN_147e286fa body=48 status=ok
// SIG undefined FUN_147e286fa(void)

void FUN_147e286fa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147e2872a FUN_147e2872a body=136 status=ok
// SIG undefined FUN_147e2872a(void)

void FUN_147e2872a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147e287b2 FUN_147e287b2 body=88 status=ok
// SIG undefined FUN_147e287b2(void)

void FUN_147e287b2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0xf80);
  if (*(longlong *)(param_1 + 0xf80) == 0) {
    lVar1 = param_1;
  }
  FUN_14034c5df(lVar1,*(undefined4 *)(param_1 + 0xf88));
  *(undefined4 *)(param_1 + 0xf88) = 0;
  if (*(int *)(param_1 + 0xf8c) == param_2) {
    return;
  }
  FUN_147e2880c(param_1,param_2);
  return;
}



// FUNCTION 147e2880c FUN_147e2880c body=130 status=ok
// SIG undefined FUN_147e2880c(void)

void FUN_147e2880c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xf8,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0xf8)) {
        uVar2 = uVar1 / 0xf8 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xf8c)) {
    *(int *)(param_1 + 0xf8c) = (int)uVar2;
    FUN_14034d10a(param_1,*(undefined4 *)(param_1 + 0xf88),uVar2,0xf8);
    return;
  }
  return;
}



// FUNCTION 147e2888e FUN_147e2888e body=141 status=ok
// SIG undefined FUN_147e2888e(void)

void FUN_147e2888e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x700);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x700,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x700),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x700,param_2,param_3,0x38);
  return;
}



// FUNCTION 147e2891c FUN_147e2891c body=132 status=ok
// SIG undefined FUN_147e2891c(void)

void FUN_147e2891c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x70c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x70c) = iVar6;
    FUN_147e2888e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e289ac FUN_147e289ac body=29 status=ok
// SIG undefined FUN_147e289ac(void)

undefined8 FUN_147e289ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e289c9 FUN_147e289c9 body=103 status=ok
// SIG undefined FUN_147e289c9(void)

bool FUN_147e289c9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 147e28a30 FUN_147e28a30 body=9 status=ok
// SIG undefined FUN_147e28a30(void)

void FUN_147e28a30(longlong param_1)

{
  FUN_140ced502(param_1 + 0x10);
  return;
}



// FUNCTION 147e28a3a FUN_147e28a3a body=29 status=ok
// SIG undefined FUN_147e28a3a(void)

undefined8 FUN_147e28a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e28a58 FUN_147e28a58 body=9 status=ok
// SIG undefined FUN_147e28a58(void)

void FUN_147e28a58(longlong param_1)

{
  FUN_140db8b6a(param_1 + 0x10);
  return;
}



// FUNCTION 147e28a62 FUN_147e28a62 body=29 status=ok
// SIG undefined FUN_147e28a62(void)

undefined8 FUN_147e28a62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e28a80 FUN_147e28a80 body=316 status=ok
// SIG undefined FUN_147e28a80(void)

undefined8 * FUN_147e28a80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = param_2[4];
  uVar1 = FUN_14477b664(param_2[5]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[5] = uVar1;
  param_1[6] = param_2[6];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = param_2[0xe];
  uVar1 = FUN_14477b664(param_2[0xf]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2[0x10];
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar1;
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  FUN_14034cca6(param_1 + 0x17,param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined2 *)((longlong)param_1 + 0xf4) = *(undefined2 *)((longlong)param_2 + 0xf4);
  return param_1;
}



// FUNCTION 147e28bbc FUN_147e28bbc body=107 status=ok
// SIG undefined FUN_147e28bbc(void)

void FUN_147e28bbc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cb1b220;
  if (param_1 <= (int)DAT_14cb1b220) {
    iVar2 = 4;
    if (4 < DAT_14cb1b220) {
      lVar5 = (longlong)(int)DAT_14cb1b220;
      if (4 < DAT_14cb1b224) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cb1b224 = iVar2;
    FUN_147e28c28(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb1b220);
}



// FUNCTION 147e28c28 FUN_147e28c28 body=142 status=ok
// SIG undefined FUN_147e28c28(void)

void FUN_147e28c28(int param_1,uint param_2)

{
  if (param_2 < 5) {
    if (DAT_14cb1b218 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb1b1f8,DAT_14cb1b218,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb1b218 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb1b218,0,param_2,8);
    memmove(DAT_14cb1b218,&DAT_14cb1b1f8,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cb1b218,param_1,param_2,8);
  return;
}



// FUNCTION 147e28cb6 FUN_147e28cb6 body=59 status=ok
// SIG undefined FUN_147e28cb6(void)

void FUN_147e28cb6(longlong param_1)

{
  FUN_147e28cf2();
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e28cf2 FUN_147e28cf2 body=107 status=ok
// SIG undefined FUN_147e28cf2(void)

void FUN_147e28cf2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_1407e5422(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (0x20 < *(uint *)(param_1 + 0x224)) {
    *(undefined4 *)(param_1 + 0x224) = 0x20;
    FUN_14008f53c(param_1 + 0x210,0);
    return;
  }
  return;
}



// FUNCTION 147e28d5e FUN_147e28d5e body=498 status=ok
// SIG undefined FUN_147e28d5e(void)

void FUN_147e28d5e(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x208);
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)(param_1 + 0x20c);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1407e5422(param_1);
      iVar11 = *(int *)(param_1 + 0x208);
      iVar10 = *(int *)(param_1 + 0x20c);
    }
    *(uint *)(param_1 + 0x208) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_147e29160(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar3 = param_1;
    }
    if (iVar11 < (int)param_2) {
      iVar10 = *(int *)(param_1 + 0x22c);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar3 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)(param_1 + 0x228) * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)(param_1 + 0x22c) < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x228);
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar2;
        *(int *)(param_1 + 0x228) = iVar9 + -1;
        iVar10 = *(int *)(param_1 + 0x22c) + 1;
        *(int *)(param_1 + 0x22c) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      pvVar7 = (void *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x220) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)(param_1 + 0x224) + 0x1fU >> 5 < uVar12) {
        FUN_144aa70c6(pvVar7,0,uVar12,4);
        *(uint *)(param_1 + 0x224) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = *(void **)(param_1 + 0x218);
      if (*(void **)(param_1 + 0x218) == (void *)0x0) {
        _Dst = pvVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = *(int *)(param_1 + 0x220);
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if (*(void **)(param_1 + 0x218) != (void *)0x0) {
          pvVar7 = *(void **)(param_1 + 0x218);
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)pvVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar2 = FUN_14489e6aa(param_1 + 0x210,uVar8);
      FUN_1470f4066(param_1 + 0x210,uVar2,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147e28f50 FUN_147e28f50 body=527 status=ok
// SIG undefined FUN_147e28f50(void)

void FUN_147e28f50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1446efa72(param_1 + 0x270,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x278);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x230;
    uVar6 = 0;
    FUN_1400bf6d8(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar4 = lVar1;
        }
        *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x278) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0x210;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x220) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar4 = *(longlong *)(local_70 + 0x200);
        if (*(longlong *)(local_70 + 0x200) == 0) {
          lVar4 = local_70;
        }
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = ((uint)(*(ulonglong *)(lVar4 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar4 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x278) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0xc + lVar5) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar4 + 8 + lVar5) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x278) - 1U & uVar10) * 4);
        lVar4 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar4 = lVar1;
        }
        *(int *)(lVar4 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x278) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e29160 FUN_147e29160 body=125 status=ok
// SIG undefined FUN_147e29160(void)

void FUN_147e29160(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x20c) = (int)uVar4;
    FUN_1407e5490(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e291de FUN_147e291de body=315 status=ok
// SIG undefined FUN_147e291de(void)

undefined4 *
FUN_147e291de(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147e2931a(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_147e29440(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    cVar2 = FUN_147e2957a(param_1,*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c));
    if (cVar2 == '\0') {
      uVar5 = (longlong)(int)uVar3 & (longlong)*(int *)(param_1 + 0x278) - 1U;
      iVar4 = (int)uVar5;
      *(int *)((longlong)local_48 + 0xc) = iVar4;
      lVar6 = *(longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        lVar6 = param_1 + 0x230;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x278) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        lVar6 = param_1 + 0x230;
      }
      *(undefined4 *)(lVar6 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 0x278) - 1U) * 4) =
           uVar1;
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2931a FUN_147e2931a body=293 status=ok
// SIG undefined FUN_147e2931a(void)

int * FUN_147e2931a(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar6 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar6 + 1;
    if (*(int *)(param_1 + 0x20c) == iVar6) {
      FUN_147e29160(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x210,1);
    lVar4 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar4 = param_1 + 0x210;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x228);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 0x228) = iVar3;
    iVar5 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x22c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0x210;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x218);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + lVar4;
  return param_2;
}



// FUNCTION 147e29440 FUN_147e29440 body=164 status=ok
// SIG undefined FUN_147e29440(void)

void FUN_147e29440(longlong param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c) != 1) &&
     (*(int *)(param_1 + 0x208) != *(int *)(param_1 + 0x22c))) {
    lVar3 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x270) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x270);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x278) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar3 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar3 + (longlong)iVar4 * 0x10);
        if (*(longlong *)(lVar3 + (longlong)iVar4 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147e294e4(param_1,*param_4);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_147e294c5;
        }
        iVar4 = (int)plVar1[1];
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_147e294c5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 147e294e4 FUN_147e294e4 body=150 status=ok
// SIG undefined FUN_147e294e4(void)

void FUN_147e294e4(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x228) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x22c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x228);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x228) = param_2;
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  lVar4 = param_1 + 0x210;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x218);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147e2957a FUN_147e2957a body=100 status=ok
// SIG undefined FUN_147e2957a(void)

undefined8 FUN_147e2957a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 4) {
    iVar4 = 0x10;
  }
  if (param_2 < 4) {
    iVar4 = 0x10;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x278))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x278) = iVar4;
    FUN_147e28f50(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147e295de FUN_147e295de body=114 status=ok
// SIG undefined FUN_147e295de(void)

void FUN_147e295de(longlong *param_1,int param_2)

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



// FUNCTION 147e29650 FUN_147e29650 body=150 status=ok
// SIG undefined FUN_147e29650(void)

void FUN_147e29650(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x42c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x428) * 0x20) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)(param_1 + 0x42c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x428);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x20 + 4) = uVar5;
  *(int *)(param_1 + 0x428) = param_2;
  *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + 1;
  lVar4 = param_1 + 0x410;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x418);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147e296e6 FUN_147e296e6 body=31 status=ok
// SIG undefined FUN_147e296e6(void)

undefined8 FUN_147e296e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e29722 FUN_147e29722 body=101 status=ok
// SIG undefined FUN_147e29722(void)

void FUN_147e29722(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab66e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e29788 FUN_147e29788 body=101 status=ok
// SIG undefined FUN_147e29788(void)

void FUN_147e29788(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab66e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e297ee FUN_147e297ee body=134 status=ok
// SIG undefined FUN_147e297ee(void)

void FUN_147e297ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab66e70;
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
                    /* WARNING: Could not recover jumptable at 0x000147e29865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e29884 FUN_147e29884 body=25 status=ok
// SIG undefined FUN_147e29884(void)

undefined8 FUN_147e29884(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e2989e FUN_147e2989e body=137 status=ok
// SIG undefined FUN_147e2989e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e2989e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1af90 = _DAT_14cb1af90 + 1;
  UNLOCK();
  uVar1 = FUN_147e29928(DAT_14cb1af88);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb1af88;
  LOCK();
  _DAT_14cb1af90 = _DAT_14cb1af90 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_147e299aa(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1af88;
  LOCK();
  _DAT_14cb1af90 = _DAT_14cb1af90 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_147e299aa(param_1 + 4);
  LOCK();
  _DAT_14cb1af90 = _DAT_14cb1af90 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147e29928 FUN_147e29928 body=130 status=ok
// SIG undefined FUN_147e29928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e29928(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_147e2999a:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_147e2999a;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 147e299aa FUN_147e299aa body=61 status=ok
// SIG undefined FUN_147e299aa(void)

void FUN_147e299aa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_147e29928(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 147e299e8 FUN_147e299e8 body=137 status=ok
// SIG undefined FUN_147e299e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e299e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
  UNLOCK();
  uVar1 = FUN_140dba96c(DAT_14cb1afb8);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb1afb8;
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_147e29a72(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1afb8;
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_147e29a72(param_1 + 4);
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147e29a72 FUN_147e29a72 body=73 status=ok
// SIG undefined FUN_147e29a72(void)

void FUN_147e29a72(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_140dba96c(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 147e29abc FUN_147e29abc body=48 status=ok
// SIG undefined FUN_147e29abc(void)

void FUN_147e29abc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147e29aec FUN_147e29aec body=322 status=ok
// SIG undefined FUN_147e29aec(void)

void FUN_147e29aec(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147e29c30 FUN_147e29c30 body=311 status=ok
// SIG undefined FUN_147e29c30(void)

void FUN_147e29c30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e29d68 FUN_147e29d68 body=322 status=ok
// SIG undefined FUN_147e29d68(void)

void FUN_147e29d68(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147e29eac FUN_147e29eac body=311 status=ok
// SIG undefined FUN_147e29eac(void)

void FUN_147e29eac(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e29fe4 FUN_147e29fe4 body=147 status=ok
// SIG undefined FUN_147e29fe4(void)

undefined8 * FUN_147e29fe4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_144a69486(param_1 + 5,param_2 + 5);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar2 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_147e2a078(param_1 + 9,iVar1);
    FUN_147e2a0d0(param_1[9],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 147e2a078 FUN_147e2a078 body=88 status=ok
// SIG undefined FUN_147e2a078(void)

void FUN_147e2a078(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147e2a0d0 FUN_147e2a0d0 body=47 status=ok
// SIG undefined FUN_147e2a0d0(void)

void FUN_147e2a0d0(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_147e2a100(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147e2a100 FUN_147e2a100 body=111 status=ok
// SIG undefined FUN_147e2a100(void)

undefined4 * FUN_147e2a100(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_147e2a170(param_1 + 2,iVar1);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 147e2a170 FUN_147e2a170 body=89 status=ok
// SIG undefined FUN_147e2a170(void)

void FUN_147e2a170(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147e2a1ca FUN_147e2a1ca body=589 status=ok
// SIG undefined FUN_147e2a1ca(void)

undefined8 * FUN_147e2a1ca(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_14092b234(param_1 + 5,param_2 + 0x28);
  memcpy(param_1 + 0xf,(void *)(param_2 + 0x78),0x9c);
  param_1[0x23] = *(undefined8 *)(param_2 + 0x118);
  lVar17 = *(longlong *)(param_2 + 0x120);
  param_1[0x24] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x148);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar15 = *(undefined8 *)(param_2 + 0x130);
  uVar16 = *(undefined8 *)(param_2 + 0x140);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  param_1[0x28] = uVar16;
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar15;
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  lVar17 = *(longlong *)(param_2 + 0x158);
  param_1[0x2b] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  cVar1 = *(char *)(param_2 + 0x164);
  *(char *)((longlong)param_1 + 0x164) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  }
  param_1[0x33] = *(undefined8 *)(param_2 + 0x198);
  uVar4 = *(undefined4 *)(param_2 + 0x168);
  uVar5 = *(undefined4 *)(param_2 + 0x16c);
  uVar6 = *(undefined4 *)(param_2 + 0x170);
  uVar7 = *(undefined4 *)(param_2 + 0x174);
  uVar8 = *(undefined4 *)(param_2 + 0x178);
  uVar9 = *(undefined4 *)(param_2 + 0x17c);
  uVar10 = *(undefined4 *)(param_2 + 0x180);
  uVar11 = *(undefined4 *)(param_2 + 0x184);
  uVar12 = *(undefined4 *)(param_2 + 0x18c);
  uVar13 = *(undefined4 *)(param_2 + 400);
  uVar14 = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar12;
  *(undefined4 *)(param_1 + 0x32) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar14;
  *(undefined4 *)(param_1 + 0x2f) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar11;
  *(undefined4 *)(param_1 + 0x2d) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar5;
  *(undefined4 *)(param_1 + 0x2e) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar7;
  param_1[0x34] = 0;
  iVar2 = *(int *)(param_2 + 0x1a8);
  uVar3 = *(undefined8 *)(param_2 + 0x1a0);
  *(int *)(param_1 + 0x35) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    FUN_147e2a440(param_1 + 0x34,iVar2);
    FUN_147e2a498(param_1[0x34],uVar3,iVar2);
  }
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1b0);
  param_1[0x37] = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  lVar17 = param_2 + 0x1d0;
  if (*(longlong *)(param_2 + 0x1e0) != 0) {
    lVar17 = *(longlong *)(param_2 + 0x1e0);
  }
  FUN_147e2a4c0(param_1 + 0x3a,lVar17,*(undefined4 *)(param_2 + 0x1e8));
  param_1[0x3e] = *(undefined8 *)(param_2 + 0x1f0);
  param_1[0x3f] = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x200);
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  FUN_140513298(param_1 + 0x42,param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x228);
  return param_1;
}



// FUNCTION 147e2a418 FUN_147e2a418 body=9 status=ok
// SIG undefined FUN_147e2a418(void)

void FUN_147e2a418(longlong param_1)

{
  FUN_147e2a59c(param_1 + 0x10);
  return;
}



// FUNCTION 147e2a422 FUN_147e2a422 body=29 status=ok
// SIG undefined FUN_147e2a422(void)

undefined8 FUN_147e2a422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2a440 FUN_147e2a440 body=88 status=ok
// SIG undefined FUN_147e2a440(void)

void FUN_147e2a440(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147e2a498 FUN_147e2a498 body=40 status=ok
// SIG undefined FUN_147e2a498(void)

void FUN_147e2a498(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147e2a4c0 FUN_147e2a4c0 body=80 status=ok
// SIG undefined FUN_147e2a4c0(void)

void FUN_147e2a4c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x18) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  FUN_147e2a510(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_147e2a56f(lVar1,param_2,param_3);
  return;
}



// FUNCTION 147e2a510 FUN_147e2a510 body=95 status=ok
// SIG undefined FUN_147e2a510(void)

void FUN_147e2a510(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = param_2;
    if (param_2 != 1) {
      uVar1 = FUN_144a3809e((longlong)param_2 << 4,0);
      iVar2 = (int)(uVar1 >> 4);
      if (iVar2 < param_2) {
        iVar2 = 0x7fffffff;
      }
      else {
        param_2 = 0;
        if (iVar2 < 1) goto LAB_147e2a549;
      }
    }
    param_2 = iVar2;
    FUN_147e285e0(param_1,0,param_2);
  }
LAB_147e2a549:
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}



// FUNCTION 147e2a56f FUN_147e2a56f body=45 status=ok
// SIG undefined FUN_147e2a56f(void)

void FUN_147e2a56f(longlong param_1,longlong param_2,int param_3)

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
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e2a59c FUN_147e2a59c body=335 status=ok
// SIG undefined FUN_147e2a59c(void)

void FUN_147e2a59c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140513334(param_1 + 0x210);
  FUN_147e2a6ec(param_1 + 0x1d0);
  FUN_14092d378(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x164) == '\x01') {
    *(undefined1 *)(param_1 + 0x164) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x158);
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
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0x140),param_1 + 0x128);
  }
  plVar3 = *(longlong **)(param_1 + 0x120);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xf0),param_1 + 0xd8);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xd0),param_1 + 0xb8);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xb0),param_1 + 0x98);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0x90),param_1 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14092b056(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e2a6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147e2a6ec FUN_147e2a6ec body=53 status=ok
// SIG undefined FUN_147e2a6ec(void)

void FUN_147e2a6ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14092a11b(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e2a722 FUN_147e2a722 body=322 status=ok
// SIG undefined FUN_147e2a722(void)

void FUN_147e2a722(longlong *param_1)

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



// FUNCTION 147e2a866 FUN_147e2a866 body=114 status=ok
// SIG undefined FUN_147e2a866(void)

void FUN_147e2a866(longlong *param_1,int param_2)

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



// FUNCTION 147e2a8d8 FUN_147e2a8d8 body=31 status=ok
// SIG undefined FUN_147e2a8d8(void)

undefined8 FUN_147e2a8d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2a914 FUN_147e2a914 body=101 status=ok
// SIG undefined FUN_147e2a914(void)

void FUN_147e2a914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab66f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e2a97a FUN_147e2a97a body=101 status=ok
// SIG undefined FUN_147e2a97a(void)

void FUN_147e2a97a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab66f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e2a9e0 FUN_147e2a9e0 body=134 status=ok
// SIG undefined FUN_147e2a9e0(void)

void FUN_147e2a9e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab66f20;
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
                    /* WARNING: Could not recover jumptable at 0x000147e2aa57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2aa78 FUN_147e2aa78 body=31 status=ok
// SIG undefined FUN_147e2aa78(void)

undefined8 FUN_147e2aa78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2aab4 FUN_147e2aab4 body=101 status=ok
// SIG undefined FUN_147e2aab4(void)

void FUN_147e2aab4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa6ea50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab66f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e2ab1a FUN_147e2ab1a body=101 status=ok
// SIG undefined FUN_147e2ab1a(void)

void FUN_147e2ab1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa6ea50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab66f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e2ab80 FUN_147e2ab80 body=134 status=ok
// SIG undefined FUN_147e2ab80(void)

void FUN_147e2ab80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa6ea50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab66f90;
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
                    /* WARNING: Could not recover jumptable at 0x000147e2abf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2ac18 FUN_147e2ac18 body=48 status=ok
// SIG undefined FUN_147e2ac18(void)

void FUN_147e2ac18(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147e2ac4c FUN_147e2ac4c body=81 status=ok
// SIG undefined FUN_147e2ac4c(void)

undefined8 FUN_147e2ac4c(longlong param_1)

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



// FUNCTION 147e2aca4 FUN_147e2aca4 body=118 status=ok
// SIG undefined FUN_147e2aca4(void)

void FUN_147e2aca4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67020;
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



// FUNCTION 147e2ad1a FUN_147e2ad1a body=118 status=ok
// SIG undefined FUN_147e2ad1a(void)

void FUN_147e2ad1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67020;
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



// FUNCTION 147e2ad90 FUN_147e2ad90 body=156 status=ok
// SIG undefined FUN_147e2ad90(void)

void FUN_147e2ad90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab67020;
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
                    /* WARNING: Could not recover jumptable at 0x000147e2ae1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2ae2c FUN_147e2ae2c body=104 status=ok
// SIG undefined FUN_147e2ae2c(void)

void FUN_147e2ae2c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147e2ae79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e2ae8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e2aeae FUN_147e2aeae body=29 status=ok
// SIG undefined FUN_147e2aeae(void)

undefined8 FUN_147e2aeae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2aed2 FUN_147e2aed2 body=89 status=ok
// SIG undefined FUN_147e2aed2(void)

bool FUN_147e2aed2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147e2af1d;
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
LAB_147e2af1d:
  return lVar6 == param_2;
}



// FUNCTION 147e2af38 FUN_147e2af38 body=118 status=ok
// SIG undefined FUN_147e2af38(void)

void FUN_147e2af38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ab670b0;
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



// FUNCTION 147e2afae FUN_147e2afae body=156 status=ok
// SIG undefined FUN_147e2afae(void)

void FUN_147e2afae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab67120;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ab670b0;
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
                    /* WARNING: Could not recover jumptable at 0x000147e2b03a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2b04a FUN_147e2b04a body=105 status=ok
// SIG undefined FUN_147e2b04a(void)

ulonglong FUN_147e2b04a(longlong param_1)

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
LAB_147e2b0a8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147e2b0a8;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined1 *)(param_1 + 8));
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



// FUNCTION 147e2b0e6 FUN_147e2b0e6 body=96 status=ok
// SIG undefined FUN_147e2b0e6(void)

void FUN_147e2b0e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147e2b146 FUN_147e2b146 body=614 status=ok
// SIG undefined FUN_147e2b146(void)

void FUN_147e2b146(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1407bea76(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e2b146(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e2b3ae FUN_147e2b3ae body=308 status=ok
// SIG undefined FUN_147e2b3ae(void)

void FUN_147e2b3ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1407bea76(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2b4e4 FUN_147e2b4e4 body=739 status=ok
// SIG undefined FUN_147e2b4e4(void)

void FUN_147e2b4e4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_147e2b608:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_147e2b61c;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_147e2b608;
LAB_147e2b61c:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1407bea76(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e2b4e4(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e2b7c8 FUN_147e2b7c8 body=107 status=ok
// SIG undefined FUN_147e2b7c8(void)

/* WARNING: Removing unreachable block (ram,0x000147e2b7fa) */
/* WARNING: Removing unreachable block (ram,0x000147e2b7d6) */
/* WARNING: Removing unreachable block (ram,0x000147e2b7ec) */
/* WARNING: Removing unreachable block (ram,0x000147e2b805) */
/* WARNING: Removing unreachable block (ram,0x000147e2b7ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e2b7c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1b2d8;
  LOCK();
  UNLOCK();
  DAT_14cb1b2d8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1b2e0 = _DAT_14cb1b2e0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1b2e0 = _DAT_14cb1b2e0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e2b834 FUN_147e2b834 body=110 status=ok
// SIG undefined FUN_147e2b834(void)

void FUN_147e2b834(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_147e2b8a4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e2b8a4 FUN_147e2b8a4 body=132 status=ok
// SIG undefined FUN_147e2b8a4(void)

void FUN_147e2b8a4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 147e2b928 FUN_147e2b928 body=29 status=ok
// SIG undefined FUN_147e2b928(void)

undefined8 FUN_147e2b928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2b960 FUN_147e2b960 body=29 status=ok
// SIG undefined FUN_147e2b960(void)

bool FUN_147e2b960(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e2b97e FUN_147e2b97e body=26 status=ok
// SIG undefined FUN_147e2b97e(void)

bool FUN_147e2b97e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e2b998 FUN_147e2b998 body=24 status=ok
// SIG undefined FUN_147e2b998(void)

bool FUN_147e2b998(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147e2b9b0 FUN_147e2b9b0 body=101 status=ok
// SIG undefined FUN_147e2b9b0(void)

void FUN_147e2b9b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab672c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab67190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e2ba16 FUN_147e2ba16 body=101 status=ok
// SIG undefined FUN_147e2ba16(void)

void FUN_147e2ba16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab672c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab67190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e2ba7c FUN_147e2ba7c body=134 status=ok
// SIG undefined FUN_147e2ba7c(void)

void FUN_147e2ba7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab672c0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ab67190;
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
                    /* WARNING: Could not recover jumptable at 0x000147e2baf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2bb02 FUN_147e2bb02 body=40 status=ok
// SIG undefined FUN_147e2bb02(void)

void FUN_147e2bb02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e2bb27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147e2bb2a FUN_147e2bb2a body=150 status=ok
// SIG undefined FUN_147e2bb2a(void)

bool FUN_147e2bb2a(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 147e2bbc4 FUN_147e2bbc4 body=48 status=ok
// SIG undefined FUN_147e2bbc4(void)

void FUN_147e2bbc4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}


