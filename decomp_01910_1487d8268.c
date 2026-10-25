// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487d8268 FUN_1487d8268 body=122 status=ok
// SIG undefined FUN_1487d8268(void)

void FUN_1487d8268(longlong *param_1,int param_2)

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



// FUNCTION 1487d82e2 FUN_1487d82e2 body=31 status=ok
// SIG undefined FUN_1487d82e2(void)

undefined8 FUN_1487d82e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d831e FUN_1487d831e body=101 status=ok
// SIG undefined FUN_1487d831e(void)

void FUN_1487d831e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3edf40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d8384 FUN_1487d8384 body=101 status=ok
// SIG undefined FUN_1487d8384(void)

void FUN_1487d8384(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3edf40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d83ea FUN_1487d83ea body=134 status=ok
// SIG undefined FUN_1487d83ea(void)

void FUN_1487d83ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3edf40;
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
                    /* WARNING: Could not recover jumptable at 0x0001487d8461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d8482 FUN_1487d8482 body=20 status=ok
// SIG undefined FUN_1487d8482(void)

void FUN_1487d8482(longlong param_1)

{
  if (*(int *)(param_1 + 0x1b4) != 0) {
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  return;
}



// FUNCTION 1487d8496 FUN_1487d8496 body=37 status=ok
// SIG undefined FUN_1487d8496(void)

void FUN_1487d8496(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x1b0)) {
    *(undefined4 *)(param_1 + 0x1b4) = 6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d84bc FUN_1487d84bc body=248 status=ok
// SIG undefined FUN_1487d84bc(void)

ulonglong FUN_1487d84bc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  plVar11 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar11 = param_1;
  }
  lVar4 = param_1[3];
  if ((longlong)(int)lVar4 != 0) {
    plVar10 = plVar11;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_1487d8512:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1487d8512;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar12);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1487d8558:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1487d8558;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar12 = iVar6 == iVar5;
          if (bVar12) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar12);
        lVar9 = *param_2;
        LOCK();
        plVar1 = plVar3 + 1;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)plVar11) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar11 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 1487d85b4 FUN_1487d85b4 body=145 status=ok
// SIG undefined FUN_1487d85b4(void)

void FUN_1487d85b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
        uVar5 = uVar4 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1486ebe98(param_1,param_2,uVar5,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d8646 FUN_1487d8646 body=145 status=ok
// SIG undefined FUN_1487d8646(void)

void FUN_1487d8646(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
        uVar5 = uVar4 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1486ebff8(param_1,param_2,uVar5,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d86d8 FUN_1487d86d8 body=130 status=ok
// SIG undefined FUN_1487d86d8(void)

void FUN_1487d86d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1486ec144(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d875c FUN_1487d875c body=130 status=ok
// SIG undefined FUN_1487d875c(void)

void FUN_1487d875c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1486ec288(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d87e0 FUN_1487d87e0 body=145 status=ok
// SIG undefined FUN_1487d87e0(void)

void FUN_1487d87e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
        uVar5 = uVar4 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1486ec3e0(param_1,param_2,uVar5,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d8872 FUN_1487d8872 body=259 status=ok
// SIG undefined FUN_1487d8872(void)

void FUN_1487d8872(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar4 = (longlong)(int)uVar1;
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = param_1;
    }
    uVar13 = 0;
    bVar12 = *(longlong *)(lVar5 + 8) == *(longlong *)*param_2;
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      lVar3 = uVar8 * 0x10;
      plVar7 = (longlong *)(lVar5 + 0x18 + lVar3);
      uVar10 = uVar9;
      do {
        uVar8 = uVar8 + 1;
        uVar11 = uVar6;
        if (lVar4 <= (longlong)uVar8) break;
        lVar2 = *plVar7;
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 2;
        uVar11 = uVar10;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      if (bVar12 == false) {
        if (uVar13 != uVar9) {
          memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar5),(void *)(lVar3 + lVar5),
                  (longlong)(int)(uVar11 - uVar9) << 4);
        }
        uVar13 = uVar13 + (uVar11 - uVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      uVar9 = uVar11;
    } while ((longlong)uVar8 < lVar4);
    *(uint *)(param_1 + 0x18) = uVar13;
  }
  return;
}



// FUNCTION 1487d8976 FUN_1487d8976 body=119 status=ok
// SIG undefined FUN_1487d8976(void)

undefined8 * FUN_1487d8976(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1487d67dc();
  *param_1 = &PTR_FUN_14b3ee158;
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  param_1[6] = DAT_14cb72620;
  FUN_1446f470e(&local_20,L"Disable_AO",1);
  param_1[8] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d89fe FUN_1487d89fe body=58 status=ok
// SIG undefined FUN_1487d89fe(void)

undefined8 * FUN_1487d89fe(undefined8 *param_1)

{
  FUN_145aba5a4();
  *param_1 = &PTR_FUN_14b3ee298;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42960000;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x43b40000;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1487d8a38 FUN_1487d8a38 body=267 status=ok
// SIG undefined FUN_1487d8a38(void)

void FUN_1487d8a38(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_1 + 0x48,&local_50);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_1400021e4(param_1 + 0x40,&local_60);
  puVar1 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar1 = local_60;
  }
  FUN_140002266(&local_40,L"Rotation Channel with the name \'%s\' and pivot bone \'%s\'.",puVar1,
                puVar2);
  if ((longlong *)(param_2 + 0x18) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_2 + 0x20) = (undefined4)local_38;
    *(undefined4 *)(param_2 + 0x24) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d8b44 FUN_1487d8b44 body=154 status=ok
// SIG undefined FUN_1487d8b44(void)

undefined8 * FUN_1487d8b44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1487d67dc();
  *param_1 = &PTR_FUN_14b3ee3b8;
  param_1[6] = DAT_14cb725f8;
  FUN_1446f470e(&local_20,L"Disable_LookAt",1);
  param_1[8] = local_20;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x44b40000;
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  uVar1 = FUN_1487d8be0(param_1 + 2);
  uVar2 = FUN_1464fb7bc();
  FUN_1487d8c20(uVar1,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d8be0 FUN_1487d8be0 body=63 status=ok
// SIG undefined FUN_1487d8be0(void)

longlong FUN_1487d8be0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487df104(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1487df0f5(lVar2);
  return lVar2;
}



// FUNCTION 1487d8c20 FUN_1487d8c20 body=78 status=ok
// SIG undefined FUN_1487d8c20(void)

void FUN_1487d8c20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == 0) || (lVar1 = FUN_1464fb034(), lVar1 == 0)) ||
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



// FUNCTION 1487d8c6e FUN_1487d8c6e body=143 status=ok
// SIG undefined FUN_1487d8c6e(void)

undefined8 * FUN_1487d8c6e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1487d67dc();
  *param_1 = &PTR_FUN_14b3ee3e8;
  param_1[6] = DAT_14cb72628;
  FUN_1446f470e(&local_20,L"Disable_LookAt",1);
  param_1[8] = local_20;
  uVar1 = FUN_1487d8be0(param_1 + 2);
  uVar2 = FUN_1464fb18c();
  FUN_1487d8c20(uVar1,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d8d04 FUN_1487d8d04 body=134 status=ok
// SIG undefined FUN_1487d8d04(void)

undefined4 FUN_1487d8d04(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x20);
  if ((((1 < lVar4) && (plVar2 = *(longlong **)(param_1 + 0x18), *plVar2 != 0)) &&
      (plVar2[lVar4 * 5 + -5] != 0)) && (uVar1 = *(uint *)(plVar2 + 1), (~uVar1 & 0x7fffffff) != 0))
  {
    lVar3 = param_2 + 0x10;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x20);
    }
    if (((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) != 0) &&
       (uVar1 = *(uint *)(plVar2 + lVar4 * 5 + -4), (~uVar1 & 0x7fffffff) != 0)) {
      return CONCAT31((int3)(uVar1 >> 8),
                      (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) !=
                      0);
    }
  }
  return 0;
}



// FUNCTION 1487d8d8a FUN_1487d8d8a body=1963 status=ok
// SIG undefined FUN_1487d8d8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487d8d8a(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined *puVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  longlong *plVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 local_320;
  undefined1 *local_318;
  double *local_310;
  longlong *local_308;
  undefined8 local_300;
  double local_2f8 [4];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [6];
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_300 = param_3;
  if ((((1 < (longlong)*(int *)(param_1 + 0x20)) && (**(longlong **)(param_1 + 0x18) != 0)) &&
      ((*(longlong **)(param_1 + 0x18))[(longlong)*(int *)(param_1 + 0x20) * 5 + -5] != 0)) &&
     (*param_2 != 0)) {
    local_2f8[0] = 0.0;
    local_2f8[1] = 0.0;
    local_2f8[2] = 0.0;
    local_2f8[3] = 1.0;
    uStack_2a0._0_4_ = 0;
    uStack_2a0._4_4_ = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = _DAT_149934d80;
    local_2a8 = 0x3ff0000000000000;
    uStack_2a0 = 0;
    lVar13 = (longlong)*(int *)(param_1 + 0xc);
    local_2d8._0_4_ = 0;
    local_2d8._4_4_ = 0;
    uStack_2d0._0_4_ = 0;
    uStack_2d0._4_4_ = 0;
    uVar32 = 0;
    uVar33 = 0x3ff00000;
    local_308 = param_2;
    if (lVar13 != -1) {
      if (*(char *)(param_2[7] + lVar13) == '\0') {
        FUN_1447d5d8e(param_2 + 4,*(int *)(param_1 + 0xc));
      }
      pdVar14 = (double *)(lVar13 * 0x60 + param_2[4]);
      pdVar15 = local_2f8;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar15 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        pdVar15 = pdVar15 + 1;
      }
      uVar32 = (undefined4)local_2a8;
      uVar33 = local_2a8._4_4_;
    }
    auVar27 = _DAT_149934d80;
    puVar12 = &DAT_14cadc270 + (longlong)*(char *)(param_1 + 0x10) * 0x480;
    lVar13 = (longlong)*(char *)(param_1 + 0x11) * 0xc0;
    pdVar14 = (double *)(puVar12 + lVar13);
    auVar34 = *(undefined1 (*) [16])(puVar12 + lVar13 + 0x40);
    dVar22 = auVar34._0_8_;
    dVar1 = auVar34._8_8_;
    dVar24 = SUB168(*(undefined1 (*) [16])(puVar12 + lVar13 + 0x50),0);
    auVar29 = minpd(auVar34,local_2b8);
    auVar34._4_4_ = uVar33;
    auVar34._0_4_ = uVar32;
    auVar34._8_4_ = (undefined4)uStack_2a0;
    auVar34._12_4_ = uStack_2a0._4_4_;
    auVar34 = minpd(*(undefined1 (*) [16])(puVar12 + lVar13 + 0x50),auVar34);
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    iVar8 = movmskpd((int)lVar13,auVar30);
    auVar29._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar11 = movmskpd((int)puVar12,auVar29);
    dVar21 = local_2b8._8_8_;
    if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
      dVar1 = *pdVar14;
      dVar21 = pdVar14[1];
      dVar25 = pdVar14[2];
      dVar2 = pdVar14[3];
      dVar22 = dVar21 * local_2f8[2] * -1.0 +
               dVar25 * local_2f8[1] + local_2f8[0] * dVar2 * 1.0 + local_2f8[3] * dVar1;
      dVar24 = dVar1 * local_2f8[2] * 1.0 +
               dVar2 * local_2f8[1] + local_2f8[0] * dVar25 * -1.0 + local_2f8[3] * dVar21;
      auVar27._0_8_ =
           dVar2 * local_2f8[2] * 1.0 +
           ((local_2f8[0] * dVar21 * 1.0 + local_2f8[3] * dVar25) - local_2f8[1] * dVar1);
      auVar27._8_8_ =
           dVar25 * local_2f8[2] * -1.0 +
           ((local_2f8[0] * dVar1 * -1.0 + local_2f8[3] * dVar2) - local_2f8[1] * dVar21);
    }
    else {
      dVar28 = local_2f8[1] + local_2f8[1];
      dVar4 = local_2f8[2] + local_2f8[2];
      dVar2 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
      dVar18 = local_2b8._0_8_;
      dVar25 = (DAT_149934d80._8_8_ - (local_2f8[2] * dVar4 + dVar2)) * dVar21;
      dVar5 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
      dVar3 = (dVar4 * local_2f8[1] - dVar5) * (double)CONCAT44(uVar33,uVar32);
      local_1a8 = (1.0 - (dVar2 + local_2f8[1] * dVar28)) * (double)CONCAT44(uVar33,uVar32);
      local_1c8 = (dVar4 * local_2f8[1] + dVar5) * dVar21;
      local_1f8._8_8_ = (dVar28 * local_2f8[0] + dVar4 * local_2f8[3]) * dVar18;
      local_1f8._0_8_ =
           ((double)DAT_149934d80 - (local_2f8[2] * dVar4 + local_2f8[1] * dVar28)) * dVar18;
      local_1e8._8_8_ = 0;
      local_1e8._0_8_ = (local_2f8[0] * dVar4 - dVar28 * local_2f8[3]) * dVar18;
      local_1d8._8_4_ = SUB84(dVar25,0);
      local_1d8._0_8_ = (dVar28 * local_2f8[0] - dVar4 * local_2f8[3]) * dVar21;
      local_1d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar3,0);
      local_1b8._0_8_ =
           (dVar28 * local_2f8[3] + local_2f8[0] * dVar4) * (double)CONCAT44(uVar33,uVar32);
      local_1b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0x3ff0000000000000;
      dVar6 = *pdVar14;
      dVar7 = pdVar14[1];
      dVar5 = pdVar14[2];
      dVar26 = dVar7 + dVar7;
      dVar2 = dVar5 + dVar5;
      dVar28 = dVar6 * (dVar6 + dVar6);
      dVar25 = pdVar14[3];
      dVar3 = dVar2 * dVar25;
      dVar4 = (dVar6 + dVar6) * pdVar14[3];
      dVar25 = dVar26 * dVar25;
      dStack_230 = (dVar2 * dVar7 - dVar4) * dVar24;
      local_278 = ((double)DAT_149934d80 - (dVar5 * dVar2 + dVar7 * dVar26)) * dVar22;
      dVar5 = (DAT_149934d80._8_8_ - (dVar5 * dVar2 + dVar28)) * dVar1;
      dStack_270 = (dVar26 * dVar6 + dVar3) * dVar22;
      local_248 = (dVar2 * dVar7 + dVar4) * dVar1;
      local_238 = (dVar25 + *pdVar14 * dVar2) * dVar24;
      local_268 = (*pdVar14 * dVar2 - dVar25) * dVar22;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar5,0);
      local_258._0_8_ = (dVar26 * dVar6 - dVar3) * dVar1;
      local_258._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_240 = 0;
      local_228 = (1.0 - (dVar28 + dVar7 * dVar26)) * dVar24;
      uStack_220 = 0;
      local_218 = pdVar14[4];
      dStack_210 = pdVar14[5];
      local_208 = pdVar14[6];
      uStack_200 = 0x3ff0000000000000;
      local_198 = (undefined4)local_2d8;
      uStack_194 = local_2d8._4_4_;
      uStack_190 = (undefined4)uStack_2d0;
      uStack_18c = uStack_2d0._4_4_;
      local_188 = local_2c8;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar21 * dVar1);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar18 * dVar22);
      auVar34 = blendvpd(_DAT_149936790,auVar27,auVar19);
      uVar17 = -(ulonglong)(0.0 <= (double)CONCAT44(uVar33,uVar32) * dVar24);
      dVar22 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
      dVar24 = auVar34._0_8_;
      local_178[2] = local_178[2] * dVar24;
      local_178[1] = local_178[1] * dVar24;
      local_178[0] = local_178[0] * dVar24;
      dVar24 = auVar34._8_8_;
      local_148 = local_148 * dVar24;
      local_178[5] = local_178[5] * dVar24;
      local_178[4] = dVar24 * local_178[4];
      local_128 = local_128 * dVar22;
      local_130 = local_130 * dVar22;
      local_138 = dVar22 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar22 = local_288 * local_288 + local_298 * local_298;
      dVar24 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar23._0_8_ = dVar22 + dVar24;
      auVar23._8_8_ = dVar22 + dVar24;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      auVar34 = sqrtpd(auVar23,auVar23);
      auVar34 = divpd(auVar27,auVar34);
      auVar31._0_8_ = auVar34._0_8_ * local_288;
      auVar31._8_8_ = auVar34._8_8_ * dStack_280;
      dVar22 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
      dVar24 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
      auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar20);
    }
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x18);
      lVar9 = (longlong)*(int *)(param_1 + 0x20) * 0x28;
      plVar16 = local_308;
      do {
        local_1f8._8_4_ = SUB84(dVar24,0);
        local_1f8._0_8_ = dVar22;
        local_1f8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        local_328 = *(undefined4 *)(lVar13 + 0x24);
        local_320 = param_4;
        local_318 = local_1f8;
        local_310 = local_2f8;
        local_1e8 = auVar27;
        FUN_1407dbdda(lVar13,local_178,plVar16,local_300);
        if (local_178[0]._0_4_ != -1) {
          iVar8 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar8 + 1U) {
            FUN_1400c28ea(param_5,iVar8);
          }
          pdVar14 = local_178;
          pdVar15 = (double *)((longlong)iVar8 * 0x70 + *param_5);
          for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
            *pdVar15 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar15 = pdVar15 + 1;
          }
          pdVar14 = local_178 + 2;
          pdVar15 = local_2f8;
          for (lVar10 = 0xc; plVar16 = local_308, lVar10 != 0; lVar10 = lVar10 + -1) {
            *pdVar15 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar15 = pdVar15 + 1;
          }
        }
        lVar13 = lVar13 + 0x28;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d9536 FUN_1487d9536 body=176 status=ok
// SIG undefined FUN_1487d9536(void)

void FUN_1487d9536(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    uVar1 = FUN_1407725cc();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      local_50 = *param_2;
      local_48 = &local_50;
      local_40 = &local_28;
      local_28 = 0;
      local_30 = &local_48;
      local_38 = &LAB_143cbcae0;
      FUN_1457426f4(uVar1);
      if (local_28 != 0) {
        FUN_1406ebff6(local_28,2,param_3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d95e8 FUN_1487d95e8 body=114 status=ok
// SIG undefined FUN_1487d95e8(void)

void FUN_1487d95e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_18 = 0xff;
  local_60 = param_2;
  FUN_1487d9536(0,&local_60);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d965c FUN_1487d965c body=103 status=ok
// SIG undefined FUN_1487d965c(void)

void FUN_1487d965c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_18 = 0;
  local_60 = param_2;
  FUN_1487d9536(local_58,&local_60,&local_58);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d96c4 FUN_1487d96c4 body=22 status=ok
// SIG undefined FUN_1487d96c4(void)

void FUN_1487d96c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1487d96da FUN_1487d96da body=103 status=ok
// SIG undefined FUN_1487d96da(void)

void FUN_1487d96da(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_18 = 1;
  local_60 = param_2;
  FUN_1487d9536(local_58,&local_60,&local_58);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d9742 FUN_1487d9742 body=22 status=ok
// SIG undefined FUN_1487d9742(void)

void FUN_1487d9742(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 1487d9758 FUN_1487d9758 body=404 status=ok
// SIG undefined FUN_1487d9758(void)

void FUN_1487d9758(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = param_2;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0x3ff00000;
    }
    else {
      uVar2 = *(undefined4 *)(lVar1 + 0x240);
      uVar3 = *(undefined4 *)(lVar1 + 0x244);
      uVar4 = *(undefined4 *)(lVar1 + 0x248);
      uVar5 = *(undefined4 *)(lVar1 + 0x24c);
      uVar6 = *(undefined4 *)(lVar1 + 0x250);
      uVar7 = *(undefined4 *)(lVar1 + 0x254);
      uVar8 = *(undefined4 *)(lVar1 + 600);
      uVar9 = *(undefined4 *)(lVar1 + 0x25c);
    }
    FUN_144a7484c(param_3,&local_a8);
    local_d8 = dStack_a0 * (double)CONCAT44(uVar7,uVar6) * -1.0 +
               local_98 * (double)CONCAT44(uVar5,uVar4) +
               (double)CONCAT44(uVar3,uVar2) * dStack_90 * 1.0 +
               (double)CONCAT44(uVar9,uVar8) * local_a8;
    dStack_d0 = local_a8 * (double)CONCAT44(uVar7,uVar6) * 1.0 +
                dStack_90 * (double)CONCAT44(uVar5,uVar4) +
                (double)CONCAT44(uVar3,uVar2) * local_98 * -1.0 +
                (double)CONCAT44(uVar9,uVar8) * dStack_a0;
    local_c8 = dStack_90 * (double)CONCAT44(uVar7,uVar6) * 1.0 +
               (((double)CONCAT44(uVar3,uVar2) * dStack_a0 * 1.0 +
                (double)CONCAT44(uVar9,uVar8) * local_98) - (double)CONCAT44(uVar5,uVar4) * local_a8
               );
    dStack_c0 = local_98 * (double)CONCAT44(uVar7,uVar6) * -1.0 +
                (((double)CONCAT44(uVar3,uVar2) * local_a8 * -1.0 +
                 (double)CONCAT44(uVar9,uVar8) * dStack_90) -
                (double)CONCAT44(uVar5,uVar4) * dStack_a0);
    FUN_1448052ee(&local_d8,&local_a8);
    local_68 = 1;
    FUN_1487d9536(param_1,&local_b0,&local_a8);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d98ee FUN_1487d98ee body=194 status=ok
// SIG undefined FUN_1487d98ee(void)

void FUN_1487d98ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_c0 = param_2;
  FUN_14485c47a(&local_c8,param_3);
  local_b8 = local_c8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = local_88 & 0xffffff00;
  uStack_84 = 0;
  FUN_14070d956(&local_b8);
  local_48 = local_88;
  uStack_44 = (undefined4)uStack_84;
  uStack_40 = uStack_84._4_4_;
  uStack_3c = uStack_7c;
  local_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = (undefined4)uStack_a8;
  uStack_64 = uStack_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_78 = (undefined4)local_b8;
  uStack_74 = local_b8._4_4_;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  local_38 = 2;
  FUN_1487d9536(param_1,&local_c0);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d99b2 FUN_1487d99b2 body=246 status=ok
// SIG undefined FUN_1487d99b2(void)

void FUN_1487d99b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
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
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = param_3;
  local_c0 = param_2;
  FUN_1487d9aaa(local_d8);
  if (local_d0 != 0) {
    cVar1 = FUN_144729dda(local_d8);
    if (cVar1 != '\0') {
      local_e0 = 0;
      FUN_14485c47a(&local_e0,param_1);
      local_b8 = local_e0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = CONCAT31(local_88._1_3_,2);
      uStack_84 = 0;
      FUN_14070d956(&local_b8);
      local_48 = local_88;
      uStack_44 = (undefined4)uStack_84;
      uStack_40 = uStack_84._4_4_;
      uStack_3c = uStack_7c;
      local_58 = (undefined4)uStack_98;
      uStack_54 = uStack_98._4_4_;
      uStack_50 = (undefined4)local_90;
      uStack_4c = local_90._4_4_;
      local_68 = (undefined4)uStack_a8;
      uStack_64 = uStack_a8._4_4_;
      uStack_60 = (undefined4)uStack_a0;
      uStack_5c = uStack_a0._4_4_;
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      local_38 = 2;
      FUN_1487d9536(param_1,&local_c0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d9aaa FUN_1487d9aaa body=74 status=ok
// SIG undefined FUN_1487d9aaa(void)

undefined8 * FUN_1487d9aaa(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_14069ce7c();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 1487d9af4 FUN_1487d9af4 body=250 status=ok
// SIG undefined FUN_1487d9af4(void)

void FUN_1487d9af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
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
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = param_3;
  local_c0 = param_2;
  FUN_1487d9aaa(local_d8);
  if (local_d0 != 0) {
    cVar1 = FUN_144729dda(local_d8);
    if (cVar1 != '\0') {
      local_e0 = 0;
      FUN_14485c47a(&local_e0,param_1);
      local_b8 = local_e0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = CONCAT31(local_88._1_3_,3);
      uStack_84 = param_4;
      FUN_14070d956(&local_b8);
      local_48 = local_88;
      uStack_44 = (undefined4)uStack_84;
      uStack_40 = uStack_84._4_4_;
      uStack_3c = uStack_7c;
      local_58 = (undefined4)uStack_98;
      uStack_54 = uStack_98._4_4_;
      uStack_50 = (undefined4)local_90;
      uStack_4c = local_90._4_4_;
      local_68 = (undefined4)uStack_a8;
      uStack_64 = uStack_a8._4_4_;
      uStack_60 = (undefined4)uStack_a0;
      uStack_5c = uStack_a0._4_4_;
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      local_38 = 2;
      FUN_1487d9536(param_1,&local_c0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d9bf0 FUN_1487d9bf0 body=189 status=ok
// SIG undefined FUN_1487d9bf0(void)

void FUN_1487d9bf0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  if (param_1 != 0) {
    uVar1 = FUN_1407725cc();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      local_48 = &local_50;
      local_40 = &local_28;
      local_28 = 0;
      local_30 = &local_48;
      local_38 = &LAB_143cbcae0;
      local_50 = param_2;
      FUN_1457426f4(uVar1);
      if (local_28 != 0) {
        if (param_3 == '\0') {
          FUN_146545d40(local_28,&local_58);
        }
        else {
          FUN_14186d510();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d9cae FUN_1487d9cae body=189 status=ok
// SIG undefined FUN_1487d9cae(void)

void FUN_1487d9cae(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  if (param_1 != 0) {
    uVar1 = FUN_1407725cc();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      local_48 = &local_50;
      local_40 = &local_28;
      local_28 = 0;
      local_30 = &local_48;
      local_38 = &LAB_143cbcae0;
      local_50 = param_2;
      FUN_1457426f4(uVar1);
      if (local_28 != 0) {
        if (param_3 == '\0') {
          FUN_1413d8066(local_28,&local_58);
        }
        else {
          FUN_14134c034();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d9d82 FUN_1487d9d82 body=120 status=ok
// SIG undefined FUN_1487d9d82(void)

void FUN_1487d9d82(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1470e4c26();
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 8))();
        lVar3 = FUN_144af6922();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          if (uVar4 == 0) {
            return;
          }
          FUN_1470e4ca4(param_1,uVar4 & 0xffffffff);
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1487d9e04 FUN_1487d9e04 body=208 status=ok
// SIG undefined FUN_1487d9e04(void)

uint * FUN_1487d9e04(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1487d9ed6(param_1,param_2,param_4);
  if (((char)param_2[8] != '\0') && (*(char *)(param_1 + 0x18) == '\x01')) {
    cVar2 = FUN_140a1daa8(param_2,&local_24);
    uVar5 = 0;
    if (cVar2 != '\0') {
      bVar3 = FUN_142b461ae(param_1 + 0x10,local_24);
      uVar5 = (uint)bVar3;
    }
    if ((byte)param_2[8] == 1) {
      *param_2 = uVar5;
    }
    else {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[8] * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar4 = param_2;
        if (0x18 < (ushort)param_2[6]) {
          puVar4 = *(uint **)param_2;
        }
        (*pcVar1)(puVar4);
      }
      if (0x18 < (ushort)param_2[6]) {
        FUN_1400020a8(*(undefined8 *)param_2);
      }
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar5;
      *(undefined1 *)(param_2 + 8) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d9ed6 FUN_1487d9ed6 body=764 status=ok
// SIG undefined FUN_1487d9ed6(void)

double * FUN_1487d9ed6(longlong param_1,double *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  double *local_80;
  double local_78;
  double local_70;
  double local_60;
  longlong *local_58;
  double local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)FUN_1447262c2(param_3);
  if (plVar1 == (longlong *)0x0) {
LAB_1487d9f47:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar2 = FUN_1407725cc();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 == (longlong *)0x0) goto LAB_1487d9f47;
    uVar2 = FUN_1407725cc();
    plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
    if (plVar1 == plVar3) goto LAB_1487d9f47;
  }
  plVar1 = (longlong *)FUN_1447262c2(param_3);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_144a78ab8();
    lVar4 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar4 != 0) {
      uVar2 = FUN_144a78ab8();
      lVar5 = FUN_144718840(lVar4,uVar2);
      if (((lVar4 != lVar5) && (plVar3 != (longlong *)0x0)) && (lVar5 != 0)) {
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        local_60 = (double)(param_1 + 8);
        local_58 = &local_48;
        local_48 = 0;
        local_80 = &local_60;
        local_88 = &LAB_143cbcae0;
        FUN_1457426f4(uVar2);
        lVar4 = local_48;
        uVar2 = FUN_14069fc26(lVar5);
        lVar6 = FUN_1408a1fe2(uVar2);
        uVar2 = FUN_14069fc26(lVar5);
        lVar5 = FUN_145a2b174(uVar2);
        if (lVar5 != 0 && (lVar6 != 0 && lVar4 != 0)) {
          pdVar7 = (double *)FUN_1447c6d68(lVar4);
          lVar4 = *(longlong *)(lVar6 + 0x1c8);
          if (lVar4 == 0) {
            pdVar8 = (double *)&DAT_14c8464e0;
            local_50 = DAT_14c8464f0;
          }
          else {
            pdVar8 = (double *)(lVar4 + 0x260);
            local_50 = *(double *)(lVar4 + 0x270);
          }
          lVar4 = *(longlong *)(lVar5 + 0x1c8);
          if (lVar4 == 0) {
            pdVar9 = (double *)&DAT_14c8464e0;
            dVar10 = DAT_14c8464f0;
          }
          else {
            pdVar9 = (double *)(lVar4 + 0x260);
            dVar10 = *(double *)(lVar4 + 0x270);
          }
          local_50 = local_50 - dVar10;
          dVar10 = *pdVar8 - *pdVar9;
          dVar11 = pdVar8[1] - pdVar9[1];
          local_60 = 1.0 / SQRT(local_50 * local_50 + dVar10 * dVar10 + dVar11 * dVar11);
          local_50 = local_50 * local_60;
          local_58 = (longlong *)(dVar11 * local_60);
          local_60 = local_60 * dVar10;
          FUN_144afe7fe(&local_60,&local_88);
          dVar10 = pdVar7[3] * local_70 +
                   pdVar7[2] * local_78 + *pdVar7 * (double)local_88 + pdVar7[1] * (double)local_80;
          dVar11 = (dVar10 + dVar10) * dVar10 + -1.0;
          dVar10 = dVar11;
          if (1.0 <= dVar11) {
            dVar10 = 1.0;
          }
          dVar10 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar10));
          *(undefined2 *)(param_2 + 3) = 8;
          *param_2 = dVar10 * 57.29577951308232;
          *(undefined1 *)(param_2 + 4) = 0x15;
          goto LAB_1487da037;
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_1487da037:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487da21a FUN_1487da21a body=356 status=ok
// SIG undefined FUN_1487da21a(void)

undefined8 * FUN_1487da21a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_3 + 4);
  if (bVar1 == 5) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 6) {
      FUN_142b38d56(param_3,&local_38);
    }
    else if (iVar3 == 5) {
      FUN_142b38d56(param_3,&local_38);
      local_28 = local_30;
    }
    else {
      if (iVar3 != 4) goto LAB_1487da2a4;
      FUN_142b38d56(param_3,&local_38);
      local_28 = local_38;
    }
  }
  else {
    if (bVar1 != 4) {
LAB_1487da2a4:
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      _Dst = param_2;
      _Src = param_3;
      if (0x18 < uVar2) {
        _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = _Dst;
        _Src = (undefined8 *)*param_3;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar4 == (code *)0x0) {
        memcpy(_Dst,_Src,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar4)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
      goto LAB_1487da35d;
    }
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 3) {
      FUN_144a7b7fe(param_3,&local_38);
    }
    else if (iVar3 == 2) {
      FUN_144a7b7fe(param_3,&local_38);
      local_28 = local_30;
    }
    else {
      if (iVar3 != 1) goto LAB_1487da2a4;
      FUN_144a7b7fe(param_3,&local_38);
      local_28 = local_38;
    }
  }
  *(undefined2 *)(param_2 + 3) = 8;
  *param_2 = local_28;
  *(undefined1 *)(param_2 + 4) = 0x15;
LAB_1487da35d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487da380 FUN_1487da380 body=195 status=ok
// SIG undefined FUN_1487da380(void)

undefined8 FUN_1487da380(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  float local_30;
  undefined4 uStack_2c;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x20) == '\x05') {
    FUN_142b38d56(param_2,&local_30);
LAB_1487da3cb:
    cVar1 = FUN_142b461ae(param_1 + 0x18,(float)(double)CONCAT44(uStack_2c,local_30));
    if ((cVar1 != '\0') && (cVar1 = FUN_142b461ae(param_1 + 0x18,(float)local_28), cVar1 != '\0')) {
      local_30 = (float)local_20;
LAB_1487da41a:
      uVar2 = FUN_142b461ae(param_1 + 0x18,local_30);
      goto LAB_1487da426;
    }
  }
  else {
    if (*(char *)(param_2 + 0x20) == '\x04') {
      FUN_144a7b7fe(param_2,&local_30);
      goto LAB_1487da3cb;
    }
    cVar1 = FUN_140a1daa8(param_2,&local_30);
    if (cVar1 != '\0') goto LAB_1487da41a;
  }
  uVar2 = 0;
LAB_1487da426:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1487da597 FUN_1487da597 body=701 status=ok
// SIG undefined FUN_1487da597(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1487da597(double *param_1,double *param_2,double *param_3,float param_4,float param_5,
                      double *param_6)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_4 < 1e-08) {
    uVar4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)((longlong)param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
    dVar9 = param_2[2];
    dVar10 = param_2[3];
  }
  else {
    if (param_4 <= 1.0) {
      fVar5 = (float)FUN_1470b20fd(param_2,param_3);
      if (180.0 - param_5 < ABS(fVar5 * 57.295776)) {
        fVar5 = (float)FUN_1470b20fd(param_2,param_6);
        if (0.0001 < fVar5 * 57.295776) {
          dVar15 = param_2[2] * -1.0;
          dVar17 = param_2[3] * 1.0;
          dVar1 = *param_6;
          dVar2 = param_6[1];
          dVar11 = param_6[2];
          dVar14 = param_6[3];
          dVar10 = param_2[1];
          dVar9 = param_2[1];
          local_d8 = dVar2 * dVar15 * -1.0 +
                     ((dVar17 * dVar1 - *param_2 * dVar14 * 1.0) - dVar11 * dVar10);
          dStack_d0 = dVar1 * dVar15 * 1.0 +
                      ((dVar17 * dVar2 - *param_2 * dVar11 * -1.0) - dVar14 * dVar9);
          dVar9 = dVar11 * dVar15 * -1.0 +
                  dVar9 * dVar2 + (dVar17 * dVar14 - *param_2 * dVar1 * -1.0);
          param_3 = &local_d8;
          local_c8._8_4_ = SUB84(dVar9,0);
          local_c8._0_8_ =
               dVar14 * dVar15 * 1.0 + dVar10 * dVar1 + (dVar17 * dVar11 - *param_2 * dVar2 * 1.0);
          local_c8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          param_4 = (180.0 / (fVar5 * 57.295776)) * param_4;
        }
      }
      FUN_144a44da6(param_1,param_2,param_3,(double)param_4);
      dVar9 = *param_1;
      dVar10 = param_1[1];
      dVar1 = param_1[2];
      dVar2 = param_1[3];
      dVar11 = dVar1 * dVar1 + dVar9 * dVar9;
      dVar14 = dVar2 * dVar2 + dVar10 * dVar10;
      auVar12._0_8_ = dVar11 + dVar14;
      auVar12._8_8_ = dVar11 + dVar14;
      uVar3 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
      auVar13 = sqrtpd(auVar12,auVar12);
      auVar13 = divpd(_DAT_149934d80,auVar13);
      auVar16._0_8_ = auVar13._0_8_ * dVar1;
      auVar16._8_8_ = auVar13._8_8_ * dVar2;
      *param_1 = (double)((ulonglong)(dVar9 * auVar13._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
      param_1[1] = (double)((ulonglong)(dVar10 * auVar13._8_8_) & uVar3);
      auVar13._8_4_ = (int)uVar3;
      auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
      auVar13._12_4_ = (int)(uVar3 >> 0x20);
      auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar13);
      *(undefined1 (*) [16])(param_1 + 2) = auVar13;
      if ((local_b0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar4 = *(undefined4 *)param_3;
    uVar6 = *(undefined4 *)((longlong)param_3 + 4);
    uVar7 = *(undefined4 *)(param_3 + 1);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
    dVar9 = param_3[2];
    dVar10 = param_3[3];
  }
  param_1[2] = dVar9;
  param_1[3] = dVar10;
  *(undefined4 *)param_1 = uVar4;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1487da962 FUN_1487da962 body=212 status=ok
// SIG undefined FUN_1487da962(void)

void FUN_1487da962(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1408d84e8();
  uVar3 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar3,param_2);
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lVar2 = *(longlong *)(lVar5 + 0x130), lVar2 != 0)) {
    lVar4 = FUN_144a73ef6();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      param_1[0x15] = lVar5;
      lVar5 = (**(code **)(*param_1 + 0x200))(param_1);
      if (lVar5 == 0) {
        return;
      }
      lVar2 = param_1[0x15];
      iVar1 = *(int *)(lVar2 + 0x940);
      *(uint *)(lVar2 + 0x940) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x944) < iVar1 + 1U) {
        FUN_140890db0((longlong *)(lVar2 + 0x938),iVar1);
      }
      lVar2 = *(longlong *)(lVar2 + 0x938);
      *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = param_1 + 0x14;
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar5;
      return;
    }
  }
  param_1[0x15] = 0;
  return;
}



// FUNCTION 1487daa36 FUN_1487daa36 body=99 status=ok
// SIG undefined FUN_1487daa36(void)

void FUN_1487daa36(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  if (param_1[0x15] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x200))(param_1);
    if (lVar2 != 0) {
      FUN_14486b2ec(param_1[0x15] + 0x8e8,param_1 + 0x14,lVar2);
    }
  }
  FUN_1474c55b0(param_1,param_2);
  return;
}



// FUNCTION 1487daa9a FUN_1487daa9a body=245 status=ok
// SIG undefined FUN_1487daa9a(void)

undefined8 * FUN_1487daa9a(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14b0a3900;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 **)((longlong)param_1 + 0x4c) = &DAT_3f8000003f800000;
  FUN_140416388(param_1 + 0xb,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 1487dab90 FUN_1487dab90 body=200 status=ok
// SIG undefined FUN_1487dab90(void)

void FUN_1487dab90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_141339014();
  uVar1 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar1,param_2);
  lVar4 = *param_2;
  if ((lVar4 != 0) && (lVar3 = *(longlong *)(lVar4 + 0x130), lVar3 != 0)) {
    lVar2 = FUN_144a73ef6();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_1487dabed;
  }
  lVar4 = 0;
LAB_1487dabed:
  *(longlong *)(param_1 + 0x128) = lVar4;
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    lVar3 = (longlong)*(int *)(param_1 + 0xb0) * 0x68;
    do {
      FUN_1470d7a0a(*(longlong *)(param_1 + 0x128) + 0x8e8,lVar4);
      lVar4 = lVar4 + 0x68;
      lVar3 = lVar3 + -0x68;
    } while (lVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x128);
  }
  FUN_1470d7a0a(lVar4 + 0x8e8,param_1 + 0x28);
  FUN_1487dac58(param_1);
  return;
}



// FUNCTION 1487dac58 FUN_1487dac58 body=845 status=ok
// SIG undefined FUN_1487dac58(void)

void FUN_1487dac58(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x21) == '\x01') &&
     (FUN_14173e550(*(longlong *)(param_1 + 0x128) + 0x8e8,param_1 + 0x28),
     *(longlong *)(param_1 + 0x30) != 0)) {
    FUN_1404163bc(param_1 + 0x58);
  }
  iVar11 = *(int *)(param_1 + 0xb0);
  if (-1 < iVar11) {
    plVar1 = (longlong *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xe4) != iVar11) {
      FUN_1487df978(plVar1);
      iVar11 = *(int *)(param_1 + 0xb0);
    }
    if (0 < iVar11) {
      lVar13 = 0;
      lVar12 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0xa8);
        FUN_14173e550(*(longlong *)(param_1 + 0x128) + 0x8e8,lVar5 + lVar13);
        if ((*(longlong *)(lVar5 + 8 + lVar13) != 0) &&
           ((*(char *)(param_1 + 0x130) != '\0' || (1e-08 < *(float *)(lVar5 + 0x18 + lVar13))))) {
          iVar11 = *(int *)(param_1 + 0xe0);
          *(uint *)(param_1 + 0xe0) = iVar11 + 1U;
          if (*(uint *)(param_1 + 0xe4) < iVar11 + 1U) {
            FUN_1487df9d8(plVar1,iVar11);
          }
          *(longlong *)(*plVar1 + (longlong)iVar11 * 8) = lVar5 + lVar13;
        }
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 0x68;
      } while (lVar12 < *(int *)(param_1 + 0xb0));
    }
    uVar3 = *(uint *)(param_1 + 0xe0);
    if (*(char *)(param_1 + 0x21) == '\x01') {
      if (uVar3 == 0 || *(longlong *)(param_1 + 0x30) == 0) goto LAB_1487dad8e;
    }
    else if ((ulonglong)uVar3 == 0) goto LAB_1487dad8e;
    iVar11 = *(int *)(param_1 + 0xf0);
    if (-1 < iVar11) {
      plVar2 = (longlong *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0xf0) = 0;
      iVar6 = 0;
      if (*(int *)(param_1 + 0xf4) != iVar11) {
        FUN_14482f6fa(plVar2);
        iVar6 = *(int *)(param_1 + 0xf0);
        iVar11 = *(int *)(param_1 + 0xf4);
      }
      *(uint *)(param_1 + 0xf0) = iVar6 + uVar3 + 1;
      if ((uint)(iVar11 - iVar6) < uVar3 + 1) {
        FUN_14475e4ac(plVar2,iVar6);
      }
      iVar11 = *(int *)(param_1 + 0xe0);
      fVar15 = 0.0;
      if ((longlong)iVar11 != 0) {
        lVar12 = *(longlong *)(param_1 + 0xd8);
        lVar13 = 0;
        do {
          lVar5 = *(longlong *)(lVar12 + lVar13);
          iVar4 = *(int *)(lVar5 + 0x1c);
          iVar6 = *(int *)(lVar5 + 0x20);
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            *(int *)(lVar5 + 0x20) = iVar4;
            *(int *)(lVar5 + 0x1c) = iVar6;
            iVar7 = iVar4;
            iVar4 = iVar6;
          }
          if (*(float *)(lVar5 + 0x28) <= *(float *)(lVar5 + 0x24) &&
              *(float *)(lVar5 + 0x24) != *(float *)(lVar5 + 0x28)) {
            *(int *)(lVar5 + 0x20) = iVar4;
            *(int *)(lVar5 + 0x1c) = iVar7;
          }
          fVar15 = fVar15 + *(float *)(lVar5 + 0x18);
          FUN_1404163bc(lVar5 + 0x30);
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar11 * 8 != lVar13);
      }
      if (*(char *)(param_1 + 0x130) == '\0') {
        if (0 < (int)uVar3) {
          fVar14 = 0.0;
          uVar10 = 0;
          do {
            fVar14 = fVar14 + *(float *)(*(longlong *)(*plVar1 + uVar10 * 8) + 0x18) / fVar15;
            *(float *)(*plVar2 + uVar10 * 4) = fVar14;
            uVar10 = uVar10 + 1;
          } while (uVar3 != uVar10);
        }
        *(undefined4 *)(*plVar2 + (longlong)(int)uVar3 * 4) = 0x3f800000;
      }
      else {
        FUN_1487dafa8(param_1,0xffffffff);
      }
      QueryPerformanceCounter(&local_58);
      *(DWORD *)(param_1 + 0x120) = local_58.s.LowPart;
      *(DWORD *)(param_1 + 0x124) = local_58.s.LowPart;
      *(undefined4 *)(param_1 + 0x100) = 0;
      if (*(int *)(param_1 + 0x104) != 2) {
        FUN_1487dfa5e(param_1 + 0xf8);
      }
      FUN_1487db108(param_1 + 0xf8);
      uVar8 = FUN_1487db142(param_1);
      uVar9 = FUN_1487db142(param_1);
      FUN_1487db20a(param_1,(longlong)*(int *)(param_1 + 0x108) * 0x38 +
                            *(longlong *)(param_1 + 0xf8),uVar8,0x3f800000);
      iVar11 = *(int *)(param_1 + 0x108);
      FUN_1487db20a(param_1,(longlong)
                            (int)((iVar11 - ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1
                                 ) * 0x38 + *(longlong *)(param_1 + 0xf8),uVar9,0);
LAB_1487dad8e:
      if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar11);
}



// FUNCTION 1487dafa8 FUN_1487dafa8 body=351 status=ok
// SIG undefined FUN_1487dafa8(void)

void FUN_1487dafa8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  FUN_144a9ff88(plVar1);
  iVar6 = *(int *)(param_1 + 0xe0);
  if (0 < iVar6) {
    iVar11 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x118);
      uVar5 = iVar2 + 1;
      *(uint *)(param_1 + 0x118) = uVar5;
      if (*(uint *)(param_1 + 0x11c) < uVar5) {
        FUN_1446f48e2(plVar1);
      }
      *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar11;
      iVar11 = iVar11 + 1;
    } while (iVar6 != iVar11);
  }
  iVar6 = *(int *)(param_1 + 0x118);
  if (1 < iVar6) {
    uVar7 = (ulonglong)(iVar6 - 1);
    lVar9 = 0;
    do {
      if (-1 < (longlong)uVar7) {
        uVar5 = *(int *)(param_1 + 0x124) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x124) = uVar5;
        iVar11 = (int)((float)iVar6 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
        if (iVar11 != 0) {
          lVar4 = *plVar1;
          lVar10 = (longlong)(iVar11 + (int)lVar9);
          uVar3 = *(undefined4 *)(lVar4 + lVar9 * 4);
          *(undefined4 *)(lVar4 + lVar9 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
          *(undefined4 *)(lVar4 + lVar10 * 4) = uVar3;
        }
      }
      lVar9 = lVar9 + 1;
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (1 < *(int *)(param_1 + 0x118)) {
      lVar9 = *plVar1;
      uVar5 = *(int *)(param_1 + 0x118) - 1;
      uVar7 = (ulonglong)uVar5;
      if (*(int *)(lVar9 + uVar7 * 4) == param_2) {
        uVar8 = *(int *)(param_1 + 0x124) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x124) = uVar8;
        uVar8 = (uint)((float)(int)uVar5 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0));
        if (uVar8 != uVar5) {
          uVar3 = *(undefined4 *)(lVar9 + (longlong)(int)uVar8 * 4);
          *(undefined4 *)(lVar9 + (longlong)(int)uVar8 * 4) = *(undefined4 *)(lVar9 + uVar7 * 4);
          *(undefined4 *)(lVar9 + uVar7 * 4) = uVar3;
        }
      }
    }
  }
  return;
}



// FUNCTION 1487db108 FUN_1487db108 body=57 status=ok
// SIG undefined FUN_1487db108(void)

void FUN_1487db108(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2) {
    FUN_1487dfb30(param_1,iVar1);
  }
  FUN_1487dfb00((longlong)iVar1 * 0x38 + *param_1);
  return;
}



// FUNCTION 1487db142 FUN_1487db142 body=200 status=ok
// SIG undefined FUN_1487db142(void)

int FUN_1487db142(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  if ((*(char *)(param_1 + 0x21) == '\x01') &&
     (bVar1 = *(byte *)(param_1 + 0x90), *(byte *)(param_1 + 0x90) = bVar1 ^ 1, bVar1 != 1)) {
    return -1;
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x110) + -4 + (longlong)*(int *)(param_1 + 0x118) * 4);
    iVar4 = *(int *)(param_1 + 0x118) + -1;
    *(int *)(param_1 + 0x118) = iVar4;
    if (iVar4 == 0) {
      FUN_1487dafa8(param_1,iVar8);
    }
  }
  else {
    uVar5 = *(int *)(param_1 + 0x124) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x124) = uVar5;
    uVar3 = *(uint *)(param_1 + 0xf0);
    if ((int)uVar3 < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      uVar6 = (ulonglong)uVar3;
      do {
        uVar6 = uVar6 >> 1;
        uVar7 = (uint)uVar6 + iVar8;
        if (*(float *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar7 * 4) <=
            (float)(uVar5 >> 9 | 0x3f800000) + -1.0) {
          iVar8 = uVar7 + (uVar3 & 1);
        }
        bVar2 = 1 < uVar3;
        uVar3 = (uint)uVar6;
      } while (bVar2);
    }
  }
  return iVar8;
}



// FUNCTION 1487db20a FUN_1487db20a body=208 status=ok
// SIG undefined FUN_1487db20a(void)

void FUN_1487db20a(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0xe0) <= (int)param_3)) {
    lVar5 = param_1 + 0x28;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_3 * 8);
  }
  FUN_1487dba34(param_1,lVar5);
  *param_2 = lVar5;
  *(undefined4 *)(param_2 + 4) = param_4;
  FUN_1487dbde6(param_1,param_2,0);
  iVar1 = *(int *)(lVar5 + 0x1c);
  iVar2 = *(int *)(lVar5 + 0x20) - iVar1;
  iVar4 = 0;
  if (-1 < iVar2) {
    uVar3 = *(int *)(param_1 + 0x124) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x124) = uVar3;
    iVar4 = (int)((float)(iVar2 + 1) * ((float)(uVar3 >> 9 | 0x3f800000) + -1.0));
  }
  iVar4 = iVar4 + iVar1;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  *(int *)((longlong)param_2 + 0x24) = iVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 5) = 0xfffffffe;
  *(undefined4 *)(param_2 + 6) = 0xfffffffe;
  return;
}



// FUNCTION 1487db2da FUN_1487db2da body=1881 status=ok
// SIG undefined FUN_1487db2da(void)

void FUN_1487db2da(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  short sVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  short sVar10;
  longlong lVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  short sVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  float local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined6 local_1b0;
  undefined2 uStack_1aa;
  undefined6 uStack_1a8;
  undefined1 *local_1a0;
  undefined6 *local_198;
  longlong *local_168;
  longlong *local_140;
  undefined1 local_118 [56];
  longlong *local_e0;
  longlong *local_b8;
  undefined8 *local_90;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar8 = FUN_14477dc2a();
  FUN_14477dadc(uVar8,param_2);
  if (((*(char *)(param_1 + 0x21) == '\x01') && (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(int *)(param_1 + 0xe0) == 0)) goto LAB_1487db33e;
  iVar2 = *(int *)(param_1 + 0x108);
  plVar12 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0xf8));
  plVar14 = (longlong *)
            ((longlong)(int)((iVar2 + 1) - ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe)) * 0x38
            + *(longlong *)(param_1 + 0xf8));
  lVar16 = *param_2;
  sVar10 = *(short *)(param_1 + 0xa0);
  if (sVar10 == -1) {
    sVar15 = *(short *)(lVar16 + 0x5e8);
LAB_1487db3ca:
    sVar5 = sVar10 + 1;
    if ((short)(sVar10 + 1) == -1) {
      sVar5 = sVar10 + 2;
    }
    if (((short)(sVar10 + 1) == 0) || (sVar5 != sVar15 || (DAT_14c872be0 == -1 || sVar5 == -1))) {
      sVar10 = sVar10 + 1;
      if (sVar5 != sVar15 || (DAT_14c872be0 == -1 || sVar5 == -1)) {
        sVar10 = sVar15;
      }
      *(short *)(param_1 + 0xa0) = sVar10;
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar16 + 0x5e0);
      *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(lVar16 + 0x5ea);
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x98);
      *(short *)(param_1 + 0xa0) = sVar15;
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar16 + 0x5e0);
      *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(lVar16 + 0x5ea);
      if (lVar9 != -1) goto LAB_1487db515;
    }
    if (*(char *)(param_1 + 0x18) == '\x01') {
      if ((*(char *)(param_1 + 0x21) == '\0') ||
         (uVar7 = 0xffffffff, *(char *)(param_1 + 0x20) == '\0')) {
        uVar7 = *(undefined4 *)(param_1 + 0x1c);
      }
      FUN_1487db20a(param_1,plVar12,uVar7,0x3f800000);
      if ((*(char *)(param_1 + 0x21) == '\x01') && (*(char *)(param_1 + 0x20) == '\0')) {
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) ^ 1;
      }
      uVar7 = FUN_1487db142(param_1);
      FUN_1487db20a(param_1,plVar14,uVar7,0);
    }
  }
  else {
    sVar15 = *(short *)(lVar16 + 0x5e8);
    if (sVar10 != sVar15 || *(longlong *)(param_1 + 0x98) == -1) goto LAB_1487db3ca;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar16 + 0x5e0);
    *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(lVar16 + 0x5ea);
  }
LAB_1487db515:
  FUN_1487dba34(param_1,*plVar12);
  FUN_1487dba34(param_1,*plVar14);
  lVar16 = *plVar12;
  if ((*(longlong *)(lVar16 + 8) == 0) || (*(longlong *)(*plVar14 + 8) == 0)) {
    FUN_1487dbab2(param_2,lVar16);
    FUN_1487dbab2(param_2,*plVar14);
    FUN_1487dac58(param_1);
    if (*(int *)(param_1 + 0xe0) == 0) goto LAB_1487db33e;
    iVar2 = *(int *)(param_1 + 0x108);
    lVar16 = *(longlong *)(param_1 + 0xf8);
    plVar12 = (longlong *)(lVar16 + (longlong)iVar2 * 0x38);
    plVar14 = (longlong *)
              ((longlong)(int)((iVar2 + 1) - ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe)) *
               0x38 + lVar16);
    lVar16 = *(longlong *)(lVar16 + (longlong)iVar2 * 0x38);
    if (*(longlong *)(lVar16 + 8) != 0) goto LAB_1487db5b1;
LAB_1487db5ac:
    plVar17 = (longlong *)0x0;
  }
  else {
LAB_1487db5b1:
    lVar9 = FUN_1402576f0();
    plVar3 = *(longlong **)(lVar16 + 8);
    if (plVar3 == (longlong *)0x0) goto LAB_1487db5ac;
    plVar17 = (longlong *)0x0;
    if ((lVar9 != 0) && (lVar16 = plVar3[2], lVar16 != 0)) {
      if (*(int *)(lVar16 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_1487db5ac;
      plVar17 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30) {
        plVar17 = plVar3;
      }
    }
  }
  fVar18 = *(float *)((longlong)plVar12 + 0xc);
  fVar19 = *(float *)((longlong)plVar12 + 0x14);
  if (fVar18 < fVar19) {
    fVar18 = (float)(**(code **)(*plVar17 + 0x2b0))(plVar17);
    fVar19 = fVar19 - fVar18;
    fVar18 = *(float *)((longlong)plVar12 + 0xc);
  }
  fVar20 = *(float *)(plVar12 + 1);
  if (fVar18 < fVar20) {
    fVar18 = (float)(**(code **)(*plVar17 + 0x2b0))(plVar17);
    fVar20 = fVar20 - fVar18;
  }
  if ((fVar20 <= fVar19) || (*(float *)((longlong)plVar12 + 0xc) < fVar20)) {
    bVar13 = 0;
  }
  else {
    *(int *)((longlong)plVar12 + 0x24) = *(int *)((longlong)plVar12 + 0x24) + -1;
    bVar13 = 1;
  }
  if (*(int *)((longlong)plVar12 + 0x24) < 1) {
    lVar16 = *plVar14;
    if (*plVar12 == lVar16) {
      if (-1 < *(int *)((longlong)plVar12 + 0x24)) goto LAB_1487db77e;
      uVar7 = *(undefined4 *)((longlong)plVar12 + 0xc);
      *(undefined4 *)((longlong)plVar14 + 0xc) = uVar7;
    }
    else {
      if ((*(float *)(lVar16 + 0x38) <= 0.0) || (*(float *)(lVar16 + 0x3c) <= 1e-05)) {
        fVar18 = *(float *)((longlong)plVar12 + 0xc) - *(float *)(plVar12 + 1);
        if (fVar18 < 0.0) {
          fVar19 = (float)(**(code **)(*plVar17 + 0x2b0))(plVar17);
          fVar18 = fVar18 + fVar19;
        }
        fVar19 = (float)(**(code **)(*plVar17 + 0x2b0))(plVar17);
        if ((bool)(~bVar13 & *(float *)(lVar16 + 0x38) < fVar19 - fVar18)) goto LAB_1487db77e;
      }
      FUN_14470c566(lVar16 + 0x30,(int)param_2[5]);
      cVar6 = FUN_1417b384c(lVar16 + 0x30);
      if (cVar6 == '\0') {
        fVar18 = *(float *)(lVar16 + 0x48);
        if (fVar18 < 1.0) {
          *(float *)(plVar14 + 4) = fVar18;
          *(float *)(plVar12 + 4) = 1.0 - fVar18;
        }
        goto LAB_1487db77e;
      }
      uVar7 = *(undefined4 *)((longlong)plVar14 + 0xc);
    }
    *(undefined4 *)(plVar14 + 1) = uVar7;
    *(undefined4 *)((longlong)plVar12 + 0x14) = *(undefined4 *)((longlong)plVar12 + 0xc);
    *(undefined1 *)(plVar12 + 3) = 1;
    *(undefined4 *)((longlong)plVar14 + 0x14) = *(undefined4 *)((longlong)plVar14 + 0xc);
    *(undefined1 *)(plVar14 + 3) = 1;
    FUN_1487dbd64(param_1);
    iVar2 = *(int *)(param_1 + 0x108);
    plVar12 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0xf8));
    plVar14 = (longlong *)
              ((longlong)(int)((iVar2 + 1) - ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe)) *
               0x38 + *(longlong *)(param_1 + 0xf8));
  }
  else {
LAB_1487db77e:
    *(undefined4 *)((longlong)plVar12 + 0x14) = *(undefined4 *)((longlong)plVar12 + 0xc);
    *(undefined1 *)(plVar12 + 3) = 1;
    *(undefined4 *)((longlong)plVar14 + 0x14) = *(undefined4 *)((longlong)plVar14 + 0xc);
    *(undefined1 *)(plVar14 + 3) = 1;
    FUN_1487dbde6(param_1,plVar12,1);
    FUN_1487dbde6(param_1,plVar14,1);
  }
  fVar18 = *(float *)(plVar12 + 4);
  uVar7 = *(undefined4 *)((longlong)plVar12 + 0x1c);
  lVar16 = *plVar12;
  if (*(longlong *)(lVar16 + 8) == 0) {
LAB_1487dba26:
    lVar11 = 0;
  }
  else {
    lVar9 = FUN_1402576f0();
    lVar16 = *(longlong *)(lVar16 + 8);
    if (lVar16 == 0) goto LAB_1487dba26;
    lVar11 = 0;
    if ((lVar9 != 0) && (lVar4 = *(longlong *)(lVar16 + 0x10), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_1487dba26;
      lVar11 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30) {
        lVar11 = lVar16;
      }
    }
  }
  local_1d8 = 0;
  local_1d0 = fVar18;
  local_1c8 = (longlong)plVar12 + 0xc;
  local_1c0 = plVar12 + 5;
  FUN_144b1f644(local_118,lVar11,1,uVar7);
  local_b8 = plVar12 + 2;
  FUN_1447aa98e(local_118,param_2);
  local_90 = &local_78;
  local_78 = 0;
  local_80 = SUB84(&local_90,0);
  uStack_7c = (undefined2)((ulonglong)&local_90 >> 0x20);
  uStack_7a = (undefined2)((ulonglong)&local_90 >> 0x30);
  local_88 = 0x1474d978e;
  uStack_82 = 0;
  local_198 = &local_1b0;
  local_1b0 = SUB86(&local_88,0);
  uStack_1aa = (undefined2)((ulonglong)&local_88 >> 0x30);
  local_1a0 = &LAB_144b1e5de;
  FUN_14015e554(param_2[1] + 0x148,DAT_14caccb08,&local_1a0);
  uVar8 = local_78;
  local_1a0 = (undefined1 *)*param_2;
  local_198 = (undefined6 *)CONCAT44(local_198._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
  local_80 = 0;
  uStack_7c = 0;
  local_88 = 0;
  uStack_82 = 0;
  FUN_14486b6e0(local_78,local_118,&local_88,&local_1a0);
  fVar18 = *(float *)(plVar14 + 4);
  if (1e-05 < fVar18) {
    uVar7 = *(undefined4 *)((longlong)plVar14 + 0x1c);
    lVar16 = *plVar14;
    if (*(longlong *)(lVar16 + 8) == 0) {
LAB_1487dba2d:
      lVar11 = 0;
    }
    else {
      lVar9 = FUN_1402576f0();
      lVar16 = *(longlong *)(lVar16 + 8);
      if (lVar16 == 0) goto LAB_1487dba2d;
      lVar11 = 0;
      if ((lVar9 != 0) && (lVar4 = *(longlong *)(lVar16 + 0x10), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_1487dba2d;
        lVar11 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30) {
          lVar11 = lVar16;
        }
      }
    }
    local_1d8 = 0;
    local_1d0 = fVar18;
    local_1c8 = (longlong)plVar14 + 0xc;
    local_1c0 = plVar14 + 5;
    FUN_144b1f644(&local_1a0,lVar11,1,uVar7);
    local_140 = plVar14 + 2;
    FUN_1447aa98e(&local_1a0,param_2);
    local_88 = (undefined6)*param_2;
    uStack_82 = (undefined2)((ulonglong)*param_2 >> 0x30);
    local_80 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_1aa = 0;
    FUN_14486b6e0(uVar8,&local_1a0);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_168 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_168 + 0x10))(local_168);
        }
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_e0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
LAB_1487db33e:
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487dba34 FUN_1487dba34 body=126 status=ok
// SIG undefined FUN_1487dba34(void)

void FUN_1487dba34(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14173e550();
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar3 = FUN_1402576f0();
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1487dba9d;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar4 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_1487dba9d;
      }
    }
  }
  lVar4 = 0;
LAB_1487dba9d:
  *(longlong *)(param_2 + 8) = lVar4;
  return;
}



// FUNCTION 1487dbab2 FUN_1487dbab2 body=689 status=ok
// SIG undefined FUN_1487dbab2(void)

void FUN_1487dbab2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_158 [40];
  longlong *local_130;
  undefined4 local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8;
  undefined4 local_c0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_140009b9a(local_d8,*param_1 + 0x160);
    FUN_1400021e4(param_2,local_f8);
    FUN_140233b1a(local_e8,local_f8);
    local_88 = L"AnimSetResolutionError";
    local_80[0] = 0x16;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"GbxAnimNode_RandomPlayer";
    local_80[0] = 0x18;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Could not resolve AnimSetKey \'{0}\' in RandomPlayer to valid UAnimSequence in anim instance \'{1}\'"
                 );
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    local_130 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 8))();
    }
    local_128 = local_c0;
    FUN_1487dc648(param_1);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dbd64 FUN_1487dbd64 body=130 status=ok
// SIG undefined FUN_1487dbd64(void)

void FUN_1487dbd64(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_1487db142();
  iVar3 = *(int *)(param_1 + 0x108) + 1;
  iVar3 = iVar3 - ((*(int *)(param_1 + 0x108) - (iVar3 >> 0x1f)) + 1U & 0xfffffffe);
  *(int *)(param_1 + 0x108) = iVar3;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  uVar4 = iVar3 - 1;
  if (iVar3 + 1U < 2) {
    uVar4 = iVar3 + 1U;
  }
  *(undefined4 *)(lVar1 + 0x20 + (longlong)iVar3 * 0x38) = 0x3f800000;
  FUN_1404163bc(*(longlong *)(lVar1 + (longlong)iVar3 * 0x38) + 0x30);
  FUN_1487db20a(param_1,(longlong)(int)uVar4 * 0x38 + lVar1,uVar2,0);
  return;
}



// FUNCTION 1487dbde6 FUN_1487dbde6 body=267 status=ok
// SIG undefined FUN_1487dbde6(void)

void FUN_1487dbde6(longlong param_1,longlong *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  float *pfVar5;
  char *pcVar6;
  float fVar7;
  
  lVar2 = *param_2;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pfVar5 = (float *)((longlong)
                       ((int)((ulonglong)(lVar2 - *(longlong *)(param_1 + 0xa8)) >> 3) * -0x3b13b13b
                       ) * 4 + *(longlong *)(param_1 + 0xc0));
  }
  else {
    pfVar5 = (float *)(param_1 + 0xbc);
  }
  fVar1 = *pfVar5;
  pcVar6 = (char *)(lVar2 + 0x60);
  if (*(char *)(param_1 + 0xd0) != '\0') {
    pcVar6 = (char *)(param_1 + 0xd1);
  }
  plVar3 = *(longlong **)(lVar2 + 8);
  if (fVar1 <= 0.0) {
    if ((*(float *)(plVar3 + 0x3f) <= 0.0) || (*pcVar6 == '\0')) {
      if (param_3 != '\0') {
        return;
      }
      fVar1 = *(float *)(lVar2 + 0x28);
      fVar7 = *(float *)(lVar2 + 0x24);
      uVar4 = *(int *)(param_1 + 0x124) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x124) = uVar4;
      fVar7 = ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * (fVar1 - fVar7) + fVar7;
    }
    else {
      fVar7 = *(float *)(*(longlong *)(param_1 + 0x128) + 0x8c8) / *(float *)(plVar3 + 0x3f);
    }
  }
  else {
    fVar7 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3);
    fVar7 = fVar7 / fVar1;
  }
  *(float *)((longlong)param_2 + 0x1c) = fVar7;
  return;
}



// FUNCTION 1487dbef2 FUN_1487dbef2 body=1413 status=ok
// SIG undefined FUN_1487dbef2(void)

void FUN_1487dbef2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_278 [32];
  double *local_258;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 *local_238;
  undefined4 local_230;
  undefined8 *local_228;
  undefined4 local_220;
  double *local_218;
  undefined4 local_210;
  undefined4 *local_208;
  undefined4 local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined1 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  double *local_1b0;
  double local_1a8;
  byte local_1a0;
  longlong local_19c;
  undefined4 local_194;
  undefined1 local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  char local_167;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
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
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (((*(char *)(param_1 + 0x21) == '\x01') && (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(int *)(param_1 + 0xe0) == 0)) {
    if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_278);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_278);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  lVar2 = *(longlong *)(param_1 + 0xf8);
  lVar10 = (longlong)iVar1 * 0x38 + lVar2;
  lVar3 = *(longlong *)(lVar2 + (longlong)iVar1 * 0x38);
  if (*(longlong *)(lVar3 + 8) == 0) {
LAB_1487dc4b4:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_1402576f0();
    plVar9 = *(longlong **)(lVar3 + 8);
    if (plVar9 == (longlong *)0x0) goto LAB_1487dc4b4;
    plVar8 = (longlong *)0x0;
    if ((lVar7 != 0) && (lVar3 = plVar9[2], lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_1487dc4b4;
      plVar8 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        plVar8 = plVar9;
      }
    }
  }
  cVar6 = FUN_144b1e4d0(*(undefined4 *)(lVar10 + 0x20),0x3f800000,4);
  if (cVar6 != '\0') {
    FUN_144b1f706(&local_1a8,param_2);
    local_240 = *(undefined4 *)(lVar10 + 0x18);
    local_248 = *(undefined8 *)(lVar10 + 0x10);
    local_158 = (double)*(float *)(lVar10 + 0xc);
    uStack_140 = CONCAT71(uStack_140._1_7_,0 < *(int *)(lVar10 + 0x24));
    uStack_150 = CONCAT31(uStack_150._1_3_,*(byte *)(*param_2 + 0x7e1) >> 1) & 0xffffff01;
    uStack_14c = (undefined4)local_248;
    uStack_148 = (undefined4)((ulonglong)local_248 >> 0x20);
    local_118._0_2_ = (ushort)(byte)local_118;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_144 = local_240;
    (**(code **)(*plVar8 + 0x328))(plVar8,&local_1a8,&local_158);
    if (local_118._1_1_ == '\x01') {
      local_118._0_2_ = (ushort)(byte)local_118;
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1487dc440;
  }
  plVar9 = (longlong *)
           (lVar2 + (longlong)(int)((iVar1 + 1) - ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1U & 0xfffffffe))
                    * 0x38);
  lVar2 = *param_2;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_158 = 0.0;
  uStack_150 = 0;
  uStack_14c = 0;
  uVar4 = *(undefined8 *)(lVar2 + 0x6a0);
  FUN_144717630(&local_98,uVar4);
  FUN_144717630(&uStack_80,uVar4);
  FUN_1478e2e96(&local_d8,uVar4);
  FUN_1478e2e96(&uStack_b8,uVar4);
  local_160 = *(undefined4 *)(lVar10 + 0x20);
  local_15c = (undefined4)plVar9[4];
  lVar3 = *plVar9;
  if (*(longlong *)(lVar3 + 8) == 0) {
LAB_1487dc4bb:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_1402576f0();
    plVar5 = *(longlong **)(lVar3 + 8);
    if (plVar5 == (longlong *)0x0) goto LAB_1487dc4bb;
    plVar11 = (longlong *)0x0;
    if ((lVar7 != 0) && (lVar3 = plVar5[2], lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_1487dc4bb;
      plVar11 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        plVar11 = plVar5;
      }
    }
  }
  local_1c0 = &local_98;
  local_1b8 = &local_d8;
  local_1b0 = &local_158;
  local_1c8 = &local_118;
  local_1e0 = *(undefined4 *)(lVar10 + 0x18);
  local_1e8 = *(undefined8 *)(lVar10 + 0x10);
  local_1a8 = (double)*(float *)(lVar10 + 0xc);
  local_190 = 0 < *(int *)(lVar10 + 0x24);
  local_1a0 = *(byte *)(lVar2 + 0x7e1) >> 1 & 1;
  local_167 = '\0';
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_1d8 = &uStack_80;
  local_1d0 = &uStack_b8;
  local_19c = local_1e8;
  local_194 = local_1e0;
  (**(code **)(*plVar8 + 0x328))(plVar8,&local_1c0,&local_1a8);
  if (local_167 == '\x01') {
    local_167 = '\0';
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  local_1f0 = (undefined4)plVar9[3];
  local_1f8 = plVar9[2];
  local_1a8 = (double)*(float *)((longlong)plVar9 + 0xc);
  local_190 = 0 < *(int *)((longlong)plVar9 + 0x24);
  local_1a0 = *(byte *)(lVar2 + 0x7e1) >> 1 & 1;
  local_167 = '\0';
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_19c = local_1f8;
  local_194 = local_1f0;
  (**(code **)(*plVar11 + 0x328))(plVar11,&local_1d8,&local_1a8);
  if (local_167 == '\x01') {
    local_167 = '\0';
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_144b1f706(&local_1a8,param_2);
  local_208 = &local_160;
  local_200 = 2;
  local_218 = &local_158;
  local_210 = 2;
  local_228 = &local_d8;
  local_220 = 2;
  local_238 = &local_98;
  local_230 = 2;
  local_258 = &local_1a8;
  FUN_1400cc932();
  lVar10 = 0x40;
  do {
    FUN_1447166b4((longlong)&local_158 + lVar10);
    lVar10 = lVar10 + -0x40;
  } while (lVar10 != -0x40);
LAB_1487dc440:
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dc4c4 FUN_1487dc4c4 body=176 status=ok
// SIG undefined FUN_1487dc4c4(void)

void FUN_1487dc4c4(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1487dc576(param_2,&local_38);
  _Src = local_38;
  local_48 = (void *)0x0;
  local_40 = local_30;
  if ((longlong)local_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_30,0);
    memcpy(local_48,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_48,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dc576 FUN_1487dc576 body=208 status=ok
// SIG undefined FUN_1487dc576(void)

undefined8 FUN_1487dc576(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c695e();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dc648 FUN_1487dc648 body=175 status=ok
// SIG undefined FUN_1487dc648(void)

void FUN_1487dc648(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467e96f6(local_40,1,param_2);
  FUN_1446ddc76(&local_30,"Update",1);
  FUN_14790683a(param_1,local_30,local_40);
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
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dc6f8 FUN_1487dc6f8 body=97 status=ok
// SIG undefined FUN_1487dc6f8(void)

void FUN_1487dc6f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14140c1d8();
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b0158e0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff00000080;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 1487dc75a FUN_1487dc75a body=44 status=ok
// SIG undefined FUN_1487dc75a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487dc75a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb72354 = _DAT_14cb72354 + -1;
  *param_1 = DAT_14cb72348;
  DAT_14cb72348 = param_1;
  return;
}



// FUNCTION 1487dc786 FUN_1487dc786 body=99 status=ok
// SIG undefined FUN_1487dc786(void)

void FUN_1487dc786(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b0158e0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



// FUNCTION 1487dc812 FUN_1487dc812 body=26 status=ok
// SIG undefined FUN_1487dc812(void)

void FUN_1487dc812(undefined8 param_1)

{
  FUN_1487dc82c();
  FUN_1402b6186(param_1);
  return;
}



// FUNCTION 1487dc82c FUN_1487dc82c body=152 status=ok
// SIG undefined FUN_1487dc82c(void)

void FUN_1487dc82c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x270) != 0) {
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_144a7b040();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
          lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x270) != 0)) {
            FUN_14480f766(lVar4 + 400);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1487dc8c4 FUN_1487dc8c4 body=73 status=ok
// SIG undefined FUN_1487dc8c4(void)

void FUN_1487dc8c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4();
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b015910;
  *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  return;
}



// FUNCTION 1487dc90e FUN_1487dc90e body=44 status=ok
// SIG undefined FUN_1487dc90e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487dc90e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb724dc = _DAT_14cb724dc + -1;
  *param_1 = DAT_14cb724d0;
  DAT_14cb724d0 = param_1;
  return;
}



// FUNCTION 1487dc93a FUN_1487dc93a body=77 status=ok
// SIG undefined FUN_1487dc93a(void)

void FUN_1487dc93a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b015910;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return;
}



// FUNCTION 1487dc9b0 FUN_1487dc9b0 body=250 status=ok
// SIG undefined FUN_1487dc9b0(void)

longlong * FUN_1487dc9b0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  plVar6 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3ef0b0;
  plVar1 = plVar6 + 2;
  FUN_143e490fe(plVar1,uVar4,param_3 + 2);
  plVar6[10] = lVar3;
  plVar6[2] = (longlong)&PTR_FUN_14b3ef0d0;
  local_48 = plVar1;
  local_40 = plVar6;
  FUN_1487e06ec(&local_48,plVar1);
  plVar5 = local_40;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dcaae FUN_1487dcaae body=276 status=ok
// SIG undefined FUN_1487dcaae(void)

double * FUN_1487dcaae(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [56];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a1c3a2(param_1 + 0x90,local_b0,param_1 + 0x30);
  FUN_144a1c3a2(local_b0,&local_78,param_3);
  dVar1 = (local_50 - local_68) * 0.5;
  dVar2 = (local_58 - local_70) * 0.5;
  dVar3 = (local_60 - local_78) * 0.5;
  *param_2 = local_78 + dVar3;
  param_2[1] = local_70 + dVar2;
  param_2[2] = local_68 + dVar1;
  param_2[3] = dVar3;
  param_2[4] = dVar2;
  param_2[5] = dVar1;
  param_2[6] = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dcbc4 FUN_1487dcbc4 body=463 status=ok
// SIG undefined FUN_1487dcbc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1487dcbc4(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  
  dVar5 = *param_2 - *(double *)(param_1 + 0x50);
  dVar6 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar4 = param_2[2] - *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar11 = -*(double *)(param_1 + 0x30);
  dVar13 = -*(double *)(param_1 + 0x38);
  dVar9 = *(double *)(param_1 + 0x40) * -1.0;
  dVar10 = *(double *)(param_1 + 0x48) * 1.0;
  dVar8 = dVar5 * dVar9 - dVar11 * dVar4;
  dVar7 = dVar6 * dVar11 - dVar5 * dVar13;
  dVar2 = dVar4 * dVar13 - dVar6 * dVar9;
  dVar2 = dVar2 + dVar2;
  dVar8 = dVar8 + dVar8;
  dVar7 = dVar7 + dVar7;
  auVar12 = divpd(_DAT_149934d80,auVar1);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar12._0_8_) *
          ((dVar7 * dVar13 - dVar8 * dVar9) + dVar10 * dVar2 + dVar5);
  dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar12._8_8_) *
          (*(double *)(param_1 + 0x30) * dVar7 + dVar9 * dVar2 + dVar10 * dVar8 + dVar6);
  if ((((dVar5 < *(double *)(param_1 + 0x90) || dVar5 == *(double *)(param_1 + 0x90)) ||
       (*(double *)(param_1 + 0xa8) <= dVar5)) ||
      (dVar6 < *(double *)(param_1 + 0x98) || dVar6 == *(double *)(param_1 + 0x98))) ||
     ((*(double *)(param_1 + 0xb0) <= dVar6 ||
      (dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                       (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
               (dVar4 + dVar10 * dVar7 + (dVar8 * dVar11 - dVar2 * dVar13)),
      dVar5 < *(double *)(param_1 + 0xa0) || dVar5 == *(double *)(param_1 + 0xa0))))) {
    bVar3 = false;
  }
  else {
    bVar3 = dVar5 < *(double *)(param_1 + 0xb8);
  }
  return bVar3;
}



// FUNCTION 1487dcd94 FUN_1487dcd94 body=804 status=ok
// SIG undefined FUN_1487dcd94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487dcd94(longlong param_1,undefined1 (*param_2) [16],double *param_3,undefined1 *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar11 = *param_3 - *(double *)(param_1 + 0x50);
  dVar12 = param_3[1] - *(double *)(param_1 + 0x58);
  dVar3 = param_3[2] - *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar7 = *(double *)(param_1 + 0x40) * -1.0;
  dVar9 = *(double *)(param_1 + 0x48) * 1.0;
  dVar5 = -*(double *)(param_1 + 0x30);
  dVar2 = -*(double *)(param_1 + 0x38);
  dVar13 = dVar11 * dVar7 - dVar5 * dVar3;
  dVar4 = dVar12 * dVar5 - dVar11 * dVar2;
  dVar8 = dVar3 * dVar2 - dVar12 * dVar7;
  dVar8 = dVar8 + dVar8;
  dVar13 = dVar13 + dVar13;
  dVar4 = dVar4 + dVar4;
  auVar6 = divpd(_DAT_149934d80,auVar1);
  dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar6._0_8_) *
           ((dVar4 * dVar2 - dVar13 * dVar7) + dVar9 * dVar8 + dVar11);
  dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar6._8_8_) *
          (*(double *)(param_1 + 0x30) * dVar4 + dVar7 * dVar8 + dVar9 * dVar13 + dVar12);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                  (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
          (dVar9 * dVar4 + dVar3 + (dVar13 * dVar5 - dVar8 * dVar2));
  if ((((dVar11 < *(double *)(param_1 + 0x90) || dVar11 == *(double *)(param_1 + 0x90)) ||
       (*(double *)(param_1 + 0xa8) <= dVar11)) ||
      (dVar7 < *(double *)(param_1 + 0x98) || dVar7 == *(double *)(param_1 + 0x98))) ||
     ((*(double *)(param_1 + 0xb0) <= dVar7 ||
      (dVar4 < *(double *)(param_1 + 0xa0) || dVar4 == *(double *)(param_1 + 0xa0))))) {
    *param_4 = 0;
  }
  else {
    dVar5 = *(double *)(param_1 + 0xb8);
    *param_4 = dVar4 < dVar5;
    if (dVar4 < dVar5) {
      *(double *)param_2[1] = param_3[2];
      dVar4 = param_3[1];
      *(double *)*param_2 = *param_3;
      *(double *)(*param_2 + 8) = dVar4;
      return;
    }
  }
  dVar5 = *(double *)(param_1 + 0x90);
  if ((dVar11 < *(double *)(param_1 + 0x90)) ||
     (dVar5 = *(double *)(param_1 + 0xa8), *(double *)(param_1 + 0xa8) < dVar11)) {
    dVar11 = dVar5;
  }
  dVar5 = *(double *)(param_1 + 0x98);
  if ((dVar7 < *(double *)(param_1 + 0x98)) ||
     (dVar5 = *(double *)(param_1 + 0xb0), *(double *)(param_1 + 0xb0) < dVar7)) {
    dVar7 = dVar5;
  }
  dVar5 = *(double *)(param_1 + 0xa0);
  if ((*(double *)(param_1 + 0xa0) <= dVar4) && (dVar5 = dVar4, *(double *)(param_1 + 0xb8) < dVar4)
     ) {
    dVar5 = *(double *)(param_1 + 0xb8);
  }
  dVar11 = dVar11 * *(double *)(param_1 + 0x70);
  dVar7 = dVar7 * *(double *)(param_1 + 0x78);
  dVar5 = dVar5 * *(double *)(param_1 + 0x80);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(param_1 + 0x38);
  dVar12 = *(double *)(param_1 + 0x40);
  dVar4 = *(double *)(param_1 + 0x48);
  dVar8 = dVar7 * dVar3 - dVar11 * dVar9;
  dVar10 = dVar5 * dVar9 - dVar7 * dVar12;
  dVar13 = dVar11 * dVar12 - dVar3 * dVar5;
  dVar10 = dVar10 + dVar10;
  dVar13 = dVar13 + dVar13;
  dVar8 = dVar8 + dVar8;
  dVar7 = (dVar12 * dVar10 - dVar3 * dVar8) + *(double *)(param_1 + 0x48) * dVar13 + dVar7 +
          *(double *)(param_1 + 0x58);
  dVar2 = *(double *)(param_1 + 0x60);
  auVar1._8_4_ = SUB84(dVar7,0);
  auVar1._0_8_ = (dVar8 * dVar9 - dVar13 * dVar12) + dVar4 * dVar10 + dVar11 +
                 *(double *)(param_1 + 0x50);
  auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar1;
  *(double *)param_2[1] = dVar8 * dVar4 + dVar5 + (dVar13 * dVar3 - dVar10 * dVar9) + dVar2;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 1487dd0b8 FUN_1487dd0b8 body=871 status=ok
// SIG undefined FUN_1487dd0b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487dd0b8(longlong param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar4 = *(double *)(param_1 + 0x30);
  dVar5 = *(double *)(param_1 + 0x38);
  dVar6 = *(double *)(param_1 + 0x40);
  dVar7 = *(double *)(param_1 + 0x58);
  dVar8 = *(double *)(param_1 + 0x60);
  dVar12 = *param_3 - *(double *)(param_1 + 0x50);
  dVar15 = param_3[1] - dVar7;
  dVar17 = param_3[2] - dVar8;
  dVar14 = -dVar4;
  dVar18 = -dVar5;
  dVar2 = dVar6 * -1.0;
  dVar3 = *(double *)(param_1 + 0x48) * 1.0;
  dVar20 = dVar12 * dVar2 - dVar14 * dVar17;
  dVar16 = dVar15 * dVar14 - dVar12 * dVar18;
  dVar19 = dVar17 * dVar18 - dVar15 * dVar2;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar20 + dVar20;
  dVar16 = dVar16 + dVar16;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar13 = divpd(_DAT_149934d80,auVar1);
  dVar9 = *(double *)(param_1 + 0x80);
  dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar9)) & (ulonglong)(1.0 / dVar9)) *
           (dVar3 * dVar16 + dVar17 + (dVar20 * dVar14 - dVar19 * dVar18));
  uVar11 = -(ulonglong)
            ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar13._0_8_) *
             ((dVar16 * dVar18 - dVar20 * dVar2) + dVar3 * dVar19 + dVar12) <
            (*(double *)(param_1 + 0x90) + *(double *)(param_1 + 0xa8)) * 0.5);
  pdVar10 = (double *)(param_1 + 0xb0);
  if ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar13._8_8_) *
      (dVar4 * dVar16 + dVar2 * dVar19 + dVar3 * dVar20 + dVar15) <
      (*(double *)(param_1 + 0x98) + *(double *)(param_1 + 0xb0)) * 0.5) {
    pdVar10 = (double *)(param_1 + 0x98);
  }
  if (*(double *)(param_1 + 0xb8) <= dVar14) {
    dVar14 = *(double *)(param_1 + 0xb8);
  }
  if (dVar14 <= *(double *)(param_1 + 0xa0)) {
    dVar14 = *(double *)(param_1 + 0xa0);
  }
  dVar18 = (double)(~uVar11 & (ulonglong)*(double *)(param_1 + 0xa8) |
                   (ulonglong)*(double *)(param_1 + 0x90) & uVar11) * auVar1._0_8_;
  dVar19 = *pdVar10 * auVar1._8_8_;
  dVar14 = dVar14 * dVar9;
  dVar3 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar15 = dVar19 * dVar4 - dVar5 * dVar18;
  dVar16 = dVar14 * dVar5 - dVar6 * dVar19;
  dVar12 = dVar18 * dVar6 - dVar4 * dVar14;
  dVar16 = dVar16 + dVar16;
  dVar12 = dVar12 + dVar12;
  dVar15 = dVar15 + dVar15;
  *param_2 = (dVar15 * dVar5 - dVar12 * dVar6) + dVar3 * dVar16 + dVar18 +
             *(double *)(param_1 + 0x50);
  param_2[1] = (dVar6 * dVar16 - dVar4 * dVar15) + dVar2 * dVar12 + dVar19 + dVar7;
  param_2[2] = dVar15 * dVar3 + dVar14 + (dVar12 * dVar4 - dVar16 * dVar5) + dVar8;
  return;
}



// FUNCTION 1487dd420 FUN_1487dd420 body=319 status=ok
// SIG undefined FUN_1487dd420(void)

undefined1 (*) [16] FUN_1487dd420(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
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
  
  dVar7 = (double)*(float *)(param_1 + 0x90);
  dVar9 = *(double *)(param_1 + 0x50) * param_3[8];
  dVar10 = *(double *)(param_1 + 0x58) * param_3[9];
  dVar8 = *(double *)(param_1 + 0x60) * param_3[10];
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
  dVar12 = dVar8 * dVar5 - dVar10 * dVar6;
  dVar13 = dVar9 * dVar6 - dVar4 * dVar8;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar3 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
  dVar10 = param_3[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar1 * dVar12 + dVar9 + param_3[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar11 * dVar1 + dVar8 + (dVar13 * dVar4 - dVar12 * dVar5) + dVar10;
  *(double *)param_2[3] = dVar7;
  *(double *)(param_2[1] + 8) = dVar7;
  *(double *)param_2[2] = dVar7;
  *(double *)(param_2[2] + 8) = dVar7;
  return param_2;
}



// FUNCTION 1487dd5a4 FUN_1487dd5a4 body=312 status=ok
// SIG undefined FUN_1487dd5a4(void)

void FUN_1487dd5a4(longlong param_1,double *param_2,double *param_3,undefined1 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *(double *)(param_1 + 0x60);
  dVar7 = param_3[2] - dVar1;
  dVar2 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x58);
  dVar8 = param_3[1] - dVar3;
  dVar6 = *param_3 - dVar2;
  if (((9.999999747378752e-05 < ABS(dVar6)) || (9.999999747378752e-05 < ABS(dVar8))) ||
     (9.999999747378752e-05 < ABS(dVar7))) {
    dVar5 = dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8;
    bVar4 = dVar5 <= (double)*(float *)(param_1 + 0x94);
    *param_4 = bVar4;
    if (!bVar4) {
      if (9.99999993922529e-09 < dVar5) {
        dVar5 = 1.0 / SQRT(dVar5);
        dVar6 = dVar6 * dVar5;
        dVar8 = dVar8 * dVar5;
        dVar7 = dVar7 * dVar5;
      }
      dVar5 = (double)*(float *)(param_1 + 0x90);
      *param_2 = dVar2 + dVar6 * dVar5;
      param_2[1] = dVar3 + dVar8 * dVar5;
      param_2[2] = dVar1 + dVar7 * dVar5;
      return;
    }
  }
  else {
    *param_4 = 1;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 1487dd6dc FUN_1487dd6dc body=310 status=ok
// SIG undefined FUN_1487dd6dc(void)

void FUN_1487dd6dc(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)(param_1 + 0x60);
  dVar5 = param_3[2] - dVar1;
  dVar2 = *(double *)(param_1 + 0x58);
  dVar6 = param_3[1] - dVar2;
  dVar4 = *param_3 - *(double *)(param_1 + 0x50);
  if (((9.999999747378752e-05 < ABS(dVar4)) || (9.999999747378752e-05 < ABS(dVar6))) ||
     (9.999999747378752e-05 < ABS(dVar5))) {
    dVar3 = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
    if (9.99999993922529e-09 < dVar3) {
      dVar3 = 1.0 / SQRT(dVar3);
      dVar4 = dVar4 * dVar3;
      dVar6 = dVar6 * dVar3;
      dVar5 = dVar5 * dVar3;
    }
    dVar3 = (double)*(float *)(param_1 + 0x90);
    dVar5 = dVar5 * dVar3;
    dVar6 = dVar6 * dVar3;
    dVar4 = dVar4 * dVar3;
  }
  else {
    dVar4 = (double)*(float *)(param_1 + 0x90);
    dVar5 = DAT_14c8462a0 * dVar4;
    dVar6 = DAT_14c846298 * dVar4;
    dVar4 = dVar4 * DAT_14c846290;
  }
  *param_2 = *(double *)(param_1 + 0x50) + dVar4;
  param_2[1] = dVar2 + dVar6;
  param_2[2] = dVar1 + dVar5;
  return;
}



// FUNCTION 1487dd812 FUN_1487dd812 body=26 status=ok
// SIG undefined FUN_1487dd812(void)

undefined8
FUN_1487dd812(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  *param_4 = 0;
  FUN_1487dd6dc();
  return param_2;
}



// FUNCTION 1487dd82c FUN_1487dd82c body=129 status=ok
// SIG undefined FUN_1487dd82c(void)

void FUN_1487dd82c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    FUN_1407f65cc(&local_28,param_1);
    if (local_28 != 0) {
      FUN_140e8651e(local_28,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dd8b4 FUN_1487dd8b4 body=162 status=ok
// SIG undefined FUN_1487dd8b4(void)

void FUN_1487dd8b4(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140114204(param_1 + 0x50);
  if (cVar1 != '\0') {
    local_30[0] = 0;
    local_2c = 0;
    local_24 = 0;
    uVar3 = FUN_1405f939e(param_1);
    lVar4 = FUN_140149a73(uVar3,0);
    if (lVar4 == 0) {
      puVar5 = local_30;
    }
    else {
      puVar5 = (undefined1 *)FUN_14039fc7b(param_1 + 0x50,local_30,lVar4,0);
    }
    iVar2 = FUN_140e195fa(puVar5);
    *(float *)(param_2 + 0x14) = (float)iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dd95e FUN_1487dd95e body=178 status=ok
// SIG undefined FUN_1487dd95e(void)

void FUN_1487dd95e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_140114204(param_1 + 0x50);
  if (cVar4 != '\0') {
    uVar5 = FUN_1405f939e(param_1);
    FUN_141434f00(local_38,*(undefined8 *)(param_1 + 0x88));
    lVar6 = FUN_140149a73(uVar5,0);
    if (lVar6 != 0) {
      FUN_140bc53f1(param_1 + 0x50,local_38,lVar6,0);
    }
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dda5e FUN_1487dda5e body=421 status=ok
// SIG undefined FUN_1487dda5e(void)

void FUN_1487dda5e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_30);
  plVar3 = local_28;
  if (local_28 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b3ef250;
    puVar4[3] = local_30;
    puVar4[4] = 0;
    puVar4[5] = &DAT_1487ddc04;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b3ef250;
    puVar4[3] = local_30;
    puVar4[4] = local_28;
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &DAT_1487ddc04;
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
    LOCK();
    plVar1 = plVar3 + 1;
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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



// FUNCTION 1487ddc06 FUN_1487ddc06 body=88 status=ok
// SIG undefined FUN_1487ddc06(void)

void FUN_1487ddc06(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1408256d2(param_1 + 0x178);
  if (*(int *)(param_1 + 400) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x188);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x188),0,0,0x10);
      *(undefined4 *)(param_1 + 400) = 0;
    }
  }
  return;
}



// FUNCTION 1487ddc5e FUN_1487ddc5e body=339 status=ok
// SIG undefined FUN_1487ddc5e(void)

void FUN_1487ddc5e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x160)) {
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x30);
    if (lVar8 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
      lVar7 = 0;
      do {
        if ((*(char *)(lVar2 + 8 + lVar7) == '\x03') && (*(longlong *)(lVar2 + lVar7) != 0)) {
          lVar5 = FUN_147f78ce8(param_1);
          if (*(longlong *)(lVar2 + lVar7) != 0) {
            iVar1 = *(int *)(*(longlong *)(lVar2 + lVar7) + 0x18);
            if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar5 + 0x78))) &&
               (plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar1 * 8),
               plVar3 != (longlong *)0x0)) {
              uVar6 = FUN_14644586c();
              cVar4 = FUN_1448093f4(plVar3,uVar6);
              if (cVar4 != '\0') {
                cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
                if (cVar4 != '\0') {
                  lVar5 = *(longlong *)(lVar2 + 0xc + lVar7);
                  if (lVar5 == DAT_14cb725b0) {
                    cVar4 = FUN_140a262da(param_1 + 0x178);
                    if (cVar4 == '\0') {
                      lVar5 = *(longlong *)(lVar2 + 0xc + lVar7);
                      goto LAB_1487ddd27;
                    }
                    uVar6 = 0;
LAB_1487ddd8e:
                    FUN_147f78c02(plVar3,param_1 + 0x58);
                    (**(code **)(*plVar3 + 0x80))(plVar3);
                    FUN_147f78cfa(param_1,uVar6);
                    break;
                  }
LAB_1487ddd27:
                  if (lVar5 == DAT_14cb725b8) {
                    cVar4 = FUN_140a262da(param_1 + 0x178);
                    if (cVar4 == '\0') {
                      uVar6 = 1;
                      goto LAB_1487ddd8e;
                    }
                  }
                }
              }
            }
          }
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar8 * 0x20 != lVar7);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    if (*(int *)(param_1 + 0x164) < 0) {
      FUN_147f7e7cc(param_1 + 0x58,0);
      return;
    }
  }
  return;
}



// FUNCTION 1487dddb8 FUN_1487dddb8 body=453 status=ok
// SIG undefined FUN_1487dddb8(void)

void FUN_1487dddb8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  longlong local_80;
  int local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1470e4986();
  FUN_1400021e4(param_1 + 0x40,local_90);
  FUN_1470ed5e8(&local_80,local_90);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb725d0);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  local_a8 = 0;
  uStack_a0 = 0;
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar4 = (longlong)*(int *)(param_1 + 0x90) << 3;
    bVar2 = true;
    do {
      if (!bVar2) {
        FUN_1400020e8(&local_a8,&DAT_149e19f34,2);
      }
      FUN_1400021e4(lVar3,&local_80);
      iVar1 = local_78 + -1;
      if (local_78 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_a8,local_80,iVar1);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
      bVar2 = false;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_1470ed5e8(&local_80,&local_a8);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb725d8);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  iVar1 = *(int *)(param_1 + 0x48);
  local_c0 = 0;
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x90))) {
    local_c0 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8);
  }
  FUN_1400021e4(&local_c0,local_b8);
  FUN_1470ed5e8(&local_80,local_b8);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb725e0);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ddf7e FUN_1487ddf7e body=31 status=ok
// SIG undefined FUN_1487ddf7e(void)

void FUN_1487ddf7e(longlong *param_1)

{
  FUN_140c481e6();
                    /* WARNING: Could not recover jumptable at 0x0001487ddf96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}



// FUNCTION 1487ddff4 FUN_1487ddff4 body=131 status=ok
// SIG undefined FUN_1487ddff4(void)

void FUN_1487ddff4(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1446f84a2(param_1 + 0x88,iVar1);
  }
  lVar2 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x88) + lVar2 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x88) + lVar2 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar2 * 8) = *param_2;
  if (param_3 <= *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return;
}



// FUNCTION 1487de078 FUN_1487de078 body=182 status=ok
// SIG undefined FUN_1487de078(void)

void FUN_1487de078(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar4 = (longlong)iVar2 << 3;
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6 * 8) == *param_2) {
        uVar5 = (uint)lVar6;
        if (iVar2 <= (int)uVar5 || (int)uVar5 < 0) {
          return;
        }
        if (iVar2 - 1U != uVar5) {
          memmove((void *)(lVar1 + (ulonglong)(uVar5 & 0x7fffffff) * 8),
                  (void *)(lVar1 + (ulonglong)(uVar5 & 0x7fffffff) * 8 + 8),
                  (longlong)(int)(~uVar5 + iVar2) << 3);
          iVar2 = *(int *)(param_1 + 0x90);
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 0x90) = iVar2;
        iVar3 = *(int *)(param_1 + 0x48);
        if ((int)uVar5 < iVar3) {
          iVar3 = iVar3 + -1;
          *(int *)(param_1 + 0x48) = iVar3;
        }
        if (iVar3 < 1 || iVar3 < iVar2) {
          return;
        }
        iVar3 = 1;
        if (1 < iVar2) {
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x48) = iVar3 + -1;
        return;
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1487de12e FUN_1487de12e body=252 status=ok
// SIG undefined FUN_1487de12e(void)

void FUN_1487de12e(longlong param_1)

{
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  *(ulonglong *)(param_1 + 0x40) = (ulonglong)*(uint *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    local_238 = local_240;
    FUN_14005eb5c(param_1 + 0x38,&local_240);
    if (local_230 <= local_238 + 1) {
      FUN_140213274(&local_240,1);
    }
    *local_238 = 0x5f;
    local_238 = local_238 + 1;
    FUN_14005eb5c((undefined8 *)(param_1 + 0x40),&local_240);
    *local_238 = 0;
    FUN_1446f470e(&local_248,local_240,1);
    *(undefined8 *)(param_1 + 0x40) = local_248;
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487de22c FUN_1487de22c body=421 status=ok
// SIG undefined FUN_1487de22c(void)

void FUN_1487de22c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_30);
  plVar3 = local_28;
  if (local_28 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b3ef2c0;
    puVar4[3] = local_30;
    puVar4[4] = 0;
    puVar4[5] = &DAT_1487de3d2;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b3ef2c0;
    puVar4[3] = local_30;
    puVar4[4] = local_28;
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &DAT_1487de3d2;
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
    LOCK();
    plVar1 = plVar3 + 1;
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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



// FUNCTION 1487de3d4 FUN_1487de3d4 body=76 status=ok
// SIG undefined FUN_1487de3d4(void)

void FUN_1487de3d4(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x178);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x178),0,0,0x10);
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
  }
  return;
}



// FUNCTION 1487de420 FUN_1487de420 body=465 status=ok
// SIG undefined FUN_1487de420(void)

void FUN_1487de420(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [4];
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x160)) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    local_40[0] = 0;
    local_3c = 0;
    local_34 = 0;
    uVar4 = FUN_1405f939e();
    lVar5 = FUN_140149a73(uVar4,0);
    if (lVar5 != 0) {
      FUN_14039fc7b(param_1 + 0x188,local_40,lVar5,0);
    }
    FUN_1403a0728(local_40,&local_48);
    if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
      lVar5 = (longlong)*(int *)(param_1 + 0x1c8) << 3;
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar8 * 8) == local_48) {
          iVar7 = (int)uVar8;
          if (iVar7 != -1) {
            FUN_1403a0728(local_40,&local_48);
            *(longlong *)(param_1 + 0x1d0) = local_48;
            if ((-2 < iVar7) && (iVar7 + 1 < *(int *)(lVar1 + 0x30))) {
              lVar1 = *(longlong *)(lVar1 + 0x28);
              lVar5 = (longlong)(iVar7 + 1) * 0x20;
              if ((*(char *)(lVar1 + 8 + lVar5) == '\x03') && (*(longlong *)(lVar1 + lVar5) != 0)) {
                lVar6 = FUN_147f78ce8(param_1);
                if (*(longlong *)(lVar1 + lVar5) != 0) {
                  iVar7 = *(int *)(*(longlong *)(lVar1 + lVar5) + 0x18);
                  if (((-1 < (longlong)iVar7) && (iVar7 < *(int *)(lVar6 + 0x78))) &&
                     (plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar7 * 8),
                     plVar2 != (longlong *)0x0)) {
                    uVar4 = FUN_14644586c();
                    cVar3 = FUN_1448093f4(plVar2,uVar4);
                    if (cVar3 != '\0') {
                      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
                      if (cVar3 != '\0') {
                        FUN_147f78c02(plVar2,param_1 + 0x58);
                        (**(code **)(*plVar2 + 0x80))(plVar2);
                        FUN_147f78cfa(param_1,uVar8 & 0xffffffff);
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    if (*(int *)(param_1 + 0x164) < 0) {
      FUN_147f7e7cc(param_1 + 0x58,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487de5f2 FUN_1487de5f2 body=251 status=ok
// SIG undefined FUN_1487de5f2(void)

void FUN_1487de5f2(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  uVar1 = FUN_1405f939e();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(param_1 + 0x31,local_28,lVar2,0);
  }
  FUN_1403a0728(local_28,&local_30);
  if ((longlong)(int)param_1[0x39] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_1[0x38] + lVar2) == local_30) {
        FUN_1403a0728(local_28,&local_30);
        param_1[0x3a] = local_30;
        lVar2 = local_30;
        goto LAB_1487de68f;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)param_1[0x39] * 8 != lVar2);
  }
  lVar2 = param_1[0x3a];
LAB_1487de68f:
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 200))(param_1,&local_30);
    param_1[0x3a] = local_30;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487de71e FUN_1487de71e body=421 status=ok
// SIG undefined FUN_1487de71e(void)

void FUN_1487de71e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_30);
  plVar3 = local_28;
  if (local_28 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b3ef330;
    puVar4[3] = local_30;
    puVar4[4] = 0;
    puVar4[5] = &LAB_1487de8c4;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b3ef330;
    puVar4[3] = local_30;
    puVar4[4] = local_28;
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_1487de8c4;
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
    LOCK();
    plVar1 = plVar3 + 1;
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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



// FUNCTION 1487de8cc FUN_1487de8cc body=219 status=ok
// SIG undefined FUN_1487de8cc(void)

void FUN_1487de8cc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar6 = FUN_1405f939e();
  plVar1 = (longlong *)(param_1 + 0x198);
  if ((*(int *)(param_1 + 0x1a0) == 0) || (plVar3 = (longlong *)*plVar1, plVar3 == (longlong *)0x0))
  {
    local_38 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_38);
  }
  uVar5 = local_38;
  lVar7 = FUN_140149a73(uVar6,0);
  if (lVar7 != 0) {
    FUN_140825b72(lVar2 + 0x38,uVar5,lVar7,0);
  }
  if ((*(int *)(param_1 + 0x1a0) != 0) &&
     (puVar4 = (undefined8 *)*plVar1, puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487de9a8 FUN_1487de9a8 body=34 status=ok
// SIG undefined FUN_1487de9a8(void)

void FUN_1487de9a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_147f78c9c();
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(lVar1 + 0x70);
  return;
}



// FUNCTION 1487de9ca FUN_1487de9ca body=606 status=ok
// SIG undefined FUN_1487de9ca(void)

void FUN_1487de9ca(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  double *pdVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  longlong *local_188;
  double local_180;
  longlong *local_178;
  double *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar1 = param_1 + 0x58;
  if (0 < *(int *)(param_1 + 0x160)) {
    local_80 = (double *)0x0;
    local_78 = 0x800000000;
    FUN_147f78854(lVar1,&local_180);
    pdVar6 = local_80;
    if (local_80 == (double *)0x0) {
      pdVar6 = &local_180;
    }
    if ((longlong)(int)local_78 != 0) {
      pdVar5 = pdVar6 + (longlong)(int)local_78 * 4;
      do {
        FUN_1438a38f2(lVar1,&local_190);
        uVar8 = FUN_147f81bd4(local_190,*pdVar6);
        plVar4 = local_188;
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_188 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        FUN_1438a38f2(lVar1,&local_190);
        FUN_147f81bce(local_190,uVar8);
        plVar4 = local_188;
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_188 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        dVar9 = *pdVar6;
        *(double *)(param_1 + 0x1b0) = dVar9;
        uVar7 = -(ulonglong)(9.999999747378752e-05 < pdVar6[1]);
        *(ulonglong *)(param_1 + 0x1b8) =
             ~uVar7 & 0xbff0000000000000 | (ulonglong)(dVar9 + pdVar6[1]) & uVar7;
        pdVar6 = pdVar6 + 4;
      } while (pdVar6 != pdVar5);
    }
    if (local_80 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_1438a38f2(lVar1,&local_180);
    dVar9 = (double)FUN_147f81b96(local_180);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_178 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar3 = (int *)((longlong)local_178 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
        }
      }
    }
    if ((*(double *)(param_1 + 0x1b0) <= dVar9) &&
       ((*(double *)(param_1 + 0x1b8) < 0.0 || (dVar9 < *(double *)(param_1 + 0x1b8))))) {
      FUN_1487dec2a(param_1);
      *(undefined1 *)(param_1 + 0x1a8) = 0;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487dec2a FUN_1487dec2a body=501 status=ok
// SIG undefined FUN_1487dec2a(void)

void FUN_1487dec2a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_58 = 0;
  local_50 = 0x800000000;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1438a38f2(param_1 + 0x58,&local_178);
  local_188 = local_178;
  local_180 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
    UNLOCK();
  }
  FUN_1438a36a2(local_158,&local_188,1);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_170 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_170 + 0x10))(local_170);
      }
    }
  }
  local_170 = (longlong *)0x0;
  uStack_168 = 0;
  local_160 = 0;
  FUN_1438a38f2(param_1 + 0x58,&local_198);
  local_178 = FUN_147f81b96(local_198);
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_190 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_190 + 0x10))(local_190);
      }
    }
  }
  local_170 = (longlong *)0x0;
  FUN_147f78136(local_158);
  lVar9 = (longlong)*(int *)(lVar3 + 0x30);
  if (lVar9 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar8 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar8) == '\x03') && (*(longlong *)(lVar3 + lVar8) != 0)) {
        lVar5 = FUN_147f78ce8(param_1);
        if (*(longlong *)(lVar3 + lVar8) == 0) {
LAB_1487dedbf:
          plVar7 = (longlong *)0x0;
        }
        else {
          iVar2 = *(int *)(*(longlong *)(lVar3 + lVar8) + 0x18);
          if ((longlong)iVar2 < 0) goto LAB_1487dedbf;
          plVar7 = (longlong *)0x0;
          if (iVar2 < *(int *)(lVar5 + 0x78)) {
            plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar2 * 8);
            if (plVar7 != (longlong *)0x0) {
              uVar6 = FUN_14644586c();
              cVar4 = FUN_1448093f4(plVar7,uVar6);
              if (cVar4 != '\0') goto LAB_1487dedc1;
            }
            goto LAB_1487dedbf;
          }
        }
LAB_1487dedc1:
        FUN_147f78c02(plVar7,local_158);
        (**(code **)(*plVar7 + 0x80))(plVar7);
        FUN_147f78cfa(param_1,0);
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar9 * 0x20 != lVar8);
  }
  FUN_147f6f94a(local_158);
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487dee20 FUN_1487dee20 body=3 status=ok
// SIG undefined FUN_1487dee20(void)

undefined8 FUN_1487dee20(void)

{
  return 0;
}



// FUNCTION 1487dee24 FUN_1487dee24 body=1 status=ok
// SIG undefined FUN_1487dee24(void)

void FUN_1487dee24(void)

{
  return;
}



// FUNCTION 1487dee26 FUN_1487dee26 body=38 status=ok
// SIG undefined FUN_1487dee26(void)

undefined8 FUN_1487dee26(undefined8 param_1,int param_2)

{
  FUN_145abd6fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487dee52 FUN_1487dee52 body=38 status=ok
// SIG undefined FUN_1487dee52(void)

undefined8 FUN_1487dee52(undefined8 param_1,int param_2)

{
  FUN_145abd6fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487dee7e FUN_1487dee7e body=38 status=ok
// SIG undefined FUN_1487dee7e(void)

undefined8 FUN_1487dee7e(undefined8 param_1,int param_2)

{
  FUN_145abd6fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487deeaa FUN_1487deeaa body=38 status=ok
// SIG undefined FUN_1487deeaa(void)

undefined8 FUN_1487deeaa(undefined8 param_1,int param_2)

{
  FUN_145abd6fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487deed6 FUN_1487deed6 body=31 status=ok
// SIG undefined FUN_1487deed6(void)

undefined8 FUN_1487deed6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487def2a FUN_1487def2a body=29 status=ok
// SIG undefined FUN_1487def2a(void)

undefined8 FUN_1487def2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487def4e FUN_1487def4e body=38 status=ok
// SIG undefined FUN_1487def4e(void)

undefined8 FUN_1487def4e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487def7a FUN_1487def7a body=29 status=ok
// SIG undefined FUN_1487def7a(void)

undefined8 FUN_1487def7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487def9e FUN_1487def9e body=38 status=ok
// SIG undefined FUN_1487def9e(void)

undefined8 FUN_1487def9e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487defca FUN_1487defca body=62 status=ok
// SIG undefined FUN_1487defca(void)

longlong FUN_1487defca(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487df00e FUN_1487df00e body=43 status=ok
// SIG undefined FUN_1487df00e(void)

undefined8 FUN_1487df00e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Animation/Rotation/Targets/GbxRotationTargetModifier_Blend.h"
                ,0x39,L"Pure virtual not implemented (%s)",
                L"FGbxRotationTargetModifier_BlendBase::GetBlendAlpha");
  return 0;
}



// FUNCTION 1487df03a FUN_1487df03a body=43 status=ok
// SIG undefined FUN_1487df03a(void)

undefined8 FUN_1487df03a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Animation/Rotation/Targets/GbxRotationTargetModifier_Blend.h"
                ,0x3a,L"Pure virtual not implemented (%s)",
                L"FGbxRotationTargetModifier_BlendBase::GetPitchBlendAlpha");
  return 0;
}



// FUNCTION 1487df066 FUN_1487df066 body=43 status=ok
// SIG undefined FUN_1487df066(void)

undefined8 FUN_1487df066(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Animation/Rotation/Targets/GbxRotationTargetModifier_Blend.h"
                ,0x3b,L"Pure virtual not implemented (%s)",
                L"FGbxRotationTargetModifier_BlendBase::GetYawBlendAlpha");
  return 0;
}



// FUNCTION 1487df09c FUN_1487df09c body=38 status=ok
// SIG undefined FUN_1487df09c(void)

undefined8 FUN_1487df09c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487df0d2 FUN_1487df0d2 body=29 status=ok
// SIG undefined FUN_1487df0d2(void)

undefined8 FUN_1487df0d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487df0f5 FUN_1487df0f5 body=15 status=ok
// SIG undefined FUN_1487df0f5(void)

void FUN_1487df0f5(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1487df104 FUN_1487df104 body=147 status=ok
// SIG undefined FUN_1487df104(void)

void FUN_1487df104(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487df198 FUN_1487df198 body=147 status=ok
// SIG undefined FUN_1487df198(void)

void FUN_1487df198(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487df22c FUN_1487df22c body=31 status=ok
// SIG undefined FUN_1487df22c(void)

undefined8 FUN_1487df22c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487df268 FUN_1487df268 body=101 status=ok
// SIG undefined FUN_1487df268(void)

void FUN_1487df268(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3eee80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487df2ce FUN_1487df2ce body=101 status=ok
// SIG undefined FUN_1487df2ce(void)

void FUN_1487df2ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3eee80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487df334 FUN_1487df334 body=134 status=ok
// SIG undefined FUN_1487df334(void)

void FUN_1487df334(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3eee80;
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
                    /* WARNING: Could not recover jumptable at 0x0001487df3ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487df3cc FUN_1487df3cc body=146 status=ok
// SIG undefined FUN_1487df3cc(void)

void FUN_1487df3cc(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x1c0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 6;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x1c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487df460 FUN_1487df460 body=98 status=ok
// SIG undefined FUN_1487df460(void)

void FUN_1487df460(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1c0 + *param_1);
  FUN_14063a814(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1c0 + (longlong)_Dst),(longlong)iVar2 * 0x1c0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1487df4c2 FUN_1487df4c2 body=62 status=ok
// SIG undefined FUN_1487df4c2(void)

void FUN_1487df4c2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487df500(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c0,8);
  }
  return;
}



// FUNCTION 1487df500 FUN_1487df500 body=110 status=ok
// SIG undefined FUN_1487df500(void)

ulonglong FUN_1487df500(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487df539;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c0,8);
      param_2 = param_2 / 0x1c0;
    }
  }
LAB_1487df539:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487df56e FUN_1487df56e body=286 status=ok
// SIG undefined FUN_1487df56e(void)

void FUN_1487df56e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
    if (UNRECOVERED_JUMPTABLE == FUN_14035f30c) {
      lVar2 = DAT_14cb62bb0;
      if (DAT_14cb62bb0 == 0) {
        uVar1 = FUN_140325e72();
        lVar2 = FUN_140002ddd(FUN_1464fa24d,uVar1,L"GbxRotationChannelSettings_Body");
        DAT_14cb62bb0 = lVar2;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == FUN_143cbc3ee) {
      lVar2 = DAT_14cb62c10;
      if (DAT_14cb62c10 == 0) {
        uVar1 = FUN_140325e72();
        lVar2 = FUN_140002ddd(FUN_1464fa3f9,uVar1,L"GbxRotationChannelSettings_Child");
        DAT_14cb62c10 = lVar2;
      }
    }
    else {
      lVar2 = (*UNRECOVERED_JUMPTABLE)(param_2);
    }
    if (DAT_14cb62b08 == 0) {
      uVar1 = FUN_140325e72();
      DAT_14cb62b08 = FUN_140002ddd(FUN_1464f9fb1,uVar1,L"GbxRotationChannelSettings");
      if (DAT_14cb62b08 == 0) {
        return;
      }
    }
    if ((*(int *)(DAT_14cb62b08 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb62b08 + 0x38) * 8) ==
        DAT_14cb62b08 + 0x30)) {
      UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0001487df624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,param_3,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 1487df68c FUN_1487df68c body=322 status=ok
// SIG undefined FUN_1487df68c(void)

void FUN_1487df68c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 1487df7d0 FUN_1487df7d0 body=285 status=ok
// SIG undefined FUN_1487df7d0(void)

void FUN_1487df7d0(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x20 + (longlong)iStack_44 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487df8ee FUN_1487df8ee body=138 status=ok
// SIG undefined FUN_1487df8ee(void)

void FUN_1487df8ee(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487df978 FUN_1487df978 body=95 status=ok
// SIG undefined FUN_1487df978(void)

void FUN_1487df978(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487df9d8 FUN_1487df9d8 body=132 status=ok
// SIG undefined FUN_1487df9d8(void)

void FUN_1487df9d8(longlong param_1,int param_2)

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



// FUNCTION 1487dfa5e FUN_1487dfa5e body=162 status=ok
// SIG undefined FUN_1487dfa5e(void)

undefined8 FUN_1487dfa5e(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x70;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e07];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x70,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3 >> 3;
  uVar2 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (1 < iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x38,8);
  }
  return uVar2;
}



// FUNCTION 1487dfb00 FUN_1487dfb00 body=48 status=ok
// SIG undefined FUN_1487dfb00(void)

void FUN_1487dfb00(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x1c + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0xfffffffe00000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 9 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + 0x30 + lVar2) = 0xfffffffe;
    lVar2 = lVar2 + 0x38;
  } while ((int)lVar2 != 0x70);
  return;
}



// FUNCTION 1487dfb30 FUN_1487dfb30 body=143 status=ok
// SIG undefined FUN_1487dfb30(void)

void FUN_1487dfb30(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487dfbda FUN_1487dfbda body=101 status=ok
// SIG undefined FUN_1487dfbda(void)

void FUN_1487dfbda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3eef60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487dfc40 FUN_1487dfc40 body=101 status=ok
// SIG undefined FUN_1487dfc40(void)

void FUN_1487dfc40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3eef60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487dfca6 FUN_1487dfca6 body=134 status=ok
// SIG undefined FUN_1487dfca6(void)

void FUN_1487dfca6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3eef60;
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
                    /* WARNING: Could not recover jumptable at 0x0001487dfd1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487dfd2c FUN_1487dfd2c body=44 status=ok
// SIG undefined FUN_1487dfd2c(void)

void FUN_1487dfd2c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487dfd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487dfd72 FUN_1487dfd72 body=29 status=ok
// SIG undefined FUN_1487dfd72(void)

bool FUN_1487dfd72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487dfd90 FUN_1487dfd90 body=26 status=ok
// SIG undefined FUN_1487dfd90(void)

bool FUN_1487dfd90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487dfdaa FUN_1487dfdaa body=24 status=ok
// SIG undefined FUN_1487dfdaa(void)

bool FUN_1487dfdaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487dfdce FUN_1487dfdce body=101 status=ok
// SIG undefined FUN_1487dfdce(void)

void FUN_1487dfdce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ef040;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3eefd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487dfe34 FUN_1487dfe34 body=101 status=ok
// SIG undefined FUN_1487dfe34(void)

void FUN_1487dfe34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ef040;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3eefd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487dfe9a FUN_1487dfe9a body=134 status=ok
// SIG undefined FUN_1487dfe9a(void)

void FUN_1487dfe9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ef040;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3eefd0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487dff11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487dff20 FUN_1487dff20 body=48 status=ok
// SIG undefined FUN_1487dff20(void)

void FUN_1487dff20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487dff4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1487dff52 FUN_1487dff52 body=116 status=ok
// SIG undefined FUN_1487dff52(void)

void FUN_1487dff52(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1487dffc6 FUN_1487dffc6 body=302 status=ok
// SIG undefined FUN_1487dffc6(void)

undefined4 * FUN_1487dffc6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1409ff99e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0xbf800000bf800000;
  *(undefined4 *)(local_40 + 2) = 0;
  local_40[3] = 0;
  local_40[4] = 0xffffffffffffffff;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar1 = FUN_1409ff8f6(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
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
      FUN_1409ffb76(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e00f6 FUN_1487e00f6 body=133 status=ok
// SIG undefined FUN_1487e00f6(void)

longlong FUN_1487e00f6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1487e017c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_1487e012f;
  }
  local_30 = param_3;
  FUN_1487e01f0(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_1487e012f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e017c FUN_1487e017c body=115 status=ok
// SIG undefined FUN_1487e017c(void)

int FUN_1487e017c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1487e01f0 FUN_1487e01f0 body=284 status=ok
// SIG undefined FUN_1487e01f0(void)

undefined4 * FUN_1487e01f0(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1487e030e(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined8 *)(local_40 + 4) = 0xbf800000bf800000;
  local_40[6] = 0xffffffff;
  cVar5 = FUN_1487e03f4(param_1,param_3,local_40,local_48);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[7] = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1487e04c4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e030e FUN_1487e030e body=229 status=ok
// SIG undefined FUN_1487e030e(void)

int * FUN_1487e030e(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 1487e03f4 FUN_1487e03f4 body=93 status=ok
// SIG undefined FUN_1487e03f4(void)

undefined8 FUN_1487e03f4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1487e017c(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1487e0452(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1487e0452 FUN_1487e0452 body=114 status=ok
// SIG undefined FUN_1487e0452(void)

void FUN_1487e0452(longlong *param_1,int param_2)

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



// FUNCTION 1487e04c4 FUN_1487e04c4 body=449 status=ok
// SIG undefined FUN_1487e04c4(void)

void FUN_1487e04c4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e0686 FUN_1487e0686 body=9 status=ok
// SIG undefined FUN_1487e0686(void)

void FUN_1487e0686(longlong param_1)

{
  FUN_140bef390(param_1 + 0x10);
  return;
}



// FUNCTION 1487e0690 FUN_1487e0690 body=29 status=ok
// SIG undefined FUN_1487e0690(void)

undefined8 FUN_1487e0690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487e06ae FUN_1487e06ae body=38 status=ok
// SIG undefined FUN_1487e06ae(void)

undefined8 FUN_1487e06ae(undefined8 param_1,int param_2)

{
  FUN_140bef390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487e06ec FUN_1487e06ec body=167 status=ok
// SIG undefined FUN_1487e06ec(void)

void FUN_1487e06ec(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1487e0767;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1487e0767;
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
LAB_1487e0767:
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
                    /* WARNING: Could not recover jumptable at 0x0001487e0787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1487e0794 FUN_1487e0794 body=136 status=ok
// SIG undefined FUN_1487e0794(void)

void FUN_1487e0794(longlong param_1,int param_2)

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
    FUN_1487e081e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487e081e FUN_1487e081e body=149 status=ok
// SIG undefined FUN_1487e081e(void)

void FUN_1487e081e(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1487e08b4 FUN_1487e08b4 body=136 status=ok
// SIG undefined FUN_1487e08b4(void)

void FUN_1487e08b4(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x198);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x19c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x19c) = iVar5;
    FUN_1487e093e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487e093e FUN_1487e093e body=149 status=ok
// SIG undefined FUN_1487e093e(void)

void FUN_1487e093e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 400);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 400,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 400),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 400,param_2,param_3,0x28);
  return;
}



// FUNCTION 1487e09d4 FUN_1487e09d4 body=31 status=ok
// SIG undefined FUN_1487e09d4(void)

undefined8 FUN_1487e09d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487e0a08 FUN_1487e0a08 body=85 status=ok
// SIG undefined FUN_1487e0a08(void)

void FUN_1487e0a08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ef5e0;
  return;
}



// FUNCTION 1487e0a5e FUN_1487e0a5e body=118 status=ok
// SIG undefined FUN_1487e0a5e(void)

void FUN_1487e0a5e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef5e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487e0ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487e0ad4 FUN_1487e0ad4 body=105 status=ok
// SIG undefined FUN_1487e0ad4(void)

undefined8 FUN_1487e0ad4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d4c1ce(param_1 + 0x18,local_20);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e0b3e FUN_1487e0b3e body=45 status=ok
// SIG undefined FUN_1487e0b3e(void)

longlong FUN_1487e0b3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145950ae8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487e0b6c FUN_1487e0b6c body=45 status=ok
// SIG undefined FUN_1487e0b6c(void)

longlong FUN_1487e0b6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145950ae8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487e0ba0 FUN_1487e0ba0 body=54 status=ok
// SIG undefined FUN_1487e0ba0(void)

longlong FUN_1487e0ba0(longlong param_1,int param_2)

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



// FUNCTION 1487e0bd6 FUN_1487e0bd6 body=31 status=ok
// SIG undefined FUN_1487e0bd6(void)

undefined8 FUN_1487e0bd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487e0c10 FUN_1487e0c10 body=93 status=ok
// SIG undefined FUN_1487e0c10(void)

void FUN_1487e0c10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ef170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487e0c6e FUN_1487e0c6e body=93 status=ok
// SIG undefined FUN_1487e0c6e(void)

void FUN_1487e0c6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ef170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487e0ccc FUN_1487e0ccc body=126 status=ok
// SIG undefined FUN_1487e0ccc(void)

void FUN_1487e0ccc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef170;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487e0d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487e0d4a FUN_1487e0d4a body=58 status=ok
// SIG undefined FUN_1487e0d4a(void)

void FUN_1487e0d4a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487e0d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487e0dce FUN_1487e0dce body=29 status=ok
// SIG undefined FUN_1487e0dce(void)

bool FUN_1487e0dce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487e0dec FUN_1487e0dec body=26 status=ok
// SIG undefined FUN_1487e0dec(void)

bool FUN_1487e0dec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487e0e06 FUN_1487e0e06 body=24 status=ok
// SIG undefined FUN_1487e0e06(void)

bool FUN_1487e0e06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487e0e1e FUN_1487e0e1e body=101 status=ok
// SIG undefined FUN_1487e0e1e(void)

void FUN_1487e0e1e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ef1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487e0e84 FUN_1487e0e84 body=101 status=ok
// SIG undefined FUN_1487e0e84(void)

void FUN_1487e0e84(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ef1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487e0eea FUN_1487e0eea body=134 status=ok
// SIG undefined FUN_1487e0eea(void)

void FUN_1487e0eea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef1e0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487e0f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487e0f70 FUN_1487e0f70 body=39 status=ok
// SIG undefined FUN_1487e0f70(void)

void FUN_1487e0f70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487e0f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487e0f98 FUN_1487e0f98 body=146 status=ok
// SIG undefined FUN_1487e0f98(void)

bool FUN_1487e0f98(longlong param_1)

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



// FUNCTION 1487e102c FUN_1487e102c body=64 status=ok
// SIG undefined FUN_1487e102c(void)

undefined8 * FUN_1487e102c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ef250;
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



// FUNCTION 1487e1070 FUN_1487e1070 body=81 status=ok
// SIG undefined FUN_1487e1070(void)

undefined8 FUN_1487e1070(longlong param_1)

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



// FUNCTION 1487e10c8 FUN_1487e10c8 body=89 status=ok
// SIG undefined FUN_1487e10c8(void)

bool FUN_1487e10c8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1487e1113;
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
LAB_1487e1113:
  return lVar6 == param_2;
}



// FUNCTION 1487e113e FUN_1487e113e body=118 status=ok
// SIG undefined FUN_1487e113e(void)

void FUN_1487e113e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ef250;
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



// FUNCTION 1487e11b4 FUN_1487e11b4 body=118 status=ok
// SIG undefined FUN_1487e11b4(void)

void FUN_1487e11b4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ef250;
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



// FUNCTION 1487e122a FUN_1487e122a body=156 status=ok
// SIG undefined FUN_1487e122a(void)

void FUN_1487e122a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef250;
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
                    /* WARNING: Could not recover jumptable at 0x0001487e12b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487e12c6 FUN_1487e12c6 body=94 status=ok
// SIG undefined FUN_1487e12c6(void)

void FUN_1487e12c6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001487e130e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487e1319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1487e1324 FUN_1487e1324 body=93 status=ok
// SIG undefined FUN_1487e1324(void)

ulonglong FUN_1487e1324(longlong param_1)

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
LAB_1487e1376:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1487e1376;
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



// FUNCTION 1487e1382 FUN_1487e1382 body=64 status=ok
// SIG undefined FUN_1487e1382(void)

undefined8 * FUN_1487e1382(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ef2c0;
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



// FUNCTION 1487e13c6 FUN_1487e13c6 body=81 status=ok
// SIG undefined FUN_1487e13c6(void)

undefined8 FUN_1487e13c6(longlong param_1)

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



// FUNCTION 1487e141e FUN_1487e141e body=89 status=ok
// SIG undefined FUN_1487e141e(void)

bool FUN_1487e141e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1487e1469;
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
LAB_1487e1469:
  return lVar6 == param_2;
}



// FUNCTION 1487e1494 FUN_1487e1494 body=118 status=ok
// SIG undefined FUN_1487e1494(void)

void FUN_1487e1494(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ef2c0;
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



// FUNCTION 1487e150a FUN_1487e150a body=118 status=ok
// SIG undefined FUN_1487e150a(void)

void FUN_1487e150a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ef2c0;
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



// FUNCTION 1487e1580 FUN_1487e1580 body=156 status=ok
// SIG undefined FUN_1487e1580(void)

void FUN_1487e1580(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef2c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487e160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487e161c FUN_1487e161c body=94 status=ok
// SIG undefined FUN_1487e161c(void)

void FUN_1487e161c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001487e1664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487e166f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1487e167a FUN_1487e167a body=93 status=ok
// SIG undefined FUN_1487e167a(void)

ulonglong FUN_1487e167a(longlong param_1)

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
LAB_1487e16cc:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1487e16cc;
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



// FUNCTION 1487e16d8 FUN_1487e16d8 body=64 status=ok
// SIG undefined FUN_1487e16d8(void)

undefined8 * FUN_1487e16d8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ef330;
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



// FUNCTION 1487e171c FUN_1487e171c body=81 status=ok
// SIG undefined FUN_1487e171c(void)

undefined8 FUN_1487e171c(longlong param_1)

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



// FUNCTION 1487e1774 FUN_1487e1774 body=89 status=ok
// SIG undefined FUN_1487e1774(void)

bool FUN_1487e1774(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1487e17bf;
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
LAB_1487e17bf:
  return lVar6 == param_2;
}



// FUNCTION 1487e17ea FUN_1487e17ea body=118 status=ok
// SIG undefined FUN_1487e17ea(void)

void FUN_1487e17ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ef330;
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



// FUNCTION 1487e1860 FUN_1487e1860 body=118 status=ok
// SIG undefined FUN_1487e1860(void)

void FUN_1487e1860(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ef330;
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



// FUNCTION 1487e18d6 FUN_1487e18d6 body=156 status=ok
// SIG undefined FUN_1487e18d6(void)

void FUN_1487e18d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef330;
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
                    /* WARNING: Could not recover jumptable at 0x0001487e1962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487e1972 FUN_1487e1972 body=98 status=ok
// SIG undefined FUN_1487e1972(void)

void FUN_1487e1972(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001487e19bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487e19ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1487e19d4 FUN_1487e19d4 body=94 status=ok
// SIG undefined FUN_1487e19d4(void)

ulonglong FUN_1487e19d4(longlong param_1)

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
LAB_1487e1a27:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1487e1a27;
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



// FUNCTION 1487e1a32 FUN_1487e1a32 body=62 status=ok
// SIG undefined FUN_1487e1a32(void)

void FUN_1487e1a32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1403a1358(&DAT_14cb72698);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  FUN_1486de8ea(puVar1);
  return;
}



// FUNCTION 1487e1a70 FUN_1487e1a70 body=44 status=ok
// SIG undefined FUN_1487e1a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e1a70(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb726a4 = _DAT_14cb726a4 + -1;
  *param_1 = DAT_14cb72698;
  DAT_14cb72698 = param_1;
  return;
}



// FUNCTION 1487e1a9c FUN_1487e1a9c body=62 status=ok
// SIG undefined FUN_1487e1a9c(void)

void FUN_1487e1a9c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1486de8ea(param_1);
  return;
}



// FUNCTION 1487e1b08 FUN_1487e1b08 body=195 status=ok
// SIG undefined FUN_1487e1b08(void)

void FUN_1487e1b08(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_30);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar6 = FUN_1464f46ec();
    cVar5 = FUN_1448093f4(lVar3,uVar6);
    if (cVar5 != '\0') {
      *(undefined4 *)(lVar3 + 0x300) = *(undefined4 *)(param_1 + 0x148);
      *(undefined4 *)(lVar3 + 0x304) = *(undefined4 *)(param_1 + 0x14c);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e1bcc FUN_1487e1bcc body=35 status=ok
// SIG undefined FUN_1487e1bcc(void)

void FUN_1487e1bcc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1487e1bf0();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b1f33b0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 1487e1bf0 FUN_1487e1bf0 body=84 status=ok
// SIG undefined FUN_1487e1bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e1bf0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb727b0 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x78,0);
    plVar2 = plVar1 + 5;
    *plVar1 = (longlong)plVar2;
    plVar1[5] = (longlong)(plVar1 + 10);
    plVar1[10] = (longlong)DAT_14cb727b0;
    _DAT_14cb727b8 = _DAT_14cb727b8 + 3;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb727b0;
  }
  DAT_14cb727b0 = plVar2;
  _DAT_14cb727bc = _DAT_14cb727bc + 1;
  return;
}



// FUNCTION 1487e1c44 FUN_1487e1c44 body=44 status=ok
// SIG undefined FUN_1487e1c44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e1c44(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb727bc = _DAT_14cb727bc + -1;
  *param_1 = DAT_14cb727b0;
  DAT_14cb727b0 = param_1;
  return;
}



// FUNCTION 1487e1c70 FUN_1487e1c70 body=42 status=ok
// SIG undefined FUN_1487e1c70(void)

void FUN_1487e1c70(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b1f33b0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1487e1cc2 FUN_1487e1cc2 body=59 status=ok
// SIG undefined FUN_1487e1cc2(void)

void FUN_1487e1cc2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1487e1cfe();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b1f33e0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1487e1cfe FUN_1487e1cfe body=96 status=ok
// SIG undefined FUN_1487e1cfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e1cfe(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb728c0 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x198,0);
    plVar2 = plVar1 + 0x11;
    *plVar1 = (longlong)plVar2;
    plVar1[0x11] = (longlong)(plVar1 + 0x22);
    plVar1[0x22] = (longlong)DAT_14cb728c0;
    _DAT_14cb728c8 = _DAT_14cb728c8 + 3;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb728c0;
  }
  DAT_14cb728c0 = plVar2;
  _DAT_14cb728cc = _DAT_14cb728cc + 1;
  return;
}



// FUNCTION 1487e1d5e FUN_1487e1d5e body=44 status=ok
// SIG undefined FUN_1487e1d5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e1d5e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb728cc = _DAT_14cb728cc + -1;
  *param_1 = DAT_14cb728c0;
  DAT_14cb728c0 = param_1;
  return;
}



// FUNCTION 1487e1d8a FUN_1487e1d8a body=66 status=ok
// SIG undefined FUN_1487e1d8a(void)

void FUN_1487e1d8a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b1f33e0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 1487e1df3 FUN_1487e1df3 body=139 status=ok
// SIG undefined FUN_1487e1df3(void)

void FUN_1487e1df3(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_145c8acb8(param_2);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)*param_1;
    }
    FUN_1446f470e(&local_20,puVar2,1);
    local_38 = local_20;
    local_30 = 0;
    uStack_28 = 0;
    (**(code **)(*plVar1 + 0x2c0))(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e1e88 FUN_1487e1e88 body=497 status=ok
// SIG undefined FUN_1487e1e88(void)

void FUN_1487e1e88(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x30) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0x30) + 0x140) != '\x01')) && (*param_3 != 0)) {
    lVar6 = FUN_1487e207a(param_1 + 8);
    if ((lVar6 != 0) && (lVar6 = FUN_14479d2ce(*param_3 + 0x30), lVar6 != 0)) {
      FUN_147f7a8f8(&local_50,lVar6);
      if (local_48 != (longlong *)0x0) {
        iVar5 = (int)local_48[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_48[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(local_48 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar8 = local_48;
        } while (!bVar9);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        lVar6 = local_50;
        if (plVar8 != (longlong *)0x0) {
          if (local_50 != 0) {
            local_60 = *param_3;
            local_58 = param_3[1];
            if (local_58 != 0) {
              LOCK();
              *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
              UNLOCK();
            }
            uVar7 = FUN_1487e207a(param_1 + 8);
            FUN_147f77e3c(lVar6,&local_50,uVar7,&local_60);
            plVar1 = local_48;
            if ((longlong *)(param_1 + 0x30) != &local_50) {
              *(longlong *)(param_1 + 0x30) = local_50;
              local_50 = 0;
              plVar3 = *(longlong **)(param_1 + 0x38);
              if (local_48 != plVar3) {
                local_48 = (longlong *)0x0;
                *(longlong **)(param_1 + 0x38) = plVar1;
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
              }
            }
            plVar1 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
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
          }
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e207a FUN_1487e207a body=197 status=ok
// SIG undefined FUN_1487e207a(void)

longlong FUN_1487e207a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1458bc180();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1487e2140 FUN_1487e2140 body=92 status=ok
// SIG undefined FUN_1487e2140(void)

void FUN_1487e2140(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_147f762da();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001487e2190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487e219c FUN_1487e219c body=424 status=ok
// SIG undefined FUN_1487e219c(void)

void FUN_1487e219c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == 0) goto LAB_1487e2243;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar5 = FUN_1405b1a32();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_1487e2243;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_1487e2243;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) goto LAB_1487e2243;
  }
  FUN_1403c747e(*param_3,&local_38,0);
  if (local_38 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (lVar6 == 0) {
      uVar5 = FUN_1405b1a32();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x10) = lVar6;
    }
    if (((*(longlong *)(param_1 + 0x18) == 0) && (lVar6 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        uVar5 = FUN_144aff482(uVar5,plVar1);
      }
      *(undefined8 *)(param_1 + 0x18) = uVar5;
    }
    FUN_140849a08(local_38);
  }
  FUN_144a61ac8(&local_38);
LAB_1487e2243:
  plVar1 = (longlong *)param_3[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e2346 FUN_1487e2346 body=159 status=ok
// SIG undefined FUN_1487e2346(void)

void FUN_1487e2346(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar4 = FUN_140114204(param_1 + 8);
  if (((cVar4 != '\0') && (*(char *)(param_1 + 0x40) != '\0')) && (*param_3 != 0)) {
    cVar4 = FUN_144729dda(*param_3 + 0x30);
    if (cVar4 != '\0') {
      uVar5 = FUN_14479d2ce(*param_3 + 0x30);
      lVar6 = FUN_140149a73(uVar5,0);
      if (lVar6 != 0) {
        FUN_140bc53f1(param_1 + 8,param_1 + 0x40,lVar6,0);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001487e23d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487e23e6 FUN_1487e23e6 body=141 status=ok
// SIG undefined FUN_1487e23e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e23e6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  
  fVar3 = *(float *)(param_1 + 8);
  if (fVar3 < 0.0001) {
    *(undefined8 *)(param_2 + 0x68) = 0xbff0000000000000;
  }
  auVar5._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar5._0_8_ = DAT_14cb262c8;
  auVar5._12_4_ = 0x45300000;
  *(double *)(param_2 + 0x68) =
       (double)fVar3 +
       (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
       (auVar5._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  plVar4 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001487e2468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487e2474 FUN_1487e2474 body=359 status=ok
// SIG undefined FUN_1487e2474(void)

void FUN_1487e2474(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined8 local_d0;
  longlong lStack_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*param_2 != 0) {
    lVar3 = FUN_14479d2ce(*param_2 + 0x30);
    if ((lVar3 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      local_f8 = 0;
      local_f0 = 0;
      memset(local_e8,0,0xa0);
      FUN_144a7a8f6(local_e8);
      FUN_144a7a8f6(local_dc);
      local_b8 = (longlong *)0x0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_d0 = 0;
      lStack_c8 = 0;
      local_108 = &local_f8;
      FUN_1411cff2e(param_1 + 0x18,param_1 + 8,lVar3,local_e8);
      if (local_88 != 0) {
        plVar4 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar4 = local_68;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if (lStack_c8 != 0) {
        plVar4 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar4 = local_a8;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      FUN_1449db362(&local_f8);
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
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e2602 FUN_1487e2602 body=32 status=ok
// SIG undefined FUN_1487e2602(void)

undefined8 FUN_1487e2602(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FactExpression");
  return param_2;
}



// FUNCTION 1487e2622 FUN_1487e2622 body=71 status=ok
// SIG undefined FUN_1487e2622(void)

undefined8 FUN_1487e2622(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x40);
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) != 0) && (cVar3 = FUN_140ba1980(), cVar3 != '\0')) {
        return 1;
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return 0;
}



// FUNCTION 1487e266a FUN_1487e266a body=32 status=ok
// SIG undefined FUN_1487e266a(void)

undefined8 FUN_1487e266a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Children Can Play");
  return param_2;
}



// FUNCTION 1487e268a FUN_1487e268a body=112 status=ok
// SIG undefined FUN_1487e268a(void)

void FUN_1487e268a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14101b9fc(&DAT_14cb729e0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b2b4220;
  *(undefined4 *)(puVar1 + 4) = 0xaaad1010;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = &PTR_FUN_14b2b40b0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0xbff0000000000000;
  return;
}



// FUNCTION 1487e26fa FUN_1487e26fa body=44 status=ok
// SIG undefined FUN_1487e26fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e26fa(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb729ec = _DAT_14cb729ec + -1;
  *param_1 = DAT_14cb729e0;
  DAT_14cb729e0 = param_1;
  return;
}



// FUNCTION 1487e2726 FUN_1487e2726 body=112 status=ok
// SIG undefined FUN_1487e2726(void)

void FUN_1487e2726(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b2b4220;
  *(undefined4 *)(param_1 + 4) = 0xaaad1010;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_14b2b40b0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xbff0000000000000;
  return;
}



// FUNCTION 1487e27c6 FUN_1487e27c6 body=160 status=ok
// SIG undefined FUN_1487e27c6(void)

undefined8 FUN_1487e27c6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + -0x18);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%ls::FGbxWorldAudioManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487e2868 FUN_1487e2868 body=105 status=ok
// SIG undefined FUN_1487e2868(void)

void FUN_1487e2868(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x308) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x308) * 0x48;
    lVar1 = *(longlong *)(param_1 + 0x300) + 0x28;
    do {
      if (*(longlong *)(lVar1 + -0x28) == param_2) {
        FUN_14123c256(lVar1,param_3);
        *(undefined4 *)(lVar1 + 0x18) = param_4;
        *(undefined1 *)(lVar1 + 0x1c) = 1;
      }
      lVar1 = lVar1 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1487e28d2 FUN_1487e28d2 body=144 status=ok
// SIG undefined FUN_1487e28d2(void)

void FUN_1487e28d2(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x300);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x308) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x308) * 0x48;
    lVar4 = lVar4 + 0x10;
    do {
      FUN_14072d42a(lVar4,0);
      lVar4 = lVar4 + 0x48;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x308);
    lVar4 = *(longlong *)(param_1 + 0x300);
  }
  iVar1 = *(int *)(param_1 + 0x30c);
  FUN_145868a28(lVar4,uVar2);
  *(undefined4 *)(param_1 + 0x308) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x30c) != 0)) {
    FUN_1487f569c(param_1 + 0x300);
    return;
  }
  return;
}



// FUNCTION 1487e2962 FUN_1487e2962 body=33 status=ok
// SIG undefined FUN_1487e2962(void)

void FUN_1487e2962(longlong param_1)

{
  thunk_FUN_1405f1eac();
  FUN_1409b5cf2(param_1 + 0x400);
  return;
}



// FUNCTION 1487e2984 FUN_1487e2984 body=352 status=ok
// SIG undefined FUN_1487e2984(void)

void FUN_1487e2984(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8 [536];
  undefined8 *local_290;
  int local_288;
  undefined1 local_278 [560];
  undefined1 local_48;
  undefined6 local_44;
  undefined2 uStack_3e;
  undefined6 uStack_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  FUN_140e386ea(local_4a8);
  FUN_140e386ea(local_278);
  local_48 = 0;
  local_34 = 0;
  local_44 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  FUN_1414b2d2c(local_4a8,1);
  if (*(char *)(param_2 + 8) == '\x01') {
    if (local_288 != 3) {
      FUN_1446efa72(&local_290,0,3,0x10);
      local_288 = 3;
    }
    *local_290 = &PTR_LAB_14b3e9b40;
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
    local_290[2] = lVar2;
    *local_290 = &PTR_FUN_14b3f0450;
    local_290[3] = 0;
    FUN_14485c47a(local_290 + 3,param_1 + -0x400);
    local_290[4] = param_1 + -0x400;
  }
  FUN_140e386c4(param_3,local_4a8,0);
  FUN_144908ac8(local_278);
  FUN_144908ac8(local_4a8);
  if ((local_30 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e2ae6 FUN_1487e2ae6 body=57 status=ok
// SIG undefined FUN_1487e2ae6(void)

void FUN_1487e2ae6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1487e2b20();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14affe6e0;
  *(undefined2 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 1487e2b20 FUN_1487e2b20 body=101 status=ok
// SIG undefined FUN_1487e2b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2b20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb72b98;
  if (DAT_14cb72b98 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x280,0);
    lVar4 = 7;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 10;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb72b98;
    _DAT_14cb72ba0 = _DAT_14cb72ba0 + 8;
  }
  DAT_14cb72b98 = (undefined8 *)*puVar2;
  _DAT_14cb72ba4 = _DAT_14cb72ba4 + 1;
  return;
}



// FUNCTION 1487e2bb6 FUN_1487e2bb6 body=44 status=ok
// SIG undefined FUN_1487e2bb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2bb6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb72ba4 = _DAT_14cb72ba4 + -1;
  *param_1 = DAT_14cb72b98;
  DAT_14cb72b98 = param_1;
  return;
}



// FUNCTION 1487e2be2 FUN_1487e2be2 body=64 status=ok
// SIG undefined FUN_1487e2be2(void)

void FUN_1487e2be2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14affe6e0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  return;
}



// FUNCTION 1487e2c22 FUN_1487e2c22 body=21 status=ok
// SIG undefined FUN_1487e2c22(void)

void FUN_1487e2c22(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487e2c38();
  FUN_1487e3b46(uVar1);
  return;
}



// FUNCTION 1487e2c38 FUN_1487e2c38 body=113 status=ok
// SIG undefined FUN_1487e2c38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2c38(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb72c90;
  if (DAT_14cb72c90 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xcc00,0);
    lVar4 = 0x3f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x66;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb72c90;
    _DAT_14cb72c98 = _DAT_14cb72c98 + 0x40;
  }
  DAT_14cb72c90 = (undefined8 *)*puVar2;
  _DAT_14cb72c9c = _DAT_14cb72c9c + 1;
  return;
}



// FUNCTION 1487e2cb0 FUN_1487e2cb0 body=44 status=ok
// SIG undefined FUN_1487e2cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2cb0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb72c9c = _DAT_14cb72c9c + -1;
  *param_1 = DAT_14cb72c90;
  DAT_14cb72c90 = param_1;
  return;
}



// FUNCTION 1487e2cdc FUN_1487e2cdc body=28 status=ok
// SIG undefined FUN_1487e2cdc(void)

void FUN_1487e2cdc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1487e3b46(param_1);
  return;
}



// FUNCTION 1487e2cf8 FUN_1487e2cf8 body=21 status=ok
// SIG undefined FUN_1487e2cf8(void)

void FUN_1487e2cf8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487e2d0e();
  FUN_1487e5006(uVar1);
  return;
}



// FUNCTION 1487e2d0e FUN_1487e2d0e body=113 status=ok
// SIG undefined FUN_1487e2d0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2d0e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb72d80;
  if (DAT_14cb72d80 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1500,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x2a;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb72d80;
    _DAT_14cb72d88 = _DAT_14cb72d88 + 0x10;
  }
  DAT_14cb72d80 = (undefined8 *)*puVar2;
  _DAT_14cb72d8c = _DAT_14cb72d8c + 1;
  return;
}



// FUNCTION 1487e2d86 FUN_1487e2d86 body=44 status=ok
// SIG undefined FUN_1487e2d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2d86(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb72d8c = _DAT_14cb72d8c + -1;
  *param_1 = DAT_14cb72d80;
  DAT_14cb72d80 = param_1;
  return;
}



// FUNCTION 1487e2db2 FUN_1487e2db2 body=28 status=ok
// SIG undefined FUN_1487e2db2(void)

void FUN_1487e2db2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1487e5006(param_1);
  return;
}



// FUNCTION 1487e2dce FUN_1487e2dce body=28 status=ok
// SIG undefined FUN_1487e2dce(void)

void FUN_1487e2dce(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487e2dea(&DAT_14cb72e70);
  FUN_1487e54c6(uVar1);
  return;
}


