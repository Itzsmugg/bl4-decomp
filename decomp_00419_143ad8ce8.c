// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ad8ce8 FUN_143ad8ce8 body=85 status=ok
// SIG undefined FUN_143ad8ce8(void)

void FUN_143ad8ce8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fa90;
  return;
}



// FUNCTION 143ad8d3e FUN_143ad8d3e body=85 status=ok
// SIG undefined FUN_143ad8d3e(void)

void FUN_143ad8d3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fa90;
  return;
}



// FUNCTION 143ad8d94 FUN_143ad8d94 body=118 status=ok
// SIG undefined FUN_143ad8d94(void)

void FUN_143ad8d94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fa90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad8dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad8e10 FUN_143ad8e10 body=16 status=ok
// SIG undefined FUN_143ad8e10(void)

undefined1 FUN_143ad8e10(void)

{
  FUN_143ad8e20();
  return 1;
}



// FUNCTION 143ad8e20 FUN_143ad8e20 body=447 status=ok
// SIG undefined FUN_143ad8e20(void)

void FUN_143ad8e20(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = DAT_14cb44478;
  if (DAT_14cb44478 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar8 = 0;
    iVar4 = 0;
  }
  else {
    puVar11 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar11 = DAT_14cb44470;
    }
    uVar9 = *puVar11;
    if (uVar9 == 0) {
      iVar4 = DAT_14cb44478 + 0x1e;
      if (-1 < DAT_14cb44478 + -1) {
        iVar4 = DAT_14cb44478 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar9 = puVar11[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar13 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (DAT_14cb44478 <= iVar4) {
      iVar4 = DAT_14cb44478;
    }
  }
  if (iVar4 != DAT_14cb44478) {
    uVar9 = 0xffffffff;
    iVar3 = DAT_14cb44478;
    do {
      lVar10 = *(longlong *)(DAT_14cb44450 + 8 + (longlong)iVar4 * 0x18);
      if (lVar10 != 0) {
        lVar10 = lVar10 + 0x20;
        lVar12 = 0;
        do {
          FUN_1407a7592(lVar10,DAT_14cb44120 <= lVar12);
          lVar12 = lVar12 + 1;
          lVar10 = lVar10 + 0x30;
          iVar3 = DAT_14cb44478;
        } while (lVar12 != 7);
      }
      uVar9 = uVar9 & ~(uint)uVar14;
      puVar11 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar11 = &DAT_14cb44460;
      }
      iVar4 = (int)uVar13;
      lVar10 = (longlong)iVar4;
      uVar5 = puVar11[lVar10] & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar12 = 0;
          do {
            uVar5 = puVar11[lVar10 + lVar12 + 1];
            if (uVar5 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar9 = 0xffffffff;
              goto LAB_143ad8f97;
            }
            iVar8 = iVar8 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar10 != lVar12);
          uVar9 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_143ad8f97:
        uVar14 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar14 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar4 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 143ad8fe0 FUN_143ad8fe0 body=29 status=ok
// SIG undefined FUN_143ad8fe0(void)

undefined8 FUN_143ad8fe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad9012 FUN_143ad9012 body=85 status=ok
// SIG undefined FUN_143ad9012(void)

void FUN_143ad9012(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fb00;
  return;
}



// FUNCTION 143ad9068 FUN_143ad9068 body=85 status=ok
// SIG undefined FUN_143ad9068(void)

void FUN_143ad9068(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fb00;
  return;
}



// FUNCTION 143ad90be FUN_143ad90be body=118 status=ok
// SIG undefined FUN_143ad90be(void)

void FUN_143ad90be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fb00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad9125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad9134 FUN_143ad9134 body=59 status=ok
// SIG undefined FUN_143ad9134(void)

void FUN_143ad9134(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143ad91ae();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad9170 FUN_143ad9170 body=61 status=ok
// SIG undefined FUN_143ad9170(void)

undefined8 FUN_143ad9170(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143ad91ae();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad91ae FUN_143ad91ae body=412 status=ok
// SIG undefined FUN_143ad91ae(void)

void FUN_143ad91ae(ulonglong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  
  if (DAT_14cb44458 != DAT_14cb44484) {
    uVar3 = *param_1;
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar8 = &DAT_14cb44488;
    if (DAT_14cb44490 != (undefined *)0x0) {
      puVar8 = DAT_14cb44490;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)(DAT_14cb44498 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cb44450 + (longlong)iVar2 * 0x18);
      if (*puVar1 == uVar3) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        uVar3 = puVar1[1];
        if (uVar3 == 0) {
          return;
        }
        iVar2 = *(int *)(uVar3 + 0x3f8);
        if (0 < (longlong)iVar2) {
          lVar7 = *(longlong *)(uVar3 + 0x3f0);
          lVar9 = 0;
          do {
            lVar4 = *(longlong *)(lVar7 + lVar9);
            if (((((*(byte *)(lVar4 + 0x30) & 1) != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) &&
                (*(longlong *)(lVar4 + 0x10) != 0)) &&
               ((*(uint *)(*(longlong *)(lVar4 + 0x10) + 8) >> 0x1e & 1) == 0)) {
              FUN_14012d1c4(lVar4,0);
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar9);
        }
        lVar7 = *(longlong *)(uVar3 + 0x400);
        iVar2 = *(int *)(uVar3 + 0x408);
        uVar6 = 0;
        if ((longlong)iVar2 != 0) {
          lVar9 = 0;
          do {
            lVar4 = *(longlong *)(lVar7 + lVar9);
            if ((((*(byte *)(lVar4 + 0x30) & 1) != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) &&
               ((*(longlong *)(lVar4 + 0x10) != 0 &&
                ((*(uint *)(*(longlong *)(lVar4 + 0x10) + 8) >> 0x1e & 1) == 0)))) {
              FUN_14012d1c4(lVar4,0);
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar9);
          uVar6 = *(undefined4 *)(uVar3 + 0x408);
          lVar7 = *(longlong *)(uVar3 + 0x400);
        }
        iVar2 = *(int *)(uVar3 + 0x40c);
        FUN_144846cc9(lVar7,uVar6);
        *(undefined4 *)(uVar3 + 0x408) = 0;
        if (-1 < iVar2) {
          return;
        }
        if (*(int *)(uVar3 + 0x40c) == 0) {
          return;
        }
        FUN_1456d0bd2(uVar3 + 0x400);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 143ad934a FUN_143ad934a body=29 status=ok
// SIG undefined FUN_143ad934a(void)

undefined8 FUN_143ad934a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad937c FUN_143ad937c body=85 status=ok
// SIG undefined FUN_143ad937c(void)

void FUN_143ad937c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae30180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fb70;
  return;
}



// FUNCTION 143ad93d2 FUN_143ad93d2 body=85 status=ok
// SIG undefined FUN_143ad93d2(void)

void FUN_143ad93d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae30180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fb70;
  return;
}



// FUNCTION 143ad9428 FUN_143ad9428 body=118 status=ok
// SIG undefined FUN_143ad9428(void)

void FUN_143ad9428(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae30180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fb70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad948f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad94a4 FUN_143ad94a4 body=16 status=ok
// SIG undefined FUN_143ad94a4(void)

undefined1 FUN_143ad94a4(void)

{
  FUN_14183b810();
  return 1;
}



// FUNCTION 143ad94b4 FUN_143ad94b4 body=29 status=ok
// SIG undefined FUN_143ad94b4(void)

undefined8 FUN_143ad94b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad94e6 FUN_143ad94e6 body=85 status=ok
// SIG undefined FUN_143ad94e6(void)

void FUN_143ad94e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fbe0;
  return;
}



// FUNCTION 143ad953c FUN_143ad953c body=85 status=ok
// SIG undefined FUN_143ad953c(void)

void FUN_143ad953c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fbe0;
  return;
}



// FUNCTION 143ad9592 FUN_143ad9592 body=118 status=ok
// SIG undefined FUN_143ad9592(void)

void FUN_143ad9592(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fbe0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad95f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad9676 FUN_143ad9676 body=29 status=ok
// SIG undefined FUN_143ad9676(void)

undefined8 FUN_143ad9676(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad96a8 FUN_143ad96a8 body=85 status=ok
// SIG undefined FUN_143ad96a8(void)

void FUN_143ad96a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fc50;
  return;
}



// FUNCTION 143ad96fe FUN_143ad96fe body=85 status=ok
// SIG undefined FUN_143ad96fe(void)

void FUN_143ad96fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fc50;
  return;
}



// FUNCTION 143ad9754 FUN_143ad9754 body=118 status=ok
// SIG undefined FUN_143ad9754(void)

void FUN_143ad9754(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fc50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ad97bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ad9838 FUN_143ad9838 body=232 status=ok
// SIG undefined FUN_143ad9838(void)

void FUN_143ad9838(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143ad9920 FUN_143ad9920 body=81 status=ok
// SIG undefined FUN_143ad9920(void)

void FUN_143ad9920(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1482086d0(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143ad9972 FUN_143ad9972 body=86 status=ok
// SIG undefined FUN_143ad9972(void)

undefined8 * FUN_143ad9972(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae2fd50;
  FUN_14820888a(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad99c8 FUN_143ad99c8 body=472 status=ok
// SIG undefined FUN_143ad99c8(void)

void FUN_143ad99c8(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar2 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_a8);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar2 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar2 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined8 *)(param_1 + 0x1b8);
  local_b0 = *(undefined4 *)(param_1 + 0x1c0);
  FUN_143ad2854(param_2,*(undefined8 *)(param_1 + 0x1c8));
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad9bae FUN_143ad9bae body=86 status=ok
// SIG undefined FUN_143ad9bae(void)

undefined8 * FUN_143ad9bae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae2fd50;
  FUN_14820888a(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad9c04 FUN_143ad9c04 body=38 status=ok
// SIG undefined FUN_143ad9c04(void)

undefined8 FUN_143ad9c04(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ad9c2a FUN_143ad9c2a body=971 status=ok
// SIG undefined FUN_143ad9c2a(void)

void FUN_143ad9c2a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *_Dst;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *_Src;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar4 = &local_c0;
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      _Dst = puVar17 + 2;
    }
    memcpy(_Dst,puVar4,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar17 + 5;
    }
    memcpy(puVar4,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  local_c8 = lVar2 + 0x88;
  local_d0 = lVar2 + 0x38;
  FUN_1482090ee(local_c8,*(int *)(lVar2 + 0x40) - *(int *)(lVar2 + 0x6c));
  iVar1 = *(int *)(lVar2 + 0x60);
  if (iVar1 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar12 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar2 + 0x58);
    if (*(uint **)(lVar2 + 0x58) == (uint *)0x0) {
      puVar9 = (uint *)(lVar2 + 0x48);
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar12 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar12 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar15) goto LAB_143ad9f65;
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar13 & uVar13);
    uVar10 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 < iVar1) {
    uVar13 = 0xffffffff;
    do {
      lVar14 = (longlong)iVar8 * 0x18;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar14) + 0xd0) + 0x5c) =
           0xffffffff;
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar14);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar14) = 0;
      iVar1 = *(int *)(lVar2 + 0x90);
      *(uint *)(lVar2 + 0x90) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x94) < iVar1 + 1U) {
        FUN_148209038(local_c8,iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar1 * 8) = uVar3;
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar9 = *(uint **)(lVar2 + 0x58);
      if (*(uint **)(lVar2 + 0x58) == (uint *)0x0) {
        puVar9 = (uint *)(lVar2 + 0x48);
      }
      iVar1 = *(int *)(lVar2 + 0x60);
      iVar8 = (int)uVar15;
      lVar14 = (longlong)iVar8;
      uVar5 = puVar9[lVar14] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar6 = iVar1 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar9[lVar14 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar14 == lVar11) goto LAB_143ad9f65;
        }
        uVar15 = (ulonglong)(iVar8 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar10 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar1);
  }
LAB_143ad9f65:
  FUN_148209194(local_d0);
  if (0 < *(int *)(lVar2 + 0xa0)) {
    local_c0 = *(undefined8 *)(lVar2 + 0x98);
    local_b8 = *(int *)(lVar2 + 0xa0);
    FUN_1481c8070(*(longlong *)(lVar2 + 8) + 0x38);
    *(undefined4 *)(lVar2 + 0xa0) = 0;
    if (*(int *)(lVar2 + 0xa4) < 0) {
      FUN_14480809c(lVar2 + 0x98,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ad9ff6 FUN_143ad9ff6 body=40 status=ok
// SIG undefined FUN_143ad9ff6(void)

void FUN_143ad9ff6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_1482027be(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 143ada028 FUN_143ada028 body=12 status=ok
// SIG undefined FUN_143ada028(void)

void FUN_143ada028(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ada031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ada034 FUN_143ada034 body=29 status=ok
// SIG undefined FUN_143ada034(void)

undefined8 FUN_143ada034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ada052 FUN_143ada052 body=282 status=ok
// SIG undefined FUN_143ada052(void)

undefined8 * FUN_143ada052(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143ada16c FUN_143ada16c body=96 status=ok
// SIG undefined FUN_143ada16c(void)

ulonglong FUN_143ada16c(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_1482027be(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ada1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143ada1cc FUN_143ada1cc body=285 status=ok
// SIG undefined FUN_143ada1cc(void)

void FUN_143ada1cc(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  
  lVar3 = *param_1;
  FUN_140661c88(lVar3 + 0x1d0,param_2,L"NiagaraStatelessEmitterData_StaticFloatBuffer",4,
                *(undefined4 *)(lVar3 + 0x1c8),0xd,1,0);
  uVar2 = *(undefined4 *)(lVar3 + 0x1e0);
  uVar4 = *(undefined8 *)(lVar3 + 0x1d0);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0,uVar2,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,*(void **)(lVar3 + 0x1c0),(ulonglong)*(uint *)(lVar3 + 0x1e0));
  uVar4 = *(undefined8 *)(lVar3 + 0x1d0);
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143ada2b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 143ada2fa FUN_143ada2fa body=12 status=ok
// SIG undefined FUN_143ada2fa(void)

void FUN_143ada2fa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ada303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ada306 FUN_143ada306 body=29 status=ok
// SIG undefined FUN_143ada306(void)

undefined8 FUN_143ada306(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ada324 FUN_143ada324 body=282 status=ok
// SIG undefined FUN_143ada324(void)

undefined8 * FUN_143ada324(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143ada43e FUN_143ada43e body=105 status=ok
// SIG undefined FUN_143ada43e(void)

void FUN_143ada43e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143ada1cc(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143ada1cc(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ada481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ada4a8 FUN_143ada4a8 body=63 status=ok
// SIG undefined FUN_143ada4a8(void)

void FUN_143ada4a8(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_14032e8b2(lVar2);
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 143ada4f2 FUN_143ada4f2 body=12 status=ok
// SIG undefined FUN_143ada4f2(void)

void FUN_143ada4f2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ada4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ada4fe FUN_143ada4fe body=29 status=ok
// SIG undefined FUN_143ada4fe(void)

undefined8 FUN_143ada4fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ada51c FUN_143ada51c body=282 status=ok
// SIG undefined FUN_143ada51c(void)

undefined8 * FUN_143ada51c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143ada636 FUN_143ada636 body=116 status=ok
// SIG undefined FUN_143ada636(void)

ulonglong FUN_143ada636(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,1);
  }
  lVar3 = param_1[0x16];
  if (lVar3 != 0) {
    FUN_14032e8b2(lVar3);
    uVar4 = FUN_1400020a8(lVar3);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ada69f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 143ada6aa FUN_143ada6aa body=30 status=ok
// SIG undefined FUN_143ada6aa(void)

void FUN_143ada6aa(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1482095f8(param_1[1]);
  *(undefined8 *)(*param_1 + 8) = uVar1;
  return;
}



// FUNCTION 143ada6d2 FUN_143ada6d2 body=12 status=ok
// SIG undefined FUN_143ada6d2(void)

void FUN_143ada6d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ada6db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ada6de FUN_143ada6de body=29 status=ok
// SIG undefined FUN_143ada6de(void)

undefined8 FUN_143ada6de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ada6fc FUN_143ada6fc body=282 status=ok
// SIG undefined FUN_143ada6fc(void)

undefined8 * FUN_143ada6fc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143ada816 FUN_143ada816 body=114 status=ok
// SIG undefined FUN_143ada816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ada816(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1482095f8(_DAT_000000b0);
    *(undefined8 *)(_DAT_000000a8 + 8) = uVar2;
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    uVar2 = FUN_1482095f8(param_1[0x16]);
    *(undefined8 *)(param_1[0x15] + 8) = uVar2;
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ada87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ada8be FUN_143ada8be body=12 status=ok
// SIG undefined FUN_143ada8be(void)

void FUN_143ada8be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ada8c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ada8ca FUN_143ada8ca body=29 status=ok
// SIG undefined FUN_143ada8ca(void)

undefined8 FUN_143ada8ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ada8e8 FUN_143ada8e8 body=282 status=ok
// SIG undefined FUN_143ada8e8(void)

undefined8 * FUN_143ada8e8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143adaa84 FUN_143adaa84 body=12 status=ok
// SIG undefined FUN_143adaa84(void)

void FUN_143adaa84(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143adaa8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143adaa90 FUN_143adaa90 body=29 status=ok
// SIG undefined FUN_143adaa90(void)

undefined8 FUN_143adaa90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143adaaae FUN_143adaaae body=282 status=ok
// SIG undefined FUN_143adaaae(void)

undefined8 * FUN_143adaaae(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143adac10 FUN_143adac10 body=232 status=ok
// SIG undefined FUN_143adac10(void)

void FUN_143adac10(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 1) - *(float *)(*param_1 + 0x24);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(*param_1 + 0x28) = fVar2;
  *(int *)(*param_1 + 0x24) = (int)param_1[1];
  *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (*(longlong *)(*param_1 + 0x40) != lVar1) {
      *(longlong *)(*param_1 + 0x40) = lVar1;
      FUN_1400020a8();
    }
  }
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(*param_1 + 0x48) = 1;
    lVar1 = *param_1;
    if ((longlong *)(lVar1 + 0x50) != param_1 + 4) {
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0x50) = param_1[4];
      param_1[4] = 0;
      *(int *)(lVar1 + 0x58) = (int)param_1[5];
      *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x2c);
      param_1[5] = 0;
    }
  }
  if (((char)param_1[6] == '\x01') && (lVar1 = *param_1, (longlong *)(lVar1 + 0x30) != param_1 + 7))
  {
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x30) = param_1[7];
    param_1[7] = 0;
    *(int *)(lVar1 + 0x38) = (int)param_1[8];
    *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x44);
    param_1[8] = 0;
  }
  return;
}



// FUNCTION 143adad08 FUN_143adad08 body=29 status=ok
// SIG undefined FUN_143adad08(void)

void FUN_143adad08(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143adad26 FUN_143adad26 body=71 status=ok
// SIG undefined FUN_143adad26(void)

undefined8 * FUN_143adad26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae300e0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143adad6e FUN_143adad6e body=282 status=ok
// SIG undefined FUN_143adad6e(void)

undefined8 * FUN_143adad6e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143adae88 FUN_143adae88 body=109 status=ok
// SIG undefined FUN_143adae88(void)

void FUN_143adae88(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143adac10(param_1 + 0x15);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143adaeeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143adaf1a FUN_143adaf1a body=12 status=ok
// SIG undefined FUN_143adaf1a(void)

void FUN_143adaf1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143adaf23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143adaf26 FUN_143adaf26 body=29 status=ok
// SIG undefined FUN_143adaf26(void)

undefined8 FUN_143adaf26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143adaf44 FUN_143adaf44 body=282 status=ok
// SIG undefined FUN_143adaf44(void)

undefined8 * FUN_143adaf44(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ad8169);
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



// FUNCTION 143adb05e FUN_143adb05e body=100 status=ok
// SIG undefined FUN_143adb05e(void)

ulonglong FUN_143adb05e(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (*(longlong *)(param_1[0x15] + 8) != 0) {
    uVar2 = FUN_148201af2(*(longlong *)(param_1[0x15] + 8),&DAT_14ca85100,param_1[0x16]);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143adb0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143adb0c2 FUN_143adb0c2 body=3932 status=ok
// SIG undefined FUN_143adb0c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143adb0c2(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb439f0);
  if (cVar2 == '\0') {
    _DAT_14cb439f0 = 0;
    uRam000000014cb439f8 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = &PTR_FUN_14ae28cb0;
  uStack_58 = 8;
  local_68 = (undefined8 **)0x1a;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae28db0);
  FUN_1446f470e(&DAT_14cb43d30,L"NiagaraDouble",1);
  FUN_1446f470e(&DAT_14cb43d38,L"NiagaraPosition",1);
  DAT_14cb43d40 = 0;
  DAT_14cb43d48 = 0;
  DAT_14cb43d4a = 0;
  _DAT_14cb43d4c = 0xffffffff;
  DAT_14cb43d50 = 0;
  DAT_14cb43d58 = 0;
  DAT_14cb43d5a = 0;
  _DAT_14cb43d5c = 0xffffffff;
  DAT_14cb43d60 = 0;
  DAT_14cb43d68 = 0;
  DAT_14cb43d6a = 0;
  _DAT_14cb43d6c = 0xffffffff;
  DAT_14cb43d70 = 0;
  DAT_14cb43d78 = 0;
  DAT_14cb43d7a = 0;
  _DAT_14cb43d7c = 0xffffffff;
  DAT_14cb43d80 = 0;
  DAT_14cb43d88._0_2_ = 0;
  DAT_14cb43d88._2_1_ = 0;
  DAT_14cb43d88._4_4_ = 0xffffffff;
  FUN_140056680(&DAT_14cb43d90,L"_SWC");
  atexit((_func_5014 *)&LAB_143ad0479);
  InitializeSRWLock((PSRWLOCK)&DAT_14cb43da0);
  DAT_14cb43dc8 = 0;
  DAT_14cb43dd0 = 0;
  DAT_14cb43da8 = 0;
  _DAT_14cb43db0 = 0;
  _DAT_14cb43dd4 = 0xffffffff00000080;
  DAT_14cb43ddc = 0;
  DAT_14cb43de8 = 0;
  DAT_14cb43df0 = 0;
  atexit(FUN_143ad048a);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae29490);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14ae29870;
  local_68 = (undefined8 **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae29890,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14ae29b70;
  local_68 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae29b90);
  _DAT_14cb43ec8 = &PTR_FUN_14ae2f4f0;
  _DAT_14cb43ed0 = 1;
  _DAT_14cb43ed4 = 0;
  uRam000000014cb43edc = 0;
  _DAT_14cb43ee4 = 0;
  CoCreateGuid((GUID *)&DAT_14cb43ed8);
  DAT_14cb43ee8 = 1;
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
  _DAT_14cb43ef0 = DAT_14c844840;
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
  _DAT_14cb43ef8 = 0;
  DAT_14cb43f00 = 0;
  _DAT_14cb43f08 = 0;
  uRam000000014cb43f10 = 0;
  _DAT_14cb43f18 = 0;
  uRam000000014cb43f20 = 0;
  atexit((_func_5014 *)&LAB_143ad0521);
  uStack_58 = 0;
  local_68 = (undefined8 **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae2a2d0,1,0);
  DAT_14cb43f48 = 0;
  _DAT_14cb43f50 = 0;
  atexit((_func_5014 *)&LAB_143ad052d);
  local_50 = (undefined8 *)&DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae2a390);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb43f70,L"fx.Niagara.WorldManager.KillUniqueSims",&DAT_14c762a1c,
                L"System simulations will be removed when unique rather that waiting for GC.");
  atexit(FUN_143ad053e);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb43f80,L"fx.Niagara.WorldManager.ObjectPoolEnabled",&DAT_14c762a1d,
                L"Should we pool objects, yay or nay.");
  atexit(FUN_143ad0583);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43f90,L"fx.Niagara.AllowAsyncWorkToEndOfFrame",&DAT_14c762a20,
                L"Allow async work to continue until the end of the frame, if false it will complete within the tick group it\'s started in."
               );
  atexit(FUN_143ad05c8);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43fa0,L"fx.Niagara.WaitOnPreGC",&DAT_14c762a24,
                L"Toggles whether Niagara will wait for all async tasks to complete before any GC calls."
               );
  atexit(FUN_143ad060d);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43fb0,L"fx.Niagara.WorldManager.SpawnPerTickGroup",&DAT_14c762a28,
                L"Will attempt to spawn new systems earlier (default enabled).");
  atexit(FUN_143ad0652);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43fc0,L"fx.Niagara.AllowPrimedPools",&DAT_14c762a4c,
                L"Allow Niagara pools to be primed.");
  atexit(FUN_143ad0697);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43fd0,L"fx.Niagara.AllowVisibilityCullingForDynamicBounds",&DAT_14c762a2c,
                L"Allow async work to continue until the end of the frame, if false it will complete within the tick group it\'s started in."
               );
  atexit(FUN_143ad06dc);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a1e1a40;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2f8d0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb80(&DAT_14cb43fe0,L"DumpNiagaraWorldManager",
                L"Dump Information About the Niagara World Manager Contents",&local_50);
  if (local_48 == 0) {
LAB_143adb662:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143adb662;
  }
  atexit(FUN_143ad0721);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb43ff0,L"fx.Niagara.Scalability.VisibilityCulling",&DAT_14c762a30,
                L"When non-zero, high level scalability culling based on visibility is enabled.");
  atexit(FUN_143ad0766);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb44000,L"fx.Niagara.Scalability.DistanceCulling",&DAT_14c762a34,
                L"When non-zero, high level scalability culling based on distance is enabled.");
  atexit(FUN_143ad07ab);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb44010,L"fx.Niagara.Scalability.InstanceCountCulling",&DAT_14c762a38,
                L"When non-zero, high level scalability culling based on instance count is enabled."
               );
  atexit(FUN_143ad07f0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb44020,L"fx.Niagara.Scalability.GlobalBudgetCulling",&DAT_14c762a48,
                L"When non-zero, high level scalability culling based on global time budget is enabled."
               );
  atexit(FUN_143ad0835);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb44038,L"fx.Niagara.Debug.GlobalLoopTime",&DAT_14cb44030,
                L"If > 0 all Niagara FX will reset every N seconds. \n");
  atexit(FUN_143ad087a);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb44048,L"fx.Niagara.AllowCullProxies",&DAT_14c762a3c,
                L"Toggles whether Niagara will use Cull Proxy systems in place of systems culled by scalability."
               );
  atexit(FUN_143ad08bf);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb44058,L"fx.Niagara.CSVSplitTime",&DAT_14c762a40,
                L"Length of Niagara\'s split time events passed to the CSV profiler. There are used to give check more confined stat averages."
               );
  atexit(FUN_143ad0904);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a177500;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2f940;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb44068,L"fx.Niagara.Debug.PlaybackMode",
                L"Set playback mode\n0 - Play\n1 - Paused\n2 - Step\n",&local_50);
  if (local_48 == 0) {
LAB_143adb898:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143adb898;
  }
  atexit(FUN_143ad0949);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a177500;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2f9b0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb44078,L"fx.Niagara.Debug.PlaybackRate",L"Set playback rate\n",&local_50);
  if (local_48 == 0) {
LAB_143adb972:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143adb972;
  }
  atexit(FUN_143ad098e);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14a177500;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2fa20;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb44088,L"fx.Niagara.Scalability.CullingMode",
                L"Set scalability culling mode\n0 - Enabled. Culling is enabled as normal.\n1 - Paused. No culling will occur but FX will still be tracked internally so culling can be resumed correctly later.\n2 - Disabled. No culling will occur and no FX will be tracked. Culling may not work correctly for some FX if enabled again after this.\n"
                ,&local_50);
  if (local_48 == 0) {
LAB_143adba4c:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143adba4c;
  }
  atexit(FUN_143ad09d3);
  DAT_14cb44098 = 0;
  DAT_14cb440a0 = 0;
  DAT_14cb440a8 = 0;
  DAT_14cb440b0 = 0;
  DAT_14cb440b8 = 0;
  DAT_14cb440c0 = 0;
  DAT_14cb440c8 = 0;
  DAT_14cb440d0 = 0;
  DAT_14cb440d8 = 0;
  DAT_14cb440e0 = 0;
  DAT_14cb440e8 = 0;
  DAT_14cb440f0 = 0;
  DAT_14cb440f8 = 0;
  DAT_14cb44470 = 0;
  DAT_14cb44478 = 0;
  DAT_14cb44450 = 0;
  _DAT_14cb44458 = 0;
  _DAT_14cb4447c = 0xffffffff00000080;
  DAT_14cb44484 = 0;
  DAT_14cb44490 = 0;
  DAT_14cb44498 = 0;
  atexit(FUN_143ad0a18);
  DAT_14cb44110 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *DAT_14cb44110 = 0;
  DAT_14cb44110[2] = 0;
  DAT_14cb44110[4] = 0;
  DAT_14cb44118 = DAT_14cb44110;
  atexit((_func_5014 *)&LAB_143ad0a41);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2fa90;
  ppuStack_60 = (undefined **)((ulonglong)ppuStack_60 & 0xffffffff00000000);
  local_68 = &local_50;
  FUN_141703554(&DAT_14cb44128,L"fx.Niagara.WorldManager.FirstHighPriTickGroup",&DAT_14cb44120,
                L"Defines which tick groups should be set to high priority for the world manager.\n0 - (Default) all tick groups will run high priority.\n1 - The first tick group will be normal priority, all others high, etc."
               );
  if (local_48 == 0) {
LAB_143adbbf8:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143adbbf8;
  }
  atexit(FUN_143ad0a4d);
  FUN_14647bf26();
  DAT_14cb442b0 = 0;
  atexit((_func_5014 *)&LAB_143ad272f);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2fbe0;
  ppuStack_60 = (undefined **)CONCAT44(ppuStack_60._4_4_,0x40);
  local_68 = &local_50;
  FUN_14171ec12(&DAT_14cb442b8,L"fx.NiagaraStateless.Feature.ExecuteGPU",&DAT_14c762a44,
                L"When enabled simulations are allowed to execute on the GPU");
  if (local_48 == 0) {
LAB_143adbcef:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143adbcef;
  }
  atexit(FUN_143ad2740);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14ae2fc50;
  ppuStack_60 = (undefined **)CONCAT44(ppuStack_60._4_4_,0x40);
  local_68 = &local_50;
  FUN_14171ec12(&DAT_14cb442c8,L"fx.NiagaraStateless.Feature.ExecuteCPU",&DAT_14c762a45,
                L"When enabled simulations are allowed to execute on the CPU");
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143adbddc;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143adbddc:
  atexit(FUN_143ad2785);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb442d8,L"fx.NiagaraStateless.ComputeManager.UseCache",&DAT_14c762a46,
                L"When enabled we will attempt to reuse allocated buffers between frames.");
  atexit(FUN_143ad27ca);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb442f0,L"fx.NiagaraStateless.ComputeManager.CPUThreshold",&DAT_14cb442e8,
                L"When lower than this particle count prefer to use the CPU over dispatching a compute shader."
               );
  atexit(FUN_143ad280f);
  DAT_14cb44300 = 0;
  _DAT_14cb44308 = 0;
  atexit((_func_5014 *)&LAB_143ad786b);
  ppuStack_60 = &PTR_FUN_14ae2c4b0;
  uStack_58 = 1;
  local_68 = (undefined8 **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae2c4d0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143adc030 FUN_143adc030 body=304 status=ok
// SIG undefined FUN_143adc030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143adc030(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb444c0);
  if (cVar1 == '\0') {
    _DAT_14cb444c0 = 0;
    uRam000000014cb444c8 = 0;
  }
  if (local_48 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_48 = &DAT_14a19662d;
  local_40 = 4;
  local_3c = 0;
  FUN_14001a6c0(&local_48,1);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/NiagaraAnimNotifies",&PTR_FUN_14ae31150,2,&PTR_FUN_14ae31120);
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/NiagaraAnimNotifies",&PTR_FUN_14ae31800,1,0);
  local_48 = (undefined *)0x800000014ae31828;
  local_34 = 0x13;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14647c932(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143adc164 FUN_143adc164 body=57 status=ok
// SIG undefined FUN_143adc164(void)

void FUN_143adc164(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44580 == 0) {
    uVar1 = FUN_14596eb09();
    DAT_14cb44580 = FUN_14171c317(FUN_14647ca96,uVar1,L"EProcMeshSliceCapOption");
  }
  return;
}



// FUNCTION 143adc19e FUN_143adc19e body=4794 status=ok
// SIG undefined FUN_143adc19e(void)

void FUN_143adc19e(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  double dVar1;
  size_t _Size;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_458 [32];
  longlong *local_438;
  ulonglong local_430;
  float local_424;
  ulonglong local_420;
  longlong *local_418;
  double local_410;
  longlong *local_408;
  int local_3fc;
  longlong local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  ulonglong uStack_3d0;
  ulonglong local_3c8;
  undefined8 uStack_3c0;
  double local_348;
  undefined8 uStack_340;
  double local_338;
  double local_328;
  double dStack_320;
  double local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  void *local_248;
  double dStack_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  float afStack_1c0 [7];
  int local_1a4 [3];
  longlong local_198;
  ulonglong uStack_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  longlong local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  uVar6 = (ulonglong)(int)param_1[1];
  local_438 = param_1;
  if (uVar6 != 0) {
    iVar11 = (int)param_2[1];
    local_430 = (ulonglong)(uint)(iVar11 / 3);
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0x80;
    uStack_118 = 0xffffffff;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_178 = 0;
    local_170 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_16c = 0x80;
    uStack_168 = 0xffffffff;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    local_3d8 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3d0 = (ulonglong)(uint)(iVar11 / 3);
    iVar5 = 0;
    iVar3 = 0;
    local_408 = param_2;
    if (4 < iVar11 + 2U) {
      FUN_140c0b6f2(&local_3d8,0);
      iVar5 = (int)uStack_3e0;
      iVar3 = uStack_3e0._4_4_;
    }
    uStack_3e0 = CONCAT44(uStack_3e0._4_4_,iVar5 + (uint)local_430);
    if ((uint)(iVar3 - iVar5) < (uint)local_430) {
      FUN_140c0b6f2(&local_3e8);
    }
    iVar3 = (int)uStack_3f0;
    uStack_3f0 = CONCAT44(uStack_3f0._4_4_,(int)uStack_3f0 + (uint)local_430);
    local_420 = uVar6;
    local_418 = param_4;
    if ((uint)(uStack_3f0._4_4_ - iVar3) < (uint)local_430) {
      FUN_140c0b6f2(&local_3f8);
    }
    local_3fc = 0;
    if (2 < iVar11) {
      iVar11 = (int)local_420 + -1;
      do {
        lVar12 = 0;
        do {
          iVar3 = *(int *)(*local_408 + ((longlong)(int)lVar12 + (longlong)local_3fc * 3) * 4);
          if (iVar11 <= iVar3) {
            iVar3 = iVar11;
          }
          local_348 = (double)CONCAT44(local_348._4_4_,iVar3);
          local_1a4[lVar12] = iVar3;
          lVar7 = *local_438;
          lVar4 = (longlong)iVar3;
          dVar1 = *(double *)(lVar7 + 0x10 + lVar4 * 0x18);
          dVar16 = *(double *)(lVar7 + 8 + lVar4 * 0x18);
          *(float *)((longlong)&local_1c8 + lVar12 * 0xc) = (float)*(double *)(lVar7 + lVar4 * 0x18)
          ;
          *(float *)((longlong)&local_1c8 + lVar12 * 0xc + 4) = (float)dVar16;
          afStack_1c0[lVar12 * 3] = (float)dVar1;
          local_248 = (void *)0x0;
          dStack_240 = 0.0;
          FUN_14821116e(lVar4,local_438,&local_248);
          FUN_1406b291c(&local_148,&local_348,&local_3fc);
          FUN_1406b291c(&local_198,&local_348,&local_3fc);
          if (0 < dStack_240._0_4_) {
            lVar7 = 0;
            do {
              local_3c8 = CONCAT44(local_3c8._4_4_,*(undefined4 *)((longlong)local_248 + lVar7 * 4))
              ;
              FUN_1406b291c(&local_198,&local_3c8,&local_3fc);
              local_2c8 = 0.0;
              uStack_2c0 = 0.0;
              FUN_146be72fa(&local_148,local_3c8 & 0xffffffff,&local_2c8,0);
              if (0 < (int)uStack_2c0) {
                lVar9 = 0;
                lVar4 = 0;
                do {
                  FUN_1406b291c(&local_198,&local_348,(longlong)local_2c8 + lVar9);
                  lVar4 = lVar4 + 1;
                  lVar9 = lVar9 + 4;
                } while (lVar4 < (int)uStack_2c0);
              }
              if (local_2c8 != 0.0) {
                FUN_1400020a8();
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < dStack_240._0_4_);
          }
          if (local_248 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        local_424 = afStack_1c0[0];
        fVar29 = afStack_1c0[0] - afStack_1c0[6];
        fVar17 = local_1c8._4_4_ - afStack_1c0[5];
        fVar21 = (float)local_1c8 - afStack_1c0[4];
        fVar23 = (afStack_1c0[1] - afStack_1c0[4]) * fVar17 -
                 fVar21 * (afStack_1c0[2] - afStack_1c0[5]);
        fVar27 = (afStack_1c0[3] - afStack_1c0[6]) * fVar21 -
                 fVar29 * (afStack_1c0[1] - afStack_1c0[4]);
        fVar25 = (afStack_1c0[2] - afStack_1c0[5]) * fVar29 -
                 fVar17 * (afStack_1c0[3] - afStack_1c0[6]);
        fVar13 = fVar23 * fVar23 + fVar25 * fVar25 + fVar27 * fVar27;
        if (((fVar13 != 1.0) || (fVar24 = fVar23, fVar26 = fVar25, fVar28 = fVar27, NAN(fVar13))) &&
           (fVar24 = DAT_14c846338, fVar26 = (float)DAT_14c846330, fVar28 = DAT_14c846330._4_4_,
           1e-08 <= fVar13)) {
          fVar13 = 1.0 / SQRT(fVar13);
          fVar24 = fVar23 * fVar13;
          fVar26 = fVar25 * fVar13;
          fVar28 = fVar27 * fVar13;
        }
        if ((int)param_3[1] == (int)local_438[1]) {
          lVar12 = *param_3;
          local_410 = *(double *)(lVar12 + (longlong)local_1a4[0] * 0x10);
          local_280 = *(double *)(lVar12 + 8 + (longlong)local_1a4[0] * 0x10);
          local_248 = (void *)(double)(afStack_1c0[1] - (float)local_1c8);
          dStack_240 = (double)(afStack_1c0[2] - local_1c8._4_4_);
          local_238 = (double)(afStack_1c0[3] - afStack_1c0[0]);
          local_228 = (double)(afStack_1c0[4] - (float)local_1c8);
          local_230 = 0;
          local_220 = (double)(afStack_1c0[5] - local_1c8._4_4_);
          local_218 = (double)(afStack_1c0[6] - afStack_1c0[0]);
          local_208 = (double)(float)local_1c8;
          local_210 = 0;
          local_200 = (double)local_1c8._4_4_;
          local_1f8 = (double)afStack_1c0[0];
          local_2c8 = *(double *)(lVar12 + (longlong)local_1a4[1] * 0x10) - local_410;
          uStack_2c0 = *(double *)(lVar12 + 8 + (longlong)local_1a4[1] * 0x10) - local_280;
          local_2a8 = *(double *)(lVar12 + (longlong)local_1a4[2] * 0x10) - local_410;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a0 = *(double *)(lVar12 + 8 + (longlong)local_1a4[2] * 0x10) - local_280;
          local_298 = 0;
          uStack_290 = 0;
          local_1e0 = 0;
          uStack_1d8 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_1d0 = 0x3ff0000000000000;
          local_278 = 0x3ff0000000000000;
          local_260 = 0;
          uStack_258 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_250 = 0x3ff0000000000000;
          local_288 = local_410;
          FUN_14007522e(&local_3c8,&local_2c8);
          FUN_1447fea8d(&local_348,&local_3c8,&local_248);
          dVar14 = local_2e8 * 0.0 + local_308 * 0.0 + local_328 * 0.0 + local_348;
          dVar15 = dStack_2e0 * 0.0 + dStack_300 * 0.0 + dStack_320 * 0.0 + uStack_340;
          dVar1 = 0.0;
          dVar18 = local_318 * 0.0 + local_338 + local_2f8 * 0.0 + local_2d8 * 0.0;
          dVar22 = dVar18 * dVar18 + dVar14 * dVar14 + dVar15 * dVar15;
          dVar20 = 0.0;
          dVar16 = 0.0;
          dVar19 = 0.0;
          if (9.99999993922529e-09 < dVar22) {
            dVar20 = 1.0 / SQRT(dVar22);
            dVar19 = dVar18 * dVar20;
            dVar16 = dVar15 * dVar20;
            dVar20 = dVar20 * dVar14;
          }
          lVar12 = (longlong)local_3fc;
          *(float *)(local_3d8 + lVar12 * 0xc) = (float)dVar20;
          *(float *)(local_3d8 + 4 + lVar12 * 0xc) = (float)dVar16;
          *(float *)(local_3d8 + 8 + lVar12 * 0xc) = (float)dVar19;
          dVar19 = local_2e8 * 0.0 + local_308 * 0.0 + local_348 * 0.0 + local_328;
          dVar14 = dStack_2e0 * 0.0 + dStack_300 * 0.0 + uStack_340 * 0.0 + dStack_320;
          dVar18 = local_338 * 0.0 + local_318 + local_2f8 * 0.0 + local_2d8 * 0.0;
          dVar20 = dVar18 * dVar18 + dVar19 * dVar19 + dVar14 * dVar14;
          dVar15 = 0.0;
          dVar16 = 0.0;
          if (9.99999993922529e-09 < dVar20) {
            dVar1 = 1.0 / SQRT(dVar20);
            dVar16 = dVar18 * dVar1;
            dVar15 = dVar14 * dVar1;
            dVar1 = dVar1 * dVar19;
          }
          lVar12 = (longlong)local_3fc;
          *(float *)(local_3e8 + lVar12 * 0xc) = (float)dVar1;
          *(float *)(local_3e8 + 4 + lVar12 * 0xc) = (float)dVar15;
          *(float *)(local_3e8 + 8 + lVar12 * 0xc) = (float)dVar16;
        }
        else {
          fVar13 = fVar29 * fVar29 + fVar21 * fVar21 + fVar17 * fVar17;
          if (((fVar13 != 1.0) || (fVar23 = fVar29, fVar25 = fVar17, fVar27 = fVar21, NAN(fVar13)))
             && (fVar23 = DAT_14c846338, fVar25 = DAT_14c846330._4_4_, fVar27 = (float)DAT_14c846330
                , 1e-08 <= fVar13)) {
            fVar13 = 1.0 / SQRT(fVar13);
            fVar23 = fVar29 * fVar13;
            fVar25 = fVar17 * fVar13;
            fVar27 = fVar21 * fVar13;
          }
          lVar12 = (longlong)local_3fc;
          *(float *)(local_3d8 + lVar12 * 0xc) = fVar27;
          *(float *)(local_3d8 + 4 + lVar12 * 0xc) = fVar25;
          *(float *)(local_3d8 + 8 + lVar12 * 0xc) = fVar23;
          lVar12 = (longlong)local_3fc;
          fVar13 = *(float *)(local_3d8 + lVar12 * 0xc);
          fVar17 = *(float *)(local_3d8 + 4 + lVar12 * 0xc);
          fVar23 = fVar13 * fVar28 - fVar26 * fVar17;
          fVar21 = *(float *)(local_3d8 + 8 + lVar12 * 0xc);
          fVar25 = fVar21 * fVar26 - fVar24 * fVar13;
          fVar13 = fVar17 * fVar24 - fVar21 * fVar28;
          fVar17 = fVar23 * fVar23 + fVar13 * fVar13 + fVar25 * fVar25;
          if (((fVar17 != 1.0) || (fVar21 = fVar23, fVar27 = fVar13, fVar29 = fVar25, NAN(fVar17)))
             && (fVar21 = DAT_14c846338, fVar27 = (float)DAT_14c846330, fVar29 = DAT_14c846330._4_4_
                , 1e-08 <= fVar17)) {
            fVar17 = 1.0 / SQRT(fVar17);
            fVar21 = fVar23 * fVar17;
            fVar27 = fVar13 * fVar17;
            fVar29 = fVar25 * fVar17;
          }
          *(float *)(local_3e8 + lVar12 * 0xc) = fVar27;
          *(float *)(local_3e8 + 4 + lVar12 * 0xc) = fVar29;
          *(float *)(local_3e8 + 8 + lVar12 * 0xc) = fVar21;
        }
        lVar12 = (longlong)local_3fc;
        *(float *)(local_3f8 + lVar12 * 0xc) = fVar26;
        *(float *)(local_3f8 + 4 + lVar12 * 0xc) = fVar28;
        *(float *)(local_3f8 + 8 + lVar12 * 0xc) = fVar24;
        local_3fc = local_3fc + 1;
      } while (local_3fc < (int)local_430);
    }
    uVar6 = local_420;
    local_248 = (void *)0x0;
    local_2c8 = 0.0;
    uStack_2c0 = 0.0;
    local_348 = 0.0;
    uStack_340 = 0.0;
    uVar8 = (uint)local_420;
    dStack_240 = (double)(local_420 & 0xffffffff);
    FUN_140c0b6f2(&local_248);
    _Size = uVar6 * 0xc;
    memset(local_248,0,_Size);
    iVar11 = (int)uStack_2c0;
    lVar12 = (longlong)(int)uStack_2c0;
    uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(int)uStack_2c0 + uVar8);
    if ((uint)(uStack_2c0._4_4_ - iVar11) < uVar8) {
      FUN_140c0b6f2(&local_2c8);
    }
    memset((void *)(lVar12 * 0xc + (longlong)local_2c8),0,_Size);
    iVar11 = (int)uStack_340;
    lVar12 = (longlong)(int)uStack_340;
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,(int)uStack_340 + uVar8);
    if ((uint)(uStack_340._4_4_ - iVar11) < uVar8) {
      FUN_140c0b6f2(&local_348);
    }
    iVar11 = 0;
    memset((void *)(lVar12 * 0xc + (longlong)local_348),0,_Size);
    if (0 < (int)local_438[1]) {
      uVar10 = 0;
      do {
        local_3c8 = 0;
        uStack_3c0 = 0;
        FUN_146be72fa(&local_198,uVar10 & 0xffffffff,&local_3c8,0);
        if (0 < (int)uStack_3c0) {
          lVar12 = 0;
          do {
            lVar7 = (longlong)*(int *)(local_3c8 + lVar12 * 4);
            *(float *)((longlong)local_348 + uVar10 * 0xc) =
                 *(float *)(local_3f8 + lVar7 * 0xc) +
                 *(float *)((longlong)local_348 + uVar10 * 0xc);
            *(float *)((longlong)local_348 + 4 + uVar10 * 0xc) =
                 *(float *)(local_3f8 + 4 + lVar7 * 0xc) +
                 *(float *)((longlong)local_348 + 4 + uVar10 * 0xc);
            *(float *)((longlong)local_348 + 8 + uVar10 * 0xc) =
                 *(float *)(local_3f8 + 8 + lVar7 * 0xc) +
                 *(float *)((longlong)local_348 + 8 + uVar10 * 0xc);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_3c0);
        }
        local_1c8 = 0;
        afStack_1c0[0] = 0.0;
        afStack_1c0[1] = 0.0;
        FUN_146be72fa(&local_148,uVar10 & 0xffffffff,&local_1c8,0);
        if (0 < (int)afStack_1c0[0]) {
          lVar12 = uVar10 * 0xc;
          lVar7 = 0;
          do {
            lVar4 = (longlong)*(int *)(local_1c8 + lVar7 * 4) * 0xc;
            *(float *)((longlong)local_248 + lVar12) =
                 *(float *)(local_3d8 + lVar4) + *(float *)((longlong)local_248 + lVar12);
            *(float *)((longlong)local_248 + lVar12 + 4) =
                 *(float *)(local_3d8 + 4 + lVar4) + *(float *)((longlong)local_248 + lVar12 + 4);
            *(float *)((longlong)local_248 + lVar12 + 8) =
                 *(float *)(local_3d8 + 8 + lVar4) + *(float *)((longlong)local_248 + lVar12 + 8);
            *(float *)((longlong)local_2c8 + lVar12) =
                 *(float *)(local_3e8 + lVar4) + *(float *)((longlong)local_2c8 + lVar12);
            *(float *)((longlong)local_2c8 + 4 + lVar12) =
                 *(float *)(local_3e8 + 4 + lVar4) + *(float *)((longlong)local_2c8 + 4 + lVar12);
            *(float *)((longlong)local_2c8 + 8 + lVar12) =
                 *(float *)(local_3e8 + 8 + lVar4) + *(float *)((longlong)local_2c8 + 8 + lVar12);
            lVar7 = lVar7 + 1;
          } while (lVar7 < (int)afStack_1c0[0]);
        }
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        if (local_3c8 != 0) {
          FUN_1400020a8();
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)(int)local_438[1]);
    }
    plVar2 = local_418;
    iVar3 = *(int *)((longlong)local_418 + 0xc);
    if (iVar3 < 0) {
      *(undefined4 *)(local_418 + 1) = 0;
      FUN_1447a8aa0(local_418);
      iVar11 = (int)plVar2[1];
      iVar3 = *(int *)((longlong)plVar2 + 0xc);
    }
    *(uint *)(plVar2 + 1) = iVar11 + uVar8;
    if ((uint)(iVar3 - iVar11) < uVar8) {
      FUN_1403e3958(plVar2);
    }
    iVar11 = *(int *)((longlong)param_5 + 0xc);
    iVar3 = 0;
    if (iVar11 < 0) {
      *(undefined4 *)(param_5 + 1) = 0;
      FUN_148215026(param_5);
      iVar3 = (int)param_5[1];
      iVar11 = *(int *)((longlong)param_5 + 0xc);
    }
    *(uint *)(param_5 + 1) = iVar3 + uVar8;
    if ((uint)(iVar11 - iVar3) < uVar8) {
      FUN_148214286();
    }
    if (0 < (int)uVar8) {
      lVar12 = 8;
      lVar7 = 0;
      do {
        fVar13 = *(float *)((longlong)local_248 + lVar12 + -8);
        fVar17 = *(float *)((longlong)local_248 + lVar12 + -4);
        fVar21 = *(float *)((longlong)local_248 + lVar12);
        fVar23 = fVar21 * fVar21 + fVar13 * fVar13 + fVar17 * fVar17;
        if (1e-08 < fVar23) {
          fVar23 = 1.0 / SQRT(fVar23);
          *(float *)((longlong)local_248 + lVar12 + -8) = fVar13 * fVar23;
          *(float *)((longlong)local_248 + lVar12 + -4) = fVar17 * fVar23;
          *(float *)((longlong)local_248 + lVar12) = fVar21 * fVar23;
        }
        fVar13 = *(float *)((longlong)local_348 + -8 + lVar12);
        fVar17 = *(float *)((longlong)local_348 + -4 + lVar12);
        fVar21 = *(float *)((longlong)local_348 + lVar12);
        fVar23 = fVar21 * fVar21 + fVar13 * fVar13 + fVar17 * fVar17;
        if (1e-08 < fVar23) {
          fVar23 = 1.0 / SQRT(fVar23);
          fVar13 = fVar13 * fVar23;
          *(float *)((longlong)local_348 + -8 + lVar12) = fVar13;
          fVar17 = fVar17 * fVar23;
          *(float *)((longlong)local_348 + -4 + lVar12) = fVar17;
          fVar21 = fVar21 * fVar23;
          *(float *)((longlong)local_348 + lVar12) = fVar21;
        }
        lVar4 = *plVar2;
        *(double *)(lVar4 + -0x10 + lVar12 * 2) = (double)fVar13;
        *(double *)(lVar4 + -8 + lVar12 * 2) = (double)fVar17;
        *(double *)(lVar4 + lVar12 * 2) = (double)fVar21;
        fVar13 = *(float *)((longlong)local_348 + -8 + lVar12);
        fVar17 = *(float *)((longlong)local_348 + -4 + lVar12);
        fVar21 = *(float *)((longlong)local_248 + lVar12 + -8);
        fVar23 = *(float *)((longlong)local_248 + lVar12 + -4);
        fVar25 = *(float *)((longlong)local_348 + lVar12);
        fVar27 = fVar25 * *(float *)((longlong)local_248 + lVar12) +
                 fVar13 * fVar21 + fVar17 * fVar23;
        fVar21 = fVar21 - fVar27 * fVar13;
        *(float *)((longlong)local_248 + lVar12 + -8) = fVar21;
        fVar23 = fVar23 - fVar17 * fVar27;
        *(float *)((longlong)local_248 + lVar12 + -4) = fVar23;
        fVar13 = *(float *)((longlong)local_248 + lVar12) - fVar25 * fVar27;
        *(float *)((longlong)local_248 + lVar12) = fVar13;
        fVar17 = fVar13 * fVar13 + fVar21 * fVar21 + fVar23 * fVar23;
        if (1e-08 < fVar17) {
          fVar17 = 1.0 / SQRT(fVar17);
          fVar21 = fVar21 * fVar17;
          *(float *)((longlong)local_248 + lVar12 + -8) = fVar21;
          fVar23 = fVar23 * fVar17;
          *(float *)((longlong)local_248 + lVar12 + -4) = fVar23;
          fVar13 = fVar13 * fVar17;
          *(float *)((longlong)local_248 + lVar12) = fVar13;
        }
        fVar17 = *(float *)((longlong)local_348 + -8 + lVar12);
        fVar25 = *(float *)((longlong)local_348 + -4 + lVar12);
        fVar27 = *(float *)((longlong)local_348 + lVar12);
        fVar29 = *(float *)((longlong)local_2c8 + -4 + lVar12);
        fVar24 = *(float *)((longlong)local_2c8 + -8 + lVar12);
        fVar26 = *(float *)((longlong)local_2c8 + lVar12);
        lVar4 = *param_5;
        *(double *)(lVar4 + lVar7) = (double)fVar21;
        *(double *)(lVar4 + 8 + lVar7) = (double)fVar23;
        *(double *)(lVar4 + 0x10 + lVar7) = (double)fVar13;
        *(bool *)(lVar4 + 0x18 + lVar7) =
             (fVar17 * fVar23 - fVar21 * fVar25) * fVar26 +
             (fVar25 * fVar13 - fVar27 * fVar23) * fVar24 +
             (fVar27 * fVar21 - fVar13 * fVar17) * fVar29 < 0.0;
        lVar7 = lVar7 + 0x20;
        lVar12 = lVar12 + 0xc;
      } while (uVar6 << 5 != lVar7);
    }
    if (local_348 != 0.0) {
      FUN_1400020a8();
    }
    if (local_2c8 != 0.0) {
      FUN_1400020a8();
    }
    if (local_248 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_3f8 != 0) {
      FUN_1400020a8();
    }
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
    if (local_3d8 != 0) {
      FUN_1400020a8();
    }
    local_150 = 0;
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    uVar6 = uStack_190 >> 0x20;
    uStack_190 = uStack_190 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      FUN_14472eb64(&local_198,0);
    }
    uStack_168 = 0xffffffff;
    local_164 = 0;
    local_170 = 0;
    if (0x80 < local_16c) {
      local_16c = 0x80;
      FUN_1446efbd8(local_188,0);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    uVar6 = uStack_140 >> 0x20;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      FUN_14472eb64(&local_148,0);
    }
    uStack_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      FUN_1446efbd8(local_138,0);
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143add45a FUN_143add45a body=1321 status=ok
// SIG undefined FUN_143add45a(void)

void FUN_143add45a(longlong param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_79;
  undefined8 local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x670) <= param_2) goto LAB_143add5bc;
  *(undefined1 *)(*(longlong *)(param_1 + 0x668) + 0x59 + (longlong)param_2 * 0x60) = param_3;
  lVar4 = *(longlong *)(param_1 + 0x5a8);
  if (lVar4 == 0) goto LAB_143add5bc;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143add4d2;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143add4d7;
      goto LAB_143add51e;
    }
  }
  else {
LAB_143add4d2:
    if (iVar7 != 0x10) {
LAB_143add51e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143add4d7;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143add4d7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143add681;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143ae0466);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143add681:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143add701;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143add701:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14ae37788;
        puVar17[0x15] = lVar4;
        *(int *)(puVar17 + 0x16) = param_2;
        *(undefined1 *)((longlong)puVar17 + 0xb4) = param_3;
        *(undefined2 *)((longlong)puVar17 + 0xb5) = (undefined2)local_78;
        *(undefined1 *)((longlong)puVar17 + 0xb7) = local_78._2_1_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88 = &local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ae37720;
        local_78 = &LAB_143ae1c86;
        local_50 = lVar4;
        local_48 = param_2;
        local_44 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"FProcMeshSectionVisibilityUpdate",&DAT_14cb446dc);
        if (local_78 != (undefined1 *)0x0) {
          pppuVar14 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar14 = &local_58;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143add5bc;
    }
  }
LAB_143add4d7:
  if ((param_2 < *(int *)(lVar4 + 0x2a0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x298) + (longlong)param_2 * 8), lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x358) = param_3;
  }
LAB_143add5bc:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143add984 FUN_143add984 body=69 status=ok
// SIG undefined FUN_143add984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143add984(void)

{
  _DAT_14cb446b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143add9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb446b8,1);
  return;
}



// FUNCTION 143add9ca FUN_143add9ca body=117 status=ok
// SIG undefined FUN_143add9ca(void)

void FUN_143add9ca(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_148214792(param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14480809c(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x38) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x100;
  return;
}



// FUNCTION 143adda40 FUN_143adda40 body=1142 status=ok
// SIG undefined FUN_143adda40(void)

void FUN_143adda40(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_78 [32];
  GUID local_58;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar10 == 0) && (lVar10 = FUN_1448abda6(param_1), lVar10 == 0)) ||
      ((bVar1 = *(byte *)(lVar10 + 0x152), bVar1 != 1 &&
       ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))))) ||
     (*(char *)(param_1 + 0x659) != '\x01')) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    if (*(int *)(param_1 + 0x6cc) != 0) {
      FUN_147c86988(param_1 + 0x6c0,0);
    }
    FUN_140b3ad7e(param_1);
    plVar11 = (longlong *)(param_1 + 0x660);
    bVar17 = false;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x6c8);
    if ((longlong)iVar9 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x6c0);
      lVar13 = 0;
      do {
        lVar3 = *(longlong *)(lVar10 + lVar13);
        lVar4 = *(longlong *)(lVar3 + 0x2f0);
        if (lVar4 != 0) {
          LOCK();
          *(undefined1 *)(lVar4 + 0x100) = 1;
          UNLOCK();
          *(undefined8 *)(lVar3 + 0x2f0) = 0;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar9 * 8 != lVar13);
    }
    lVar10 = FUN_140b3adc2(param_1);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    iVar9 = *(int *)(param_1 + 0x6c8);
    *(uint *)(param_1 + 0x6c8) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x6cc) < iVar9 + 1U) {
      FUN_1482153d8((longlong *)(param_1 + 0x6c0),iVar9);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x6c0) + (longlong)iVar9 * 8) = lVar10;
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    plVar11 = (longlong *)
              ((longlong)(*(int *)(param_1 + 0x6c8) + -1) * 8 + *(longlong *)(param_1 + 0x6c0));
    bVar17 = true;
  }
  plVar11 = (longlong *)*plVar11;
  FUN_14058b81e(plVar11 + 0xd,param_1 + 0x678);
  *(char *)((longlong)plVar11 + 0x31) = (*(char *)(param_1 + 0x658) != '\0') * '\x03';
  if (bVar17) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar7 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_14a5a8900;
    local_48[1] = plVar11;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_48[2] = lVar13;
    *local_48 = &PTR_FUN_14ae377a0;
    local_48[3] = 0;
    iVar9 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_48 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar17 = iVar9 == 0;
        if (bVar17) {
          *(int *)(lVar10 + 0x10) = iVar15;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar9 = iVar15;
        }
      }
    }
    *(int *)((longlong)puVar7 + 0x1c) = iVar9;
    puVar7[4] = FUN_148213e48;
    *(undefined4 *)(puVar7 + 5) = 0;
    FUN_143606f80(plVar11,&local_48);
  }
  else {
    local_58.Data1 = 0;
    local_58.Data2 = 0;
    local_58.Data3 = 0;
    local_58.Data4[0] = '\0';
    local_58.Data4[1] = '\0';
    local_58.Data4[2] = '\0';
    local_58.Data4[3] = '\0';
    local_58.Data4[4] = '\0';
    local_58.Data4[5] = '\0';
    local_58.Data4[6] = '\0';
    local_58.Data4[7] = '\0';
    CoCreateGuid(&local_58);
    *(ulong *)(plVar11 + 0x1d) = local_58.Data1;
    *(undefined4 *)((longlong)plVar11 + 0xec) = local_58._4_4_;
    *(undefined4 *)(plVar11 + 0x1e) = local_58.Data4._0_4_;
    *(undefined4 *)((longlong)plVar11 + 0xf4) = local_58.Data4._4_4_;
    *(byte *)((longlong)plVar11 + 0xb9) = *(byte *)((longlong)plVar11 + 0xb9) | 4;
    (**(code **)(*plVar11 + 0x2c0))(plVar11);
    (**(code **)(*plVar11 + 0x2a0))(plVar11);
    FUN_1406cc378(param_1);
  }
  iVar9 = *(int *)(param_1 + 0x6e4);
  *(int *)(param_1 + 0x6e4) = iVar9 + 1;
  uVar12 = (ulonglong)*(int *)(param_1 + 0x6d8);
  if ((longlong)uVar12 < 1) {
    *(int *)(param_1 + 0x6e4) = iVar9;
  }
  else {
    plVar11 = (longlong *)(param_1 + 0x6d0);
    bVar17 = false;
    do {
      lVar10 = uVar12 * 0x10 + -8;
      uVar16 = uVar12;
      while (((*(int *)(*plVar11 + lVar10) != 0 &&
              (plVar5 = *(longlong **)(*plVar11 + -8 + lVar10), plVar5 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar5 + 0x60))(), cVar8 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar6 = uVar16 < 2;
        uVar16 = uVar16 - 1;
        if (bVar6) {
          iVar9 = *(int *)(param_1 + 0x6e4) + -1;
          *(int *)(param_1 + 0x6e4) = iVar9;
          if (bVar17) goto LAB_143addd6f;
          goto LAB_143addde3;
        }
      }
      uVar12 = uVar16 - 1;
      bVar17 = true;
    } while (1 < uVar16);
    iVar9 = *(int *)(param_1 + 0x6e4) + -1;
    *(int *)(param_1 + 0x6e4) = iVar9;
LAB_143addd6f:
    if (iVar9 < 1) {
      iVar9 = *(int *)(param_1 + 0x6d8);
      iVar15 = iVar9;
      if (0 < iVar9) {
        iVar14 = 0;
        do {
          if (((*(int *)(*plVar11 + 8 + (longlong)iVar14 * 0x10) == 0) ||
              (plVar5 = *(longlong **)(*plVar11 + (longlong)iVar14 * 0x10),
              plVar5 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar5 + 0x28))(), cVar8 != '\0')) {
            FUN_14005b288(plVar11,iVar14);
            FUN_14005b248(plVar11);
          }
          else {
            iVar14 = iVar14 + 1;
          }
          iVar15 = *(int *)(param_1 + 0x6d8);
        } while (iVar14 < iVar15);
      }
      iVar14 = 2;
      if (2 < iVar15 * 2) {
        iVar14 = iVar15 * 2;
      }
      *(int *)(param_1 + 0x6e0) = iVar14;
      if ((iVar14 < iVar9) && (*(int *)(param_1 + 0x6dc) != iVar15)) {
        FUN_14045812c(plVar11);
      }
    }
  }
LAB_143addde3:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143addeb8 FUN_143addeb8 body=2231 status=ok
// SIG undefined FUN_143addeb8(void)

void FUN_143addeb8(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10)

{
  longlong lVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined ***pppuVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong lVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  longlong local_e0;
  int local_d4;
  longlong *local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  int *local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = param_4;
  if (*(int *)(param_1 + 0x670) <= param_2) goto LAB_143ade18b;
  uVar19 = *(uint *)(param_3 + 1);
  uVar26 = (ulonglong)uVar19;
  if (*(uint *)(*(longlong *)(param_1 + 0x668) + 8 + (longlong)param_2 * 0x60) != uVar19)
  goto LAB_143ade18b;
  plVar22 = (longlong *)(*(longlong *)(param_1 + 0x668) + (longlong)param_2 * 0x60);
  dVar34 = 0.0;
  if ((uVar26 == 0) || ((int)uVar19 < 1)) {
    uVar18 = 0;
    dVar32 = 0.0;
    dVar33 = 0.0;
    dVar35 = 0.0;
    dVar36 = 0.0;
    dVar37 = 0.0;
  }
  else {
    lVar23 = *param_3;
    bVar31 = true;
    lVar28 = 0;
    dVar32 = 0.0;
    dVar33 = 0.0;
    dVar35 = 0.0;
    dVar36 = 0.0;
    dVar37 = 0.0;
    uVar18 = 0;
    uVar38 = 0;
    uVar40 = 0;
    do {
      dVar34 = *(double *)(lVar23 + lVar28);
      uVar39 = SUB84(dVar34,0);
      uVar41 = (undefined4)((ulonglong)dVar34 >> 0x20);
      if (bVar31) {
        dVar32 = *(double *)(lVar23 + 8 + lVar28);
        dVar33 = *(double *)(lVar23 + 0x10 + lVar28);
        uVar18 = 1;
        dVar35 = dVar34;
        dVar36 = dVar32;
        dVar37 = dVar33;
      }
      else {
        if (dVar34 <= (double)CONCAT44(uVar40,uVar38)) {
          uVar38 = uVar39;
          uVar40 = uVar41;
        }
        dVar3 = *(double *)(lVar23 + 8 + lVar28);
        dVar4 = *(double *)(lVar23 + 0x10 + lVar28);
        if (dVar3 <= dVar32) {
          dVar32 = dVar3;
        }
        if (dVar4 <= dVar33) {
          dVar33 = dVar4;
        }
        if (dVar35 <= dVar34) {
          dVar35 = dVar34;
        }
        if (dVar36 <= dVar3) {
          dVar36 = dVar3;
        }
        if (dVar37 <= dVar4) {
          dVar37 = dVar4;
        }
        dVar34 = (double)CONCAT44(uVar40,uVar38);
        uVar39 = uVar38;
        uVar41 = uVar40;
      }
      lVar28 = lVar28 + 0x18;
      bVar31 = false;
      uVar38 = uVar39;
      uVar40 = uVar41;
    } while (uVar26 * 0x18 != lVar28);
  }
  plVar22[4] = (longlong)dVar34;
  plVar22[5] = (longlong)dVar32;
  plVar22[6] = (longlong)dVar33;
  plVar22[7] = (longlong)dVar35;
  plVar22[8] = (longlong)dVar36;
  plVar22[9] = (longlong)dVar37;
  *(undefined1 *)(plVar22 + 10) = uVar18;
  if (0 < (int)uVar19) {
    lVar30 = 0x88;
    lVar23 = 0;
    lVar28 = 0;
    do {
      lVar5 = *plVar22;
      if (*(uint *)(param_3 + 1) == uVar19) {
        lVar1 = lVar5 + lVar30;
        lVar6 = *param_3;
        *(undefined8 *)(lVar1 + -0x78) = *(undefined8 *)(lVar6 + 0x10 + lVar23);
        puVar24 = (undefined8 *)(lVar6 + lVar23);
        uVar17 = puVar24[1];
        *(undefined8 *)(lVar1 + -0x88) = *puVar24;
        *(undefined8 *)(lVar1 + -0x80) = uVar17;
      }
      if (*(uint *)(param_4 + 1) == uVar19) {
        lVar1 = *param_4;
        *(undefined8 *)(lVar5 + -0x60 + lVar30) = *(undefined8 *)(lVar1 + 0x10 + lVar23);
        puVar24 = (undefined8 *)(lVar1 + lVar23);
        uVar17 = puVar24[1];
        puVar27 = (undefined8 *)(lVar5 + -0x70 + lVar30);
        *puVar27 = *puVar24;
        puVar27[1] = uVar17;
      }
      if (*(uint *)(param_10 + 1) == uVar19) {
        puVar24 = (undefined8 *)(*param_10 + lVar28 * 8);
        uVar17 = *puVar24;
        uVar7 = puVar24[1];
        puVar24 = (undefined8 *)(*param_10 + 0x10 + lVar28 * 8);
        uVar8 = puVar24[1];
        puVar27 = (undefined8 *)(lVar5 + -0x48 + lVar30);
        *puVar27 = *puVar24;
        puVar27[1] = uVar8;
        puVar24 = (undefined8 *)(lVar5 + -0x58 + lVar30);
        *puVar24 = uVar17;
        puVar24[1] = uVar7;
      }
      if (*(uint *)(param_5 + 1) == uVar19) {
        puVar24 = (undefined8 *)(*param_5 + lVar28 * 4);
        uVar17 = puVar24[1];
        puVar27 = (undefined8 *)(lVar5 + -0x30 + lVar30);
        *puVar27 = *puVar24;
        puVar27[1] = uVar17;
      }
      if (*(uint *)(param_6 + 1) == uVar19) {
        puVar24 = (undefined8 *)(*param_6 + lVar28 * 4);
        uVar17 = puVar24[1];
        puVar27 = (undefined8 *)(lVar5 + -0x20 + lVar30);
        *puVar27 = *puVar24;
        puVar27[1] = uVar17;
      }
      if (*(uint *)(param_7 + 1) == uVar19) {
        puVar24 = (undefined8 *)(*param_7 + lVar28 * 4);
        uVar17 = puVar24[1];
        puVar27 = (undefined8 *)(lVar5 + -0x10 + lVar30);
        *puVar27 = *puVar24;
        puVar27[1] = uVar17;
      }
      if (*(uint *)(param_8 + 1) == uVar19) {
        puVar24 = (undefined8 *)(*param_8 + lVar28 * 4);
        uVar17 = puVar24[1];
        *(undefined8 *)(lVar5 + lVar30) = *puVar24;
        ((undefined8 *)(lVar5 + lVar30))[1] = uVar17;
      }
      if (*(uint *)(param_9 + 1) == uVar19) {
        *(undefined4 *)(lVar5 + -0x38 + lVar30) = *(undefined4 *)(*param_9 + lVar28);
      }
      lVar28 = lVar28 + 4;
      lVar23 = lVar23 + 0x18;
      lVar30 = lVar30 + 0x98;
    } while (uVar26 * 4 - lVar28 != 0);
  }
  local_e0 = param_1;
  local_d4 = param_2;
  if ((char)plVar22[0xb] != '\0') {
    local_c8 = (undefined1 *)0x0;
    uStack_c0 = 0;
    if ((longlong)*(int *)(param_1 + 0x670) != 0) {
      plVar25 = *(longlong **)(param_1 + 0x668);
      plVar29 = plVar25 + (longlong)*(int *)(param_1 + 0x670) * 0xc;
      puVar13 = (undefined1 *)0x0;
      do {
        if (((char)plVar25[0xb] == '\x01') && (0 < (int)plVar25[1])) {
          lVar23 = 0;
          lVar28 = 0;
          do {
            uVar26 = uStack_c0;
            puVar24 = (undefined8 *)(*plVar25 + lVar23);
            lVar30 = (longlong)(int)uStack_c0;
            uVar19 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar19);
            if (uStack_c0._4_4_ < uVar19) {
              FUN_1403e3958(&local_c8,uVar26 & 0xffffffff);
              puVar13 = local_c8;
            }
            *(undefined8 *)(puVar13 + lVar30 * 0x18 + 0x10) = puVar24[2];
            uVar17 = puVar24[1];
            *(undefined8 *)(puVar13 + lVar30 * 0x18) = *puVar24;
            *(undefined8 *)((longlong)(puVar13 + lVar30 * 0x18) + 8) = uVar17;
            lVar28 = lVar28 + 1;
            lVar23 = lVar23 + 0x98;
          } while (lVar28 < (int)plVar25[1]);
        }
        plVar25 = plVar25 + 0xc;
      } while (plVar25 != plVar29);
    }
    param_1 = local_e0;
    FUN_147c477fa(local_e0 + 0x410,&local_c8);
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(longlong *)(param_1 + 0x5a8) != 0) && ((*(byte *)(param_1 + 0x9d) & 1) == 0)) {
    piVar14 = (int *)FUN_14001cc68(0x18,0x10);
    piVar14[2] = 0;
    piVar14[3] = 0;
    piVar14[4] = 0;
    piVar14[5] = 0;
    *piVar14 = local_d4;
    FUN_148213db6(piVar14 + 2,plVar22);
    uVar17 = *(undefined8 *)(param_1 + 0x5a8);
    lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar23 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          bVar31 = DVar11 == DVar12;
        }
        else {
          bVar31 = iVar10 == 0x10;
        }
        param_1 = local_e0;
        if (!bVar31) goto LAB_143ade340;
      }
    }
    else if (iVar10 != 0x10) {
LAB_143ade340:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar23 + 0xc60), iVar10 == 2))
        goto LAB_143ade305;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143ade305;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar24 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar16 = (uint *)*puVar24;
        if (puVar16 != (uint *)0x0) goto LAB_143ade480;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_143ae0466);
          }
          lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar23 + 0x310);
          *(undefined8 *)(lVar23 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar24 = puVar15;
          FUN_140217a48(puVar24);
          puVar16 = (uint *)*puVar24;
LAB_143ade480:
          puVar27 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar27 + 0x17);
          uVar19 = puVar16[0x12];
          if (puVar21 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar2 = *puVar16;
            *puVar16 = *puVar16 + uVar19 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar19) != 0xffffffff) break;
            puVar16 = (uint *)*puVar24;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar24 = puVar16;
            puVar27 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar27 + 0x17);
            uVar19 = 0;
            if (puVar21 <= puVar16 + 0x4000) {
              uVar19 = 1;
              goto LAB_143ade500;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_143ade500:
        *(uint **)(puVar16 + 0x10) = puVar21;
        puVar16[0x12] = uVar19;
        iVar10 = 0;
        FUN_1447247dc(puVar27,0);
        *puVar27 = &PTR_FUN_14ae37710;
        puVar27[0x15] = uVar17;
        puVar27[0x16] = piVar14;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            iVar10 = 0;
          }
          else {
            uVar26 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar26 = 5;
        }
        if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
        }
        puVar27[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar27[9] = puVar27;
        puVar27[10] = puVar27;
        lVar23 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar23 == 0) {
          uVar9 = 1;
          if ((char)uVar26 != '\x06') {
            uVar9 = uVar26;
          }
          uVar26 = uVar9;
          uVar17 = 0;
        }
        else {
          if ((char)uVar26 == '\x06') {
            uVar26 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
          }
          uVar17 = *(undefined8 *)(lVar23 + 0x30);
        }
        puVar27[0xf] = uVar17;
        puVar27[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar27 + 0x1c) = iVar10;
        if (puVar27 == (undefined8 *)0x0) {
          local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
          UNLOCK();
          local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(puVar27);
          LOCK();
          piVar14 = (int *)(puVar27 + 1);
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            (**(code **)*puVar27)(puVar27,1);
          }
        }
      }
      else {
        local_e8 = &local_c8;
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14ae376c0;
        local_c8 = &LAB_143ae1aac;
        local_a0 = uVar17;
        local_98 = piVar14;
        FUN_14005a792(&DAT_14ca9a440,L"FProcMeshSectionUpdate",&DAT_14cb446d8);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar20 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar20 = &local_a8;
          }
          (*(code *)(*pppuVar20)[2])();
        }
      }
      goto LAB_143ade17b;
    }
LAB_143ade305:
    FUN_143ae05a8(uVar17,&DAT_14ca85100,piVar14);
  }
LAB_143ade17b:
  FUN_14183c194(param_1);
  FUN_1448c69c8(param_1);
LAB_143ade18b:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ade770 FUN_143ade770 body=3213 status=ok
// SIG undefined FUN_143ade770(void)

undefined8 * FUN_143ade770(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 uVar4;
  void *_Src;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 *local_118;
  int *local_110;
  longlong *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  ulonglong uStack_b0;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar5 = FUN_14490dacc(param_1,1);
  if (((cVar5 == '\0') || (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x2c0,0x10);
    FUN_1406ff4f8(puVar9,param_1,0);
    *puVar9 = &PTR_FUN_14ae37400;
    plVar15 = puVar9 + 0x53;
    puVar9[0x53] = 0;
    puVar9[0x54] = 0;
    uVar10 = (**(code **)(*param_1 + 0x7a0))(param_1);
    puVar9[0x55] = uVar10;
    (**(code **)(*param_1 + 0xa10))(param_1,puVar9 + 0x56,*(undefined4 *)(puVar9[0x42] + 8));
    uVar6 = *(uint *)(param_1 + 0xce);
    uVar21 = (ulonglong)(int)uVar6;
    iVar18 = *(int *)(puVar9 + 0x54);
    *(uint *)(puVar9 + 0x54) = iVar18 + uVar6;
    local_118 = puVar9;
    if ((uint)(*(int *)((longlong)puVar9 + 0x2a4) - iVar18) < uVar6) {
      FUN_14183c4de(plVar15);
    }
    memset((void *)((longlong)iVar18 * 8 + *plVar15),0,uVar21 * 8);
    if (0 < (int)uVar6) {
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_e8 = (undefined8 *)(lVar12 + 0x308);
      local_100 = (undefined8 *)(lVar12 + 0x310);
      local_f0 = 0x527800b400;
      local_110 = (int *)(lVar12 + 0xc60);
      local_f8 = (longlong *)(lVar12 + 0x2b8);
      uVar20 = 0;
      local_108 = param_1;
      local_e0 = uVar21;
      local_d8 = plVar15;
      do {
        lVar12 = param_1[0xcd];
        lVar19 = uVar20 * 0x60;
        if ((0 < *(int *)(lVar12 + 0x18 + lVar19)) &&
           (plVar15 = (longlong *)(lVar12 + lVar19), 0 < (int)plVar15[1])) {
          plVar11 = (longlong *)FUN_14001cc68(0x410,0x10);
          uVar4 = *(undefined1 *)(local_118[0x42] + 8);
          *plVar11 = 0;
          *(undefined4 *)(plVar11 + 2) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x14) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0x16) = 0;
          plVar11[1] = (longlong)&PTR_FUN_14aa69e90;
          *(undefined4 *)(plVar11 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x24) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0x26) = 0;
          plVar11[5] = 0;
          plVar11[3] = (longlong)&PTR_FUN_14aa6dba0;
          *(undefined4 *)(plVar11 + 7) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x3c) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0x3e) = 0;
          plVar11[8] = 0;
          plVar11[6] = (longlong)&DAT_14aa6dc00;
          plVar11[9] = 0;
          plVar11[10] = 0;
          plVar11[0xb] = 0;
          plVar11[0xc] = 0;
          plVar11[0xd] = 0;
          plVar11[0xe] = 0;
          plVar11[0x10] = 0;
          *(undefined2 *)(plVar11 + 0x11) = 0;
          *(undefined1 *)((longlong)plVar11 + 0x8a) = 1;
          *(undefined4 *)(plVar11 + 0x13) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x9c) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0x9e) = 0;
          plVar11[0x14] = 0;
          plVar11[0x12] = (longlong)&PTR_FUN_14aa50910;
          plVar11[0x15] = 0;
          plVar11[0x16] = 0;
          plVar11[0x17] = 0;
          plVar11[0x18] = 0;
          *(undefined1 *)(plVar11 + 0x19) = 1;
          *(undefined4 *)(plVar11 + 0x1b) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0xdc) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0xde) = 0;
          plVar11[0x1c] = 0;
          plVar11[0x1a] = (longlong)&PTR_FUN_14aa61a50;
          plVar11[0x1d] = 0;
          plVar11[0x1e] = 0;
          plVar11[0x1f] = 0;
          plVar11[0x20] = 0;
          *(undefined1 *)(plVar11 + 0x21) = 1;
          *(undefined4 *)(plVar11 + 0x23) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x11c) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0x11e) = 0;
          plVar11[0x24] = 0;
          plVar11[0x22] = (longlong)&PTR_FUN_14a83cdc0;
          plVar11[0x25] = 0;
          plVar11[0x26] = 0;
          *(undefined4 *)(plVar11 + 0x28) = 0xffffffff;
          *(undefined1 *)((longlong)plVar11 + 0x144) = uVar4;
          *(undefined2 *)((longlong)plVar11 + 0x145) = 1;
          plVar11[0x39] = 0;
          plVar11[0x3a] = 0x800000000;
          plVar11[0x3f] = 0;
          plVar11[0x40] = 0x200000000;
          plVar11[0x47] = 0;
          plVar11[0x48] = 0x300000000;
          plVar11[0x49] = 0;
          plVar11[0x4a] = 0;
          plVar11[0x4b] = 0;
          *(undefined1 *)((longlong)plVar11 + 0x263) = 1;
          *(undefined1 *)((longlong)plVar11 + 0x262) = 0xff;
          *(undefined2 *)(plVar11 + 0x4c) = 0xffff;
          plVar11[0x27] = (longlong)&PTR_FUN_14a1ca480;
          *(undefined4 *)(plVar11 + 0x5b) = 0;
          plVar11[0x51] = 0;
          plVar11[0x52] = 0;
          plVar11[0x4f] = 0;
          plVar11[0x50] = 0;
          plVar11[0x4d] = 0;
          plVar11[0x4e] = 0;
          *(undefined4 *)((longlong)plVar11 + 0x2dc) = 4;
          plVar11[0x62] = 0;
          plVar11[99] = 0;
          plVar11[0x60] = 0;
          plVar11[0x61] = 0;
          plVar11[0x5e] = 0;
          plVar11[0x5f] = 0;
          plVar11[0x5c] = 0;
          plVar11[0x5d] = 0;
          *(undefined4 *)(plVar11 + 100) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x324) = 0xff;
          *(undefined1 *)((longlong)plVar11 + 0x326) = 0;
          plVar11[0x69] = 0;
          plVar11[0x67] = 0;
          plVar11[0x68] = 0;
          plVar11[0x65] = 0;
          plVar11[0x66] = 0;
          *(undefined4 *)(plVar11 + 0x6a) = 0xffffffff;
          *(undefined1 *)((longlong)plVar11 + 0x354) = 0;
          *(undefined1 *)(plVar11 + 0x6b) = 1;
          *(undefined4 *)(plVar11 + 0x6d) = 0xffffffff;
          *(undefined2 *)((longlong)plVar11 + 0x36c) = 0x105;
          *(undefined1 *)((longlong)plVar11 + 0x36e) = 0;
          plVar11[0x6c] = (longlong)&PTR_FUN_14a3d4720;
          plVar11[0x6f] = 0;
          plVar11[0x70] = 0;
          plVar11[0x6e] = (longlong)&PTR_FUN_14a3d4750;
          *(undefined1 *)(plVar11 + 0x71) = 0;
          plVar11[0x72] = -1;
          *(undefined8 *)((longlong)plVar11 + 0x3a6) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3ae) = 0;
          plVar11[0x73] = 0;
          plVar11[0x74] = 0;
          *(undefined1 *)((longlong)plVar11 + 0x3b6) = 1;
          plVar11[0x7e] = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3e4) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3d7) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3df) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3c7) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3cf) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3b7) = 0;
          *(undefined8 *)((longlong)plVar11 + 0x3bf) = 0;
          *(undefined4 *)(plVar11 + 0x7f) = 0xffffffff;
          *(undefined1 *)((longlong)plVar11 + 0x3fc) = 0xff;
          plVar11[0x80] = -0x100000000;
          *(undefined4 *)(plVar11 + 0x81) = 0xffffffff;
          uVar6 = *(uint *)(plVar15 + 1);
          local_b8 = (undefined1 *)0x0;
          uStack_b0 = 0;
          if ((int)uVar6 < 1) {
            if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4((ulonglong)uVar6);
            }
          }
          else {
            uStack_b0 = (ulonglong)uVar6;
            FUN_140d35044(&local_b8,0);
            lVar23 = 0;
            lVar22 = 0;
            do {
              FUN_143adfd55(local_b8 + lVar23,*plVar15 + lVar22);
              lVar22 = lVar22 + 0x98;
              lVar23 = lVar23 + 0x58;
            } while ((ulonglong)uVar6 * 0x98 - lVar22 != 0);
          }
          plVar2 = plVar11 + 0x25;
          if (plVar2 != (longlong *)(lVar12 + lVar19 + 0x10)) {
            iVar18 = (int)plVar15[3];
            _Src = (void *)plVar15[2];
            *(int *)(plVar11 + 0x26) = iVar18;
            if (iVar18 == 0 && *(int *)((longlong)plVar11 + 0x134) == 0) {
              *(undefined4 *)((longlong)plVar11 + 0x134) = 0;
            }
            else {
              FUN_1447bda9e(plVar2,iVar18);
              if (iVar18 != 0) {
                memcpy((void *)*plVar2,_Src,(longlong)iVar18 << 2);
              }
            }
          }
          local_138 = &local_b8;
          local_128 = 0;
          local_130 = 4;
          FUN_1413269d8(plVar11 + 1,0,0,plVar11 + 0x27);
          FUN_140308182(plVar11 + 0x12,0);
          FUN_140308182(plVar11 + 1,0);
          FUN_140308182(plVar11 + 0x1a,0);
          FUN_140308182(plVar11 + 0x22,0);
          FUN_140308182(plVar11 + 0x27,0);
          param_1 = local_108;
          lVar12 = (**(code **)(*local_108 + 0x610))(local_108,uVar20 & 0xffffffff);
          *plVar11 = lVar12;
          if (lVar12 == 0) {
            FUN_14003fbd6();
            *plVar11 = DAT_14caea080;
          }
          *(undefined1 *)(plVar11 + 0x6b) = *(undefined1 *)((longlong)plVar15 + 0x59);
          *(longlong **)(*local_d8 + uVar20 * 8) = plVar11;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            plVar15 = (longlong *)
                      (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
            if (plVar15 == (longlong *)0x0) {
              DAT_14ca97068 = 0;
            }
            else {
              DAT_14ca97068 = (**(code **)(*plVar15 + 0x68))(plVar15);
            }
            _Init_thread_footer(&DAT_14ca97070);
            param_1 = local_108;
          }
          lVar12 = DAT_14ca97068;
          bVar24 = true;
          cVar5 = DAT_14ca96da8;
          if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
            iVar18 = *local_110;
            if (iVar18 == 0x40000002) {
              cVar5 = '\x02';
              uVar21 = 0;
            }
            else {
              bVar24 = true;
              cVar5 = '\x02';
              if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
                if (iVar18 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar24 = DVar7 == DVar8;
                  cVar5 = DAT_14ca96da8;
                }
                else {
                  bVar24 = false;
                }
              }
              uVar21 = (ulonglong)(bVar24 ^ 1);
            }
            bVar24 = *(int *)(lVar12 + uVar21 * 4) != 0;
            param_1 = local_108;
          }
          if ((bVar24) && (cVar5 != '\0')) {
            local_d0 = local_118;
            uStack_c8 = param_1[3];
            iVar18 = *local_110;
            local_c0 = plVar11;
            if (DAT_14c86a9fc == 0) {
              if (iVar18 != 2) {
                if (iVar18 != 1) goto LAB_143adee2f;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143adf225;
                goto LAB_143adee38;
              }
            }
            else {
LAB_143adee2f:
              if (iVar18 != 0x10) {
LAB_143adee38:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (*local_110 == 2)) goto LAB_143adf225;
                  if (*local_110 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143adf225;
                  }
                }
                puVar9 = local_e8;
                if (DAT_14ca9a43c == 0) {
                  puVar14 = (uint *)*local_e8;
                  if (puVar14 != (uint *)0x0) goto LAB_143adef9a;
                  do {
                    uVar6 = *(uint *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar6 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar6 | 1;
                      __tlregdtor(&LAB_143ae0466);
                    }
                    puVar13 = (undefined4 *)*local_100;
                    *local_100 = 0;
                    if (puVar13 == (undefined4 *)0x0) {
                      puVar13 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar13 = 0xffffffff;
                    *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
                    puVar13[0x12] = 0;
                    *puVar9 = puVar13;
                    FUN_140217a48(puVar9);
                    puVar14 = (uint *)*puVar9;
LAB_143adef9a:
                    uVar21 = *(longlong *)(puVar14 + 0x10) + 7;
                    uVar6 = puVar14[0x12];
                    while( true ) {
                      puVar17 = (undefined8 *)(uVar21 & 0xfffffffffffffff8);
                      if (puVar17 + 0x18 <= puVar14 + 0x4000) {
                        *(undefined8 **)(puVar14 + 0x10) = puVar17 + 0x18;
                        puVar14[0x12] = uVar6 + 1;
                        FUN_1447247dc(puVar17,0);
                        *puVar17 = &PTR_FUN_14ae376b0;
                        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_d0;
                        *(undefined4 *)((longlong)puVar17 + 0xac) = local_d0._4_4_;
                        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_c8;
                        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_c8._4_4_;
                        puVar17[0x17] = local_c0;
                        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                          uVar6 = DAT_14c7585c8 >> 10 & 3;
                          iVar18 = 0;
                          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
                            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
                            iVar18 = 0;
                          }
                          else {
                            uVar21 = 2;
                          }
                        }
                        else {
                          iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                          uVar21 = 5;
                        }
                        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                        }
                        puVar17[0xe] = LowLevelTasks::
                                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                       ::
                                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                       ::vftable;
                        puVar17[9] = puVar17;
                        puVar17[10] = puVar17;
                        lVar12 = *local_f8;
                        if (lVar12 == 0) {
                          if ((char)uVar21 == '\x06') {
                            uVar21 = 1;
                          }
                          uVar10 = 0;
                        }
                        else {
                          if ((char)uVar21 == '\x06') {
                            uVar21 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
                          }
                          uVar10 = *(undefined8 *)(lVar12 + 0x30);
                        }
                        puVar17[0xf] = uVar10;
                        puVar17[0x10] = (uVar21 << 0x3b) + local_f0 | 0xc000000000000000;
                        *(int *)((longlong)puVar17 + 0x1c) = iVar18;
                        if (puVar17 == (undefined8 *)0x0) {
                          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                          FUN_1447439e4(0,local_a8);
                        }
                        else {
                          LOCK();
                          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                          UNLOCK();
                          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                          FUN_1447439e4(puVar17,local_a8);
                          LOCK();
                          piVar1 = (int *)(puVar17 + 1);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)*puVar17)(puVar17,1);
                          }
                        }
                        goto LAB_143adeefd;
                      }
                      *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
                      LOCK();
                      uVar3 = *puVar14;
                      *puVar14 = *puVar14 + uVar6 + 1;
                      UNLOCK();
                      if ((uVar3 ^ uVar6) != 0xffffffff) break;
                      puVar14 = (uint *)*puVar9;
                      *puVar14 = 0xffffffff;
                      *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
                      puVar14[0x12] = 0;
                      *puVar9 = puVar14;
                      uVar21 = (longlong)puVar14 + 0x5f;
                      uVar6 = 0;
                    }
                  } while( true );
                }
                local_98 = (undefined ***)0x0;
                local_88 = &PTR_LAB_14ae37640;
                local_70 = local_c0;
                local_80 = (undefined4)local_d0;
                uStack_7c = local_d0._4_4_;
                uStack_78 = (undefined4)uStack_c8;
                uStack_74 = uStack_c8._4_4_;
                local_a8[0] = &LAB_148214eca;
                local_138 = local_a8;
                FUN_14005a792(&DAT_14ca9a440,L"InitProceduralMeshRayTracingGeometry",&DAT_14cb446cc)
                ;
                if (local_a8[0] != (undefined1 *)0x0) {
                  pppuVar16 = local_98;
                  if (local_98 == (undefined ***)0x0) {
                    pppuVar16 = &local_88;
                  }
                  (*(code *)(*pppuVar16)[2])();
                }
                goto LAB_143adeefd;
              }
            }
LAB_143adf225:
            FUN_148214cbc(&local_d0,&DAT_14ca85100);
          }
LAB_143adeefd:
          uVar21 = local_e0;
          if (local_b8 != (undefined1 *)0x0) {
            FUN_1400020a8();
            uVar21 = local_e0;
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar21);
    }
  }
  else {
    local_118 = (undefined8 *)0x0;
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return local_118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143adf408 FUN_143adf408 body=836 status=ok
// SIG undefined FUN_143adf408(void)

undefined1 (*) [16] FUN_143adf408(longlong param_1,undefined1 (*param_2) [16],double *param_3)

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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar9 = *param_3;
  dVar17 = param_3[1];
  dVar11 = param_3[2];
  dVar14 = param_3[8];
  dVar4 = param_3[9];
  dVar6 = param_3[10];
  dVar7 = dVar17 + dVar17;
  dVar1 = dVar11 + dVar11;
  dVar13 = dVar9 * (dVar9 + dVar9);
  dVar10 = (1.0 - (dVar11 * dVar1 + dVar17 * dVar7)) * dVar14;
  dVar12 = (1.0 - (dVar11 * dVar1 + dVar13)) * dVar4;
  dVar8 = (1.0 - (dVar13 + dVar17 * dVar7)) * dVar6;
  dVar11 = param_3[3];
  dVar13 = dVar1 * dVar11;
  dVar5 = (dVar9 + dVar9) * param_3[3];
  dVar11 = dVar7 * dVar11;
  dVar15 = (dVar7 * dVar9 + dVar13) * dVar14;
  dVar16 = (dVar1 * dVar17 + dVar5) * dVar4;
  dVar3 = (dVar11 + *param_3 * dVar1) * dVar6;
  dVar14 = (*param_3 * dVar1 - dVar11) * dVar14;
  dVar4 = (dVar7 * dVar9 - dVar13) * dVar4;
  dVar6 = (dVar1 * dVar17 - dVar5) * dVar6;
  dVar11 = *(double *)(param_1 + 0x688);
  dVar1 = *(double *)(param_1 + 0x698);
  dVar13 = *(double *)(param_1 + 0x690);
  dVar5 = *(double *)(param_1 + 0x6a0);
  dVar7 = *(double *)(param_1 + 0x6a8);
  dVar9 = *(double *)(param_1 + 0x6b0);
  dVar18 = ABS(dVar3 * dVar9) + ABS(dVar4 * dVar7) + ABS(dVar10 * dVar5);
  dVar19 = ABS(dVar6 * *(double *)(param_1 + 0x6b0)) +
           ABS(dVar12 * *(double *)(param_1 + 0x6a8)) + ABS(dVar15 * *(double *)(param_1 + 0x6a0));
  dVar17 = ABS(dVar8 * dVar9) + ABS(dVar16 * dVar7) + ABS(dVar14 * dVar5);
  dVar5 = dVar3 * dVar3 + dVar4 * dVar4 + dVar10 * dVar10;
  dVar7 = dVar6 * dVar6 + dVar12 * dVar12 + dVar15 * dVar15;
  dVar9 = dVar8 * dVar8 + dVar16 * dVar16 + dVar14 * dVar14;
  if (dVar5 <= dVar7) {
    dVar5 = dVar7;
  }
  if (dVar5 <= dVar9) {
    dVar5 = dVar9;
  }
  dVar9 = param_3[4];
  dVar6 = dVar1 * dVar6 + *(double *)(param_1 + 0x690) * dVar12 + dVar11 * dVar15 + param_3[5];
  dVar7 = param_3[6];
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  dVar5 = dVar5 * *(double *)(param_1 + 0x6b8);
  dVar12 = SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = dVar1 * dVar3 + dVar13 * dVar4 + dVar11 * dVar10 + dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar1 * dVar8 + dVar13 * dVar16 + dVar11 * dVar14 + dVar7;
  dVar11 = (double)*(float *)(param_1 + 0x3ac);
  if (dVar12 <= dVar5) {
    dVar5 = dVar12;
  }
  *(double *)(param_2[1] + 8) = dVar18 * dVar11;
  *(double *)param_2[2] = dVar19 * dVar11;
  *(double *)(param_2[2] + 8) = dVar17 * dVar11;
  *(double *)param_2[3] = dVar5 * dVar11;
  return param_2;
}



// FUNCTION 143adf782 FUN_143adf782 body=1287 status=ok
// SIG undefined FUN_143adf782(void)

undefined8 FUN_143adf782(longlong param_1,uint param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dStack_130;
  double dStack_c0;
  
  fVar27 = 0.0;
  uVar28 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x670))) {
    uVar23 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x668) + 0x18 + (ulonglong)param_2 * 0x60);
    if (0 < (longlong)uVar23) {
      dVar22 = *(double *)(param_1 + 0x240);
      dVar19 = *(double *)(param_1 + 0x240);
      pdVar14 = (double *)(param_1 + 0x248);
      dVar21 = *pdVar14;
      dVar20 = *pdVar14;
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x250);
      dVar5 = auVar2._8_8_;
      dVar15 = *(double *)(param_1 + 0x280);
      dVar16 = *(double *)(param_1 + 0x288);
      dVar17 = *(double *)(param_1 + 0x290);
      plVar24 = (longlong *)(*(longlong *)(param_1 + 0x668) + (ulonglong)param_2 * 0x60);
      lVar3 = *plVar24;
      lVar4 = plVar24[2];
      auVar7._8_4_ = auVar2._8_4_;
      auVar7._0_8_ = dVar5;
      auVar7._12_4_ = auVar2._12_4_;
      fVar27 = 0.0;
      uVar25 = 0;
      do {
        lVar26 = (longlong)*(int *)(lVar4 + uVar25 * 4) * 0x98;
        pdVar1 = (double *)(lVar3 + lVar26);
        dVar32 = *pdVar1 * dVar15;
        dVar36 = pdVar1[1] * dVar16;
        dVar29 = *(double *)(lVar3 + 0x10 + lVar26) * dVar17;
        dVar18 = auVar2._0_8_;
        dVar10 = dVar36 * dVar19 - dVar21 * dVar32;
        dVar12 = dVar29 * dVar20 - dVar18 * dVar36;
        dVar8 = dVar32 * dVar18 - dVar22 * dVar29;
        dVar12 = dVar12 + dVar12;
        dVar8 = dVar8 + dVar8;
        dStack_130 = auVar7._8_8_;
        dVar10 = dVar10 + dVar10;
        lVar26 = (longlong)*(int *)(lVar4 + 4 + uVar25 * 4) * 0x98;
        pdVar1 = (double *)(lVar3 + lVar26);
        dVar37 = *pdVar1 * dVar15;
        dVar38 = pdVar1[1] * dVar16;
        dVar33 = *(double *)(lVar3 + 0x10 + lVar26) * dVar17;
        dVar30 = dVar38 * dVar19 - dVar21 * dVar37;
        dVar34 = dVar33 * dVar20 - dVar18 * dVar38;
        dVar35 = dVar37 * dVar18 - dVar22 * dVar33;
        dVar34 = dVar34 + dVar34;
        dVar35 = dVar35 + dVar35;
        dVar30 = dVar30 + dVar30;
        dVar32 = dVar5 * dVar12 + dVar32;
        dVar36 = dStack_130 * dVar8 + dVar36;
        auVar9._8_4_ = SUB84(dVar36,0);
        auVar9._0_8_ = dVar32;
        auVar9._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        lVar26 = (longlong)*(int *)(lVar4 + 8 + uVar25 * 4) * 0x98;
        pdVar1 = (double *)(lVar3 + lVar26);
        dVar36 = *pdVar1 * dVar15;
        dVar6 = pdVar1[1] * dVar16;
        dVar13 = dVar10 * dVar5 + dVar29 + (dVar8 * dVar19 - dVar12 * dVar21);
        dVar11 = *(double *)(lVar3 + 0x10 + lVar26) * dVar17;
        dVar29 = dVar6 * dVar19 - dVar21 * dVar36;
        dVar39 = dVar11 * dVar20 - dVar18 * dVar6;
        dVar31 = dVar36 * dVar18 - dVar22 * dVar11;
        dVar39 = dVar39 + dVar39;
        dVar31 = dVar31 + dVar31;
        dVar29 = dVar29 + dVar29;
        dVar32 = (dVar10 * dVar20 - dVar8 * dVar18) + dVar32;
        dStack_c0 = auVar9._8_8_;
        dStack_c0 = (dVar18 * dVar12 - dVar22 * dVar10) + dStack_c0;
        dVar8 = (dVar29 * dVar5 + dVar11 + (dVar31 * dVar19 - dVar39 * *pdVar14)) - dVar13;
        dVar36 = ((dVar29 * dVar20 - dVar31 * dVar18) + dVar5 * dVar39 + dVar36) - dVar32;
        dVar6 = ((dVar18 * dVar39 - dVar22 * dVar29) + dStack_130 * dVar31 + dVar6) - dStack_c0;
        dVar13 = (dVar30 * dVar5 + dVar33 + (dVar35 * dVar19 - dVar34 * dVar21)) - dVar13;
        dVar32 = ((dVar30 * dVar20 - dVar35 * dVar18) + dVar5 * dVar34 + dVar37) - dVar32;
        dStack_c0 = ((dVar18 * dVar34 - dVar22 * dVar30) + dStack_130 * dVar35 + dVar38) - dStack_c0
        ;
        dVar33 = dVar32 * dVar6 - dVar36 * dStack_c0;
        dVar29 = dVar13 * dVar36 - dVar8 * dVar32;
        dVar36 = dStack_c0 * dVar8 - dVar13 * dVar6;
        dVar36 = SQRT(dVar33 * dVar33 + dVar36 * dVar36 + dVar29 * dVar29) * 0.5 + (double)fVar27;
        uVar28 = (undefined4)((ulonglong)dVar36 >> 0x20);
        fVar27 = (float)dVar36;
        uVar25 = uVar25 + 3;
      } while (uVar25 < uVar23);
    }
  }
  return CONCAT44(uVar28,fVar27);
}



// FUNCTION 143adfc8a FUN_143adfc8a body=48 status=ok
// SIG undefined FUN_143adfc8a(void)

longlong FUN_143adfc8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_140b2f404(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143adfd55 FUN_143adfd55 body=466 status=ok
// SIG undefined FUN_143adfd55(void)

void FUN_143adfd55(float *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  int iVar4;
  
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  *param_1 = (float)*param_2;
  param_1[1] = (float)dVar2;
  param_1[2] = (float)dVar1;
  param_1[0x15] = *(float *)(param_2 + 10);
  dVar1 = param_2[0xc];
  param_1[3] = (float)param_2[0xb];
  param_1[4] = (float)dVar1;
  dVar1 = param_2[0xe];
  param_1[5] = (float)param_2[0xd];
  param_1[6] = (float)dVar1;
  dVar1 = param_2[0x10];
  param_1[7] = (float)param_2[0xf];
  param_1[8] = (float)dVar1;
  dVar1 = param_2[0x12];
  param_1[9] = (float)param_2[0x11];
  param_1[10] = (float)dVar1;
  iVar4 = (int)ROUND(param_2[6] * 127.0 + param_2[6] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar4) {
    iVar4 = 0x7f;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar4 < -0x7f) {
    uVar3 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x13) = uVar3;
  iVar4 = (int)ROUND(param_2[7] * 127.0 + param_2[7] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar4) {
    iVar4 = 0x7f;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar4 < -0x7f) {
    uVar3 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x4d) = uVar3;
  iVar4 = (int)ROUND(param_2[8] * 127.0 + param_2[8] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar4) {
    iVar4 = 0x7f;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar4 < -0x7f) {
    uVar3 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x4e) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0x7f;
  iVar4 = (int)ROUND(param_2[3] * 127.0 + param_2[3] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar4) {
    iVar4 = 0x7f;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar4 < -0x7f) {
    uVar3 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x14) = uVar3;
  iVar4 = (int)ROUND(param_2[4] * 127.0 + param_2[4] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar4) {
    iVar4 = 0x7f;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar4 < -0x7f) {
    uVar3 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x51) = uVar3;
  iVar4 = (int)ROUND(param_2[5] * 127.0 + param_2[5] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar4) {
    iVar4 = 0x7f;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar4 < -0x7f) {
    uVar3 = 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x52) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x53) = 0x7f;
  *(char *)((longlong)param_1 + 0x53) = (*(char *)(param_2 + 9) != '\0') * '\x02' + '\x7f';
  return;
}



// FUNCTION 143adff38 FUN_143adff38 body=1291 status=ok
// SIG undefined FUN_143adff38(void)

void FUN_143adff38(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_5b8 [32];
  undefined8 *local_598;
  longlong local_590;
  int local_584;
  uint local_580;
  uint local_57c;
  longlong local_578;
  longlong *local_570;
  longlong *local_568;
  undefined8 *local_560;
  undefined1 local_558 [8];
  undefined1 local_550 [8];
  undefined1 local_548 [368];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 auStack_2c8 [24];
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  iVar11 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_590 = param_1;
  local_580 = param_4;
  local_578 = param_2;
  if (((iVar11 != 0x40000002) && (iVar11 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((longlong)*(int *)(local_590 + 0x2a0) != 0) {
    plVar12 = *(longlong **)(local_590 + 0x298);
    local_570 = plVar12 + *(int *)(local_590 + 0x2a0);
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    do {
      local_598 = (undefined8 *)*plVar12;
      local_568 = plVar12;
      if ((local_598 != (undefined8 *)0x0) && (*(char *)(local_598 + 0x6b) == '\x01')) {
        local_550 = (undefined1  [8])(**(code **)(*(longlong *)*local_598 + 0x2f0))();
        iVar11 = *(int *)(local_578 + 8);
        if (0 < iVar11) {
          local_558 = (undefined1  [8])(local_598 + 0x22);
          local_560 = local_598 + 0x27;
          uVar13 = 0;
          do {
            if ((local_580 >> (uVar13 & 0x1f) & 1) != 0) {
              iVar11 = (int)param_5[1];
              iVar4 = (int)param_5[2];
              iVar5 = (iVar4 + 0x44) / 0x44;
              *(int *)(param_5 + 2) = iVar4 + 1;
              local_57c = uVar13;
              if (iVar11 < iVar5) {
                do {
                  local_584 = iVar11;
                  lVar8 = FUN_14001cc68(0x3fc0,0x10);
                  lVar14 = 0;
                  do {
                    *(undefined8 *)(lVar8 + 0xa8 + lVar14) = 0;
                    puVar10 = (undefined8 *)(lVar8 + 0xb8 + lVar14);
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    *(undefined8 *)(lVar8 + 200 + lVar14) = 0;
                    *(undefined8 *)(lVar8 + 0xd0 + lVar14) = 0xffffffff;
                    *(undefined8 *)(lVar8 + 0xd8 + lVar14) = 0xff0000ffffffff;
                    *(undefined1 *)(lVar8 + 0xe0 + lVar14) = 0;
                    *(undefined4 *)(lVar8 + 0xe4 + lVar14) = 0x40c00f07;
                    pbVar2 = (byte *)(lVar8 + 0xe8 + lVar14);
                    *pbVar2 = *pbVar2 & 0xfc;
                    *(undefined1 **)(lVar8 + 0xb0 + lVar14) = &DAT_100000001;
                    FUN_14470b9e0(lVar8 + lVar14,1);
                    lVar14 = lVar14 + 0xf0;
                  } while (lVar14 != 0x3fc0);
                  iVar11 = (int)param_5[1];
                  *(uint *)(param_5 + 1) = iVar11 + 1U;
                  if (*(uint *)((longlong)param_5 + 0xc) < iVar11 + 1U) {
                    FUN_14002baf6(param_5,iVar11);
                  }
                  *(longlong *)(*param_5 + (longlong)iVar11 * 8) = lVar8;
                  iVar11 = local_584 + 1;
                } while (iVar11 != iVar5);
              }
              lVar14 = *(longlong *)(*param_5 + (longlong)(iVar4 / 0x44) * 8);
              lVar9 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0;
              lVar8 = lVar14 + lVar9;
              lVar15 = *(longlong *)(lVar14 + 0xa8 + lVar9);
              if (lVar15 == 0) {
                lVar15 = lVar8;
              }
              *(undefined1 (*) [8])(lVar15 + 0x18) = local_558;
              pbVar2 = (byte *)(lVar14 + 0xe5 + lVar9);
              *pbVar2 = *pbVar2 & 0xef;
              *(undefined8 **)(lVar14 + 0xb8 + lVar9) = local_560;
              *(undefined1 (*) [8])(lVar14 + 0xc0 + lVar9) = local_550;
              plVar12 = (longlong *)param_5[0x1d];
              puVar6 = (uint *)*puVar1;
              if (puVar6 != (uint *)0x0) goto LAB_143ae0140;
              while( true ) {
                FUN_14472e504(puVar1);
                puVar6 = (uint *)*puVar1;
LAB_143ae0140:
                lVar14 = local_590;
                puVar10 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
                uVar13 = puVar6[0x12];
                if (puVar10 + 8 <= puVar6 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
                  LOCK();
                  uVar3 = *puVar6;
                  *puVar6 = *puVar6 + uVar13 + 1;
                  UNLOCK();
                  if ((uVar3 ^ uVar13) != 0xffffffff) break;
                  puVar6 = (uint *)*puVar1;
                  *puVar6 = 0xffffffff;
                  *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
                  puVar6[0x12] = 0;
                  *puVar1 = puVar6;
                  puVar10 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
                  uVar13 = 0;
                  if (puVar10 + 8 <= puVar6 + 0x4000) {
                    uVar13 = 1;
                    goto LAB_143ae01b6;
                  }
                }
              }
              uVar13 = uVar13 + 1;
LAB_143ae01b6:
              *(undefined8 **)(puVar6 + 0x10) = puVar10 + 9;
              puVar6[0x12] = uVar13;
              *(int *)(puVar10 + -1) = ((int)puVar10 + -8) - (int)puVar6;
              *(undefined4 *)((longlong)puVar10 + -4) = 0x40;
              puVar10[1] = 0;
              *puVar10 = &PTR_FUN_14a5a8d50;
              lVar9 = *plVar12;
              do {
                puVar10[1] = lVar9;
                LOCK();
                lVar7 = *plVar12;
                bVar16 = lVar9 == lVar7;
                if (bVar16) {
                  *plVar12 = (longlong)puVar10;
                  lVar7 = lVar9;
                }
                UNLOCK();
                lVar9 = lVar7;
              } while (!bVar16);
              puVar10[2] = &PTR_FUN_14aa71480;
              *(undefined4 *)(puVar10 + 4) = 0xffffffff;
              *(undefined2 *)((longlong)puVar10 + 0x24) = 0x105;
              *(undefined1 *)((longlong)puVar10 + 0x26) = 0;
              puVar10[3] = &PTR_FUN_14a1ca300;
              *(undefined4 *)(puVar10 + 5) = 2;
              puVar10[6] = 0;
              puVar10[7] = 0;
              local_3d8 = 0;
              uStack_3d0 = 0x3f80000000000000;
              local_388 = 0;
              uStack_380 = 0x3f80000000000000;
              lVar9 = 0x28c;
              do {
                *(undefined8 *)(local_558 + lVar9 + 4) = 0;
                *(undefined8 *)(local_548 + lVar9 + -4) = 0x3f80000000000000;
                lVar9 = lVar9 + 0x10;
              } while (lVar9 != 0x31c);
              local_208 = 0;
              uStack_200 = 0x3f80000000000000;
              FUN_144787006(local_590,local_548);
              FUN_1417ed2e8(puVar10 + 2,param_5[0x22],local_548);
              uVar13 = local_57c;
              *(undefined8 **)(lVar15 + 8) = puVar10 + 3;
              *(undefined4 *)(lVar15 + 0x58) = 0;
              *(int *)(lVar15 + 0x5c) = *(int *)(local_598 + 0x26) / 3;
              *(undefined4 *)(lVar15 + 0x68) = 0;
              *(int *)(lVar15 + 0x6c) = *(int *)((longlong)local_598 + 0xc4) + -1;
              *(uint *)(lVar8 + 0xe4) =
                   *(uint *)(lVar8 + 0xe4) & 0xffe03fbf | (*(byte *)(lVar14 + 0x6b) & 1) << 6;
              FUN_1436a14f8(param_5,local_57c,lVar8);
              iVar11 = *(int *)(local_578 + 8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar11);
        }
      }
      plVar12 = local_568 + 1;
    } while (plVar12 != local_570);
  }
  if ((local_70 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae048e FUN_143ae048e body=282 status=ok
// SIG undefined FUN_143ae048e(void)

undefined8 * FUN_143ae048e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ae0466);
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



// FUNCTION 143ae05a8 FUN_143ae05a8 body=5378 status=ok
// SIG undefined FUN_143ae05a8(void)

void FUN_143ae05a8(longlong param_1,longlong param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  char cVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  void *pvVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [12];
  undefined1 in_XMM3 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  undefined4 local_1c0;
  longlong local_1b0;
  float local_1a4;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  longlong local_148;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  float fStack_138;
  undefined2 local_134;
  undefined1 uStack_132;
  undefined1 uStack_131;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined3 uStack_11c;
  undefined8 uStack_119;
  undefined8 local_111;
  undefined5 uStack_109;
  undefined3 uStack_104;
  undefined5 uStack_101;
  undefined8 local_fc;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_3 != (int *)0x0) {
    if ((*param_3 < *(int *)(param_1 + 0x2a0)) &&
       (lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)*param_3 * 8), lVar24 != 0
       )) {
      iVar4 = param_3[4];
      local_1b0 = param_2;
      if (0 < (longlong)iVar4) {
        lVar25 = 0;
        local_1a0 = lVar24;
        do {
          local_fc = 0;
          auVar27._0_8_ = FUN_143adfd55(&local_148,lVar25 * 0x98 + *(longlong *)(param_3 + 2));
          auVar27._8_8_ = extraout_XMM0_Qb;
          lVar6 = *(longlong *)(lVar24 + 0xb8);
          uVar20 = (ulonglong)(uint)(*(int *)(lVar24 + 0xc0) * (int)lVar25);
          *(undefined4 *)(lVar6 + 8 + uVar20) = uStack_140;
          *(longlong *)(lVar6 + uVar20) = local_148;
          auVar27 = pmovsxbd(auVar27,local_fc._4_4_);
          fVar28 = (float)auVar27._0_4_ * 0.007874016;
          fVar29 = (float)auVar27._4_4_ * 0.007874016;
          fVar30 = (float)auVar27._8_4_ * 0.007874016;
          auVar35 = pmovsxbd(in_XMM3,(undefined4)local_fc);
          fVar36 = (float)auVar35._0_4_ * 0.007874016;
          fVar37 = (float)auVar35._4_4_ * 0.007874016;
          fVar38 = (float)auVar35._8_4_ * 0.007874016;
          fVar31 = (float)auVar27._0_4_ * 0.007874016;
          fVar32 = (float)auVar27._4_4_ * 0.007874016;
          fVar33 = (float)auVar27._8_4_ * 0.007874016;
          local_1a4 = (float)auVar27._12_4_ * 0.007874016;
          fVar23 = (fVar31 * fVar37 - fVar32 * fVar36) * local_1a4;
          fVar31 = (fVar33 * fVar36 - fVar31 * fVar38) * local_1a4;
          local_1a4 = (fVar32 * fVar38 - fVar33 * fVar37) * local_1a4;
          lVar6 = *(longlong *)(lVar24 + 0x68);
          if (*(char *)(lVar24 + 0x89) == '\x01') {
            fVar33 = fVar23 * 0.0 + fVar30 * -0.0;
            fVar8 = fVar30 * -0.0 + fVar38 * 0.0;
            fVar32 = fVar23 * -0.0 + fVar38 * 0.0;
            lVar24 = lVar25 * 0x10;
            iVar19 = (int)ROUND(fVar36 * 32767.0 + fVar36 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar19) {
              iVar19 = 0x7fff;
            }
            uVar18 = (undefined2)iVar19;
            if (iVar19 < -0x7fff) {
              uVar18 = 0x8000;
            }
            iVar19 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar19) {
              iVar19 = 0x7fff;
            }
            if (iVar19 < -0x7fff) {
              iVar19 = -0x8000;
            }
            iVar22 = (int)ROUND(fVar38 * 32767.0 + fVar38 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar22) {
              iVar22 = 0x7fff;
            }
            if (iVar22 < -0x7fff) {
              iVar22 = -0x8000;
            }
            auVar34 = ZEXT812(0x46fffe00);
            *(undefined2 *)(lVar6 + lVar24) = uVar18;
            *(short *)(lVar6 + 2 + lVar24) = (short)iVar19;
            *(short *)(lVar6 + 4 + lVar24) = (short)iVar22;
            iVar19 = (int)ROUND(fVar28 * 32767.0 + fVar28 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar19) {
              iVar19 = 0x7fff;
            }
            *(undefined2 *)(lVar6 + 6 + lVar24) = 0x7fff;
            if (iVar19 < -0x7fff) {
              iVar19 = -0x8000;
            }
            iVar22 = (int)ROUND(fVar29 * 32767.0 + fVar29 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar22) {
              iVar22 = 0x7fff;
            }
            *(short *)(lVar6 + 8 + lVar24) = (short)iVar19;
            if (iVar22 < -0x7fff) {
              iVar22 = -0x8000;
            }
            iVar19 = (int)ROUND(fVar30 * 32767.0 + fVar30 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar19) {
              iVar19 = 0x7fff;
            }
            *(short *)(lVar6 + 10 + lVar24) = (short)iVar22;
            if (iVar19 < -0x7fff) {
              iVar19 = -0x8000;
            }
            *(short *)(lVar6 + 0xc + lVar24) = (short)iVar19;
            iVar19 = (int)ROUND(*(float *)(&DAT_14a329b58 +
                                          (ulonglong)
                                          (((fVar33 * fVar37 - fVar8 * fVar31) + fVar29 * fVar32) *
                                           -0.0 + (fVar32 * 0.0 +
                                                  (fVar37 * fVar23 - fVar38 * fVar31)) * fVar28 +
                                                  (fVar36 * (fVar33 * 0.0 +
                                                            (fVar31 * fVar30 - fVar29 * fVar23)) -
                                                  (fVar8 * 0.0 + (fVar37 * fVar30 - fVar29 * fVar38)
                                                  ) * local_1a4) < 0.0) * 4)) >> 1;
            if (0x7ffe < (int)ROUND(*(float *)(&DAT_14a329b58 +
                                              (ulonglong)
                                              (((fVar33 * fVar37 - fVar8 * fVar31) + fVar29 * fVar32
                                               ) * -0.0 +
                                               (fVar32 * 0.0 + (fVar37 * fVar23 - fVar38 * fVar31))
                                               * fVar28 +
                                               (fVar36 * (fVar33 * 0.0 +
                                                         (fVar31 * fVar30 - fVar29 * fVar23)) -
                                               (fVar8 * 0.0 + (fVar37 * fVar30 - fVar29 * fVar38)) *
                                               local_1a4) < 0.0) * 4)) >> 1) {
              iVar19 = 0x7fff;
            }
            uVar18 = (undefined2)iVar19;
            if (iVar19 < -0x7fff) {
              uVar18 = 0x8000;
            }
            *(undefined2 *)(lVar6 + 0xe + lVar24) = uVar18;
            lVar24 = local_1a0;
          }
          else {
            fVar8 = fVar23 * 0.0 + fVar30 * -0.0;
            fVar32 = fVar30 * -0.0 + fVar38 * 0.0;
            fVar33 = fVar23 * -0.0 + fVar38 * 0.0;
            iVar19 = (int)ROUND(fVar36 * 127.0 + fVar36 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar19) {
              iVar19 = 0x7f;
            }
            uVar17 = (undefined1)iVar19;
            if (iVar19 < -0x7f) {
              uVar17 = 0x80;
            }
            iVar19 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar19) {
              iVar19 = 0x7f;
            }
            if (iVar19 < -0x7f) {
              iVar19 = -0x80;
            }
            iVar22 = (int)ROUND(fVar38 * 127.0 + fVar38 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar22) {
              iVar22 = 0x7f;
            }
            iVar21 = -0x80;
            if (iVar22 < -0x7f) {
              iVar22 = iVar21;
            }
            auVar34 = ZEXT812(0x42fe0000);
            *(undefined1 *)(lVar6 + lVar25 * 8) = uVar17;
            *(char *)(lVar6 + 1 + lVar25 * 8) = (char)iVar19;
            *(char *)(lVar6 + 2 + lVar25 * 8) = (char)iVar22;
            iVar19 = (int)ROUND(fVar28 * 127.0 + fVar28 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar19) {
              iVar19 = 0x7f;
            }
            *(undefined1 *)(lVar6 + 3 + lVar25 * 8) = 0x7f;
            if (iVar19 < -0x7f) {
              iVar19 = iVar21;
            }
            iVar22 = (int)ROUND(fVar29 * 127.0 + fVar29 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar22) {
              iVar22 = 0x7f;
            }
            *(char *)(lVar6 + 4 + lVar25 * 8) = (char)iVar19;
            if (iVar22 < -0x7f) {
              iVar22 = iVar21;
            }
            iVar19 = (int)ROUND(fVar30 * 127.0 + fVar30 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar19) {
              iVar19 = 0x7f;
            }
            *(char *)(lVar6 + 5 + lVar25 * 8) = (char)iVar22;
            uVar17 = (undefined1)iVar19;
            if (iVar19 < -0x7f) {
              uVar17 = 0x80;
            }
            *(undefined1 *)(lVar6 + 6 + lVar25 * 8) = uVar17;
            iVar19 = (int)ROUND(*(float *)(&DAT_14a329b50 +
                                          (ulonglong)
                                          (((fVar8 * fVar37 - fVar32 * fVar31) + fVar29 * fVar33) *
                                           -0.0 + (fVar33 * 0.0 +
                                                  (fVar37 * fVar23 - fVar38 * fVar31)) * fVar28 +
                                                  (fVar36 * (fVar8 * 0.0 +
                                                            (fVar31 * fVar30 - fVar29 * fVar23)) -
                                                  (fVar32 * 0.0 +
                                                  (fVar37 * fVar30 - fVar29 * fVar38)) * local_1a4)
                                          < 0.0) * 4)) >> 1;
            if (0x7e < iVar19) {
              iVar19 = 0x7f;
            }
            uVar17 = (undefined1)iVar19;
            if (iVar19 < -0x7f) {
              uVar17 = 0x80;
            }
            *(undefined1 *)(lVar6 + 7 + lVar25 * 8) = uVar17;
          }
          in_XMM3._12_4_ = 0;
          in_XMM3._0_12_ = auVar34;
          lVar6 = *(longlong *)(lVar24 + 0x70);
          if (*(char *)(lVar24 + 0x88) == '\x01') {
            *(ulonglong *)(lVar6 + (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 8) =
                 CONCAT44(fStack_138,CONCAT22(uStack_13a,uStack_13c));
          }
          else {
            fVar31 = ABS((float)CONCAT22(uStack_13a,uStack_13c));
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            lVar12 = (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 4;
            iVar19 = movmskps(fVar31,ZEXT416(CONCAT22(uStack_13a,uStack_13c)));
            *(ushort *)(lVar6 + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
            fVar31 = ABS(fStack_138);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            iVar19 = movmskps(fVar31,ZEXT416((uint)fStack_138));
            *(ushort *)(lVar6 + 2 + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
          }
          lVar6 = *(longlong *)(lVar24 + 0x70);
          if (*(char *)(lVar24 + 0x88) == '\x01') {
            *(ulonglong *)(lVar6 + 8 + (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 8) =
                 CONCAT44(fStack_130,CONCAT13(uStack_131,CONCAT12(uStack_132,local_134)));
          }
          else {
            fVar31 = (float)CONCAT13(uStack_131,CONCAT12(uStack_132,local_134));
            fVar23 = ABS(fVar31);
            if ((uint)fVar23 < 0x47800000) {
              if ((uint)fVar23 < 0x38800000) {
                fVar28 = fVar23 + 0.5;
              }
              else {
                fVar23 = (float)((int)fVar23 + 0x8000fff + (uint)(((uint)fVar23 >> 0xd & 1) != 0) >>
                                0xd);
                fVar28 = fVar23;
              }
            }
            else {
              fVar28 = (float)((0x7f800000 < (uint)fVar23 | 0x3e) << 9);
            }
            lVar12 = (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 4;
            iVar19 = movmskps(fVar23,ZEXT416((uint)fVar31));
            *(ushort *)(lVar6 + 4 + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar28,0);
            fVar31 = ABS(fStack_130);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            iVar19 = movmskps(fVar31,ZEXT416((uint)fStack_130));
            *(ushort *)(lVar6 + 6 + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
          }
          lVar6 = *(longlong *)(lVar24 + 0x70);
          if (*(char *)(lVar24 + 0x88) == '\x01') {
            *(ulonglong *)(lVar6 + 0x10 + (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 8) =
                 CONCAT44(fStack_128,fStack_12c);
          }
          else {
            fVar31 = ABS(fStack_12c);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            lVar12 = (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 4;
            iVar19 = movmskps(fVar31,ZEXT416((uint)fStack_12c));
            *(ushort *)(lVar6 + 8 + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
            fVar31 = ABS(fStack_128);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            iVar19 = movmskps(fVar31,ZEXT416((uint)fStack_128));
            *(ushort *)(lVar6 + 10 + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
          }
          lVar6 = *(longlong *)(lVar24 + 0x70);
          if (*(char *)(lVar24 + 0x88) == '\x01') {
            *(ulonglong *)(lVar6 + 0x18 + (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 8) =
                 CONCAT44(fStack_120,fStack_124);
          }
          else {
            fVar31 = ABS(fStack_124);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            lVar12 = (ulonglong)*(uint *)(lVar24 + 0x80) * lVar25 * 4;
            iVar19 = movmskps(fVar31,ZEXT416((uint)fStack_124));
            *(ushort *)(lVar6 + 0xc + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
            fVar31 = ABS(fStack_120);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar23 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar23 = fVar31;
              }
            }
            else {
              fVar23 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            iVar19 = movmskps(fVar31,ZEXT416((uint)fStack_120));
            *(ushort *)(lVar6 + 0xe + lVar12) = (ushort)(iVar19 << 0xf) | SUB42(fVar23,0);
          }
          *(undefined4 *)
           (*(longlong *)(lVar24 + 0xf8) + (ulonglong)(uint)(*(int *)(lVar24 + 0x100) * (int)lVar25)
           ) = local_f4;
          lVar25 = lVar25 + 1;
        } while (lVar25 != iVar4);
      }
      lVar25 = local_1b0;
      iVar4 = *(int *)(lVar24 + 0xc0);
      iVar19 = *(int *)(lVar24 + 0xc4);
      uVar7 = *(undefined8 *)(lVar24 + 0xa0);
      cVar9 = *(char *)(local_1b0 + 0x69);
      if (cVar9 == '\0') {
        FUN_14002049c(local_1b0,1);
      }
      local_1c0 = 1;
      local_1c8 = iVar4 * iVar19;
      pvVar13 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar25,uVar7,0);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,0);
      }
      memcpy(pvVar13,*(void **)(lVar24 + 0xb8),
             (ulonglong)(uint)(*(int *)(lVar24 + 0xc0) * *(int *)(lVar24 + 0xc4)));
      uVar7 = *(undefined8 *)(lVar24 + 0xa0);
      if (*(char *)(lVar25 + 0x69) == '\0') {
        FUN_14002049c(lVar25,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
        FUN_14002049c(lVar25,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
      }
      iVar4 = *(int *)(lVar24 + 0x100);
      iVar19 = *(int *)(lVar24 + 0x104);
      uVar7 = *(undefined8 *)(lVar24 + 0xe0);
      cVar9 = *(char *)(lVar25 + 0x69);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,1);
      }
      local_1c0 = 1;
      local_1c8 = iVar4 * iVar19;
      pvVar13 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar25,uVar7,0);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,0);
      }
      memcpy(pvVar13,*(void **)(lVar24 + 0xf8),
             (ulonglong)(uint)(*(int *)(lVar24 + 0x100) * *(int *)(lVar24 + 0x104)));
      uVar7 = *(undefined8 *)(lVar24 + 0xe0);
      if (*(char *)(lVar25 + 0x69) == '\0') {
        FUN_14002049c(lVar25,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
        FUN_14002049c(lVar25,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
      }
      bVar3 = *(byte *)(lVar24 + 0x89);
      iVar4 = *(int *)(lVar24 + 0x84);
      iVar19 = (uint)bVar3 * 8 + 8;
      *(int *)(lVar24 + 0x78) = iVar19;
      uVar7 = *(undefined8 *)(lVar24 + 0x28);
      cVar9 = *(char *)(lVar25 + 0x69);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,CONCAT71((uint7)(uint3)((uint)iVar19 >> 8),1));
      }
      local_1c0 = 1;
      local_1c8 = iVar4 << (bVar3 + 3 & 0x1f);
      pvVar13 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar25,uVar7,0);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,0);
      }
      *(uint *)(lVar24 + 0x78) = (uint)*(byte *)(lVar24 + 0x89) * 8 + 8;
      memcpy(pvVar13,*(void **)(lVar24 + 0x68),
             (longlong)(*(int *)(lVar24 + 0x84) << (*(byte *)(lVar24 + 0x89) + 3 & 0x1f)));
      uVar7 = *(undefined8 *)(lVar24 + 0x28);
      if (*(char *)(lVar25 + 0x69) == '\0') {
        FUN_14002049c(lVar25,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
        FUN_14002049c(lVar25,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
      }
      bVar3 = *(byte *)(lVar24 + 0x88);
      iVar4 = *(int *)(lVar24 + 0x80);
      iVar19 = *(int *)(lVar24 + 0x84);
      *(uint *)(lVar24 + 0x7c) = (uint)bVar3 * 4 + 4;
      uVar7 = *(undefined8 *)(lVar24 + 0x40);
      cVar9 = *(char *)(lVar25 + 0x69);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,1);
      }
      local_1c0 = 1;
      local_1c8 = (iVar4 << (bVar3 + 2 & 0x1f)) * iVar19;
      pvVar13 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar25,uVar7,0);
      if (cVar9 == '\0') {
        FUN_14002049c(lVar25,0);
      }
      *(uint *)(lVar24 + 0x7c) = (uint)*(byte *)(lVar24 + 0x88) * 4 + 4;
      memcpy(pvVar13,*(void **)(lVar24 + 0x70),
             (longlong)
             ((*(int *)(lVar24 + 0x80) << (*(byte *)(lVar24 + 0x88) + 2 & 0x1f)) *
             *(int *)(lVar24 + 0x84)));
      uVar7 = *(undefined8 *)(lVar24 + 0x40);
      if (*(char *)(lVar25 + 0x69) == '\0') {
        FUN_14002049c(lVar25,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
        FUN_14002049c(lVar25,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar25,uVar7);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar16 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar16 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar16 + 0x68))(plVar16);
        }
        _Init_thread_footer(&DAT_14ca97070);
        lVar25 = local_1b0;
      }
      lVar6 = DAT_14ca97068;
      bVar26 = true;
      cVar9 = DAT_14ca96da8;
      if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
        iVar4 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar4 == 0x40000002) {
          cVar9 = '\x02';
          uVar20 = 0;
        }
        else {
          bVar26 = true;
          cVar9 = '\x02';
          if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
            if (iVar4 == 1) {
              DVar10 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              bVar26 = DVar10 == DVar11;
              cVar9 = DAT_14ca96da8;
            }
            else {
              bVar26 = false;
            }
          }
          uVar20 = (ulonglong)(bVar26 ^ 1);
        }
        bVar26 = *(int *)(lVar6 + uVar20 * 4) != 0;
        lVar25 = local_1b0;
      }
      if ((bVar26) && (cVar9 != '\0')) {
        FUN_14052082e(lVar24 + 0x360);
        local_148 = 0;
        uStack_140 = 0;
        uStack_132 = 1;
        uStack_131 = 0;
        fStack_130 = 0.0;
        fStack_12c = 0.0;
        fStack_124 = 0.0;
        fStack_120 = 0.0;
        uStack_11c = 0;
        uStack_119 = 0;
        local_111 = 0;
        uStack_109 = 0;
        uStack_104 = 0;
        uStack_101 = 0;
        lVar6 = *(longlong *)(lVar24 + 0x120);
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
          local_148 = lVar6;
        }
        fVar31 = (float)(*(int *)(lVar24 + 0x130) / 3);
        uStack_13c = 0;
        uStack_13a = 0;
        local_134 = 1;
        lVar6 = *(longlong *)(lVar24 + 0xa0);
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        uVar5 = *(undefined4 *)(lVar24 + 0xc4);
        fStack_128 = 1.4013e-45;
        fStack_138 = fVar31;
        FUN_1471b2628(&fStack_130,0);
        plVar16 = (longlong *)CONCAT44(fStack_12c,fStack_130);
        *plVar16 = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        plVar16[1] = 3;
        *(undefined4 *)(plVar16 + 2) = 0xc;
        *(undefined4 *)((longlong)plVar16 + 0x14) = uVar5;
        *(undefined4 *)(plVar16 + 3) = 0;
        *(float *)((longlong)plVar16 + 0x1c) = fVar31;
        *(undefined2 *)(plVar16 + 4) = 0x100;
        *(undefined1 *)((longlong)plVar16 + 0x22) = 1;
        FUN_147377468(&local_198,&local_148);
        plVar16 = (longlong *)(lVar24 + 0x3a0);
        if (plVar16 != &local_198) {
          lVar12 = *plVar16;
          *plVar16 = local_198;
          local_198 = 0;
          if (lVar12 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar12 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar12 + 8);
              LOCK();
              uVar2 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar2 >> 0x1e & 1) == 0) {
                bVar3 = *(byte *)(lVar12 + 0xd);
                plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                plVar14[1] = lVar12;
                plVar16 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c8;
                lVar25 = local_1b0;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar14 = (longlong)plVar16;
                    LOCK();
                    bVar26 = plVar16 != DAT_14ca843c0;
                    plVar15 = plVar14;
                    if (bVar26) {
                      plVar16 = DAT_14ca843c0;
                      plVar15 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar15;
                    UNLOCK();
                  } while (bVar26);
                }
                else {
                  do {
                    *plVar14 = (longlong)plVar15;
                    LOCK();
                    bVar26 = plVar15 != DAT_14ca843c8;
                    plVar16 = plVar14;
                    if (bVar26) {
                      plVar15 = DAT_14ca843c8;
                      plVar16 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar16;
                    UNLOCK();
                  } while (bVar26);
                }
              }
            }
          }
        }
        *(undefined8 *)(lVar24 + 0x3a8) = local_190;
        *(undefined8 *)(lVar24 + 0x3b0) = uStack_188;
        FUN_140520998(lVar24 + 0x3b8,&local_180);
        *(undefined8 *)(lVar24 + 0x3c8) = local_170;
        *(undefined8 *)(lVar24 + 0x3d0) = uStack_168;
        *(undefined8 *)(lVar24 + 0x3d8) = local_160;
        *(undefined8 *)(lVar24 + 0x3e0) = uStack_158;
        *(undefined4 *)(lVar24 + 1000) = local_150;
        FUN_14005bcf4(local_180,local_178);
        if (local_180 != 0) {
          FUN_1400020a8();
        }
        lVar12 = local_198;
        if (local_198 != 0) {
          LOCK();
          puVar1 = (uint *)(local_198 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_198 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_198 + 0xd);
              plVar14 = (longlong *)FUN_14001cc68(0x10,8);
              plVar14[1] = lVar12;
              plVar16 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              lVar25 = local_1b0;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar14 = (longlong)plVar16;
                  LOCK();
                  bVar26 = plVar16 != DAT_14ca843c0;
                  plVar15 = plVar14;
                  if (bVar26) {
                    plVar16 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar14 = (longlong)plVar15;
                  LOCK();
                  bVar26 = plVar15 != DAT_14ca843c8;
                  plVar16 = plVar14;
                  if (bVar26) {
                    plVar15 = DAT_14ca843c8;
                    plVar16 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar16;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        FUN_14742848e(lVar24 + 0x360,lVar25);
        if (lVar6 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar6 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar6 + 0xd);
              plVar14 = (longlong *)FUN_14001cc68(0x10,8);
              plVar14[1] = lVar6;
              plVar16 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar14 = (longlong)plVar16;
                  LOCK();
                  bVar26 = plVar16 != DAT_14ca843c0;
                  plVar15 = plVar14;
                  if (bVar26) {
                    plVar16 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar14 = (longlong)plVar15;
                  LOCK();
                  bVar26 = plVar15 != DAT_14ca843c8;
                  plVar16 = plVar14;
                  if (bVar26) {
                    plVar15 = DAT_14ca843c8;
                    plVar16 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar16;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        FUN_14005bcf4(CONCAT44(fStack_12c,fStack_130),fStack_128);
        if (CONCAT44(fStack_12c,fStack_130) != 0) {
          FUN_1400020a8();
        }
        lVar24 = local_148;
        if (local_148 != 0) {
          LOCK();
          puVar1 = (uint *)(local_148 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_148 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_148 + 0xd);
              plVar14 = (longlong *)FUN_14001cc68(0x10,8);
              plVar14[1] = lVar24;
              plVar16 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar14 = (longlong)plVar16;
                  LOCK();
                  bVar26 = plVar16 != DAT_14ca843c0;
                  plVar15 = plVar14;
                  if (bVar26) {
                    plVar16 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar14 = (longlong)plVar15;
                  LOCK();
                  bVar26 = plVar15 != DAT_14ca843c8;
                  plVar16 = plVar14;
                  if (bVar26) {
                    plVar15 = DAT_14ca843c8;
                    plVar16 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar16;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
      }
    }
    if (*(longlong *)(param_3 + 2) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_3);
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae1ac6 FUN_143ae1ac6 body=12 status=ok
// SIG undefined FUN_143ae1ac6(void)

void FUN_143ae1ac6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ae1acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ae1ad2 FUN_143ae1ad2 body=29 status=ok
// SIG undefined FUN_143ae1ad2(void)

undefined8 FUN_143ae1ad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae1af0 FUN_143ae1af0 body=282 status=ok
// SIG undefined FUN_143ae1af0(void)

undefined8 * FUN_143ae1af0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ae0466);
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



// FUNCTION 143ae1c0a FUN_143ae1c0a body=123 status=ok
// SIG undefined FUN_143ae1c0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae1c0a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143ae05a8(_DAT_000000a8,&DAT_14ca85100,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143ae05a8(param_1[0x15],&DAT_14ca85100,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ae1c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ae1cba FUN_143ae1cba body=12 status=ok
// SIG undefined FUN_143ae1cba(void)

void FUN_143ae1cba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ae1cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ae1cc6 FUN_143ae1cc6 body=29 status=ok
// SIG undefined FUN_143ae1cc6(void)

undefined8 FUN_143ae1cc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae1ce4 FUN_143ae1ce4 body=282 status=ok
// SIG undefined FUN_143ae1ce4(void)

undefined8 * FUN_143ae1ce4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ae0466);
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



// FUNCTION 143ae1e59 FUN_143ae1e59 body=329 status=ok
// SIG undefined FUN_143ae1e59(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae1e59(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined **local_40;
  undefined8 uStack_38;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cb44568);
  if (cVar1 == '\0') {
    _DAT_14cb44568 = 0;
    uRam000000014cb44570 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_40 = &PTR_FUN_14ae33c10;
  uStack_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/ProceduralMeshComponent",&PTR_FUN_14ae33c30,1,0);
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  local_48 = 3;
  FUN_14282b410(L"/Script/ProceduralMeshComponent",&PTR_FUN_14ae36d90,1,&PTR_FUN_14ae36d10);
  local_28 = CONCAT44(local_28._4_4_,1);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb446b0,L"r.RayTracing.Geometry.ProceduralMeshes",&local_28,
                L"Include procedural meshes in ray tracing effects (default = 1 (procedural meshes enabled in ray tracing))"
               );
  atexit(FUN_143add984);
  local_28 = -0x7ffffffeb51c9126;
  local_14 = 0x17;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14647d0d2(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae1fa4 FUN_143ae1fa4 body=69 status=ok
// SIG undefined FUN_143ae1fa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae1fa4(void)

{
  _DAT_14cb446e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae1fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb446e8,1);
  return;
}



// FUNCTION 143ae1fe9 FUN_143ae1fe9 body=69 status=ok
// SIG undefined FUN_143ae1fe9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae1fe9(void)

{
  _DAT_14cb446f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae202b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44700,1);
  return;
}



// FUNCTION 143ae202e FUN_143ae202e body=1629 status=ok
// SIG undefined FUN_143ae202e(void)

undefined8 FUN_143ae202e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  int iVar7;
  BOOL BVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  LPCWSTR pWVar16;
  undefined2 *puVar17;
  LPCWSTR pWVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStackY_128 [32];
  undefined2 *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  ulonglong uStack_b8;
  longlong local_b0 [2];
  LPCWSTR local_a0;
  int local_98;
  LPCWSTR local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStackY_128;
  plVar11 = (longlong *)FUN_140e92164();
  puVar17 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar17 = (undefined2 *)*param_2;
  }
  FUN_140056680(&local_80,puVar17);
  (**(code **)(*param_1 + 0x48))(param_1,&local_f0,&local_80,param_2 + 3);
  puVar17 = &DAT_149dfb77a;
  if (local_e8 != 0) {
    puVar17 = local_f0;
  }
  (**(code **)(*plVar11 + 0x1f8))(plVar11,&local_90,puVar17);
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar17 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar17 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_b0,puVar17);
  (**(code **)(*param_1 + 0x48))(param_1,&local_f0,local_b0,param_2 + 3);
  puVar17 = &DAT_149dfb77a;
  if (local_e8 != 0) {
    puVar17 = local_f0;
  }
  FUN_140002266(&local_80,L"%s.tmp",puVar17);
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar17 = local_80;
  if (local_78 == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar11 + 0x1f8))(plVar11,&local_a0,puVar17);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  pWVar18 = local_a0;
  if (local_98 == 0) {
    pWVar18 = L"";
  }
  uVar4 = *param_3;
  iVar7 = *(int *)(param_3 + 1);
  plVar12 = (longlong *)FUN_140e92164();
  (**(code **)(*plVar12 + 0xa8))(plVar12,pWVar18,0);
  plVar12 = (longlong *)FUN_140e92164();
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x100))(plVar12,pWVar18,0,0);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)FUN_140e92164();
    FUN_140056680(&local_80,pWVar18);
    FUN_140beea4a(&local_f0,&local_80);
    puVar17 = local_f0;
    if (local_e8 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar12 + 0x1d8))(plVar12,puVar17);
    if (local_f0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar12 = (longlong *)FUN_140e92164();
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x100))(plVar12,pWVar18,0,0);
    if (plVar12 == (longlong *)0x0) {
      uVar14 = 7;
      goto LAB_143ae250c;
    }
  }
  plVar13 = (longlong *)FUN_14001cc68(0xe0,0x10);
  uVar14 = (**(code **)(*plVar12 + 8))(plVar12);
  FUN_140d2d3d2(plVar13,plVar12,pWVar18,uVar14);
  uVar14 = 7;
  if (plVar13 == (longlong *)0x0) goto LAB_143ae250c;
  (**(code **)(*plVar13 + 0x170))(plVar13,uVar4,(longlong)iVar7);
  (**(code **)(*plVar13 + 0x1f8))(plVar13);
  bVar3 = *(byte *)((longlong)plVar13 + 0x29);
  (**(code **)*plVar13)(plVar13,1);
  if ((bVar3 & 6) != 0) goto LAB_143ae250c;
  local_f0 = (undefined2 *)0x0;
  local_e8 = *(int *)(param_2 + 1);
  lVar20 = (longlong)local_e8;
  _Src = (void *)*param_2;
  if (lVar20 == 0) {
    local_e4 = 0;
  }
  else {
    FUN_1446dd670(&local_f0,local_e8,0);
    memcpy(local_f0,_Src,lVar20 * 2);
  }
  local_e0 = *(undefined4 *)(param_2 + 2);
  local_d8 = param_2[3];
  local_d0 = (longlong *)param_2[4];
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  local_c8 = *(undefined1 *)((longlong)param_2 + 0x29);
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  iVar7 = (**(code **)(*param_1 + 0x18))(param_1);
  piVar1 = DAT_14cb446f0;
  if (iVar7 == 2) {
    pWVar18 = L"";
    if (local_98 != 0) {
      pWVar18 = local_a0;
    }
    pWVar16 = L"";
    if (local_88 != 0) {
      pWVar16 = local_90;
    }
    cVar6 = (**(code **)(*plVar11 + 0xa0))(plVar11,pWVar16,pWVar18);
    uVar14 = 7;
    if (cVar6 != '\0') {
LAB_143ae24a2:
      uVar14 = 0;
    }
  }
  else {
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar20 + 0xc60);
    if (iVar7 == 0x40000002) {
      iVar19 = *DAT_14cb446f0;
LAB_143ae23e6:
      uVar15 = 0;
      lVar20 = DAT_14cb44708;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        iVar19 = *DAT_14cb446f0;
      }
      else if (iVar7 == 2) {
        iVar19 = *DAT_14cb446f0;
        iVar7 = 2;
      }
      else {
        uVar15 = 1;
        if (iVar7 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          uVar15 = (ulonglong)(DVar9 != DVar10);
          iVar7 = *(int *)(lVar20 + 0xc60);
        }
        iVar19 = piVar1[uVar15];
        if (iVar7 == 0x40000002) goto LAB_143ae23e6;
      }
      lVar20 = DAT_14cb44708;
      if (((DAT_14c86a9f8 & 1) == 0) || (iVar7 == 2)) goto LAB_143ae23e6;
      if (iVar7 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar15 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar15 = 1;
      }
    }
    uVar14 = 7;
    if (0 < iVar19) {
      uVar2 = *(undefined4 *)(lVar20 + uVar15 * 4);
      bVar5 = true;
      iVar7 = 1;
      do {
        if (iVar7 != 1) {
          FUN_14000f986(uVar2);
        }
        pWVar18 = L"";
        if (local_98 != 0) {
          pWVar18 = local_a0;
        }
        pWVar16 = L"";
        if (local_88 != 0) {
          pWVar16 = local_90;
        }
        BVar8 = ReplaceFileW(pWVar16,pWVar18,(LPCWSTR)0x0,6,(LPVOID)0x0,(LPVOID)0x0);
        if (BVar8 != 0) break;
        bVar5 = iVar7 < iVar19;
        bVar21 = iVar7 != iVar19;
        iVar7 = iVar7 + 1;
      } while (bVar21);
      if (bVar5) goto LAB_143ae24a2;
    }
  }
  if ((int)uStack_b8 == 0) {
LAB_143ae24db:
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c0 != (undefined8 *)0x0) {
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    goto LAB_143ae24db;
  }
  plVar11 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_d0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ae250c:
  if (local_a0 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStackY_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 143ae268c FUN_143ae268c body=509 status=ok
// SIG undefined FUN_143ae268c(void)

bool FUN_143ae268c(longlong param_1,undefined8 *param_2,void **param_3,longlong *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_60;
  uint local_5c;
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    local_58 = (void *)0x0;
    local_50 = *(uint *)(param_1 + 0x10);
    sVar7 = (size_t)(int)local_50;
    pvVar2 = *(void **)(param_1 + 8);
    if (sVar7 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1447a127e(&local_58,local_50,0);
      memcpy(local_58,pvVar2,sVar7);
    }
    lVar8 = 0;
    while( true ) {
      iVar3 = 0;
      if ((longlong *)*param_4 != (longlong *)0x0) {
        iVar3 = (**(code **)(*(longlong *)*param_4 + 0x20))();
      }
      if ((iVar3 <= lVar8) || ((int)local_50 <= lVar8)) break;
      lVar4 = (**(code **)(*(longlong *)*param_4 + 0x18))();
      *(byte *)((longlong)local_58 + lVar8) =
           *(byte *)((longlong)local_58 + lVar8) ^ *(byte *)(lVar4 + lVar8);
      lVar8 = lVar8 + 1;
    }
    uVar6 = 0x10;
    if (uVar1 < local_50) {
      uVar6 = local_50;
    }
    local_68 = (void *)0x0;
    local_60 = *(uint *)(param_2 + 1);
    sVar7 = (size_t)(int)local_60;
    pvVar2 = (void *)*param_2;
    if (sVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1447a127e(&local_68,local_60,0);
      memcpy(local_68,pvVar2,sVar7);
    }
    if ((0 < (int)(uVar1 % uVar6)) && (iVar3 = uVar6 - uVar1 % uVar6, 0 < iVar3)) {
      iVar5 = 0;
      do {
        uVar6 = local_60;
        lVar8 = (longlong)(int)local_60;
        local_60 = local_60 + 1;
        if (local_5c < local_60) {
          FUN_1447403be(&local_68,uVar6);
        }
        *(char *)((longlong)local_68 + lVar8) = (char)iVar3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    uVar6 = local_60;
    pvVar2 = local_68;
    if (&local_68 != param_3) {
      sVar7 = (size_t)(int)local_60;
      *(uint *)(param_3 + 1) = local_60;
      if (local_60 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(param_3,local_60);
        if (uVar6 != 0) {
          memcpy(*param_3,pvVar2,sVar7);
        }
      }
    }
    (*(code *)PTR_FUN_14c759060)(local_58,*param_3,(longlong)*(int *)(param_3 + 1));
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae288a FUN_143ae288a body=450 status=ok
// SIG undefined FUN_143ae288a(void)

ulonglong FUN_143ae288a(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  size_t _Size;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    uVar9 = 0;
  }
  else {
    local_50 = (void *)0x0;
    local_48 = *(uint *)(param_1 + 0x10);
    _Size = (size_t)(int)local_48;
    pvVar2 = *(void **)(param_1 + 8);
    if (_Size == 0) {
      local_44 = 0;
    }
    else {
      FUN_1447a127e(&local_50,local_48,0);
      memcpy(local_50,pvVar2,_Size);
    }
    lVar11 = 0;
    while( true ) {
      iVar4 = 0;
      if ((longlong *)*param_4 != (longlong *)0x0) {
        iVar4 = (**(code **)(*(longlong *)*param_4 + 0x20))();
      }
      if ((iVar4 <= lVar11) || ((int)local_48 <= lVar11)) break;
      lVar5 = (**(code **)(*(longlong *)*param_4 + 0x18))();
      *(byte *)((longlong)local_50 + lVar11) =
           *(byte *)((longlong)local_50 + lVar11) ^ *(byte *)(lVar5 + lVar11);
      lVar11 = lVar11 + 1;
    }
    uVar6 = 0x10;
    if (uVar1 < local_48) {
      uVar6 = local_48;
    }
    bVar12 = uVar1 % uVar6 == 0;
    uVar9 = CONCAT71((int7)((ulonglong)param_4 >> 8),bVar12);
    if (bVar12) {
      iVar4 = *(int *)(param_2 + 1);
      pvVar2 = (void *)*param_2;
      *(int *)(param_3 + 1) = iVar4;
      if (iVar4 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(param_3,iVar4);
        if (iVar4 != 0) {
          memcpy((void *)*param_3,pvVar2,(longlong)iVar4);
        }
      }
      (*(code *)PTR_FUN_14c759068)(local_50,*param_3,(longlong)(int)param_3[1]);
      uVar1 = *(uint *)(param_3 + 1);
      if (0 < (longlong)(int)uVar1) {
        pbVar10 = (byte *)((longlong)(int)uVar1 + *param_3);
        uVar6 = 0;
        uVar8 = 0xffffffff;
        do {
          pbVar10 = pbVar10 + -1;
          uVar3 = (uint)*pbVar10;
          if ((uVar8 != 0xffffffff) && (uVar7 = uVar6, uVar3 = uVar8, uVar8 != *pbVar10)) break;
          uVar8 = uVar3;
          uVar6 = uVar6 + 1;
          uVar7 = uVar1;
        } while (uVar1 != uVar6);
        if ((uVar7 != 0) && (uVar7 == uVar8)) {
          iVar4 = uVar1 - uVar7;
          if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar4);
          }
          *(int *)(param_3 + 1) = iVar4;
          FUN_140b3f66e(param_3);
        }
      }
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143ae2a4e FUN_143ae2a4e body=410 status=ok
// SIG undefined FUN_143ae2a4e(void)

undefined8 FUN_143ae2a4e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_2 + 1);
  iVar8 = 0;
  uVar4 = FUN_1410fe39e(*(undefined8 *)(param_1 + 8),uVar1,0,0);
  iVar6 = *(int *)((longlong)param_3 + 0xc);
  if (iVar6 < 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    FUN_144893a1c(param_3,0);
    iVar8 = (int)param_3[1];
    iVar6 = *(int *)((longlong)param_3 + 0xc);
  }
  *(uint *)(param_3 + 1) = iVar8 + uVar4;
  if ((uint)(iVar6 - iVar8) < uVar4) {
    FUN_1447403be(param_3,iVar8);
  }
  local_50 = (ulonglong)(int)uVar4;
  local_58 = 0;
  local_60 = 0;
  local_68 = (longlong)(int)uVar1;
  cVar3 = FUN_1410fe780(*(undefined8 *)(param_1 + 8),*param_3,&local_50,*param_2);
  iVar6 = (int)local_50;
  if (((longlong)iVar6 == local_50) && (cVar3 != '\0')) {
    iVar8 = (int)param_3[1];
    if (iVar8 < iVar6) {
      *(int *)(param_3 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar8) < (uint)(iVar6 - iVar8)) {
        FUN_1447403be(param_3);
      }
      memset((void *)((longlong)iVar8 + *param_3),0,(longlong)(iVar6 - iVar8));
    }
    else {
      uVar7 = local_50;
      if (iVar6 < 0) goto LAB_143ae2be2;
      if (iVar6 < iVar8) {
        *(int *)(param_3 + 1) = iVar6;
        FUN_140b3f66e(param_3);
      }
    }
    uVar4 = iVar6 + 4;
    uVar7 = (ulonglong)uVar4;
    if ((int)uVar4 < 0) {
LAB_143ae2be2:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar7 & 0xffffffff);
    }
    if (*(int *)((longlong)param_3 + 0xc) < (int)uVar4) {
      FUN_144893a1c(param_3,uVar4);
    }
    iVar6 = 0;
    do {
      iVar8 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
        FUN_1447403be(param_3,iVar8);
      }
      lVar2 = *param_3;
      *(char *)(lVar2 + iVar8) =
           (char)((int)(0xff << ((byte)iVar6 & 0x1f) & uVar1) >> ((byte)iVar6 & 0x1f));
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0x20);
    uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae2bea FUN_143ae2bea body=176 status=ok
// SIG undefined FUN_143ae2bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143ae2bea(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  iVar1 = (int)param_2[1];
  if (3 < (ulonglong)(longlong)iVar1) {
    auVar5 = pmovzxbd(in_XMM0,*(undefined4 *)(*param_2 + -4 + (longlong)iVar1));
    auVar5 = pmulld(auVar5,_DAT_14ae378c0);
    auVar5 = phaddd(auVar5,auVar5);
    auVar5 = phaddd(auVar5,auVar5);
    uVar4 = auVar5._0_4_;
    if (0 < (int)uVar4) {
      FUN_1400ec3e6(param_3,uVar4);
      iVar2 = *(int *)(param_3 + 1);
      *(uint *)(param_3 + 1) = iVar2 + uVar4;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < uVar4) {
        FUN_1447403be(param_3);
      }
      uVar3 = FUN_140aa9920(*(undefined8 *)(param_1 + 8),*param_3,uVar4,*param_2,
                            (longlong)(iVar1 + -4),0,0);
      return uVar3;
    }
  }
                    /* WARNING: Read-only address (ram,0x00014ae378c0) is written */
  return 0;
}



// FUNCTION 143ae2c9e FUN_143ae2c9e body=1637 status=ok
// SIG undefined FUN_143ae2c9e(void)

void FUN_143ae2c9e(void **param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  longlong *plVar5;
  void *_Src;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  size_t _Size;
  longlong lVar13;
  undefined1 auStack_148 [32];
  void *local_128;
  ulonglong uStack_120;
  undefined4 local_118;
  void *local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 *local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  void *local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  int local_a0;
  int local_9c;
  undefined8 *local_98;
  ulonglong local_60;
  
  lVar12 = DAT_14cb44718;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(DAT_14cb44718 + 8) == 0) {
    uVar8 = 7;
  }
  else {
    uVar8 = 1;
    if (1 < *(uint *)(param_1 + 1)) {
      iVar11 = *(int *)(param_1 + 9);
      if ((longlong)iVar11 != 0) {
        local_a8 = (undefined8 *)0x0;
        pvVar4 = param_1[8];
        local_a0 = iVar11;
        FUN_1447a127e(&local_a8,iVar11,0);
        memcpy(local_a8,pvVar4,(longlong)iVar11);
        local_128 = (void *)0x0;
        uStack_120 = 0;
        iVar11 = *(int *)(param_1 + 0xb);
        if ((longlong)iVar11 != 0) {
          pvVar4 = param_1[10];
          lVar13 = 0;
          do {
            plVar5 = *(longlong **)((longlong)pvVar4 + lVar13);
            cVar7 = (**(code **)(**(longlong **)(lVar12 + 8) + 0x40))();
            if (cVar7 == '\0') {
              local_e8 = (undefined8 *)0x0;
              plStack_e0 = (longlong *)0x0;
            }
            else {
              local_e8 = param_1[3];
              plStack_e0 = param_1[4];
              if (plStack_e0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
                UNLOCK();
              }
            }
            local_b8 = local_a8;
            local_b0 = local_a0;
            cVar7 = (**(code **)(*plVar5 + 8))(plVar5,&local_b8,&local_128,&local_e8);
            plVar5 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_e0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            _Src = local_128;
            if (cVar7 == '\0') {
              uVar8 = 6;
              goto LAB_143ae2e8f;
            }
            iVar6 = (int)uStack_120;
            _Size = (size_t)(int)uStack_120;
            local_a0 = (int)uStack_120;
            if ((int)uStack_120 == 0 && local_9c == 0) {
              local_9c = 0;
            }
            else {
              FUN_1447a127e(&local_a8,uStack_120 & 0xffffffff);
              if (iVar6 != 0) {
                memcpy(local_a8,_Src,_Size);
              }
            }
            lVar13 = lVar13 + 0x10;
          } while ((longlong)iVar11 * 0x10 != lVar13);
        }
        plVar5 = *(longlong **)(lVar12 + 8);
        local_e8 = local_a8;
        plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,local_a0);
        uVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
LAB_143ae2e8f:
        if (local_128 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (param_1[6] == (longlong *)0x0 || *(int *)(param_1 + 7) == 0) goto LAB_143ae320e;
  cVar7 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
  if (cVar7 == '\0') goto LAB_143ae320e;
  local_e8 = (undefined8 *)0x0;
  uVar3 = *(uint *)(param_1 + 1);
  pvVar4 = *param_1;
  plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    plStack_e0 = (longlong *)(ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_e8,uVar3,0);
    memcpy(local_e8,pvVar4,(longlong)(int)uVar3 * 2);
  }
  puVar10 = local_e8;
  local_d8 = *(undefined4 *)(param_1 + 2);
  local_d0 = param_1[3];
  local_c8 = param_1[4];
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  local_128 = (void *)0x0;
  lVar12 = (longlong)(int)plStack_e0;
  uStack_120 = CONCAT44(uStack_120._4_4_,(int)plStack_e0);
  local_c0 = uVar8;
  if (lVar12 == 0) {
    uStack_120 = (ulonglong)plStack_e0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_128,(ulonglong)plStack_e0 & 0xffffffff,0);
    memcpy(local_128,puVar10,lVar12 * 2);
  }
  local_118 = local_d8;
  local_110 = local_d0;
  local_108 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  local_100 = local_c0;
  local_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  if (&local_128 != param_1) {
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    puVar10 = (undefined8 *)0x0;
    if (*(int *)(param_1 + 7) == 0) {
      iVar11 = 0;
LAB_143ae3284:
      local_a0 = 0;
      local_a8 = (undefined8 *)0x0;
      local_f8 = puVar10;
      local_f0 = iVar11;
    }
    else {
      plVar5 = param_1[6];
      iVar11 = 0;
      if (plVar5 == (longlong *)0x0) goto LAB_143ae3284;
      (**(code **)(*plVar5 + 0x40))(plVar5,&local_a8);
      iVar11 = local_a0;
      puVar10 = local_a8;
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      if (local_f0 != 0) {
        if (local_f8 == (undefined8 *)0x0) goto LAB_143ae3284;
        (**(code **)*local_f8)(local_f8,0);
        FUN_1446efa72(&local_f8,0,0,0x10);
        local_f0 = 0;
      }
      if (local_f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_f8 = puVar10;
      local_f0 = iVar11;
      if (local_a0 != 0) {
        if (local_a8 == (undefined8 *)0x0) goto LAB_143ae30a7;
        (**(code **)*local_a8)(local_a8,0);
        FUN_1446efa72(&local_a8,0,0,0x10);
        local_a0 = 0;
      }
    }
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ae30a7:
  local_a8 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x48,8);
  pvVar4 = local_128;
  *puVar9 = &PTR_LAB_14ae37ca0;
  puVar10 = puVar9 + 1;
  puVar9[1] = 0;
  lVar12 = (longlong)(int)uStack_120;
  *(int *)(puVar9 + 2) = (int)uStack_120;
  local_98 = puVar9;
  if (lVar12 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar10,uStack_120 & 0xffffffff,0);
    memcpy((void *)*puVar10,pvVar4,lVar12 * 2);
  }
  *(undefined4 *)(puVar9 + 3) = local_118;
  puVar9[4] = local_110;
  puVar9[5] = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar9 + 6) = local_100;
  puVar9[7] = local_f8;
  local_f8 = (undefined8 *)0x0;
  *(int *)(puVar9 + 8) = local_f0;
  local_f0 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    local_a8 = (undefined8 *)&LAB_143ae3360;
  }
  FUN_1407461b0(1,&local_a8);
  if (local_f0 == 0) {
LAB_143ae31b7:
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)(local_f8,0);
    FUN_1446efa72(&local_f8,0,0,0x10);
    local_f0 = 0;
    goto LAB_143ae31b7;
  }
  plVar5 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ae320e:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae330e FUN_143ae330e body=29 status=ok
// SIG undefined FUN_143ae330e(void)

void FUN_143ae330e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae332c FUN_143ae332c body=52 status=ok
// SIG undefined FUN_143ae332c(void)

undefined8 * FUN_143ae332c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae37c80;
  FUN_140b40248(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae3390 FUN_143ae3390 body=29 status=ok
// SIG undefined FUN_143ae3390(void)

void FUN_143ae3390(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae33ae FUN_143ae33ae body=165 status=ok
// SIG undefined FUN_143ae33ae(void)

undefined8 * FUN_143ae33ae(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14ae37ca0;
  plVar4 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143ae33ff;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_143ae33ff:
  plVar4 = (longlong *)param_1[5];
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae3454 FUN_143ae3454 body=1597 status=ok
// SIG undefined FUN_143ae3454(void)

void FUN_143ae3454(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  int iVar8;
  undefined1 *_Src;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  size_t sVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_168 [32];
  void *local_148;
  ulonglong uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  int local_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined8 *local_108;
  int local_100;
  void *local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  ulonglong local_60;
  
  lVar13 = DAT_14cb44718;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  plVar5 = *(longlong **)(DAT_14cb44718 + 8);
  iVar10 = 9;
  if ((plVar5 != (longlong *)0x0) && (iVar10 = 1, 1 < *(uint *)(param_1 + 1))) {
    iVar10 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1,&local_b8);
    if ((iVar10 == 0) && (iVar10 = 9, (int)uStack_b0 != 0)) {
      local_148 = (void *)0x0;
      uStack_140 = 0;
      iVar10 = *(int *)(param_1 + 9);
      if ((longlong)iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        lVar6 = param_1[8];
        lVar14 = 0;
        do {
          plVar5 = *(longlong **)(lVar6 + lVar14);
          cVar9 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x40))();
          if (cVar9 == '\0') {
            local_f8 = (void *)0x0;
            plStack_f0 = (longlong *)0x0;
          }
          else {
            local_f8 = (void *)param_1[3];
            plStack_f0 = (longlong *)param_1[4];
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
              UNLOCK();
            }
          }
          local_a8 = local_b8;
          local_a0 = (int)uStack_b0;
          cVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_a8,&local_148,&local_f8);
          plVar5 = plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_f0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_f0)(plStack_f0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          pvVar7 = local_148;
          if (cVar9 == '\0') {
            iVar10 = 7;
            goto LAB_143ae36ad;
          }
          iVar8 = (int)uStack_140;
          sVar12 = (size_t)(int)uStack_140;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_140);
          if ((int)uStack_140 == 0 && uStack_b0._4_4_ == 0) {
            uStack_b0 = uStack_140 & 0xffffffff;
          }
          else {
            FUN_1447a127e(&local_b8,uStack_140 & 0xffffffff);
            if (iVar8 != 0) {
              memcpy(local_b8,pvVar7,sVar12);
            }
          }
          lVar14 = lVar14 + 0x10;
        } while ((longlong)iVar10 * 0x10 != lVar14);
        iVar10 = 0;
LAB_143ae36ad:
        if (local_148 != (void *)0x0) {
          FUN_1400020a8(local_148);
        }
      }
    }
  }
  if ((longlong *)param_1[6] == (longlong *)0x0 || *(int *)(param_1 + 7) == 0) goto LAB_143ae34f4;
  cVar9 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
  if (cVar9 == '\0') goto LAB_143ae34f4;
  local_f8 = (void *)0x0;
  uVar4 = *(uint *)(param_1 + 1);
  pvVar7 = (void *)*param_1;
  plStack_f0 = (longlong *)CONCAT44(plStack_f0._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    plStack_f0 = (longlong *)(ulonglong)uVar4;
  }
  else {
    FUN_1446dd670(&local_f8,uVar4,0);
    memcpy(local_f8,pvVar7,(longlong)(int)uVar4 * 2);
  }
  _Src = local_b8;
  local_e8 = *(undefined4 *)(param_1 + 2);
  local_e0 = param_1[3];
  local_d8 = (longlong *)param_1[4];
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  local_c8 = (void *)0x0;
  sVar12 = (size_t)(int)uStack_b0;
  local_c0 = (int)uStack_b0;
  local_d0 = iVar10;
  if (sVar12 == 0) {
    local_bc = 0;
  }
  else {
    FUN_1447a127e(&local_c8,uStack_b0 & 0xffffffff,0);
    memcpy(local_c8,_Src,sVar12);
  }
  pvVar7 = local_f8;
  local_148 = (void *)0x0;
  lVar13 = (longlong)(int)plStack_f0;
  uStack_140 = CONCAT44(uStack_140._4_4_,(int)plStack_f0);
  if (lVar13 == 0) {
    uStack_140 = (ulonglong)plStack_f0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_148,(ulonglong)plStack_f0 & 0xffffffff,0);
    memcpy(local_148,pvVar7,lVar13 * 2);
  }
  pvVar7 = local_c8;
  local_138 = local_e8;
  local_130 = local_e0;
  local_128 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  local_120 = local_d0;
  local_118 = (void *)0x0;
  sVar12 = (size_t)local_c0;
  local_110 = local_c0;
  if (sVar12 == 0) {
    local_10c = 0;
  }
  else {
    FUN_1447a127e(&local_118,local_c0,0);
    memcpy(local_118,pvVar7,sVar12);
  }
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  FUN_14647d430(&local_108,param_1 + 6);
  local_a8 = (undefined1 *)0x0;
  puVar11 = (undefined8 *)FUN_14001cc68(0x58,8);
  pvVar7 = local_148;
  *puVar11 = &PTR_LAB_14ae37ce0;
  puVar1 = puVar11 + 1;
  puVar11[1] = 0;
  lVar13 = (longlong)(int)uStack_140;
  *(int *)(puVar11 + 2) = (int)uStack_140;
  local_98 = puVar11;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,uStack_140 & 0xffffffff,0);
    memcpy((void *)*puVar1,pvVar7,lVar13 * 2);
  }
  pvVar7 = local_118;
  *(undefined4 *)(puVar11 + 3) = local_138;
  puVar11[4] = local_130;
  puVar11[5] = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
  }
  *(int *)(puVar11 + 6) = local_120;
  puVar11[7] = 0;
  sVar12 = (size_t)local_110;
  *(int *)(puVar11 + 8) = local_110;
  if (sVar12 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x44) = 0;
  }
  else {
    FUN_1447a127e(puVar11 + 7,local_110,0);
    memcpy((void *)puVar11[7],pvVar7,sVar12);
  }
  puVar11[9] = local_108;
  local_108 = (undefined8 *)0x0;
  *(int *)(puVar11 + 10) = local_100;
  local_100 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    local_a8 = &LAB_143ae3aee;
  }
  FUN_1407461b0(1,&local_a8);
  if (local_100 == 0) {
LAB_143ae39a1:
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_108 != (undefined8 *)0x0) {
    (**(code **)*local_108)(local_108,0);
    FUN_1446efa72(&local_108,0,0,0x10);
    local_100 = 0;
    goto LAB_143ae39a1;
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_128 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143ae34f4:
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae3a9c FUN_143ae3a9c body=29 status=ok
// SIG undefined FUN_143ae3a9c(void)

void FUN_143ae3a9c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae3aba FUN_143ae3aba body=52 status=ok
// SIG undefined FUN_143ae3aba(void)

undefined8 * FUN_143ae3aba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae37cc0;
  FUN_141428114(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae3b1e FUN_143ae3b1e body=29 status=ok
// SIG undefined FUN_143ae3b1e(void)

void FUN_143ae3b1e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae3b3c FUN_143ae3b3c body=179 status=ok
// SIG undefined FUN_143ae3b3c(void)

undefined8 * FUN_143ae3b3c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14ae37ce0;
  plVar4 = param_1 + 9;
  if (*(int *)(param_1 + 10) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143ae3b8d;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 10) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_143ae3b8d:
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae3bf0 FUN_143ae3bf0 body=517 status=ok
// SIG undefined FUN_143ae3bf0(void)

void FUN_143ae3bf0(undefined8 *param_1)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [48];
  undefined8 *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = *(longlong **)(DAT_14cb44718 + 8);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 1;
    if (1 < *(uint *)(param_1 + 1)) {
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
    }
  }
  if ((longlong *)param_1[6] == (longlong *)0x0 || *(int *)(param_1 + 7) == 0) goto LAB_143ae3c5f;
  cVar2 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
  if (cVar2 == '\0') goto LAB_143ae3c5f;
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(param_1 + 1);
  lVar5 = (longlong)local_a0;
  _Src = (void *)*param_1;
  if (lVar5 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,_Src,lVar5 * 2);
  }
  local_98 = *(undefined4 *)(param_1 + 2);
  local_90 = param_1[3];
  local_88 = param_1[4];
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  local_80 = uVar3;
  FUN_14821623c(local_e8);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_148216304(&local_b8,param_1 + 6);
  local_78[0] = (undefined1 *)0x0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *puVar4 = &PTR_LAB_14ae37d20;
  local_68 = puVar4;
  FUN_14821623c(puVar4 + 1,local_e8);
  puVar4[7] = local_b8;
  local_b8 = (undefined8 *)0x0;
  *(int *)(puVar4 + 8) = local_b0;
  local_b0 = 0;
  if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = &LAB_143ae3e52;
  }
  FUN_1407461b0(1,local_78);
  if (local_b0 == 0) {
LAB_143ae3dcc:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    local_b0 = 0;
    goto LAB_143ae3dcc;
  }
  FUN_1482162ba(local_e8);
  FUN_1482162ba(&local_a8);
LAB_143ae3c5f:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae3e00 FUN_143ae3e00 body=29 status=ok
// SIG undefined FUN_143ae3e00(void)

void FUN_143ae3e00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae3e1e FUN_143ae3e1e body=52 status=ok
// SIG undefined FUN_143ae3e1e(void)

undefined8 * FUN_143ae3e1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae37d00;
  FUN_1482160bc(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae3e82 FUN_143ae3e82 body=29 status=ok
// SIG undefined FUN_143ae3e82(void)

void FUN_143ae3e82(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae3ea0 FUN_143ae3ea0 body=127 status=ok
// SIG undefined FUN_143ae3ea0(void)

undefined8 * FUN_143ae3ea0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14ae37d20;
  plVar1 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ae3ef7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143ae3ef7:
  FUN_1482162ba(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae3f20 FUN_143ae3f20 body=588 status=ok
// SIG undefined FUN_143ae3f20(void)

void FUN_143ae3f20(undefined4 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [48];
  undefined8 *local_b8;
  int local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  uVar4 = 0;
  FUN_1447a1747(0,0);
  uStack_70 = uStack_70 & 0xffffffff00000000;
  plVar1 = *(longlong **)(DAT_14cb44718 + 8);
  if (plVar1 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,&local_78);
  }
  if (*(longlong **)(param_1 + 0xc) == (longlong *)0x0 || param_1[0xe] == 0) goto LAB_143ae3fa4;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0xc) + 0x30))();
  uVar3 = uStack_70;
  lVar2 = local_78;
  if (cVar5 == '\0') goto LAB_143ae3fa4;
  local_a8[0] = *param_1;
  local_a0 = *(undefined8 *)(param_1 + 2);
  local_98 = *(longlong *)(param_1 + 4);
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  local_88 = 0;
  local_80 = (int)uStack_70;
  local_90 = uVar4;
  if ((int)uStack_70 == 0) {
    local_7c = 0;
  }
  else {
    FUN_140b856de(&local_88,uStack_70 & 0xffffffff,0);
    FUN_140b8566a(local_88,lVar2,uVar3 & 0xffffffff);
  }
  FUN_14647d4ae(local_e8,local_a8);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_14647d57c(&local_b8,param_1 + 0xc);
  local_68[0] = (undefined1 *)0x0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x48,8);
  *puVar6 = &PTR_LAB_14ae37d60;
  local_58 = puVar6;
  FUN_14647d4ae(puVar6 + 1,local_e8);
  puVar6[7] = local_b8;
  local_b8 = (undefined8 *)0x0;
  *(int *)(puVar6 + 8) = local_b0;
  local_b0 = 0;
  if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68[0] = &LAB_143ae41ca;
  }
  FUN_1407461b0(1,local_68);
  if (local_b0 == 0) {
LAB_143ae4143:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    local_b0 = 0;
    goto LAB_143ae4143;
  }
  FUN_14647d528(local_e8);
  FUN_14647d528(local_a8);
LAB_143ae3fa4:
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae4178 FUN_143ae4178 body=29 status=ok
// SIG undefined FUN_143ae4178(void)

void FUN_143ae4178(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae4196 FUN_143ae4196 body=52 status=ok
// SIG undefined FUN_143ae4196(void)

undefined8 * FUN_143ae4196(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae37d40;
  FUN_145afc73e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae41fa FUN_143ae41fa body=29 status=ok
// SIG undefined FUN_143ae41fa(void)

void FUN_143ae41fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ae4218 FUN_143ae4218 body=127 status=ok
// SIG undefined FUN_143ae4218(void)

undefined8 * FUN_143ae4218(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14ae37d60;
  plVar1 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ae426f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143ae426f:
  FUN_14647d528(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ae4297 FUN_143ae4297 body=215 status=ok
// SIG undefined FUN_143ae4297(void)

void FUN_143ae4297(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30._0_4_ = 3;
  local_38 = 0;
  FUN_14078dbce(&DAT_14cb446e0,L"GbxSave.Windows.NumSaveFileCopyAttempts",&local_30,
                L"The number of times to attempt to ReplaceFile for a savegame before giving up");
  atexit(FUN_143ae1fa4);
  local_30 = CONCAT44(local_30._4_4_,0x3f000000);
  local_38 = 0;
  FUN_140a6b41e(&DAT_14cb446f8,L"GbxSave.Windows.SecondsBetweenSaveFileCopyAttempts",&local_30,
                L"The amount of seconds to sleep between successive ReplaceFile attempts when one fails"
               );
  atexit(FUN_143ae1fe9);
  local_30 = 0x800000014ae37b60;
  local_1c = 0xd;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14647d2b8(&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae4370 FUN_143ae4370 body=55 status=ok
// SIG undefined FUN_143ae4370(void)

void FUN_143ae4370(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44740 == 0) {
    uVar1 = FUN_1412da4f7();
    DAT_14cb44740 = FUN_14171c317(FUN_14647d628,uVar1,L"ECommonInputMode");
  }
  return;
}



// FUNCTION 143ae43a7 FUN_143ae43a7 body=55 status=ok
// SIG undefined FUN_143ae43a7(void)

void FUN_143ae43a7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44758 == 0) {
    uVar1 = FUN_1412da4f7();
    DAT_14cb44758 = FUN_14171c317(FUN_14183ca28,uVar1,L"ECommonInputType");
  }
  return;
}



// FUNCTION 143ae43de FUN_143ae43de body=55 status=ok
// SIG undefined FUN_143ae43de(void)

void FUN_143ae43de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44770 == 0) {
    uVar1 = FUN_1412da4f7();
    DAT_14cb44770 = FUN_14171c317(FUN_14647d659,uVar1,L"ECommonInputEventFlowBehavior");
  }
  return;
}



// FUNCTION 143ae4416 FUN_143ae4416 body=538 status=ok
// SIG undefined FUN_143ae4416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae4416(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  DAT_14cb44898 = (undefined8 *)0x0;
  _DAT_14cb448a0 = 1;
  uVar15 = 0;
  FUN_1446f84a2(&DAT_14cb44898,0);
  *DAT_14cb44898 = DAT_14cb449b0;
  plVar6 = (longlong *)FUN_140f7b050();
  iVar2 = (int)plVar6[5];
  if (iVar2 == 0) {
    uVar16 = 1;
    iVar13 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = (uint *)plVar6[4];
    if ((uint *)plVar6[4] == (uint *)0x0) {
      puVar7 = (uint *)(plVar6 + 2);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar13 = 0;
      do {
        if (uVar16 == uVar15) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 != iVar2) {
    uVar14 = 0xffffffff;
    iVar4 = iVar2;
    do {
      uVar1 = _DAT_14cb448a0;
      lVar12 = *plVar6;
      lVar11 = (longlong)iVar8 * 0xa0;
      if (((*(char *)(lVar12 + 0x21 + lVar11) == '\0') &&
          (*(char *)(lVar12 + lVar11 + 0x60) == '\0')) &&
         (*(char *)(lVar12 + lVar11 + 0x5f) == '\x01')) {
        uVar3 = *(undefined8 *)(lVar12 + lVar11);
        lVar12 = (longlong)DAT_14cb448a0;
        uVar5 = DAT_14cb448a0 + 1;
        _DAT_14cb448a0 = CONCAT44(DAT_14cb448a4,uVar5);
        if (DAT_14cb448a4 < uVar5) {
          FUN_1446f84a2(&DAT_14cb44898,uVar1 & 0xffffffff);
        }
        DAT_14cb44898[lVar12] = uVar3;
        iVar4 = (int)plVar6[5];
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar7 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar7 = (uint *)(plVar6 + 2);
      }
      iVar8 = (int)uVar15;
      lVar12 = (longlong)iVar8;
      uVar5 = puVar7[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar8 < iVar9) {
          lVar11 = 0;
          do {
            uVar5 = puVar7[lVar12 + lVar11 + 1];
            if (uVar5 != 0) {
              uVar15 = (ulonglong)(iVar8 + (int)lVar11 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143ae45e2;
            }
            iVar13 = iVar13 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar10 - lVar12 != lVar11);
          uVar14 = 0xffffffff;
          iVar8 = iVar10;
        }
        uVar15 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar4;
      }
      else {
LAB_143ae45e2:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar2);
  }
  return;
}



// FUNCTION 143ae4652 FUN_143ae4652 body=55 status=ok
// SIG undefined FUN_143ae4652(void)

void FUN_143ae4652(void)

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
                    /* WARNING: Could not recover jumptable at 0x000143ae4685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ae468a FUN_143ae468a body=651 status=ok
// SIG undefined FUN_143ae468a(void)

undefined8 FUN_143ae468a(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  undefined7 uVar10;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar9 = CONCAT71(uVar10,2);
  if (*(char *)(param_3 + 100) == '\0') {
    uVar9 = CONCAT71(uVar10,*(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x100));
  }
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if ((cVar2 == '\0') && (*(char *)((longlong)param_2 + 0x4c4) == '\0')) {
    if (DAT_14c86a9f8 == '\x01') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar1 == 2) goto LAB_143ae486d;
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_143ae486d;
      }
      local_40 = "CommonInput";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar6 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar3);
    }
    else {
LAB_143ae486d:
      local_40 = "CommonInput";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
    }
    lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
    uVar8 = 0;
    if (((char)uVar9 != '\x01') || (*(char *)(lVar7 + 0xd8) == '\0')) goto LAB_143ae47ed;
  }
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0xe0);
  if (iVar1 == *(int *)(param_3 + 0xc)) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    else if ((0.0001 < ABS(*(float *)(param_3 + 0x30))) ||
            (0.0001 < ABS(*(float *)(param_3 + 0x34)))) {
      uVar8 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      if (*(char *)(param_1 + 0x29 + (uVar9 & 0xff)) != '\0') goto LAB_143ae47ed;
      FUN_1409d285e(param_1,uVar9 & 0xffffffff);
    }
  }
  uVar8 = 0;
LAB_143ae47ed:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae4916 FUN_143ae4916 body=594 status=ok
// SIG undefined FUN_143ae4916(void)

undefined8 FUN_143ae4916(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  undefined7 uVar10;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar9 = CONCAT71(uVar10,2);
  if (*(char *)(param_3 + 100) == '\0') {
    uVar9 = CONCAT71(uVar10,*(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x100));
  }
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if ((cVar2 == '\0') && (*(char *)((longlong)param_2 + 0x4c4) == '\0')) {
    if (DAT_14c86a9f8 == '\x01') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar1 == 2) goto LAB_143ae4ac0;
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_143ae4ac0;
      }
      local_40 = "CommonInput";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar6 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar3);
    }
    else {
LAB_143ae4ac0:
      local_40 = "CommonInput";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
    }
    lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
    uVar8 = 0;
    if (((char)uVar9 != '\x01') || (*(char *)(lVar7 + 0xd8) == '\0')) goto LAB_143ae4a40;
  }
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0xe0);
  if (iVar1 == *(int *)(param_3 + 0xc)) {
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    if (*(char *)(param_1 + 0x29 + (uVar9 & 0xff)) != '\0') goto LAB_143ae4a40;
    FUN_1409d285e(param_1,uVar9 & 0xffffffff);
  }
  uVar8 = 0;
LAB_143ae4a40:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae4b6a FUN_143ae4b6a body=594 status=ok
// SIG undefined FUN_143ae4b6a(void)

undefined8 FUN_143ae4b6a(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  undefined7 uVar10;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar9 = CONCAT71(uVar10,2);
  if (*(char *)(param_3 + 100) == '\0') {
    uVar9 = CONCAT71(uVar10,*(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x100));
  }
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if ((cVar2 == '\0') && (*(char *)((longlong)param_2 + 0x4c4) == '\0')) {
    if (DAT_14c86a9f8 == '\x01') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar1 == 2) goto LAB_143ae4d14;
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_143ae4d14;
      }
      local_40 = "CommonInput";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar6 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar3);
    }
    else {
LAB_143ae4d14:
      local_40 = "CommonInput";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
    }
    lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
    uVar8 = 0;
    if (((char)uVar9 != '\x01') || (*(char *)(lVar7 + 0xd8) == '\0')) goto LAB_143ae4c94;
  }
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0xe0);
  if (iVar1 == *(int *)(param_3 + 0xc)) {
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    if (*(char *)(param_1 + 0x29 + (uVar9 & 0xff)) != '\0') goto LAB_143ae4c94;
    FUN_1409d285e(param_1,uVar9 & 0xffffffff);
  }
  uVar8 = 0;
LAB_143ae4c94:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae4dbe FUN_143ae4dbe body=445 status=ok
// SIG undefined FUN_143ae4dbe(void)

void FUN_143ae4dbe(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(char *)(param_1 + 0x90) == (char)param_2) || (cVar5 = FUN_143ae52b4(), cVar5 == '\0')) ||
     (FUN_145762764(param_1,param_2), *(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)))
  goto LAB_143ae4df3;
  *(char *)(param_1 + 0x90) = (char)param_2;
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    param_2 = (uint)*(byte *)(param_1 + 0xf0);
  }
  cVar5 = (char)param_2;
  if (cVar5 == *(char *)(param_1 + 0x91)) goto LAB_143ae4df3;
  *(char *)(param_1 + 0x91) = cVar5;
  lVar4 = DAT_14c98e618;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    if (*(int *)(DAT_14c98e618 + 0x318) < 1) {
      plVar9 = (longlong *)0x0;
      lVar8 = 0;
    }
    else {
      lVar8 = **(longlong **)(DAT_14c98e618 + 0x310);
      plVar9 = (longlong *)(*(longlong **)(DAT_14c98e618 + 0x310))[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
    }
    (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_58);
    bVar10 = local_58 == lVar8;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
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
    cVar5 = *(char *)(param_1 + 0x91);
  }
  if (cVar5 == '\x01') {
    uVar7 = DAT_14cb44980;
    if (bVar10) {
LAB_143ae4f36:
      FUN_140d47b6c(lVar4,uVar7);
    }
LAB_143ae4f3b:
    *(undefined1 *)(lVar4 + 0x4c3) = 0;
  }
  else {
    if (cVar5 != '\x02') {
      if (bVar10) {
        uVar7 = 1;
        goto LAB_143ae4f36;
      }
      goto LAB_143ae4f3b;
    }
    *(undefined1 *)(lVar4 + 0x4c3) = 1;
    if ((plVar3 == (longlong *)0x0) || (plVar3[0xf] == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1417c7930();
    }
    FUN_145d75160(lVar4,uVar6,0);
  }
  FUN_140dc023e(param_1);
LAB_143ae4df3:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae4f7c FUN_143ae4f7c body=7 status=ok
// SIG undefined FUN_143ae4f7c(void)

undefined1 FUN_143ae4f7c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



// FUNCTION 143ae4f83 FUN_143ae4f83 body=49 status=ok
// SIG undefined FUN_143ae4f83(void)

void FUN_143ae4f83(void)

{
  FUN_144760e21(DAT_14cb44958,DAT_14cb44960);
  if (DAT_14cb44958 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ae4fb4 FUN_143ae4fb4 body=69 status=ok
// SIG undefined FUN_143ae4fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae4fb4(void)

{
  _DAT_14cb44970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae4ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44978,1);
  return;
}



// FUNCTION 143ae4ff9 FUN_143ae4ff9 body=69 status=ok
// SIG undefined FUN_143ae4ff9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae4ff9(void)

{
  _DAT_14cb44988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae503b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44990,1);
  return;
}



// FUNCTION 143ae503e FUN_143ae503e body=628 status=ok
// SIG undefined FUN_143ae503e(void)

void FUN_143ae503e(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  undefined1 *puVar6;
  uint *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if ((param_3 == '\0') || (cVar5 = FUN_143ae52b4(param_1,0), cVar5 == '\0')) {
    FUN_1482198ea(param_1 + 0xa0);
  }
  else {
    puVar6 = (undefined1 *)FUN_148219368(param_1 + 0xa0);
    *puVar6 = 0;
  }
  iVar4 = *(int *)(param_1 + 200);
  if (iVar4 == 0) {
    uVar15 = 1;
    uVar9 = 0;
    iVar12 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0xb0);
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar10 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar10 = iVar4 + -1;
      }
      uVar9 = 0;
      uVar15 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar15 = uVar9;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar9) goto LAB_143ae5162;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar9 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar15 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar10 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar10) {
      iVar10 = iVar4;
    }
  }
  if (iVar10 == iVar4) {
LAB_143ae5162:
    cVar5 = *(char *)(param_1 + 0xf1);
    if (cVar5 == '\x01') {
      *(undefined1 *)(param_1 + 0xf1) = 0;
      cVar5 = '\0';
    }
  }
  else {
    puVar7 = (uint *)(param_1 + 0xb0);
    if (*(uint **)(param_1 + 0xc0) != (uint *)0x0) {
      puVar7 = *(uint **)(param_1 + 0xc0);
    }
    iVar17 = iVar4 + 0x1e;
    if (-1 < iVar4 + -1) {
      iVar17 = iVar4 + -1;
    }
    iVar17 = iVar17 >> 5;
    uVar16 = 0xffffffff;
    uVar13 = 0xffffffff;
    do {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)iVar10 * 0x14);
      uVar11 = (uint)bVar2;
      if ((int)(uint)bVar2 < (int)uVar16) {
        uVar11 = uVar16;
      }
      uVar16 = uVar11;
      uVar13 = ~(uint)uVar15 & uVar13;
      iVar10 = (int)uVar9;
      lVar18 = (longlong)iVar10;
      uVar11 = puVar7[lVar18] & uVar13;
      if (uVar11 == 0) {
        iVar14 = iVar17;
        if (iVar17 < iVar10) {
          iVar14 = iVar10;
        }
        if (iVar17 <= iVar10) break;
        lVar19 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar11 = puVar7[lVar18 + lVar19 + 1];
          if (uVar11 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar14 - lVar18 == lVar19) goto LAB_143ae524a;
        }
        uVar9 = (ulonglong)(iVar10 + (int)lVar19 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar15 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar10 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar4);
LAB_143ae524a:
    *(char *)(param_1 + 0xf0) = (char)uVar16;
    *(undefined1 *)(param_1 + 0xf1) = 1;
    cVar5 = '\x01';
  }
  pcVar8 = (char *)(param_1 + 0x90);
  if (cVar5 != '\0') {
    pcVar8 = (char *)(param_1 + 0xf0);
  }
  cVar5 = *pcVar8;
  cVar3 = *(char *)(param_1 + 0x91);
  *(char *)(param_1 + 0x91) = cVar5;
  if (cVar5 != cVar3) {
    FUN_140dc023e(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae52b4 FUN_143ae52b4 body=343 status=ok
// SIG undefined FUN_143ae52b4(void)

undefined1 FUN_143ae52b4(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_29;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_140902dbe();
  if ((char)param_2 == '\x02') {
    local_29 = *(undefined1 *)(lVar1 + 0x42);
  }
  else if ((param_2 & 0xff) == 1) {
    local_29 = *(undefined1 *)(lVar1 + 0x43);
  }
  else if ((param_2 & 0xff) == 0) {
    local_29 = *(undefined1 *)(lVar1 + 0x41);
  }
  else {
    local_29 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) goto LAB_143ae5332;
  }
  lVar1 = 0;
LAB_143ae5332:
  FUN_1482199c6(lVar1,param_2,&local_29);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae540c FUN_143ae540c body=15 status=ok
// SIG undefined FUN_143ae540c(void)

void FUN_143ae540c(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x100) != param_2) {
    *(char *)(param_1 + 0x100) = param_2;
  }
  return;
}



// FUNCTION 143ae541b FUN_143ae541b body=49 status=ok
// SIG undefined FUN_143ae541b(void)

void FUN_143ae541b(void)

{
  FUN_144a65a1e(DAT_14cb44998,DAT_14cb449a0);
  if (DAT_14cb44998 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ae54e0 FUN_143ae54e0 body=524 status=ok
// SIG undefined FUN_143ae54e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae54e0(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14098d3d2(FUN_143ae4370,L"/Script/CommonInput",L"ECommonInputMode",&DAT_14cb44738);
  FUN_14098d3d2(FUN_143ae43a7,L"/Script/CommonInput",L"ECommonInputType",&DAT_14cb44750);
  ppuStack_60 = &PTR_FUN_14ae38b40;
  local_68 = 0;
  uStack_58 = 1;
  FUN_14282b410(L"/Script/CommonInput",&PTR_FUN_14ae38b60,2,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/CommonInput",&PTR_FUN_14ae3ae10,4,&PTR_FUN_14ae3ad40);
  FUN_1446f470e(&DAT_14cb44890,&DAT_14ae3aeb0,1);
  FUN_1446f470e(&DAT_14cb449b0,L"Generic",1);
  local_48 = 0x800000014ae3af18;
  local_34 = 0xb;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14647dd24(&local_48);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonInput",&PTR_FUN_14ae3b9c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonInput",&PTR_FUN_14ae3cb90,1,0);
  DAT_14cb44958 = 0;
  _DAT_14cb44960 = 0;
  _DAT_14cb44968 = 2;
  atexit(FUN_143ae4f83);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb44970,L"CommonInput.ShowKeys",&DAT_14c762a50,
                L"Should we show the keys for the current input device.");
  atexit(FUN_143ae4fb4);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb44988,L"CommonInput.EnableGamepadPlatformCursor",&DAT_14cb44980,
                L"Should the cursor be allowed to be used during gamepad input");
  atexit(FUN_143ae4ff9);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae56f0 FUN_143ae56f0 body=59 status=ok
// SIG undefined FUN_143ae56f0(void)

void FUN_143ae56f0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb44a20;
  if (DAT_14cb44a20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb44a20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ae5720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ae5748 FUN_143ae5748 body=222 status=ok
// SIG undefined FUN_143ae5748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae5748(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x800000014ae3d8d0;
  local_24 = 0xe;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14647e38a(&local_38);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/WidgetCarousel",0,0,&PTR_FUN_14ae3dce0);
  FUN_1446f470e(&DAT_14cb44a08,L"FWidgetCarouselNavigationButtonStyle",1);
  FUN_1446f470e(&DAT_14cb44a10,L"FWidgetCarouselNavigationBarStyle",1);
  _DAT_14cb44a18 = 0;
  DAT_14cb44a20 = 0;
  atexit(FUN_143ae56f0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae583c FUN_143ae583c body=479 status=ok
// SIG undefined FUN_143ae583c(void)

longlong * FUN_143ae583c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1[0x62] == 0) {
LAB_143ae5853:
    lVar4 = FUN_145877a06(param_1);
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((((lVar5 != 0) && (lVar4 != 0)) && (*(longlong *)(lVar5 + 0x1f0) != 0)) &&
       (0 < (int)param_1[0x61])) {
      lVar5 = *(longlong *)param_1[0x60];
      if (lVar5 != 0) {
        plVar6 = (longlong *)
                 FUN_143af2270(lVar5,((longlong *)param_1[0x60])[1],
                               L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                               ,1);
        if (plVar6 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar4);
          if (*(char *)(lVar4 + 0x19) == '\x01') {
            plVar1 = (longlong *)plVar6[3];
            *param_2 = (longlong)plVar1;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            uVar3 = (undefined4)plVar6[4];
          }
          else {
            plVar1 = (longlong *)plVar6[1];
            *param_2 = (longlong)plVar1;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            uVar3 = (undefined4)plVar6[2];
          }
          goto LAB_143ae58ec;
        }
      }
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
    plVar6 = DAT_14c844840;
    *param_2 = (longlong)DAT_14c844840;
    if (plVar6 != (longlong *)0x0) {
      if (*(code **)(*plVar6 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    cVar2 = FUN_14821c4a8();
    if (cVar2 == '\0') goto LAB_143ae5853;
    lVar4 = param_1[0x62];
    plVar6 = *(longlong **)(lVar4 + 0x30);
    *param_2 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    uVar3 = *(undefined4 *)(lVar4 + 0x38);
LAB_143ae58ec:
    *(undefined4 *)(param_2 + 1) = uVar3;
  }
  return param_2;
}



// FUNCTION 143ae5a1c FUN_143ae5a1c body=729 status=ok
// SIG undefined FUN_143ae5a1c(void)

void FUN_143ae5a1c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0xffffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_143ae5bed;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ae5bed:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ae5cf6(param_1,local_2c);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae5cf6 FUN_143ae5cf6 body=401 status=ok
// SIG undefined FUN_143ae5cf6(void)

void FUN_143ae5cf6(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143ae63ec();
  FUN_143af5e68(&local_38,param_2);
  if (local_38 == 0) goto LAB_143ae5d2f;
  plVar2 = param_1 + 0x60;
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (*(int *)((longlong)param_1 + 0x30c) < 0) {
    FUN_148249d46(plVar2,0);
  }
  if (((*(int *)(local_38 + 0xd4) == 0) || (uVar3 = *(uint *)(local_38 + 0xd0), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) {
LAB_143ae5e29:
    FUN_14821c4a8();
LAB_143ae5e2e:
    iVar4 = (int)param_1[0x61];
    *(uint *)(param_1 + 0x61) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x30c) < iVar4 + 1U) {
      FUN_148249da6(plVar2,iVar4);
    }
    lVar5 = *plVar2;
    lVar6 = *(longlong *)(local_38 + 0xc0);
    *(longlong *)(lVar5 + (longlong)iVar4 * 0x10) = lVar6;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined8 *)(lVar5 + (longlong)iVar4 * 0x10 + 8) = *(undefined8 *)(local_38 + 200);
  }
  else {
    plVar8 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != *(int *)(local_38 + 0xd4))) ||
       ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_143ae5e29;
    lVar5 = *plVar8;
    cVar7 = FUN_14821c4a8();
    if ((cVar7 == '\0') || (lVar5 == 0)) goto LAB_143ae5e2e;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar5);
    }
    param_1[0x62] = lVar5;
  }
  (**(code **)(*param_1 + 800))(param_1);
LAB_143ae5d2f:
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae5e9c FUN_143ae5e9c body=1117 status=ok
// SIG undefined FUN_143ae5e9c(void)

undefined8 * FUN_143ae5e9c(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
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
  undefined **ppuVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined ***pppuVar21;
  undefined **ppuVar22;
  longlong lVar23;
  undefined ***pppuVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_130;
  undefined **local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  undefined8 auStack_e8 [4];
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  byte local_94;
  undefined8 local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_78 = 0;
  uStack_70 = 0;
  if ((longlong)(int)param_3[1] == 0) {
    local_94 = 4;
  }
  else {
    plVar27 = (longlong *)*param_3;
    plVar26 = plVar27 + (longlong)(int)param_3[1] * 2;
    local_130 = param_1;
    do {
      if (*plVar27 == 0) {
LAB_143ae5fac:
        lVar28 = FUN_141319416();
        param_1 = local_130;
        *local_130 = &PTR_FUN_149ed05f0;
        uVar3 = *(undefined4 *)(lVar28 + 0xc);
        uVar4 = *(undefined4 *)(lVar28 + 0x10);
        uVar5 = *(undefined4 *)(lVar28 + 0x14);
        uVar6 = *(undefined4 *)(lVar28 + 0x18);
        uVar7 = *(undefined4 *)(lVar28 + 0x1c);
        uVar8 = *(undefined4 *)(lVar28 + 0x20);
        uVar9 = *(undefined4 *)(lVar28 + 0x24);
        uVar10 = *(undefined4 *)(lVar28 + 0x28);
        uVar11 = *(undefined4 *)(lVar28 + 0x2c);
        uVar12 = *(undefined4 *)(lVar28 + 0x30);
        uVar13 = *(undefined4 *)(lVar28 + 0x34);
        *(undefined4 *)(local_130 + 1) = *(undefined4 *)(lVar28 + 8);
        *(undefined4 *)((longlong)local_130 + 0xc) = uVar3;
        *(undefined4 *)(local_130 + 2) = uVar4;
        *(undefined4 *)((longlong)local_130 + 0x14) = uVar5;
        *(undefined4 *)(local_130 + 3) = uVar6;
        *(undefined4 *)((longlong)local_130 + 0x1c) = uVar7;
        *(undefined4 *)(local_130 + 4) = uVar8;
        *(undefined4 *)((longlong)local_130 + 0x24) = uVar9;
        *(undefined4 *)(local_130 + 5) = uVar10;
        *(undefined4 *)((longlong)local_130 + 0x2c) = uVar11;
        *(undefined4 *)(local_130 + 6) = uVar12;
        *(undefined4 *)((longlong)local_130 + 0x34) = uVar13;
        lVar23 = *(longlong *)(lVar28 + 0x38);
        local_130[7] = lVar23;
        if ((lVar23 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        puVar19 = (undefined8 *)(lVar28 + 0x40);
        puVar25 = param_1 + 8;
        for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar25 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar25 = puVar25 + 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)(lVar28 + 0x94);
        *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(lVar28 + 0x90);
        param_1[0x13] = *(undefined8 *)(lVar28 + 0x98);
        lVar23 = *(longlong *)(lVar28 + 0xa0);
        param_1[0x14] = lVar23;
        if (lVar23 != 0) {
          LOCK();
          *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
          UNLOCK();
        }
        param_1[0x15] = *(undefined8 *)(lVar28 + 0xa8);
        goto LAB_143ae605a;
      }
      plVar18 = (longlong *)
                FUN_143af2270(*plVar27,plVar27[1],
                              L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                              ,1);
      if (plVar18 == (longlong *)0x0) goto LAB_143ae5fac;
      puVar19 = (undefined8 *)(**(code **)(*plVar18 + 0x18))(plVar18,param_2);
      uVar15 = uStack_70;
      uVar20 = *puVar19;
      uVar2 = puVar19[1];
      lVar23 = puVar19[2];
      if (lVar23 != 0) {
        LOCK();
        *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
        UNLOCK();
      }
      lVar28 = (longlong)(int)uStack_70;
      uVar17 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar17);
      if (uStack_70._4_4_ < uVar17) {
        FUN_14011bb82(&local_78,uVar15 & 0xffffffff);
      }
      *(undefined8 *)(local_78 + lVar28 * 0x18) = uVar20;
      *(undefined8 *)(local_78 + 8 + lVar28 * 0x18) = uVar2;
      *(longlong *)(local_78 + 0x10 + lVar28 * 0x18) = lVar23;
      plVar27 = plVar27 + 2;
    } while (plVar27 != plVar26);
    local_94 = local_94 & 0xf8 | 4;
    param_1 = local_130;
  }
  pppuVar21 = &local_128;
  local_128 = &PTR_FUN_149ed05f0;
  local_120 = 0x3f800000;
  uStack_11c = 0x3f800000;
  uStack_118 = 0x3f800000;
  uStack_114 = 0x3f800000;
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 3;
  uStack_108 = 0x4200000042000000;
  local_b4 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  auStack_e8[0] = 0;
  auStack_e8[1] = 0;
  auStack_e8[2] = 0;
  auStack_e8[3] = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  local_b0 = 1;
  local_a0 = DAT_14c84635c;
  local_a8 = DAT_14c84635c;
  local_98 = local_98 & 0xffffff00;
  local_90 = 0;
  ppuStack_88 = (undefined **)0x0;
  local_80 = 0;
  uVar20 = FUN_140902dbe();
  local_138 = *(undefined8 *)(param_2 + 0x94);
  cVar16 = FUN_148217158(uVar20,pppuVar21,&local_78,*(undefined1 *)(param_2 + 0x91));
  if (cVar16 == '\0') {
    pppuVar21 = (undefined ***)FUN_141319416();
    *param_1 = &PTR_FUN_149ed05f0;
    uVar3 = *(undefined4 *)((longlong)pppuVar21 + 0xc);
    uVar4 = *(undefined4 *)(pppuVar21 + 2);
    uVar5 = *(undefined4 *)((longlong)pppuVar21 + 0x14);
    uVar6 = *(undefined4 *)(pppuVar21 + 3);
    uVar7 = *(undefined4 *)((longlong)pppuVar21 + 0x1c);
    uVar8 = *(undefined4 *)(pppuVar21 + 4);
    uVar9 = *(undefined4 *)((longlong)pppuVar21 + 0x24);
    uVar10 = *(undefined4 *)(pppuVar21 + 5);
    uVar11 = *(undefined4 *)((longlong)pppuVar21 + 0x2c);
    uVar12 = *(undefined4 *)(pppuVar21 + 6);
    uVar13 = *(undefined4 *)((longlong)pppuVar21 + 0x34);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(pppuVar21 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
    *(undefined4 *)(param_1 + 4) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
    *(undefined4 *)(param_1 + 5) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
    *(undefined4 *)(param_1 + 6) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar13;
    ppuVar22 = pppuVar21[7];
    param_1[7] = ppuVar22;
    if ((ppuVar22 != (undefined **)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    pppuVar24 = pppuVar21 + 8;
    puVar19 = param_1 + 8;
    for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar19 = *pppuVar24;
      pppuVar24 = pppuVar24 + 1;
      puVar19 = puVar19 + 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)((longlong)pppuVar21 + 0x94);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(pppuVar21 + 0x12);
    param_1[0x13] = pppuVar21[0x13];
    ppuVar22 = pppuVar21[0x14];
  }
  else {
    *param_1 = &PTR_FUN_149ed05f0;
    *(undefined4 *)(param_1 + 1) = local_120;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_11c;
    *(undefined4 *)(param_1 + 2) = uStack_118;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_114;
    *(uint *)(param_1 + 3) = local_110;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_10c;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_108._4_4_;
    *(undefined4 *)(param_1 + 5) = (undefined4)local_100;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_100._4_4_;
    *(undefined4 *)(param_1 + 6) = (undefined4)uStack_f8;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_f8._4_4_;
    param_1[7] = local_f0;
    if ((local_f0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar19 = auStack_e8;
    puVar25 = param_1 + 8;
    for (lVar23 = 10; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar25 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar25 = puVar25 + 1;
    }
    *(byte *)((longlong)param_1 + 0x94) = local_94;
    *(uint *)(param_1 + 0x12) = local_98;
    param_1[0x13] = local_90;
    ppuVar22 = ppuStack_88;
  }
  ppuVar14 = ppuStack_88;
  param_1[0x14] = ppuVar22;
  if (ppuVar22 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuVar22 + 1) = *(int *)(ppuVar22 + 1) + 1;
    UNLOCK();
  }
  param_1[0x15] = pppuVar21[0x15];
  local_128 = &PTR_FUN_149ed05f0;
  if (ppuStack_88 != (undefined **)0x0) {
    LOCK();
    ppuVar22 = ppuStack_88 + 1;
    *(int *)ppuVar22 = *(int *)ppuVar22 + -1;
    UNLOCK();
    if (*(int *)ppuVar22 == 0) {
      (**(code **)*ppuStack_88)(ppuStack_88);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
      }
    }
  }
LAB_143ae605a:
  FUN_144a65a1e(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae62fa FUN_143ae62fa body=241 status=ok
// SIG undefined FUN_143ae62fa(void)

byte FUN_143ae62fa(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((param_1[0x62] == 0) || (cVar1 = FUN_14821c4a8(), cVar1 == '\0')) {
    lVar4 = FUN_145877a06(param_1);
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (lVar4 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        return 0;
      }
      if (0 < (int)param_1[0x61]) {
        lVar5 = *(longlong *)param_1[0x60];
        if ((lVar5 != 0) &&
           (plVar6 = (longlong *)
                     FUN_143af2270(lVar5,((longlong *)param_1[0x60])[1],
                                   L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                                   ,1), plVar6 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar4);
          return *(byte *)(lVar4 + 0x19);
        }
      }
    }
  }
  else {
    lVar4 = (longlong)*(int *)(param_1[0x62] + 0x58);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(param_1[0x62] + 0x50);
      lVar7 = 0;
      do {
        bVar2 = (**(code **)(**(longlong **)(lVar5 + lVar7) + 0x2b0))();
        bVar3 = bVar2 >> 2 & 1;
        if ((bVar2 >> 2 & 1) != 0) {
          return bVar3;
        }
        bVar8 = lVar4 * 8 + -8 != lVar7;
        lVar7 = lVar7 + 8;
      } while (bVar8);
      return bVar3;
    }
  }
  return 0;
}



// FUNCTION 143ae63ec FUN_143ae63ec body=144 status=ok
// SIG undefined FUN_143ae63ec(void)

void FUN_143ae63ec(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  if (*(int *)(param_1 + 0x318) != param_2) {
    cVar1 = FUN_143af6288(param_1 + 0x318);
    if (cVar1 == '\0') {
      cVar1 = FUN_143af6288(&local_1c);
      if (cVar1 == '\0') goto LAB_143ae6430;
    }
    lVar2 = FUN_145877a06(param_1);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 0x30,param_1);
    }
    *(int *)(param_1 + 0x318) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_143ae6430:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae648c FUN_143ae648c body=107 status=ok
// SIG undefined FUN_143ae648c(void)

ulonglong FUN_143ae648c(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x420) != '\0') {
    uVar3 = 0;
    goto LAB_143ae64e7;
  }
  if (*(int *)(param_1 + 0x308) < 1) {
LAB_143ae64d6:
    bVar5 = false;
    uVar4 = 0;
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x300);
    if (lVar2 == 0) goto LAB_143ae64d6;
    lVar2 = FUN_143af2270(lVar2,(*(longlong **)(param_1 + 0x300))[1],
                          L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                          ,1);
    bVar5 = lVar2 != 0;
    uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  if (*(longlong *)(param_1 + 0x310) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_14821c4a8();
  }
  uVar3 = CONCAT71(uVar4,bVar5 | bVar1);
LAB_143ae64e7:
  return uVar3 & 0xffffffff;
}



// FUNCTION 143ae64f7 FUN_143ae64f7 body=69 status=ok
// SIG undefined FUN_143ae64f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae64f7(void)

{
  _DAT_14cb44c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae6539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb44c70,1);
  return;
}



// FUNCTION 143ae653c FUN_143ae653c body=49 status=ok
// SIG undefined FUN_143ae653c(void)

void FUN_143ae653c(void)

{
  FUN_144760e21(DAT_14cb44c80,DAT_14cb44c88);
  if (DAT_14cb44c80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ae656e FUN_143ae656e body=2217 status=ok
// SIG undefined FUN_143ae656e(void)

void FUN_143ae656e(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [16];
  undefined8 *local_c0;
  int local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_86;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140ec5ab0();
  if ((char)param_1[0x5f] != '\x01') goto LAB_143ae659f;
  cVar3 = FUN_14821c4a8();
  if (cVar3 == '\0') {
LAB_143ae669f:
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar2 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_149e020b0;
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
    local_c0[2] = lVar10;
    *local_c0 = &PTR_FUN_14ae67cf0;
    local_c0[3] = 0;
    iVar12 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar13 = iVar12 == 0;
        if (bVar13) {
          *(int *)(lVar9 + 0x10) = iVar11;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar12 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar12;
    puVar2[4] = &LAB_14821d1ec;
    *(undefined4 *)(puVar2 + 5) = 0;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar12 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar12 != 2)) {
      if (iVar12 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_143ae6b92;
      }
      local_b0 = "CommonInput";
      local_a8 = 0xb;
      local_a4 = 0;
      uVar4 = FUN_14001a6c0(&local_b0,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar7 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar4);
    }
    else {
LAB_143ae6b92:
      local_b0 = "CommonInput";
      local_a8 = 0xb;
      local_a4 = 0;
      uVar4 = FUN_14001a6c0(&local_b0,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_b0,1);
    }
    uVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
    FUN_1482175f2(uVar8,local_d0);
    FUN_14821d2ae(&local_b0,local_d0,&local_c0);
    if (local_b8 == 0) goto LAB_143ae69e6;
LAB_143ae69b6:
    if (local_c0 != (undefined8 *)0x0) {
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
      goto LAB_143ae69e6;
    }
  }
  else {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar12 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar12 != 2)) {
      if (iVar12 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_143ae6c57;
      }
      local_b0 = "CommonInput";
      local_a8 = 0xb;
      local_a4 = 0;
      uVar4 = FUN_14001a6c0(&local_b0,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar7 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar4);
    }
    else {
LAB_143ae6c57:
      local_b0 = "CommonInput";
      local_a8 = 0xb;
      local_a4 = 0;
      uVar4 = FUN_14001a6c0(&local_b0,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_b0,1);
    }
    uVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
    lVar9 = FUN_148217818(uVar8);
    if (lVar9 == 0) goto LAB_143ae669f;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar2 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_149e020b0;
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
    local_c0[2] = lVar10;
    *local_c0 = &PTR_FUN_14ae67cf0;
    local_c0[3] = 0;
    iVar12 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar13 = iVar12 == 0;
        if (bVar13) {
          *(int *)(lVar9 + 0x10) = iVar11;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar12 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar12;
    puVar2[4] = &LAB_14821d1ec;
    *(undefined4 *)(puVar2 + 5) = 0;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar12 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar12 != 2)) {
      if (iVar12 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_143ae6d28;
      }
      local_b0 = "CommonInput";
      local_a8 = 0xb;
      local_a4 = 0;
      uVar4 = FUN_14001a6c0(&local_b0,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar7 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar4);
    }
    else {
LAB_143ae6d28:
      local_b0 = "CommonInput";
      local_a8 = 0xb;
      local_a4 = 0;
      uVar4 = FUN_14001a6c0(&local_b0,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_b0,1);
    }
    uVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
    uVar8 = FUN_148217818(uVar8);
    FUN_14821d1f6(&local_b0,uVar8,&local_c0);
    if (local_b8 != 0) goto LAB_143ae69b6;
LAB_143ae69e6:
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_86 = *(undefined1 *)((longlong)param_1 + 0x2f9);
  FUN_143ae6e18(param_1,&local_c0,&local_b0);
  *(undefined4 *)((longlong)param_1 + 0x374) = local_c0._0_4_;
  FUN_14821d266(&local_b0);
LAB_143ae659f:
  if ((*(char *)((longlong)param_1 + 0x2fa) == '\x01') && ((char)param_1[0x6b] == '\0')) {
    (**(code **)(*param_1 + 0x4d8))(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae6e18 FUN_143ae6e18 body=236 status=ok
// SIG undefined FUN_143ae6e18(void)

undefined4 * FUN_143ae6e18(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [42];
  undefined1 local_7e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1403f18c8(lVar2);
    if (plVar3 != (longlong *)0x0) {
      FUN_1482380ca(local_a8,param_3);
      if (((char)param_1[0x5a] == '\x01') && (*(char *)(param_3 + 0x2a) == '\0')) {
        local_7e = 1;
      }
      (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2,param_1,local_a8);
      iVar1 = (int)param_1[0x5c];
      *(uint *)(param_1 + 0x5c) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2e4) < iVar1 + 1U) {
        FUN_14825432c(param_1 + 0x5b,iVar1);
      }
      *(undefined4 *)(param_1[0x5b] + (longlong)iVar1 * 4) = *param_2;
      FUN_14821d266(local_a8);
      goto LAB_143ae6e60;
    }
  }
  *param_2 = 0xffffffff;
LAB_143ae6e60:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae6f2a FUN_143ae6f2a body=726 status=ok
// SIG undefined FUN_143ae6f2a(void)

void FUN_143ae6f2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong *local_80;
  undefined4 *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x378) != 0) &&
      (puVar12 = *(undefined8 **)(param_1 + 0x380), puVar12 != (undefined8 *)0x0)) &&
     (0 < *(int *)(puVar12 + 1))) {
    lVar10 = 0;
    iVar7 = *(int *)(puVar12 + 1);
    do {
      iVar6 = iVar7;
      if (iVar6 == 0) {
        puVar12 = (undefined8 *)0x0;
        goto LAB_143ae6f9b;
      }
      LOCK();
      iVar7 = *(int *)(puVar12 + 1);
      bVar17 = iVar6 == iVar7;
      if (bVar17) {
        *(int *)(puVar12 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      UNLOCK();
    } while (!bVar17);
    lVar10 = *(longlong *)(param_1 + 0x378);
LAB_143ae6f9b:
    if ((0 < *(int *)(lVar10 + 0x34)) && ((longlong)*(int *)(lVar10 + 0x20) != 0)) {
      puVar16 = *(undefined4 **)(lVar10 + 0x18);
      puVar13 = puVar16 + *(int *)(lVar10 + 0x20);
      local_78 = puVar13;
      do {
        FUN_143af5e68(&local_70,*puVar16);
        lVar10 = local_70;
        if ((local_70 != 0) && (0.0 <= *(double *)(local_70 + 0xd8))) {
          *(undefined8 *)(local_70 + 0xd8) = 0xbff0000000000000;
          iVar7 = *(int *)(local_70 + 0x8c);
          *(int *)(local_70 + 0x8c) = iVar7 + 1;
          uVar8 = (ulonglong)*(int *)(local_70 + 0x80);
          if ((longlong)uVar8 < 1) {
            *(int *)(local_70 + 0x8c) = iVar7;
          }
          else {
            local_80 = (longlong *)(local_70 + 0x78);
            bVar17 = false;
            do {
              lVar11 = uVar8 * 0x10 + -8;
              uVar15 = uVar8;
              while (((*(int *)(*local_80 + lVar11) != 0 &&
                      (plVar3 = *(longlong **)(*local_80 + -8 + lVar11), plVar3 != (longlong *)0x0))
                     && (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,0), cVar5 != '\0'))) {
                lVar11 = lVar11 + -0x10;
                bVar4 = uVar15 < 2;
                uVar15 = uVar15 - 1;
                if (bVar4) {
                  iVar7 = *(int *)(lVar10 + 0x8c) + -1;
                  *(int *)(lVar10 + 0x8c) = iVar7;
                  puVar13 = local_78;
                  if (bVar17) goto LAB_143ae709f;
                  goto LAB_143ae7147;
                }
              }
              uVar8 = uVar15 - 1;
              bVar17 = true;
            } while (1 < uVar15);
            iVar7 = *(int *)(lVar10 + 0x8c) + -1;
            *(int *)(lVar10 + 0x8c) = iVar7;
LAB_143ae709f:
            puVar13 = local_78;
            if (iVar7 < 1) {
              iVar7 = *(int *)(lVar10 + 0x80);
              iVar9 = iVar7;
              if (0 < iVar7) {
                iVar14 = 0;
                do {
                  if (((*(int *)(*local_80 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                      (plVar3 = *(longlong **)(*local_80 + (longlong)iVar14 * 0x10),
                      plVar3 == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                    plVar3 = local_80;
                    local_84 = iVar14;
                    FUN_14005b288(local_80,iVar14);
                    iVar14 = local_84;
                    FUN_14005b248(plVar3);
                  }
                  else {
                    iVar14 = iVar14 + 1;
                  }
                  iVar9 = *(int *)(lVar10 + 0x80);
                } while (iVar14 < iVar9);
              }
              iVar14 = iVar9 * 2;
              if (iVar14 < 3) {
                iVar14 = 2;
              }
              *(int *)(lVar10 + 0x88) = iVar14;
              if ((iVar14 < iVar7) && (*(int *)(lVar10 + 0x84) != iVar9)) {
                FUN_14045812c(local_80);
              }
            }
          }
        }
LAB_143ae7147:
        plVar3 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar13);
    }
    if (iVar6 != 0) {
      LOCK();
      piVar2 = (int *)(puVar12 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar12)(puVar12);
        LOCK();
        piVar2 = (int *)((longlong)puVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae7220 FUN_143ae7220 body=244 status=ok
// SIG undefined FUN_143ae7220(void)

void FUN_143ae7220(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((char)param_1[0x6b] == '\x01') {
    if ((char)param_1[0x83] == '\x01') {
      (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined1 *)((longlong)param_1 + 0x419));
    }
    cVar1 = FUN_14821c4a8();
    if ((cVar1 != '\0') && (param_1[0x60] != 0)) {
      lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
      if (lVar2 != 0) {
        lVar2 = FUN_1400b6e86(lVar2);
        if (lVar2 != 0) {
          local_11 = 1;
          (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x98))
                    (lVar2 + 0x30,param_1[0x60],(int)param_1[0x61]);
        }
      }
    }
    uVar3 = FUN_14477b072(param_1,DAT_14cb44bf0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
    FUN_1447f69b6(param_1 + 0x71);
    FUN_1447cd2ec(param_1 + 0x67,0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae7316 FUN_143ae7316 body=245 status=ok
// SIG undefined FUN_143ae7316(void)

void FUN_143ae7316(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((char)param_1[0x6b] == '\0') {
    if (*(char *)((longlong)param_1 + 0x41a) == '\x01') {
      (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined1 *)((longlong)param_1 + 0x41b));
    }
    cVar1 = FUN_14821c4a8();
    if ((cVar1 != '\0') && (param_1[0x60] != 0)) {
      lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
      if (lVar2 != 0) {
        lVar2 = FUN_1400b6e86(lVar2);
        if (lVar2 != 0) {
          local_11 = 1;
          (**(code **)(*(longlong *)(lVar2 + 0x30) + 0xa0))(lVar2 + 0x30,param_1[0x60]);
        }
      }
    }
    FUN_143ae6f2a(param_1);
    uVar3 = FUN_14477b072(param_1,DAT_14cb44c00);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
    FUN_1447f69b6(param_1 + 0x74);
    FUN_1447cd2ec(param_1 + 0x69,0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae740c FUN_143ae740c body=133 status=ok
// SIG undefined FUN_143ae740c(void)

ulonglong FUN_143ae740c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[0x5f];
  if ((char)lVar1 == '\x01') {
    local_21 = '\0';
    uVar2 = FUN_14477b072(param_1,DAT_14cb44c10);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_21);
    if ((local_21 == '\0') && ((char)param_1[0x6b] == '\x01')) {
      (**(code **)(*param_1 + 0x4e0))(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)lVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae7492 FUN_143ae7492 body=69 status=ok
// SIG undefined FUN_143ae7492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae7492(void)

{
  _DAT_14cb451a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae74d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb451a8,1);
  return;
}



// FUNCTION 143ae74d7 FUN_143ae74d7 body=69 status=ok
// SIG undefined FUN_143ae74d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae74d7(void)

{
  _DAT_14cb451b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae7519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb451b8,1);
  return;
}



// FUNCTION 143ae751c FUN_143ae751c body=757 status=ok
// SIG undefined FUN_143ae751c(void)

void FUN_143ae751c(longlong *param_1)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (ulonglong)(int)param_1[0x5c];
  if (0 < (longlong)uVar7) {
    plVar6 = param_1 + 0x5b;
    iVar9 = -(int)param_1[0x5c];
    lVar11 = uVar7 * 4;
    do {
      lVar11 = lVar11 + -4;
      cVar4 = FUN_143af6288(*plVar6 + lVar11);
      if (cVar4 == '\0') {
        uVar5 = *(uint *)(param_1 + 0x5c);
        if (uVar7 != uVar5) {
          memmove((void *)(param_1[0x5b] + uVar7 * 4 + -4),(void *)(param_1[0x5b] + uVar7 * 4),
                  (longlong)(int)(uVar5 + iVar9) << 2);
          uVar5 = *(uint *)(param_1 + 0x5c);
        }
        *(uint *)(param_1 + 0x5c) = uVar5 - 1;
        FUN_1482546c6(plVar6);
      }
      iVar9 = iVar9 + 1;
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
    if (((0 < (int)param_1[0x5c]) &&
        (lVar11 = (**(code **)(*param_1 + 0x2d0))(param_1), lVar11 != 0)) &&
       (lVar11 = FUN_1403f18c8(lVar11), lVar11 != 0)) {
      FUN_148240662(lVar11,&local_40,param_1);
      if (local_40 == (undefined1 *)0x0) {
        if (0 < (int)param_1[0x5c]) {
          lVar11 = FUN_1482407a0(lVar11,param_1);
          uVar5 = *(uint *)(param_1 + 0x5c);
          if ((longlong)(int)uVar5 != 0) {
            iVar9 = *(int *)(lVar11 + 0x10);
            *(uint *)(lVar11 + 0x10) = iVar9 + uVar5;
            if ((uint)(*(int *)(lVar11 + 0x14) - iVar9) < uVar5) {
              FUN_14825432c((longlong *)(lVar11 + 8),iVar9);
            }
            memcpy((void *)((longlong)iVar9 * 4 + *(longlong *)(lVar11 + 8)),(void *)*plVar6,
                   (longlong)(int)uVar5 << 2);
          }
        }
      }
      else {
        FUN_143aee65c(lVar11,&local_40,plVar6);
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
    }
  }
  local_38 = (longlong *)&local_41;
  local_40 = &LAB_14333d9d2;
  FUN_140ec5510(param_1[0x4d]);
  (**(code **)(*param_1 + 0x340))(param_1);
  (**(code **)(*param_1 + 0x348))(param_1);
  lVar11 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if ((lVar11 != 0) && (lVar11 = FUN_1403f18c8(lVar11), lVar11 != 0)) {
    local_40 = (undefined1 *)0x0;
    iVar9 = (int)param_1[0x5e];
    _Src = (void *)param_1[0x5d];
    local_38 = (longlong *)CONCAT44(local_38._4_4_,iVar9);
    if ((longlong)iVar9 != 0) {
      FUN_148248caa(&local_40,iVar9);
      memcpy(local_40,_Src,(longlong)iVar9 << 3);
      puVar3 = local_40;
      lVar8 = (longlong)(int)local_38;
      if (lVar8 != 0) {
        lVar10 = 0;
        do {
          iVar9 = *(int *)(puVar3 + lVar10 + 4);
          if ((((iVar9 != 0) && (uVar5 = *(uint *)(puVar3 + lVar10), -1 < (int)uVar5)) &&
              (((int)uVar5 < DAT_14c9647dc &&
               (((plVar6 = (longlong *)
                           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                 plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar9)) &&
                ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) && (*plVar6 != 0)) {
            FUN_1482382dc(lVar11);
          }
          lVar10 = lVar10 + 8;
        } while (lVar8 * 8 != lVar10);
      }
      if (local_40 != (undefined1 *)0x0) {
        FUN_1400020a8(local_40);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae7812 FUN_143ae7812 body=2918 status=ok
// SIG undefined FUN_143ae7812(void)

void FUN_143ae7812(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  int local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_9d;
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_1[0x7c] != 0) || (param_1[0x7d] != 0)) goto LAB_143ae784e;
  cVar3 = FUN_14821c4a8();
  if ((cVar3 == '\0') ||
     ((param_1[0x7b] == 0 || (cVar3 = FUN_143af6288(param_1 + 0x8c), cVar3 != '\0')))) {
    if (((param_1[0x79] == 0) && (param_1[0x7a] == 0)) ||
       (cVar3 = FUN_143af6288(param_1 + 0x8c), cVar3 != '\0')) goto LAB_143ae784e;
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,3,0x10);
    puVar2 = local_d8;
    local_d0 = 3;
    *local_d8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d8[2] = lVar4;
    *local_d8 = &PTR_FUN_14ae68390;
    local_d8[3] = 0;
    iVar5 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_d8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_1482268e4;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c8,param_1 + 0x79,0,&local_d8);
    if (local_d0 == 0) {
LAB_143ae79e9:
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_d8 != (undefined8 *)0x0) {
      (**(code **)*local_d8)(local_d8,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      local_d0 = 0;
      goto LAB_143ae79e9;
    }
    if (local_70 != 3) {
      FUN_1446efa72(&local_78,0,3,0x10);
      local_70 = 3;
    }
    *local_78 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_78[2] = lVar4;
    *local_78 = &PTR_FUN_14ae684d0;
    local_78[3] = 0;
    if (param_1 == (longlong *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_78 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)local_78 + 0x1c) = iVar5;
    local_78[4] = &LAB_148226962;
    *(undefined4 *)(local_78 + 5) = 0;
    if (local_60 != 3) {
      FUN_1446efa72(&local_68,0,3,0x10);
      local_60 = 3;
    }
    *local_68 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_68[2] = lVar4;
    *local_68 = &PTR_FUN_14ae68390;
    local_68[3] = 0;
    if (param_1 == (longlong *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_68 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)local_68 + 0x1c) = iVar5;
    local_68[4] = &LAB_148226970;
    *(undefined4 *)(local_68 + 5) = 0;
    if (local_50 != 3) {
      FUN_1446efa72(&local_58,0,3,0x10);
      local_50 = 3;
    }
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14ae68390;
    local_58[3] = 0;
    if (param_1 == (longlong *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)local_58 + 0x1c) = iVar5;
    local_58[4] = &LAB_14822697e;
    *(undefined4 *)(local_58 + 5) = 0;
    local_a0 = (undefined1)param_1[0x93];
    local_9d = (**(code **)(*param_1 + 0x560))(param_1);
  }
  else {
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,3,0x10);
    puVar2 = local_d8;
    local_d0 = 3;
    *local_d8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d8[2] = lVar4;
    *local_d8 = &PTR_FUN_14ae68390;
    local_d8[3] = 0;
    iVar5 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_d8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_1482268e4;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1482268f2(local_c8,param_1[0x7b],&local_d8);
    if (local_d0 == 0) {
LAB_143ae7d73:
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_d8 != (undefined8 *)0x0) {
      (**(code **)*local_d8)(local_d8,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      local_d0 = 0;
      goto LAB_143ae7d73;
    }
    if (local_70 != 3) {
      FUN_1446efa72(&local_78,0,3,0x10);
      local_70 = 3;
    }
    *local_78 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_78[2] = lVar4;
    *local_78 = &PTR_FUN_14ae684d0;
    local_78[3] = 0;
    if (param_1 == (longlong *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_78 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)local_78 + 0x1c) = iVar5;
    local_78[4] = &LAB_148226962;
    *(undefined4 *)(local_78 + 5) = 0;
    if (local_60 != 3) {
      FUN_1446efa72(&local_68,0,3,0x10);
      local_60 = 3;
    }
    *local_68 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_68[2] = lVar4;
    *local_68 = &PTR_FUN_14ae68390;
    local_68[3] = 0;
    if (param_1 == (longlong *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_68 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)local_68 + 0x1c) = iVar5;
    local_68[4] = &LAB_148226970;
    *(undefined4 *)(local_68 + 5) = 0;
    if (local_50 != 3) {
      FUN_1446efa72(&local_58,0,3,0x10);
      local_50 = 3;
    }
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14ae68390;
    local_58[3] = 0;
    if (param_1 == (longlong *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar6;
        }
      }
    }
    *(int *)((longlong)local_58 + 0x1c) = iVar5;
    local_58[4] = &LAB_14822697e;
    *(undefined4 *)(local_58 + 5) = 0;
    local_a0 = (undefined1)param_1[0x93];
  }
  local_a8 = *(undefined1 *)((longlong)param_1 + 0x499);
  FUN_143ae6e18(param_1,&local_d8,local_c8);
  *(undefined4 *)(param_1 + 0x8c) = local_d8._0_4_;
  FUN_14821d266(local_c8);
LAB_143ae784e:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae8386 FUN_143ae8386 body=728 status=ok
// SIG undefined FUN_143ae8386(void)

void FUN_143ae8386(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38 [2];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  if ((char)param_1[0x70] == '\x01') {
    FUN_1402160b8(local_38);
    local_40 = param_1[0x6f] - (longlong)local_38[0];
    if (param_1[0x6d] != 0) {
      cVar2 = (**(code **)(*param_1 + 0x368))(param_1,&local_40);
      if (cVar2 != '\0') {
        lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
        if (lVar3 != 0) {
          if (*(longlong *)(lVar3 + 0x1f0) == 0) {
            plVar4 = (longlong *)(lVar3 + 0x458);
          }
          else {
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
          }
          lVar3 = param_1[0x6d];
          if (lVar3 != 0) {
            lVar1 = *plVar4;
            uVar5 = (uint)lVar3;
            if ((int)(uVar5 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
              lVar6 = lVar1 + 0x18;
              if (*(longlong *)(lVar1 + 0x28) != 0) {
                lVar6 = *(longlong *)(lVar1 + 0x28);
              }
              if ((*(uint *)(lVar6 + (ulonglong)((uVar5 & 0xffffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1
                  ) != 0) {
                lVar1 = *(longlong *)(lVar1 + 8);
                lVar6 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
                if (((lVar1 + lVar6 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar6) == lVar3)) &&
                   (*(char *)(lVar1 + 1 + lVar6) != '\x04')) {
                  FUN_1405a424c();
                }
              }
            }
          }
          param_1[0x6d] = 0;
        }
      }
    }
    if (1.0 <= (double)local_40 / 10000000.0) {
      (**(code **)(*param_1 + 0x370))(param_1,local_38,&local_40);
      FUN_1467df774(&local_28,local_38);
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
    }
    else {
      FUN_1447f69b6(param_1 + 0x74);
      if ((*(char *)((longlong)param_1 + 0x38c) == '\x01') &&
         ((longlong **)(param_1 + 0x72) != &local_28)) {
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + 0x10))();
        }
        local_28 = (longlong *)param_1[0x72];
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + 8))();
        }
        local_20 = (undefined4)param_1[0x73];
      }
    }
    *(int *)((longlong)param_1 + 900) =
         ((int)(local_40 / 864000000000) + (int)(local_40 >> 0x3f)) -
         (SUB164(SEXT816(local_40) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
    uVar5 = (uint)((ulonglong)((local_40 / 36000000000) * 0x2aaaaaab) >> 0x20);
    *(uint *)(param_1 + 0x71) =
         (int)(local_40 / 36000000000) + ((uVar5 >> 2) - ((int)uVar5 >> 0x1f)) * -0x18;
  }
  else {
    (**(code **)(*param_1 + 0x378))(param_1,local_38,param_1 + 0x6f);
    FUN_1467df774(&local_28,local_38);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
  }
  if (local_28 != (longlong *)0x0) {
    local_50 = local_28;
    (**(code **)(*local_28 + 8))();
    local_48 = local_20;
    (**(code **)(*param_1 + 0x348))(param_1,&local_50);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae8660 FUN_143ae8660 body=601 status=ok
// SIG undefined FUN_143ae8660(void)

ulonglong FUN_143ae8660(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_178 [32];
  char *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  char local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar1 = (longlong *)(param_1 + -0x28);
  local_138 = *param_2;
  uStack_134 = param_2[1];
  uStack_130 = param_2[2];
  uStack_12c = param_2[3];
  local_128 = *(undefined8 *)(param_2 + 4);
  uStack_120 = *(undefined8 *)(param_2 + 6);
  local_118 = *(longlong **)(param_2 + 8);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_118 + 1) = (int)local_118[1] + 1;
    UNLOCK();
  }
  local_108 = *(undefined1 *)(param_2 + 0xc);
  local_110 = *(ulonglong *)(param_2 + 10);
  cVar4 = (**(code **)(*plVar1 + 0x3d0))(plVar1);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar4 != '\0') goto LAB_143ae8804;
  if (((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x338) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x330);
    }
    cVar4 = (**(code **)(*plVar6 + 0x58))();
    if (cVar4 != '\0') goto LAB_143ae8804;
  }
  local_e8[0] = '\0';
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  plVar6 = local_118;
  local_38 = 0x20702;
  local_34 = 0;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_118 + 1) = (int)local_118[1] + 1;
    UNLOCK();
  }
  if ((*(int *)(param_1 + 0x3b0) == 0) ||
     (plVar3 = *(longlong **)(param_1 + 0x3a8), plVar3 == (longlong *)0x0)) {
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_118 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
LAB_143ae879c:
    local_150 = (undefined4)local_128;
    uStack_14c = local_128._4_4_;
    uStack_148 = (undefined4)uStack_120;
    uStack_144 = uStack_120._4_4_;
    local_140 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    local_158 = local_e8;
    (**(code **)(*plVar1 + 0x3a8))(plVar1,uStack_12c,&local_150,local_110 & 0xffffffff);
  }
  else {
    local_100 = local_128;
    local_f8 = uStack_120;
    local_f0 = local_118;
    local_158 = local_e8;
    cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,uStack_12c,&local_100,local_110 & 0xffffffff);
    if (cVar4 == '\0') goto LAB_143ae879c;
  }
  cVar4 = local_e8[0];
  FUN_14493db24();
  if (cVar4 == '\0') {
    uVar5 = FUN_1434fa042(param_1,&local_138);
    uVar7 = (ulonglong)uVar5;
  }
LAB_143ae8804:
  plVar1 = local_118;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_118 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143ae88ba FUN_143ae88ba body=161 status=ok
// SIG undefined FUN_143ae88ba(void)

void FUN_143ae88ba(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_28 = *param_3;
    local_20 = param_3[1];
    local_18 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    local_38 = param_5;
    (**(code **)(*param_1 + 0x60))();
  }
  plVar3 = (longlong *)param_3[2];
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae895c FUN_143ae895c body=333 status=ok
// SIG undefined FUN_143ae895c(void)

undefined8
FUN_143ae895c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,char *param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  char *local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  char local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8[0] = '\0';
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  if ((*(int *)(param_1 + 0x3d0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x3c8), plVar1 != (longlong *)0x0)) {
    local_120 = local_f8;
    local_128 = param_6;
    cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3,param_4,param_5);
    if (cVar2 != '\0') goto LAB_143ae8a27;
  }
  local_120 = local_f8;
  local_128 = param_6;
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x3c8))
            ((longlong *)(param_1 + -0x28),param_3,param_4,param_5);
LAB_143ae8a27:
  cVar2 = local_f8[0];
  FUN_14493db24();
  uVar3 = 1;
  if (cVar2 == '\0') {
    local_108 = param_9;
    local_110 = param_8;
    local_118 = param_7;
    local_120 = param_6;
    local_128 = (char *)CONCAT44(local_128._4_4_,param_5);
    uVar3 = FUN_147acc012(param_1,param_2,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae8ada FUN_143ae8ada body=96 status=ok
// SIG undefined FUN_143ae8ada(void)

void FUN_143ae8ada(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined8 *)(param_2 + 0x18);
  local_10 = *(longlong *)(param_2 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1434f9d34(param_1,&local_20,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae8b3c FUN_143ae8b3c body=666 status=ok
// SIG undefined FUN_143ae8b3c(void)

void FUN_143ae8b3c(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = 0x370;
  if ((int)param_1[0x69] == 0) goto LAB_143ae8c5d;
  if (param_2 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if ((lVar6 == 0) || (param_2 = FUN_148237b7e(lVar6), param_2 == 0)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar1 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar1 != 2)) {
        if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          if (DVar4 == DVar5) goto LAB_143ae8d2f;
        }
        local_40 = (longlong *)0x14ae43c40;
        local_38 = CONCAT35(local_38._5_3_,8);
        uVar3 = FUN_14001a6c0(&local_40,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        plVar7 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar3);
      }
      else {
LAB_143ae8d2f:
        local_40 = (longlong *)0x14ae43c40;
        local_38 = CONCAT35(local_38._5_3_,8);
        uVar3 = FUN_14001a6c0(&local_40,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_40,1);
      }
      param_2 = (**(code **)(*plVar7 + 0x50))(plVar7);
      if ((int)param_1[0x69] != 0) {
        param_2 = param_2 + 0xc0;
        goto LAB_143ae8b8d;
      }
    }
    else if ((int)param_1[0x69] != 0) goto LAB_143ae8b75;
  }
  else {
LAB_143ae8b75:
    param_2 = param_2 + 0x48;
LAB_143ae8b8d:
    local_30 = 0;
    local_38 = 0;
    local_40 = param_1 + 0x65;
    cVar2 = FUN_14008db60(&local_40,param_2);
    if (cVar2 != '\0') goto LAB_143ae8c5d;
  }
  lVar8 = 0x371;
LAB_143ae8c5d:
  (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined1 *)((longlong)param_1 + lVar8));
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae8dd7 FUN_143ae8dd7 body=55 status=ok
// SIG undefined FUN_143ae8dd7(void)

void FUN_143ae8dd7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb453c8 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb453c8 = FUN_14171c317(FUN_1464814d2,uVar1,L"ECommonNumericType");
  }
  return;
}



// FUNCTION 143ae8e0e FUN_143ae8e0e body=55 status=ok
// SIG undefined FUN_143ae8e0e(void)

void FUN_143ae8e0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb45478 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb45478 = FUN_14171c317(FUN_14648176d,uVar1,L"ERichTextInlineIconDisplayMode");
  }
  return;
}



// FUNCTION 143ae8e45 FUN_143ae8e45 body=69 status=ok
// SIG undefined FUN_143ae8e45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ae8e45(void)

{
  _DAT_14cb454b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ae8e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb454b8,1);
  return;
}



// FUNCTION 143ae8f89 FUN_143ae8f89 body=41 status=ok
// SIG undefined FUN_143ae8f89(void)

void FUN_143ae8f89(void)

{
  DAT_14cb455f8 = 0;
  if (DAT_14cb455f0 != 0) {
    FUN_1400020a8();
  }
  FUN_146164bbe();
  return;
}



// FUNCTION 143ae8fb2 FUN_143ae8fb2 body=747 status=ok
// SIG undefined FUN_143ae8fb2(void)

undefined8 * FUN_143ae8fb2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_278 [40];
  undefined1 local_250;
  undefined1 local_24f;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_231;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined1 local_1f8 [424];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar3 = *(longlong **)(param_1 + 0x7c0);
  if (plVar3 == (longlong *)0x0) {
LAB_143ae9006:
    FUN_147747518(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_278);
  }
  lVar7 = plVar3[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar7 = plVar3[0x22];
    if (lVar7 == 0) goto LAB_143ae9006;
  }
  cVar5 = FUN_14775b038(param_1);
  if (cVar5 == '\0') {
    FUN_141266e28(param_1,4);
  }
  FUN_14823124a(local_1f8);
  local_50 = *(undefined4 *)(lVar7 + 0x28);
  uStack_4c = *(undefined4 *)(lVar7 + 0x2c);
  uStack_48 = *(undefined4 *)(lVar7 + 0x30);
  uStack_44 = *(undefined4 *)(lVar7 + 0x34);
  local_40 = *(undefined4 *)(lVar7 + 0x38);
  FUN_147747518(param_1,&local_218);
  plVar3 = local_30;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_210 + 1) = (int)local_210[1] + 1;
    UNLOCK();
  }
  local_38 = local_218;
  local_30 = local_210;
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
  FUN_14825145a(local_230,
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonRichTextBlock.cpp",
                0x1ed,&local_231);
  FUN_1482312a4(local_230,&local_208,local_1f8);
  plVar3 = local_200;
  if (local_200 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 2000) = local_208;
    plVar6 = *(longlong **)(param_1 + 0x7d8);
    if (plVar6 == (longlong *)0x0) goto LAB_143ae918a;
    *(undefined8 *)(param_1 + 0x7d8) = 0;
LAB_143ae916d:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_143ae918a;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 2000) = local_208;
    plVar6 = *(longlong **)(param_1 + 0x7d8);
    if (local_200 != plVar6) {
      *(longlong **)(param_1 + 0x7d8) = local_200;
      if (plVar6 == (longlong *)0x0) goto LAB_143ae918a;
      goto LAB_143ae916d;
    }
    LOCK();
    plVar6 = local_200 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_143ae918a;
    (**(code **)*local_200)(local_200);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_143ae918a:
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_200 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_228 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)local_228 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_210 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_148231318(local_1f8);
  local_250 = DAT_14c96b23c;
  local_24f = 1;
  local_248 = 0;
  uStack_240 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x1c0))();
  uVar4 = *(undefined8 *)(param_1 + 2000);
  plVar3 = *(longlong **)(param_1 + 0x7d8);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  if ((local_28 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ae929e FUN_143ae929e body=490 status=ok
// SIG undefined FUN_143ae929e(void)

void FUN_143ae929e(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  undefined1 local_1b;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147747cf0();
  if (*(char *)((longlong)param_1 + 0x7ca) == '\x01') {
    FUN_147746300(param_1,local_30);
    plVar5 = local_30[0];
    if (*(code **)(*local_30[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_30[0] + 0x50))(local_30[0]);
    }
    FUN_1447a1fc0(plVar5);
    pcVar3 = *(code **)(*local_30[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar5 = (longlong *)(local_30[0][5] + 8);
      if (local_30[0][5] == 0) {
        plVar5 = local_30[0] + 3;
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar5 = local_30[0] + 2;
    }
    else {
      plVar5 = (longlong *)(*pcVar3)(local_30[0]);
    }
    (**(code **)(*param_1 + 0x2b0))(param_1,(1 < (int)plVar5[1]) * '\x03' + '\x01');
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))(local_30[0]);
    }
  }
  (**(code **)(*param_1 + 0x378))(param_1);
  if (param_1[0xf4] != 0) {
    iVar4 = (**(code **)(*DAT_14cb45d30 + 0xb0))();
    if (iVar4 == 1) {
      plVar5 = (longlong *)param_1[0xf7];
      if (plVar5 == (longlong *)0x0) {
LAB_143ae931f:
        lVar2 = param_1[0xf4];
        if (lVar2 != 0) {
          fVar1 = *(float *)((longlong)param_1 + 0x7b4);
          if ((*(float *)(lVar2 + 0x600) != fVar1) || (NAN(*(float *)(lVar2 + 0x600)) || NAN(fVar1))
             ) {
            *(float *)(lVar2 + 0x600) = fVar1;
            FUN_140163244(lVar2,0x80);
          }
        }
      }
      else if (plVar5[0x22] == 0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        if (plVar5[0x22] == 0) goto LAB_143ae931f;
      }
    }
  }
  if (param_1[0xfa] != 0) {
    if ((char)param_1[0xf9] == '\x01') {
      FUN_146aec43a();
      if (param_1[0xf4] == 0) goto LAB_143ae9361;
      local_1a = 0x100;
    }
    else {
      FUN_146aec47c();
      if (param_1[0xf4] == 0) goto LAB_143ae9361;
      local_1b = 0;
    }
    FUN_146aeb2f2();
  }
LAB_143ae9361:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae952b FUN_143ae952b body=55 status=ok
// SIG undefined FUN_143ae952b(void)

void FUN_143ae952b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb45608 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb45608 = FUN_14171c317(FUN_1464818e3,uVar1,L"ERotatorDirection");
  }
  return;
}



// FUNCTION 143ae9562 FUN_143ae9562 body=191 status=ok
// SIG undefined FUN_143ae9562(void)

void FUN_143ae9562(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x281])) {
    *(uint *)(param_1 + 0x282) = param_2;
    plVar1 = (longlong *)param_1[0x27f];
    lVar2 = param_1[0x280];
    local_38 = *(longlong **)(lVar2 + (ulonglong)param_2 * 0x10);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    local_30 = *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10 + 8);
    (**(code **)(*plVar1 + 0x348))(plVar1);
    local_24 = (undefined4)param_1[0x282];
    uVar3 = FUN_14477b072(param_1,DAT_14cb45628);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ae9622 FUN_143ae9622 body=1858 status=ok
// SIG undefined FUN_143ae9622(void)

void FUN_143ae9622(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c0 [132];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x380) != '\x01') {
    FUN_143af6302(param_1 + 0x46c);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  cVar3 = FUN_14821c4a8();
  if ((cVar3 == '\0') || (*(longlong *)(param_1 + 0x358) == 0)) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14ae69c20;
    local_d0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_148234ad8;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x338,0,&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x46c) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 == 0) {
LAB_143ae97e6:
      if (local_d0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_d0 != (undefined8 *)0x0) {
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
      goto LAB_143ae97e6;
    }
    if (cVar3 != '\0') goto LAB_143ae994d;
LAB_143ae995b:
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14ae69c20;
    local_d0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_148234aec;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14822698c(local_c0,param_1 + 0x348,0,&local_d0);
  }
  else {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14ae69c20;
    local_d0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_148234ad8;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1482268f2(local_c0,*(undefined8 *)(param_1 + 0x358),&local_d0);
    FUN_143ae6e18(param_1,&local_3c,local_c0);
    *(undefined4 *)(param_1 + 0x46c) = local_3c;
    FUN_14821d266(local_c0);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_143ae994d;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
LAB_143ae994d:
    if (*(longlong *)(param_1 + 0x360) == 0) goto LAB_143ae995b;
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar4;
    *local_d0 = &PTR_FUN_14ae69c20;
    local_d0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_d0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_148234aec;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1482268f2(local_c0,*(undefined8 *)(param_1 + 0x360),&local_d0);
  }
  FUN_143ae6e18(param_1,&local_3c,local_c0);
  *(undefined4 *)(param_1 + 0x470) = local_3c;
  FUN_14821d266(local_c0);
  if (local_c8 != 0) {
    if (local_d0 == (undefined8 *)0x0) goto LAB_143ae9b90;
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ae9b90:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ae9d7c FUN_143ae9d7c body=701 status=ok
// SIG undefined FUN_143ae9d7c(void)

undefined8 * FUN_143ae9d7c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_278 [40];
  undefined1 local_250;
  undefined1 local_24f;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_231;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined1 local_1f8 [424];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar5 = FUN_148235e7c();
  if (lVar5 == 0) {
    FUN_1417a9cde(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_278);
  }
  FUN_141266e28(param_1,*(undefined1 *)(lVar5 + 0x3c));
  FUN_14823124a(local_1f8);
  local_50 = *(undefined4 *)(lVar5 + 0x28);
  uStack_4c = *(undefined4 *)(lVar5 + 0x2c);
  uStack_48 = *(undefined4 *)(lVar5 + 0x30);
  uStack_44 = *(undefined4 *)(lVar5 + 0x34);
  local_40 = *(undefined4 *)(lVar5 + 0x38);
  FUN_1417a9cde(param_1,&local_218);
  plVar4 = local_30;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_210 + 1) = (int)local_210[1] + 1;
    UNLOCK();
  }
  local_38 = local_218;
  local_30 = local_210;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_14825145a(local_230,
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonTextBlock.cpp",0x256,
                &local_231);
  FUN_1482312a4(local_230,&local_208,local_1f8);
  plVar4 = local_200;
  if (local_200 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x340) = local_208;
    plVar6 = *(longlong **)(param_1 + 0x348);
    if (plVar6 == (longlong *)0x0) goto LAB_143ae9f26;
    *(undefined8 *)(param_1 + 0x348) = 0;
LAB_143ae9f09:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_143ae9f26;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x340) = local_208;
    plVar6 = *(longlong **)(param_1 + 0x348);
    if (local_200 != plVar6) {
      *(longlong **)(param_1 + 0x348) = local_200;
      if (plVar6 == (longlong *)0x0) goto LAB_143ae9f26;
      goto LAB_143ae9f09;
    }
    LOCK();
    plVar6 = local_200 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_143ae9f26;
    (**(code **)*local_200)(local_200);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_143ae9f26:
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_200 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_228 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)local_228 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_210 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_148231318(local_1f8);
  local_250 = DAT_14c96b23c;
  local_24f = 1;
  local_248 = 0;
  uStack_240 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x318) + 0x1c0))();
  uVar3 = *(undefined8 *)(param_1 + 0x340);
  plVar4 = *(longlong **)(param_1 + 0x348);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143aea052 FUN_143aea052 body=143 status=ok
// SIG undefined FUN_143aea052(void)

void FUN_143aea052(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_2[1] != 0) {
    lVar5 = *param_2;
    lVar4 = (longlong)(int)param_2[1] << 3;
    bVar2 = 0;
    do {
      bVar1 = bVar2;
      local_40 = lVar5;
      iVar3 = FUN_14747d54e(param_1 + 0xa8,&local_40);
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + -8;
      bVar2 = bVar1 | 0 < iVar3;
    } while (lVar4 != 0);
    if ((bool)(bVar1 | 0 < iVar3)) {
      FUN_14025a0ce(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aea0e2 FUN_143aea0e2 body=100 status=ok
// SIG undefined FUN_143aea0e2(void)

void FUN_143aea0e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_2[1] != 0) {
    iVar1 = *(int *)(param_1 + 0xb0);
    lVar2 = *param_2;
    lVar3 = (longlong)(int)param_2[1] << 3;
    do {
      FUN_144976e62(param_1 + 0xa8,lVar2);
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    if (*(int *)(param_1 + 0xb0) != iVar1) {
      FUN_14025a0ce(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143aea146 FUN_143aea146 body=631 status=ok
// SIG undefined FUN_143aea146(void)

undefined8 *
FUN_143aea146(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
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
  char cVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((char)param_3 == '\x03') || (*param_2 == 0)) {
LAB_143aea2d2:
    lVar18 = FUN_141319416();
    *param_1 = &PTR_FUN_149ed05f0;
    uVar3 = *(undefined4 *)(lVar18 + 0xc);
    uVar4 = *(undefined4 *)(lVar18 + 0x10);
    uVar5 = *(undefined4 *)(lVar18 + 0x14);
    uVar6 = *(undefined4 *)(lVar18 + 0x18);
    uVar7 = *(undefined4 *)(lVar18 + 0x1c);
    uVar8 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined4 *)(lVar18 + 0x24);
    uVar10 = *(undefined4 *)(lVar18 + 0x28);
    uVar11 = *(undefined4 *)(lVar18 + 0x2c);
    uVar12 = *(undefined4 *)(lVar18 + 0x30);
    uVar13 = *(undefined4 *)(lVar18 + 0x34);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar18 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
    *(undefined4 *)(param_1 + 4) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
    *(undefined4 *)(param_1 + 5) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
    *(undefined4 *)(param_1 + 6) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar13;
    lVar19 = *(longlong *)(lVar18 + 0x38);
    param_1[7] = lVar19;
    if ((lVar19 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar16 = (undefined8 *)(lVar18 + 0x40);
    puVar20 = param_1 + 8;
    for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar20 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)(lVar18 + 0x94);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(lVar18 + 0x90);
    param_1[0x13] = *(undefined8 *)(lVar18 + 0x98);
    lVar19 = *(longlong *)(lVar18 + 0xa0);
    param_1[0x14] = lVar19;
    if (lVar19 != 0) {
      LOCK();
      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
      UNLOCK();
    }
    puVar16 = (undefined8 *)(lVar18 + 0xa8);
  }
  else {
    plVar15 = (longlong *)
              FUN_143af2270(*param_2,param_2[1],
                            L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                            ,1);
    if (plVar15 == (longlong *)0x0) goto LAB_143aea2d2;
    puVar16 = (undefined8 *)(**(code **)(*plVar15 + 0x20))(plVar15,param_3,param_4);
    if (*(char *)((longlong)puVar16 + 0x4c) == '\0') {
      FUN_140ca8f8e(param_1);
      uVar17 = FUN_140902dbe();
      local_48 = *param_4;
      local_40 = *puVar16;
      local_38 = puVar16[1];
      local_30 = puVar16[2];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      cVar14 = FUN_148217086(uVar17,param_1,&local_40,param_3);
      if (cVar14 != '\0') goto LAB_143aea377;
      *param_1 = &PTR_FUN_149ed05f0;
      plVar15 = (longlong *)param_1[0x14];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      goto LAB_143aea2d2;
    }
    *param_1 = &PTR_FUN_149ed05f0;
    uVar3 = *(undefined4 *)((longlong)puVar16 + 0x3c);
    uVar4 = *(undefined4 *)(puVar16 + 8);
    uVar5 = *(undefined4 *)((longlong)puVar16 + 0x44);
    uVar6 = *(undefined4 *)(puVar16 + 9);
    uVar7 = *(undefined4 *)((longlong)puVar16 + 0x4c);
    uVar8 = *(undefined4 *)(puVar16 + 10);
    uVar9 = *(undefined4 *)((longlong)puVar16 + 0x54);
    uVar10 = *(undefined4 *)(puVar16 + 0xb);
    uVar11 = *(undefined4 *)((longlong)puVar16 + 0x5c);
    uVar12 = *(undefined4 *)(puVar16 + 0xc);
    uVar13 = *(undefined4 *)((longlong)puVar16 + 100);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar16 + 7);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
    *(undefined4 *)(param_1 + 4) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
    *(undefined4 *)(param_1 + 5) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
    *(undefined4 *)(param_1 + 6) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar13;
    lVar19 = puVar16[0xd];
    param_1[7] = lVar19;
    if ((DAT_14c950c29 == 1) && (lVar19 != 0)) {
      FUN_1456cec3c();
    }
    puVar20 = puVar16 + 0xe;
    puVar21 = param_1 + 8;
    for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar21 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)((longlong)puVar16 + 0xc4);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar16 + 0x18);
    param_1[0x13] = puVar16[0x19];
    lVar19 = puVar16[0x1a];
    param_1[0x14] = lVar19;
    if (lVar19 != 0) {
      LOCK();
      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
      UNLOCK();
    }
    puVar16 = puVar16 + 0x1b;
  }
  param_1[0x15] = *puVar16;
LAB_143aea377:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aea3be FUN_143aea3be body=55 status=ok
// SIG undefined FUN_143aea3be(void)

void FUN_143aea3be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb45998 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb45998 = FUN_14171c317(FUN_14647eef6,uVar1,L"EInputActionState");
  }
  return;
}



// FUNCTION 143aea4da FUN_143aea4da body=69 status=ok
// SIG undefined FUN_143aea4da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aea4da(void)

{
  _DAT_14cb45d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aea51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb45d30,1);
  return;
}



// FUNCTION 143aea544 FUN_143aea544 body=125 status=ok
// SIG undefined FUN_143aea544(void)

void FUN_143aea544(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_1c;
  local_1c = param_2;
  FUN_1482543b2(param_1 + 0x5b);
  lVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1403f18c8(lVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2e0))(plVar2,local_1c);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aea5c2 FUN_143aea5c2 body=126 status=ok
// SIG undefined FUN_143aea5c2(void)

void FUN_143aea5c2(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = (int)param_1[0x5c];
  *(uint *)(param_1 + 0x5c) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2e4) < iVar1 + 1U) {
    FUN_14825432c(param_1 + 0x5b,iVar1);
  }
  *(undefined4 *)(param_1[0x5b] + (longlong)iVar1 * 4) = param_2;
  lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1403f18c8(lVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143aea624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2d8))(plVar3,param_2,*(code **)(*plVar3 + 0x2d8));
      return;
    }
  }
  return;
}



// FUNCTION 143aea640 FUN_143aea640 body=63 status=ok
// SIG undefined FUN_143aea640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aea640(void)

{
  _DAT_14cb45e50 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cb45e59 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cb45e50);
    DAT_14cb45e59 = '\0';
  }
  return;
}



// FUNCTION 143aea680 FUN_143aea680 body=115 status=ok
// SIG undefined FUN_143aea680(void)

void FUN_143aea680(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x170))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8);
    if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x30), plVar2 != (longlong *)0x0)) {
      lVar3 = FUN_14110d11e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && ((char)plVar2[0x6b] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000143aea6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x4d8))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143aea6f4 FUN_143aea6f4 body=116 status=ok
// SIG undefined FUN_143aea6f4(void)

void FUN_143aea6f4(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x170))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8);
    if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x30), plVar2 != (longlong *)0x0)) {
      lVar3 = FUN_14110d11e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && ((char)plVar2[0x6b] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x000143aea75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x4e0))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143aea768 FUN_143aea768 body=764 status=ok
// SIG undefined FUN_143aea768(void)

void FUN_143aea768(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar4 = *(code **)(*plVar5 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar5 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar5);
          if (cVar8 != '\0') {
            (**(code **)(*plVar5 + 0xa0))(plVar5,lVar6,&local_2c);
            goto LAB_143aea939;
          }
        }
        _Src = (int *)(lVar6 + *(int *)((longlong)plVar5 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar5 + 0x100))(plVar5,&local_2c,_Src,(int)plVar5[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar5[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&local_2c,lVar6,1);
      }
      else {
        (*pcVar4)(plVar5,&local_2c,lVar6);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar9;
        puVar9 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_2c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_2c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_2c = (int)uVar3;
      uStack_28 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_2c);
    }
  }
LAB_143aea939:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)((longlong)param_1 + 0x194);
  iVar10 = iVar1;
  if (iVar1 == 0) {
    if (local_2c == 0) goto LAB_143aea978;
    iVar10 = (int)param_1[0x2e];
  }
  if (iVar1 != iVar10 + -1) {
    (**(code **)(*param_1 + 800))(param_1,iVar10 + -1,1);
  }
LAB_143aea978:
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aeaa66 FUN_143aeaa66 body=785 status=ok
// SIG undefined FUN_143aeaa66(void)

void FUN_143aeaa66(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar4 = *(code **)(*plVar5 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar5 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar5);
          if (cVar8 != '\0') {
            (**(code **)(*plVar5 + 0xa0))(plVar5,lVar6,&local_2c);
            goto LAB_143aeac37;
          }
        }
        _Src = (int *)(lVar6 + *(int *)((longlong)plVar5 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar5 + 0x100))(plVar5,&local_2c,_Src,(int)plVar5[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar5[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&local_2c,lVar6,1);
      }
      else {
        (*pcVar4)(plVar5,&local_2c,lVar6);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar9;
        puVar9 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_2c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_2c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_2c = (int)uVar3;
      uStack_28 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_2c);
    }
  }
LAB_143aeac37:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)((longlong)param_1 + 0x194);
  iVar11 = iVar1 + 1;
  iVar10 = 0;
  if (iVar11 != (int)param_1[0x2e]) {
    iVar10 = iVar11;
  }
  if (iVar1 != iVar10 && (iVar11 != (int)param_1[0x2e] || local_2c != 0)) {
    (**(code **)(*param_1 + 800))(param_1,iVar10,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aead78 FUN_143aead78 body=813 status=ok
// SIG undefined FUN_143aead78(void)

void FUN_143aead78(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_48 = FUN_1446ddbd2();
    local_40 = FUN_1468d96f0;
    local_50 = 0;
    local_58 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar4), cVar6 == '\0')) {
          _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
          if (_Src != &local_30) {
            if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
            }
            else {
              memcpy(&local_30,_Src,
                     (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_30);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 == 0) {
    lVar8 = 0xffffffff;
LAB_143aeaf9f:
    if (*(int *)((longlong)param_1 + 0x194) != (int)lVar8) {
      (**(code **)(*param_1 + 800))(param_1,lVar8,1);
    }
  }
  else if (0 < (longlong)(int)param_1[0x2e]) {
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(param_1[0x2d] + lVar8 * 8);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x30);
      }
      if (lVar9 == local_30) goto LAB_143aeaf9f;
      lVar8 = lVar8 + 1;
    } while ((int)param_1[0x2e] != lVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aeb0a6 FUN_143aeb0a6 body=751 status=ok
// SIG undefined FUN_143aeb0a6(void)

void FUN_143aeb0a6(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_143aeb277;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143aeb277:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)((longlong)param_1 + 0x194) != local_2c) {
    (**(code **)(*param_1 + 800))(param_1,local_2c,1);
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aeb396 FUN_143aeb396 body=472 status=ok
// SIG undefined FUN_143aeb396(void)

void FUN_143aeb396(longlong param_1,uint param_2,char param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 0x19a);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  lVar5 = (longlong)*(int *)(param_1 + 0x194);
  if (((-1 < lVar5) && (*(int *)(param_1 + 0x194) < *(int *)(param_1 + 0x170))) &&
     (lVar4 = *(longlong *)(param_1 + 0x168), *(longlong *)(lVar4 + lVar5 * 8) != 0)) {
    lVar3 = FUN_145b702e4();
    lVar5 = *(longlong *)(lVar4 + lVar5 * 8);
    if (((lVar5 != 0) && (lVar3 != 0)) &&
       ((lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        lVar4 = FUN_14110d11e();
        plVar2 = *(longlong **)(lVar5 + 0x30);
        if ((((plVar2 != (longlong *)0x0) && (lVar4 != 0)) && (lVar3 = plVar2[2], lVar3 != 0)) &&
           (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) && ((char)plVar2[0x6b] == '\x01')))) {
          (**(code **)(*plVar2 + 0x4e0))();
        }
      }
      FUN_1482396a4(lVar5,1);
    }
  }
  *(uint *)(param_1 + 0x194) = param_2;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x170))) {
    lVar5 = *(longlong *)(param_1 + 0x168);
    if (*(longlong *)(lVar5 + (ulonglong)param_2 * 8) != 0) {
      lVar4 = FUN_145b702e4();
      lVar5 = *(longlong *)(lVar5 + (ulonglong)param_2 * 8);
      if ((((lVar5 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        if ((*(char *)(param_1 + 0x198) == '\x01') && (*(longlong *)(lVar5 + 0x30) != 0)) {
          lVar4 = FUN_14110d11e();
          plVar2 = *(longlong **)(lVar5 + 0x30);
          if ((((plVar2 != (longlong *)0x0) && (lVar4 != 0)) && (lVar3 = plVar2[2], lVar3 != 0)) &&
             (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)) && ((char)plVar2[0x6b] == '\0')))) {
            (**(code **)(*plVar2 + 0x4d8))();
          }
        }
        FUN_1482396a4(lVar5,*(undefined1 *)(param_1 + 400));
      }
    }
  }
  if (param_3 != '\0') {
    FUN_1401861f4(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x194));
  }
  *(undefined1 *)(param_1 + 0x19a) = uVar1;
  return;
}



// FUNCTION 143aeb56e FUN_143aeb56e body=181 status=ok
// SIG undefined FUN_143aeb56e(void)

void FUN_143aeb56e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[0x30];
  if (param_2 != (longlong *)0x0 && lVar1 != 0) {
    local_20 = param_1[0x31];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = lVar1;
    (**(code **)(*param_2 + 0x2b0))(param_2,&local_28);
    FUN_1482396a4(param_2,1);
    if ((((int)param_1[0x2e] == 1) && (*(char *)((longlong)param_1 + 0x199) == '\x01')) &&
       (*(int *)((longlong)param_1 + 0x194) != 0)) {
      (**(code **)(*param_1 + 800))(param_1,0,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aeb624 FUN_143aeb624 body=351 status=ok
// SIG undefined FUN_143aeb624(void)

void FUN_143aeb624(longlong *param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = (**(code **)(*param_1 + 0x2d0))();
  if ((lVar4 != 0) && (lVar4 = FUN_140e94dc2(lVar4), lVar4 != 0)) {
    lVar5 = 0x378;
    if (*(char *)(lVar4 + 0x91) != '\x01') {
      lVar5 = (ulonglong)(*(char *)(lVar4 + 0x91) == '\x02') + 0x379;
    }
    bVar2 = *(byte *)((longlong)param_1 + lVar5);
    local_28 = &DAT_14a78527c;
    local_20 = 2;
    local_1c = 0;
    uVar3 = FUN_14001a6c0(&local_28,1);
    if ((int)param_1[0x66] != *(int *)((longlong)param_1 + 0x35c)) {
      plVar7 = param_1 + 0x6c;
      if ((longlong *)param_1[0x6d] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x6d];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)param_1[0x6e] - 1U &
                      (uVar3 << 0x10 | uVar3 & 0xffff) + ((uVar3 & 0xffff) >> 4) +
                      ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10)) * 4);
      if (iVar6 != -1) {
        do {
          puVar1 = (ulonglong *)(param_1[0x65] + (longlong)iVar6 * 0x14);
          if (*puVar1 == (ulonglong)uVar3) {
            if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
              if (((char)puVar1[1] != '\x01') || (lVar4 = 0x37b, bVar2 == 0)) {
                lVar4 = 0x37c;
              }
              goto LAB_143aeb742;
            }
            break;
          }
          iVar6 = *(int *)((longlong)puVar1 + 0xc);
        } while (iVar6 != -1);
      }
    }
    lVar4 = 0x37c - (ulonglong)bVar2;
LAB_143aeb742:
    (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined1 *)((longlong)param_1 + lVar4));
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aeb784 FUN_143aeb784 body=30 status=ok
// SIG undefined FUN_143aeb784(void)

undefined1 FUN_143aeb784(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_14823a74a();
  }
  return 1;
}



// FUNCTION 143aeb7a2 FUN_143aeb7a2 body=3432 status=ok
// SIG undefined FUN_143aeb7a2(void)

void FUN_143aeb7a2(longlong *param_1,float param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined **ppuVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong *local_218;
  uint local_20c;
  longlong local_208;
  longlong local_200;
  undefined **local_1f8;
  longlong *local_1f0;
  undefined **local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  int local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined **local_1a8;
  longlong *plStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined ***local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  (**(code **)(*param_1 + 0xd8))();
  cVar7 = FUN_14823dff6(param_1);
  if (cVar7 == '\0') goto LAB_143aebe92;
  uVar8 = (**(code **)(*param_1 + 0x60))(param_1);
  local_200 = param_3;
  if (((int)uVar8 < 0) || (*(int *)(param_3 + 0x318) <= (int)uVar8)) {
    if (*(char *)((longlong)param_1 + 0x79) != '\x01') {
      plVar18 = (longlong *)0x0;
      lVar19 = 0;
      goto LAB_143aeb8b4;
    }
    local_1b8 = 0;
    lVar19 = local_1b8;
LAB_143aebdd1:
    local_1b8 = lVar19;
    plStack_1b0 = (longlong *)0x0;
LAB_143aebdd4:
    plVar18 = plStack_1b0;
    lVar19 = local_1b8;
    local_228 = &local_1b8;
    (**(code **)(*param_1 + 0x98))(param_1,&local_158,param_2,param_3);
    uVar10 = FUN_140e94dc2(*(undefined8 *)(param_1[0xe] + 0x20));
    local_1c8 = (float)local_158;
    uStack_1c4 = local_158._4_4_;
    uStack_1c0 = (undefined4)uStack_150;
    uStack_1bc = uStack_150._4_4_;
    FUN_148217bd4(uVar10,&local_1c8,0);
  }
  else {
    lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x310) + (ulonglong)uVar8 * 0x10);
    plVar18 = *(longlong **)(*(longlong *)(param_3 + 0x310) + 8 + (ulonglong)uVar8 * 0x10);
    if (plVar18 == (longlong *)0x0) {
      if (*(char *)((longlong)param_1 + 0x79) != '\0') goto LAB_143aebdd1;
      plVar18 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      if (*(char *)((longlong)param_1 + 0x79) != '\0') {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        local_1b8 = lVar19;
        plStack_1b0 = plVar18;
        goto LAB_143aebdd4;
      }
    }
LAB_143aeb8b4:
    plVar11 = (longlong *)param_1[0x1b];
    bVar3 = true;
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      ppuVar16 = (undefined **)0x0;
    }
    else {
      iVar9 = (int)plVar11[1];
      ppuVar16 = (undefined **)0x0;
      do {
        if (iVar9 == 0) {
          plVar11 = (longlong *)0x0;
          goto LAB_143aeb8ef;
        }
        LOCK();
        iVar6 = (int)plVar11[1];
        bVar20 = iVar9 == iVar6;
        if (bVar20) {
          *(int *)(plVar11 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar20);
      ppuVar16 = (undefined **)param_1[0x1a];
      bVar3 = false;
    }
LAB_143aeb8ef:
    FUN_1400c3152(lVar19,&local_1a8);
    if (local_1a8 == (undefined **)0x0) {
      local_158 = (undefined **)0x0;
      uStack_150 = (longlong *)0x0;
    }
    else {
      FUN_14823e168(local_1a8,&local_158);
      if (local_158 != (undefined **)0x0) {
        (**(code **)(*local_158 + 0x10))(local_158,&local_1d8);
        if ((0 < local_1d0) && (plVar15 = (longlong *)*local_1d8, plVar15 != (longlong *)0x0)) {
          (**(code **)(*plVar15 + 0x58))(plVar15,&local_1e8);
          plVar15 = plStack_1a0;
          if (local_1e0 == (longlong *)0x0) {
            local_1a8 = local_1e8;
            if (plStack_1a0 != (longlong *)0x0) {
              plStack_1a0 = (longlong *)0x0;
LAB_143aec49b:
              local_1a8 = local_1e8;
              LOCK();
              plVar2 = plVar15 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                puVar14 = (undefined8 *)*plVar15;
LAB_143aec4a7:
                local_1a8 = local_1e8;
                (*(code *)*puVar14)(plVar15);
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
          else {
            LOCK();
            *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
            UNLOCK();
            local_1a8 = local_1e8;
            if (local_1e0 == plStack_1a0) {
              LOCK();
              plVar15 = local_1e0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                puVar14 = (undefined8 *)*local_1e0;
                plVar15 = local_1e0;
                goto LAB_143aec4a7;
              }
            }
            else {
              plStack_1a0 = local_1e0;
              if (plVar15 != (longlong *)0x0) goto LAB_143aec49b;
            }
          }
          plVar15 = local_1e0;
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_1e0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_1e0)(local_1e0);
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
        FUN_148258e95(local_1d8,local_1d0);
        if (local_1d8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    plVar15 = uStack_150;
    if (uStack_150 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_150 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_150)(uStack_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    ppuVar5 = local_1a8;
    if (local_1a8 == ppuVar16) {
      if (ppuVar16 != (undefined **)0x0) {
        cVar7 = FUN_146983284((longlong)local_1a8 + 0xec,param_1 + 0x1c);
        if (cVar7 != '\0') {
          if ((*(float *)((longlong)ppuVar5 + 0xfc) == *(float *)(param_1 + 0x1e)) &&
             (!NAN(*(float *)((longlong)ppuVar5 + 0xfc)) && !NAN(*(float *)(param_1 + 0x1e)))) {
            if ((*(float *)(ppuVar5 + 0x20) == *(float *)((longlong)param_1 + 0xf4)) &&
               (!NAN(*(float *)(ppuVar5 + 0x20)) && !NAN(*(float *)((longlong)param_1 + 0xf4))))
            goto LAB_143aebca1;
          }
        }
        goto LAB_143aeb9a3;
      }
    }
    else {
      cVar7 = FUN_1408025c4(lVar19,10);
      if (cVar7 != '\0') {
        local_1f8 = ppuVar5;
        local_1f0 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
          UNLOCK();
        }
        cVar7 = FUN_1401b6302(lVar19,&local_1f8);
        if (cVar7 == '\0') {
          FUN_140d95e8c(lVar19,10);
        }
      }
LAB_143aeb9a3:
      plVar2 = plStack_1a0;
      param_1[0x1a] = (longlong)local_1a8;
      plVar15 = (longlong *)param_1[0x1b];
      if (plVar15 != plStack_1a0) {
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_1a0 + 0xc) = *(int *)((longlong)plStack_1a0 + 0xc) + 1;
          UNLOCK();
          plVar15 = (longlong *)param_1[0x1b];
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
        }
        param_1[0x1b] = (longlong)plVar2;
      }
      ppuVar16 = local_1a8;
      if (local_1a8 != (undefined **)0x0) {
        local_218 = plVar18;
        FUN_140761b7a(*(undefined8 *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78),&local_158);
        plVar18 = uStack_150;
        ppuVar5 = local_158;
        if (uStack_150 != (longlong *)0x0) {
          LOCK();
          plVar15 = uStack_150 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*uStack_150)(uStack_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        plVar18 = local_218;
        if (ppuVar16 == ppuVar5) {
          lVar12 = *(longlong *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78);
          plVar15 = *(longlong **)(lVar12 + 0x138);
          if (plVar15 == (longlong *)0x0) goto LAB_143aebd08;
          iVar9 = (int)plVar15[1];
          do {
            if (iVar9 == 0) goto LAB_143aebd08;
            LOCK();
            iVar6 = (int)plVar15[1];
            bVar20 = iVar9 == iVar6;
            if (bVar20) {
              *(int *)(plVar15 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar20);
          plVar2 = *(longlong **)(lVar12 + 0x130);
          if (plVar2 == (longlong *)0x0) {
            fVar27 = 1.0;
            fVar21 = 0.0;
            fVar26 = 0.0;
            fVar25 = 0.0;
            fVar24 = 0.0;
            fVar28 = 0.0;
            fVar23 = 0.0;
            fVar22 = 1.0;
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2,&local_158,*(undefined8 *)(param_1[0xe] + 0x20));
            fVar21 = local_158._4_4_;
            fVar23 = local_138;
            fVar24 = local_12c;
            fVar22 = local_140._4_4_;
            fVar25 = local_128;
            fVar27 = local_130;
            fVar28 = local_134;
            fVar26 = (float)local_158;
          }
          LOCK();
          plVar2 = plVar15 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
          fVar26 = *(float *)(local_1a8 + 0x1a);
          fVar21 = *(float *)((longlong)local_1a8 + 0xd4);
          fVar22 = *(float *)((longlong)local_1a8 + 0xec);
          fVar23 = *(float *)(local_1a8 + 0x1e);
          fVar28 = *(float *)((longlong)local_1a8 + 0xf4);
          fVar27 = *(float *)(local_1a8 + 0x1f);
          fVar24 = *(float *)((longlong)local_1a8 + 0xfc);
          fVar25 = *(float *)(local_1a8 + 0x20);
        }
        if ((1e-08 < fVar26) && (1e-08 < fVar21)) {
          *(float *)(param_1 + 0x1c) = fVar22;
          *(float *)((longlong)param_1 + 0xe4) = fVar23;
          *(float *)(param_1 + 0x1d) = fVar28;
          *(float *)((longlong)param_1 + 0xec) = fVar27;
          *(float *)(param_1 + 0x1e) = fVar24;
          *(float *)((longlong)param_1 + 0xf4) = fVar25;
          FUN_141653418(lVar19,10,(int)(fVar26 * 0.5 * fVar22 + fVar21 * 0.5 * fVar28 + fVar24),
                        (int)(fVar23 * fVar26 * 0.5 + fVar27 * fVar21 * 0.5 + fVar25));
          goto LAB_143aebca1;
        }
      }
LAB_143aebd08:
      FUN_14823e212(param_1,&DAT_14c8463f0);
    }
LAB_143aebca1:
    plVar15 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_1a0)(plStack_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (!bVar3) {
      LOCK();
      plVar15 = plVar11 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
  }
  if (((*(char *)((longlong)param_1 + 0x7a) == '\x01') &&
      (fVar26 = *(float *)(param_1 + 0x1f), *(float *)(param_1 + 0x1f) = fVar26 - param_2,
      fVar26 - param_2 <= 0.0)) &&
     (0.04000000283122063 <
      (double)param_1[0xc] * (double)param_1[0xc] + (double)param_1[0xd] * (double)param_1[0xd])) {
    FUN_14823e3cc(param_1[0xe],&local_1d8);
    if (0 < local_1d0) {
      plVar11 = (longlong *)FUN_145b1117c();
      lVar12 = plVar11[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 1000))(plVar11);
        lVar12 = plVar11[0x22];
      }
      fVar21 = (float)(double)param_1[0xd];
      fVar26 = *(float *)(lVar12 + 0x70);
      fVar22 = 0.0;
      fVar23 = 0.0;
      if (0.0 < ABS(fVar21) - fVar26) {
        fVar23 = (float)(-(uint)(0.0 < fVar21) & 0xbf800000 |
                        ~-(uint)(0.0 < fVar21) &
                        *(uint *)(&DAT_14ae3e1c8 + (ulonglong)(fVar21 < 0.0) * 4)) *
                 ((ABS(fVar21) - fVar26) / (1.0 - fVar26)) * *(float *)(lVar12 + 0x78);
      }
      fVar21 = (float)(double)param_1[0xc];
      if (0.0 < ABS(fVar21) - fVar26) {
        fVar22 = (float)(-(uint)(0.0 < fVar21) & 0xbf800000 |
                        ~-(uint)(0.0 < fVar21) &
                        *(uint *)(&DAT_14ae3e1c8 + (ulonglong)(fVar21 < 0.0) * 4)) *
                 ((ABS(fVar21) - fVar26) / (1.0 - fVar26)) * *(float *)(lVar12 + 0x78);
      }
      if ((longlong)local_1d0 != 0) {
        local_208 = (longlong)local_1d0 << 3;
        lVar17 = 0;
        local_20c = (uint)lVar12;
        local_218 = local_1d8;
        plVar11 = local_1d8;
        do {
          uVar10 = *(undefined8 *)((longlong)plVar11 + lVar17);
          FUN_140760c2c(uVar10,&local_158);
          plVar11 = uStack_150;
          ppuVar16 = local_158;
          if (uStack_150 != (longlong *)0x0) {
            LOCK();
            plVar15 = uStack_150 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*uStack_150)(uStack_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          plVar11 = local_218;
          lVar12 = local_208;
          if (ppuVar16 != (undefined **)0x0) {
            iVar9 = (**(code **)(*param_1 + 200))(param_1,uVar10);
            fVar26 = fVar23;
            if (iVar9 != 1) {
              fVar26 = fVar22;
            }
            plVar11 = local_218;
            lVar12 = local_208;
            if (1e-08 < ABS(fVar26)) {
              pfVar13 = (float *)FUN_14775b4e6(uVar10);
              plVar15 = (longlong *)
                        (double)(pfVar13[8] * *pfVar13 * 0.5 + pfVar13[10] * pfVar13[1] * 0.5 +
                                pfVar13[0xc]);
              ppuVar16 = (undefined **)
                         (double)(*pfVar13 * 0.5 * pfVar13[7] + pfVar13[1] * 0.5 * pfVar13[9] +
                                 pfVar13[0xb]);
              local_1e8 = ppuVar16;
              local_1e0 = plVar15;
              cVar7 = FUN_14823e59c(param_1,&local_1e8);
              lVar12 = local_208;
              plVar2 = DAT_14c964d38;
              uVar4 = DAT_14c964d30;
              uVar10 = DAT_14c964d28;
              plVar11 = local_218;
              if (cVar7 != '\0') {
                if (DAT_14c964d38 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c964d38 + 1) = (int)DAT_14c964d38[1] + 1;
                  UNLOCK();
                  plVar15 = local_1e0;
                  ppuVar16 = local_1e8;
                }
                local_20c = local_20c & 0xfe00;
                local_188 = 0;
                local_180 = 0;
                local_1a8 = (undefined **)0x0;
                plStack_1a0 = (longlong *)0x0;
                local_17c = 0xffffffff00000080;
                local_174 = 0;
                local_168 = 0;
                local_160 = 0;
                local_134 = (float)(double)plVar15;
                local_138 = (float)(double)ppuVar16;
                local_148 = *(undefined4 *)(lVar19 + 0x18);
                uStack_150._0_3_ = (uint3)(ushort)local_20c;
                uStack_150 = (longlong *)CONCAT44(local_148,(undefined4)uStack_150);
                local_140 = 0;
                local_158 = &PTR_FUN_149eda650;
                local_124 = local_134 - local_134;
                local_128 = local_138 - local_138;
                local_120 = &local_1a8;
                local_118 = uVar10;
                local_110 = uVar4;
                local_108 = plVar2;
                local_130 = local_138;
                local_12c = local_134;
                local_ec = fVar26;
                if (plVar2 == (longlong *)0x0) {
                  local_100 = 10;
                  local_f8 = 0x3f800000;
                  local_f4 = 0;
                  local_f0 = 0;
                  local_e8 = 0;
                  local_e6 = 0;
                }
                else {
                  LOCK();
                  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                  UNLOCK();
                  local_100 = 10;
                  local_f8 = 0x3f800000;
                  local_f4 = 0;
                  local_f0 = 0;
                  local_e8 = 0;
                  local_e6 = 0;
                  LOCK();
                  plVar11 = plVar2 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
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
                local_160 = 0;
                if (local_168 != 0) {
                  FUN_1400020a8();
                }
                FUN_1405535a6(&local_1a8);
                FUN_141519358(local_200,&local_158,0);
                plVar15 = local_108;
                plVar11 = local_218;
                local_158 = &PTR_FUN_149eda650;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_108 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_108)(local_108);
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
            }
          }
          lVar17 = lVar17 + 8;
        } while (lVar12 != lVar17);
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      FUN_1400020a8(local_1d8);
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
LAB_143aebe92:
  plVar18 = *(longlong **)(param_4 + 8);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aec50c FUN_143aec50c body=379 status=ok
// SIG undefined FUN_143aec50c(void)

ulonglong FUN_143aec50c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  char cVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar6 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if ((cVar6 == '\0') ||
     (((lVar8 = *(longlong *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78), lVar8 != 0 &&
       (plVar4 = *(longlong **)(lVar8 + 0x40), plVar4 != (longlong *)0x0)) &&
      (cVar6 = (**(code **)(*plVar4 + 0x3c8))(), cVar6 != '\0')))) {
    uVar9 = 0;
    goto LAB_143aec660;
  }
  lVar8 = *(longlong *)(param_3 + 0x20);
  plVar4 = *(longlong **)(param_3 + 0x30);
  if (plVar4 == (longlong *)0x0) {
    if (lVar8 == DAT_14c966d68) goto LAB_143aec5ae;
LAB_143aec616:
    cVar10 = '\0';
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966d68;
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
    if (lVar8 != lVar5) goto LAB_143aec616;
LAB_143aec5ae:
    bVar3 = *(byte *)(param_3 + 10);
    plVar4 = (longlong *)param_1[0xe];
    local_58 = *(undefined8 *)(param_3 + 0x20);
    local_50 = *(undefined8 *)(param_3 + 0x28);
    local_48 = *(longlong *)(param_3 + 0x30);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*plVar4 + 0x2d0))(plVar4,&local_58,(uint)bVar3 * 2);
    if (cVar6 == '\0') {
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      goto LAB_143aec660;
    }
    uVar9 = 0;
    cVar6 = (**(code **)(*param_1 + 0xb8))(param_1,param_3,0);
    cVar10 = '\x01';
    if (cVar6 == '\0') goto LAB_143aec660;
  }
  lVar8 = FUN_140e94dc2(*(undefined8 *)(param_1[0xe] + 0x20));
  if (*(char *)(lVar8 + 0x100) != cVar10) {
    *(char *)(lVar8 + 0x100) = cVar10;
  }
  uVar7 = FUN_1469a3b5c(param_1,param_2,param_3);
  uVar9 = (ulonglong)uVar7;
  if (*(char *)(lVar8 + 0x100) != '\0') {
    *(undefined1 *)(lVar8 + 0x100) = 0;
  }
LAB_143aec660:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143aec688 FUN_143aec688 body=273 status=ok
// SIG undefined FUN_143aec688(void)

undefined8 FUN_143aec688(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar6 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (cVar6 == '\0') {
LAB_143aec76f:
    uVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_3 + 0x20);
    plVar4 = *(longlong **)(param_3 + 0x30);
    lVar5 = DAT_14c966d68;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c966d68;
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
      plVar4 = (longlong *)param_1[0xe];
      local_50 = *(undefined8 *)(param_3 + 0x20);
      local_48 = *(undefined8 *)(param_3 + 0x28);
      local_40 = *(longlong *)(param_3 + 0x30);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar4 + 0x2d0))(plVar4,&local_50,1);
      if (cVar6 == '\0') {
        uVar7 = 1;
        goto LAB_143aec771;
      }
      cVar6 = (**(code **)(*param_1 + 0xb8))(param_1,param_3,1);
      if (cVar6 == '\0') goto LAB_143aec76f;
    }
    uVar7 = FUN_1469a3eec(param_1,param_2,param_3);
  }
LAB_143aec771:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143aec79a FUN_143aec79a body=69 status=ok
// SIG undefined FUN_143aec79a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aec79a(void)

{
  _DAT_14cb460e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aec7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb460f0,1);
  return;
}



// FUNCTION 143aec7e0 FUN_143aec7e0 body=3596 status=ok
// SIG undefined FUN_143aec7e0(void)

void FUN_143aec7e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  int iVar26;
  undefined4 *puVar27;
  byte bVar28;
  undefined1 uVar29;
  undefined4 *puVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  longlong *plVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  uint uVar39;
  int iVar40;
  undefined4 *puVar41;
  int iVar42;
  float fVar43;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  wchar_t *local_4b8;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  code **local_4a0;
  undefined1 *local_498;
  undefined1 *local_490;
  ulonglong *local_480;
  ulonglong local_478;
  longlong *local_470;
  longlong *local_468;
  undefined4 *local_460;
  undefined4 *local_458;
  longlong local_450;
  longlong *local_448;
  code *local_440;
  undefined1 local_438;
  undefined4 *local_434;
  longlong *local_428;
  longlong *local_420;
  ulonglong local_418;
  undefined8 uStack_410;
  longlong local_408;
  longlong *local_400;
  int local_3f8;
  undefined4 local_3f4;
  code *local_3f0;
  int iStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  code *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  byte local_3b9;
  longlong local_3b8;
  ulonglong uStack_3b0;
  undefined1 local_3a8 [16];
  longlong local_398;
  undefined4 local_390;
  uint local_38c;
  undefined4 uStack_388;
  undefined4 local_384;
  longlong local_378;
  undefined4 local_370;
  ulonglong local_368;
  longlong *local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  (**(code **)(*param_1 + 0x310))();
  *(undefined1 *)(param_1 + 0x4e) = 0;
  lVar33 = 0;
  FUN_145e12b26(param_1,0);
  local_470 = param_1;
  lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar11 != 0) {
    lVar33 = *(longlong *)(lVar11 + 0x1f0);
  }
  lVar11 = (**(code **)(*local_470 + 0x2d0))();
  local_400 = (longlong *)0x0;
  local_3f8 = *(int *)(lVar33 + 0x40);
  lVar21 = (longlong)local_3f8;
  pvVar4 = *(void **)(lVar33 + 0x38);
  if (lVar21 == 0) {
    local_3f4 = 0;
    plVar14 = local_470;
  }
  else {
    local_450 = lVar11;
    FUN_140e62166(&local_400,local_3f8,0);
    memcpy(local_400,pvVar4,lVar21 << 3);
    uVar35 = (ulonglong)local_3f8;
    if (0 < (longlong)uVar35) {
      local_468 = local_400;
      uVar15 = 1;
      do {
        if ((uVar15 < uVar35) && (local_450 != local_400[uVar15])) {
          lVar33 = local_400[uVar15 - 1];
          local_400[uVar15 - 1] = local_400[uVar15];
          local_400[uVar15] = lVar33;
        }
        uVar16 = uVar15 + 1;
        uVar15 = uVar15 + 2;
      } while (uVar16 < uVar35);
      if (2 < local_3f8) {
        iVar17 = 2;
        do {
          iVar42 = iVar17 * 2;
          local_478 = CONCAT44(local_478._4_4_,iVar42);
          local_460 = (undefined4 *)(longlong)iVar42;
          lVar33 = 0;
          do {
            iVar34 = local_3f8 - (int)lVar33;
            if (iVar42 <= iVar34) {
              iVar34 = iVar42;
            }
            if (iVar17 < iVar34 && 0 < iVar17) {
              iVar22 = 0;
              iVar26 = iVar17;
              while( true ) {
                iVar20 = 0;
                if (iVar26 - iVar22 != 0 && iVar22 <= iVar26) {
                  iVar20 = 0;
                  uVar10 = iVar26 - iVar22;
                  do {
                    iVar40 = (uVar10 & 1) + (uVar10 >> 1) + iVar20;
                    if (local_450 != local_400[lVar33 + iVar26]) {
                      iVar40 = iVar20;
                    }
                    iVar20 = iVar40;
                    bVar5 = 1 < uVar10;
                    uVar10 = uVar10 >> 1;
                  } while (bVar5);
                }
                iVar20 = iVar20 + iVar22;
                iVar22 = iVar26 - iVar20;
                if (iVar22 == 0 || iVar26 < iVar20) break;
                if (iVar34 - iVar26 == 0 || iVar34 < iVar26) {
                  iVar40 = 0;
                }
                else {
                  plVar14 = local_400 + lVar33 + iVar20;
                  iVar40 = 0;
                  uVar15 = (ulonglong)(uint)(iVar34 - iVar26);
                  do {
                    uVar39 = iVar40 + (int)(uVar15 >> 1);
                    uVar10 = (uint)uVar15;
                    if (local_450 != (local_400 + lVar33 + iVar26)[uVar39]) {
                      iVar40 = uVar39 + (uVar10 & 1);
                    }
                    uVar15 = uVar15 >> 1;
                  } while (1 < uVar10);
                  iVar26 = iVar26 + iVar40;
                  if (0 < iVar40) {
                    plVar18 = plVar14 + (iVar26 - iVar20);
                    plVar23 = plVar14 + iVar22;
                    plVar36 = plVar14 + iVar22;
                    do {
                      while( true ) {
                        plVar1 = plVar23 + 1;
                        lVar11 = *plVar14;
                        *plVar14 = *plVar23;
                        plVar14 = plVar14 + 1;
                        *plVar23 = lVar11;
                        if (plVar1 == plVar18) break;
                        plVar23 = plVar1;
                        if (plVar14 == plVar36) {
                          plVar36 = plVar1;
                        }
                      }
                      plVar23 = plVar36;
                    } while (plVar14 != plVar36);
                  }
                }
                if ((iVar34 <= iVar26) || (iVar22 = iVar20 + iVar40 + 1, iVar26 <= iVar22)) break;
              }
            }
            lVar33 = lVar33 + (longlong)local_460;
          } while (lVar33 < (longlong)uVar35);
          iVar17 = iVar42;
        } while (iVar42 < local_3f8);
      }
    }
    plVar14 = local_470;
    if (local_3f8 != 0) {
      local_448 = local_400 + local_3f8;
      plVar18 = local_400;
      do {
        lVar33 = *plVar18;
        local_468 = plVar18;
        if ((lVar33 == local_450) || ((char)plVar14[0x4b] == '\0')) {
          local_408 = plVar14[0x4a];
          if ((local_408 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          cVar9 = FUN_14772cb0e(plVar14);
          if (((lVar33 != 0) && (cVar9 != '\0')) &&
             (pcVar12 = (code *)FUN_1403f18c8(lVar33), pcVar12 != (code *)0x0)) {
            lVar33 = FUN_140e94dc2();
            uVar29 = *(undefined1 *)(lVar33 + 0x91);
            puVar24 = *(undefined4 **)(lVar33 + 0x94);
            local_398 = 0;
            local_390 = 0;
            local_3b8 = 0;
            uStack_3b0 = 0;
            local_38c = 0x80;
            uStack_388 = 0xffffffff;
            local_384 = 0;
            local_378 = 0;
            local_370 = 0;
            local_3d8 = (code *)0x0;
            iStack_3d0 = *(int *)(*(longlong *)(pcVar12 + 0x98) + 0x20);
            lVar33 = (longlong)iStack_3d0;
            pvVar4 = *(void **)(*(longlong *)(pcVar12 + 0x98) + 0x18);
            if (lVar33 == 0) {
              uStack_3cc = 0;
            }
            else {
              FUN_14825aeca(&local_3d8,iStack_3d0);
              memcpy(local_3d8,pvVar4,lVar33 << 2);
            }
            if (*(longlong *)(pcVar12 + 0x88) != 0) {
              FUN_143af7774();
            }
            pcVar7 = local_3d8;
            local_428 = &local_3b8;
            local_418 = 0;
            uStack_410 = 0;
            lVar33 = (longlong)iStack_3d0;
            local_440 = pcVar12;
            local_438 = uVar29;
            local_434 = puVar24;
            local_420 = plVar14;
            if (lVar33 != 0) {
              local_478 = CONCAT71(local_478._1_7_,uVar29);
              lVar11 = 0;
              local_460 = puVar24;
              do {
                plVar14 = local_420;
                FUN_143af5e68(&local_368);
                uVar35 = local_368;
                if ((local_368 == 0) ||
                   ((*(char *)(local_368 + 0x19) == '\0' && (DAT_14cb460e0 != '\x01')))) {
LAB_143aecc7f:
                  bVar28 = 0;
                }
                else {
                  cVar9 = FUN_14821c4a8();
                  if ((cVar9 == '\0') ||
                     (((*(int *)(uVar35 + 0xd4) == 0 ||
                       (uVar10 = *(uint *)(uVar35 + 0xd0), (int)uVar10 < 0)) ||
                      ((DAT_14c9647dc <= (int)uVar10 ||
                       (((plVar18 = (longlong *)
                                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                         plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(uVar35 + 0xd4)))
                        || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))))))) {
LAB_143aecd65:
                    if (((*(longlong *)(uVar35 + 0xc0) == 0) ||
                        (lVar21 = FUN_143af2270(*(longlong *)(uVar35 + 0xc0),
                                                *(undefined8 *)(uVar35 + 200),&DAT_149dfb77a,1),
                        lVar21 == 0)) ||
                       (cVar9 = FUN_148237230(lVar21,local_438,&local_434), cVar9 == '\0'))
                    goto LAB_143aecc7f;
                    cVar9 = *(char *)((longlong)plVar14 + 0x259);
                  }
                  else {
                    lVar21 = *plVar18;
                    lVar31 = DAT_14c9647c8;
                    if ((lVar21 == 0) || (DAT_14c950c29 == 0)) {
                      if (lVar21 == 0) goto LAB_143aecd65;
                    }
                    else {
                      FUN_1456cec3c(lVar21);
                    }
                    uVar35 = CONCAT71((int7)((ulonglong)lVar31 >> 8),local_438);
                    lVar31 = *(longlong *)(local_440 + 0x20);
                    if (lVar31 == 0) {
LAB_143aece3f:
                      lVar31 = 0;
                    }
                    else {
                      if (DAT_14cae9568 == 0) {
                        local_3f0 = FUN_1417de738;
                        local_490 = &LAB_145893408;
                        local_498 = &LAB_1458cbbd2;
                        local_4a8 = &LAB_147ba21f1;
                        local_4b0 = &LAB_1463e9233;
                        local_4b8 = L"Engine";
                        local_4c0 = 0;
                        local_4c8 = 0x1000000c;
                        local_4d0 = 8;
                        local_4d8 = 0x2b8;
                        local_458 = (undefined4 *)CONCAT71(local_458._1_7_,local_438);
                        puVar32 = &DAT_14cae9568;
                        local_4a0 = &local_3f0;
                        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0
                                     );
                        uVar35 = CONCAT71((int7)((ulonglong)puVar32 >> 8),local_458._0_1_);
                      }
                      if ((*(int *)(*(longlong *)(lVar31 + 0x10) + 0x38) <
                           *(int *)(DAT_14cae9568 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30))
                      goto LAB_143aece3f;
                    }
                    cVar9 = FUN_148237a0e(lVar31,uVar35 & 0xffffffff,lVar21);
                    if (cVar9 == '\0') goto LAB_143aecc7f;
                    cVar9 = *(char *)((longlong)plVar14 + 0x259);
                    uVar35 = local_368;
                  }
                  bVar28 = 1;
                  if (cVar9 == '\x01') {
                    local_3b9 = 0;
                    FUN_144a13f80(local_428,&local_3f0,uVar35,&local_3b9);
                    bVar28 = local_3b9 ^ 1;
                  }
                }
                plVar14 = local_360;
                if (local_360 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = local_360 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*local_360)(local_360);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                    }
                  }
                }
                if (bVar28 != 0) {
                  lVar21 = (longlong)(int)uStack_410;
                  uVar10 = (int)uStack_410 + 1;
                  uStack_410 = CONCAT44(uStack_410._4_4_,uVar10);
                  if (uStack_410._4_4_ < uVar10) {
                    FUN_14825432c(&local_418);
                  }
                  *(undefined4 *)(local_418 + lVar21 * 4) = *(undefined4 *)(pcVar7 + lVar11);
                }
                lVar11 = lVar11 + 4;
              } while (lVar33 * 4 != lVar11);
              puVar24 = local_460;
              uVar29 = (undefined1)local_478;
            }
            if (local_3d8 != (code *)0x0) {
              FUN_1400020a8(local_3d8);
            }
            uVar35 = local_418;
            iStack_3e8 = CONCAT31(iStack_3e8._1_3_,uVar29);
            uStack_3e4 = SUB84(puVar24,0);
            uStack_3e0 = (undefined4)((ulonglong)puVar24 >> 0x20);
            iVar17 = (int)uStack_410;
            lVar33 = (longlong)(int)uStack_410;
            local_3f0 = pcVar12;
            if (1 < lVar33) {
              memset(local_358,0,0x2f0);
              local_368 = uVar35;
              local_360 = (longlong *)(uVar35 + lVar33 * 4 + -4);
              fVar43 = logf((float)iVar17);
              local_358[0] = (int)(longlong)(fVar43 + fVar43);
              puVar19 = &local_368;
              do {
                puVar27 = (undefined4 *)*puVar19;
                puVar25 = (undefined4 *)puVar19[1];
                iVar17 = (int)puVar19[2];
                iVar42 = (int)((ulonglong)((longlong)puVar25 - (longlong)puVar27) >> 2);
                uVar10 = iVar42 + 1;
                puVar24 = puVar25;
                puVar38 = puVar27;
                local_480 = puVar19;
                if (iVar17 != 0) {
LAB_143aed021:
                  if (8 < (int)uVar10) {
                    local_478 = CONCAT44(local_478._4_4_,iVar17);
                    uVar3 = puVar27[uVar10 >> 1];
                    puVar27[uVar10 >> 1] = *puVar27;
                    *puVar27 = uVar3;
                    puVar37 = puVar24 + 1;
                    puVar41 = puVar27;
                    local_460 = puVar25;
                    local_458 = puVar38;
                    do {
                      puVar25 = puVar41 + 1;
                      puVar8 = puVar41 + 1;
                      do {
                        puVar41 = puVar8;
                        puVar38 = puVar25;
                        if (puVar24 < puVar41) break;
                        cVar9 = FUN_143af2804(&local_3f0,puVar27,puVar41);
                        puVar25 = puVar38 + 1;
                        puVar8 = puVar41 + 1;
                      } while (cVar9 == '\0');
                      puVar8 = puVar37 + -2;
                      do {
                        puVar30 = puVar37;
                        puVar25 = puVar8;
                        puVar37 = puVar30 + -1;
                        if (puVar37 <= puVar27) break;
                        cVar9 = FUN_143af2804(&local_3f0,puVar37,puVar27);
                        puVar8 = puVar25 + -1;
                      } while (cVar9 == '\0');
                      if (puVar37 < puVar41) goto LAB_143aed0ce;
                      uVar3 = *puVar41;
                      *puVar41 = *puVar37;
                      *puVar37 = uVar3;
                    } while( true );
                  }
                  for (; puVar19 = local_480, puVar38 = puVar27, puVar25 = puVar27,
                      puVar27 < puVar24; puVar24 = puVar24 + -1) {
                    while (puVar37 = puVar38, puVar25 = puVar25 + 1, puVar25 <= puVar24) {
                      cVar9 = FUN_143af2804(&local_3f0,puVar37,puVar25);
                      puVar38 = puVar25;
                      if (cVar9 == '\0') {
                        puVar38 = puVar37;
                      }
                    }
                    uVar3 = *puVar37;
                    *puVar37 = *puVar24;
                    *puVar24 = uVar3;
                  }
                  goto LAB_143aed398;
                }
LAB_143aed18d:
                local_3c8 = CONCAT44(uStack_3dc,uStack_3e0);
                local_3d8 = local_3f0;
                iStack_3d0 = iStack_3e8;
                uStack_3cc = uStack_3e4;
                puVar19 = local_480;
                if (uVar10 != 0) {
                  uVar39 = (iVar42 - (iVar42 + -1 >> 0x1f)) + -1 >> 1;
                  do {
                    local_478 = (ulonglong)uVar39;
                    uVar35 = local_478;
                    while (uVar6 = uVar39 * 2 + 1, (int)uVar6 < (int)uVar10) {
                      uVar15 = (ulonglong)uVar6;
                      uVar39 = uVar39 * 2 + 2;
                      if (((int)uVar39 < (int)uVar10) &&
                         (cVar9 = FUN_143af2804(&local_3d8,puVar27 + (int)uVar39,
                                                puVar27 + (int)uVar6), cVar9 == '\0')) {
                        uVar15 = (ulonglong)uVar39;
                      }
                      uVar39 = (uint)uVar15;
                      puVar24 = puVar27 + (int)uVar35;
                      puVar25 = puVar27 + (int)uVar39;
                      cVar9 = FUN_143af2804(&local_3d8,puVar24,puVar25);
                      if (cVar9 == '\0') break;
                      uVar3 = *puVar24;
                      *puVar24 = *puVar25;
                      *puVar25 = uVar3;
                      uVar35 = uVar15;
                    }
                    uVar39 = (int)local_478 - 1;
                  } while ((int)local_478 != 0);
                  puVar19 = local_480;
                  if (1 < (int)uVar10) {
                    uVar35 = (ulonglong)uVar10;
                    uVar3 = *puVar27;
                    *puVar27 = puVar27[uVar35 - 1];
                    puVar27[uVar35 - 1] = uVar3;
                    if (uVar10 != 2) {
                      do {
                        local_478 = uVar35 - 1;
                        iVar17 = 0;
                        iVar34 = 1;
                        iVar42 = 0;
                        do {
                          iVar17 = iVar17 + 2;
                          iVar26 = iVar34;
                          if (((longlong)iVar17 < (longlong)local_478) &&
                             (cVar9 = FUN_143af2804(&local_3d8,puVar27 + iVar17,puVar27 + iVar34),
                             cVar9 == '\0')) {
                            iVar26 = iVar17;
                          }
                          puVar24 = puVar27 + iVar42;
                          puVar25 = puVar27 + iVar26;
                          cVar9 = FUN_143af2804(&local_3d8,puVar24,puVar25);
                          if (cVar9 == '\0') break;
                          uVar3 = *puVar24;
                          *puVar24 = *puVar25;
                          *puVar25 = uVar3;
                          iVar17 = iVar26 * 2;
                          iVar34 = iVar26 * 2 + 1;
                          iVar42 = iVar26;
                        } while ((longlong)iVar34 < (longlong)local_478);
                        uVar3 = *puVar27;
                        *puVar27 = puVar27[local_478 - 1];
                        puVar27[local_478 - 1] = uVar3;
                        puVar19 = local_480;
                        uVar35 = local_478;
                      } while (2 < local_478);
                    }
                  }
                }
LAB_143aed398:
                puVar19 = puVar19 + -3;
              } while (&local_368 <= puVar19);
            }
            uVar35 = local_418;
            if ((int)uStack_410 != 0) {
              lVar33 = (longlong)(int)uStack_410;
              lVar11 = 0;
              do {
                local_368 = CONCAT44(local_368._4_4_,*(undefined4 *)(uVar35 + lVar11));
                lVar21 = (**(code **)(*local_470 + 800))(local_470,&local_368);
                if (lVar21 != 0) {
                  uVar13 = FUN_145a79f50();
                  plVar14 = (longlong *)FUN_144718840(lVar21,uVar13);
                  if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14,local_368 & 0xffffffff);
                    (**(code **)(*local_470 + 0x308))(local_470,plVar14,&local_368);
                  }
                }
                lVar11 = lVar11 + 4;
              } while (lVar33 * 4 != lVar11);
            }
            plVar14 = local_470;
            if (local_418 != 0) {
              FUN_1400020a8(local_418);
            }
            local_370 = 0;
            if (local_378 != 0) {
              FUN_1400020a8();
            }
            uVar35 = uStack_3b0 >> 0x20;
            uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
            if ((int)uVar35 != 0) {
              FUN_14472eb64(&local_3b8,0);
            }
            uStack_388 = 0xffffffff;
            local_384 = 0;
            local_390 = 0;
            if (0x80 < local_38c) {
              local_38c = 0x80;
              FUN_1446efbd8(local_3a8,0);
            }
            if (local_398 != 0) {
              FUN_1400020a8();
            }
            if (local_3b8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        plVar18 = local_468 + 1;
      } while (plVar18 != local_448);
    }
  }
  FUN_1447cd2ec(plVar14 + 0x4c,0);
  (**(code **)(*plVar14 + 0x318))(plVar14);
  if (local_400 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143aed0ce:
  uVar3 = *puVar27;
  *puVar27 = *puVar37;
  *puVar37 = uVar3;
  iVar17 = (int)local_478 + -1;
  puVar30 = puVar30 + -2;
  if ((longlong)puVar25 - (longlong)local_458 < (longlong)local_460 - (longlong)puVar38) {
    puVar19 = local_480;
    if (puVar41 < puVar24) {
      *local_480 = (ulonglong)puVar41;
      local_480[1] = (ulonglong)puVar24;
      *(int *)(local_480 + 2) = iVar17;
      puVar19 = local_480 + 3;
    }
    puVar38 = puVar27;
    if (puVar37 <= puVar27 + 1) goto LAB_143aed398;
  }
  else {
    if (puVar27 + 1 < puVar37) {
      *local_480 = (ulonglong)puVar27;
      local_480[1] = (ulonglong)puVar30;
      *(int *)(local_480 + 2) = iVar17;
      local_480 = local_480 + 3;
    }
    puVar19 = local_480;
    puVar25 = puVar24;
    puVar27 = puVar41;
    puVar30 = puVar24;
    if (puVar24 <= puVar41) goto LAB_143aed398;
  }
  local_480 = puVar19;
  iVar42 = (int)((ulonglong)((longlong)puVar25 - (longlong)puVar38) >> 2);
  uVar10 = iVar42 + 1;
  puVar24 = puVar30;
  if (iVar17 == 0) goto LAB_143aed18d;
  goto LAB_143aed021;
}



// FUNCTION 143aed5f2 FUN_143aed5f2 body=268 status=ok
// SIG undefined FUN_143aed5f2(void)

void FUN_143aed5f2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_1 + -0x13b0;
  FUN_143af5e68(&local_38,*(undefined4 *)(param_1 + 0x10));
  if (local_38 != 0) {
    FUN_140457ffc(local_38 + 0x78,lVar4);
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
  *(undefined4 *)(param_1 + 0x10) = param_2;
  (**(code **)(*(longlong *)(param_1 + -0x13b0) + 0x4f0))(lVar4);
  FUN_143af5e68(&local_38,param_2);
  if (local_38 != 0) {
    local_50 = &LAB_148226962;
    local_48 = 0;
    FUN_14823f650(local_38 + 0x78,local_40,lVar4);
  }
  if (local_30 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aed700 FUN_143aed700 body=152 status=ok
// SIG undefined FUN_143aed700(void)

void FUN_143aed700(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148227698();
  FUN_143af5e68(&local_28,*(undefined4 *)(param_1 + 0x13c0));
  if (((local_28 != 0) && (*(int *)(local_28 + 0x48) != 0)) &&
     (*(longlong **)(local_28 + 0x40) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(local_28 + 0x40) + 0x60))();
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aed7aa FUN_143aed7aa body=659 status=ok
// SIG undefined FUN_143aed7aa(void)

void FUN_143aed7aa(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong *local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68 [2];
  longlong *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[0x275] != 0) {
    FUN_143ae5cf6(param_1[0x275],(int)param_1[0x278]);
    FUN_143ae583c(param_1[0x275],&local_58);
    cVar3 = FUN_143af6288(param_1 + 0x278);
    if (cVar3 != '\0') {
      plVar5 = (longlong *)FUN_1412865a4(param_1 + 0x278);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
        if (lVar6 != 0) {
          lVar7 = (**(code **)(*param_1 + 0x2d0))(param_1);
          if (lVar6 != lVar7) {
            iVar4 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 0x38))
                              (*(longlong **)(DAT_14c98e618 + 0x720),*(undefined4 *)(lVar6 + 0xe0));
            local_78 = 0;
            plStack_70 = (longlong *)0x0;
            FUN_1413a454c(local_68,iVar4 + 1,0);
            local_48 = L"OtherPlayerActionFormat";
            local_40 = 0x17;
            FUN_1446e940c(local_9c,&local_48);
            local_48 = L"CommonBoundActionButton";
            local_40 = 0x17;
            FUN_1446e940c(local_a0,&local_48);
            local_48 = L"[P{PlayerNum}] {ActionName}";
            local_40 = 0x1b;
            FUN_140208c1e(local_98,local_a0,local_9c,&local_48);
            FUN_14023409e(local_88,local_98,1);
            FUN_14823f7f0(&local_48,local_88,local_68,&local_58);
            FUN_140008f88(&local_58,&local_48);
            if (local_48 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_48 + 0x10))();
            }
            if (local_98[0] != (longlong *)0x0) {
              (**(code **)(*local_98[0] + 0x10))();
            }
            if (local_68[0] != (longlong *)0x0) {
              (**(code **)(*local_68[0] + 0x10))();
            }
            plVar5 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_70 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_70)(plStack_70);
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
        }
      }
    }
    plVar5 = (longlong *)param_1[0x277];
    if (plVar5 != (longlong *)0x0) {
      local_b0 = local_58;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_a8 = local_50;
      (**(code **)(*plVar5 + 0x348))(plVar5);
    }
    uVar8 = FUN_14477b072(param_1,DAT_14cb460f8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,0);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aeda3e FUN_143aeda3e body=69 status=ok
// SIG undefined FUN_143aeda3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aeda3e(void)

{
  _DAT_14cb46170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aeda80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46178,1);
  return;
}



// FUNCTION 143aeda83 FUN_143aeda83 body=69 status=ok
// SIG undefined FUN_143aeda83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aeda83(void)

{
  _DAT_14cb46180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46188,1);
  return;
}



// FUNCTION 143aedac8 FUN_143aedac8 body=69 status=ok
// SIG undefined FUN_143aedac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedac8(void)

{
  _DAT_14cb46190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedb0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46198,1);
  return;
}



// FUNCTION 143aedb0d FUN_143aedb0d body=69 status=ok
// SIG undefined FUN_143aedb0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedb0d(void)

{
  _DAT_14cb461a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb461a8,1);
  return;
}



// FUNCTION 143aedb52 FUN_143aedb52 body=69 status=ok
// SIG undefined FUN_143aedb52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedb52(void)

{
  _DAT_14cb461b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb461c0,1);
  return;
}



// FUNCTION 143aedb97 FUN_143aedb97 body=69 status=ok
// SIG undefined FUN_143aedb97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedb97(void)

{
  _DAT_14cb461d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedbd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb461d8,1);
  return;
}



// FUNCTION 143aedbdc FUN_143aedbdc body=69 status=ok
// SIG undefined FUN_143aedbdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedbdc(void)

{
  _DAT_14cb461e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb461e8,1);
  return;
}



// FUNCTION 143aedc21 FUN_143aedc21 body=69 status=ok
// SIG undefined FUN_143aedc21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedc21(void)

{
  _DAT_14cb461f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedc63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46200,1);
  return;
}



// FUNCTION 143aedc66 FUN_143aedc66 body=69 status=ok
// SIG undefined FUN_143aedc66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aedc66(void)

{
  _DAT_14cb46208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aedca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46210,1);
  return;
}



// FUNCTION 143aedcac FUN_143aedcac body=578 status=ok
// SIG undefined FUN_143aedcac(void)

undefined4 *
FUN_143aedcac(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143af4886(&local_3c,param_3,param_4);
  cVar5 = FUN_143af6288(&local_3c);
  if (cVar5 == '\0') {
    *param_2 = 0xffffffff;
    goto LAB_143aedcf6;
  }
  if (param_3 == 0) {
LAB_143aedd58:
    FUN_148240662(param_1,&local_50,param_3);
  }
  else {
    lVar6 = FUN_14110d11e();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) != lVar6 + 0x30)) goto LAB_143aedd58;
    FUN_1482401d2(param_1,&local_50,param_3);
  }
  plVar4 = local_48;
  lVar6 = local_50;
  if (local_50 == 0) {
    FUN_140760c2c(param_3,&local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_50 != 0) {
      lVar6 = FUN_1482407a0(param_1,param_3);
      FUN_143af2fd8(lVar6 + 8,&local_3c);
    }
  }
  else {
    FUN_143af5e68(&local_50,local_3c);
    FUN_143af7110(lVar6,local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (((*(int *)(lVar6 + 0x5c) != 0) && (uVar2 = *(uint *)(lVar6 + 0x58), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(lVar6 + 0x5c))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))) {
        *(longlong *)(lVar3 + 0x378) = lVar6;
        plVar7 = *(longlong **)(lVar3 + 0x380);
        if (plVar7 != plVar4) {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            plVar7 = *(longlong **)(lVar3 + 0x380);
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          *(longlong **)(lVar3 + 0x380) = plVar4;
        }
      }
    }
  }
  *param_2 = local_3c;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_143aedcf6:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aedef0 FUN_143aedef0 body=371 status=ok
// SIG undefined FUN_143aedef0(void)

void FUN_143aedef0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14607d350(param_2);
  FUN_148240870(&local_30,param_1);
  uVar5 = FUN_140b631de();
  FUN_1482409e8(uVar5,&local_30,param_1);
  if (DAT_14c98e618 == 0) goto LAB_143aedf40;
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1,&local_30);
    plVar1 = local_28;
    if (local_28 == (longlong *)0x0) {
      param_1[7] = local_30;
      plVar6 = (longlong *)param_1[8];
      if (plVar6 != (longlong *)0x0) {
        param_1[8] = 0;
LAB_143aedfd2:
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
joined_r0x000143aedfc5:
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
      param_1[7] = local_30;
      plVar6 = (longlong *)param_1[8];
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
          goto joined_r0x000143aedfc5;
        }
      }
      else {
        param_1[8] = (longlong)local_28;
        if (plVar6 != (longlong *)0x0) goto LAB_143aedfd2;
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
    (**(code **)(*param_1 + 0x2f0))(param_1);
    if (DAT_14c762a60 == '\x01') {
      if (*(longlong *)(DAT_14cb0d2b0 + 0x168) != 0) {
        FUN_14129ed0a();
      }
      FUN_145a7a214();
    }
  }
  FUN_148240c7e(DAT_14c98e618 + 0x5f8,&local_30,param_1);
LAB_143aedf40:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aee064 FUN_143aee064 body=733 status=ok
// SIG undefined FUN_143aee064(void)

undefined8 FUN_143aee064(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulonglong unaff_RBX;
  undefined7 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0 < (int)param_1[0xc]) || (0 < (int)param_1[0xe])) {
    FUN_148242610(param_1);
  }
  if ((char)param_1[6] == '\x01') {
    if (param_1[0x11] == 0) {
      uVar9 = 0xffffffff;
      lVar13 = 0;
    }
    else {
      uVar6 = FUN_14825e172();
      uVar9 = (ulonglong)uVar6;
      lVar13 = param_1[0x11];
    }
    plVar12 = (longlong *)param_1[0x12];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    lVar4 = param_1[0x10];
    if ((longlong)(int)lVar4 != 0) {
      lVar10 = param_1[0xf];
      lVar14 = 0;
      unaff_RBX = uVar9;
      plVar11 = plVar12;
      do {
        cVar5 = FUN_143af7716(*(undefined8 *)(lVar10 + lVar14));
        plVar12 = plVar11;
        if ((cVar5 != '\0') &&
           (uVar6 = FUN_14825e172(*(undefined8 *)(lVar10 + lVar14)), (int)unaff_RBX < (int)uVar6)) {
          unaff_RBX = (ulonglong)uVar6;
          lVar13 = *(longlong *)(lVar10 + lVar14);
          plVar3 = *(longlong **)(lVar10 + 8 + lVar14);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          if (plVar3 == plVar11) {
            if (plVar11 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar7 = *piVar2;
                UNLOCK();
                plVar1 = plVar3;
                plVar3 = plVar11;
                goto joined_r0x000143aee170;
              }
            }
          }
          else {
            plVar12 = plVar3;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar11 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar7 = *piVar2;
                UNLOCK();
                plVar1 = plVar11;
joined_r0x000143aee170:
                plVar12 = plVar3;
                if (iVar7 == 0) {
                  (**(code **)(*plVar1 + 0x10))();
                }
              }
            }
          }
        }
        lVar14 = lVar14 + 0x10;
        plVar11 = plVar12;
      } while ((longlong)(int)lVar4 * 0x10 != lVar14);
    }
    if (lVar13 != param_1[0x11]) {
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_58 = lVar13;
      local_50 = plVar12;
      (**(code **)(*param_1 + 0x2f8))(param_1,&local_58);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  uVar8 = (undefined7)(unaff_RBX >> 8);
  uVar9 = CONCAT71(uVar8,2);
  if (*(char *)((longlong)param_1 + 0x37) == '\x01') {
    uVar9 = CONCAT71(uVar8,*(undefined1 *)((longlong)param_1 + 0x33));
  }
  lVar13 = param_1[0x23];
  if ((longlong)(int)lVar13 != 0) {
    lVar4 = param_1[0x22];
    lVar10 = 0;
    do {
      plVar12 = (longlong *)param_1[0x13];
      local_70 = *(undefined8 *)(lVar4 + lVar10);
      local_68 = *(undefined8 *)(lVar4 + 8 + lVar10);
      local_60 = *(longlong *)(lVar4 + 0x10 + lVar10);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      iVar7 = (**(code **)(*plVar12 + 8))(plVar12,uVar9 & 0xffffffff,&local_70,2);
      if (((char)param_1[6] == '\x01') &&
         (plVar12 = (longlong *)param_1[0x11], iVar7 == 2 && plVar12 != (longlong *)0x0)) {
        local_88 = *(undefined8 *)(lVar4 + lVar10);
        local_80 = *(undefined8 *)(lVar4 + 8 + lVar10);
        local_78 = *(longlong *)(lVar4 + 0x10 + lVar10);
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar12 + 8))(plVar12,uVar9 & 0xffffffff,&local_88,2);
        if (iVar7 == 2) {
          local_a0 = *(undefined8 *)(lVar4 + lVar10);
          local_98 = *(undefined8 *)(lVar4 + 8 + lVar10);
          local_90 = *(longlong *)(lVar4 + 0x10 + lVar10);
          if (local_90 != 0) {
            LOCK();
            *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
            UNLOCK();
          }
          FUN_148241782(param_1,uVar9 & 0xffffffff,&local_a0,2);
        }
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)(int)lVar13 * 0x18 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aee342 FUN_143aee342 body=528 status=ok
// SIG undefined FUN_143aee342(void)

ulonglong FUN_143aee342(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_143aee4ab;
      }
      local_28 = "CommonUI";
      uStack_20 = CONCAT35(uStack_20._5_3_,8);
      uVar2 = FUN_14001a6c0(&local_28,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      plVar5 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar2);
      goto LAB_143aee3e8;
    }
  }
LAB_143aee4ab:
  local_28 = "CommonUI";
  uStack_20 = CONCAT35(uStack_20._5_3_,8);
  uVar2 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar5 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar2,&local_28,1);
LAB_143aee3e8:
  lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
  if (*(char *)(lVar6 + 0x1a8) == '\x01') {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),(int)uStack_20 == 0);
    if (local_28 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar7 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aee554 FUN_143aee554 body=263 status=ok
// SIG undefined FUN_143aee554(void)

ulonglong FUN_143aee554(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = *param_1;
  lVar1 = param_1[4];
  plVar2 = *(longlong **)(lVar1 + 0x98);
  local_38 = param_1[1];
  local_30 = param_1[2];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined1 *)(param_1 + 3),&local_40,param_2);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar3 == '\0') {
    if ((*(char *)(lVar1 + 0x30) == '\x01') &&
       (plVar2 = *(longlong **)(lVar1 + 0x88), plVar2 != (longlong *)0x0)) {
      local_58 = *param_1;
      local_50 = param_1[1];
      local_48 = param_1[2];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined1 *)(param_1 + 3),&local_58,param_2);
      if (cVar3 != '\0') goto LAB_143aee600;
    }
    local_70 = *param_1;
    local_68 = param_1[1];
    local_60 = param_1[2];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    uVar4 = FUN_1482423ac(lVar1,*(undefined1 *)(param_1 + 3),&local_70,param_2);
    uVar5 = (ulonglong)uVar4;
  }
LAB_143aee600:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aee65c FUN_143aee65c body=198 status=ok
// SIG undefined FUN_143aee65c(void)

void FUN_143aee65c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar7 = 0;
    do {
      FUN_143af5e68(&local_50,*(undefined4 *)(lVar3 + lVar7));
      if (local_50 != 0) {
        if (*(char *)(local_50 + 0xd) == '\x01') {
          lVar6 = *(longlong *)(param_1 + 0x98);
        }
        else {
          lVar6 = *param_2;
          if (lVar6 == 0) goto LAB_143aee6ca;
        }
        FUN_143af7110(lVar6);
      }
LAB_143aee6ca:
      plVar5 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aee724 FUN_143aee724 body=389 status=ok
// SIG undefined FUN_143aee724(void)

void FUN_143aee724(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = param_2;
  FUN_143af5e68(&local_40);
  if (((((local_40 != 0) && (*(int *)(local_40 + 0x14) != 0)) &&
       (uVar2 = *(uint *)(local_40 + 0x10), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       (plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0)))) &&
     (((int)plVar4[2] == *(int *)(local_40 + 0x14) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))))) {
    FUN_148240662(param_1,&local_50,lVar3);
    if (local_50 == 0) {
      FUN_140760c2c(lVar3,&local_60);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_58 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (local_60 != 0) {
        lVar3 = FUN_1482407a0(param_1,lVar3);
        FUN_143af2fd8(lVar3 + 8,&local_2c);
      }
    }
    else {
      if (*(char *)(local_40 + 0xd) == '\x01') {
        local_50 = *(longlong *)(param_1 + 0x98);
      }
      FUN_143af7110(local_50,local_40);
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aee8aa FUN_143aee8aa body=477 status=ok
// SIG undefined FUN_143aee8aa(void)

void FUN_143aee8aa(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined4 local_24;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = param_2;
  FUN_143af5e68(&local_38);
  if (local_38 == 0) goto LAB_143aeea3c;
  if (((*(longlong *)(local_38 + 0x30) != 0) &&
      (plVar7 = *(longlong **)(local_38 + 0x38), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) {
        FUN_143af6166(0,local_24);
        goto LAB_143aeea3c;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar11);
    FUN_143af6166(*(undefined8 *)(local_38 + 0x30),local_24);
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
    goto LAB_143aeea3c;
  }
  if (*(int *)(local_38 + 0x14) == 0) {
LAB_143aeea81:
    lVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(local_38 + 0x10);
    lVar6 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(local_38 + 0x14) ||
          ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_143aeea81;
      lVar6 = *plVar7;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    puVar8 = *(uint **)(param_1 + 0x58);
    lVar9 = (longlong)*(int *)(param_1 + 0x60) << 6;
    do {
      if ((puVar8[1] == 0) || (uVar3 = *puVar8, (int)uVar3 < 0)) {
LAB_143aeea10:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((int)uVar3 < DAT_14c9647dc) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != puVar8[1])) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143aeea10;
          lVar10 = *plVar7;
        }
      }
      if (lVar10 == lVar6) {
        if (puVar8 != (uint *)0x0) {
          local_20 = &local_24;
          FUN_1482543b2(puVar8 + 2);
        }
        break;
      }
      puVar8 = puVar8 + 0x10;
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != 0);
  }
LAB_143aeea3c:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aeea88 FUN_143aeea88 body=305 status=ok
// SIG undefined FUN_143aeea88(void)

void FUN_143aeea88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = (longlong *)param_2[1];
  bVar4 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar7 = (int)plVar9[1];
    lVar8 = 0;
    do {
      if (iVar7 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_143aeead9;
      }
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar11 = iVar7 == iVar5;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar11);
    lVar8 = *param_2;
    bVar4 = false;
  }
LAB_143aeead9:
  if ((param_1[0x11] != 0) && (param_1[0x11] == lVar8)) {
    local_58 = 0;
    uStack_50 = 0;
    (**(code **)(*param_1 + 0x2f8))(param_1);
  }
  cVar6 = (**(code **)(*DAT_14cb46210 + 0xa8))();
  if (cVar6 == '\0') {
    lVar8 = param_1[0x10];
    if ((longlong)(int)lVar8 != 0) {
      lVar3 = param_1[0xf];
      lVar10 = 0;
      do {
        cVar6 = FUN_143af7716(*(undefined8 *)(lVar3 + lVar10));
        if (cVar6 != '\0') goto LAB_143aeeb53;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar8 * 0x10 != lVar10);
    }
    if ((char)param_1[6] == '\0') goto LAB_143aeeb53;
  }
  else if ((char)param_1[6] != '\x01') goto LAB_143aeeb53;
  FUN_14824117a(param_1);
LAB_143aeeb53:
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
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aeebba FUN_143aeebba body=205 status=ok
// SIG undefined FUN_143aeebba(void)

void FUN_143aeebba(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (lVar3 == *(longlong *)(param_1 + 0x88)) {
      local_28 = *param_3;
      local_20 = param_3[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_143af7cf8(lVar3,&local_28,1);
    }
    else {
      FUN_14824117a(param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aeec88 FUN_143aeec88 body=2167 status=ok
// SIG undefined FUN_143aeec88(void)

void FUN_143aeec88(longlong *param_1,char *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  char unaff_BPL;
  int iVar17;
  char unaff_R13B;
  int iVar18;
  bool bVar19;
  undefined1 auStack_148 [38];
  char local_122;
  char local_121;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  byte local_58;
  ulonglong local_48;
  undefined7 uVar16;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3 == '\0') && (cVar6 = FUN_148248ebc(param_2,(longlong)param_1 + 0x31), cVar6 != '\0'))
  goto LAB_143aef255;
  cVar6 = *(char *)((longlong)param_1 + 0x37);
  if (cVar6 == '\0') {
    cVar7 = '\x02';
  }
  else {
    cVar7 = *(char *)((longlong)param_1 + 0x33);
    unaff_BPL = *(char *)((longlong)param_1 + 0x31);
    unaff_R13B = *(char *)((longlong)param_1 + 0x32);
  }
  if ((char *)((longlong)param_1 + 0x31) != param_2) {
    *(undefined2 *)((longlong)param_1 + 0x35) = *(undefined2 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x31) = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  }
  plVar3 = (longlong *)param_1[4];
  lVar4 = plVar3[0xf];
  if (lVar4 != 0) {
    local_122 = cVar7;
    local_121 = param_3;
    FUN_140761b7a(lVar4,&local_b8);
    if (local_b8 != 0) {
      uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      plVar10 = (longlong *)FUN_140334a94(plVar3,uVar9);
      if (plVar10 != (longlong *)0x0) {
        cVar7 = *param_2;
        uVar16 = (undefined7)((ulonglong)uVar9 >> 8);
        uVar15 = CONCAT71(uVar16,cVar7);
        if ((cVar6 == '\0') || (unaff_BPL != cVar7)) {
          uVar15 = CONCAT71(uVar16,cVar7) & 0xffffffffffffff01;
          (**(code **)(*plVar10 + 0x730))(plVar10,uVar15);
        }
        if ((cVar6 == '\0') || (unaff_R13B != param_2[1])) {
          (**(code **)(*plVar10 + 0x748))
                    (plVar10,CONCAT71((int7)(uVar15 >> 8),param_2[1]) & 0xffffffffffffff01);
        }
        if ((DAT_14c762a58 == '\x01') && (local_122 != '\0' && param_2[2] == '\0')) {
          lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
          if (*(longlong *)(lVar11 + 0x1f0) == 0) {
            puVar12 = (undefined8 *)(lVar11 + 0x458);
          }
          else {
            puVar12 = (undefined8 *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
          }
          local_120 = (longlong *)*puVar12;
          local_a8 = (undefined8 *)0x0;
          local_a0 = 0;
          FUN_1446efa72(&local_a8,0,3,0x10);
          puVar12 = local_a8;
          local_a0 = 3;
          *local_a8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar11 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar11 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar11;
          local_a8[2] = lVar13;
          *local_a8 = &PTR_FUN_14ae6b860;
          local_a8[3] = 0;
          iVar18 = 0;
          if (param_1 != (longlong *)0x0) {
            uVar2 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_a8 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar18 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar18 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar18;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
              }
              LOCK();
              iVar18 = *(int *)(lVar11 + 0x10);
              bVar19 = iVar18 == 0;
              if (bVar19) {
                *(int *)(lVar11 + 0x10) = iVar17;
                iVar18 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar18 = iVar17;
              }
            }
          }
          *(int *)((longlong)puVar12 + 0x1c) = iVar18;
          puVar12[4] = FUN_1482439a8;
          local_98 = 0;
          local_90 = 0;
          FUN_14487d8d8(&local_98,&local_a8);
          local_58 = 1;
          FUN_14016fdb0(local_120,local_c0,&local_98);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
          if (local_a0 != 0) {
            if (local_a8 == (undefined8 *)0x0) goto LAB_143aeef4f;
            (**(code **)*local_a8)(local_a8,0);
            FUN_1446efa72(&local_a8,0,0,0x10);
            local_a0 = 0;
          }
          if (local_a8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_143aeef4f:
        cVar6 = (**(code **)(*plVar10 + 0xe48))(plVar10);
        if (*(char *)(lVar4 + 0x3ca) != param_2[3]) {
          *(char *)(lVar4 + 0x3ca) = param_2[3];
        }
        if (param_2[5] == '\x01') {
          bVar8 = FUN_14823ef8a(param_1);
          bVar8 = bVar8 ^ 1;
        }
        else {
          bVar8 = 0;
        }
        if (*(byte *)(lVar4 + 0x3cb) != bVar8) {
          *(byte *)(lVar4 + 0x3cb) = bVar8;
        }
        if (*(char *)(lVar4 + 0x3cc) != param_2[4]) {
          *(char *)(lVar4 + 0x3cc) = param_2[4];
        }
        if ((byte)param_2[3] < 5) {
          plVar5 = plVar3 + 0x3f;
          if ((0x19U >> ((byte)param_2[3] & 0x1f) & 1) == 0) {
            bVar8 = FUN_14823ef8a(param_1);
            plVar14 = local_b0;
            local_f0 = local_b8;
            bVar8 = param_2[5] ^ 1U | bVar8;
            if ((bVar8 & 1) != ((byte)*(uint *)((longlong)plVar10 + 0x634) & 1)) {
              *(uint *)((longlong)plVar10 + 0x634) =
                   *(uint *)((longlong)plVar10 + 0x634) & 0xfffffffe | bVar8 & 1;
            }
            local_120 = local_b0;
            if (local_b0 == (longlong *)0x0) {
              local_d0 = local_b8;
              local_c8 = (longlong *)0x0;
              FUN_140592ae6(plVar5);
              local_e0 = local_f0;
              local_d8 = (longlong *)0x0;
              FUN_140592b68(plVar5,&local_e0,2,0);
              local_e8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
              UNLOCK();
              local_d0 = local_b8;
              local_c8 = local_b0;
              LOCK();
              *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
              UNLOCK();
              local_118 = local_b8;
              FUN_140592ae6(plVar5);
              local_e0 = local_118;
              local_d8 = plVar14;
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              FUN_140592b68(plVar5,&local_e0,2,0);
              local_f0 = local_118;
              local_e8 = plVar14;
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            FUN_140592a6e(plVar5,&local_f0);
            plVar14 = (longlong *)(lVar4 + 0x28);
            cVar7 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x1a0))(plVar14);
            if (((cVar7 == '\0') &&
                (cVar7 = (**(code **)(*plVar14 + 0x198))(plVar14), cVar7 == '\0')) &&
               (cVar7 = (**(code **)(*plVar10 + 0xe48))(plVar10), cVar7 != '\0')) {
              *(byte *)((longlong)plVar3 + 0x2ac) = *(byte *)((longlong)plVar3 + 0x2ac) | 0x10;
              plVar14 = (longlong *)plVar3[0x4b];
              plVar3[0x4a] = 0;
              plVar3[0x4b] = 0;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar11 = *plVar14;
LAB_143aef451:
                  (**(code **)(lVar11 + 0x10))(plVar14);
                }
              }
            }
            else {
              plVar14 = local_b0;
              if (local_b0 == (longlong *)0x0) {
                local_100 = local_b8;
                local_f8 = (longlong *)0x0;
                FUN_1405929ee(plVar5);
              }
              else {
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
                local_100 = local_b8;
                local_f8 = local_b0;
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
                FUN_1405929ee(plVar5);
                LOCK();
                plVar5 = plVar14 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    lVar11 = *plVar14;
                    goto LAB_143aef451;
                  }
                }
              }
            }
            plVar14 = local_120;
            if (local_120 != (longlong *)0x0) {
LAB_143aef053:
              LOCK();
              plVar5 = plVar14 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar11 = *plVar14;
LAB_143aef099:
                  (**(code **)(lVar11 + 0x10))(plVar14);
                }
              }
            }
          }
          else {
            if ((*(uint *)((longlong)plVar10 + 0x634) & 1) == 0) {
              *(uint *)((longlong)plVar10 + 0x634) = *(uint *)((longlong)plVar10 + 0x634) | 1;
            }
            plVar14 = (longlong *)plVar3[0x47];
            plVar3[0x46] = 0;
            plVar3[0x47] = 0;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))();
              }
            }
            *(uint *)((longlong)plVar3 + 0x2ac) =
                 (*(uint *)((longlong)plVar3 + 0x2ac) & 0xffffffde) + 1;
            cVar7 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x1a0))(lVar4 + 0x28);
            plVar14 = local_b0;
            if (cVar7 == '\0') {
              *(byte *)((longlong)plVar3 + 0x2ac) = *(byte *)((longlong)plVar3 + 0x2ac) | 0x10;
              plVar14 = (longlong *)plVar3[0x4b];
              plVar3[0x4a] = 0;
              plVar3[0x4b] = 0;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar11 = *plVar14;
                  goto LAB_143aef099;
                }
              }
            }
            else {
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
                local_110 = local_b8;
                local_108 = local_b0;
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
                FUN_1405929ee(plVar5);
                goto LAB_143aef053;
              }
              local_110 = local_b8;
              local_108 = (longlong *)0x0;
              FUN_1405929ee(plVar5);
            }
          }
        }
        if (((cVar6 == '\0' && local_121 == '\0') &&
            (cVar6 = (**(code **)(*plVar10 + 0xe48))(plVar10), cVar6 != '\0')) &&
           (lVar11 = FUN_140e94dc2(param_1[4]), *(char *)(lVar11 + 0x91) != '\x02')) {
          (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_a8);
          plVar10 = *(longlong **)(lVar4 + 0x138);
          if (plVar10 != (longlong *)0x0) {
            iVar18 = (int)plVar10[1];
            do {
              if (iVar18 == 0) goto LAB_143aef1f4;
              LOCK();
              iVar17 = (int)plVar10[1];
              bVar19 = iVar18 == iVar17;
              if (bVar19) {
                *(int *)(plVar10 + 1) = iVar18 + 1;
                iVar17 = iVar18;
              }
              iVar18 = iVar17;
              UNLOCK();
            } while (!bVar19);
            if ((local_a8 != (undefined8 *)0x0) &&
               (plVar5 = *(longlong **)(lVar4 + 0x130), plVar5 != (longlong *)0x0)) {
              (**(code **)(*plVar5 + 0x18))(plVar5,&local_98,plVar3);
              FUN_141653418(local_a8,10,
                            (int)((float)local_98 * 0.5 * local_7c + local_98._4_4_ * 0.5 * local_74
                                 + local_6c),
                            (int)(local_78 * (float)local_98 * 0.5 + local_70 * local_98._4_4_ * 0.5
                                 + local_68));
            }
            LOCK();
            plVar3 = plVar10 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
LAB_143aef1f4:
          plVar3 = (longlong *)CONCAT44(uStack_9c,local_a0);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar3 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
    }
    cVar7 = local_122;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        cVar7 = local_122;
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          cVar7 = local_122;
        }
      }
    }
  }
  if (cVar7 != param_2[2]) {
    FUN_14825cab4(param_1 + 0x1c);
  }
LAB_143aef255:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aef500 FUN_143aef500 body=658 status=ok
// SIG undefined FUN_143aef500(void)

void FUN_143aef500(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *_Str;
  undefined2 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_8d;
  uint local_8c;
  ulonglong local_88;
  longlong local_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_143aef72b;
  uVar6 = 0xffffffff;
  local_8d = 1;
  if ((int)param_1[1] < 1) {
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
LAB_143aef5bd:
    uVar4 = 1;
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)*param_1;
    }
    uVar5 = FUN_14052c20c(puVar8);
    uVar11 = (ulonglong)uVar5;
    if ((int)param_1[1] < 2) goto LAB_143aef5bd;
    if (*(int *)(*param_1 + 0x18) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(*param_1 + 0x10);
    }
    uVar4 = FUN_14052c20c(puVar8);
    if (2 < (int)param_1[1]) {
      if (*(int *)(*param_1 + 0x28) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(*param_1 + 0x20);
      }
      local_8d = FUN_14052c20c(puVar8);
      if (3 < (int)param_1[1]) {
        if (*(int *)(*param_1 + 0x38) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(*param_1 + 0x30);
        }
        uVar6 = _wtoi(_Str);
      }
    }
  }
  lVar12 = *(longlong *)(param_2 + 0x1f0);
  if (0 < *(int *)(lVar12 + 0x40)) {
    uVar13 = (ulonglong)uVar6;
    uVar10 = 0;
    local_8c = uVar6;
    local_88 = uVar13;
    local_80 = lVar12;
    do {
      if (uVar6 == 0xffffffff || uVar10 == uVar13) {
        lVar7 = FUN_1403f18c8(*(undefined8 *)(*(longlong *)(lVar12 + 0x38) + uVar10 * 8));
        if (lVar7 != 0) {
          local_78[0] = 0;
          local_78[1] = 0;
          if (*(longlong *)(lVar7 + 0x88) != 0) {
            FUN_1400020e8(local_78,L"** Active Root **",0x11);
            local_a0 = local_8d;
            local_a8 = uVar4;
            FUN_143af7806(*(undefined8 *)(lVar7 + 0x88),local_78,0,uVar11 & 0xffffffff);
            FUN_1400020e8(local_78,L"\n*****************\n",0x13);
          }
          iVar1 = *(int *)(lVar7 + 0x80);
          if ((longlong)iVar1 != 0) {
            lVar12 = *(longlong *)(lVar7 + 0x78);
            lVar9 = 0;
            do {
              lVar2 = *(longlong *)(lVar12 + lVar9);
              if (*(longlong *)(lVar7 + 0x88) != lVar2 || *(longlong *)(lVar7 + 0x88) == 0) {
                local_a0 = local_8d;
                local_a8 = uVar4;
                FUN_143af7806(lVar2,local_78,0,uVar11 & 0xffffffff);
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar9);
          }
          if ((char)uVar11 != '\0') {
            uVar3 = *(undefined8 *)(lVar7 + 0x98);
            FUN_1400020e8(local_78,L"\nPersistent Action Collection:");
            FUN_143af7294(uVar3,local_78);
          }
          lVar12 = local_80;
          uVar13 = local_88;
          uVar6 = local_8c;
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)*(int *)(lVar12 + 0x40));
  }
LAB_143aef72b:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aef793 FUN_143aef793 body=69 status=ok
// SIG undefined FUN_143aef793(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aef793(void)

{
  _DAT_14cb46288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aef7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46290,1);
  return;
}



// FUNCTION 143aef7d8 FUN_143aef7d8 body=849 status=ok
// SIG undefined FUN_143aef7d8(void)

void FUN_143aef7d8(longlong param_1)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  undefined2 *puVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  longlong local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb462b0) && (FUN_144b3d300(&DAT_14cb462b0), DAT_14cb462b0 == -1)) {
      DAT_14cb462a8 = FUN_148216387();
      _Init_thread_footer(&DAT_14cb462b0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb462c0) && (FUN_144b3d300(&DAT_14cb462c0), DAT_14cb462c0 == -1)) {
      DAT_14cb462b8 = FUN_147863ff6();
      _Init_thread_footer(&DAT_14cb462c0);
    }
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    if (lVar2 != 0) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_68 = (void *)0x0;
      local_60 = *(int *)(lVar2 + 0x40);
      lVar5 = (longlong)local_60;
      _Src = *(void **)(lVar2 + 0x38);
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_140e62166(&local_68,local_60,0);
        memcpy(local_68,_Src,lVar5 << 3);
        if (0 < local_60) {
          uVar7 = 0;
          do {
            lVar2 = *(longlong *)((longlong)local_68 + uVar7 * 8);
            if (lVar2 != 0) {
              uVar1 = *(undefined4 *)(lVar2 + 0xe0);
              lVar2 = FUN_1403f18c8();
              if (lVar2 == 0) {
                pwVar4 = L"LocalPlayer [User %d, Controller %d] has no ActionRouter\n";
LAB_143aefa17:
                FUN_140002266(&local_78,pwVar4,uVar7 & 0xffffffff,uVar1);
                iVar6 = local_70 + -1;
                if (local_70 == 0) {
                  iVar6 = 0;
                }
                FUN_1400020e8(local_58,local_78,iVar6);
              }
              else {
                if (*(char *)(lVar2 + 0x37) != '\x01') {
                  pwVar4 = L"LocalPlayer [User %d, ControllerId %d] no ActiveInputConfig\n";
                  goto LAB_143aefa17;
                }
                FUN_1401cfad2(DAT_14cb462a8,&local_78,*(undefined1 *)(lVar2 + 0x33));
                FUN_1401cfad2(DAT_14cb462b8,&local_88,*(undefined1 *)(lVar2 + 0x34));
                puVar3 = &DAT_149e06338;
                if (*(char *)(lVar2 + 0x36) != '\0') {
                  puVar3 = &DAT_149e06384;
                }
                FUN_140056680(&local_98,puVar3);
                local_b8 = &DAT_149dfb77a;
                if (local_90 != 0) {
                  local_b8 = local_98;
                }
                local_c0 = &DAT_149dfb77a;
                if (local_80 != 0) {
                  local_c0 = local_88;
                }
                local_c8 = &DAT_149dfb77a;
                if (local_70 != 0) {
                  local_c8 = local_78;
                }
                FUN_140002266(&local_a8,
                              L"\tLocalPlayer[User %d, ControllerId %d] ActiveInputConfig: Input Mode [%s] Mouse Capture [%s] Hide Cursor During Capture [%s]\n"
                              ,uVar7 & 0xffffffff,uVar1);
                iVar6 = local_a0 + -1;
                if (local_a0 == 0) {
                  iVar6 = 0;
                }
                FUN_1400020e8(local_58,local_a8,iVar6);
                if (local_a8 != 0) {
                  FUN_1400020a8();
                }
                if (local_98 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_88 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_78 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            uVar7 = uVar7 + 1;
          } while ((longlong)uVar7 < (longlong)local_60);
        }
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_58[2] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aefb2a FUN_143aefb2a body=69 status=ok
// SIG undefined FUN_143aefb2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aefb2a(void)

{
  _DAT_14cb46298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aefb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb462a0,1);
  return;
}



// FUNCTION 143aefb70 FUN_143aefb70 body=48 status=ok
// SIG undefined FUN_143aefb70(void)

longlong FUN_143aefb70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_1414dee26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefba0 FUN_143aefba0 body=48 status=ok
// SIG undefined FUN_143aefba0(void)

longlong FUN_143aefba0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefbd0 FUN_143aefbd0 body=48 status=ok
// SIG undefined FUN_143aefbd0(void)

longlong FUN_143aefbd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145b21608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefc00 FUN_143aefc00 body=48 status=ok
// SIG undefined FUN_143aefc00(void)

longlong FUN_143aefc00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_141510006(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefc30 FUN_143aefc30 body=48 status=ok
// SIG undefined FUN_143aefc30(void)

longlong FUN_143aefc30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefc60 FUN_143aefc60 body=48 status=ok
// SIG undefined FUN_143aefc60(void)

longlong FUN_143aefc60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x248;
  FUN_14597723a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefc90 FUN_143aefc90 body=38 status=ok
// SIG undefined FUN_143aefc90(void)

undefined8 FUN_143aefc90(undefined8 param_1,int param_2)

{
  FUN_1414c321a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefcb6 FUN_143aefcb6 body=45 status=ok
// SIG undefined FUN_143aefcb6(void)

longlong FUN_143aefcb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefce4 FUN_143aefce4 body=48 status=ok
// SIG undefined FUN_143aefce4(void)

longlong FUN_143aefce4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefd1c FUN_143aefd1c body=48 status=ok
// SIG undefined FUN_143aefd1c(void)

longlong FUN_143aefd1c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x13b0;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefdc4 FUN_143aefdc4 body=48 status=ok
// SIG undefined FUN_143aefdc4(void)

longlong FUN_143aefdc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_148247138(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143aefdf4 FUN_143aefdf4 body=2732 status=ok
// SIG undefined FUN_143aefdf4(void)

undefined8 *
FUN_143aefdf4(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,float param_5,
             char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  int iVar6;
  undefined1 uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 unaff_RBP;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_6a8 [32];
  undefined1 *local_688;
  undefined4 local_678;
  undefined1 local_671;
  undefined1 local_670 [8];
  longlong *local_668;
  undefined1 local_651;
  undefined1 local_650 [8];
  longlong *local_648;
  undefined1 *local_638;
  undefined1 *puStack_630;
  undefined1 *local_628;
  undefined1 *puStack_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined8 *local_610;
  ulonglong uStack_608;
  longlong local_600;
  undefined1 local_5f8;
  undefined8 *local_5f0;
  ulonglong uStack_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  float local_5d0;
  undefined1 local_5cc;
  undefined8 *local_5c8;
  ulonglong uStack_5c0;
  float local_5b8;
  undefined1 local_5b4;
  undefined8 *local_5b0;
  ulonglong uStack_5a8;
  undefined8 local_5a0;
  longlong *local_598;
  undefined1 local_590 [8];
  longlong *local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  void *local_568;
  int local_560;
  undefined4 local_55c;
  undefined2 local_554;
  undefined1 local_552;
  undefined1 local_550 [424];
  longlong local_3a8;
  undefined1 local_3a0;
  undefined8 *local_398;
  int local_390;
  undefined1 *local_388;
  undefined1 *puStack_380;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 *local_370;
  int local_368;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  void *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined1 *local_170;
  undefined8 local_140;
  longlong *local_138;
  float local_130;
  undefined1 local_12c;
  undefined8 *local_128;
  int local_120;
  float local_118;
  undefined1 local_114;
  undefined8 *local_110;
  int local_108;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  lVar10 = FUN_1401fe4bc(param_3 + 0x20);
  if (lVar10 == 0) {
    *param_2 = DAT_14c98dec8;
    lVar10 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar10 != 0) {
      LOCK();
      piVar2 = (int *)(lVar10 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    goto LAB_143af0529;
  }
  *(float *)(param_1 + 0x2a0) = (float)*(double *)(param_3 + 0x10);
  *(float *)(param_1 + 0x2a4) = (float)*(double *)(param_3 + 0x18);
  local_580 = *(undefined8 *)(param_3 + 0x20);
  local_578 = *(undefined4 *)(param_3 + 0x28);
  uStack_574 = *(undefined4 *)(param_3 + 0x2c);
  uStack_570 = *(undefined4 *)(param_3 + 0x30);
  uStack_56c = *(undefined4 *)(param_3 + 0x34);
  local_568 = (void *)0x0;
  local_560 = *(int *)(param_3 + 0x40);
  lVar10 = (longlong)local_560;
  pvVar5 = *(void **)(param_3 + 0x38);
  if (lVar10 == 0) {
    local_55c = 0;
  }
  else {
    FUN_1446dd670(&local_568,local_560,0);
    memcpy(local_568,pvVar5,lVar10 * 2);
  }
  lVar10 = param_1 + 0x280;
  lVar11 = FUN_1401fe4bc(&local_580);
  if (lVar11 == 0) {
    plVar14 = *(longlong **)(param_1 + 0x10);
    uVar13 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar14 == (longlong *)0x0) {
LAB_143af057d:
      uVar12 = 0;
      plVar14 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar14[1];
      do {
        if (iVar9 == 0) goto LAB_143af057d;
        LOCK();
        iVar6 = (int)plVar14[1];
        bVar16 = iVar9 == iVar6;
        if (bVar16) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar16);
      uVar12 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar14 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar14 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      uVar13 = 0;
    }
    lVar11 = FUN_14050fd64();
    pvVar5 = local_568;
    if ((char)uVar13 == '\0') {
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
    }
    local_300 = local_580;
    local_2f8 = local_578;
    uStack_2f4 = uStack_574;
    uStack_2f0 = uStack_570;
    uStack_2ec = uStack_56c;
    local_2e8 = (void *)0x0;
    lVar15 = (longlong)local_560;
    local_2e0 = local_560;
    local_678 = uVar13;
    local_318 = param_1;
    local_310 = uVar12;
    local_308 = plVar14;
    if (lVar15 == 0) {
      local_2dc = 0;
    }
    else {
      FUN_1446dd670(&local_2e8,local_560,0);
      memcpy(local_2e8,pvVar5,lVar15 * 2);
    }
    FUN_148247826(lVar11 + 0x1e8,local_590,&local_578,&local_318);
    uVar13 = local_678;
    if (local_588 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_588 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_588)(local_588);
        LOCK();
        piVar2 = (int *)((longlong)local_588 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_588 + 0x10))(local_588);
        }
      }
    }
    if (local_2e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_308 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_308 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_308 + 0x10))();
      }
    }
    if ((char)uVar13 == '\0') {
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  else {
    uVar12 = FUN_1401fe4bc(&local_580);
    FUN_140648376(lVar10,uVar12);
  }
  lVar11 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar12 = *(undefined8 *)(lVar11 + 0x30);
    plVar14 = *(longlong **)(lVar11 + 0x38);
  }
  else {
    uVar12 = *(undefined8 *)(lVar11 + 0x20);
    plVar14 = *(longlong **)(lVar11 + 0x28);
  }
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_1408634be(uVar12,param_4 + 8,0x3f800000);
  fVar17 = (float)uVar8;
  fVar18 = param_5 * fVar17;
  if (*(float *)(param_1 + 0x2a4) <= param_5 * fVar17) {
    fVar18 = *(float *)(param_1 + 0x2a4);
  }
  *(float *)(param_1 + 0x2a0) = fVar18;
  *(float *)(param_1 + 0x2a4) = fVar18;
  FUN_140a53a96(&local_318);
  local_170 = &DAT_200000002;
  local_5b4 = 1;
  local_114 = 1;
  local_5b0 = (undefined8 *)0x0;
  uStack_5a8 = 0;
  local_5b8 = fVar17;
  local_118 = fVar17;
  if (local_108 == 0) {
LAB_143af0015:
    if (local_110 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_110 != (undefined8 *)0x0) {
    (**(code **)*local_110)(local_110,0);
    FUN_1446efa72(&local_110,0,0,0x10);
    local_108 = 0;
    goto LAB_143af0015;
  }
  local_110 = (undefined8 *)0x0;
  local_108 = 0;
  if ((int)uStack_5a8 == 0) {
LAB_143af0081:
    if (local_5b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_5b0 != (undefined8 *)0x0) {
    (**(code **)*local_5b0)(local_5b0,0);
    FUN_1446efa72(&local_5b0,0,0,0x10);
    uStack_5a8 = uStack_5a8 & 0xffffffff00000000;
    goto LAB_143af0081;
  }
  local_5cc = 1;
  local_12c = 1;
  local_5c8 = (undefined8 *)0x0;
  uStack_5c0 = 0;
  local_5d0 = fVar17;
  local_130 = fVar17;
  if (local_120 == 0) {
LAB_143af00ca:
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_128 != (undefined8 *)0x0) {
    (**(code **)*local_128)(local_128,0);
    FUN_1446efa72(&local_128,0,0,0x10);
    local_120 = 0;
    goto LAB_143af00ca;
  }
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  if ((int)uStack_5c0 == 0) {
LAB_143af0136:
    if (local_5c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_5c8 != (undefined8 *)0x0) {
    (**(code **)*local_5c8)(local_5c8,0);
    FUN_1446efa72(&local_5c8,0,0,0x10);
    uStack_5c0 = uStack_5c0 & 0xffffffff00000000;
    goto LAB_143af0136;
  }
  FUN_140a53334(local_550);
  local_5f8 = 1;
  local_3a0 = 1;
  local_5f0 = (undefined8 *)0x0;
  uStack_5e8 = 0;
  local_600 = lVar10;
  local_3a8 = lVar10;
  if (local_390 == 0) {
LAB_143af0187:
    if (local_398 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_398 != (undefined8 *)0x0) {
    (**(code **)*local_398)(local_398,0);
    FUN_1446efa72(&local_398,0,0,0x10);
    local_390 = 0;
    goto LAB_143af0187;
  }
  local_398 = (undefined8 *)0x0;
  local_390 = 0;
  if ((int)uStack_5e8 == 0) {
LAB_143af01fb:
    if (local_5f0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_5f0 != (undefined8 *)0x0) {
    (**(code **)*local_5f0)(local_5f0,0);
    FUN_1446efa72(&local_5f0,0,0,0x10);
    uStack_5e8 = uStack_5e8 & 0xffffffff00000000;
    goto LAB_143af01fb;
  }
  if (param_6 == '\0') {
    local_638 = &DAT_3f8000003f800000;
    puStack_630 = &DAT_3f8000003f800000;
    uVar7 = 0;
  }
  else {
    local_638 = *(undefined1 **)(param_4 + 0x68);
    puStack_630 = *(undefined1 **)(param_4 + 0x70);
    uVar7 = *(undefined1 *)(param_4 + 0x78);
    local_552 = *(undefined1 *)(param_4 + 0x7b);
    local_554 = *(undefined2 *)(param_4 + 0x79);
  }
  local_628 = local_638;
  puStack_620 = puStack_630;
  local_618 = CONCAT13(local_552,CONCAT21(local_554,uVar7));
  local_614 = 1;
  local_388 = local_638;
  puStack_380 = puStack_630;
  local_378 = local_618;
  local_374 = 1;
  local_610 = (undefined8 *)0x0;
  uStack_608 = 0;
  if (local_368 == 0) {
LAB_143af02ac:
    if (local_370 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_370 != (undefined8 *)0x0) {
    (**(code **)*local_370)(local_370,0);
    FUN_1446efa72(&local_370,0,0,0x10);
    local_368 = 0;
    goto LAB_143af02ac;
  }
  local_370 = (undefined8 *)0x0;
  local_368 = 0;
  if ((int)uStack_608 == 0) {
LAB_143af0317:
    if (local_610 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_610 != (undefined8 *)0x0) {
    (**(code **)*local_610)(local_610,0);
    FUN_1446efa72(&local_610,0,0,0x10);
    uStack_608 = uStack_608 & 0xffffffff00000000;
    goto LAB_143af0317;
  }
  local_688 = &local_651;
  FUN_140a554b8(local_650,"SImage",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonRichTextBlock.cpp",
                0x124);
  FUN_140a52c70(local_650,&local_5e0,local_550);
  plVar3 = local_138;
  plVar4 = local_5d8;
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5d8 + 1) = (int)local_5d8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5d8 + 1) = (int)local_5d8[1] + 1;
    UNLOCK();
  }
  local_140 = local_5e0;
  local_138 = local_5d8;
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
  local_688 = &local_671;
  FUN_140a53d66(local_670,&DAT_149efe19f,
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonRichTextBlock.cpp",
                0x11e);
  FUN_140a50bf4(local_670,&local_5a0,&local_318);
  *param_2 = local_5a0;
  param_2[1] = local_598;
  if (local_598 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_598 + 1) = (int)local_598[1] + 1;
    UNLOCK();
    if (local_598 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_598 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_598)(local_598);
        LOCK();
        piVar2 = (int *)((longlong)local_598 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_598 + 0x10))(local_598);
        }
      }
    }
  }
  if (local_668 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_668 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_668)(local_668);
      LOCK();
      piVar2 = (int *)((longlong)local_668 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_668 + 0x10))(local_668);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5d8)(local_5d8);
      LOCK();
      piVar2 = (int *)((longlong)local_5d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5d8 + 0x10))(local_5d8);
      }
    }
  }
  if (local_648 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_648 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_648)(local_648);
      LOCK();
      piVar2 = (int *)((longlong)local_648 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_648 + 0x10))(local_648);
      }
    }
  }
  FUN_140a55a86(local_550);
  FUN_140a5660c(&local_318);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_568 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143af0529:
  if ((local_70 ^ (ulonglong)auStack_6a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143af08da FUN_143af08da body=494 status=ok
// SIG undefined FUN_143af08da(void)

void FUN_143af08da(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      param_1 = param_1 + 2;
      FUN_1401fe4bc(param_1);
      lVar2 = FUN_1401fe4bc(param_1);
      if (lVar2 != 0) {
        if (DAT_14cb0b4f0 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_14580b774;
          local_58 = &LAB_147d6e27b;
          local_60 = &LAB_140307be8;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x158;
          FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        }
        if ((*(int *)(DAT_14cb0b4f0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) == DAT_14cb0b4f0 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
        }
      }
      lVar2 = FUN_1401fe4bc(param_1);
      if (lVar2 != 0) {
        lVar3 = FUN_1402d2740();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af0afc FUN_143af0afc body=174 status=ok
// SIG undefined FUN_143af0afc(void)

undefined8 * FUN_143af0afc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14ae68db0;
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
  puVar5[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar5 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 5,iVar1,0);
    memcpy((void *)puVar5[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar5 + 7) = *(undefined1 *)(param_1 + 0x38);
  return puVar5 + 1;
}



// FUNCTION 143af0bb0 FUN_143af0bb0 body=29 status=ok
// SIG undefined FUN_143af0bb0(void)

void FUN_143af0bb0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143af0bce FUN_143af0bce body=57 status=ok
// SIG undefined FUN_143af0bce(void)

undefined8 * FUN_143af0bce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae68db0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af0c08 FUN_143af0c08 body=2865 status=ok
// SIG undefined FUN_143af0c08(void)

void FUN_143af0c08(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
     || (((plVar12 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar12 == (longlong *)0x0 || (*(uint *)(plVar12 + 2) != param_1[1])) ||
         (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 ||
          (plVar12 = (longlong *)*plVar12, plVar12 == (longlong *)0x0)))))) goto LAB_143af0ee4;
  if (((param_1[3] == 0) || (uVar3 = param_1[2], (int)uVar3 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar3 ||
      ((((plVar8 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != param_1[3])) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) || (lVar10 = *plVar8, lVar10 == 0)))))) {
    if (*(longlong *)(param_1 + 4) == 0) goto LAB_143af0ee4;
    lVar10 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar10 == 0) || (cVar2 == '\0')) {
      if (lVar10 == 0) {
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_143af0ee4;
      }
      uVar3 = *(uint *)(lVar10 + 0xc);
LAB_143af0ea0:
      param_1[2] = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(lVar4 + 0x10) = uVar11;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar13) {
          uVar3 = uVar11;
        }
      }
      param_1[3] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar10 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_143af0ea0;
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0) goto LAB_143af0ee4;
  }
  if (DAT_14c949118 == 0) {
    local_60 = FUN_140631fbe;
    lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar4;
    FUN_1446f470e(local_58,L"Class",1);
    local_88 = &LAB_146891e90;
    local_90 = (code *)&LAB_146273097;
    local_a0 = L"Engine";
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
    local_a8 = 0x20;
    local_b0 = 0x10000000;
    local_b8._0_4_ = 8;
    local_80 = &local_60;
    FUN_14574b4b2(lVar4);
    DAT_14c949118 = lVar4;
    if (DAT_14c951858 == 0) {
      local_80 = &local_50;
      local_50 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1468c5283;
      local_90 = FUN_142809da0;
      local_98 = L"Engine";
      local_a0 = (wchar_t *)0x400000000;
      local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
      local_b0 = 8;
      local_b8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = DAT_14c951858;
    lVar4 = DAT_14c949118;
    uVar7 = FUN_1449e2fb2();
    local_b8 = L"Class";
    FUN_14574b446(uVar7,lVar4,lVar5,L"/Script/CoreUObject");
  }
  if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
     ((lVar4 = FUN_1405e2bf2(), lVar4 == 0 ||
      ((*(int *)(lVar10 + 0x38) < *(int *)(lVar4 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)))))) goto LAB_143af0ee4;
  uVar3 = param_1[3];
  if (plVar12[0x44] != 0) {
    lVar10 = *(longlong *)(plVar12[0x44] + 0x10);
    if ((((uVar3 == 0) || (uVar11 = param_1[2], (int)uVar11 < 0)) || (DAT_14c9647dc <= (int)uVar11))
       || (((plVar8 = (longlong *)
                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
            plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != uVar3)) ||
           (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar4 = *plVar8, lVar4 == 0)))))) {
      if (*(longlong *)(param_1 + 4) != 0) {
        lVar4 = FUN_140007850();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar4 == 0) || (cVar2 == '\0')) {
          if (lVar4 != 0) {
            uVar3 = *(uint *)(lVar4 + 0xc);
            goto LAB_143af0f86;
          }
          param_1[2] = 0;
          param_1[3] = 0;
        }
        else {
          uVar3 = *(uint *)(lVar4 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
LAB_143af0f86:
            param_1[2] = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            uVar3 = *(uint *)(lVar5 + 0x10);
            if (*(uint *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar1 = DAT_14c964868 + 1;
              UNLOCK();
              uVar11 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar1;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar11);
              }
              LOCK();
              uVar3 = *(uint *)(lVar5 + 0x10);
              bVar13 = uVar3 == 0;
              if (bVar13) {
                *(uint *)(lVar5 + 0x10) = uVar11;
                uVar3 = 0;
              }
              UNLOCK();
              if (bVar13) {
                uVar3 = uVar11;
              }
            }
            param_1[3] = uVar3;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_143af0dd1;
        }
      }
LAB_143af0fca:
      lVar9 = 0;
    }
    else {
LAB_143af0dd1:
      if (DAT_14c949118 == 0) {
        local_60 = FUN_140631fbe;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar5;
        FUN_1446f470e(local_58,L"Class",1);
        local_88 = &LAB_146891e90;
        local_90 = (code *)&LAB_146273097;
        local_a0 = L"Engine";
        local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
        local_a8 = 0x20;
        local_b0 = 0x10000000;
        local_b8._0_4_ = 8;
        local_80 = &local_60;
        FUN_14574b4b2(lVar5);
        DAT_14c949118 = lVar5;
        if (DAT_14c951858 == 0) {
          local_80 = &local_50;
          local_50 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_14081d0ea;
          local_88 = &LAB_1468c5283;
          local_90 = FUN_142809da0;
          local_98 = L"Engine";
          local_a0 = (wchar_t *)0x400000000;
          local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
          local_b0 = 8;
          local_b8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar9 = DAT_14c951858;
        lVar5 = DAT_14c949118;
        uVar7 = FUN_1449e2fb2();
        local_b8 = L"Class";
        FUN_14574b446(uVar7,lVar5,lVar9,L"/Script/CoreUObject");
      }
      if ((((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
          (lVar5 = FUN_1405e2bf2(), lVar5 == 0)) ||
         (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_143af0fca;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar9 = lVar4;
      }
    }
    if (lVar10 == lVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
    uVar3 = param_1[3];
  }
  if (((((uVar3 == 0) || (uVar11 = param_1[2], (int)uVar11 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar11 ||
        ((plVar8 = (longlong *)
                   ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != uVar3)))))) ||
      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
     (pcVar6 = (code *)*plVar8, pcVar6 == (code *)0x0)) {
    if (*(longlong *)(param_1 + 4) != 0) {
      pcVar6 = (code *)FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((pcVar6 == (code *)0x0) || (cVar2 == '\0')) {
        if (pcVar6 != (code *)0x0) {
          uVar3 = *(uint *)(pcVar6 + 0xc);
          goto LAB_143af10fa;
        }
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        uVar3 = *(uint *)(pcVar6 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
LAB_143af10fa:
          param_1[2] = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          uVar3 = *(uint *)(lVar10 + 0x10);
          if (*(uint *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar1 = DAT_14c964868 + 1;
            UNLOCK();
            uVar11 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar1;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar11);
            }
            LOCK();
            uVar3 = *(uint *)(lVar10 + 0x10);
            bVar13 = uVar3 == 0;
            if (bVar13) {
              *(uint *)(lVar10 + 0x10) = uVar11;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar13) {
              uVar3 = uVar11;
            }
          }
          param_1[3] = uVar3;
        }
        if ((*(uint *)(pcVar6 + 8) >> 0x1e & 1) == 0) goto LAB_143af113a;
      }
    }
LAB_143af11af:
    local_50 = (code *)0x0;
  }
  else {
LAB_143af113a:
    if (DAT_14c949118 == 0) {
      local_60 = FUN_140631fbe;
      lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar10;
      FUN_1446f470e(local_58,L"Class",1);
      local_88 = &LAB_146891e90;
      local_90 = (code *)&LAB_146273097;
      local_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x20;
      local_b0 = 0x10000000;
      local_b8._0_4_ = 8;
      local_80 = &local_60;
      FUN_14574b4b2(lVar10);
      DAT_14c949118 = lVar10;
      if (DAT_14c951858 == 0) {
        local_80 = &local_50;
        local_50 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_1468c5283;
        local_90 = FUN_142809da0;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x400000000;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
        local_b0 = 8;
        local_b8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = DAT_14c951858;
      lVar10 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_b8 = L"Class";
      FUN_14574b446(uVar7,lVar10,lVar4,L"/Script/CoreUObject");
    }
    if ((((*(int *)(*(longlong *)(pcVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar10 = FUN_1405e2bf2(), lVar10 == 0)) ||
       (*(int *)(pcVar6 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_143af11af;
    local_50 = (code *)0x0;
    if (*(longlong *)(*(longlong *)(pcVar6 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30) {
      local_50 = pcVar6;
    }
    if ((local_50 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  uVar7 = (**(code **)(*plVar12 + 0x2c8))(plVar12);
  uVar7 = FUN_143335f3f(uVar7,&local_50,0);
  FUN_14822bf18(plVar12,uVar7);
LAB_143af0ee4:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af1758 FUN_143af1758 body=155 status=ok
// SIG undefined FUN_143af1758(void)

undefined8 * FUN_143af1758(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14ae68e40;
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
  puVar5[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar5 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 5,iVar1,0);
    memcpy((void *)puVar5[5],_Src,(longlong)iVar1 * 2);
  }
  return puVar5 + 1;
}



// FUNCTION 143af17fa FUN_143af17fa body=29 status=ok
// SIG undefined FUN_143af17fa(void)

void FUN_143af17fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143af1818 FUN_143af1818 body=57 status=ok
// SIG undefined FUN_143af1818(void)

undefined8 * FUN_143af1818(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae68e40;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af1852 FUN_143af1852 body=125 status=ok
// SIG undefined FUN_143af1852(void)

undefined8 * FUN_143af1852(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ae68e60;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143af18b1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143af18b1:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af18e4 FUN_143af18e4 body=205 status=ok
// SIG undefined FUN_143af18e4(void)

void FUN_143af18e4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ae68e60;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14009d848(puVar2 + 4,param_1 + 0x20);
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar3;
  *(undefined4 *)(puVar2 + 8) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uVar5;
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  return;
}



// FUNCTION 143af19b2 FUN_143af19b2 body=205 status=ok
// SIG undefined FUN_143af19b2(void)

void FUN_143af19b2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ae68e60;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14009d848(puVar2 + 4,param_1 + 0x20);
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar3;
  *(undefined4 *)(puVar2 + 8) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uVar5;
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  return;
}



// FUNCTION 143af1a80 FUN_143af1a80 body=245 status=ok
// SIG undefined FUN_143af1a80(void)

void FUN_143af1a80(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _LIST_ENTRY **pp_Var7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ae68e60;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  p_Var2->Flags = 0;
  FUN_14009d848(&p_Var2->EntryCount,param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var2[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = uVar6;
  p_Var2[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  p_Var2[1].EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2[1].ContentionCount = 0;
  }
  else {
    pp_Var7 = &p_Var2[1].ProcessLocksList.Blink;
    FUN_1446dd670(pp_Var7,DVar1,0);
    memcpy(*pp_Var7,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143af1b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143af1b80 FUN_143af1b80 body=20 status=ok
// SIG undefined FUN_143af1b80(void)

undefined1 FUN_143af1b80(longlong param_1)

{
  FUN_143af1b94(param_1 + 0x18);
  return 1;
}


