// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b4455e FUN_142b4455e body=129 status=ok
// SIG undefined FUN_142b4455e(void)

void FUN_142b4455e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x7fffffffffffe00U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 5,8);
      uVar2 = uVar2 >> 5;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,0x20,8);
    }
  }
  return;
}



// FUNCTION 142b445ea FUN_142b445ea body=1 status=ok
// SIG undefined FUN_142b445ea(void)

void FUN_142b445ea(void)

{
  return;
}



// FUNCTION 142b445ec FUN_142b445ec body=29 status=ok
// SIG undefined FUN_142b445ec(void)

undefined8 FUN_142b445ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b44618 FUN_142b44618 body=47 status=ok
// SIG undefined FUN_142b44618(void)

void FUN_142b44618(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if (cVar1 != '\0') {
    *(undefined8 *)param_1[1] = param_2;
    *param_3 = 1;
  }
  return;
}



// FUNCTION 142b44648 FUN_142b44648 body=55 status=ok
// SIG undefined FUN_142b44648(void)

void FUN_142b44648(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142b44674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x40))(param_2,*param_1);
    return;
  }
  return;
}



// FUNCTION 142b44680 FUN_142b44680 body=1 status=ok
// SIG undefined FUN_142b44680(void)

void FUN_142b44680(void)

{
  return;
}



// FUNCTION 142b44682 FUN_142b44682 body=29 status=ok
// SIG undefined FUN_142b44682(void)

undefined8 FUN_142b44682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b446a0 FUN_142b446a0 body=1 status=ok
// SIG undefined FUN_142b446a0(void)

void FUN_142b446a0(void)

{
  return;
}



// FUNCTION 142b446a2 FUN_142b446a2 body=29 status=ok
// SIG undefined FUN_142b446a2(void)

undefined8 FUN_142b446a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b446c0 FUN_142b446c0 body=68 status=ok
// SIG undefined FUN_142b446c0(void)

undefined8 * FUN_142b446c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1c9e60;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b44724 FUN_142b44724 body=118 status=ok
// SIG undefined FUN_142b44724(void)

void FUN_142b44724(longlong *param_1,int param_2)

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
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 142b448d8 FUN_142b448d8 body=31 status=ok
// SIG undefined FUN_142b448d8(void)

undefined8 FUN_142b448d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b44946 FUN_142b44946 body=29 status=ok
// SIG undefined FUN_142b44946(void)

undefined8 FUN_142b44946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b44978 FUN_142b44978 body=85 status=ok
// SIG undefined FUN_142b44978(void)

void FUN_142b44978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca120;
  return;
}



// FUNCTION 142b449ce FUN_142b449ce body=85 status=ok
// SIG undefined FUN_142b449ce(void)

void FUN_142b449ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca120;
  return;
}



// FUNCTION 142b44a24 FUN_142b44a24 body=118 status=ok
// SIG undefined FUN_142b44a24(void)

void FUN_142b44a24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e30fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1ca120;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b44a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b44a9a FUN_142b44a9a body=59 status=ok
// SIG undefined FUN_142b44a9a(void)

void FUN_142b44a9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_142b44b14();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b44ad6 FUN_142b44ad6 body=61 status=ok
// SIG undefined FUN_142b44ad6(void)

undefined8 FUN_142b44ad6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_142b44b14();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b44b14 FUN_142b44b14 body=71 status=ok
// SIG undefined FUN_142b44b14(void)

void FUN_142b44b14(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_14050fd64();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
  }
  FUN_1470e56ac(uVar1,lVar2);
  return;
}



// FUNCTION 142b44b5c FUN_142b44b5c body=467 status=ok
// SIG undefined FUN_142b44b5c(void)

void FUN_142b44b5c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      iVar10 = 0;
      uVar11 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar10 = 0;
        uVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x44 + (longlong)iVar8 * 0x48) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_142b44ce0;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_142b44ce0:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 142b44d30 FUN_142b44d30 body=511 status=ok
// SIG undefined FUN_142b44d30(void)

void FUN_142b44d30(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x2c8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x10;
LAB_142b44d59:
    if (*(void **)((longlong)param_1 + 0x2c0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x2c0),(longlong)param_2 * 0x2c);
    param_2 = 0;
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x2cc)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x2c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142b44e05;
              lVar4 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_142b44e05:
    uVar5 = uVar5 / 0x2c;
    uVar7 = (uint)uVar5;
    if ((int)uVar7 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x7fffffff;
      uVar5 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x2cc) = uVar7;
      if (uVar7 < 0x11) goto LAB_142b44d59;
    }
    if (*(longlong *)((longlong)param_1 + 0x2c0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x2c0,0,uVar5,0x2c);
      memmove(*(void **)((longlong)param_1 + 0x2c0),param_1,(longlong)param_2 * 0x2c);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x2c0,param_2,uVar5,0x2c);
  return;
}



// FUNCTION 142b44f34 FUN_142b44f34 body=110 status=ok
// SIG undefined FUN_142b44f34(void)

undefined8 FUN_142b44f34(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined2 local_28 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x18);
  local_28[0] = *param_3;
  local_20 = *(longlong *)(param_3 + 4);
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b44fa8 FUN_142b44fa8 body=26 status=ok
// SIG undefined FUN_142b44fa8(void)

undefined8 FUN_142b44fa8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 142b44fc2 FUN_142b44fc2 body=91 status=ok
// SIG undefined FUN_142b44fc2(void)

bool FUN_142b44fc2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_142b44ff2;
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
LAB_142b44ff2:
  return lVar6 == param_2;
}



// FUNCTION 142b4503a FUN_142b4503a body=116 status=ok
// SIG undefined FUN_142b4503a(void)

void FUN_142b4503a(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 142b450e0 FUN_142b450e0 body=282 status=ok
// SIG undefined FUN_142b450e0(void)

undefined8 * FUN_142b450e0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142b450b9);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142b451fa FUN_142b451fa body=3157 status=ok
// SIG undefined FUN_142b451fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b451fa(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_8c;
  char *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = "AssetRegistry";
  iStack_80 = 0xd;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14c9a7858 = (ulonglong)uVar3;
  local_88 = "nexus";
  iStack_80 = 5;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14c9a7860 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14c9a7868,&DAT_149e06346,1);
  FUN_1446f470e(&DAT_14c9a7870,L"false",1);
  local_88 = (char *)0x800000014a1c89c0;
  local_8c = 9;
  iStack_80 = FUN_14577453c();
  uStack_7c = CONCAT31(uStack_7c._1_3_,1);
  FUN_1462b13ba(&local_88);
  FUN_1446f470e(&DAT_14c9a787c,L"GbxGraphAsset Type",1);
  local_88 = (char *)0xb67a4b087089a7bb;
  iStack_80 = 0x86de0580;
  uStack_7c = 0x105cd824;
  _DAT_14c9a7884 = 0x7089a7bb;
  uRam000000014c9a7888 = 0xb67a4b08;
  uRam000000014c9a788c = 0x86de0580;
  uRam000000014c9a7890 = 0x105cd824;
  FUN_141005458(&local_88,0,L"GbxGraphAsset",0);
  atexit((_func_5014 *)&LAB_142b3f617);
  DAT_14c9a83f0 = 0;
  DAT_14c9a83f8 = 0;
  DAT_14c9a8400 = 0;
  atexit((_func_5014 *)&LAB_142b3f8a0);
  _DAT_14c9a78a0 = &LAB_142b414fa;
  DAT_14c9a78a8 = 0xd;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a93b0 = 0x18;
    DAT_14c9a9448 = &LAB_142b415cc;
    _DAT_14c9a9470 = &LAB_141742648;
    _DAT_14c9a9450 = &LAB_142b415dc;
    _DAT_14c9a9458 = &LAB_142b415fc;
    _DAT_14c9a9460 = &LAB_1470e746a;
    _DAT_14c9a9468 = &LAB_1470e74a4;
    _DAT_14c9a93d0 = FUN_1461fe324;
    _DAT_14c9a93c8 = &LAB_140e29942;
    _DAT_14c9a9480 = FUN_1470e7844;
    _DAT_14c9a94c0 = FUN_1470e786c;
    _DAT_14c9a93b8 = 0x3dcccccd00000000;
    uRam000000014c9a93c0 = 0x3f8000003e4ccccd;
    DAT_14c9a93b4 = 0x20;
    _DAT_14c9a9478 = FUN_142b4162a;
    _DAT_14c9a9420 = FUN_142b41646;
    _DAT_14c9a9430 = FUN_142b41684;
    _DAT_14c9a9438 = FUN_142b416f2;
  }
  else {
    _DAT_14c9a7898 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a7898;
  }
  local_88 = (char *)0xc1bf47e117ca2837;
  iStack_80 = 0x96b238e4;
  uStack_7c = 0x9d8f14fe;
  _DAT_14c9a78b0 = 0x17ca2837;
  uRam000000014c9a78b4 = 0xc1bf47e1;
  uRam000000014c9a78b8 = 0x96b238e4;
  uRam000000014c9a78bc = 0x9d8f14fe;
  FUN_141005458(&local_88,0,L"GbxGraphNodeSettings",0);
  atexit((_func_5014 *)&LAB_142b3f8ba);
  DAT_14c9a78c0 = 0;
  _DAT_14c9a78c8 = 0;
  atexit(FUN_142b3f993);
  local_88 = (char *)0x613408d646fef0f;
  iStack_80 = 0xb70aea64;
  uStack_7c = 0xc30530bc;
  _DAT_14c9a78d0 = 0x646fef0f;
  uRam000000014c9a78d4 = 0x613408d;
  uRam000000014c9a78d8 = 0xb70aea64;
  uRam000000014c9a78dc = 0xc30530bc;
  FUN_141005458(&local_88,1,L"GbxGraphParamVersion",0);
  atexit((_func_5014 *)&LAB_142b3fb0f);
  FUN_1446f470e(&DAT_14c9a78e0,L"SoftObjectProperty",1);
  FUN_1446f470e(&DAT_14c9a78e8,L"ParamName",1);
  DAT_14c9a8408 = 0;
  DAT_14c9a8410 = 0xffffffff;
  _DAT_14c9a78f8 = &LAB_142b41822;
  DAT_14c9a7900 = 0x11;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9830 = 0xc;
    DAT_14c9a98c8 = &LAB_142b41948;
    _DAT_14c9a98f0 = &DAT_142b41958;
    _DAT_14c9a98d0 = &LAB_142b4195a;
    _DAT_14c9a98d8 = &LAB_1470e7894;
    _DAT_14c9a98e0 = &LAB_1470e78a2;
    _DAT_14c9a98e8 = &LAB_1470e78b0;
    _DAT_14c9a9850 = FUN_1461fe610;
    _DAT_14c9a9848 = &LAB_141742660;
    _DAT_14c9a9900 = FUN_141742666;
    _DAT_14c9a9940 = FUN_14059511a;
    _DAT_14c9a9838 = 0;
    uRam000000014c9a983c = 0x3dcccccd;
    uRam000000014c9a9840 = 0x3e4ccccd;
    uRam000000014c9a9844 = 0x3f800000;
    DAT_14c9a9834 = 0x60;
    _DAT_14c9a98f8 = FUN_142b41976;
    _DAT_14c9a98a0 = FUN_142b41992;
    _DAT_14c9a98b0 = FUN_142b41dd0;
    _DAT_14c9a98b8 = FUN_142b41e40;
    _DAT_14c9a9928 = &LAB_142b41f70;
    _DAT_14c9a9930 = &LAB_142b41f78;
    _DAT_14c9a9938 = FUN_142b41f84;
    _DAT_14c9a9910 = FUN_142b41fb6;
    _DAT_14c9a9918 = FUN_142b41fea;
    _DAT_14c9a9920 = FUN_142b42d26;
  }
  else {
    _DAT_14c9a78f0 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a78f0;
  }
  FUN_1446f470e(&DAT_14c9a7908,L"Param",1);
  FUN_1446f470e(&DAT_14c9a7910,L"Parameters",1);
  FUN_1446f470e(&DAT_14c9a7918,L"Name",1);
  local_88 = "GbxGraphSettings";
  iStack_80 = 0x10;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14c9a7920 = (ulonglong)uVar3;
  DAT_14c9a7928 = 0;
  _DAT_14c9a7930 = 0;
  atexit(FUN_142b3fb1d);
  local_88 = "GbxLoad";
  iStack_80 = 7;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_88,1);
  FUN_14147d486(&DAT_14c9a7938,uVar4,0);
  _DAT_14c9a7938 = &PTR_FUN_14a1c96a8;
  atexit((_func_5014 *)&LAB_142b3fd1b);
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_88,&DAT_14c9a7b44);
  if (cVar2 == '\0') {
    _DAT_14c9a7b44 = 0;
    uRam000000014c9a7b4c = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
  DAT_14c9a7bb8 = 0;
  _DAT_14c9a7bc0 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b4479a;
  local_88 = &DAT_14011fc1e;
  FUN_14617b44e();
  atexit((_func_5014 *)&LAB_142b3fd55);
  _DAT_14c9a7c58 = &LAB_142b3fd5a;
  _DAT_14c9a7c60 = 0x41a00000;
  DAT_14c9a7c64 = 1;
  DAT_14c9a7c50 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a7c50;
  atexit((_func_5014 *)&LAB_142b3fd5f);
  _DAT_14c9a7c78 = &PTR_FUN_14a1c96b0;
  if (DAT_14c9a1b08 == (undefined *)0x0) {
    DAT_14c9a1b08 = &DAT_14c9a7c78;
  }
  atexit((_func_5014 *)&LAB_142b3fe4b);
  local_88 = (char *)0x0;
  iStack_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  iStack_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e30fe0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_88 + 0x10) = lVar7;
  *(undefined ***)local_88 = &PTR_FUN_14a1ca120;
  local_98 = 0;
  FUN_14170c604(&DAT_14c9a7c80,L"Gbx.AsetManager.Purge",
                L"Start a perfcapture for the current world.",&local_88);
  if (iStack_80 != 0) {
    if (local_88 == (char *)0x0) goto LAB_142b4596d;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    iStack_80 = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142b4596d:
  atexit(FUN_142b3fe75);
  local_88 = "bone";
  iStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  FUN_1446f470e(&DAT_14c9a8414,L"Default",1);
  FUN_140056680(&DAT_14c9a7ca8,L"CONTEXTPAWN");
  atexit((_func_5014 *)&LAB_142b3fee6);
  FUN_140056680(&DAT_14c9a7cb8,L"TARGET");
  atexit((_func_5014 *)&LAB_142b3fef7);
  local_88 = "func";
  iStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14c9a7cc8 = (ulonglong)uVar3;
  local_88 = "exp";
  iStack_80 = 3;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14c9a7cd0 = (ulonglong)uVar3;
  local_88 = "steps";
  iStack_80 = 5;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14c9a7cd8 = (ulonglong)uVar3;
  local_88 = (char *)((ulonglong)local_88 & 0xffffffff00000000);
  local_98 = 0;
  FUN_140a6b41e(&DAT_14c9a7ce0,L"gbx.HDR.PlatformMaxLuminance",&local_88,
                L"The platform HDR peak brightness");
  atexit(FUN_142b3ff08);
  DAT_14c9a7cf8 = 0;
  DAT_14c9a7d00 = 0;
  DAT_14c9a7d08 = 0;
  DAT_14c9a7d18 = 0;
  _DAT_14c9a7d20 = 0;
  _DAT_14c9a7d28 = 2;
  atexit(FUN_142b4040e);
  DAT_14c9a7d30 = 0;
  _DAT_14c9a7d38 = 0;
  _DAT_14c9a7d40 = 2;
  atexit(FUN_142b4043f);
  DAT_14c9a8040 = 0;
  atexit(FUN_142b4047c);
  DAT_14c9a80c0 = 0;
  uRam000000014c9a80c8 = 0;
  atexit((_func_5014 *)&LAB_142b40495);
  local_98 = 0x3f800000;
  FUN_1412cc41e(&DAT_14c9a80d0,L"FGbxDeferredTicker",0,0);
  _DAT_14c9a80e4 = 0;
  FUN_14052b5e0(&DAT_14c9a80e0,&DAT_14a1c9238,0);
  _DAT_14c9a80f0 = &DAT_14a1c9238;
  _DAT_14c9a80fc = 0;
  FUN_14052b5e0(&DAT_14c9a80f8,&DAT_14a1c923d,0);
  _DAT_14c9a8108 = &DAT_14a1c923d;
  _DAT_14c9a8114 = 0;
  FUN_14052b5e0(&DAT_14c9a8110,"phase",0);
  _DAT_14c9a8120 = "phase";
  _DAT_14c9a812c = 0;
  FUN_14052b5e0(&DAT_14c9a8128,&DAT_149dfd14a,0);
  _DAT_14c9a8138 = &DAT_149dfd14a;
  _DAT_14c9a8144 = 0;
  FUN_14052b5e0(&DAT_14c9a8140,&DAT_14a176d1f,0);
  _DAT_14c9a8150 = &DAT_14a176d1f;
  _DAT_14c9a815c = 0;
  FUN_14052b5e0(&DAT_14c9a8158,&DAT_14a176d21,0);
  _DAT_14c9a8168 = &DAT_14a176d21;
  _DAT_14c9a8170 = 0;
  uRam000000014c9a8178 = 0;
  _DAT_14c9a8180 = 0;
  DAT_14c9a8188 = 0;
  uRam000000014c9a8190 = 0;
  FUN_1446ddda2(&DAT_14c9a8170,&DAT_149e377fe,0);
  atexit((_func_5014 *)&LAB_142b40585);
  _DAT_14c9a8198 = 0;
  DAT_14c9a81a0 = 0;
  DAT_14c9a81a8 = 0;
  DAT_14c9a81b0 = 0;
  uRam000000014c9a81b8 = 0;
  FUN_1446ddda2(&DAT_14c9a8198,"parent",0);
  atexit((_func_5014 *)&LAB_142b40596);
  _DAT_14c9a81c4 = 0;
  FUN_14052b5e0(&DAT_14c9a81c0,"structtype",0);
  _DAT_14c9a81d0 = "structtype";
  _DAT_14c9a81e0 = &LAB_142b40c00;
  _DAT_14c9a81e8 = 0x4249f5c3;
  DAT_14c9a81ec = 1;
  DAT_14c9a81d8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a81d8;
  atexit((_func_5014 *)&LAB_142b40c05);
  DAT_14c9a8258 = (undefined8 *)0x0;
  _DAT_14c9a8260 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0xa00,0);
  lVar8 = 0x3f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 5;
    *puVar1 = puVar6;
    lVar8 = lVar8 + -1;
    puVar1 = puVar6;
  } while (lVar8 != 0);
  _DAT_14c9a8260 = _DAT_14c9a8260 + 0x40;
  *puVar6 = DAT_14c9a8258;
  DAT_14c9a8258 = puVar5;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b450ae;
  local_88 = &DAT_14011fc1e;
  FUN_1460df5a8();
  atexit((_func_5014 *)&LAB_142b40d7f);
  DAT_14c9a8350 = (undefined8 *)0x0;
  _DAT_14c9a8358 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0xa00,0);
  lVar8 = 0x3f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 5;
    *puVar1 = puVar6;
    lVar8 = lVar8 + -1;
    puVar1 = puVar6;
  } while (lVar8 != 0);
  _DAT_14c9a8358 = _DAT_14c9a8358 + 0x40;
  *puVar6 = DAT_14c9a8350;
  DAT_14c9a8350 = puVar5;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b450b4;
  local_88 = &DAT_14011fc1e;
  FUN_1460dfd3e();
  atexit((_func_5014 *)&LAB_142b40dad);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b45e86 FUN_142b45e86 body=26 status=ok
// SIG undefined FUN_142b45e86(void)

void FUN_142b45e86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1ca850;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 142b45ec2 FUN_142b45ec2 body=91 status=ok
// SIG undefined FUN_142b45ec2(void)

void FUN_142b45ec2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar1 = *(int *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
      FUN_142b3d46e(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x28);
    if (*(longlong *)(param_2 + 0x28) == 0) {
      lVar2 = param_2;
    }
    *(undefined1 *)(lVar2 + iVar1) = *(undefined1 *)(param_1 + 0x30);
    return;
  }
  FUN_140bb6e30(param_1 + 8,param_2);
  return;
}



// FUNCTION 142b45f1e FUN_142b45f1e body=69 status=ok
// SIG undefined FUN_142b45f1e(void)

undefined8 * FUN_142b45f1e(longlong param_1,undefined8 *param_2)

{
  if (*(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(param_1 + 0x28) * 0x120) == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(param_1 + 0x28) * 0x120))(param_2,param_1 + 8);
  }
  return param_2;
}



// FUNCTION 142b45f64 FUN_142b45f64 body=39 status=ok
// SIG undefined FUN_142b45f64(void)

void FUN_142b45f64(longlong param_1)

{
  if (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(param_1 + 0x28) * 0x120) != (code *)0x0) {
                    /* WARNING: Jumptable at 0x000142b45f87 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(param_1 + 0x28) * 0x120))(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 142b45f8c FUN_142b45f8c body=65 status=ok
// SIG undefined FUN_142b45f8c(void)

undefined8 * FUN_142b45f8c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1[2] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar1;
  }
  else {
    FUN_141036372(param_3,param_1,param_2,0);
  }
  return param_1;
}



// FUNCTION 142b45fce FUN_142b45fce body=210 status=ok
// SIG undefined FUN_142b45fce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b45fce(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0xa0;
  do {
    *(undefined8 *)(lVar1 + 0x14c9a846d) = 0;
    *(undefined8 *)(lVar1 + 0x14c9a8468) = 0;
    *(undefined8 *)(&DAT_14c9a8488 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8490 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8498 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84b0 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84b8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84c0 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84c8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84d0 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84d8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84e0 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84e8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a84f0 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14c9a84f1) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a84f8 + lVar1 + 1) = 0;
    *(undefined1 *)((longlong)&DAT_14c9a8500 + lVar1 + 1) = 1;
    *(undefined8 *)((longlong)&DAT_14c9a8508 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a8510 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8518 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14c9a8520) = 0;
    *(undefined8 *)(&DAT_14c9a8528 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14c9a8530) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a8538 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a8540 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a8548 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14c9a8550) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a8558 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8560 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14c9a8568 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8570 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8578 + lVar1) = 0;
    *(undefined8 *)(&DAT_14c9a8580 + lVar1) = 0;
    puVar2 = DAT_14c9a84f8;
    lVar1 = lVar1 + 0x120;
  } while (lVar1 != 0x2920);
  DAT_14c9aad88 = 1;
  _DAT_14c9a8518 = 0x3f800000;
  uRam000000014c9a851c = 0x3f800000;
  uRam000000014c9a8520 = 0x3f800000;
  uRam000000014c9a8524 = 0x3e4ccccd;
  DAT_14c9a84f8 = (undefined8 *)0x0;
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    (*(code *)puVar2[1])
              ((longlong)&DAT_14c9a8508 + (ulonglong)((uint)*(byte *)(puVar2 + 2) * 0x120));
  }
  return;
}



// FUNCTION 142b460a0 FUN_142b460a0 body=55 status=ok
// SIG undefined FUN_142b460a0(void)

void FUN_142b460a0(void)

{
  longlong lVar1;
  
  lVar1 = 0x27a8;
  do {
    if (*(longlong *)((longlong)&DAT_14c9a8508 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x120;
  } while (lVar1 != -0xd8);
  return;
}



// FUNCTION 142b460d7 FUN_142b460d7 body=98 status=ok
// SIG undefined FUN_142b460d7(void)

void FUN_142b460d7(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)DAT_14c9ab188 * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = DAT_14c9ab168;
    if (DAT_14c9ab180 < 0x19) {
      puVar2 = &DAT_14c9ab168;
    }
    (*pcVar1)(puVar2);
  }
  if (DAT_14c9ab180 < 0x19) {
    return;
  }
  FUN_1400020a8(DAT_14c9ab168);
  return;
}



// FUNCTION 142b461ae FUN_142b461ae body=38 status=ok
// SIG undefined FUN_142b461ae(void)

uint FUN_142b461ae(float *param_1,float param_2)

{
  return -(uint)(param_2 <= *param_1 + param_1[1] && *param_1 - param_1[1] <= param_2) & 0xffffff01;
}



// FUNCTION 142b461d4 FUN_142b461d4 body=69 status=ok
// SIG undefined FUN_142b461d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b461d4(void)

{
  _DAT_14c9ab000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b46216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab008,1);
  return;
}



// FUNCTION 142b46219 FUN_142b46219 body=69 status=ok
// SIG undefined FUN_142b46219(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b46219(void)

{
  _DAT_14c9ab018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b4625b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab020,1);
  return;
}



// FUNCTION 142b467fe FUN_142b467fe body=189 status=ok
// SIG undefined FUN_142b467fe(void)

double * FUN_142b467fe(double *param_1,double *param_2,char param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_3 == '\x05') {
    dVar4 = *param_2;
    dVar3 = param_2[1];
    dVar5 = 0.0;
    if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
      dVar5 = atan2(dVar3,dVar4);
      dVar5 = dVar5 * 57.29577951308232;
      dVar4 = *param_2;
      dVar3 = param_2[1];
    }
    param_1[1] = dVar5;
    dVar5 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
    dVar4 = param_2[2];
    dVar3 = 0.0;
    if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar4 != 0.0 || (NAN(dVar4))))) {
      dVar3 = atan2(dVar4,dVar5);
      dVar3 = dVar3 * 57.29577951308232;
    }
    *param_1 = dVar3;
    param_1[2] = 0.0;
    uVar2 = 5;
    uVar1 = 0x18;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  *(undefined2 *)(param_1 + 3) = uVar1;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return param_1;
}



// FUNCTION 142b46a12 FUN_142b46a12 body=2610 status=ok
// SIG undefined FUN_142b46a12(void)

uint * FUN_142b46a12(uint *param_1,uint *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  double dVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  switch(param_3) {
  case 1:
    uVar19 = 0;
    if ((((param_2[1] != 0) && (uVar22 = *param_2, -1 < (int)uVar22)) &&
        ((int)uVar22 < DAT_14c9647dc)) &&
       (((plVar20 = (longlong *)
                    ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
         plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == param_2[1])) &&
        ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)))) {
      uVar19 = (uint)(*plVar20 != 0);
    }
    *(undefined2 *)(param_1 + 6) = 4;
    *param_1 = uVar19;
    *(undefined1 *)(param_1 + 8) = 1;
    goto LAB_142b46db3;
  case 4:
    if ((((param_2[1] != 0) && (uVar19 = *param_2, -1 < (int)uVar19)) &&
        ((int)uVar19 < DAT_14c9647dc)) &&
       (((plVar20 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
         plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == param_2[1])) &&
        (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (lVar21 = *plVar20, lVar21 != 0)))))) {
      if (DAT_14cac9ca8 == 0) {
        local_90 = &local_78;
        local_78 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1478c0a72;
        local_a0 = &LAB_1417b2375;
        local_a8 = L"Engine";
        local_b0 = 0x1000000000;
        local_b8 = 0x10000004;
        local_c0 = 8;
        local_c8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar14 = *(longlong *)(lVar21 + 0x10);
      iVar18 = *(int *)(lVar14 + 0x38);
      if ((iVar18 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          != DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cac7648 == 0) {
          local_90 = &local_78;
          local_78 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_143242436;
          local_98 = &LAB_14789ef1f;
          local_a0 = &LAB_1417b008f;
          local_a8 = L"Engine";
          local_b0 = 0x8000000000;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
          lVar14 = *(longlong *)(lVar21 + 0x10);
          iVar18 = *(int *)(lVar14 + 0x38);
        }
        if ((iVar18 < *(int *)(DAT_14cac7648 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) !=
            DAT_14cac7648 + 0x30)) break;
        uVar19 = *(uint *)(lVar21 + 0x260);
        uVar22 = *(uint *)(lVar21 + 0x264);
        uVar10 = *(uint *)(lVar21 + 0x268);
        uVar11 = *(uint *)(lVar21 + 0x26c);
        uVar1 = *(undefined8 *)(lVar21 + 0x270);
        *(undefined2 *)(param_1 + 6) = 0x18;
        *param_1 = uVar19;
        param_1[1] = uVar22;
        param_1[2] = uVar10;
        param_1[3] = uVar11;
        *(undefined8 *)(param_1 + 4) = uVar1;
      }
      else {
        lVar21 = *(longlong *)(lVar21 + 0x1c8);
        if (lVar21 == 0) {
          puVar15 = &DAT_14c8464e0;
          uVar24 = (undefined4)DAT_14c8464f0;
          uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar24 = (undefined4)*(undefined8 *)(lVar21 + 0x270);
          uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x270) >> 0x20);
          puVar15 = (undefined8 *)(lVar21 + 0x260);
        }
        uVar1 = *puVar15;
        uVar12 = puVar15[1];
        *(undefined2 *)(param_1 + 6) = 0x18;
        *(undefined8 *)param_1 = uVar1;
        *(undefined8 *)(param_1 + 2) = uVar12;
        *(ulonglong *)(param_1 + 4) = CONCAT44(uVar25,uVar24);
      }
      *(undefined1 *)(param_1 + 8) = 4;
      goto LAB_142b46db3;
    }
    break;
  case 5:
    if ((((((param_2[1] != 0) && (uVar19 = *param_2, -1 < (int)uVar19)) &&
          ((int)uVar19 < DAT_14c9647dc)) &&
         ((plVar20 = (longlong *)
                     ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
          plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == param_2[1])))) &&
        ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)) && (lVar21 = *plVar20, lVar21 != 0)) {
      if (DAT_14cac9ca8 == 0) {
        local_90 = &local_78;
        local_78 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1478c0a72;
        local_a0 = &LAB_1417b2375;
        local_a8 = L"Engine";
        local_b0 = 0x1000000000;
        local_b8 = 0x10000004;
        local_c0 = 8;
        local_c8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      dVar16 = *(double *)(lVar21 + 0x10);
      iVar18 = *(int *)((longlong)dVar16 + 0x38);
      if ((iVar18 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)((longlong)dVar16 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          != DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cac7648 == 0) {
          local_90 = &local_78;
          local_78 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_143242436;
          local_98 = &LAB_14789ef1f;
          local_a0 = &LAB_1417b008f;
          local_a8 = L"Engine";
          local_b0 = 0x8000000000;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
          dVar16 = *(double *)(lVar21 + 0x10);
          iVar18 = *(int *)((longlong)dVar16 + 0x38);
        }
        if ((iVar18 < *(int *)(DAT_14cac7648 + 0x38)) ||
           (dVar16 = *(double *)((longlong)dVar16 + 0x30),
           *(longlong *)((longlong)dVar16 + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) !=
           DAT_14cac7648 + 0x30)) break;
        pcVar6 = *(code **)(lVar21 + 0x240);
        dVar7 = *(double *)(lVar21 + 0x248);
        dVar8 = *(double *)(lVar21 + 0x250);
        dVar9 = *(double *)(lVar21 + 600);
        pdVar17 = *(double **)(lVar21 + 0x228);
        local_78 = pcVar6;
        uStack_70 = dVar7;
        local_68 = dVar8;
        uStack_60 = dVar9;
        if (pdVar17 == (double *)0x0) {
          iVar18 = 0x40;
          pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
          dVar16 = DAT_14c8463d8;
          *pdVar17 = DAT_14c8463d0;
          pdVar17[1] = dVar16;
          dVar16 = DAT_14c8463e8;
          pdVar17[2] = DAT_14c8463e0;
          pdVar17[3] = dVar16;
          dVar16 = (double)CONCAT44(DAT_14c846500._4_4_,(uint)DAT_14c846500);
          pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(uint)DAT_14c8464f8);
          pdVar17[5] = dVar16;
          dVar16 = DAT_14c846508;
          pdVar17[6] = DAT_14c846508;
          *(double **)(lVar21 + 0x228) = pdVar17;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar7 != pdVar17[1]);
        auVar2._0_8_ = -(ulonglong)((double)pcVar6 != *pdVar17);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar17[1]) >> 0x20);
        iVar13 = movmskpd(SUB84(dVar16,0),auVar2);
        auVar4._8_4_ = (int)-(ulonglong)(dVar9 != pdVar17[3]);
        auVar4._0_8_ = -(ulonglong)(dVar8 != pdVar17[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar17[3]) >> 0x20);
        uVar19 = movmskpd(iVar18,auVar4);
        if ((uVar19 & 0x3fffffff) != 0 || iVar13 != 0) {
          *(undefined4 *)(pdVar17 + 2) = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar17 + 0x14) = local_68._4_4_;
          *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_60._4_4_;
          *(undefined4 *)pdVar17 = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar17 + 4) = local_78._4_4_;
          *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_70._4_4_;
          FUN_1448052ee(&local_78,&local_58);
          pdVar17[6] = local_48;
          pdVar17[4] = (double)CONCAT44(uStack_54,local_58);
          pdVar17[5] = (double)CONCAT44(uStack_4c,uStack_50);
        }
        *(undefined2 *)(param_1 + 6) = 0x18;
        uVar19 = *(uint *)((longlong)pdVar17 + 0x24);
        uVar22 = *(uint *)(pdVar17 + 5);
        uVar10 = *(uint *)((longlong)pdVar17 + 0x2c);
        *param_1 = *(uint *)(pdVar17 + 4);
        param_1[1] = uVar19;
        param_1[2] = uVar22;
        param_1[3] = uVar10;
        dVar16 = pdVar17[6];
      }
      else {
        lVar21 = *(longlong *)(lVar21 + 0x1c8);
        if (lVar21 == 0) {
          local_48 = DAT_14c846508;
          local_58 = (uint)DAT_14c8464f8;
          uStack_54 = DAT_14c8464f8._4_4_;
          uStack_50 = (uint)DAT_14c846500;
          uStack_4c = DAT_14c846500._4_4_;
        }
        else {
          pcVar6 = *(code **)(lVar21 + 0x240);
          dVar7 = *(double *)(lVar21 + 0x248);
          dVar8 = *(double *)(lVar21 + 0x250);
          dVar9 = *(double *)(lVar21 + 600);
          pdVar17 = *(double **)(lVar21 + 0x228);
          local_78 = pcVar6;
          uStack_70 = dVar7;
          local_68 = dVar8;
          uStack_60 = dVar9;
          if (pdVar17 == (double *)0x0) {
            iVar18 = 0x40;
            pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
            dVar16 = DAT_14c8463d8;
            *pdVar17 = DAT_14c8463d0;
            pdVar17[1] = dVar16;
            dVar16 = DAT_14c8463e8;
            pdVar17[2] = DAT_14c8463e0;
            pdVar17[3] = dVar16;
            dVar16 = (double)CONCAT44(DAT_14c846500._4_4_,(uint)DAT_14c846500);
            pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(uint)DAT_14c8464f8);
            pdVar17[5] = dVar16;
            dVar16 = DAT_14c846508;
            pdVar17[6] = DAT_14c846508;
            *(double **)(lVar21 + 0x228) = pdVar17;
          }
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar17[1]);
          auVar3._0_8_ = -(ulonglong)((double)pcVar6 != *pdVar17);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar17[1]) >> 0x20);
          iVar13 = movmskpd(SUB84(dVar16,0),auVar3);
          auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar17[3]);
          auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar17[2]);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar17[3]) >> 0x20);
          uVar19 = movmskpd(iVar18,auVar5);
          if ((uVar19 & 0x3fffffff) != 0 || iVar13 != 0) {
            *(undefined4 *)(pdVar17 + 2) = (undefined4)local_68;
            *(undefined4 *)((longlong)pdVar17 + 0x14) = local_68._4_4_;
            *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_60._4_4_;
            *(undefined4 *)pdVar17 = (undefined4)local_78;
            *(undefined4 *)((longlong)pdVar17 + 4) = local_78._4_4_;
            *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_70._4_4_;
            FUN_1448052ee(&local_78,&local_58);
            pdVar17[6] = local_48;
            pdVar17[4] = (double)CONCAT44(uStack_54,local_58);
            pdVar17[5] = (double)CONCAT44(uStack_4c,uStack_50);
          }
          local_48 = pdVar17[6];
          local_58 = *(uint *)(pdVar17 + 4);
          uStack_54 = *(uint *)((longlong)pdVar17 + 0x24);
          uStack_50 = *(uint *)(pdVar17 + 5);
          uStack_4c = *(uint *)((longlong)pdVar17 + 0x2c);
        }
        *(undefined2 *)(param_1 + 6) = 0x18;
        *param_1 = local_58;
        param_1[1] = uStack_54;
        param_1[2] = uStack_50;
        param_1[3] = uStack_4c;
        dVar16 = local_48;
      }
      *(double *)(param_1 + 4) = dVar16;
      *(undefined1 *)(param_1 + 8) = 5;
      goto LAB_142b46db3;
    }
    break;
  case 7:
    if ((((param_2[1] != 0) && (uVar19 = *param_2, -1 < (int)uVar19)) &&
        ((int)uVar19 < DAT_14c9647dc)) &&
       (((plVar20 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
         plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == param_2[1])) &&
        (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (lVar21 = *plVar20, lVar21 != 0)))))) {
      if (DAT_14cac9ca8 == 0) {
        local_90 = &local_78;
        local_78 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1478c0a72;
        local_a0 = &LAB_1417b2375;
        local_a8 = L"Engine";
        local_b0 = 0x1000000000;
        local_b8 = 0x10000004;
        local_c0 = 8;
        local_c8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar14 = *(longlong *)(lVar21 + 0x10);
      iVar18 = *(int *)(lVar14 + 0x38);
      if ((iVar18 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          != DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cad00c8 == 0) {
          local_90 = &local_78;
          local_78 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_1479b7a0c;
          local_a0 = &LAB_1463b464e;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10000005;
          local_c0 = 8;
          local_c8 = 0x110;
          FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
          lVar14 = *(longlong *)(lVar21 + 0x10);
          iVar18 = *(int *)(lVar14 + 0x38);
        }
        if ((iVar18 < *(int *)(DAT_14cad00c8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
            DAT_14cad00c8 + 0x30)) break;
        lVar21 = *(longlong *)(lVar21 + 0xa8);
        *(undefined2 *)(param_1 + 6) = 8;
        param_1[1] = 0;
        if (lVar21 != 0) {
          uVar19 = *(uint *)(lVar21 + 0xc);
          goto LAB_142b46ee0;
        }
        *param_1 = 0;
        uVar19 = 0;
      }
      else {
        *(undefined2 *)(param_1 + 6) = 8;
        param_1[1] = 0;
        uVar19 = *(uint *)(lVar21 + 0xc);
LAB_142b46ee0:
        *param_1 = uVar19;
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar21 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar21 = 0;
        }
        uVar19 = *(uint *)(lVar21 + 0x10);
        if (*(uint *)(lVar21 + 0x10) == 0) {
          LOCK();
          iVar18 = DAT_14c964868 + 1;
          UNLOCK();
          uVar22 = DAT_14c964868 + 1;
          bVar23 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar18;
          if (bVar23) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar22);
          }
          LOCK();
          uVar19 = *(uint *)(lVar21 + 0x10);
          bVar23 = uVar19 == 0;
          if (bVar23) {
            *(uint *)(lVar21 + 0x10) = uVar22;
            uVar19 = 0;
          }
          UNLOCK();
          if (bVar23) {
            uVar19 = uVar22;
          }
        }
      }
      param_1[1] = uVar19;
      *(undefined1 *)(param_1 + 8) = 7;
      goto LAB_142b46db3;
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
LAB_142b46db3:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4754c FUN_142b4754c body=227 status=ok
// SIG undefined FUN_142b4754c(void)

longlong FUN_142b4754c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac9ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478c0a72;
    local_40 = &LAB_1417b2375;
    local_48 = L"Engine";
    local_50 = 0x1000000000;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac9ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4764e FUN_142b4764e body=1288 status=ok
// SIG undefined FUN_142b4764e(void)

uint * FUN_142b4764e(uint *param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  undefined8 *puVar12;
  uint uVar13;
  double *pdVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  double local_48;
  ulonglong local_40;
  
  iVar10 = DAT_14c9647dc;
  lVar15 = DAT_14c9647c8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switch(param_3) {
  case '\x01':
    uVar13 = 0;
    if (((((param_2[1] != 0) && (uVar16 = *param_2, -1 < (int)uVar16)) &&
         ((int)uVar16 < DAT_14c9647dc)) &&
        ((plVar17 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         plVar17 != (longlong *)0x0 && (*(uint *)(plVar17 + 2) == param_2[1])))) &&
       ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) {
      uVar13 = (uint)(*plVar17 != 0);
    }
    *(undefined2 *)(param_1 + 6) = 4;
    *param_1 = uVar13;
    *(undefined1 *)(param_1 + 8) = 1;
    goto LAB_142b47a24;
  case '\x02':
  case '\x03':
    break;
  case '\x04':
    if ((((param_2[1] != 0) && (uVar13 = *param_2, -1 < (int)uVar13)) &&
        (((int)uVar13 < DAT_14c9647dc &&
         ((plVar17 = (longlong *)
                     ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
          plVar17 != (longlong *)0x0 && (*(uint *)(plVar17 + 2) == param_2[1])))))) &&
       (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (*plVar17 != 0)))) {
      lVar15 = *(longlong *)(*plVar17 + 0x1c8);
      if (lVar15 == 0) {
        puVar12 = &DAT_14c8464e0;
        uVar19 = (undefined4)DAT_14c8464f0;
        uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar19 = (undefined4)*(undefined8 *)(lVar15 + 0x270);
        uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x270) >> 0x20);
        puVar12 = (undefined8 *)(lVar15 + 0x260);
      }
      uVar8 = *puVar12;
      uVar9 = puVar12[1];
      *(undefined2 *)(param_1 + 6) = 0x18;
      *(undefined8 *)param_1 = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uVar20,uVar19);
      *(undefined1 *)(param_1 + 8) = 4;
      goto LAB_142b47a24;
    }
    break;
  case '\x05':
    if (((param_2[1] != 0) && (uVar13 = *param_2, -1 < (int)uVar13)) &&
       ((int)uVar13 < DAT_14c9647dc)) {
      uVar16 = uVar13 >> 0x10;
      pdVar14 = (double *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar16 * 8));
      if ((((pdVar14 != (double *)0x0) && (*(uint *)(pdVar14 + 2) == param_2[1])) &&
          (((ulonglong)pdVar14[1] & 0x10200000) == 0)) && (dVar11 = *pdVar14, dVar11 != 0.0)) {
        lVar15 = *(longlong *)((longlong)dVar11 + 0x1c8);
        if (lVar15 == 0) {
          local_48 = DAT_14c846508;
          local_58 = (uint)DAT_14c8464f8;
          uStack_54 = DAT_14c8464f8._4_4_;
          uStack_50 = (uint)DAT_14c846500;
          uStack_4c = DAT_14c846500._4_4_;
        }
        else {
          dVar4 = *(double *)(lVar15 + 0x240);
          dVar5 = *(double *)(lVar15 + 0x248);
          dVar6 = *(double *)(lVar15 + 0x250);
          dVar7 = *(double *)(lVar15 + 600);
          pdVar14 = *(double **)(lVar15 + 0x228);
          local_78 = dVar4;
          uStack_70 = dVar5;
          local_68 = dVar6;
          uStack_60 = dVar7;
          if (pdVar14 == (double *)0x0) {
            uVar16 = 0x40;
            pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
            dVar11 = DAT_14c8463d8;
            *pdVar14 = DAT_14c8463d0;
            pdVar14[1] = dVar11;
            dVar11 = DAT_14c8463e8;
            pdVar14[2] = DAT_14c8463e0;
            pdVar14[3] = dVar11;
            dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(uint)DAT_14c846500);
            pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(uint)DAT_14c8464f8);
            pdVar14[5] = dVar11;
            dVar11 = DAT_14c846508;
            pdVar14[6] = DAT_14c846508;
            *(double **)(lVar15 + 0x228) = pdVar14;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar14[1]);
          auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar14);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar14[1]) >> 0x20);
          iVar10 = movmskpd(SUB84(dVar11,0),auVar2);
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
          auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
          uVar13 = movmskpd(uVar16,auVar3);
          if ((uVar13 & 0x3fffffff) != 0 || iVar10 != 0) {
            *(undefined4 *)(pdVar14 + 2) = (undefined4)local_68;
            *(undefined4 *)((longlong)pdVar14 + 0x14) = local_68._4_4_;
            *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_60._4_4_;
            *(undefined4 *)pdVar14 = (undefined4)local_78;
            *(undefined4 *)((longlong)pdVar14 + 4) = local_78._4_4_;
            *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_70._4_4_;
            FUN_1448052ee(&local_78,&local_58);
            pdVar14[6] = local_48;
            pdVar14[4] = (double)CONCAT44(uStack_54,local_58);
            pdVar14[5] = (double)CONCAT44(uStack_4c,uStack_50);
          }
          local_48 = pdVar14[6];
          local_58 = *(uint *)(pdVar14 + 4);
          uStack_54 = *(uint *)((longlong)pdVar14 + 0x24);
          uStack_50 = *(uint *)(pdVar14 + 5);
          uStack_4c = *(uint *)((longlong)pdVar14 + 0x2c);
        }
        *(undefined2 *)(param_1 + 6) = 0x18;
        *param_1 = local_58;
        param_1[1] = uStack_54;
        param_1[2] = uStack_50;
        param_1[3] = uStack_4c;
        *(double *)(param_1 + 4) = local_48;
        *(undefined1 *)(param_1 + 8) = 5;
        goto LAB_142b47a24;
      }
    }
    break;
  case '\x06':
    if (((((param_2[1] == 0) || (uVar13 = *param_2, (int)uVar13 < 0)) ||
         (DAT_14c9647dc <= (int)uVar13)) ||
        ((plVar17 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != param_2[1])))) ||
       ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) {
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
LAB_142b47a6d:
      *param_1 = 0;
      uVar13 = 0;
    }
    else {
      lVar1 = *plVar17;
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
      if (lVar1 == 0) goto LAB_142b47a6d;
      uVar13 = *(uint *)(lVar1 + 0xc);
      *param_1 = uVar13;
      if ((int)uVar13 < iVar10) {
        lVar15 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(lVar15 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      uVar13 = *(uint *)(lVar15 + 0x10);
      if (*(uint *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar13 = *(uint *)(lVar15 + 0x10);
        bVar18 = uVar13 == 0;
        if (bVar18) {
          *(uint *)(lVar15 + 0x10) = uVar16;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar18) {
          uVar13 = uVar16;
        }
      }
    }
    param_1[1] = uVar13;
    *(undefined1 *)(param_1 + 8) = 6;
    goto LAB_142b47a24;
  default:
    if ((((param_3 == '\x0e') && (param_2[1] != 0)) && (uVar13 = *param_2, -1 < (int)uVar13)) &&
       ((((int)uVar13 < DAT_14c9647dc &&
         (plVar17 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar17 != (longlong *)0x0)) &&
        ((*(uint *)(plVar17 + 2) == param_2[1] &&
         (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (*plVar17 != 0)))))))) {
      lVar1 = *(longlong *)(*plVar17 + 0x1c8);
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
      if (lVar1 == 0) {
        *param_1 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = *(uint *)(lVar1 + 0xc);
        *param_1 = uVar13;
        if ((int)uVar13 < iVar10) {
          lVar15 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(lVar15 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        uVar13 = *(uint *)(lVar15 + 0x10);
        if (*(uint *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          uVar16 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar16);
          }
          LOCK();
          uVar13 = *(uint *)(lVar15 + 0x10);
          bVar18 = uVar13 == 0;
          if (bVar18) {
            *(uint *)(lVar15 + 0x10) = uVar16;
            uVar13 = 0;
          }
          UNLOCK();
          if (bVar18) {
            uVar13 = uVar16;
          }
        }
      }
      param_1[1] = uVar13;
      *(undefined1 *)(param_1 + 8) = 0xe;
      goto LAB_142b47a24;
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
LAB_142b47a24:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b47bc4 FUN_142b47bc4 body=234 status=ok
// SIG undefined FUN_142b47bc4(void)

longlong FUN_142b47bc4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac7648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14789ef1f;
    local_40 = &LAB_1417b008f;
    local_48 = L"Engine";
    local_50 = 0x8000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac7648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b47ccc FUN_142b47ccc body=1201 status=ok
// SIG undefined FUN_142b47ccc(void)

uint * FUN_142b47ccc(uint *param_1,uint *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  double dVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  iVar12 = DAT_14c9647dc;
  lVar16 = DAT_14c9647c8;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  switch(param_3) {
  case 1:
    uVar15 = 0;
    if (((param_2[1] != 0) && (uVar17 = *param_2, -1 < (int)uVar17)) &&
       (((int)uVar17 < DAT_14c9647dc &&
        (((plVar18 = (longlong *)
                     ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
          plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == param_2[1])) &&
         ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) {
      uVar15 = (uint)(*plVar18 != 0);
    }
    *(undefined2 *)(param_1 + 6) = 4;
    *param_1 = uVar15;
    uVar11 = 1;
    goto LAB_142b48043;
  case 4:
    if (((((param_2[1] != 0) && (uVar15 = *param_2, -1 < (int)uVar15)) &&
         ((int)uVar15 < DAT_14c9647dc)) &&
        ((plVar18 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == param_2[1])))) &&
       (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar16 = *plVar18, lVar16 != 0)))) {
      uVar15 = *(uint *)(lVar16 + 0x260);
      uVar17 = *(uint *)(lVar16 + 0x264);
      uVar9 = *(uint *)(lVar16 + 0x268);
      uVar10 = *(uint *)(lVar16 + 0x26c);
      uVar1 = *(undefined8 *)(lVar16 + 0x270);
      *(undefined2 *)(param_1 + 6) = 0x18;
      *param_1 = uVar15;
      param_1[1] = uVar17;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      *(undefined8 *)(param_1 + 4) = uVar1;
      uVar11 = 4;
      goto LAB_142b48043;
    }
    break;
  case 5:
    if (((param_2[1] != 0) && (uVar15 = *param_2, -1 < (int)uVar15)) &&
       ((int)uVar15 < DAT_14c9647dc)) {
      uVar17 = uVar15 >> 0x10;
      plVar18 = (longlong *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar17 * 8));
      if (((plVar18 != (longlong *)0x0) && (*(uint *)(plVar18 + 2) == param_2[1])) &&
         ((dVar13 = (double)(ulonglong)*(uint *)(plVar18 + 1),
          (*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar16 = *plVar18, lVar16 != 0)))) {
        dVar5 = *(double *)(lVar16 + 0x240);
        dVar6 = *(double *)(lVar16 + 0x248);
        dVar7 = *(double *)(lVar16 + 0x250);
        dVar8 = *(double *)(lVar16 + 600);
        pdVar14 = *(double **)(lVar16 + 0x228);
        local_88 = dVar5;
        uStack_80 = dVar6;
        local_78 = dVar7;
        uStack_70 = dVar8;
        if (pdVar14 == (double *)0x0) {
          uVar17 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar13;
          dVar13 = DAT_14c846500;
          pdVar14[4] = DAT_14c8464f8;
          pdVar14[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar14[6] = DAT_14c846508;
          *(double **)(lVar16 + 0x228) = pdVar14;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar14[1]);
        auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar14);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar14[1]) >> 0x20);
        iVar12 = movmskpd(SUB84(dVar13,0),auVar3);
        auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar14[3]);
        auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar14[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar14[3]) >> 0x20);
        uVar15 = movmskpd(uVar17,auVar4);
        if ((uVar15 & 0x3fffffff) != 0 || iVar12 != 0) {
          *(undefined4 *)(pdVar14 + 2) = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar14 + 0x14) = local_78._4_4_;
          *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_70._4_4_;
          *(undefined4 *)pdVar14 = (undefined4)local_88;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_88._4_4_;
          *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_80._4_4_;
          FUN_1448052ee(&local_88,&local_68);
          pdVar14[6] = local_58;
          pdVar14[4] = local_68;
          pdVar14[5] = dStack_60;
        }
        *(undefined2 *)(param_1 + 6) = 0x18;
        uVar15 = *(uint *)((longlong)pdVar14 + 0x24);
        uVar17 = *(uint *)(pdVar14 + 5);
        uVar9 = *(uint *)((longlong)pdVar14 + 0x2c);
        *param_1 = *(uint *)(pdVar14 + 4);
        param_1[1] = uVar15;
        param_1[2] = uVar17;
        param_1[3] = uVar9;
        *(double *)(param_1 + 4) = pdVar14[6];
        uVar11 = 5;
        goto LAB_142b48043;
      }
    }
    break;
  case 6:
    if (((param_2[1] == 0) || (uVar15 = *param_2, (int)uVar15 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar15 ||
        (((plVar18 = (longlong *)
                     ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
          plVar18 == (longlong *)0x0 || (*(uint *)(plVar18 + 2) != param_2[1])) ||
         ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))))) {
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
LAB_142b48092:
      *param_1 = 0;
      uVar15 = 0;
    }
    else {
      lVar2 = *plVar18;
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
      if (lVar2 == 0) goto LAB_142b48092;
      uVar15 = *(uint *)(lVar2 + 0xc);
      *param_1 = uVar15;
      if ((int)uVar15 < iVar12) {
        lVar16 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(lVar16 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar15 = *(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar17 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar17);
        }
        LOCK();
        uVar15 = *(uint *)(lVar16 + 0x10);
        bVar19 = uVar15 == 0;
        if (bVar19) {
          *(uint *)(lVar16 + 0x10) = uVar17;
          uVar15 = 0;
        }
        UNLOCK();
        if (bVar19) {
          uVar15 = uVar17;
        }
      }
    }
    param_1[1] = uVar15;
    uVar11 = 6;
    goto LAB_142b48043;
  case 7:
    if ((((param_2[1] != 0) && (uVar15 = *param_2, -1 < (int)uVar15)) &&
        ((int)uVar15 < DAT_14c9647dc)) &&
       (((plVar18 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == param_2[1])) &&
        (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (*plVar18 != 0)))))) {
      lVar2 = *(longlong *)(*plVar18 + 0xa8);
      *(undefined2 *)(param_1 + 6) = 8;
      param_1[1] = 0;
      if (lVar2 == 0) {
        *param_1 = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *(uint *)(lVar2 + 0xc);
        *param_1 = uVar15;
        if ((int)uVar15 < iVar12) {
          lVar16 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(lVar16 + (ulonglong)(uVar15 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        uVar15 = *(uint *)(lVar16 + 0x10);
        if (*(uint *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          uVar17 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar17);
          }
          LOCK();
          uVar15 = *(uint *)(lVar16 + 0x10);
          bVar19 = uVar15 == 0;
          if (bVar19) {
            *(uint *)(lVar16 + 0x10) = uVar17;
            uVar15 = 0;
          }
          UNLOCK();
          if (bVar19) {
            uVar15 = uVar17;
          }
        }
      }
      param_1[1] = uVar15;
      uVar11 = 7;
      goto LAB_142b48043;
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
  uVar11 = 0;
LAB_142b48043:
  *(undefined1 *)(param_1 + 8) = uVar11;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4820b FUN_142b4820b body=359 status=ok
// SIG undefined FUN_142b4820b(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_142b4820b(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 *******pppppppuVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *******local_60;
  int local_58;
  undefined8 *******local_50;
  undefined8 *******local_48;
  int local_40;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_3 == '\b') {
    FUN_1400021e4(param_2,&local_48);
    pppppppuVar2 = local_48;
    *(undefined2 *)(param_1 + 3) = 0x10;
    *param_1 = 0;
    *(int *)(param_1 + 1) = local_40;
    if ((longlong)local_40 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,local_40,0);
      memcpy((void *)*param_1,pppppppuVar2,(longlong)local_40 * 2);
    }
    *(undefined1 *)(param_1 + 4) = 8;
    local_60 = local_48;
  }
  else {
    FUN_1400021e4(param_2,&local_60);
    local_30 = 0;
    local_28 = 0;
    local_50 = local_60;
    if (local_58 == 0) {
      local_50 = (undefined8 *******)&DAT_149dfb77a;
    }
    local_68 = DAT_14c872be8;
    FUN_140786820(&local_48,&local_50,0,0);
    FUN_1400b56fe(param_1,&local_48,param_3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppppuVar2 = &local_48;
      if (0x18 < local_30) {
        pppppppuVar2 = local_48;
      }
      (*pcVar1)(pppppppuVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48);
    }
  }
  if (local_60 != (undefined8 *******)0x0) {
    FUN_1400020a8(local_60);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b48376 FUN_142b48376 body=186 status=ok
// SIG undefined FUN_142b48376(void)

undefined8 * FUN_142b48376(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_1462b1c64(param_2,&local_28);
  if (cVar3 == '\0') {
    FUN_141742dba(param_2,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(param_1,iVar2,local_38,1);
    *(undefined2 *)(param_1 + 3) = 8;
    *(undefined1 *)(param_1 + 4) = 0x12;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = &DAT_14c9ab1a8;
    if (local_28 != 0) {
      puVar4 = (undefined8 *)(local_28 + 0x18);
    }
    uVar1 = *puVar4;
    *(undefined2 *)(param_1 + 3) = 8;
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 4) = 0x12;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b484f6 FUN_142b484f6 body=260 status=ok
// SIG undefined FUN_142b484f6(void)

longlong FUN_142b484f6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_3 == '\x12') {
    iVar2 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(param_1,iVar2,*param_2,1);
    *(undefined2 *)(param_1 + 0x18) = 8;
    *(undefined1 *)(param_1 + 0x20) = 0x12;
  }
  else {
    local_30 = 0;
    local_28 = 0;
    if (*(int *)(param_2 + 1) == 0) {
      local_50 = &DAT_149dfb77a;
    }
    else {
      local_50 = (undefined2 *)*param_2;
    }
    local_58 = DAT_14c872be8;
    FUN_140786820(local_48,&local_50,0,0);
    FUN_1400b56fe(param_1,local_48,param_3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = local_48;
      if (0x18 < local_30) {
        pppuVar3 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b48600 FUN_142b48600 body=187 status=ok
// SIG undefined FUN_142b48600(void)

undefined8 * FUN_142b48600(undefined8 *param_1,longlong param_2)

{
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x20) == '\x12') {
    FUN_1400021e4(param_2,&local_30);
  }
  else {
    FUN_141742dba(param_2,&local_30);
  }
  _Src = local_30;
  *(undefined2 *)(param_1 + 3) = 0x10;
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_28;
  if ((longlong)local_28 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,local_28,0);
    memcpy((void *)*param_1,_Src,(longlong)local_28 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 8;
  if (local_30 != (void *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b48820 FUN_142b48820 body=719 status=ok
// SIG undefined FUN_142b48820(void)

undefined8 * FUN_142b48820(undefined8 *param_1,longlong *param_2,uint param_3)

{
  code *pcVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_3 == '\b') {
    plVar3 = (longlong *)*param_2;
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    param_2 = (longlong *)*param_2;
    pcVar1 = *(code **)(*param_2 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar3 = param_2 + 3;
      if (param_2[5] != 0) {
        plVar3 = (longlong *)(param_2[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar3 = param_2 + 2;
    }
    else {
      plVar3 = (longlong *)(*pcVar1)(param_2);
    }
    *(undefined2 *)(param_1 + 3) = 0x10;
    *param_1 = 0;
    iVar2 = (int)plVar3[1];
    _Src = (void *)*plVar3;
    *(int *)(param_1 + 1) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar2,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
    *(undefined1 *)(param_1 + 4) = 8;
  }
  else if ((param_3 & 0xff) == 0x12) {
    plVar3 = (longlong *)*param_2;
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    param_2 = (longlong *)*param_2;
    pcVar1 = *(code **)(*param_2 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar3 = param_2 + 3;
      if (param_2[5] != 0) {
        plVar3 = (longlong *)(param_2[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar3 = param_2 + 2;
    }
    else {
      plVar3 = (longlong *)(*pcVar1)(param_2);
    }
    iVar2 = (int)plVar3[1] + -1;
    if ((int)plVar3[1] == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(param_1,iVar2,*plVar3,1);
    *(undefined2 *)(param_1 + 3) = 8;
    *(undefined1 *)(param_1 + 4) = 0x12;
  }
  else {
    plVar3 = (longlong *)*param_2;
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    param_2 = (longlong *)*param_2;
    pcVar1 = *(code **)(*param_2 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar3 = param_2 + 3;
      if (param_2[5] != 0) {
        plVar3 = (longlong *)(param_2[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar3 = param_2 + 2;
    }
    else {
      plVar3 = (longlong *)(*pcVar1)(param_2);
    }
    local_30 = 0;
    local_28 = 0;
    if ((int)plVar3[1] == 0) {
      local_50 = &DAT_149dfb77a;
    }
    else {
      local_50 = (undefined2 *)*plVar3;
    }
    local_58 = DAT_14c872be8;
    FUN_140786820(local_48,&local_50,0,0);
    FUN_1400b56fe(param_1,local_48,param_3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar4 = local_48;
      if (0x18 < local_30) {
        ppppuVar4 = (undefined8 ****)local_48[0];
      }
      (*pcVar1)(ppppuVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b48af4 FUN_142b48af4 body=282 status=ok
// SIG undefined FUN_142b48af4(void)

undefined8 * FUN_142b48af4(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x20) == '\b') {
    FUN_140009b9a(&local_30);
  }
  else {
    if (*(char *)(param_2 + 0x20) != '\x12') {
      FUN_140592d2e(param_2,local_40);
      FUN_140233b1a(&local_30,local_40);
      *(undefined2 *)(param_1 + 3) = 0x10;
      *param_1 = local_30;
      if (local_30 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = local_28;
        *(undefined1 *)(param_1 + 4) = 0x1b;
      }
      else {
        (**(code **)(*local_30 + 8))();
        *(undefined4 *)(param_1 + 1) = local_28;
        *(undefined1 *)(param_1 + 4) = 0x1b;
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_142b48bdb;
    }
    FUN_145715fae(&local_30);
  }
  *(undefined2 *)(param_1 + 3) = 0x10;
  *param_1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 1) = local_28;
    *(undefined1 *)(param_1 + 4) = 0x1b;
  }
  else {
    (**(code **)(*local_30 + 8))();
    *(undefined4 *)(param_1 + 1) = local_28;
    *(undefined1 *)(param_1 + 4) = 0x1b;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
LAB_142b48bdb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b48d42 FUN_142b48d42 body=396 status=ok
// SIG undefined FUN_142b48d42(void)

double * FUN_142b48d42(double *param_1,float *param_2,char param_3)

{
  float fVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  
  if (param_3 == '\x15') {
    fVar4 = *param_2;
    fVar1 = param_2[1];
    if (1e-08 < ABS(fVar1)) {
      uVar3 = rand();
      fVar4 = fVar4 + (((float)(uVar3 & 0x7fff) / 32767.0) * (fVar1 + fVar1) - fVar1);
    }
    *(undefined2 *)(param_1 + 3) = 8;
    *param_1 = (double)fVar4;
    uVar2 = 0x15;
  }
  else if (param_3 == '\x03') {
    fVar4 = *param_2;
    fVar1 = param_2[1];
    if (1e-08 < ABS(fVar1)) {
      uVar3 = rand();
      fVar4 = fVar4 + (((float)(uVar3 & 0x7fff) / 32767.0) * (fVar1 + fVar1) - fVar1);
    }
    *(undefined2 *)(param_1 + 3) = 4;
    *(float *)param_1 = fVar4;
    uVar2 = 3;
  }
  else if (param_3 == '\x02') {
    fVar4 = *param_2;
    fVar1 = param_2[1];
    if (1e-08 < ABS(fVar1)) {
      uVar3 = rand();
      fVar4 = fVar4 + (((float)(uVar3 & 0x7fff) / 32767.0) * (fVar1 + fVar1) - fVar1);
    }
    *(undefined2 *)(param_1 + 3) = 4;
    *(int *)param_1 = (int)ROUND(fVar4 + fVar4 + 0.5) >> 1;
    uVar2 = 2;
  }
  else {
    *(undefined2 *)(param_1 + 3) = 0;
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  return param_1;
}



// FUNCTION 142b4922a FUN_142b4922a body=164 status=ok
// SIG undefined FUN_142b4922a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4922a(void *param_1)

{
  undefined8 uVar1;
  
  memcpy(param_1,&DAT_14c9ab040,0xb8);
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = DAT_14c9ab0f8;
  uVar1 = uRam000000014c9ab108;
  *(undefined8 *)((longlong)param_1 + 0xc0) = _DAT_14c9ab100;
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = DAT_14c9ab110;
  *(undefined1 *)((longlong)param_1 + 0xd4) = DAT_14c9ab114;
  *(undefined8 *)((longlong)param_1 + 0xf8) = DAT_14c9ab138;
  uVar1 = uRam000000014c9ab130;
  *(undefined8 *)((longlong)param_1 + 0xe8) = _DAT_14c9ab128;
  *(undefined8 *)((longlong)param_1 + 0xf0) = uVar1;
  uVar1 = uRam000000014c9ab120;
  *(undefined8 *)((longlong)param_1 + 0xd8) = _DAT_14c9ab118;
  *(undefined8 *)((longlong)param_1 + 0xe0) = uVar1;
  return;
}



// FUNCTION 142b492de FUN_142b492de body=235 status=ok
// SIG undefined FUN_142b492de(void)

uint * FUN_142b492de(uint *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 == '\a') {
    lVar5 = FUN_14485cccc(*param_2 + 0xb8);
    *(undefined2 *)(param_1 + 6) = 8;
    param_1[1] = 0;
    if (lVar5 == 0) {
      *param_1 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar4 = *(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar4 = *(uint *)(lVar5 + 0x10);
        bVar7 = uVar4 == 0;
        if (bVar7) {
          *(uint *)(lVar5 + 0x10) = uVar6;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          uVar4 = uVar6;
        }
      }
    }
    param_1[1] = uVar4;
    uVar3 = 7;
  }
  else if (param_3 == '\x04') {
    lVar5 = *param_2;
    *(undefined2 *)(param_1 + 6) = 0x18;
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar5 + 0x38);
    uVar3 = 4;
  }
  else {
    *(undefined2 *)(param_1 + 6) = 0;
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 8) = uVar3;
  return param_1;
}



// FUNCTION 142b493da FUN_142b493da body=734 status=ok
// SIG undefined FUN_142b493da(void)

undefined8 * FUN_142b493da(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 uVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_d4;
  undefined1 local_cb;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((char)param_2[8] == '\a') {
    uVar3 = 0;
    memset(&local_178,0,0x100);
    local_a8 = 0xffffffff;
    local_178 = CONCAT44(0x3f800000,(undefined4)local_178);
    local_d4 = 0xffffffff;
    if (param_2[1] != 0) {
      uVar1 = *param_2;
      uVar3 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar2 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar2 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar2 + 2) != param_2[1] || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) {
          uVar3 = 0;
        }
        else {
          uVar3 = *puVar2;
        }
      }
    }
    FUN_140871de8(&local_c0,uVar3);
    local_cb = 1;
    *(undefined2 *)(param_1 + 3) = 0x100;
    _Dst = (void *)FUN_14001cc68(0x100,0);
    *param_1 = _Dst;
    memcpy(_Dst,&local_178,0xb8);
    *(undefined8 *)((longlong)_Dst + 0xb8) = local_c0;
    *(undefined8 *)((longlong)_Dst + 0xc0) = local_b8;
    *(undefined8 *)((longlong)_Dst + 200) = uStack_b0;
    *(undefined4 *)((longlong)_Dst + 0xd0) = local_a8;
    *(undefined1 *)((longlong)_Dst + 0xd4) = local_a4;
    *(undefined8 *)((longlong)_Dst + 0xf8) = local_80;
    *(undefined4 *)((longlong)_Dst + 0xe8) = local_90;
    *(undefined4 *)((longlong)_Dst + 0xec) = uStack_8c;
    *(undefined4 *)((longlong)_Dst + 0xf0) = uStack_88;
    *(undefined4 *)((longlong)_Dst + 0xf4) = uStack_84;
    *(undefined4 *)((longlong)_Dst + 0xd8) = local_a0;
    *(undefined4 *)((longlong)_Dst + 0xdc) = uStack_9c;
    *(undefined4 *)((longlong)_Dst + 0xe0) = uStack_98;
    *(undefined4 *)((longlong)_Dst + 0xe4) = uStack_94;
  }
  else {
    if ((char)param_2[8] != '\x04') {
      *(undefined2 *)(param_1 + 3) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_142b4967e;
    }
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_158 = *(undefined8 *)param_2;
    uStack_150 = *(undefined8 *)(param_2 + 2);
    local_148 = *(undefined8 *)(param_2 + 4);
    uStack_60 = (undefined4)DAT_14c8462c0;
    uStack_5c = DAT_14c8462c0._4_4_;
    uStack_58 = (undefined4)DAT_14c8462c8;
    uStack_54 = DAT_14c8462c8._4_4_;
    uStack_50 = DAT_14c8462d0;
    *(undefined2 *)(param_1 + 3) = 0x100;
    puVar2 = (undefined8 *)FUN_14001cc68(0x100,0);
    *param_1 = puVar2;
    *puVar2 = 0x3f80000000000000;
    puVar2[7] = local_148;
    puVar2[5] = local_158;
    puVar2[6] = uStack_150;
    puVar2[3] = local_168;
    puVar2[4] = uStack_160;
    puVar2[1] = local_178;
    puVar2[2] = uStack_170;
    *(undefined4 *)(puVar2 + 8) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar2 + 0x44) = local_78._4_4_;
    *(undefined4 *)(puVar2 + 9) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_70._4_4_;
    *(undefined4 *)(puVar2 + 10) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar2 + 0x54) = local_68._4_4_;
    *(undefined4 *)(puVar2 + 0xb) = uStack_60;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = uStack_5c;
    puVar2[0xc] = CONCAT44(uStack_54,uStack_58);
    puVar2[0xd] = uStack_50;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xa4) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0xac) = 0x100;
    *(undefined8 *)((longlong)puVar2 + 0xae) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xb6) = 0;
    puVar2[0x19] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
    *(undefined1 *)((longlong)puVar2 + 0xd4) = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
  }
  *(undefined1 *)(param_1 + 4) = 0x19;
LAB_142b4967e:
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b497cc FUN_142b497cc body=87 status=ok
// SIG undefined FUN_142b497cc(void)

longlong FUN_142b497cc(longlong param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_2 + 4) == '\x12') {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,param_1,*param_2,1);
    uVar2 = 0x22;
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  *(undefined2 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  return param_1;
}



// FUNCTION 142b49908 FUN_142b49908 body=104 status=ok
// SIG undefined FUN_142b49908(void)

void FUN_142b49908(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    return;
  }
  FUN_1446dd670(param_1 + 3,iVar1,0);
  memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  return;
}



// FUNCTION 142b4998e FUN_142b4998e body=1205 status=ok
// SIG undefined FUN_142b4998e(void)

uint * FUN_142b4998e(uint *param_1,longlong *param_2,byte param_3)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *_Src;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  uVar4 = DAT_14c9ab180;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar10 = (uint)param_3;
  if (uVar10 < 0xe) {
    if (uVar10 - 6 < 2) {
LAB_142b49aae:
      uVar5 = (ulonglong)(uVar10 * 0x120);
      uVar10 = *(uint *)((longlong)&DAT_14c9a8510 + uVar5);
      uVar4 = (ushort)uVar10;
      *(ushort *)(param_1 + 6) = uVar4;
      puVar6 = param_1;
      if (0x18 < uVar4) {
        puVar6 = (uint *)FUN_14001cc68(uVar10 & 0xffff);
        *(uint **)param_1 = puVar6;
      }
      if (*(code **)((longlong)&DAT_14c9a85a8 + uVar5) == (code *)0x0) {
        memset(puVar6,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85a8 + uVar5))();
      }
      *(byte *)(param_1 + 8) = param_3;
      puVar6 = (uint *)*param_2;
      if (((((puVar6[1] == 0) || (uVar10 = *puVar6, (int)uVar10 < 0)) ||
           (DAT_14c9647dc <= (int)uVar10)) ||
          ((plVar11 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar11 == (longlong *)0x0 || (*(uint *)(plVar11 + 2) != puVar6[1])))) ||
         (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar8 = *plVar11, lVar8 == 0)))) {
        if (*(longlong *)(puVar6 + 2) != 0) {
          lVar8 = FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar3 == '\0')) {
            if (lVar8 != 0) {
              uVar10 = *(uint *)(lVar8 + 0xc);
              goto LAB_142b49d54;
            }
            puVar6[0] = 0;
            puVar6[1] = 0;
          }
          else {
            uVar10 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
LAB_142b49d54:
              *puVar6 = uVar10;
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              uVar10 = *(uint *)(lVar7 + 0x10);
              if (*(uint *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar12 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar12) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                }
                LOCK();
                uVar10 = *(uint *)(lVar7 + 0x10);
                bVar12 = uVar10 == 0;
                if (bVar12) {
                  *(uint *)(lVar7 + 0x10) = uVar9;
                  uVar10 = 0;
                }
                UNLOCK();
                if (bVar12) {
                  uVar10 = uVar9;
                }
              }
              puVar6[1] = uVar10;
            }
            if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_142b49b5d;
          }
        }
        *param_1 = 0;
        uVar10 = 0;
      }
      else {
LAB_142b49b5d:
        iVar2 = DAT_14c9647dc;
        uVar10 = *(uint *)(lVar8 + 0xc);
        *param_1 = uVar10;
        if ((int)uVar10 < iVar2) {
          lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar10 = *(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar9);
          }
          LOCK();
          uVar10 = *(uint *)(lVar8 + 0x10);
          bVar12 = uVar10 == 0;
          if (bVar12) {
            *(uint *)(lVar8 + 0x10) = uVar9;
            uVar10 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar10 = uVar9;
          }
        }
      }
      param_1[1] = uVar10;
      goto LAB_142b49dae;
    }
    if (uVar10 == 1) {
      lVar8 = *(longlong *)(*param_2 + 8);
      *(undefined2 *)(param_1 + 6) = 4;
      *param_1 = (uint)(lVar8 != 0);
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_142b49dae;
    }
    if (uVar10 != 8) {
LAB_142b49c15:
      uVar10 = (uint)DAT_14c9ab188;
      *(ushort *)(param_1 + 6) = DAT_14c9ab180;
      if (uVar4 < 0x19) {
        _Src = &DAT_14c9ab168;
        puVar6 = param_1;
      }
      else {
        puVar6 = (uint *)FUN_14001cc68(uVar4,0);
        *(uint **)param_1 = puVar6;
        _Src = DAT_14c9ab168;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar10 * 0x120));
      if (pcVar1 == (code *)0x0) {
        memcpy(puVar6,_Src,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar10 * 0x120)));
      }
      else {
        (*pcVar1)();
      }
      *(byte *)(param_1 + 8) = DAT_14c9ab188;
      goto LAB_142b49dae;
    }
    FUN_14475cc44(*param_2 + 8,&local_48);
    plVar11 = local_48;
    *(undefined2 *)(param_1 + 6) = 0x10;
    param_1[0] = 0;
    param_1[1] = 0;
    lVar8 = (longlong)(int)(uint)uStack_40;
    param_1[2] = (uint)uStack_40;
    if (lVar8 == 0) {
      param_1[3] = 0;
    }
    else {
      FUN_1446dd670(param_1,uStack_40 & 0xffffffff,0);
      memcpy(*(void **)param_1,plVar11,lVar8 * 2);
    }
    *(undefined1 *)(param_1 + 8) = 8;
    plVar11 = local_48;
  }
  else {
    if (uVar10 == 0xe) goto LAB_142b49aae;
    if (uVar10 == 0x12) {
      local_58[0] = *(longlong **)(*param_2 + 0x10);
      if (local_58[0] == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        uStack_40 = 0;
        uStack_40._0_4_ = 0;
      }
      else {
        FUN_1400021e4(local_58,&local_48);
      }
      iVar2 = (uint)uStack_40 + -1;
      if ((uint)uStack_40 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(param_1,iVar2,local_48,1);
      *(undefined2 *)(param_1 + 6) = 8;
      *(undefined1 *)(param_1 + 8) = 0x12;
      plVar11 = local_48;
    }
    else {
      if (uVar10 != 0x1b) goto LAB_142b49c15;
      FUN_14475cc44(*param_2 + 8,local_58);
      FUN_140233b1a(&local_48,local_58);
      *(undefined2 *)(param_1 + 6) = 0x10;
      *(longlong **)param_1 = local_48;
      if (local_48 == (longlong *)0x0) {
        param_1[2] = (uint)uStack_40;
        *(undefined1 *)(param_1 + 8) = 0x1b;
        plVar11 = local_58[0];
      }
      else {
        (**(code **)(*local_48 + 8))();
        param_1[2] = (uint)uStack_40;
        *(undefined1 *)(param_1 + 8) = 0x1b;
        plVar11 = local_58[0];
        if (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + 0x10))();
          plVar11 = local_58[0];
        }
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8(plVar11);
  }
LAB_142b49dae:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b49e60 FUN_142b49e60 body=651 status=ok
// SIG undefined FUN_142b49e60(void)

longlong * FUN_142b49e60(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  ushort uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *_Dst;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  uVar3 = DAT_14c9ab180;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = *(byte *)(param_2 + 4);
  if ((bVar1 - 6 < 2) || (bVar1 == 0xe)) {
    uVar5 = FUN_14070d842(param_2);
    FUN_1400bbfc4(&local_78,uVar5);
    pvVar4 = local_68;
    local_58 = 0;
    local_50 = (undefined4)local_78;
    uStack_4c = local_78._4_4_;
    uStack_48 = (undefined4)uStack_70;
    uStack_44 = uStack_70._4_4_;
    local_40 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_60;
    local_38 = (int)uStack_60;
    if (lVar7 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,uStack_60 & 0xffffffff,0);
      memcpy(local_40,pvVar4,lVar7 * 2);
    }
    *(undefined2 *)(param_1 + 3) = 0x28;
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,0);
    *param_1 = (longlong)puVar6;
    *puVar6 = local_58;
  }
  else {
    if (bVar1 != 8) {
      uVar8 = (uint)DAT_14c9ab188;
      *(ushort *)(param_1 + 3) = DAT_14c9ab180;
      if (uVar3 < 0x19) {
        puVar6 = &DAT_14c9ab168;
        _Dst = param_1;
      }
      else {
        _Dst = (longlong *)FUN_14001cc68(uVar3,0);
        *param_1 = (longlong)_Dst;
        puVar6 = DAT_14c9ab168;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar8 * 0x120));
      if (pcVar2 == (code *)0x0) {
        memcpy(_Dst,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar8 * 0x120))
              );
      }
      else {
        (*pcVar2)();
      }
      *(byte *)(param_1 + 4) = DAT_14c9ab188;
      goto LAB_142b4a0c6;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = *param_2;
    local_50 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_50 = 0;
    }
    FUN_14475bf92(&local_78,&local_58);
    pvVar4 = local_68;
    local_58 = 0;
    local_50 = (undefined4)local_78;
    uStack_4c = local_78._4_4_;
    uStack_48 = (undefined4)uStack_70;
    uStack_44 = uStack_70._4_4_;
    local_40 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_60;
    local_38 = (int)uStack_60;
    if (lVar7 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,uStack_60 & 0xffffffff,0);
      memcpy(local_40,pvVar4,lVar7 * 2);
    }
    *(undefined2 *)(param_1 + 3) = 0x28;
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,0);
    *param_1 = (longlong)puVar6;
    *puVar6 = local_58;
  }
  pvVar4 = local_40;
  *(int *)(puVar6 + 1) = local_50;
  *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_4c;
  *(undefined4 *)(puVar6 + 2) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_44;
  puVar6[3] = 0;
  lVar7 = (longlong)local_38;
  *(int *)(puVar6 + 4) = local_38;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 3,local_38,0);
    memcpy((void *)puVar6[3],pvVar4,lVar7 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 0x1c;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_142b4a0c6:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4a30e FUN_142b4a30e body=152 status=ok
// SIG undefined FUN_142b4a30e(void)

undefined8 * FUN_142b4a30e(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ushort uVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  uint uVar4;
  
  uVar3 = DAT_14c9ab180;
  if (param_3 == '\x12') {
    uVar1 = *param_2;
    *(undefined2 *)(param_1 + 3) = 8;
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 4) = 0x12;
  }
  else {
    uVar4 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 3) = DAT_14c9ab180;
    if (uVar3 < 0x19) {
      _Src = &DAT_14c9ab168;
      _Dst = param_1;
    }
    else {
      _Dst = (undefined8 *)FUN_14001cc68(uVar3,0);
      *param_1 = _Dst;
      _Src = DAT_14c9ab168;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar4 * 0x120)));
    }
    else {
      (*pcVar2)();
    }
    *(byte *)(param_1 + 4) = DAT_14c9ab188;
  }
  return param_1;
}



// FUNCTION 142b4a3ae FUN_142b4a3ae body=159 status=ok
// SIG undefined FUN_142b4a3ae(void)

undefined8 * FUN_142b4a3ae(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ushort uVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  uint uVar4;
  
  uVar3 = DAT_14c9ab180;
  if (*(char *)(param_2 + 4) == '\x12') {
    uVar1 = *param_2;
    *(undefined2 *)(param_1 + 3) = 0x18;
    *param_1 = uVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 4) = 0x1d;
  }
  else {
    uVar4 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 3) = DAT_14c9ab180;
    if (uVar3 < 0x19) {
      _Src = &DAT_14c9ab168;
      _Dst = param_1;
    }
    else {
      _Dst = (undefined8 *)FUN_14001cc68(uVar3,0);
      *param_1 = _Dst;
      _Src = DAT_14c9ab168;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar4 * 0x120)));
    }
    else {
      (*pcVar2)();
    }
    *(byte *)(param_1 + 4) = DAT_14c9ab188;
  }
  return param_1;
}



// FUNCTION 142b4a44e FUN_142b4a44e body=489 status=ok
// SIG undefined FUN_142b4a44e(void)

undefined8 FUN_142b4a44e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 in_RAX;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined **ppuVar11;
  bool bVar12;
  
  lVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),param_1 == (longlong *)0x0);
  if (param_2 == (longlong *)0x0 || param_1 == (longlong *)0x0) {
    bVar12 = param_1 == (longlong *)0x0 && param_2 == (longlong *)0x0;
    goto LAB_142b4a59a;
  }
  lVar8 = *param_2;
  lVar1 = param_2[1];
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar9 = *plVar2;
    pcVar3 = *(code **)(lVar9 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_142b4a4e6;
      lVar9 = *plVar2;
    }
    pcVar3 = *(code **)(lVar9 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar11 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar11 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar11 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar11);
  }
LAB_142b4a4e6:
  lVar9 = *param_1;
  lVar4 = param_1[1];
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar10 = *plVar2;
    pcVar3 = *(code **)(lVar10 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      if (cVar5 == '\0') goto LAB_142b4a551;
      lVar10 = *plVar2;
    }
    pcVar3 = *(code **)(lVar10 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar11 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar11 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar11 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar7 = FUN_144aff48c(ppuVar11);
  }
LAB_142b4a551:
  if (iVar7 != iVar6) {
    return 0;
  }
  if (lVar9 != lVar8) {
    return 0;
  }
  if (lVar4 == lVar1) {
    return 1;
  }
  if (lVar1 == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  iVar6 = *(int *)(lVar1 + 0x38);
  iVar7 = *(int *)(lVar4 + 0x38);
  if ((iVar6 <= iVar7) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar1 + 0x30)) {
    return 1;
  }
  if (iVar6 < iVar7) {
    return 0;
  }
  lVar8 = *(longlong *)(lVar1 + 0x30);
  bVar12 = *(longlong *)(lVar8 + (longlong)iVar7 * 8) == lVar4 + 0x30;
LAB_142b4a59a:
  return CONCAT71((int7)((ulonglong)lVar8 >> 8),bVar12);
}



// FUNCTION 142b4a638 FUN_142b4a638 body=471 status=ok
// SIG undefined FUN_142b4a638(void)

undefined8 FUN_142b4a638(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined **ppuVar11;
  
  lVar5 = DAT_14c9ab258;
  lVar4 = DAT_14c9ab250;
  iVar7 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((DAT_14c9ab258 != 0) &&
     (plVar1 = *(longlong **)(DAT_14c9ab258 + 0xb8), plVar1 != (longlong *)0x0)) {
    lVar9 = *plVar1;
    pcVar2 = *(code **)(lVar9 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar6 = (*pcVar2)(plVar1);
      if (cVar6 == '\0') goto LAB_142b4a6c7;
      lVar9 = *plVar1;
    }
    pcVar2 = *(code **)(lVar9 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar11 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar11 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar11 = (undefined **)(*pcVar2)(plVar1);
    }
    iVar7 = FUN_144aff48c(ppuVar11);
  }
LAB_142b4a6c7:
  lVar9 = *param_1;
  lVar3 = param_1[1];
  iVar8 = 0;
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xb8), plVar1 != (longlong *)0x0)) {
    lVar10 = *plVar1;
    pcVar2 = *(code **)(lVar10 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar6 = (*pcVar2)(plVar1);
      if (cVar6 == '\0') goto LAB_142b4a731;
      lVar10 = *plVar1;
    }
    pcVar2 = *(code **)(lVar10 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar11 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar11 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar11 = (undefined **)(*pcVar2)(plVar1);
    }
    iVar8 = FUN_144aff48c(ppuVar11);
  }
LAB_142b4a731:
  if (iVar8 != iVar7) {
    return 0;
  }
  if (lVar9 != lVar4) {
    return 0;
  }
  if (lVar3 == lVar5) {
    return 1;
  }
  if (lVar5 != 0) {
    if (lVar3 == 0) {
      return 0;
    }
    iVar7 = *(int *)(lVar5 + 0x38);
    iVar8 = *(int *)(lVar3 + 0x38);
    if ((iVar7 <= iVar8) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) == lVar5 + 0x30)) {
      return 1;
    }
    if (iVar7 < iVar8) {
      return 0;
    }
    return CONCAT71((int7)((ulonglong)*(longlong *)(lVar5 + 0x30) >> 8),
                    *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar8 * 8) == lVar3 + 0x30
                   );
  }
  return 0;
}



// FUNCTION 142b4a810 FUN_142b4a810 body=478 status=ok
// SIG undefined FUN_142b4a810(void)

void FUN_142b4a810(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar5 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  iVar2 = *(int *)(param_1 + 0x60);
  iVar9 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  if (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x4c) < iVar9 >> 2) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar14 = 1;
      iVar11 = 0;
      iVar9 = 0;
      uVar12 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x30);
      }
      uVar10 = *puVar13;
      if (uVar10 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        uVar12 = 0;
        uVar14 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar14 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar14 == uVar12) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar10 = puVar13[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar10 == 0);
      }
      else {
        iVar11 = 0;
        uVar12 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
    }
    if (iVar9 != iVar2) {
      uVar10 = 0xffffffff;
      do {
        lVar15 = *(longlong *)(param_1 + 0x20);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar15 = param_1;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar15 + 0xc + (longlong)iVar9 * 0x10) * 4) =
             0xffffffff;
        uVar10 = ~(uint)uVar14 & uVar10;
        puVar13 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x30);
        }
        iVar3 = *(int *)(param_1 + 0x40);
        iVar9 = (int)uVar12;
        lVar15 = (longlong)iVar9;
        uVar6 = puVar13[lVar15] & uVar10;
        if (uVar6 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar9) {
            iVar8 = iVar9;
          }
          lVar4 = lVar15;
          if (iVar9 < iVar7) {
            lVar16 = 0;
            do {
              uVar6 = puVar13[lVar15 + lVar16 + 1];
              if (uVar6 != 0) {
                uVar12 = (ulonglong)(iVar9 + (int)lVar16 + 1);
                uVar10 = 0xffffffff;
                goto LAB_142b4a9af;
              }
              iVar11 = iVar11 + 0x20;
              lVar16 = lVar16 + 1;
              uVar10 = 0xffffffff;
              lVar4 = (longlong)iVar8;
            } while (iVar8 - lVar15 != lVar16);
          }
          uVar12 = lVar4 + 1U & 0xffffffff;
          iVar9 = iVar3;
        }
        else {
LAB_142b4a9af:
          uVar14 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar14 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar9 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
      } while (iVar9 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar15 * 4) = 0xffffffff;
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 142b4a9ee FUN_142b4a9ee body=672 status=ok
// SIG undefined FUN_142b4a9ee(void)

void FUN_142b4a9ee(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 0x60);
  if (uVar10 == 0) {
    return;
  }
  lVar2 = param_1 + 0x50;
  if (uVar10 == 1) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar1,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_142b4aa6b;
  }
  uVar4 = 0;
  do {
    lVar9 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar9 = lVar2;
    }
    *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x60) + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar10 != uVar4);
LAB_142b4aa6b:
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 == 0) {
    uVar5 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar6 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x30);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar5 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar14 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar10 = puVar13[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar6 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar9 = param_1;
      }
      lVar17 = (longlong)iVar16 * 0x10;
      uVar3 = *(undefined8 *)(lVar9 + lVar17);
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar18 = (uint)uVar3 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar3 << 0x10 | uVar18) + (int)((ulonglong)uVar3 >> 0x20) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4)) &
              (longlong)*(int *)(param_1 + 0x60) - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0xc + lVar17) = iVar7;
      lVar15 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar15 = lVar2;
      }
      *(undefined4 *)(lVar9 + 8 + lVar17) =
           *(undefined4 *)(lVar15 + ((longlong)*(int *)(param_1 + 0x60) - 1U & uVar8) * 4);
      lVar9 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar9 = lVar2;
      }
      *(int *)(lVar9 + ((longlong)iVar7 & (longlong)*(int *)(param_1 + 0x60) - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x30);
      }
      iVar7 = *(int *)(param_1 + 0x40);
      iVar16 = (int)uVar5;
      lVar9 = (longlong)iVar16;
      uVar4 = puVar13[lVar9] & uVar10;
      if (uVar4 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar13[lVar9 + lVar15 + 1];
          if (uVar4 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar6 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 142b4ac8e FUN_142b4ac8e body=1119 status=ok
// SIG undefined FUN_142b4ac8e(void)

void FUN_142b4ac8e(longlong param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  uint uVar20;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar13 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar13 + 1;
    if (*(int *)(param_1 + 0x2c) == iVar13) {
      FUN_142b32a36(param_1,iVar13);
    }
    iVar6 = *(int *)(param_1 + 0x40);
    if (iVar6 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar10 = iVar6 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    lVar8 = param_1 + 0x30;
    iVar7 = iVar6 + 1;
    iVar14 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    if (iVar14 >> 5 == iVar10) {
      *(int *)(param_1 + 0x40) = iVar7;
    }
    else {
      if (*(int *)(param_1 + 0x44) <= iVar6) {
        iVar10 = iVar6;
        if (iVar6 + 0x20U < 0x40) {
          iVar7 = 0x20;
        }
        else {
          uVar17 = iVar6 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x44) + 0x1fU < 0x40) {
            uVar20 = 4;
            if (4 < uVar17) {
              uVar20 = uVar17;
            }
          }
          else {
            uVar20 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar4 = (ulonglong)(uVar20 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar15 = (uint)(uVar4 + 0xf);
              if (uVar20 < 0x1ffd) {
                uVar4 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar15 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar5 = (&DAT_14c841e00)[uVar15 >> 4];
                  uVar12 = 0x32;
                  if (0x32 < bVar5) {
                    uVar12 = (ulonglong)bVar5;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar5;
                  do {
                    uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_142b4b014;
                    lVar3 = uVar12 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar3 != 0x33);
                }
                uVar4 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar4 = (ulonglong)DAT_14c841df8;
                }
                uVar4 = -uVar4 & (uVar9 + uVar4) - 1;
              }
            }
            else {
              uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
              iVar10 = *(int *)(param_1 + 0x40);
            }
          }
LAB_142b4b014:
          iVar2 = (int)(uVar4 >> 2);
          iVar7 = -0x20;
          if ((int)uVar17 <= iVar2) {
            iVar7 = iVar2 << 5;
          }
        }
        *(int *)(param_1 + 0x44) = iVar7;
        FUN_14008f53c(lVar8,iVar10);
        iVar7 = *(int *)(param_1 + 0x40) + 1;
      }
      iVar10 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar10 = iVar7;
      }
      *(int *)(param_1 + 0x40) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar3 = lVar8;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar3 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)(lVar3 + (longlong)(iVar10 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar13;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x38);
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar8 = param_1;
    }
    iVar13 = *(int *)(param_1 + 0x48);
    lVar3 = (longlong)iVar13;
    iVar6 = *(int *)(lVar8 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 0x48) = iVar6;
    iVar10 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar6 * 0x10) = 0xffffffff;
    }
  }
  uVar17 = 1 << ((byte)iVar13 & 0x1f);
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar8 = param_1 + 0x30;
  }
  iVar6 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar6 = iVar13;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | uVar17;
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar8 = param_1;
  }
  lVar3 = lVar3 * 0x10;
  lVar11 = *param_3;
  *(longlong *)(lVar8 + lVar3) = lVar11;
  *(undefined4 *)(lVar8 + 8 + lVar3) = 0xffffffff;
  uVar20 = (uint)((ulonglong)lVar11 >> 0x10);
  uVar15 = (uint)lVar11 & 0xffff;
  uVar20 = ((uint)lVar11 << 0x10 | uVar15) + (int)((ulonglong)lVar11 >> 0x20) +
           (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar15 >> 4);
  uVar15 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x4c);
  if (1 < uVar15) {
    lVar16 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x58);
    }
    iVar10 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar20) * 4);
    if (iVar10 != -1) {
      lVar16 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar16 = param_1;
      }
      do {
        if (*(longlong *)(lVar16 + (longlong)iVar10 * 0x10) == lVar11) {
          if (*(int *)(param_1 + 0x4c) != 0) {
            *(int *)(lVar16 + (longlong)*(int *)(param_1 + 0x48) * 0x10) = iVar13;
          }
          *(undefined4 *)(lVar16 + (longlong)iVar13 * 0x10) = 0xffffffff;
          if (*(int *)(param_1 + 0x4c) < 1) {
            uVar19 = 0xffffffff;
          }
          else {
            uVar19 = *(undefined4 *)(param_1 + 0x48);
          }
          *(undefined4 *)((longlong)iVar13 * 0x10 + lVar16 + 4) = uVar19;
          *(int *)(param_1 + 0x48) = iVar13;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          lVar8 = param_1 + 0x30;
          if (*(longlong *)(param_1 + 0x38) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x38);
          }
          puVar1 = (uint *)(lVar8 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~uVar17;
          iVar13 = iVar10;
          goto LAB_142b4aed2;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x10 + lVar16 + 8);
      } while (iVar10 != -1);
    }
  }
  uVar4 = (ulonglong)(((uVar15 >> 1) - 1) + (uint)(uVar15 >> 1 == 0)) * 2 + 1;
  lVar11 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  iVar6 = 1 << ((byte)lVar11 & 0x1f);
  if (uVar15 < 4) {
    iVar6 = 1;
  }
  if (((int)uVar15 < 1) || (iVar6 <= *(int *)(param_1 + 0x60))) {
    uVar20 = *(int *)(param_1 + 0x60) - 1U & uVar20;
    *(uint *)(lVar8 + lVar3 + 0xc) = uVar20;
    lVar11 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar11 = param_1 + 0x50;
    }
    *(undefined4 *)(lVar8 + lVar3 + 8) =
         *(undefined4 *)
          (lVar11 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar20) * 4);
    lVar8 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar8 = param_1 + 0x50;
    }
    *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar20) * 4) = iVar13
    ;
  }
  else {
    *(int *)(param_1 + 0x60) = iVar6;
    FUN_142b4a9ee(param_1);
  }
LAB_142b4aed2:
  *param_2 = iVar13;
  return;
}



// FUNCTION 142b4b0fc FUN_142b4b0fc body=57 status=ok
// SIG undefined FUN_142b4b0fc(void)

undefined8 * FUN_142b4b0fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1cc820;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b4b2b4 FUN_142b4b2b4 body=183 status=ok
// SIG undefined FUN_142b4b2b4(void)

void FUN_142b4b2b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e170a0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a1cc820;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 142b4b36c FUN_142b4b36c body=183 status=ok
// SIG undefined FUN_142b4b36c(void)

void FUN_142b4b36c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e170a0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a1cc820;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 142b4b424 FUN_142b4b424 body=222 status=ok
// SIG undefined FUN_142b4b424(void)

void FUN_142b4b424(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e170a0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14a1cc820;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->ContentionCount = DVar4;
  p_Var2->Flags = DVar5;
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var2->SpareWORD = (short)((uint)uVar6 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var2[1].ProcessLocksList.Flink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].CriticalSection,iVar1,0);
    memcpy(p_Var2[1].CriticalSection,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b4b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b4b50c FUN_142b4b50c body=268 status=ok
// SIG undefined FUN_142b4b50c(void)

undefined8 FUN_142b4b50c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b4b612;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142b4b612;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_142b4b612:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b4b5c7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_142b4b61a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_142b4b5c7;
    }
  }
  uVar6 = 0;
LAB_142b4b5c7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4b61a FUN_142b4b61a body=367 status=ok
// SIG undefined FUN_142b4b61a(void)

void FUN_142b4b61a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_40;
  undefined4 *local_38;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *param_1;
  if ((*(int *)(lVar5 + 0x88) != 0) && (*(char *)(lVar5 + 0x90) != '\0')) goto LAB_142b4b764;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_142b4b783:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_142b4b783;
      lVar4 = *plVar3;
    }
  }
  if (((((*(int *)((longlong)param_1 + 0x14) != 0) &&
        (uVar1 = *(uint *)(param_1 + 2), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0x14))))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((lVar4 != 0 && (lVar2 = *plVar3, lVar2 != 0))))
     )) {
    local_48 = &local_28;
    local_38 = &local_2c;
    local_2c = 0;
    local_40 = lVar5;
    local_28 = lVar4;
    if ((longlong)*(int *)(lVar2 + 0x88) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x80);
      lVar4 = (longlong)*(int *)(lVar2 + 0x88) * 0xc0;
      do {
        FUN_1414b01ee(&local_48,lVar5);
        lVar5 = lVar5 + 0xc0;
        lVar4 = lVar4 + -0xc0;
      } while (lVar4 != 0);
    }
  }
LAB_142b4b764:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4b7de FUN_142b4b7de body=5677 status=ok
// SIG undefined FUN_142b4b7de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4b7de(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14c9a841c);
  if (cVar1 == '\0') {
    _DAT_14c9a841c = 0;
    uRam000000014c9a8424 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14c9ab028,L"Owner",1);
  local_48 = "AssetRegistry";
  uStack_40 = 0xd;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14c9a8430 = (ulonglong)uVar2;
  _DAT_14c9a8438 = 0;
  uRam000000014c9a8440 = 0;
  _DAT_14c9a8448 = 0;
  DAT_14c9a8450 = 0;
  uRam000000014c9a8458 = 0;
  FUN_1446ddda2(&DAT_14c9a8438,"TargetType",0);
  atexit((_func_5014 *)&LAB_142b45ea0);
  FUN_1446f470e(&local_48,L"Value",1);
  FUN_1446dcdd4(&DAT_14c9a8460,&local_48);
  atexit((_func_5014 *)&LAB_142b45eb1);
  local_48 = "bone";
  uStack_40 = 4;
  uStack_3c = uStack_3c & 0xffffff00;
  FUN_14001a6c0(&local_48,1);
  _DAT_14c9a8488 = L"Numbers";
  _DAT_14c9a8490 = 7;
  _DAT_14c9a8498 = L"Actors";
  _DAT_14c9a84a0 = 6;
  _DAT_14c9a84a8 = L"NavigationTargets";
  _DAT_14c9a84b0 = 0x11;
  _DAT_14c9a84b8 = L"RotationTargets";
  _DAT_14c9a84c0 = 0xf;
  _DAT_14c9a84c8 = L"GpsResults";
  _DAT_14c9a84d0 = 10;
  _DAT_14c9a84d8 = L"Resolvers";
  _DAT_14c9a84e0 = 9;
  _DAT_14c9a84e8 = L"Outputs";
  _DAT_14c9a84f0 = 7;
  DAT_14c9a8500 = 0;
  FUN_142b45fce();
  atexit(FUN_142b460a0);
  DAT_14c9ab180 = 0;
  DAT_14c9ab188 = 0;
  atexit(FUN_142b460d7);
  local_48 = (char *)0x70ab48e67af66887;
  uStack_40 = 0xb0676c56;
  uStack_3c = 0xf1b0a457;
  _DAT_14c9aad90 = 0x7af66887;
  uRam000000014c9aad94 = 0x70ab48e6;
  uRam000000014c9aad98 = 0xb0676c56;
  uRam000000014c9aad9c = 0xf1b0a457;
  FUN_141005458(&local_48,3,L"GbxValueVersion",0);
  atexit((_func_5014 *)&LAB_142b46139);
  _DAT_14c9aada0 = 0;
  uRam000000014c9aada8 = 0;
  _DAT_14c9aadb0 = 0;
  DAT_14c9aadb8 = 0;
  uRam000000014c9aadc0 = 0;
  FUN_1446ddda2(&DAT_14c9aada0,&DAT_149e54500,0);
  atexit((_func_5014 *)&LAB_142b46145);
  _DAT_14c9aadc8 = 0;
  uRam000000014c9aadd0 = 0;
  _DAT_14c9aadd8 = 0;
  DAT_14c9aade0 = 0;
  uRam000000014c9aade8 = 0;
  FUN_1446ddda2(&DAT_14c9aadc8,"Value",0);
  atexit((_func_5014 *)&LAB_142b46156);
  _DAT_14c9aadf8 = &LAB_142b4625e;
  DAT_14c9aae00 = 1;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a8630 = 4;
    _DAT_14c9a8650 = FUN_1461f9184;
    _DAT_14c9a8700 = &LAB_1408d7820;
    _DAT_14c9a8740 = &LAB_1470ef7d4;
    _DAT_14c9a8638 = 0x3e99999a;
    uRam000000014c9a8640 = 0x3f80000000000000;
    DAT_14c9a86c0 = 1;
    _DAT_14c9a8680 = &LAB_142b462da;
    _DAT_14c9a8690 = &LAB_142b462ec;
    DAT_14c9a8688 = &LAB_142b46360;
    _DAT_14c9a8698 = &LAB_142b46370;
    DAT_14c9a8750 = 4;
    _DAT_14c9a8770 = FUN_1461f5288;
    _DAT_14c9a8820 = &LAB_142b464a4;
    _DAT_14c9a8860 = &LAB_1470efb4a;
    _DAT_14c9a8758 = 0x3f451eb83c5e69ad;
    uRam000000014c9a8760 = 0x3f8000003edbf5b6;
    DAT_14c9a87e0 = 1;
    DAT_14c9a8754 = 1;
    _DAT_14c9a87a0 = &LAB_142b464ac;
    _DAT_14c9a87b0 = &LAB_142b464be;
    DAT_14c9a8870 = 4;
    _DAT_14c9a8890 = FUN_1461f5556;
    _DAT_14c9a8940 = &LAB_142b46584;
    _DAT_14c9a8980 = &LAB_1470efec0;
    _DAT_14c9a8878 = 0x3f8000003eb72021;
    uRam000000014c9a8880 = 0x3f8000003d75c28f;
    DAT_14c9a8900 = 1;
    DAT_14c9a8874 = 1;
    _DAT_14c9a88c0 = &LAB_142b46596;
    _DAT_14c9a88d0 = &LAB_142b465a8;
    DAT_14c9a9cb0 = 8;
    _DAT_14c9a9cd0 = FUN_1461f5824;
    _DAT_14c9a9d80 = &LAB_1470f023e;
    _DAT_14c9a9dc0 = &LAB_1470f0250;
    _DAT_14c9a9cb8 = 0x3f451eb83eb72021;
    uRam000000014c9a9cc0 = 0x3f8000003d75c28f;
    DAT_14c9a9d40 = 1;
    DAT_14c9a9cb4 = 1;
    DAT_14c9a9d00 = &LAB_142b46690;
    _DAT_14c9a9d10 = &LAB_142b4669a;
  }
  else {
    _DAT_14c9aadf0 = DAT_14c9a84f8;
    _DAT_14c9aae08 = &DAT_14c9aadf0;
    _DAT_14c9aae20 = &DAT_14c9aae08;
    _DAT_14c9aae38 = &DAT_14c9aae20;
    DAT_14c9a84f8 = &DAT_14c9aae38;
  }
  DAT_14c9aae30 = 3;
  _DAT_14c9aae28 = &LAB_142b4651a;
  DAT_14c9aae18 = 2;
  _DAT_14c9aae10 = &LAB_142b4643a;
  _DAT_14c9aae40 = &LAB_142b46626;
  DAT_14c9aae48 = 0x15;
  DAT_14c9ab228 = 0;
  DAT_14c9ab230 = 0;
  DAT_14c9ab238 = 0;
  _DAT_14c9ab190 = 0x47efffffe0000000;
  _DAT_14c9ab198 = 0x47efffffe0000000;
  DAT_14c9ab1a0 = 0x47efffffe0000000;
  _DAT_14c9aae58 = &LAB_142b46708;
  DAT_14c9aae60 = 4;
  if (DAT_14c9aad88 == '\0') {
    _DAT_14c9aae50 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9aae50;
  }
  else {
    DAT_14c9a8990 = 0x18;
    DAT_14c9a8a50 = &DAT_144a405a8;
    DAT_14c9a8a30 = &LAB_1447c3740;
    _DAT_14c9a8a38 = &LAB_140882150;
    _DAT_14c9a8a40 = &LAB_142b467c2;
    _DAT_14c9a8a48 = &LAB_1470f026a;
    _DAT_14c9a89b0 = FUN_1461faf74;
    _DAT_14c9a89a8 = &LAB_1403f617c;
    _DAT_14c9a8a60 = FUN_14068e0f2;
    _DAT_14c9a8aa0 = FUN_1470f05e0;
    DAT_14c9a8a28 = &LAB_142b467e0;
    _DAT_14c9a8998 = 0x3f175c7d3f800000;
    uRam000000014c9a89a0 = 0x3f8000003c87442c;
    DAT_14c9a8a20 = 1;
    DAT_14c9a8994 = 0x1c;
    DAT_14c9a89e0 = &LAB_142b467f6;
    _DAT_14c9a89f0 = FUN_142b467fe;
  }
  _DAT_14c9ab1b8 = 0;
  uRam000000014c9ab1c0 = 0;
  DAT_14c9ab1c8 = 0;
  _DAT_14c9aae68 = 0x47efffffe0000000;
  _DAT_14c9aae70 = 0x47efffffe0000000;
  _DAT_14c9aae78 = 0x47efffffe0000000;
  _DAT_14c9aae88 = &LAB_142b468bc;
  DAT_14c9aae90 = 5;
  if (DAT_14c9aad88 == '\0') {
    _DAT_14c9aae80 = DAT_14c9a84f8;
    _DAT_14c9aae98 = &DAT_14c9aae80;
    _DAT_14c9aaeb0 = &DAT_14c9aae98;
    _DAT_14c9aaec8 = &DAT_14c9aaeb0;
    _DAT_14c9aaee0 = &DAT_14c9aaec8;
    DAT_14c9a84f8 = &DAT_14c9aaee0;
  }
  else {
    DAT_14c9a8ab0 = 0x18;
    DAT_14c9a8b70 = &DAT_144a405aa;
    _DAT_14c9a8b50 = &LAB_142b46960;
    _DAT_14c9a8b58 = &LAB_140786f18;
    _DAT_14c9a8b60 = &LAB_144b08a50;
    _DAT_14c9a8b68 = &LAB_1470f0608;
    _DAT_14c9a8ad0 = FUN_1461fb25c;
    _DAT_14c9a8ac8 = &LAB_141742e42;
    _DAT_14c9a8b80 = FUN_141742e48;
    _DAT_14c9a8bc0 = FUN_1470f097e;
    DAT_14c9a8b48 = &LAB_142b4697e;
    _DAT_14c9a8ab8 = 0x3ee889a03eb4efed;
    puRam000000014c9a8ac0 = &DAT_3f8000003f800000;
    DAT_14c9a8b40 = 1;
    DAT_14c9a8ab4 = 8;
    DAT_14c9a8bd0 = 8;
    _DAT_14c9a8bf0 = FUN_1461fb544;
    _DAT_14c9a8be8 = &LAB_1470f09a6;
    _DAT_14c9a8ce0 = &LAB_1470f0d12;
    _DAT_14c9a8bd8 = 0x3ecccccd00000000;
    uRam000000014c9a8be0 = 0x3f8000003f68f5c3;
    DAT_14c9a8c60 = 1;
    _DAT_14c9a8c20 = &LAB_142b46a04;
    _DAT_14c9a8c30 = FUN_142b46a12;
    _DAT_14c9a8ca0 = &LAB_142b47446;
    DAT_14c9a8cf0 = 8;
    _DAT_14c9a8d10 = FUN_1461fb82c;
    _DAT_14c9a8d08 = &LAB_1470f0d7e;
    _DAT_14c9a8e00 = &LAB_145af2414;
    _DAT_14c9a8cf8 = 0x3ecccccd00000000;
    uRam000000014c9a8d00 = 0x3f8000003f68f5c3;
    DAT_14c9a8d80 = 1;
    DAT_14c9a8cf4 = 0x1e;
    _DAT_14c9a8d40 = &LAB_142b4763e;
    _DAT_14c9a8d50 = FUN_142b4764e;
    DAT_14c9a8dc0 = &LAB_142b47b58;
    DAT_14c9a94d0 = 8;
    _DAT_14c9a94f0 = FUN_1461fbb14;
    _DAT_14c9a94e8 = &LAB_1470f10ea;
    _DAT_14c9a95e0 = &LAB_1470f1456;
    _DAT_14c9a94d8 = 0x3ecccccd00000000;
    uRam000000014c9a94e0 = 0x3f8000003f68f5c3;
    DAT_14c9a9560 = 1;
    DAT_14c9a94d4 = 0x1e;
    _DAT_14c9a9520 = &LAB_142b47cbe;
    _DAT_14c9a9530 = FUN_142b47ccc;
    _DAT_14c9a95a0 = &LAB_142b4817e;
    DAT_14c9a9950 = 8;
    _DAT_14c9a9970 = FUN_1461f5af2;
    _DAT_14c9a9a60 = &LAB_1470f1828;
    _DAT_14c9a9958 = 0x3e6662353f1b9357;
    puRam000000014c9a9960 = &DAT_3f8000003f800000;
    DAT_14c9a99e0 = 1;
    _DAT_14c9a99a0 = &LAB_142b481f1;
    _DAT_14c9a99b0 = FUN_142b4820b;
    _DAT_14c9a99a8 = &LAB_142b48373;
    _DAT_14c9a99b8 = FUN_142b48376;
    _DAT_14c9a9a20 = &LAB_142b48431;
  }
  DAT_14c9ab1a8 = 0;
  DAT_14c9aaef0 = 0x12;
  _DAT_14c9aaee8 = &LAB_142b48184;
  DAT_14c9aaed8 = 0xe;
  _DAT_14c9aaed0 = &LAB_142b47b5e;
  DAT_14c9aaec0 = 7;
  _DAT_14c9aaeb8 = &LAB_142b474e6;
  DAT_14c9aaea8 = 6;
  _DAT_14c9aaea0 = &LAB_142b46994;
  DAT_14c9ab1d0 = 0;
  _DAT_14c9ab1d8 = 0;
  atexit((_func_5014 *)&LAB_142b46167);
  _DAT_14c9aaf00 = &LAB_142b48460;
  DAT_14c9aaf08 = 8;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a8e10 = 0x10;
    _DAT_14c9a8e30 = FUN_1461f5dc0;
    _DAT_14c9a8f20 = &LAB_1470f1ba4;
    _DAT_14c9a8e18 = 0x3f800000;
    uRam000000014c9a8e1c = 0;
    uRam000000014c9a8e20 = 0x3f2918f4;
    uRam000000014c9a8e24 = 0x3f800000;
    DAT_14c9a8ea0 = 1;
    _DAT_14c9a8e60 = &LAB_142b484dc;
    _DAT_14c9a8e70 = FUN_142b484f6;
    _DAT_14c9a8e68 = &LAB_142b485fc;
    _DAT_14c9a8e78 = FUN_142b48600;
    _DAT_14c9a8ee0 = &LAB_142b486bc;
  }
  else {
    _DAT_14c9aaef8 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9aaef8;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  DAT_14c9ab030 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  DAT_14c9ab038 = 0;
  atexit((_func_5014 *)&LAB_142b46178);
  cVar1 = DAT_14c9aad88;
  _DAT_14c9aaf18 = &LAB_142b48744;
  DAT_14c9aaf20 = 0x1b;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aa370 = 0x10;
    DAT_14c9aa408 = FUN_140ac48b0;
    DAT_14c9aa430 = &LAB_14141544c;
    _DAT_14c9aa410 = FUN_141742e70;
    _DAT_14c9aa418 = &LAB_141742e9a;
    _DAT_14c9aa420 = FUN_141742ea0;
    _DAT_14c9aa428 = &LAB_1470f1c22;
    _DAT_14c9aa390 = FUN_1461f7280;
    _DAT_14c9aa378 = 0x3e4ccccd3f4ccccd;
    uRam000000014c9aa380 = 0x3f8000003ecccccd;
    DAT_14c9aa400 = 1;
    _DAT_14c9aa3c0 = &LAB_142b48806;
    _DAT_14c9aa3d0 = FUN_142b48820;
    _DAT_14c9aa3c8 = &LAB_142b48af0;
    _DAT_14c9aa3d8 = FUN_142b48af4;
    _DAT_14c9aa440 = &LAB_142b48c10;
    _DAT_14c9aa480 = &LAB_142b48c32;
    DAT_14c9a9170 = 8;
    DAT_14c9a9208 = &LAB_1403f6134;
    DAT_14c9a9230 = &DAT_1407864a8;
    DAT_14c9a9210 = &LAB_1400b583a;
    DAT_14c9a9218 = &LAB_1407864aa;
    _DAT_14c9a9220 = &LAB_142b48d1a;
    _DAT_14c9a9228 = &LAB_1470f1c28;
    _DAT_14c9a9190 = FUN_1461fbdfc;
    _DAT_14c9a9188 = &LAB_1403f612e;
    _DAT_14c9a9240 = FUN_141742ee2;
    _DAT_14c9a9280 = FUN_1470f1f96;
    _DAT_14c9a9178 = 0x3f80000000000000;
    uRam000000014c9a9180 = 0x3f8000003f400000;
    DAT_14c9a9200 = 1;
    DAT_14c9a9174 = 1;
    _DAT_14c9a91c0 = &LAB_142b48d30;
    _DAT_14c9a91d0 = FUN_142b48d42;
    _DAT_14c9a91c8 = &LAB_142b48ece;
    _DAT_14c9a91d8 = &LAB_142b48ee0;
  }
  else {
    _DAT_14c9aaf10 = DAT_14c9a84f8;
    _DAT_14c9aaf28 = &DAT_14c9aaf10;
    DAT_14c9a84f8 = &DAT_14c9aaf28;
  }
  DAT_14c9ab1b0 = 0;
  _DAT_14c9aaf30 = &LAB_142b48c4a;
  DAT_14c9aaf38 = 0xb;
  DAT_14c9ab1e0._0_4_ = 0;
  DAT_14c9ab1e0._4_1_ = 0;
  DAT_14c9ab1e8 = 0xbf80000000000000;
  _DAT_14c9ab1f0 = 0xc4750000;
  DAT_14c9ab1f4 = 0;
  _DAT_14c9ab1f8 = 0;
  uRam000000014c9ab200 = 0;
  _DAT_14c9ab208 = 0;
  uRam000000014c9ab210 = 0;
  _DAT_14c9ab218 = 0;
  uRam000000014c9ab220 = 0;
  _DAT_14c9aaf48 = &LAB_142b48f2e;
  DAT_14c9aaf50 = 0xf;
  if (DAT_14c9aad88 == '\0') {
    _DAT_14c9aaf40 = DAT_14c9a84f8;
    _DAT_14c9aaf58 = &DAT_14c9aaf40;
    DAT_14c9a84f8 = &DAT_14c9aaf58;
  }
  else {
    DAT_14c9a95f0 = 0x48;
    DAT_14c9a9688 = &LAB_1403f6182;
    DAT_14c9a96b0 = &DAT_1400b5838;
    _DAT_14c9a9690 = FUN_1400b5842;
    _DAT_14c9a9698 = FUN_1470f1fbe;
    _DAT_14c9a96a0 = FUN_1470f1fd2;
    _DAT_14c9a96a8 = FUN_1470f1fe6;
    _DAT_14c9a9610 = FUN_1461fc0e4;
    _DAT_14c9a9608 = &LAB_1403f6176;
    _DAT_14c9a96c0 = FUN_1470f2360;
    _DAT_14c9a9700 = FUN_1470f2388;
    _DAT_14c9a95f8 = 0x3ecccccd00000000;
    uRam000000014c9a9600 = 0x3f8000003f68f5c3;
    DAT_14c9a9681 = 0;
    DAT_14c9a95f4 = 0;
    DAT_14c9aa010 = 0x10;
    _DAT_14c9aa0d0 = &DAT_142b4909c;
    DAT_14c9aa0b0 = &LAB_142b4909e;
    DAT_14c9aa0b8 = &LAB_142b490a6;
    _DAT_14c9aa0c0 = &LAB_1470f23b0;
    _DAT_14c9aa0c8 = &LAB_1470f23b8;
    _DAT_14c9aa030 = FUN_1461fc3cc;
    _DAT_14c9aa028 = &LAB_141742f0a;
    _DAT_14c9aa120 = FUN_1470f2726;
    _DAT_14c9aa018 = 0x3dcccccd00000000;
    uRam000000014c9aa020 = 0x3f8000003f19999a;
    _DAT_14c9aa0a0 = 0x101;
    DAT_14c9aa014 = 0;
    DAT_14c9aa0a8 = &LAB_142b490bc;
    _DAT_14c9aa0e0 = &LAB_142b490c8;
    _DAT_14c9aa068 = &LAB_142b49104;
    _DAT_14c9aa078 = &LAB_142b4910c;
  }
  puRam000000014c9ab248 = &DAT_3f8000003f800000;
  _DAT_14c9ab240 = &DAT_3f8000003f800000;
  _DAT_14c9aaf60 = &LAB_142b48fe0;
  DAT_14c9aaf68 = 0x18;
  memset(&DAT_14c9ab040,0,0x100);
  DAT_14c9ab110 = 0xffffffff;
  _DAT_14c9ab044 = 0x3f800000;
  _DAT_14c9ab0e4 = 0xffffffff;
  _DAT_14c9aaf78 = &LAB_142b4914c;
  DAT_14c9aaf80 = 0x19;
  if (cVar1 == '\0') {
    _DAT_14c9aaf70 = DAT_14c9a84f8;
    _DAT_14c9aaf90 = &DAT_14c9aaf70;
    DAT_14c9a84f8 = &DAT_14c9aaf90;
  }
  else {
    DAT_14c9aa130 = 0x100;
    DAT_14c9aa1f0 = &DAT_1470f2754;
    _DAT_14c9aa1d0 = FUN_1470f2756;
    _DAT_14c9aa1d8 = FUN_1470f27f8;
    _DAT_14c9aa1e0 = &LAB_1470f289a;
    _DAT_14c9aa1e8 = &LAB_1470f28a6;
    _DAT_14c9aa150 = FUN_1461fc6b4;
    _DAT_14c9aa148 = &LAB_1470f274e;
    _DAT_14c9aa200 = FUN_1470f2c18;
    _DAT_14c9aa240 = FUN_1470f2c40;
    _DAT_14c9aa138 = 0x3ecccccd3f800000;
    puRam000000014c9aa140 = &DAT_3f8000003f800000;
    DAT_14c9aa1c1 = 0;
    DAT_14c9aa134 = 0;
    DAT_14c9aa1c8 = FUN_142b4922a;
    _DAT_14c9aa180 = &LAB_142b492ce;
    _DAT_14c9aa190 = FUN_142b492de;
    _DAT_14c9aa188 = &LAB_142b493ca;
    _DAT_14c9aa198 = FUN_142b493da;
    DAT_14c9aab50 = 8;
    DAT_14c9aabe8 = &LAB_1470f2c6e;
    _DAT_14c9aac10 = &DAT_1470f2c76;
    _DAT_14c9aabf0 = &LAB_1470f2c78;
    _DAT_14c9aabf8 = &LAB_1470f2c80;
    _DAT_14c9aac00 = &LAB_1470f2c88;
    _DAT_14c9aac08 = &LAB_1470f2c90;
    _DAT_14c9aab70 = FUN_1461fc99c;
    _DAT_14c9aab68 = &LAB_1470f2c68;
    _DAT_14c9aac20 = FUN_1470f2ffe;
    _DAT_14c9aac60 = FUN_1470f3026;
    _DAT_14c9aab58 = 0x3ecccccd3f19999a;
    uRam000000014c9aab60 = 0x3f8000003e4ccccd;
    DAT_14c9aabe1 = 0;
    DAT_14c9aab54 = 0;
    _DAT_14c9aaba0 = &LAB_142b49798;
    _DAT_14c9aabb0 = &LAB_142b497a0;
    _DAT_14c9aaba8 = &LAB_142b497c4;
    _DAT_14c9aabb8 = FUN_142b497cc;
  }
  _DAT_14c9aaf98 = &LAB_142b496ba;
  DAT_14c9aaf88 = DAT_14caa8578;
  DAT_14c9aafa0 = 0x22;
  DAT_14c9aafa8 = 0;
  DAT_14c9aafb0 = 0;
  DAT_14c9aafb8 = 0;
  DAT_14c9aafc0 = 0;
  _DAT_14c9aafc8 = 0;
  atexit((_func_5014 *)&LAB_142b4618c);
  DAT_14c9ab140 = 0;
  _DAT_14c9ab148 = 0;
  _DAT_14c9ab150 = 0;
  DAT_14c9ab158 = 0;
  _DAT_14c9ab160 = 0;
  atexit((_func_5014 *)&LAB_142b4619d);
  _DAT_14c9aafd8 = &LAB_142b49824;
  DAT_14c9aafe0 = 0x1c;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aa490 = 0x28;
    DAT_14c9aa528 = &LAB_142b498e6;
    DAT_14c9aa550 = &LAB_142b498fa;
    _DAT_14c9aa530 = FUN_142b49908;
    _DAT_14c9aa538 = &LAB_1470f304e;
    _DAT_14c9aa540 = FUN_141742f10;
    _DAT_14c9aa548 = &LAB_1470f3084;
    _DAT_14c9aa4b0 = FUN_1461fcc84;
    _DAT_14c9aa498 = 0x3e99999a3f800000;
    puRam000000014c9aa4a0 = &DAT_3f8000003f800000;
    DAT_14c9aa520 = 1;
    _DAT_14c9aa4e0 = &LAB_142b4997e;
    _DAT_14c9aa4f0 = FUN_142b4998e;
    _DAT_14c9aa4e8 = &LAB_142b49e44;
    _DAT_14c9aa4f8 = FUN_142b49e60;
    _DAT_14c9aa560 = &LAB_142b4a0ec;
    _DAT_14c9aa5a0 = &LAB_142b4a18e;
    DAT_14c9aa5b0 = 0x18;
    DAT_14c9aa648 = &LAB_142b4a2e8;
    DAT_14c9aa670 = &DAT_140820ab8;
    _DAT_14c9aa650 = FUN_141742f7c;
    _DAT_14c9aa658 = FUN_1407864b2;
    _DAT_14c9aa660 = FUN_141742fc0;
    _DAT_14c9aa668 = &LAB_1470f33f0;
    _DAT_14c9aa5d0 = FUN_1461fac8e;
    _DAT_14c9aa5b8 = 0x3f3cbfb1;
    uRam000000014c9aa5bc = 0x3f0f9097;
    uRam000000014c9aa5c0 = 0x3f0f9097;
    uRam000000014c9aa5c4 = 0x3f800000;
    DAT_14c9aa640 = 1;
    _DAT_14c9aa600 = &LAB_142b4a306;
    _DAT_14c9aa610 = FUN_142b4a30e;
    _DAT_14c9aa608 = &LAB_142b4a3a6;
    _DAT_14c9aa618 = FUN_142b4a3ae;
    _DAT_14c9aa680 = FUN_142b4a44e;
    _DAT_14c9aa6c0 = FUN_142b4a638;
  }
  else {
    _DAT_14c9aafd0 = DAT_14c9a84f8;
    _DAT_14c9aafe8 = &DAT_14c9aafd0;
    DAT_14c9a84f8 = &DAT_14c9aafe8;
  }
  DAT_14c9ab260 = 0;
  DAT_14c9ab258 = 0;
  DAT_14c9ab250 = 0;
  _DAT_14c9aaff0 = &LAB_142b4a226;
  DAT_14c9aaff8 = 0x1d;
  local_58 = 0;
  FUN_14153156c(&DAT_14c9ab000,L"gbx.LoadingRangeOverride",&DAT_14c9ab010,
                L"Enable overriding loading range for streaming grids through cvars set in device profiles.0 = disabled, 1 = enabled"
               );
  atexit(FUN_142b461d4);
  local_58 = 0;
  FUN_141471170(&DAT_14c9ab018,L"gbx.LoadingRangeOverrideServerExec",&DAT_14c75f7d4,
                L"If we should send an RPC when changing loading range.0 = no RPC, 1 = rpc will be sent to server"
               );
  atexit(FUN_142b46219);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4ce0c FUN_142b4ce0c body=234 status=ok
// SIG undefined FUN_142b4ce0c(void)

longlong FUN_142b4ce0c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac6e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1478989f1;
    local_40 = &LAB_146391124;
    local_48 = L"Engine";
    local_50 = 0x10000000000;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4cef7 FUN_142b4cef7 body=106 status=ok
// SIG undefined FUN_142b4cef7(void)

void FUN_142b4cef7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14a1ce4d0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 142b4cf61 FUN_142b4cf61 body=55 status=ok
// SIG undefined FUN_142b4cf61(void)

void FUN_142b4cf61(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab388 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab388 = FUN_14171c317(FUN_1462b21d2,uVar1,L"EExtraCollisionFilterBehavior");
  }
  return;
}



// FUNCTION 142b4cf98 FUN_142b4cf98 body=55 status=ok
// SIG undefined FUN_142b4cf98(void)

void FUN_142b4cf98(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab3a0 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab3a0 = FUN_14171c317(FUN_1462b2201,uVar1,L"EExtraCollisionFilterChannel");
  }
  return;
}



// FUNCTION 142b4cfcf FUN_142b4cfcf body=55 status=ok
// SIG undefined FUN_142b4cfcf(void)

void FUN_142b4cfcf(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab400 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab400 = FUN_14171c317(FUN_1462b23f6,uVar1,L"EDGeneratedSimulationDataVersion");
  }
  return;
}



// FUNCTION 142b4d006 FUN_142b4d006 body=133 status=ok
// SIG undefined FUN_142b4d006(void)

void FUN_142b4d006(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14a1cf370;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 142b4d08b FUN_142b4d08b body=55 status=ok
// SIG undefined FUN_142b4d08b(void)

void FUN_142b4d08b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab448 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab448 = FUN_14171c317(FUN_1462b24f4,uVar1,L"EFDAnatomicalType");
  }
  return;
}



// FUNCTION 142b4d0c2 FUN_142b4d0c2 body=185 status=ok
// SIG undefined FUN_142b4d0c2(void)

void FUN_142b4d0c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[0xc] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  puVar1[0x1a] = 0;
  *puVar1 = &PTR_FUN_14a1d0b80;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 142b4d17b FUN_142b4d17b body=55 status=ok
// SIG undefined FUN_142b4d17b(void)

void FUN_142b4d17b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab598 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab598 = FUN_14171c317(FUN_1462b2bb6,uVar1,L"EFDSimulationState");
  }
  return;
}



// FUNCTION 142b4d1b2 FUN_142b4d1b2 body=55 status=ok
// SIG undefined FUN_142b4d1b2(void)

void FUN_142b4d1b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab5b0 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab5b0 = FUN_14171c317(FUN_1462b2be5,uVar1,L"EFDSimulationSpace");
  }
  return;
}



// FUNCTION 142b4d1e9 FUN_142b4d1e9 body=55 status=ok
// SIG undefined FUN_142b4d1e9(void)

void FUN_142b4d1e9(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab5e0 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab5e0 = FUN_14171c317(FUN_1462b2cac,uVar1,L"EFDBodyTargetMode");
  }
  return;
}



// FUNCTION 142b4d220 FUN_142b4d220 body=55 status=ok
// SIG undefined FUN_142b4d220(void)

void FUN_142b4d220(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab610 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab610 = FUN_14171c317(FUN_1462b2d74,uVar1,L"EBodyTargetState");
  }
  return;
}



// FUNCTION 142b4d257 FUN_142b4d257 body=55 status=ok
// SIG undefined FUN_142b4d257(void)

void FUN_142b4d257(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab628 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab628 = FUN_14171c317(FUN_1462b2da3,uVar1,L"EDConstraintAxis");
  }
  return;
}



// FUNCTION 142b4d28e FUN_142b4d28e body=55 status=ok
// SIG undefined FUN_142b4d28e(void)

void FUN_142b4d28e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab640 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab640 = FUN_14171c317(FUN_1462b2dd2,uVar1,L"EDConstraintState");
  }
  return;
}



// FUNCTION 142b4d2c5 FUN_142b4d2c5 body=55 status=ok
// SIG undefined FUN_142b4d2c5(void)

void FUN_142b4d2c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab688 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab688 = FUN_14171c317(FUN_1462b2f30,uVar1,L"EDPoseTargetSolveType");
  }
  return;
}



// FUNCTION 142b4d2fc FUN_142b4d2fc body=55 status=ok
// SIG undefined FUN_142b4d2fc(void)

void FUN_142b4d2fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab6e8 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab6e8 = FUN_14171c317(FUN_1462b3124,uVar1,L"EFDAnimGraphEval");
  }
  return;
}



// FUNCTION 142b4d350 FUN_142b4d350 body=183 status=ok
// SIG undefined FUN_142b4d350(void)

uint FUN_142b4d350(undefined4 param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] - param_3[1]));
  auVar4._8_4_ = (int)lVar9;
  auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_2 - *param_3));
  auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar6 = movmskpd(param_1,auVar4);
  lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] - param_3[3]));
  auVar3._8_4_ = (int)lVar9;
  auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[2] - param_3[2]));
  auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)param_2,auVar3);
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if ((uVar8 & 0x3fffffff) != 0 || iVar6 != 0) {
    auVar1._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] + param_3[1]));
    auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_2 + *param_3));
    iVar5 = movmskpd(uVar7,auVar1);
    auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] + param_3[3]));
    auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[2] + param_3[2]));
    uVar7 = movmskpd(iVar6,auVar2);
    uVar7 = (uint)((uVar7 & 0x3fffffff) == 0 && iVar5 == 0);
  }
  return uVar7;
}



// FUNCTION 142b4d418 FUN_142b4d418 body=217 status=ok
// SIG undefined FUN_142b4d418(void)

bool FUN_142b4d418(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (*(char *)((longlong)param_1 + -0x20a) < '\0') {
    if (*(code **)(*param_1 + 0x58) == (code *)&LAB_1457ba96c) {
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x41);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    }
    if (1 < (int)uVar2) {
      return true;
    }
    plVar1 = param_1 + -0x55;
    lVar3 = *plVar1;
    if (*(code **)(lVar3 + 0x558) == (code *)&LAB_1448a8146) {
      plVar4 = param_1 + 0x3a;
    }
    else {
      plVar4 = (longlong *)(**(code **)(lVar3 + 0x558))(plVar1);
      lVar3 = *plVar1;
    }
    if (*(code **)(lVar3 + 0x570) == (code *)&LAB_1448a814e) {
      if ((param_1[-0x40] != 0) && ((*(byte *)(param_1[-0x40] + 0x65) & 1) == 0))
      goto LAB_142b4d4cb;
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x17f);
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x570))(plVar1);
    }
    bVar5 = false;
    if (((uVar2 < 6) && ((0x2aU >> (uVar2 & 0x1f) & 1) != 0)) &&
       (bVar5 = true, *(char *)((longlong)plVar4 + 2) != '\x02')) {
      bVar5 = *(char *)((longlong)plVar4 + 6) == '\x02';
    }
  }
  else {
LAB_142b4d4cb:
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 142b4d504 FUN_142b4d504 body=57 status=ok
// SIG undefined FUN_142b4d504(void)

void FUN_142b4d504(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab280 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab280 = FUN_140002ddd(FUN_1462b1d6e,uVar1,L"AnimNode_ForwardDynamics");
  }
  return;
}



// FUNCTION 142b4d768 FUN_142b4d768 body=197 status=ok
// SIG undefined FUN_142b4d768(void)

void FUN_142b4d768(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_2 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
  }
  cVar1 = *(char *)(param_2 + 3);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    param_1[2] = param_2[2];
  }
  cVar1 = *(char *)((longlong)param_2 + 0x11);
  *(char *)((longlong)param_1 + 0x11) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x13);
  *(char *)((longlong)param_1 + 0x13) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x15);
  *(char *)((longlong)param_1 + 0x15) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x17);
  *(char *)((longlong)param_1 + 0x17) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  *(char *)((longlong)param_1 + 0x19) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  if (param_2[9] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 9);
  }
  *(undefined8 *)(param_1 + 9) = uVar2;
  cVar1 = *(char *)((longlong)param_2 + 0x2d);
  *(char *)((longlong)param_1 + 0x2d) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x2f);
  *(char *)((longlong)param_1 + 0x2f) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  }
  return;
}



// FUNCTION 142b4d86c FUN_142b4d86c body=509 status=ok
// SIG undefined FUN_142b4d86c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4d86c(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14c9ab268);
  if (cVar1 == '\0') {
    _DAT_14c9ab268 = 0;
    uRam000000014c9ab270 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxPhysics",0,0,&PTR_FUN_14a1ccc00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1cd5a0,2,&PTR_FUN_14a1cd570);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1cd720,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1cdff0,2,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1ce7c0,1,&PTR_FUN_14a1ce770);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14a1cea40;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxPhysics",0,0,&PTR_FUN_14a1cea80);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14a1d1810;
  local_68 = 0xc;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1d1a30,5,&PTR_FUN_14a1d1850);
  ppuStack_60 = &PTR_FUN_14a1d51e0;
  uStack_58 = 8;
  local_68 = 0xb;
  FUN_14282b410(L"/Script/GbxPhysics",0,0,&PTR_FUN_14a1d52e0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4da6c FUN_142b4da6c body=55 status=ok
// SIG undefined FUN_142b4da6c(void)

void FUN_142b4da6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab7a8 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab7a8 =
         FUN_14171c317(FUN_1462b38cc,uVar1,L"EManualForwardDynamicsNodePlacementCompilationOutput");
  }
  return;
}



// FUNCTION 142b4daa3 FUN_142b4daa3 body=55 status=ok
// SIG undefined FUN_142b4daa3(void)

void FUN_142b4daa3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab850 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab850 = FUN_14171c317(FUN_1462b3b54,uVar1,L"EMinDoFStateType");
  }
  return;
}



// FUNCTION 142b4dada FUN_142b4dada body=55 status=ok
// SIG undefined FUN_142b4dada(void)

void FUN_142b4dada(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab868 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab868 = FUN_14171c317(FUN_1462b3b85,uVar1,L"EMinDoFRootMatchMode");
  }
  return;
}



// FUNCTION 142b4db11 FUN_142b4db11 body=55 status=ok
// SIG undefined FUN_142b4db11(void)

void FUN_142b4db11(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab910 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab910 = FUN_14171c317(FUN_1462b3ed2,uVar1,L"ETestType");
  }
  return;
}



// FUNCTION 142b4db48 FUN_142b4db48 body=55 status=ok
// SIG undefined FUN_142b4db48(void)

void FUN_142b4db48(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab928 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab928 = FUN_14171c317(FUN_1462b3f01,uVar1,L"EAggCollisionShapeType");
  }
  return;
}



// FUNCTION 142b4db7f FUN_142b4db7f body=69 status=ok
// SIG undefined FUN_142b4db7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4db7f(void)

{
  _DAT_14c9ab968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b4dbc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab970,1);
  return;
}



// FUNCTION 142b4dbc4 FUN_142b4dbc4 body=69 status=ok
// SIG undefined FUN_142b4dbc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4dbc4(void)

{
  _DAT_14c9ab980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b4dc06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab988,1);
  return;
}



// FUNCTION 142b4dc09 FUN_142b4dc09 body=69 status=ok
// SIG undefined FUN_142b4dc09(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4dc09(void)

{
  _DAT_14c9ab998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b4dc4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab9a0,1);
  return;
}



// FUNCTION 142b4dc4e FUN_142b4dc4e body=239 status=ok
// SIG undefined FUN_142b4dc4e(void)

int FUN_142b4dc4e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  ulonglong uVar9;
  
  lVar2 = DAT_14c9ab990;
  iVar5 = -1;
  if (*(longlong *)(param_1 + 0x200) != DAT_14c9abbf0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar5 = *(int *)(lVar1 + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar9 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    lVar3 = DAT_14c9ab990;
    iVar8 = *(int *)(param_1 + 0x1dc);
    iVar5 = iVar8;
    if (*(int *)(lVar2 + uVar9 * 4) != -1) {
      iVar5 = *(int *)(lVar1 + 0xc60);
      if (iVar8 == -1) {
        if (iVar5 == 0x40000002) {
          uVar9 = 0;
        }
        else {
          bVar4 = FUN_144a61b4f();
          uVar9 = (ulonglong)(bVar4 ^ 1);
        }
        iVar5 = *(int *)(lVar3 + uVar9 * 4);
      }
      else {
        if (iVar5 == 0x40000002) {
          uVar9 = 0;
        }
        else {
          bVar4 = FUN_144a61b4f();
          uVar9 = (ulonglong)(bVar4 ^ 1);
          iVar8 = *(int *)(param_1 + 0x1dc);
        }
        iVar5 = *(int *)(lVar3 + uVar9 * 4);
        if (iVar8 < iVar5) {
          iVar5 = iVar8;
        }
      }
    }
  }
  return iVar5;
}



// FUNCTION 142b4dd3e FUN_142b4dd3e body=107 status=ok
// SIG undefined FUN_142b4dd3e(void)

void FUN_142b4dd3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2a8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  if ((*param_2 != 0) && (*(longlong *)(param_1 + 0x240) != 0)) {
    FUN_14499eed2(*(longlong *)(param_1 + 0x240),param_1 + 0x20,*(undefined8 *)(*param_2 + 0x6a0));
    return;
  }
  return;
}



// FUNCTION 142b4ddd0 FUN_142b4ddd0 body=1643 status=ok
// SIG undefined FUN_142b4ddd0(void)

void FUN_142b4ddd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 uVar19;
  byte *pbVar20;
  longlong lVar21;
  uint uVar22;
  byte bVar23;
  byte bVar24;
  float fVar25;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar6 = param_1[0x48];
  if (lVar6 == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x3a8) == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x3f0) == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x3f8) == 0) {
    return;
  }
  lVar17 = FUN_14493e20e(param_1);
  lVar18 = (**(code **)(*param_2 + 0x180))(param_2);
  lVar6 = *(longlong *)(param_2[4] + 0xa8);
  if (lVar6 == 0 || lVar18 == 0) {
    return;
  }
  if (*(char *)(lVar17 + 0x263) != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1);
    *(undefined1 *)(lVar17 + 0x263) = 0;
  }
  fVar3 = *(float *)(lVar18 + 0x6f4);
  fVar25 = (float)FUN_144916004(lVar6);
  *(float *)(param_1 + 0x5a) = fVar25 * fVar3;
  bVar23 = *(byte *)(param_1 + 0x44);
  bVar4 = *(byte *)((longlong)param_1 + 0x223);
  if (((longlong *)param_1[0x43] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x214) != 0))
  {
    uVar5 = *(uint *)(param_1 + 0x42);
    lVar18 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_142b4df0e;
    lVar18 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    if (((lVar18 != 0) && (*(int *)(lVar18 + 0x10) == *(int *)((longlong)param_1 + 0x214))) &&
       ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)) {
      lVar18 = (**(code **)(*(longlong *)param_1[0x43] + 0x10))();
      goto LAB_142b4df0e;
    }
  }
  lVar18 = 0;
LAB_142b4df0e:
  bVar14 = *(byte *)(lVar17 + 0x3e0);
  if (bVar14 == 0) {
    FUN_140cddb58(lVar17 + 0x368);
    bVar14 = *(byte *)(lVar17 + 0x3e0);
  }
  pbVar20 = (byte *)(lVar17 + 0x3c2);
  if (*(char *)(lVar17 + 0x3c3) == '\0') {
    pbVar20 = (byte *)(lVar17 + 0x1b8);
  }
  bVar24 = *pbVar20;
  if ((bVar14 & 1) == 0) {
    FUN_140cddb58(lVar17 + 0x368);
  }
  if (param_1[0x48] == 0) {
    bVar14 = 0;
  }
  else {
    bVar14 = *(byte *)(param_1[0x48] + 0x400);
  }
  if (*(char *)(lVar17 + 0x3dd) != '\0') {
    bVar14 = *(byte *)(lVar17 + 0x3dc);
  }
  if ((bVar14 & 1) == 0) {
    bVar24 = bVar24 | *(byte *)((longlong)param_1 + 0x239);
  }
  plVar1 = param_1 + 0x40;
  iVar16 = FUN_14474cf0e(plVar1,&DAT_14c9abbf0);
  if (((1 < iVar16) && ((DAT_14c9abbf0 == 0 || (*plVar1 != DAT_14c9abbf0)))) &&
     (*(int *)(lVar18 + 0x18) != *(int *)(lVar18 + 0x44))) {
    uVar5 = (uint)((ulonglong)DAT_14c9abbf0 >> 0x10);
    uVar22 = (uint)DAT_14c9abbf0 & 0xffff;
    lVar21 = lVar18 + 0x48;
    if (*(longlong *)(lVar18 + 0x50) != 0) {
      lVar21 = *(longlong *)(lVar18 + 0x50);
    }
    iVar16 = *(int *)(lVar21 + (ulonglong)
                               (*(int *)(lVar18 + 0x58) - 1U &
                               (int)((ulonglong)DAT_14c9abbf0 >> 0x20) +
                               ((uint)DAT_14c9abbf0 << 0x10 | uVar22) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar22 >> 4)) * 4);
    if (iVar16 != -1) {
      do {
        lVar21 = *(longlong *)(lVar18 + 0x10) + (longlong)iVar16 * 0x460;
        if (*(longlong *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar16 * 0x460) == DAT_14c9abbf0)
        {
          if (lVar21 != 0) goto LAB_142b4e067;
          break;
        }
        iVar16 = *(int *)(lVar21 + 0x450);
      } while (iVar16 != -1);
    }
  }
  if (*(char *)(lVar17 + 0x262) == '\x01') {
    bVar24 = *(char *)(lVar17 + 0x261) != '\x03' && *(char *)(lVar17 + 0x261) != '\0';
  }
LAB_142b4e067:
  *(byte *)(param_1 + 0x44) = bVar24;
  *(byte *)((longlong)param_1 + 0x221) = (bVar23 ^ bVar24) & 1;
  bVar23 = true;
  uVar19 = 1;
  if ((char)param_1[0x47] == '\x02') {
    lVar18 = FUN_14493e20e(param_1);
    uVar19 = 1;
    if (((lVar18 != 0) && (*(char *)(lVar18 + 0x361) == '\0')) &&
       ((lVar18 = param_1[0x48], lVar18 != 0 &&
        ((((*(longlong *)(lVar18 + 0x3a8) != 0 && (*(longlong *)(lVar18 + 0x3f0) != 0)) &&
          (*(longlong *)(lVar18 + 0x3f8) != 0)) && (*(char *)((longlong)param_1 + 0x1d9) == '\0'))))
       )) {
      uVar19 = *(undefined1 *)(lVar17 + 0x1b9);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x222) = uVar19;
  fVar25 = (float)FUN_142b4e43c(param_1,(int)param_1[0x5a],lVar17 + 0x261);
  *(float *)((longlong)param_1 + 0x2cc) = fVar25;
  *(bool *)((longlong)param_1 + 0x223) = 1e-05 < fVar25;
  if ((char)param_1[9] != '\x01') {
    if ((char)param_1[9] == '\x02') {
      bVar23 = false;
    }
    else {
      bVar23 = fVar25 < 0.99999 || *plVar1 != DAT_14c9abbf0;
    }
  }
  if (param_1[0x48] != 0) {
    bVar14 = FUN_142b5b544();
    bVar23 = bVar23 | bVar14;
  }
  *(byte *)((longlong)param_1 + 0x224) = bVar23;
  if (*(char *)(lVar17 + 0x262) == '\x01') {
    *(undefined1 *)(lVar17 + 0x262) = 0;
  }
  if ((char)param_1[0x44] == '\x01') {
    bVar23 = *(byte *)((longlong)param_1 + 0x222) ^ 1;
  }
  else {
    bVar23 = 0;
  }
  lVar18 = lVar17;
  FUN_142b52a9c(param_1[0x48],lVar17,lVar6,param_2[4],(int)param_1[0x5a],fVar3,bVar23,
                *(undefined4 *)((longlong)param_1 + 0x2cc));
  if ((bVar4 & 1) != *(byte *)((longlong)param_1 + 0x223)) {
    FUN_140b7c1ce(param_1[0x48],
                  CONCAT71((int7)((ulonglong)lVar18 >> 8),*(byte *)((longlong)param_1 + 0x223)) ^ 1)
    ;
  }
  plVar1 = param_1 + 4;
  FUN_1404215e2(plVar1,lVar17);
  cVar15 = '\x02' - (*(float *)((longlong)param_1 + 0x2cc) < 0.99999);
  if ((char)param_1[0x44] == '\0') {
    cVar15 = (1e-05 < *(float *)((longlong)param_1 + 0x2cc)) * '\x03';
  }
  *(char *)((longlong)param_1 + 0x225) = cVar15;
  *(char *)(lVar17 + 0x260) = cVar15;
  bVar23 = *(byte *)(param_1 + 0x44);
  *(byte *)(param_1 + 0x3b) = bVar23;
  if (*(char *)((longlong)param_1 + 0x223) == '\x01') {
    lVar6 = param_1[0x48];
    *(undefined8 *)(lVar17 + 0x220) = *(undefined8 *)(lVar6 + 0x3a0);
    uVar7 = *(undefined4 *)(lVar6 + 0x370);
    uVar8 = *(undefined4 *)(lVar6 + 0x374);
    uVar9 = *(undefined4 *)(lVar6 + 0x378);
    uVar10 = *(undefined4 *)(lVar6 + 0x37c);
    uVar11 = *(undefined8 *)(lVar6 + 0x380);
    uVar12 = *(undefined8 *)(lVar6 + 0x388);
    uVar13 = *(undefined8 *)(lVar6 + 0x398);
    *(undefined8 *)(lVar17 + 0x210) = *(undefined8 *)(lVar6 + 0x390);
    *(undefined8 *)(lVar17 + 0x218) = uVar13;
    *(undefined8 *)(lVar17 + 0x200) = uVar11;
    *(undefined8 *)(lVar17 + 0x208) = uVar12;
    *(undefined4 *)(lVar17 + 0x1f0) = uVar7;
    *(undefined4 *)(lVar17 + 500) = uVar8;
    *(undefined4 *)(lVar17 + 0x1f8) = uVar9;
    *(undefined4 *)(lVar17 + 0x1fc) = uVar10;
    bVar23 = *(byte *)(param_1 + 0x3b);
  }
  pcVar2 = (char *)(lVar17 + 0x368);
  pbVar20 = (byte *)(lVar17 + 0x1b8);
  if (*(char *)(lVar17 + 0x37f) != '\0') {
    pbVar20 = (byte *)(lVar17 + 0x37e);
  }
  if (bVar23 == *pbVar20) {
    if (*pcVar2 == '\x01') {
      lVar6 = param_1[0x48];
      iVar16 = *(int *)(lVar17 + 0x3ac);
      FUN_140c7db7c(*(undefined8 *)(lVar17 + 0x3a0),*(undefined4 *)(lVar17 + 0x3a8));
      *(undefined4 *)(lVar17 + 0x3a8) = 0;
      if ((iVar16 < 0) && (*(int *)(lVar17 + 0x3ac) != 0)) {
        FUN_1470fb92a(lVar17 + 0x3a0,0);
      }
      if (*(char *)(lVar17 + 0x3e0) == '\x01') {
        if (*(char *)(lVar17 + 0x3df) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3df) = 0;
        }
        if (*(char *)(lVar17 + 0x3dd) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3dd) = 0;
        }
        if (*(int *)(lVar17 + 0x3d4) != -1) {
          *(undefined8 *)(lVar17 + 0x3d4) = 0xffffffff;
        }
        if (*(int *)(lVar17 + 0x3cc) != -1) {
          *(undefined8 *)(lVar17 + 0x3cc) = 0xffffffff;
        }
        if (*(char *)(lVar17 + 0x3c9) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3c9) = 0;
        }
        if (*(char *)(lVar17 + 0x3c7) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3c7) = 0;
        }
        if (*(char *)(lVar17 + 0x3c5) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3c5) = 0;
        }
        if (*(char *)(lVar17 + 0x3c3) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3c3) = 0;
        }
        if (*(char *)(lVar17 + 0x3c1) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3c1) = 0;
        }
        if (*(char *)(lVar17 + 0x3bc) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3bc) = 0;
        }
        if (*(char *)(lVar17 + 0x3b4) == '\x01') {
          *(undefined1 *)(lVar17 + 0x3b4) = 0;
        }
        *(undefined1 *)(lVar17 + 0x3e0) = 0;
      }
      FUN_140feb962(pcVar2,plVar1,lVar6,lVar17);
      *(undefined1 *)(lVar17 + 0x368) = 0;
    }
    return;
  }
  FUN_140feb962(pcVar2,plVar1,param_1[0x48],lVar17);
  return;
}



// FUNCTION 142b4e43c FUN_142b4e43c body=142 status=ok
// SIG undefined FUN_142b4e43c(void)

undefined8 FUN_142b4e43c(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*(char *)(param_1 + 0x220) == '\x01') {
    if (((~*(byte *)(param_1 + 0x10d) | *(byte *)(param_1 + 0x2c8)) & 1) == 0) {
      return 0x3f800000;
    }
    if ((*(byte *)(param_1 + 0x2c8) & 1) != 0) {
      fVar2 = *(float *)(param_1 + 0x1f0);
      goto LAB_142b4e44d;
    }
    fVar2 = *(float *)(param_1 + 0x1f8);
  }
  else {
    fVar2 = *(float *)(param_1 + 500);
LAB_142b4e44d:
    fVar2 = -fVar2;
  }
  fVar2 = (float)param_2 / fVar2;
  if (param_3[1] == '\x01') {
    cVar1 = *param_3;
    fVar4 = fVar2;
    if (cVar1 != '\x01') {
      fVar4 = 0.0;
      uVar3 = 0;
      if (cVar1 == '\0') goto LAB_142b4e479;
      fVar4 = fVar2;
      if (cVar1 != '\x03') {
        if (cVar1 == '\x02') {
          return 0x3f800000;
        }
        goto LAB_142b4e45f;
      }
    }
  }
  else {
LAB_142b4e45f:
    fVar4 = fVar2 + *(float *)(param_1 + 0x2cc);
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  uVar3 = uVar5;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
LAB_142b4e479:
  return CONCAT44(uVar3,fVar4);
}



// FUNCTION 142b4e4ca FUN_142b4e4ca body=280 status=ok
// SIG undefined FUN_142b4e4ca(void)

void FUN_142b4e4ca(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x2a8);
  if (plVar1 != (longlong *)0x0) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_38 = param_2[8];
    uStack_34 = param_2[9];
    uStack_30 = param_2[10];
    uStack_2c = param_2[0xb];
    uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
    _uStack_40 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20),uStack_44);
    _local_48 = CONCAT44(*(undefined4 *)(param_1 + 0x2b0),(int)*(undefined8 *)(param_2 + 4));
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar1);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x2a8));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x2a8));
      plVar1 = *(longlong **)(param_1 + 0x2a8);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
  }
  FUN_144b08a78(param_1);
  if (*(char *)(param_1 + 0x2c8) == '\x01') {
    local_58._0_2_ = (ushort)(byte)local_58;
    uVar2 = -(uint)(1e-08 < *(float *)(param_1 + 0x2d0));
    uVar3 = FUN_142b4e43c(param_1,~uVar2 & param_2[10] | (uint)*(float *)(param_1 + 0x2d0) & uVar2);
    *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b4e5e4 FUN_142b4e5e4 body=351 status=ok
// SIG undefined FUN_142b4e5e4(void)

void FUN_142b4e5e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x224) == '\x01') {
    lVar2 = param_1 + 0x2a8;
  }
  else {
    if (*(longlong *)(param_1 + 0x2b8) == 0) {
      lVar2 = *(longlong *)(*param_2 + 0x6a0);
      FUN_14018c8cc(param_2 + 4,lVar2);
      param_2[0x10] = lVar2 + 0xb0;
      goto LAB_142b4e620;
    }
    lVar2 = param_1 + 0x2b8;
  }
  FUN_1447173be(lVar2,param_2);
LAB_142b4e620:
  plVar1 = *(longlong **)(param_1 + 0x240);
  if ((((plVar1 != (longlong *)0x0) && (plVar1[0x75] != 0)) && (plVar1[0x7e] != 0)) &&
     (plVar1[0x7f] != 0)) {
    if (*(char *)(param_1 + 0x223) == '\0') {
      if (((char)plVar1[2] == '\x01') && ((*plVar1 == 0 || ((*(byte *)(*plVar1 + 0xa0) & 1) != 0))))
      {
        *(undefined1 *)(plVar1 + 2) = 0;
      }
    }
    else {
      lVar2 = param_1 + 0x20;
      FUN_141743b8e(plVar1,param_2,lVar2);
      FUN_142b56dc0(*(undefined8 *)(param_1 + 0x240),param_2,lVar2);
      if (*(char *)(param_1 + 0x220) == '\x01') {
        if (*(char *)(param_1 + 0x222) == '\x01') {
          FUN_142b53c5a(*(undefined8 *)(param_1 + 0x240),param_2,lVar2);
        }
        else {
          FUN_142b54af6(*(undefined8 *)(param_1 + 0x240),param_2,lVar2,
                        *(undefined1 *)(param_1 + 0x225),*(undefined1 *)(param_1 + 0x224));
        }
      }
      FUN_142b5976c(*(undefined8 *)(param_1 + 0x240),param_2,lVar2,*(undefined4 *)(param_1 + 0x2cc),
                    *(undefined1 *)(param_1 + 0x225),*(undefined1 *)(param_1 + 0x10c));
    }
  }
  return;
}



// FUNCTION 142b4e748 FUN_142b4e748 body=141 status=ok
// SIG undefined FUN_142b4e748(void)

void FUN_142b4e748(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = FUN_14493e20e();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x3e0) == '\0') {
      FUN_140cddb58(lVar2 + 0x368);
    }
    lVar1 = *(longlong *)(param_1 + 0x240);
    if ((lVar1 != 0) && (*(char *)(param_1 + 0x220) == '\x01')) {
      if (*(char *)(lVar1 + 0x400) == '\x01') {
        pcVar3 = (char *)(lVar2 + 0x3c2);
        if (*(char *)(lVar2 + 0x3c3) == '\0') {
          pcVar3 = (char *)(lVar2 + 0x1b8);
        }
        if (*pcVar3 != '\x01') {
          return;
        }
      }
      FUN_140613928(lVar1,param_2,param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 142b4e7d5 FUN_142b4e7d5 body=69 status=ok
// SIG undefined FUN_142b4e7d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4e7d5(void)

{
  _DAT_14c9ab9b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b4e817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab9b8,1);
  return;
}



// FUNCTION 142b4e81a FUN_142b4e81a body=69 status=ok
// SIG undefined FUN_142b4e81a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4e81a(void)

{
  _DAT_14c9ab9c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b4e85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ab9d0,1);
  return;
}



// FUNCTION 142b4e860 FUN_142b4e860 body=127 status=ok
// SIG undefined FUN_142b4e860(void)

void FUN_142b4e860(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 142b4e8f4 FUN_142b4e8f4 body=110 status=ok
// SIG undefined FUN_142b4e8f4(void)

void FUN_142b4e8f4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x290) != 0) {
    plVar1 = (longlong *)(param_1 + 0x2b0);
    if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    plVar1 = (longlong *)(param_1 + 0x270);
    if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x260);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  return;
}



// FUNCTION 142b4e962 FUN_142b4e962 body=7583 status=ok
// SIG undefined FUN_142b4e962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b4e962(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  undefined1 (*pauVar3) [16];
  longlong *plVar4;
  float *pfVar5;
  double *pdVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 *puVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  char cVar20;
  int iVar21;
  undefined4 extraout_EAX;
  DWORD DVar22;
  DWORD DVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  longlong *plVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  float *pfVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int iVar37;
  longlong *plVar38;
  longlong lVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar68;
  double dVar69;
  double dVar71;
  double dVar72;
  undefined1 auVar70 [16];
  double dVar73;
  double dVar74;
  undefined1 auVar75 [16];
  double dVar76;
  double dVar77;
  double dVar79;
  double dVar80;
  undefined1 auVar78 [16];
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar85;
  undefined1 auVar84 [16];
  undefined1 auStack_4c8 [40];
  longlong *local_4a0;
  undefined1 local_498 [20];
  uint local_484;
  longlong local_480;
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  double local_450;
  longlong local_448;
  longlong *local_440;
  longlong local_438;
  longlong local_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined **local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  byte bStack_2f0;
  undefined1 uStack_2ef;
  undefined6 uStack_2ee;
  undefined4 local_2e8;
  undefined ***local_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte bStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  double local_158;
  undefined ***local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined1 *local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if (param_2 != (longlong *)0x0 && param_1 != 0) {
    lVar24 = (**(code **)(*param_2 + 0x310))(param_2);
    plVar1 = (longlong *)(param_1 + 0x40);
    iVar21 = *(int *)(param_1 + 0x48);
    if (0 < (longlong)iVar21) {
      uVar35 = (longlong)iVar21;
      do {
        lVar8 = *(longlong *)(*plVar1 + -8 + uVar35 * 8);
        if (((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x28), lVar8 != 0)) &&
           (*(int *)(lVar24 + 0x98) != *(int *)(lVar24 + 0xc4))) {
          uVar28 = (uint)((ulonglong)lVar8 >> 0x10);
          uVar31 = (uint)lVar8 & 0xffff;
          lVar39 = *(longlong *)(lVar24 + 0xd0);
          if (*(longlong *)(lVar24 + 0xd0) == 0) {
            lVar39 = lVar24 + 200;
          }
          iVar26 = *(int *)(lVar39 + (ulonglong)
                                     (*(int *)(lVar24 + 0xd8) - 1U &
                                     (int)((ulonglong)lVar8 >> 0x20) +
                                     ((uint)lVar8 << 0x10 | uVar31) +
                                     (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar31 >> 4)) * 4);
          if (iVar26 != -1) {
            do {
              plVar29 = (longlong *)(*(longlong *)(lVar24 + 0x90) + (longlong)iVar26 * 0x14);
              if (*plVar29 == lVar8) {
                if (((plVar29 != (longlong *)0x0) && (plVar29 + 1 != (longlong *)0x0)) &&
                   ((int)plVar29[1] != -1)) goto LAB_142b4eae3;
                break;
              }
              iVar26 = *(int *)((longlong)plVar29 + 0xc);
            } while (iVar26 != -1);
          }
        }
        uVar28 = *(uint *)(param_1 + 0x48);
        if (uVar35 != uVar28) {
          pvVar2 = (void *)(*plVar1 + uVar35 * 8);
          memmove((void *)((longlong)pvVar2 + -8),pvVar2,(longlong)(int)(uVar28 - (int)uVar35) << 3)
          ;
          uVar28 = *(uint *)(param_1 + 0x48);
        }
        *(uint *)(param_1 + 0x48) = uVar28 - 1;
        FUN_145853056(plVar1);
LAB_142b4eae3:
        bVar10 = 1 < (longlong)uVar35;
        uVar35 = uVar35 - 1;
      } while (bVar10);
      if (iVar21 != *(int *)(param_1 + 0x48)) {
        FUN_140c3cd28(param_1);
        FUN_14058bb8c(param_1);
      }
    }
    lVar8 = DAT_14c9ab9d8;
    iVar21 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar21 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar21 == 2)) {
      uVar35 = 0;
    }
    else if (iVar21 == 1) {
      DVar22 = FUN_140ad26c0();
      DVar23 = GetCurrentThreadId();
      uVar35 = (ulonglong)(DVar22 != DVar23);
    }
    else {
      uVar35 = 1;
    }
    uStack_170 = (double)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
    uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
    if ((*(int *)(lVar8 + uVar35 * 4) == 1) &&
       (uStack_170 = (double)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170),
       uStack_168 = (double)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168),
       (longlong)*(int *)(param_1 + 0x48) != 0)) {
      plVar38 = *(longlong **)(param_1 + 0x40);
      plVar29 = plVar38 + *(int *)(param_1 + 0x48);
      local_498._0_8_ = plVar29;
      local_440 = plVar1;
      local_430 = lVar24;
      do {
        lVar8 = *plVar38;
        iVar21 = *(int *)(lVar8 + 0x60);
        if (1 < iVar21) {
          plVar1 = (longlong *)(lVar8 + 0x58);
          uVar35 = 0;
          do {
            uVar25 = uVar35 + 1;
            if ((longlong)uVar25 < (longlong)iVar21) {
              lVar39 = uVar35 * 0x68;
              uVar35 = uVar25 & 0xffffffff;
              do {
                uStack_170._0_4_ = 0;
                uStack_170._4_4_ = 0;
                uStack_168._0_4_ = 0;
                uStack_168._4_4_ = 2;
                bStack_160 = bStack_160 | 1;
                uStack_15f = 3;
                local_158 = (double)CONCAT44(local_158._4_4_,6);
                local_150 = &local_178;
                local_178 = &PTR_FUN_14a1dee70;
                local_138 = DAT_14c8464f0;
                local_148 = DAT_14c8464e0;
                dStack_140 = DAT_14c8464e8;
                uStack_120 = DAT_14c846508;
                dStack_130 = DAT_14c8464f8;
                dStack_128 = DAT_14c846500;
                local_118 = &DAT_3f8000003f800000;
                cVar20 = FUN_142b50702(*plVar1 + lVar39,(longlong)(int)uVar35 * 0x68 + *plVar1);
                if (cVar20 == '\0') {
                  uVar35 = (ulonglong)((int)uVar35 + 1);
                }
                else {
                  lVar24 = *plVar1;
                  *(undefined4 *)(lVar24 + 8 + lVar39) = (undefined4)uStack_170;
                  *(undefined4 *)(lVar24 + 0x14 + lVar39) = uStack_168._4_4_;
                  *(ulonglong *)(lVar24 + 0xc + lVar39) =
                       CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
                  *(byte *)(lVar24 + 0x18 + lVar39) =
                       *(byte *)(lVar24 + 0x18 + lVar39) & 0xfe | bStack_160 & 1;
                  *(undefined1 *)(lVar24 + 0x19 + lVar39) = uStack_15f;
                  auVar50._8_8_ = dStack_130;
                  auVar50._0_8_ = local_138;
                  auVar54._8_8_ = uStack_120;
                  auVar54._0_8_ = dStack_128;
                  pdVar6 = (double *)(lVar24 + 0x30 + lVar39);
                  *pdVar6 = local_148;
                  pdVar6[1] = dStack_140;
                  *(undefined1 (*) [16])(lVar24 + 0x40 + lVar39) = auVar50;
                  *(undefined1 (*) [16])(lVar24 + 0x50 + lVar39) = auVar54;
                  *(undefined1 **)(lVar24 + 0x60 + lVar39) = local_118;
                  FUN_140931d2e(plVar1,uVar35,1);
                }
                iVar21 = *(int *)(lVar8 + 0x60);
                lVar24 = local_430;
              } while ((int)uVar35 < iVar21);
            }
            plVar29 = (longlong *)local_498._0_8_;
            uVar35 = uVar25;
          } while ((longlong)uVar25 < (longlong)(iVar21 + -1));
        }
        plVar38 = plVar38 + 1;
      } while (plVar38 != plVar29);
      if ((longlong)*(int *)(param_1 + 0x48) != 0) {
        plVar29 = *(longlong **)(param_1 + 0x40);
        plVar1 = plVar29 + *(int *)(param_1 + 0x48);
        local_438 = lVar24 + 200;
        local_448 = param_1 + 0xd0;
        do {
          lVar8 = *plVar29;
          if (1 < *(int *)(lVar8 + 0x60)) {
            lVar39 = *(longlong *)(lVar8 + 0x28);
            uVar28 = 0xffffffff;
            if ((lVar39 != 0) && (*(int *)(lVar24 + 0x98) != *(int *)(lVar24 + 0xc4))) {
              uVar31 = (uint)((ulonglong)lVar39 >> 0x10);
              uVar30 = (uint)lVar39 & 0xffff;
              lVar33 = *(longlong *)(lVar24 + 0xd0);
              if (*(longlong *)(lVar24 + 0xd0) == 0) {
                lVar33 = local_438;
              }
              iVar21 = *(int *)(lVar33 + (ulonglong)
                                         (*(int *)(lVar24 + 0xd8) - 1U &
                                         (int)((ulonglong)lVar39 >> 0x20) +
                                         ((uint)lVar39 << 0x10 | uVar30) +
                                         (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar30 >> 4)) * 4);
              if (iVar21 != -1) {
                do {
                  plVar38 = (longlong *)(*(longlong *)(lVar24 + 0x90) + (longlong)iVar21 * 0x14);
                  if (*plVar38 == lVar39) {
                    if ((plVar38 != (longlong *)0x0) && ((uint *)(plVar38 + 1) != (uint *)0x0)) {
                      uVar28 = *(uint *)(plVar38 + 1);
                    }
                    break;
                  }
                  iVar21 = *(int *)((longlong)plVar38 + 0xc);
                } while (iVar21 != -1);
              }
            }
            iVar21 = FUN_1436354f6(param_1,lVar24,uVar28);
            if ((iVar21 != -1) &&
               (local_480 = *(longlong *)(*local_440 + (longlong)iVar21 * 8), local_480 != 0)) {
              plVar38 = (longlong *)(lVar8 + 0x58);
              local_498._8_8_ = DAT_14c8464a8;
              local_498._0_8_ = DAT_14c8464a0;
              auVar75 = _DAT_14c8464d0;
              auVar78 = _DAT_14c8464c0;
              auVar84 = _DAT_14c846490;
              dVar60 = DAT_14c846480;
              dVar66 = DAT_14c846488;
              dVar81 = DAT_14c8464b0;
              dVar82 = DAT_14c8464b8;
              while( true ) {
                lVar39 = *(longlong *)(lVar24 + 0x10);
                lVar33 = (longlong)(int)uVar28 * 0x60;
                pauVar3 = (undefined1 (*) [16])(lVar39 + lVar33);
                auVar50 = *(undefined1 (*) [16])(lVar39 + 0x40 + lVar33);
                dVar45 = auVar50._0_8_;
                dVar46 = auVar50._8_8_;
                auVar54 = *(undefined1 (*) [16])(lVar39 + 0x50 + lVar33);
                dVar53 = auVar54._0_8_;
                dVar49 = auVar54._8_8_;
                dVar40 = auVar78._0_8_;
                dVar68 = auVar78._8_8_;
                auVar50 = minpd(auVar78,auVar50);
                dVar73 = auVar75._0_8_;
                auVar54 = minpd(auVar75,auVar54);
                auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
                auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
                iVar26 = movmskpd((int)lVar39,auVar51);
                auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
                auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
                uVar31 = movmskpd((int)lVar33,auVar55);
                dVar71 = auVar84._0_8_;
                dVar69 = auVar84._8_8_;
                if ((uVar31 & 0x3fffffff) == 0 && iVar26 == 0) {
                  dVar67 = SUB168(*pauVar3,0);
                  dVar74 = SUB168(*pauVar3,8);
                  dVar14 = *(double *)pauVar3[1];
                  dVar15 = *(double *)(pauVar3[1] + 8);
                  dVar7 = *(double *)(pauVar3[1] + 8);
                  dVar72 = *(double *)(pauVar3[1] + 8);
                  dVar11 = *(double *)*pauVar3 * dVar66;
                  dVar12 = *(double *)*pauVar3 * dVar60;
                  dVar76 = *(double *)(*pauVar3 + 8);
                  dVar59 = *(double *)(*pauVar3 + 8);
                  dVar77 = dVar60 * dVar76;
                  dVar79 = dVar66 * dVar59;
                  dVar62 = *(double *)pauVar3[1];
                  dVar61 = *(double *)pauVar3[1];
                  dVar65 = dVar60 * dVar61;
                  dVar60 = dVar66 * dVar62 * -1.0 +
                           dVar71 * dVar76 + dVar69 * *(double *)*pauVar3 * 1.0 + dVar60 * dVar7;
                  dVar66 = dVar65 * 1.0 +
                           dVar69 * dVar59 + dVar71 * *(double *)*pauVar3 * -1.0 + dVar66 * dVar72;
                  dVar83 = (double)local_498._0_8_ * dVar45;
                  dVar85 = (double)local_498._8_8_ * dVar46;
                  dVar81 = dVar81 * dVar53;
                  dVar82 = dVar82 * dVar49;
                  dVar76 = dVar85 * dVar67 - dVar83 * dVar74;
                  dVar59 = dVar81 * dVar74 - dVar85 * dVar14;
                  dVar65 = dVar83 * dVar14 - dVar81 * dVar67;
                  dVar80 = dVar82 * dVar15 - dVar82 * dVar15;
                  dVar59 = dVar59 + dVar59;
                  dVar65 = dVar65 + dVar65;
                  dVar76 = dVar76 + dVar76;
                  dVar80 = dVar80 + dVar80;
                  dVar85 = (dVar59 * dVar14 - dVar76 * dVar67) + dVar72 * dVar65 + dVar85 +
                           *(double *)(pauVar3[2] + 8);
                  dVar82 = (dVar80 * dVar15 - dVar80 * dVar15) + dVar72 * dVar80 + dVar82 +
                           *(double *)(pauVar3[3] + 8);
                  auVar84._8_8_ =
                       dVar71 * dVar61 * -1.0 + ((dVar12 * -1.0 + dVar69 * dVar72) - dVar79);
                  auVar84._0_8_ = dVar69 * dVar62 * 1.0 + ((dVar11 * 1.0 + dVar71 * dVar7) - dVar77)
                  ;
                  local_498._8_4_ = SUB84(dVar85,0);
                  local_498._0_8_ =
                       (dVar76 * dVar74 - dVar14 * dVar65) + dVar7 * dVar59 + dVar83 +
                       *(double *)pauVar3[2];
                  local_498._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
                  auVar78._8_8_ = dVar68 * dVar46;
                  auVar78._0_8_ = dVar40 * dVar45;
                  auVar75._8_8_ = auVar75._8_8_ * dVar49;
                  auVar75._0_8_ = dVar73 * dVar53;
                  dVar81 = (dVar65 * dVar67 - dVar74 * dVar59) + dVar7 * dVar76 + dVar81 +
                           *(double *)pauVar3[3];
                }
                else {
                  local_468 = dVar73 * dVar53;
                  dStack_460 = auVar75._8_8_ * dVar49;
                  dVar72 = *(double *)*pauVar3;
                  dVar7 = *(double *)(*pauVar3 + 8);
                  dVar76 = *(double *)pauVar3[1];
                  dVar59 = dVar7 + dVar7;
                  dVar61 = dVar76 + dVar76;
                  dVar49 = dVar72 * (dVar72 + dVar72);
                  local_1a8 = (1.0 - (dVar49 + dVar7 * dVar59)) * dVar53;
                  dVar74 = *(double *)*pauVar3 * dVar61;
                  dVar82 = *(double *)(pauVar3[1] + 8);
                  dVar62 = dVar61 * dVar82;
                  dVar67 = (dVar72 + dVar72) * *(double *)(pauVar3[1] + 8);
                  dVar82 = dVar59 * dVar82;
                  local_1d8 = (dVar59 * dVar72 - dVar62) * dVar46;
                  local_478._8_8_ = dVar68 * dVar46;
                  local_478._0_8_ = dVar40 * dVar45;
                  local_1f8 = (1.0 - (dVar76 * dVar61 + dVar7 * dVar59)) * dVar45;
                  dStack_1d0 = (1.0 - (dVar76 * dVar61 + dVar49)) * dVar46;
                  dStack_1f0 = (dVar59 * dVar72 + dVar62) * dVar45;
                  local_1c8 = (dVar61 * dVar7 + dVar67) * dVar46;
                  local_1e8 = (dVar74 - dVar82) * dVar45;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  local_1b8._8_8_ = (dVar61 * dVar7 - dVar67) * dVar53;
                  local_1b8._0_8_ = (dVar82 + dVar74) * dVar53;
                  uStack_1a0 = 0;
                  local_198 = *(double *)pauVar3[2];
                  dStack_190 = *(double *)(pauVar3[2] + 8);
                  local_188 = *(double *)pauVar3[3];
                  uStack_180 = 0x3ff0000000000000;
                  dVar82 = dVar66 + dVar66;
                  dVar53 = dVar71 + dVar71;
                  dVar45 = dVar60 * (dVar60 + dVar60);
                  local_228 = (1.0 - (dVar45 + dVar66 * dVar82)) * dVar73;
                  dVar46 = (dVar60 + dVar60) * dVar69;
                  local_258 = (dVar82 * dVar60 - dVar53 * dVar69) * dVar68;
                  local_278 = (1.0 - (dVar71 * dVar53 + dVar66 * dVar82)) * dVar40;
                  dStack_250 = (1.0 - (dVar71 * dVar53 + dVar45)) * dVar68;
                  dStack_270 = (dVar82 * dVar60 + dVar53 * dVar69) * dVar40;
                  local_248 = (dVar53 * dVar66 + dVar46) * dVar68;
                  local_268 = (dVar60 * dVar53 - dVar82 * dVar69) * dVar40;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  local_238._8_8_ = (dVar53 * dVar66 - dVar46) * dVar73;
                  local_238._0_8_ = (dVar82 * dVar69 + dVar60 * dVar53) * dVar73;
                  uStack_220 = 0;
                  local_218 = (double)local_498._0_8_;
                  dStack_210 = (double)local_498._8_8_;
                  uStack_200 = 0x3ff0000000000000;
                  local_4a0 = (longlong *)CONCAT44(local_4a0._4_4_,iVar21);
                  local_208 = dVar81;
                  FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                  auVar78 = local_478;
                  auVar50 = _DAT_149934d80;
                  dVar66 = uStack_168 * uStack_168 +
                           (double)local_178 * (double)local_178 + uStack_170 * uStack_170;
                  dVar81 = local_148 * local_148 +
                           local_158 * local_158 + (double)local_150 * (double)local_150;
                  dVar60 = dStack_128 * dStack_128 + local_138 * local_138 + dStack_130 * dStack_130
                  ;
                  uVar35 = -(ulonglong)(0.0 <= dVar66 + -9.99999993922529e-09);
                  dVar66 = (double)(~uVar35 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar66)) & uVar35);
                  uVar35 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
                  dVar81 = (double)(~uVar35 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar81)) & uVar35);
                  uVar35 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
                  dVar60 = (double)(~uVar35 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar60)) & uVar35);
                  auVar41._8_8_ = -(ulonglong)(0.0 <= local_478._8_8_);
                  auVar41._0_8_ = -(ulonglong)(0.0 <= local_478._0_8_);
                  auVar54 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar41);
                  auVar75._8_8_ = dStack_460;
                  auVar75._0_8_ = local_468;
                  dVar82 = (double)(~-(ulonglong)(0.0 <= local_468) & 0xbff0000000000000 |
                                   (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= local_468) >> 0x20) & 0x3ff00000) <<
                                   0x20);
                  dVar45 = auVar54._0_8_;
                  local_178 = (undefined **)((double)local_178 * dVar66 * dVar45);
                  uStack_170 = uStack_170 * dVar66 * dVar45;
                  uStack_168 = dVar66 * uStack_168 * dVar45;
                  dVar66 = auVar54._8_8_;
                  local_148 = dVar81 * local_148 * dVar66;
                  local_150 = (undefined ***)((double)local_150 * dVar81 * dVar66);
                  local_158 = dVar66 * local_158 * dVar81;
                  dStack_128 = dVar60 * dStack_128 * dVar82;
                  dStack_130 = dStack_130 * dVar60 * dVar82;
                  local_138 = dVar82 * local_138 * dVar60;
                  FUN_14481fd10(&local_308,&local_178);
                  dVar66 = (double)CONCAT44(uStack_2fc,uStack_300);
                  dVar60 = (double)CONCAT44(uStack_2f4,uStack_2f8);
                  dVar81 = (double)CONCAT62(uStack_2ee,CONCAT11(uStack_2ef,bStack_2f0));
                  dVar82 = dVar60 * dVar60 + (double)local_308 * (double)local_308;
                  dVar45 = dVar81 * dVar81 + dVar66 * dVar66;
                  auVar52._0_8_ = dVar82 + dVar45;
                  auVar52._8_8_ = dVar82 + dVar45;
                  auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
                  auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
                  auVar54 = sqrtpd(auVar52,auVar52);
                  auVar50 = divpd(auVar50,auVar54);
                  auVar56._0_8_ = auVar50._0_8_ * dVar60;
                  auVar56._8_8_ = auVar50._8_8_ * dVar81;
                  auVar84 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar42);
                  local_498._8_8_ = dStack_110;
                  local_498._0_8_ = local_118;
                  dVar60 = (double)((ulonglong)((double)local_308 * auVar50._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
                  dVar66 = (double)((ulonglong)(dVar66 * auVar50._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
                  dVar82 = 0.0;
                  dVar81 = local_108;
                  iVar21 = (int)local_4a0;
                }
                uVar31 = 0xffffffff;
                if ((-1 < (int)uVar28) && ((int)uVar28 < *(int *)(lVar24 + 0x28))) {
                  uVar31 = *(uint *)(*(longlong *)(lVar24 + 0x20) + 8 + (ulonglong)uVar28 * 0xc);
                }
                uVar28 = uVar31;
                if (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xcc)) break;
                lVar39 = *(longlong *)(*(longlong *)(lVar24 + 0x20) + (longlong)(int)uVar28 * 0xc);
                uVar31 = (uint)((ulonglong)lVar39 >> 0x10);
                uVar30 = (uint)lVar39 & 0xffff;
                lVar33 = *(longlong *)(param_1 + 0xd8);
                if (*(longlong *)(param_1 + 0xd8) == 0) {
                  lVar33 = local_448;
                }
                iVar26 = *(int *)(lVar33 + (ulonglong)
                                           (*(int *)(param_1 + 0xe0) - 1U &
                                           (int)((ulonglong)lVar39 >> 0x20) +
                                           ((uint)lVar39 << 0x10 | uVar30) +
                                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar30 >> 4)) * 4);
                if (iVar26 == -1) break;
                while (plVar4 = (longlong *)
                                (*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 0x14),
                      *plVar4 != lVar39) {
                  iVar26 = *(int *)((longlong)plVar4 + 0xc);
                  if (iVar26 == -1) goto LAB_142b4f7bf;
                }
                if ((((plVar4 == (longlong *)0x0) || (plVar4 + 1 == (longlong *)0x0)) ||
                    (iVar26 = (int)plVar4[1], iVar21 == iVar26)) || (iVar26 == -1)) break;
              }
LAB_142b4f7bf:
              uVar35 = (ulonglong)*(int *)(lVar8 + 0x60);
              if ((longlong)uVar35 < 2) {
                uVar25 = 0;
              }
              else {
                pfVar34 = (float *)(*plVar38 + 200);
                uVar25 = 0;
                uVar36 = 1;
                do {
                  pfVar5 = (float *)(*plVar38 + 0x60 + (longlong)(int)uVar25 * 0x68);
                  uVar19 = uVar36 & 0xffffffff;
                  if (*pfVar34 < *pfVar5 || *pfVar34 == *pfVar5) {
                    uVar19 = uVar25;
                  }
                  uVar25 = uVar19;
                  uVar36 = uVar36 + 1;
                  pfVar34 = pfVar34 + 0x1a;
                } while (uVar35 != uVar36);
              }
              if (0 < *(int *)(lVar8 + 0x60)) {
                dVar45 = dVar66 + dVar66;
                dStack_370 = auVar84._0_8_;
                dStack_360 = auVar84._8_8_;
                dVar46 = dStack_370 + dStack_370;
                dVar53 = dVar60 * (dVar60 + dVar60);
                dVar40 = auVar78._0_8_;
                local_3d8 = ((double)DAT_149934d80 - (dStack_370 * dVar46 + dVar66 * dVar45)) *
                            dVar40;
                dVar68 = auVar78._8_8_;
                dStack_390 = (DAT_149934d80._8_8_ - (dStack_370 * dVar46 + dVar53)) * dVar68;
                dVar73 = auVar75._0_8_;
                local_3b8 = (1.0 - (dVar53 + dVar66 * dVar45)) * dVar73;
                dVar49 = (dVar60 + dVar60) * dStack_360;
                dVar53 = dVar45 * dStack_360;
                dStack_3d0 = (dVar45 * dVar60 + dVar46 * dStack_360) * dVar40;
                local_3a8 = (dVar46 * dVar66 + dVar49) * dVar68;
                local_398 = (dVar45 * dVar60 - dVar46 * dStack_360) * dVar68;
                dVar45 = (dVar46 * dVar66 - dVar49) * dVar73;
                local_3c8 = (dVar60 * dVar46 - dVar53) * dVar40;
                uStack_3b0 = 0;
                uStack_3c0 = 0;
                uStack_3a0 = 0;
                uStack_3e0 = 0x3ff0000000000000;
                auVar43._8_8_ = -(ulonglong)(0.0 <= dVar68);
                auVar43._0_8_ = -(ulonglong)(0.0 <= dVar40);
                local_3f8 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar43);
                local_408._8_8_ = 0;
                local_408._0_8_ =
                     ~-(ulonglong)(0.0 <= dVar73) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar73) & 0x3ff0000000000000;
                local_418._8_8_ = local_3f8._8_8_;
                local_418._0_8_ = local_418._8_8_;
                iVar21 = 0;
                local_484 = (uint)uVar25;
                local_4a0 = plVar38;
                local_478 = auVar78;
                local_468 = dVar81;
                dStack_460 = dVar82;
                local_3e8 = dVar81;
                local_388 = auVar84;
                local_378 = dVar66;
                local_368 = dVar60;
                local_358 = dStack_370;
                dStack_350 = dStack_370;
                local_348 = dVar66;
                dStack_340 = dVar66;
                local_338 = dStack_360;
                dStack_330 = dStack_360;
                local_328 = dVar60;
                dStack_320 = dVar60;
                local_318 = dVar60;
                dStack_310 = dVar66;
                do {
                  iVar26 = (int)uVar25;
                  if (iVar21 != (int)uVar25) {
                    lVar39 = *plVar38;
                    lVar33 = (longlong)iVar21 * 0x68;
                    uStack_300 = *(undefined4 *)(lVar39 + 8 + lVar33);
                    uVar9 = *(undefined8 *)(lVar39 + 0xc + lVar33);
                    uStack_2fc = (undefined4)uVar9;
                    uStack_2f8 = (undefined4)((ulonglong)uVar9 >> 0x20);
                    uStack_2f4 = *(undefined4 *)(lVar39 + 0x14 + lVar33);
                    bStack_2f0 = bStack_2f0 & 0xfe | *(byte *)(lVar39 + 0x18 + lVar33) & 1;
                    uStack_2ef = *(undefined1 *)(lVar39 + 0x19 + lVar33);
                    local_2e8 = 6;
                    local_2e0 = &local_308;
                    local_308 = &PTR_FUN_14a1dee70;
                    local_2a8 = *(undefined8 *)(lVar39 + 0x60 + lVar33);
                    pdVar6 = (double *)(lVar39 + 0x30 + lVar33);
                    local_2d8._0_8_ = *pdVar6;
                    local_2d8._8_8_ = pdVar6[1];
                    pdVar6 = (double *)(lVar39 + 0x40 + lVar33);
                    local_2c8 = *pdVar6;
                    dStack_2c0 = pdVar6[1];
                    pdVar6 = (double *)(lVar39 + 0x50 + lVar33);
                    local_2b8 = *pdVar6;
                    dStack_2b0 = pdVar6[1];
                    auVar16._8_8_ = local_2b8;
                    auVar16._0_8_ = dStack_2c0;
                    auVar50 = divpd(auVar16,_DAT_1499387d0);
                    auVar47._8_8_ = 0;
                    auVar47._0_8_ = dStack_2b0;
                    auVar54 = divpd(auVar47,_DAT_1499387d0);
                    auVar50 = roundpd(auVar50,auVar50,3);
                    auVar54 = roundpd(auVar54,auVar54,3);
                    dVar68 = (dStack_2c0 - auVar50._0_8_ * (double)DAT_1499387d0) *
                             0.008726646259971648;
                    dVar71 = (local_2b8 - auVar50._8_8_ * DAT_1499387d0._8_8_) *
                             0.008726646259971648;
                    dVar66 = (dStack_2b0 - auVar54._0_8_ * (double)DAT_1499387d0) *
                             0.008726646259971648;
                    dVar81 = (0.0 - auVar54._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar82 = sin(dVar68);
                    uVar27 = (undefined4)lVar33;
                    dVar49 = sin(dVar71);
                    dVar40 = sin(dVar66);
                    sin(dVar81);
                    dVar68 = cos(dVar68);
                    dVar71 = cos(dVar71);
                    dVar66 = cos(dVar66);
                    cos(dVar81);
                    dVar69 = -(dVar71 * dVar82 * dVar40) + dVar49 * dVar68 * dVar66;
                    dVar72 = dVar49 * dVar82 * dVar40 + dVar71 * dVar68 * dVar66;
                    dVar81 = dVar82 * dVar49 * dVar66 - dVar68 * dVar71 * dVar40;
                    dVar66 = -(dVar82 * dVar71 * dVar66) - dVar68 * dVar49 * dVar40;
                    auVar50 = minpd(_DAT_149934d80,local_478);
                    auVar54 = minpd(ZEXT816(0x3ff0000000000000),auVar75);
                    auVar57._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
                    auVar57._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
                    iVar26 = movmskpd(extraout_EAX,auVar57);
                    auVar63._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
                    auVar63._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
                    uVar28 = movmskpd(uVar27,auVar63);
                    if ((uVar28 & 0x3fffffff) == 0 && iVar26 == 0) {
                      auVar48._0_8_ =
                           dVar66 * local_358 * -1.0 +
                           local_328 * dVar72 * 1.0 + local_338 * dVar81 + local_348 * dVar69;
                      auVar48._8_8_ =
                           dVar81 * dStack_350 * 1.0 +
                           dStack_320 * dVar69 * -1.0 + dStack_330 * dVar66 + dStack_340 * dVar72;
                      auVar70._0_8_ =
                           dVar72 * local_358 * 1.0 +
                           ((local_328 * dVar66 * 1.0 + local_338 * dVar69) - local_348 * dVar81);
                      auVar70._8_8_ =
                           dVar69 * dStack_350 * -1.0 +
                           ((dStack_320 * dVar81 * -1.0 + dStack_330 * dVar72) - dStack_340 * dVar66
                           );
                      dVar66 = (double)local_2d8._0_8_ * local_478._0_8_;
                      dVar40 = (double)local_2d8._8_8_ * local_478._8_8_;
                      dVar68 = local_2c8 * auVar75._0_8_;
                      dVar81 = dVar40 * local_318 - local_378 * dVar66;
                      dVar82 = dVar68 * dStack_310 - dStack_370 * dVar40;
                      dVar49 = dVar66 * local_388._0_8_ - local_368 * dVar68;
                      dVar82 = dVar82 + dVar82;
                      dVar49 = dVar49 + dVar49;
                      dVar81 = dVar81 + dVar81;
                      puVar13 = (undefined1 *)
                                ((dVar81 * dStack_310 - dStack_370 * dVar49) +
                                 local_338 * dVar82 + dVar66 + (double)local_498._0_8_);
                      dVar66 = (dVar82 * local_388._0_8_ - dVar81 * local_368) +
                               dStack_330 * dVar49 + dVar40 + (double)local_498._8_8_;
                      dVar81 = (dVar49 * local_318 - local_378 * dVar82) +
                               local_338 * dVar81 + dVar68 + local_468;
                    }
                    else {
                      dVar49 = dVar66 + dVar66;
                      dVar40 = dVar69 + dVar69;
                      dVar82 = dVar81 * (dVar81 + dVar81);
                      local_278 = 1.0 - (dVar69 * dVar40 + dVar66 * dVar49);
                      dStack_250 = 1.0 - (dVar69 * dVar40 + dVar82);
                      local_228 = 1.0 - (dVar82 + dVar66 * dVar49);
                      dVar82 = (dVar81 + dVar81) * dVar72;
                      dStack_270 = dVar49 * dVar81 + dVar40 * dVar72;
                      local_248 = dVar40 * dVar66 + dVar82;
                      local_258 = dVar49 * dVar81 - dVar40 * dVar72;
                      dVar82 = dVar40 * dVar66 - dVar82;
                      local_268 = dVar81 * dVar40 - dVar49 * dVar72;
                      uStack_260 = 0;
                      uStack_240 = 0;
                      local_238._8_4_ = SUB84(dVar82,0);
                      local_238._0_8_ = dVar49 * dVar72 + dVar81 * dVar40;
                      local_238._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
                      uStack_220 = 0;
                      local_218 = (double)local_2d8._0_8_;
                      dStack_210 = (double)local_2d8._8_8_;
                      local_208 = local_2c8;
                      uStack_200 = 0x3ff0000000000000;
                      local_1f8 = local_3d8;
                      dStack_1f0 = dStack_3d0;
                      local_1e8 = local_3c8;
                      uStack_1e0 = uStack_3c0;
                      local_1d8 = local_398;
                      dStack_1d0 = dStack_390;
                      local_1c8 = local_3a8;
                      uStack_1c0 = uStack_3a0;
                      local_1b8._8_4_ = SUB84(dVar45,0);
                      local_1b8._0_8_ = (dVar53 + dVar60 * dVar46) * dVar73;
                      local_1b8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                      local_1a8 = local_3b8;
                      uStack_1a0 = uStack_3b0;
                      local_198 = (double)local_498._0_8_;
                      dStack_190 = (double)local_498._8_8_;
                      local_188 = local_3e8;
                      uStack_180 = uStack_3e0;
                      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                      local_450 = uStack_168;
                      dVar66 = uStack_168 * uStack_168 +
                               (double)local_178 * (double)local_178 + uStack_170 * uStack_170;
                      dVar81 = local_148 * local_148 +
                               local_158 * local_158 + (double)local_150 * (double)local_150;
                      dVar82 = dStack_128 * dStack_128 +
                               local_138 * local_138 + dStack_130 * dStack_130;
                      uVar35 = -(ulonglong)(0.0 <= dVar66 + -9.99999993922529e-09);
                      dVar66 = (double)(~uVar35 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar66)) & uVar35);
                      uVar35 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
                      dVar81 = (double)(~uVar35 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar81)) & uVar35);
                      uVar35 = -(ulonglong)(0.0 <= dVar82 + -9.99999993922529e-09);
                      dVar82 = (double)(~uVar35 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar82)) & uVar35);
                      local_178 = (undefined **)
                                  ((double)local_178 * dVar66 * (double)local_3f8._0_8_);
                      uStack_170 = uStack_170 * dVar66 * (double)local_3f8._0_8_;
                      uStack_168 = dVar66 * uStack_168 * (double)local_3f8._0_8_;
                      local_158 = local_158 * dVar81 * (double)local_418._0_8_;
                      local_150 = (undefined ***)
                                  ((double)local_150 * dVar81 * (double)local_418._0_8_);
                      local_148 = dVar81 * local_148 * (double)local_418._0_8_;
                      local_138 = local_138 * dVar82 * (double)local_408._0_8_;
                      dStack_130 = dStack_130 * dVar82 * (double)local_408._0_8_;
                      dStack_128 = dVar82 * dStack_128 * (double)local_408._0_8_;
                      local_428 = auVar75;
                      FUN_14481fd10(&local_298,&local_178);
                      dVar66 = local_288._0_8_;
                      dVar81 = local_288._8_8_;
                      dVar82 = dVar66 * dVar66 + local_298 * local_298;
                      dVar49 = dVar81 * dVar81 + dStack_290 * dStack_290;
                      auVar58._0_8_ = dVar82 + dVar49;
                      auVar58._8_8_ = dVar82 + dVar49;
                      auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
                      auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
                      auVar50 = sqrtpd(auVar58,auVar58);
                      auVar50 = divpd(_DAT_149934d80,auVar50);
                      auVar64._0_8_ = auVar50._0_8_ * dVar66;
                      auVar64._8_8_ = auVar50._8_8_ * dVar81;
                      auVar48._0_8_ =
                           (double)((ulonglong)(local_298 * auVar50._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_));
                      auVar48._8_8_ =
                           (double)((ulonglong)(dStack_290 * auVar50._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_));
                      auVar70 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar44);
                      auVar75 = local_428;
                      puVar13 = local_118;
                      dVar66 = dStack_110;
                      dVar81 = local_108;
                    }
                    local_178 = auVar48._0_8_;
                    uStack_170._0_4_ = auVar48._8_4_;
                    uStack_170._4_4_ = auVar48._12_4_;
                    uStack_168._0_4_ = auVar70._0_4_;
                    uStack_168._4_4_ = auVar70._4_4_;
                    bStack_160 = auVar70[8];
                    uStack_15f = auVar70[9];
                    uStack_15e = auVar70._10_6_;
                    FUN_1448052ee(&local_178,&local_1f8);
                    dStack_2b0 = local_1e8;
                    dStack_2c0 = local_1f8;
                    local_2b8 = dStack_1f0;
                    uStack_170._0_4_ = 0;
                    uStack_170._4_4_ = 0;
                    uStack_168._0_4_ = 0;
                    uStack_168._4_4_ = 2;
                    bStack_160 = bStack_160 | 1;
                    local_2d8._8_4_ = SUB84(dVar66,0);
                    local_2d8._0_8_ = puVar13;
                    local_2d8._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
                    uStack_15f = 3;
                    local_158 = (double)CONCAT44(local_158._4_4_,6);
                    local_178 = &PTR_FUN_14a1dee70;
                    local_138 = DAT_14c8464f0;
                    local_148 = DAT_14c8464e0;
                    dStack_140 = DAT_14c8464e8;
                    uStack_120 = DAT_14c846508;
                    dStack_130 = DAT_14c8464f8;
                    dStack_128 = DAT_14c846500;
                    local_118 = &DAT_3f8000003f800000;
                    local_2c8 = dVar81;
                    local_150 = &local_178;
                    cVar20 = FUN_142b50702(&local_308,*(undefined8 *)(local_480 + 0x58),&local_178);
                    plVar38 = local_4a0;
                    if (cVar20 != '\0') {
                      lVar39 = *(longlong *)(local_480 + 0x58);
                      *(undefined4 *)(lVar39 + 8) = (undefined4)uStack_170;
                      *(undefined4 *)(lVar39 + 0x14) = uStack_168._4_4_;
                      *(ulonglong *)(lVar39 + 0xc) =
                           CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
                      *(byte *)(lVar39 + 0x18) = *(byte *)(lVar39 + 0x18) & 0xfe | bStack_160 & 1;
                      *(undefined1 *)(lVar39 + 0x19) = uStack_15f;
                      auVar17._8_8_ = dStack_130;
                      auVar17._0_8_ = local_138;
                      auVar18._8_8_ = uStack_120;
                      auVar18._0_8_ = dStack_128;
                      *(double *)(lVar39 + 0x30) = local_148;
                      *(double *)(lVar39 + 0x38) = dStack_140;
                      *(undefined1 (*) [16])(lVar39 + 0x40) = auVar17;
                      *(undefined1 (*) [16])(lVar39 + 0x50) = auVar18;
                      *(undefined1 **)(lVar39 + 0x60) = local_118;
                      FUN_140931d2e(local_4a0,iVar21,1);
                      iVar21 = iVar21 + -1;
                    }
                    uVar35 = (ulonglong)*(uint *)(lVar8 + 0x60);
                    uVar25 = (ulonglong)local_484;
                    iVar26 = iVar21;
                  }
                  iVar21 = iVar26 + 1;
                } while (iVar21 < (int)uVar35);
              }
            }
          }
          plVar29 = plVar29 + 1;
        } while (plVar29 != plVar1);
      }
    }
    iVar21 = *(int *)(param_1 + 0x58);
    uVar35 = (ulonglong)iVar21;
    if (0 < (longlong)uVar35) {
      plVar1 = (longlong *)(param_1 + 0x50);
      uVar25 = uVar35;
      do {
        lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x50) + -8 + uVar25 * 8);
        lVar8 = *(longlong *)(lVar24 + 0x80);
        iVar26 = *(int *)(param_1 + 0xa0);
        iVar32 = *(int *)(param_1 + 0xcc);
        if (iVar26 != iVar32) {
          lVar24 = *(longlong *)(lVar24 + 0x78);
          uVar28 = (uint)((ulonglong)lVar24 >> 0x10);
          uVar31 = (uint)lVar24 & 0xffff;
          lVar39 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar39 = param_1 + 0xd0;
          }
          iVar37 = *(int *)(lVar39 + (ulonglong)
                                     (*(int *)(param_1 + 0xe0) - 1U &
                                     (int)((ulonglong)lVar24 >> 0x20) +
                                     ((uint)lVar24 << 0x10 | uVar31) +
                                     (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar31 >> 4)) * 4);
          if (iVar37 != -1) {
            do {
              plVar29 = (longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar37 * 0x14);
              if (*plVar29 == lVar24) {
                if (((plVar29 != (longlong *)0x0) && (plVar29 + 1 != (longlong *)0x0)) &&
                   ((int)plVar29[1] != -1)) goto LAB_142b50580;
                break;
              }
              iVar37 = *(int *)((longlong)plVar29 + 0xc);
            } while (iVar37 != -1);
          }
        }
        uVar28 = *(uint *)(param_1 + 0x58);
        if (uVar25 != uVar28) {
          pvVar2 = (void *)(*(longlong *)(param_1 + 0x50) + uVar25 * 8);
          memmove((void *)((longlong)pvVar2 + -8),pvVar2,(longlong)(int)(uVar28 - (int)uVar25) << 3)
          ;
          uVar28 = *(uint *)(param_1 + 0x58);
        }
        *(uint *)(param_1 + 0x58) = uVar28 - 1;
        FUN_1470fb792(plVar1);
        iVar26 = *(int *)(param_1 + 0xa0);
        iVar32 = *(int *)(param_1 + 0xcc);
LAB_142b50580:
        uVar36 = uVar25 - 1;
        if (iVar26 != iVar32) {
          uVar28 = (uint)((ulonglong)lVar8 >> 0x10);
          uVar31 = (uint)lVar8 & 0xffff;
          lVar24 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar24 = param_1 + 0xd0;
          }
          iVar26 = *(int *)(lVar24 + (ulonglong)
                                     (*(int *)(param_1 + 0xe0) - 1U &
                                     (int)((ulonglong)lVar8 >> 0x20) +
                                     ((uint)lVar8 << 0x10 | uVar31) +
                                     (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar31 >> 4)) * 4);
          if (iVar26 != -1) {
            do {
              plVar29 = (longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 0x14);
              if (*plVar29 == lVar8) {
                if (((plVar29 != (longlong *)0x0) && (plVar29 + 1 != (longlong *)0x0)) &&
                   ((int)plVar29[1] != -1)) goto LAB_142b5063d;
                break;
              }
              iVar26 = *(int *)((longlong)plVar29 + 0xc);
            } while (iVar26 != -1);
          }
        }
        uVar28 = *(uint *)(param_1 + 0x58);
        if (uVar25 != uVar28) {
          memmove((void *)(*(longlong *)(param_1 + 0x50) + uVar36 * 8),
                  (void *)(*(longlong *)(param_1 + 0x50) + uVar36 * 8 + 8),
                  (longlong)(int)(uVar28 - (int)uVar25) << 3);
          uVar28 = *(uint *)(param_1 + 0x58);
        }
        *(uint *)(param_1 + 0x58) = uVar28 - 1;
        FUN_1470fb792(plVar1);
LAB_142b5063d:
        bVar10 = 1 < uVar25;
        uVar25 = uVar36;
      } while (bVar10);
      if (iVar21 != *(int *)(param_1 + 0x58)) {
        uVar25 = 0;
        do {
          *(int *)(*(longlong *)(*plVar1 + uVar25 * 8) + 0x28) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar35 != uVar25);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b50702 FUN_142b50702 body=1836 status=ok
// SIG undefined FUN_142b50702(void)

ulonglong FUN_142b50702(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  longlong *plVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double *pdVar34;
  bool bVar35;
  double *pdVar36;
  double *pdVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  longlong lVar41;
  uint uVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_1f8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  float afStack_1a0 [4];
  double local_190 [12];
  double local_130 [3];
  double local_118 [3];
  longlong local_100 [24];
  longlong lVar42;
  
  local_100[2] = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_100[0] = param_1;
  local_100[1] = param_2;
  uVar33 = 0;
  if ((1e-08 < *(float *)(param_1 + 100) || *(float *)(param_1 + 100) == 1e-08) &&
     (1e-08 < *(float *)(param_2 + 100) || *(float *)(param_2 + 100) == 1e-08)) {
    pdVar36 = local_190 + 3;
    plVar30 = local_100;
    pdVar34 = local_130;
    pdVar37 = local_190;
    bVar10 = true;
    local_208 = param_1;
    local_1f8 = param_2;
    local_1e0 = param_3;
    do {
      bVar35 = bVar10;
      lVar8 = *plVar30;
      local_1c8 = DAT_14c8463c8;
      local_1d8 = (undefined4)DAT_14c8463b8;
      uStack_1d4 = DAT_14c8463b8._4_4_;
      uStack_1d0 = (undefined4)DAT_14c8463c0;
      uStack_1cc = DAT_14c8463c0._4_4_;
      FUN_1401c9a0e(lVar8 + 0x48,&local_1b8,&local_1d8);
      pdVar34[2] = local_1a8;
      *pdVar34 = local_1b8;
      pdVar34[1] = dStack_1b0;
      dVar11 = (double)*(float *)(lVar8 + 100);
      dVar44 = pdVar34[2] * dVar11 * 0.5;
      dVar12 = pdVar34[1] * dVar11 * 0.5;
      dVar45 = dVar11 * *pdVar34 * 0.5;
      dVar11 = *(double *)(lVar8 + 0x40);
      dVar3 = *(double *)(lVar8 + 0x30);
      dVar4 = *(double *)(lVar8 + 0x38);
      *pdVar37 = dVar3 - dVar45;
      pdVar37[1] = dVar4 - dVar12;
      pdVar37[2] = dVar11 - dVar44;
      *pdVar36 = dVar45 + dVar3;
      pdVar36[1] = dVar12 + dVar4;
      pdVar36[2] = dVar44 + dVar11;
      pdVar34 = local_118;
      plVar30 = local_100 + 1;
      pdVar36 = local_190 + 9;
      pdVar37 = local_190 + 6;
      bVar10 = false;
    } while (bVar35);
    uVar33 = 0;
    pdVar36 = local_190;
    bVar10 = true;
    do {
      bVar35 = bVar10;
      fVar38 = (float)FUN_14096b4ee(local_190 + (uVar33 ^ 2) * 3,pdVar36,
                                    local_190 + (uVar33 | 1) * 3);
      afStack_1a0[uVar33 ^ 2] = fVar38;
      fVar38 = (float)FUN_14096b4ee(local_190 + (uVar33 ^ 3) * 3,pdVar36,
                                    local_190 + (uVar33 | 1) * 3);
      lVar8 = local_1e0;
      afStack_1a0[uVar33 ^ 3] = fVar38;
      uVar33 = 2;
      uVar43 = 0;
      pdVar36 = local_190 + 6;
      bVar10 = false;
    } while (bVar35);
    uVar33 = 1;
    do {
      uVar32 = uVar33 & 0xffffffff;
      if (afStack_1a0[uVar33] < afStack_1a0[uVar43] || afStack_1a0[uVar33] == afStack_1a0[uVar43]) {
        uVar32 = (ulonglong)uVar43;
      }
      uVar33 = uVar33 + 1;
      uVar43 = (uint)uVar32;
    } while (uVar33 != 4);
    lVar9 = local_100[1 < (int)uVar43];
    fVar38 = *(float *)(lVar9 + 0x60);
    lVar41 = local_100[(int)uVar43 < 2];
    fVar40 = *(float *)(lVar41 + 0x60);
    fVar39 = (afStack_1a0[uVar32] + fVar38) / fVar40;
    if (fVar39 < 1.2) {
      *(undefined4 *)(local_1e0 + 8) = *(undefined4 *)(lVar41 + 8);
      *(undefined4 *)(local_1e0 + 0x14) = *(undefined4 *)(lVar41 + 0x14);
      *(undefined8 *)(local_1e0 + 0xc) = *(undefined8 *)(lVar41 + 0xc);
      *(byte *)(local_1e0 + 0x18) =
           *(byte *)(local_1e0 + 0x18) & 0xfe | *(byte *)(lVar41 + 0x18) & 1;
      *(undefined1 *)(local_1e0 + 0x19) = *(undefined1 *)(lVar41 + 0x19);
      uVar15 = *(undefined4 *)(lVar41 + 0x34);
      uVar16 = *(undefined4 *)(lVar41 + 0x38);
      uVar17 = *(undefined4 *)(lVar41 + 0x3c);
      uVar18 = *(undefined4 *)(lVar41 + 0x40);
      uVar19 = *(undefined4 *)(lVar41 + 0x44);
      uVar20 = *(undefined4 *)(lVar41 + 0x48);
      uVar21 = *(undefined4 *)(lVar41 + 0x4c);
      uVar22 = *(undefined4 *)(lVar41 + 0x50);
      uVar23 = *(undefined4 *)(lVar41 + 0x54);
      uVar24 = *(undefined4 *)(lVar41 + 0x58);
      uVar25 = *(undefined4 *)(lVar41 + 0x5c);
      *(undefined4 *)(local_1e0 + 0x30) = *(undefined4 *)(lVar41 + 0x30);
      *(undefined4 *)(local_1e0 + 0x34) = uVar15;
      *(undefined4 *)(local_1e0 + 0x38) = uVar16;
      *(undefined4 *)(local_1e0 + 0x3c) = uVar17;
      *(undefined4 *)(local_1e0 + 0x40) = uVar18;
      *(undefined4 *)(local_1e0 + 0x44) = uVar19;
      *(undefined4 *)(local_1e0 + 0x48) = uVar20;
      *(undefined4 *)(local_1e0 + 0x4c) = uVar21;
      *(undefined4 *)(local_1e0 + 0x50) = uVar22;
      *(undefined4 *)(local_1e0 + 0x54) = uVar23;
      *(undefined4 *)(local_1e0 + 0x58) = uVar24;
      *(undefined4 *)(local_1e0 + 0x5c) = uVar25;
      uVar31 = *(undefined8 *)(lVar41 + 0x60);
      *(undefined8 *)(local_1e0 + 0x60) = uVar31;
      *(float *)(local_1e0 + 0x60) = fVar39 * *(float *)(lVar41 + 0x60);
    }
    else {
      if ((fVar38 <= afStack_1a0[(ulonglong)((int)uVar43 < 2) * 2] + fVar40) ||
         (fVar38 <= fVar40 + afStack_1a0[(ulonglong)((uint)((int)uVar43 < 2) * 2) + 1])) {
        fVar38 = *(float *)(local_208 + 0x60);
        pfVar1 = (float *)(local_1f8 + 0x60);
        bVar10 = (!NAN(fVar38) && !NAN(*pfVar1)) && (fVar38 >= *pfVar1 && fVar38 != *pfVar1);
        lVar9 = local_100[fVar38 < *pfVar1 || fVar38 == *pfVar1];
        local_1c8 = DAT_14c8463c8;
        local_1d8 = (undefined4)DAT_14c8463b8;
        uStack_1d4 = DAT_14c8463b8._4_4_;
        uStack_1d0 = (undefined4)DAT_14c8463c0;
        uStack_1cc = DAT_14c8463c0._4_4_;
        FUN_1401c9a0e(lVar9 + 0x48,&local_1b8);
        puVar2 = (undefined8 *)(lVar9 + 0x30);
        uVar32 = (ulonglong)((uint)bVar10 * 2);
        lVar41 = FUN_1409661f0(local_190 + uVar32 * 3,&local_1b8,puVar2);
        fVar38 = (float)lVar41;
        lVar42 = FUN_1409661f0(local_190 + (ulonglong)((uint)bVar10 * 2 + 1) * 3,&local_1b8,puVar2);
        fVar40 = (float)lVar42;
        fVar39 = *(float *)(lVar9 + 0x60) * 1.2 - *(float *)(local_100[bVar10] + 0x60);
        uVar43 = -(uint)(fVar38 < fVar39 && fVar40 < fVar39);
        uVar33 = (ulonglong)uVar43;
        if ((uVar43 & 1) != 0) {
          *(undefined4 *)(lVar8 + 8) = *(undefined4 *)(lVar9 + 8);
          *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(lVar9 + 0x14);
          *(undefined8 *)(lVar8 + 0xc) = *(undefined8 *)(lVar9 + 0xc);
          *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & 0xfe | *(byte *)(lVar9 + 0x18) & 1;
          *(undefined1 *)(lVar8 + 0x19) = *(undefined1 *)(lVar9 + 0x19);
          *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar9 + 0x60);
          uVar31 = *puVar2;
          uVar26 = *(undefined8 *)(lVar9 + 0x38);
          uVar27 = *(undefined8 *)(lVar9 + 0x40);
          uVar28 = *(undefined8 *)(lVar9 + 0x48);
          uVar29 = *(undefined8 *)(lVar9 + 0x58);
          *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar9 + 0x50);
          *(undefined8 *)(lVar8 + 0x58) = uVar29;
          *(undefined8 *)(lVar8 + 0x40) = uVar27;
          *(undefined8 *)(lVar8 + 0x48) = uVar28;
          *(undefined8 *)(lVar8 + 0x30) = uVar31;
          *(undefined8 *)(lVar8 + 0x38) = uVar26;
          dVar11 = local_190[uVar32 * 3 + 2];
          dVar3 = local_190[uVar32 * 3];
          dVar4 = local_190[uVar32 * 3 + 1];
          dVar44 = *(double *)(lVar8 + 0x40);
          dVar45 = *(double *)(lVar8 + 0x30);
          dVar12 = *(double *)(lVar8 + 0x38);
          fVar39 = *(float *)(lVar8 + 100);
          pdVar36 = local_130;
          bVar10 = true;
          do {
            bVar35 = bVar10;
            dVar5 = *pdVar36;
            dVar6 = pdVar36[1];
            dVar7 = pdVar36[2];
            fVar46 = (float)((dVar11 - dVar44) * dVar7 +
                            (dVar3 - dVar45) * dVar5 + (dVar4 - dVar12) * dVar6);
            fVar47 = fVar39 * -0.5 + ABS(fVar46);
            if (0.0 < fVar47) {
              fVar39 = fVar39 + fVar47;
              *(float *)(lVar8 + 100) = fVar39;
              dVar13 = (double)(fVar47 * 0.5);
              dVar14 = (double)*(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar46 < 0.0) * 4);
              dVar45 = dVar45 + dVar5 * dVar13 * dVar14;
              *(double *)(lVar8 + 0x30) = dVar45;
              dVar12 = dVar12 + dVar6 * dVar13 * dVar14;
              *(double *)(lVar8 + 0x38) = dVar12;
              dVar44 = dVar44 + dVar7 * dVar13 * dVar14;
              *(double *)(lVar8 + 0x40) = dVar44;
            }
            pdVar36 = local_118;
            bVar10 = false;
          } while (bVar35);
          local_208 = lVar42;
          local_1f8 = lVar41;
          if ((*(float *)(lVar8 + 0x60) < fVar38) || (*(float *)(lVar8 + 0x60) < fVar40)) {
            if (fVar38 <= fVar40) {
              fVar38 = fVar40;
            }
            *(float *)(lVar8 + 0x60) = fVar38;
          }
        }
        goto LAB_142b50da7;
      }
      *(undefined4 *)(local_1e0 + 8) = *(undefined4 *)(lVar9 + 8);
      *(undefined4 *)(local_1e0 + 0x14) = *(undefined4 *)(lVar9 + 0x14);
      *(undefined8 *)(local_1e0 + 0xc) = *(undefined8 *)(lVar9 + 0xc);
      *(byte *)(local_1e0 + 0x18) = *(byte *)(local_1e0 + 0x18) & 0xfe | *(byte *)(lVar9 + 0x18) & 1
      ;
      *(undefined1 *)(local_1e0 + 0x19) = *(undefined1 *)(lVar9 + 0x19);
      uVar15 = *(undefined4 *)(lVar9 + 0x34);
      uVar16 = *(undefined4 *)(lVar9 + 0x38);
      uVar17 = *(undefined4 *)(lVar9 + 0x3c);
      uVar18 = *(undefined4 *)(lVar9 + 0x40);
      uVar19 = *(undefined4 *)(lVar9 + 0x44);
      uVar20 = *(undefined4 *)(lVar9 + 0x48);
      uVar21 = *(undefined4 *)(lVar9 + 0x4c);
      uVar22 = *(undefined4 *)(lVar9 + 0x50);
      uVar23 = *(undefined4 *)(lVar9 + 0x54);
      uVar24 = *(undefined4 *)(lVar9 + 0x58);
      uVar25 = *(undefined4 *)(lVar9 + 0x5c);
      *(undefined4 *)(local_1e0 + 0x30) = *(undefined4 *)(lVar9 + 0x30);
      *(undefined4 *)(local_1e0 + 0x34) = uVar15;
      *(undefined4 *)(local_1e0 + 0x38) = uVar16;
      *(undefined4 *)(local_1e0 + 0x3c) = uVar17;
      *(undefined4 *)(local_1e0 + 0x40) = uVar18;
      *(undefined4 *)(local_1e0 + 0x44) = uVar19;
      *(undefined4 *)(local_1e0 + 0x48) = uVar20;
      *(undefined4 *)(local_1e0 + 0x4c) = uVar21;
      *(undefined4 *)(local_1e0 + 0x50) = uVar22;
      *(undefined4 *)(local_1e0 + 0x54) = uVar23;
      *(undefined4 *)(local_1e0 + 0x58) = uVar24;
      *(undefined4 *)(local_1e0 + 0x5c) = uVar25;
      uVar31 = *(undefined8 *)(lVar9 + 0x60);
      *(undefined8 *)(local_1e0 + 0x60) = uVar31;
    }
    uVar33 = CONCAT71((int7)((ulonglong)uVar31 >> 8),1);
  }
LAB_142b50da7:
  if ((local_100[2] ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar33 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b50e30 FUN_142b50e30 body=120 status=ok
// SIG undefined FUN_142b50e30(void)

undefined8 * FUN_142b50e30(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ab760) {
    FUN_144b3d300(&DAT_14c9ab760);
    if (DAT_14c9ab760 == -1) {
      FUN_1446f470e(&DAT_14c9ab758,L"Animated",1);
      _Init_thread_footer(&DAT_14c9ab760);
    }
  }
  *param_1 = DAT_14c9ab758;
  return param_1;
}



// FUNCTION 142b50ea8 FUN_142b50ea8 body=328 status=ok
// SIG undefined FUN_142b50ea8(void)

undefined8 FUN_142b50ea8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [24];
  longlong local_d8;
  undefined4 local_c8;
  uint uStack_c4;
  undefined1 local_bc;
  int local_b8;
  byte local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_14025731e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14079839a(&local_c8);
      if ((longlong)*(int *)(lVar1 + 0xe8) != 0) {
        lVar2 = 0;
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xe0) + lVar2) == CONCAT44(uStack_c4,local_c8)) {
            lVar4 = *(longlong *)(lVar1 + 0xe0) - lVar4;
            if (lVar4 != 0) {
              uVar3 = 0;
              uStack_c4 = uStack_c4 & 0xffffff00;
              local_bc = 0;
              local_b4 = 0;
              local_ac = 0;
              local_a8 = 0;
              local_a0 = 0xffffffff;
              local_38 = 0;
              FUN_140799e52(lVar4 + 0x18,0,param_2,&local_c8);
              if ((local_b8 != -1 & local_b4) == 1) {
                FUN_1470fa22c(lVar4,local_f0);
                uVar3 = FUN_140257578(local_f0);
                if (local_d8 != 0) {
                  FUN_1400020a8();
                }
              }
              goto LAB_142b50ef3;
            }
            break;
          }
          lVar4 = lVar4 + -0x28;
          lVar2 = lVar2 + 0x28;
        } while (-lVar4 != (longlong)*(int *)(lVar1 + 0xe8) * 0x28);
      }
    }
  }
  uVar3 = 0;
LAB_142b50ef3:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 142b50ff2 FUN_142b50ff2 body=150 status=ok
// SIG undefined FUN_142b50ff2(void)

undefined8 FUN_142b50ff2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_14025731e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30),
       *(longlong *)(lVar2 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      FUN_140257404(lVar2,local_48,lVar1,(longlong)param_2 + 0x3c);
      uVar4 = FUN_140257578(local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      goto LAB_142b51035;
    }
  }
  uVar4 = 0;
LAB_142b51035:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b51089 FUN_142b51089 body=91 status=ok
// SIG undefined FUN_142b51089(void)

void FUN_142b51089(void)

{
  if (DAT_14c9ab9f8 != 0) {
    if (DAT_14c9ab9f0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9ab9f0)(DAT_14c9ab9f0,0);
    FUN_1446efa72(&DAT_14c9ab9f0,0,0,0x10);
    DAT_14c9ab9f8 = 0;
  }
  if (DAT_14c9ab9f0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b510e4 FUN_142b510e4 body=69 status=ok
// SIG undefined FUN_142b510e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b510e4(void)

{
  _DAT_14c9aba00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b51126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9aba08,1);
  return;
}



// FUNCTION 142b51129 FUN_142b51129 body=48 status=ok
// SIG undefined FUN_142b51129(void)

int FUN_142b51129(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
}



// FUNCTION 142b5115e FUN_142b5115e body=61 status=ok
// SIG undefined FUN_142b5115e(void)

void FUN_142b5115e(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(PSRWLOCK *)(param_1 + 0x40) != (PSRWLOCK)0x0)) {
    AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x40));
    FUN_142b51f22(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000142b51194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x40));
    return;
  }
  return;
}



// FUNCTION 142b51230 FUN_142b51230 body=66 status=ok
// SIG undefined FUN_142b51230(void)

undefined8 * FUN_142b51230(undefined8 *param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  
  *param_1 = *param_2;
  SRWLock = (PSRWLOCK)param_2[1];
  param_1[1] = SRWLock;
  param_1[2] = param_2[2];
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  }
  return param_1;
}



// FUNCTION 142b51272 FUN_142b51272 body=68 status=ok
// SIG undefined FUN_142b51272(void)

undefined8 * FUN_142b51272(undefined8 *param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  
  *param_1 = *param_2;
  SRWLock = (PSRWLOCK)param_2[1];
  param_1[1] = SRWLock;
  param_1[2] = param_2[2];
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  }
  return param_1;
}



// FUNCTION 142b512e2 FUN_142b512e2 body=198 status=ok
// SIG undefined FUN_142b512e2(void)

void FUN_142b512e2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  
  lVar2 = *param_1;
  lVar3 = FUN_1457b5956(param_3 + 0x368,lVar2 + 0x10);
  plVar4 = &DAT_14c9aba10;
  if (*(int *)(param_3 + 0x3a8) != 0) {
    plVar4 = (longlong *)
             ((longlong)(*(int *)(param_3 + 0x3a8) + -1) * 0x38 + *(longlong *)(param_3 + 0x3a0));
  }
  if (*plVar4 == *(longlong *)(lVar2 + 0x10)) {
    pbVar5 = (byte *)(param_3 + 0x1b8);
    if (*(char *)(lVar3 + 0x13) != '\0') {
      pbVar5 = (byte *)(lVar3 + 0x12);
    }
    if ((*pbVar5 != *(byte *)(lVar2 + 8)) ||
       ((*(char *)(lVar2 + 9) != '\0' && ((*pbVar5 & 1) != 0)))) {
      *(byte *)(param_3 + 0x261) = (*(byte *)(lVar2 + 8) ^ 1) * '\x02' + '\x01';
      *(undefined1 *)(param_3 + 0x262) = 1;
    }
  }
  pcVar1 = (char *)(lVar2 + 8);
  if (pcVar1 != (char *)(lVar3 + 0x12)) {
    *(char *)(lVar3 + 0x12) = *pcVar1;
    *(undefined1 *)(lVar3 + 0x13) = 1;
  }
  if ((*(char *)(lVar2 + 10) == '\x01') && (*pcVar1 == '\0')) {
    *(undefined4 *)(param_3 + 0x1d8) = *(undefined4 *)(lVar2 + 0xc);
  }
  *(undefined1 *)(param_3 + 0x263) = *(undefined1 *)(lVar2 + 9);
  return;
}



// FUNCTION 142b514b2 FUN_142b514b2 body=76 status=ok
// SIG undefined FUN_142b514b2(void)

void FUN_142b514b2(int *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14711869a(param_2,local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48[*param_1]);
}



// FUNCTION 142b51528 FUN_142b51528 body=29 status=ok
// SIG undefined FUN_142b51528(void)

undefined8 FUN_142b51528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b51546 FUN_142b51546 body=50 status=ok
// SIG undefined FUN_142b51546(void)

void FUN_142b51546(float *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140b8ca25(param_1[1]);
  uVar1 = FUN_14711f596(param_2,(double)*param_1,1);
  *(undefined8 *)(param_2 + 0x220) = uVar1;
  return;
}



// FUNCTION 142b515a2 FUN_142b515a2 body=29 status=ok
// SIG undefined FUN_142b515a2(void)

undefined8 FUN_142b515a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b515c0 FUN_142b515c0 body=29 status=ok
// SIG undefined FUN_142b515c0(void)

undefined8 FUN_142b515c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b515f2 FUN_142b515f2 body=85 status=ok
// SIG undefined FUN_142b515f2(void)

void FUN_142b515f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1debc0;
  return;
}



// FUNCTION 142b51648 FUN_142b51648 body=85 status=ok
// SIG undefined FUN_142b51648(void)

void FUN_142b51648(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1debc0;
  return;
}



// FUNCTION 142b5169e FUN_142b5169e body=118 status=ok
// SIG undefined FUN_142b5169e(void)

void FUN_142b5169e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1debc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b51705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b51720 FUN_142b51720 body=22 status=ok
// SIG undefined FUN_142b51720(void)

undefined1 FUN_142b51720(void)

{
  FUN_1470fadd0(DAT_14c9ab9e8);
  return 1;
}



// FUNCTION 142b51760 FUN_142b51760 body=29 status=ok
// SIG undefined FUN_142b51760(void)

undefined8 FUN_142b51760(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5177e FUN_142b5177e body=111 status=ok
// SIG undefined FUN_142b5177e(void)

void FUN_142b5177e(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    lVar2 = *param_1;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar1 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    *(undefined8 *)(param_2 + 0x20) = uVar1;
    *(undefined1 *)(param_2 + 0x28) = 1;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar3[2] = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *puVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar3[1] = uVar1;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    dVar4 = *(double *)(param_2 + 0x38) - *(double *)param_1[2];
    *(double *)(param_2 + 0x38) = dVar4;
    *(bool *)param_1[3] = dVar4 <= 0.0;
  }
  *(undefined8 *)param_1[4] = *(undefined8 *)(param_2 + 0x30);
  return;
}



// FUNCTION 142b517ee FUN_142b517ee body=78 status=ok
// SIG undefined FUN_142b517ee(void)

undefined8 * FUN_142b517ee(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a1dec50;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142b5183c FUN_142b5183c body=5 status=ok
// SIG undefined FUN_142b5183c(void)

longlong FUN_142b5183c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b51842 FUN_142b51842 body=29 status=ok
// SIG undefined FUN_142b51842(void)

void FUN_142b51842(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b51860 FUN_142b51860 body=29 status=ok
// SIG undefined FUN_142b51860(void)

undefined8 FUN_142b51860(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5187e FUN_142b5187e body=268 status=ok
// SIG undefined FUN_142b5187e(void)

void FUN_142b5187e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  PSRWLOCK SRWLock;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  PSRWLOCK local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3ff00000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3ff00000;
  puVar1[10] = 0x3ff0000000000000;
  puVar1[0xb] = 0;
  local_40 = puVar1;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  local_38 = SRWLock;
  puVar2 = (undefined4 *)FUN_14001cc68(4,0x10);
  *puVar2 = 1;
  local_30 = puVar2;
  if (*(undefined8 **)(param_3 + 0x228) == puVar1) {
    if (SRWLock != (PSRWLOCK)0x0) {
      FUN_1417433c6(&local_40);
    }
  }
  else {
    if (*(undefined8 **)(param_3 + 0x228) != (undefined8 *)0x0) {
      FUN_1417433c6(param_3 + 0x228);
    }
    *(undefined8 **)(param_3 + 0x228) = puVar1;
    *(PSRWLOCK *)(param_3 + 0x230) = SRWLock;
    *(undefined4 **)(param_3 + 0x238) = puVar2;
  }
  *(undefined1 *)(param_3 + 0x361) = 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5198c FUN_142b5198c body=48 status=ok
// SIG undefined FUN_142b5198c(void)

void FUN_142b5198c(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1457b5956(param_3 + 0x368,*(undefined8 *)(param_1 + 8));
  if ((undefined1 *)(lVar1 + 0x12) != param_1) {
    *(undefined1 *)(lVar1 + 0x12) = *param_1;
    *(undefined1 *)(lVar1 + 0x13) = 1;
  }
  return;
}



// FUNCTION 142b519bc FUN_142b519bc body=73 status=ok
// SIG undefined FUN_142b519bc(void)

void FUN_142b519bc(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  
  if (*(char *)(param_3 + 0x3e0) == '\0') {
    FUN_140cddb58(param_3 + 0x368);
  }
  pbVar1 = (byte *)(param_3 + 0x1b8);
  if (*(char *)(param_3 + 0x3c3) != '\0') {
    pbVar1 = (byte *)(param_3 + 0x3c2);
  }
  *(byte *)*param_1 = *(byte *)*param_1 | *pbVar1;
  return;
}



// FUNCTION 142b51a06 FUN_142b51a06 body=313 status=ok
// SIG undefined FUN_142b51a06(void)

void FUN_142b51a06(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [42];
  undefined7 uStack_5e;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined8 local_47;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  local_57 = (undefined4)DAT_14c8464e0;
  uStack_53 = DAT_14c8464e0._4_4_;
  uStack_4f = (undefined4)DAT_14c8464e8;
  uStack_4b = DAT_14c8464e8._4_4_;
  local_47 = DAT_14c8464f0;
  iVar4 = *(int *)(param_3 + 0x1e8);
  *(uint *)(param_3 + 0x1e8) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1ec) < iVar4 + 1U) {
    FUN_141743a7a((longlong *)(param_3 + 0x1e0),iVar4);
  }
  lVar5 = *(longlong *)(param_3 + 0x1e0);
  lVar10 = (longlong)iVar4 * 0x60;
  puVar1 = (undefined1 *)(lVar5 + lVar10);
  *(undefined1 *)(lVar5 + lVar10) = 0;
  puVar2 = (undefined8 *)(lVar5 + 1 + lVar10);
  *puVar2 = CONCAT17((undefined1)local_38,uStack_3f);
  puVar2[1] = CONCAT17((undefined1)uStack_30,CONCAT43(uStack_34,local_38._1_3_));
  puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar10);
  *puVar2 = CONCAT44(uStack_2c,uStack_30);
  puVar2[1] = local_28;
  *(undefined1 *)(lVar5 + 0x20 + lVar10) = 0;
  puVar2 = (undefined8 *)(lVar5 + 0x21 + lVar10);
  *puVar2 = CONCAT17((undefined1)local_57,uStack_5e);
  puVar2[1] = CONCAT17((undefined1)uStack_4f,CONCAT43(uStack_53,local_57._1_3_));
  puVar3 = (undefined4 *)(lVar5 + 0x30 + lVar10);
  *puVar3 = uStack_4f;
  puVar3[1] = uStack_4b;
  puVar3[2] = (undefined4)local_47;
  puVar3[3] = local_47._4_4_;
  *(undefined1 *)(lVar5 + 0x40 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x44 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x4c + lVar10) = 0x3e23d70a3c83126f;
  *(undefined8 *)(lVar5 + 0x58 + lVar10) = 0;
  *(undefined4 *)(lVar5 + 0x4c + lVar10) = *(undefined4 *)param_1[3];
  lVar5 = *(longlong *)param_1[2];
  if (lVar5 != 0) {
    *(longlong *)(puVar1 + 0x44) = lVar5;
  }
  puVar1[0x40] = lVar5 != 0;
  puVar2 = (undefined8 *)*param_1;
  *(undefined8 *)(puVar1 + 0x18) = puVar2[2];
  uVar9 = puVar2[1];
  *(undefined8 *)(puVar1 + 8) = *puVar2;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *puVar1 = 1;
  puVar3 = (undefined4 *)param_1[1];
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(puVar3 + 4);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  *(undefined4 *)(puVar1 + 0x28) = *puVar3;
  *(undefined4 *)(puVar1 + 0x2c) = uVar6;
  *(undefined4 *)(puVar1 + 0x30) = uVar7;
  *(undefined4 *)(puVar1 + 0x34) = uVar8;
  puVar1[0x20] = 1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b51b40 FUN_142b51b40 body=121 status=ok
// SIG undefined FUN_142b51b40(void)

void FUN_142b51b40(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_3 + 0x248);
  uVar5 = iVar2 + 1;
  *(uint *)(param_3 + 0x248) = uVar5;
  if (*(uint *)(param_3 + 0x24c) < uVar5) {
    FUN_141020442((longlong *)(param_3 + 0x240));
  }
  lVar3 = *(longlong *)(param_3 + 0x240);
  lVar6 = (longlong)iVar2 * 0xb0;
  memset((void *)(lVar3 + lVar6),0,0xb0);
  *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)*param_1;
  uVar4 = param_1[2];
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar6);
  *puVar1 = param_1[1];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x50 + lVar6) = param_1[3];
  *(undefined1 *)(lVar3 + 0x58 + lVar6) = 1;
  return;
}



// FUNCTION 142b51bba FUN_142b51bba body=124 status=ok
// SIG undefined FUN_142b51bba(void)

void FUN_142b51bba(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_3 + 0x248);
  uVar6 = iVar2 + 1;
  *(uint *)(param_3 + 0x248) = uVar6;
  if (*(uint *)(param_3 + 0x24c) < uVar6) {
    FUN_141020442((longlong *)(param_3 + 0x240));
  }
  lVar3 = *(longlong *)(param_3 + 0x240);
  lVar7 = (longlong)iVar2 * 0xb0;
  memset((void *)(lVar3 + lVar7),0,0xb0);
  *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  uVar5 = puVar4[1];
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar7);
  *puVar1 = *puVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar3 + 0x70 + lVar7) = puVar4[2];
  *(undefined1 *)(lVar3 + 0x78 + lVar7) = 1;
  return;
}



// FUNCTION 142b51c36 FUN_142b51c36 body=133 status=ok
// SIG undefined FUN_142b51c36(void)

void FUN_142b51c36(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_3 + 0x248);
  uVar6 = iVar2 + 1;
  *(uint *)(param_3 + 0x248) = uVar6;
  if (*(uint *)(param_3 + 0x24c) < uVar6) {
    FUN_141020442((longlong *)(param_3 + 0x240));
  }
  lVar3 = *(longlong *)(param_3 + 0x240);
  lVar7 = (longlong)iVar2 * 0xb0;
  memset((void *)(lVar3 + lVar7),0,0xb0);
  *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  uVar5 = puVar4[1];
  puVar1 = (undefined8 *)(lVar3 + 0x80 + lVar7);
  *puVar1 = *puVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar3 + 0x90 + lVar7) = puVar4[2];
  *(undefined1 *)(lVar3 + 0x98 + lVar7) = 1;
  return;
}



// FUNCTION 142b51cbc FUN_142b51cbc body=186 status=ok
// SIG undefined FUN_142b51cbc(void)

void FUN_142b51cbc(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  lVar1 = *param_1;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1400702d4(DAT_14caa8580,local_30,uVar2,1);
  uVar3 = local_30._0_4_ & 0xffff;
  uVar2 = FUN_1470fb998(lVar1 + 0x10,
                        (local_30._0_4_ << 0x10 | uVar3) + local_30._4_4_ +
                        (local_30._2_4_ << 0x13 | local_30._2_4_ & 0xffff) + (uVar3 >> 4),local_30);
  FUN_1470f8754(uVar2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b51d78 FUN_142b51d78 body=209 status=ok
// SIG undefined FUN_142b51d78(void)

void FUN_142b51d78(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    fVar4 = *(float *)(param_2 + 1);
    fVar3 = *(float *)((longlong)param_2 + 0xc);
    if (fVar4 <= 1e-08) {
      fVar4 = *(float *)*param_1;
    }
    iVar2 = *(int *)param_1[1];
    if ((int)(fVar3 / fVar4) < *(int *)param_1[1]) {
      iVar2 = (int)(fVar3 / fVar4);
    }
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    *(float *)((longlong)param_2 + 0xc) = fVar3;
    *(float *)((longlong)param_2 + 0xc) = fVar3 - (float)iVar2 * *(float *)*param_1;
    if (0 < iVar2) {
      do {
        puVar1 = (undefined4 *)param_1[2];
        local_38 = *(undefined8 *)(puVar1 + 4);
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        FUN_142b659c4(*param_2,(double)*(float *)*param_1,&local_48);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b51e6a FUN_142b51e6a body=5 status=ok
// SIG undefined FUN_142b51e6a(void)

longlong FUN_142b51e6a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b51e70 FUN_142b51e70 body=12 status=ok
// SIG undefined FUN_142b51e70(void)

void FUN_142b51e70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b51e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b51e7c FUN_142b51e7c body=29 status=ok
// SIG undefined FUN_142b51e7c(void)

undefined8 FUN_142b51e7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b51e9a FUN_142b51e9a body=64 status=ok
// SIG undefined FUN_142b51e9a(void)

void FUN_142b51e9a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  FUN_1409087f6(*param_2,(double)*(float *)*param_1);
  cVar1 = *(char *)(param_2 + 2);
  *(char *)param_1[1] = cVar1;
  if (cVar1 == '\x01') {
    *(float *)((longlong)param_2 + 0xc) = *(float *)*param_1 + *(float *)((longlong)param_2 + 0xc);
  }
  return;
}



// FUNCTION 142b51ef2 FUN_142b51ef2 body=5 status=ok
// SIG undefined FUN_142b51ef2(void)

longlong FUN_142b51ef2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b51ef8 FUN_142b51ef8 body=12 status=ok
// SIG undefined FUN_142b51ef8(void)

void FUN_142b51ef8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b51f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b51f04 FUN_142b51f04 body=29 status=ok
// SIG undefined FUN_142b51f04(void)

undefined8 FUN_142b51f04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b51f22 FUN_142b51f22 body=223 status=ok
// SIG undefined FUN_142b51f22(void)

void FUN_142b51f22(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar4 = *(longlong *)(param_1 + lVar5);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x30) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 8);
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 8);
      if (lVar1 != 0) {
        FUN_14711a6fe(lVar1,lVar4);
        lVar4 = *(longlong *)(param_1 + lVar5);
      }
      if ((lVar3 != 0) && (lVar3 != lVar1)) {
        FUN_14711a6fe(lVar3,lVar4);
        lVar4 = *(longlong *)(param_1 + lVar5);
      }
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x290) != 0) {
          plVar2 = (longlong *)(lVar4 + 0x2b0);
          if (*(longlong **)(lVar4 + 0x2a0) != (longlong *)0x0) {
            plVar2 = *(longlong **)(lVar4 + 0x2a0);
          }
          (**(code **)(*plVar2 + 0x10))();
        }
        if (*(longlong *)(lVar4 + 0x250) != 0) {
          plVar2 = (longlong *)(lVar4 + 0x270);
          if (*(longlong **)(lVar4 + 0x260) != (longlong *)0x0) {
            plVar2 = *(longlong **)(lVar4 + 0x260);
          }
          (**(code **)(*plVar2 + 0x10))();
        }
        FUN_1400020a8(lVar4);
      }
      *(undefined8 *)(param_1 + lVar5) = 0;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  return;
}



// FUNCTION 142b52034 FUN_142b52034 body=29 status=ok
// SIG undefined FUN_142b52034(void)

undefined8 FUN_142b52034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5207c FUN_142b5207c body=29 status=ok
// SIG undefined FUN_142b5207c(void)

undefined8 FUN_142b5207c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b52099 FUN_142b52099 body=1063 status=ok
// SIG undefined FUN_142b52099(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b52099(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = (undefined8 *)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1da3f0,1,0);
  ppuStack_60 = &PTR_FUN_14a1dab90;
  local_68 = (undefined8 *)0x0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1dabb0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_50,&DAT_14c9ab7d0);
  if (cVar3 == '\0') {
    _DAT_14c9ab7d0 = 0;
    uRam000000014c9ab7d8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = (undefined8 *)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1db970,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14a1dc510;
  local_68 = (undefined8 *)0x4;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1dc5f0,1,&PTR_FUN_14a1dc550);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/GbxPhysics",0,0,&PTR_FUN_14a1dc910);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14a1dd6c0;
  local_68 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/GbxPhysics",&PTR_FUN_14a1dd700,1,0);
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9ab960 = (ulonglong)uVar4;
  local_50._0_4_ = 0x3dcccccd;
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14c9ab968,L"p.gbx.ForwardDynamics.Replication.Rate",&local_50,
                L"The frequence to replicate ragdoll updates. This is in simulation time, not frame time."
               );
  atexit(FUN_142b4db7f);
  local_50._0_4_ = 0xffffffff;
  local_68._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14c9ab980,L"p.gbx.ForwardDynamicsLODThreshold",&local_50,
                L"Max LOD that rigid body node is allowed to run on. Provides a global threshold that overrides per-node the LODThreshold property. -1 means no override."
               );
  atexit(FUN_142b4dbc4);
  local_50 = (char *)((ulonglong)local_50._4_4_ << 0x20);
  local_68._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14c9ab998,L"p.gbx.ORDAR.ForceFullyRigid",&local_50,
                L"If this is set to 1, all articulations are forced to be fully rigidified. If it\'s set to 2, all articulations will have all their DoFs set to locked."
               );
  atexit(FUN_142b4dc09);
  local_50 = (char *)CONCAT71(local_50._1_7_,1);
  local_68._0_4_ = 0;
  FUN_140bd5914(&DAT_14c9ab9b0,L"p.gbx.ForwardDynamics.UseTransientRagdollManagerAutoGeneration",
                &local_50,
                L"If disabled, the ragdoll managers generated will not be transient, allow inspection of the generated managers via the content browser."
               );
  atexit(FUN_142b4e7d5);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_68 = (undefined8 *)((ulonglong)local_68._4_4_ << 0x20);
  FUN_14078dbce(&DAT_14c9ab9c8,L"p.gbx.ForwardDynamics.RagdollPrimitivesCulling",&local_50,
                L"To enable the culling of ORDAR ragdoll\'s primitive generation.\n0: Disable.\n1: Enable the merge of primitive to minimize the amount."
               );
  atexit(FUN_142b4e81a);
  FUN_1446f470e(&DAT_14c9ab9e0,L"RagdollBehaviorManager",1);
  FUN_1446f470e(&DAT_14c9aba68,L"GeneratedSimulations",1);
  DAT_14c9ab9f0 = (undefined8 *)0x0;
  DAT_14c9ab9f8 = 0;
  FUN_1446efa72(&DAT_14c9ab9f0,0,2,0x10);
  puVar1 = DAT_14c9ab9f0;
  DAT_14c9ab9f8 = 2;
  *DAT_14c9ab9f0 = &PTR_LAB_149e170a0;
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
  puVar1[2] = lVar5;
  *puVar1 = &PTR_FUN_14a1debc0;
  atexit(FUN_142b51089);
  local_68 = &DAT_14c9ab9f0;
  ppuStack_60 = (undefined **)((ulonglong)ppuStack_60 & 0xffffffff00000000);
  FUN_14171ec12(&DAT_14c9aba00,L"p.gbx.Physics.EnableORDARForRigidBody",&DAT_14c9ab9e8,
                L"If true, calling FForwardDynamicsManager::AddForwardDynamics will reroute physics simulation from Chaos to ORDAR when the supplied object implements IForwardDynamicsInterface."
               );
  atexit(FUN_142b510e4);
  local_50 = "Default";
  local_48 = 7;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  DAT_14c9aba10 = (ulonglong)uVar4;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b524c4 FUN_142b524c4 body=106 status=ok
// SIG undefined FUN_142b524c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b524c4(void)

{
  _DAT_14c9abaa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abaa8,1);
  if (DAT_14c9aba90 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9aba80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b5252e FUN_142b5252e body=69 status=ok
// SIG undefined FUN_142b5252e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5252e(void)

{
  _DAT_14c9abac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b52570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abac8,1);
  return;
}



// FUNCTION 142b52573 FUN_142b52573 body=69 status=ok
// SIG undefined FUN_142b52573(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b52573(void)

{
  _DAT_14c9abad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b525b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abae0,1);
  return;
}



// FUNCTION 142b525b8 FUN_142b525b8 body=69 status=ok
// SIG undefined FUN_142b525b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b525b8(void)

{
  _DAT_14c9abaf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b525fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abaf8,1);
  return;
}



// FUNCTION 142b525fd FUN_142b525fd body=69 status=ok
// SIG undefined FUN_142b525fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b525fd(void)

{
  _DAT_14c9abb08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b5263f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abb10,1);
  return;
}



// FUNCTION 142b52642 FUN_142b52642 body=69 status=ok
// SIG undefined FUN_142b52642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b52642(void)

{
  _DAT_14c9abb20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b52684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abb28,1);
  return;
}



// FUNCTION 142b52688 FUN_142b52688 body=536 status=ok
// SIG undefined FUN_142b52688(void)

void FUN_142b52688(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar3 = param_1[1];
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar13 = 0;
    iVar8 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x40) + lVar13 * 8);
      lVar5 = *(longlong *)(lVar4 + 0x28);
      if ((lVar5 != 0) && (lVar6 = *param_1, *(int *)(lVar6 + 0x98) != *(int *)(lVar6 + 0xc4))) {
        uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar11 = (uint)lVar5 & 0xffff;
        lVar10 = lVar6 + 200;
        if (*(longlong *)(lVar6 + 0xd0) != 0) {
          lVar10 = *(longlong *)(lVar6 + 0xd0);
        }
        iVar9 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(lVar6 + 0xd8) - 1U &
                                  (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar11) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar6 + 0x90) + (longlong)iVar9 * 0x14);
            if (*plVar1 == lVar5) {
              if ((plVar1 != (longlong *)0x0) && ((uint *)(plVar1 + 1) != (uint *)0x0)) {
                uVar2 = *(uint *)(plVar1 + 1);
                uVar12 = (ulonglong)uVar2;
                if (uVar12 != 0xffffffff) {
                  if (((int)uVar2 < 0) || (*(int *)(lVar3 + 0x458) <= (int)uVar2)) {
                    puVar7 = (undefined4 *)param_1[3];
                    local_58 = *(undefined8 *)(puVar7 + 4);
                    local_68 = *puVar7;
                    uStack_64 = puVar7[1];
                    uStack_60 = puVar7[2];
                    uStack_5c = puVar7[3];
                    local_50 = 1;
                    local_6a = 0x101;
                    local_78 = &local_68;
                    FUN_14623a158(*(undefined8 *)(lVar3 + 0x3a8),lVar4,param_1[2],&local_6a);
                    goto LAB_142b527b3;
                  }
                  if (*(int *)(*(longlong *)(lVar3 + 0x450) + uVar12 * 4) == -1) {
                    puVar7 = (undefined4 *)param_1[3];
                    local_58 = *(undefined8 *)(puVar7 + 4);
                    local_68 = *puVar7;
                    uStack_64 = puVar7[1];
                    uStack_60 = puVar7[2];
                    uStack_5c = puVar7[3];
                    local_50 = 1;
                    local_6a = 0x101;
                    local_78 = &local_68;
                    FUN_14623a158(*(undefined8 *)(lVar3 + 0x3a8),lVar4,param_1[2],&local_6a);
                    *(int *)(*(longlong *)(lVar3 + 0x450) + uVar12 * 4) =
                         ((int)lVar13 - iVar8) + *(int *)(*(longlong *)(lVar3 + 0x3f0) + 0x10);
                    goto LAB_142b527b3;
                  }
                }
              }
              break;
            }
            iVar9 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar9 != -1);
        }
      }
      iVar8 = iVar8 + 1;
LAB_142b527b3:
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_2 + 0x48));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 142b528ba FUN_142b528ba body=480 status=ok
// SIG undefined FUN_142b528ba(void)

void FUN_142b528ba(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
     (*(longlong *)(param_1 + 0x3a8) != 0)) {
    if ((param_3 == '\x01' && *(char *)(param_1 + 0xac) == '\0') &&
       (*(char *)(param_1 + 0x10) == '\0')) {
      iVar10 = *(int *)(param_1 + 0x448);
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      iVar3 = *(int *)(param_2 + 0x714);
      plVar1 = (longlong *)(param_1 + 0x460);
      *(undefined4 *)(param_1 + 0x468) = 0;
      if (*(int *)(param_1 + 0x46c) < iVar10) {
        FUN_1403d6c30(plVar1);
        iVar10 = *(int *)(param_1 + 0x448);
      }
      if (iVar10 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x440);
        lVar13 = 0;
        do {
          lVar5 = *(longlong *)(param_1 + 0x3f8);
          if (lVar5 != 0) {
            iVar6 = *(int *)(lVar9 + lVar13);
            if (iVar6 < *(int *)(lVar5 + 0x10)) {
              plVar7 = (longlong *)((longlong)iVar6 * 8 + *(longlong *)(lVar5 + 8));
            }
            else {
              if (*(longlong *)(param_1 + 0x3a8) == 0) goto LAB_142b52a2f;
              plVar7 = (longlong *)
                       ((longlong)(iVar6 - *(int *)(lVar5 + 0x10)) * 8 +
                       *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0xb8));
            }
            if (*plVar7 != 0) {
              iVar6 = FUN_144909502(param_2,*(undefined8 *)(*plVar7 + 0x1f0));
              if (iVar6 != -1) {
                lVar5 = *(longlong *)(param_2 + (longlong)iVar3 * 0x10 + 0x6d0);
                iVar4 = *(int *)(param_1 + 0x468);
                *(uint *)(param_1 + 0x468) = iVar4 + 1U;
                if (*(uint *)(param_1 + 0x46c) < iVar4 + 1U) {
                  FUN_1400c28ea(plVar1,iVar4);
                }
                puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x70);
                *puVar2 = *(undefined4 *)(lVar9 + 4 + lVar13);
                puVar11 = (undefined8 *)((longlong)iVar6 * 0x60 + lVar5);
                puVar12 = (undefined8 *)(puVar2 + 4);
                for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
              }
            }
          }
LAB_142b52a2f:
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar10 * 8 != lVar13);
      }
    }
    puVar11 = (undefined8 *)(param_1 + 0x170);
    puVar12 = (undefined8 *)(param_1 + 0x1d0);
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar11 = (undefined8 *)(param_2 + 0x240);
    puVar12 = (undefined8 *)(param_1 + 0x170);
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  return;
}



// FUNCTION 142b52a9c FUN_142b52a9c body=3653 status=ok
// SIG undefined FUN_142b52a9c(void)

void FUN_142b52a9c(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  float param_5,float param_6,char param_7,float param_8)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int iVar7;
  longlong *plVar8;
  float *pfVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 unaff_RBP;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  longlong *local_130;
  int *local_128;
  code *local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined ***local_e8;
  undefined **local_d8;
  undefined8 *local_d0;
  ulonglong local_b0;
  
  lVar14 = DAT_14c9abae8;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  fVar25 = 1.0;
  if (((*(char *)(param_1 + 0x400) == '\0') && (iVar7 = *(int *)(param_1 + 0x410), iVar7 != 0)) &&
     (*(char *)(param_1 + 0xac) != '\x01')) {
    lVar20 = *(longlong *)(param_1 + 0x408);
    uVar11 = *(uint *)(param_1 + 0xa0);
    uVar22 = *(uint *)(lVar20 + 0x18);
    if (uVar11 < *(uint *)(lVar20 + 0x18)) {
      uVar22 = uVar11;
    }
    lVar15 = (longlong)(iVar7 + -1) * 0x20;
    fVar27 = (float)(*(int *)(lVar20 + 0x18 + lVar15) - uVar22);
    plVar8 = (longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
             );
    iVar4 = *(int *)plVar8;
    fVar25 = fVar27;
    if (iVar4 == 0x40000002) {
      iVar4 = 0x40000002;
LAB_142b53012:
      uVar19 = 0;
    }
    else {
      if ((DAT_14c86a9f8 != 1) || (iVar4 == 2)) goto LAB_142b53012;
      if (iVar4 == 1) {
        local_128 = (int *)(lVar20 + lVar15 + 0x18);
        local_130 = plVar8;
        uVar5 = FUN_140ad26c0();
        local_120 = (code *)CONCAT44(local_120._4_4_,uVar5);
        DVar6 = GetCurrentThreadId();
        uVar19 = (ulonglong)((DWORD)local_120 != DVar6);
        iVar4 = (int)*local_130;
        plVar8 = local_130;
        fVar25 = (float)(*local_128 - uVar22);
      }
      else {
        uVar19 = 1;
      }
    }
    pfVar9 = DAT_14c9abb00;
    uVar11 = uVar11 - uVar22;
    uVar19 = (ulonglong)(fVar25 - *(float *)(lVar14 + uVar19 * 4) * (fVar27 / (float)iVar7));
    if (iVar4 == 0x40000002) {
      fVar28 = *DAT_14c9abb00;
LAB_142b530dc:
      uVar12 = 0;
      lVar14 = DAT_14c9abb18;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        fVar28 = *DAT_14c9abb00;
      }
      else if (iVar4 == 2) {
        fVar28 = *DAT_14c9abb00;
        iVar4 = 2;
      }
      else {
        uVar12 = 1;
        if (iVar4 == 1) {
          local_130 = plVar8;
          uVar5 = FUN_140ad26c0();
          local_128 = (int *)CONCAT44(local_128._4_4_,uVar5);
          DVar6 = GetCurrentThreadId();
          uVar12 = (ulonglong)((DWORD)local_128 != DVar6);
          iVar4 = (int)*local_130;
        }
        fVar28 = pfVar9[uVar12];
        if (iVar4 == 0x40000002) goto LAB_142b530dc;
      }
      lVar14 = DAT_14c9abb18;
      if (((DAT_14c86a9f8 & 1) == 0) || (iVar4 == 2)) goto LAB_142b530dc;
      if (iVar4 == 1) {
        uVar5 = FUN_140ad26c0();
        local_130 = (longlong *)CONCAT44(local_130._4_4_,uVar5);
        DVar6 = GetCurrentThreadId();
        uVar12 = (ulonglong)((DWORD)local_130 != DVar6);
      }
      else {
        uVar12 = 1;
      }
    }
    fVar1 = *(float *)(lVar14 + uVar12 * 4);
    uVar22 = (uint)uVar19;
    fVar25 = (float)(uVar19 & 0xffffffff);
    fVar26 = fVar25 - fVar27 / (float)iVar7;
    if ((float)uVar11 < fVar26) {
      fVar25 = (1.0 - (float)uVar11 / fVar26) * fVar1 + 1.0;
    }
    else {
      uVar18 = uVar11 - uVar22;
      if (uVar11 < uVar22 || uVar18 == 0) {
        fVar25 = 1.0;
      }
      else {
        fVar25 = 1.0 - ((float)uVar18 / (fVar27 - fVar25)) * fVar28;
      }
    }
    if (fVar1 <= fVar25) {
      fVar25 = fVar1;
    }
    if (fVar25 <= fVar28) {
      fVar25 = fVar28;
    }
  }
  *(float *)(param_1 + 0xa4) = param_5 * fVar25 + *(float *)(param_1 + 0xa4);
  if ((param_7 == '\x01' && 0.99999 <= param_8) && (1e-08 <= *(float *)(param_1 + 0x14))) {
    *(float *)(param_1 + 0xa8) =
         (float)*(int *)(param_1 + 0x9c) / *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xa8);
  }
  if (param_3 == (longlong *)0x0) {
LAB_142b52bcf:
    fVar25 = 0.0;
    if (*(char *)(param_2 + 0x7c) == '\x01') {
LAB_142b53064:
      local_e8 = *(undefined ****)(param_2 + 0x90);
      local_f8 = *(code **)(param_2 + 0x80);
      uStack_f0 = *(undefined8 *)(param_2 + 0x88);
      goto LAB_142b52bf4;
    }
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_150 = &local_f8;
      local_f8 = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_142b4754c;
      local_158 = &LAB_147c45ce0;
      local_160 = &LAB_1463f1ff4;
      local_168 = L"Game";
      local_170 = 0x4000000000;
      local_178 = 0x10000004;
      local_180 = 8;
      local_188 = CONCAT44(local_188._4_4_,0x428);
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(param_3[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) goto LAB_142b52bcf;
    if (*(char *)(param_2 + 0x7c) != '\0') goto LAB_142b53064;
    lVar14 = FUN_1447210f0(param_3);
    plVar8 = (longlong *)(**(code **)(*param_3 + 0x638))(param_3);
    if (plVar8 == (longlong *)0x0) {
      fVar25 = 0.0;
      if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x30) != 0)) &&
         (plVar8 = *(longlong **)(*(longlong *)(lVar14 + 0x30) + 0x2b0), plVar8 != (longlong *)0x0))
      {
        if (*(code **)(*plVar8 + 0x660) == FUN_1449fb17e) {
          if ((*(byte *)((longlong)plVar8 + 0x39e) & 1) == 0) {
            if ((*(byte *)((longlong)plVar8 + 0x39e) & 2) == 0) {
              if (DAT_14caf84d0 == (longlong *)0x0) {
                local_150 = (code **)&local_110;
                local_110 = FUN_1449e2820;
                local_140 = FUN_14081d0ea;
                local_148 = (code *)&LAB_145a62952;
                local_158 = &LAB_147c8cd45;
                local_160 = &LAB_1461468ae;
                local_168 = L"Engine";
                local_170 = 0;
                local_178 = 0x10000006;
                local_180 = 8;
                local_188 = CONCAT44(local_188._4_4_,0x218);
                FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
              }
              plVar16 = DAT_14caf84d0;
              lVar14 = DAT_14caf84d0[0x22];
              if (lVar14 == 0) {
                (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
                lVar14 = plVar16[0x22];
              }
              pfVar9 = (float *)(lVar14 + 0x38);
            }
            else {
              pfVar9 = (float *)((longlong)plVar8 + 0x41c);
            }
            fVar25 = *pfVar9;
            *(float *)(plVar8 + 0x83) = fVar25;
          }
          else {
            fVar25 = *(float *)(plVar8 + 0x83);
          }
        }
        else {
          fVar25 = (float)(**(code **)(*plVar8 + 0x660))(plVar8);
        }
      }
    }
    else {
      fVar25 = (float)(**(code **)(*plVar8 + 0x478))(plVar8);
    }
  }
  local_e8 = (undefined ***)(double)fVar25;
  local_f8 = (code *)0x0;
  uStack_f0 = 0;
LAB_142b52bf4:
  local_188 = param_1 + 0xb0;
  FUN_142b53934(&local_110,*(undefined1 *)(param_2 + 0xdc),&local_f8,param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x68) = local_100;
  *(undefined4 *)(param_1 + 0x58) = (undefined4)local_110;
  *(undefined4 *)(param_1 + 0x5c) = local_110._4_4_;
  *(undefined4 *)(param_1 + 0x60) = uStack_108;
  *(undefined4 *)(param_1 + 100) = uStack_104;
  plVar8 = (longlong *)(param_1 + 0x498);
  uVar11 = *(uint *)(param_2 + 0x1e8);
  if ((longlong)(int)uVar11 != 0) {
    iVar7 = *(int *)(param_1 + 0x4a0);
    *(uint *)(param_1 + 0x4a0) = iVar7 + uVar11;
    plVar16 = (longlong *)(longlong)iVar7;
    if ((uint)(*(int *)(param_1 + 0x4a4) - iVar7) < uVar11) {
      local_130 = (longlong *)(longlong)iVar7;
      FUN_141743a7a(plVar8,iVar7);
      plVar16 = local_130;
    }
    memcpy((void *)((longlong)plVar16 * 0x60 + *plVar8),*(void **)(param_2 + 0x1e0),
           (longlong)(int)uVar11 * 0x60);
  }
  *(undefined4 *)(param_2 + 0x1e8) = 0;
  if (*(int *)(param_2 + 0x1ec) < 0) {
    FUN_141744912((undefined8 *)(param_2 + 0x1e0),0);
  }
  if (param_7 == '\0') {
    uVar19 = (ulonglong)*(int *)(param_1 + 0x4a0);
    if (0 < (longlong)uVar19) {
      uVar11 = -*(int *)(param_1 + 0x4a0);
      lVar14 = uVar19 * 0x60;
      do {
        lVar14 = lVar14 + -0x60;
        lVar20 = *plVar8;
        fVar25 = *(float *)(lVar20 + 0x50 + lVar14);
        if (fVar25 < 1e-08) {
          *(undefined1 *)(lVar20 + lVar14) = 0;
LAB_142b53287:
          uVar22 = *(uint *)(param_1 + 0x4a0);
          local_130 = (longlong *)(ulonglong)uVar11;
          if (uVar19 != uVar22) {
            iVar7 = uVar11 + uVar22;
            if (0 < (int)(uVar11 + uVar22)) {
              iVar7 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x498) + lVar14),
                    (void *)((longlong)(int)(uVar22 - iVar7) * 0x60 + *(longlong *)(param_1 + 0x498)
                            ),(longlong)iVar7 * 0x60);
            uVar22 = *(uint *)(param_1 + 0x4a0);
          }
          *(uint *)(param_1 + 0x4a0) = uVar22 - 1;
          FUN_141744878(plVar8);
          uVar11 = (uint)local_130;
        }
        else {
          *(float *)(lVar20 + 0x50 + lVar14) = fVar25 - param_6;
          if ((*(byte *)(lVar20 + lVar14) & 1) == 0) goto LAB_142b53287;
        }
        uVar11 = uVar11 + 1;
        bVar2 = 1 < uVar19;
        uVar19 = uVar19 - 1;
      } while (bVar2);
    }
  }
  if (0 < (longlong)*(int *)(param_2 + 0x120)) {
    local_130 = (longlong *)(param_2 + 0x118);
    local_118 = param_1 + 0x5a0;
    piVar23 = (int *)(longlong)*(int *)(param_2 + 0x120);
    do {
      piVar24 = (int *)((longlong)piVar23 + -1);
      plVar8 = (longlong *)(*local_130 + (longlong)piVar24 * 0xf8);
      iVar7 = *(int *)(*local_130 + 0xb0 + (longlong)piVar24 * 0xf8);
      if (iVar7 == 2) {
        local_110 = (code *)((ulonglong)local_110 & 0xffffffffffffff00);
        local_128 = piVar23;
        if (plVar8[0x13] != 0) {
          local_e8 = (undefined ***)0x0;
          local_d8 = &PTR_LAB_14a1e14e0;
          local_f8 = FUN_142b5e5fa;
          local_d0 = &local_110;
          AcquireSRWLockShared((PSRWLOCK)plVar8[0x14]);
          lVar14 = plVar8[0x13];
          local_120 = local_f8;
          pppuVar13 = local_e8;
          if (local_e8 == (undefined ***)0x0) {
            pppuVar13 = &local_d8;
          }
          uVar10 = (*(code *)(*pppuVar13)[1])();
          (*local_120)(uVar10,lVar14);
          ReleaseSRWLockShared((PSRWLOCK)plVar8[0x14]);
          if (local_f8 != (code *)0x0) {
            pppuVar13 = local_e8;
            if (local_e8 == (undefined ***)0x0) {
              pppuVar13 = &local_d8;
            }
            (*(code *)(*pppuVar13)[2])();
          }
        }
        piVar23 = local_128;
        if ((byte)local_110 == '\x01') {
LAB_142b53439:
          plVar8 = local_130;
          FUN_1471032ca(local_130,(ulonglong)piVar24 & 0xffffffff);
          FUN_147103346(plVar8);
        }
      }
      else {
        if (iVar7 == 1) {
          if ((longlong)*(int *)(param_1 + 0x5a8) != 0) {
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x5a0) + lVar14) == *plVar8) {
                iVar7 = (int)(lVar14 >> 3) * -0x42108421;
                if (iVar7 != -1) {
                  FUN_1470fa54a(*(longlong *)(param_1 + 0x5a0) + (longlong)iVar7 * 0xf8,plVar8);
                  goto LAB_142b5338e;
                }
                break;
              }
              lVar14 = lVar14 + 0xf8;
            } while ((longlong)*(int *)(param_1 + 0x5a8) * 0xf8 - lVar14 != 0);
          }
        }
        else {
          if (iVar7 == 3) {
            if ((longlong)*(int *)(param_1 + 0x5a8) != 0) {
              lVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x5a0) + lVar14) == *plVar8) {
                  iVar7 = (int)(lVar14 >> 3) * -0x42108421;
                  if (iVar7 != -1) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x5a0) + 0xb0 + (longlong)iVar7 * 0xf8)
                         = 3;
                  }
                  break;
                }
                lVar14 = lVar14 + 0xf8;
              } while ((longlong)*(int *)(param_1 + 0x5a8) * 0xf8 - lVar14 != 0);
            }
            goto LAB_142b53439;
          }
          if (iVar7 != 0) goto LAB_142b535a0;
        }
        FUN_145a1094c(local_118,plVar8);
LAB_142b5338e:
        *(undefined4 *)(plVar8 + 0x16) = 2;
      }
LAB_142b535a0:
      bVar2 = 1 < (longlong)piVar23;
      piVar23 = piVar24;
    } while (bVar2);
  }
  if (param_1 + 0x4c0 != param_2 + 0x128) {
    FUN_14499ee64(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c8));
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x134);
    *(undefined8 *)(param_2 + 0x130) = 0;
  }
  *(undefined1 *)(param_1 + 0x4b8) = *(undefined1 *)(param_2 + 0x360);
  *(undefined1 *)(param_2 + 0x360) = 0;
  puVar17 = (undefined8 *)(param_2 + 0x250);
  if (puVar17 != (undefined8 *)(param_1 + 0x590)) {
    FUN_1447ad90f(*(undefined8 *)(param_2 + 0x250),*(undefined4 *)(param_2 + 600));
    iVar7 = *(int *)(param_1 + 0x598);
    uVar10 = *(undefined8 *)(param_1 + 0x590);
    *(int *)(param_2 + 600) = iVar7;
    if (iVar7 == 0 && *(int *)(param_2 + 0x25c) == 0) {
      *(undefined4 *)(param_2 + 0x25c) = 0;
    }
    else {
      FUN_14009aa12(puVar17,iVar7);
      FUN_1447ad956(*puVar17,uVar10,iVar7);
    }
  }
  if ((((*(int *)(param_1 + 0x804) != 0) && (uVar11 = *(uint *)(param_1 + 0x800), -1 < (int)uVar11))
      && (((int)uVar11 < DAT_14c9647dc &&
          ((lVar14 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8), lVar14 != 0 &&
           (*(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0x804))))))) &&
     ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)) {
    FUN_14174344a(param_2 + 0x270,param_1 + 0x5e0);
    *(undefined1 *)(param_2 + 1000) = *(undefined1 *)(param_1 + 0xad);
  }
  FUN_142b528ba(param_1,param_4,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff);
  plVar8 = (longlong *)(param_2 + 0x240);
  uVar19 = (ulonglong)*(int *)(param_2 + 0x248);
  uVar5 = 0;
  if ((longlong)uVar19 < 1) {
    bVar21 = 0;
  }
  else {
    lVar14 = param_1 + 0x520;
    lVar20 = uVar19 * 0xb0;
    bVar21 = 0;
    do {
      lVar20 = lVar20 + -0xb0;
      lVar15 = *plVar8;
      if (*(char *)(lVar15 + 0xa4 + lVar20) == '\x01') {
        iVar7 = *(int *)(lVar15 + 0xa0 + lVar20);
        puVar17 = (undefined8 *)(lVar15 + lVar20);
        if (iVar7 == 0) {
          iVar7 = FUN_144a8b5fe(lVar14,*puVar17);
          if (iVar7 != 0) {
            FUN_147103164(plVar8,(int)uVar19 + -1);
            FUN_145989d6c(plVar8);
            bVar21 = 1;
          }
        }
        else if (iVar7 == 1) {
          iVar7 = FUN_144a8b5fe(lVar14,*puVar17);
          bVar21 = bVar21 | iVar7 != 0;
        }
        else if (iVar7 == 2) {
          local_110 = (code *)((ulonglong)local_110 & 0xffffffffffffff00);
          FUN_144a13f80(lVar14,&local_f8,puVar17,&local_110);
          bVar21 = bVar21 | (byte)local_110 ^ 1;
          FUN_147103164(plVar8,(int)uVar19 + -1);
          FUN_145989d6c(plVar8);
        }
      }
      bVar2 = 1 < uVar19;
      uVar19 = uVar19 - 1;
    } while (bVar2);
    uVar19 = (ulonglong)*(uint *)(param_2 + 0x248);
  }
  uVar11 = (uint)uVar19;
  if (uVar11 != 0) {
    iVar7 = *(int *)(param_1 + 0x578);
    *(uint *)(param_1 + 0x578) = iVar7 + uVar11;
    if ((uint)(*(int *)(param_1 + 0x57c) - iVar7) < uVar11) {
      FUN_141020442((longlong *)(param_1 + 0x570),iVar7);
    }
    FUN_1447ad956((longlong)iVar7 * 0xb0 + *(longlong *)(param_1 + 0x570),
                  *(undefined8 *)(param_2 + 0x240),uVar19 & 0xffffffff);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
  }
  iVar7 = *(int *)(param_2 + 0x24c);
  FUN_1447ad90f(*(undefined8 *)(param_2 + 0x240),uVar5);
  *(undefined4 *)(param_2 + 0x248) = 0;
  if ((iVar7 < 0) && (*(int *)(param_2 + 0x24c) != 0)) {
    FUN_14710320e(plVar8);
  }
  if ((bVar21 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x361) = 1;
  }
  if ((*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x100)) &&
     (cVar3 = FUN_14499ee8f(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0xf8)),
     cVar3 != '\0')) {
    if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 142b53934 FUN_142b53934 body=805 status=ok
// SIG undefined FUN_142b53934(void)

void FUN_142b53934(double *param_1,char param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (param_2 == '\x01') {
    param_1[2] = param_3[2];
    dVar1 = *param_3;
    dVar2 = param_3[1];
LAB_142b53974:
    *param_1 = dVar1;
    param_1[1] = dVar2;
  }
  else {
    if (param_2 == '\x02') {
      dVar1 = *param_3;
      dVar2 = param_3[1];
      dVar6 = -*param_4;
      dVar7 = -param_4[1];
      dVar4 = param_4[2] * -1.0;
      dVar5 = param_4[3] * 1.0;
      dVar8 = dVar2 * dVar6 - dVar1 * dVar7;
      dVar9 = param_3[2] * dVar7 - dVar2 * dVar4;
      dVar11 = dVar1 * dVar4 - dVar6 * param_3[2];
      dVar9 = dVar9 + dVar9;
      dVar11 = dVar11 + dVar11;
      dVar8 = dVar8 + dVar8;
      dVar3 = dVar5 * dVar8 + param_3[2] + (dVar11 * dVar6 - dVar9 * dVar7);
      dVar7 = (dVar8 * dVar7 - dVar11 * dVar4) + dVar5 * dVar9 + dVar1;
      dVar8 = *param_4 * dVar8 + dVar4 * dVar9 + dVar5 * dVar11 + dVar2;
      dVar1 = *param_5;
      dVar5 = -dVar1;
      dVar6 = -param_5[1];
      dVar2 = param_5[2] * -1.0;
      dVar4 = param_5[3] * 1.0;
      dVar10 = dVar7 * dVar2 - dVar5 * dVar3;
      dVar9 = dVar8 * dVar5 - dVar6 * dVar7;
      dVar11 = dVar3 * dVar6 - dVar2 * dVar8;
      dVar11 = dVar11 + dVar11;
      dVar10 = dVar10 + dVar10;
      dVar9 = dVar9 + dVar9;
      dVar3 = dVar4 * dVar9 + dVar3 + (dVar10 * dVar5 - dVar11 * dVar6);
      *param_1 = (dVar9 * dVar6 - dVar10 * dVar2) + dVar4 * dVar11 + dVar7;
      param_1[1] = dVar1 * dVar9 + dVar2 * dVar11 + dVar4 * dVar10 + dVar8;
    }
    else {
      if (param_2 != '\0') {
        param_1[2] = DAT_14c8464f0;
        dVar1 = DAT_14c8464e0;
        dVar2 = DAT_14c8464e8;
        goto LAB_142b53974;
      }
      dVar1 = *param_3;
      dVar2 = param_3[1];
      dVar4 = *param_4;
      dVar3 = -dVar4;
      dVar7 = -param_4[1];
      dVar5 = param_4[2] * -1.0;
      dVar6 = param_4[3] * 1.0;
      dVar8 = dVar2 * dVar3 - dVar1 * dVar7;
      dVar9 = param_3[2] * dVar7 - dVar2 * dVar5;
      dVar11 = dVar1 * dVar5 - dVar3 * param_3[2];
      dVar9 = dVar9 + dVar9;
      dVar11 = dVar11 + dVar11;
      dVar8 = dVar8 + dVar8;
      dVar3 = dVar6 * dVar8 + param_3[2] + (dVar11 * dVar3 - dVar9 * dVar7);
      *param_1 = (dVar8 * dVar7 - dVar11 * dVar5) + dVar6 * dVar9 + dVar1;
      param_1[1] = dVar4 * dVar8 + dVar5 * dVar9 + dVar6 * dVar11 + dVar2;
    }
    param_1[2] = dVar3;
  }
  return;
}



// FUNCTION 142b53c5a FUN_142b53c5a body=150 status=ok
// SIG undefined FUN_142b53c5a(void)

void FUN_142b53c5a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  if (uVar1 < 2) {
    FUN_142b53cf0(param_1,param_2,*(undefined8 *)(param_1 + 0x3f8),1);
    FUN_144a65e4a(*(undefined8 *)(param_1 + 0x3f0),*(undefined8 *)(param_1 + 0x3f8),0,0,0);
    uVar1 = *(uint *)(param_1 + 0xa0);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  uVar2 = 2;
  if (2 < uVar1) {
    uVar2 = uVar1;
  }
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(uint *)(param_1 + 0xa0) = uVar2;
  if (*(char *)(param_1 + 0x400) == '\x01') {
    FUN_144940db0(*(undefined8 *)(param_1 + 0x3f0),param_1 + 0x418);
    return;
  }
  return;
}



// FUNCTION 142b53cf0 FUN_142b53cf0 body=2992 status=ok
// SIG undefined FUN_142b53cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b53cf0(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar51 [16];
  double dVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  byte local_1b1;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  double local_180;
  float local_178;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [20];
  undefined2 local_f4;
  undefined2 local_f2;
  ulonglong local_f0;
  
  auVar14 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b1 = param_4;
  local_190 = param_2;
  if (param_3 != 0) {
    fVar30 = (float)*(int *)(param_1 + 0x9c) * (1.0 / *(float *)(param_1 + 0x14));
    fVar54 = fVar30 / *(float *)(param_1 + 0xa4);
    fVar55 = 1.0;
    if (param_4 == 0) {
      fVar55 = fVar54;
    }
    local_1b0 = (longlong *)(param_2 + 0x20);
    local_188 = *(longlong *)(param_2 + 0x30);
    iVar3 = *(int *)(param_1 + 0x448);
    if ((longlong)iVar3 != 0) {
      lVar22 = *(longlong *)(param_1 + 0x440);
      local_198 = param_1 + 0xb0;
      local_1a0 = param_1 + 0x170;
      local_1a8 = CONCAT71(local_1a8._1_7_,1e-05 < ABS(fVar54) | param_4);
      dVar8 = (double)fVar55;
      local_168._8_4_ = SUB84(dVar8,0);
      local_168._0_8_ = (double)fVar55;
      local_168._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar12 = (double)DAT_149934d80 - (double)fVar55;
      dVar8 = DAT_149934d80._8_8_ - dVar8;
      lVar19 = 0;
      uVar31 = 0xffffffff;
      uVar32 = 0x7fffffff;
      do {
        iVar16 = *(int *)(lVar22 + lVar19);
        if (iVar16 < *(int *)(param_3 + 0x10)) {
          plVar17 = (longlong *)((longlong)iVar16 * 8 + *(longlong *)(param_3 + 8));
LAB_142b53ec1:
          plVar17 = (longlong *)*plVar17;
          if (plVar17 != (longlong *)0x0) {
            if ((*(char *)(param_1 + 0x24) == '\0') && ((*(byte *)(plVar17 + 4) & 1) == 0)) {
              if ((double)(plVar17[0xc] & CONCAT44(uVar32,uVar31)) <= 9.99999993922529e-09) {
                if ((((9.99999993922529e-09 < (double)(plVar17[0xd] & CONCAT44(uVar32,uVar31))) ||
                     (9.99999993922529e-09 < ABS((double)plVar17[0xe]))) ||
                    (9.99999993922529e-09 < ABS((double)plVar17[9]))) ||
                   (9.99999993922529e-09 < ABS((double)plVar17[10]))) {
                  bVar15 = false;
                  uVar31 = 0xffffffff;
                  uVar32 = 0x7fffffff;
                }
                else {
                  uVar31 = (undefined4)DAT_149931180;
                  uVar32 = DAT_149931180._4_4_;
                  bVar15 = (double)(plVar17[0xb] & DAT_149931180) <= 9.99999993922529e-09;
                }
              }
              else {
                bVar15 = false;
              }
              if ((bVar15 | local_1b1) != 1) goto LAB_142b542b1;
            }
            iVar16 = (**(code **)*plVar17)(plVar17);
            plVar24 = plVar17;
            if (iVar16 != 1) {
              plVar24 = (longlong *)0x0;
            }
            iVar16 = *(int *)(lVar22 + 4 + lVar19);
            if (*(char *)(*(longlong *)(local_190 + 0x38) + (longlong)iVar16) == '\0') {
              FUN_1447d5d8e(local_1b0,iVar16);
            }
            local_1c8 = local_198;
            FUN_142b59010(local_158,*(undefined1 *)(param_1 + 0x98),
                          (longlong)iVar16 * 0x60 + *local_1b0,local_1a0);
            local_108._8_8_ = 0;
            local_108._0_8_ = DAT_14c846520;
            local_118._8_8_ = DAT_14c846518;
            local_118._0_8_ = DAT_14c846510;
            cVar2 = *(char *)(param_1 + 0x480);
            if (cVar2 == '\x02') {
              if (plVar24 == (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x28))(plVar17,local_158);
              }
              else {
                FUN_1406b048c(plVar24,local_158);
              }
            }
            else if (cVar2 == '\x01') {
              if (plVar24 == (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x48))(plVar17,local_158);
              }
              else {
                plVar17 = (longlong *)local_158;
                plVar21 = plVar24 + 0x26;
                for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
                  *plVar21 = *plVar17;
                  plVar17 = plVar17 + 1;
                  plVar21 = plVar21 + 1;
                }
                if (plVar24[0x57] != 0) {
                  local_f2 = 0x101;
                  local_f4 = 0x101;
                  local_1c8 = CONCAT71(local_1c8._1_7_,1);
                  FUN_144a5ad3c(plVar24[0x57],&local_f4,&local_f2,1);
                }
              }
            }
            else if (cVar2 == '\0') {
              auVar43 = *(undefined1 (*) [16])(plVar17 + 0x26);
              auVar1 = *(undefined1 (*) [16])(plVar17 + 0x28);
              auVar44 = auVar43;
              auVar34 = auVar1;
              auVar13 = *(undefined1 (*) [16])(plVar17 + 0x2a);
              auVar9 = *(undefined1 (*) [16])(plVar17 + 0x2c);
              auVar39 = *(undefined1 (*) [16])(plVar17 + 0x2e);
              auVar33 = *(undefined1 (*) [16])(plVar17 + 0x30);
              if (((char)local_1a8 != '\0') &&
                 (auVar44 = local_158, auVar34 = local_148, auVar13 = local_138, auVar9 = local_128,
                 auVar39 = local_118, auVar33 = local_108._0_16_, 1e-05 < ABS(fVar55 + -1.0))) {
                dVar46 = (double)local_138._8_8_ * (double)local_168._8_8_ +
                         (double)plVar17[0x2b] * dVar8;
                dVar40 = (double)local_128._8_8_ * (double)local_168._8_8_ +
                         (double)plVar17[0x2d] * dVar8;
                auVar13._8_4_ = SUB84(dVar46,0);
                auVar13._0_8_ =
                     (double)local_138._0_8_ * (double)local_168._0_8_ +
                     *(double *)*(undefined1 (*) [16])(plVar17 + 0x2a) * dVar12;
                auVar13._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                auVar9._8_4_ = SUB84(dVar40,0);
                auVar9._0_8_ = (double)local_128._0_8_ * (double)local_168._0_8_ +
                               *(double *)*(undefined1 (*) [16])(plVar17 + 0x2c) * dVar12;
                auVar9._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                dVar40 = DAT_14c846518 * (double)local_168._8_8_ + (double)plVar17[0x2f] * dVar8;
                auVar39._8_4_ = SUB84(dVar40,0);
                auVar39._0_8_ =
                     DAT_14c846510 * (double)local_168._0_8_ +
                     *(double *)*(undefined1 (*) [16])(plVar17 + 0x2e) * dVar12;
                auVar39._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                local_108._8_8_ = (double)local_168._8_8_ * 0.0 + (double)plVar17[0x31] * dVar8;
                local_108._0_8_ =
                     DAT_14c846520 * (double)local_168._0_8_ +
                     *(double *)*(undefined1 (*) [16])(plVar17 + 0x30) * dVar12;
                dVar40 = auVar1._0_8_ * (double)local_148._0_8_ +
                         auVar43._0_8_ * (double)local_158._0_8_;
                dVar46 = auVar1._8_8_ * (double)local_148._8_8_ +
                         auVar43._8_8_ * (double)local_158._8_8_;
                lVar25 = -(ulonglong)(0.0 <= dVar40 + dVar46);
                lVar27 = -(ulonglong)(0.0 <= dVar40 + dVar46);
                uVar31 = (undefined4)lVar27;
                uVar32 = (undefined4)((ulonglong)lVar27 >> 0x20);
                auVar42._0_8_ = 0.0 - auVar43._0_8_;
                auVar42._8_8_ = 0.0 - auVar43._8_8_;
                auVar50._0_8_ = 0.0 - auVar1._0_8_;
                auVar50._8_8_ = 0.0 - auVar1._8_8_;
                auVar34._8_4_ = uVar31;
                auVar34._0_8_ = lVar25;
                auVar34._12_4_ = uVar32;
                auVar43 = blendvpd(auVar42,auVar43,auVar34);
                dVar41 = auVar43._0_8_ * dVar12 + (double)local_158._0_8_ * (double)local_168._0_8_;
                dVar47 = auVar43._8_8_ * dVar8 + (double)local_158._8_8_ * (double)local_168._8_8_;
                auVar43._8_4_ = uVar31;
                auVar43._0_8_ = lVar25;
                auVar43._12_4_ = uVar32;
                auVar43 = blendvpd(auVar50,auVar1,auVar43);
                dVar48 = auVar43._0_8_ * dVar12 + (double)local_148._0_8_ * (double)local_168._0_8_;
                dVar52 = auVar43._8_8_ * dVar8 + (double)local_148._8_8_ * (double)local_168._8_8_;
                dVar40 = dVar48 * dVar48 + dVar41 * dVar41;
                dVar46 = dVar52 * dVar52 + dVar47 * dVar47;
                auVar33._0_8_ = dVar40 + dVar46;
                auVar33._8_8_ = dVar40 + dVar46;
                uVar28 = -(ulonglong)(1e-08 <= auVar33._8_8_);
                auVar43 = sqrtpd(auVar33,auVar33);
                auVar43 = divpd(auVar14,auVar43);
                auVar37._0_8_ = auVar43._0_8_ * dVar48;
                auVar37._8_8_ = auVar43._8_8_ * dVar52;
                auVar44._0_8_ =
                     (ulonglong)(dVar41 * auVar43._0_8_) & -(ulonglong)(1e-08 <= auVar33._0_8_);
                auVar44._8_8_ = (ulonglong)(dVar47 * auVar43._8_8_) & uVar28;
                auVar1._8_4_ = (int)uVar28;
                auVar1._0_8_ = -(ulonglong)(1e-08 <= auVar33._0_8_);
                auVar1._12_4_ = (int)(uVar28 >> 0x20);
                auVar34 = blendvpd(_DAT_149935300,auVar37,auVar1);
                local_180 = (double)(1.0 / fVar30);
                local_178 = fVar54;
                auVar33 = local_108._0_16_;
              }
              local_108._0_16_ = auVar33;
              local_118 = auVar39;
              local_128 = auVar9;
              local_138 = auVar13;
              local_148 = auVar34;
              local_158 = auVar44;
              if (plVar24 == (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x28))(plVar17,local_158);
              }
              else {
                FUN_1406b048c(plVar24,local_158);
              }
              uVar31 = 0xffffffff;
              uVar32 = 0x7fffffff;
            }
          }
        }
        else if (*(longlong *)(param_1 + 0x3a8) != 0) {
          plVar17 = (longlong *)
                    ((longlong)(iVar16 - *(int *)(param_3 + 0x10)) * 8 +
                    *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0xb8));
          goto LAB_142b53ec1;
        }
LAB_142b542b1:
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar3 * 8 != lVar19);
    }
    auVar14 = _DAT_149931180;
    if ((*(char *)(param_1 + 0x24) == '\0') &&
       (iVar3 = *(int *)(param_1 + 0x80), (longlong)iVar3 != 0)) {
      lVar19 = *(longlong *)(param_1 + 0x78);
      lVar22 = param_1 + 0xb0;
      local_198 = param_1 + 0x170;
      local_1a0 = CONCAT71(local_1a0._1_7_,1e-05 < ABS(fVar54) | local_1b1);
      dVar8 = (double)fVar55;
      dVar12 = (double)fVar55;
      dVar40 = 1.0 - dVar8;
      dVar46 = 1.0 - dVar12;
      lVar25 = 0;
      do {
        if ((((1e-08 < *(float *)(lVar19 + 0x24 + lVar25)) ||
             (1e-08 < *(float *)(lVar19 + 0x28 + lVar25))) &&
            (lVar27 = (longlong)*(int *)(lVar19 + 8 + lVar25), lVar27 != -1)) &&
           (lVar27 = *(longlong *)(*(longlong *)(param_3 + 8) + lVar27 * 8), lVar27 != 0)) {
          iVar16 = *(int *)(lVar27 + 0x340);
          iVar18 = -1;
          if ((-1 < (longlong)iVar16) && (iVar16 < *(int *)(local_188 + 0x88))) {
            iVar18 = *(int *)(*(longlong *)(local_188 + 0x80) + (longlong)iVar16 * 4);
          }
          if (*(char *)(*(longlong *)(local_190 + 0x38) + (longlong)iVar18) == '\0') {
            FUN_1447d5d8e(local_1b0);
          }
          local_1c8 = lVar22;
          FUN_142b59010(local_158,*(undefined1 *)(param_1 + 0x98),
                        (longlong)iVar18 * 0x60 + *local_1b0,local_198);
          local_108._8_8_ = 0;
          local_108._0_8_ = DAT_14c846520;
          local_118._8_8_ = DAT_14c846518;
          local_118._0_8_ = DAT_14c846510;
          if ((*(byte *)(lVar27 + 0x20) & 1) == 0) {
            uVar28 = auVar14._0_8_;
            if ((double)(*(ulonglong *)(lVar27 + 0x60) & uVar28) <= 9.99999993922529e-09) {
              if (((9.99999993922529e-09 < (double)(*(ulonglong *)(lVar27 + 0x68) & uVar28)) ||
                  (9.99999993922529e-09 < (double)(*(ulonglong *)(lVar27 + 0x70) & uVar28))) ||
                 ((9.99999993922529e-09 < (double)(*(ulonglong *)(lVar27 + 0x48) & uVar28) ||
                  (9.99999993922529e-09 < (double)(*(ulonglong *)(lVar27 + 0x50) & uVar28))))) {
                bVar15 = false;
              }
              else {
                bVar15 = (double)(*(ulonglong *)(lVar27 + 0x58) & uVar28) <= 9.99999993922529e-09;
              }
            }
            else {
              bVar15 = false;
            }
            if (!bVar15 && local_1b1 == 0) {
              cVar2 = *(char *)(param_1 + 0x480);
              if (cVar2 == '\x02') {
                FUN_1406b048c(lVar27,local_158,0,1);
              }
              else if (cVar2 == '\x01') {
                puVar20 = (undefined8 *)local_158;
                puVar23 = (undefined8 *)(lVar27 + 0x130);
                for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                  *puVar23 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar23 = puVar23 + 1;
                }
                local_1a8 = lVar22;
                if (*(longlong *)(lVar27 + 0x2b8) != 0) {
                  local_f2 = 0x101;
                  local_f4 = 0x101;
                  local_1c8 = CONCAT71(local_1c8._1_7_,1);
                  FUN_144a5ad3c(*(longlong *)(lVar27 + 0x2b8),&local_f4,&local_f2,1);
                  lVar22 = local_1a8;
                }
              }
              else if (cVar2 == '\0') {
                auVar43 = *(undefined1 (*) [16])(lVar27 + 0x130);
                auVar1 = *(undefined1 (*) [16])(lVar27 + 0x140);
                auVar36 = auVar43;
                auVar39 = auVar1;
                auVar11 = *(undefined1 (*) [16])(lVar27 + 0x150);
                auVar10 = *(undefined1 (*) [16])(lVar27 + 0x160);
                auVar4 = *(undefined1 (*) [16])(lVar27 + 0x170);
                auVar9 = *(undefined1 (*) [16])(lVar27 + 0x180);
                if (((char)local_1a0 != '\0') &&
                   (auVar36 = local_158, auVar39 = local_148, auVar11 = local_138,
                   auVar10 = local_128, auVar4 = local_118, auVar9 = local_108._0_16_,
                   1e-05 < ABS(fVar55 + -1.0))) {
                  dVar47 = (double)local_138._8_8_ * dVar12 + *(double *)(lVar27 + 0x158) * dVar46;
                  dVar41 = (double)local_128._8_8_ * dVar12 + *(double *)(lVar27 + 0x168) * dVar46;
                  auVar11._8_4_ = SUB84(dVar47,0);
                  auVar11._0_8_ =
                       (double)local_138._0_8_ * dVar8 +
                       *(double *)*(undefined1 (*) [16])(lVar27 + 0x150) * dVar40;
                  auVar11._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
                  auVar10._8_4_ = SUB84(dVar41,0);
                  auVar10._0_8_ =
                       (double)local_128._0_8_ * dVar8 +
                       *(double *)*(undefined1 (*) [16])(lVar27 + 0x160) * dVar40;
                  auVar10._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                  dVar41 = DAT_14c846518 * dVar12 + *(double *)(lVar27 + 0x178) * dVar46;
                  auVar4._8_4_ = SUB84(dVar41,0);
                  auVar4._0_8_ = DAT_14c846510 * dVar8 +
                                 *(double *)*(undefined1 (*) [16])(lVar27 + 0x170) * dVar40;
                  auVar4._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                  local_108._8_8_ = dVar12 * 0.0 + *(double *)(lVar27 + 0x188) * dVar46;
                  local_108._0_8_ =
                       DAT_14c846520 * dVar8 +
                       *(double *)*(undefined1 (*) [16])(lVar27 + 0x180) * dVar40;
                  dVar41 = auVar1._0_8_ * (double)local_148._0_8_ +
                           auVar43._0_8_ * (double)local_158._0_8_;
                  dVar47 = auVar1._8_8_ * (double)local_148._8_8_ +
                           auVar43._8_8_ * (double)local_158._8_8_;
                  lVar26 = -(ulonglong)(0.0 <= dVar41 + dVar47);
                  lVar29 = -(ulonglong)(0.0 <= dVar41 + dVar47);
                  uVar31 = (undefined4)lVar29;
                  uVar32 = (undefined4)((ulonglong)lVar29 >> 0x20);
                  auVar35._0_8_ = 0.0 - auVar43._0_8_;
                  auVar35._8_8_ = 0.0 - auVar43._8_8_;
                  auVar51._0_8_ = 0.0 - auVar1._0_8_;
                  auVar51._8_8_ = 0.0 - auVar1._8_8_;
                  auVar5._8_4_ = uVar31;
                  auVar5._0_8_ = lVar26;
                  auVar5._12_4_ = uVar32;
                  auVar43 = blendvpd(auVar35,auVar43,auVar5);
                  dVar41 = auVar43._0_8_ * dVar40 + (double)local_158._0_8_ * dVar8;
                  dVar47 = auVar43._8_8_ * dVar46 + (double)local_158._8_8_ * dVar12;
                  auVar6._8_4_ = uVar31;
                  auVar6._0_8_ = lVar26;
                  auVar6._12_4_ = uVar32;
                  auVar43 = blendvpd(auVar51,auVar1,auVar6);
                  dVar49 = auVar43._0_8_ * dVar40 + (double)local_148._0_8_ * dVar8;
                  dVar53 = auVar43._8_8_ * dVar46 + (double)local_148._8_8_ * dVar12;
                  dVar48 = dVar49 * dVar49 + dVar41 * dVar41;
                  dVar52 = dVar53 * dVar53 + dVar47 * dVar47;
                  auVar38._0_8_ = dVar48 + dVar52;
                  auVar38._8_8_ = dVar48 + dVar52;
                  uVar28 = -(ulonglong)(1e-08 <= auVar38._8_8_);
                  auVar43 = sqrtpd(auVar38,auVar38);
                  auVar43 = divpd(_DAT_149934d80,auVar43);
                  auVar45._0_8_ = auVar43._0_8_ * dVar49;
                  auVar45._8_8_ = auVar43._8_8_ * dVar53;
                  auVar36._0_8_ =
                       (ulonglong)(dVar41 * auVar43._0_8_) & -(ulonglong)(1e-08 <= auVar38._0_8_);
                  auVar36._8_8_ = (ulonglong)(dVar47 * auVar43._8_8_) & uVar28;
                  auVar7._8_4_ = (int)uVar28;
                  auVar7._0_8_ = -(ulonglong)(1e-08 <= auVar38._0_8_);
                  auVar7._12_4_ = (int)(uVar28 >> 0x20);
                  auVar39 = blendvpd(_DAT_149935300,auVar45,auVar7);
                  auVar9 = local_108._0_16_;
                }
                local_108._0_16_ = auVar9;
                local_118 = auVar4;
                local_128 = auVar10;
                local_138 = auVar11;
                local_148 = auVar39;
                local_158 = auVar36;
                FUN_1406b048c(lVar27,local_158);
              }
            }
          }
        }
        lVar25 = lVar25 + 0x50;
      } while ((longlong)iVar3 * 0x50 != lVar25);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b548a2 FUN_142b548a2 body=596 status=ok
// SIG undefined FUN_142b548a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b548a2(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if (((*(char *)(param_1 + 0x98) == '\x01') && (*(char *)(param_2 + 0xec) == '\x01')) &&
     (*(char *)(param_1 + 0x2f0) == '\x01')) {
    fVar9 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x14);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1e-05 < fVar9) {
      if (fVar9 < 0.99999) {
        puVar5 = (undefined8 *)(param_1 + 0x230);
        puVar6 = (undefined8 *)(param_1 + 0x300);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        dVar16 = (double)fVar9;
        dVar17 = (double)fVar9;
        *(undefined1 *)(param_1 + 0x360) = 1;
        auVar3 = _DAT_149934d80;
        dVar13 = (double)DAT_149934d80 - dVar16;
        dVar15 = DAT_149934d80._8_8_ - dVar17;
        dVar18 = *(double *)(param_1 + 0x2c8) * dVar17 + *(double *)(param_1 + 0x338) * dVar15;
        *(double *)(param_1 + 800) =
             *(double *)(param_1 + 0x2b0) * dVar16 + *(double *)(param_1 + 800) * dVar13;
        *(double *)(param_1 + 0x328) =
             *(double *)(param_1 + 0x2b8) * dVar17 + *(double *)(param_1 + 0x328) * dVar15;
        auVar20._8_4_ = SUB84(dVar18,0);
        auVar20._0_8_ =
             *(double *)(param_1 + 0x2c0) * dVar16 + *(double *)(param_1 + 0x330) * dVar13;
        auVar20._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x330) = auVar20;
        dVar18 = *(double *)(param_1 + 0x2e8) * dVar17 + *(double *)(param_1 + 0x358) * dVar15;
        *(double *)(param_1 + 0x340) =
             *(double *)(param_1 + 0x2d0) * dVar16 + *(double *)(param_1 + 0x340) * dVar13;
        *(double *)(param_1 + 0x348) =
             *(double *)(param_1 + 0x2d8) * dVar17 + *(double *)(param_1 + 0x348) * dVar15;
        auVar24._8_4_ = SUB84(dVar18,0);
        auVar24._0_8_ =
             *(double *)(param_1 + 0x2e0) * dVar16 + *(double *)(param_1 + 0x350) * dVar13;
        auVar24._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x350) = auVar24;
        auVar20 = *(undefined1 (*) [16])(param_1 + 0x300);
        auVar24 = *(undefined1 (*) [16])(param_1 + 0x310);
        dVar18 = *(double *)(param_1 + 0x2a0) * auVar24._0_8_ +
                 *(double *)(param_1 + 0x290) * auVar20._0_8_;
        dVar21 = *(double *)(param_1 + 0x2a8) * auVar24._8_8_ +
                 *(double *)(param_1 + 0x298) * auVar20._8_8_;
        lVar4 = -(ulonglong)(0.0 <= dVar18 + dVar21);
        lVar7 = -(ulonglong)(0.0 <= dVar18 + dVar21);
        uVar10 = (undefined4)lVar7;
        uVar11 = (undefined4)((ulonglong)lVar7 >> 0x20);
        auVar19._0_8_ = 0.0 - auVar20._0_8_;
        auVar19._8_8_ = 0.0 - auVar20._8_8_;
        auVar23._0_8_ = 0.0 - auVar24._0_8_;
        auVar23._8_8_ = 0.0 - auVar24._8_8_;
        auVar1._8_4_ = uVar10;
        auVar1._0_8_ = lVar4;
        auVar1._12_4_ = uVar11;
        auVar20 = blendvpd(auVar19,auVar20,auVar1);
        auVar2._8_4_ = uVar10;
        auVar2._0_8_ = lVar4;
        auVar2._12_4_ = uVar11;
        auVar24 = blendvpd(auVar23,auVar24,auVar2);
        dVar21 = auVar20._0_8_ * dVar13 + *(double *)(param_1 + 0x290) * dVar16;
        dVar22 = auVar20._8_8_ * dVar15 + *(double *)(param_1 + 0x298) * dVar17;
        dVar16 = auVar24._0_8_ * dVar13 + *(double *)(param_1 + 0x2a0) * dVar16;
        dVar15 = auVar24._8_8_ * dVar15 + *(double *)(param_1 + 0x2a8) * dVar17;
        dVar18 = dVar16 * dVar16 + dVar21 * dVar21;
        dVar13 = dVar15 * dVar15 + dVar22 * dVar22;
        auVar14._0_8_ = dVar18 + dVar13;
        auVar14._8_8_ = dVar18 + dVar13;
        uVar8 = -(ulonglong)(1e-08 <= auVar14._8_8_);
        auVar20 = sqrtpd(auVar14,auVar14);
        auVar20 = divpd(auVar3,auVar20);
        auVar12._0_8_ = auVar20._0_8_ * dVar16;
        auVar12._8_8_ = auVar20._8_8_ * dVar15;
        auVar3._8_4_ = (int)uVar8;
        auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
        auVar3._12_4_ = (int)(uVar8 >> 0x20);
        auVar24 = blendvpd(_DAT_149935300,auVar12,auVar3);
        *(ulonglong *)(param_1 + 0x300) =
             (ulonglong)(dVar21 * auVar20._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_);
        *(ulonglong *)(param_1 + 0x308) = (ulonglong)(dVar22 * auVar20._8_8_) & uVar8;
        *(undefined1 (*) [16])(param_1 + 0x310) = auVar24;
      }
      else {
        puVar5 = (undefined8 *)(param_1 + 0x290);
        puVar6 = (undefined8 *)(param_1 + 0x230);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = (undefined8 *)(param_1 + 0x290);
        puVar6 = (undefined8 *)(param_1 + 0x300);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined1 *)(param_1 + 0x360) = 1;
      }
    }
  }
  return;
}



// FUNCTION 142b54af6 FUN_142b54af6 body=8905 status=ok
// SIG undefined FUN_142b54af6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b54af6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *_Src;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined **ppuVar20;
  undefined8 uVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined ***pppuVar27;
  longlong lVar28;
  longlong lVar29;
  undefined ***pppuVar30;
  code **ppcVar31;
  int iVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  byte *pbVar36;
  byte bVar37;
  undefined8 unaff_RBP;
  undefined7 uVar40;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar41;
  uint *puVar42;
  longlong lVar43;
  double *pdVar44;
  double *pdVar45;
  uint uVar46;
  char *pcVar47;
  uint uVar48;
  bool bVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  double dVar57;
  double dVar58;
  undefined1 auVar56 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  ulonglong uVar62;
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulonglong uVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong local_2b8;
  longlong *local_2b0;
  code *local_2a8;
  longlong local_2a0;
  ulonglong local_298;
  longlong *local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined2 local_278;
  longlong local_268;
  undefined8 uStack_260;
  undefined2 local_258;
  code *local_248 [2];
  undefined8 local_238;
  undefined **local_228;
  longlong local_220;
  code *local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  undefined **local_1e8;
  byte *pbStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  code *local_1a8 [4];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  byte local_138;
  undefined1 uStack_137;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((((*(longlong *)(param_1 + 0x3a8) == 0) || (*(longlong *)(param_1 + 0x3f0) == 0)) ||
      (lVar35 = *(longlong *)(param_1 + 0x3f8), lVar35 == 0)) || (*(char *)(param_1 + 0x10) != '\0')
     ) goto LAB_142b5630c;
  if (*(int *)(param_1 + 0xa0) == 0) {
    bVar49 = true;
    cVar22 = '\0';
    bVar37 = 0;
    uVar40 = 0;
  }
  else if (*(int *)(param_1 + 0xa0) == 1) {
    cVar22 = '\x01';
    bVar49 = false;
    uVar40 = (undefined7)((ulonglong)unaff_RBP >> 8);
    bVar37 = 1;
  }
  else {
    cVar22 = '\x02';
    bVar37 = 0;
    uVar40 = 0;
    bVar49 = false;
  }
  *(char *)(param_1 + 0xac) = cVar22;
  fVar50 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x14);
  iVar32 = (int)ROUND(fVar50 + fVar50 + -0.5) >> 1;
  if (*(int *)(param_3 + 0x5c) <= iVar32) {
    iVar32 = *(int *)(param_3 + 0x5c);
  }
  *(int *)(param_1 + 0x9c) = iVar32;
  if ((bVar37 != 0) || (*(char *)(param_1 + 0x480) != '\0')) {
    if (iVar32 < 2) {
      iVar32 = (int)&DAT_00000001;
    }
    *(int *)(param_1 + 0x9c) = iVar32;
  }
  if (param_5 != '\0') {
    bVar37 = bVar37 | *(char *)(param_1 + 0x480) == '\x02';
    uVar51 = (undefined4)CONCAT71(uVar40,bVar37);
    if ((bVar37 != 0) || (0 < iVar32)) {
      if ((bVar49) && (*(int *)(param_1 + 0x468) == *(int *)(lVar35 + 0x10))) {
        local_2b0 = (longlong *)CONCAT44(local_2b0._4_4_,uVar51);
        local_2b8 = param_3;
        if (0 < *(int *)(param_1 + 0x468)) {
          lVar38 = 0x10;
          lVar41 = 0;
          do {
            lVar29 = *(longlong *)(*(longlong *)(lVar35 + 8) + lVar41 * 8);
            if (lVar29 != 0) {
              local_2c8 = (longlong *)(param_1 + 0xb0);
              FUN_142b59010(&local_208,*(undefined1 *)(param_1 + 0x98),
                            *(longlong *)(param_1 + 0x460) + lVar38,param_1 + 0x1d0);
              local_1b8._8_8_ = 0;
              local_1b8._0_8_ = DAT_14c846520;
              local_1c8 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
              uStack_1c0 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
              FUN_1406b048c(lVar29,&local_208,0,1);
              lVar35 = *(longlong *)(param_1 + 0x3f8);
            }
            lVar41 = lVar41 + 1;
            lVar38 = lVar38 + 0x70;
          } while (lVar41 < *(int *)(lVar35 + 0x10));
        }
        param_3 = local_2b8;
        *(undefined1 *)(param_1 + 0x480) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 1;
        *(undefined1 *)(param_1 + 0xac) = 1;
        *(undefined4 *)(param_1 + 0x468) = 0;
        uVar51 = local_2b0._0_4_;
        if (*(int *)(param_1 + 0x46c) < 0) {
          FUN_1403d6c30(param_1 + 0x460,0);
          lVar35 = *(longlong *)(param_1 + 0x3f8);
        }
      }
      FUN_142b53cf0(param_1,param_2,lVar35);
      if ((*(char *)(param_3 + 0xec) == '\x01') && (*(int *)(param_1 + 0x478) != 0)) {
        lVar35 = *(longlong *)(param_1 + 0x470);
        local_208 = *(code **)(lVar35 + 0x10);
        dStack_200 = *(double *)(lVar35 + 0x18);
        local_1f8 = *(undefined1 (*) [16])(lVar35 + 0x20);
        local_1e8 = *(undefined ***)(lVar35 + 0x30);
        pbStack_1e0 = *(byte **)(lVar35 + 0x38);
        if (*(int *)(*(longlong *)(param_1 + 0x3f8) + 0x10) < 1) {
          plVar33 = (longlong *)0x0;
        }
        else {
          plVar33 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + 8);
        }
        local_1d8._8_8_ = 0;
        local_1d8._0_8_ = *(ulonglong *)(lVar35 + 0x40);
        local_1c8 = 1.0;
        uStack_1c0 = 1.0;
        local_1b8 = ZEXT816(0x3ff0000000000000);
        (**(code **)(*plVar33 + 0x48))();
        uStack_137 = 0;
        FUN_1448f22e4(*(undefined8 *)(param_1 + 0x3f8));
      }
      if ((char)uVar51 != '\0') {
        local_2c8 = (longlong *)((ulonglong)local_2c8 & 0xffffffffffffff00);
        FUN_144a65e4a(*(undefined8 *)(param_1 + 0x3f0),*(undefined8 *)(param_1 + 0x3f8),0);
      }
    }
    cVar22 = *(char *)(param_1 + 0xac);
  }
  if (cVar22 == '\0') {
    *(undefined1 *)(param_1 + 0x480) = 0;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    goto LAB_142b5630c;
  }
  if (*(int *)(param_1 + 0x9c) < 1) goto LAB_142b5630c;
  local_2b8 = param_3;
  FUN_140caf910(param_1,param_3);
  local_2b0 = (longlong *)(param_1 + 0x488);
  *(undefined4 *)(param_1 + 0x490) = 0;
  if (*(int *)(param_1 + 0x494) < 0) {
    FUN_147103134(local_2b0);
  }
  if ((((*(longlong *)(param_1 + 0x3f0) != 0) && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
      (*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10) ==
       *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x10))) &&
     (iVar32 = *(int *)(param_1 + 0x448), (longlong)iVar32 != 0)) {
    lVar35 = *(longlong *)(param_1 + 0x440);
    lVar38 = 0;
    do {
      iVar24 = *(int *)(lVar35 + lVar38);
      lVar41 = (longlong)iVar24;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
      if (iVar24 < iVar2) {
        plVar33 = (longlong *)(lVar41 * 8 + *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8));
      }
      else {
        plVar33 = (longlong *)
                  ((longlong)(iVar24 - iVar2) * 8 +
                  *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0xb8));
      }
      lVar29 = *plVar33;
      if (((*(byte *)(lVar29 + 0x20) & 1) != 0) ||
         ((((ABS(*(double *)(lVar29 + 0x60)) <= 9.99999993922529e-09 &&
            (ABS(*(double *)(lVar29 + 0x68)) <= 9.99999993922529e-09)) &&
           ((ABS(*(double *)(lVar29 + 0x70)) <= 9.99999993922529e-09 &&
            ((ABS(*(double *)(lVar29 + 0x48)) <= 9.99999993922529e-09 &&
             (ABS(*(double *)(lVar29 + 0x50)) <= 9.99999993922529e-09)))))) &&
          (ABS(*(double *)(lVar29 + 0x58)) <= 9.99999993922529e-09)))) {
        if (iVar24 < iVar2) {
          plVar33 = (longlong *)(lVar41 * 8 + *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 8));
        }
        else {
          plVar33 = (longlong *)
                    ((lVar41 - *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x10)) * 8 +
                    *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0xb8));
        }
        lVar41 = *plVar33;
        puVar26 = (undefined8 *)(lVar29 + 0x130);
        ppcVar31 = &local_208;
        for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
          *ppcVar31 = (code *)*puVar26;
          puVar26 = puVar26 + 1;
          ppcVar31 = ppcVar31 + 1;
        }
        puVar26 = (undefined8 *)(lVar41 + 0x130);
        ppcVar31 = local_1a8;
        for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
          *ppcVar31 = (code *)*puVar26;
          puVar26 = puVar26 + 1;
          ppcVar31 = ppcVar31 + 1;
        }
        iVar2 = *(int *)(param_1 + 0x490);
        *(uint *)(param_1 + 0x490) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x494) < iVar2 + 1U) {
          FUN_141744764(local_2b0,iVar2);
        }
        lVar41 = *local_2b0;
        memcpy((void *)(lVar41 + (longlong)iVar2 * 0xd0),&local_208,0xc0);
        *(int *)(lVar41 + 0xc0 + (longlong)iVar2 * 0xd0) = iVar24;
      }
      lVar38 = lVar38 + 8;
    } while ((longlong)iVar32 * 8 != lVar38);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x578)) {
    uVar39 = (longlong)*(int *)(param_1 + 0x578);
    do {
      uVar62 = uVar39 - 1;
      lVar35 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
      if (lVar35 != 0) {
        lVar38 = *(longlong *)(param_1 + 0x570) + uVar62 * 0xb0;
        lVar41 = 0;
LAB_142b56d5b:
        lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8) + lVar41);
        if (*(longlong *)(lVar29 + 0x1f0) !=
            *(longlong *)(*(longlong *)(param_1 + 0x570) + uVar62 * 0xb0))
        goto code_r0x000142b56d68;
        if (lVar29 != 0) {
          if (*(char *)(lVar38 + 0x30) == '\x01') {
            ppcVar31 = (code **)(lVar38 + 0x10);
            bVar37 = *(byte *)(lVar38 + 0x58);
          }
          else {
            bVar37 = 1;
            ppcVar31 = &local_208;
            if (*(char *)(lVar38 + 0x58) != '\x01') goto LAB_142b56daa;
          }
          local_208 = *(code **)(lVar29 + 0x130);
          dStack_200 = *(double *)(lVar29 + 0x138);
          uVar25 = *(undefined8 *)(lVar29 + 0x140);
          local_138 = (byte)uVar25;
          uStack_137 = (undefined1)((ulonglong)uVar25 >> 8);
          uStack_136 = (undefined2)((ulonglong)uVar25 >> 0x10);
          uStack_134 = (undefined4)((ulonglong)uVar25 >> 0x20);
          uStack_130 = (undefined4)*(undefined8 *)(lVar29 + 0x148);
          uStack_12c = (undefined4)((ulonglong)*(undefined8 *)(lVar29 + 0x148) >> 0x20);
          pbVar36 = (byte *)(lVar38 + 0x20);
          if (*(char *)(lVar38 + 0x30) == '\0') {
            pbVar36 = &local_138;
          }
          if ((bVar37 & 1) == 0) {
            uVar51 = (undefined4)*(undefined8 *)(lVar29 + 0x150);
            uVar52 = (undefined4)((ulonglong)*(undefined8 *)(lVar29 + 0x150) >> 0x20);
            uVar25 = *(undefined8 *)(lVar29 + 0x158);
            uVar66 = *(ulonglong *)(lVar29 + 0x160);
          }
          else {
            uVar51 = (undefined4)*(undefined8 *)(lVar38 + 0x40);
            uVar52 = (undefined4)((ulonglong)*(undefined8 *)(lVar38 + 0x40) >> 0x20);
            uVar25 = *(undefined8 *)(lVar38 + 0x48);
            uVar66 = *(ulonglong *)(lVar38 + 0x50);
          }
          pcVar9 = *ppcVar31;
          pcVar10 = ppcVar31[1];
          uVar12 = *(undefined8 *)pbVar36;
          uVar13 = *(undefined8 *)(pbVar36 + 8);
          if ((*(byte *)(lVar29 + 0x20) & 1) == 0) {
            if ((((9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x60))) ||
                 (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x68)))) ||
                (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x70)))) ||
               ((9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x48)) ||
                (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x50)))))) {
              bVar49 = false;
            }
            else {
              bVar49 = ABS(*(double *)(lVar29 + 0x58)) <= 9.99999993922529e-09;
            }
            if ((((*(byte *)(lVar29 + 0x21) & 7) != 7) &&
                ((*(byte *)(lVar29 + 0x21) & 0x38) != 0x38)) && (!bVar49)) goto LAB_142b56daa;
          }
          uVar4 = *(undefined4 *)(lVar29 + 0x1fc);
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar66;
          puVar26 = (undefined8 *)(lVar29 + 0x130);
          ppcVar31 = &local_208;
          for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
            *ppcVar31 = (code *)*puVar26;
            puVar26 = puVar26 + 1;
            ppcVar31 = ppcVar31 + 1;
          }
          local_168 = 0x3ff0000000000000;
          uStack_160 = 0x3ff0000000000000;
          local_158 = 0x3ff0000000000000;
          uStack_150 = 0;
          local_1a8[0] = pcVar9;
          local_1a8[1] = pcVar10;
          local_1a8[2] = (code *)uVar12;
          local_1a8[3] = (code *)uVar13;
          local_188 = uVar51;
          uStack_184 = uVar52;
          uStack_180 = (int)uVar25;
          uStack_17c = (int)((ulonglong)uVar25 >> 0x20);
          local_178 = auVar64;
          local_148 = uVar4;
          FUN_14710323e(local_2b0,&local_208);
        }
      }
LAB_142b56d71:
      FUN_147103164(param_1 + 0x570,uVar62 & 0xffffffff);
      FUN_145989d6c(param_1 + 0x570);
LAB_142b56daa:
      bVar49 = 1 < (longlong)uVar39;
      uVar39 = uVar62;
    } while (bVar49);
  }
  FUN_1447ad90f(*(undefined8 *)(param_1 + 0x580),*(undefined4 *)(param_1 + 0x588));
  iVar32 = *(int *)(param_1 + 0x578);
  uVar25 = *(undefined8 *)(param_1 + 0x570);
  *(int *)(param_1 + 0x588) = iVar32;
  if (iVar32 == 0 && *(int *)(param_1 + 0x58c) == 0) {
    *(undefined4 *)(param_1 + 0x58c) = 0;
  }
  else {
    FUN_14009aa12((undefined8 *)(param_1 + 0x580),iVar32);
    FUN_1447ad956(*(undefined8 *)(param_1 + 0x580),uVar25);
  }
  *(undefined1 *)(param_1 + 0xad) = 0;
  lVar35 = local_2b8;
  if ((((((*(int *)(param_1 + 0x804) != 0) &&
         (uVar23 = *(uint *)(param_1 + 0x800), -1 < (int)uVar23)) && ((int)uVar23 < DAT_14c9647dc))
       && ((plVar33 = (longlong *)
                      ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
           plVar33 != (longlong *)0x0 && ((int)plVar33[2] == *(int *)(param_1 + 0x804))))) &&
      ((*(uint *)(plVar33 + 1) & 0x10200000) == 0)) &&
     (plVar33 = (longlong *)*plVar33, plVar33 != (longlong *)0x0)) {
    if (*(char *)(param_1 + 0x7c4) == '\x01') {
      *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(param_1 + 0x7c0);
      *(undefined1 *)(param_1 + 0x7c4) = 0;
    }
    if (*(int *)(param_1 + 0x7d4) != -1) {
      iVar32 = *(int *)(param_1 + 2000);
      _Src = *(void **)(param_1 + 0x7c8);
      *(int *)(param_1 + 0x6f0) = iVar32;
      if (iVar32 == 0 && *(int *)(param_1 + 0x6f4) == 0) {
        *(undefined4 *)(param_1 + 0x6f4) = 0;
      }
      else {
        FUN_1447c510a((undefined8 *)(param_1 + 0x6e8),iVar32);
        if (iVar32 != 0) {
          memcpy(*(void **)(param_1 + 0x6e8),_Src,(longlong)iVar32 << 2);
        }
      }
      if (*(int *)(param_1 + 0x7d4) != -1) {
        if (*(longlong *)(param_1 + 0x7c8) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(param_1 + 0x7c8) = 0;
        *(undefined8 *)(param_1 + 2000) = 0xffffffff00000000;
      }
    }
    lVar35 = local_2b8;
    if (*(char *)(param_1 + 0x7dc) == '\x01') {
      *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x7d8);
      *(undefined1 *)(param_1 + 0x7dc) = 0;
    }
    if (*(char *)(param_1 + 0x7e4) == '\x01') {
      *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined1 *)(param_1 + 0x7e4) = 0;
    }
    if ((*(int *)(param_1 + 0x7e8) != -1) &&
       (*(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(param_1 + 0x7e8),
       (int)*(undefined8 *)(param_1 + 0x7e8) != -1)) {
      *(undefined8 *)(param_1 + 0x7e8) = 0xffffffff;
    }
    if (*(char *)(param_1 + 0x7f4) == '\x01') {
      *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x7f0);
      *(undefined1 *)(param_1 + 0x7f4) = 0;
    }
    if ((*(int *)(param_1 + 0x7f8) != -1) &&
       (*(undefined8 *)(param_1 + 0x70c) = *(undefined8 *)(param_1 + 0x7f8),
       (int)*(undefined8 *)(param_1 + 0x7f8) != -1)) {
      *(undefined8 *)(param_1 + 0x7f8) = 0xffffffff;
    }
    FUN_14174344a(param_1 + 0x5e0,param_1 + 0x6d0);
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    if (((*(char *)(lVar35 + 0x1c0) == '\x01') && (*(char *)(param_1 + 0x400) == '\x01')) &&
       (*(float *)(lVar35 + 0x1cc) < *(float *)(param_1 + 0xa8) ||
        *(float *)(lVar35 + 0x1cc) == *(float *)(param_1 + 0xa8))) {
      (**(code **)(*plVar33 + 0x2c0))(plVar33,&local_208);
      if ((dStack_200._0_1_ == '\x01') &&
         ((float)((double)local_208 * (double)local_208) <
          *(float *)(lVar35 + 0x1c8) * *(float *)(lVar35 + 0x1c8))) {
        *(undefined1 *)(param_1 + 0xad) = 1;
      }
    }
  }
  iVar32 = *(int *)(param_1 + 0x4a0);
  if (iVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar32);
  }
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  if (*(int *)(param_1 + 0x4b4) != iVar32) {
    FUN_141744912(param_1 + 0x4a8);
  }
  if (*(longlong *)(param_1 + 0x3a8) == 0) {
LAB_142b55b9e:
    if (*(longlong *)(param_1 + 0x3f0) != 0) {
LAB_142b55ba8:
      plVar33 = (longlong *)(param_1 + 0x5a0);
      uVar39 = (ulonglong)*(int *)(param_1 + 0x5a8);
      if (0 < (longlong)uVar39) {
        lVar38 = uVar39 * 0xf8;
        do {
          uVar62 = uVar39 - 1;
          lVar35 = *plVar33;
          lVar29 = uVar62 * 0xf8;
          plVar34 = (longlong *)(lVar35 + lVar29);
          lVar41 = *(longlong *)(lVar35 + 0xe8 + lVar29);
          if ((lVar41 != 0) && (plVar34[0x1e] != 0)) {
            lVar28 = -0x40;
            do {
              if (*(longlong *)(lVar35 + lVar38 + lVar28) != 0) goto LAB_142b56b31;
              lVar28 = lVar28 + 8;
            } while (lVar28 != -0x10);
          }
          if ((int)plVar34[0x16] != 3) {
            lVar28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
            if (0 < lVar28) {
              lVar43 = 0;
              do {
                lVar5 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8) + lVar43 * 8);
                if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) == *plVar34)) {
                  FUN_140b8b480(plVar34);
                  lVar41 = plVar34[0x1d];
                  break;
                }
                lVar43 = lVar43 + 1;
              } while (lVar28 != lVar43);
            }
          }
LAB_142b56b31:
          bVar49 = true;
          if ((lVar41 != 0) && (plVar34[0x1e] != 0)) {
            lVar41 = -0x40;
            do {
              bVar49 = *(longlong *)(lVar35 + lVar38 + lVar41) == 0;
              if (!bVar49) break;
              lVar41 = lVar41 + 8;
            } while (lVar41 != -0x10);
          }
          local_138 = (int)plVar34[0x16] == 3 | bVar49;
          if (((char)plVar34[0x11] == '\x01') && (local_138 == 0)) {
            auVar19._8_8_ = 0;
            auVar19._0_8_ = local_1f8._8_8_;
            local_1f8 = auVar19 << 0x40;
            local_1e8 = &PTR_LAB_14a1e1500;
            local_208 = FUN_142b5e658;
            pbStack_1e0 = &local_138;
            AcquireSRWLockShared((PSRWLOCK)plVar34[0x14]);
            local_2b0 = (longlong *)plVar34[0x13];
            local_2a8 = local_208;
            pppuVar27 = (undefined ***)local_1f8._0_8_;
            if ((undefined ***)local_1f8._0_8_ == (undefined ***)0x0) {
              pppuVar27 = &local_1e8;
            }
            uVar25 = (*(code *)(*pppuVar27)[1])();
            (*local_2a8)(uVar25,local_2b0);
            ReleaseSRWLockShared((PSRWLOCK)plVar34[0x14]);
            if (local_208 != (code *)0x0) {
              pppuVar27 = (undefined ***)local_1f8._0_8_;
              if ((undefined ***)local_1f8._0_8_ == (undefined ***)0x0) {
                pppuVar27 = &local_1e8;
              }
              (*(code *)(*pppuVar27)[2])();
            }
          }
          if (local_138 == 1) {
            FUN_1470fa554(lVar29 + *plVar33);
            FUN_1471032ca(plVar33,uVar62 & 0xffffffff);
            FUN_147103346(plVar33);
          }
          lVar38 = lVar38 + -0xf8;
          bVar49 = 1 < (longlong)uVar39;
          uVar39 = uVar62;
          lVar35 = local_2b8;
        } while (bVar49);
      }
      FUN_1402c73be(param_1 + 0x5b0);
    }
  }
  else if (*(longlong *)(param_1 + 0x3f0) != 0) {
    if ((*(longlong *)(param_1 + 0x3f8) != 0) && (0 < (longlong)*(int *)(param_1 + 0x4a0))) {
      fVar50 = *(float *)(param_1 + 0x14);
      iVar32 = *(int *)(param_1 + 0x9c);
      plVar33 = (longlong *)(param_1 + 0x498);
      local_2b0 = (longlong *)(param_1 + 0xb0);
      local_2a8 = (code *)(param_1 + 0x170);
      uVar39 = (longlong)*(int *)(param_1 + 0x4a0);
      do {
        uVar62 = uVar39 - 1;
        local_2a0 = uVar62 * 0x60;
        pcVar47 = (char *)(*plVar33 + local_2a0);
        cVar22 = FUN_142b5b4a0(pcVar47);
        if (cVar22 == '\0') {
          uVar23 = *(uint *)(param_1 + 0x4a0);
          if (uVar39 != uVar23) {
            iVar24 = uVar23 - (int)uVar39;
            if (0 < iVar24) {
              iVar24 = 1;
            }
            memmove((void *)(local_2a0 + *(longlong *)(param_1 + 0x498)),
                    (void *)((longlong)(int)(uVar23 - iVar24) * 0x60 +
                            *(longlong *)(param_1 + 0x498)),(longlong)iVar24 * 0x60);
            uVar23 = *(uint *)(param_1 + 0x4a0);
          }
          *(uint *)(param_1 + 0x4a0) = uVar23 - 1;
          FUN_141744878(plVar33);
          lVar35 = local_2b8;
        }
        else if ((*pcVar47 == '\x01') && (pcVar47[0x40] == '\x01')) {
          plVar34 = (longlong *)(pcVar47 + 0x44);
          lVar38 = *(longlong *)(param_1 + 0x3f0);
          uVar23 = *(uint *)(lVar38 + 0x10);
LAB_142b55a2f:
          if (0 < (int)uVar23) {
            uVar66 = 0;
            do {
              lVar41 = *(longlong *)(*(longlong *)(lVar38 + 8) + uVar66 * 8);
              if (*(longlong *)(lVar41 + 0x1f0) == *plVar34) {
                if (lVar41 != 0) {
                  iVar24 = *(int *)(param_1 + 0x4b0);
                  *(uint *)(param_1 + 0x4b0) = iVar24 + 1U;
                  local_298 = uVar39;
                  local_290 = plVar33;
                  if (*(uint *)(param_1 + 0x4b4) < iVar24 + 1U) {
                    FUN_141743a7a(param_1 + 0x4a8,iVar24);
                  }
                  lVar29 = *(longlong *)(param_1 + 0x4a8);
                  lVar28 = (longlong)iVar24 * 0x60;
                  lVar38 = lVar29 + lVar28;
                  FUN_142b5e5ac(lVar38);
                  *(longlong *)(lVar29 + 0x58 + lVar28) = lVar41;
                  *(float *)(lVar29 + 0x4c + lVar28) = (float)iVar32 * (1.0 / fVar50);
                  local_2c8 = local_2b0;
                  FUN_142b53934(&local_138);
                  plVar33 = local_290;
                  uVar39 = local_298;
                  lVar35 = local_2b8;
                  *(undefined8 *)(lVar29 + 0x18 + lVar28) = local_128._0_8_;
                  puVar1 = (undefined4 *)(lVar29 + 8 + lVar28);
                  *puVar1 = CONCAT22(uStack_136,CONCAT11(uStack_137,local_138));
                  puVar1[1] = uStack_134;
                  puVar1[2] = uStack_130;
                  puVar1[3] = uStack_12c;
                  *(undefined1 *)(lVar29 + lVar28) = 1;
                  if ((*pcVar47 == '\x01') && (pcVar47[0x20] == '\x01')) {
                    uVar51 = *(undefined4 *)(pcVar47 + 0x28);
                    uVar52 = *(undefined4 *)(pcVar47 + 0x2c);
                    uVar4 = *(undefined4 *)(pcVar47 + 0x30);
                    uVar11 = *(undefined4 *)(pcVar47 + 0x34);
                    *(undefined8 *)(lVar38 + 0x38) = *(undefined8 *)(pcVar47 + 0x38);
                    *(undefined4 *)(lVar38 + 0x28) = uVar51;
                    *(undefined4 *)(lVar38 + 0x2c) = uVar52;
                    *(undefined4 *)(lVar38 + 0x30) = uVar4;
                    *(undefined4 *)(lVar38 + 0x34) = uVar11;
                    *(undefined1 *)(lVar38 + 0x20) = 1;
                  }
                  if (*(float *)(pcVar47 + 0x4c) <= 1e-08 && *(float *)(pcVar47 + 0x4c) != 1e-08) {
                    uVar23 = *(uint *)(param_1 + 0x4a0);
                    if (local_298 != uVar23) {
                      iVar24 = uVar23 - (int)local_298;
                      if (0 < iVar24) {
                        iVar24 = 1;
                      }
                      memmove((void *)(local_2a0 + *(longlong *)(param_1 + 0x498)),
                              (void *)((longlong)(int)(uVar23 - iVar24) * 0x60 +
                                      *(longlong *)(param_1 + 0x498)),(longlong)iVar24 * 0x60);
                      uVar23 = *(uint *)(param_1 + 0x4a0);
                    }
                    *(uint *)(param_1 + 0x4a0) = uVar23 - 1;
                    FUN_141744878(plVar33);
                  }
                }
                break;
              }
              uVar66 = uVar66 + 1;
            } while (uVar23 != uVar66);
          }
        }
        else {
          lVar38 = *(longlong *)(param_1 + 0x3f0);
          uVar23 = *(uint *)(lVar38 + 0x10);
          if (0 < (longlong)(int)uVar23) {
            lVar41 = 0;
            do {
              lVar29 = *(longlong *)(*(longlong *)(lVar38 + 8) + lVar41 * 8);
              if (((*(byte *)(lVar29 + 0x20) & 1) == 0) &&
                 ((((9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x60)) ||
                    (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x68)))) ||
                   (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x70)))) ||
                  (((9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x48)) ||
                    (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x50)))) ||
                   (9.99999993922529e-09 < ABS(*(double *)(lVar29 + 0x58)))))))) {
                if (lVar29 != 0) {
                  plVar34 = (longlong *)(lVar29 + 0x1f0);
                  goto LAB_142b55a2f;
                }
                break;
              }
              lVar41 = lVar41 + 1;
            } while ((int)uVar23 != lVar41);
          }
        }
        bVar49 = 1 < (longlong)uVar39;
        uVar39 = uVar62;
      } while (bVar49);
      if (*(longlong *)(param_1 + 0x3a8) == 0) goto LAB_142b55b9e;
    }
    if (*(longlong *)(param_1 + 0x3f0) != 0) {
      if (*(longlong *)(param_1 + 0x3f8) != 0) {
        lVar38 = FUN_140257036(lVar35);
        if (lVar38 != 0) {
          if (*(longlong *)(param_1 + 0x790) == 0) {
            uVar25 = FUN_140cbc22a(*(undefined8 *)(param_1 + 0x3f8));
            *(undefined8 *)(param_1 + 0x790) = uVar25;
          }
          else {
            local_2c8 = (longlong *)((ulonglong)local_2c8 & 0xffffffffffffff00);
            FUN_144a65e4a();
          }
        }
        if (*(char *)(lVar35 + 0xee) == '\x01') {
          lVar38 = *(longlong *)(param_1 + 0x3f8);
          if (0 < *(int *)(lVar38 + 0x20)) {
            lVar41 = 0;
            do {
              lVar38 = *(longlong *)(*(longlong *)(lVar38 + 0x18) + lVar41 * 8);
              lVar29 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x18) + lVar41 * 8);
              uVar25 = *(undefined8 *)(lVar38 + 0x6d8);
              uVar12 = *(undefined8 *)(lVar38 + 0x6e0);
              uVar13 = *(undefined8 *)(lVar38 + 0x6e8);
              uVar14 = *(undefined8 *)(lVar38 + 0x6f0);
              uVar15 = *(undefined8 *)(lVar38 + 0x700);
              *(undefined8 *)(lVar29 + 0x758) = *(undefined8 *)(lVar38 + 0x6f8);
              *(undefined8 *)(lVar29 + 0x760) = uVar15;
              *(undefined8 *)(lVar29 + 0x748) = uVar13;
              *(undefined8 *)(lVar29 + 0x750) = uVar14;
              *(undefined8 *)(lVar29 + 0x738) = uVar25;
              *(undefined8 *)(lVar29 + 0x740) = uVar12;
              uVar51 = *(undefined4 *)(lVar38 + 0x6a8);
              uVar52 = *(undefined4 *)(lVar38 + 0x6ac);
              uVar4 = *(undefined4 *)(lVar38 + 0x6b0);
              uVar11 = *(undefined4 *)(lVar38 + 0x6b4);
              auVar64 = *(undefined1 (*) [16])(lVar38 + 0x6b8);
              *(undefined1 (*) [16])(lVar29 + 0x728) = *(undefined1 (*) [16])(lVar38 + 0x6c8);
              *(undefined1 (*) [16])(lVar29 + 0x718) = auVar64;
              *(undefined4 *)(lVar29 + 0x708) = uVar51;
              *(undefined4 *)(lVar29 + 0x70c) = uVar52;
              *(undefined4 *)(lVar29 + 0x710) = uVar4;
              *(undefined4 *)(lVar29 + 0x714) = uVar11;
              lVar41 = lVar41 + 1;
              lVar38 = *(longlong *)(param_1 + 0x3f8);
            } while (lVar41 < *(int *)(lVar38 + 0x20));
          }
          lVar38 = *(longlong *)(param_1 + 0x3f0);
          if (0 < *(int *)(lVar38 + 0x20)) {
            dVar55 = (double)*(float *)(lVar35 + 0xf4);
            if (1.0 <= (double)*(float *)(lVar35 + 0xf4)) {
              dVar55 = 1.0;
            }
            if (dVar55 <= 0.0) {
              dVar55 = 0.0;
            }
            if (1.0 <= dVar55) {
              dVar55 = 1.0;
            }
            if (dVar55 <= 0.0) {
              dVar55 = 0.0;
            }
            lVar41 = 0;
            do {
              lVar29 = *(longlong *)(*(longlong *)(lVar38 + 0x18) + lVar41 * 8);
              *(double *)(lVar29 + 0x768) = dVar55;
              *(double *)(lVar29 + 0x770) = 1.0 - dVar55;
              lVar41 = lVar41 + 1;
            } while (lVar41 < *(int *)(lVar38 + 0x20));
            lVar38 = *(longlong *)(param_1 + 0x3f0);
            if (0 < *(int *)(lVar38 + 0x20)) {
              dVar55 = (double)*(float *)(lVar35 + 0xf0);
              lVar41 = 0;
              do {
                lVar29 = *(longlong *)(*(longlong *)(lVar38 + 0x18) + lVar41 * 8);
                *(double *)(lVar29 + 0x7a8) = dVar55;
                *(double *)(lVar29 + 0x7a0) = dVar55;
                *(double *)(lVar29 + 0x798) = dVar55;
                *(double *)(lVar29 + 0x790) = dVar55;
                *(double *)(lVar29 + 0x788) = dVar55;
                *(double *)(lVar29 + 0x780) = dVar55;
                lVar41 = lVar41 + 1;
              } while (lVar41 < *(int *)(lVar38 + 0x20));
            }
          }
        }
        if (0 < (longlong)*(int *)(param_1 + 0x80)) {
          lVar38 = (longlong)*(int *)(param_1 + 0x80);
          do {
            lVar41 = (lVar38 + -1) * 0x50;
            plVar33 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar41);
            uVar23 = *(uint *)(*(longlong *)(param_1 + 0x78) + 8 + lVar41);
            if (uVar23 == 0xffffffff) {
              if (*plVar33 == 0) {
                FUN_142b5115e(plVar33);
                uVar23 = *(uint *)(plVar33 + 1);
                goto LAB_142b5536b;
              }
              lVar41 = *(longlong *)(param_1 + 0x3f0);
              if (0 < *(int *)(lVar41 + 0x10)) {
                uVar23 = 0xffffffff;
                lVar29 = 0;
                do {
                  lVar35 = *(longlong *)(*(longlong *)(lVar41 + 8) + lVar29 * 8);
                  if ((lVar35 != 0) && (*(longlong *)(lVar35 + 0x1f0) == *plVar33)) {
                    uVar23 = *(uint *)(lVar35 + 0x1fc);
                    *(uint *)(plVar33 + 1) = uVar23;
                    lVar41 = *(longlong *)(param_1 + 0x3f0);
                  }
                  lVar29 = lVar29 + 1;
                  lVar35 = local_2b8;
                } while (lVar29 < *(int *)(lVar41 + 0x10));
                goto LAB_142b5536b;
              }
            }
            else {
LAB_142b5536b:
              if (((-1 < (int)uVar23) &&
                  ((int)uVar23 < *(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10))) &&
                 (lVar41 = *(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8) +
                            (ulonglong)uVar23 * 8), lVar41 != 0)) {
                lVar29 = *(longlong *)(lVar41 + 0x2b8);
                if (lVar29 != 0) {
                  dVar55 = (double)*(float *)(plVar33 + 4);
                  if (1.0 <= (double)*(float *)(plVar33 + 4)) {
                    dVar55 = 1.0;
                  }
                  if (dVar55 <= 0.0) {
                    dVar55 = 0.0;
                  }
                  *(double *)(lVar29 + 0x768) = dVar55;
                  *(double *)(lVar29 + 0x770) = 1.0 - dVar55;
                  dVar55 = (double)((1.0 - *(float *)((longlong)plVar33 + 0x24)) *
                                   *(float *)((longlong)plVar33 + 0x1c));
                  *(double *)(lVar29 + 0x790) = dVar55;
                  *(double *)(lVar29 + 0x788) = dVar55;
                  *(double *)(lVar29 + 0x780) = dVar55;
                  dVar55 = (double)((1.0 - *(float *)(plVar33 + 5)) *
                                   *(float *)((longlong)plVar33 + 0x1c));
                  *(double *)(lVar29 + 0x7a8) = dVar55;
                  *(double *)(lVar29 + 0x7a0) = dVar55;
                  *(double *)(lVar29 + 0x798) = dVar55;
                  *(double *)(lVar29 + 0x7e0) = (double)*(float *)((longlong)plVar33 + 0x2c);
                  *(double *)(lVar29 + 0x7e8) = (double)*(float *)(plVar33 + 6);
                  uVar23 = *(uint *)(plVar33 + 1);
                }
                local_268 = *(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 8) +
                             (longlong)(int)uVar23 * 8);
                local_288 = CONCAT71(local_288._1_7_,plVar33[7] != 0);
                auVar69._8_8_ = 0;
                auVar69._0_8_ = local_1f8._8_8_;
                local_1f8 = auVar69 << 0x40;
                local_1e8 = &PTR_LAB_14a1e12f0;
                pbStack_1e0 = (byte *)&local_288;
                local_208 = FUN_144b0a364;
                if (plVar33[7] == 0) {
                  pppuVar27 = (undefined ***)0x0;
LAB_142b5550c:
                  if (pppuVar27 == (undefined ***)0x0) {
                    pppuVar27 = &local_1e8;
                  }
                  (*(code *)(*pppuVar27)[2])();
                }
                else {
                  if ((PSRWLOCK)plVar33[8] == (PSRWLOCK)0x0) {
                    pppuVar27 = (undefined ***)0x0;
                    lVar35 = local_2b8;
                    goto LAB_142b5550c;
                  }
                  AcquireSRWLockExclusive((PSRWLOCK)plVar33[8]);
                  pcVar9 = local_208;
                  lVar35 = plVar33[7];
                  pppuVar27 = (undefined ***)local_1f8._0_8_;
                  if ((undefined ***)local_1f8._0_8_ == (undefined ***)0x0) {
                    pppuVar27 = &local_1e8;
                  }
                  uVar25 = (*(code *)(*pppuVar27)[1])();
                  (*pcVar9)(uVar25,lVar35);
                  ReleaseSRWLockExclusive((PSRWLOCK)plVar33[8]);
                  lVar35 = local_2b8;
                  if (local_208 != (code *)0x0) {
                    pppuVar27 = (undefined ***)local_1f8._0_8_;
                    goto LAB_142b5550c;
                  }
                }
                if ((byte)local_288 == 0) {
                  FUN_145949a74(plVar33,lVar41);
                }
                local_138 = 0;
                uStack_137 = 0;
                uStack_136 = 0;
                uStack_134 = 0;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = local_128._8_8_;
                local_128 = auVar17 << 0x40;
                puVar26 = (undefined8 *)FUN_14001cc68(0x28,8);
                local_128._0_8_ = puVar26;
                *puVar26 = &PTR_FUN_14a1e1440;
                puVar26[1] = plVar33;
                puVar26[2] = &local_268;
                puVar26[3] = lVar35;
                puVar26[4] = param_1;
                if (puVar26 + 1 != (longlong *)0x0) {
                  local_138 = 0x66;
                  uStack_137 = 0xda;
                  uStack_136 = 0x42b5;
                  uStack_134 = 1;
                }
                FUN_140165a34(plVar33);
              }
            }
            bVar49 = 1 < lVar38;
            lVar38 = lVar38 + -1;
          } while (bVar49);
        }
        goto LAB_142b55b9e;
      }
      goto LAB_142b55ba8;
    }
  }
  lVar38 = (longlong)*(int *)(param_1 + 0x90);
  if (0 < (longlong)*(int *)(param_1 + 0x90)) {
    do {
      lVar35 = (lVar38 + -1) * 0x30;
      plVar33 = (longlong *)(*(longlong *)(param_1 + 0x88) + lVar35);
      iVar32 = *(int *)(*(longlong *)(param_1 + 0x88) + 8 + lVar35);
      lVar35 = *(longlong *)(param_1 + 0x3f0);
      if (iVar32 == -1) {
        if ((longlong)*(int *)(lVar35 + 0x10) != 0) {
          lVar41 = 0;
          do {
            lVar29 = *(longlong *)(*(longlong *)(lVar35 + 8) + lVar41);
            if (*(longlong *)(lVar29 + 0x1f0) == *plVar33) {
              if (lVar29 != 0) {
                iVar32 = *(int *)(lVar29 + 0x1fc);
                *(int *)(plVar33 + 1) = iVar32;
                lVar35 = *(longlong *)(param_1 + 0x3f0);
                goto LAB_142b56770;
              }
              break;
            }
            lVar41 = lVar41 + 8;
          } while ((longlong)*(int *)(lVar35 + 0x10) * 8 != lVar41);
        }
      }
      else {
LAB_142b56770:
        lVar35 = *(longlong *)(*(longlong *)(lVar35 + 8) + (longlong)iVar32 * 8);
        if (lVar35 != 0) {
          if (*(char *)((longlong)plVar33 + 0xc) == '\x01') {
            if ((longlong *)(lVar35 + 0x28) != plVar33 + 2) {
              *(longlong *)(lVar35 + 0x38) = plVar33[4];
              uVar51 = *(undefined4 *)((longlong)plVar33 + 0x14);
              lVar41 = plVar33[3];
              uVar52 = *(undefined4 *)((longlong)plVar33 + 0x1c);
              *(int *)(lVar35 + 0x28) = (int)plVar33[2];
              *(undefined4 *)(lVar35 + 0x2c) = uVar51;
              *(int *)(lVar35 + 0x30) = (int)lVar41;
              *(undefined4 *)(lVar35 + 0x34) = uVar52;
              *(undefined1 *)(lVar35 + 0x40) = 1;
            }
          }
          if ((char)plVar33[5] == '\x01') {
            pdVar45 = (double *)(*(longlong *)(lVar35 + 8) + 0x58);
            if (*(longlong *)(lVar35 + 8) == 0) {
              pdVar45 = &DAT_14c8464e0;
            }
            pdVar44 = (double *)(lVar35 + 0x28);
            if (*(char *)(lVar35 + 0x40) == '\0') {
              pdVar44 = pdVar45;
            }
            dVar61 = (double)*(float *)((longlong)plVar33 + 0x2c);
            dVar55 = pdVar44[2];
            dVar58 = pdVar44[1];
            *(double *)(lVar35 + 0x28) = dVar61 * *pdVar44;
            *(double *)(lVar35 + 0x30) = dVar58 * dVar61;
            *(double *)(lVar35 + 0x38) = dVar55 * dVar61;
            *(undefined1 *)(lVar35 + 0x40) = 1;
          }
        }
      }
      bVar49 = 1 < lVar38;
      lVar38 = lVar38 + -1;
      lVar35 = local_2b8;
    } while (bVar49);
  }
  FUN_141743cc4(param_1);
  lVar38 = *(longlong *)(param_1 + 0x3f0);
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    if (lVar38 == 0) {
      lVar38 = 0;
    }
    else if (((*(longlong *)(param_1 + 0x3f8) != 0) &&
             (*(int *)(lVar35 + 0xd4) != 0 || *(int *)(lVar35 + 0xd0) != 0)) &&
            (*(char *)(lVar35 + 0xdc) == '\x01')) {
      FUN_1449d7c9e();
      if ((((*(char *)(param_1 + 1000) == '\0') ||
           (dVar55 = *(double *)(param_1 + 0x3b8), (double)local_208 <= dVar55)) ||
          ((*(double *)(param_1 + 0x3d0) <= (double)local_208 ||
           ((dStack_200 <= *(double *)(param_1 + 0x3c0) ||
            (*(double *)(param_1 + 0x3d8) <= dStack_200)))))) ||
         (((double)local_1f8._0_8_ <= *(double *)(param_1 + 0x3c8) ||
          (((((*(double *)(param_1 + 0x3e0) <= (double)local_1f8._0_8_ ||
              ((double)local_1f8._8_8_ <= dVar55)) ||
             (*(double *)(param_1 + 0x3d0) <= (double)local_1f8._8_8_)) ||
            (((double)local_1e8 <= *(double *)(param_1 + 0x3c0) ||
             (*(double *)(param_1 + 0x3d8) <= (double)local_1e8)))) ||
           (((double)pbStack_1e0 <= *(double *)(param_1 + 0x3c8) ||
            (*(double *)(param_1 + 0x3e0) <= (double)pbStack_1e0)))))))) {
        dVar61 = (double)*(float *)(lVar35 + 0xb8);
        dVar55 = ((double)pbStack_1e0 - (double)local_1f8._0_8_) * 0.5 * dVar61;
        dVar58 = ((double)local_1e8 - dStack_200) * 0.5 * dVar61;
        dVar61 = ((double)local_1f8._8_8_ - (double)local_208) * 0.5 * dVar61;
        *(double *)(param_1 + 0x3b8) = (double)local_208 - dVar61;
        *(double *)(param_1 + 0x3c0) = dStack_200 - dVar58;
        *(double *)(param_1 + 0x3c8) = (double)local_1f8._0_8_ - dVar55;
        *(double *)(param_1 + 0x3d0) = (double)local_1f8._8_8_ + dVar61;
        *(double *)(param_1 + 0x3d8) = (double)local_1e8 + dVar58;
        *(double *)(param_1 + 0x3e0) = (double)pbStack_1e0 + dVar55;
        *(undefined1 *)(param_1 + 1000) = 1;
        lVar38 = *(longlong *)(param_1 + 0x3a8);
        uVar25 = *(undefined8 *)(lVar35 + 0xd0);
        *(undefined8 *)(lVar38 + 0x1f8) = *(undefined8 *)(param_1 + 1000);
        uVar51 = *(undefined4 *)(param_1 + 0x3b8);
        uVar52 = *(undefined4 *)(param_1 + 0x3bc);
        uVar4 = *(undefined4 *)(param_1 + 0x3c0);
        uVar11 = *(undefined4 *)(param_1 + 0x3c4);
        uVar12 = *(undefined8 *)(param_1 + 0x3c8);
        uVar13 = *(undefined8 *)(param_1 + 0x3d0);
        uVar14 = *(undefined8 *)(param_1 + 0x3e0);
        *(undefined8 *)(lVar38 + 0x1e8) = *(undefined8 *)(param_1 + 0x3d8);
        *(undefined8 *)(lVar38 + 0x1f0) = uVar14;
        *(undefined8 *)(lVar38 + 0x1d8) = uVar12;
        *(undefined8 *)(lVar38 + 0x1e0) = uVar13;
        *(undefined4 *)(lVar38 + 0x1c8) = uVar51;
        *(undefined4 *)(lVar38 + 0x1cc) = uVar52;
        *(undefined4 *)(lVar38 + 0x1d0) = uVar4;
        *(undefined4 *)(lVar38 + 0x1d4) = uVar11;
        *(undefined8 *)(lVar38 + 0x200) = uVar25;
        LOCK();
        *(undefined1 *)(lVar38 + 0x158) = 1;
        UNLOCK();
        if (*(char *)(lVar38 + 9) == '\0') {
          FUN_1410043ae();
        }
      }
      FUN_1409087f6(*(undefined8 *)(param_1 + 0x3a8));
      lVar38 = *(longlong *)(param_1 + 0x3f0);
    }
  }
  cVar22 = *(char *)(lVar35 + 0xed);
  if ((*(char *)(lVar38 + 0x151) != cVar22) && (*(char *)(lVar38 + 0x151) = cVar22, cVar22 != '\0'))
  {
    iVar32 = *(int *)(lVar38 + 0x10);
    dVar58 = DAT_14c8464f0;
    dStack_200 = DAT_14c8464e8;
    dVar55 = DAT_14c8464e0;
    if (0 < (longlong)iVar32) {
      lVar35 = 0;
      do {
        lVar41 = *(longlong *)(*(longlong *)(lVar38 + 8) + lVar35 * 8);
        dVar58 = dVar58 + *(double *)(lVar41 + 0x100) * *(double *)(lVar41 + 0x70);
        dStack_200 = dStack_200 + *(double *)(lVar41 + 0xf8) * *(double *)(lVar41 + 0x68);
        dVar55 = dVar55 + *(double *)(lVar41 + 0xf0) * *(double *)(lVar41 + 0x60);
        lVar35 = lVar35 + 1;
      } while (iVar32 != lVar35);
    }
    local_208 = (code *)(dVar55 * *(double *)(lVar38 + 0xf8));
    dStack_200 = dStack_200 * *(double *)(lVar38 + 0x100);
    local_1f8._0_8_ = dVar58 * *(double *)(lVar38 + 0x108);
    if (iVar32 < 1) {
      plVar33 = (longlong *)0x0;
    }
    else {
      plVar33 = (longlong *)**(undefined8 **)(lVar38 + 8);
    }
    (**(code **)(*plVar33 + 0x38))();
    lVar35 = local_2b8;
  }
  if (*(char *)(lVar35 + 0x17a) == '\x01') {
    lVar38 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
    if (lVar38 != 0) {
      lVar41 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8);
      dVar55 = (double)*(float *)(lVar35 + 0x17c);
      if (1.0 <= dVar55) {
        dVar55 = 1.0;
      }
      if (dVar55 <= 0.0) {
        dVar55 = 0.0;
      }
      lVar29 = 0;
      do {
        *(double *)(*(longlong *)(lVar41 + lVar29) + 0x120) = dVar55;
        lVar29 = lVar29 + 8;
      } while (lVar38 * 8 != lVar29);
    }
  }
  if (*(char *)(lVar35 + 0x180) == '\x01') {
    lVar38 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
    if (lVar38 != 0) {
      lVar41 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8);
      dVar55 = (double)*(float *)(lVar35 + 0x184);
      if (1.0 <= dVar55) {
        dVar55 = 1.0;
      }
      if (dVar55 <= 0.0) {
        dVar55 = 0.0;
      }
      lVar35 = 0;
      do {
        *(double *)(*(longlong *)(lVar41 + lVar35) + 0x118) = dVar55;
        lVar35 = lVar35 + 8;
      } while (lVar38 * 8 != lVar35);
    }
  }
  bVar49 = true;
  if (((*(char *)(param_1 + 0x400) == '\0') && (*(char *)(param_1 + 0x401) == '\x01')) &&
     (*(int *)(param_1 + 0x410) != 0)) {
    if (*(int *)(param_1 + 0x410) == 1) {
      local_208 = (code *)0x0;
      dStack_200 = 0.0;
      local_1f8._0_2_ = 0x203;
      FUN_144940db0(*(undefined8 *)(param_1 + 0x3f0),&local_208);
      *(undefined4 *)(param_1 + 0xa0) = 2;
      FUN_140fa912e(param_1,&local_208);
      if (local_208 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar35 = *(longlong *)(param_1 + 0x3f0);
    if ((longlong)*(int *)(lVar35 + 0x30) == 0) {
      iVar32 = 0xc;
    }
    else {
      lVar38 = 0;
      iVar32 = 0;
      do {
        lVar41 = *(longlong *)(*(longlong *)(lVar35 + 0x28) + lVar38);
        iVar32 = iVar32 + *(int *)(lVar41 + 0x8b8) + *(int *)(lVar41 + 0xff0);
        lVar38 = lVar38 + 8;
      } while ((longlong)*(int *)(lVar35 + 0x30) * 8 != lVar38);
      iVar32 = iVar32 * 2 + 0xc;
    }
    uVar23 = *(uint *)(param_1 + 0xa0);
    uVar3 = *(uint *)(param_1 + 0x410);
    lVar38 = *(longlong *)(param_1 + 0x408);
    uVar39 = (ulonglong)(uVar3 - 1);
    uVar48 = *(uint *)(lVar38 + 0x18 + (longlong)(int)(uVar3 - 1) * 0x20);
    uVar46 = uVar3;
    if (uVar23 < uVar48) {
      if (1 < (int)uVar3) {
        puVar42 = (uint *)((ulonglong)uVar3 * 0x20 + lVar38 + -8);
        uVar62 = (ulonglong)uVar3;
        do {
          uVar48 = puVar42[-8];
          if ((uVar48 <= uVar23) && (uVar23 < *puVar42)) {
            uVar39 = (ulonglong)((int)uVar62 - 2);
            uVar23 = *puVar42;
            uVar46 = (int)uVar62 - 1;
            goto LAB_142b55f05;
          }
          puVar42 = puVar42 + -8;
          bVar49 = 2 < uVar62;
          uVar62 = uVar62 - 1;
        } while (bVar49);
      }
      uVar39 = 0xffffffff;
      uVar48 = uVar23;
      uVar23 = *(uint *)(lVar38 + 0x18);
      uVar46 = 0;
    }
LAB_142b55f05:
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0x203;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0x203;
    if (((int)uVar39 < 0) || ((int)uVar3 <= (int)uVar39)) {
      FUN_144940db0(lVar35,&local_268);
LAB_142b55f77:
      if (((int)uVar46 < 0) || (*(int *)(param_1 + 0x410) <= (int)uVar46)) {
        FUN_144940db0(*(undefined8 *)(param_1 + 0x3f0),&local_288);
      }
      else {
        lVar35 = (ulonglong)uVar46 * 0x20 + *(longlong *)(param_1 + 0x408);
        iVar24 = FUN_1402c7454(lVar35,3);
        if (iVar24 != iVar32) goto LAB_142b5648d;
        FUN_1408fdf38(&local_288,lVar35);
        local_278 = *(undefined2 *)(lVar35 + 0x10);
      }
      fVar70 = (float)(*(int *)(param_1 + 0xa0) - uVar48) / (float)(uVar23 - uVar48);
      fVar50 = fVar70;
      if (uVar23 - uVar48 == 0) {
        fVar50 = 1.0;
      }
      FUN_1406d4b96(&local_268,&local_208);
      ppcVar31 = &local_208;
      pbVar36 = &local_138;
      for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
        *(code **)pbVar36 = *ppcVar31;
        ppcVar31 = ppcVar31 + 1;
        pbVar36 = pbVar36 + 8;
      }
      FUN_1406d4b96(&local_288,&local_208);
      auVar17 = local_1b8;
      dVar61 = uStack_1c0;
      dVar58 = local_1c8;
      auVar69 = local_1d8;
      pbVar36 = pbStack_1e0;
      ppuVar20 = local_1e8;
      auVar64 = local_1f8;
      dVar55 = dStack_200;
      pcVar9 = local_208;
      uVar25 = local_1f8._0_8_;
      uVar12 = local_1f8._8_8_;
      uVar13 = local_1d8._0_8_;
      uVar14 = local_1d8._8_8_;
      uVar15 = local_1b8._0_8_;
      uVar21 = local_1b8._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_1f8._8_8_;
      local_1f8 = auVar18 << 0x40;
      local_1e8 = &PTR_LAB_14a1e1420;
      pbStack_1e0 = (byte *)CONCAT44(pbStack_1e0._4_4_,fVar50);
      local_208 = (code *)&LAB_142b5d9fa;
      pppuVar27 = (undefined ***)0x0;
      if (((int)uStack_260 == 0) || ((int)uStack_280 == 0)) {
LAB_142b560c1:
        pppuVar30 = &local_1e8;
        if (pppuVar27 != (undefined ***)0x0) {
          pppuVar30 = pppuVar27;
        }
        (*(code *)(*pppuVar30)[2])();
      }
      else {
        local_2c8 = (longlong *)CONCAT71(local_2c8._1_7_,2);
        FUN_1406d4012(0,&local_268,&local_288,&local_208);
        if (local_208 != (code *)0x0) {
          pppuVar27 = (undefined ***)local_1f8._0_8_;
          goto LAB_142b560c1;
        }
      }
      if ((uVar23 == uVar48) || (1e-05 < ABS(fVar70))) {
        if (ABS(fVar50 + -1.0) <= 1e-05) {
          local_138 = (byte)pcVar9;
          uStack_137 = (undefined1)((ulonglong)pcVar9 >> 8);
          uStack_136 = (undefined2)((ulonglong)pcVar9 >> 0x10);
          uStack_134 = (undefined4)((ulonglong)pcVar9 >> 0x20);
          uStack_130 = SUB84(dVar55,0);
          uStack_12c = (undefined4)((ulonglong)dVar55 >> 0x20);
          local_128 = auVar64;
          local_118._8_8_ = pbVar36;
          local_118._0_8_ = ppuVar20;
          local_108 = auVar69;
          local_f8._8_8_ = dVar61;
          local_f8._0_8_ = dVar58;
          local_e8._0_16_ = auVar17;
        }
        else {
          dVar59 = (double)fVar50;
          dVar60 = (double)fVar50;
          dVar54 = (double)DAT_149934d80 - dVar59;
          dVar57 = DAT_149934d80._8_8_ - dVar60;
          dVar67 = (double)pbVar36 * dVar60 + (double)local_118._8_8_ * dVar57;
          dVar65 = (double)uVar14 * dVar60 + (double)local_108._8_8_ * dVar57;
          local_118._8_4_ = SUB84(dVar67,0);
          local_118._0_8_ = (double)ppuVar20 * dVar59 + (double)local_118._0_8_ * dVar54;
          local_118._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          local_108._8_4_ = SUB84(dVar65,0);
          local_108._0_8_ = (double)uVar13 * dVar59 + (double)local_108._0_8_ * dVar54;
          local_108._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
          dVar65 = dVar61 * dVar60 + (double)local_f8._8_8_ * dVar57;
          dVar61 = (double)uVar21 * dVar60 + (double)local_e8._8_8_ * dVar57;
          local_f8._8_4_ = SUB84(dVar65,0);
          local_f8._0_8_ = dVar58 * dVar59 + (double)local_f8._0_8_ * dVar54;
          local_f8._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
          local_e8._8_4_ = SUB84(dVar61,0);
          local_e8._0_8_ = (double)uVar15 * dVar59 + (double)local_e8._0_8_ * dVar54;
          local_e8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          dVar58 = (double)CONCAT44(uStack_134,CONCAT22(uStack_136,CONCAT11(uStack_137,local_138)));
          auVar16._8_4_ = uStack_130;
          auVar16._0_8_ = dVar58;
          auVar16._12_4_ = uStack_12c;
          dVar61 = (double)uVar25 * local_128._0_8_ + (double)pcVar9 * dVar58;
          dVar65 = (double)uVar12 * (double)local_128._8_8_ + dVar55 * auVar16._8_8_;
          lVar35 = -(ulonglong)(0.0 <= dVar61 + dVar65);
          lVar38 = -(ulonglong)(0.0 <= dVar61 + dVar65);
          uVar51 = (undefined4)lVar38;
          uVar52 = (undefined4)((ulonglong)lVar38 >> 0x20);
          auVar63._0_8_ = 0.0 - dVar58;
          auVar63._8_8_ = 0.0 - auVar16._8_8_;
          auVar68._0_8_ = 0.0 - local_128._0_8_;
          auVar68._8_8_ = 0.0 - (double)local_128._8_8_;
          auVar6._8_4_ = uVar51;
          auVar6._0_8_ = lVar35;
          auVar6._12_4_ = uVar52;
          auVar64 = blendvpd(auVar63,auVar16,auVar6);
          auVar7._8_4_ = uVar51;
          auVar7._0_8_ = lVar35;
          auVar7._12_4_ = uVar52;
          auVar69 = blendvpd(auVar68,local_128,auVar7);
          dVar61 = auVar64._0_8_ * dVar54 + (double)pcVar9 * dVar59;
          dVar65 = auVar64._8_8_ * dVar57 + dVar55 * dVar60;
          dVar67 = auVar69._0_8_ * dVar54 + (double)uVar25 * dVar59;
          dVar54 = auVar69._8_8_ * dVar57 + (double)uVar12 * dVar60;
          dVar55 = dVar67 * dVar67 + dVar61 * dVar61;
          dVar58 = dVar54 * dVar54 + dVar65 * dVar65;
          auVar56._0_8_ = dVar55 + dVar58;
          auVar56._8_8_ = dVar55 + dVar58;
          uVar39 = -(ulonglong)(1e-08 <= auVar56._8_8_);
          auVar64 = sqrtpd(auVar56,auVar56);
          auVar64 = divpd(_DAT_149934d80,auVar64);
          auVar53._0_8_ = auVar64._0_8_ * dVar67;
          auVar53._8_8_ = auVar64._8_8_ * dVar54;
          uVar62 = (ulonglong)(dVar61 * auVar64._0_8_) & -(ulonglong)(1e-08 <= auVar56._0_8_);
          uVar66 = (ulonglong)(dVar65 * auVar64._8_8_) & uVar39;
          auVar8._8_4_ = (int)uVar39;
          auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar56._0_8_);
          auVar8._12_4_ = (int)(uVar39 >> 0x20);
          local_128 = blendvpd(_DAT_149935300,auVar53,auVar8);
          local_138 = (byte)uVar62;
          uStack_137 = (undefined1)(uVar62 >> 8);
          uStack_136 = (undefined2)(uVar62 >> 0x10);
          uStack_134 = (undefined4)(uVar62 >> 0x20);
          uStack_130 = (undefined4)uVar66;
          uStack_12c = (undefined4)(uVar66 >> 0x20);
        }
      }
      FUN_14174608e(&local_268,&local_138);
      FUN_14025a7da(*(undefined8 *)(param_1 + 0x3f0),&local_268);
      bVar49 = uVar23 < *(uint *)(param_1 + 0xa0);
      if (local_288 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar38 = lVar38 + uVar39 * 0x20;
      iVar24 = FUN_1402c7454(lVar38,CONCAT71((int7)(uVar39 >> 8),3));
      if (iVar24 == iVar32) {
        FUN_1408fdf38(&local_268,lVar38);
        local_258 = *(undefined2 *)(lVar38 + 0x10);
        goto LAB_142b55f77;
      }
LAB_142b5648d:
      bVar49 = true;
    }
    if (local_268 != 0) {
      FUN_1400020a8();
    }
  }
  *(bool *)(param_1 + 0x402) = bVar49;
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_238 = 0;
  local_228 = &PTR_LAB_14a1e1400;
  local_248[0] = FUN_142b5c6fa;
  local_220 = param_1;
  FUN_1417399ce(param_1,local_248,0);
LAB_142b5630c:
  if ((local_d0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142b56d68:
  lVar41 = lVar41 + 8;
  if (lVar35 * 8 == lVar41) goto LAB_142b56d71;
  goto LAB_142b56d5b;
}



// FUNCTION 142b56dc0 FUN_142b56dc0 body=483 status=ok
// SIG undefined FUN_142b56dc0(void)

void FUN_142b56dc0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  float fVar4;
  
  if ((((char)param_1[2] == '\x01') &&
      (((*param_1 == 0 || ((*(byte *)(*param_1 + 0xa0) & 1) != 0)) && (param_1[0x75] != 0)))) &&
     ((param_1[0x7e] != 0 && (param_1[0x7f] != 0)))) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(int *)(param_1 + 0x14) = (int)param_1[0x14] + *(int *)((longlong)param_1 + 0x9c);
    fVar4 = *(float *)((longlong)param_1 + 0xa4) -
            (float)*(int *)((longlong)param_1 + 0x9c) / *(float *)((longlong)param_1 + 0x14);
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    *(float *)((longlong)param_1 + 0xa4) = fVar4;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    FUN_140524978(param_1,param_2,param_3);
    FUN_142b548a2(param_1,param_3);
    plVar1 = param_1 + 0x8c;
    iVar2 = (int)param_1[0x8f];
    pvVar3 = (void *)param_1[0x8e];
    *(int *)(param_1 + 0x8d) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x46c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
    }
    else {
      FUN_142b5d91a(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 0x70);
      }
    }
    FUN_142b56fa4(param_1,param_2,param_1[0x7e],param_1 + 0x8e,*(undefined1 *)(param_3 + 0xec));
    if ((int)param_1[0x8d] == 0) {
      iVar2 = (int)param_1[0x8f];
      pvVar3 = (void *)param_1[0x8e];
      *(int *)(param_1 + 0x8d) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x46c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
      }
      else {
        FUN_142b5d91a(plVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 0x70);
        }
      }
    }
    if ((char)param_1[0x80] == '\x01') {
      FUN_144940db0(param_1[0x7e],param_1 + 0x83);
    }
    FUN_144a77c8e(param_1);
    FUN_140284660(param_1);
    return;
  }
  FUN_142b548a2(param_1,param_3);
  return;
}



// FUNCTION 142b56fa4 FUN_142b56fa4 body=8299 status=ok
// SIG undefined FUN_142b56fa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b56fa4(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,char param_5
                  )

{
  double *pdVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined7 uVar13;
  int iVar14;
  int iVar15;
  double ****ppppdVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar34;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double ***pppdVar38;
  undefined1 auVar39 [16];
  double dVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double ***pppdVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double ***pppdVar59;
  double dVar60;
  double ***pppdVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double ***pppdVar67;
  double ***pppdVar68;
  double dVar69;
  double dVar70;
  double ***pppdVar71;
  double ***pppdVar72;
  double dVar73;
  double dVar74;
  double dVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar78;
  double dVar79;
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auStack_368 [44];
  undefined4 local_33c;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double **local_308;
  double **ppdStack_300;
  longlong local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double **local_2a8;
  double **ppdStack_2a0;
  double **local_298;
  double **ppdStack_290;
  double **local_288;
  double **ppdStack_280;
  double **local_278;
  double **ppdStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  double **local_248;
  double **ppdStack_240;
  double **local_238;
  double **ppdStack_230;
  double **local_228;
  double **ppdStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double ***local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double **local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  double **local_168;
  double **ppdStack_160;
  undefined1 local_158 [16];
  double **local_148;
  double **ppdStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double **local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *(undefined4 *)(param_4 + 1) = 0;
  local_2f0 = param_2;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    param_2 = 0;
    FUN_1403d6c30(param_4);
  }
  auVar81 = _DAT_149934d80;
  if (*(int *)(param_1 + 0x448) == 0) goto LAB_142b58d18;
  cVar2 = *(char *)(param_1 + 0x98);
  if (param_5 == '\0') {
    if (cVar2 == '\0') {
LAB_142b57774:
      puVar17 = &DAT_14c846480;
    }
    else {
      if (cVar2 != '\x02') goto LAB_142b5777d;
      puVar17 = (undefined8 *)(param_1 + 0xb0);
    }
LAB_142b5779a:
    puVar21 = (undefined8 *)local_1d8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar21 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  else {
    if (cVar2 == '\0') {
LAB_142b5777d:
      puVar17 = (undefined8 *)(param_1 + 0x170);
      if (*(char *)(param_1 + 0x360) != '\0') {
        puVar17 = (undefined8 *)(param_1 + 0x300);
      }
      goto LAB_142b5779a;
    }
    if (cVar2 != '\x02') goto LAB_142b57774;
    lVar12 = 0x170;
    if (*(char *)(param_1 + 0x360) != '\0') {
      lVar12 = 0x300;
    }
    auVar25 = *(undefined1 (*) [16])(param_1 + 0x40 + lVar12);
    dVar66 = auVar25._0_8_;
    dVar73 = auVar25._8_8_;
    local_338 = *(undefined1 (*) [16])(param_1 + 0x50 + lVar12);
    auVar28 = *(undefined1 (*) [16])(param_1 + 0xf0);
    dVar46 = auVar28._0_8_;
    dVar51 = auVar28._8_8_;
    auVar40 = *(undefined1 (*) [16])(param_1 + 0x100);
    dVar70 = auVar40._0_8_;
    auVar25 = minpd(auVar28,auVar25);
    auVar39 = minpd(auVar40,local_338);
    auVar28._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar14 = movmskpd(0x300,auVar28);
    auVar25._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
    uVar18 = movmskpd((int)param_2,auVar25);
    uVar9 = local_338._0_8_;
    uVar10 = local_338._8_8_;
    if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar35 = *(double *)(param_1 + 0xb0);
      dVar36 = *(double *)(param_1 + 0xb8);
      dVar37 = *(double *)(param_1 + 0xc0);
      dVar44 = *(double *)(param_1 + 200);
      dVar50 = *(double *)(param_1 + lVar12);
      dVar54 = ((double *)(param_1 + lVar12))[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar12);
      dVar55 = *pdVar1;
      dVar62 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x18 + lVar12);
      dVar49 = *pdVar1;
      dVar24 = *pdVar1;
      dVar58 = *(double *)(param_1 + lVar12);
      dVar57 = *(double *)(param_1 + lVar12);
      pdVar1 = (double *)(param_1 + 8 + lVar12);
      dVar64 = *pdVar1;
      dVar60 = *pdVar1;
      pdVar1 = (double *)(param_1 + 0x10 + lVar12);
      dVar34 = *pdVar1;
      dVar56 = *pdVar1;
      local_1d8._0_8_ =
           dVar36 * dVar34 * -1.0 + dVar37 * dVar64 + dVar44 * dVar58 * 1.0 + dVar35 * dVar49;
      local_1d8._8_8_ =
           dVar35 * dVar56 * 1.0 + dVar44 * dVar60 + dVar37 * dVar57 * -1.0 + dVar36 * dVar24;
      local_1c8._0_8_ =
           dVar44 * dVar34 * 1.0 + ((dVar58 * dVar36 * 1.0 + dVar37 * dVar49) - dVar35 * dVar64);
      local_1c8._8_8_ =
           dVar37 * dVar56 * -1.0 + ((dVar57 * dVar35 * -1.0 + dVar44 * dVar24) - dVar36 * dVar60);
      dVar56 = *(double *)(param_1 + 0xd0) * dVar66;
      dVar34 = *(double *)(param_1 + 0xd8) * dVar73;
      dVar35 = *(double *)(param_1 + 0xe0) * (double)local_338._0_8_;
      dVar36 = *(double *)(param_1 + 0xe8) * (double)local_338._8_8_;
      dVar60 = dVar34 * dVar50 - dVar54 * dVar56;
      dVar64 = dVar35 * dVar54 - dVar55 * dVar34;
      dVar57 = dVar56 * dVar55 - dVar50 * dVar35;
      dVar58 = dVar36 * dVar62 - dVar62 * dVar36;
      dVar64 = dVar64 + dVar64;
      dVar57 = dVar57 + dVar57;
      dVar60 = dVar60 + dVar60;
      dVar58 = dVar58 + dVar58;
      pdVar1 = (double *)(param_1 + 0x20 + lVar12);
      local_1b8 = (dVar60 * dVar54 - dVar55 * dVar57) + dVar49 * dVar64 + dVar56 + *pdVar1;
      dStack_1b0 = (dVar64 * dVar55 - dVar60 * dVar50) + dVar24 * dVar57 + dVar34 + pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar12);
      local_1a8 = (double **)
                  ((dVar57 * dVar50 - dVar54 * dVar64) + dVar49 * dVar60 + dVar35 + *pdVar1);
      dStack_1a0 = (dVar58 * dVar62 - dVar58 * dVar62) + dVar24 * dVar58 + dVar36 + pdVar1[1];
      auVar39._0_8_ = dVar46 * dVar66;
      auVar39._8_8_ = dVar51 * dVar73;
    }
    else {
      dVar57 = *(double *)(param_1 + lVar12);
      dVar58 = ((double *)(param_1 + lVar12))[1];
      dVar24 = *(double *)(param_1 + 0x10 + lVar12);
      dVar34 = dVar58 + dVar58;
      dVar35 = dVar24 + dVar24;
      dVar62 = dVar57 * (dVar57 + dVar57);
      local_328._0_8_ = (1.0 - (dVar24 * dVar35 + dVar58 * dVar34)) * dVar66;
      dVar78 = (1.0 - (dVar24 * dVar35 + dVar62)) * dVar73;
      dVar69 = *(double *)(param_1 + lVar12) * dVar35;
      pdVar1 = (double *)(param_1 + 0x18 + lVar12);
      dVar24 = *pdVar1;
      dVar36 = dVar35 * dVar24;
      dVar44 = (dVar57 + dVar57) * *pdVar1;
      dVar24 = dVar34 * dVar24;
      dVar55 = (dVar24 + dVar69) * (double)local_338._0_8_;
      dVar50 = (dVar34 * dVar57 - dVar36) * dVar73;
      dVar54 = (dVar35 * dVar58 - dVar44) * (double)local_338._0_8_;
      dVar60 = *(double *)(param_1 + 0xb0);
      dVar64 = *(double *)(param_1 + 0xb8);
      dVar56 = *(double *)(param_1 + 0xc0);
      dVar74 = dVar64 + dVar64;
      dVar37 = dVar56 + dVar56;
      local_2d8._0_8_ = dVar60 * (dVar60 + dVar60);
      local_2d8._8_8_ = dVar64 * dVar74;
      dVar49 = *(double *)(param_1 + 200);
      dVar63 = dVar37 * dVar49;
      dVar65 = (dVar60 + dVar60) * *(double *)(param_1 + 200);
      dVar79 = (dVar74 * dVar60 - dVar63) * dVar51;
      dVar80 = (dVar37 * dVar64 - dVar65) * dVar70;
      local_328._8_8_ = (dVar34 * dVar57 + dVar36) * dVar66;
      dVar77 = (dVar35 * dVar58 + dVar44) * dVar73;
      dVar36 = (1.0 - (dVar56 * dVar37 + (double)local_2d8._8_8_)) * dVar46;
      dVar44 = (1.0 - (dVar56 * dVar37 + (double)local_2d8._0_8_)) * dVar51;
      dVar56 = (dVar74 * dVar60 + dVar63) * dVar46;
      dVar35 = (dVar37 * dVar64 + dVar65) * dVar51;
      dVar63 = (dVar69 - dVar24) * dVar66;
      dVar74 = dVar74 * dVar49;
      local_308 = (double **)(dVar66 * dVar46);
      ppdStack_300 = (double **)(dVar73 * dVar51);
      dVar46 = (dVar37 * dVar60 - dVar74) * dVar46;
      dVar34 = (1.0 - (dVar62 + dVar58 * dVar34)) * (double)local_338._0_8_;
      local_318 = dVar46 * dVar34 + dVar56 * dVar77 + dVar36 * dVar63;
      dStack_310 = dVar46 * 0.0 + dVar56 * 0.0 + dVar36 * 0.0;
      dVar62 = (dVar74 + dVar37 * dVar60) * dVar70;
      local_338._0_8_ = (double)local_338._0_8_ * dVar70;
      local_338._8_8_ = (double)local_338._8_8_ * auVar40._8_8_;
      dVar65 = (1.0 - ((double)local_2d8._0_8_ + (double)local_2d8._8_8_)) * dVar70;
      dVar66 = *(double *)(param_1 + 0xd0);
      dVar73 = *(double *)(param_1 + 0xd0);
      dVar51 = *(double *)(param_1 + 0xd8);
      dVar24 = *(double *)(param_1 + 0xd8);
      dVar49 = *(double *)(param_1 + 0xe0);
      dVar57 = *(double *)(param_1 + 0xe0);
      pdVar1 = (double *)(param_1 + 0x20 + lVar12);
      dVar58 = *pdVar1;
      dVar60 = pdVar1[1];
      dVar64 = *(double *)(param_1 + 0x30 + lVar12);
      local_118 = dVar55 * dVar49 + dVar50 * dVar51 + (double)local_328._0_8_ * dVar66 + dVar58;
      dStack_110 = dVar54 * dVar57 + dVar78 * dVar24 + (double)local_328._8_8_ * dVar73 + dVar60;
      dVar58 = dVar58 * 0.0;
      dVar60 = dVar60 * 0.0;
      local_108 = (double **)(dVar34 * dVar49 + dVar77 * dVar51 + dVar66 * dVar63 + dVar64);
      dStack_100 = dVar57 * 0.0 + dVar24 * 0.0 + dVar73 * 0.0 + 1.0;
      dVar64 = dVar64 * 0.0;
      dVar24 = dVar55 * dVar46 + dVar50 * dVar56 + (double)local_328._0_8_ * dVar36 + dVar58;
      dVar49 = dVar54 * dVar46 + dVar78 * dVar56 + (double)local_328._8_8_ * dVar36 + dVar60;
      dVar69 = local_318 + dVar64;
      ppdStack_160 = (double **)(dStack_310 + 0.0);
      dVar36 = dVar55 * dVar35 + dVar50 * dVar44 + (double)local_328._0_8_ * dVar79 + dVar58;
      dVar37 = dVar54 * dVar35 + dVar78 * dVar44 + (double)local_328._8_8_ * dVar79 + dVar60;
      dVar57 = dVar35 * dVar34 + dVar44 * dVar77 + dVar79 * dVar63 + dVar64;
      ppdStack_140 = (double **)(dVar35 * 0.0 + dVar44 * 0.0 + dVar79 * 0.0 + 0.0);
      dVar58 = dVar55 * dVar65 + dVar50 * dVar80 + (double)local_328._0_8_ * dVar62 + dVar58;
      dVar60 = dVar54 * dVar65 + dVar78 * dVar80 + (double)local_328._8_8_ * dVar62 + dVar60;
      dVar64 = dVar65 * dVar34 + dVar80 * dVar77 + dVar62 * dVar63 + dVar64;
      dVar66 = dVar69 * dVar69 + dVar24 * dVar24 + dVar49 * dVar49;
      dVar46 = dVar57 * dVar57 + dVar36 * dVar36 + dVar37 * dVar37;
      dVar73 = dVar64 * dVar64 + dVar58 * dVar58 + dVar60 * dVar60;
      uVar23 = -(ulonglong)(0.0 <= dVar66 + -9.99999993922529e-09);
      dVar66 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar66)) & uVar23);
      uVar23 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
      dVar46 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar46)) & uVar23);
      auVar39._8_8_ = (double)ppdStack_300;
      auVar39._0_8_ = (double)local_308;
      uVar23 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
      dVar73 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar73)) & uVar23);
      auVar26._8_8_ = -(ulonglong)(0.0 <= (double)ppdStack_300);
      auVar26._0_8_ = -(ulonglong)(0.0 <= (double)local_308);
      auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar26);
      uVar23 = -(ulonglong)(0.0 <= (double)local_338._0_8_);
      dVar51 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
      dVar56 = auVar25._0_8_;
      local_178._8_8_ = dVar49 * dVar66 * dVar56;
      local_178._0_8_ = dVar24 * dVar66 * dVar56;
      local_168 = (double **)(dVar66 * dVar69 * dVar56);
      dVar66 = auVar25._8_8_;
      local_148 = (double **)(dVar46 * dVar57 * dVar66);
      local_158._8_8_ = dVar37 * dVar46 * dVar66;
      local_158._0_8_ = dVar66 * dVar36 * dVar46;
      local_138._8_8_ = dVar60 * dVar73 * dVar51;
      local_138._0_8_ = dVar51 * dVar58 * dVar73;
      local_128._8_8_ = dVar65 * 0.0 + dVar80 * 0.0 + dVar62 * 0.0 + 0.0;
      local_128._0_8_ = dVar73 * dVar64 * dVar51;
      local_2e8 = auVar40;
      FUN_14481fd10(local_1d8,local_178);
      dVar66 = (double)local_1c8._0_8_ * (double)local_1c8._0_8_ +
               (double)local_1d8._0_8_ * (double)local_1d8._0_8_;
      dVar46 = (double)local_1c8._8_8_ * (double)local_1c8._8_8_ +
               (double)local_1d8._8_8_ * (double)local_1d8._8_8_;
      auVar47._0_8_ = dVar66 + dVar46;
      auVar47._8_8_ = dVar66 + dVar46;
      auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
      auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
      auVar25 = sqrtpd(auVar47,auVar47);
      auVar81 = divpd(auVar81,auVar25);
      auVar82._0_8_ = auVar81._0_8_ * (double)local_1c8._0_8_;
      auVar82._8_8_ = auVar81._8_8_ * (double)local_1c8._8_8_;
      local_1d8._0_8_ =
           (ulonglong)((double)local_1d8._0_8_ * auVar81._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
      local_1d8._8_8_ =
           (ulonglong)((double)local_1d8._8_8_ * auVar81._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
      local_1c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar82,auVar27);
      dStack_1a0 = 0.0;
      local_1b8 = local_118;
      dStack_1b0 = dStack_110;
      local_1a8 = local_108;
    }
    dStack_180 = (double)uVar10 * auVar40._8_8_;
    local_188 = (double)uVar9 * dVar70;
    local_198 = auVar39;
  }
  iVar14 = *(int *)(param_3 + 0x10);
  if (iVar14 < 1) {
    lVar12 = 0;
  }
  else {
    lVar12 = **(longlong **)(param_3 + 8);
  }
  uVar13 = (undefined7)((ulonglong)lVar12 >> 8);
  if ((*(byte *)(lVar12 + 0x20) & 1) == 0) {
    if ((((9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x60))) ||
         (9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x68)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x70)))) ||
       ((9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x48)) ||
        (9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x50)))))) {
      local_33c = 0;
    }
    else {
      local_33c = (undefined4)
                  CONCAT71(uVar13,ABS(*(double *)(lVar12 + 0x58)) <= 9.99999993922529e-09);
    }
  }
  else {
    local_33c = (undefined4)CONCAT71(uVar13,1);
  }
  local_1e8 = (double ***)0x0;
  uStack_1e0 = 0;
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar14 != 0) {
    ppppdVar16 = &local_1e8;
    FUN_1401a2688();
    if (0 < *(int *)(param_3 + 0x10)) {
      lVar12 = 0;
      do {
        auVar81 = _DAT_149934d80;
        lVar20 = *(longlong *)(*(longlong *)(param_3 + 8) + lVar12 * 8);
        uVar11 = (undefined4)*(longlong *)(param_3 + 8);
        if (param_5 == '\0') {
          local_178 = ZEXT816(0);
          local_168 = (double **)0x0;
          ppdStack_160 = (double **)0x3ff0000000000000;
          local_148 = (double **)0x0;
          ppdStack_140 = (double **)0x0;
          local_158 = ZEXT816(0);
          local_138._8_8_ = 0x3ff0000000000000;
          local_138._0_8_ = 0x3ff0000000000000;
          dVar66 = (double)local_1c8._0_8_ * (double)local_1c8._0_8_ +
                   (double)local_1d8._0_8_ * (double)local_1d8._0_8_;
          dVar46 = (double)local_1c8._8_8_ * (double)local_1c8._8_8_ +
                   (double)local_1d8._8_8_ * (double)local_1d8._8_8_;
          local_128 = ZEXT816(0x3ff0000000000000);
          auVar81._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar66 + dVar46)));
          auVar81._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar66 + dVar46)));
          iVar14 = movmskpd(uVar11,auVar81);
          if (iVar14 == 0) {
            auVar81 = minpd(*(undefined1 (*) [16])(lVar20 + 0x170),local_198);
            auVar7._8_8_ = dStack_180;
            auVar7._0_8_ = local_188;
            auVar25 = minpd(*(undefined1 (*) [16])(lVar20 + 0x180),auVar7);
            auVar32._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
            auVar32._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
            iVar14 = movmskpd(0,auVar32);
            auVar42._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
            auVar42._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
            uVar18 = movmskpd((int)ppppdVar16,auVar42);
            puVar17 = (undefined8 *)local_178;
            if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c8460b0) &&
                 (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
                DAT_14c8460a0 = 0x322bcc77322bcc77;
                DAT_14c8460a8 = 0x322bcc77322bcc77;
                _Init_thread_footer(&DAT_14c8460b0);
              }
              auVar81 = divpd(_DAT_149934d80,local_198);
              auVar8._8_8_ = dStack_180;
              auVar8._0_8_ = local_188;
              auVar25 = divpd(ZEXT816(0x3ff0000000000000),auVar8);
              dVar51 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(local_198._0_8_)) &
                               auVar81._0_8_);
              dVar24 = (double)(-(ulonglong)
                                 ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                 ABS(local_198._8_8_)) & auVar81._8_8_);
              dVar58 = (double)(-(ulonglong)((double)(float)DAT_14c8460a8 < ABS(local_188)) &
                               auVar25._0_8_);
              dVar56 = *(double *)(lVar20 + 0x150) - local_1b8;
              dVar34 = *(double *)(lVar20 + 0x158) - dStack_1b0;
              dVar35 = *(double *)(lVar20 + 0x160) - (double)local_1a8;
              dVar60 = -(double)local_1d8._0_8_;
              dVar64 = -(double)local_1d8._8_8_;
              dVar49 = (double)local_1c8._0_8_ * -1.0;
              dVar57 = (double)local_1c8._8_8_ * 1.0;
              dVar36 = dVar34 * dVar60 - dVar56 * dVar64;
              dVar44 = dVar35 * dVar64 - dVar34 * dVar49;
              dVar50 = dVar56 * dVar49 - dVar35 * dVar60;
              dVar37 = dVar57 * 0.0 - dVar57 * 0.0;
              dVar44 = dVar44 + dVar44;
              dVar50 = dVar50 + dVar50;
              dVar36 = dVar36 + dVar36;
              dVar37 = dVar37 + dVar37;
              pppdVar59 = (double ***)(*(double *)(lVar20 + 0x170) * dVar51);
              pppdVar61 = (double ***)(*(double *)(lVar20 + 0x178) * dVar24);
              local_128._0_8_ = *(double *)(lVar20 + 0x180) * dVar58;
              local_128._8_8_ = *(double *)(lVar20 + 0x188) * 0.0;
              dVar66 = *(double *)(lVar20 + 0x130);
              dVar46 = *(double *)(lVar20 + 0x138);
              dVar70 = *(double *)(lVar20 + 0x140);
              dVar73 = *(double *)(lVar20 + 0x148);
              local_158._0_8_ =
                   ((dVar36 * dVar64 - dVar49 * dVar50) + dVar57 * dVar44 + dVar56) * dVar51;
              local_158._8_8_ =
                   ((dVar44 * dVar49 - dVar36 * dVar60) + dVar57 * dVar50 + dVar34) * dVar24;
              local_178._0_8_ =
                   dVar46 * dVar49 * -1.0 +
                   ((dVar66 * dVar57 - (double)local_1d8._0_8_ * dVar73 * 1.0) -
                   dVar70 * (double)local_1d8._8_8_);
              local_178._8_8_ =
                   dVar66 * dVar49 * 1.0 +
                   ((dVar46 * dVar57 - (double)local_1d8._0_8_ * dVar70 * -1.0) -
                   dVar73 * (double)local_1d8._8_8_);
              auVar40._0_8_ =
                   dVar73 * dVar49 * 1.0 +
                   (double)local_1d8._8_8_ * dVar66 +
                   (dVar57 * dVar70 - (double)local_1d8._0_8_ * dVar46 * 1.0);
              auVar40._8_8_ =
                   dVar70 * dVar49 * -1.0 +
                   (double)local_1d8._8_8_ * dVar46 +
                   (dVar57 * dVar73 - (double)local_1d8._0_8_ * dVar66 * -1.0);
              local_138._8_8_ = pppdVar61;
              local_138._0_8_ = pppdVar59;
              local_148 = (double **)
                          (((dVar50 * dVar60 - dVar64 * dVar44) + dVar57 * dVar36 + dVar35) * dVar58
                          );
              ppdStack_140 = (double **)
                             (((dVar37 * dVar57 - dVar37 * dVar57) + dVar57 * dVar37 + 0.0) * 0.0);
              auVar75 = local_158;
              pppdVar38 = (double ***)local_128._0_8_;
              pppdVar45 = (double ***)local_128._8_8_;
              pppdVar71 = (double ***)local_148;
              pppdVar72 = (double ***)ppdStack_140;
            }
            else {
              FUN_1402db8fa(local_178,lVar20 + 0x130,local_1d8);
              auVar40._8_8_ = (double)ppdStack_160;
              auVar40._0_8_ = (double)local_168;
              auVar75 = local_158;
              pppdVar59 = (double ***)local_138._0_8_;
              pppdVar61 = (double ***)local_138._8_8_;
              pppdVar38 = (double ***)local_128._0_8_;
              pppdVar45 = (double ***)local_128._8_8_;
              pppdVar71 = (double ***)local_148;
              pppdVar72 = (double ***)ppdStack_140;
            }
          }
          else {
            auVar40._8_8_ = (double)DAT_14c846498;
            auVar40._0_8_ = (double)DAT_14c846490;
            puVar17 = &DAT_14c846480;
            auVar75 = _DAT_14c8464a0;
            pppdVar59 = DAT_14c8464c0;
            pppdVar61 = DAT_14c8464c8;
            pppdVar38 = DAT_14c8464d0;
            pppdVar45 = pppdRam000000014c8464d8;
            pppdVar71 = DAT_14c8464b0;
            pppdVar72 = DAT_14c8464b8;
          }
          pppdVar67 = (double ***)*puVar17;
          pppdVar68 = (double ***)puVar17[1];
        }
        else {
          dVar66 = local_198._0_8_;
          dVar70 = local_198._8_8_;
          auVar6._8_8_ = dStack_180;
          auVar6._0_8_ = local_188;
          local_338 = *(undefined1 (*) [16])(lVar20 + 0x170);
          auVar25 = *(undefined1 (*) [16])(lVar20 + 0x180);
          dVar46 = auVar25._0_8_;
          auVar28 = minpd(local_338,local_198);
          auVar40 = minpd(auVar25,auVar6);
          auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
          auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
          iVar14 = movmskpd(uVar11,auVar29);
          auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
          auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
          uVar18 = movmskpd((int)ppppdVar16,auVar41);
          local_328 = local_198;
          if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
            dVar73 = *(double *)(lVar20 + 0x130);
            dVar51 = *(double *)(lVar20 + 0x138);
            dVar24 = *(double *)(lVar20 + 0x140);
            dVar49 = *(double *)(lVar20 + 0x148);
            pppdVar67 = (double ***)
                        (dVar51 * (double)local_1c8._0_8_ * -1.0 +
                        dVar24 * (double)local_1d8._8_8_ +
                        dVar49 * (double)local_1d8._0_8_ * 1.0 + dVar73 * (double)local_1c8._8_8_);
            pppdVar68 = (double ***)
                        (dVar73 * (double)local_1c8._0_8_ * 1.0 +
                        dVar49 * (double)local_1d8._8_8_ +
                        dVar24 * (double)local_1d8._0_8_ * -1.0 + dVar51 * (double)local_1c8._8_8_);
            auVar40._0_8_ =
                 dVar49 * (double)local_1c8._0_8_ * 1.0 +
                 (((double)local_1d8._0_8_ * dVar51 * 1.0 + dVar24 * (double)local_1c8._8_8_) -
                 dVar73 * (double)local_1d8._8_8_);
            auVar40._8_8_ =
                 dVar24 * (double)local_1c8._0_8_ * -1.0 +
                 (((double)local_1d8._0_8_ * dVar73 * -1.0 + dVar49 * (double)local_1c8._8_8_) -
                 dVar51 * (double)local_1d8._8_8_);
            dVar57 = *(double *)(lVar20 + 0x150) * dVar66;
            dVar58 = *(double *)(lVar20 + 0x158) * dVar70;
            dVar24 = *(double *)(lVar20 + 0x160) * local_188;
            dVar49 = *(double *)(lVar20 + 0x168) * dStack_180;
            dVar60 = dVar58 * (double)local_1d8._0_8_ - (double)local_1d8._8_8_ * dVar57;
            dVar64 = dVar24 * (double)local_1d8._8_8_ - (double)local_1c8._0_8_ * dVar58;
            dVar73 = dVar57 * (double)local_1c8._0_8_ - (double)local_1d8._0_8_ * dVar24;
            dVar51 = dVar49 * (double)local_1c8._8_8_ - (double)local_1c8._8_8_ * dVar49;
            dVar64 = dVar64 + dVar64;
            dVar73 = dVar73 + dVar73;
            dVar60 = dVar60 + dVar60;
            dVar51 = dVar51 + dVar51;
            pppdVar59 = (double ***)((double)local_338._0_8_ * dVar66);
            pppdVar61 = (double ***)((double)local_338._8_8_ * dVar70);
            pppdVar38 = (double ***)(dVar46 * local_188);
            pppdVar45 = (double ***)(auVar25._8_8_ * dStack_180);
            auVar75._0_8_ =
                 (dVar60 * (double)local_1d8._8_8_ - (double)local_1c8._0_8_ * dVar73) +
                 (double)local_1c8._8_8_ * dVar64 + dVar57 + local_1b8;
            auVar75._8_8_ =
                 (dVar64 * (double)local_1c8._0_8_ - dVar60 * (double)local_1d8._0_8_) +
                 (double)local_1c8._8_8_ * dVar73 + dVar58 + dStack_1b0;
            pppdVar71 = (double ***)
                        ((dVar73 * (double)local_1d8._0_8_ - (double)local_1d8._8_8_ * dVar64) +
                         (double)local_1c8._8_8_ * dVar60 + dVar24 + (double)local_1a8);
            pppdVar72 = (double ***)
                        ((dVar51 * (double)local_1c8._8_8_ - dVar51 * (double)local_1c8._8_8_) +
                         (double)local_1c8._8_8_ * dVar51 + dVar49 + dStack_1a0);
          }
          else {
            dVar57 = (double)local_1d8._8_8_ + (double)local_1d8._8_8_;
            dVar58 = (double)local_1c8._0_8_ + (double)local_1c8._0_8_;
            dVar36 = (double)local_1d8._0_8_ * ((double)local_1d8._0_8_ + (double)local_1d8._0_8_);
            local_2c8 = (1.0 - ((double)local_1c8._0_8_ * dVar58 + (double)local_1d8._8_8_ * dVar57)
                        ) * dVar66;
            dVar77 = (1.0 - ((double)local_1c8._0_8_ * dVar58 + dVar36)) * dVar70;
            dVar60 = ((double)local_1d8._0_8_ + (double)local_1d8._0_8_) * (double)local_1c8._8_8_;
            dVar34 = (dVar57 * (double)local_1c8._8_8_ + (double)local_1d8._0_8_ * dVar58) *
                     local_188;
            dVar64 = (dVar57 * (double)local_1d8._0_8_ - dVar58 * (double)local_1c8._8_8_) * dVar70;
            dVar56 = (dVar58 * (double)local_1d8._8_8_ - dVar60) * local_188;
            dVar51 = *(double *)(lVar20 + 0x130);
            dVar24 = *(double *)(lVar20 + 0x138);
            dVar49 = *(double *)(lVar20 + 0x140);
            dVar35 = dVar24 + dVar24;
            dVar63 = dVar49 + dVar49;
            local_318 = dVar51 * (dVar51 + dVar51);
            dStack_310 = dVar24 * dVar35;
            dVar73 = *(double *)(lVar20 + 0x148);
            dVar37 = dVar63 * dVar73;
            dVar44 = (dVar51 + dVar51) * *(double *)(lVar20 + 0x148);
            dVar50 = (dVar35 * dVar51 - dVar37) * (double)local_338._8_8_;
            dVar54 = (dVar63 * dVar24 - dVar44) * dVar46;
            dStack_2c0 = (dVar57 * (double)local_1d8._0_8_ + dVar58 * (double)local_1c8._8_8_) *
                         dVar66;
            dVar65 = (dVar58 * (double)local_1d8._8_8_ + dVar60) * dVar70;
            dVar69 = (1.0 - (dVar49 * dVar63 + dStack_310)) * (double)local_338._0_8_;
            dVar74 = (1.0 - (dVar49 * dVar63 + local_318)) * (double)local_338._8_8_;
            dVar55 = (dVar35 * dVar51 + dVar37) * (double)local_338._0_8_;
            dVar62 = (dVar63 * dVar24 + dVar44) * (double)local_338._8_8_;
            dVar44 = ((double)local_1d8._0_8_ * dVar58 - dVar57 * (double)local_1c8._8_8_) * dVar66;
            dVar35 = dVar35 * dVar73;
            pppdVar59 = (double ***)(dVar66 * (double)local_338._0_8_);
            pppdVar61 = (double ***)(dVar70 * (double)local_338._8_8_);
            local_328._8_8_ = pppdVar61;
            local_328._0_8_ = pppdVar59;
            dVar37 = (dVar63 * dVar51 - dVar35) * (double)local_338._0_8_;
            dVar36 = (1.0 - (dVar36 + (double)local_1d8._8_8_ * dVar57)) * local_188;
            local_2e8._0_8_ = dVar34 * dVar62 + dVar64 * dVar74 + local_2c8 * dVar50;
            local_2e8._8_8_ = dVar56 * dVar62 + dVar77 * dVar74 + dStack_2c0 * dVar50;
            pppdVar38 = (double ***)(local_188 * dVar46);
            pppdVar45 = (double ***)(dStack_180 * auVar25._8_8_);
            dVar60 = (dVar35 + dVar63 * dVar51) * dVar46;
            dVar46 = (1.0 - (local_318 + dStack_310)) * dVar46;
            dVar70 = *(double *)(lVar20 + 0x150);
            dVar66 = *(double *)(lVar20 + 0x150);
            dVar51 = *(double *)(lVar20 + 0x158);
            dVar73 = *(double *)(lVar20 + 0x158);
            dVar24 = *(double *)(lVar20 + 0x160);
            dVar49 = *(double *)(lVar20 + 0x160);
            local_118 = dVar34 * dVar24 + dVar64 * dVar51 + local_2c8 * dVar70 + local_1b8;
            dStack_110 = dVar56 * dVar49 + dVar77 * dVar73 + dStack_2c0 * dVar66 + dStack_1b0;
            dVar57 = local_1b8 * 0.0;
            dVar58 = dStack_1b0 * 0.0;
            local_108 = (double **)
                        (dVar36 * dVar24 + dVar65 * dVar51 + dVar70 * dVar44 + (double)local_1a8);
            dStack_100 = dVar49 * 0.0 + dVar73 * 0.0 + dVar66 * 0.0 + 1.0;
            dVar24 = (double)local_1a8 * 0.0;
            dVar63 = dVar34 * dVar37 + dVar64 * dVar55 + local_2c8 * dVar69 + dVar57;
            dVar78 = dVar56 * dVar37 + dVar77 * dVar55 + dStack_2c0 * dVar69 + dVar58;
            local_338._0_8_ = dVar37 * dVar36 + dVar55 * dVar65 + dVar69 * dVar44 + dVar24;
            ppdStack_160 = (double **)(dVar37 * 0.0 + dVar55 * 0.0 + dVar69 * 0.0 + 0.0);
            dVar37 = (double)local_2e8._0_8_ + dVar57;
            dVar55 = (double)local_2e8._8_8_ + dVar58;
            dVar35 = dVar62 * dVar36 + dVar74 * dVar65 + dVar50 * dVar44 + dVar24;
            ppdStack_140 = (double **)(dVar62 * 0.0 + dVar74 * 0.0 + dVar50 * 0.0 + 0.0);
            dVar57 = dVar34 * dVar46 + dVar64 * dVar54 + local_2c8 * dVar60 + dVar57;
            dVar58 = dVar56 * dVar46 + dVar77 * dVar54 + dStack_2c0 * dVar60 + dVar58;
            dVar24 = dVar46 * dVar36 + dVar54 * dVar65 + dVar60 * dVar44 + dVar24;
            local_338._8_8_ = ppdStack_160;
            dVar66 = (double)local_338._0_8_ * (double)local_338._0_8_ +
                     dVar63 * dVar63 + dVar78 * dVar78;
            dVar70 = dVar35 * dVar35 + dVar37 * dVar37 + dVar55 * dVar55;
            dVar73 = dVar24 * dVar24 + dVar57 * dVar57 + dVar58 * dVar58;
            uVar23 = -(ulonglong)(0.0 <= dVar66 + -9.99999993922529e-09);
            dVar66 = (double)(~uVar23 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar66)) & uVar23);
            uVar23 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
            dVar70 = (double)(~uVar23 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar70)) & uVar23);
            uVar23 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
            dVar73 = (double)(~uVar23 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar73)) & uVar23);
            auVar30._8_8_ = -(ulonglong)(0.0 <= (double)pppdVar61);
            auVar30._0_8_ = -(ulonglong)(0.0 <= (double)pppdVar59);
            auVar28 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
            dVar51 = (double)(~-(ulonglong)(0.0 <= (double)pppdVar38) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= (double)pppdVar38) & 0x3ff0000000000000);
            dVar49 = auVar28._0_8_;
            local_178._8_8_ = dVar78 * dVar66 * dVar49;
            local_178._0_8_ = dVar63 * dVar66 * dVar49;
            local_168 = (double **)(dVar66 * (double)local_338._0_8_ * dVar49);
            dVar66 = auVar28._8_8_;
            local_148 = (double **)(dVar70 * dVar35 * dVar66);
            local_158._8_8_ = dVar55 * dVar70 * dVar66;
            local_158._0_8_ = dVar66 * dVar37 * dVar70;
            local_138._8_8_ = dVar58 * dVar73 * dVar51;
            local_138._0_8_ = dVar51 * dVar57 * dVar73;
            local_128._8_8_ = dVar46 * 0.0 + dVar54 * 0.0 + dVar60 * 0.0 + 0.0;
            local_128._0_8_ = dVar73 * dVar24 * dVar51;
            local_308 = (double **)pppdVar38;
            ppdStack_300 = (double **)pppdVar45;
            local_2d8 = auVar25;
            local_2b8 = auVar6;
            FUN_14481fd10(&local_248,local_178);
            dVar66 = (double)local_238 * (double)local_238 + (double)local_248 * (double)local_248;
            dVar46 = (double)ppdStack_230 * (double)ppdStack_230 +
                     (double)ppdStack_240 * (double)ppdStack_240;
            auVar48._0_8_ = dVar66 + dVar46;
            auVar48._8_8_ = dVar66 + dVar46;
            auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
            auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
            auVar25 = sqrtpd(auVar48,auVar48);
            auVar81 = divpd(auVar81,auVar25);
            auVar52._0_8_ = auVar81._0_8_ * (double)local_238;
            auVar52._8_8_ = auVar81._8_8_ * (double)ppdStack_230;
            pppdVar67 = (double ***)
                        ((ulonglong)((double)local_248 * auVar81._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
            pppdVar68 = (double ***)
                        ((ulonglong)((double)ppdStack_240 * auVar81._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
            auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar31);
            auVar75._8_8_ = dStack_110;
            auVar75._0_8_ = local_118;
            pppdVar72 = (double ***)0x0;
            pppdVar71 = (double ***)local_108;
          }
        }
        uVar23 = uStack_1e0;
        lVar20 = (longlong)(int)uStack_1e0;
        uVar18 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar18);
        if (uStack_1e0._4_4_ < uVar18) {
          FUN_144a2c682(&local_1e8,uVar23 & 0xffffffff);
        }
        local_1e8[lVar20 * 0xc] = (double **)pppdVar67;
        (local_1e8 + lVar20 * 0xc)[1] = (double **)pppdVar68;
        *(undefined1 (*) [16])(local_1e8 + lVar20 * 0xc + 2) = auVar40;
        *(undefined1 (*) [16])(local_1e8 + lVar20 * 0xc + 4) = auVar75;
        local_1e8[lVar20 * 0xc + 6] = (double **)pppdVar71;
        (local_1e8 + lVar20 * 0xc + 6)[1] = (double **)pppdVar72;
        local_1e8[lVar20 * 0xc + 8] = (double **)pppdVar59;
        (local_1e8 + lVar20 * 0xc + 8)[1] = (double **)pppdVar61;
        local_1e8[lVar20 * 0xc + 10] = (double **)pppdVar38;
        (local_1e8 + lVar20 * 0xc + 10)[1] = (double **)pppdVar45;
        lVar12 = lVar12 + 1;
        ppppdVar16 = (double ****)local_1e8;
      } while (lVar12 < *(int *)(param_3 + 0x10));
    }
  }
  local_248 = *local_1e8;
  ppdStack_240 = local_1e8[1];
  local_238 = local_1e8[2];
  ppdStack_230 = local_1e8[3];
  local_228 = local_1e8[4];
  ppdStack_220 = local_1e8[5];
  local_218 = *(undefined1 (*) [16])(local_1e8 + 6);
  local_1f8._8_8_ = 0;
  local_1f8._0_8_ = DAT_14c846520;
  local_208 = DAT_14c846510;
  dStack_200 = DAT_14c846518;
  iVar14 = *(int *)(param_1 + 0x448);
  if ((longlong)iVar14 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x440);
    local_328._0_8_ = local_2f0 + 0x20;
    lVar20 = 0;
    local_338 = ZEXT816(0x3ff0000000000000) << 0x40;
    ppppdVar16 = (double ****)local_1e8;
    do {
      uVar11 = SUB84(ppppdVar16,0);
      lVar22 = (longlong)*(int *)(lVar12 + lVar20);
      if ((((*(int *)(lVar12 + lVar20) < *(int *)(param_3 + 0x10)) &&
           (lVar19 = (longlong)*(int *)(lVar12 + 4 + lVar20), lVar19 != -1)) &&
          (lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + lVar22 * 8),
          (*(byte *)(lVar3 + 0x20) & 1) == 0)) &&
         ((((9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x60)) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x68)))) ||
           ((9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x70)) ||
            ((9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x48)) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x50)))))))) ||
          (9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x58)))))) {
        if (*(char *)(*(longlong *)(local_2f0 + 0x38) + lVar19) == '\0') {
          uVar11 = local_328._0_4_;
          FUN_1447d5d8e();
        }
        if ((char)local_33c == '\0') {
          uVar11 = *(undefined4 *)(lVar12 + 4 + lVar20);
          pppdVar71 = (double ***)local_1e8[lVar22 * 0xc];
          pppdVar72 = (double ***)(local_1e8 + lVar22 * 0xc)[1];
          pppdVar59 = (double ***)local_1e8[lVar22 * 0xc + 2];
          pppdVar61 = (double ***)(local_1e8 + lVar22 * 0xc + 2)[1];
          auVar25 = *(undefined1 (*) [16])(local_1e8 + lVar22 * 0xc + 4);
          pppdVar38 = (double ***)local_1e8[lVar22 * 0xc + 6];
          pppdVar45 = (double ***)(local_1e8 + lVar22 * 0xc + 6)[1];
          auVar81 = *(undefined1 (*) [16])(local_1e8 + lVar22 * 0xc + 8);
          auVar76 = *(undefined1 (*) [16])(local_1e8 + lVar22 * 0xc + 10);
        }
        else {
          local_2a8 = local_1e8[lVar22 * 0xc];
          ppdStack_2a0 = (local_1e8 + lVar22 * 0xc)[1];
          local_298 = local_1e8[lVar22 * 0xc + 2];
          ppdStack_290 = (local_1e8 + lVar22 * 0xc + 2)[1];
          local_288 = local_1e8[lVar22 * 0xc + 4];
          ppdStack_280 = (local_1e8 + lVar22 * 0xc + 4)[1];
          local_278 = local_1e8[lVar22 * 0xc + 6];
          ppdStack_270 = (local_1e8 + lVar22 * 0xc + 6)[1];
          local_268._8_8_ = DAT_14c846518;
          local_268._0_8_ = DAT_14c846510;
          local_258._8_8_ = 0;
          local_258._0_8_ = DAT_14c846520;
          local_178 = ZEXT816(0);
          local_168 = (double **)local_338._0_8_;
          ppdStack_160 = (double **)local_338._8_8_;
          local_148 = (double **)0x0;
          ppdStack_140 = (double **)0x0;
          local_158 = ZEXT816(0);
          local_138._8_8_ = 0x3ff0000000000000;
          local_138._0_8_ = 0x3ff0000000000000;
          dVar66 = (double)local_238 * (double)local_238 + (double)local_248 * (double)local_248;
          dVar46 = (double)ppdStack_230 * (double)ppdStack_230 +
                   (double)ppdStack_240 * (double)ppdStack_240;
          local_128 = ZEXT816(0x3ff0000000000000);
          auVar53._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar66 + dVar46)));
          auVar53._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar66 + dVar46)));
          iVar15 = movmskpd(uVar11,auVar53);
          if (iVar15 == 0) {
            auVar4._8_8_ = dStack_200;
            auVar4._0_8_ = local_208;
            auVar25 = minpd(local_268,auVar4);
            auVar81 = minpd(local_258,local_1f8);
            auVar43._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
            auVar43._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
            iVar15 = movmskpd((int)local_1e8,auVar43);
            auVar33._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
            auVar33._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
            uVar18 = movmskpd(0,auVar33);
            if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c8460b0) &&
                 (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
                DAT_14c8460a0 = 0x322bcc77322bcc77;
                DAT_14c8460a8 = 0x322bcc77322bcc77;
                _Init_thread_footer(&DAT_14c8460b0);
              }
              auVar5._8_8_ = dStack_200;
              auVar5._0_8_ = local_208;
              auVar81 = divpd(_DAT_149934d80,auVar5);
              auVar25 = divpd(ZEXT816(0x3ff0000000000000),local_1f8);
              dVar66 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(local_208)) &
                               auVar81._0_8_);
              dVar46 = (double)(-(ulonglong)
                                 ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                 ABS(dStack_200)) & auVar81._8_8_);
              dVar51 = (double)(-(ulonglong)((double)(float)DAT_14c8460a8 < ABS(local_1f8._0_8_)) &
                               auVar25._0_8_);
              dVar58 = (double)local_288 - (double)local_228;
              dVar60 = (double)ppdStack_280 - (double)ppdStack_220;
              dVar57 = (double)local_278 - (double)local_218._0_8_;
              dVar24 = -(double)local_248;
              dVar49 = -(double)ppdStack_240;
              dVar70 = (double)local_238 * -1.0;
              dVar73 = (double)ppdStack_230 * 1.0;
              dVar34 = dVar60 * dVar24 - dVar58 * dVar49;
              dVar35 = dVar57 * dVar49 - dVar60 * dVar70;
              dVar64 = dVar58 * dVar70 - dVar57 * dVar24;
              dVar56 = dVar73 * 0.0 - dVar73 * 0.0;
              dVar35 = dVar35 + dVar35;
              dVar64 = dVar64 + dVar64;
              dVar34 = dVar34 + dVar34;
              dVar56 = dVar56 + dVar56;
              local_138._0_8_ = (double)local_268._0_8_ * dVar66;
              local_138._8_8_ = (double)local_268._8_8_ * dVar46;
              local_158._0_8_ =
                   ((dVar34 * dVar49 - dVar70 * dVar64) + dVar73 * dVar35 + dVar58) * dVar66;
              local_158._8_8_ =
                   ((dVar35 * dVar70 - dVar34 * dVar24) + dVar73 * dVar64 + dVar60) * dVar46;
              local_128._8_8_ = (double)local_258._8_8_ * 0.0;
              local_128._0_8_ = (double)local_258._0_8_ * dVar51;
              local_148 = (double **)
                          (((dVar64 * dVar24 - dVar49 * dVar35) + dVar73 * dVar34 + dVar57) * dVar51
                          );
              ppdStack_140 = (double **)
                             (((dVar56 * dVar73 - dVar56 * dVar73) + dVar73 * dVar56 + 0.0) * 0.0);
              local_178._8_8_ =
                   (double)local_2a8 * dVar70 * 1.0 +
                   (((double)ppdStack_2a0 * dVar73 - (double)local_248 * (double)local_298 * -1.0) -
                   (double)ppdStack_290 * (double)ppdStack_240);
              local_178._0_8_ =
                   (double)ppdStack_2a0 * dVar70 * -1.0 +
                   (((double)local_2a8 * dVar73 - (double)local_248 * (double)ppdStack_290 * 1.0) -
                   (double)local_298 * (double)ppdStack_240);
              pppdVar59 = (double ***)
                          ((double)ppdStack_290 * dVar70 * 1.0 +
                          (double)ppdStack_240 * (double)local_2a8 +
                          (dVar73 * (double)local_298 -
                          (double)local_248 * (double)ppdStack_2a0 * 1.0));
              pppdVar61 = (double ***)
                          ((double)local_298 * dVar70 * -1.0 +
                          (double)ppdStack_240 * (double)ppdStack_2a0 +
                          (dVar73 * (double)ppdStack_290 -
                          (double)local_248 * (double)local_2a8 * -1.0));
            }
            else {
              FUN_1402db8fa(local_178,&local_2a8,&local_248);
              pppdVar59 = (double ***)local_168;
              pppdVar61 = (double ***)ppdStack_160;
            }
            puVar17 = (undefined8 *)local_178;
            auVar25 = local_158;
            pppdVar38 = (double ***)local_148;
            pppdVar45 = (double ***)ppdStack_140;
          }
          else {
            puVar17 = &DAT_14c846480;
            auVar25 = _DAT_14c8464a0;
            pppdVar59 = DAT_14c846490;
            pppdVar61 = DAT_14c846498;
            pppdVar38 = DAT_14c8464b0;
            pppdVar45 = DAT_14c8464b8;
          }
          pppdVar71 = (double ***)*puVar17;
          pppdVar72 = (double ***)puVar17[1];
          auVar81 = *(undefined1 (*) [16])(local_1e8 + lVar22 * 0xc + 8);
          auVar76._8_8_ = 0;
          auVar76._0_8_ = local_1e8[lVar22 * 0xc + 10];
          uVar11 = *(undefined4 *)(lVar12 + 4 + lVar20);
        }
        iVar15 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar15 + 1U) {
          FUN_1400c28ea(param_4,iVar15);
        }
        lVar22 = *param_4;
        ppppdVar16 = (double ****)((longlong)iVar15 * 0x70);
        *(undefined4 *)(lVar22 + (longlong)ppppdVar16) = uVar11;
        puVar17 = (undefined8 *)(lVar22 + 0x10 + (longlong)ppppdVar16);
        *puVar17 = pppdVar71;
        puVar17[1] = pppdVar72;
        puVar17 = (undefined8 *)(lVar22 + 0x20 + (longlong)ppppdVar16);
        *puVar17 = pppdVar59;
        puVar17[1] = pppdVar61;
        *(undefined1 (*) [16])(lVar22 + 0x30 + (longlong)ppppdVar16) = auVar25;
        puVar17 = (undefined8 *)(lVar22 + 0x40 + (longlong)ppppdVar16);
        *puVar17 = pppdVar38;
        puVar17[1] = pppdVar45;
        *(undefined1 (*) [16])(lVar22 + 0x50 + (longlong)ppppdVar16) = auVar81;
        *(undefined1 (*) [16])(lVar22 + 0x60 + (longlong)ppppdVar16) = auVar76;
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)iVar14 * 8 != lVar20);
  }
  if ((double ****)local_1e8 != (double ****)0x0) {
    FUN_1400020a8();
  }
LAB_142b58d18:
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b59010 FUN_142b59010 body=1878 status=ok
// SIG undefined FUN_142b59010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_142b59010(double *param_1,char param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      FUN_1449437a2(param_3,param_1,param_5);
    }
    else {
      for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
        *param_1 = *param_3;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
  }
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  auVar47 = _DAT_149934d80;
  auVar38 = *(undefined1 (*) [16])(param_4 + 8);
  dVar7 = auVar38._0_8_;
  dVar16 = auVar38._8_8_;
  auVar46 = *(undefined1 (*) [16])(param_4 + 10);
  dVar8 = auVar46._0_8_;
  dVar15 = auVar46._8_8_;
  auVar41 = *(undefined1 (*) [16])(param_3 + 8);
  dVar9 = auVar41._0_8_;
  dVar37 = auVar41._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_3 + 10);
  dVar10 = auVar5._0_8_;
  auVar38 = minpd(auVar41,auVar38);
  auVar41 = minpd(auVar5,auVar46);
  auVar46._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar46._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  iVar30 = movmskpd((int)local_c0,auVar46);
  auVar38._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
  auVar38._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
  uVar31 = movmskpd((int)param_1,auVar38);
  if ((uVar31 & 0x3fffffff) == 0 && iVar30 == 0) {
    dVar22 = *param_3;
    dVar23 = param_3[1];
    dVar24 = param_3[2];
    dVar25 = param_3[3];
    dVar26 = *param_4;
    dVar27 = param_4[1];
    dVar28 = param_4[2];
    dVar29 = param_4[3];
    dVar1 = param_4[3];
    dVar36 = param_4[3];
    dVar2 = *param_4;
    dVar3 = *param_4;
    dVar4 = param_4[1];
    dVar42 = param_4[1];
    dVar40 = param_4[2];
    dVar43 = param_4[2];
    dVar17 = param_3[4] * dVar7;
    dVar45 = param_3[5] * dVar16;
    dVar18 = param_3[6] * dVar8;
    dVar19 = param_3[7] * dVar15;
    dVar12 = dVar45 * dVar26 - dVar27 * dVar17;
    dVar13 = dVar18 * dVar27 - dVar28 * dVar45;
    dVar20 = dVar17 * dVar28 - dVar26 * dVar18;
    dVar21 = dVar19 * dVar29 - dVar29 * dVar19;
    dVar13 = dVar13 + dVar13;
    dVar20 = dVar20 + dVar20;
    dVar12 = dVar12 + dVar12;
    dVar21 = dVar21 + dVar21;
    dVar44 = param_4[4];
    dVar14 = (dVar13 * dVar28 - dVar12 * dVar26) + dVar36 * dVar20 + dVar45 + param_4[5];
    dVar45 = param_4[6];
    dVar6 = param_4[7];
    *param_1 = dVar23 * dVar40 * -1.0 + dVar24 * dVar4 + dVar25 * dVar2 * 1.0 + dVar22 * dVar1;
    param_1[1] = dVar22 * dVar43 * 1.0 + dVar25 * dVar42 + dVar24 * dVar3 * -1.0 + dVar23 * dVar36;
    param_1[2] = dVar25 * dVar40 * 1.0 + ((dVar2 * dVar23 * 1.0 + dVar24 * dVar1) - dVar22 * dVar4);
    param_1[3] = dVar24 * dVar43 * -1.0 +
                 ((dVar3 * dVar22 * -1.0 + dVar25 * dVar36) - dVar23 * dVar42);
    auVar11._8_4_ = SUB84(dVar14,0);
    auVar11._0_8_ = (dVar12 * dVar27 - dVar28 * dVar20) + dVar1 * dVar13 + dVar17 + dVar44;
    auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 4) = auVar11;
    param_1[6] = (dVar20 * dVar26 - dVar27 * dVar13) + dVar1 * dVar12 + dVar18 + dVar45;
    param_1[7] = (dVar21 * dVar29 - dVar21 * dVar29) + dVar36 * dVar21 + dVar19 + dVar6;
    param_1[8] = dVar9 * dVar7;
    param_1[9] = dVar37 * dVar16;
    param_1[10] = dVar10 * dVar8;
    param_1[0xb] = auVar5._8_8_ * dVar15;
  }
  else {
    dVar3 = *param_4;
    dVar4 = param_4[1];
    dVar42 = param_4[2];
    dVar40 = dVar4 + dVar4;
    dVar43 = dVar42 + dVar42;
    dVar1 = dVar3 * (dVar3 + dVar3);
    local_178 = (1.0 - (dVar1 + dVar4 * dVar40)) * dVar8;
    dVar36 = param_4[3];
    dVar44 = dVar43 * dVar36;
    dVar45 = (dVar3 + dVar3) * param_4[3];
    dVar36 = dVar40 * dVar36;
    local_188 = (dVar36 + *param_4 * dVar43) * dVar8;
    dVar15 = dVar15 * auVar5._8_8_;
    dVar1 = (DAT_149934d80._8_8_ - (dVar42 * dVar43 + dVar1)) * dVar16;
    dVar2 = (dVar40 * dVar3 + dVar44) * dVar7;
    local_198 = (dVar43 * dVar4 + dVar45) * dVar16;
    dStack_180 = (dVar43 * dVar4 - dVar45) * dVar8;
    local_1b8 = (*param_4 * dVar43 - dVar36) * dVar7;
    local_1c8._8_4_ = SUB84(dVar2,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar42 * dVar43 + dVar4 * dVar40)) * dVar7;
    local_1c8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar1,0);
    local_1a8._0_8_ = (dVar40 * dVar3 - dVar44) * dVar16;
    local_1a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_4[4];
    dStack_160 = param_4[5];
    local_158 = param_4[6];
    uStack_150 = 0x3ff0000000000000;
    dVar2 = *param_3;
    dVar3 = param_3[1];
    dVar4 = param_3[2];
    dVar42 = dVar3 + dVar3;
    dVar40 = dVar4 + dVar4;
    dVar1 = dVar2 * (dVar2 + dVar2);
    local_1f8 = (1.0 - (dVar1 + dVar3 * dVar42)) * dVar10;
    dVar36 = param_3[3];
    dVar43 = dVar40 * dVar36;
    dVar44 = (dVar2 + dVar2) * param_3[3];
    dVar36 = dVar42 * dVar36;
    local_208 = (dVar36 + *param_3 * dVar40) * dVar10;
    dStack_200 = (dVar40 * dVar3 - dVar44) * dVar10;
    dVar16 = dVar16 * dVar37;
    local_248 = ((double)DAT_149934d80 - (dVar4 * dVar40 + dVar3 * dVar42)) * dVar9;
    dVar1 = (DAT_149934d80._8_8_ - (dVar4 * dVar40 + dVar1)) * dVar37;
    dStack_240 = (dVar42 * dVar2 + dVar43) * dVar9;
    local_218 = (dVar40 * dVar3 + dVar44) * dVar37;
    local_238 = (*param_3 * dVar40 - dVar36) * dVar9;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar1,0);
    local_228._0_8_ = (dVar42 * dVar2 - dVar43) * dVar37;
    local_228._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar16);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
    auVar38 = blendvpd(_DAT_149936790,auVar47,auVar34);
    uVar33 = -(ulonglong)(0.0 <= dVar8 * dVar10);
    dVar37 = (double)(~uVar33 & 0xbff0000000000000 | uVar33 & 0x3ff0000000000000);
    dVar36 = auVar38._0_8_;
    local_138 = local_138 * dVar36;
    local_140 = local_140 * dVar36;
    local_148 = local_148 * dVar36;
    dVar36 = auVar38._8_8_;
    local_118 = local_118 * dVar36;
    local_120 = local_120 * dVar36;
    local_128 = dVar36 * local_128;
    local_f8 = local_f8 * dVar37;
    local_100 = local_100 * dVar37;
    local_108 = dVar37 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar37 = local_258 * local_258 + local_268 * local_268;
    dVar36 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar39._0_8_ = dVar37 + dVar36;
    auVar39._8_8_ = dVar37 + dVar36;
    auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
    auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
    auVar38 = sqrtpd(auVar39,auVar39);
    auVar46 = divpd(auVar47,auVar38);
    auVar47._0_8_ = auVar46._0_8_ * local_258;
    auVar47._8_8_ = auVar46._8_8_ * dStack_250;
    auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar35);
    auVar5._8_4_ = SUB84(dVar16,0);
    auVar5._0_8_ = dVar7 * dVar9;
    auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 8) = auVar5;
    auVar41._8_4_ = SUB84(dVar15,0);
    auVar41._0_8_ = dVar8 * dVar10;
    auVar41._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 10) = auVar41;
    *param_1 = (double)((ulonglong)(local_268 * auVar46._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
    param_1[1] = (double)((ulonglong)(dStack_260 * auVar46._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar38;
    param_1[4] = local_e8;
    param_1[5] = dStack_e0;
    param_1[6] = local_d8;
    param_1[7] = 0.0;
  }
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5976c FUN_142b5976c body=7474 status=ok
// SIG undefined FUN_142b5976c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5976c(longlong param_1,longlong *param_2,longlong param_3,float param_4,char param_5,
                  char param_6)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined7 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  double *pdVar19;
  void *pvVar20;
  longlong lVar21;
  double *pdVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  void **ppvVar25;
  double *pdVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  double *pdVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar57;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  double dVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  float fVar75;
  double dVar76;
  undefined1 auVar77 [16];
  double dVar78;
  undefined1 auVar79 [16];
  double dVar80;
  double dVar81;
  undefined1 auVar82 [16];
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar88;
  undefined1 auVar86 [16];
  double dVar89;
  undefined1 auVar87 [16];
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar98;
  double dVar99;
  double dVar100;
  double dVar101;
  double dVar102;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8;
  undefined8 local_398;
  longlong *local_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  longlong local_368;
  float local_35c;
  double local_358;
  double dStack_350;
  ulonglong local_348;
  double *local_340;
  double *local_338;
  longlong local_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8 [2];
  double local_2c8 [2];
  void *local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8 [12];
  void *local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  ulonglong uStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  longlong local_1e8;
  undefined8 uStack_1e0;
  double local_1d8 [4];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  ulonglong local_198;
  ulonglong uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  auVar38 = _DAT_149931180;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if ((((param_4 <= 1e-05) || (lVar27 = *(longlong *)(param_1 + 0x3f0), lVar27 == 0)) ||
      (*(int *)(lVar27 + 0x10) < 1)) || (dVar46 = **(double **)(lVar27 + 8), dVar46 == 0.0))
  goto LAB_142b5b2ea;
  local_35c = param_4;
  if (((param_5 == '\x01') && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
     ((*(char *)(param_1 + 0x360) == '\x01' && ((longlong)*(int *)(param_1 + 0x448) != 0)))) {
    local_1a8 = *(undefined1 (*) [16])(param_1 + 0x330);
    local_1b8 = *(undefined1 (*) [16])(param_1 + 800);
    local_1d8[2] = *(double *)(param_1 + 0x310);
    local_1d8[3] = *(double *)(param_1 + 0x318);
    local_1d8[0] = *(double *)(param_1 + 0x300);
    local_1d8[1] = *(double *)(param_1 + 0x308);
    local_188._8_8_ = 0;
    local_188._0_8_ = *(ulonglong *)(param_1 + 0x1c0);
    local_198 = *(ulonglong *)(param_1 + 0x1b0);
    uStack_190 = *(ulonglong *)(param_1 + 0x1b8);
    local_1e8 = 0;
    uStack_1e0 = 0;
    lVar27 = *(longlong *)(param_1 + 0x440);
    plVar18 = param_2 + 4;
    lVar28 = (longlong)*(int *)(param_1 + 0x448) << 3;
    lVar29 = 0;
    local_378 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_388._0_8_ = lVar27;
    auVar49 = _DAT_149934d80;
    local_368 = param_3;
    local_358 = dVar46;
    do {
      puVar24 = &DAT_14c846480;
      if ((*(int *)(lVar27 + lVar29) < *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x10)) &&
         (lVar17 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 8) +
                    (longlong)*(int *)(lVar27 + lVar29) * 8), lVar17 != 0)) {
        iVar9 = *(int *)(lVar27 + 4 + lVar29);
        lVar11 = param_2[7];
        if (*(char *)(lVar11 + iVar9) == '\0') {
          lVar11 = FUN_1447d5d8e(plVar18,iVar9);
          lVar27 = local_388._0_8_;
        }
        lVar21 = (longlong)iVar9 * 0x60 + *plVar18;
        puVar23 = (undefined8 *)(lVar17 + 0x130);
        ppvVar25 = &local_248;
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *ppvVar25 = (void *)*puVar23;
          puVar23 = puVar23 + 1;
          ppvVar25 = ppvVar25 + 1;
        }
        local_178 = ZEXT816(0);
        local_168 = (double)local_378._0_8_;
        dStack_160 = (double)local_378._8_8_;
        local_148 = 0.0;
        dStack_140 = 0.0;
        local_158 = ZEXT816(0);
        local_138 = auVar49;
        local_128 = ZEXT816(0x3ff0000000000000);
        dVar46 = local_1d8[2] * local_1d8[2] + local_1d8[0] * local_1d8[0];
        dVar57 = local_1d8[3] * local_1d8[3] + local_1d8[1] * local_1d8[1];
        uVar31 = auVar38._0_8_;
        uVar32 = auVar38._8_8_;
        auVar33._8_8_ =
             -(ulonglong)
              (0.009999999776482582 <
              (double)((ulonglong)(auVar49._8_8_ - (dVar46 + dVar57)) & uVar32));
        auVar33._0_8_ =
             -(ulonglong)
              (0.009999999776482582 <
              (double)((ulonglong)(auVar49._0_8_ - (dVar46 + dVar57)) & uVar31));
        iVar9 = movmskpd((int)lVar11,auVar33);
        if (iVar9 == 0) {
          auVar47._8_8_ = uStack_190;
          auVar47._0_8_ = local_198;
          auVar33 = minpd(local_208,auVar47);
          auVar47 = minpd(local_1f8,local_188);
          auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
          auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
          iVar9 = movmskpd(0,auVar34);
          auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
          auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
          uVar13 = movmskpd(0,auVar48);
          if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
            {
              DAT_14c8460a0 = 0x322bcc77322bcc77;
              DAT_14c8460a8 = 0x322bcc77322bcc77;
              _Init_thread_footer(&DAT_14c8460b0);
            }
            auVar6._8_8_ = uStack_190;
            auVar6._0_8_ = local_198;
            auVar49 = divpd(auVar49,auVar6);
            auVar33 = divpd(ZEXT816(0x3ff0000000000000),local_188);
            dVar46 = (double)(-(ulonglong)
                               ((double)(float)DAT_14c8460a0 < (double)(local_198 & uVar31)) &
                             auVar49._0_8_);
            dVar57 = (double)(-(ulonglong)
                               ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                               (double)(uStack_190 & uVar32)) & auVar49._8_8_);
            dVar69 = (double)(-(ulonglong)
                               ((double)(float)DAT_14c8460a8 < (double)(local_188._0_8_ & uVar31)) &
                             auVar33._0_8_);
            dVar99 = local_228 - (double)local_1b8._0_8_;
            dVar101 = dStack_220 - (double)local_1b8._8_8_;
            dVar64 = local_218 - (double)local_1a8._0_8_;
            dVar85 = -local_1d8[0];
            dVar88 = -local_1d8[1];
            dVar92 = local_1d8[2] * -1.0;
            dVar93 = local_1d8[3] * 1.0;
            dVar58 = dVar101 * dVar85 - dVar99 * dVar88;
            dVar63 = dVar64 * dVar88 - dVar101 * dVar92;
            dVar97 = dVar99 * dVar92 - dVar64 * dVar85;
            dVar98 = dVar93 * 0.0 - dVar93 * 0.0;
            dVar63 = dVar63 + dVar63;
            dVar97 = dVar97 + dVar97;
            dVar58 = dVar58 + dVar58;
            dVar98 = dVar98 + dVar98;
            local_128._0_8_ = (double)local_1f8._0_8_ * dVar69;
            local_128._8_8_ = (double)local_1f8._8_8_ * 0.0;
            local_138._8_8_ = (double)local_208._8_8_ * dVar57;
            local_138._0_8_ = (double)local_208._0_8_ * dVar46;
            local_158._8_8_ =
                 ((dVar63 * dVar92 - dVar58 * dVar85) + dVar93 * dVar97 + dVar101) * dVar57;
            local_158._0_8_ =
                 ((dVar58 * dVar88 - dVar92 * dVar97) + dVar93 * dVar63 + dVar99) * dVar46;
            local_148 = ((dVar97 * dVar85 - dVar88 * dVar63) + dVar93 * dVar58 + dVar64) * dVar69;
            dStack_140 = ((dVar98 * dVar93 - dVar98 * dVar93) + dVar93 * dVar98 + 0.0) * 0.0;
            local_178._8_8_ =
                 (double)local_248 * dVar92 * 1.0 +
                 ((dStack_240 * dVar93 - local_1d8[0] * local_238 * -1.0) -
                 dStack_230 * local_1d8[1]);
            local_178._0_8_ =
                 dStack_240 * dVar92 * -1.0 +
                 (((double)local_248 * dVar93 - local_1d8[0] * dStack_230 * 1.0) -
                 local_238 * local_1d8[1]);
            local_168 = dStack_230 * dVar92 * 1.0 +
                        local_1d8[1] * (double)local_248 +
                        (dVar93 * local_238 - local_1d8[0] * dStack_240 * 1.0);
            dStack_160 = local_238 * dVar92 * -1.0 +
                         local_1d8[1] * dStack_240 +
                         (dVar93 * dStack_230 - local_1d8[0] * (double)local_248 * -1.0);
            puVar24 = (undefined8 *)local_178;
            auVar49 = _DAT_149934d80;
          }
          else {
            local_398 = lVar28;
            FUN_1402db8fa(local_178,&local_248,local_1d8);
            puVar24 = (undefined8 *)local_178;
            lVar28 = local_398;
          }
        }
        puVar23 = local_2a8;
        for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar23 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar23 = puVar23 + 1;
        }
        puVar24 = local_2a8;
        ppvVar25 = &local_248;
        for (lVar17 = 0xc; uVar31 = uStack_1e0, lVar17 != 0; lVar17 = lVar17 + -1) {
          *ppvVar25 = (void *)*puVar24;
          puVar24 = puVar24 + 1;
          ppvVar25 = ppvVar25 + 1;
        }
        local_208 = *(undefined1 (*) [16])(lVar21 + 0x40);
        uVar32 = *(ulonglong *)(lVar21 + 0x50);
        local_1f8._8_8_ = 0;
        local_1f8._0_8_ = uVar32;
        dVar46 = (double)DAT_149931eb0;
        dVar57 = DAT_149931eb0._8_8_;
        auVar59._8_8_ = -(ulonglong)((double)((ulonglong)dStack_240 & 0x7ff0000000000000) == dVar57)
        ;
        auVar59._0_8_ = -(ulonglong)((double)((ulonglong)local_248 & 0x7ff0000000000000) == dVar46);
        iVar9 = movmskpd((int)local_2a8,auVar59);
        auVar65._8_8_ = -(ulonglong)((double)((ulonglong)dStack_230 & 0x7ff0000000000000) == dVar57)
        ;
        auVar65._0_8_ = -(ulonglong)((double)((ulonglong)local_238 & 0x7ff0000000000000) == dVar46);
        uVar13 = movmskpd(0,auVar65);
        if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
          auVar60._8_8_ =
               -(ulonglong)((double)((ulonglong)dStack_220 & 0x7ff0000000000000) == dVar57);
          auVar60._0_8_ =
               -(ulonglong)((double)((ulonglong)local_228 & 0x7ff0000000000000) == dVar46);
          iVar9 = movmskpd(iVar9,auVar60);
          auVar66._8_8_ = -(ulonglong)((double)(uStack_210 & 0x7ff0000000000000) == dVar57);
          auVar66._0_8_ =
               -(ulonglong)((double)((ulonglong)local_218 & 0x7ff0000000000000) == dVar46);
          uVar13 = movmskpd(0,auVar66);
          if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
            auVar50._8_8_ = -(ulonglong)((double)(local_208._8_8_ & 0x7ff0000000000000) == dVar57);
            auVar50._0_8_ = -(ulonglong)((double)(local_208._0_8_ & 0x7ff0000000000000) == dVar46);
            iVar9 = movmskpd(iVar9,auVar50);
            auVar35._8_8_ = -(ulonglong)(dVar57 == 0.0);
            auVar35._0_8_ = -(ulonglong)((double)(uVar32 & 0x7ff0000000000000) == dVar46);
            uVar13 = movmskpd(0,auVar35);
            if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
              lVar17 = (longlong)(int)uStack_1e0;
              uVar13 = (int)uStack_1e0 + 1;
              uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar13);
              if (uStack_1e0._4_4_ < uVar13) {
                FUN_1402e11da(&local_1e8,uVar31 & 0xffffffff);
                lVar27 = local_388._0_8_;
              }
              puVar1 = (undefined4 *)(local_1e8 + lVar17 * 0x70);
              *puVar1 = *(undefined4 *)(lVar27 + 4 + lVar29);
              ppvVar25 = &local_248;
              puVar24 = (undefined8 *)(puVar1 + 4);
              for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
                *puVar24 = *ppvVar25;
                ppvVar25 = ppvVar25 + 1;
                puVar24 = puVar24 + 1;
              }
            }
          }
        }
      }
      lVar29 = lVar29 + 8;
    } while (lVar28 != lVar29);
    dVar46 = local_358;
    param_3 = local_368;
    if ((int)uStack_1e0 != 0) {
      local_178._8_4_ = (int)uStack_1e0;
      local_178._0_8_ = local_1e8;
      FUN_1447d5b6c(plVar18);
      dVar46 = local_358;
      param_3 = local_368;
    }
  }
  uVar12 = (undefined7)((ulonglong)dVar46 >> 8);
  if ((*(byte *)((longlong)dVar46 + 0x20) & 1) == 0) {
    if ((((ABS(*(double *)((longlong)dVar46 + 0x60)) <= 9.99999993922529e-09) &&
         (ABS(*(double *)((longlong)dVar46 + 0x68)) <= 9.99999993922529e-09)) &&
        (ABS(*(double *)((longlong)dVar46 + 0x70)) <= 9.99999993922529e-09)) &&
       ((ABS(*(double *)((longlong)dVar46 + 0x48)) <= 9.99999993922529e-09 &&
        (ABS(*(double *)((longlong)dVar46 + 0x50)) <= 9.99999993922529e-09)))) {
      uVar14 = (undefined4)
               CONCAT71(uVar12,ABS(*(double *)((longlong)dVar46 + 0x58)) <= 9.99999993922529e-09);
      goto LAB_142b59fdb;
    }
    local_398 = (ulonglong)local_398._4_4_ << 0x20;
  }
  else {
    uVar14 = (undefined4)CONCAT71(uVar12,1);
LAB_142b59fdb:
    local_398 = CONCAT44(local_398._4_4_,uVar14);
  }
  uVar4 = *(undefined1 *)(param_3 + 0xec);
  puVar24 = (undefined8 *)(param_1 + 0x460);
  if ((*(int *)(param_1 + 0x468) == 0) || (*(int *)(param_1 + 0x478) == 0)) {
    uVar13 = *(uint *)(param_1 + 0xa0);
    if (uVar13 < 2 && param_5 != '\x02') {
      FUN_142b53cf0(param_1,param_2,*(undefined8 *)(param_1 + 0x3f8),1);
    }
    local_3a8 = uVar4;
    FUN_142b56fa4(param_1,param_2,*(undefined8 *)(param_1 + 0x3f0 + (ulonglong)(uVar13 < 2) * 8),
                  param_1 + 0x470);
    iVar9 = *(int *)(param_1 + 0x478);
    pvVar20 = *(void **)(param_1 + 0x470);
    *(int *)(param_1 + 0x468) = iVar9;
    if (iVar9 == 0 && *(int *)(param_1 + 0x46c) == 0) {
      *(undefined4 *)(param_1 + 0x46c) = 0;
    }
    else {
      FUN_142b5d91a(puVar24,iVar9);
      if (iVar9 != 0) {
        memcpy((void *)*puVar24,pvVar20,(longlong)iVar9 * 0x70);
      }
    }
  }
  local_248 = (void *)0x0;
  dStack_240 = 0.0;
  uVar13 = *(uint *)(param_1 + 0x468);
  lVar27 = (longlong)(int)uVar13;
  if ((lVar27 != 0) && (uVar13 == *(uint *)(param_1 + 0x478))) {
    fVar75 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x14);
    if (1.0 <= fVar75) {
      fVar75 = 1.0;
    }
    if (fVar75 <= 0.0) {
      fVar75 = 0.0;
    }
    if (fVar75 <= 1e-05) {
      pvVar20 = (void *)*puVar24;
      dStack_240 = (double)(ulonglong)uVar13;
      FUN_140117e0e(&local_248,uVar13);
      memcpy(local_248,pvVar20,lVar27 * 0x70);
    }
    else if (0.99999 <= fVar75) {
      pvVar20 = *(void **)(param_1 + 0x470);
      dStack_240 = (double)(ulonglong)uVar13;
      FUN_140117e0e(&local_248,uVar13);
      memcpy(local_248,pvVar20,lVar27 * 0x70);
    }
    else {
      pvVar20 = *(void **)(param_1 + 0x460);
      dStack_240 = (double)(ulonglong)uVar13;
      FUN_140117e0e(&local_248,uVar13);
      memcpy(local_248,pvVar20,lVar27 * 0x70);
      auVar49 = _DAT_149935300;
      auVar38 = _DAT_149934d80;
      if (0 < *(int *)(param_1 + 0x468)) {
        dVar58 = (double)fVar75;
        dVar63 = (double)fVar75;
        dVar97 = (double)DAT_149934d80 - dVar58;
        dVar64 = DAT_149934d80._8_8_ - dVar63;
        lVar27 = 0x60;
        lVar28 = 0;
        dVar46 = (double)DAT_149934d90;
        dVar57 = DAT_149934d90._8_8_;
        do {
          lVar29 = *(longlong *)(param_1 + 0x470);
          pdVar22 = (double *)((longlong)local_248 + lVar27 + -0x30);
          dVar69 = pdVar22[1];
          pdVar30 = (double *)((longlong)local_248 + lVar27 + -0x20);
          dVar85 = *pdVar30;
          dVar88 = pdVar30[1];
          pdVar30 = (double *)(lVar29 + -0x30 + lVar27);
          dVar98 = pdVar30[1];
          pdVar19 = (double *)(lVar29 + -0x20 + lVar27);
          dVar92 = *pdVar19;
          dVar93 = pdVar19[1];
          pdVar19 = (double *)((longlong)local_248 + lVar27 + -0x30);
          *pdVar19 = *pdVar30 * dVar58 + *pdVar22 * dVar97;
          pdVar19[1] = dVar98 * dVar63 + dVar69 * dVar64;
          pdVar22 = (double *)((longlong)local_248 + lVar27 + -0x20);
          *pdVar22 = dVar92 * dVar58 + dVar85 * dVar97;
          pdVar22[1] = dVar93 * dVar63 + dVar88 * dVar64;
          pdVar22 = (double *)((longlong)local_248 + lVar27 + -0x10);
          dVar69 = pdVar22[1];
          dVar85 = *(double *)((longlong)local_248 + lVar27);
          dVar88 = ((double *)((longlong)local_248 + lVar27))[1];
          pdVar30 = (double *)(lVar29 + -0x10 + lVar27);
          dVar98 = pdVar30[1];
          dVar92 = *(double *)(lVar29 + lVar27);
          dVar93 = ((double *)(lVar29 + lVar27))[1];
          pdVar19 = (double *)((longlong)local_248 + lVar27 + -0x10);
          *pdVar19 = *pdVar30 * dVar58 + *pdVar22 * dVar97;
          pdVar19[1] = dVar98 * dVar63 + dVar69 * dVar64;
          *(double *)((longlong)local_248 + lVar27) = dVar92 * dVar58 + dVar85 * dVar97;
          ((double *)((longlong)local_248 + lVar27))[1] = dVar93 * dVar63 + dVar88 * dVar64;
          pdVar22 = (double *)(lVar29 + -0x50 + lVar27);
          dVar69 = *pdVar22;
          dVar85 = pdVar22[1];
          pdVar22 = (double *)(lVar29 + -0x40 + lVar27);
          dVar88 = *pdVar22;
          dVar98 = pdVar22[1];
          auVar33 = *(undefined1 (*) [16])((longlong)local_248 + lVar27 + -0x50);
          auVar47 = *(undefined1 (*) [16])((longlong)local_248 + lVar27 + -0x40);
          dVar92 = dVar88 * auVar47._0_8_ + dVar69 * auVar33._0_8_;
          dVar93 = dVar98 * auVar47._8_8_ + dVar85 * auVar33._8_8_;
          auVar36._8_8_ = -(ulonglong)(0.0 <= dVar92 + dVar93);
          auVar36._0_8_ = -(ulonglong)(0.0 <= dVar92 + dVar93);
          auVar77._0_8_ = 0.0 - auVar33._0_8_;
          auVar77._8_8_ = 0.0 - auVar33._8_8_;
          auVar79._0_8_ = 0.0 - auVar47._0_8_;
          auVar79._8_8_ = 0.0 - auVar47._8_8_;
          auVar33 = blendvpd(auVar77,auVar33,auVar36);
          dVar69 = auVar33._0_8_ * dVar97 + dVar69 * dVar58;
          dVar85 = auVar33._8_8_ * dVar64 + dVar85 * dVar63;
          auVar33 = blendvpd(auVar79,auVar47,auVar36);
          dVar88 = auVar33._0_8_ * dVar97 + dVar88 * dVar58;
          dVar98 = auVar33._8_8_ * dVar64 + dVar98 * dVar63;
          dVar92 = dVar88 * dVar88 + dVar69 * dVar69;
          dVar93 = dVar98 * dVar98 + dVar85 * dVar85;
          auVar82._0_8_ = dVar92 + dVar93;
          auVar82._8_8_ = dVar92 + dVar93;
          uVar31 = -(ulonglong)(dVar46 <= auVar82._0_8_);
          uVar32 = -(ulonglong)(dVar57 <= auVar82._8_8_);
          auVar37._8_8_ = uVar32;
          auVar37._0_8_ = uVar31;
          auVar33 = sqrtpd(auVar82,auVar82);
          auVar47 = divpd(auVar38,auVar33);
          auVar86._0_8_ = auVar47._0_8_ * dVar88;
          auVar86._8_8_ = auVar47._8_8_ * dVar98;
          auVar33 = blendvpd(auVar49,auVar86,auVar37);
          puVar2 = (ulonglong *)((longlong)local_248 + lVar27 + -0x50);
          *puVar2 = (ulonglong)(dVar69 * auVar47._0_8_) & uVar31;
          puVar2[1] = (ulonglong)(dVar85 * auVar47._8_8_) & uVar32;
          *(undefined1 (*) [16])((longlong)local_248 + lVar27 + -0x40) = auVar33;
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 0x70;
        } while (lVar28 < *(int *)(param_1 + 0x468));
      }
    }
    pvVar20 = local_248;
    if ((longlong)dStack_240._0_4_ != 0) {
      plVar18 = param_2 + 4;
      local_330 = (longlong)dStack_240._0_4_ * 0x70;
      uVar31 = (longlong)local_248 + 0x10;
      lVar27 = 0;
      local_338 = (double *)(param_1 + 0x170);
      local_340 = (double *)(param_1 + 0x300);
      local_328 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_390 = plVar18;
      local_368 = param_3;
      local_348 = uVar31;
      do {
        uVar14 = (undefined4)uVar31;
        iVar9 = *(int *)((longlong)pvVar20 + lVar27);
        lVar28 = param_2[7];
        if (*(char *)(lVar28 + iVar9) == '\0') {
          lVar28 = FUN_1447d5d8e(plVar18,iVar9);
          uVar14 = SUB84(plVar18,0);
          plVar18 = local_390;
        }
        iVar10 = (int)lVar28;
        pdVar30 = (double *)((longlong)pvVar20 + lVar27 + 0x10);
        pdVar22 = (double *)((longlong)iVar9 * 0x60 + *plVar18);
        if (param_6 != '\0') {
          pdVar19 = local_338;
          if (*(char *)(param_1 + 0x360) != '\0') {
            pdVar19 = local_340;
          }
          local_178 = ZEXT816(0);
          local_168 = (double)local_328._0_8_;
          dStack_160 = (double)local_328._8_8_;
          local_148 = 0.0;
          dStack_140 = 0.0;
          local_158 = ZEXT816(0);
          local_138 = _DAT_149934d80;
          local_128 = ZEXT816(0x3ff0000000000000);
          dVar46 = pdVar19[2] * pdVar19[2] + *pdVar19 * *pdVar19;
          dVar57 = pdVar19[3] * pdVar19[3] + pdVar19[1] * pdVar19[1];
          auVar38._8_8_ =
               -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar46 + dVar57)));
          auVar38._0_8_ =
               -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar46 + dVar57)));
          iVar10 = movmskpd((int)local_158,auVar38);
          if (iVar10 == 0) {
            auVar38 = minpd(*(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x50),
                            *(undefined1 (*) [16])(pdVar19 + 8));
            auVar33 = minpd(*(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x60),
                            *(undefined1 (*) [16])(pdVar19 + 10));
            auVar49._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
            auVar49._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
            iVar9 = movmskpd(0,auVar49);
            auVar51._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
            auVar51._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
            uVar13 = movmskpd(uVar14,auVar51);
            if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
              iVar10 = DAT_14c8460b0;
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x110) < DAT_14c8460b0) {
                iVar10 = FUN_144b3d300(&DAT_14c8460b0);
                plVar18 = local_390;
                if (DAT_14c8460b0 == -1) {
                  DAT_14c8460a0 = 0x322bcc77322bcc77;
                  DAT_14c8460a8 = 0x322bcc77322bcc77;
                  iVar10 = _Init_thread_footer(&DAT_14c8460b0);
                  plVar18 = local_390;
                }
              }
              auVar38 = *(undefined1 (*) [16])(pdVar19 + 8);
              auVar49 = divpd(_DAT_149934d80,auVar38);
              auVar33 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar19 + 10));
              dVar46 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar38._0_8_)) &
                               auVar49._0_8_);
              dVar57 = (double)(-(ulonglong)
                                 ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                 ABS(auVar38._8_8_)) & auVar49._8_8_);
              dVar93 = (double)(-(ulonglong)
                                 ((double)(float)DAT_14c8460a8 <
                                 ABS(SUB168(*(undefined1 (*) [16])(pdVar19 + 10),0))) &
                               auVar33._0_8_);
              pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x30);
              dVar80 = *pdVar26 - pdVar19[4];
              dVar83 = pdVar26[1] - pdVar19[5];
              dVar90 = *(double *)((longlong)pvVar20 + lVar27 + 0x40) - pdVar19[6];
              dVar99 = -*pdVar19;
              dVar101 = -pdVar19[1];
              dVar69 = pdVar19[2] * -1.0;
              dVar85 = pdVar19[3] * 1.0;
              dVar88 = dVar83 * dVar99 - dVar80 * dVar101;
              dVar98 = dVar90 * dVar101 - dVar83 * dVar69;
              dVar92 = dVar80 * dVar69 - dVar90 * dVar99;
              dVar96 = dVar85 * 0.0 - dVar85 * 0.0;
              dVar98 = dVar98 + dVar98;
              dVar92 = dVar92 + dVar92;
              dVar88 = dVar88 + dVar88;
              dVar96 = dVar96 + dVar96;
              pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x50);
              local_138._0_8_ = *pdVar26 * dVar46;
              local_138._8_8_ = pdVar26[1] * dVar57;
              pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x60);
              local_128._0_8_ = *pdVar26 * dVar93;
              local_128._8_8_ = pdVar26[1] * 0.0;
              pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x10);
              dVar58 = *pdVar26;
              dVar63 = pdVar26[1];
              pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x20);
              dVar97 = *pdVar26;
              dVar64 = pdVar26[1];
              local_158._0_8_ =
                   ((dVar88 * dVar101 - dVar69 * dVar92) + dVar85 * dVar98 + dVar80) * dVar46;
              local_158._8_8_ =
                   ((dVar98 * dVar69 - dVar88 * dVar99) + dVar85 * dVar92 + dVar83) * dVar57;
              dVar57 = pdVar19[1];
              dVar46 = pdVar19[1];
              local_178._0_8_ =
                   dVar63 * dVar69 * -1.0 +
                   ((dVar58 * dVar85 - *pdVar19 * dVar64 * 1.0) - dVar97 * dVar57);
              local_178._8_8_ =
                   dVar58 * dVar69 * 1.0 +
                   ((dVar63 * dVar85 - *pdVar19 * dVar97 * -1.0) - dVar64 * dVar46);
              local_148 = ((dVar92 * dVar99 - dVar101 * dVar98) + dVar85 * dVar88 + dVar90) * dVar93
              ;
              dStack_140 = ((dVar96 * dVar85 - dVar96 * dVar85) + dVar85 * dVar96 + 0.0) * 0.0;
              local_168 = dVar64 * dVar69 * 1.0 +
                          dVar57 * dVar58 + (dVar85 * dVar97 - *pdVar19 * dVar63 * 1.0);
              dStack_160 = dVar97 * dVar69 * -1.0 +
                           dVar46 * dVar63 + (dVar85 * dVar64 - *pdVar19 * dVar58 * -1.0);
            }
            else {
              iVar10 = FUN_1402db8fa(local_178,local_348 + lVar27,pdVar19);
              plVar18 = local_390;
            }
            lVar28 = 0xc;
            pdVar26 = (double *)local_178;
            pdVar19 = local_1d8;
          }
          else {
            lVar28 = 0xc;
            pdVar19 = local_1d8;
            pdVar26 = (double *)&DAT_14c846480;
          }
          for (; lVar28 != 0; lVar28 = lVar28 + -1) {
            *pdVar19 = *pdVar26;
            pdVar26 = pdVar26 + 1;
            pdVar19 = pdVar19 + 1;
          }
          pdVar19 = local_1d8;
          pdVar26 = pdVar30;
          for (lVar28 = 0xc; uVar14 = 0, lVar28 != 0; lVar28 = lVar28 + -1) {
            *pdVar26 = *pdVar19;
            pdVar19 = pdVar19 + 1;
            pdVar26 = pdVar26 + 1;
          }
        }
        pdVar19 = local_1d8;
        if ((char)local_398 == '\0') {
          pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x10);
          dVar46 = *pdVar19;
          dVar57 = pdVar19[1];
          auVar71 = *(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x20);
        }
        else {
          auVar38 = *(undefined1 (*) [16])(param_1 + 0x150);
          dVar58 = auVar38._0_8_;
          dVar64 = auVar38._8_8_;
          local_378 = *(undefined1 (*) [16])(param_1 + 0x160);
          dVar63 = local_378._0_8_;
          dVar69 = local_378._8_8_;
          local_388 = *(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x50);
          auVar49 = *(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x60);
          dVar97 = auVar49._0_8_;
          auVar38 = minpd(local_388,auVar38);
          auVar33 = minpd(auVar49,local_378);
          auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
          auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
          iVar10 = movmskpd(iVar10,auVar39);
          auVar52._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
          auVar52._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
          uVar13 = movmskpd(uVar14,auVar52);
          uVar7 = local_388._0_8_;
          uVar8 = local_388._8_8_;
          if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
            pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x10);
            dVar83 = *pdVar19;
            dVar90 = pdVar19[1];
            pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x20);
            dVar96 = *pdVar19;
            dVar70 = pdVar19[1];
            dVar73 = *(double *)(param_1 + 0x110);
            dVar76 = *(double *)(param_1 + 0x118);
            dVar78 = *(double *)(param_1 + 0x120);
            dVar100 = *(double *)(param_1 + 0x128);
            dVar88 = *(double *)(param_1 + 0x128);
            dVar85 = *(double *)(param_1 + 0x128);
            dVar92 = *(double *)(param_1 + 0x110);
            dVar98 = *(double *)(param_1 + 0x110);
            dVar99 = *(double *)(param_1 + 0x118);
            dVar93 = *(double *)(param_1 + 0x118);
            dVar101 = *(double *)(param_1 + 0x120);
            dVar80 = *(double *)(param_1 + 0x120);
            dVar46 = dVar90 * dVar101 * -1.0 +
                     dVar96 * dVar99 + dVar70 * dVar92 * 1.0 + dVar83 * dVar88;
            dVar57 = dVar83 * dVar80 * 1.0 +
                     dVar70 * dVar93 + dVar96 * dVar98 * -1.0 + dVar90 * dVar85;
            auVar71._0_8_ =
                 dVar70 * dVar101 * 1.0 +
                 ((dVar92 * dVar90 * 1.0 + dVar96 * dVar88) - dVar83 * dVar99);
            auVar71._8_8_ =
                 dVar96 * dVar80 * -1.0 +
                 ((dVar98 * dVar83 * -1.0 + dVar70 * dVar85) - dVar90 * dVar93);
            pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x30);
            dVar98 = *pdVar19 * dVar58;
            dVar92 = pdVar19[1] * dVar64;
            pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x40);
            dVar83 = *pdVar19 * dVar63;
            dVar90 = pdVar19[1] * dVar69;
            dVar101 = dVar92 * dVar73 - dVar76 * dVar98;
            dVar80 = dVar83 * dVar76 - dVar78 * dVar92;
            dVar93 = dVar98 * dVar78 - dVar73 * dVar83;
            dVar99 = dVar90 * dVar100 - dVar100 * dVar90;
            dVar80 = dVar80 + dVar80;
            dVar93 = dVar93 + dVar93;
            dVar101 = dVar101 + dVar101;
            dVar99 = dVar99 + dVar99;
            dVar98 = (dVar101 * dVar76 - dVar78 * dVar93) + dVar88 * dVar80 + dVar98 +
                     *(double *)(param_1 + 0x130);
            dVar92 = (dVar80 * dVar78 - dVar101 * dVar73) + dVar85 * dVar93 + dVar92 +
                     *(double *)(param_1 + 0x138);
            dVar88 = (dVar93 * dVar73 - dVar76 * dVar80) + dVar88 * dVar101 + dVar83 +
                     *(double *)(param_1 + 0x140);
            dVar85 = (dVar99 * dVar100 - dVar99 * dVar100) + dVar85 * dVar99 + dVar90 +
                     *(double *)(param_1 + 0x148);
            auVar87._8_8_ = auVar49._8_8_ * dVar69;
            auVar87._0_8_ = dVar97 * dVar63;
            uVar14 = 0;
          }
          else {
            dVar85 = *(double *)(param_1 + 0x110);
            dVar88 = *(double *)(param_1 + 0x118);
            dVar46 = *(double *)(param_1 + 0x120);
            dVar99 = dVar88 + dVar88;
            dVar101 = dVar46 + dVar46;
            dVar57 = dVar85 * (dVar85 + dVar85);
            dVar98 = dVar88 * dVar99;
            local_2f8 = 1.0 - (dVar57 + dVar98);
            dStack_2f0 = 0.0 - (dVar57 + dVar98);
            local_358 = (1.0 - (dVar46 * dVar101 + dVar98)) * dVar58;
            dVar89 = (1.0 - (dVar46 * dVar101 + dVar57)) * dVar64;
            dVar91 = *(double *)(param_1 + 0x110) * dVar101;
            dVar46 = *(double *)(param_1 + 0x128);
            dVar80 = dVar101 * dVar46;
            dVar83 = (dVar85 + dVar85) * *(double *)(param_1 + 0x128);
            dVar46 = dVar99 * dVar46;
            dVar70 = (dVar46 + dVar91) * dVar63;
            dVar90 = (dVar99 * dVar85 - dVar80) * dVar64;
            dVar96 = (dVar101 * dVar88 - dVar83) * dVar63;
            pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x10);
            dVar98 = *pdVar26;
            dVar92 = pdVar26[1];
            dVar93 = *(double *)((longlong)pvVar20 + lVar27 + 0x20);
            dVar73 = dVar92 + dVar92;
            dVar95 = dVar93 + dVar93;
            local_308 = dVar98 * (dVar98 + dVar98);
            dStack_300 = dVar92 * dVar73;
            pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x28);
            dVar57 = *pdVar26;
            dVar100 = dVar95 * dVar57;
            dVar102 = (dVar98 + dVar98) * *pdVar26;
            dVar76 = (dVar73 * dVar98 - dVar100) * (double)local_388._8_8_;
            dVar78 = (dVar95 * dVar92 - dVar102) * dVar97;
            dStack_350 = (dVar99 * dVar85 + dVar80) * dVar58;
            dVar94 = (dVar101 * dVar88 + dVar83) * dVar64;
            dVar81 = (1.0 - (dVar93 * dVar95 + dStack_300)) * (double)local_388._0_8_;
            dVar84 = (1.0 - (dVar93 * dVar95 + local_308)) * (double)local_388._8_8_;
            dVar83 = (dVar73 * dVar98 + dVar100) * (double)local_388._0_8_;
            dVar100 = (dVar95 * dVar92 + dVar102) * (double)local_388._8_8_;
            dVar91 = (dVar91 - dVar46) * dVar58;
            dVar73 = dVar73 * dVar57;
            local_2e8 = dVar58 * (double)local_388._0_8_;
            dStack_2e0 = dVar64 * (double)local_388._8_8_;
            dVar101 = (dVar95 * dVar98 - dVar73) * (double)local_388._0_8_;
            dVar80 = local_2f8 * dVar63;
            local_378._8_8_ = dVar69 * auVar49._8_8_;
            local_378._0_8_ = dVar63 * dVar97;
            auVar87 = local_378;
            dVar99 = (dVar73 + dVar95 * dVar98) * dVar97;
            dVar73 = (1.0 - (local_308 + dStack_300)) * dVar97;
            pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x30);
            dVar46 = *pdVar26;
            dVar57 = *pdVar26;
            pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x38);
            dVar69 = *pdVar26;
            dVar85 = *pdVar26;
            pdVar26 = (double *)((longlong)pvVar20 + lVar27 + 0x40);
            dVar88 = *pdVar26;
            dVar98 = *pdVar26;
            local_118 = dVar70 * dVar88 + dVar90 * dVar69 + local_358 * dVar46 +
                        *(double *)(param_1 + 0x130);
            dStack_110 = dVar96 * dVar98 + dVar89 * dVar85 + dStack_350 * dVar57 +
                         *(double *)(param_1 + 0x138);
            dVar92 = *(double *)(param_1 + 0x130) * 0.0;
            dVar93 = *(double *)(param_1 + 0x138) * 0.0;
            local_108 = dVar80 * dVar88 + dVar94 * dVar69 + dVar46 * dVar91 +
                        *(double *)(param_1 + 0x140);
            dStack_100 = dVar98 * 0.0 + dVar85 * 0.0 + dVar57 * 0.0 + 1.0;
            dVar85 = *(double *)(param_1 + 0x140) * 0.0;
            dVar98 = dVar70 * dVar101 + dVar90 * dVar83 + local_358 * dVar81 + dVar92;
            dVar95 = dVar96 * dVar101 + dVar89 * dVar83 + dStack_350 * dVar81 + dVar93;
            local_388._0_8_ = dVar101 * dVar80 + dVar83 * dVar94 + dVar81 * dVar91 + dVar85;
            dStack_160 = dVar101 * 0.0 + dVar83 * 0.0 + dVar81 * 0.0 + 0.0;
            dVar101 = dVar70 * dVar100 + dVar90 * dVar84 + local_358 * dVar76 + dVar92;
            dVar83 = dVar96 * dVar100 + dVar89 * dVar84 + dStack_350 * dVar76 + dVar93;
            dVar88 = dVar100 * dVar80 + dVar84 * dVar94 + dVar76 * dVar91 + dVar85;
            dStack_140 = dVar100 * 0.0 + dVar84 * 0.0 + dVar76 * 0.0 + 0.0;
            dVar92 = dVar70 * dVar73 + dVar90 * dVar78 + local_358 * dVar99 + dVar92;
            dVar93 = dVar96 * dVar73 + dVar89 * dVar78 + dStack_350 * dVar99 + dVar93;
            dVar85 = dVar73 * dVar80 + dVar78 * dVar94 + dVar99 * dVar91 + dVar85;
            local_388._8_8_ = dStack_160;
            dVar46 = (double)local_388._0_8_ * (double)local_388._0_8_ +
                     dVar98 * dVar98 + dVar95 * dVar95;
            dVar57 = dVar88 * dVar88 + dVar101 * dVar101 + dVar83 * dVar83;
            dVar69 = dVar85 * dVar85 + dVar92 * dVar92 + dVar93 * dVar93;
            uVar31 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
            dVar46 = (double)(~uVar31 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar46)) & uVar31);
            uVar31 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
            dVar57 = (double)(~uVar31 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar57)) & uVar31);
            uVar31 = -(ulonglong)(0.0 <= dVar69 + -9.99999993922529e-09);
            dVar69 = (double)(~uVar31 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar69)) & uVar31);
            auVar40._8_8_ = -(ulonglong)(0.0 <= dStack_2e0);
            auVar40._0_8_ = -(ulonglong)(0.0 <= local_2e8);
            auVar38 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar40);
            uVar31 = -(ulonglong)(0.0 <= dVar63 * dVar97);
            dVar63 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
            local_168 = auVar38._0_8_;
            local_178._8_8_ = dVar95 * dVar46 * local_168;
            local_178._0_8_ = dVar98 * dVar46 * local_168;
            local_168 = dVar46 * (double)local_388._0_8_ * local_168;
            dVar46 = auVar38._8_8_;
            local_148 = dVar57 * dVar88 * dVar46;
            local_158._8_8_ = dVar83 * dVar57 * dVar46;
            local_158._0_8_ = dVar46 * dVar101 * dVar57;
            local_138._8_8_ = dVar93 * dVar69 * dVar63;
            local_138._0_8_ = dVar63 * dVar92 * dVar69;
            local_128._8_8_ = dVar73 * 0.0 + dVar78 * 0.0 + dVar99 * 0.0 + 0.0;
            local_128._0_8_ = dVar69 * dVar85 * dVar63;
            local_318 = auVar49;
            iVar10 = FUN_14481fd10(pdVar19,local_178);
            uVar14 = SUB84(pdVar19,0);
            dVar46 = local_1d8[2] * local_1d8[2] + local_1d8[0] * local_1d8[0];
            dVar57 = local_1d8[3] * local_1d8[3] + local_1d8[1] * local_1d8[1];
            auVar61._0_8_ = dVar46 + dVar57;
            auVar61._8_8_ = dVar46 + dVar57;
            auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
            auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
            auVar38 = sqrtpd(auVar61,auVar61);
            auVar38 = divpd(_DAT_149934d80,auVar38);
            auVar74._0_8_ = auVar38._0_8_ * local_1d8[2];
            auVar74._8_8_ = auVar38._8_8_ * local_1d8[3];
            dVar46 = (double)((ulonglong)(local_1d8[0] * auVar38._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_));
            dVar57 = (double)((ulonglong)(local_1d8[1] * auVar38._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_));
            auVar71 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar74,auVar41);
            dVar85 = 0.0;
            plVar18 = local_390;
            dVar88 = local_108;
            dVar98 = local_118;
            dVar92 = dStack_110;
          }
          pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x10);
          *pdVar19 = dVar46;
          pdVar19[1] = dVar57;
          *(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x20) = auVar71;
          pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x30);
          *pdVar19 = dVar98;
          pdVar19[1] = dVar92;
          pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x40);
          *pdVar19 = dVar88;
          pdVar19[1] = dVar85;
          pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x50);
          *pdVar19 = dVar58 * (double)uVar7;
          pdVar19[1] = dVar64 * (double)uVar8;
          *(undefined1 (*) [16])((longlong)pvVar20 + lVar27 + 0x60) = auVar87;
        }
        dVar63 = pdVar22[8];
        dVar97 = pdVar22[9];
        dVar58 = pdVar22[10];
        pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x50);
        *pdVar19 = dVar63;
        pdVar19[1] = dVar97;
        pdVar19 = (double *)((longlong)pvVar20 + lVar27 + 0x60);
        *pdVar19 = dVar58;
        pdVar19[1] = 0.0;
        auVar67._8_8_ = -(ulonglong)((double)((ulonglong)dVar57 & 0x7ff0000000000000) == INFINITY);
        auVar67._0_8_ = -(ulonglong)((double)((ulonglong)dVar46 & 0x7ff0000000000000) == INFINITY);
        uVar13 = movmskpd(iVar10,auVar67);
        auVar72._8_8_ = -(ulonglong)((double)(auVar71._8_8_ & 0x7ff0000000000000) == INFINITY);
        auVar72._0_8_ = -(ulonglong)((double)(auVar71._0_8_ & 0x7ff0000000000000) == INFINITY);
        iVar9 = movmskpd(uVar14,auVar72);
        uVar15 = iVar9 << 2 | uVar13;
        if (uVar15 == 0) {
          puVar2 = (ulonglong *)((longlong)pvVar20 + lVar27 + 0x30);
          puVar3 = (ulonglong *)((longlong)pvVar20 + lVar27 + 0x40);
          auVar62._8_8_ = -(ulonglong)((double)(puVar2[1] & 0x7ff0000000000000) == INFINITY);
          auVar62._0_8_ = -(ulonglong)((double)(*puVar2 & 0x7ff0000000000000) == INFINITY);
          uVar13 = movmskpd(uVar13,auVar62);
          auVar68._8_8_ = -(ulonglong)((double)(puVar3[1] & 0x7ff0000000000000) == INFINITY);
          auVar68._0_8_ = -(ulonglong)((double)(*puVar3 & 0x7ff0000000000000) == INFINITY);
          iVar9 = movmskpd(0,auVar68);
          uVar15 = iVar9 << 2 | uVar13;
          if (uVar15 != 0) goto LAB_142b5b0e0;
          auVar53._8_8_ = -(ulonglong)((double)((ulonglong)dVar97 & 0x7ff0000000000000) == INFINITY)
          ;
          auVar53._0_8_ = -(ulonglong)((double)((ulonglong)dVar63 & 0x7ff0000000000000) == INFINITY)
          ;
          uVar13 = movmskpd(uVar13,auVar53);
          auVar42._8_8_ = 0;
          auVar42._0_8_ = -(ulonglong)((double)((ulonglong)dVar58 & 0x7ff0000000000000) == INFINITY)
          ;
          iVar9 = movmskpd(0,auVar42);
          uVar15 = iVar9 << 2 | uVar13;
          uVar31 = (ulonglong)uVar15;
          if (uVar15 != 0) goto LAB_142b5b0e0;
        }
        else {
LAB_142b5b0e0:
          auVar43._8_8_ =
               -(ulonglong)((double)((ulonglong)pdVar22[1] & 0x7ff0000000000000) == INFINITY);
          auVar43._0_8_ =
               -(ulonglong)((double)((ulonglong)*pdVar22 & 0x7ff0000000000000) == INFINITY);
          iVar9 = movmskpd(uVar13,auVar43);
          auVar54._8_8_ =
               -(ulonglong)((double)((ulonglong)pdVar22[3] & 0x7ff0000000000000) == INFINITY);
          auVar54._0_8_ =
               -(ulonglong)((double)((ulonglong)pdVar22[2] & 0x7ff0000000000000) == INFINITY);
          uVar13 = movmskpd(uVar15,auVar54);
          if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
            auVar44._8_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[5] & 0x7ff0000000000000) == INFINITY);
            auVar44._0_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[4] & 0x7ff0000000000000) == INFINITY);
            iVar9 = movmskpd(iVar9,auVar44);
            auVar55._8_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[7] & 0x7ff0000000000000) == INFINITY);
            auVar55._0_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[6] & 0x7ff0000000000000) == INFINITY);
            uVar13 = movmskpd(0,auVar55);
            if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) goto LAB_142b5b167;
            auVar45._8_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[9] & 0x7ff0000000000000) == INFINITY);
            auVar45._0_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[8] & 0x7ff0000000000000) == INFINITY);
            iVar9 = movmskpd(iVar9,auVar45);
            auVar56._8_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[0xb] & 0x7ff0000000000000) == INFINITY);
            auVar56._0_8_ =
                 -(ulonglong)((double)((ulonglong)pdVar22[10] & 0x7ff0000000000000) == INFINITY);
            uVar13 = movmskpd(0,auVar56);
            if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) goto LAB_142b5b167;
          }
          else {
LAB_142b5b167:
            plVar5 = *(longlong **)(*param_2 + 0x6a0);
            if (plVar5[0x1d] == 0) {
              pdVar22 = (double *)
                        ((ulonglong)
                         ((uint)*(ushort *)
                                 (*plVar5 + (longlong)*(int *)((longlong)pvVar20 + lVar27) * 2) *
                         0x60) + *(longlong *)(plVar5[9] + 0x30));
            }
            else {
              pdVar22 = (double *)
                        ((longlong)*(int *)((longlong)pvVar20 + lVar27) * 0x60 +
                        *(longlong *)(plVar5[0x1d] + 0x10));
            }
          }
          for (lVar28 = 0xc; uVar31 = 0, lVar28 != 0; lVar28 = lVar28 + -1) {
            *pdVar30 = *pdVar22;
            pdVar22 = pdVar22 + 1;
            pdVar30 = pdVar30 + 1;
          }
        }
        lVar27 = lVar27 + 0x70;
      } while (local_330 != lVar27);
      if (dStack_240._0_4_ != 0) {
        if ((param_5 == '\x01') && (*(char *)(local_368 + 0xec) != '\0')) {
          local_2b8 = local_248;
          local_2b0 = 1;
          FUN_1447d5b6c(plVar18);
          if (dStack_240._0_4_ < 2) goto LAB_142b5b2ea;
          pdVar22 = local_2c8;
          pvVar20 = (void *)((longlong)local_248 + 0x70);
          plVar18 = local_390;
          iVar9 = dStack_240._0_4_ + -1;
        }
        else {
          pdVar22 = local_2d8;
          pvVar20 = local_248;
          iVar9 = dStack_240._0_4_;
        }
        *pdVar22 = (double)pvVar20;
        *(int *)(pdVar22 + 1) = iVar9;
        FUN_1447d4b66(plVar18);
      }
    }
  }
LAB_142b5b2ea:
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b5b4a0 FUN_142b5b4a0 body=164 status=ok
// SIG undefined FUN_142b5b4a0(void)

undefined8 FUN_142b5b4a0(char *param_1,double *param_2,float param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  float fVar7;
  
  if ((*param_1 != '\x01') || (fVar1 = *(float *)(param_1 + 0x4c), fVar1 <= 1e-08)) {
    uVar5 = 0;
  }
  else {
    fVar7 = 0.0;
    if (0.0 <= fVar1 - param_3) {
      fVar7 = fVar1 - param_3;
    }
    dVar6 = (double)((fVar1 - fVar7) / fVar1);
    dVar2 = *(double *)(param_1 + 0x18);
    dVar3 = *(double *)(param_1 + 0x10);
    dVar4 = *(double *)(param_1 + 8);
    *param_2 = dVar6 * dVar4;
    param_2[1] = dVar3 * dVar6;
    param_2[2] = dVar2 * dVar6;
    *(double *)(param_1 + 8) = *(double *)(param_1 + 8) - dVar6 * dVar4;
    *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) - param_2[1];
    *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) - param_2[2];
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - (fVar1 - fVar7);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 142b5b544 FUN_142b5b544 body=194 status=ok
// SIG undefined FUN_142b5b544(void)

undefined8 FUN_142b5b544(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  if (*(int *)(param_1 + 0x804) != 0) {
    uVar1 = *(uint *)(param_1 + 0x800);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_142b5b5d6;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       ((((int)plVar2[2] == *(int *)(param_1 + 0x804) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)
         ) && (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)))) {
      uVar3 = (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1 + 0x5e0,param_1 + 0x7c0,&local_19);
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      goto LAB_142b5b5d6;
    }
  }
  uVar4 = 0;
LAB_142b5b5d6:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar4,*(uint *)(param_1 + 0xa0) < 2 || local_19 != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5b614 FUN_142b5b614 body=1167 status=ok
// SIG undefined FUN_142b5b614(void)

void FUN_142b5b614(longlong *param_1,char param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  code **ppcVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  code *local_120;
  code *local_118 [24];
  code **local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_140 = local_118;
      local_118[0] = FUN_144a7958c;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_142b47bc4;
      local_148 = &LAB_1478989f1;
      local_150 = &LAB_146391124;
      local_158 = L"Engine";
      local_160 = 0x10000000000;
      local_168 = 0x10000005;
      local_170 = 0x10;
      local_178 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    lVar3 = param_1[2];
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      *(undefined1 *)((longlong)param_1 + 0x2ea) = 0;
      if (DAT_14cad2858 == 0) {
        local_140 = local_118;
        local_118[0] = FUN_144a7958c;
        local_130 = FUN_14081d0ea;
        local_138 = (code *)&LAB_146395584;
        local_148 = &LAB_147a0ba80;
        local_150 = &LAB_14575ccce;
        local_158 = L"Engine";
        local_160 = 0x40000000000;
        local_168 = 0x10000004;
        local_170 = 0x10;
        local_178 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        lVar3 = param_1[2];
      }
      if ((*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          != DAT_14cad2858 + 0x30)) {
        (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
        FUN_142b5baa4();
      }
      else {
        lVar3 = param_1[0x1af];
        if ((longlong)(int)lVar3 != 0) {
          lVar6 = 0;
          do {
            FUN_142b5baa4();
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar6);
        }
      }
    }
    if ((param_2 != '\0') && (uVar5 = *(uint *)(param_1 + 0x28), 0 < (int)uVar5)) {
      local_58 = (code **)0x0;
      local_4c = 0x18;
      local_50 = uVar5;
      if (0x18 < uVar5) {
        FUN_14024d3e4(local_118,0);
      }
      ppcVar4 = local_58;
      if (local_58 == (code **)0x0) {
        ppcVar4 = local_118;
      }
      FUN_144738dca(ppcVar4,param_1[0x27],uVar5);
      if (0 < (int)local_50) {
        lVar3 = param_1[0x15];
        do {
          ppcVar4 = local_58;
          if (local_58 == (code **)0x0) {
            ppcVar4 = local_118;
          }
          pcVar2 = ppcVar4[(ulonglong)local_50 - 1];
          uVar5 = local_50 - 1;
          local_50 = uVar5;
          if ((pcVar2 != (code *)0x0) && (*(longlong *)(pcVar2 + 0xa8) == lVar3)) {
            uVar1 = *(uint *)(pcVar2 + 0x140);
            if (uVar1 != 0) {
              local_50 = uVar1 + uVar5;
              if (local_4c - uVar5 < uVar1) {
                FUN_14024d3e4(local_118,uVar5);
              }
              ppcVar4 = local_58;
              if (local_58 == (code **)0x0) {
                ppcVar4 = local_118;
              }
              FUN_144738dca(ppcVar4 + uVar5,*(undefined8 *)(pcVar2 + 0x138),uVar1);
            }
            if (DAT_14cac6e60 == 0) {
              local_120 = FUN_144a7958c;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_142b47bc4;
              local_140 = &local_120;
              local_148 = &LAB_1478989f1;
              local_150 = &LAB_146391124;
              local_158 = L"Engine";
              local_160 = 0x10000000000;
              local_168 = 0x10000005;
              local_170 = 0x10;
              local_178 = 0x620;
              FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            }
            if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(pcVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pcVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
              FUN_142b5b614(pcVar2,0);
            }
          }
        } while (0 < (int)local_50);
      }
      if (local_58 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b5baa4 FUN_142b5baa4 body=600 status=ok
// SIG undefined FUN_142b5baa4(void)

void FUN_142b5baa4(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) goto LAB_142b5bcc7;
  local_78 = *(undefined4 *)(param_1 + 0x68);
  uStack_74 = *(undefined4 *)(param_1 + 0x6c);
  uStack_70 = *(undefined4 *)(param_1 + 0x70);
  uStack_6c = *(undefined4 *)(param_1 + 0x74);
  local_68 = *(undefined4 *)(param_1 + 0x78);
  uStack_64 = *(undefined4 *)(param_1 + 0x7c);
  uStack_60 = *(undefined4 *)(param_1 + 0x80);
  uStack_5c = *(undefined4 *)(param_1 + 0x84);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x90);
  lVar9 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x88);
  if (lVar9 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1447ce8be(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar9 * 0xc);
  }
  iVar10 = 0x1a;
  do {
    FUN_1402b9dcc(&local_78,iVar10,2);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x20);
  FUN_1406902ca(param_1,&local_78);
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_1 + 0x138) == 0) {
LAB_142b5bc0e:
    if (0 < (int)uStack_80) {
      lVar13 = 0;
      lVar9 = 0;
      iVar10 = (int)uStack_80;
      do {
        lVar5 = *(longlong *)(local_88 + lVar13);
        if (lVar5 != 0) {
          uVar11 = (ulonglong)((*(byte *)(lVar5 + 8) & 3) == 0);
          puVar1 = (undefined4 *)(lVar5 + 0x48 + uVar11 * 8);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          puVar2 = (undefined8 *)(lVar5 + 0x58 + uVar11 * 8);
          local_a8 = *(undefined4 *)puVar2;
          uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar3 = *puVar2;
          uStack_a0 = *(undefined4 *)(puVar2 + 1);
          uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
          uVar4 = puVar2[1];
          puVar2 = (undefined8 *)(lVar5 + 0x68 + uVar11 * 8);
          local_98 = *(undefined4 *)puVar2;
          uStack_94 = *(undefined4 *)((longlong)puVar2 + 4);
          uStack_90 = *(undefined4 *)(puVar2 + 1);
          uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
          uVar6 = puVar2[1];
          uStack_ac = puVar1[3] & 0x3ffffff;
          lVar5 = *(longlong *)(local_88 + lVar13);
          if ((*(byte *)(lVar5 + 8) & 3) == 0) {
            FUN_146285926(lVar5,&local_b8);
            iVar10 = (int)uStack_80;
          }
          else {
            *(undefined8 *)(lVar5 + 0x68) = *puVar2;
            *(undefined8 *)(lVar5 + 0x70) = uVar6;
            *(undefined8 *)(lVar5 + 0x58) = uVar3;
            *(undefined8 *)(lVar5 + 0x60) = uVar4;
            *(undefined4 *)(lVar5 + 0x48) = local_b8;
            *(undefined4 *)(lVar5 + 0x4c) = uStack_b4;
            *(undefined4 *)(lVar5 + 0x50) = uStack_b0;
            *(uint *)(lVar5 + 0x54) = uStack_ac;
          }
        }
        lVar9 = lVar9 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar9 < iVar10);
    }
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40);
    uVar11 = (ulonglong)*(uint *)(lVar9 + 0x88);
    if ((int)*(uint *)(lVar9 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar11);
    }
    if (uVar11 != 0) {
      FUN_144724de8(&local_88,uVar11);
      uVar12 = 0;
      do {
        uVar7 = uStack_80;
        lVar13 = *(longlong *)(lVar9 + 0x80);
        if (*(longlong *)(lVar9 + 0x80) == 0) {
          lVar13 = lVar9 + 0x78;
        }
        uVar3 = *(undefined8 *)(lVar13 + uVar12 * 8);
        uVar4 = *(undefined8 *)(param_1 + 0x138);
        lVar13 = (longlong)(int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_1417333de(&local_88,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_88 + lVar13 * 0x10) = uVar3;
        *(undefined8 *)(local_88 + 8 + lVar13 * 0x10) = uVar4;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
      goto LAB_142b5bc0e;
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_142b5bcc7:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b5bcfe FUN_142b5bcfe body=527 status=ok
// SIG undefined FUN_142b5bcfe(void)

void FUN_142b5bcfe(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_30 = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
    lVar3 = FUN_1447210f0(param_1);
    if (lVar3 != 0) {
      uVar1 = FUN_14119d0a4(lVar3);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar3 + 0x6f4));
    }
  }
  if (*(int *)((longlong)param_1 + 0x3f4) == 0) {
    FUN_1470fd4ce(param_1);
  }
  if ((0 < *(int *)((longlong)param_1 + 0x41c)) && (*(int *)((longlong)param_1 + 0x3f4) != 5)) {
    *(int *)((longlong)param_1 + 0x41c) = *(int *)((longlong)param_1 + 0x41c) + -1;
    *(int *)(param_1 + 0x7c) = (int)param_1[0x7c] + 1;
    goto LAB_142b5bd60;
  }
  pbVar2 = (byte *)param_1[10];
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x3b) != '\0') {
      uVar1 = *(undefined8 *)(pbVar2 + 0x28);
      FUN_1402eb48e(uVar1,param_1 + 6);
      *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
      FUN_1402eb97e(uVar1,param_1 + 6);
      if (*(char *)((longlong)param_1 + 0x3b) != '\0') goto LAB_142b5bd90;
      pbVar2 = (byte *)param_1[10];
    }
    pbVar2[0x24] = 0;
    pbVar2[0x25] = 0;
    pbVar2[0x26] = 0x80;
    pbVar2[0x27] = 0xbf;
  }
LAB_142b5bd90:
  FUN_1470fcf48(param_1,&local_30);
  if (*(int *)((longlong)param_1 + 0x3f4) == 3) {
    uVar1 = FUN_1447210f0(param_1);
    plVar4 = (longlong *)(DAT_14cb0d2b0 + 0x28);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    (**(code **)(*plVar4 + 8))(plVar4,uVar1,L"Stat Chaos",&DAT_14c872ee0);
  }
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FUN_1400020a8();
  }
LAB_142b5bd60:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5bf0e FUN_142b5bf0e body=541 status=ok
// SIG undefined FUN_142b5bf0e(void)

float FUN_142b5bf0e(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    fVar8 = 0.0;
  }
  else {
    lVar3 = *param_1;
    lVar4 = *(longlong *)(param_2 + 0x188);
    fVar8 = 0.0;
    if ((lVar4 != 0) && (*(char *)(lVar3 + 0x490) != '\0')) {
      fVar8 = (float)*(int *)(lVar4 + 0x50) * 12.0 + 0.0;
      iVar1 = *(int *)(lVar4 + 0x70);
      if ((longlong)iVar1 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x68);
        lVar7 = 0;
        do {
          iVar2 = *(int *)(lVar5 + 0x38 + lVar7);
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1404190d2(*(undefined8 *)(lVar5 + 0x30 + lVar7),iVar2,&local_d8);
          fVar9 = (float)(int)uStack_d0;
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          fVar8 = fVar8 + fVar9 / 3.0 + (float)iVar2;
          lVar7 = lVar7 + 0x100;
        } while ((longlong)iVar1 * 0x100 != lVar7);
      }
      fVar8 = (float)*(int *)(lVar4 + 0x60) * 3.0 + (float)*(int *)(lVar4 + 0x40) + fVar8;
    }
    if (*(char *)(lVar3 + 0x491) == '\x01') {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_98 = 0;
      cVar6 = (**(code **)(*(longlong *)(param_2 + 200) + 0x10))(param_2 + 200,&local_d8,0);
      if (cVar6 != '\0') {
        fVar8 = fVar8 + (float)(int)uStack_c0;
      }
      FUN_1400d7bbd(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5c12c FUN_142b5c12c body=197 status=ok
// SIG undefined FUN_142b5c12c(void)

void FUN_142b5c12c(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = FUN_145a648b0();
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  FUN_1434f53e8(param_1,&local_40,&local_38);
  lVar2 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar4);
      FUN_1470fcd3e(plVar1);
      (**(code **)(*plVar1 + 0x400))(plVar1,1);
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b5c1f2 FUN_142b5c1f2 body=69 status=ok
// SIG undefined FUN_142b5c1f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5c1f2(void)

{
  _DAT_14c9abb88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b5c234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abb90,1);
  return;
}



// FUNCTION 142b5c237 FUN_142b5c237 body=69 status=ok
// SIG undefined FUN_142b5c237(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5c237(void)

{
  _DAT_14c9abba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b5c279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abba8,1);
  return;
}



// FUNCTION 142b5c27c FUN_142b5c27c body=69 status=ok
// SIG undefined FUN_142b5c27c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5c27c(void)

{
  _DAT_14c9abbb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b5c2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abbb8,1);
  return;
}



// FUNCTION 142b5c2c1 FUN_142b5c2c1 body=69 status=ok
// SIG undefined FUN_142b5c2c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5c2c1(void)

{
  _DAT_14c9abbc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b5c303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abbc8,1);
  return;
}



// FUNCTION 142b5c306 FUN_142b5c306 body=641 status=ok
// SIG undefined FUN_142b5c306(void)

void FUN_142b5c306(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    if (*(int *)(param_1 + 0x10) < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = **(longlong **)(param_1 + 8);
    }
    if (*(char *)(lVar8 + 0x270) == '\0') {
      lVar8 = *param_2;
      iVar6 = *(int *)(param_1 + 0x20);
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8);
          lVar5 = *(longlong *)(lVar1 + 0x18);
          lVar2 = *(longlong *)(lVar1 + 0x20);
          if ((((*(byte *)(lVar5 + 0x20) & 1) == 0) &&
              ((((9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x60)) ||
                 (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x68)))) ||
                (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x70)))) ||
               (((9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x48)) ||
                 (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x50)))) ||
                (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x58)))))))) ||
             (((*(byte *)(lVar2 + 0x20) & 1) == 0 &&
              (((9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x60)) ||
                (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x68)))) ||
               ((9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x70)) ||
                (((9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x48)) ||
                  (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x50)))) ||
                 (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x58)))))))))))) {
            *(undefined4 *)(lVar1 + 0x7f0) = param_3;
            *(undefined4 *)(lVar1 + 0x7f4) = param_4;
            lVar5 = 0x414;
            iVar6 = 0;
            do {
              uVar3 = FUN_1470ffdbe(param_1,lVar8,lVar1,iVar6,param_5);
              if (uVar3 != 0) {
                *(undefined8 *)(lVar8 + 0x298) = *(undefined8 *)(lVar1 + lVar5 * 2);
                *(int *)(lVar1 + 0x3e4 + lVar5) =
                     (int)((ulonglong)(lVar8 - *param_2) >> 5) * 0x3cf3cf3d;
                lVar8 = lVar8 + (ulonglong)uVar3 * 0x2a0;
              }
              iVar4 = FUN_1471002c4(lVar8,lVar1,iVar6);
              if (iVar4 != 0) {
                *(undefined8 *)(lVar8 + 0x298) = *(undefined8 *)(lVar1 + 8 + lVar5 * 2);
                *(int *)(lVar1 + 1000 + lVar5) =
                     (int)((ulonglong)(lVar8 - *param_2) >> 5) * 0x3cf3cf3d;
                lVar8 = lVar8 + 0x2a0;
              }
              lVar5 = lVar5 + 8;
              iVar6 = iVar6 + 1;
            } while (lVar5 != 0x444);
            iVar6 = *(int *)(param_1 + 0x20);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
      }
      *param_2 = lVar8;
    }
  }
  return;
}



// FUNCTION 142b5c588 FUN_142b5c588 body=209 status=ok
// SIG undefined FUN_142b5c588(void)

void FUN_142b5c588(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x151) == '\0') {
    if (*(int *)(param_1 + 0x10) < 1) {
      lVar1 = 0;
    }
    else {
      lVar1 = **(longlong **)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0x270) == '\0') {
      local_60 = *param_2;
      local_28 = &local_60;
      local_48 = (undefined ***)0x0;
      local_38 = &PTR_LAB_14a1e1690;
      local_58[0] = FUN_142b5ebb8;
      local_30 = param_1;
      FUN_144aa8fe6(*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_5 * 8),local_58);
      if (local_58[0] != (code *)0x0) {
        pppuVar2 = local_48;
        if (local_48 == (undefined ***)0x0) {
          pppuVar2 = &local_38;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      *param_2 = local_60;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5c65a FUN_142b5c65a body=126 status=ok
// SIG undefined FUN_142b5c65a(void)

void FUN_142b5c65a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[1];
  if (0 < (longlong)iVar1) {
    iVar5 = -iVar1;
    uVar6 = (longlong)iVar1;
    do {
      lVar2 = *(longlong *)(*param_1 + -8 + uVar6 * 8);
      if (*(int *)(lVar2 + 0xf48) == -1) {
        if (lVar2 != 0) {
          FUN_1400020a8();
        }
        uVar4 = *(uint *)(param_1 + 1);
        if (uVar6 != uVar4) {
          memmove((void *)(*param_1 + uVar6 * 8 + -8),(void *)(*param_1 + uVar6 * 8),
                  (longlong)(int)(uVar4 + iVar5) << 3);
          uVar4 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar4 - 1;
        FUN_1409bd764(param_1);
      }
      iVar5 = iVar5 + 1;
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 142b5c6d8 FUN_142b5c6d8 body=5 status=ok
// SIG undefined FUN_142b5c6d8(void)

longlong FUN_142b5c6d8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b5c6e4 FUN_142b5c6e4 body=22 status=ok
// SIG undefined FUN_142b5c6e4(void)

void FUN_142b5c6e4(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x30);
    return;
  }
  return;
}



// FUNCTION 142b5c6fa FUN_142b5c6fa body=4566 status=ok
// SIG undefined FUN_142b5c6fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5c6fa(longlong *param_1)

{
  double *pdVar1;
  double *pdVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  byte bVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int **ppiVar19;
  byte bVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 (*pauVar23) [16];
  int *piVar24;
  char *pcVar25;
  undefined1 (*pauVar26) [16];
  longlong lVar27;
  undefined8 *puVar28;
  int *piVar29;
  int *piVar30;
  longlong lVar31;
  int iVar32;
  int **ppiVar33;
  char *pcVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar51 [16];
  double dVar53;
  undefined1 auVar55 [16];
  double dVar54;
  double dVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  float fVar64;
  undefined1 auStack_238 [32];
  uint local_218;
  int local_214;
  longlong local_210;
  longlong *local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  double local_1e8;
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [12];
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  int *local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128 [2];
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar31 = *param_1;
  if ((((*(longlong *)(lVar31 + 0x3a8) != 0) && (*(longlong *)(lVar31 + 0x3f0) != 0)) &&
      (*(longlong *)(lVar31 + 0x3f8) != 0)) && (0 < *(int *)(lVar31 + 0x9c))) {
    local_1e0 = (undefined4 *)(lVar31 + 0x58);
    local_1e8 = (double)(1.0 / *(float *)(lVar31 + 0x14));
    local_200 = (longlong *)(lVar31 + 0x6d0);
    local_1f0 = (undefined8 *)(lVar31 + 0x170);
    local_1f8 = (undefined8 *)(lVar31 + 0x720);
    local_208 = (longlong *)(lVar31 + 0x5d0);
    local_210 = lVar31;
    iVar16 = 0;
    do {
      local_214 = iVar16;
      if ((longlong)*(int *)(lVar31 + 0x4b0) != 0) {
        pcVar25 = *(char **)(local_210 + 0x4a8);
        pcVar34 = pcVar25 + (longlong)*(int *)(lVar31 + 0x4b0) * 0x60;
        do {
          cVar14 = FUN_142b5b4a0(pcVar25);
          *pcVar25 = cVar14;
          if (cVar14 != '\0') {
            dVar63 = *(double *)(local_210 + 0x28) * local_128[0];
            dVar60 = *(double *)(local_210 + 0x30) * local_128[1];
            dVar53 = *(double *)(local_210 + 0x38) * local_118;
            lVar31 = *(longlong *)(*(longlong *)(pcVar25 + 0x58) + 0x2b0);
            if (pcVar25[0x20] == '\0') {
              FUN_144941734();
              *(undefined4 *)(pcVar25 + 0x28) = local_198._0_4_;
              *(undefined4 *)(pcVar25 + 0x2c) = local_198._4_4_;
              *(undefined4 *)(pcVar25 + 0x30) = local_198._8_4_;
              *(undefined4 *)(pcVar25 + 0x34) = uStack_18c;
              *(undefined8 *)(pcVar25 + 0x38) = local_188._0_8_;
              pcVar25[0x20] = '\x01';
            }
            if (*(char *)(lVar31 + 0x151) == '\0') {
              if (0 < (longlong)*(int *)(lVar31 + 0x10)) {
                dVar59 = 0.0;
                lVar21 = 0;
                do {
                  lVar27 = *(longlong *)(*(longlong *)(lVar31 + 8) + lVar21 * 8);
                  if (lVar27 != 0) {
                    dVar59 = dVar59 + (*(double *)(lVar27 + 0x60) + *(double *)(lVar27 + 0x68) +
                                      *(double *)(lVar27 + 0x70)) / 3.0;
                  }
                  lVar21 = lVar21 + 1;
                } while (*(int *)(lVar31 + 0x10) != lVar21);
                lVar21 = 0;
                do {
                  lVar27 = *(longlong *)(*(longlong *)(lVar31 + 8) + lVar21 * 8);
                  if (lVar27 != 0) {
                    dVar45 = ((*(double *)(lVar27 + 0x60) + *(double *)(lVar27 + 0x68) +
                              *(double *)(lVar27 + 0x70)) / 3.0) / dVar59;
                    iVar16 = _finite(dVar45);
                    if (iVar16 != 0) {
                      uStack_1b0 = dVar60 * dVar45;
                      local_1b8 = (int *)(dVar45 * dVar63);
                      local_1a8._0_8_ = dVar53 * dVar45;
                      FUN_1417443be(lVar27,&local_1b8,pcVar25 + 0x28);
                    }
                  }
                  lVar21 = lVar21 + 1;
                } while (lVar21 < *(int *)(lVar31 + 0x10));
              }
            }
            else {
              local_128[0] = dVar63 + dVar63;
              local_128[1] = dVar60 + dVar60;
              local_118 = dVar53 + dVar53;
              FUN_1417443be(*(undefined8 *)(pcVar25 + 0x58),local_128,pcVar25 + 0x28);
            }
          }
          pcVar25 = pcVar25 + 0x60;
        } while (pcVar25 != pcVar34);
      }
      lVar31 = local_210;
      iVar32 = local_214;
      if ((longlong)*(int *)(local_210 + 0x490) != 0) {
        pauVar26 = *(undefined1 (**) [16])(local_210 + 0x488);
        pauVar23 = pauVar26 + (longlong)*(int *)(local_210 + 0x490) * 0xd;
        fVar64 = (float)local_214;
        fVar40 = *(float *)(local_210 + 0x14);
        do {
          iVar16 = *(int *)pauVar26[0xc];
          iVar7 = *(int *)(*(longlong *)(lVar31 + 0x3f0) + 0x10);
          if (iVar16 < iVar7) {
            puVar17 = (undefined8 *)
                      ((longlong)iVar16 * 8 + *(longlong *)(*(longlong *)(lVar31 + 0x3f0) + 8));
          }
          else {
            puVar17 = (undefined8 *)
                      ((longlong)(iVar16 - iVar7) * 8 +
                      *(longlong *)(*(longlong *)(lVar31 + 0x3a8) + 0xb8));
          }
          plVar22 = (longlong *)*puVar17;
          local_118 = (double)plVar22[0x1d];
          local_128[0] = (double)plVar22[0x1b];
          local_128[1] = (double)plVar22[0x1c];
          local_100 = (double)plVar22[0x20];
          local_110 = (double)plVar22[0x1e];
          dStack_108 = (double)plVar22[0x1f];
          fVar39 = (fVar64 + 1.0) / (float)*(int *)(lVar31 + 0x9c);
          if (ABS(fVar39) <= 1e-05) {
            uVar41 = *(undefined4 *)*pauVar26;
            uVar43 = *(undefined4 *)(*pauVar26 + 4);
            uVar42 = *(undefined4 *)(*pauVar26 + 8);
            uVar44 = *(undefined4 *)(*pauVar26 + 0xc);
            local_1a8._0_8_ = *(undefined8 *)pauVar26[1];
            local_1a8._8_8_ = *(undefined8 *)(pauVar26[1] + 8);
            local_198._0_8_ = *(undefined8 *)pauVar26[2];
            unique0x10001f7e = *(undefined8 *)(pauVar26[2] + 8);
            local_188._0_8_ = *(undefined8 *)pauVar26[3];
            local_188._8_8_ = *(undefined8 *)(pauVar26[3] + 8);
LAB_142b5cdbf:
            local_1b8 = (int *)CONCAT44(uVar43,uVar41);
            uStack_1b0 = (double)CONCAT44(uVar44,uVar42);
          }
          else {
            if (ABS(fVar39 + -1.0) <= 1e-05) {
              uVar41 = *(undefined4 *)pauVar26[6];
              uVar43 = *(undefined4 *)(pauVar26[6] + 4);
              uVar42 = *(undefined4 *)(pauVar26[6] + 8);
              uVar44 = *(undefined4 *)(pauVar26[6] + 0xc);
              local_1a8._0_8_ = *(undefined8 *)pauVar26[7];
              local_1a8._8_8_ = *(undefined8 *)(pauVar26[7] + 8);
              local_198._0_8_ = *(undefined8 *)pauVar26[8];
              unique0x10001f96 = *(undefined8 *)(pauVar26[8] + 8);
              local_188._0_8_ = *(undefined8 *)pauVar26[9];
              local_188._8_8_ = *(undefined8 *)(pauVar26[9] + 8);
              goto LAB_142b5cdbf;
            }
            dVar59 = (double)fVar39;
            dVar45 = (double)fVar39;
            dVar53 = (double)DAT_149934d80 - dVar59;
            dVar63 = DAT_149934d80._8_8_ - dVar45;
            dVar60 = *(double *)(pauVar26[9] + 8) * dVar45 + *(double *)(pauVar26[3] + 8) * dVar63;
            stack0xfffffffffffffe70 =
                 *(double *)(pauVar26[8] + 8) * dVar45 + *(double *)(pauVar26[2] + 8) * dVar63;
            local_198._0_8_ = *(double *)pauVar26[8] * dVar59 + *(double *)pauVar26[2] * dVar53;
            local_188._8_4_ = SUB84(dVar60,0);
            local_188._0_8_ = *(double *)pauVar26[9] * dVar59 + *(double *)pauVar26[3] * dVar53;
            local_188._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
            auVar57 = *pauVar26;
            auVar6 = pauVar26[1];
            dVar60 = *(double *)pauVar26[7] * auVar6._0_8_ + *(double *)pauVar26[6] * auVar57._0_8_;
            dVar48 = *(double *)(pauVar26[7] + 8) * auVar6._8_8_ +
                     *(double *)(pauVar26[6] + 8) * auVar57._8_8_;
            lVar21 = -(ulonglong)(0.0 <= dVar60 + dVar48);
            lVar27 = -(ulonglong)(0.0 <= dVar60 + dVar48);
            uVar41 = (undefined4)lVar27;
            uVar43 = (undefined4)((ulonglong)lVar27 >> 0x20);
            auVar55._0_8_ = 0.0 - auVar57._0_8_;
            auVar55._8_8_ = 0.0 - auVar57._8_8_;
            auVar13._8_4_ = uVar41;
            auVar13._0_8_ = lVar21;
            auVar13._12_4_ = uVar43;
            auVar57 = blendvpd(auVar55,auVar57,auVar13);
            auVar61._0_8_ = 0.0 - auVar6._0_8_;
            auVar61._8_8_ = 0.0 - auVar6._8_8_;
            dVar48 = auVar57._0_8_ * dVar53 + *(double *)pauVar26[6] * dVar59;
            dVar49 = auVar57._8_8_ * dVar63 + *(double *)(pauVar26[6] + 8) * dVar45;
            auVar57._8_4_ = uVar41;
            auVar57._0_8_ = lVar21;
            auVar57._12_4_ = uVar43;
            auVar57 = blendvpd(auVar61,auVar6,auVar57);
            dVar59 = auVar57._0_8_ * dVar53 + *(double *)pauVar26[7] * dVar59;
            dVar63 = auVar57._8_8_ * dVar63 + *(double *)(pauVar26[7] + 8) * dVar45;
            dVar60 = dVar59 * dVar59 + dVar48 * dVar48;
            dVar53 = dVar63 * dVar63 + dVar49 * dVar49;
            auVar46._0_8_ = dVar60 + dVar53;
            auVar46._8_8_ = dVar60 + dVar53;
            uVar38 = -(ulonglong)(1e-08 <= auVar46._8_8_);
            auVar57 = sqrtpd(auVar46,auVar46);
            auVar57 = divpd(_DAT_149934d80,auVar57);
            auVar50._0_8_ = auVar57._0_8_ * dVar59;
            auVar50._8_8_ = auVar57._8_8_ * dVar63;
            local_1b8 = (int *)((ulonglong)(dVar48 * auVar57._0_8_) &
                               -(ulonglong)(1e-08 <= auVar46._0_8_));
            uStack_1b0 = (double)((ulonglong)(dVar49 * auVar57._8_8_) & uVar38);
            auVar6._8_4_ = (int)uVar38;
            auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar46._0_8_);
            auVar6._12_4_ = (int)(uVar38 >> 0x20);
            local_1a8 = blendvpd(_DAT_149935300,auVar50,auVar6);
          }
          local_178 = (undefined4)DAT_14c846510;
          uStack_174 = DAT_14c846510._4_4_;
          uStack_170 = (undefined4)DAT_14c846518;
          uStack_16c = DAT_14c846518._4_4_;
          local_168 = DAT_14c846520;
          uStack_160 = 0;
          if (*(char *)(lVar31 + 0x481) == '\0') {
            bVar15 = *(byte *)((longlong)plVar22 + 0x21);
            if ((~bVar15 & 0x18) == 0) {
              bVar20 = (bVar15 & 0x20) >> 5;
            }
            else {
              bVar20 = 0;
            }
            if ((~bVar15 & 3) == 0) {
              bVar15 = (bVar15 & 4) >> 2;
            }
            else {
              bVar15 = 0;
            }
            if (((*(byte *)(plVar22 + 4) & 1) == 0) &&
               ((((9.99999993922529e-09 < ABS((double)plVar22[0xc]) ||
                  (9.99999993922529e-09 < ABS((double)plVar22[0xd]))) ||
                 ((9.99999993922529e-09 < ABS((double)plVar22[0xe]) ||
                  ((9.99999993922529e-09 < ABS((double)plVar22[9]) ||
                   (9.99999993922529e-09 < ABS((double)plVar22[10]))))))) ||
                (9.99999993922529e-09 < ABS((double)plVar22[0xb]))))) {
              if (bVar20 == 0) {
                _local_198 = *(undefined1 (*) [16])(plVar22 + 0x2a);
                local_188._8_8_ = 0;
                local_188._0_8_ = plVar22[0x2c];
              }
              if (bVar15 == 0) {
                local_1b8 = (int *)plVar22[0x26];
                uStack_1b0 = (double)plVar22[0x27];
                local_1a8 = *(undefined1 (*) [16])(plVar22 + 0x28);
              }
            }
            (**(code **)(*plVar22 + 0x30))
                      (plVar22,&local_1b8,
                       (double)(*(float *)(lVar31 + 0x14) * *(float *)(lVar31 + 0x18)));
          }
          else {
            (**(code **)(*plVar22 + 0x48))(plVar22,&local_1b8);
            if (*(char *)(lVar31 + 0x481) == '\x02') {
              (**(code **)(*plVar22 + 0x40))(plVar22,&DAT_14c8464e0);
              (**(code **)(*plVar22 + 0x38))(plVar22,&DAT_14c8464e0);
            }
          }
          uVar35 = -(uint)(1e-08 < *(float *)(lVar31 + 0x18));
          dVar60 = (double)(*(float *)(lVar31 + 0x14) /
                           (float)(~uVar35 & 0x3f800000 | (uint)*(float *)(lVar31 + 0x18) & uVar35))
          ;
          local_158 = (int *)(((double)plVar22[0x1b] - local_128[0]) * dVar60);
          local_150 = ((double)plVar22[0x1c] - local_128[1]) * dVar60;
          local_148 = ((double)plVar22[0x1d] - local_118) * dVar60;
          local_140 = ((double)plVar22[0x1e] - local_110) * dVar60;
          local_138 = ((double)plVar22[0x1f] - dStack_108) * dVar60;
          local_130 = ((double)plVar22[0x20] - local_100) * dVar60;
          lVar21 = 0;
          do {
            piVar29 = (&local_158)[lVar21];
            dVar60 = pow(ABS((double)piVar29),(double)*(float *)(lVar31 + 0x20));
            if (ABS((double)piVar29) <= 9.99999993922529e-09) {
              piVar29 = (int *)0x0;
            }
            else {
              dVar60 = dVar60 * (double)(-(ulonglong)(0.0 < (double)piVar29) & 0x3ff0000000000000 |
                                        ~-(ulonglong)(0.0 < (double)piVar29) &
                                        -(ulonglong)((double)piVar29 < 0.0) & 0xbff0000000000000);
              dVar53 = (double)*(float *)(lVar31 + 0x1c);
              if (dVar53 <= dVar60) {
                dVar60 = dVar53;
              }
              dVar53 = (double)-*(float *)(lVar31 + 0x1c);
              if (dVar60 <= dVar53) {
                dVar60 = dVar53;
              }
              piVar29 = (int *)((dVar60 / (double)(&local_158)[lVar21]) *
                                (double)(&local_158)[lVar21] * (double)(1.0 / fVar40) +
                               local_128[lVar21]);
            }
            (&local_158)[lVar21] = piVar29;
            lVar21 = lVar21 + 1;
          } while (lVar21 != 6);
          (**(code **)(*plVar22 + 0x40))(plVar22,&local_158);
          (**(code **)(*plVar22 + 0x38))(plVar22,&local_140);
          pauVar26 = pauVar26 + 0xd;
        } while (pauVar26 != pauVar23);
        if (*(int *)(lVar31 + 0x490) != 0) {
          local_1b8 = (int *)CONCAT62(local_1b8._2_6_,0x100);
          FUN_1448f22e4(*(undefined8 *)(lVar31 + 0x3f0),&local_1b8);
        }
      }
      if ((longlong)*(int *)(lVar31 + 0x5b8) != 0) {
        lVar21 = *(longlong *)(lVar31 + 0x5b0);
        lVar27 = (longlong)*(int *)(lVar31 + 0x5b8) * 0xf8;
        do {
          FUN_140b8bf5e(lVar21,(double)*(float *)(lVar31 + 0x14));
          lVar21 = lVar21 + 0xf8;
          lVar27 = lVar27 + -0xf8;
        } while (lVar27 != 0);
      }
      if (((((*(int *)(lVar31 + 0x804) != 0) &&
            (uVar35 = *(uint *)(lVar31 + 0x800), -1 < (int)uVar35)) && ((int)uVar35 < DAT_14c9647dc)
           ) && ((plVar22 = (longlong *)
                            ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
                 plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(lVar31 + 0x804))))) &&
         (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 &&
          ((plVar22 = (longlong *)*plVar22, plVar22 != (longlong *)0x0 && (*local_200 != 0)))))) {
        *(float *)(lVar31 + 0x6e0) = 1.0 / *(float *)(lVar31 + 0x14);
        puVar17 = local_1f0;
        puVar28 = local_1f8;
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar28 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar28 = puVar28 + 1;
        }
        *(undefined1 *)(lVar31 + 0x780) = 1;
        if (*(longlong *)(lVar31 + 0x6d8) == *(longlong *)(lVar31 + 0x3f0)) {
          (**(code **)(*plVar22 + 0x2e8))(plVar22,local_200);
        }
      }
      local_128[0] = 0.0;
      local_128[1] = 0.0;
      local_118 = (double)CONCAT62(local_118._2_6_,0x203);
      if (*(char *)(lVar31 + 0x402) == '\0') {
        FUN_144940db0(*(undefined8 *)(lVar31 + 0x3f0),local_128);
      }
      local_1c8 = *(undefined8 *)(local_1e0 + 4);
      local_1d8 = *local_1e0;
      uStack_1d4 = local_1e0[1];
      uStack_1d0 = local_1e0[2];
      uStack_1cc = local_1e0[3];
      FUN_142b659c4(*(undefined8 *)(lVar31 + 0x3a8),local_1e8,&local_1d8);
      iVar16 = *(int *)(lVar31 + 0x490);
      if ((longlong)iVar16 != 0) {
        lVar21 = *(longlong *)(lVar31 + 0x488);
        lVar27 = 0;
        do {
          iVar7 = *(int *)(lVar21 + 0xc0 + lVar27);
          iVar8 = *(int *)(*(longlong *)(lVar31 + 0x3f0) + 0x10);
          if (iVar7 < iVar8) {
            plVar22 = (longlong *)
                      ((longlong)iVar7 * 8 + *(longlong *)(*(longlong *)(lVar31 + 0x3f0) + 8));
          }
          else {
            plVar22 = (longlong *)
                      ((longlong)(iVar7 - iVar8) * 8 +
                      *(longlong *)(*(longlong *)(lVar31 + 0x3a8) + 0xb8));
          }
          plVar22 = (longlong *)*plVar22;
          fVar40 = ((float)iVar32 + 1.0) / (float)*(int *)(lVar31 + 0x9c);
          if (ABS(fVar40) <= 1e-05) {
            plVar18 = (longlong *)(lVar21 + lVar27);
LAB_142b5d4ee:
            local_1b8 = (int *)*plVar18;
            uStack_1b0 = (double)plVar18[1];
            local_1a8 = *(undefined1 (*) [16])(plVar18 + 2);
            _local_198 = *(undefined1 (*) [16])(plVar18 + 4);
            local_188 = *(undefined1 (*) [16])(plVar18 + 6);
          }
          else {
            if (ABS(fVar40 + -1.0) <= 1e-05) {
              plVar18 = (longlong *)(lVar21 + lVar27 + 0x60);
              goto LAB_142b5d4ee;
            }
            dVar49 = (double)fVar40;
            dVar52 = (double)fVar40;
            dVar45 = (double)DAT_149934d80 - dVar49;
            dVar48 = DAT_149934d80._8_8_ - dVar52;
            pdVar1 = (double *)(lVar21 + 0x20 + lVar27);
            pdVar2 = (double *)(lVar21 + 0x30 + lVar27);
            pdVar4 = (double *)(lVar21 + 0x80 + lVar27);
            pdVar5 = (double *)(lVar21 + 0x90 + lVar27);
            dVar60 = pdVar5[1] * dVar52 + pdVar2[1] * dVar48;
            stack0xfffffffffffffe70 = pdVar4[1] * dVar52 + pdVar1[1] * dVar48;
            local_198._0_8_ = *pdVar4 * dVar49 + *pdVar1 * dVar45;
            local_188._8_4_ = SUB84(dVar60,0);
            local_188._0_8_ = *pdVar5 * dVar49 + *pdVar2 * dVar45;
            local_188._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
            auVar57 = *(undefined1 (*) [16])(lVar21 + lVar27);
            auVar6 = *(undefined1 (*) [16])(lVar21 + 0x10 + lVar27);
            pdVar1 = (double *)(lVar21 + 0x60 + lVar27);
            dVar60 = *pdVar1;
            dVar53 = pdVar1[1];
            pdVar1 = (double *)(lVar21 + 0x70 + lVar27);
            dVar63 = *pdVar1;
            dVar59 = pdVar1[1];
            dVar54 = dVar63 * auVar6._0_8_ + dVar60 * auVar57._0_8_;
            dVar58 = dVar59 * auVar6._8_8_ + dVar53 * auVar57._8_8_;
            lVar36 = -(ulonglong)(0.0 <= dVar54 + dVar58);
            lVar37 = -(ulonglong)(0.0 <= dVar54 + dVar58);
            uVar41 = (undefined4)lVar37;
            uVar43 = (undefined4)((ulonglong)lVar37 >> 0x20);
            auVar56._0_8_ = 0.0 - auVar57._0_8_;
            auVar56._8_8_ = 0.0 - auVar57._8_8_;
            auVar10._8_4_ = uVar41;
            auVar10._0_8_ = lVar36;
            auVar10._12_4_ = uVar43;
            auVar57 = blendvpd(auVar56,auVar57,auVar10);
            auVar62._0_8_ = 0.0 - auVar6._0_8_;
            auVar62._8_8_ = 0.0 - auVar6._8_8_;
            dVar54 = auVar57._0_8_ * dVar45 + dVar60 * dVar49;
            dVar58 = auVar57._8_8_ * dVar48 + dVar53 * dVar52;
            auVar11._8_4_ = uVar41;
            auVar11._0_8_ = lVar36;
            auVar11._12_4_ = uVar43;
            auVar57 = blendvpd(auVar62,auVar6,auVar11);
            dVar63 = auVar57._0_8_ * dVar45 + dVar63 * dVar49;
            dVar59 = auVar57._8_8_ * dVar48 + dVar59 * dVar52;
            dVar60 = dVar63 * dVar63 + dVar54 * dVar54;
            dVar53 = dVar59 * dVar59 + dVar58 * dVar58;
            auVar47._0_8_ = dVar60 + dVar53;
            auVar47._8_8_ = dVar60 + dVar53;
            uVar38 = -(ulonglong)(1e-08 <= auVar47._8_8_);
            auVar57 = sqrtpd(auVar47,auVar47);
            auVar57 = divpd(_DAT_149934d80,auVar57);
            auVar51._0_8_ = auVar57._0_8_ * dVar63;
            auVar51._8_8_ = auVar57._8_8_ * dVar59;
            local_1b8 = (int *)((ulonglong)(dVar54 * auVar57._0_8_) &
                               -(ulonglong)(1e-08 <= auVar47._0_8_));
            uStack_1b0 = (double)((ulonglong)(dVar58 * auVar57._8_8_) & uVar38);
            auVar12._8_4_ = (int)uVar38;
            auVar12._0_8_ = -(ulonglong)(1e-08 <= auVar47._0_8_);
            auVar12._12_4_ = (int)(uVar38 >> 0x20);
            local_1a8 = blendvpd(_DAT_149935300,auVar51,auVar12);
          }
          local_178 = (undefined4)DAT_14c846510;
          uStack_174 = DAT_14c846510._4_4_;
          uStack_170 = (undefined4)DAT_14c846518;
          uStack_16c = DAT_14c846518._4_4_;
          local_168 = DAT_14c846520;
          uStack_160 = 0;
          bVar15 = *(byte *)((longlong)plVar22 + 0x21);
          if ((~bVar15 & 0x18) == 0) {
            bVar20 = (bVar15 & 0x20) >> 5;
          }
          else {
            bVar20 = 0;
          }
          if ((~bVar15 & 3) == 0) {
            bVar15 = (bVar15 & 4) >> 2;
          }
          else {
            bVar15 = 0;
          }
          if (((*(byte *)(plVar22 + 4) & 1) == 0) &&
             ((((9.99999993922529e-09 < ABS((double)plVar22[0xc]) ||
                (9.99999993922529e-09 < ABS((double)plVar22[0xd]))) ||
               (9.99999993922529e-09 < ABS((double)plVar22[0xe]))) ||
              (((9.99999993922529e-09 < ABS((double)plVar22[9]) ||
                (9.99999993922529e-09 < ABS((double)plVar22[10]))) ||
               (9.99999993922529e-09 < ABS((double)plVar22[0xb]))))))) {
            if (bVar20 == 0) {
              _local_198 = *(undefined1 (*) [16])(plVar22 + 0x2a);
              local_188._8_8_ = 0;
              local_188._0_8_ = plVar22[0x2c];
            }
            if (bVar15 == 0) {
              local_1b8 = (int *)plVar22[0x26];
              uStack_1b0 = (double)plVar22[0x27];
              local_1a8 = *(undefined1 (*) [16])(plVar22 + 0x28);
            }
          }
          (**(code **)(*plVar22 + 0x48))(plVar22,&local_1b8);
          lVar27 = lVar27 + 0xd0;
        } while ((longlong)iVar16 * 0xd0 - lVar27 != 0);
        if (*(int *)(lVar31 + 0x490) != 0) {
          local_1b8 = (int *)CONCAT62(local_1b8._2_6_,0x100);
          FUN_1448f22e4(*(undefined8 *)(lVar31 + 0x3f0),&local_1b8);
        }
      }
      if (*(char *)(lVar31 + 0x402) == '\0') {
        FUN_14025a7da(*(undefined8 *)(lVar31 + 0x3f0),local_128);
      }
      lVar21 = (longlong)*(int *)(*(longlong *)(lVar31 + 0x3a8) + 0x130);
      if (lVar21 != 0) {
        piVar29 = *(int **)(*(longlong *)(lVar31 + 0x3a8) + 0x128);
        piVar24 = piVar29 + lVar21 * 0x1a;
        do {
          if (*piVar29 == 1) {
            if (((piVar29[2] != 5) ||
                (puVar17 = *(undefined8 **)(piVar29 + 4), puVar17 == (undefined8 *)0x0)) ||
               (iVar16 = (**(code **)*puVar17)(puVar17), iVar16 != 1)) {
              if ((piVar29[6] == 5) &&
                 (puVar17 = *(undefined8 **)(piVar29 + 8), puVar17 != (undefined8 *)0x0)) {
                iVar16 = (**(code **)*puVar17)(puVar17);
                if (iVar16 != 1) {
                  puVar17 = (undefined8 *)0x0;
                }
              }
              else {
                puVar17 = (undefined8 *)0x0;
              }
            }
            uVar9 = puVar17[0x3e];
            iVar16 = *(int *)(lVar31 + 0x5d8);
            *(uint *)(lVar31 + 0x5d8) = iVar16 + 1U;
            if (*(uint *)(lVar31 + 0x5dc) < iVar16 + 1U) {
              FUN_14028477c(local_208,iVar16);
            }
            piVar30 = piVar29 + 2;
            lVar31 = *local_208;
            lVar21 = (longlong)iVar16 * 0x58;
            plVar22 = (longlong *)(lVar31 + lVar21);
            *(undefined8 *)(lVar31 + lVar21) = uVar9;
            *(undefined4 *)(lVar31 + 8 + lVar21) = 0xffffffff;
            *(undefined8 *)(lVar31 + 0xc + lVar21) = 0;
            *(int *)(lVar31 + 0x14 + lVar21) = piVar29[1];
            uVar9 = *(undefined8 *)(piVar29 + 0xc);
            puVar17 = (undefined8 *)(lVar31 + 0x18 + lVar21);
            *puVar17 = *(undefined8 *)(piVar29 + 10);
            puVar17[1] = uVar9;
            *(undefined8 *)(lVar31 + 0x28 + lVar21) = *(undefined8 *)(piVar29 + 0xe);
            *(undefined8 *)(lVar31 + 0x30 + lVar21) = *(undefined8 *)(piVar29 + 0x10);
            *(undefined8 *)(lVar31 + 0x38 + lVar21) = *(undefined8 *)(piVar29 + 0x12);
            iVar16 = piVar29[0x15];
            iVar32 = piVar29[0x16];
            iVar7 = piVar29[0x17];
            piVar3 = (int *)(lVar31 + 0x40 + lVar21);
            *piVar3 = piVar29[0x14];
            piVar3[1] = iVar16;
            piVar3[2] = iVar32;
            piVar3[3] = iVar7;
            *(undefined8 *)(lVar31 + 0x50 + lVar21) = *(undefined8 *)(piVar29 + 0x18);
            local_1b8 = piVar30;
            local_158 = piVar29 + 6;
            local_218 = (uint)CONCAT71((int7)((ulonglong)(piVar29 + 6) >> 8),1);
            ppiVar19 = (int **)&local_1b8;
            ppiVar33 = &local_158;
            do {
              if ((((**ppiVar19 == 5) &&
                   (puVar17 = *(undefined8 **)(*ppiVar19 + 2), puVar17 != (undefined8 *)0x0)) &&
                  (iVar16 = (**(code **)*puVar17)(puVar17), iVar16 == 1)) &&
                 (puVar17[0x3e] == *plVar22)) {
                *(undefined4 *)(plVar22 + 1) = *(undefined4 *)((longlong)puVar17 + 0x1fc);
                piVar30 = *ppiVar33;
                break;
              }
              ppiVar19 = &local_158;
              uVar35 = local_218 & 1;
              local_218 = 0;
              ppiVar33 = (int **)&local_1b8;
            } while (uVar35 != 0);
            iVar32 = local_214;
            lVar31 = local_210;
            if (*piVar30 == 5) {
              lVar21 = *(longlong *)(piVar30 + 2);
              if ((lVar21 != 0) && (*(int *)(lVar21 + 0x10) == 3)) {
                piVar30 = (int *)(lVar21 + 0x18);
                goto LAB_142b5d82c;
              }
            }
            else if ((*piVar30 == 3) && (piVar30 = piVar30 + 2, piVar30 != (int *)0x0)) {
LAB_142b5d82c:
              *(undefined8 *)((longlong)plVar22 + 0xc) = *(undefined8 *)piVar30;
            }
          }
          piVar29 = piVar29 + 0x1a;
        } while (piVar29 != piVar24);
      }
      if (local_128[0] != 0.0) {
        FUN_1400020a8();
      }
      iVar16 = iVar32 + 1;
    } while (iVar32 + 1 < *(int *)(lVar31 + 0x9c));
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b5d8fc FUN_142b5d8fc body=29 status=ok
// SIG undefined FUN_142b5d8fc(void)

undefined8 FUN_142b5d8fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5d91a FUN_142b5d91a body=223 status=ok
// SIG undefined FUN_142b5d91a(void)

void FUN_142b5d91a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,0x10);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 142b5da3c FUN_142b5da3c body=12 status=ok
// SIG undefined FUN_142b5da3c(void)

void FUN_142b5da3c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5da45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5da48 FUN_142b5da48 body=29 status=ok
// SIG undefined FUN_142b5da48(void)

undefined8 FUN_142b5da48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5da66 FUN_142b5da66 body=1727 status=ok
// SIG undefined FUN_142b5da66(void)

void FUN_142b5da66(longlong *param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  longlong local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong local_228;
  undefined8 uStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  code *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar4 = *param_3;
  iVar5 = *(int *)(*param_1 + 0x14 + (ulonglong)(2 < iVar4) * 4);
  bVar13 = (byte)(1 << ((byte)iVar4 & 0x1f));
  if (iVar5 == 2) {
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + 0x21);
    *pbVar1 = *pbVar1 | bVar13;
    *(undefined8 *)(param_2 + 0x1f8) = 0;
    *(undefined1 *)(param_2 + 0x200) = 1;
    local_128 = *(longlong *)(param_2 + 0x250);
    uStack_120 = *(undefined8 *)(param_2 + 600);
    local_118 = *(longlong **)(param_2 + 0x260);
    uStack_110 = *(undefined8 *)(param_2 + 0x268);
    local_108 = *(longlong *)(param_2 + 0x270);
    uStack_100 = *(undefined8 *)(param_2 + 0x278);
    local_f8 = *(undefined8 *)(param_2 + 0x280);
    uStack_f0 = *(undefined8 *)(param_2 + 0x288);
    uVar9 = local_f8;
    uVar10 = uStack_f0;
    uVar8 = uStack_110;
    uVar7 = uStack_120;
    *(ulonglong *)(param_2 + 0x280) = CONCAT44(uStack_154,local_158);
    *(ulonglong *)(param_2 + 0x288) = CONCAT44(uStack_14c,uStack_150);
    *(undefined ***)(param_2 + 0x270) = &PTR_LAB_14a1e14a0;
    *(undefined **)(param_2 + 0x278) = &DAT_142b5e5a6;
    *(undefined8 *)(param_2 + 0x260) = 0;
    *(ulonglong *)(param_2 + 0x268) = CONCAT44(uStack_16c,uStack_170);
    *(undefined1 **)(param_2 + 0x250) = &LAB_147102e92;
    *(ulonglong *)(param_2 + 600) = CONCAT44(uStack_17c,uStack_180);
    uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
    uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
    local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
    uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
    local_158 = (undefined4)local_f8;
    uStack_154 = local_f8._4_4_;
    uStack_150 = (undefined4)uStack_f0;
    uStack_14c = uStack_f0._4_4_;
    local_168 = local_108;
    uStack_160 = uStack_100;
    local_178 = local_118;
    uStack_170 = (undefined4)uStack_110;
    uStack_16c = uStack_110._4_4_;
    local_188 = local_128;
    uStack_180 = (undefined4)uStack_120;
    uStack_17c = uStack_120._4_4_;
    if (local_128 != 0) {
      plVar15 = local_178;
      if (local_118 == (longlong *)0x0) {
        plVar15 = &local_168;
      }
      uStack_120 = uVar7;
      uStack_110 = uVar8;
      local_f8 = uVar9;
      uStack_f0 = uVar10;
      (**(code **)(*plVar15 + 0x10))();
    }
    local_128 = *(longlong *)(param_2 + 0x290);
    uStack_120 = *(undefined8 *)(param_2 + 0x298);
    local_118 = *(longlong **)(param_2 + 0x2a0);
    uStack_110 = *(undefined8 *)(param_2 + 0x2a8);
    local_108 = *(longlong *)(param_2 + 0x2b0);
    uStack_100 = *(undefined8 *)(param_2 + 0x2b8);
    local_f8 = *(undefined8 *)(param_2 + 0x2c0);
    uStack_f0 = *(undefined8 *)(param_2 + 0x2c8);
    uVar9 = local_f8;
    uVar10 = uStack_f0;
    uVar8 = uStack_110;
    uVar7 = uStack_120;
    *(ulonglong *)(param_2 + 0x2c0) = CONCAT44(uStack_154,local_158);
    *(ulonglong *)(param_2 + 0x2c8) = CONCAT44(uStack_14c,uStack_150);
    *(undefined ***)(param_2 + 0x2b0) = &PTR_LAB_14a1e14c0;
    *(undefined1 **)(param_2 + 0x2b8) = &LAB_142b5e5a8;
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    *(ulonglong *)(param_2 + 0x2a8) = CONCAT44(uStack_16c,uStack_170);
    *(undefined1 **)(param_2 + 0x290) = &LAB_147102ee4;
    *(ulonglong *)(param_2 + 0x298) = CONCAT44(uStack_17c,uStack_180);
    uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
    uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
    local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
    uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
    local_158 = (undefined4)local_f8;
    uStack_154 = local_f8._4_4_;
    uStack_150 = (undefined4)uStack_f0;
    uStack_14c = uStack_f0._4_4_;
    local_168 = local_108;
    uStack_160 = uStack_100;
    local_178 = local_118;
    uStack_170 = (undefined4)uStack_110;
    uStack_16c = uStack_110._4_4_;
    local_188 = local_128;
    uStack_180 = (undefined4)uStack_120;
    uStack_17c = uStack_120._4_4_;
    uStack_120 = uVar7;
    uStack_110 = uVar8;
    local_f8 = uVar9;
    uStack_f0 = uVar10;
    if (local_128 == 0) goto LAB_142b5e0df;
    plVar15 = &local_168;
    if (local_118 != (longlong *)0x0) {
      plVar15 = local_178;
    }
    lVar14 = *plVar15;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + 0x21);
        *pbVar1 = *pbVar1 & ~bVar13;
        *(undefined8 *)(param_2 + 0x1f8) = 0;
        *(undefined1 *)(param_2 + 0x200) = 1;
      }
      goto LAB_142b5e0df;
    }
    lVar14 = param_1[3];
    fVar2 = *(float *)(*param_1 + 0x24 + (ulonglong)(2 < iVar4) * 4);
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + 0x21);
    *pbVar1 = *pbVar1 & ~bVar13;
    *(double *)(param_2 + 0x1f8) = (double)(fVar2 * *(float *)(*param_1 + 0x1c));
    *(undefined1 *)(param_2 + 0x200) = 1;
    FUN_144941734(*(undefined8 *)param_1[1],&local_128);
    FUN_144941734(*(undefined8 *)param_1[1],&local_188);
    uVar3 = *(undefined4 *)(param_1[2] + 0x58);
    uVar6 = *(undefined4 *)(lVar14 + 0x9c);
    plVar15 = &local_128;
    plVar16 = &local_228;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *plVar16 = *plVar15;
      plVar15 = plVar15 + 1;
      plVar16 = plVar16 + 1;
    }
    plVar15 = &local_188;
    plVar16 = &local_288;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *plVar16 = *plVar15;
      plVar15 = plVar15 + 1;
      plVar16 = plVar16 + 1;
    }
    fVar2 = *(float *)(*param_1 + 0x20);
    lVar14 = *(longlong *)param_1[1];
    local_298 = *(undefined8 *)(lVar14 + 0xe8);
    local_2a8 = *(undefined8 *)(lVar14 + 0xd8);
    uStack_2a0 = *(undefined8 *)(lVar14 + 0xe0);
    local_2b8 = *(undefined8 *)(lVar14 + 0x100);
    local_2c8 = *(undefined4 *)(lVar14 + 0xf0);
    uStack_2c4 = *(undefined4 *)(lVar14 + 0xf4);
    uStack_2c0 = *(undefined4 *)(lVar14 + 0xf8);
    uStack_2bc = *(undefined4 *)(lVar14 + 0xfc);
    local_1c8 = (code *)0x0;
    local_1b8 = (longlong *)FUN_14001cc68(0x120,0x10);
    *local_1b8 = (longlong)&PTR_FUN_14a1e1460;
    *(undefined4 *)(local_1b8 + 2) = uVar3;
    *(undefined4 *)((longlong)local_1b8 + 0x14) = uVar6;
    *(undefined4 *)(local_1b8 + 3) = 1;
    *(int *)((longlong)local_1b8 + 0x1c) = iVar4;
    plVar15 = &local_228;
    plVar16 = local_1b8 + 4;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *plVar16 = *plVar15;
      plVar15 = plVar15 + 1;
      plVar16 = plVar16 + 1;
    }
    plVar15 = &local_288;
    plVar16 = local_1b8 + 0x10;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *plVar16 = *plVar15;
      plVar15 = plVar15 + 1;
      plVar16 = plVar16 + 1;
    }
    *(float *)(local_1b8 + 0x1c) = fVar2;
    *(float *)((longlong)local_1b8 + 0xe4) = 1.0 - fVar2;
    local_1b8[0x1d] = local_2a8;
    local_1b8[0x1e] = uStack_2a0;
    local_1b8[0x1f] = local_298;
    local_1b8[0x20] = CONCAT44(uStack_2c4,local_2c8);
    local_1b8[0x21] = CONCAT44(uStack_2bc,uStack_2c0);
    local_1b8[0x22] = local_2b8;
    if (local_1b8 + 2 != (undefined8 *)0x0) {
      local_1c8 = FUN_142b5e1ae;
    }
    local_c8 = *(longlong *)(param_2 + 0x250);
    uStack_c0 = *(undefined8 *)(param_2 + 600);
    local_b8 = *(longlong **)(param_2 + 0x260);
    uStack_b0 = *(undefined8 *)(param_2 + 0x268);
    local_a8 = *(undefined8 *)(param_2 + 0x270);
    uStack_a0 = *(undefined8 *)(param_2 + 0x278);
    local_98 = *(undefined8 *)(param_2 + 0x280);
    uStack_90 = *(undefined8 *)(param_2 + 0x288);
    uVar11 = local_98;
    uVar12 = uStack_90;
    uVar9 = local_a8;
    uVar10 = uStack_a0;
    uVar8 = uStack_b0;
    uVar7 = uStack_c0;
    *(ulonglong *)(param_2 + 0x280) = CONCAT44(uStack_194,local_198);
    *(ulonglong *)(param_2 + 0x288) = CONCAT44(uStack_18c,uStack_190);
    *(ulonglong *)(param_2 + 0x270) = CONCAT44(uStack_1a4,local_1a8);
    *(ulonglong *)(param_2 + 0x278) = CONCAT44(uStack_19c,uStack_1a0);
    *(longlong **)(param_2 + 0x260) = local_1b8;
    *(ulonglong *)(param_2 + 0x268) = CONCAT44(uStack_1ac,uStack_1b0);
    *(code **)(param_2 + 0x250) = local_1c8;
    *(ulonglong *)(param_2 + 600) = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_198 = (undefined4)local_98;
    uStack_194 = local_98._4_4_;
    uStack_190 = (undefined4)uStack_90;
    uStack_18c = uStack_90._4_4_;
    local_1a8 = (undefined4)local_a8;
    uStack_1a4 = local_a8._4_4_;
    uStack_1a0 = (undefined4)uStack_a0;
    uStack_19c = uStack_a0._4_4_;
    local_1b8 = local_b8;
    uStack_1b0 = (undefined4)uStack_b0;
    uStack_1ac = uStack_b0._4_4_;
    local_1c8 = (code *)local_c8;
    uStack_1c0 = (undefined4)uStack_c0;
    uStack_1bc = uStack_c0._4_4_;
    uStack_c0 = uVar7;
    uStack_b0 = uVar8;
    local_a8 = uVar9;
    uStack_a0 = uVar10;
    local_98 = uVar11;
    uStack_90 = uVar12;
    if (local_c8 != 0) {
      plVar15 = local_1b8;
      if (local_b8 == (longlong *)0x0) {
        plVar15 = (longlong *)&local_1a8;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    local_228 = *(longlong *)(param_2 + 0x290);
    uStack_220 = *(undefined8 *)(param_2 + 0x298);
    local_218 = *(longlong **)(param_2 + 0x2a0);
    uStack_210 = *(undefined8 *)(param_2 + 0x2a8);
    local_208 = *(longlong *)(param_2 + 0x2b0);
    uStack_200 = *(undefined8 *)(param_2 + 0x2b8);
    local_1f8 = *(undefined8 *)(param_2 + 0x2c0);
    uStack_1f0 = *(undefined8 *)(param_2 + 0x2c8);
    uVar10 = local_1f8;
    uVar11 = uStack_1f0;
    uVar9 = uStack_200;
    uVar8 = uStack_210;
    uVar7 = uStack_220;
    *(ulonglong *)(param_2 + 0x2c0) = CONCAT44(uStack_254,local_258);
    *(ulonglong *)(param_2 + 0x2c8) = CONCAT44(uStack_24c,uStack_250);
    *(undefined ***)(param_2 + 0x2b0) = &PTR_LAB_14a1e1480;
    *(int *)(param_2 + 0x2b8) = iVar4;
    *(undefined4 *)(param_2 + 700) = uStack_25c;
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    *(ulonglong *)(param_2 + 0x2a8) = CONCAT44(uStack_26c,uStack_270);
    *(code **)(param_2 + 0x290) = FUN_142b5e512;
    *(ulonglong *)(param_2 + 0x298) = CONCAT44(uStack_27c,uStack_280);
    uStack_220._4_4_ = (undefined4)((ulonglong)uStack_220 >> 0x20);
    uStack_210._4_4_ = (undefined4)((ulonglong)uStack_210 >> 0x20);
    uStack_200._4_4_ = (undefined4)((ulonglong)uStack_200 >> 0x20);
    local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
    uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
    local_258 = (undefined4)local_1f8;
    uStack_254 = local_1f8._4_4_;
    uStack_250 = (undefined4)uStack_1f0;
    uStack_24c = uStack_1f0._4_4_;
    local_268 = local_208;
    uStack_260 = (undefined4)uStack_200;
    uStack_25c = uStack_200._4_4_;
    local_278 = local_218;
    uStack_270 = (undefined4)uStack_210;
    uStack_26c = uStack_210._4_4_;
    local_288 = local_228;
    uStack_280 = (undefined4)uStack_220;
    uStack_27c = uStack_220._4_4_;
    uStack_220 = uVar7;
    uStack_210 = uVar8;
    uStack_200 = uVar9;
    local_1f8 = uVar10;
    uStack_1f0 = uVar11;
    if (local_228 == 0) goto LAB_142b5e0df;
    plVar15 = local_278;
    if (local_218 == (longlong *)0x0) {
      plVar15 = &local_268;
    }
    lVar14 = *plVar15;
  }
  (**(code **)(lVar14 + 0x10))(plVar15);
LAB_142b5e0df:
  if ((local_80 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5e126 FUN_142b5e126 body=70 status=ok
// SIG undefined FUN_142b5e126(void)

undefined8 * FUN_142b5e126(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a1e1440;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142b5e172 FUN_142b5e172 body=29 status=ok
// SIG undefined FUN_142b5e172(void)

void FUN_142b5e172(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b5e190 FUN_142b5e190 body=29 status=ok
// SIG undefined FUN_142b5e190(void)

undefined8 FUN_142b5e190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e1ae FUN_142b5e1ae body=733 status=ok
// SIG undefined FUN_142b5e1ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5e1ae(float *param_1,longlong param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  ulonglong uVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  ulonglong uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  
  fVar17 = (float)(int)param_1[2] / (float)(int)param_1[1];
  if (ABS(fVar17) <= 1e-05) {
    uVar22 = *(ulonglong *)(param_1 + 4);
    uVar27 = *(ulonglong *)(param_1 + 6);
    auVar24 = *(undefined1 (*) [16])(param_1 + 8);
    dVar6 = *(double *)(param_1 + 0xc);
    dVar7 = *(double *)(param_1 + 0xe);
    dVar28 = *(double *)(param_1 + 0x10);
  }
  else if (ABS(fVar17 + -1.0) <= 1e-05) {
    uVar22 = *(ulonglong *)(param_1 + 0x1c);
    uVar27 = *(ulonglong *)(param_1 + 0x1e);
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x20);
    dVar6 = *(double *)(param_1 + 0x24);
    dVar7 = *(double *)(param_1 + 0x26);
    dVar28 = *(double *)(param_1 + 0x28);
  }
  else {
    dVar11 = (double)fVar17;
    dVar12 = (double)fVar17;
    dVar28 = (double)DAT_149934d80 - dVar11;
    dVar10 = DAT_149934d80._8_8_ - dVar12;
    auVar29._0_8_ = *(double *)(param_1 + 0x10) * dVar28;
    auVar29._8_8_ = *(double *)(param_1 + 0x12) * dVar10;
    dVar6 = *(double *)(param_1 + 0x24) * dVar11 + *(double *)(param_1 + 0xc) * dVar28;
    dVar7 = *(double *)(param_1 + 0x26) * dVar12 + *(double *)(param_1 + 0xe) * dVar10;
    auVar24 = *(undefined1 (*) [16])(param_1 + 4);
    auVar2 = *(undefined1 (*) [16])(param_1 + 8);
    dVar21 = *(double *)(param_1 + 0x20) * auVar2._0_8_ +
             *(double *)(param_1 + 0x1c) * auVar24._0_8_;
    dVar25 = *(double *)(param_1 + 0x22) * auVar2._8_8_ +
             *(double *)(param_1 + 0x1e) * auVar24._8_8_;
    lVar13 = -(ulonglong)(0.0 <= dVar21 + dVar25);
    lVar15 = -(ulonglong)(0.0 <= dVar21 + dVar25);
    uVar18 = (undefined4)lVar15;
    uVar19 = (undefined4)((ulonglong)lVar15 >> 0x20);
    auVar23._0_8_ = 0.0 - auVar24._0_8_;
    auVar23._8_8_ = 0.0 - auVar24._8_8_;
    auVar4._8_4_ = uVar18;
    auVar4._0_8_ = lVar13;
    auVar4._12_4_ = uVar19;
    auVar24 = blendvpd(auVar23,auVar24,auVar4);
    auVar31._0_8_ = 0.0 - auVar2._0_8_;
    auVar31._8_8_ = 0.0 - auVar2._8_8_;
    dVar25 = auVar24._0_8_ * dVar28 + *(double *)(param_1 + 0x1c) * dVar11;
    dVar26 = auVar24._8_8_ * dVar10 + *(double *)(param_1 + 0x1e) * dVar12;
    auVar24._8_4_ = uVar18;
    auVar24._0_8_ = lVar13;
    auVar24._12_4_ = uVar19;
    auVar24 = blendvpd(auVar31,auVar2,auVar24);
    dVar30 = auVar24._0_8_ * dVar28 + *(double *)(param_1 + 0x20) * dVar11;
    dVar32 = auVar24._8_8_ * dVar10 + *(double *)(param_1 + 0x22) * dVar12;
    dVar10 = dVar30 * dVar30 + dVar25 * dVar25;
    dVar12 = dVar32 * dVar32 + dVar26 * dVar26;
    auVar8._8_4_ = SUB84(dVar12,0);
    auVar8._0_8_ = dVar10;
    auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar21 = dVar10 + auVar8._8_8_;
    dVar28 = *(double *)(param_1 + 0x28) * dVar11 + auVar29._0_8_;
    uVar14 = -(ulonglong)(1e-08 <= dVar10 + dVar12);
    uVar16 = -(ulonglong)(1e-08 <= dVar21);
    auVar9._8_4_ = SUB84(dVar21,0);
    auVar9._0_8_ = dVar10 + dVar12;
    auVar9._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar24 = sqrtpd(auVar29,auVar9);
    auVar24 = divpd(_DAT_149934d80,auVar24);
    auVar20._0_8_ = auVar24._0_8_ * dVar30;
    auVar20._8_8_ = auVar24._8_8_ * dVar32;
    uVar22 = (ulonglong)(dVar25 * auVar24._0_8_) & uVar14;
    uVar27 = (ulonglong)(dVar26 * auVar24._8_8_) & uVar16;
    auVar2._8_4_ = (int)uVar16;
    auVar2._0_8_ = uVar14;
    auVar2._12_4_ = (int)(uVar16 >> 0x20);
    auVar24 = blendvpd(_DAT_149935300,auVar20,auVar2);
  }
  param_1[2] = (float)((int)param_1[2] + 1);
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x158) = auVar5;
  *(double *)(param_2 + 0x168) = dVar28;
  *(ulonglong *)(param_2 + 0x120) = uVar22;
  *(ulonglong *)(param_2 + 0x128) = uVar27;
  *(undefined1 (*) [16])(param_2 + 0x130) = auVar24;
  FUN_140b8ca25(param_1[3],param_2);
  dVar6 = *(double *)(param_2 + 0x70);
  dVar7 = *(double *)(param_2 + 0x78);
  dVar28 = *(double *)(param_1 + 0x3e);
  dVar10 = *(double *)(param_1 + 0x3c);
  dVar12 = *(double *)(param_2 + 0x80);
  dVar21 = *(double *)(param_1 + 0x40);
  dVar11 = *(double *)(param_2 + 0x88);
  dVar25 = *(double *)(param_2 + 0x90);
  dVar26 = *(double *)(param_1 + 0x38);
  dVar30 = *(double *)(param_1 + 0x36);
  dVar32 = *(double *)(param_2 + 0x98);
  dVar1 = *(double *)(param_1 + 0x3a);
  dVar3 = (double)FUN_1471176da(param_2);
  *(double *)(param_2 + 0x1d0) =
       (double)*param_1 * -dVar3 * (double)param_1[0x34] -
       (double)((float)(dVar32 * dVar1 + dVar11 * dVar30 + dVar25 * dVar26 +
                       dVar12 * dVar21 + dVar6 * dVar10 + dVar7 * dVar28) * param_1[0x35]);
  *(undefined8 *)(param_2 + 0x220) = 0;
  *(undefined8 *)(param_2 + 0x228) = 0;
  return;
}



// FUNCTION 142b5e48c FUN_142b5e48c body=68 status=ok
// SIG undefined FUN_142b5e48c(void)

void FUN_142b5e48c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a1e1460;
  memcpy(puVar1 + 2,(void *)(param_1 + 0x10),0x110);
  return;
}



// FUNCTION 142b5e4d6 FUN_142b5e4d6 body=29 status=ok
// SIG undefined FUN_142b5e4d6(void)

void FUN_142b5e4d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b5e4f4 FUN_142b5e4f4 body=29 status=ok
// SIG undefined FUN_142b5e4f4(void)

undefined8 FUN_142b5e4f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e512 FUN_142b5e512 body=76 status=ok
// SIG undefined FUN_142b5e512(void)

void FUN_142b5e512(int *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14711869a(param_2,local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48[*param_1]);
}



// FUNCTION 142b5e588 FUN_142b5e588 body=29 status=ok
// SIG undefined FUN_142b5e588(void)

undefined8 FUN_142b5e588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e5ac FUN_142b5e5ac body=77 status=ok
// SIG undefined FUN_142b5e5ac(void)

void FUN_142b5e5ac(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  param_1[0x20] = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = DAT_14c8464f0;
  param_1[0x40] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0x3e23d70a3c83126f;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 142b5e5fa FUN_142b5e5fa body=22 status=ok
// SIG undefined FUN_142b5e5fa(void)

void FUN_142b5e5fa(undefined8 *param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(bool *)*param_1 = *(double *)(param_2 + 0x38) <= 0.0;
  }
  return;
}



// FUNCTION 142b5e628 FUN_142b5e628 body=5 status=ok
// SIG undefined FUN_142b5e628(void)

longlong FUN_142b5e628(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b5e62e FUN_142b5e62e body=12 status=ok
// SIG undefined FUN_142b5e62e(void)

void FUN_142b5e62e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5e637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5e63a FUN_142b5e63a body=29 status=ok
// SIG undefined FUN_142b5e63a(void)

undefined8 FUN_142b5e63a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e658 FUN_142b5e658 body=24 status=ok
// SIG undefined FUN_142b5e658(void)

void FUN_142b5e658(undefined8 *param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(byte *)*param_1 = *(byte *)*param_1 | *(double *)(param_2 + 0x38) <= 0.0;
  }
  return;
}



// FUNCTION 142b5e688 FUN_142b5e688 body=5 status=ok
// SIG undefined FUN_142b5e688(void)

longlong FUN_142b5e688(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b5e68e FUN_142b5e68e body=12 status=ok
// SIG undefined FUN_142b5e68e(void)

void FUN_142b5e68e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5e697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5e69a FUN_142b5e69a body=29 status=ok
// SIG undefined FUN_142b5e69a(void)

undefined8 FUN_142b5e69a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e6b8 FUN_142b5e6b8 body=228 status=ok
// SIG undefined FUN_142b5e6b8(void)

void FUN_142b5e6b8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar9 = *param_1;
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
    iVar2 = *(int *)(lVar9 + 0x78);
    *(uint *)(lVar9 + 0x78) = iVar2 + 1U;
    if (*(uint *)(lVar9 + 0x7c) < iVar2 + 1U) {
      FUN_1447de67e(lVar9 + 0x60,iVar2);
    }
    lVar8 = lVar9 + 0x60;
    if (*(longlong *)(lVar9 + 0x70) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0x70);
    }
    *(undefined4 *)(lVar8 + (longlong)iVar2 * 4) = uVar1;
    iVar2 = *(int *)(lVar3 + 0x1c0);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x1b8);
      lVar9 = 0;
      do {
        local_48 = *(undefined8 *)(lVar3 + lVar9);
        puVar4 = (undefined8 *)param_1[1];
        pcVar5 = (code *)*puVar4;
        plVar7 = puVar4 + 4;
        if ((longlong *)puVar4[2] != (longlong *)0x0) {
          plVar7 = (longlong *)puVar4[2];
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar5)(uVar6,&local_48);
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar2 * 8 != lVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5e7b6 FUN_142b5e7b6 body=5 status=ok
// SIG undefined FUN_142b5e7b6(void)

longlong FUN_142b5e7b6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b5e7bc FUN_142b5e7bc body=12 status=ok
// SIG undefined FUN_142b5e7bc(void)

void FUN_142b5e7bc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5e7c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5e7c8 FUN_142b5e7c8 body=29 status=ok
// SIG undefined FUN_142b5e7c8(void)

undefined8 FUN_142b5e7c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e7e6 FUN_142b5e7e6 body=67 status=ok
// SIG undefined FUN_142b5e7e6(void)

void FUN_142b5e7e6(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  
  if (*(char *)(param_3 + 0x3e0) == '\0') {
    FUN_140cddb58();
  }
  bVar1 = 0;
  if (*(char *)(param_3 + 0x3c3) != '\0') {
    bVar1 = *(byte *)(param_3 + 0x3c2);
  }
  *(byte *)*param_1 = *(byte *)*param_1 | bVar1;
  return;
}



// FUNCTION 142b5e82a FUN_142b5e82a body=243 status=ok
// SIG undefined FUN_142b5e82a(void)

void FUN_142b5e82a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44;
  undefined1 local_3c;
  undefined1 local_37;
  undefined1 local_35;
  undefined1 local_33;
  undefined1 local_31;
  undefined1 local_2f;
  undefined8 local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9abbd8) {
    FUN_144b3d300(&DAT_14c9abbd8);
    if (DAT_14c9abbd8 == -1) {
      FUN_1446f470e(&DAT_14c9abbd0,L"SetDynamicsBehavior",1);
      _Init_thread_footer(&DAT_14c9abbd8);
    }
  }
  local_44 = 0;
  local_3c = 0;
  local_37 = 0;
  local_35 = 0;
  local_33 = 0;
  local_31 = 0;
  local_2f = 0;
  local_2c = 0xffffffff;
  uStack_24 = 0xffffffff;
  uStack_20 = 0;
  local_1b = 0;
  local_19 = 0;
  if ((undefined8 *)*param_1 != &local_2c) {
    local_2c = *(undefined8 *)*param_1;
  }
  FUN_1470fa650(param_3 + 0x368,&DAT_14c9abbd0,local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5e91e FUN_142b5e91e body=31 status=ok
// SIG undefined FUN_142b5e91e(void)

undefined8 FUN_142b5e91e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e982 FUN_142b5e982 body=9 status=ok
// SIG undefined FUN_142b5e982(void)

void FUN_142b5e982(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b5e9bc FUN_142b5e9bc body=29 status=ok
// SIG undefined FUN_142b5e9bc(void)

undefined8 FUN_142b5e9bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5e9da FUN_142b5e9da body=405 status=ok
// SIG undefined FUN_142b5e9da(void)

longlong FUN_142b5e9da(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_2;
  uVar2 = *(ulonglong *)(((longlong *)*param_1)[1] + (longlong)*(int *)param_1[1] * 8);
  local_38 = uVar2;
  if (local_30 < uVar2) {
    local_38 = local_30;
    local_30 = uVar2;
  }
  lVar3 = *(longlong *)*param_1;
  plVar1 = (longlong *)(lVar3 + 0x208);
  uVar6 = ((uint)(local_38 >> 0x14) & 0xffff ^ (uint)(local_38 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar7 = ((uint)(local_30 >> 0x14) & 0xffff ^ (uint)(local_30 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)(lVar3 + 0x210) != *(int *)(lVar3 + 0x23c)) {
    lVar5 = lVar3 + 0x240;
    if (*(longlong *)(lVar3 + 0x248) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x248);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0x250) - 1U &
                             (uVar6 * 0x40 + (uVar7 >> 0x10 ^ uVar7) + (uVar6 >> 2) + 0x9e3779b9 ^
                             uVar6)) * 4);
    if (iVar4 != -1) {
      lVar3 = *plVar1;
      do {
        lVar8 = (longlong)iVar4 * 0x538;
        lVar5 = lVar3 + lVar8;
        if ((*(ulonglong *)(lVar3 + lVar8) == local_38) &&
           (*(ulonglong *)(lVar3 + 8 + lVar8) == local_30)) {
          if (lVar5 != 0) goto LAB_142b5eb16;
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x530);
      } while (iVar4 != -1);
    }
  }
  local_28 = &local_38;
  local_48 = 0;
  FUN_140852f9c(plVar1,&local_1c);
  lVar5 = (longlong)local_1c * 0x538 + *plVar1;
LAB_142b5eb16:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar5 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5eb8e FUN_142b5eb8e body=12 status=ok
// SIG undefined FUN_142b5eb8e(void)

void FUN_142b5eb8e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5eb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5eb9a FUN_142b5eb9a body=29 status=ok
// SIG undefined FUN_142b5eb9a(void)

undefined8 FUN_142b5eb9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5ebb8 FUN_142b5ebb8 body=437 status=ok
// SIG undefined FUN_142b5ebb8(void)

void FUN_142b5ebb8(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if ((((*(byte *)(param_3 + 0x20) & 1) == 0) &&
      ((((9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x60)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x68)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x70)))) ||
       (((9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x48)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x50)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x58)))))))) ||
     (((*(byte *)(param_4 + 0x20) & 1) == 0 &&
      (((9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x60)) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x68)))) ||
       ((9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x70)) ||
        (((9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x48)) ||
          (9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x50)))) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x58)))))))))))) {
    iVar4 = 0;
    do {
      uVar2 = FUN_1471002c4(*(undefined8 *)param_1[1],param_2,iVar4);
      if (uVar2 != 0) {
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + (ulonglong)uVar2 * 0x2a0;
      }
      iVar3 = FUN_1470ffdbe(uVar1,*(undefined8 *)param_1[1],param_2,iVar4,1);
      if (iVar3 != 0) {
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 0x2a0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 6);
  }
  return;
}



// FUNCTION 142b5ed8c FUN_142b5ed8c body=12 status=ok
// SIG undefined FUN_142b5ed8c(void)

void FUN_142b5ed8c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5ed95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5ed98 FUN_142b5ed98 body=29 status=ok
// SIG undefined FUN_142b5ed98(void)

undefined8 FUN_142b5ed98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5edb6 FUN_142b5edb6 body=654 status=ok
// SIG undefined FUN_142b5edb6(void)

void FUN_142b5edb6(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [13];
  char local_73;
  char local_72;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((*(byte *)(param_3 + 0x20) & 1) == 0) &&
      ((((9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x60)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x68)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x70)))) ||
       (((9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x48)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x50)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_3 + 0x58)))))))) ||
     (((*(byte *)(param_4 + 0x20) & 1) == 0 &&
      (((9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x60)) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x68)))) ||
       ((9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x70)) ||
        (((9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x48)) ||
          (9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x50)))) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_4 + 0x58)))))))))))) {
    uVar1 = 0;
    do {
      local_a8 = local_98;
      local_b0 = local_90;
      local_c8 = &local_73;
      local_c0 = local_80;
      local_b8 = local_88;
      FUN_1471001bc(param_2,uVar1 & 0xffffffff,&local_71,&local_72);
      if ((local_73 != '\0') ||
         (((9.99999993922529e-09 <
            ABS(*(double *)(param_2 + 0x770)) + ABS(*(double *)(param_2 + 0x768)) &&
           (*(int *)(param_2 + 0xf30 + uVar1 * 4) != 2)) &&
          ((9.99999993922529e-09 < *(double *)(param_2 + 0x780 + uVar1 * 8) &&
           (9.99999993922529e-09 < *(double *)(param_2 + 0x7b0 + uVar1 * 8))))))) {
        *(int *)*param_1 = *(int *)*param_1 + 1;
      }
      if (local_72 == '\x01') {
        *(int *)*param_1 = *(int *)*param_1 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 6);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b5f064 FUN_142b5f064 body=12 status=ok
// SIG undefined FUN_142b5f064(void)

void FUN_142b5f064(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5f06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5f070 FUN_142b5f070 body=29 status=ok
// SIG undefined FUN_142b5f070(void)

undefined8 FUN_142b5f070(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5f08e FUN_142b5f08e body=125 status=ok
// SIG undefined FUN_142b5f08e(void)

void FUN_142b5f08e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_22 = 0x101;
  local_24 = 0x101;
  local_38 = 1;
  FUN_144a5ad3c(param_2,&local_24,&local_22,1);
  local_26 = 0x101;
  local_28 = 0x101;
  local_38 = 1;
  FUN_1448f23ac(param_2,&local_28,&local_26,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5f128 FUN_142b5f128 body=12 status=ok
// SIG undefined FUN_142b5f128(void)

void FUN_142b5f128(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b5f131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b5f134 FUN_142b5f134 body=29 status=ok
// SIG undefined FUN_142b5f134(void)

undefined8 FUN_142b5f134(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b5f151 FUN_142b5f151 body=1052 status=ok
// SIG undefined FUN_142b5f151(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5f151(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_40;
  int local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_40,&DAT_14c9aba70);
  if (cVar2 == '\0') {
    _DAT_14c9aba70 = 0;
    uRam000000014c9aba78 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_40 = (undefined8 *)&DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_50 = 0;
  local_58 = 0;
  FUN_1412c7f16(&DAT_14c9aba80,L"TaskGraph.TaskPriorities.ORDARSimAsyncTasksAlt",
                L"Task and thread priority for ORDAR simulations started from a forward dynamics node."
                ,0x800);
  atexit(FUN_142b524c4);
  local_40._0_4_ = 10;
  local_58 = 0;
  FUN_14078dbce(&DAT_14c9abac0,L"p.gbx.ForwardDynamics.Replication.MaxStoredStates",&local_40,
                L"The number of replicated states to store locally. A higher number helps keep the simulation running more smoothly when packets are dropped"
               );
  atexit(FUN_142b5252e);
  local_40._0_4_ = 0x3f000000;
  local_58 = 0;
  FUN_140a6b41e(&DAT_14c9abad8,L"p.gbx.ForwardDynamics.Replication.ClientTargetStepOffsetFactor",
                &local_40,
                L"The offset factor for the target client sim step between 0 and 1. A higher number reduces latency at the cost of smoothness."
               );
  atexit(FUN_142b52573);
  local_40._0_4_ = 0x3f000000;
  local_58 = 0;
  FUN_140a6b41e(&DAT_14c9abaf0,L"p.gbx.ForwardDynamics.Replication.LocalTimeDilationMin",&local_40,
                L"The slowest local time dilation that can occur to keep the sim step counter of a local simulation at the correct value"
               );
  atexit(FUN_142b525b8);
  local_40._0_4_ = 0x40000000;
  local_58 = 0;
  FUN_140a6b41e(&DAT_14c9abb08,L"p.gbx.ForwardDynamics.Replication.LocalTimeDilationMax",&local_40,
                L"The fastest local time dilation that can occur to keep the sim step counter of a local simulation at the correct value"
               );
  atexit(FUN_142b525fd);
  local_40 = (undefined8 *)((ulonglong)local_40._4_4_ << 0x20);
  local_58 = 0x40;
  FUN_14078dbce(&DAT_14c9abb20,L"p.gbx.ForwardDynamics.Synchronous",&local_40,
                L"Optional method to force synchronous forward dynamics updates.");
  atexit(FUN_142b52642);
  DAT_14c9abbf8 = 0;
  DAT_14c9abbf0 = 0;
  DAT_14c9abc00 = 0;
  DAT_14c9abbe0 = 0;
  local_40 = (undefined8 *)0x800000014a1e0956;
  local_2c = 10;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_1462b41c4(&local_40);
  _DAT_14c9abb40 = L"GbxPhysics.EExtraCollisionFilterChannel";
  _DAT_14c9abb48 = &DAT_14c872af8;
  _DAT_14c9abb50 = L"ExtraCollisionFilterChannelNames";
  _DAT_14c9abb58 = 0;
  uRam000000014c9abb60 = 0;
  _DAT_14c9abb68 = 0;
  uRam000000014c9abb70 = 0;
  _DAT_14c9abb71 = 0;
  uRam000000014c9abb78 = 0;
  uRam000000014c9abb79 = 0;
  atexit((_func_5014 *)&LAB_142b5b607);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14a1e19d0;
  local_40[3] = FUN_142b5c12c;
  local_58 = 0;
  FUN_14156bb80(&DAT_14c9abb88,L"StartPhysicsPerfTests",&DAT_149dfb77a,&local_40);
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_142b5f48f;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142b5f48f:
  atexit(FUN_142b5c1f2);
  local_58 = 0;
  FUN_14153156c(&DAT_14c9abba0,L"p.gbx.ORDAR.bEnableArticulatedBodyMethodSolving",&DAT_14c9abb98,
                L"If set to true, the articulated body method is used for solving ragdolls. Otherwise, the more traditional PGS rigid body solving method is used."
               );
  atexit(FUN_142b5c237);
  local_58 = 0;
  FUN_14153156c(&DAT_14c9abbb0,L"p.gbx.ORDAR.bEnableLinearLimitProjection",&DAT_14c75f901,
                L"If set to true, linear constraint limit projection will be used for articulations."
               );
  atexit(FUN_142b5c27c);
  local_58 = 0;
  FUN_14153156c(&DAT_14c9abbc0,L"p.gbx.ORDAR.bEnableAngularLimitProjection",&DAT_14c75f900,
                L"If set to true, angular constraint limit projection will be used for articulations."
               );
  atexit(FUN_142b5c2c1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b5f619 FUN_142b5f619 body=13406 status=ok
// SIG undefined FUN_142b5f619(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b5f619(double *param_1,longlong *****param_2,double *param_3)

{
  longlong ***ppplVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  longlong ***ppplVar4;
  longlong ***ppplVar5;
  longlong ***ppplVar6;
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  undefined4 extraout_EAX;
  int iVar12;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  uint uVar13;
  longlong lVar14;
  double *pdVar15;
  longlong ****pppplVar16;
  longlong *****ppppplVar17;
  longlong lVar18;
  longlong lVar19;
  longlong ****pppplVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  longlong *****ppppplVar24;
  longlong *****extraout_XMM0_Qa;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar50;
  undefined1 auVar44 [16];
  double dVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  longlong *****ppppplVar60;
  double dVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  longlong *****ppppplVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  longlong *****ppppplVar79;
  longlong ****local_5b8;
  double dStack_5b0;
  longlong ****local_5a8;
  double dStack_5a0;
  longlong ****local_590;
  longlong ****local_588;
  double dStack_580;
  longlong ****local_578;
  double dStack_570;
  longlong ****local_568;
  longlong ****local_560;
  longlong ****local_558;
  undefined8 uStack_550;
  double local_548;
  undefined8 uStack_540;
  longlong ****local_538;
  undefined8 uStack_530;
  longlong ****local_528;
  double dStack_520;
  undefined **local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  longlong ****local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  longlong ****pppplStack_4a8;
  double dStack_4a0;
  longlong ****local_498;
  double dStack_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  longlong ****local_468;
  double dStack_460;
  longlong ****local_458;
  double dStack_450;
  longlong ****local_448;
  double dStack_440;
  longlong ****local_438;
  double dStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  longlong ***local_408;
  undefined ***local_400;
  double *local_3f8;
  undefined8 local_3f0;
  code *local_3e8;
  undefined1 *local_3e0;
  undefined2 local_258;
  undefined1 local_256;
  undefined4 local_254;
  double local_250;
  double local_248 [2];
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  longlong **local_118;
  longlong **pplStack_110;
  longlong **local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  ppppplVar17 = &local_5b8;
  local_f0 = DAT_14c707940 ^ (ulonglong)&local_538;
  local_510 = 0;
  local_518 = &PTR_LAB_14a1e1938;
  local_4f8 = DAT_14c8464f0;
  local_508 = DAT_14c8464e0;
  uStack_500 = DAT_14c8464e8;
  local_4f0 = 0;
  local_558 = (longlong ****)*param_3;
  uStack_550 = 0;
  local_548 = param_3[1];
  uStack_540 = 0;
  local_538 = (longlong ****)param_3[2];
  uStack_530 = 0;
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    ppppplVar60 = (longlong *****)0x7fefffffffffffff;
    lVar14 = 0;
  }
  else {
    pppplVar16 = *param_2;
    lVar14 = (longlong)*(int *)(param_2 + 1) * 0x30;
    ppppplVar60 = (longlong *****)0x7fefffffffffffff;
    lVar18 = 0;
    do {
      pdVar15 = (double *)((longlong)pppplVar16 + lVar18 + 0x10);
      dVar59 = *pdVar15 * param_1[8];
      dVar65 = pdVar15[1] * param_1[9];
      dVar42 = *(double *)((longlong)pppplVar16 + lVar18 + 0x20) * param_1[10];
      dVar23 = *param_1;
      dVar37 = param_1[1];
      dVar50 = param_1[2];
      dVar22 = param_1[3];
      dVar70 = dVar65 * dVar23 - dVar59 * dVar37;
      dVar71 = dVar42 * dVar37 - dVar65 * dVar50;
      dVar76 = dVar59 * dVar50 - dVar23 * dVar42;
      dVar71 = dVar71 + dVar71;
      dVar76 = dVar76 + dVar76;
      dVar70 = dVar70 + dVar70;
      dVar59 = (dVar70 * dVar37 - dVar76 * dVar50) + dVar22 * dVar71 + dVar59 + param_1[4];
      dVar50 = (dVar50 * dVar71 - dVar23 * dVar70) + param_1[3] * dVar76 + dVar65 + param_1[5];
      dVar37 = dVar70 * dVar22 + dVar42 + (dVar76 * dVar23 - dVar71 * dVar37) + param_1[6];
      dVar23 = (double)local_538 - dVar37;
      dVar70 = local_548 - dVar50;
      dVar42 = (double)local_558 - dVar59;
      dVar65 = dVar23 * dVar23 + dVar42 * dVar42 + dVar70 * dVar70;
      dVar22 = *(double *)((longlong)pppplVar16 + lVar18 + 0x28);
      ppppplVar79 = (longlong *****)0x0;
      if ((dVar22 * dVar22 <= dVar65) &&
         (dVar65 = SQRT(dVar65), ppppplVar79 = ppppplVar60, dVar65 < (double)ppppplVar60)) {
        dVar71 = 1.0 / dVar65;
        *param_3 = dVar42 * dVar71 * dVar22 + dVar59;
        param_3[1] = dVar70 * dVar71 * dVar22 + dVar50;
        param_3[2] = dVar37 + dVar23 * dVar71 * dVar22;
        ppppplVar79 = (longlong *****)(dVar65 - *(double *)((longlong)pppplVar16 + lVar18 + 0x28));
      }
      ppppplVar60 = ppppplVar79;
      lVar18 = lVar18 + 0x30;
    } while (lVar14 != lVar18);
  }
  local_5b8 = (longlong ****)param_2;
  if ((longlong)*(int *)(param_2 + 5) != 0) {
    pppplVar16 = param_2[4];
    pppplVar20 = pppplVar16 + (longlong)*(int *)(param_2 + 5) * 10;
    local_578 = (longlong ****)ppppplVar60;
    do {
      uVar66 = (undefined4)lVar14;
      auVar44 = *(undefined1 (*) [16])(pppplVar16 + 5);
      auVar25 = divpd(auVar44,_DAT_1499387d0);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = pppplVar16[7];
      auVar34 = divpd(auVar34,_DAT_1499387d0);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar34 = roundpd(auVar34,auVar34,3);
      dVar22 = (auVar44._0_8_ - auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar23 = (auVar44._8_8_ - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar50 = ((double)pppplVar16[7] - auVar34._0_8_ * (double)DAT_1499387d0) *
               0.008726646259971648;
      dVar70 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar37 = sin(dVar22);
      dVar42 = sin(dVar23);
      dVar59 = sin(dVar50);
      sin(dVar70);
      dVar22 = cos(dVar22);
      dVar23 = cos(dVar23);
      dVar65 = cos(dVar50);
      cos(dVar70);
      dVar50 = -(dVar23 * dVar37 * dVar59) + dVar42 * dVar22 * dVar65;
      dVar70 = dVar42 * dVar37 * dVar59 + dVar23 * dVar22 * dVar65;
      dVar71 = dVar37 * dVar42 * dVar65 - dVar22 * dVar23 * dVar59;
      dVar42 = -(dVar37 * dVar23 * dVar65) - dVar22 * dVar42 * dVar59;
      auVar44 = *(undefined1 (*) [16])(param_1 + 8);
      dVar22 = auVar44._0_8_;
      dVar37 = auVar44._8_8_;
      dVar23 = SUB168(*(undefined1 (*) [16])(param_1 + 10),0);
      auVar25._8_8_ = 0x3ff0000000000000;
      auVar25._0_8_ = 0x3ff0000000000000;
      auVar44 = minpd(auVar25,auVar44);
      auVar25 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_1 + 10));
      auVar53._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
      auVar53._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
      iVar12 = movmskpd(extraout_EAX,auVar53);
      auVar44._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
      uVar13 = movmskpd(uVar66,auVar44);
      if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar73 = *param_1;
        dVar74 = param_1[1];
        dVar77 = param_1[2];
        dVar65 = param_1[3];
        dVar59 = param_1[3];
        dVar76 = param_1[1];
        dVar78 = param_1[1];
        dVar72 = param_1[2];
        dVar58 = param_1[2];
        dVar43 = dVar42 * dVar72 * -1.0 +
                 dVar50 * dVar76 + dVar70 * *param_1 * 1.0 + dVar71 * dVar65;
        dVar51 = dVar71 * dVar58 * 1.0 +
                 dVar70 * dVar78 + dVar50 * *param_1 * -1.0 + dVar42 * dVar59;
        auVar52._0_8_ =
             dVar70 * dVar72 * 1.0 + ((*param_1 * dVar42 * 1.0 + dVar50 * dVar65) - dVar71 * dVar76)
        ;
        auVar52._8_8_ =
             dVar50 * dVar58 * -1.0 +
             ((*param_1 * dVar71 * -1.0 + dVar70 * dVar59) - dVar42 * dVar78);
        dVar70 = (double)pppplVar16[2] * dVar22;
        dVar71 = (double)pppplVar16[3] * dVar37;
        dVar42 = (double)pppplVar16[4] * dVar23;
        dVar76 = dVar71 * dVar73 - dVar70 * dVar74;
        dVar78 = dVar42 * dVar74 - dVar71 * dVar77;
        dVar50 = dVar70 * dVar77 - dVar42 * dVar73;
        dVar78 = dVar78 + dVar78;
        dVar50 = dVar50 + dVar50;
        dVar76 = dVar76 + dVar76;
        ppppplVar60 = (longlong *****)
                      ((dVar76 * dVar74 - dVar77 * dVar50) + dVar65 * dVar78 + dVar70 + param_1[4]);
        dVar70 = (dVar78 * dVar77 - dVar76 * dVar73) + dVar59 * dVar50 + dVar71 + param_1[5];
        ppppplVar79 = (longlong *****)
                      ((dVar50 * dVar73 - dVar74 * dVar78) + dVar65 * dVar76 + dVar42 + param_1[6]);
      }
      else {
        dVar65 = *param_1;
        dVar76 = param_1[1];
        dVar78 = param_1[2];
        dVar58 = dVar76 + dVar76;
        dVar72 = dVar78 + dVar78;
        dVar77 = dVar65 * (dVar65 + dVar65);
        dVar59 = param_1[3];
        dVar73 = dVar72 * dVar59;
        dVar74 = (dVar65 + dVar65) * param_1[3];
        dVar59 = dVar58 * dVar59;
        dStack_1f0 = (dVar72 * dVar76 - dVar74) * dVar23;
        local_1f8 = (dVar59 + *param_1 * dVar72) * dVar23;
        local_208 = (dVar72 * dVar76 + dVar74) * dVar37;
        local_238._8_8_ = (dVar58 * dVar65 + dVar73) * dVar22;
        local_238._0_8_ = (1.0 - (dVar78 * dVar72 + dVar76 * dVar58)) * dVar22;
        local_1e8 = (1.0 - (dVar77 + dVar76 * dVar58)) * dVar23;
        local_228 = (*param_1 * dVar72 - dVar59) * dVar22;
        dStack_220 = 0.0;
        local_218._8_8_ = (1.0 - (dVar78 * dVar72 + dVar77)) * dVar37;
        local_218._0_8_ = (dVar58 * dVar65 - dVar73) * dVar37;
        dStack_200 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = param_1[4];
        dStack_1d0 = param_1[5];
        local_1c8 = param_1[6];
        dStack_1c0 = 1.0;
        dVar59 = dVar42 + dVar42;
        dVar76 = dVar50 + dVar50;
        dVar65 = dVar71 * (dVar71 + dVar71);
        local_178 = 1.0 - (dVar50 * dVar76 + dVar42 * dVar59);
        dStack_150 = 1.0 - (dVar50 * dVar76 + dVar65);
        local_128 = 1.0 - (dVar65 + dVar42 * dVar59);
        dStack_130 = (dVar71 + dVar71) * dVar70;
        dStack_170 = dVar59 * dVar71 + dVar76 * dVar70;
        local_148 = dVar76 * dVar42 + dStack_130;
        local_158 = dVar59 * dVar71 - dVar76 * dVar70;
        dStack_130 = dVar76 * dVar42 - dStack_130;
        local_138 = dVar59 * dVar70 + dVar71 * dVar76;
        local_168 = dVar71 * dVar76 - dVar59 * dVar70;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        uStack_100 = 0x3ff0000000000000;
        local_118 = (longlong **)pppplVar16[2];
        pplStack_110 = (longlong **)pppplVar16[3];
        local_108 = (longlong **)pppplVar16[4];
        FUN_1447fea8d(&local_4c8,&local_178);
        auVar44 = _DAT_149934d80;
        local_528 = (longlong ****)local_4b8._0_8_;
        dVar70 = (double)local_4b8._0_8_ * (double)local_4b8._0_8_ +
                 (double)local_4c8 * (double)local_4c8 + dStack_4c0 * dStack_4c0;
        local_588 = pppplStack_4a8;
        dVar42 = (double)local_498 * (double)local_498 +
                 (double)pppplStack_4a8 * (double)pppplStack_4a8 + dStack_4a0 * dStack_4a0;
        dVar50 = (double)local_478._0_8_ * (double)local_478._0_8_ +
                 (double)local_488._0_8_ * (double)local_488._0_8_ +
                 (double)local_488._8_8_ * (double)local_488._8_8_;
        uVar21 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
        dVar70 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar70)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
        dVar50 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar50)) & uVar21);
        auVar26._8_8_ = -(ulonglong)(0.0 <= dVar37);
        auVar26._0_8_ = -(ulonglong)(0.0 <= dVar22);
        auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar26);
        uVar21 = -(ulonglong)(0.0 <= dVar23 * 1.0);
        dVar59 = (double)(~uVar21 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar21 >> 0x20) & 0x3ff00000) << 0x20);
        dVar65 = auVar25._0_8_;
        local_4c8 = (longlong ****)((double)local_4c8 * dVar70 * dVar65);
        dStack_4c0 = dStack_4c0 * dVar70 * dVar65;
        local_4b8._0_8_ = dVar70 * (double)local_4b8._0_8_ * dVar65;
        dVar70 = auVar25._8_8_;
        local_498 = (longlong ****)(dVar42 * (double)local_498 * dVar70);
        dStack_4a0 = dStack_4a0 * dVar42 * dVar70;
        pppplStack_4a8 = (longlong ****)(dVar70 * (double)pppplStack_4a8 * dVar42);
        local_488._8_8_ = (double)local_488._8_8_ * dVar50 * dVar59;
        local_488._0_8_ = dVar59 * (double)local_488._0_8_ * dVar50;
        local_478._0_8_ = dVar50 * (double)local_478._0_8_ * dVar59;
        FUN_14481fd10(&local_4e8,&local_4c8);
        dVar50 = local_4d8 * local_4d8 + local_4e8 * local_4e8;
        dVar70 = dStack_4d0 * dStack_4d0 + dStack_4e0 * dStack_4e0;
        auVar38._0_8_ = dVar50 + dVar70;
        auVar38._8_8_ = dVar50 + dVar70;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
        auVar25 = sqrtpd(auVar38,auVar38);
        auVar44 = divpd(auVar44,auVar25);
        auVar61._0_8_ = auVar44._0_8_ * local_4d8;
        auVar61._8_8_ = auVar44._8_8_ * dStack_4d0;
        dVar43 = (double)((ulonglong)(local_4e8 * auVar44._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
        dVar51 = (double)((ulonglong)(dStack_4e0 * auVar44._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
        auVar52 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar27);
        ppppplVar60 = (longlong *****)local_468;
        dVar70 = dStack_460;
        ppppplVar79 = (longlong *****)local_458;
      }
      local_4c8 = local_558;
      dStack_4c0 = local_548;
      local_4b8._8_8_ = 0;
      local_4b8._0_8_ = local_538;
      pppplStack_4a8 = (longlong ****)0x0;
      dStack_4a0 = (double)pppplVar16[9] * 0.5;
      local_498 = (longlong ****)0x0;
      dStack_490 = 0.0;
      local_488._0_8_ = (double)pppplVar16[9] * -0.5;
      dVar50 = auVar52._0_8_;
      dVar42 = auVar52._8_8_;
      lVar14 = 0;
      bVar9 = true;
      do {
        bVar10 = bVar9;
        dVar65 = (&dStack_4a0)[lVar14 * 3] * dVar23 * 1.0;
        dVar78 = *(double *)(local_4b8 + lVar14 * 0x18 + 8) * dVar22;
        dVar58 = (double)(&pppplStack_4a8)[lVar14 * 3] * dVar37;
        dVar71 = dVar58 * dVar43 - dVar51 * dVar78;
        dVar76 = dVar65 * dVar51 - dVar50 * dVar58;
        dVar59 = dVar78 * dVar50 - dVar43 * dVar65;
        dVar76 = dVar76 + dVar76;
        dVar59 = dVar59 + dVar59;
        dVar71 = dVar71 + dVar71;
        *(double *)(local_4b8 + lVar14 * 0x18 + 8) =
             (dVar71 * dVar51 - dVar59 * dVar50) + dVar42 * dVar76 + dVar78;
        (&pppplStack_4a8)[lVar14 * 3] =
             (longlong ****)((dVar50 * dVar76 - dVar43 * dVar71) + dVar42 * dVar59 + dVar58);
        (&dStack_4a0)[lVar14 * 3] = dVar71 * dVar42 + dVar65 + (dVar59 * dVar43 - dVar76 * dVar51);
        lVar14 = 1;
        bVar9 = false;
      } while (bVar10);
      dVar37 = (double)ppppplVar60 + 0.0;
      local_528 = (longlong ****)((double)pppplStack_4a8 + dVar70);
      dVar50 = dStack_4a0 + (double)ppppplVar79;
      ppppplVar75 = (longlong *****)(dVar70 + dStack_490);
      dVar58 = (double)ppppplVar79 + (double)local_488._0_8_;
      dVar71 = (double)local_498 + (double)ppppplVar60;
      dVar42 = dVar58 - dVar50;
      dVar76 = (double)ppppplVar75 - (double)local_528;
      dVar22 = dVar71 - dVar37;
      dVar70 = dVar50 - (double)local_538;
      dVar23 = (double)local_528 - local_548;
      dVar59 = dVar37 - (double)local_558;
      dVar78 = dVar42 * dVar42 + dVar22 * dVar22 + dVar76 * dVar76;
      dVar65 = -(dVar70 * dVar42 + dVar59 * dVar22 + dVar23 * dVar76) / dVar78;
      ppplVar1 = pppplVar16[8];
      if ((dVar65 <= 0.0) || (1.0 <= dVar65)) {
        ppppplVar79 = (longlong *****)local_528;
        if (0.0 < dVar65) {
          dVar50 = dVar58;
          ppppplVar79 = ppppplVar75;
        }
        dVar37 = (double)(~-(ulonglong)(dVar65 <= 0.0) & (ulonglong)dVar71 |
                         (ulonglong)dVar37 & -(ulonglong)(dVar65 <= 0.0));
        dVar22 = (dVar50 - (double)local_538) * (dVar50 - (double)local_538) +
                 ((double)ppppplVar79 - local_548) * ((double)ppppplVar79 - local_548) +
                 (dVar37 - (double)local_558) * (dVar37 - (double)local_558);
        ppppplVar60 = (longlong *****)0x0;
        if (((double)ppplVar1 * (double)ppplVar1 < dVar22) &&
           (dVar22 = SQRT(dVar22), ppppplVar60 = (longlong *****)local_578,
           dVar22 < (double)local_578)) {
          dVar42 = (double)local_538 - dVar50;
          dVar70 = local_548 - (double)ppppplVar79;
          dVar23 = (double)local_558 - dVar37;
          dVar59 = dVar42 * dVar42 + dVar23 * dVar23 + dVar70 * dVar70;
          if (9.99999993922529e-09 < dVar59) {
            dVar59 = 1.0 / SQRT(dVar59);
            dVar23 = dVar23 * dVar59;
            dVar70 = dVar70 * dVar59;
            dVar42 = dVar42 * dVar59;
          }
          dVar50 = dVar50 + dVar42 * (double)ppplVar1;
          dVar70 = (double)ppppplVar79 + dVar70 * (double)ppplVar1;
          dVar37 = dVar37 + dVar23 * (double)ppplVar1;
          goto LAB_142b60647;
        }
      }
      else {
        dVar72 = dVar22 * dVar23 - dVar59 * dVar76;
        dVar59 = dVar42 * dVar59 - dVar70 * dVar22;
        dVar22 = dVar76 * dVar70 - dVar23 * dVar42;
        dVar22 = SQRT((dVar72 * dVar72 + dVar22 * dVar22 + dVar59 * dVar59) / dVar78);
        ppppplVar60 = (longlong *****)0x0;
        if ((double)ppplVar1 * (double)ppplVar1 < dVar22) {
          dVar50 = dVar50 + dVar58 * dVar65;
          dVar70 = (double)local_528 + (double)ppppplVar75 * dVar65;
          dVar37 = dVar37 + dVar71 * dVar65;
          dVar59 = dVar50 - (double)local_538;
          dVar42 = dVar70 - local_548;
          dVar23 = dVar37 - (double)local_558;
          dVar65 = dVar59 * dVar59 + dVar23 * dVar23 + dVar42 * dVar42;
          if (9.99999993922529e-09 < dVar65) {
            dVar65 = 1.0 / SQRT(dVar65);
            dVar23 = dVar23 * dVar65;
            dVar42 = dVar42 * dVar65;
            dVar59 = dVar59 * dVar65;
          }
          dVar50 = dVar50 - dVar59 * (double)ppplVar1;
          dVar70 = dVar70 - dVar42 * (double)ppplVar1;
          dVar37 = dVar37 - dVar23 * (double)ppplVar1;
LAB_142b60647:
          *param_3 = dVar37;
          param_3[1] = dVar70;
          param_3[2] = dVar50;
          ppppplVar60 = (longlong *****)(dVar22 - (double)pppplVar16[8]);
        }
      }
      pppplVar16 = pppplVar16 + 10;
      local_578 = (longlong ****)ppppplVar60;
    } while (pppplVar16 != pppplVar20);
  }
  if ((longlong)*(int *)(local_5b8 + 3) != 0) {
    pppplVar16 = (longlong ****)local_5b8[2];
    pppplVar20 = pppplVar16 + (longlong)*(int *)(local_5b8 + 3) * 0xb;
    local_528 = local_558;
    dStack_520 = local_548;
    local_578 = local_538;
    dStack_570 = 0.0;
    local_588 = (longlong ****)0x0;
    dStack_580 = 1.0;
    ppppplVar79 = (longlong *****)local_5b8;
    ppppplVar75 = ppppplVar60;
    do {
      uVar66 = SUB84(ppppplVar79,0);
      auVar44 = *(undefined1 (*) [16])(pppplVar16 + 5);
      auVar25 = divpd(auVar44,_DAT_1499387d0);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = pppplVar16[7];
      auVar34 = divpd(auVar35,_DAT_1499387d0);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar34 = roundpd(auVar34,auVar34,3);
      dVar22 = (auVar44._0_8_ - auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar23 = (auVar44._8_8_ - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar50 = ((double)pppplVar16[7] - auVar34._0_8_ * (double)DAT_1499387d0) *
               0.008726646259971648;
      dVar70 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar37 = sin(dVar22);
      dVar42 = sin(dVar23);
      dVar59 = sin(dVar50);
      sin(dVar70);
      dVar22 = cos(dVar22);
      dVar23 = cos(dVar23);
      dVar65 = cos(dVar50);
      cos(dVar70);
      dVar50 = -(dVar23 * dVar37 * dVar59) + dVar42 * dVar22 * dVar65;
      dVar70 = dVar42 * dVar37 * dVar59 + dVar23 * dVar22 * dVar65;
      dVar71 = dVar37 * dVar42 * dVar65 - dVar22 * dVar23 * dVar59;
      dVar42 = -(dVar37 * dVar23 * dVar65) - dVar22 * dVar42 * dVar59;
      auVar44 = *(undefined1 (*) [16])(param_1 + 8);
      dVar22 = auVar44._0_8_;
      dVar37 = auVar44._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_1 + 10);
      dVar23 = auVar25._0_8_;
      auVar34 = minpd(_DAT_149934d80,auVar44);
      auVar53 = minpd(ZEXT816(0x3ff0000000000000),auVar25);
      auVar45._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar45._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar12 = movmskpd(extraout_EAX_00,auVar45);
      auVar54._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
      auVar54._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
      uVar13 = movmskpd(uVar66,auVar54);
      if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar73 = *param_1;
        dVar74 = param_1[1];
        dVar77 = param_1[2];
        dVar43 = param_1[3];
        dVar65 = param_1[3];
        dVar59 = param_1[3];
        dVar78 = param_1[1];
        dVar76 = param_1[1];
        dVar72 = param_1[2];
        dVar58 = param_1[2];
        local_4c8 = (longlong ****)
                    (dVar42 * dVar72 * -1.0 +
                    dVar50 * dVar78 + dVar70 * *param_1 * 1.0 + dVar71 * dVar65);
        dStack_4c0 = dVar71 * dVar58 * 1.0 +
                     dVar70 * dVar76 + dVar50 * *param_1 * -1.0 + dVar42 * dVar59;
        local_4b8._0_8_ =
             dVar70 * dVar72 * 1.0 + ((*param_1 * dVar42 * 1.0 + dVar50 * dVar65) - dVar71 * dVar78)
        ;
        local_4b8._8_8_ =
             dVar50 * dVar58 * -1.0 +
             ((*param_1 * dVar71 * -1.0 + dVar70 * dVar59) - dVar42 * dVar76);
        dVar78 = (double)pppplVar16[2] * dVar22;
        dVar58 = (double)pppplVar16[3] * dVar37;
        dVar71 = (double)pppplVar16[4] * dVar23;
        dVar76 = auVar25._8_8_ * 0.0;
        dVar50 = dVar58 * dVar73 - dVar78 * dVar74;
        dVar72 = dVar71 * dVar74 - dVar58 * dVar77;
        dVar42 = dVar78 * dVar77 - dVar71 * dVar73;
        dVar70 = dVar76 * dVar43 - dVar76 * dVar43;
        dVar72 = dVar72 + dVar72;
        dVar42 = dVar42 + dVar42;
        dVar50 = dVar50 + dVar50;
        dVar70 = dVar70 + dVar70;
        dStack_490 = (dVar70 * dVar43 - dVar70 * dVar43) + dVar59 * dVar70 + dVar76 + param_1[7];
        local_498 = (longlong ****)
                    ((dVar42 * dVar73 - dVar74 * dVar72) + dVar65 * dVar50 + dVar71 + param_1[6]);
        pppplStack_4a8 =
             (longlong ****)
             ((dVar50 * dVar74 - dVar77 * dVar42) + dVar65 * dVar72 + dVar78 + param_1[4]);
        dStack_4a0 = (dVar72 * dVar77 - dVar50 * dVar73) + dVar59 * dVar42 + dVar58 + param_1[5];
      }
      else {
        dVar65 = *param_1;
        dVar76 = param_1[1];
        dVar78 = param_1[2];
        dVar58 = dVar76 + dVar76;
        dVar72 = dVar78 + dVar78;
        dVar77 = dVar65 * (dVar65 + dVar65);
        dVar59 = param_1[3];
        dVar73 = dVar72 * dVar59;
        dVar74 = (dVar65 + dVar65) * param_1[3];
        dVar59 = dVar58 * dVar59;
        dStack_1f0 = (dVar72 * dVar76 - dVar74) * dVar23;
        local_1f8 = (dVar59 + *param_1 * dVar72) * dVar23;
        local_208 = (dVar72 * dVar76 + dVar74) * dVar37;
        local_238._8_8_ = (dVar58 * dVar65 + dVar73) * dVar22;
        local_238._0_8_ = ((double)DAT_149934d80 - (dVar78 * dVar72 + dVar76 * dVar58)) * dVar22;
        local_1e8 = (1.0 - (dVar77 + dVar76 * dVar58)) * dVar23;
        local_228 = (*param_1 * dVar72 - dVar59) * dVar22;
        dStack_220 = 0.0;
        local_218._8_8_ = (DAT_149934d80._8_8_ - (dVar78 * dVar72 + dVar77)) * dVar37;
        local_218._0_8_ = (dVar58 * dVar65 - dVar73) * dVar37;
        dStack_200 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = param_1[4];
        dStack_1d0 = param_1[5];
        local_1c8 = param_1[6];
        dStack_1c0 = 1.0;
        dVar59 = dVar42 + dVar42;
        dVar76 = dVar50 + dVar50;
        dVar65 = dVar71 * (dVar71 + dVar71);
        local_178 = (double)DAT_149934d80 - (dVar50 * dVar76 + dVar42 * dVar59);
        dStack_150 = DAT_149934d80._8_8_ - (dVar50 * dVar76 + dVar65);
        local_128 = 1.0 - (dVar65 + dVar42 * dVar59);
        dStack_130 = (dVar71 + dVar71) * dVar70;
        dStack_170 = dVar59 * dVar71 + dVar76 * dVar70;
        local_148 = dVar76 * dVar42 + dStack_130;
        local_158 = dVar59 * dVar71 - dVar76 * dVar70;
        dStack_130 = dVar76 * dVar42 - dStack_130;
        local_138 = dVar59 * dVar70 + dVar71 * dVar76;
        local_168 = dVar71 * dVar76 - dVar59 * dVar70;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        uStack_100 = 0x3ff0000000000000;
        local_118 = (longlong **)pppplVar16[2];
        pplStack_110 = (longlong **)pppplVar16[3];
        local_108 = (longlong **)pppplVar16[4];
        FUN_1447fea8d(&local_4c8,&local_178,local_238);
        local_5a8 = (longlong ****)local_4b8._0_8_;
        dVar70 = (double)local_4b8._0_8_ * (double)local_4b8._0_8_ +
                 (double)local_4c8 * (double)local_4c8 + dStack_4c0 * dStack_4c0;
        local_568 = pppplStack_4a8;
        local_560 = local_498;
        dVar42 = (double)local_498 * (double)local_498 +
                 (double)pppplStack_4a8 * (double)pppplStack_4a8 + dStack_4a0 * dStack_4a0;
        local_590 = (longlong ****)local_478._0_8_;
        dVar50 = (double)local_478._0_8_ * (double)local_478._0_8_ +
                 (double)local_488._0_8_ * (double)local_488._0_8_ +
                 (double)local_488._8_8_ * (double)local_488._8_8_;
        uVar21 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
        dVar70 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar70)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
        dVar50 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar50)) & uVar21);
        auVar28._8_8_ = -(ulonglong)(0.0 <= dVar37);
        auVar28._0_8_ = -(ulonglong)(0.0 <= dVar22);
        auVar34 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
        uVar21 = -(ulonglong)(0.0 <= dVar23 * 1.0);
        dVar59 = (double)(~uVar21 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar21 >> 0x20) & 0x3ff00000) << 0x20);
        dVar65 = auVar34._0_8_;
        local_4c8 = (longlong ****)((double)local_4c8 * dVar70 * dVar65);
        dStack_4c0 = dStack_4c0 * dVar70 * dVar65;
        local_4b8._0_8_ = dVar70 * (double)local_4b8._0_8_ * dVar65;
        dVar70 = auVar34._8_8_;
        local_498 = (longlong ****)(dVar42 * (double)local_498 * dVar70);
        dStack_4a0 = dStack_4a0 * dVar42 * dVar70;
        pppplStack_4a8 = (longlong ****)(dVar70 * (double)pppplStack_4a8 * dVar42);
        local_488._8_8_ = (double)local_488._8_8_ * dVar50 * dVar59;
        local_488._0_8_ = dVar59 * (double)local_488._0_8_ * dVar50;
        local_478._0_8_ = dVar50 * (double)local_478._0_8_ * dVar59;
        FUN_14481fd10(&local_4e8,&local_4c8);
        dVar50 = local_4d8 * local_4d8 + local_4e8 * local_4e8;
        dVar70 = dStack_4d0 * dStack_4d0 + dStack_4e0 * dStack_4e0;
        auVar39._0_8_ = dVar50 + dVar70;
        auVar39._8_8_ = dVar50 + dVar70;
        auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
        auVar34 = sqrtpd(auVar39,auVar39);
        auVar34 = divpd(_DAT_149934d80,auVar34);
        auVar62._0_8_ = auVar34._0_8_ * local_4d8;
        auVar62._8_8_ = auVar34._8_8_ * dStack_4d0;
        local_4c8 = (longlong ****)
                    ((ulonglong)(local_4e8 * auVar34._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
        dStack_4c0 = (double)((ulonglong)(dStack_4e0 * auVar34._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
        local_4b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar29);
        dStack_490 = 0.0;
        local_498 = local_458;
        pppplStack_4a8 = local_468;
        dStack_4a0 = dStack_460;
      }
      dVar50 = auVar25._8_8_ * 0.0;
      local_1c8 = (double)pppplVar16[10] * 0.5;
      dStack_200 = (double)pppplVar16[9] * 0.5;
      dStack_220 = (double)pppplVar16[8] * 0.5;
      local_228 = -local_1c8;
      dStack_1d0 = -dStack_200;
      local_208 = -dStack_220;
      local_238._8_4_ = SUB84(dStack_200,0);
      local_238._0_8_ = local_208;
      local_238._12_4_ = (int)((ulonglong)dStack_1d0 >> 0x20);
      local_218._8_4_ = SUB84(local_1c8,0);
      local_218._0_8_ = dStack_1d0;
      local_218._12_4_ = (int)((ulonglong)local_228 >> 0x20);
      local_1f8 = local_228;
      dStack_1f0 = dStack_220;
      local_1e8 = dStack_200;
      dStack_1e0 = local_228;
      local_1d8 = local_208;
      dStack_1c0 = dStack_220;
      local_1b8 = dStack_1d0;
      local_1b0 = local_1c8;
      local_1a8 = local_208;
      local_1a0 = dStack_200;
      local_198 = local_1c8;
      local_190 = dStack_220;
      local_188 = dStack_200;
      local_180 = local_1c8;
      dVar70 = local_4b8._0_8_;
      dVar42 = local_4b8._8_8_;
      lVar14 = 0x10;
      do {
        dVar59 = *(double *)((longlong)local_248 + lVar14) * dVar22;
        dVar65 = *(double *)(local_238 + lVar14 + -8) * dVar37;
        dVar76 = *(double *)(local_238 + lVar14) * dVar23 * 1.0;
        dVar78 = dVar65 * (double)local_4c8 - dStack_4c0 * dVar59;
        dVar58 = dVar76 * dStack_4c0 - dVar70 * dVar65;
        dVar71 = dVar59 * dVar70 - (double)local_4c8 * dVar76;
        dVar58 = dVar58 + dVar58;
        dVar71 = dVar71 + dVar71;
        dVar78 = dVar78 + dVar78;
        dVar65 = (dVar70 * dVar58 - (double)local_4c8 * dVar78) + dVar42 * dVar71 + dVar65;
        auVar2._8_4_ = SUB84(dVar65,0);
        auVar2._0_8_ = (dVar78 * dStack_4c0 - dVar71 * dVar70) + dVar42 * dVar58 + dVar59;
        auVar2._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
        *(undefined1 (*) [16])((longlong)local_248 + lVar14) = auVar2;
        *(double *)(local_238 + lVar14) =
             dVar78 * dVar42 + dVar76 + (dVar71 * (double)local_4c8 - dVar58 * dStack_4c0);
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != 0xd0);
      local_478._8_4_ = SUB84(dVar50,0);
      local_478._0_8_ = dVar23 * 1.0;
      local_478._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      local_468 = (longlong ****)0x0;
      dStack_460 = 0.0;
      local_458 = local_588;
      dStack_450 = dStack_580;
      local_448 = local_528;
      dStack_440 = dStack_520;
      local_438 = local_578;
      dStack_430 = dStack_570;
      local_428 = 0x3ff0000000000000;
      uStack_420 = 0x3ff0000000000000;
      local_418 = 0x3ff0000000000000;
      uStack_410 = 0;
      local_400 = &local_518;
      local_3f8 = (double *)local_238;
      local_3f0 = 0;
      local_3e8 = (code *)&LAB_142b5f570;
      local_3e0 = &LAB_14083879e;
      local_258 = 0;
      local_256 = 0;
      local_254 = local_254 & 0xffff0000;
      local_248[1] = (double)local_498 - (double)local_538;
      local_248[0] = dStack_4a0 - local_548;
      local_250 = (double)pppplStack_4a8 - (double)local_558;
      local_488 = auVar44;
      local_408 = (longlong ***)pppplVar16;
      do {
        uVar3 = (ushort)local_254;
        local_254 = CONCAT22(local_254._2_2_,uVar3 + 1);
        if ((0x7f < uVar3) || (cVar11 = FUN_144a3be3c(&local_4c8), cVar11 == '\0')) break;
        cVar11 = FUN_144b0a38c(&local_4c8);
      } while (cVar11 != '\0');
      ppppplVar79 = &local_4c8;
      ppppplVar24 = (longlong *****)FUN_147105946(&local_4c8,&local_178);
      ppppplVar60 = (longlong *****)0x0;
      if ((0.0 <= (double)ppppplVar24) && ((double)ppppplVar24 < (double)ppppplVar75)) {
        param_3[2] = local_168;
        *param_3 = local_178;
        param_3[1] = dStack_170;
        ppppplVar60 = ppppplVar24;
      }
      pppplVar16 = pppplVar16 + 0xb;
      ppppplVar75 = ppppplVar60;
    } while (pppplVar16 != pppplVar20);
  }
  dVar22 = (double)(longlong)*(int *)(local_5b8 + 7);
  if (dVar22 != 0.0) {
    pppplVar16 = (longlong ****)local_5b8[6];
    pppplVar20 = pppplVar16 + (longlong)dVar22 * 0xc;
    local_578 = local_558;
    dStack_570 = local_548;
    local_588 = local_538;
    dStack_580 = 0.0;
    uVar66 = 0;
    uVar67 = 0x3ff00000;
    uVar68 = 0;
    uVar69 = 0x3ff00000;
    local_5a8 = (longlong ****)0x0;
    dStack_5a0 = 1.0;
    ppppplVar79 = (longlong *****)local_5b8;
    ppppplVar17 = &local_5b8;
    do {
      ppplVar1 = pppplVar16[8];
      ppplVar4 = pppplVar16[9];
      ppplVar5 = pppplVar16[10];
      ppplVar6 = pppplVar16[0xb];
      auVar44 = *(undefined1 (*) [16])(param_1 + 8);
      dVar23 = auVar44._0_8_;
      dVar50 = auVar44._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_1 + 10);
      dVar37 = auVar25._0_8_;
      auVar46._4_4_ = uVar67;
      auVar46._0_4_ = uVar66;
      auVar46._12_4_ = uVar69;
      auVar46._8_4_ = uVar68;
      auVar34 = minpd(auVar46,auVar44);
      auVar53 = minpd(ZEXT816(0x3ff0000000000000),auVar25);
      auVar47._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar12 = movmskpd(SUB84(dVar22,0),auVar47);
      auVar55._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
      auVar55._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
      uVar13 = movmskpd((int)ppppplVar79,auVar55);
      if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar78 = *param_1;
        dVar58 = param_1[1];
        dVar72 = param_1[2];
        dVar73 = param_1[3];
        dVar59 = param_1[3];
        dVar22 = param_1[3];
        dVar70 = param_1[1];
        dVar65 = param_1[1];
        dVar71 = param_1[2];
        dVar76 = param_1[2];
        ppppplVar24 = (longlong *****)
                      ((double)ppplVar4 * dVar71 * -1.0 +
                      (double)ppplVar5 * dVar70 +
                      (double)ppplVar6 * *param_1 * 1.0 + (double)ppplVar1 * dVar59);
        dVar42 = (double)ppplVar1 * dVar76 * 1.0 +
                 (double)ppplVar6 * dVar65 +
                 (double)ppplVar5 * *param_1 * -1.0 + (double)ppplVar4 * dVar22;
        auVar56._0_8_ =
             (double)ppplVar6 * dVar71 * 1.0 +
             ((*param_1 * (double)ppplVar4 * 1.0 + (double)ppplVar5 * dVar59) -
             (double)ppplVar1 * dVar70);
        auVar56._8_8_ =
             (double)ppplVar5 * dVar76 * -1.0 +
             ((*param_1 * (double)ppplVar1 * -1.0 + (double)ppplVar6 * dVar22) -
             (double)ppplVar4 * dVar65);
        dVar74 = (double)pppplVar16[4] * dVar23;
        dVar77 = (double)pppplVar16[5] * dVar50;
        dVar71 = (double)pppplVar16[6] * dVar37;
        dVar76 = auVar25._8_8_ * 0.0;
        dVar43 = dVar77 * dVar78 - dVar74 * dVar58;
        dVar51 = dVar71 * dVar58 - dVar77 * dVar72;
        dVar65 = dVar74 * dVar72 - dVar71 * dVar78;
        dVar70 = dVar76 * dVar73 - dVar76 * dVar73;
        uVar66 = 0;
        uVar67 = 0x3ff00000;
        uVar68 = 0;
        uVar69 = 0x3ff00000;
        dVar51 = dVar51 + dVar51;
        dVar65 = dVar65 + dVar65;
        dVar43 = dVar43 + dVar43;
        dVar70 = dVar70 + dVar70;
        dVar70 = (dVar70 * dVar73 - dVar70 * dVar73) + dVar22 * dVar70 + dVar76 + param_1[7];
        ppppplVar79 = (longlong *****)
                      ((dVar65 * dVar78 - dVar58 * dVar51) + dVar59 * dVar43 + dVar71 + param_1[6]);
        ppppplVar75 = (longlong *****)
                      ((dVar43 * dVar58 - dVar72 * dVar65) + dVar59 * dVar51 + dVar74 + param_1[4]);
        dVar22 = (dVar51 * dVar72 - dVar43 * dVar78) + dVar22 * dVar65 + dVar77 + param_1[5];
      }
      else {
        dVar70 = *param_1;
        dVar42 = param_1[1];
        dVar59 = param_1[2];
        dVar65 = dVar42 + dVar42;
        dVar71 = dVar59 + dVar59;
        dVar58 = dVar70 * (dVar70 + dVar70);
        dVar22 = param_1[3];
        dVar76 = dVar71 * dVar22;
        dVar78 = (dVar70 + dVar70) * param_1[3];
        dVar22 = dVar65 * dVar22;
        dStack_1f0 = (dVar71 * dVar42 - dVar78) * dVar37;
        local_1f8 = (dVar22 + *param_1 * dVar71) * dVar37;
        local_208 = (dVar71 * dVar42 + dVar78) * dVar50;
        local_238._8_8_ = (dVar65 * dVar70 + dVar76) * dVar23;
        local_238._0_8_ =
             ((double)CONCAT44(uVar67,uVar66) - (dVar59 * dVar71 + dVar42 * dVar65)) * dVar23;
        local_1e8 = (1.0 - (dVar58 + dVar42 * dVar65)) * dVar37;
        local_228 = (*param_1 * dVar71 - dVar22) * dVar23;
        dStack_220 = 0.0;
        local_218._8_8_ = ((double)CONCAT44(uVar69,uVar68) - (dVar59 * dVar71 + dVar58)) * dVar50;
        local_218._0_8_ = (dVar65 * dVar70 - dVar76) * dVar50;
        dStack_200 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = param_1[4];
        dStack_1d0 = param_1[5];
        local_1c8 = param_1[6];
        dStack_1c0 = 1.0;
        dVar22 = (double)ppplVar4 + (double)ppplVar4;
        dVar42 = (double)ppplVar5 + (double)ppplVar5;
        dVar70 = (double)ppplVar1 * ((double)ppplVar1 + (double)ppplVar1);
        local_178 = (double)CONCAT44(uVar67,uVar66) -
                    ((double)ppplVar5 * dVar42 + (double)ppplVar4 * dVar22);
        dStack_150 = (double)CONCAT44(uVar69,uVar68) - ((double)ppplVar5 * dVar42 + dVar70);
        local_128 = 1.0 - (dVar70 + (double)ppplVar4 * dVar22);
        dStack_130 = ((double)ppplVar1 + (double)ppplVar1) * (double)ppplVar6;
        dStack_170 = dVar22 * (double)ppplVar1 + dVar42 * (double)ppplVar6;
        local_148 = dVar42 * (double)ppplVar4 + dStack_130;
        local_158 = dVar22 * (double)ppplVar1 - dVar42 * (double)ppplVar6;
        dStack_130 = dVar42 * (double)ppplVar4 - dStack_130;
        local_138 = dVar22 * (double)ppplVar6 + (double)ppplVar1 * dVar42;
        local_168 = (double)ppplVar1 * dVar42 - dVar22 * (double)ppplVar6;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        uStack_100 = 0x3ff0000000000000;
        local_118 = (longlong **)pppplVar16[4];
        pplStack_110 = (longlong **)pppplVar16[5];
        local_108 = (longlong **)pppplVar16[6];
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61838;
        FUN_1447fea8d(&local_4c8,&local_178);
        auVar34 = _DAT_149934d80;
        local_568 = (longlong ****)local_4b8._0_8_;
        dVar70 = (double)local_4b8._0_8_ * (double)local_4b8._0_8_ +
                 (double)local_4c8 * (double)local_4c8 + dStack_4c0 * dStack_4c0;
        local_560 = pppplStack_4a8;
        local_590 = local_498;
        dVar42 = (double)local_498 * (double)local_498 +
                 (double)pppplStack_4a8 * (double)pppplStack_4a8 + dStack_4a0 * dStack_4a0;
        dVar22 = (double)local_478._0_8_ * (double)local_478._0_8_ +
                 (double)local_488._0_8_ * (double)local_488._0_8_ +
                 (double)local_488._8_8_ * (double)local_488._8_8_;
        uVar21 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
        dVar70 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar70)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
        dVar65 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar22)) & uVar21);
        auVar30._8_8_ = -(ulonglong)(0.0 <= dVar50);
        auVar30._0_8_ = -(ulonglong)(0.0 <= dVar23);
        auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
        uVar21 = -(ulonglong)(0.0 <= dVar37 * 1.0);
        dVar22 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
        dVar59 = auVar53._0_8_;
        local_4c8 = (longlong ****)((double)local_4c8 * dVar70 * dVar59);
        dStack_4c0 = dStack_4c0 * dVar70 * dVar59;
        local_4b8._0_8_ = dVar70 * (double)local_4b8._0_8_ * dVar59;
        dVar70 = auVar53._8_8_;
        local_498 = (longlong ****)(dVar42 * (double)local_498 * dVar70);
        dStack_4a0 = dStack_4a0 * dVar42 * dVar70;
        pppplStack_4a8 = (longlong ****)(dVar70 * (double)pppplStack_4a8 * dVar42);
        uVar66 = (undefined4)DAT_149934d80;
        uVar67 = DAT_149934d80._4_4_;
        uVar68 = DAT_149934d80._8_4_;
        uVar69 = DAT_149934d80._12_4_;
        local_488._8_8_ = (double)local_488._8_8_ * dVar65 * dVar22;
        local_488._0_8_ = dVar22 * (double)local_488._0_8_ * dVar65;
        local_478._0_8_ = dVar65 * (double)local_478._0_8_ * dVar22;
        local_528 = (longlong ****)ppppplVar60;
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61aa7;
        FUN_14481fd10(&local_4e8,&local_4c8);
        dVar22 = local_4d8 * local_4d8 + local_4e8 * local_4e8;
        dVar70 = dStack_4d0 * dStack_4d0 + dStack_4e0 * dStack_4e0;
        auVar40._0_8_ = dVar22 + dVar70;
        auVar40._8_8_ = dVar22 + dVar70;
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
        auVar53 = sqrtpd(auVar40,auVar40);
        auVar34 = divpd(auVar34,auVar53);
        auVar63._0_8_ = auVar34._0_8_ * local_4d8;
        auVar63._8_8_ = auVar34._8_8_ * dStack_4d0;
        ppppplVar24 = (longlong *****)
                      ((ulonglong)(local_4e8 * auVar34._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
        dVar42 = (double)((ulonglong)(dStack_4e0 * auVar34._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
        auVar56 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar31);
        dVar70 = 0.0;
        ppppplVar79 = (longlong *****)local_458;
        ppppplVar75 = (longlong *****)local_468;
        dVar22 = dStack_460;
      }
      iVar12 = *(int *)(pppplVar16 + 3);
      lVar14 = (longlong)iVar12;
      if (lVar14 == 0) {
        local_3f8 = (double *)0x0;
        puVar8 = (undefined1 *)ppppplVar17;
      }
      else {
        *(undefined8 *)((longlong)ppppplVar17 + -8) = 0x142b61b48;
        lVar18 = -(lVar14 * 0x18 + 0x1eU & 0xfffffffffffffff0);
        local_3f8 = (double *)((longlong)ppppplVar17 + lVar18);
        puVar8 = (undefined1 *)((longlong)ppppplVar17 + lVar18);
        if (0 < iVar12) {
          ppplVar1 = pppplVar16[2];
          dVar59 = auVar56._0_8_;
          dVar65 = auVar56._8_8_;
          lVar19 = 0;
          do {
            pdVar15 = (double *)((longlong)ppplVar1 + lVar19);
            dVar72 = *pdVar15 * dVar23;
            dVar73 = pdVar15[1] * dVar50;
            dVar76 = *(double *)((longlong)ppplVar1 + lVar19 + 0x10) * dVar37 * 1.0;
            dVar78 = dVar73 * (double)ppppplVar24 - dVar42 * dVar72;
            dVar58 = dVar76 * dVar42 - dVar59 * dVar73;
            dVar71 = dVar72 * dVar59 - (double)ppppplVar24 * dVar76;
            dVar58 = dVar58 + dVar58;
            dVar71 = dVar71 + dVar71;
            dVar78 = dVar78 + dVar78;
            *(double *)((longlong)ppppplVar17 + lVar19 + lVar18) =
                 (dVar78 * dVar42 - dVar71 * dVar59) + dVar65 * dVar58 + dVar72;
            ((double *)((longlong)ppppplVar17 + lVar19 + lVar18))[1] =
                 (dVar59 * dVar58 - (double)ppppplVar24 * dVar78) + dVar65 * dVar71 + dVar73;
            *(double *)((longlong)ppppplVar17 + lVar19 + lVar18 + 0x10) =
                 dVar78 * dVar65 + dVar76 + (dVar71 * (double)ppppplVar24 - dVar58 * dVar42);
            lVar19 = lVar19 + 0x18;
          } while (lVar14 * 0x18 != lVar19);
          uVar66 = 0;
          uVar67 = 0x3ff00000;
          uVar68 = 0;
          uVar69 = 0x3ff00000;
          local_3f8 = (double *)((longlong)ppppplVar17 + lVar18);
          puVar8 = (undefined1 *)((longlong)ppppplVar17 + lVar18);
        }
      }
      ppppplVar17 = (longlong *****)puVar8;
      local_478._8_8_ = auVar25._8_8_ * 0.0;
      local_478._0_8_ = dVar37 * 1.0;
      local_468 = (longlong ****)0x0;
      dStack_460 = 0.0;
      local_458 = local_5a8;
      dStack_450 = dStack_5a0;
      local_448 = local_578;
      dStack_440 = dStack_570;
      local_438 = local_588;
      dStack_430 = dStack_580;
      local_428 = CONCAT44(uVar67,uVar66);
      uStack_420 = CONCAT44(uVar69,uVar68);
      local_418 = 0x3ff0000000000000;
      uStack_410 = 0;
      local_400 = &local_518;
      local_3f0 = 0;
      local_3e8 = (code *)&LAB_1471052f9;
      local_3e0 = &LAB_14083879e;
      local_258 = 0;
      local_256 = 0;
      local_254 = (uint)local_254._2_2_ << 0x10;
      local_248[1] = (double)ppppplVar79 - (double)local_538;
      local_248[0] = dVar22 - local_548;
      local_250 = (double)ppppplVar75 - (double)local_558;
      local_4c8 = (longlong ****)ppppplVar24;
      dStack_4c0 = dVar42;
      local_4b8 = auVar56;
      pppplStack_4a8 = (longlong ****)ppppplVar75;
      dStack_4a0 = dVar22;
      local_498 = (longlong ****)ppppplVar79;
      dStack_490 = dVar70;
      local_488 = auVar44;
      local_408 = (longlong ***)pppplVar16;
      do {
        uVar3 = (ushort)local_254;
        local_254 = CONCAT22(local_254._2_2_,uVar3 + 1);
        if (0x7f < uVar3) break;
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61d87;
        cVar11 = FUN_144a3be3c(&local_4c8);
        if (cVar11 == '\0') break;
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61d9b;
        cVar11 = FUN_144b0a38c(&local_4c8);
      } while (cVar11 != '\0');
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61db9;
      ppppplVar79 = &local_4c8;
      dVar22 = (double)FUN_147105946(&local_4c8,local_238);
      local_528 = (longlong ****)0x0;
      if ((0.0 <= (double)extraout_XMM0_Qa) && ((double)extraout_XMM0_Qa < (double)ppppplVar60)) {
        param_3[2] = local_228;
        *param_3 = (double)local_238._0_8_;
        param_3[1] = (double)local_238._8_8_;
        dVar22 = local_228;
        local_528 = (longlong ****)extraout_XMM0_Qa;
      }
      pppplVar16 = pppplVar16 + 0xc;
      ppppplVar60 = (longlong *****)local_528;
    } while (pppplVar16 != pppplVar20);
  }
  local_528 = (longlong ****)ppppplVar60;
  ppppplVar60 = (longlong *****)local_5b8;
  if ((longlong)*(int *)(local_5b8 + 9) != 0) {
    pppplVar16 = (longlong ****)local_5b8[8];
    pppplVar20 = pppplVar16 + (longlong)*(int *)(local_5b8 + 9) * 0xb;
    local_578 = local_558;
    dStack_570 = local_548;
    local_588 = local_538;
    dStack_580 = 0.0;
    local_5b8 = (longlong ****)0x0;
    dStack_5b0 = 1.0;
    do {
      uVar66 = SUB84(ppppplVar60,0);
      auVar44 = *(undefined1 (*) [16])(pppplVar16 + 5);
      auVar25 = divpd(auVar44,_DAT_1499387d0);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = pppplVar16[7];
      auVar34 = divpd(auVar36,_DAT_1499387d0);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar34 = roundpd(auVar34,auVar34,3);
      dVar22 = (auVar44._0_8_ - auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar23 = (auVar44._8_8_ - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar50 = ((double)pppplVar16[7] - auVar34._0_8_ * (double)DAT_1499387d0) *
               0.008726646259971648;
      dVar70 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61ecf;
      dVar37 = sin(dVar22);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61ef0;
      dVar42 = sin(dVar23);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61f06;
      dVar59 = sin(dVar50);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61f27;
      sin(dVar70);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61f30;
      dVar22 = cos(dVar22);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61f47;
      dVar23 = cos(dVar23);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61f5c;
      dVar65 = cos(dVar50);
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b61f72;
      cos(dVar70);
      dVar50 = -(dVar23 * dVar37 * dVar59) + dVar42 * dVar22 * dVar65;
      dVar70 = dVar42 * dVar37 * dVar59 + dVar23 * dVar22 * dVar65;
      dVar71 = dVar37 * dVar42 * dVar65 - dVar22 * dVar23 * dVar59;
      dVar42 = -(dVar37 * dVar23 * dVar65) - dVar22 * dVar42 * dVar59;
      auVar44 = *(undefined1 (*) [16])(param_1 + 8);
      dVar22 = auVar44._0_8_;
      dVar37 = auVar44._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_1 + 10);
      dVar23 = auVar25._0_8_;
      auVar48._8_8_ = 0x3ff0000000000000;
      auVar48._0_8_ = 0x3ff0000000000000;
      auVar34 = minpd(auVar48,auVar44);
      auVar53 = minpd(ZEXT816(0x3ff0000000000000),auVar25);
      auVar49._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar12 = movmskpd(extraout_EAX_01,auVar49);
      auVar57._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
      auVar57._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
      uVar13 = movmskpd(uVar66,auVar57);
      if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar73 = *param_1;
        dVar74 = param_1[1];
        dVar77 = param_1[2];
        dVar43 = param_1[3];
        dVar65 = param_1[3];
        dVar59 = param_1[3];
        dVar76 = param_1[1];
        dVar78 = param_1[1];
        dVar72 = param_1[2];
        dVar58 = param_1[2];
        local_4c8 = (longlong ****)
                    (dVar42 * dVar72 * -1.0 +
                    dVar50 * dVar76 + dVar70 * *param_1 * 1.0 + dVar71 * dVar65);
        dStack_4c0 = dVar71 * dVar58 * 1.0 +
                     dVar70 * dVar78 + dVar50 * *param_1 * -1.0 + dVar42 * dVar59;
        local_4b8._0_8_ =
             dVar70 * dVar72 * 1.0 + ((*param_1 * dVar42 * 1.0 + dVar50 * dVar65) - dVar71 * dVar76)
        ;
        local_4b8._8_8_ =
             dVar50 * dVar58 * -1.0 +
             ((*param_1 * dVar71 * -1.0 + dVar70 * dVar59) - dVar42 * dVar78);
        dVar76 = (double)pppplVar16[2] * dVar22;
        dVar78 = (double)pppplVar16[3] * dVar37;
        dVar42 = (double)pppplVar16[4] * dVar23;
        dVar71 = auVar25._8_8_ * 0.0;
        dVar58 = dVar78 * dVar73 - dVar76 * dVar74;
        dVar72 = dVar42 * dVar74 - dVar78 * dVar77;
        dVar50 = dVar76 * dVar77 - dVar42 * dVar73;
        dVar70 = dVar71 * dVar43 - dVar71 * dVar43;
        dVar72 = dVar72 + dVar72;
        dVar50 = dVar50 + dVar50;
        dVar58 = dVar58 + dVar58;
        dVar70 = dVar70 + dVar70;
        dStack_490 = (dVar70 * dVar43 - dVar70 * dVar43) + dVar59 * dVar70 + dVar71 + param_1[7];
        local_498 = (longlong ****)
                    ((dVar50 * dVar73 - dVar74 * dVar72) + dVar65 * dVar58 + dVar42 + param_1[6]);
        pppplStack_4a8 =
             (longlong ****)
             ((dVar58 * dVar74 - dVar77 * dVar50) + dVar65 * dVar72 + dVar76 + param_1[4]);
        dStack_4a0 = (dVar72 * dVar77 - dVar58 * dVar73) + dVar59 * dVar50 + dVar78 + param_1[5];
      }
      else {
        dVar65 = *param_1;
        dVar76 = param_1[1];
        dVar78 = param_1[2];
        dVar58 = dVar76 + dVar76;
        dVar72 = dVar78 + dVar78;
        dVar77 = dVar65 * (dVar65 + dVar65);
        dVar59 = param_1[3];
        dVar73 = dVar72 * dVar59;
        dVar74 = (dVar65 + dVar65) * param_1[3];
        dVar59 = dVar58 * dVar59;
        dStack_1f0 = (dVar72 * dVar76 - dVar74) * dVar23;
        local_1f8 = (dVar59 + *param_1 * dVar72) * dVar23;
        local_208 = (dVar72 * dVar76 + dVar74) * dVar37;
        local_238._8_8_ = (dVar58 * dVar65 + dVar73) * dVar22;
        local_238._0_8_ = (1.0 - (dVar78 * dVar72 + dVar76 * dVar58)) * dVar22;
        local_1e8 = (1.0 - (dVar77 + dVar76 * dVar58)) * dVar23;
        local_228 = (*param_1 * dVar72 - dVar59) * dVar22;
        dStack_220 = 0.0;
        local_218._8_8_ = (1.0 - (dVar78 * dVar72 + dVar77)) * dVar37;
        local_218._0_8_ = (dVar58 * dVar65 - dVar73) * dVar37;
        dStack_200 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = param_1[4];
        dStack_1d0 = param_1[5];
        local_1c8 = param_1[6];
        dStack_1c0 = 1.0;
        dVar59 = dVar42 + dVar42;
        dVar76 = dVar50 + dVar50;
        dVar65 = dVar71 * (dVar71 + dVar71);
        local_178 = 1.0 - (dVar50 * dVar76 + dVar42 * dVar59);
        dStack_150 = 1.0 - (dVar50 * dVar76 + dVar65);
        local_128 = 1.0 - (dVar65 + dVar42 * dVar59);
        dStack_130 = (dVar71 + dVar71) * dVar70;
        dStack_170 = dVar59 * dVar71 + dVar76 * dVar70;
        local_148 = dVar76 * dVar42 + dStack_130;
        local_158 = dVar59 * dVar71 - dVar76 * dVar70;
        dStack_130 = dVar76 * dVar42 - dStack_130;
        local_138 = dVar59 * dVar70 + dVar71 * dVar76;
        local_168 = dVar71 * dVar76 - dVar59 * dVar70;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        uStack_100 = 0x3ff0000000000000;
        local_118 = (longlong **)pppplVar16[2];
        pplStack_110 = (longlong **)pppplVar16[3];
        local_108 = (longlong **)pppplVar16[4];
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b62431;
        FUN_1447fea8d(&local_4c8,&local_178,local_238);
        auVar34 = _DAT_149934d80;
        local_5a8 = (longlong ****)local_4b8._0_8_;
        dVar70 = (double)local_4b8._0_8_ * (double)local_4b8._0_8_ +
                 (double)local_4c8 * (double)local_4c8 + dStack_4c0 * dStack_4c0;
        local_568 = local_498;
        dVar42 = (double)local_498 * (double)local_498 +
                 (double)pppplStack_4a8 * (double)pppplStack_4a8 + dStack_4a0 * dStack_4a0;
        local_560 = (longlong ****)local_478._0_8_;
        dVar50 = (double)local_478._0_8_ * (double)local_478._0_8_ +
                 (double)local_488._0_8_ * (double)local_488._0_8_ +
                 (double)local_488._8_8_ * (double)local_488._8_8_;
        uVar21 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
        dVar70 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar70)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar21);
        uVar21 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
        dVar59 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar50)) & uVar21);
        auVar32._8_8_ = -(ulonglong)(0.0 <= dVar37);
        auVar32._0_8_ = -(ulonglong)(0.0 <= dVar22);
        auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
        uVar21 = -(ulonglong)(0.0 <= dVar23 * 1.0);
        dVar50 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
        dVar65 = auVar53._0_8_;
        local_4c8 = (longlong ****)((double)local_4c8 * dVar70 * dVar65);
        dStack_4c0 = dStack_4c0 * dVar70 * dVar65;
        local_4b8._0_8_ = dVar70 * (double)local_4b8._0_8_ * dVar65;
        dVar70 = auVar53._8_8_;
        local_498 = (longlong ****)(dVar42 * (double)local_498 * dVar70);
        dStack_4a0 = dStack_4a0 * dVar42 * dVar70;
        pppplStack_4a8 = (longlong ****)(dVar70 * (double)pppplStack_4a8 * dVar42);
        local_488._8_8_ = (double)local_488._8_8_ * dVar59 * dVar50;
        local_488._0_8_ = dVar50 * (double)local_488._0_8_ * dVar59;
        local_478._0_8_ = dVar59 * (double)local_478._0_8_ * dVar50;
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b62693;
        FUN_14481fd10(&local_4e8,&local_4c8);
        dVar50 = local_4d8 * local_4d8 + local_4e8 * local_4e8;
        dVar70 = dStack_4d0 * dStack_4d0 + dStack_4e0 * dStack_4e0;
        auVar41._0_8_ = dVar50 + dVar70;
        auVar41._8_8_ = dVar50 + dVar70;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
        auVar53 = sqrtpd(auVar41,auVar41);
        auVar34 = divpd(auVar34,auVar53);
        auVar64._0_8_ = auVar34._0_8_ * local_4d8;
        auVar64._8_8_ = auVar34._8_8_ * dStack_4d0;
        local_4c8 = (longlong ****)
                    ((ulonglong)(local_4e8 * auVar34._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
        dStack_4c0 = (double)((ulonglong)(dStack_4e0 * auVar34._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
        local_4b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar33);
        dStack_490 = 0.0;
        local_498 = local_458;
        pppplStack_4a8 = local_468;
        dStack_4a0 = dStack_460;
      }
      dVar23 = dVar23 * 1.0;
      dVar50 = auVar25._8_8_ * 0.0;
      local_238 = ZEXT816(0);
      local_228 = (double)pppplVar16[10] * 0.5 * dVar23;
      dStack_220 = 0.0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (double)pppplVar16[10] * -0.5 * dVar23;
      local_218 = auVar7 << 0x40;
      dVar70 = local_4b8._0_8_;
      dVar42 = local_4b8._8_8_;
      pdVar15 = (double *)local_238;
      bVar9 = true;
      do {
        bVar10 = bVar9;
        dVar78 = *pdVar15 * dVar22;
        dVar58 = pdVar15[1] * dVar37;
        dVar65 = pdVar15[2] * dVar23;
        dVar71 = dVar58 * (double)local_4c8 - dStack_4c0 * dVar78;
        dVar76 = dVar65 * dStack_4c0 - dVar70 * dVar58;
        dVar59 = dVar78 * dVar70 - (double)local_4c8 * dVar65;
        dVar76 = dVar76 + dVar76;
        dVar59 = dVar59 + dVar59;
        dVar71 = dVar71 + dVar71;
        *pdVar15 = (dVar71 * dStack_4c0 - dVar59 * dVar70) + dVar42 * dVar76 + dVar78;
        pdVar15[1] = (dVar70 * dVar76 - (double)local_4c8 * dVar71) + dVar42 * dVar59 + dVar58;
        pdVar15[2] = dVar71 * dVar42 + dVar65 + (dVar59 * (double)local_4c8 - dVar76 * dStack_4c0);
        pdVar15 = &dStack_220;
        bVar9 = false;
      } while (bVar10);
      local_478._8_4_ = SUB84(dVar50,0);
      local_478._0_8_ = dVar23;
      local_478._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      local_468 = (longlong ****)0x0;
      dStack_460 = 0.0;
      local_458 = local_5b8;
      dStack_450 = dStack_5b0;
      local_448 = local_578;
      dStack_440 = dStack_570;
      local_438 = local_588;
      dStack_430 = dStack_580;
      local_428 = 0x3ff0000000000000;
      uStack_420 = 0x3ff0000000000000;
      local_418 = 0x3ff0000000000000;
      uStack_410 = 0;
      local_400 = &local_518;
      local_3f0 = 0;
      local_3e8 = FUN_14710524a;
      local_3e0 = &LAB_14083879e;
      local_258 = 0;
      local_256 = 0;
      local_254 = local_254 & 0xffff0000;
      local_248[1] = (double)local_498 - (double)local_538;
      local_248[0] = dStack_4a0 - local_548;
      local_250 = (double)pppplStack_4a8 - (double)local_558;
      local_488 = auVar44;
      local_408 = (longlong ***)pppplVar16;
      local_3f8 = (double *)local_238;
      do {
        uVar3 = (ushort)local_254;
        local_254 = CONCAT22(local_254._2_2_,uVar3 + 1);
        if (0x7f < uVar3) break;
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b62977;
        cVar11 = FUN_144a3be3c(&local_4c8);
        if (cVar11 == '\0') break;
        *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b6298b;
        cVar11 = FUN_144b0a38c(&local_4c8);
      } while (cVar11 != '\0');
      *(undefined8 *)((longlong)ppppplVar17 + -0x28) = 0x142b629aa;
      ppppplVar60 = &local_4c8;
      ppppplVar75 = (longlong *****)FUN_147105946(&local_4c8,&local_178,&local_4e8);
      ppppplVar79 = (longlong *****)0x0;
      if ((0.0 <= (double)ppppplVar75) && ((double)ppppplVar75 < (double)local_528)) {
        param_3[2] = local_168;
        *param_3 = local_178;
        param_3[1] = dStack_170;
        ppppplVar79 = ppppplVar75;
      }
      pppplVar16 = pppplVar16 + 0xb;
      local_528 = (longlong ****)ppppplVar79;
    } while (pppplVar16 != pppplVar20);
  }
  if ((local_f0 ^ (ulonglong)&local_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)ppppplVar17 + -0x28) = &UNK_142b62a77;
  FUN_144d8e3a0();
}



// FUNCTION 142b62a7c FUN_142b62a7c body=21 status=ok
// SIG undefined FUN_142b62a7c(void)

void FUN_142b62a7c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b6c896();
  *(byte *)(lVar1 + 0x3f1) = *(byte *)(lVar1 + 0x3f1) ^ 1;
  return;
}



// FUNCTION 142b62a91 FUN_142b62a91 body=69 status=ok
// SIG undefined FUN_142b62a91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b62a91(void)

{
  _DAT_14c9abc18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b62ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc20,1);
  return;
}



// FUNCTION 142b62ad6 FUN_142b62ad6 body=21 status=ok
// SIG undefined FUN_142b62ad6(void)

void FUN_142b62ad6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b6c896();
  *(byte *)(lVar1 + 0x3f0) = *(byte *)(lVar1 + 0x3f0) ^ 1;
  return;
}



// FUNCTION 142b62aeb FUN_142b62aeb body=69 status=ok
// SIG undefined FUN_142b62aeb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b62aeb(void)

{
  _DAT_14c9abc28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b62b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc30,1);
  return;
}



// FUNCTION 142b62b30 FUN_142b62b30 body=69 status=ok
// SIG undefined FUN_142b62b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b62b30(void)

{
  _DAT_14c9abc38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b62b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc40,1);
  return;
}



// FUNCTION 142b62b75 FUN_142b62b75 body=2051 status=ok
// SIG undefined FUN_142b62b75(void)

void FUN_142b62b75(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined2 *puVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined2 *puVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auStack_318 [32];
  code **local_2f8;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined2 *local_2b0;
  int local_2a8;
  undefined2 *local_2a0;
  int local_298;
  undefined2 *local_290;
  int local_288;
  undefined **local_280;
  undefined8 local_278;
  undefined4 local_270;
  longlong local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined **local_228;
  undefined8 local_220;
  int local_218;
  longlong local_210;
  undefined8 uStack_208;
  longlong local_200;
  ulonglong uStack_1f8;
  undefined8 local_1f0;
  undefined2 *local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined2 uStack_1bf;
  undefined5 uStack_1bd;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined1 local_190;
  undefined8 local_188;
  code *local_178 [2];
  undefined8 local_168;
  undefined **local_158;
  longlong *local_150;
  undefined ***local_148;
  code *local_138;
  undefined8 local_128;
  undefined **local_118;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9abe38);
  plVar13 = DAT_14c9abe40;
  plVar20 = DAT_14c9abe40 + 1;
  FUN_147115120(plVar20);
  FUN_14711516e(&local_1d8,param_1);
  puVar21 = local_1d8;
  if (iStack_1d0 == 0) {
    puVar21 = &DAT_149dfb77a;
  }
  uVar16 = FUN_14099f58f(puVar21);
  if (local_1d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1468c51e8(uVar16);
  FUN_140056680(&local_1e8,L"dchunklist");
  puVar21 = local_1e8;
  if (local_1e0 == 0) {
    puVar21 = &DAT_149dfb77a;
  }
  uVar17 = FUN_145b0b6a4();
  lVar18 = FUN_140277b32(uVar17,uVar16,puVar21,1);
  puVar6 = (undefined8 *)*plVar13;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
    *plVar13 = 0;
  }
  FUN_147115120(plVar20);
  if (lVar18 == 0) {
    FUN_1446f470e(&local_1f0,L"dchunklist",1);
    lVar18 = FUN_1471154d5(uVar16,local_1f0);
  }
  uVar15 = *(uint *)(lVar18 + 0xc);
  if ((int)uVar15 < DAT_14c9647dc) {
    lVar22 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
  }
  else {
    lVar22 = 0;
  }
  FUN_1447f71cc(lVar22,0x40000000);
  plVar13[8] = lVar18;
  *(undefined4 *)(lVar18 + 0x30) = 0;
  if (*(int *)(lVar18 + 0x34) != 0) {
    FUN_1471208d4(lVar18 + 0x28);
  }
  *(undefined4 *)(lVar18 + 0x40) = 0;
  local_2d8 = uVar16;
  if (*(int *)(lVar18 + 0x44) != 0) {
    FUN_144893a1c(lVar18 + 0x38,0);
  }
  local_220 = 0;
  local_228 = &PTR_LAB_14a1e3c98;
  local_218 = -1;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_128 = 0;
  local_118 = &PTR_LAB_14a1e39d0;
  local_138 = FUN_142b7047e;
  local_2e8 = lVar18 + 0x38;
  local_2e0 = lVar18;
  local_2d0 = param_1;
  FUN_147115390(param_1);
  lVar18 = DAT_14c9abbe8;
  if (DAT_14c9abbe8 == 0) {
    plVar20 = (longlong *)FUN_145a10a92();
    lVar18 = plVar20[0x22];
    if (plVar20[0x22] == 0) {
      (**(code **)(*plVar20 + 1000))(plVar20);
      lVar18 = plVar20[0x22];
    }
  }
  DAT_14c9abbe8 = lVar18;
  local_2b8 = *(double *)(DAT_14c9abbe8 + 0x50);
  dVar1 = *(double *)(DAT_14c9abbe8 + 0x58);
  dVar2 = *(double *)(DAT_14c9abbe8 + 0x60);
  lVar18 = (longlong)local_218 * 200;
  puVar21 = *(undefined2 **)(local_200 + 0x90 + lVar18);
  local_2c0 = *(double *)(local_200 + 0x98 + lVar18);
  dVar3 = *(double *)(local_200 + 0xa0 + lVar18);
  local_2c8 = *(double *)(local_200 + 0xa8 + lVar18);
  dVar4 = *(double *)(local_200 + 0xb0 + lVar18);
  dVar5 = *(double *)(local_200 + 0xb8 + lVar18);
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  if ((double)puVar21 <= local_2c8) {
    iVar23 = 0;
    puVar14 = local_1d8;
    do {
      local_1d8 = puVar14;
      puVar9 = (undefined2 *)(local_2b8 + (double)puVar21);
      dVar7 = local_2c0;
      puVar14 = local_1d8;
      while (dVar10 = dVar7, dVar10 <= dVar4) {
        dVar7 = dVar1 + dVar10;
        dVar11 = dVar3;
        while (dVar11 <= dVar5) {
          dVar8 = dVar2 + dVar11;
          iStack_1d0 = SUB84(dVar10,0);
          uStack_1cc = (undefined4)((ulonglong)dVar10 >> 0x20);
          uStack_1c8 = SUB84(dVar11,0);
          uStack_1c4 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uStack_1c0 = SUB81(puVar9,0);
          uStack_1bf = (undefined2)((ulonglong)puVar9 >> 8);
          uStack_1bd = (undefined5)((ulonglong)puVar9 >> 0x18);
          uVar12 = (ulonglong)local_1a8 >> 8;
          local_1a8 = CONCAT71((int7)uVar12,1);
          local_1d8 = puVar21;
          local_1b8 = dVar7;
          local_1b0 = dVar8;
          FUN_140002266(&local_280,L"Chunk_%d",iVar23);
          local_168 = 0;
          local_158 = &PTR_LAB_14a1e3a00;
          local_150 = plVar13;
          local_178[0] = FUN_142b70514;
          local_2f8 = local_178;
          local_148 = &local_280;
          uVar15 = FUN_14711558e(plVar13,&local_228,&local_1d8,&local_248);
          if (local_280 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          iVar23 = iVar23 + (uVar15 & 0xff);
          dVar11 = dVar8;
          puVar14 = local_1d8;
        }
      }
      local_1d8._4_4_ = (uint)((ulonglong)puVar14 >> 0x20);
      puVar21 = puVar9;
    } while ((double)puVar9 <= local_2c8);
  }
  lVar18 = local_2e0;
  local_278 = 0;
  local_280 = &PTR_LAB_14a1e3950;
  local_270 = 0xffffffff;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_1d8 = (undefined2 *)((ulonglong)local_1d8._4_4_ << 0x20);
  if (0 < *(int *)(local_2e0 + 0x30)) {
    lVar22 = 0;
    do {
      FUN_147115da2(&local_280,*(longlong *)(*(longlong *)(lVar18 + 0x28) + lVar22 * 8) + 0x38,
                    &local_1d8);
      lVar22 = lVar22 + 1;
      local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,(int)lVar22);
    } while (lVar22 < *(int *)(lVar18 + 0x30));
  }
  FUN_1471161de(local_2e8,&local_280);
  uVar16 = local_2d8;
  FUN_14282b7b8(local_2d8);
  uVar19 = FUN_146872264();
  uVar17 = local_2d0;
  FUN_14711516e(&local_2a0,local_2d0);
  puVar21 = local_2a0;
  if (local_298 == 0) {
    puVar21 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_1d8,puVar21);
  FUN_141509698(&local_290,&local_1d8,uVar19);
  if (local_1d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  local_1d8 = (undefined2 *)0x0;
  iStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1bf = 0x101;
  local_1b8 = 0.0;
  local_1a8 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_1c8 = 3;
  local_1b0 = (double)DAT_14c873408;
  puVar21 = &DAT_149dfb77a;
  if (local_288 != 0) {
    puVar21 = local_290;
  }
  FUN_1468efea2(uVar16,lVar18,puVar21,&local_1d8);
  FUN_14711528a(&local_2b0,uVar17);
  puVar21 = &DAT_149dfb77a;
  if (local_2a8 != 0) {
    puVar21 = local_2b0;
  }
  FUN_140056680(&local_2a0,puVar21);
  if (local_2b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar16 = FUN_14054d1d4();
  puVar21 = local_2a0;
  if (local_298 == 0) {
    puVar21 = &DAT_149dfb77a;
  }
  FUN_146810dee(&local_248,puVar21,uVar16,0);
  if (local_2a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_290 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_280 = &PTR_LAB_14a1e3950;
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  local_228 = &PTR_LAB_14a1e3c98;
  FUN_144724f11(local_200,uStack_1f8 & 0xffffffff);
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  if (local_210 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000142b63320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9abe38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_318);
}



// FUNCTION 142b63379 FUN_142b63379 body=69 status=ok
// SIG undefined FUN_142b63379(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b63379(void)

{
  _DAT_14c9abc50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b633bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc58,1);
  return;
}



// FUNCTION 142b633be FUN_142b633be body=69 status=ok
// SIG undefined FUN_142b633be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b633be(void)

{
  _DAT_14c9abc70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b63400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc78,1);
  return;
}



// FUNCTION 142b63403 FUN_142b63403 body=69 status=ok
// SIG undefined FUN_142b63403(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b63403(void)

{
  _DAT_14c9abc80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b63445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc88,1);
  return;
}



// FUNCTION 142b63448 FUN_142b63448 body=69 status=ok
// SIG undefined FUN_142b63448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b63448(void)

{
  _DAT_14c9abc90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6348a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abc98,1);
  return;
}


